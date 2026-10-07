/*
 * Copyright 2025-2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_clock.h"
#include "fsl_rpu.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.clock"
#endif

/*! @brief Descriptor mapping a named leaf clock to its clock path.
 *
 * The RTL345 clock tree is uniformly regular: every leaf is fed by a 2-bit
 * CLKSEL selector followed by a divider (raw value = divide ratio; 0 selects
 * the maximum division of 2^width). This descriptor records

 * only the pieces needed to walk that path at run time:
 *
 *   sel    : an attach id whose register offset / selector shift / field width
 *            identify the selector field for this leaf. The selector VALUE
 *            baked into the id is irrelevant; CLOCK_GetFreq reads the LIVE value
 *            programmed in hardware.
 *   div    : the divider name, or kCLOCK_DivNone when the leaf has no divider.
 *   extSel : for the two-stage ADSS dataports, the 1-bit int/ext selector
 *            (kINT/kEXT_to_ADSS_DPn). kNONE_to_NONE for all single-stage leaves.
 *
 * The generic CLOCK_GetFreq reads the live 2-bit selector value and casts it
 * directly to clock_source_t: this is valid because the CLKSEL decode
 * (00=FROL, 01=FRO, 10=NSSFRO, 11=PLL) matches clock_source_t numerically.
 */
typedef struct _clock_freq_desc
{
    clock_attach_id_t sel;    /*!< Single-stage 2-bit selector (offset/shift/width used). */
    clock_div_name_t  div;    /*!< Divider, or kCLOCK_DivNone for pass-through.            */
    clock_attach_id_t extSel; /*!< Two-stage int/ext gate, or kNONE_to_NONE if not used.   */
} clock_freq_desc_t;

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*! @brief Frequency associated with each leaf clock source, indexed by
 *  clock_source_t. These are the analogue FRO sources whose trimmed output
 *  frequency in Hz cannot be read from the CGU register map:
 *    [kCLOCK_SrcFrol]   FROL, seeded to CLOCK_FROL_DEFAULT_FREQ (20 MHz).
 *    [kCLOCK_SrcFro]    FRO,     not available on the current hardware.
 *    [kCLOCK_SrcNssFro] NSS FRO, not available on the current hardware.
 *  The PLL is not represented here: its output is computed on demand from its
 *  selected input source and divide fields, so the array only spans the three
 *  leaf sources. */
static uint32_t s_clockSourceFreq[3] = {CLOCK_FROL_DEFAULT_FREQ, 0U, 0U};

/*! @brief Per-leaf clock path descriptor table indexed by clock_name_t.
 *
 * C99 designated initializers keep each row visually aligned with its clock
 * name and tolerate future enum reordering. Any name without an explicit row
 * defaults to all-zero, which is caught by the kNONE_to_NONE / bounds checks in
 * CLOCK_GetFreq and reported as 0 Hz.
 */
