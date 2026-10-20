/*
 * Copyright 2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_qspi.h"
#include "fsl_flexcomm.h"

/*******************************************************************************
 * Performance Optimization Notice
 ******************************************************************************/

/*
 * IMPORTANT: This driver should be compiled with maximum optimization (-O3 or equivalent)
 *
 * This QSPI driver contains performance-critical code paths that require aggressive
 * compiler optimization for reliable operation at high SPI clock frequencies.
 *
 * Critical Performance Requirements:
 *
 * 1. QSPI Protocol Timing Requirements:
 *    - QSPI operates at very high clock frequencies (tens of MHz)
 *    - The slave must respond to master requests within strict timing windows
 *    - Any delay in FIFO servicing can cause protocol violations or data loss
 *
 * 2. FIFO Overflow/Underflow Prevention:
 *    - The QSPI FIFO has only 32 entries (128 bytes total)
 *    - At high SPI clock rates, the FIFO can fill/empty in microseconds
 *    - RX FIFO overflow: If not read fast enough, incoming data is lost
 *    - TX FIFO underflow: If not filled fast enough, causes transmission gaps
 *
 * 3. Non-DMA Operation Critical Path:
 *    - When DMA is not used, CPU must service every FIFO interrupt
 *    - QSPI_ReadRxFifo() and QSPI_WriteTxFifo() are in the hot path
 *    - These functions execute repeatedly during transfers (every ~32 bytes)
 *    - Even small delays accumulate and can cause FIFO errors
 *
 * 4. Interrupt Latency Sensitivity:
 *    - QSPI interrupts fire frequently during active transfers
 *    - IRQ handler (QSPI_SlaveTransferHandleIRQ) must complete quickly
 *    - Slow interrupt handling increases system interrupt latency
 *
 * 5. Performance Impact of Optimization:
 *    - Speed optimization reduces loop overhead in FIFO read/write operations
 *    - Function inlining eliminates call overhead for small helper functions
 *    - Loop unrolling improves throughput for bulk FIFO operations
 *
 * Recommended Compiler Settings:
 *    - GCC/Clang:  -O3 -funroll-loops -finline-functions
 *    - IAR:        High optimization (speed)
 *    - Keil/ARM:   -O3 -Otime
 *
 * Without maximum optimization, the driver may fail to keep up with high-speed
 * QSPI transfers, resulting in data corruption, transfer failures, or reduced
 * maximum achievable throughput.
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.flexcomm_qspi_flr"
#endif

/* QSPI FIFO has 32 entries of 32 bit width */
#define QSPI_FIFO_DEPTH (32u)
#define QSPI_BYTES_PER_WORD (4U)

/* Macros to extract FIFO trigger levels from FIFOTRIG register */
#define QSPI_FIFOTRIG_TXLVL_GET(base) (((base)->FIFOTRIG & QSPI_FLR_FIFOTRIG_TXLVL_MASK) >> QSPI_FLR_FIFOTRIG_TXLVL_SHIFT)
#define QSPI_FIFOTRIG_RXLVL_GET(base) (((base)->FIFOTRIG & QSPI_FLR_FIFOTRIG_RXLVL_MASK) >> QSPI_FLR_FIFOTRIG_RXLVL_SHIFT)

/* Union for safe conversion from flexcomm_irq_handler_t to flexcomm_qspi_slave_irq_handler_t */
typedef union qspi_to_flexcomm
{
    flexcomm_qspi_slave_irq_handler_t qspi_slave_handler;
    flexcomm_irq_handler_t flexcomm_handler;
} qspi_to_flexcomm_t;

/* Union for converting the caller's byte buffer to the word pointer used for FIFO access,
 * without a cast to a more strictly aligned type. Buffers are validated as 32-bit aligned.
 * Convert once per FIFO call, never per word: per word is too slow to keep the TX FIFO fed. */
typedef union qspi_buffer_ptr
{
    uint8_t *bytePtr;
    uint32_t *wordPtr;
} qspi_buffer_ptr_t;

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/* Transfer validation and setup */
static status_t QSPI_ValidateTransferParameters(QSPI_FLR_Type *base, qspi_slave_handle_t *handle, qspi_transfer_t *xfer);
static void QSPI_SetupTransferState(qspi_slave_handle_t *handle, qspi_transfer_t *xfer);

/* Configuration functions */
static status_t QSPI_ConfigureSlaveMode(QSPI_FLR_Type *base, const qspi_slave_config_t *config);
static void QSPI_ConfigureFifoTriggers(QSPI_FLR_Type *base, const qspi_slave_config_t *config);
static void QSPI_ClearFifos(QSPI_FLR_Type *base);

