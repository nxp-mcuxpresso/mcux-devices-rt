/*
 * Copyright 2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/**
  * @file fsl_qspi.h
  * @brief QSPI (Quad Serial Peripheral Interface) slave driver
  *
  * @details This driver provides a QSPI slave implementation with the following capabilities:
  *
  * **Data Transfer Format:**
  * - **Word-based transfers**: All QSPI transfers are performed in 32-bit (4-byte) words
  * - **Little-endian interpretation**: The Pindus device interprets all 32-bit words as little-endian format
  * - **Master compatibility**: It is strongly advised that QSPI masters send/receive data in little-endian format
  *   to ensure proper byte ordering and data integrity
  * - **Byte packing**: For transfers not aligned to 4-byte boundaries, bytes are packed into 32-bit words
  *   in little-endian order (LSB first)
  *
  * **Example data format:**
  * @code
  * // For byte sequence: 0x12, 0x34, 0x56, 0x78
  * // FIFO word format: 0x78563412 (little-endian)
  * // Wire transmission order depends on MSB/LSB first setting
  * @endcode
  *
  * **Supported Features:**
  * - Single slave select (SSEL0) operation
  * - Multiple data transfer modes:
  *   - Single data mode (standard SPI)
  *   - Dual data mode (2-bit I/O)
  *   - Quad data mode (4-bit I/O)
  * - Clock frequency support: 16MHz to 50MHz
  * - Clock mode: CPHA/CPOL mode 0 (clock polarity active high, first edge sampling)
  * - FIFO-based data transfer with configurable watermarks (32 entries deep)
  * - Interrupt-driven non-blocking transfers
  * - Multiple QSPI commands support:
  *   - Fast Read (0x0B), Dual/Quad Output Read (0x3B, 0x6B)
  *   - Dual/Quad I/O Read (0xBB, 0xEB)
  *   - Page Program variants (0x02, 0xA2, 0x32, 0x38)
  * - Configurable dummy cycles (0, 4, 6, or 8 bits)
  * - Both 24-bit and 32-bit address modes (address bits are ignored in slave mode)
  * - MSB/LSB first data shifting
  *
  * **Transfer Requirements:**
  * - Minimum transfer size: 4 bytes (one FIFO word)
  * - Maximum transfer size: @ref QSPI_MAX_TRANSFER_SIZE bytes (DMA limitation applies to both interrupt and DMA modes)
  * - Transfer size must be a multiple of 4 bytes (32-bit word aligned)
  * - Data buffer pointer must be 32-bit aligned
  *
  * **Limitations:**
  * - Address bits are ignored in slave operation
  * - DDR (Double Data Rate) mode not supported
  * - OCTAL mode not supported
  * - Limited to predefined command set
  * - Single clock mode support (mode 0 only)
  * - Data must be handled with awareness of little-endian word format
  *
  * @warning Ensure QSPI master uses little-endian data format for proper communication.
  */
#ifndef FSL_QSPI_H_
#define FSL_QSPI_H_

#include "fsl_common.h"
#include "fsl_flexcomm.h"

/*!
 * @addtogroup qspi_driver QSPI Driver
 * @{
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @name Driver version */
/*! @{ */
/*! @brief QSPI driver version. */
#define FSL_QSPI_DRIVER_VERSION (MAKE_VERSION(1, 0, 0))
/*! @} */

/**
 * @brief Maximum QSPI transfer size in bytes.
 *
 * @details This constant defines the maximum data size for a single QSPI transfer.
 * The limit is imposed by the DMA controller's maximum transfer count capability,
 * which is restricted to 4096 bytes per DMA transaction.
 *
 * @note Both interrupt-driven and DMA-based transfers are subject to this limit.
 * For larger data transfers, the application must split the data into multiple
 * transfers of 4096 bytes or less.
 */
#define QSPI_MAX_TRANSFER_SIZE (4096U)

/**
 * @brief QSPI bytes per FIFO frame/word.
 *
 * @details Each FIFO entry holds one 32-bit word (4 bytes). All transfers
 * must be aligned to this boundary.
 */
#define QSPI_BYTES_PER_FRAME (4U)

/**
 * @brief QSPI command types supported by the slave driver.
 *
 * @details These commands correspond to standard QSPI commands.
 * The slave automatically detects the command type and configures the appropriate
 * data transfer mode and dummy cycles.
 */