static const clock_freq_desc_t s_clockFreqDesc[kCLOCK_ClockNameCount] = {
    /* Legacy aliases: CM55 core / main AHB bus. */
    [kCLOCK_MainClk]     = {kFROL_to_MAIN_CLK, kCLOCK_DivCpuAhb, kNONE_to_NONE},
    [kCLOCK_CoreSysClk]  = {kFROL_to_MAIN_CLK, kCLOCK_DivCpuAhb, kNONE_to_NONE},
    [kCLOCK_SYSTEM_CLK]  = {kFROL_to_MAIN_CLK, kCLOCK_DivCpuAhb, kNONE_to_NONE},
    [kCLOCK_BusClk]      = {kFROL_to_MAIN_CLK, kCLOCK_DivCpuAhb, kNONE_to_NONE},

    /* Control subsystem (CSS). */
    [kCLOCK_TpiuClk]       = {kFROL_to_TPIU,     kCLOCK_DivTpiu,          kNONE_to_NONE},
    [kCLOCK_OsTimerClk]    = {kFROL_to_MAIN_CLK, kCLOCK_DivOsTimer,      kNONE_to_NONE},
    [kCLOCK_WatchdogClk]   = {kFROL_to_MAIN_CLK, kCLOCK_DivWatchdog,      kNONE_to_NONE},
    [kCLOCK_XspiAhbClk]    = {kFROL_to_XSPI,     kCLOCK_DivXspiAhb,       kNONE_to_NONE},
    [kCLOCK_XspiClk]       = {kFROL_to_XSPI,     kCLOCK_DivXspi,          kNONE_to_NONE},
    [kCLOCK_UtickClk]      = {kFROL_to_UTICK,    kCLOCK_DivUtick,         kNONE_to_NONE},
    [kCLOCK_MeasRefClk]    = {kFROL_to_MEAS_REF, kCLOCK_DivFreqMeasRef,   kNONE_to_NONE},
    [kCLOCK_MeasTargetClk] = {kFROL_to_MEAS_TARGET, kCLOCK_DivFreqMeasTarget, kNONE_to_NONE},
    [kCLOCK_GdetClk]       = {kFROL_to_GDET,     kCLOCK_DivGdet,          kNONE_to_NONE},
    [kCLOCK_I3cClk]        = {kFROL_to_I3C,      kCLOCK_DivI3c,           kNONE_to_NONE},
    [kCLOCK_PmrcClk]       = {kFROL_to_PMRC,     kCLOCK_DivPmrc,          kNONE_to_NONE},
    [kCLOCK_MemCtrlClk]    = {kFROL_to_PMRC,     kCLOCK_DivMemCtrl,       kNONE_to_NONE},

    /* CTIMER 0..4. */
    [kCLOCK_Ctimer0ClkFreq] = {kFROL_to_CTIMER0, kCLOCK_DivCtimer0, kNONE_to_NONE},
    [kCLOCK_Ctimer1ClkFreq] = {kFROL_to_CTIMER1, kCLOCK_DivCtimer1, kNONE_to_NONE},
    [kCLOCK_Ctimer2ClkFreq] = {kFROL_to_CTIMER2, kCLOCK_DivCtimer2, kNONE_to_NONE},
    [kCLOCK_Ctimer3ClkFreq] = {kFROL_to_CTIMER3, kCLOCK_DivCtimer3, kNONE_to_NONE},
    [kCLOCK_Ctimer4ClkFreq] = {kFROL_to_CTIMER4, kCLOCK_DivCtimer4, kNONE_to_NONE},

    /* FLEXCOMM 0..5. */
    [kCLOCK_Flexcomm0ClkFreq] = {kFROL_to_FLEXCOMM0, kCLOCK_DivFlexcomm0, kNONE_to_NONE},
    [kCLOCK_Flexcomm1ClkFreq] = {kFROL_to_FLEXCOMM1, kCLOCK_DivFlexcomm1, kNONE_to_NONE},
    [kCLOCK_Flexcomm2ClkFreq] = {kFROL_to_FLEXCOMM2, kCLOCK_DivFlexcomm2, kNONE_to_NONE},
    [kCLOCK_Flexcomm3ClkFreq] = {kFROL_to_FLEXCOMM3, kCLOCK_DivFlexcomm3, kNONE_to_NONE},
    [kCLOCK_Flexcomm4ClkFreq] = {kFROL_to_FLEXCOMM4, kCLOCK_DivFlexcomm4, kNONE_to_NONE},
    [kCLOCK_Flexcomm5ClkFreq] = {kFROL_to_FLEXCOMM5, kCLOCK_DivFlexcomm5, kNONE_to_NONE},

    /* Audio/DSP subsystem (ADSS), all fed by the ADSS main selector. */
    [kCLOCK_DspClk]         = {kFROL_to_ADSS_MAIN, kCLOCK_DivDsp,         kNONE_to_NONE},
    [kCLOCK_HsiClk]         = {kFROL_to_ADSS_MAIN, kCLOCK_DivHsi,         kNONE_to_NONE},
    [kCLOCK_SyncSrcClk]     = {kFROL_to_ADSS_MAIN, kCLOCK_DivSyncSrc,     kNONE_to_NONE},
    [kCLOCK_UartDssClk]     = {kFROL_to_ADSS_MAIN, kCLOCK_DivUartDss,     kNONE_to_NONE},
    [kCLOCK_SdmaClk]        = {kFROL_to_ADSS_MAIN, kCLOCK_DivSdma,        kNONE_to_NONE},
    [kCLOCK_TimerClk]       = {kFROL_to_ADSS_MAIN, kCLOCK_DivTimer,       kNONE_to_NONE},
    [kCLOCK_McTimerClk]     = {kFROL_to_ADSS_MAIN, kCLOCK_DivMcTimer,     kNONE_to_NONE},
    [kCLOCK_WatchdogDssClk] = {kFROL_to_ADSS_MAIN, kCLOCK_DivWatchdogDss, kNONE_to_NONE},

    /* ADSS dataports: two-stage int-source selector then int/ext gate. */
    [kCLOCK_Dataport0Clk] = {kFROL_to_ADSS_DP0_INT, kCLOCK_DivDataport0, kINT_to_ADSS_DP0},
    [kCLOCK_Dataport1Clk] = {kFROL_to_ADSS_DP1_INT, kCLOCK_DivDataport1, kINT_to_ADSS_DP1},
    [kCLOCK_Dataport2Clk] = {kFROL_to_ADSS_DP2_INT, kCLOCK_DivDataport2, kINT_to_ADSS_DP2},
    [kCLOCK_Dataport3Clk] = {kFROL_to_ADSS_DP3_INT, kCLOCK_DivDataport3, kINT_to_ADSS_DP3},

    /* IRFIC has no dedicated selector attach id in the header; per design it is
       sourced from the ADSS main selector followed by the IRFIC divider. */
    [kCLOCK_IrficClk] = {kFROL_to_ADSS_MAIN, kCLOCK_DivIrfic, kNONE_to_NONE},

    /* Neural subsystem (NSS). */
    [kCLOCK_NssBusClk]  = {kFROL_to_NSS_MAIN, kCLOCK_DivNssBus,  kNONE_to_NONE},
    [kCLOCK_NssXspiClk] = {kFROL_to_NSS_XSPI, kCLOCK_DivNssXspi, kNONE_to_NONE},

    /* Vision: selector only, no divider. */
    [kCLOCK_VisionClk] = {kFROL_to_VISION, kCLOCK_DivNone, kNONE_to_NONE},
};

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*! @brief Return a pointer to the primary *_CFG register for a clock source. */
static volatile uint32_t *CLOCK_GetSourceCfgReg(clock_source_t src);

/*! @brief Write a CGU register through the RPU. */
static void CLOCK_WriteCguReg(uint32_t reg_offset, uint32_t value);

/*! @brief Read-modify-write a CGU register through the RPU. */
static void CLOCK_ModifyCguReg(uint32_t reg_offset, uint32_t clearMask, uint32_t setMask);


/*******************************************************************************
 * Code
 ******************************************************************************/

/* Every CGU write goes through the RPU driver, which unlocks only the protected registers. */
static void CLOCK_WriteCguReg(uint32_t reg_offset, uint32_t value)
{
    RPU_WriteReg((volatile uint32_t *)(CGU_BASE + reg_offset), value);
}

static void CLOCK_ModifyCguReg(uint32_t reg_offset, uint32_t clearMask, uint32_t setMask)
{
    RPU_ModifyReg((volatile uint32_t *)(CGU_BASE + reg_offset), clearMask, setMask);
}

/*
 * brief Enable the clock for specific IP.
 * param clk : Clock to be enabled.
 * return kStatus_Success on success.
 */
