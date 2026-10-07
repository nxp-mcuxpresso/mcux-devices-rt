/*
 * Copyright 2025-2026 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#include "fsl_xspi_nor_flash.h"
#include "fsl_romapi_tree.h"

/*! @brief Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.romapi_flash"
#endif

/*!
 * @name flash
 * @{
 */

/*!
 * @brief Structure of version property.
 *
 * @ingroup flash_driver
 */

/*! @brief XSPI Flash driver API Interface */
typedef struct
{
    uint32_t version;
    status_t (*init)(uint32_t instance, xspi_nor_config_t *config);
    status_t (*page_program)(uint32_t instance, xspi_nor_config_t *config, uint32_t dstAddr, const uint32_t *src);
    status_t (*erase_all)(uint32_t instance, xspi_nor_config_t *config);
    status_t (*erase)(uint32_t instance, xspi_nor_config_t *config, uint32_t start, uint32_t length);
    status_t (*erase_sector)(uint32_t instance, xspi_nor_config_t *config, uint32_t address);
    status_t (*erase_block)(uint32_t instance, xspi_nor_config_t *config, uint32_t address);
    status_t (*get_config)(uint32_t instance, xspi_nor_config_t *config, serial_nor_config_option_t *option);
    status_t (*read)(uint32_t instance, xspi_nor_config_t *config, uint32_t *dst, uint32_t start, uint32_t bytes);
    status_t (*xfer)(uint32_t instance, xspi_xfer_t *xfer);
    status_t (*update_lut)(uint32_t instance, uint32_t seqIndex, const uint32_t *lutBase, uint32_t numberOfSeq);
    status_t (*set_clock_source)(uint32_t instance, uint32_t clockSrc);
    void (*config_clock)(uint32_t instance, uint32_t freqOption, uint32_t sampleClkMode);
    status_t (*partial_program)(
        uint32_t instance, xspi_nor_config_t *config, uint32_t dstAddr, const uint32_t *src, uint32_t length);
} xspi_nor_flash_driver_t;

/*! @}*/
_Static_assert(BOOTLOADER_API_TREE_POINTER != NULL, "Invalid ROMAPI tree pointer!");
#define XSPI_NOR_DRIVER  ((const xspi_nor_flash_driver_t *)BOOTLOADER_API_TREE_POINTER->xspiNorDriver)

/*******************************************************************************
 * Code
 ******************************************************************************/

/********************************************************************************
 * XSPI Nor driver API
 *******************************************************************************/

/*!
 * @brief Initialize XSPI NOR flash.
 *
 * This function initializes the XSPI NOR flash with the given configuration.
 */
status_t XSPI_NorFlash_Init(uint32_t instance, xspi_nor_config_t *config)
{
    return XSPI_NOR_DRIVER->init(instance, config);
}

/*!
 * @brief Program page data to XSPI NOR flash.
 *
 * This function programs data to the XSPI NOR flash at the specified address.
 */
status_t XSPI_NorFlash_ProgramPage(uint32_t instance,
                                      xspi_nor_config_t *config,
                                      uint32_t dstAddr,
                                      const uint32_t *src)
{
    return XSPI_NOR_DRIVER->page_program(instance, config, dstAddr, src);
}

/*!
 * @brief Erase all XSPI NOR flash.
 *
 * This function erases the entire XSPI NOR flash.
 */
status_t XSPI_NorFlash_EraseAll(uint32_t instance, xspi_nor_config_t *config)
{
    return XSPI_NOR_DRIVER->erase_all(instance, config);
}

/*!
 * @brief Erase XSPI NOR flash region.
 *
 * This function erases the specified region of XSPI NOR flash.
 */
status_t XSPI_NorFlash_Erase(uint32_t instance, xspi_nor_config_t *config, uint32_t start, uint32_t length)
{
    return XSPI_NOR_DRIVER->erase(instance, config, start, length);
}

/*!
 * @brief Erase XSPI NOR flash sector.
 *
 * This function erases a sector of XSPI NOR flash at the specified address.
 */
status_t XSPI_NorFlash_EraseSector(uint32_t instance, xspi_nor_config_t *config, uint32_t address)
{
    return XSPI_NOR_DRIVER->erase_sector(instance, config, address);
}

/*!
 * @brief Erase XSPI NOR flash block.
 *
 * This function erases a block of XSPI NOR flash at the specified address.
 */
status_t XSPI_NorFlash_EraseBlock(uint32_t instance, xspi_nor_config_t *config, uint32_t address)
{
    return XSPI_NOR_DRIVER->erase_block(instance, config, address);
}

/*!
 * @brief Get XSPI NOR flash configuration.
 *
 * This function gets the configuration of XSPI NOR flash.
 */
status_t XSPI_NorFlash_GetConfig(uint32_t instance, xspi_nor_config_t *config, serial_nor_config_option_t *option)
{
    return XSPI_NOR_DRIVER->get_config(instance, config, option);
}

/*!
 * @brief Read data from XSPI NOR flash.
 *
 * This function reads data from XSPI NOR flash at the specified address.
 */
status_t XSPI_NorFlash_Read(
    uint32_t instance, xspi_nor_config_t *config, uint32_t *dst, uint32_t start, uint32_t bytes)
{
    return XSPI_NOR_DRIVER->read(instance, config, dst, start, bytes);
}

/*!
 * @brief Perform XSPI transfer.
 *
 * This function performs a XSPI transfer operation.
 */
status_t XSPI_NorFlash_Xfer(uint32_t instance, xspi_xfer_t *xfer)
{
    return XSPI_NOR_DRIVER->xfer(instance, xfer);
}

/*!
 * @brief Update XSPI LUT.
 *
 * This function updates the XSPI Look-Up Table.
 */
status_t XSPI_NorFlash_UpdateLut(uint32_t instance, uint32_t seqIndex, const uint32_t *lutBase, uint32_t numberOfSeq)
{
    return XSPI_NOR_DRIVER->update_lut(instance, seqIndex, lutBase, numberOfSeq);
}

/*!
 * @brief Set XSPI clock source.
 *
 * This function sets the clock source for XSPI.
 */
status_t XSPI_NorFlash_SetClockSource(uint32_t instance, uint32_t clockSrc)
{
    return XSPI_NOR_DRIVER->set_clock_source(instance, clockSrc);
}

/*!
 * @brief Configure XSPI clock.
 *
 * This function configures the XSPI clock settings.
 */
void XSPI_NorFlash_ConfigClock(uint32_t instance, uint32_t freqOption, uint32_t sampleClkMode)
{
    XSPI_NOR_DRIVER->config_clock(instance, freqOption, sampleClkMode);
}

/*!
 * @brief Partial program data to XSPI NOR flash.
 *
 * This function performs partial programming of data to XSPI NOR flash.
 */
status_t XSPI_NorFlash_PartialProgram(
    uint32_t instance, xspi_nor_config_t *config, uint32_t dstAddr, const uint32_t *src, uint32_t length)
{
    return XSPI_NOR_DRIVER->partial_program(instance, config, dstAddr, src, length);
}