typedef enum _qspi_cmd
{
    kQSPI_CMD_FASTREAD   = 1,  /*!< Fast Read command (0x0B) - Single I/O with 8 dummy bits */
    kQSPI_CMD_READ2O     = 2,  /*!< Dual Output Read (0x3B) - Dual data output with 8 dummy bits */
    kQSPI_CMD_READ2IO    = 3,  /*!< Dual I/O Read (0xBB) - Dual address/data I/O with 4 dummy bits */
    kQSPI_CMD_READ4O     = 4,  /*!< Quad Output Read (0x6B) - Quad data output with 8 dummy bits */
    kQSPI_CMD_READ4IO    = 5,  /*!< Quad I/O Read (0xEB) - Quad address/data I/O with 6 dummy bits */
    kQSPI_CMD_PP         = 6,  /*!< Page Program (0x02) - Single I/O write with 0 dummy bits */
    kQSPI_CMD_PP2O       = 7,  /*!< Dual Page Program (0xA2) - Dual data output with 0 dummy bits */
    kQSPI_CMD_PP4O       = 8,  /*!< Quad Page Program (0x32) - Quad data output with 0 dummy bits */
    kQSPI_CMD_PP4IO      = 9,  /*!< Quad I/O Page Program (0x38) - Quad address/data I/O with 0 dummy bits */
    kQSPI_CMD_MAX        = 10  /*!< Maximum command value for validation */
} qspi_cmd_t;

/**
 * @brief QSPI address bit width options.
 *
 * @note In slave mode, address bits are ignored by the hardware but must be
 * configured to match the master's expectation for proper timing.
 */
typedef enum _qspi_address_bits
{
    kQSPI_ADDRESS_24BIT = (0b0 << QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_ADDR_MODE_SHIFT), /*!< 24-bit address mode */
    kQSPI_ADDRESS_32BIT = (0b1 << QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_ADDR_MODE_SHIFT), /*!< 32-bit address mode */
} qspi_address_bits_t;

/**
 * @brief QSPI dummy cycle options.
 *
 * @details Dummy cycles are automatically configured based on the command type.
 */
typedef enum _qspi_dummy_bits
{
    kQSPI_DUMMY_BITS_0 = (0b0 << QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_DUMMY_CYL_SHIFT),  /*!< No dummy cycles */
    kQSPI_DUMMY_BITS_8 = (0b1 << QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_DUMMY_CYL_SHIFT),  /*!< 8 dummy cycles */
    kQSPI_DUMMY_BITS_6 = (0b10 << QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_DUMMY_CYL_SHIFT), /*!< 6 dummy cycles */
    kQSPI_DUMMY_BITS_4 = (0b11 << QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_DUMMY_CYL_SHIFT), /*!< 4 dummy cycles */
} qspi_dummy_bits_t;

/**
 * @brief QSPI data shift direction options.
 */
typedef enum _qspi_shift_direction
{
    kQSPI_MsbFirst = 0U, /*!< Data transfers start with most significant bit (standard) */
    kQSPI_LsbFirst = 1U  /*!< Data transfers start with least significant bit */
} qspi_shift_direction_t;

/**
 * @brief TX FIFO watermark levels.
 *
 * @details The TX watermark determines when the TX FIFO interrupt is triggered.
 * The interrupt fires when the FIFO level is at the configured watermark.
 *
 * **Important Considerations:**
 * - Lower values (e.g., kQSPI_TxFifo0-7): Faster response, more frequent interrupts
 * - Higher values (e.g., kQSPI_TxFifo24-31): Fewer interrupts, risk of underrun
 * - Recommended default: kQSPI_TxFifo16 (half-full) balances performance and reliability
 *
 * **Interrupt Latency Warning:**
 * Setting txWatermark too high can cause missed interrupts due to IRQ exit/entry latency.
 * If the FIFO drains below the watermark during interrupt handling, the next interrupt
 * may not fire, leading to TX FIFO underrun. See @ref QSPI_SlaveGetDefaultConfig() for details.
 */