status_t CLOCK_EnableClock(clock_ip_name_t clk)
{
    uint32_t reg_offset = CLK_GATE_ABSTRACT_REG_OFFSET(clk);
    uint32_t bitMask    = 1UL << CLK_GATE_ABSTRACT_BITS_SHIFT(clk);

    if (clk == kCLOCK_GateNotAvail)
    {
        return kStatus_InvalidArgument;
    }

    if ((reg_offset == CGU_REG_OFFSET(CTRLSS_CLK_GATE_OVERRIDE)) ||
        (reg_offset == CGU_REG_OFFSET(ADSS_CLK_GATE_OVERRIDE)))
    {
        /* Read-modify-write: setting bit overrides clock gating (clock runs continuously).
           Both the CTRLSS and ADSS gate-override registers are standalone RMW
           registers with no SET/CLR alias, so update the bit in place. */
        CLOCK_ModifyCguReg(reg_offset, 0U, bitMask);
    }
    else
    {
        /* SET register: write 1 to enable the clock gate */
        CLOCK_WriteCguReg(reg_offset, bitMask);
    }

    return kStatus_Success;
}

/*
 * brief Disable the clock for specific IP.
 * param clk : Clock to be Disabled.
 * return kStatus_Success on success.
 * return kStatus_Fail if clk is a watchdog clock gate (kCLOCK_WdtPeriph or
 *        kCLOCK_Watchdog), which are enable-only and cannot be disabled.
 */
status_t CLOCK_DisableClock(clock_ip_name_t clk)
{
    uint32_t reg_offset = CLK_GATE_ABSTRACT_REG_OFFSET(clk);
    uint32_t bitMask    = 1UL << CLK_GATE_ABSTRACT_BITS_SHIFT(clk);

    /* The watchdog clock gates are write-once/enable-only: once enabled they
       cannot be disabled by software. Reject a disable request for them. */
    if ((clk == kCLOCK_WdtPeriph) || (clk == kCLOCK_Watchdog) || (clk == kCLOCK_GateNotAvail))
    {
        return kStatus_InvalidArgument;
    }

    if ((reg_offset == CGU_REG_OFFSET(CTRLSS_CLK_GATE_OVERRIDE)) ||
        (reg_offset == CGU_REG_OFFSET(ADSS_CLK_GATE_OVERRIDE)))
    {
        /* Read-modify-write: clearing bit re-enables automatic clock gating (HW controlled).
           Both the CTRLSS and ADSS gate-override registers are standalone RMW
           registers with no SET/CLR alias, so clear the bit in place. */
        CLOCK_ModifyCguReg(reg_offset, bitMask, 0U);
    }
    else
    {
        /* CLR register is at SET offset + 4: write 1 to disable the clock gate */
        CLOCK_WriteCguReg(reg_offset + 4U, bitMask);
    }

    return kStatus_Success;
}

/* Clock Selection for IP */
/*
 * brief   Configure the clock selection muxes.
 * param   connection  : Clock to be configured.
 * return  Nothing
 */
void CLOCK_AttachClk(clock_attach_id_t connection)
{
    const uint32_t reg_offset     = CLK_ATTACH_REG_OFFSET(connection);
    const uint32_t selector_shift = CLK_ATTACH_SELECTOR_SHIFT(connection);
    const uint32_t clk_sel        = CLK_ATTACH_CLK_SEL(connection);
    const uint32_t width          = CLK_ATTACH_SEL_WIDTH(connection);
    /* Build a mask sized to the selector field width so that 1-bit selectors
       (e.g. ADSS EXT_SEL) do not corrupt adjacent bits. */
    const uint32_t field_mask     = (((1UL << width) - 1UL) << selector_shift);

    if (kNONE_to_NONE != connection)
    {
        CLOCK_ModifyCguReg(reg_offset, field_mask, ((uint32_t)clk_sel << selector_shift));
    }
}

/*
 * brief   Get the actual clock attach id.
 * This fuction uses the offset in input attach id, then it reads the actual
 * source value in the register and combine the offset to obtain an actual
 * attach id.
 * value.
 */
clock_attach_id_t CLOCK_GetClockAttachId(clock_attach_id_t connection)
{
    if (kNONE_to_NONE == connection)
    {
        return kNONE_to_NONE;
    }

    const uint32_t reg_offset     = CLK_ATTACH_REG_OFFSET(connection);
    const uint32_t selector_shift = CLK_ATTACH_SELECTOR_SHIFT(connection);
    const uint32_t width          = CLK_ATTACH_SEL_WIDTH(connection);
    const uint32_t field_mask     = ((1UL << width) - 1UL);

    const volatile uint32_t *pClkCtrl = (const volatile uint32_t *)(CGU_BASE + reg_offset);

    /* Read the selector value currently programmed in hardware. */
    const uint32_t actual_sel = (*pClkCtrl >> selector_shift) & field_mask;

    /* Wider selectors (e.g. the 4-bit MEAS_REF/MEAS_TARGET) have sources beyond PLL
       that cannot be encoded in an attach id. */
    if (actual_sel > CLK_ATTACH_CLK_SEL_MASK)
    {
        return kNONE_to_NONE;
    }

    /* Rebuild an attach id preserving the register offset, selector shift and
       field width but with the actual selector value read from the register. */
    const uint32_t base = (uint32_t)connection & ~((uint32_t)CLK_ATTACH_CLK_SEL_MASK);

    return (clock_attach_id_t)(base | (actual_sel & CLK_ATTACH_CLK_SEL_MASK));
}

/* Set the clock divider value.
 *
 * The raw field value is the direct divide ratio: value N (N != 0) selects
 * divide-by-N. A value of 0 selects the maximum division of 2^width (e.g. an
 * 8-bit field with value 0 divides by 256). The value is written verbatim to
 * the field. */