/* TX transfer functions */
static status_t QSPI_SetupTxTransfer(QSPI_FLR_Type *base, qspi_slave_handle_t *handle);
static void QSPI_TransferHandleTxIRQ(QSPI_FLR_Type *base, qspi_slave_handle_t *handle);
static void QSPI_WriteTxFifo(QSPI_FLR_Type *base, qspi_slave_handle_t *handle);
static void QSPI_HandleTxCompletion(QSPI_FLR_Type *base, qspi_slave_handle_t *handle);

/* RX transfer functions */
static status_t QSPI_SetupRxTransfer(QSPI_FLR_Type *base, qspi_slave_handle_t *handle);
static void QSPI_TransferHandleRxIRQ(QSPI_FLR_Type *base, qspi_slave_handle_t *handle);
static void QSPI_ReadRxFifo(QSPI_FLR_Type *base, qspi_slave_handle_t *handle);
static void QSPI_HandleRxCompletion(QSPI_FLR_Type *base, qspi_slave_handle_t *handle);
static void QSPI_AdjustRxTriggerLevel(QSPI_FLR_Type *base, qspi_slave_handle_t *handle);

/* Transfer completion handling */
static void QSPI_NotifyTransferComplete(QSPI_FLR_Type *base, qspi_slave_handle_t *handle, status_t status);

/*******************************************************************************
 * Variables
 ******************************************************************************/

/* Array to map QSPI instance number to base address */
static const uint32_t s_qspiBaseAddrs[FSL_FEATURE_SOC_QSPI_FLR_COUNT] = QSPI_FLR_BASE_ADDRS;

/* Array to map QSPI instance number to IRQ number */
static const IRQn_Type s_qspiIRQ[FSL_FEATURE_SOC_QSPI_FLR_COUNT] = QSPI_FLR_IRQS;

/*******************************************************************************
 * Code
 ******************************************************************************/

/* ========== Utility Functions ========== */

uint32_t QSPI_GetInstance(QSPI_FLR_Type *base)
{
    uint32_t i;

    /* Search for matching base address in the instance array */
    for (i = 0U; i < (uint32_t)FSL_FEATURE_SOC_QSPI_FLR_COUNT; i++)
    {
        if (MSDK_REG_SECURE_ADDR((uint32_t)base) == MSDK_REG_SECURE_ADDR(s_qspiBaseAddrs[i]))
        {
            break;
        }
    }

    assert(i < (uint32_t)FSL_FEATURE_SOC_QSPI_FLR_COUNT);
    return i;
}

/* ========== Configuration Functions ========== */

void QSPI_SlaveGetDefaultConfig(qspi_slave_config_t *config)
{
    assert(NULL != config);

    /* Initialize the configuration structure to zero */
    (void)memset(config, 0, sizeof(*config));

    /* Set default configuration values */
    config->enableSlave = true;
    config->direction   = kQSPI_MsbFirst;
     /* TX Watermark Configuration:
     *
     * IMPORTANT: txWatermark cannot be set too high due to interrupt latency issues.
     *
     * Problem scenario:
     * 1. TX FIFO is filled to capacity in the interrupt handler
     * 2. Interrupt handler exits, but this takes time (context switching, register restoration)
     * 3. During IRQ exit latency, the QSPI master continues clocking out data from the FIFO
     * 4. By the time the CPU is ready to handle the next interrupt, the FIFO level may have
     *    already dropped below the configured watermark threshold
     * 5. If the FIFO level is below the threshold when the interrupt condition is checked,
     *    no new interrupt will be generated
     * 6. This causes the FIFO to continue draining without being refilled, leading to underflow
     *
     * The watermark must be set low enough to ensure that even with IRQ exit latency and
     * re-entry latency, the FIFO level will still be above the threshold when the next
     * interrupt check occurs, guaranteeing continuous interrupt generation until transfer
     * completion.
     *
     * Default value of 16 provides a safe margin for typical interrupt latencies while
     * still maintaining good FIFO utilization.
     */
    config->txWatermark = (uint8_t)kQSPI_TxFifo16; /* Trigger when TX FIFO is half emptied */
    config->rxWatermark = (uint8_t)kQSPI_RxFifo1;  /* Trigger when RX FIFO has 1 item */
}