typedef enum _qspi_txfifo_watermark
{
    kQSPI_TxFifo0 = 0,   /*!< Trigger when TX FIFO is empty */
    kQSPI_TxFifo1 = 1,   /*!< Trigger when TX FIFO has 1 item */
    kQSPI_TxFifo2 = 2,   /*!< Trigger when TX FIFO has 2 items */
    kQSPI_TxFifo3 = 3,   /*!< Trigger when TX FIFO has 3 items */
    kQSPI_TxFifo4 = 4,   /*!< Trigger when TX FIFO has 4 items */
    kQSPI_TxFifo5 = 5,   /*!< Trigger when TX FIFO has 5 items */
    kQSPI_TxFifo6 = 6,   /*!< Trigger when TX FIFO has 6 items */
    kQSPI_TxFifo7 = 7,   /*!< Trigger when TX FIFO has 7 items */
    kQSPI_TxFifo8 = 8,   /*!< Trigger when TX FIFO has 8 items */
    kQSPI_TxFifo9 = 9,   /*!< Trigger when TX FIFO has 9 items */
    kQSPI_TxFifo10 = 10, /*!< Trigger when TX FIFO has 10 items */
    kQSPI_TxFifo11 = 11, /*!< Trigger when TX FIFO has 11 items */
    kQSPI_TxFifo12 = 12, /*!< Trigger when TX FIFO has 12 items */
    kQSPI_TxFifo13 = 13, /*!< Trigger when TX FIFO has 13 items */
    kQSPI_TxFifo14 = 14, /*!< Trigger when TX FIFO has 14 items */
    kQSPI_TxFifo15 = 15, /*!< Trigger when TX FIFO has 15 items */
    kQSPI_TxFifo16 = 16, /*!< Trigger when TX FIFO has 16 items */
    kQSPI_TxFifo17 = 17, /*!< Trigger when TX FIFO has 17 items */
    kQSPI_TxFifo18 = 18, /*!< Trigger when TX FIFO has 18 items */
    kQSPI_TxFifo19 = 19, /*!< Trigger when TX FIFO has 19 items */
    kQSPI_TxFifo20 = 20, /*!< Trigger when TX FIFO has 20 items */
    kQSPI_TxFifo21 = 21, /*!< Trigger when TX FIFO has 21 items */
    kQSPI_TxFifo22 = 22, /*!< Trigger when TX FIFO has 22 items */
    kQSPI_TxFifo23 = 23, /*!< Trigger when TX FIFO has 23 items */
    kQSPI_TxFifo24 = 24, /*!< Trigger when TX FIFO has 24 items */
    kQSPI_TxFifo25 = 25, /*!< Trigger when TX FIFO has 25 items */
    kQSPI_TxFifo26 = 26, /*!< Trigger when TX FIFO has 26 items */
    kQSPI_TxFifo27 = 27, /*!< Trigger when TX FIFO has 27 items */
    kQSPI_TxFifo28 = 28, /*!< Trigger when TX FIFO has 28 items */
    kQSPI_TxFifo29 = 29, /*!< Trigger when TX FIFO has 29 items */
    kQSPI_TxFifo30 = 30, /*!< Trigger when TX FIFO has 30 items */
    kQSPI_TxFifo31 = 31, /*!< Trigger when TX FIFO has 31 items */
} qspi_txfifo_watermark_t;

/**
 * @brief RX FIFO watermark levels.
 *
 * @details The RX watermark determines when the RX FIFO interrupt is triggered.
 * The interrupt fires when the FIFO level is at the configured watermark.
 *
 * **Considerations:**
 * - Lower values (e.g., kQSPI_RxFifo1-4): Faster response, more frequent interrupts
 * - Higher values (e.g., kQSPI_RxFifo16-32): Fewer interrupts, risk of overflow
 * - Recommended default: kQSPI_RxFifo1 (immediate response to incoming data)
 */
typedef enum _qspi_rxfifo_watermark
{
    kQSPI_RxFifo1 = 0,   /*!< Trigger when RX FIFO has 1 item  */
    kQSPI_RxFifo2 = 1,   /*!< Trigger when RX FIFO has 2 items */
    kQSPI_RxFifo3 = 2,   /*!< Trigger when RX FIFO has 3 items */
    kQSPI_RxFifo4 = 3,   /*!< Trigger when RX FIFO has 4 items */
    kQSPI_RxFifo5 = 4,   /*!< Trigger when RX FIFO has 5 items */
    kQSPI_RxFifo6 = 5,   /*!< Trigger when RX FIFO has 6 items */
    kQSPI_RxFifo7 = 6,   /*!< Trigger when RX FIFO has 7 items */
    kQSPI_RxFifo8 = 7,   /*!< Trigger when RX FIFO has 8 items */
    kQSPI_RxFifo9 = 8,   /*!< Trigger when RX FIFO has 9 items */
    kQSPI_RxFifo10 = 9,  /*!< Trigger when RX FIFO has 10 items */
    kQSPI_RxFifo11 = 10, /*!< Trigger when RX FIFO has 11 items */
    kQSPI_RxFifo12 = 11, /*!< Trigger when RX FIFO has 12 items */
    kQSPI_RxFifo13 = 12, /*!< Trigger when RX FIFO has 13 items */
    kQSPI_RxFifo14 = 13, /*!< Trigger when RX FIFO has 14 items */
    kQSPI_RxFifo15 = 14, /*!< Trigger when RX FIFO has 15 items */
    kQSPI_RxFifo16 = 15, /*!< Trigger when RX FIFO has 16 items */
    kQSPI_RxFifo17 = 16, /*!< Trigger when RX FIFO has 17 items */
    kQSPI_RxFifo18 = 17, /*!< Trigger when RX FIFO has 18 items */
    kQSPI_RxFifo19 = 18, /*!< Trigger when RX FIFO has 19 items */
    kQSPI_RxFifo20 = 19, /*!< Trigger when RX FIFO has 20 items */
    kQSPI_RxFifo21 = 20, /*!< Trigger when RX FIFO has 21 items */
    kQSPI_RxFifo22 = 21, /*!< Trigger when RX FIFO has 22 items */
    kQSPI_RxFifo23 = 22, /*!< Trigger when RX FIFO has 23 items */
    kQSPI_RxFifo24 = 23, /*!< Trigger when RX FIFO has 24 items */
    kQSPI_RxFifo25 = 24, /*!< Trigger when RX FIFO has 25 items */
    kQSPI_RxFifo26 = 25, /*!< Trigger when RX FIFO has 26 items */
    kQSPI_RxFifo27 = 26, /*!< Trigger when RX FIFO has 27 items */
    kQSPI_RxFifo28 = 27, /*!< Trigger when RX FIFO has 28 items */
    kQSPI_RxFifo29 = 28, /*!< Trigger when RX FIFO has 29 items */
    kQSPI_RxFifo30 = 29, /*!< Trigger when RX FIFO has 30 items */
    kQSPI_RxFifo31 = 30, /*!< Trigger when RX FIFO has 31 items */
    kQSPI_RxFifo32 = 31, /*!< Trigger when RX FIFO is full (32 items) */
} qspi_rxfifo_watermark_t;