void CLOCK_SetClockDiv(clock_div_name_t div_name, uint32_t value)
{
    if (div_name == kCLOCK_DivNone)
    {
        return;
    }

    const uint32_t reg_offset = CLK_DIV_REG_OFFSET(div_name);
    const uint32_t bit_shift  = CLK_DIV_BIT_SHIFT(div_name);
    const uint32_t max_value  = (CLK_DIV_BIT_WIDTH(div_name) == 32U) ? 0xFFFFFFFFU : 
                                ((1UL << CLK_DIV_BIT_WIDTH(div_name)) - 1UL);

    assert(value <= max_value);

    /* Clear the divider field and set new value */
    CLOCK_ModifyCguReg(reg_offset, (max_value << bit_shift), ((value << bit_shift) & (max_value << bit_shift)));
}

/* Get the clock divider value */
uint32_t CLOCK_GetClockDiv(clock_div_name_t div_name)
{
    if (div_name == kCLOCK_DivNone)
    {
        return 0U;
    }

    const uint32_t reg_offset = CLK_DIV_REG_OFFSET(div_name);
    const uint32_t bit_shift  = CLK_DIV_BIT_SHIFT(div_name);
    const uint32_t max_value  = (CLK_DIV_BIT_WIDTH(div_name) == 32U) ? 0xFFFFFFFFU :
                                ((1UL << CLK_DIV_BIT_WIDTH(div_name)) - 1UL);

    const volatile uint32_t *pClkDiv = (const volatile uint32_t *)(CGU_BASE + reg_offset);

    return (*pClkDiv >> bit_shift) & max_value;
}

/* Configure a Flexcomm serial clock divider chain (clkdiv + FRD). */
status_t CLOCK_SetFlexcommClkDiv(uint32_t id, uint32_t clkDiv, uint32_t frdMult, uint32_t frdDiv)
{
    if ((id >= (uint32_t)CGU_FLEXCOMM_CLKCFG_COUNT) ||
        (clkDiv > (CGU_FLEXCOMM_CLKCFG_CLKDIV_MASK >> CGU_FLEXCOMM_CLKCFG_CLKDIV_SHIFT)) ||
        (frdMult > (CGU_FLEXCOMM_CLKCFG_FRD_MULT_MASK >> CGU_FLEXCOMM_CLKCFG_FRD_MULT_SHIFT)) ||
        (frdDiv > (CGU_FLEXCOMM_CLKCFG_FRD_DIV_MASK >> CGU_FLEXCOMM_CLKCFG_FRD_DIV_SHIFT)))
    {
        return kStatus_InvalidArgument;
    }

    /* Write clkdiv, frd_mult and frd_div in a single register update. */
    CLOCK_WriteCguReg(CGU_REG_OFFSET(FLEXCOMM_CLKCFG) + (id * 4U),
                      CGU_FLEXCOMM_CLKCFG_CLKDIV(clkDiv) | CGU_FLEXCOMM_CLKCFG_FRD_MULT(frdMult) |
                          CGU_FLEXCOMM_CLKCFG_FRD_DIV(frdDiv));

    return kStatus_Success;
}

/* brief Return Frequency of selected clock
 * return Frequency of selected clock
 */
uint32_t CLOCK_GetFreq(clock_name_t clockName)
{
    if ((uint32_t)clockName >= (uint32_t)kCLOCK_ClockNameCount)
    {
        return 0U;
    }

    const clock_freq_desc_t *pDesc = &s_clockFreqDesc[(uint32_t)clockName];

    /* A row that was never populated has sel == 0 (not a valid selector). */
    if (pDesc->sel == kNONE_to_NONE)
    {
        return 0U;
    }

    /* Two-stage dataports: when the int/ext gate selects the external source,
       the clock comes from off-chip and its frequency is not known here. */
    if (pDesc->extSel != kNONE_to_NONE)
    {
        clock_attach_id_t liveExt = CLOCK_GetClockAttachId(pDesc->extSel);
        if (CLK_ATTACH_CLK_SEL(liveExt) != 0U)
        {
            return 0U;
        }
    }

    /* Read the live 2-bit selector value from hardware and reuse it directly as
       the clock source: the CLKSEL decode matches clock_source_t numerically. */
    clock_attach_id_t liveSel = CLOCK_GetClockAttachId(pDesc->sel);
    if (liveSel == kNONE_to_NONE)
    {
        return 0U;
    }
    clock_source_t    src     = (clock_source_t)CLK_ATTACH_CLK_SEL(liveSel);
    uint32_t          freq    = CLOCK_GetClockSourceFreq(src);

    /* Apply the divider. The raw field value is the direct divide ratio, except
       that a value of 0 selects the maximum division of 2^width (e.g. an 8-bit
       field with value 0 divides by 256). */
    if (pDesc->div != kCLOCK_DivNone)
    {
        uint32_t divVal = CLOCK_GetClockDiv(pDesc->div);

        if (divVal == 0U)
        {
            uint32_t divWidth = CLK_DIV_BIT_WIDTH(pDesc->div);

            /* value 0 => divide by 2^width. Widths are at most 16 bits on this
               device except the 32-bit watchdog divider, whose 2^32 divisor
               exceeds any source frequency and therefore yields 0 Hz. */
            if (divWidth >= 32U)
            {
                freq = 0U;
            }
            else
            {
                freq /= (1UL << divWidth);
            }
        }
        else
        {
            freq /= divVal;
        }
    }

    /* Flexcomm leaves have an extra fractional divider (FRD) followed by a
       fixed /2 stage after the integer clkdiv computed above:
         F_pulsed = F_prediv / (1 + frd_mult / (frd_div + 1))
                  = F_prediv * (frd_div + 1) / (frd_div + 1 + frd_mult)
         F_fc     = F_pulsed / 2
       Programming frd_mult to 0 bypasses the FRD (F_pulsed = F_prediv). The
       fractional form is evaluated in 64-bit integer arithmetic to stay exact
       and avoid floating point. */
    if (((uint32_t)clockName >= (uint32_t)kCLOCK_Flexcomm0ClkFreq) &&
        ((uint32_t)clockName <= (uint32_t)kCLOCK_Flexcomm5ClkFreq))
    {
        uint32_t id  = (uint32_t)clockName - (uint32_t)kCLOCK_Flexcomm0ClkFreq;
        uint32_t cfg = ((CGU_Type *)CGU_BASE)->FLEXCOMM_CLKCFG[id];

        uint32_t frdMult = (cfg & CGU_FLEXCOMM_CLKCFG_FRD_MULT_MASK) >> CGU_FLEXCOMM_CLKCFG_FRD_MULT_SHIFT;
        uint32_t frdDiv  = (cfg & CGU_FLEXCOMM_CLKCFG_FRD_DIV_MASK) >> CGU_FLEXCOMM_CLKCFG_FRD_DIV_SHIFT;

        if (frdMult != 0U)
        {
            freq = (uint32_t)(((uint64_t)freq * (uint64_t)(frdDiv + 1U)) / (uint64_t)(frdDiv + 1U + frdMult));
        }

        /* Final D-flip-flop divides the pulsed clock by 2. */
        freq /= 2U;
    }

    /* The XSPI functional clock and the I3C clock each have a fixed
       divide-by-2 D-flip-flop after their integer divider, identical to the
       final stage on the flexcomm clocks. The XSPI AHB clock does not have
       this stage. */
    switch (clockName)
    {
        case kCLOCK_XspiClk:
        case kCLOCK_I3cClk:
            freq /= 2U;
            break;
        default:
            break;
    }

    return freq;
}

