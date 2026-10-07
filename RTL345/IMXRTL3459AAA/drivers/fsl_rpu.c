/*
 * Copyright 2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_rpu.h"
#include "fsl_rpu_protected_regs.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.rpu"
#endif

/* Secure aliases (0x5xxxxxxx) are mapped onto the non-secure address (0x4xxxxxxx) before the window lookup. */
#define RPU_SECURE_ALIAS_MASK (0x10000000U)
#define RPU_NS_ADDR(addr)     ((uint32_t)(addr) & ~RPU_SECURE_ALIAS_MASK)

/*
 * The protected modules are 4 KB aligned, so the lookup indexes a table with one entry per 4 KB page,
 * from the first protected module (CGU) up to the end of the last one (MTR).
 */
#define RPU_PAGE_SHIFT   (12U)
#define RPU_PAGE_SIZE    (1UL << RPU_PAGE_SHIFT)
#define RPU_PAGE(addr)   (((addr)-RPU_CGU_START) >> RPU_PAGE_SHIFT)
#define RPU_PAGE_COUNT   RPU_PAGE(RPU_MTR_END)
#define RPU_BITMAP_BYTES (128U) /* Register bytes covered by one bitmap word: 32 registers of 4 bytes */

/* Protection of one 4 KB page. */
typedef struct _rpu_page
{
    uint32_t start;            /* Start address of the module the page belongs to */
    volatile uint32_t *unlock; /* Unlock register of the module. NULL: page not protected. */
    const uint32_t *bitmap;    /* Protected registers, see fsl_rpu_protected_regs.h. NULL: whole module. */
    uint32_t bitmapWords;
} rpu_page_t;