/**
 * @brief QSPI slave configuration structure.
 *
 * @details This structure contains all the configuration parameters needed
 * to initialize the QSPI slave. Use QSPI_SlaveGetDefaultConfig() to get
 * default values, then modify as needed.
 */
typedef struct _qspi_slave_config
{
    bool enableSlave;                     /*!< Enable QSPI slave at initialization time */
    qspi_shift_direction_t direction;     /*!< Data shift direction (MSB or LSB first) */
    uint8_t txWatermark;                  /*!< TX FIFO watermark level */
    uint8_t rxWatermark;                  /*!< RX FIFO watermark level */
} qspi_slave_config_t;

/**
 * @brief QSPI transfer status codes.
 */
enum
{
    kStatus_QSPI_Busy  = MAKE_STATUS(kStatusGroup_LPC_QSPI, 0), /*!< QSPI bus is busy with another transfer */
    kStatus_QSPI_Idle  = MAKE_STATUS(kStatusGroup_LPC_QSPI, 1), /*!< QSPI is idle and ready for new transfer */
    kStatus_QSPI_UnsupportedCommand = MAKE_STATUS(kStatusGroup_LPC_QSPI, 5), /*!< Received unsupported QSPI command */
    kStatus_QSPI_DataSizeNotAligned = MAKE_STATUS(kStatusGroup_LPC_QSPI, 6), /*!< Transfer data size is not a multiple of 4 bytes */
    kStatus_QSPI_DataPointerNotAligned = MAKE_STATUS(kStatusGroup_LPC_QSPI, 7), /*!< Transfer data pointer is not 32-bit aligned */
    kStatus_QSPI_DataSizeExceeded = MAKE_STATUS(kStatusGroup_LPC_QSPI, 8), /*!< Transfer data size exceeds maximum */
};

/**
 * @brief QSPI transfer configuration structure.
 *
 * @details This structure defines a single QSPI transfer operation.
 * The transfer direction is automatically determined from the expectedCmd:
 * - Read commands (FASTREAD, READ2O, READ2IO, READ4O, READ4IO): TX operation (slave sends data)
 * - Write commands (PP, PP2O, PP4O, PP4IO): RX operation (slave receives data)
 */
typedef struct _qspi_transfer
{
    uint8_t *data;                        /*!< Pointer to TX or RX data buffer (must be 32-bit aligned) */
    size_t dataSize;                      /*!< Number of bytes to transfer (must be multiple of 4, min 4, max @ref QSPI_MAX_TRANSFER_SIZE) */
    qspi_cmd_t expectedCmd;               /*!< Expected QSPI command from master */
    qspi_address_bits_t expectedAddrBits; /*!< Expected address bit width (24 or 32 bits) */
} qspi_transfer_t;

/*! @brief Forward declaration of QSPI slave handle */
typedef struct _qspi_slave_handle qspi_slave_handle_t;

/**
 * @brief QSPI slave transfer completion callback function type.
 *
 * @details This callback is invoked when a transfer completes (successfully or with error).
 * The callback executes in interrupt context, so keep processing minimal.
 *
 * @param base QSPI peripheral base address
 * @param handle Pointer to the QSPI slave handle
 * @param status Transfer completion status:
 *               - kStatus_Success: Transfer completed successfully
 *               - Other values: Transfer error occurred
 * @param userData User-defined data passed during handle creation
 *
 * @note This callback executes in interrupt context. Avoid blocking operations.
 */
typedef void (*qspi_slave_callback_t)(QSPI_FLR_Type *base, qspi_slave_handle_t *handle, status_t status, void *userData);