/* brief Return Frequency of FlexComm Clock
 * return Frequency of FlexComm Clock
 */
uint32_t CLOCK_GetFlexCommClkFreq(uint32_t id)
{
    return CLOCK_GetFreq((clock_name_t)((uint32_t)kCLOCK_Flexcomm0ClkFreq + id));
}

/* brief Return Frequency of CTimer Clock
 * return Frequency of CTimer Clock
 */
uint32_t CLOCK_GetCTimerClkFreq(uint32_t id)
{
    return CLOCK_GetFreq((clock_name_t)((uint32_t)kCLOCK_Ctimer0ClkFreq + id));
}

/* brief Return Frequency of the CM55 core / main AHB bus clock. */
uint32_t CLOCK_GetCoreSysClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_CoreSysClk);
}

/* brief Return Frequency of the XSPI functional clock. */
uint32_t CLOCK_GetXspiClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_XspiClk);
}

/* brief Return Frequency of the XSPI AHB clock. */
uint32_t CLOCK_GetXspiAhbClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_XspiAhbClk);
}

/* brief Return Frequency of the TPIU trace clock. */
uint32_t CLOCK_GetTpiuClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_TpiuClk);
}

/* brief Return Frequency of the OS timer clock. */
uint32_t CLOCK_GetOsTimerClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_OsTimerClk);
}

/* brief Return Frequency of the watchdog clock. */
uint32_t CLOCK_GetWwdtClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_WatchdogClk);
}

/* brief Return Frequency of the UTICK clock. */
uint32_t CLOCK_GetUtickClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_UtickClk);
}

/* brief Return Frequency of the frequency-measurement reference clock. */
uint32_t CLOCK_GetMeasRefClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_MeasRefClk);
}

/* brief Return Frequency of the frequency-measurement target clock. */
uint32_t CLOCK_GetMeasTargetClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_MeasTargetClk);
}

/* brief Return Frequency of the GDET clock. */
uint32_t CLOCK_GetGdetClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_GdetClk);
}

/* brief Return Frequency of the I3C clock. */
uint32_t CLOCK_GetI3cClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_I3cClk);
}

/* brief Return Frequency of the PMRC clock. */
uint32_t CLOCK_GetPmrcClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_PmrcClk);
}

/* brief Return Frequency of the memory-controller clock. */
uint32_t CLOCK_GetMemCtrlClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_MemCtrlClk);
}

/* brief Return Frequency of the HiFi5 DSP clock. */
uint32_t CLOCK_GetDspClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_DspClk);
}

/* brief Return Frequency of the HSI clock. */
uint32_t CLOCK_GetHsiClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_HsiClk);
}

/* brief Return Frequency of the sync-source clock. */
uint32_t CLOCK_GetSyncSrcClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_SyncSrcClk);
}

/* brief Return Frequency of the UART DSS clock. */
uint32_t CLOCK_GetUartDssClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_UartDssClk);
}

/* brief Return Frequency of the SDMA clock. */
uint32_t CLOCK_GetSdmaClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_SdmaClk);
}

/* brief Return Frequency of the ADSS timer clock. */
uint32_t CLOCK_GetTimerClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_TimerClk);
}

/* brief Return Frequency of the motor-control timer clock. */
uint32_t CLOCK_GetMcTimerClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_McTimerClk);
}

/* brief Return Frequency of the DSS watchdog clock. */
uint32_t CLOCK_GetWatchdogDssClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_WatchdogDssClk);
}

/* brief Return Frequency of an ADSS dataport clock (id 0..3). */
uint32_t CLOCK_GetDataportClkFreq(uint32_t id)
{
    return CLOCK_GetFreq((clock_name_t)((uint32_t)kCLOCK_Dataport0Clk + id));
}

/* brief Return Frequency of the IRFIC clock. */
uint32_t CLOCK_GetIrficClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_IrficClk);
}

/* brief Return Frequency of the NSS bus clock. */
uint32_t CLOCK_GetNssBusClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_NssBusClk);
}

/* brief Return Frequency of the NSS XSPI clock. */
uint32_t CLOCK_GetNssXspiClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_NssXspiClk);
}

/* brief Return Frequency of the Vision clock. */
uint32_t CLOCK_GetVisionClkFreq(void)
{
    return CLOCK_GetFreq(kCLOCK_VisionClk);
}

