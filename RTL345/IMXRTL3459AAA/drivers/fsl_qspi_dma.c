/*
 * Copyright 2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "fsl_qspi.h"
#include "fsl_qspi_dma.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.flexcomm_qspi_flr_dma"
#endif

/* QSPI transfer state definitions for DMA transactional APIs' internal state */
enum _qspi_dma_states_t
{
    kQSPI_Idle = 0x0, /* QSPI is idle state */
    kQSPI_Busy        /* QSPI is busy transferring data */
};

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/* DMA Callback functions */
static void QSPI_TxDMACallback(dma_handle_t *handle, void *userData, bool transferDone, uint32_t intmode);
static void QSPI_RxDMACallback(dma_handle_t *handle, void *userData, bool transferDone, uint32_t intmode);

/* IRQ Handler */
static void QSPI_TransferHandleTxIRQ(QSPI_FLR_Type *base, qspi_slave_handle_t *handle);

/* Transfer validation and setup */
static status_t QSPI_ValidateTransferParameters(QSPI_FLR_Type *base, qspi_dma_handle_t *handle, qspi_transfer_t *xfer);

/* TX transfer functions */
static status_t QSPI_HandleTxTransfer(QSPI_FLR_Type *base, qspi_dma_handle_t *handle, qspi_transfer_t *xfer);
static status_t QSPI_StartTxDmaTransfer(QSPI_FLR_Type *base, qspi_dma_handle_t *handle, qspi_transfer_t *xfer);

/* RX transfer functions */
static status_t QSPI_HandleRxTransfer(QSPI_FLR_Type *base, qspi_dma_handle_t *handle, qspi_transfer_t *xfer);
static status_t QSPI_StartRxDmaTransfer(QSPI_FLR_Type *base, qspi_dma_handle_t *handle, qspi_transfer_t *xfer);

/* TX helper functions */
static status_t QSPI_ConfigureTxDoneIrq(QSPI_FLR_Type *base, qspi_dma_handle_t *handle);

/* Transfer completion handling */
static void QSPI_NotifyTransferComplete(QSPI_FLR_Type *base, qspi_dma_handle_t *handle, status_t status);

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/

/* ========== Transfer Validation and Setup Functions ========== */

static status_t QSPI_ValidateTransferParameters(QSPI_FLR_Type *base, qspi_dma_handle_t *handle, qspi_transfer_t *xfer)
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

    /* Validate the expected command before it is used to index the dummy bits lookup table */
    if (((uint32_t)xfer->expectedCmd < (uint32_t)kQSPI_CMD_FASTREAD) ||
        ((uint32_t)xfer->expectedCmd >= (uint32_t)kQSPI_CMD_MAX))
    {
        return kStatus_QSPI_UnsupportedCommand;
    }

    return kStatus_Success;
}

/* ========== TX Transfer Functions ========== */

static status_t QSPI_StartTxDmaTransfer(QSPI_FLR_Type *base, qspi_dma_handle_t *handle, qspi_transfer_t *xfer)
{
    status_t result;
    dma_transfer_config_t xferConfig;
    /* The FIFO is only ever accessed by the DMA controller, never through this pointer, so
     * the volatile qualifier is dropped through uintptr_t rather than by a pointer cast
     * that would strip it. */
    uint8_t *address = (uint8_t *)(uintptr_t)&base->FIFOWR;

    QSPI_EnableTxDMA(base, true);

    /* Configure single DMA transfer from memory to QSPI TX FIFO */
    DMA_PrepareTransfer(&xferConfig, xfer->data, address, QSPI_BYTES_PER_FRAME,
                       xfer->dataSize, kDMA_MemoryToPeripheral, NULL);

    result = DMA_SubmitTransfer(handle->txHandle, &xferConfig);
    if (result != kStatus_Success)
    {
        QSPI_EnableTxDMA(base, false);
        return result;
    }

    handle->transferInProgress = true;
    DMA_StartTransfer(handle->txHandle);

    return kStatus_Success;
}

static status_t QSPI_HandleTxTransfer(QSPI_FLR_Type *base, qspi_dma_handle_t *handle, qspi_transfer_t *xfer)
{
    QSPI_ConfigureFifoForTx(base);
    return QSPI_StartTxDmaTransfer(base, handle, xfer);
}

