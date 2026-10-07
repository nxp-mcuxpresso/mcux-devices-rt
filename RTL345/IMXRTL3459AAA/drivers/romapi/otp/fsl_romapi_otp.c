/*
 * Copyright 2024-2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_romapi_otp.h"
#include "fsl_romapi_tree.h"

/*! @brief Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.romapi_otp"
#endif

_Static_assert(BOOTLOADER_API_TREE_POINTER != NULL, "Invalid ROMAPI tree pointer!");
#define OCOTP_API_TREE ((const ocotp_driver_t *)BOOTLOADER_API_TREE_POINTER->efuseDriver)

/*!
 * @brief Initialize OCOTP controller
 */
uint32_t otp_version(void)
{
    return (OCOTP_API_TREE->version);
}

/*!
 * @brief Initialize OCOTP controller
 */
void otp_init(uint32_t src_clk_freq)
{
    OCOTP_API_TREE->init(src_clk_freq);
}

/*!
 * @brief Deinitialize OCOTP controller
 */
void otp_deinit(void)
{
    OCOTP_API_TREE->deinit();
}

/*!
 * @brief Reads a efuse word
 */
status_t otp_fuse_read(uint32_t addr, uint32_t *data)
{
    return OCOTP_API_TREE->p_efuse_read(addr, data);
}

/*!
 * @brief Programs a efuse word
 */
status_t otp_fuse_program(uint32_t addr, uint32_t data)
{
    return OCOTP_API_TREE->p_efuse_program(addr, data);
}