/* Reverse map: return the named leaf clock (clock_name_t) whose frequency a
 * clock gate runs at, or kCLOCK_ClockNameCount when the gate has no known rate
 * leaf.
 *
 * Gates that own a dedicated leaf (FLEXCOMM, CTIMER, XSPI, I3C, OS timer, GDET,
 * UTICK, PMRC, MEM_CTRL, freq-meas, the ADSS/NSS/Vision leaves) return that
 * leaf. The many plain AHB bus gates in CTRLSS_BUSCLKEN0/1 (and their
 * functional/deepsleep mirrors) have no dedicated divider or selector: they run
 * from the shared main AHB clock, so they map to kCLOCK_MainClk. Only truly
 * unknown values return the sentinel. */
static clock_name_t CLOCK_GetClockName(clock_ip_name_t gate)
{
    if (((uint32_t)gate >= (uint32_t)kCLOCK_Ctimer0) &&
        ((uint32_t)gate <= (uint32_t)kCLOCK_Ctimer4))
    {
        return (clock_name_t)((uint32_t)kCLOCK_Ctimer0ClkFreq +
                              ((uint32_t)gate - (uint32_t)kCLOCK_Ctimer0));
    }

    if (((uint32_t)gate >= (uint32_t)kCLOCK_Flexcomm0) &&
        ((uint32_t)gate <= (uint32_t)kCLOCK_Flexcomm5))
    {
        return (clock_name_t)((uint32_t)kCLOCK_Flexcomm0ClkFreq +
                              ((uint32_t)gate - (uint32_t)kCLOCK_Flexcomm0));
    }

    if (((uint32_t)gate >= (uint32_t)kCLOCK_Ctimer0Periph) &&
        ((uint32_t)gate <= (uint32_t)kCLOCK_Ctimer4Periph))
    {
        return (clock_name_t)((uint32_t)kCLOCK_Ctimer0ClkFreq +
                              ((uint32_t)gate - (uint32_t)kCLOCK_Ctimer0Periph));
    }

    if (((uint32_t)gate >= (uint32_t)kCLOCK_Flexcomm0Periph) &&
        ((uint32_t)gate <= (uint32_t)kCLOCK_Flexcomm5Periph))
    {
        return (clock_name_t)((uint32_t)kCLOCK_Flexcomm0ClkFreq +
                              ((uint32_t)gate - (uint32_t)kCLOCK_Flexcomm0Periph));
    }

    switch (gate)
    {
        /* Dedicated-leaf gates with their own divider and/or selector. */
        case kCLOCK_Xspi:
        case kCLOCK_XspiPeriph:
            return kCLOCK_XspiClk;
        case kCLOCK_I3c:
        case kCLOCK_I3cPeriph:
            return kCLOCK_I3cClk;
        case kCLOCK_OsTimer:
        case kCLOCK_OsTimerPeriph:
            return kCLOCK_OsTimerClk;
        case kCLOCK_Utick:
        case kCLOCK_UtickPeriph:
            return kCLOCK_UtickClk;
        case kCLOCK_Gdet:
        case kCLOCK_GdetPeriph:
            return kCLOCK_GdetClk;
        case kCLOCK_Wdt:
        case kCLOCK_WdtPeriph:
            return kCLOCK_WatchdogClk;
        case kCLOCK_FreqMeas:
        case kCLOCK_FreqMeasRef:
            return kCLOCK_MeasRefClk;
        case kCLOCK_FreqMeasTarget:
            return kCLOCK_MeasTargetClk;
        case kCLOCK_Pmrc:
        case kCLOCK_PmrcBus:
            return kCLOCK_PmrcClk;
        case kCLOCK_MemCtrl:
            return kCLOCK_MemCtrlClk;
        case kCLOCK_ScTimer:
            return kCLOCK_TpiuClk;
        case kCLOCK_Vision:
            return kCLOCK_VisionClk;

        /* GateNotAvail and any out-of-range value have no rate leaf. */
        case kCLOCK_GateNotAvail:
            return kCLOCK_ClockNameCount;

        default:
            /* Remaining CTRLSS/ADSS/NSS bus gates share the main AHB clock:
               they have no dedicated divider or selector, so report the main
               clock frequency. */
            return kCLOCK_MainClk;
    }
}

/* Return true only for gates whose leaf owns a dedicated selector and/or
 * divider, i.e. those for which CLOCK_SetClockSourceByGate /
 * CLOCK_SetClockDivByGate are meaningful. Shared-AHB bus gates return false. */
static bool CLOCK_GateHasOwnPath(clock_ip_name_t gate)
{
    clock_name_t name = CLOCK_GetClockName(gate);

    if ((uint32_t)name >= (uint32_t)kCLOCK_ClockNameCount)
    {
        return false;
    }

    /* The main-clock aliases are the shared AHB path, not an own path. */
    if ((name == kCLOCK_MainClk) || (name == kCLOCK_CoreSysClk) ||
        (name == kCLOCK_SYSTEM_CLK) || (name == kCLOCK_BusClk))
    {
        return false;
    }

    return true;
}

/* brief Return the frequency a clock gate runs at.
 * return Frequency in Hz, or 0 if the gate has no known rate leaf. */
uint32_t CLOCK_GetFreqByGate(clock_ip_name_t gate)
{
    clock_name_t name = CLOCK_GetClockName(gate);

    if ((uint32_t)name >= (uint32_t)kCLOCK_ClockNameCount)
    {
        return 0U;
    }

    return CLOCK_GetFreq(name);
}

/* brief Select the root source feeding a named leaf clock.
 *
 * Reuses the leaf's selector descriptor (offset / shift / width) and overrides
 * only the selector value with src, then calls CLOCK_AttachClk. The 2-bit
 * selector encoding matches clock_source_t numerically.
 * return kStatus_Success on success.
 * return kStatus_InvalidArgument if the leaf has no selector, or src is out of
 *        range for the selector width. */
