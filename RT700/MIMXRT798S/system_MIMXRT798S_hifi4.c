/*
** ###################################################################
**     Processors:          MIMXRT798SGAWAR_hifi4
**                          MIMXRT798SGFOA_hifi4
**
**     Compiler:            Xtensa Compiler
**     Reference manual:    iMXRT700RM Rev.2 DraftA, 05/2024
**     Version:             rev. 3.0, 2024-10-29
**     Build:               b250520
**
**     Abstract:
**         Provides a system configuration function and a global variable that
**         contains the system frequency. It configures the device and initializes
**         the oscillator (PLL) that is part of the microcontroller device.
**
**     Copyright 2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2022-09-15)
**         Initial version.
**     - rev. 2.0 (2024-05-28)
**         Rev2 DraftA.
**     - rev. 3.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file MIMXRT798S
 * @version 1.0
 * @date 2025-05-20
 * @brief Device specific configuration file for MIMXRT798S
 *  (implementation file)
 *
 * Provides a system configuration function and a global variable that contains
 * the system frequency. It configures the device and initializes the oscillator
 * (PLL) that is part of the microcontroller device.
 */

#include <stdint.h>
#include "fsl_device_registers.h"

/* ----------------------------------------------------------------------------
   -- Core clock
   ---------------------------------------------------------------------------- */
uint32_t SystemCoreClock = DEFAULT_SYSTEM_CLOCK;

/* ----------------------------------------------------------------------------
   -- SystemInit()
   ---------------------------------------------------------------------------- */

__attribute__((weak)) void SystemInit(void)
{
    SystemInitHook();
}

/* ----------------------------------------------------------------------------
   -- SystemCoreClockUpdate()
   ---------------------------------------------------------------------------- */
static uint32_t getFro0MaxFreq(void)
{
    return CLK_FRO0_CLK;
}

static uint32_t getFro1MaxFreq(void)
{
    return CLK_FRO1_MAX_CLK;
}

static uint32_t getFro1Div3Freq(void)
{
    return getFro1MaxFreq() / 3U;
}

static uint32_t getFro0Div3Freq(void)
{
    return getFro0MaxFreq() / 3U;
}

static uint32_t getLpOscFreq(void)
{
    return CLK_LPOSC_1MHZ;
}

static uint32_t getBaseClkDsp(void)
{
    uint32_t freq = 0U;

    switch (CLKCTL0->DSPBASECLKSEL & CLKCTL0_DSPBASECLKSEL_SEL_MASK)
    {
        case CLKCTL0_DSPBASECLKSEL_SEL(0):
            freq = getFro1Div3Freq();
            break;
        case CLKCTL0_DSPBASECLKSEL_SEL(1):
            freq = getFro1MaxFreq();
            break;
        case CLKCTL0_DSPBASECLKSEL_SEL(2):
            freq = getFro0Div3Freq();
            break;
        case CLKCTL0_DSPBASECLKSEL_SEL(3):
            freq = getLpOscFreq();
            break;
        default:
            freq = 0U;
            break;
    }

    return freq;
}

static uint32_t getMainPllFreq(void)
{
    uint32_t freq = 0U;
    uint64_t freqTmp;

    switch ((CLKCTL2->MAINPLL0CLKSEL) & CLKCTL2_MAINPLL0CLKSEL_SEL_MASK)
    {
        case CLKCTL2_MAINPLL0CLKSEL_SEL(0):
            freq = getFro1MaxFreq() / 8U;
            break;
        case CLKCTL2_MAINPLL0CLKSEL_SEL(1):
            freq = CLK_OSC_CLK;
            break;
        default:
            freq = 0U;
            break;
    }

    if (((CLKCTL2->MAINPLL0CTL0) & CLKCTL2_MAINPLL0CTL0_BYPASS_MASK) == 0U)
    {
        /* PLL output frequency = Fref * (DIV_SELECT + NUM/DENOM). */
        freqTmp = ((uint64_t)freq * ((uint64_t)(CLKCTL2->MAINPLL0NUM))) / ((uint64_t)(CLKCTL2->MAINPLL0DENOM));
        freq *= ((CLKCTL2->MAINPLL0CTL0) & CLKCTL2_MAINPLL0CTL0_MULT_MASK) >> CLKCTL2_MAINPLL0CTL0_MULT_SHIFT;
        freq += (uint32_t)freqTmp;
    }
    return freq;
}

static uint32_t getMainPllPfd0Freq(void)
{
    uint32_t freq = getMainPllFreq();

    if (((CLKCTL2->MAINPLL0CTL0) & CLKCTL2_MAINPLL0CTL0_BYPASS_MASK) == 0U)
    {
        freq = (uint32_t)((uint64_t)freq * 18U /
                          ((CLKCTL2->MAINPLL0PFD & CLKCTL2_MAINPLL0PFD_PFD0_MASK) >> CLKCTL2_MAINPLL0PFD_PFD0_SHIFT));
    }
    return freq;
}

static uint32_t getMainPllPfd1Freq(void)
{
    uint32_t freq = getMainPllFreq();

    if (((CLKCTL2->MAINPLL0CTL0) & CLKCTL2_MAINPLL0CTL0_BYPASS_MASK) == 0U)
    {
        freq = (uint32_t)((uint64_t)freq * 18U /
                          ((CLKCTL2->MAINPLL0PFD & CLKCTL2_MAINPLL0PFD_PFD1_MASK) >> CLKCTL2_MAINPLL0PFD_PFD1_SHIFT));
    }
    return freq;
}

void SystemCoreClockUpdate(void)
{
    /* iMXRT7xx systemCoreClockUpdate */
    uint32_t freq = 0U;

    switch (CLKCTL0->DSPCPUCLKSEL & CLKCTL0_DSPCPUCLKSEL_SEL_MASK)
    {
        case CLKCTL0_DSPCPUCLKSEL_SEL(0):
            freq = getBaseClkDsp();
            break;

        case CLKCTL0_DSPCPUCLKSEL_SEL(1):
            freq = getMainPllPfd0Freq();
            break;

        case CLKCTL0_DSPCPUCLKSEL_SEL(2):
            freq = getFro0MaxFreq();
            break;

        case CLKCTL0_DSPCPUCLKSEL_SEL(3):
            freq = getMainPllPfd1Freq();
            break;

        default:
            freq = 0U;
            break;
    }

    SystemCoreClock = freq / ((CLKCTL0->DSPCPUCLKDIV & CLKCTL0_DSPCPUCLKDIV_DIV_MASK) + 1U);
}

/* ----------------------------------------------------------------------------
   -- SystemInitHook()
   ---------------------------------------------------------------------------- */

__attribute__((weak)) void SystemInitHook(void)
{
    /* Void implementation of the weak function. */
}