static void QSPI_ClearFifos(QSPI_FLR_Type *base)
{
    /* Clear both TX and RX FIFOs */
    base->FIFOCFG |= QSPI_FLR_FIFOCFG_EMPTYTX_MASK | QSPI_FLR_FIFOCFG_EMPTYRX_MASK;
}

static void QSPI_ConfigureFifoTriggers(QSPI_FLR_Type *base, const qspi_slave_config_t *config)
{
    uint32_t tmpConfig;

    /* Configure FIFO trigger levels and enable trigger interrupts */
    tmpConfig = base->FIFOTRIG & (~(QSPI_FLR_FIFOTRIG_RXLVL_MASK | QSPI_FLR_FIFOTRIG_TXLVL_MASK));
    tmpConfig |= QSPI_FLR_FIFOTRIG_TXLVL(config->txWatermark) | QSPI_FLR_FIFOTRIG_RXLVL(config->rxWatermark);

    /* Enable interrupt generation for FIFO trigger levels */
    tmpConfig |= QSPI_FLR_FIFOTRIG_TXLVLENA_MASK | QSPI_FLR_FIFOTRIG_RXLVLENA_MASK;

    /* Apply FIFO trigger configuration */
    base->FIFOTRIG = tmpConfig;
}

static status_t QSPI_ConfigureSlaveMode(QSPI_FLR_Type *base, const qspi_slave_config_t *config)
{
    uint32_t tmpConfig;

    /* Configure QSPI slave mode settings */
    tmpConfig = base->CFG;
    tmpConfig &= ~(QSPI_FLR_CFG_CPHA_MASK |
                   QSPI_FLR_CFG_CPOL_MASK | QSPI_FLR_CFG_ENABLE_MASK);

    base->CFG = tmpConfig;

    return kStatus_Success;
}

status_t QSPI_SlaveInit(QSPI_FLR_Type *base, const qspi_slave_config_t *config)
{
    status_t result;

    /* Validate input parameters */
    assert(!((NULL == base) || (NULL == config)));
    if ((NULL == base) || (NULL == config))
    {
        return kStatus_InvalidArgument;
    }

    /* Configure flexcomm to QSPI mode and enable clock gate */
    result = FLEXCOMM_Init(base, FLEXCOMM_QSPI_FLR);
    if (kStatus_Success != result)
    {
        return result;
    }

    /* Configure QSPI slave mode settings */
    result = QSPI_ConfigureSlaveMode(base, config);
    if (kStatus_Success != result)
    {
        return result;
    }

    /* Clear FIFOs and configure trigger levels */
    QSPI_ClearFifos(base);
    QSPI_ConfigureFifoTriggers(base, config);

    /* Enable the QSPI peripheral */
    QSPI_Enable(base, config->enableSlave);

    return kStatus_Success;
}

void QSPI_Deinit(QSPI_FLR_Type *base)
{
    /* Validate input parameters */
    assert(NULL != base);

    /* Disable all FIFO interrupts */
    base->FIFOINTENCLR = QSPI_FLR_FIFOINTENCLR_TXERR_MASK | QSPI_FLR_FIFOINTENCLR_RXERR_MASK |
                         QSPI_FLR_FIFOINTENCLR_TXLVL_MASK | QSPI_FLR_FIFOINTENCLR_RXLVL_MASK;

    /* Disable DMA requests for both TX and RX */
    base->FIFOCFG &= ~(QSPI_FLR_FIFOCFG_DMATX_MASK | QSPI_FLR_FIFOCFG_DMARX_MASK);

    /* Disable the QSPI peripheral */
    base->CFG &= ~(QSPI_FLR_CFG_ENABLE_MASK);
}

/* ========== DMA Control Functions ========== */

void QSPI_EnableTxDMA(QSPI_FLR_Type *base, bool enable)
{
    /* Enable or disable TX DMA requests */
    if (enable)
    {
        base->FIFOCFG |= QSPI_FLR_FIFOCFG_DMATX_MASK;
    }
    else
    {
        base->FIFOCFG &= ~QSPI_FLR_FIFOCFG_DMATX_MASK;
    }
}

void QSPI_EnableRxDMA(QSPI_FLR_Type *base, bool enable)
{
    /* Enable or disable RX DMA requests */
    if (enable)
    {
        base->FIFOCFG |= QSPI_FLR_FIFOCFG_DMARX_MASK;
    }
    else
    {
        base->FIFOCFG &= ~QSPI_FLR_FIFOCFG_DMARX_MASK;
    }
}

/* ========== Transfer Validation and Setup Functions ========== */