/**
 * @brief Internal transfer handler function pointer type.
 *
 * @details This function pointer is used internally by the QSPI driver to handle
 * transfer-specific interrupt processing. The actual function assigned depends on
 * the transfer direction:
 *
 * - For TX transfers (read commands): Points to QSPI_TransferHandleTxIRQ()
 *   - Handles TX FIFO refilling during data transmission to master
 *   - Manages TX FIFO watermark adjustments and completion detection
 *
 * - For RX transfers (write commands): Points to QSPI_TransferHandleRxIRQ()
 *   - Handles RX FIFO data reading during data reception from master
 *   - Manages RX FIFO watermark adjustments and completion detection
 *
 * The function pointer is set during QSPI_SlaveTransferNonBlocking() based on
 * the expected command type and is called from QSPI_SlaveTransferHandleIRQ()
 * to perform the appropriate interrupt handling for the active transfer.
 *
 * @param base QSPI peripheral base address
 * @param handle Pointer to the QSPI slave handle containing transfer state
 *
 * @note This is an internal driver mechanism and should not be used directly
 * by application code.
 */
typedef void (*qspi_transfer_handler_t)(QSPI_FLR_Type *base, qspi_slave_handle_t *handle);

/**
 * @brief QSPI slave transfer handle structure.
 *
 * @details This structure maintains the state of an ongoing QSPI transfer.
 * It should be initialized using QSPI_SlaveTransferCreateHandle() and
 * not modified directly by the application.
 *
 * @warning Do not modify the contents of this structure directly. Use only the
 * provided API functions to interact with the handle.
 */
struct _qspi_slave_handle
{
    uint8_t *volatile data;                  /*!< Current position in transfer buffer */
    volatile size_t remainingBytes;          /*!< Number of bytes remaining to transfer */
    volatile uint32_t state;                 /*!< Current transfer state (kQSPI_Idle or kQSPI_Busy) */
    qspi_slave_callback_t callback;          /*!< User callback function for transfer completion */
    void *userData;                          /*!< User-defined data passed to callback */
    uint8_t txWatermark;                     /*!< TX FIFO watermark level (saved from config) */
    uint8_t rxWatermark;                     /*!< RX FIFO watermark level (saved from config) */
    qspi_transfer_handler_t transferHandler; /*!< Internal TX or RX interrupt handler */
};

/**
 * @brief QSPI slave interrupt handler function type.
 *
 * @details This function type is used internally by the FLEXCOMM system
 * to handle QSPI slave interrupts.
 */
typedef void (*flexcomm_qspi_slave_irq_handler_t)(QSPI_FLR_Type *base, qspi_slave_handle_t *handle);

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/**
 * @name Initialization and Configuration
 * @{
 */

/**
 * @brief Get the instance number for a QSPI peripheral base address.
 *
 * @details This function maps a QSPI peripheral base address to its corresponding
 * instance number. The instance number is used internally for interrupt handling
 * and peripheral identification.
 *
 * @param base QSPI peripheral base address
 * @return Instance number (0-based index)
 */
uint32_t QSPI_GetInstance(QSPI_FLR_Type *base);

/**
 * @brief Initialize QSPI slave configuration structure with default values.
 *
 * @details This function initializes the configuration structure with safe default values
 * suitable for most applications.
 *
 * After calling this function, you can modify specific fields as needed before
 * passing the configuration to QSPI_SlaveInit().
 *
 * @param config Pointer to slave configuration structure to initialize
 *
 * @note The config pointer must not be NULL.
 */
void QSPI_SlaveGetDefaultConfig(qspi_slave_config_t *config);

/**
 * @brief Initialize the QSPI peripheral in slave mode.
 *
 * @details This function performs complete initialization of the QSPI peripheral for slave operation.
 *
 * After successful initialization, the slave is ready to handle transfers
 * initiated by QSPI_SlaveTransferNonBlocking().
 *
 * @param base QSPI peripheral base address
 * @param config Pointer to slave configuration structure
 * @return Status of the initialization
 * @retval kStatus_Success Initialization completed successfully
 * @retval kStatus_InvalidArgument NULL pointer provided for base or config
 *
 * @note The QSPI peripheral must be in a reset state before calling this function.
 * @note This function does not configure pin muxing - pins must be configured separately.
 */
status_t QSPI_SlaveInit(QSPI_FLR_Type *base, const qspi_slave_config_t *config);

/**
 * @brief De-initialize the QSPI peripheral.
 *
 * @details This function performs a complete shutdown of the QSPI peripheral.
 *
 * After calling this function, the peripheral cannot be used until
 * QSPI_SlaveInit() is called again.
 *
 * @param base QSPI peripheral base address
 *
 * @note Any ongoing transfer will be aborted without notification.
 * @note Call QSPI_SlaveTransferAbort() first if you need to cleanly terminate
 *       an active transfer before de-initialization.
 */
