/*
 * Copyright 2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef FSL_RPU_H_
#define FSL_RPU_H_

#include "fsl_common.h"
#include "fsl_rpu_protected_regs.h"

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

/* Expands, once per protected register of a module, to a comparison of rpuOffset_ with its offset. */
#define RPU_PROTECTED_OFFSET_MATCH(member, offset) || (rpuOffset_ == (offset))

/*
 * The check is done at compile time on the register offset, so array elements (FLEXCOMM_CLKCFG[2]) work too.
 * The value is computed before the unlock: reading the register in between would use up the unlock.
 */
#define RPU_WRITE_PROTECTED(type, base, protectedRegs, unlockReg, member, value)                             \
    do                                                                                                       \
    {                                                                                                        \
        enum                                                                                                 \
        {                                                                                                    \
            rpuOffset_ = offsetof(type, member)                                                              \
        };                                                                                                   \
        _Static_assert(0 protectedRegs(RPU_PROTECTED_OFFSET_MATCH), #member " is not protected by the RPU"); \
        uint32_t rpuValue_ = (uint32_t)(value);                                                              \
        RPU->unlockReg     = (uint32_t)(uintptr_t)(&(base)->member);                                         \
        (base)->member     = rpuValue_;                                                                      \
    } while (false)

/*!
 * @name Writes to registers known to be protected
 *
 * For code where every cycle counts, such as the boot path: the unlock and the write, nothing else. No address
 * lookup, no interrupt masking. The register is named as a member of CGU_Type or PMRC_Type, with a constant index
 * for an array, and the macro only compiles if the RPU protects that register; a register that loses its
 * protection in a new device revision fails the build instead of the boot.
 *
 * @note Nothing may access the module between the unlock and the write: run with interrupts disabled, or use
 *       RPU_WriteReg(). Other bus masters (DMA, NSS) must not access the module either.
 * @{
 */

/*! @brief Write a protected CGU register, e.g. RPU_CGU_WRITE_PROTECTED(FROL_CFG, value). */
#define RPU_CGU_WRITE_PROTECTED(member, value) \
    RPU_WRITE_PROTECTED(CGU_Type, CGU, RPU_CGU_PROTECTED_REGS, UNLOCK_CGU_REG_ACCESS, member, value)

/*! @brief Read-modify-write a protected CGU register: the read comes before the unlock. */
#define RPU_CGU_MODIFY_PROTECTED(member, clearMask, setMask) \
    RPU_CGU_WRITE_PROTECTED(member, (CGU->member & ~(uint32_t)(clearMask)) | (uint32_t)(setMask))

/*! @brief Write a protected PMRC register, e.g. RPU_PMRC_WRITE_PROTECTED(VREFBIAS, value). */
#define RPU_PMRC_WRITE_PROTECTED(member, value) \
    RPU_WRITE_PROTECTED(PMRC_Type, PMRC, RPU_PMRC_PROTECTED_REGS, UNLOCK_PMRC_REG_ACCESS, member, value)

/*! @brief Read-modify-write a protected PMRC register: the read comes before the unlock. */
#define RPU_PMRC_MODIFY_PROTECTED(member, clearMask, setMask) \
    RPU_PMRC_WRITE_PROTECTED(member, (PMRC->member & ~(uint32_t)(clearMask)) | (uint32_t)(setMask))

/*! @} */

/*!
 * @name CGU writes by offset without the address lookup
 *
 * Like RPU_WriteReg() and RPU_ModifyReg() for CGU registers given by offset, for the boot path: the protection is
 * looked up in the CGU bitmap only, and interrupts are not masked. Where they are inlined with a constant offset,
 * the compiler can fold the lookup away. The same conditions as for the macros above apply.
 * @{
 */

/*! @brief True if the RPU protects the CGU register at this offset. */
static inline bool RPU_IsCguRegProtected(uint32_t offset)
{
    static const uint32_t s_cguProtected[RPU_CGU_PROTECTED_BITMAP_WORDS] = RPU_CGU_PROTECTED_BITMAP;
    uint32_t word = offset / 128U; /* 32 registers of 4 bytes per bitmap word */

    return (word < RPU_CGU_PROTECTED_BITMAP_WORDS) && (((s_cguProtected[word] >> ((offset >> 2U) & 31U)) & 1U) != 0U);
}

/*! @brief Write the CGU register at this offset, unlocking it first if the RPU protects it. */
static inline void RPU_WriteCguRegFast(uint32_t offset, uint32_t value)
{
    volatile uint32_t *reg = (volatile uint32_t *)(CGU_BASE + offset);

    if (RPU_IsCguRegProtected(offset))
    {
        RPU->UNLOCK_CGU_REG_ACCESS = (uint32_t)(uintptr_t)reg;
    }
    *reg = value;
}

/*! @brief Read-modify-write the CGU register at this offset: the read comes before the unlock. */
static inline void RPU_ModifyCguRegFast(uint32_t offset, uint32_t clearMask, uint32_t setMask)
{
    volatile uint32_t *reg = (volatile uint32_t *)(CGU_BASE + offset);

    RPU_WriteCguRegFast(offset, (*reg & ~clearMask) | setMask);
}

/*! @} */

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