/* ========== RX Transfer Functions ========== */

static status_t QSPI_StartRxDmaTransfer(QSPI_FLR_Type *base, qspi_dma_handle_t *handle, qspi_transfer_t *xfer)
{
    status_t result;
    dma_transfer_config_t dmaXferConfig;
    /* See QSPI_StartTxDmaTransfer(): volatile and const are dropped through uintptr_t. */
    uint8_t *address = (uint8_t *)(uintptr_t)&base->FIFORD;

    QSPI_EnableRxDMA(base, true);

    /* Configure single DMA transfer from QSPI RX FIFO to memory */
    DMA_PrepareTransfer(&dmaXferConfig, address, xfer->data, QSPI_BYTES_PER_FRAME,
                       xfer->dataSize, kDMA_PeripheralToMemory, NULL);

    result = DMA_SubmitTransfer(handle->rxHandle, &dmaXferConfig);
    if (result != kStatus_Success)
    {
        QSPI_EnableRxDMA(base, false);
        return result;
    }

    handle->transferInProgress = true;
    DMA_StartTransfer(handle->rxHandle);

    return kStatus_Success;
}

static status_t QSPI_HandleRxTransfer(QSPI_FLR_Type *base, qspi_dma_handle_t *handle, qspi_transfer_t *xfer)
{
    QSPI_ConfigureFifoForRx(base);
    return QSPI_StartRxDmaTransfer(base, handle, xfer);
}

/* ========== Transfer Completion Functions ========== */

static void QSPI_NotifyTransferComplete(QSPI_FLR_Type *base, qspi_dma_handle_t *handle, status_t status)
{
    handle->state = kQSPI_Idle;
    if (handle->callback != NULL)
    {
        (handle->callback)(base, handle, status, handle->userData);
    }
}

/* ========== Main API Functions ========== */

static status_t QSPI_ConfigureTxDoneIrq(QSPI_FLR_Type *base, qspi_dma_handle_t *handle)
{
    status_t status;

    /* Create handle from interrupt driven QSPI driver */
    status = QSPI_SlaveTransferCreateHandle(base, handle->slaveHandle, NULL, handle);
    if (kStatus_Success != status)
    {
        return status;
    }

    /* Override the internal transfer handler with custom TX completion handler */
    handle->slaveHandle->transferHandler = QSPI_TransferHandleTxIRQ;

    return status;
}

status_t QSPI_SlaveTransferCreateHandleDMA(QSPI_FLR_Type *base,
                                           qspi_dma_handle_t *handle,
                                           qspi_slave_handle_t *slaveHandle,
                                           qspi_dma_callback_t callback,
                                           void *userData,
                                           dma_handle_t *txHandle,
                                           dma_handle_t *rxHandle)
{
    uint32_t instance;
    status_t status;

    /* Validate input parameters */
    assert(!(NULL == base));
    if (NULL == base)
    {
        return kStatus_InvalidArgument;
    }
    assert(!(NULL == handle));
    if (NULL == handle)
    {
        return kStatus_InvalidArgument;
    }
    assert(!(NULL == slaveHandle));
    if (NULL == slaveHandle)
    {
        return kStatus_InvalidArgument;
    }

    /* QSPI_GetInstance() returns FSL_FEATURE_SOC_QSPI_FLR_COUNT for an unknown base address,
     * so the result must be range checked before it is stored and used as an index. */
    instance = QSPI_GetInstance(base);
    if (instance >= (uint32_t)FSL_FEATURE_SOC_QSPI_FLR_COUNT)
    {
        return kStatus_InvalidArgument;
    }

    /* Initialize handle structure to zero */
    (void)memset(handle, 0, sizeof(*handle));

    /* Set up DMA handle parameters */
    handle->base               = base;
    handle->txHandle           = txHandle;
    handle->rxHandle           = rxHandle;
    handle->callback           = callback;
    handle->userData           = userData;
    handle->instance           = instance;
    handle->slaveHandle        = slaveHandle;

    /* Set QSPI state to idle */
    handle->state = kQSPI_Idle;

    /* Install DMA completion callbacks for both TX and RX channels */
    DMA_SetCallback(handle->txHandle, QSPI_TxDMACallback, handle);
    DMA_SetCallback(handle->rxHandle, QSPI_RxDMACallback, handle);

    /* Configure TX completion interrupt since DMA completion doesn't guarantee
       actual QSPI transmission completion. Use custom transfer handler to detect
       when TX FIFO is empty and transfer is truly complete */
    status = QSPI_ConfigureTxDoneIrq(base, handle);

    return status;
}

