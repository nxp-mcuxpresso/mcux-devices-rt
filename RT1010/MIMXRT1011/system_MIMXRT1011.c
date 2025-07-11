/*
** ###################################################################
**     Processors:          MIMXRT1011CAE4A
**                          MIMXRT1011DAE5A
**
**     Compilers:           Freescale C/C++ for Embedded ARM
**                          GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**                          Keil ARM C/C++ Compiler
**                          MCUXpresso Compiler
**
**     Reference manual:    IMXRT1010RM Rev.1, 10/2021 | IMXRT1010SRM Rev.0
**     Version:             rev. 2.0, 2024-10-29
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
**     - rev. 0.1 (2019-02-14)
**         Initial version.
**     - rev. 1.0 (2019-08-01)
**         Rev.0 Header GA
**     - rev. 1.1 (2019-08-06)
**         Update header files to align with IMXRT1010RM Rev.B.
**     - rev. 1.2 (2021-08-10)
**         Update header files to align with IMXRT1010RM Rev.1.
**     - rev. 2.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file MIMXRT1011
 * @version 2.0
 * @date 2024-10-29
 * @brief Device specific configuration file for MIMXRT1011 (implementation file)
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

void SystemInit (void) {
#if ((__FPU_PRESENT == 1) && (__FPU_USED == 1))
  SCB->CPACR |= ((3UL << 10*2) | (3UL << 11*2));    /* set CP10, CP11 Full Access */
#endif /* ((__FPU_PRESENT == 1) && (__FPU_USED == 1)) */

#if defined(__MCUXPRESSO)
    extern uint32_t g_pfnVectors[];  // Vector table defined in startup code
    SCB->VTOR = (uint32_t)g_pfnVectors;
#endif

/* Disable Watchdog Power Down Counter */
    WDOG1->WMCR &= ~(uint16_t) WDOG_WMCR_PDE_MASK;
    WDOG2->WMCR &= ~(uint16_t) WDOG_WMCR_PDE_MASK;

/* Watchdog disable */

#if (DISABLE_WDOG)
    if ((WDOG1->WCR & WDOG_WCR_WDE_MASK) != 0U)
    {
        WDOG1->WCR &= ~(uint16_t) WDOG_WCR_WDE_MASK;
    }
    if ((WDOG2->WCR & WDOG_WCR_WDE_MASK) != 0U)
    {
        WDOG2->WCR &= ~(uint16_t) WDOG_WCR_WDE_MASK;
    }
    if ((RTWDOG->CS & RTWDOG_CS_CMD32EN_MASK) != 0U)
    {
        RTWDOG->CNT = 0xD928C520U; /* 0xD928C520U is the update key */
    }
    else
    {
        RTWDOG->CNT = 0xC520U;
        RTWDOG->CNT = 0xD928U;
    }
    RTWDOG->TOVAL = 0xFFFF;
    RTWDOG->CS = (uint32_t) ((RTWDOG->CS) & ~RTWDOG_CS_EN_MASK) | RTWDOG_CS_UPDATE_MASK;
#endif /* (DISABLE_WDOG) */

    /* Disable Systick which might be enabled by bootrom */
    if ((SysTick->CTRL & SysTick_CTRL_ENABLE_Msk) != 0U)
    {
        SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk;
    }

/* Enable instruction and data caches */
#if defined(__ICACHE_PRESENT) && __ICACHE_PRESENT
    if (SCB_CCR_IC_Msk != (SCB_CCR_IC_Msk & SCB->CCR)) {
        SCB_EnableICache();
    }
#endif

  SystemInitHook();
}

/* ----------------------------------------------------------------------------
   -- SystemCoreClockUpdate()
   ---------------------------------------------------------------------------- */