void QSPI_Deinit(QSPI_FLR_Type *base);

/**
 * @brief Enable or disable TX DMA requests.
 *
 * @details This function controls whether the QSPI peripheral generates DMA requests
 * for TX FIFO operations. When enabled, the peripheral will request DMA transfers
 * when the TX FIFO level drops below the configured watermark.
 *
 * @param base QSPI peripheral base address
 * @param enable true to enable TX DMA requests, false to disable
 *
 * @note This function is typically used by the DMA driver (fsl_qspi_dma.c) and
 *       should not be called directly in most applications.
 * @note When DMA is enabled, TX FIFO level interrupts should be disabled to avoid
 *       conflicts between interrupt and DMA handling.
 */
void QSPI_EnableTxDMA(QSPI_FLR_Type *base, bool enable);

/**
 * @brief Enable or disable RX DMA requests.
 *
 * @details This function controls whether the QSPI peripheral generates DMA requests
 * for RX FIFO operations. When enabled, the peripheral will request DMA transfers
 * when the RX FIFO level reaches or exceeds the configured watermark.
 *
 * @param base QSPI peripheral base address
 * @param enable true to enable RX DMA requests, false to disable
 *
 * @note This function is typically used by the DMA driver (fsl_qspi_dma.c) and
 *       should not be called directly in most applications.
 * @note When DMA is enabled, RX FIFO level interrupts should be disabled to avoid
 *       conflicts between interrupt and DMA handling.
 */
void QSPI_EnableRxDMA(QSPI_FLR_Type *base, bool enable);

/**
 * @brief Enable or disable the QSPI slave peripheral.
 *
 * @details This function controls the QSPI peripheral enable bit. When disabled,
 * the peripheral will not respond to master transactions. When enabled, the
 * peripheral is active and ready to handle QSPI transfers.
 *
 * @param base QSPI peripheral base address
 * @param enable true to enable the peripheral, false to disable
 *
 * @note Disabling the peripheral during an active transfer may cause data loss
 *       or protocol violations.
 * @note The peripheral must be enabled before starting any transfers.
 */
static inline void QSPI_Enable(QSPI_FLR_Type *base, bool enable)
{
    if (enable)
    {
        base->CFG |= QSPI_FLR_CFG_ENABLE_MASK;
    }
    else
    {
        base->CFG &= ~QSPI_FLR_CFG_ENABLE_MASK;
    }
}

/*! @} */

/**
 * @name Transfer Handle Management
 * @{
 */

/**
 * @brief Initialize a QSPI slave transfer handle for non-blocking operations.
 *
 * @details This function initializes a transfer handle that manages the state and callbacks
 * for non-blocking QSPI transfer operations. The handle must be initialized before
 * it can be used with QSPI_SlaveTransferNonBlocking().
 *
 * The handle should be created once per QSPI instance and can be reused for
 * multiple transfers without needing to be recreated between transfers.
 *
 * @param base QSPI peripheral base address
 * @param handle Pointer to QSPI slave handle structure to initialize
 * @param callback User callback function invoked on transfer completion (may be NULL)
 * @param userData User-defined data passed to callback function (may be NULL)
 * @return Status of handle creation
 * @retval kStatus_Success Handle initialized successfully
 *
 * @note The handle structure must remain valid for the lifetime of all transfers.
 * @note The callback function executes in interrupt context - keep processing minimal.
 * @note If callback is NULL, no notification will be provided on transfer completion.
 */
status_t QSPI_SlaveTransferCreateHandle(QSPI_FLR_Type *base,
                                        qspi_slave_handle_t *handle,
                                        qspi_slave_callback_t callback,
                                        void *userData);

/*! @} */

/**
 * @name Non-blocking Transfer Operations
 * @{
 */

