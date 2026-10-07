/*
 * Copyright 2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef FSL_RPU_H_
#define FSL_RPU_H_

#include "fsl_common.h"

/*!
 * @addtogroup rpu
 * @{
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @name Driver version */
/*@{*/
/*! @brief RPU driver version 1.0.0 */
#define FSL_RPU_DRIVER_VERSION (MAKE_VERSION(1, 0, 0))
/*@}*/

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Write a register, unlocking it first if the RPU protects it.
 *
 * The protecting module (PMRC, CGU, ADSS, DSWM, OCOTP or MTR) follows from the register address. A protected
 * register is unlocked and written with interrupts disabled, so nothing can use up the unlock in between.
 * Any other register gets a plain write.
 *
 * @note Other bus masters (DMA, NSS) accessing the module between the unlock and the write break the sequence.
 *
 * @param reg   Address of the register.
 * @param value Value to write.
 */
void RPU_WriteReg(volatile uint32_t *reg, uint32_t value);

/*!
 * @brief Read-modify-write a register, unlocking it first if the RPU protects it.
 *
 * @param reg       Address of the register.
 * @param clearMask Bits to clear.
 * @param setMask   Bits to set.
 */
void RPU_ModifyReg(volatile uint32_t *reg, uint32_t clearMask, uint32_t setMask);

#if defined(__cplusplus)
}
#endif

/*! @}*/

#endif /* FSL_RPU_H_ */