status_t QSPI_SlaveTransferDMA(QSPI_FLR_Type *base, qspi_dma_handle_t *handle, qspi_transfer_t *xfer)
{
    status_t result;

    /* Validate input parameters and state */
    result = QSPI_ValidateTransferParameters(base, handle, xfer);
    if (result != kStatus_Success)
    {
        return result;
    }

    /* Set up transfer state */
    handle->state = kQSPI_Busy;
    handle->transferSize = xfer->dataSize;

    /* Configure command, address, and dummy cycle parameters */
    QSPI_ConfigureCommandParameters(base, xfer);

    /* Handle transfer based on command type */
    if (QSPI_IsTxCommand(xfer->expectedCmd))
    {
        result = QSPI_HandleTxTransfer(base, handle, xfer);
    }
    else if (QSPI_IsRxCommand(xfer->expectedCmd))
    {
        result = QSPI_HandleRxTransfer(base, handle, xfer);
    }
    else
    {
        result = kStatus_QSPI_UnsupportedCommand;
    }

    if (result != kStatus_Success)
    {
        handle->state = kQSPI_Idle;
    }

    return result;
}

/* ========== IRQ and Callback Functions ========== */

static void QSPI_TransferHandleTxIRQ(QSPI_FLR_Type *base, qspi_slave_handle_t *handle)
{
    qspi_dma_handle_t *qspiDmaHandle = (qspi_dma_handle_t *)handle->userData;

    /* Check if DMA transfer is complete and TX FIFO is empty (actual transmission done) */
    if ((qspiDmaHandle->transferInProgress == false) &&
        ((base->FIFOSTAT & QSPI_FLR_FIFOSTAT_TXEMPTY_MASK) == QSPI_FLR_FIFOSTAT_TXEMPTY_MASK))
    {
        /* Clear TX level interrupt and restore original trigger level */
        base->FIFOINTENCLR = QSPI_FLR_FIFOINTENCLR_TXLVL_MASK;
        base->FIFOTRIG = (base->FIFOTRIG & (~QSPI_FLR_FIFOTRIG_TXLVL_MASK)) |
                        QSPI_FLR_FIFOTRIG_TXLVL(handle->txWatermark);

        /* Mark transfer as complete and notify via callback */
        QSPI_NotifyTransferComplete(base, qspiDmaHandle, kStatus_Success);
    }
}

static void QSPI_RxDMACallback(dma_handle_t *handle, void *userData, bool transferDone, uint32_t intmode)
{
    qspi_dma_handle_t *qspiHandle = (qspi_dma_handle_t *)userData;
    QSPI_FLR_Type *base = qspiHandle->base;

    qspiHandle->transferInProgress = false;
    QSPI_EnableRxDMA(base, false);

    QSPI_NotifyTransferComplete(base, qspiHandle,
                                transferDone ? kStatus_Success : kStatus_Fail);
}

static void QSPI_TxDMACallback(dma_handle_t *handle, void *userData, bool transferDone, uint32_t intmode)
{
    qspi_dma_handle_t *qspiHandle = (qspi_dma_handle_t *)userData;
    QSPI_FLR_Type *base = qspiHandle->base;

    /* DMA transfer complete, but QSPI transmission may still be in progress.
       Enable TX FIFO empty interrupt to detect actual transmission completion */
    qspiHandle->transferInProgress = false;
    base->FIFOINTENSET |= QSPI_FLR_FIFOINTENSET_TXLVL_MASK;
    base->FIFOTRIG = (base->FIFOTRIG & (~QSPI_FLR_FIFOTRIG_TXLVL_MASK)) |
        QSPI_FLR_FIFOTRIG_TXLVL(kQSPI_TxFifo0);
    QSPI_EnableTxDMA(base, false);
}