status_t CLOCK_SetClockSource(clock_name_t name, clock_source_t src)
{
    if ((uint32_t)name >= (uint32_t)kCLOCK_ClockNameCount)
    {
        return kStatus_InvalidArgument;
    }

    clock_attach_id_t sel = s_clockFreqDesc[(uint32_t)name].sel;

    if (sel == kNONE_to_NONE)
    {
        return kStatus_InvalidArgument;
    }

    /* A narrower selector cannot encode all four sources; reject out-of-range. */
    uint32_t width = CLK_ATTACH_SEL_WIDTH(sel);
    if ((uint32_t)src >= (1UL << width))
    {
        return kStatus_InvalidArgument;
    }

    /* Replace the selector value in the descriptor's attach id with src. */
    uint32_t base = (uint32_t)sel & ~((uint32_t)CLK_ATTACH_CLK_SEL_MASK);

    CLOCK_AttachClk((clock_attach_id_t)(base | ((uint32_t)src & CLK_ATTACH_CLK_SEL_MASK)));

    return kStatus_Success;
}

/* brief Set the integer divider of a named leaf clock.
 *
 * Flexcomm leaves are programmed through CLOCK_SetFlexcommClkDiv (integer clkdiv
 * only; FRD bypassed); all other leaves use the generic CLOCK_SetClockDiv.
 * return kStatus_Success on success.
 * return kStatus_InvalidArgument if the leaf has no divider. */
status_t CLOCK_SetClockDivByName(clock_name_t name, uint32_t div)
{
    if ((uint32_t)name >= (uint32_t)kCLOCK_ClockNameCount)
    {
        return kStatus_InvalidArgument;
    }

    if (((uint32_t)name >= (uint32_t)kCLOCK_Flexcomm0ClkFreq) &&
        ((uint32_t)name <= (uint32_t)kCLOCK_Flexcomm5ClkFreq))
    {
        uint32_t id = (uint32_t)name - (uint32_t)kCLOCK_Flexcomm0ClkFreq;

        /* Integer divider only; bypass the fractional divider (frdMult = 0). */
        return CLOCK_SetFlexcommClkDiv(id, div, 0U, 0U);
    }

    clock_div_name_t divName = s_clockFreqDesc[(uint32_t)name].div;

    if (divName == kCLOCK_DivNone)
    {
        return kStatus_InvalidArgument;
    }

    CLOCK_SetClockDiv(divName, div);

    return kStatus_Success;
}

/* brief Select the root source feeding a clock gate's leaf.
 * return kStatus_Success on success.
 * return kStatus_InvalidArgument if the gate is a shared-AHB gate (no own
 *        selector) or src is out of range. */
status_t CLOCK_SetClockSourceByGate(clock_ip_name_t gate, clock_source_t src)
{
    if (!CLOCK_GateHasOwnPath(gate))
    {
        return kStatus_InvalidArgument;
    }

    return CLOCK_SetClockSource(CLOCK_GetClockName(gate), src);
}

/* brief Set the integer divider of a clock gate's leaf.
 * return kStatus_Success on success.
 * return kStatus_InvalidArgument if the gate is a shared-AHB gate (no own
 *        divider). */
status_t CLOCK_SetClockDivByGate(clock_ip_name_t gate, uint32_t div)
{
    if (!CLOCK_GateHasOwnPath(gate))
    {
        return kStatus_InvalidArgument;
    }

    return CLOCK_SetClockDivByName(CLOCK_GetClockName(gate), div);
}

/* brief Program a Flexcomm gate's full clock divider chain (clkdiv + FRD) in a
 * single register write.
 * return kStatus_Success on success.
 * return kStatus_InvalidArgument if the gate is not a Flexcomm gate, or a field
 *        value is out of range. */
status_t CLOCK_SetFlexcommClkDivByGate(clock_ip_name_t gate, uint32_t clkDiv, uint32_t frdMult,
                                       uint32_t frdDiv)
{
    clock_name_t name = CLOCK_GetClockName(gate);

    if (((uint32_t)name < (uint32_t)kCLOCK_Flexcomm0ClkFreq) ||
        ((uint32_t)name > (uint32_t)kCLOCK_Flexcomm5ClkFreq))
    {
        return kStatus_InvalidArgument;
    }

    return CLOCK_SetFlexcommClkDiv((uint32_t)name - (uint32_t)kCLOCK_Flexcomm0ClkFreq, clkDiv,
                                   frdMult, frdDiv);
}

/* brief Enable ostimer clock
 */
void CLOCK_EnableOstimer32kClock()
{
    /* TODO: Placeholder implementation following the pattern of other methods */
}

/* Return a pointer to the primary configuration register for a clock source. */
static volatile uint32_t *CLOCK_GetSourceCfgReg(clock_source_t src)
{
    uint32_t reg_offset;

    switch (src)
    {
        case kCLOCK_SrcFrol:
            reg_offset = CGU_REG_OFFSET(FROL_CFG);
            break;
        case kCLOCK_SrcFro:
            reg_offset = CGU_REG_OFFSET(FRO_CFG);
            break;
        case kCLOCK_SrcNssFro:
            reg_offset = CGU_REG_OFFSET(NSS_FRO_CFG);
            break;
        case kCLOCK_SrcPll:
            reg_offset = CGU_REG_OFFSET(PLL_OSC_CFG);
            break;
        default:
            return (volatile uint32_t *)0;
    }

    return (volatile uint32_t *)(CGU_BASE + reg_offset);
}

