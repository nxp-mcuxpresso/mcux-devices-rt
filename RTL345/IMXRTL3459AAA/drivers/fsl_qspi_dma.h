/*
 * Copyright 2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/**
 * @file fsl_qspi_dma.h
 * @brief QSPI DMA driver
 *
 * This driver extends the QSPI slave driver with DMA support for high-performance
 * data transfers. It provides DMA-accelerated transfer operations that reduce CPU overhead
 * and improve transfer efficiency for large data blocks.
 *
 * **Key Features:**
 * - DMA-accelerated TX and RX transfers
 * - Non-blocking transfer operations with callback notification
 * - Automatic FIFO management via DMA
 * - Support for all QSPI commands supported by the base driver
 * - Minimum transfer size of 4 bytes (one FIFO word)
 * - Maximum transfer size: @ref QSPI_MAX_TRANSFER_SIZE bytes (DMA limitation)
 * - Seamless integration with base QSPI slave driver
 *
 * **Usage Pattern:**
 * 1. Initialize base QSPI slave with QSPI_SlaveInit()
 * 2. Create DMA handles for TX and RX channels
 * 3. Create QSPI DMA handle with QSPI_SlaveTransferCreateHandleDMA()
 * 4. Start transfers with QSPI_SlaveTransferDMA()
 * 5. Handle completion in callback function
 *
 * @note This driver requires the base QSPI driver (fsl_qspi.h) and DMA driver (fsl_dma.h).
 * @warning Ensure DMA channels are properly configured before creating QSPI DMA handles.
 */

#ifndef FSL_QSPI_DMA_H_
#define FSL_QSPI_DMA_H_

#include "fsl_dma.h"
#include "fsl_qspi.h"

/*!
 * @addtogroup qspi_dma_driver QSPI DMA Driver
 * @ingroup qspi_driver
 * @brief DMA-accelerated QSPI slave driver for high-performance transfers
 * @{
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @name Driver version */
/*! @{ */
/*! @brief QSPI DMA driver version. */
#define FSL_QSPI_DMA_DRIVER_VERSION (MAKE_VERSION(1, 0, 0))
/*! @} */

/*! @brief Forward declaration of QSPI DMA handle structure */
typedef struct _qspi_dma_handle qspi_dma_handle_t;

/**
 * @brief QSPI DMA transfer completion callback function type.
 *
 * @details This callback is invoked when a DMA transfer completes successfully
 * or encounters an error. The callback executes in interrupt context,
 * so keep processing minimal and avoid blocking operations.
 *
 * @param base QSPI peripheral base address
 * @param handle Pointer to the QSPI DMA handle that completed the transfer
 * @param status Transfer completion status (kStatus_Success or error code)
 * @param userData User-defined data passed during handle creation
 */
typedef void (*qspi_dma_callback_t)(QSPI_FLR_Type *base, qspi_dma_handle_t *handle, status_t status, void *userData);

/**
 * @brief QSPI DMA transfer handle structure.
 *
 * @details This structure maintains the state and configuration for DMA-based
 * QSPI transfers. It should be initialized using QSPI_SlaveTransferCreateHandleDMA()
 * and not modified directly by the application.
 *
 * @warning Do not modify the contents of this structure directly. Use only the
 * provided API functions to interact with the handle.
 */
struct _qspi_dma_handle
{
    QSPI_FLR_Type *base;                  /*!< QSPI peripheral base address */
    volatile bool transferInProgress;     /*!< Flag indicating if transfer is in progress */
    dma_handle_t *txHandle;               /*!< DMA handle for QSPI transmit operations */
    dma_handle_t *rxHandle;               /*!< DMA handle for QSPI receive operations */
    qspi_slave_handle_t *slaveHandle;     /*!< Base QSPI slave handle for interrupt management */
    qspi_dma_callback_t callback;         /*!< User callback function for transfer completion */
    void *userData;                       /*!< User-defined data passed to callback */
    uint32_t state;                       /*!< Internal transfer state (idle/busy) */
    size_t transferSize;                  /*!< Total transfer size in bytes */
    uint32_t instance;                    /*!< QSPI instance number */
};

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/**
 * @name DMA Transfer Operations
 * @{
 */

/**
 * @brief Initialize the QSPI slave DMA handle.
 *
 * @details This function initializes a QSPI DMA handle that can be used for
 * DMA-accelerated transfer operations. The function sets up the necessary
 * DMA callbacks and configures the handle for both TX and RX operations.
 *
 * The provided DMA handles must be properly initialized and configured for
 * the appropriate DMA channels before calling this function. The slaveHandle
 * parameter will be initialized internally and should not be used directly
 * by the application.
 *
 * @param base QSPI peripheral base address
 * @param handle Pointer to QSPI DMA handle structure to initialize
 * @param slaveHandle Pointer to base QSPI slave handle (initialized internally)
 * @param callback User callback function called when transfers complete (may be NULL)
 * @param userData User-defined data passed to callback function (may be NULL)
 * @param txHandle Pointer to initialized DMA handle for TX operations
 * @param rxHandle Pointer to initialized DMA handle for RX operations
 * @return kStatus_Success if handle initialized successfully, kStatus_InvalidArgument otherwise
 *
 * @note Both txHandle and rxHandle must be valid, even if only one direction will be used.
 */
status_t QSPI_SlaveTransferCreateHandleDMA(QSPI_FLR_Type *base,
                                           qspi_dma_handle_t *handle,
                                           qspi_slave_handle_t *slaveHandle,
                                           qspi_dma_callback_t callback,
                                           void *userData,
                                           dma_handle_t *txHandle,
                                           dma_handle_t *rxHandle);

/**
 * @brief Perform a non-blocking QSPI transfer using DMA.
 *
 * @details This function initiates a DMA-based QSPI transfer operation. The function
 * returns immediately after starting the transfer, and completion is signaled via
 * the callback function specified during handle creation.
 *
 * The transfer direction (TX or RX) is automatically determined based on the
 * expected command type.
 *
 * @param base QSPI peripheral base address
 * @param handle Pointer to initialized QSPI DMA handle
 * @param xfer Pointer to transfer configuration structure
 * @return kStatus_Success if transfer started successfully
 * @retval kStatus_InvalidArgument Invalid parameter or transfer size less than 4 bytes
 * @retval kStatus_QSPI_Busy Another transfer is already in progress
 * @retval kStatus_QSPI_UnsupportedCommand Unsupported command specified
 * @retval kStatus_QSPI_DataSizeNotAligned Transfer size not multiple of 4 bytes
 * @retval kStatus_QSPI_DataPointerNotAligned Data pointer not 32-bit aligned
 * @retval kStatus_QSPI_DataSizeExceeded Transfer size exceeds @ref QSPI_MAX_TRANSFER_SIZE bytes
 *
 * @note This function returns immediately. Use the callback function to detect transfer completion.
 * @note The transfer buffer must remain valid until the transfer completes.
 */
status_t QSPI_SlaveTransferDMA(QSPI_FLR_Type *base, qspi_dma_handle_t *handle, qspi_transfer_t *xfer);

/*! @} */

#if defined(__cplusplus)
}
#endif

/*! @} */

#endif /* FSL_QSPI_DMA_H_*/