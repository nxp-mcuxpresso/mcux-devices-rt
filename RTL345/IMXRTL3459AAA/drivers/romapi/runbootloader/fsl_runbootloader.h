/*
 * Copyright 2025-2026 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef FSL_RUN_BOOTLOADER_H_
#define FSL_RUN_BOOTLOADER_H_

#include "fsl_common.h"

/*!
 * @addtogroup runbootloader_driver
 * @{
 */
/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @name Driver version */
/*@{*/
/*! @brief ROMAPI_RUNBOOTLOADER driver version 1.0.0. */
#define FSL_ROMAPI_RUNBOOTLOADER_DRIVER_VERSION (MAKE_VERSION(1, 0, 0))
/*@}*/

/*   API prototype fields definition.
| 31 : 24 |    23 : 20           |     19 : 16           |  15 : 12             |  11 : 8          |      6 : 5                    |      4 : 3                |
|   Tag   |   Boot mode          | ISP Interface         |  Instance            | Image Index      | recovery_boot_cfg1            | recovery_boot_cfg0        |
|  0xEB   | 0: Master boot mode  | 0 - UART              | 0 - XSPI0            | 0 - Boot image 0 | spi nor flash baudrate select | spi nor flash chip select |
|         | 1: ISP mode          | 1 - I2C               |                      | 1 - Boot image 1 |                               |                           |
|         | 2: Process FW        | 2 - SPI               |                      |                  |                               |                           |
|         |                      | 3 - QSPI              |                      |                  |                               |                           |
|         |                      | 4 - I3C               |                      |                  |                               |                           |
|         |                      | 8 - xSPI              |                      |                  |                               |                           |
|         |                      | 9 - SPI NOR           |                      |                  |                               |                           |
|         |                      | F - Auto detection    |                      |                  |                               |                           |
*/

#define BOOT_ARG_TAG (0xEBu)

/*!
 * @brief Boot mode can be selected by user application
 * @note  For master boot, valid boot insterfaces for user application are USART I2C SPI USB-HID USB-DFU SD MMC
 *        For ISP boot, valid boot interfaces for user application are USART I2C SPI
 */
enum
{
    kUserAppBootMode_MasterBoot = 0U,
    kUserAppBootMode_IspBoot = 1U,
    kUserAppBootMode_NxpProvFw = 2U,
};

/*!
 * @brief Serial Boot interface can be selected by user application
 */
enum
{
    kUserAppBootPeripheral_UART = 0u,
    kUserAppBootPeripheral_I2C = 1u,
    kUserAppBootPeripheral_SPI = 2u,
    kUserAppBootPeripheral_QSPI = 3u,
    kUserAppBootPeripheral_I3C = 4u,
    kUserAppBootPeripheral_XSPI = 8u,
    kUserAppBootPeripheral_SPI_NOR = 9u,
    kUserAppBootPeripheral_Auto = 0xFu,
};

typedef struct
{
    union
    {
        struct
        {
            uint32_t reserved : 4;
            uint32_t recovery_boot_cfg0 : 2;
            uint32_t recovery_boot_cfg1 : 2;
            uint32_t boot_image_index : 4;
            uint32_t instance : 4;
            uint32_t boot_interface : 4;
            uint32_t mode : 4;
            uint32_t tag : 8;
        } B;
        uint32_t U;
    } option;
} user_app_boot_invoke_option_t;

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
 * API
 ******************************************************************************/

/*!
 * @brief Run the Bootloader API  to force into the ISP mode base on the user arg
 *
 * @param arg Indicates API prototype fields definition. Refer to the above user_app_boot_invoke_option_t structure
 */
void ROMAPI_RunBootloader(void *arg);

#ifdef __cplusplus
}
#endif

/**
 * @}
 */

#endif /* FSL_RUN_BOOTLOADER_H_ */