void SystemCoreClockUpdate (void) {

    uint32_t freq;
    uint32_t PLL2MainClock;
    uint32_t PLL3MainClock;

    /* Check if system pll is bypassed */
    if((CCM_ANALOG->PLL_SYS & CCM_ANALOG_PLL_SYS_BYPASS_MASK) != 0U)
    {
        PLL2MainClock = CPU_XTAL_CLK_HZ;
    }
    else
    {
        PLL2MainClock = (CPU_XTAL_CLK_HZ * (((CCM_ANALOG->PLL_SYS & CCM_ANALOG_PLL_SYS_DIV_SELECT_MASK) != 0U) ? 22U : 20U));
    }
    PLL2MainClock += (uint32_t)(((uint64_t)CPU_XTAL_CLK_HZ * ((uint64_t)(CCM_ANALOG->PLL_SYS_NUM))) / ((uint64_t)(CCM_ANALOG->PLL_SYS_DENOM)));

    /* Check if usb1 pll is bypassed */
    if((CCM_ANALOG->PLL_USB1 & CCM_ANALOG_PLL_USB1_BYPASS_MASK) != 0U)
    {
        PLL3MainClock = CPU_XTAL_CLK_HZ;
    }
    else
    {
        PLL3MainClock = (CPU_XTAL_CLK_HZ * (((CCM_ANALOG->PLL_USB1 & CCM_ANALOG_PLL_USB1_DIV_SELECT_MASK) != 0U) ? 22U : 20U));
    }

    /* Periph_clk2_clk ---> Periph_clk */
    if ((CCM->CBCDR & CCM_CBCDR_PERIPH_CLK_SEL_MASK) != 0U)
    {
        switch (CCM->CBCMR & CCM_CBCMR_PERIPH_CLK2_SEL_MASK)
        {
            /* Pll3_sw_clk ---> Periph_clk2_clk ---> Periph_clk ---> Core_clock */
            case CCM_CBCMR_PERIPH_CLK2_SEL(0U):
                freq = PLL3MainClock;
                break;

            /* Osc_clk ---> Periph_clk2_clk ---> Periph_clk ---> Core_clock */
            case CCM_CBCMR_PERIPH_CLK2_SEL(1U):
                freq = CPU_XTAL_CLK_HZ;
                break;

            /* Pll2_bypass_clk ---> Periph_clk2_clk ---> Periph_clk ---> Core_clock */
            case CCM_CBCMR_PERIPH_CLK2_SEL(2U):
                freq = CPU_XTAL_CLK_HZ;
                break;

            case CCM_CBCMR_PERIPH_CLK2_SEL(3U):
            default:
                freq = 0U;
                break;
        }
    }
    /* Pre_Periph_clk ---> Periph_clk */
    else
    {
        switch (CCM->CBCMR & CCM_CBCMR_PRE_PERIPH_CLK_SEL_MASK)
        {
            /* PLL2 ---> Pre_Periph_clk ---> Periph_clk ---> Core_clock */
            case CCM_CBCMR_PRE_PERIPH_CLK_SEL(0U):
                freq = PLL2MainClock;
                break;

            /* PLL3 PFD3 ---> Pre_Periph_clk ---> Periph_clk ---> Core_clock */
            case CCM_CBCMR_PRE_PERIPH_CLK_SEL(1U):
                freq = PLL3MainClock / ((CCM_ANALOG->PFD_480 & CCM_ANALOG_PFD_480_PFD3_FRAC_MASK) >> CCM_ANALOG_PFD_480_PFD3_FRAC_SHIFT) * 18U;
                break;

            /* PLL2 PFD3 ---> Pre_Periph_clk ---> Periph_clk ---> Core_clock */
            case CCM_CBCMR_PRE_PERIPH_CLK_SEL(2U):
                freq = PLL2MainClock / ((CCM_ANALOG->PFD_528 & CCM_ANALOG_PFD_528_PFD3_FRAC_MASK) >> CCM_ANALOG_PFD_528_PFD3_FRAC_SHIFT) * 18U;
                break;

            /* PLL6 ---> Pre_Periph_clk ---> Periph_clk ---> Core_clock */
            case CCM_CBCMR_PRE_PERIPH_CLK_SEL(3U):
                freq = 500000000U;
                break;

            default:
                freq = 0U;
                break;
        }
    }

    SystemCoreClock = (freq / (((CCM->CBCDR & CCM_CBCDR_AHB_PODF_MASK) >> CCM_CBCDR_AHB_PODF_SHIFT) + 1U));

}

/* ----------------------------------------------------------------------------
   -- SystemInitHook()
   ---------------------------------------------------------------------------- */

__attribute__ ((weak)) void SystemInitHook (void) {
  /* Void implementation of the weak function. */
}