/**
 * @brief Start a non-blocking QSPI slave transfer.
 *
 * @details This function initiates a non-blocking QSPI transfer operation using interrupt-driven
 * FIFO management. The function configures the peripheral for the expected command and
 * returns immediately. The actual data transfer occurs asynchronously via interrupt handlers.
 *
 * Transfer flow:
 * 1. Validates transfer parameters (size, alignment, state)
 * 2. Configures command parameters (dummy cycles, address mode)
 * 3. Determines transfer direction from expected command
 * 4. Configures FIFOs for TX or RX operation
 * 5. Enables appropriate FIFO level interrupts
 * 6. Returns immediately - transfer proceeds in background
 * 7. Callback invoked on completion (if provided)
 *
 * Transfer direction is automatically determined from the expected command:
 * - Read commands (FASTREAD, READ2O, READ2IO, READ4O, READ4IO): TX operation
 *   Slave transmits data to master. Data flows from buffer to TX FIFO to master.
 * - Write commands (PP, PP2O, PP4O, PP4IO): RX operation
 *   Slave receives data from master. Data flows from master to RX FIFO to buffer.
 *
 * @param base QSPI peripheral base address
 * @param handle Pointer to initialized QSPI slave handle
 * @param xfer Pointer to transfer configuration structure
 * @return Status of transfer initiation
 * @retval kStatus_Success Transfer started successfully
 * @retval kStatus_InvalidArgument NULL pointer or invalid transfer size
 * @retval kStatus_QSPI_Busy Another transfer is already in progress
 * @retval kStatus_QSPI_UnsupportedCommand Invalid or unsupported command specified
 * @retval kStatus_QSPI_DataSizeNotAligned Transfer size not multiple of 4 bytes
 * @retval kStatus_QSPI_DataPointerNotAligned Data pointer not 32-bit aligned
 * @retval kStatus_QSPI_DataSizeExceeded Transfer size exceeds @ref QSPI_MAX_TRANSFER_SIZE bytes
 *
 * @note This function returns immediately - it does not wait for transfer completion.
 * @note Only one transfer can be active at a time per handle.
 * @note The transfer buffer must remain valid until the callback is invoked.
 * @note For transfers larger than @ref QSPI_MAX_TRANSFER_SIZE bytes, split into multiple transfers.
 */
status_t QSPI_SlaveTransferNonBlocking(QSPI_FLR_Type *base, qspi_slave_handle_t *handle, qspi_transfer_t *xfer);

/**
 * @brief Abort an ongoing QSPI slave transfer.
 *
 * @details This function immediately terminates the current transfer operation and resets
 * the peripheral to idle state. Any data remaining in the FIFOs or pending in the
 * transfer buffer is discarded.
 *
 * Important considerations:
 * - No callback is invoked when a transfer is aborted
 * - Partial data may have been transferred before abort
 * - The master may experience protocol errors if aborted mid-transfer
 * - The peripheral remains enabled and ready for new transfers
 *
 * @param base QSPI peripheral base address
 * @param handle Pointer to QSPI slave handle
 *
 * @note This function does not wait for the current FIFO operation to complete.
 * @note After abort, the handle can immediately be used for a new transfer.
 * @note Consider the impact on the master device when aborting mid-transfer.
 */
void QSPI_SlaveTransferAbort(QSPI_FLR_Type *base, qspi_slave_handle_t *handle);

/*! @} */

/**
 * @name Interrupt Handling
 * @{
 */

/**
 * @brief QSPI slave interrupt handler for transfer operations.
 *
 * @details This function handles QSPI slave interrupts during active transfers. It dispatches
 * to the appropriate transfer handler (TX or RX) based on the current transfer type.
 * The handler manages FIFO operations, watermark adjustments, and transfer completion
 * detection.
 *
 * Handler responsibilities:
 * - Services TX FIFO level interrupts (refills FIFO during TX transfers)
 * - Services RX FIFO level interrupts (reads FIFO during RX transfers)
 * - Adjusts FIFO watermarks dynamically as transfer progresses
 * - Detects transfer completion and invokes user callback
 * - Handles FIFO error conditions
 *
 * Interrupt sources handled:
 * - TX FIFO level interrupt (FIFO level at or below watermark)
 * - RX FIFO level interrupt (FIFO level at or above watermark)
 *
 * This function is typically called automatically by the FLEXCOMM interrupt dispatcher
 * and should not be called directly by application code. The FLEXCOMM system routes
 * QSPI interrupts to this handler based on the registration performed in
 * QSPI_SlaveTransferCreateHandle().
 *
 * @param base QSPI peripheral base address
 * @param handle Pointer to QSPI slave handle containing transfer state
 *
 * @note This function executes in interrupt context - keep processing minimal.
 * @note The function is registered automatically during handle creation.
 * @note Do not call this function directly from application code.
 */
void QSPI_SlaveTransferHandleIRQ(QSPI_FLR_Type *base, qspi_slave_handle_t *handle);

/*! @} */

/**
 * @name Command and Transfer Utilities
 * @{
 *
 * @brief Helper functions and utilities shared between QSPI implementations.
 *
 * @details These utility functions and lookup tables provide common functionality for command
 * validation, FIFO configuration, and transfer setup. They are designed to be reused
 * by both the standard interrupt-driven QSPI implementation (fsl_qspi.c) and the
 * DMA-based QSPI implementation (fsl_qspi_dma.c).
 *
 * These functions are implemented as static inline for optimal performance and to
 * avoid code duplication between the two driver implementations.
 */

/**
 * @brief Lookup table mapping QSPI commands to required dummy cycle counts.
 *
 * This table provides the hardware-specified dummy cycle requirements for each
 * supported QSPI command. The values are defined by the QSPI protocol specification
 * and cannot be changed.
 *
 * @note This table is indexed by @ref qspi_cmd_t enum values.
 * @note Values are in units of bits, not bytes.
 */
