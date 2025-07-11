/*
** ###################################################################
**     Processors:          MIMXRT1187AVM8B_cm33
**                          MIMXRT1187AVM8C_cm33
**                          MIMXRT1187CVM8B_cm33
**                          MIMXRT1187CVM8C_cm33
**                          MIMXRT1187XVM8B_cm33
**                          MIMXRT1187XVM8C_cm33
**
**     Compilers:           GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**                          Keil ARM C/C++ Compiler
**                          MCUXpresso Compiler
**
**     Reference manual:    IMXRT1180RM, Rev 5, 01/2024
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
**     - rev. 1.0 (2021-03-09)
**         Initial version.
**     - rev. 2.0 (2024-01-18)
**         Header RFP.
**     - rev. 3.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file MIMXRT1187_cm33
 * @version 1.0
 * @date 2025-05-20
 * @brief Device specific configuration file for MIMXRT1187_cm33 (header file)
 *
 * Provides a system configuration function and a global variable that contains
 * the system frequency. It configures the device and initializes the oscillator
 * (PLL) that is part of the microcontroller device.
 */

#ifndef _SYSTEM_MIMXRT1187_cm33_H_
#define _SYSTEM_MIMXRT1187_cm33_H_                /**< Symbol preventing repeated inclusion */

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>


#ifndef DISABLE_WDOG
  #define DISABLE_WDOG                 1
#endif

/* Define clock source values */

#define CPU_XTAL_CLK_HZ                24000000UL          /* Value of the external crystal or oscillator clock frequency in Hz */

#define CPU_CLK1_HZ                    0UL                 /* Value of the CLK1 (select the CLK1_N/CLK1_P as source) frequency in Hz */
                                                           /* If CLOCK1_P,CLOCK1_N is choose as the pll bypass clock source, please implement the CLKPN_FREQ define, otherwise 0 will be returned. */

#define DEFAULT_SYSTEM_CLOCK           240000000UL         /* Default System clock value */


/**
 * @brief System clock frequency (core clock)
 *
 * The system clock frequency supplied to the SysTick timer and the processor
 * core clock. This variable can be used by the user application to setup the
 * SysTick timer or configure other parameters. It may also be used by debugger to
 * query the frequency of the debug timer or configure the trace clock speed
 * SystemCoreClock is initialized with a correct predefined value.
 */
extern uint32_t SystemCoreClock;

/**
 * @brief Setup the microcontroller system.
 *
 * Typically this function configures the oscillator (PLL) that is part of the
 * microcontroller device. For systems with variable clock speed it also updates
 * the variable SystemCoreClock. SystemInit is called from startup_device file.
 */
void SystemInit(void);

/**
 * @brief Updates the SystemCoreClock variable.
 *
 * It must be called whenever the core clock is changed during program
 * execution. SystemCoreClockUpdate() evaluates the clock register settings and calculates
 * the current core clock.
 */
void SystemCoreClockUpdate(void);

/**
 * @brief SystemInit function hook.
 *
 * This weak function allows to call specific initialization code during the
 * SystemInit() execution.This can be used when an application specific code needs
 * to be called as close to the reset entry as possible (for example the Multicore
 * Manager MCMGR_EarlyInit() function call).
 * NOTE: No global r/w variables can be used in this hook function because the
 * initialization of these variables happens after this function.
 */
void SystemInitHook(void);

/**
 * @brief Board function hook.
 *
 * This weak function allows to call specific initialization code during the
 * SystemInit() execution.This can be used when an application specific code needs
 * to be called as close to the reset entry as possible (for example PSRAM/Hyperram
 * init function call).
 * NOTE: No global r/w variables can be used in this hook function because the
 * initialization of these variables happens after this function.
 */
void BOARD_InitHook(void);

/**
 * @brief Override NVIC_SystemReset
 *
 * This macro function is used to override CMSIS default NVIC_SystemReset
 * The CM33 reset mask bit in SRC register should be cleared to make cold reset
 * work
 */
#undef NVIC_SystemReset
#define NVIC_SystemReset()                                                   \
    {                                                                        \
        SRC_GENERAL_REG->SRMASK &= ~SRC_GENERAL_SRMASK_CM33_RESET_MASK_MASK; \
        __NVIC_SystemReset();                                                \
    }

/**
 * @brief Prepare_CM7 for CM7 kick off preparation
 *
 * This function is used to release CM7, prepare the init VTOR and do its TCM memory
 * initialization
 */
void Prepare_CM7(uint32_t m7_vtor);

#ifdef __cplusplus
}
#endif

#endif  /* _SYSTEM_MIMXRT1187_cm33_H_ */