/* Enable a root clock source. */
status_t CLOCK_EnableClockSource(clock_source_t src)
{
    volatile uint32_t *pCfg = CLOCK_GetSourceCfgReg(src);

    if (pCfg == (volatile uint32_t *)0)
    {
        return kStatus_InvalidArgument;
    }

    /* All source *_CFG registers share the same iref/osc/clk enable bit layout
       (bit0 = osc_en, bit1 = clk_en, bit2 = iref_en). Enable the reference
       current first, then the oscillator, then gate on the clock output. */
    RPU_ModifyReg(pCfg, 0U, CGU_FROL_CFG_IREF_EN_MASK);
    RPU_ModifyReg(pCfg, 0U, CGU_FROL_CFG_OSC_EN_MASK);
    RPU_ModifyReg(pCfg, 0U, CGU_FROL_CFG_CLK_EN_MASK);

    if (src == kCLOCK_SrcPll)
    {
        /* Release PLL reset and enable the PLL bias in PLL_MODE_CFG. */
        CLOCK_ModifyCguReg(CGU_REG_OFFSET(PLL_MODE_CFG), 0U, CGU_PLL_MODE_CFG_BIAS_EN_MASK);
        CLOCK_ModifyCguReg(CGU_REG_OFFSET(PLL_MODE_CFG), 0U, CGU_PLL_MODE_CFG_RESET_N_MASK);
    }

    /* Enable bits have been written. Lock/ready polling is not yet implemented. */
    return kStatus_Success;
}

/* Disable a root clock source. */
void CLOCK_DisableClockSource(clock_source_t src)
{
    volatile uint32_t *pCfg = CLOCK_GetSourceCfgReg(src);

    if (pCfg == (volatile uint32_t *)0)
    {
        return;
    }

    if (src == kCLOCK_SrcPll)
    {
        /* Assert PLL reset and clear the PLL bias in PLL_MODE_CFG. */
        CLOCK_ModifyCguReg(CGU_REG_OFFSET(PLL_MODE_CFG), CGU_PLL_MODE_CFG_RESET_N_MASK, 0U);
        CLOCK_ModifyCguReg(CGU_REG_OFFSET(PLL_MODE_CFG), CGU_PLL_MODE_CFG_BIAS_EN_MASK, 0U);
    }

    /* Gate off the clock output then power down the oscillator. */
    RPU_ModifyReg(pCfg, CGU_FROL_CFG_CLK_EN_MASK, 0U);
    RPU_ModifyReg(pCfg, CGU_FROL_CFG_OSC_EN_MASK, 0U);
    RPU_ModifyReg(pCfg, CGU_FROL_CFG_IREF_EN_MASK, 0U);
}

/* Decode the PLL_OSC_CFG clk_sel field into the clock source feeding the PLL.
 * On the current hardware clk_sel == 0 selects FROL; other encodings are TBD
 * (analogue inputs not yet available) and default to FROL. */
static clock_source_t CLOCK_GetPllInputSource(uint32_t cfg)
{
    uint32_t clkSel = (cfg & CGU_PLL_OSC_CFG_CLK_SEL_MASK) >> CGU_PLL_OSC_CFG_CLK_SEL_SHIFT;

    switch (clkSel)
    {
        case 0U:
            return kCLOCK_SrcFrol;
        default:
            /* TBD: remaining clk_sel encodings map to analogue inputs that are
               not populated on the current hardware; treat as FROL. */
            return kCLOCK_SrcFrol;
    }
}

/* Store the frequency associated with a leaf clock source.
 *
 * Provisional implementation: the current hardware only supports FROL and the
 * PLL. FROL is fixed at its 20 MHz power-on default (CLOCK_FROL_DEFAULT_FREQ)
 * and cannot be reprogrammed, and the PLL output is computed on demand from its
 * hardware divide fields rather than stored here. There is therefore no leaf
 * frequency that software may override, so this function intentionally does
 * nothing. It is retained for API compatibility and will gain a real body once
 * the trimmable analogue FRO sources (FRO / NSS FRO) become available on future
 * silicon. */
void CLOCK_SetClockSourceFreq(clock_source_t src, uint32_t freq)
{
    (void)src;
    (void)freq;
}

/* Get the output frequency of a clock source. */
uint32_t CLOCK_GetClockSourceFreq(clock_source_t src)
{
    volatile uint32_t *pCfg = CLOCK_GetSourceCfgReg(src);

    if (pCfg == (volatile uint32_t *)0)
    {
        return 0U;
    }

    /* A source that is not driving its clock output contributes no frequency. */
    if ((*pCfg & CGU_FROL_CFG_CLK_EN_MASK) == 0U)
    {
        return 0U;
    }

    if (src == kCLOCK_SrcPll)
    {

        /* The PLL output is self-describing: the PLL_OSC_CFG clk_sel field
           selects the input clock source, whose frequency is obtained
           recursively, and the result is scaled by the integer and fractional
           divide fields:
             f_out = f_input * (div_integer + div_fractional / 2^8)
           The 8-bit fractional field represents a fraction of 1/256. The input
           pre-divider (div_input_sel) is treated as pass-through. */
        uint32_t       cfg      = *pCfg;
        clock_source_t inputSrc = CLOCK_GetPllInputSource(cfg);
        uint32_t       ref      = CLOCK_GetClockSourceFreq(inputSrc);
        uint32_t       divI     = (cfg & CGU_PLL_OSC_CFG_DIV_INTEGER_MASK) >> CGU_PLL_OSC_CFG_DIV_INTEGER_SHIFT;
        uint32_t       divF     = (cfg & CGU_PLL_OSC_CFG_DIV_FRACTIONAL_MASK) >> CGU_PLL_OSC_CFG_DIV_FRACTIONAL_SHIFT;

        if ((divI == 0U) && (divF == 0U))
        {
            /* No multiplier programmed; pass the input frequency through. */
            return ref;
        }

        return (uint32_t)(((uint64_t)ref * (((uint64_t)divI << 8U) + (uint64_t)divF)) >> 8U);
    }

    return s_clockSourceFreq[(uint32_t)src];
}