static status_t QSPI_ValidateTransferParameters(QSPI_FLR_Type *base, qspi_slave_handle_t *handle, qspi_transfer_t *xfer)
{
    /* Validate input parameters */
    if ((base == NULL) || (handle == NULL) || (xfer == NULL) || (xfer->data == NULL))
    {
        return kStatus_InvalidArgument;
    }

    /* Check if QSPI is already busy with another transfer */
    if (handle->state == kStatus_QSPI_Busy)
    {
        return kStatus_QSPI_Busy;
    }

    /* Validate minimum dataSize */
    if (xfer->dataSize < QSPI_BYTES_PER_FRAME)
    {
        return kStatus_InvalidArgument;
    }

    /* Validate that dataSize does not exceed maximum transfer size */
    if (xfer->dataSize > QSPI_MAX_TRANSFER_SIZE)
    {
        return kStatus_QSPI_DataSizeExceeded;
    }

    /* Validate that dataSize is a multiple of 4 bytes (32-bit word aligned) */
    if ((xfer->dataSize & 0x3U) != 0U)
    {
        return kStatus_QSPI_DataSizeNotAligned;
    }

    /* Validate that data pointer is 32-bit aligned */
    if (((uintptr_t)xfer->data & 0x3U) != 0U)
    {
        return kStatus_QSPI_DataPointerNotAligned;
    }

    /* Validate the expected command before it is used to select the transfer direction */
    if (((uint32_t)xfer->expectedCmd < (uint32_t)kQSPI_CMD_FASTREAD) ||
        ((uint32_t)xfer->expectedCmd >= (uint32_t)kQSPI_CMD_MAX))
    {
        return kStatus_QSPI_UnsupportedCommand;
    }

    return kStatus_Success;
}

static void QSPI_SetupTransferState(qspi_slave_handle_t *handle, qspi_transfer_t *xfer)
{
    /* Initialize transfer parameters in handle */
    handle->data = xfer->data;
    handle->remainingBytes = xfer->dataSize;
    handle->state = kStatus_QSPI_Busy;
}

/* ========== TX Transfer Functions ========== */

static void QSPI_WriteTxFifo(QSPI_FLR_Type *base, qspi_slave_handle_t *handle)
{
    qspi_buffer_ptr_t buffer;
    uint32_t remainingBytes;

    buffer.bytePtr = handle->data;
    remainingBytes = handle->remainingBytes;

    /* Early exit if no data remaining */
    if (remainingBytes == 0U)
    {
        return;
    }

    /* Write words to FIFO until it's full or we run out of data */
    while ((remainingBytes >= QSPI_BYTES_PER_WORD) &&
           ((base->FIFOSTAT & QSPI_FLR_FIFOSTAT_TXNOTFULL_MASK) != 0U))
    {
        base->FIFOWR = *buffer.wordPtr;
        buffer.wordPtr++;
        remainingBytes -= QSPI_BYTES_PER_WORD;
    }

    /* Update handle once at the end */
    handle->data = buffer.bytePtr;
    handle->remainingBytes = remainingBytes;
}

static void QSPI_HandleTxCompletion(QSPI_FLR_Type *base, qspi_slave_handle_t *handle)
{
    if ((base->FIFOSTAT & QSPI_FLR_FIFOSTAT_TXEMPTY_MASK) == QSPI_FLR_FIFOSTAT_TXEMPTY_MASK)
    {
        /* TX FIFO is empty - all data has been transmitted */
        base->FIFOINTENCLR = QSPI_FLR_FIFOINTENCLR_TXLVL_MASK;

        base->FIFOTRIG = (base->FIFOTRIG & (~QSPI_FLR_FIFOTRIG_TXLVL_MASK)) |
                        QSPI_FLR_FIFOTRIG_TXLVL(handle->txWatermark);

        QSPI_NotifyTransferComplete(base, handle, kStatus_Success);
    }
    else
    {
        /* Change trigger level to 0 (fire when empty) */
        base->FIFOTRIG = (base->FIFOTRIG & (~QSPI_FLR_FIFOTRIG_TXLVL_MASK)) |
                        QSPI_FLR_FIFOTRIG_TXLVL(kQSPI_TxFifo0);

        /* Check if FIFO became empty while we were reconfiguring */
        if ((base->FIFOSTAT & QSPI_FLR_FIFOSTAT_TXEMPTY_MASK) == QSPI_FLR_FIFOSTAT_TXEMPTY_MASK)
        {
            /* Already empty - complete immediately */
            base->FIFOTRIG = (base->FIFOTRIG & (~QSPI_FLR_FIFOTRIG_TXLVL_MASK)) |
                            QSPI_FLR_FIFOTRIG_TXLVL(handle->txWatermark);
            base->FIFOINTENCLR = QSPI_FLR_FIFOINTENCLR_TXLVL_MASK;
            QSPI_NotifyTransferComplete(base, handle, kStatus_Success);
        }
    }
}