extern const uint8_t s_qspiDummyBitsLookup[];

/**
 * @brief Check if a QSPI command is a receive (write/program) command.
 *
 * @details Receive commands indicate that the slave will receive data from the master.
 * These are the Page Program (PP) family of commands.
 *
 * @param cmd QSPI command to check
 * @return true if command is a receive/write command, false otherwise
 *
 * @note This function is used internally to determine transfer direction.
 */
static inline bool QSPI_IsRxCommand(qspi_cmd_t cmd)
{
    return (cmd >= kQSPI_CMD_PP) && (cmd <= kQSPI_CMD_PP4IO);
}

/**
 * @brief Check if a QSPI command is a transmit (read) command.
 *
 * @details Transmit commands indicate that the slave will send data to the master.
 * These are the Read family of commands.
 *
 * @param cmd QSPI command to check
 * @return true if command is a transmit/read command, false otherwise
 *
 * @note This function is used internally to determine transfer direction.
 */
static inline bool QSPI_IsTxCommand(qspi_cmd_t cmd)
{
    return (cmd >= kQSPI_CMD_FASTREAD) && (cmd <= kQSPI_CMD_READ4IO);
}

/**
 * @brief Configure QSPI command parameters including dummy cycles and address mode.
 *
 * @details This function configures the peripheral's command/address/dummy cycle register
 * based on the expected command and address width. The dummy cycle count is
 * automatically selected from the lookup table based on the command type.
 *
 * Configuration includes:
 * - Dummy cycle count (from s_qspiDummyBitsLookup table)
 * - Address mode (24-bit or 32-bit)
 *
 * This configuration must be set before the master initiates the transfer to
 * ensure the slave correctly interprets the command phase.
 *
 * @param base QSPI peripheral base address
 * @param xfer Pointer to transfer configuration containing expected command and address mode
 *
 * @note This function is called automatically by QSPI_SlaveTransferNonBlocking().
 * @note The configuration is applied immediately and affects the next transfer.
 */
static inline void QSPI_ConfigureCommandParameters(QSPI_FLR_Type *base, qspi_transfer_t *xfer)
{
    base->QSPI_CMD_ADDR_MODE_DUMMY_CYL = s_qspiDummyBitsLookup[xfer->expectedCmd] | xfer->expectedAddrBits;
}

/**
 * @brief Configure QSPI FIFOs for transmit operation.
 *
 * @details This function prepares the QSPI peripheral for a TX transfer (slave sending data
 * to master). It performs the following configuration:
 *
 * After calling this function, the TX FIFO is ready to accept data for transmission
 * to the master.
 *
 * @param base QSPI peripheral base address
 *
 * @note This function is called automatically during TX transfer setup.
 * @note The RX FIFO is disabled to prevent spurious data accumulation.
 */
static inline void QSPI_ConfigureFifoForTx(QSPI_FLR_Type *base)
{
    /* Clear error flags before transfer */
    base->FIFOSTAT |= QSPI_FLR_FIFOSTAT_TXERR_MASK | QSPI_FLR_FIFOSTAT_RXERR_MASK;

    /* Configure FIFOs: disable RX, enable and clear TX */
    base->FIFOCFG &= ~QSPI_FLR_FIFOCFG_ENABLERX_MASK;
    base->FIFOCFG |= QSPI_FLR_FIFOCFG_ENABLETX_MASK | QSPI_FLR_FIFOCFG_EMPTYTX_MASK;
}

/**
 * @brief Configure QSPI FIFOs for receive operation.
 *
 * @details This function prepares the QSPI peripheral for an RX transfer (slave receiving
 * data from master). It performs the following configuration:
 *
 * After calling this function, the RX FIFO is ready to receive data from the master.
 *
 * @param base QSPI peripheral base address
 *
 * @note This function is called automatically during RX transfer setup.
 * @note The TX FIFO is disabled to prevent spurious transmissions.
 */
static inline void QSPI_ConfigureFifoForRx(QSPI_FLR_Type *base)
{
    /* Clear error flags before transfer */
    base->FIFOSTAT |= QSPI_FLR_FIFOSTAT_TXERR_MASK | QSPI_FLR_FIFOSTAT_RXERR_MASK;

    /* Configure FIFOs: disable TX, enable and clear RX */
    base->FIFOCFG &= ~QSPI_FLR_FIFOCFG_ENABLETX_MASK;
    base->FIFOCFG |= QSPI_FLR_FIFOCFG_ENABLERX_MASK | QSPI_FLR_FIFOCFG_EMPTYRX_MASK;
}

/*! @} */


#if defined(__cplusplus)
}
#endif

/*! @} */

#endif /* FSL_QSPI_H_*/