/* Page table entries: page i of a module protected per register, or protected as a whole. */
#define RPU_PAGE_REGS(mod, i, unlockReg, bitmapArray)                                         \
    [RPU_PAGE(RPU_##mod##_START) + (i)] = {RPU_##mod##_START, &RPU->unlockReg, (bitmapArray), \
                                           RPU_##mod##_PROTECTED_BITMAP_WORDS}
#define RPU_PAGE_MODULE(mod, i, unlockReg) \
    [RPU_PAGE(RPU_##mod##_START) + (i)] = {RPU_##mod##_START, &RPU->unlockReg, NULL, 0U}

/* Modules protected as a whole must fill their pages exactly; the page table below has one entry per page. */
_Static_assert((RPU_CGU_START % RPU_PAGE_SIZE) == 0U, "RPU page table needs 4 KB aligned modules");
_Static_assert((RPU_CGU_END - RPU_CGU_START) <= RPU_PAGE_SIZE, "CGU window spans more pages than in the page table");
_Static_assert((RPU_DSWM_END - RPU_DSWM_START) == RPU_PAGE_SIZE, "DSWM window does not match the page table");
_Static_assert((RPU_PMRC_END - RPU_PMRC_START) == RPU_PAGE_SIZE, "PMRC window does not match the page table");
_Static_assert((RPU_OCOTP_END - RPU_OCOTP_START) == (2U * RPU_PAGE_SIZE), "OCOTP window does not match the page table");
_Static_assert((RPU_ADSS_END - RPU_ADSS_START) == (3U * RPU_PAGE_SIZE), "ADSS window does not match the page table");
_Static_assert((RPU_MTR_END - RPU_MTR_START) == (2U * RPU_PAGE_SIZE), "MTR window does not match the page table");

/* The generated protection info must match the device header. */
#define RPU_CHECK_CGU_REG(member, offset) \
    _Static_assert(offsetof(CGU_Type, member) == (offset), "CGU_Type " #member " does not match the RPU info");
#define RPU_CHECK_PMRC_REG(member, offset) \
    _Static_assert(offsetof(PMRC_Type, member) == (offset), "PMRC_Type " #member " does not match the RPU info");
RPU_CGU_PROTECTED_REGS(RPU_CHECK_CGU_REG)
RPU_PMRC_PROTECTED_REGS(RPU_CHECK_PMRC_REG)
_Static_assert(RPU_NS_ADDR(CGU_BASE) == RPU_CGU_START, "CGU base does not match the RPU info");
_Static_assert(RPU_NS_ADDR(DSWM_BASE) == RPU_DSWM_START, "DSWM base does not match the RPU info");
_Static_assert(RPU_NS_ADDR(PMRC_BASE) == RPU_PMRC_START, "PMRC base does not match the RPU info");
_Static_assert(RPU_NS_ADDR(ADSS__CONFIG_BASE) == RPU_ADSS_START, "ADSS base does not match the RPU info");
_Static_assert(RPU_NS_ADDR(MTR__MTR_MASTER_BASE) == RPU_MTR_START, "MTR base does not match the RPU info");

/*******************************************************************************
 * Variables
 ******************************************************************************/
static const uint32_t s_rpuCguProtected[RPU_CGU_PROTECTED_BITMAP_WORDS]   = RPU_CGU_PROTECTED_BITMAP;
static const uint32_t s_rpuPmrcProtected[RPU_PMRC_PROTECTED_BITMAP_WORDS] = RPU_PMRC_PROTECTED_BITMAP;
static const uint32_t s_rpuAdssProtected[RPU_ADSS_PROTECTED_BITMAP_WORDS] = RPU_ADSS_PROTECTED_BITMAP;

/* Pages between the modules stay zero: not protected. */
static const rpu_page_t s_rpuPages[RPU_PAGE_COUNT] = {
    RPU_PAGE_REGS(CGU, 0U, UNLOCK_CGU_REG_ACCESS, s_rpuCguProtected),
    RPU_PAGE_MODULE(DSWM, 0U, UNLOCK_DSWM_MODULE_ACCESS),
    RPU_PAGE_REGS(PMRC, 0U, UNLOCK_PMRC_REG_ACCESS, s_rpuPmrcProtected),
    RPU_PAGE_MODULE(OCOTP, 0U, UNLOCK_OCOTP_MODULE_ACCESS),
    RPU_PAGE_MODULE(OCOTP, 1U, UNLOCK_OCOTP_MODULE_ACCESS),
    RPU_PAGE_REGS(ADSS, 0U, UNLOCK_ADSS_REG_ACCESS, s_rpuAdssProtected),
    RPU_PAGE_REGS(ADSS, 1U, UNLOCK_ADSS_REG_ACCESS, s_rpuAdssProtected),
    RPU_PAGE_REGS(ADSS, 2U, UNLOCK_ADSS_REG_ACCESS, s_rpuAdssProtected),
    RPU_PAGE_MODULE(MTR, 0U, UNLOCK_MTR_MODULE_ACCESS),
    RPU_PAGE_MODULE(MTR, 1U, UNLOCK_MTR_MODULE_ACCESS),
};

/*******************************************************************************
 * Code
 ******************************************************************************/

/* Unlock register for this register, or NULL if the write needs no unlock. */
static volatile uint32_t *RPU_GetUnlockReg(volatile uint32_t *reg)
{
    uint32_t addr = RPU_NS_ADDR((uintptr_t)reg);
    /* Addresses below the first module wrap around and fail the range check too. */
    uint32_t page = RPU_PAGE(addr);

    if (page >= RPU_PAGE_COUNT)
    {
        return NULL;
    }

    const rpu_page_t *entry = &s_rpuPages[page];

    if (entry->bitmap != NULL)
    {
        uint32_t offset = addr - entry->start;
        uint32_t word   = offset / RPU_BITMAP_BYTES;

        if ((word >= entry->bitmapWords) || (((entry->bitmap[word] >> ((offset >> 2U) & 31U)) & 1U) == 0U))
        {
            return NULL;
        }
    }

    return entry->unlock;
}

/*!
 * brief Write a register, unlocking it first if the RPU protects it.
 *
 * param reg   Address of the register.
 * param value Value to write.
 */
void RPU_WriteReg(volatile uint32_t *reg, uint32_t value)
{
    assert(reg != NULL);

    volatile uint32_t *unlock = RPU_GetUnlockReg(reg);

    if (unlock == NULL)
    {
        *reg = value;
        return;
    }

    uint32_t primask = DisableGlobalIRQ();

    /* The unlock takes the full address of the register; the write must be the next bus access. */
    *unlock = (uint32_t)(uintptr_t)reg;
    *reg    = value;

    EnableGlobalIRQ(primask);
}

/*!
 * brief Read-modify-write a register, unlocking it first if the RPU protects it.
 *
 * param reg       Address of the register.
 * param clearMask Bits to clear.
 * param setMask   Bits to set.
 */
void RPU_ModifyReg(volatile uint32_t *reg, uint32_t clearMask, uint32_t setMask)
{
    assert(reg != NULL);

    volatile uint32_t *unlock = RPU_GetUnlockReg(reg);

    if (unlock == NULL)
    {
        *reg = (*reg & ~clearMask) | setMask;
        return;
    }

    uint32_t primask = DisableGlobalIRQ();

    /* Read before the unlock: reads are not protected and would use up the unlock. */
    uint32_t value = (*reg & ~clearMask) | setMask;

    *unlock = (uint32_t)(uintptr_t)reg;
    *reg    = value;

    EnableGlobalIRQ(primask);
}