static status_t QSPI_SetupTxTransfer(QSPI_FLR_Type *base, qspi_slave_handle_t *handle)
{
    /* Set up for TX transfer (slave sending data to master) */
    handle->transferHandler = QSPI_TransferHandleTxIRQ;
    QSPI_ConfigureFifoForTx(base);
    base->FIFOINTENSET |= QSPI_FLR_FIFOINTENSET_TXLVL_MASK;

    return kStatus_Success;
}

static void QSPI_TransferHandleTxIRQ(QSPI_FLR_Type *base, qspi_slave_handle_t *handle)
{
    /* Fill TX FIFO with available data */
    QSPI_WriteTxFifo(base, handle);

    /* Handle transfer completion when all data has been queued */
    if (handle->remainingBytes == 0U)
    {
        QSPI_HandleTxCompletion(base, handle);
    }
}

/* ========== RX Transfer Functions ========== */

static void QSPI_ReadRxFifo(QSPI_FLR_Type *base, qspi_slave_handle_t *handle)
{
    qspi_buffer_ptr_t buffer;
    uint32_t remainingBytes;

    buffer.bytePtr = handle->data;
    remainingBytes = handle->remainingBytes;

    /* Early exit if no buffer space remaining */
    if (remainingBytes == 0U)
    {
        return;
    }

    /* Read words from FIFO until it's empty or we run out of buffer space */
    while ((remainingBytes >= QSPI_BYTES_PER_WORD) &&
           ((base->FIFOSTAT & QSPI_FLR_FIFOSTAT_RXNOTEMPTY_MASK) != 0U))
    {
        *buffer.wordPtr = base->FIFORD;
        buffer.wordPtr++;
        remainingBytes -= QSPI_BYTES_PER_WORD;
    }

    /* Update handle once at the end */
    handle->data = buffer.bytePtr;
    handle->remainingBytes = remainingBytes;
}

static void QSPI_AdjustRxTriggerLevel(QSPI_FLR_Type *base, qspi_slave_handle_t *handle)
{
    /* Adjust RX trigger level if remaining data is less than current trigger level */
    uint32_t rxRemainingWords = handle->remainingBytes >> 2U;  /* Exact division since multiple of 4 */
    uint32_t currentRxLevel = QSPI_FIFOTRIG_RXLVL_GET(base) + 1U;

    /* rxRemainingWords cannot be zero here: the caller only reaches this when a non-zero
     * number of bytes is left, and the byte count is always a multiple of 4. An explicit
     * zero check is deliberately left out for maximum execution speed. */
    if (rxRemainingWords < currentRxLevel)
    {
        base->FIFOTRIG = (base->FIFOTRIG & (~QSPI_FLR_FIFOTRIG_RXLVL_MASK)) |
                        QSPI_FLR_FIFOTRIG_RXLVL(rxRemainingWords - 1U);
    }
}

static void QSPI_HandleRxCompletion(QSPI_FLR_Type *base, qspi_slave_handle_t *handle)
{
    /* Transfer complete - disable interrupts and restore trigger level */
    base->FIFOINTENCLR = QSPI_FLR_FIFOINTENCLR_RXLVL_MASK;
    base->FIFOTRIG = (base->FIFOTRIG & (~QSPI_FLR_FIFOTRIG_RXLVL_MASK)) |
                    QSPI_FLR_FIFOTRIG_RXLVL(handle->rxWatermark);

    QSPI_NotifyTransferComplete(base, handle, kStatus_Success);
}

static status_t QSPI_SetupRxTransfer(QSPI_FLR_Type *base, qspi_slave_handle_t *handle)
{
    /* Set up for RX transfer (slave receiving data from master) */
    handle->transferHandler = QSPI_TransferHandleRxIRQ;
    QSPI_ConfigureFifoForRx(base);
    base->FIFOINTENSET |= QSPI_FLR_FIFOINTENSET_RXLVL_MASK;

    return kStatus_Success;
}

