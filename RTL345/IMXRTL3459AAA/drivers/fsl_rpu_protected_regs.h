/*
 * Copyright 2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/* Auto-generated file - do not edit manually */

#ifndef FSL_RPU_PROTECTED_REGS_H_
#define FSL_RPU_PROTECTED_REGS_H_

/*
 * RPU (Register Protection Unit) protection info.
 * <MOD>_START/END: address window [START, END) of a protected module (non-secure address).
 * Modules with RPU_<MOD>_PROTECTED_BITMAP protect single registers: bit n of word w is set when the
 * register at offset (w * 32 + n) * 4 from RPU_<MOD>_START is protected. The other modules are
 * protected as a whole.
 */

/* cgu: 37 protected registers */
#define RPU_CGU_START (0x40021000U)
#define RPU_CGU_END   (0x40021C00U)
#define RPU_CGU_PROTECTED_BITMAP_WORDS (3U)
#define RPU_CGU_PROTECTED_BITMAP \
    {0x07FFF6DCU, 0x1B100000U, 0x0060DB06U}
/* Protected registers as CGU_Type members: X(member, offset) */
#define RPU_CGU_PROTECTED_REGS(X) \
    X(FROL_CFG, 0x008U) \
    X(FRO_CFG, 0x00CU) \
    X(PLL_OSC_CFG, 0x010U) \
    X(NSS_FRO_CFG, 0x018U) \
    X(CDU_CFG, 0x01CU) \
    X(CTRLSS_CORERSTENSET, 0x024U) \
    X(CTRLSS_CORERSTENCLR, 0x028U) \
    X(CTRLSS_BUSRSTENSET, 0x030U) \
    X(CTRLSS_BUSRSTENCLR, 0x034U) \
    X(CTRLSS_CLKSEL0, 0x038U) \
    X(CTRLSS_CLKSEL1, 0x03CU) \
    X(CTRLSS_CLKCFG0, 0x040U) \
    X(CTRLSS_CLKCFG1, 0x044U) \
    X(CTIMER_CLKCFG, 0x048U) \
    X(FLEXCOMM_CLKCFG[0], 0x04CU) \
    X(FLEXCOMM_CLKCFG[1], 0x050U) \
    X(FLEXCOMM_CLKCFG[2], 0x054U) \
    X(FLEXCOMM_CLKCFG[3], 0x058U) \
    X(FLEXCOMM_CLKCFG[4], 0x05CU) \
    X(FLEXCOMM_CLKCFG[5], 0x060U) \
    X(PMRC_CLKCFG, 0x064U) \
    X(CTRLSS_WD_CLKCFG, 0x068U) \
    X(ADSS_CLKSEL, 0x0D0U) \
    X(ADSS_RSTENSET, 0x0E0U) \
    X(ADSS_RSTENCLR, 0x0E4U) \
    X(ADSS_CLKENSET, 0x0ECU) \
    X(ADSS_CLKENCLR, 0x0F0U) \
    X(ANC_DMIC_CLKENSET, 0x104U) \
    X(ANC_DMIC_CLKENCLR, 0x108U) \
    X(IRFIC, 0x120U) \
    X(NSS_CLKSEL, 0x124U) \
    X(NSS_RSTENSET, 0x12CU) \
    X(NSS_RSTENCLR, 0x130U) \
    X(NSS_CLKENSET, 0x138U) \
    X(NSS_CLKENCLR, 0x13CU) \
    X(VISION_CLKENSET, 0x154U) \
    X(VISION_CLKENCLR, 0x158U)

/* dswm: whole module */
#define RPU_DSWM_START (0x40022000U)
#define RPU_DSWM_END   (0x40023000U)

/* pmrc: 13 protected registers */
#define RPU_PMRC_START (0x40023000U)
#define RPU_PMRC_END   (0x40024000U)
#define RPU_PMRC_PROTECTED_BITMAP_WORDS (3U)
#define RPU_PMRC_PROTECTED_BITMAP \
    {0x0B010103U, 0x000000C2U, 0x10010008U}
/* Protected registers as PMRC_Type members: X(member, offset) */
#define RPU_PMRC_PROTECTED_REGS(X) \
    X(EXTRESETENABLE1, 0x000U) \
    X(EXTRESETENABLE2, 0x004U) \
    X(DCDCDIGCONTROL, 0x020U) \
    X(DCDCMEMCONTROL, 0x040U) \
    X(LDOCONTROL, 0x060U) \
    X(LDOMEMCONTROL, 0x064U) \
    X(VREFBIAS, 0x06CU) \
    X(MODECONTROL, 0x084U) \
    X(POWERFAILCONFIG, 0x098U) \
    X(SUPMON, 0x09CU) \
    X(TAMPERCTRL, 0x10CU) \
    X(PMICMODE, 0x140U) \
    X(SHORTCFG, 0x170U)

/* ocotp: whole module */
#define RPU_OCOTP_START (0x40024000U)
#define RPU_OCOTP_END   (0x40026000U)

/* adss: 4 protected registers */
#define RPU_ADSS_START (0x40028000U)
#define RPU_ADSS_END   (0x4002B000U)
#define RPU_ADSS_PROTECTED_BITMAP_WORDS (23U)
#define RPU_ADSS_PROTECTED_BITMAP \
    {0x00000001U, 0x00000000U, 0x00000000U, 0x00000000U, \
     0x00000000U, 0x00000000U, 0x00000000U, 0x00000000U, \
     0x00000000U, 0x00000000U, 0x00000000U, 0x00000000U, \
     0x00000000U, 0x00000000U, 0x00000000U, 0x00000000U, \
     0x00000000U, 0x00000000U, 0x00000000U, 0x00000000U, \
     0x00000000U, 0x00000000U, 0x00018001U}

/* mtr: whole module */
#define RPU_MTR_START (0x4002B000U)
#define RPU_MTR_END   (0x4002D000U)

#endif /* FSL_RPU_PROTECTED_REGS_H_ */