static void QSPI_TransferHandleRxIRQ(QSPI_FLR_Type *base, qspi_slave_handle_t *handle)
{
    /* Read available data from RX FIFO */
    QSPI_ReadRxFifo(base, handle);

    /* Handle transfer completion or adjust trigger level */
    if (handle->remainingBytes == 0U)
    {
        QSPI_HandleRxCompletion(base, handle);
    }
    else
    {
        QSPI_AdjustRxTriggerLevel(base, handle);
    }
}

/* ========== Transfer Completion Functions ========== */

static void QSPI_NotifyTransferComplete(QSPI_FLR_Type *base, qspi_slave_handle_t *handle, status_t status)
{
    handle->state = kStatus_QSPI_Idle;

    /* Notify completion via callback */
    if (handle->callback != NULL)
    {
        (handle->callback)(base, handle, status, handle->userData);
    }
}

/* ========== Main API Functions ========== */

status_t QSPI_SlaveTransferCreateHandle(QSPI_FLR_Type *base,
                                        qspi_slave_handle_t *handle,
                                        qspi_slave_callback_t callback,
                                        void *userData)
{
    uint32_t instance;
    qspi_to_flexcomm_t handler;

    /* Validate input parameters */
    assert(NULL != base);
    assert(NULL != handle);

    /* Get flexcomm instance number from base address. QSPI_GetInstance() returns
     * FSL_FEATURE_SOC_QSPI_FLR_COUNT for an unknown base address, so the result must be
     * range checked before it is used as an index (the assert() inside is compiled out
     * in release builds). */
    instance = QSPI_GetInstance(base);
    if (instance >= (uint32_t)FSL_FEATURE_SOC_QSPI_FLR_COUNT)
    {
        return kStatus_InvalidArgument;
    }

    /* Initialize handle structure to zero */
    (void)memset(handle, 0, sizeof(*handle));

    /* Set up interrupt handler for this QSPI instance */
    handler.qspi_slave_handler = QSPI_SlaveTransferHandleIRQ;
    FLEXCOMM_SetIRQHandler(base, handler.flexcomm_handler, handle);

    /* Initialize handle with current FIFO trigger levels and user parameters */
    handle->txWatermark = (uint8_t)QSPI_FIFOTRIG_TXLVL_GET(base);
    handle->rxWatermark = (uint8_t)QSPI_FIFOTRIG_RXLVL_GET(base);
    handle->callback = callback;
    handle->userData = userData;
    handle->transferHandler = NULL; /* Initialize function pointer to NULL for safety */

    /* Enable QSPI interrupt in NVIC */
    (void)EnableIRQ(s_qspiIRQ[instance]);

    return kStatus_Success;
}

status_t QSPI_SlaveTransferNonBlocking(QSPI_FLR_Type *base, qspi_slave_handle_t *handle, qspi_transfer_t *xfer)
{
    status_t result;

    /* Validate input parameters and state */
    result = QSPI_ValidateTransferParameters(base, handle, xfer);
    if (result != kStatus_Success)
    {
        return result;
    }

    /* Initialize transfer parameters in handle */
    QSPI_SetupTransferState(handle, xfer);

    /* Configure the address mode; the hardware applies the dummy cycles itself */
    QSPI_ConfigureCommandParameters(base, xfer);

    /* Handle transfer based on command type */
    if (QSPI_IsTxCommand(xfer->expectedCmd))
    {
        result = QSPI_SetupTxTransfer(base, handle);
    }
    else if (QSPI_IsRxCommand(xfer->expectedCmd))
    {
        result = QSPI_SetupRxTransfer(base, handle);
    }
    else
    {
        result = kStatus_QSPI_UnsupportedCommand;
    }

    return result;
}

void QSPI_SlaveTransferAbort(QSPI_FLR_Type *base, qspi_slave_handle_t *handle)
{
    assert(NULL != handle);

    /* Disable FIFO level interrupts */
    base->FIFOINTENSET &= ~(QSPI_FLR_FIFOINTENSET_TXLVL_MASK | QSPI_FLR_FIFOINTENSET_RXLVL_MASK);

    /* Clear both TX and RX FIFOs */
    QSPI_ClearFifos(base);

    /* Reset handle state */
    handle->state = kStatus_QSPI_Idle;
    handle->remainingBytes = 0U;
}

/* ========== IRQ Handler Functions ========== */

void QSPI_SlaveTransferHandleIRQ(QSPI_FLR_Type *base, qspi_slave_handle_t *handle)
{
    /* Dispatched with no NULL guard on purpose, for maximum execution speed: this runs on
     * every QSPI interrupt. The handler is set before the transfer that can raise an
     * interrupt is started. */
    handle->transferHandler(base, handle);
}
