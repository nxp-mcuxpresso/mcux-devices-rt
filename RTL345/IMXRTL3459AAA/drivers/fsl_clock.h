/*
 * Copyright 2025-2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _FSL_CLOCK_H_
#define _FSL_CLOCK_H_

#include "fsl_common.h"

/*! @addtogroup clock */
/*! @{ */

/*! @file */

/*******************************************************************************
 * Definitions
 *****************************************************************************/

/*! @name Driver version */
/*@{*/
/*! @brief CLOCK driver version 2.1.0. */
#define FSL_CLOCK_DRIVER_VERSION (MAKE_VERSION(2, 1, 0))
/*@}*/

/*! @brief Configure whether driver controls clock
 *
 * When set to 0, peripheral drivers will enable clock in initialize function
 * and disable clock in de-initialize function. When set to 1, peripheral
 * driver will not control the clock, application could control the clock out of
 * the driver.
 *
 * @note All drivers share this feature switcher. If it is set to 1, application
 * should handle clock enable and disable for all drivers.
 */
#if !(defined(FSL_SDK_DISABLE_DRIVER_CLOCK_CONTROL))
#define FSL_SDK_DISABLE_DRIVER_CLOCK_CONTROL 0U
#endif

/*! @brief Configure how the clock driver writes RPU-protected CGU registers.
 *
 * When set to 0 (default), every CGU write goes through RPU_WriteReg() or RPU_ModifyReg(), which is safe with
 * interrupts enabled. When set to 1, the writes take the RPU fast path (RPU_WriteCguRegFast()): no address lookup
 * and no interrupt masking, for a boot path that sets the clocks with interrupts disabled and no other bus master
 * accessing the CGU.
 */
#if !(defined(FSL_CLOCK_DRIVER_RPU_FAST_PATH))
#define FSL_CLOCK_DRIVER_RPU_FAST_PATH 0U
#endif

/* Definition for delay API in clock driver, users can redefine it to the real
 * application. */
#ifndef SDK_DEVICE_MAXIMUM_CPU_CLOCK_FREQUENCY
#define SDK_DEVICE_MAXIMUM_CPU_CLOCK_FREQUENCY (400000000U)
#endif

/* CGU_Type is only declared for cm55_core0; cm55_core1 (NSS) has no CGU access. */
#if (IMXRTL3459AAA_cm55_core0_SERIES)

#define CGU_REG_OFFSET(member)    ((uint32_t)offsetof(CGU_Type, member))

/*! @brief Default FROL output frequency on the current RTL345 hardware (20 MHz).
 *
 * FROL is analogue and trimmed outside the CGU register map, so the driver
 * seeds this value as the FROL frequency at startup. Applications may override
 * it with CLOCK_SetClockSourceFreq if a different trim is used.
 */
#define CLOCK_FROL_DEFAULT_FREQ (20000000U)


/*! @brief Clock ip name array for DMA. */
#define DMA_CLOCKS {kCLOCK_Dma0, kCLOCK_Dma1}

/*! @brief Clock ip name array for GPIO. */
#define GPIO_CLOCKS {kCLOCK_GpioPort0, kCLOCK_GpioPort1}

/*! @brief Clock ip name array for FLEXCOMM. */
#define FLEXCOMM_CLOCKS \
    {kCLOCK_Flexcomm0, kCLOCK_Flexcomm1, kCLOCK_Flexcomm2, kCLOCK_Flexcomm3, kCLOCK_Flexcomm4, kCLOCK_Flexcomm5}

/*! @brief Clock ip name array for CTIMER. */
#define CTIMER_CLOCKS {kCLOCK_Ctimer0, kCLOCK_Ctimer1, kCLOCK_Ctimer2, kCLOCK_Ctimer3, kCLOCK_Ctimer4}

/*! @brief Clock ip name array for WWDT. */
#define WWDT_CLOCKS {kCLOCK_Wdt}

/*! @brief Clock ip name array for UTICK. */
#define UTICK_CLOCKS {kCLOCK_Utick}

/*! @brief Clock ip name array for MRT. */
#define MRT_CLOCKS {kCLOCK_Mrt}

/*! @brief Clock ip name array for OSTIMER. */
#define OSTIMER_CLOCKS {kCLOCK_OsTimer}

/*! @brief Clock ip name array for CRC. */
#define CRC_CLOCKS {kCLOCK_Crc}

/*! @brief Clock ip name array for GINT. */
#define GINT_CLOCKS {kCLOCK_GpioGlobint}

/*! @brief Clock ip name array for PINT. */
#define PINT_CLOCKS {kCLOCK_Pint, kCLOCK_Gpio_Sec_Int}

/*! @brief Clock ip name array for I3C. */
#define I3C_CLOCKS {kCLOCK_I3c}

/*! @brief Clock ip name array for FREQME. */
#define FREQME_CLOCKS {kCLOCK_FreqMeas}

/*! @brief Clock ip name array for XSPI. */
#define XSPI_CLOCKS {kCLOCK_Xspi}

/*! @brief Clock ip name array for SCT. */
#define SCT_CLOCKS {kCLOCK_ScTimer}

/*! @brief Clock ip name array for GDET. */
#define GDET_CLOCKS {kCLOCK_Gdet}

/*! @brief Clock ip name array for TRNG. */
#define TRNG_CLOCKS {kCLOCK_Trng}

/*! @brief Clock ip name array for CDOG. */
#define CDOG_CLOCKS {kCLOCK_Cdog}

/*! @brief Clock ip name array for INPUTMUX. */
#define INPUTMUX_CLOCKS {kCLOCK_GateNotAvail}

/*! @brief Functional (module) clock gate arrays in CTRLSS_CLKENSET.
 *  These complement the bus clock gates enumerated in the *_CLOCKS macros
 *  above. Drivers that manage both a bus gate and a functional/reference gate
 *  (e.g. flexcomm, ctimer, gdet) consume these as a second clock array.
 */
#define FLEXCOMM_PERIPH_CLOCKS \
    {kCLOCK_Flexcomm0Periph, kCLOCK_Flexcomm1Periph, kCLOCK_Flexcomm2Periph, kCLOCK_Flexcomm3Periph, kCLOCK_Flexcomm4Periph, kCLOCK_Flexcomm5Periph}
#define CTIMER_PERIPH_CLOCKS {kCLOCK_Ctimer0Periph, kCLOCK_Ctimer1Periph, kCLOCK_Ctimer2Periph, kCLOCK_Ctimer3Periph, kCLOCK_Ctimer4Periph}
#define WWDT_PERIPH_CLOCKS {kCLOCK_WdtPeriph}
#define UTICK_PERIPH_CLOCKS {kCLOCK_UtickPeriph}
#define OSTIMER_PERIPH_CLOCKS {kCLOCK_OsTimerPeriph}
#define I3C_PERIPH_CLOCKS {kCLOCK_I3cPeriph}
#define XSPI_PERIPH_CLOCKS {kCLOCK_XspiPeriph}

/*! @brief Reference clock gate arrays. The GDET and FREQME drivers manage a
 *  bus gate (*_CLOCKS) plus an optional reference-clock gate (*_REF_CLOCKS).
 *  Only the reference gate belongs here (FREQME target gate is excluded).
 */
#define GDET_REF_CLOCKS {kCLOCK_GdetPeriph}
#define FREQME_REF_CLOCKS {kCLOCK_FreqMeasRef}

/*! @brief Clock gate name used for CLOCK_EnableClock/CLOCK_DisableClock. */
/*------------------------------------------------------------------------------
 clock_ip_name_t definition:
------------------------------------------------------------------------------*/
/*! @brief CLK_GATE encoding:
 *  bits [23:8]  CGU register byte offset (SET register, or base register for RMW)
 *  bits  [7:0]  bit position within the register
 */
#define CLK_GATE_REG_OFFSET_SHIFT 8U
#define CLK_GATE_REG_OFFSET_MASK  0x00FFFF00U
#define CLK_GATE_BIT_SHIFT_SHIFT  0U
#define CLK_GATE_BIT_SHIFT_MASK   0x000000FFU

#define CLK_GATE_DEFINE(reg_offset, bit_shift)                                          \
    ((((uint32_t)(reg_offset) << CLK_GATE_REG_OFFSET_SHIFT) & CLK_GATE_REG_OFFSET_MASK) | \
     (((uint32_t)(bit_shift) << CLK_GATE_BIT_SHIFT_SHIFT) & CLK_GATE_BIT_SHIFT_MASK))

#define CLK_GATE_ABSTRACT_REG_OFFSET(x) (((uint32_t)(x) & CLK_GATE_REG_OFFSET_MASK) >> CLK_GATE_REG_OFFSET_SHIFT)
#define CLK_GATE_ABSTRACT_BITS_SHIFT(x) (((uint32_t)(x) & CLK_GATE_BIT_SHIFT_MASK) >> CLK_GATE_BIT_SHIFT_SHIFT)

/*! @brief Clock gate name used for CLOCK_EnableClock/CLOCK_DisableClock. */
typedef enum _clock_ip_name
{
    /* CTRLSS_BUSCLKEN0SET register: SET offset enables, CLR offset (SET+4) disables */
    kCLOCK_Rom0         = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 0),  /*!< Clock gate name: ROM0 */
    kCLOCK_Pkc          = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 1),  /*!< Clock gate name: PKC */
    kCLOCK_PkcRam       = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 2),  /*!< Clock gate name: PKC_RAM */
    kCLOCK_Pinmux       = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 3),  /*!< Clock gate name: PINMUX */
    kCLOCK_Cpu0         = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 4),  /*!< Clock gate name: CPU0 */
    kCLOCK_GpioPort0    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 5),  /*!< Clock gate name: GPIO_PORT0 */
    kCLOCK_GpioPort1    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 6),  /*!< Clock gate name: GPIO_PORT1 */
    kCLOCK_GpioSecPort0 = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 7),  /*!< Clock gate name: GPIO_SEC_PORT0 */
    kCLOCK_GpioSecPort1 = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 8),  /*!< Clock gate name: GPIO_SEC_PORT1 */
    kCLOCK_Pint         = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 9),  /*!< Clock gate name: PINT (GPIO_INT) */
    kCLOCK_Gpio_Sec_Int = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 10), /*!< Clock gate name: SEC_PINT (GPIO_SEC_INT) */
    kCLOCK_GpioGlobint  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 11), /*!< Clock gate name: GPIO_GLOBINT */
    kCLOCK_Dma0         = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 12), /*!< Clock gate name: DMA0 */
    kCLOCK_Dma1         = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 13), /*!< Clock gate name: DMA1 */
    kCLOCK_Crc          = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 14), /*!< Clock gate name: CRC */
    kCLOCK_Wdt          = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 15), /*!< Clock gate name: WDT */
    kCLOCK_Cdog         = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 16), /*!< Clock gate name: CDOG */
    kCLOCK_NicAxi       = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 17), /*!< Clock gate name: NIC_AXI */
    kCLOCK_NicReg       = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 18), /*!< Clock gate name: NIC_REG */
    kCLOCK_Mrt          = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 19), /*!< Clock gate name: MRT */
    kCLOCK_OsTimer      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 20), /*!< Clock gate name: OS_TIMER */
    kCLOCK_ScTimer      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 21), /*!< Clock gate name: SC_TIMER */
    kCLOCK_Utick        = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 22), /*!< Clock gate name: UTICK */
    kCLOCK_Flexcomm0    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 23), /*!< Clock gate name: FLEXCOMM0 */
    kCLOCK_Flexcomm1    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 24), /*!< Clock gate name: FLEXCOMM1 */
    kCLOCK_Flexcomm2    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 25), /*!< Clock gate name: FLEXCOMM2 */
    kCLOCK_Flexcomm3    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 26), /*!< Clock gate name: FLEXCOMM3 */
    kCLOCK_Flexcomm4    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 27), /*!< Clock gate name: FLEXCOMM4 */
    kCLOCK_Flexcomm5    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 28), /*!< Clock gate name: FLEXCOMM5 */
    kCLOCK_Iwic         = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 29), /*!< Clock gate name: IWIC */
    kCLOCK_Otp          = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 30), /*!< Clock gate name: OTP */
    kCLOCK_Vision       = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN0SET), 31), /*!< Clock gate name: VISION */

    /* CTRLSS_BUSCLKEN1SET register: SET offset enables, CLR offset (SET+4) disables */
    kCLOCK_Ctimer0  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN1SET), 0),  /*!< Clock gate name: CTIMER0 */
    kCLOCK_Ctimer1  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN1SET), 1),  /*!< Clock gate name: CTIMER1 */
    kCLOCK_Ctimer2  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN1SET), 2),  /*!< Clock gate name: CTIMER2 */
    kCLOCK_Ctimer3  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN1SET), 3),  /*!< Clock gate name: CTIMER3 */
    kCLOCK_Ctimer4  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN1SET), 4),  /*!< Clock gate name: CTIMER4 */
    kCLOCK_I3c      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN1SET), 5),  /*!< Clock gate name: I3C */
    kCLOCK_FreqMeas = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN1SET), 6),  /*!< Clock gate name: FREQ_MEAS */
    kCLOCK_Xspi     = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN1SET), 7),  /*!< Clock gate name: XSPI */
    kCLOCK_Trng     = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN1SET), 8),  /*!< Clock gate name: TRNG */
    kCLOCK_Sgi      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN1SET), 9),  /*!< Clock gate name: SGI */
    kCLOCK_Gdet     = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN1SET), 10), /*!< Clock gate name: GDET */
    kCLOCK_Udf      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN1SET), 11), /*!< Clock gate name: UDF */
    kCLOCK_Itrc     = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN1SET), 12), /*!< Clock gate name: ITRC */
    kCLOCK_Seccon   = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN1SET), 13), /*!< Clock gate name: SECCON */
    kCLOCK_Glikey   = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN1SET), 14), /*!< Clock gate name: GLIKEY */
    kCLOCK_PmrcBus  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_BUSCLKEN1SET), 15), /*!< Clock gate name: PMRC bus clock */

    /* CTRLSS_CLKENSET register: SET offset enables, CLR offset (SET+4) disables */
    kCLOCK_WdtPeriph      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 0),  /*!< Clock gate name: WDT functional clock */
    kCLOCK_TpiuTrace      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 1),  /*!< Clock gate name: TPIU_TRACE */
    kCLOCK_Uart           = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 2),  /*!< Clock gate name: UART */
    kCLOCK_UtickPeriph    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 3),  /*!< Clock gate name: UTICK functional clock */
    kCLOCK_FreqMeasRef    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 4),  /*!< Clock gate name: FREQ_MEAS_REF */
    kCLOCK_FreqMeasTarget = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 5),  /*!< Clock gate name: FREQ_MEAS_TARGET */
    kCLOCK_GdetPeriph     = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 6),  /*!< Clock gate name: GDET */
    kCLOCK_OsTimerPeriph  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 7),  /*!< Clock gate name: OS_TIMER functional clock */
    kCLOCK_Ctimer0Periph  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 8),  /*!< Clock gate name: CTIMER0 functional clock */
    kCLOCK_Ctimer1Periph  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 9),  /*!< Clock gate name: CTIMER1 functional clock */
    kCLOCK_Ctimer2Periph  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 10), /*!< Clock gate name: CTIMER2 functional clock */
    kCLOCK_Ctimer3Periph  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 11), /*!< Clock gate name: CTIMER3 functional clock */
    kCLOCK_Ctimer4Periph  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 12), /*!< Clock gate name: CTIMER4 functional clock */
    kCLOCK_Flexcomm0Periph = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 13), /*!< Clock gate name: FLEXCOMM0 functional clock */
    kCLOCK_Flexcomm1Periph = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 14), /*!< Clock gate name: FLEXCOMM1 functional clock */
    kCLOCK_Flexcomm2Periph = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 15), /*!< Clock gate name: FLEXCOMM2 functional clock */
    kCLOCK_Flexcomm3Periph = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 16), /*!< Clock gate name: FLEXCOMM3 functional clock */
    kCLOCK_Flexcomm4Periph = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 17), /*!< Clock gate name: FLEXCOMM4 functional clock */
    kCLOCK_Flexcomm5Periph = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 18), /*!< Clock gate name: FLEXCOMM5 functional clock */
    kCLOCK_I3cPeriph      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 19), /*!< Clock gate name: I3C functional clock */
    kCLOCK_XspiPeriph     = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 20), /*!< Clock gate name: XSPI functional clock */
    kCLOCK_XspiSfif       = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 21), /*!< Clock gate name: XSPI_SFIF */
    kCLOCK_Xspi2xSfif     = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 22), /*!< Clock gate name: XSPI_2XSFIF */
    kCLOCK_Pmrc           = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 23), /*!< Clock gate name: PMRC functional clock */
    kCLOCK_MemCtrl        = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKENSET), 24), /*!< Clock gate name: MEM_CTRL */

    /* ADSS_CLKENSET register: SET offset enables, CLR offset (SET+4) disables */
    kCLOCK_DspSys      = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 0),  /*!< Clock gate name: DSP_SYS */
    kCLOCK_DspComm     = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 1),  /*!< Clock gate name: DSP_COMM */
    kCLOCK_Hifi5       = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 2),  /*!< Clock gate name: HIFI5 */
    kCLOCK_Dsp0Nosteal = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 3),  /*!< Clock gate name: DSP0_NOSTEAL */
    kCLOCK_Dsp1Nosteal = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 4),  /*!< Clock gate name: DSP1_NOSTEAL */
    kCLOCK_DspDebug    = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 5),  /*!< Clock gate name: DSP_DEBUG */
    kCLOCK_Pcache0     = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 6),  /*!< Clock gate name: PCACHE0 */
    kCLOCK_Dcache0     = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 7),  /*!< Clock gate name: DCACHE0 */
    kCLOCK_Pcache1     = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 8),  /*!< Clock gate name: PCACHE1 */
    kCLOCK_Dcache1     = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 9),  /*!< Clock gate name: DCACHE1 */
    kCLOCK_Hsi         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 10), /*!< Clock gate name: HSI */
    kCLOCK_Perfmon     = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 11), /*!< Clock gate name: PERFMON */
    kCLOCK_Sdmac       = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 12), /*!< Clock gate name: SDMAC */
    kCLOCK_Tmr         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 13), /*!< Clock gate name: TMR */
    kCLOCK_McTmr       = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 14), /*!< Clock gate name: MC_TMR */
    kCLOCK_Watchdog    = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 15), /*!< Clock gate name: WATCHDOG */
    kCLOCK_UartDsp     = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 16), /*!< Clock gate name: UART (DSP) */
    kCLOCK_AxiNss      = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 17), /*!< Clock gate name: AXI_NSS */
    kCLOCK_AxiCss      = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 18), /*!< Clock gate name: AXI_CSS */
    kCLOCK_Apb         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 19), /*!< Clock gate name: APB */
    kCLOCK_Dp0         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 20), /*!< Clock gate name: DP0 */
    kCLOCK_Dp1         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 21), /*!< Clock gate name: DP1 */
    kCLOCK_Dp2         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 22), /*!< Clock gate name: DP2 */
    kCLOCK_Dp3         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 23), /*!< Clock gate name: DP3 */
    kCLOCK_Irfic       = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLKENSET), 24), /*!< Clock gate name: IRFIC */

    /* ANC_DMIC_CLKENSET register: SET offset enables, CLR offset (SET+4) disables */
    kCLOCK_CodecSync     = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_CLKENSET), 0), /*!< Clock gate name: CODEC_SYNC */
    kCLOCK_CodecDec128fs = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_CLKENSET), 1), /*!< Clock gate name: CODEC_DEC_128FS */
    kCLOCK_CodecAnc128fs = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_CLKENSET), 2), /*!< Clock gate name: CODEC_ANC_128FS */
    kCLOCK_CodecInt128fs = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_CLKENSET), 3), /*!< Clock gate name: CODEC_INT_128FS */
    kCLOCK_SyncSrc       = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_CLKENSET), 4), /*!< Clock gate name: SYNC_SRC */
    kCLOCK_Dmic0         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_CLKENSET), 5), /*!< Clock gate name: DMIC0 */
    kCLOCK_Dmic1         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_CLKENSET), 6), /*!< Clock gate name: DMIC1 */
    kCLOCK_Dmic2         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_CLKENSET), 7), /*!< Clock gate name: DMIC2 */
    kCLOCK_Dmic3         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_CLKENSET), 8), /*!< Clock gate name: DMIC3 */

    /* NSS_CLKENSET register: SET offset enables, CLR offset (SET+4) disables */
    kCLOCK_NssBus      = CLK_GATE_DEFINE(CGU_REG_OFFSET(NSS_CLKENSET), 0), /*!< Clock gate name: NSS_BUS_CLK */
    kCLOCK_NssXspi     = CLK_GATE_DEFINE(CGU_REG_OFFSET(NSS_CLKENSET), 1), /*!< Clock gate name: NSS_XSPI_CLK */
    kCLOCK_NssXspiSfif = CLK_GATE_DEFINE(CGU_REG_OFFSET(NSS_CLKENSET), 2), /*!< Clock gate name: NSS_XSPI_SFIF */
    kCLOCK_Nss         = CLK_GATE_DEFINE(CGU_REG_OFFSET(NSS_CLKENSET), 3), /*!< Clock gate name: NSS_CLK */
    kCLOCK_NssDbgSo    = CLK_GATE_DEFINE(CGU_REG_OFFSET(NSS_CLKENSET), 4), /*!< Clock gate name: NSS debug serial out */

    /* CTRLSS_CLK_GATE_OVERRIDE register: read-modify-write (no SET/CLR pair) */
    kCLOCK_RomOverride   = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLK_GATE_OVERRIDE), 0), /*!< Clock gate override: ROM */
    kCLOCK_PkcOverride   = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLK_GATE_OVERRIDE), 1), /*!< Clock gate override: PKC */
    kCLOCK_Ahb2Vpb0     = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLK_GATE_OVERRIDE), 2), /*!< Clock gate override: AHB2VPB0 */
    kCLOCK_Ahb2Vpb1     = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLK_GATE_OVERRIDE), 3), /*!< Clock gate override: AHB2VPB1 */
    kCLOCK_Sdma0Override = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLK_GATE_OVERRIDE), 4), /*!< Clock gate override: SDMA0 */
    kCLOCK_CrcOverride   = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLK_GATE_OVERRIDE), 5), /*!< Clock gate override: CRC */
    kCLOCK_Sdma1Override = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLK_GATE_OVERRIDE), 6), /*!< Clock gate override: SDMA1 */
    kCLOCK_DebugOverride = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLK_GATE_OVERRIDE), 7), /*!< Clock gate override: DEBUG */
    kCLOCK_NicOverride   = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_CLK_GATE_OVERRIDE), 8), /*!< Clock gate override: NIC */

    /* ADSS_CLK_GATE_OVERRIDE register: read-modify-write (no SET/CLR pair) */
    kCLOCK_AdssDsp0Override  = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLK_GATE_OVERRIDE), 0), /*!< Clock gate override: ADSS DSP0 */
    kCLOCK_AdssDsp1Override  = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLK_GATE_OVERRIDE), 1), /*!< Clock gate override: ADSS DSP1 */
    kCLOCK_AdssIomemOverride = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_CLK_GATE_OVERRIDE), 2), /*!< Clock gate override: ADSS IOMEM */

    /*
     * Deepsleep clock-enable gates. Each *_DS_* register value is AND'ed with the
     * matching run-mode enable to define whether the clock keeps running during
     * deepsleep. These use the same SET/CLR/status offset layout as the run-mode
     * gates (status = SET-4, disable = SET+4), so CLOCK_EnableClock /
     * CLOCK_DisableClock operate on them without any special handling.
     */

    /* CTRLSS_DS_BUSCLKEN0SET register: deepsleep override for CTRLSS_BUSCLKEN0. */
    kCLOCK_DsRom0         = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 0),  /*!< Deepsleep gate: ROM0 */
    kCLOCK_DsPkc          = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 1),  /*!< Deepsleep gate: PKC */
    kCLOCK_DsPkcRam       = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 2),  /*!< Deepsleep gate: PKC_RAM */
    kCLOCK_DsPinmux       = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 3),  /*!< Deepsleep gate: PINMUX */
    kCLOCK_DsCpu0         = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 4),  /*!< Deepsleep gate: CPU0 */
    kCLOCK_DsGpioPort0    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 5),  /*!< Deepsleep gate: GPIO_PORT0 */
    kCLOCK_DsGpioPort1    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 6),  /*!< Deepsleep gate: GPIO_PORT1 */
    kCLOCK_DsGpioSecPort0 = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 7),  /*!< Deepsleep gate: GPIO_SEC_PORT0 */
    kCLOCK_DsGpioSecPort1 = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 8),  /*!< Deepsleep gate: GPIO_SEC_PORT1 */
    kCLOCK_DsGpioInt      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 9),  /*!< Deepsleep gate: GPIO_INT */
    kCLOCK_DsGpioSecInt   = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 10), /*!< Deepsleep gate: GPIO_SEC_INT */
    kCLOCK_DsGpioGlobint  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 11), /*!< Deepsleep gate: GPIO_GLOBINT */
    kCLOCK_DsDma0         = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 12), /*!< Deepsleep gate: DMA0 */
    kCLOCK_DsDma1         = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 13), /*!< Deepsleep gate: DMA1 */
    kCLOCK_DsCrc          = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 14), /*!< Deepsleep gate: CRC */
    kCLOCK_DsWdt          = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 15), /*!< Deepsleep gate: WDT */
    kCLOCK_DsCdog         = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 16), /*!< Deepsleep gate: CDOG */
    kCLOCK_DsNicAxi       = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 17), /*!< Deepsleep gate: NIC_AXI */
    kCLOCK_DsNicReg       = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 18), /*!< Deepsleep gate: NIC_REG */
    kCLOCK_DsMrt          = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 19), /*!< Deepsleep gate: MRT */
    kCLOCK_DsOsTimer      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 20), /*!< Deepsleep gate: OS_TIMER */
    kCLOCK_DsScTimer      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 21), /*!< Deepsleep gate: SC_TIMER */
    kCLOCK_DsUtick        = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 22), /*!< Deepsleep gate: UTICK */
    kCLOCK_DsFlexcomm0    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 23), /*!< Deepsleep gate: FLEXCOMM0 */
    kCLOCK_DsFlexcomm1    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 24), /*!< Deepsleep gate: FLEXCOMM1 */
    kCLOCK_DsFlexcomm2    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 25), /*!< Deepsleep gate: FLEXCOMM2 */
    kCLOCK_DsFlexcomm3    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 26), /*!< Deepsleep gate: FLEXCOMM3 */
    kCLOCK_DsFlexcomm4    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 27), /*!< Deepsleep gate: FLEXCOMM4 */
    kCLOCK_DsFlexcomm5    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 28), /*!< Deepsleep gate: FLEXCOMM5 */
    kCLOCK_DsIwic         = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 29), /*!< Deepsleep gate: IWIC */
    kCLOCK_DsOtp          = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 30), /*!< Deepsleep gate: OTP */
    kCLOCK_DsVision       = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN0SET), 31), /*!< Deepsleep gate: VISION */

    /* CTRLSS_DS_BUSCLKEN1SET register: deepsleep override for CTRLSS_BUSCLKEN1. */
    kCLOCK_DsCtimer0  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN1SET), 0),  /*!< Deepsleep gate: CTIMER0 */
    kCLOCK_DsCtimer1  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN1SET), 1),  /*!< Deepsleep gate: CTIMER1 */
    kCLOCK_DsCtimer2  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN1SET), 2),  /*!< Deepsleep gate: CTIMER2 */
    kCLOCK_DsCtimer3  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN1SET), 3),  /*!< Deepsleep gate: CTIMER3 */
    kCLOCK_DsCtimer4  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN1SET), 4),  /*!< Deepsleep gate: CTIMER4 */
    kCLOCK_DsI3c      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN1SET), 5),  /*!< Deepsleep gate: I3C */
    kCLOCK_DsFreqMeas = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN1SET), 6),  /*!< Deepsleep gate: FREQ_MEAS */
    kCLOCK_DsXspi     = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN1SET), 7),  /*!< Deepsleep gate: XSPI */
    kCLOCK_DsTrng     = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN1SET), 8),  /*!< Deepsleep gate: TRNG */
    kCLOCK_DsSgi      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN1SET), 9),  /*!< Deepsleep gate: SGI */
    kCLOCK_DsGdet     = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN1SET), 10), /*!< Deepsleep gate: GDET */
    kCLOCK_DsUdf      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN1SET), 11), /*!< Deepsleep gate: UDF */
    kCLOCK_DsItrc     = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN1SET), 12), /*!< Deepsleep gate: ITRC */
    kCLOCK_DsSeccon   = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN1SET), 13), /*!< Deepsleep gate: SECCON */
    kCLOCK_DsGlikey   = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN1SET), 14), /*!< Deepsleep gate: GLIKEY */
    kCLOCK_DsPmrcBus  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_BUSCLKEN1SET), 15), /*!< Deepsleep gate: PMRC bus clock */

    /* CTRLSS_DS_CLKENSET register: deepsleep override for CTRLSS_CLKEN. */
    kCLOCK_DsWdtPeriph      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 0),  /*!< Deepsleep gate: WDT functional clock */
    kCLOCK_DsTpiuTrace      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 1),  /*!< Deepsleep gate: TPIU_TRACE */
    kCLOCK_DsUart           = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 2),  /*!< Deepsleep gate: UART */
    kCLOCK_DsUtickPeriph    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 3),  /*!< Deepsleep gate: UTICK functional clock */
    kCLOCK_DsFreqMeasRef    = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 4),  /*!< Deepsleep gate: FREQ_MEAS_REF */
    kCLOCK_DsFreqMeasTarget = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 5),  /*!< Deepsleep gate: FREQ_MEAS_TARGET */
    kCLOCK_DsGdetPeriph     = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 6),  /*!< Deepsleep gate: GDET functional clock */
    kCLOCK_DsOsTimerPeriph  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 7),  /*!< Deepsleep gate: OS_TIMER functional clock */
    kCLOCK_DsCtimer0Periph  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 8),  /*!< Deepsleep gate: CTIMER0 functional clock */
    kCLOCK_DsCtimer1Periph  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 9),  /*!< Deepsleep gate: CTIMER1 functional clock */
    kCLOCK_DsCtimer2Periph  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 10), /*!< Deepsleep gate: CTIMER2 functional clock */
    kCLOCK_DsCtimer3Periph  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 11), /*!< Deepsleep gate: CTIMER3 functional clock */
    kCLOCK_DsCtimer4Periph  = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 12), /*!< Deepsleep gate: CTIMER4 functional clock */
    kCLOCK_DsFlexcomm0Periph = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 13), /*!< Deepsleep gate: FLEXCOMM0 functional clock */
    kCLOCK_DsFlexcomm1Periph = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 14), /*!< Deepsleep gate: FLEXCOMM1 functional clock */
    kCLOCK_DsFlexcomm2Periph = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 15), /*!< Deepsleep gate: FLEXCOMM2 functional clock */
    kCLOCK_DsFlexcomm3Periph = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 16), /*!< Deepsleep gate: FLEXCOMM3 functional clock */
    kCLOCK_DsFlexcomm4Periph = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 17), /*!< Deepsleep gate: FLEXCOMM4 functional clock */
    kCLOCK_DsFlexcomm5Periph = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 18), /*!< Deepsleep gate: FLEXCOMM5 functional clock */
    kCLOCK_DsI3cPeriph      = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 19), /*!< Deepsleep gate: I3C functional clock */
    kCLOCK_DsXspiPeriph     = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 20), /*!< Deepsleep gate: XSPI functional clock */
    kCLOCK_DsXspiSfif       = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 21), /*!< Deepsleep gate: XSPI_SFIF */
    kCLOCK_DsXspi2xSfif     = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 22), /*!< Deepsleep gate: XSPI_2XSFIF */
    kCLOCK_DsPmrc           = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 23), /*!< Deepsleep gate: PMRC functional clock */
    kCLOCK_DsMemCtrl        = CLK_GATE_DEFINE(CGU_REG_OFFSET(CTRLSS_DS_CLKENSET), 24), /*!< Deepsleep gate: MEM_CTRL */

    /* ADSS_DS_CLKENSET register: deepsleep override for ADSS_CLKEN. */
    kCLOCK_DsDspSys      = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 0),  /*!< Deepsleep gate: DSP_SYS */
    kCLOCK_DsDspComm     = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 1),  /*!< Deepsleep gate: DSP_COMM */
    kCLOCK_DsHifi5       = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 2),  /*!< Deepsleep gate: HIFI5 */
    kCLOCK_DsDsp0Nosteal = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 3),  /*!< Deepsleep gate: DSP0_NOSTEAL */
    kCLOCK_DsDsp1Nosteal = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 4),  /*!< Deepsleep gate: DSP1_NOSTEAL */
    kCLOCK_DsDspDebug    = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 5),  /*!< Deepsleep gate: DSP_DEBUG */
    kCLOCK_DsPcache0     = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 6),  /*!< Deepsleep gate: PCACHE0 */
    kCLOCK_DsDcache0     = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 7),  /*!< Deepsleep gate: DCACHE0 */
    kCLOCK_DsPcache1     = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 8),  /*!< Deepsleep gate: PCACHE1 */
    kCLOCK_DsDcache1     = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 9),  /*!< Deepsleep gate: DCACHE1 */
    kCLOCK_DsHsi         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 10), /*!< Deepsleep gate: HSI */
    kCLOCK_DsPerfmon     = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 11), /*!< Deepsleep gate: PERFMON */
    kCLOCK_DsSdmac       = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 12), /*!< Deepsleep gate: SDMAC */
    kCLOCK_DsTmr         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 13), /*!< Deepsleep gate: TMR */
    kCLOCK_DsMcTmr       = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 14), /*!< Deepsleep gate: MC_TMR */
    kCLOCK_DsWatchdog    = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 15), /*!< Deepsleep gate: WATCHDOG */
    kCLOCK_DsUartDsp     = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 16), /*!< Deepsleep gate: UART (DSP) */
    kCLOCK_DsAxiNss      = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 17), /*!< Deepsleep gate: AXI_NSS */
    kCLOCK_DsAxiCss      = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 18), /*!< Deepsleep gate: AXI_CSS */
    kCLOCK_DsApb         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 19), /*!< Deepsleep gate: APB */
    kCLOCK_DsDp0         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 20), /*!< Deepsleep gate: DP0 */
    kCLOCK_DsDp1         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 21), /*!< Deepsleep gate: DP1 */
    kCLOCK_DsDp2         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 22), /*!< Deepsleep gate: DP2 */
    kCLOCK_DsDp3         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 23), /*!< Deepsleep gate: DP3 */
    kCLOCK_DsIrfic       = CLK_GATE_DEFINE(CGU_REG_OFFSET(ADSS_DS_CLKENSET), 24), /*!< Deepsleep gate: IRFIC */

    /* ANC_DMIC_DS_CLKENSET register: deepsleep override for ANC_DMIC_CLKEN. */
    kCLOCK_DsCodecSync     = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_DS_CLKENSET), 0), /*!< Deepsleep gate: CODEC_SYNC */
    kCLOCK_DsCodecDec128fs = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_DS_CLKENSET), 1), /*!< Deepsleep gate: CODEC_DEC_128FS */
    kCLOCK_DsCodecAnc128fs = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_DS_CLKENSET), 2), /*!< Deepsleep gate: CODEC_ANC_128FS */
    kCLOCK_DsCodecInt128fs = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_DS_CLKENSET), 3), /*!< Deepsleep gate: CODEC_INT_128FS */
    kCLOCK_DsSyncSrc       = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_DS_CLKENSET), 4), /*!< Deepsleep gate: SYNC_SRC */
    kCLOCK_DsDmic0         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_DS_CLKENSET), 5), /*!< Deepsleep gate: DMIC0 */
    kCLOCK_DsDmic1         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_DS_CLKENSET), 6), /*!< Deepsleep gate: DMIC1 */
    kCLOCK_DsDmic2         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_DS_CLKENSET), 7), /*!< Deepsleep gate: DMIC2 */
    kCLOCK_DsDmic3         = CLK_GATE_DEFINE(CGU_REG_OFFSET(ANC_DMIC_DS_CLKENSET), 8), /*!< Deepsleep gate: DMIC3 */

    /* NSS_DS_CLKENSET register: deepsleep override for NSS_CLKEN. */
    kCLOCK_DsNssBus      = CLK_GATE_DEFINE(CGU_REG_OFFSET(NSS_DS_CLKENSET), 0), /*!< Deepsleep gate: NSS_BUS_CLK */
    kCLOCK_DsNssXspi     = CLK_GATE_DEFINE(CGU_REG_OFFSET(NSS_DS_CLKENSET), 1), /*!< Deepsleep gate: NSS_XSPI_CLK */
    kCLOCK_DsNssXspiSfif = CLK_GATE_DEFINE(CGU_REG_OFFSET(NSS_DS_CLKENSET), 2), /*!< Deepsleep gate: NSS_XSPI_SFIF */
    kCLOCK_DsNss         = CLK_GATE_DEFINE(CGU_REG_OFFSET(NSS_DS_CLKENSET), 3), /*!< Deepsleep gate: NSS_CLK */
    kCLOCK_DsNssDbgSo    = CLK_GATE_DEFINE(CGU_REG_OFFSET(NSS_DS_CLKENSET), 4), /*!< Deepsleep gate: NSS debug serial out */

    /* VISION_CLKENSET register: run-mode vision subsystem clock gates. */
    kCLOCK_VisionPllRef = CLK_GATE_DEFINE(CGU_REG_OFFSET(VISION_CLKENSET), 0), /*!< Clock gate name: VISION PLL_REF */
    kCLOCK_VisionPixel  = CLK_GATE_DEFINE(CGU_REG_OFFSET(VISION_CLKENSET), 1), /*!< Clock gate name: VISION PIXEL */
    kCLOCK_VisionRxEsc  = CLK_GATE_DEFINE(CGU_REG_OFFSET(VISION_CLKENSET), 2), /*!< Clock gate name: VISION RX_ESC */
    kCLOCK_VisionTxEsc  = CLK_GATE_DEFINE(CGU_REG_OFFSET(VISION_CLKENSET), 3), /*!< Clock gate name: VISION TX_ESC */

    /* VISION_DS_CLKENSET register: deepsleep override for VISION_CLKEN. */
    kCLOCK_DsVisionPllRef = CLK_GATE_DEFINE(CGU_REG_OFFSET(VISION_DS_CLKENSET), 0), /*!< Deepsleep gate: VISION PLL_REF */
    kCLOCK_DsVisionPixel  = CLK_GATE_DEFINE(CGU_REG_OFFSET(VISION_DS_CLKENSET), 1), /*!< Deepsleep gate: VISION PIXEL */
    kCLOCK_DsVisionRxEsc  = CLK_GATE_DEFINE(CGU_REG_OFFSET(VISION_DS_CLKENSET), 2), /*!< Deepsleep gate: VISION RX_ESC */
    kCLOCK_DsVisionTxEsc  = CLK_GATE_DEFINE(CGU_REG_OFFSET(VISION_DS_CLKENSET), 3), /*!< Deepsleep gate: VISION TX_ESC */

    kCLOCK_GateNotAvail = (0xFFFFFFFFU), /*!< Clock gate name: None */

} clock_ip_name_t;

/*! @brief Clock ip name array TBD. */

/*! @brief Clock name used to get clock frequency. */
typedef enum _clock_name
{
    /* Legacy aliases kept for source compatibility. All four map to the CM55
       core / main AHB bus leaf (CTRLSS_CLKSEL0.MAIN -> CPU_AHB divider). */
    kCLOCK_MainClk = 0U, /*!< MAIN_CLK                   */
    kCLOCK_CoreSysClk,   /*!< Core/system clock(CPU_CLK) */
    kCLOCK_SYSTEM_CLK,   /*!< SYSTEM clock               */
    kCLOCK_BusClk,       /*!< Bus Clk                    */

    /* Control subsystem (CSS) leaves. */
    kCLOCK_TpiuClk,       /*!< TPIU trace clock (CTRLSS_CLKSEL0.TPIU)   */
    kCLOCK_OsTimerClk,    /*!< OS timer clock (CTRLSS_CLKSEL0.MAIN)     */
    kCLOCK_WatchdogClk,   /*!< Watchdog clock (CTRLSS_CLKSEL0.MAIN)     */
    kCLOCK_XspiAhbClk,    /*!< XSPI AHB clock (CTRLSS_CLKSEL0.XSPI)     */
    kCLOCK_XspiClk,       /*!< XSPI clock (CTRLSS_CLKSEL0.XSPI)         */
    kCLOCK_UtickClk,      /*!< UTICK clock                             */
    kCLOCK_MeasRefClk,    /*!< Frequency measurement reference clock   */
    kCLOCK_MeasTargetClk, /*!< Frequency measurement target clock      */
    kCLOCK_GdetClk,       /*!< GDET clock                              */
    kCLOCK_I3cClk,        /*!< I3C clock                               */
    kCLOCK_PmrcClk,       /*!< PMRC clock (CTRLSS_CLKSEL0.PMRC)         */
    kCLOCK_MemCtrlClk,    /*!< Memory controller clock (PMRC selector) */

    /* CTIMER leaves - keep contiguous: index with (kCLOCK_Ctimer0ClkFreq + n). */
    kCLOCK_Ctimer0ClkFreq, /*!< CTIMER0 clock */
    kCLOCK_Ctimer1ClkFreq, /*!< CTIMER1 clock */
    kCLOCK_Ctimer2ClkFreq, /*!< CTIMER2 clock */
    kCLOCK_Ctimer3ClkFreq, /*!< CTIMER3 clock */
    kCLOCK_Ctimer4ClkFreq, /*!< CTIMER4 clock */

    /* FLEXCOMM leaves - keep contiguous: index with (kCLOCK_Flexcomm0ClkFreq + n). */
    kCLOCK_Flexcomm0ClkFreq, /*!< FLEXCOMM0 clock */
    kCLOCK_Flexcomm1ClkFreq, /*!< FLEXCOMM1 clock */
    kCLOCK_Flexcomm2ClkFreq, /*!< FLEXCOMM2 clock */
    kCLOCK_Flexcomm3ClkFreq, /*!< FLEXCOMM3 clock */
    kCLOCK_Flexcomm4ClkFreq, /*!< FLEXCOMM4 clock */
    kCLOCK_Flexcomm5ClkFreq, /*!< FLEXCOMM5 clock */

    /* Audio/DSP subsystem (ADSS) leaves. */
    kCLOCK_DspClk,         /*!< HiFi5 DSP clock (ADSS_CLKSEL.MAIN)    */
    kCLOCK_HsiClk,         /*!< HSI clock (ADSS_CLKSEL.MAIN)          */
    kCLOCK_SyncSrcClk,     /*!< Sync-source clock (ADSS_CLKSEL.MAIN)  */
    kCLOCK_UartDssClk,     /*!< UART DSS clock (ADSS_CLKSEL.MAIN)     */
    kCLOCK_SdmaClk,        /*!< SDMA clock (ADSS_CLKSEL.MAIN)         */
    kCLOCK_TimerClk,       /*!< Timer clock (ADSS_CLKSEL.MAIN)        */
    kCLOCK_McTimerClk,     /*!< Motor-control timer (ADSS_CLKSEL.MAIN)*/
    kCLOCK_WatchdogDssClk, /*!< Watchdog DSS clock (ADSS_CLKSEL.MAIN) */

    /* ADSS dataports (two-stage int/ext selector) - keep contiguous. */
    kCLOCK_Dataport0Clk, /*!< ADSS dataport 0 clock */
    kCLOCK_Dataport1Clk, /*!< ADSS dataport 1 clock */
    kCLOCK_Dataport2Clk, /*!< ADSS dataport 2 clock */
    kCLOCK_Dataport3Clk, /*!< ADSS dataport 3 clock */

    kCLOCK_IrficClk, /*!< IRFIC clock (sourced from ADSS main selector) */

    /* Security subsystem (NSS) leaves. */
    kCLOCK_NssBusClk,  /*!< NSS bus clock (NSS_CLKSEL.MAIN)  */
    kCLOCK_NssXspiClk, /*!< NSS XSPI clock (NSS_CLKSEL.XSPI) */

    /* Vision subsystem leaf (no divider). */
    kCLOCK_VisionClk, /*!< Vision clock (VISION_CLKSEL.MAIN) */

    kCLOCK_ClockNameCount, /*!< Sentinel: number of named clocks (array size). */
} clock_name_t;


/*! @brief Root clock sources.
 *
 * The enumerator values match the 2-bit CLKSEL selector decode used by the
 * clock attach muxes (00 = FROL, 01 = FRO, 10 = NSS FRO, 11 = PLL), so a
 * clock_source_t may be used directly as a selector value where required.
 */
typedef enum _clock_source
{
    kCLOCK_SrcFrol   = 0U, /*!< FROL free-running oscillator (low frequency) */
    kCLOCK_SrcFro    = 1U, /*!< FRO free-running oscillator */
    kCLOCK_SrcNssFro = 2U, /*!< NSS FRO free-running oscillator */
    kCLOCK_SrcPll    = 3U, /*!< Fractional-N PLL */
} clock_source_t;


/*! @brief Peripherals clock source definition. */
#define BUS_CLK        kCLOCK_BusClk

/*! @brief Clock Mux Switches
 *  The encoding is as follows each connection:
 *
 *  bits [1:0]   selector value (2-bit selectors) / bit 0 (1-bit selectors)
 *  bits [7:2]   selector field width in bits (defaults to 2)
 *  bits [15:8]  selector bitfield shift within the register
 *  bits [31:16] register byte offset from CGU base
 *
 */
#define REG_OFFSET_SHIFT (16U)
#define SEL_SHIFT_SHIFT  (8U)
#define SEL_WIDTH_SHIFT  (2U)

/* Encode an attach id with an explicit selector field width. */
#define CLK_ATTACH_DEF_W(reg_offset, sel_shift, width, sel)                                     \
    ((((uint32_t)(reg_offset)) << REG_OFFSET_SHIFT) | (((uint32_t)(sel_shift)) << SEL_SHIFT_SHIFT) | \
     (((uint32_t)(width)) << SEL_WIDTH_SHIFT) | (sel))

/* Most CGU clock selectors are 2-bit fields; default the width to 2. */
#define CLK_ATTACH_DEF(reg_offset, sel_shift, sel) CLK_ATTACH_DEF_W(reg_offset, sel_shift, 2U, sel)

#define CLK_ATTACH_REG_OFFSET(value)     (((uint32_t)(value)) >> REG_OFFSET_SHIFT)
#define CLK_ATTACH_SELECTOR_SHIFT(value) ((((uint32_t)(value)) >> SEL_SHIFT_SHIFT) & 0x000000FFU)
#define CLK_ATTACH_SEL_WIDTH(value)      ((((uint32_t)(value)) >> SEL_WIDTH_SHIFT) & 0x0000003FU)
#define CLK_ATTACH_CLK_SEL_MASK          (0x3U)
#define CLK_ATTACH_CLK_SEL(value)        (((uint32_t)(value)) & CLK_ATTACH_CLK_SEL_MASK)


/*!
 * @brief The enumerator of clock attach Id.
 */
typedef enum _clock_attach_id
{
    kNONE_to_NONE = (0xFFFFFFFFU), /*!< Attach NONE to NONE. */

    /* CTRLSS_CLKSEL0 register - Main clock sources */
    kFROL_to_MAIN_CLK   = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_MAIN_SHIFT, 0x0), /*!< Attach FROL to MAIN_CLK */
    kFRO_to_MAIN_CLK    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_MAIN_SHIFT, 0x1), /*!< Attach FRO to MAIN_CLK */
    kNSSFRO_to_MAIN_CLK = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_MAIN_SHIFT, 0x2), /*!< Attach NSS FRO to MAIN_CLK */
    kPLL_to_MAIN_CLK    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_MAIN_SHIFT, 0x3), /*!< Attach PLL to MAIN_CLK */

    /* XSPI clock sources */
    kFROL_to_XSPI   = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_XSPI_SHIFT, 0x0), /*!< Attach FROL to XSPI */
    kFRO_to_XSPI    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_XSPI_SHIFT, 0x1), /*!< Attach FRO to XSPI */
    kNSSFRO_to_XSPI = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_XSPI_SHIFT, 0x2), /*!< Attach NSS FRO to XSPI */
    kPLL_to_XSPI    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_XSPI_SHIFT, 0x3), /*!< Attach PLL to XSPI */

    /* TPIU clock sources (1-bit selector: FROL or FRO) */
    kFROL_to_TPIU = CLK_ATTACH_DEF_W(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_TPIU_SHIFT, 1U, 0x0), /*!< Attach FROL to TPIU */
    kFRO_to_TPIU  = CLK_ATTACH_DEF_W(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_TPIU_SHIFT, 1U, 0x1), /*!< Attach FRO to TPIU */

    /* UTICK clock sources */
    kFROL_to_UTICK   = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_UTICK_SHIFT, 0x0), /*!< Attach FROL to UTICK */
    kFRO_to_UTICK    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_UTICK_SHIFT, 0x1), /*!< Attach FRO to UTICK */
    kNSSFRO_to_UTICK = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_UTICK_SHIFT, 0x2), /*!< Attach NSS FRO to UTICK */
    kPLL_to_UTICK    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_UTICK_SHIFT, 0x3), /*!< Attach PLL to UTICK */

    /* Frequency measurement reference clock sources (4-bit selector; only FROL..PLL have an attach id) */
    kFROL_to_MEAS_REF =
        CLK_ATTACH_DEF_W(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_MEAS_REF_SHIFT, 4U, 0x0), /*!< Attach FROL to FREQ_MEAS_REF */
    kFRO_to_MEAS_REF = CLK_ATTACH_DEF_W(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_MEAS_REF_SHIFT, 4U, 0x1), /*!< Attach FRO to FREQ_MEAS_REF */
    kNSSFRO_to_MEAS_REF =
        CLK_ATTACH_DEF_W(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_MEAS_REF_SHIFT, 4U, 0x2), /*!< Attach NSS FRO to FREQ_MEAS_REF */
    kPLL_to_MEAS_REF = CLK_ATTACH_DEF_W(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_MEAS_REF_SHIFT, 4U, 0x3), /*!< Attach PLL to FREQ_MEAS_REF */

    /* Frequency measurement target clock sources (4-bit selector; only FROL..PLL have an attach id) */
    kFROL_to_MEAS_TARGET =
        CLK_ATTACH_DEF_W(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_MEAS_TARGET_SHIFT, 4U, 0x0), /*!< Attach FROL to FREQ_MEAS_TARGET */
    kFRO_to_MEAS_TARGET =
        CLK_ATTACH_DEF_W(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_MEAS_TARGET_SHIFT, 4U, 0x1), /*!< Attach FRO to FREQ_MEAS_TARGET */
    kNSSFRO_to_MEAS_TARGET =
        CLK_ATTACH_DEF_W(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_MEAS_TARGET_SHIFT, 4U, 0x2), /*!< Attach NSS FRO to FREQ_MEAS_TARGET */
    kPLL_to_MEAS_TARGET =
        CLK_ATTACH_DEF_W(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_MEAS_TARGET_SHIFT, 4U, 0x3), /*!< Attach PLL to FREQ_MEAS_TARGET */

    /* GDET clock sources (1-bit selector: FROL or FRO) */
    kFROL_to_GDET = CLK_ATTACH_DEF_W(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_GDET_SHIFT, 1U, 0x0), /*!< Attach FROL to GDET */
    kFRO_to_GDET  = CLK_ATTACH_DEF_W(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_GDET_SHIFT, 1U, 0x1), /*!< Attach FRO to GDET */

    /* I3C clock sources */
    kFROL_to_I3C   = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_I3C_SHIFT, 0x0), /*!< Attach FROL to I3C */
    kFRO_to_I3C    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_I3C_SHIFT, 0x1), /*!< Attach FRO to I3C */
    kNSSFRO_to_I3C = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_I3C_SHIFT, 0x2), /*!< Attach NSS FRO to I3C */
    kPLL_to_I3C    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_I3C_SHIFT, 0x3), /*!< Attach PLL to I3C */

    /* PMRC clock sources (1-bit selector: FROL or FRO) */
    kFROL_to_PMRC = CLK_ATTACH_DEF_W(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_PMRC_SHIFT, 1U, 0x0), /*!< Attach FROL to PMRC */
    kFRO_to_PMRC  = CLK_ATTACH_DEF_W(CGU_REG_OFFSET(CTRLSS_CLKSEL0), CGU_CTRLSS_CLKSEL0_PMRC_SHIFT, 1U, 0x1), /*!< Attach FRO to PMRC */

    /* CTRLSS_CLKSEL1 register - CTIMER clock sources */
    kFROL_to_CTIMER0   = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER0_SHIFT, 0x0), /*!< Attach FROL to CTIMER0 */
    kFRO_to_CTIMER0    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER0_SHIFT, 0x1), /*!< Attach FRO to CTIMER0 */
    kNSSFRO_to_CTIMER0 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER0_SHIFT, 0x2), /*!< Attach NSS FRO to CTIMER0 */
    kPLL_to_CTIMER0    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER0_SHIFT, 0x3), /*!< Attach PLL to CTIMER0 */

    kFROL_to_CTIMER1   = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER1_SHIFT, 0x0), /*!< Attach FROL to CTIMER1 */
    kFRO_to_CTIMER1    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER1_SHIFT, 0x1), /*!< Attach FRO to CTIMER1 */
    kNSSFRO_to_CTIMER1 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER1_SHIFT, 0x2), /*!< Attach NSS FRO to CTIMER1 */
    kPLL_to_CTIMER1    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER1_SHIFT, 0x3), /*!< Attach PLL to CTIMER1 */

    kFROL_to_CTIMER2   = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER2_SHIFT, 0x0), /*!< Attach FROL to CTIMER2 */
    kFRO_to_CTIMER2    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER2_SHIFT, 0x1), /*!< Attach FRO to CTIMER2 */
    kNSSFRO_to_CTIMER2 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER2_SHIFT, 0x2), /*!< Attach NSS FRO to CTIMER2 */
    kPLL_to_CTIMER2    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER2_SHIFT, 0x3), /*!< Attach PLL to CTIMER2 */

    kFROL_to_CTIMER3   = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER3_SHIFT, 0x0), /*!< Attach FROL to CTIMER3 */
    kFRO_to_CTIMER3    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER3_SHIFT, 0x1), /*!< Attach FRO to CTIMER3 */
    kNSSFRO_to_CTIMER3 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER3_SHIFT, 0x2), /*!< Attach NSS FRO to CTIMER3 */
    kPLL_to_CTIMER3    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER3_SHIFT, 0x3), /*!< Attach PLL to CTIMER3 */

    kFROL_to_CTIMER4   = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER4_SHIFT, 0x0), /*!< Attach FROL to CTIMER4 */
    kFRO_to_CTIMER4    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER4_SHIFT, 0x1), /*!< Attach FRO to CTIMER4 */
    kNSSFRO_to_CTIMER4 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER4_SHIFT, 0x2), /*!< Attach NSS FRO to CTIMER4 */
    kPLL_to_CTIMER4    = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_CTIMER4_SHIFT, 0x3), /*!< Attach PLL to CTIMER4 */

    /* FLEXCOMM clock sources */
    kFROL_to_FLEXCOMM0 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM0_SHIFT, 0x0), /*!< Attach FROL to FLEXCOMM0 */
    kFRO_to_FLEXCOMM0  = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM0_SHIFT, 0x1), /*!< Attach FRO to FLEXCOMM0 */
    kNSSFRO_to_FLEXCOMM0 =
        CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM0_SHIFT, 0x2), /*!< Attach NSS FRO to FLEXCOMM0 */
    kPLL_to_FLEXCOMM0 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM0_SHIFT, 0x3), /*!< Attach PLL to FLEXCOMM0 */

    kFROL_to_FLEXCOMM1 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM1_SHIFT, 0x0), /*!< Attach FROL to FLEXCOMM1 */
    kFRO_to_FLEXCOMM1  = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM1_SHIFT, 0x1), /*!< Attach FRO to FLEXCOMM1 */
    kNSSFRO_to_FLEXCOMM1 =
        CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM1_SHIFT, 0x2), /*!< Attach NSS FRO to FLEXCOMM1 */
    kPLL_to_FLEXCOMM1 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM1_SHIFT, 0x3), /*!< Attach PLL to FLEXCOMM1 */

    kFROL_to_FLEXCOMM2 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM2_SHIFT, 0x0), /*!< Attach FROL to FLEXCOMM2 */
    kFRO_to_FLEXCOMM2  = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM2_SHIFT, 0x1), /*!< Attach FRO to FLEXCOMM2 */
    kNSSFRO_to_FLEXCOMM2 =
        CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM2_SHIFT, 0x2), /*!< Attach NSS FRO to FLEXCOMM2 */
    kPLL_to_FLEXCOMM2 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM2_SHIFT, 0x3), /*!< Attach PLL to FLEXCOMM2 */

    kFROL_to_FLEXCOMM3 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM3_SHIFT, 0x0), /*!< Attach FROL to FLEXCOMM3 */
    kFRO_to_FLEXCOMM3  = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM3_SHIFT, 0x1), /*!< Attach FRO to FLEXCOMM3 */
    kNSSFRO_to_FLEXCOMM3 =
        CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM3_SHIFT, 0x2), /*!< Attach NSS FRO to FLEXCOMM3 */
    kPLL_to_FLEXCOMM3 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM3_SHIFT, 0x3), /*!< Attach PLL to FLEXCOMM3 */

    kFROL_to_FLEXCOMM4 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM4_SHIFT, 0x0), /*!< Attach FROL to FLEXCOMM4 */
    kFRO_to_FLEXCOMM4  = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM4_SHIFT, 0x1), /*!< Attach FRO to FLEXCOMM4 */
    kNSSFRO_to_FLEXCOMM4 =
        CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM4_SHIFT, 0x2), /*!< Attach NSS FRO to FLEXCOMM4 */
    kPLL_to_FLEXCOMM4 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM4_SHIFT, 0x3), /*!< Attach PLL to FLEXCOMM4 */

    kFROL_to_FLEXCOMM5 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM5_SHIFT, 0x0), /*!< Attach FROL to FLEXCOMM5 */
    kFRO_to_FLEXCOMM5  = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM5_SHIFT, 0x1), /*!< Attach FRO to FLEXCOMM5 */
    kNSSFRO_to_FLEXCOMM5 =
        CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM5_SHIFT, 0x2), /*!< Attach NSS FRO to FLEXCOMM5 */
    kPLL_to_FLEXCOMM5 = CLK_ATTACH_DEF(CGU_REG_OFFSET(CTRLSS_CLKSEL1), CGU_CTRLSS_CLKSEL1_FLEXCOMM5_SHIFT, 0x3), /*!< Attach PLL to FLEXCOMM5 */

    /* ADSS_CLKSEL register - ADSS clock sources */
    kFROL_to_ADSS_MAIN   = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_CLKSEL), CGU_ADSS_CLKSEL_MAIN_SHIFT, 0x0), /*!< Attach FROL to ADSS MAIN */
    kFRO_to_ADSS_MAIN    = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_CLKSEL), CGU_ADSS_CLKSEL_MAIN_SHIFT, 0x1), /*!< Attach FRO to ADSS MAIN */
    kNSSFRO_to_ADSS_MAIN = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_CLKSEL), CGU_ADSS_CLKSEL_MAIN_SHIFT, 0x2), /*!< Attach NSS FRO to ADSS MAIN */
    kPLL_to_ADSS_MAIN    = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_CLKSEL), CGU_ADSS_CLKSEL_MAIN_SHIFT, 0x3), /*!< Attach PLL to ADSS MAIN */

    /* ADSS_DP_CLKSEL register - ADSS dataport clock sources */
    kFROL_to_ADSS_DP0_INT   = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP0_INT_SRC_SHIFT, 0x0), /*!< Attach FROL to ADSS DP0 (internal) */
    kFRO_to_ADSS_DP0_INT    = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP0_INT_SRC_SHIFT, 0x1), /*!< Attach FRO to ADSS DP0 (internal) */
    kNSSFRO_to_ADSS_DP0_INT = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP0_INT_SRC_SHIFT, 0x2), /*!< Attach NSS FRO to ADSS DP0 (internal) */
    kPLL_to_ADSS_DP0_INT    = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP0_INT_SRC_SHIFT, 0x3), /*!< Attach PLL to ADSS DP0 (internal) */
    kINT_to_ADSS_DP0        = CLK_ATTACH_DEF_W(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP0_EXT_SEL_SHIFT, 1U, 0x0), /*!< Attach INT to ADSS DP0 */
    kEXT_to_ADSS_DP0        = CLK_ATTACH_DEF_W(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP0_EXT_SEL_SHIFT, 1U, 0x1), /*!< Attach EXT to ADSS DP0 */

    kFROL_to_ADSS_DP1_INT   = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP1_INT_SRC_SHIFT, 0x0), /*!< Attach FROL to ADSS DP1 (internal) */
    kFRO_to_ADSS_DP1_INT    = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP1_INT_SRC_SHIFT, 0x1), /*!< Attach FRO to ADSS DP1 (internal) */
    kNSSFRO_to_ADSS_DP1_INT = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP1_INT_SRC_SHIFT, 0x2), /*!< Attach NSS FRO to ADSS DP1 (internal) */
    kPLL_to_ADSS_DP1_INT    = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP1_INT_SRC_SHIFT, 0x3), /*!< Attach PLL to ADSS DP1 (internal) */
    kINT_to_ADSS_DP1        = CLK_ATTACH_DEF_W(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP1_EXT_SEL_SHIFT, 1U, 0x0), /*!< Attach INT to ADSS DP1 */
    kEXT_to_ADSS_DP1        = CLK_ATTACH_DEF_W(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP1_EXT_SEL_SHIFT, 1U, 0x1), /*!< Attach EXT to ADSS DP1 */

    kFROL_to_ADSS_DP2_INT   = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP2_INT_SRC_SHIFT, 0x0), /*!< Attach FROL to ADSS DP2 (internal) */
    kFRO_to_ADSS_DP2_INT    = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP2_INT_SRC_SHIFT, 0x1), /*!< Attach FRO to ADSS DP2 (internal) */
    kNSSFRO_to_ADSS_DP2_INT = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP2_INT_SRC_SHIFT, 0x2), /*!< Attach NSS FRO to ADSS DP2 (internal) */
    kPLL_to_ADSS_DP2_INT    = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP2_INT_SRC_SHIFT, 0x3), /*!< Attach PLL to ADSS DP2 (internal) */
    kINT_to_ADSS_DP2        = CLK_ATTACH_DEF_W(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP2_EXT_SEL_SHIFT, 1U, 0x0), /*!< Attach INT to ADSS DP2 */
    kEXT_to_ADSS_DP2        = CLK_ATTACH_DEF_W(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP2_EXT_SEL_SHIFT, 1U, 0x1), /*!< Attach EXT to ADSS DP2 */

    kFROL_to_ADSS_DP3_INT   = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP3_INT_SRC_SHIFT, 0x0), /*!< Attach FROL to ADSS DP3 (internal) */
    kFRO_to_ADSS_DP3_INT    = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP3_INT_SRC_SHIFT, 0x1), /*!< Attach FRO to ADSS DP3 (internal) */
    kNSSFRO_to_ADSS_DP3_INT = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP3_INT_SRC_SHIFT, 0x2), /*!< Attach NSS FRO to ADSS DP3 (internal) */
    kPLL_to_ADSS_DP3_INT    = CLK_ATTACH_DEF(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP3_INT_SRC_SHIFT, 0x3), /*!< Attach PLL to ADSS DP3 (internal) */
    kINT_to_ADSS_DP3        = CLK_ATTACH_DEF_W(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP3_EXT_SEL_SHIFT, 1U, 0x0), /*!< Attach INT to ADSS DP3 */
    kEXT_to_ADSS_DP3        = CLK_ATTACH_DEF_W(CGU_REG_OFFSET(ADSS_DP_CLKSEL), CGU_ADSS_DP_CLKSEL_DP3_EXT_SEL_SHIFT, 1U, 0x1), /*!< Attach EXT to ADSS DP3 */

    /* NSS_CLKSEL register - NSS clock sources */
    kFROL_to_NSS_MAIN   = CLK_ATTACH_DEF(CGU_REG_OFFSET(NSS_CLKSEL), CGU_NSS_CLKSEL_MAIN_SHIFT, 0x0), /*!< Attach FROL to NSS MAIN */
    kFRO_to_NSS_MAIN    = CLK_ATTACH_DEF(CGU_REG_OFFSET(NSS_CLKSEL), CGU_NSS_CLKSEL_MAIN_SHIFT, 0x1), /*!< Attach FRO to NSS MAIN */
    kNSSFRO_to_NSS_MAIN = CLK_ATTACH_DEF(CGU_REG_OFFSET(NSS_CLKSEL), CGU_NSS_CLKSEL_MAIN_SHIFT, 0x2), /*!< Attach NSS FRO to NSS MAIN */
    kPLL_to_NSS_MAIN    = CLK_ATTACH_DEF(CGU_REG_OFFSET(NSS_CLKSEL), CGU_NSS_CLKSEL_MAIN_SHIFT, 0x3), /*!< Attach PLL to NSS MAIN */

    kFROL_to_NSS_XSPI   = CLK_ATTACH_DEF(CGU_REG_OFFSET(NSS_CLKSEL), CGU_NSS_CLKSEL_XSPI_SHIFT, 0x0), /*!< Attach FROL to NSS XSPI */
    kFRO_to_NSS_XSPI    = CLK_ATTACH_DEF(CGU_REG_OFFSET(NSS_CLKSEL), CGU_NSS_CLKSEL_XSPI_SHIFT, 0x1), /*!< Attach FRO to NSS XSPI */
    kNSSFRO_to_NSS_XSPI = CLK_ATTACH_DEF(CGU_REG_OFFSET(NSS_CLKSEL), CGU_NSS_CLKSEL_XSPI_SHIFT, 0x2), /*!< Attach NSS FRO to NSS XSPI */
    kPLL_to_NSS_XSPI    = CLK_ATTACH_DEF(CGU_REG_OFFSET(NSS_CLKSEL), CGU_NSS_CLKSEL_XSPI_SHIFT, 0x3), /*!< Attach PLL to NSS XSPI */

    /* VISION_CLKSEL register - Vision clock sources */
    kFROL_to_VISION   = CLK_ATTACH_DEF(CGU_REG_OFFSET(VISION_CLKSEL), CGU_VISION_CLKSEL_MAIN_SHIFT, 0x0), /*!< Attach FROL to VISION */
    kFRO_to_VISION    = CLK_ATTACH_DEF(CGU_REG_OFFSET(VISION_CLKSEL), CGU_VISION_CLKSEL_MAIN_SHIFT, 0x1), /*!< Attach FRO to VISION */
    kNSSFRO_to_VISION = CLK_ATTACH_DEF(CGU_REG_OFFSET(VISION_CLKSEL), CGU_VISION_CLKSEL_MAIN_SHIFT, 0x2), /*!< Attach NSS FRO to VISION */
    kPLL_to_VISION    = CLK_ATTACH_DEF(CGU_REG_OFFSET(VISION_CLKSEL), CGU_VISION_CLKSEL_MAIN_SHIFT, 0x3), /*!< Attach PLL to VISION */
} clock_attach_id_t;


/*! @brief Clock Divider Encoding
 *  The encoding is as follows for each divider:
 *
 *  bits 0-7   : bit width of divider field
 *  bits 8-15  : bit shift within register
 *  bits 16-31 : register offset from CGU base
 */
#define CLK_DIV_REG_OFFSET_SHIFT (16U)
#define CLK_DIV_BIT_SHIFT_SHIFT  (8U)
#define CLK_DIV_BIT_WIDTH_SHIFT  (0U)

#define CLK_DIV_DEFINE(reg_offset, bit_shift, bit_width)                                                             \
    ((((uint32_t)(reg_offset)) << CLK_DIV_REG_OFFSET_SHIFT) | (((uint32_t)(bit_shift)) << CLK_DIV_BIT_SHIFT_SHIFT) | \
     (((uint32_t)(bit_width)) << CLK_DIV_BIT_WIDTH_SHIFT))

#define CLK_DIV_REG_OFFSET(value) ((((uint32_t)(value)) >> CLK_DIV_REG_OFFSET_SHIFT) & 0xFFFFU)
#define CLK_DIV_BIT_SHIFT(value)  ((((uint32_t)(value)) >> CLK_DIV_BIT_SHIFT_SHIFT) & 0xFFU)
#define CLK_DIV_BIT_WIDTH(value)  ((((uint32_t)(value)) >> CLK_DIV_BIT_WIDTH_SHIFT) & 0xFFU)

/*! @brief Clock dividers */
typedef enum _clock_div_name
{
    kCLOCK_DivNone = 0xFFFFFFFFU, /*!< No divider */

    /* CTRLSS_CLKCFG0 register */
    kCLOCK_DivCpuAhb  = CLK_DIV_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKCFG0), 0U, 8U),  /*!< CPU/AHB main bus and processor clock divider */
    kCLOCK_DivXspiAhb = CLK_DIV_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKCFG0), 8U, 8U),  /*!< XSPI AHB clock divider */
    kCLOCK_DivXspi    = CLK_DIV_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKCFG0), 16U, 8U), /*!< XSPI main clock divider */
    kCLOCK_DivTpiu    = CLK_DIV_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKCFG0), 24U, 8U), /*!< TPIU main clock divider */

    /* CTRLSS_CLKCFG1 register */
    kCLOCK_DivUtick   = CLK_DIV_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKCFG1), 0U, 8U),  /*!< UTICK clock divider */
    kCLOCK_DivGdet    = CLK_DIV_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKCFG1), 8U, 8U),  /*!< GDet clock divider */
    kCLOCK_DivOsTimer = CLK_DIV_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKCFG1), 16U, 8U), /*!< OS timer clock divider */
    kCLOCK_DivI3c     = CLK_DIV_DEFINE(CGU_REG_OFFSET(CTRLSS_CLKCFG1), 24U, 8U), /*!< I3C clock divider */

    /* CTIMER_CLKCFG register */
    kCLOCK_DivCtimer0 = CLK_DIV_DEFINE(CGU_REG_OFFSET(CTIMER_CLKCFG), 0U, 6U),  /*!< CTimer0 clock divider */
    kCLOCK_DivCtimer1 = CLK_DIV_DEFINE(CGU_REG_OFFSET(CTIMER_CLKCFG), 6U, 6U),  /*!< CTimer1 clock divider */
    kCLOCK_DivCtimer2 = CLK_DIV_DEFINE(CGU_REG_OFFSET(CTIMER_CLKCFG), 12U, 6U), /*!< CTimer2 clock divider */
    kCLOCK_DivCtimer3 = CLK_DIV_DEFINE(CGU_REG_OFFSET(CTIMER_CLKCFG), 18U, 6U), /*!< CTimer3 clock divider */
    kCLOCK_DivCtimer4 = CLK_DIV_DEFINE(CGU_REG_OFFSET(CTIMER_CLKCFG), 24U, 6U), /*!< CTimer4 clock divider */

    /* FLEXCOMM_CLKCFG[] register array (one register per Flexcomm; CLKDIV field @0, width 5) */
    kCLOCK_DivFlexcomm0 = CLK_DIV_DEFINE(CGU_REG_OFFSET(FLEXCOMM_CLKCFG[0]), 0U, 5U), /*!< Flexcomm0 clock divider */
    kCLOCK_DivFlexcomm1 = CLK_DIV_DEFINE(CGU_REG_OFFSET(FLEXCOMM_CLKCFG[1]), 0U, 5U), /*!< Flexcomm1 clock divider */
    kCLOCK_DivFlexcomm2 = CLK_DIV_DEFINE(CGU_REG_OFFSET(FLEXCOMM_CLKCFG[2]), 0U, 5U), /*!< Flexcomm2 clock divider */
    kCLOCK_DivFlexcomm3 = CLK_DIV_DEFINE(CGU_REG_OFFSET(FLEXCOMM_CLKCFG[3]), 0U, 5U), /*!< Flexcomm3 clock divider */
    kCLOCK_DivFlexcomm4 = CLK_DIV_DEFINE(CGU_REG_OFFSET(FLEXCOMM_CLKCFG[4]), 0U, 5U), /*!< Flexcomm4 clock divider */
    kCLOCK_DivFlexcomm5 = CLK_DIV_DEFINE(CGU_REG_OFFSET(FLEXCOMM_CLKCFG[5]), 0U, 5U), /*!< Flexcomm5 clock divider */

    /* PMRC_CLKCFG register */
    kCLOCK_DivPmrc    = CLK_DIV_DEFINE(CGU_REG_OFFSET(PMRC_CLKCFG), 0U, 8U), /*!< PMRC clock divider */
    kCLOCK_DivMemCtrl = CLK_DIV_DEFINE(CGU_REG_OFFSET(PMRC_CLKCFG), 8U, 8U), /*!< Memory control clock divider */

    /* CTRLSS_WD_CLKCFG register */
    kCLOCK_DivWatchdog = CLK_DIV_DEFINE(CGU_REG_OFFSET(CTRLSS_WD_CLKCFG), 0U, 32U), /*!< Watchdog main clock divider */

    /* CTRLSS_FREQ_MEAS_CLKCFG register */
    kCLOCK_DivFreqMeasRef    = CLK_DIV_DEFINE(CGU_REG_OFFSET(CTRLSS_FREQ_MEAS_CLKCFG), 0U, 16U),  /*!< Frequency measurement reference clock divider */
    kCLOCK_DivFreqMeasTarget = CLK_DIV_DEFINE(CGU_REG_OFFSET(CTRLSS_FREQ_MEAS_CLKCFG), 16U, 16U), /*!< Frequency measurement target clock divider */

    /* ADSS_CLKCFG_MAIN register */
    kCLOCK_DivDsp = CLK_DIV_DEFINE(CGU_REG_OFFSET(ADSS_CLKCFG_MAIN), 0U, 16U),  /*!< DSP main clock divider */
    kCLOCK_DivHsi = CLK_DIV_DEFINE(CGU_REG_OFFSET(ADSS_CLKCFG_MAIN), 16U, 16U), /*!< HSI clock divider */

    /* ADSS_CLKCFG_ANC register */
    kCLOCK_DivCodecSync  = CLK_DIV_DEFINE(CGU_REG_OFFSET(ADSS_CLKCFG_ANC), 0U, 4U), /*!< Codec sync clock divider */
    kCLOCK_DivCodec128fs = CLK_DIV_DEFINE(CGU_REG_OFFSET(ADSS_CLKCFG_ANC), 4U, 8U), /*!< Codec 128fs clock divider */

    /* ADSS_CLKCFG_DMIC register */
    kCLOCK_DivDmic0 = CLK_DIV_DEFINE(CGU_REG_OFFSET(ADSS_CLKCFG_DMIC), 0U, 8U),  /*!< DMIC0 clock divider */
    kCLOCK_DivDmic1 = CLK_DIV_DEFINE(CGU_REG_OFFSET(ADSS_CLKCFG_DMIC), 8U, 8U),  /*!< DMIC1 clock divider */
    kCLOCK_DivDmic2 = CLK_DIV_DEFINE(CGU_REG_OFFSET(ADSS_CLKCFG_DMIC), 16U, 8U), /*!< DMIC2 clock divider */
    kCLOCK_DivDmic3 = CLK_DIV_DEFINE(CGU_REG_OFFSET(ADSS_CLKCFG_DMIC), 24U, 8U), /*!< DMIC3 clock divider */

    /* ADSS_PERIPH_CLKCFG0 register */
    kCLOCK_DivSyncSrc = CLK_DIV_DEFINE(CGU_REG_OFFSET(ADSS_PERIPH_CLKCFG0), 0U, 8U),  /*!< Sync-source clock divider */
    kCLOCK_DivUartDss = CLK_DIV_DEFINE(CGU_REG_OFFSET(ADSS_PERIPH_CLKCFG0), 8U, 16U), /*!< UART clock divider (DSS) */
    kCLOCK_DivSdma    = CLK_DIV_DEFINE(CGU_REG_OFFSET(ADSS_PERIPH_CLKCFG0), 24U, 8U), /*!< SDMA clock divider */

    /* ADSS_PERIPH_CLKCFG1 register */
    kCLOCK_DivTimer       = CLK_DIV_DEFINE(CGU_REG_OFFSET(ADSS_PERIPH_CLKCFG1), 0U, 8U),  /*!< Timer clock divider */
    kCLOCK_DivMcTimer     = CLK_DIV_DEFINE(CGU_REG_OFFSET(ADSS_PERIPH_CLKCFG1), 8U, 8U),  /*!< Motor-control timer clock divider */
    kCLOCK_DivWatchdogDss = CLK_DIV_DEFINE(CGU_REG_OFFSET(ADSS_PERIPH_CLKCFG1), 16U, 8U), /*!< Watchdog clock divider (DSS) */

    /* DATAPORTS_CLKDIV register */
    kCLOCK_DivDataport0 = CLK_DIV_DEFINE(CGU_REG_OFFSET(DATAPORTS_CLKDIV), 0U, 8U),  /*!< Dataport 0 divider */
    kCLOCK_DivDataport1 = CLK_DIV_DEFINE(CGU_REG_OFFSET(DATAPORTS_CLKDIV), 8U, 8U),  /*!< Dataport 1 divider */
    kCLOCK_DivDataport2 = CLK_DIV_DEFINE(CGU_REG_OFFSET(DATAPORTS_CLKDIV), 16U, 8U), /*!< Dataport 2 divider */
    kCLOCK_DivDataport3 = CLK_DIV_DEFINE(CGU_REG_OFFSET(DATAPORTS_CLKDIV), 24U, 8U), /*!< Dataport 3 divider */

    /* IRFIC register */
    kCLOCK_DivIrfic = CLK_DIV_DEFINE(CGU_REG_OFFSET(IRFIC), 0U, 3U), /*!< IRFIC clock divider */

    /* NSS_XSPI_CLKCFG register */
    kCLOCK_DivNssBus  = CLK_DIV_DEFINE(CGU_REG_OFFSET(NSS_XSPI_CLKCFG), 0U, 8U), /*!< NSS main bus clock divider */
    kCLOCK_DivNssXspi = CLK_DIV_DEFINE(CGU_REG_OFFSET(NSS_XSPI_CLKCFG), 8U, 8U), /*!< NSS XSPI main clock divider */

    /* VISION_CLKCFG register */
    kCLOCK_DivVisionPllRef = CLK_DIV_DEFINE(CGU_REG_OFFSET(VISION_CLKCFG), 0U, 8U),  /*!< Vision PLL_REF clock divider */
    kCLOCK_DivVisionPixel  = CLK_DIV_DEFINE(CGU_REG_OFFSET(VISION_CLKCFG), 8U, 8U),  /*!< Vision PIXEL clock divider */
    kCLOCK_DivVisionRxEsc  = CLK_DIV_DEFINE(CGU_REG_OFFSET(VISION_CLKCFG), 16U, 8U), /*!< Vision RX_ESC clock divider */
    kCLOCK_DivVisionTxEsc  = CLK_DIV_DEFINE(CGU_REG_OFFSET(VISION_CLKCFG), 24U, 8U), /*!< Vision TX_ESC clock divider */
} clock_div_name_t;

/*!< MAX clock divider (last entry in clock_div_name_t) */
#define kCLOCK_DivMax kCLOCK_DivVisionTxEsc

#endif /* IMXRTL3459AAA_cm55_core0_SERIES */

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

#if (IMXRTL3459AAA_cm55_core0_SERIES)

/*!
 * @brief Enable the clock for specific IP.
 * @param clk : Clock to be enabled.
 * @return kStatus_Success on success.
 */
status_t CLOCK_EnableClock(clock_ip_name_t clk);

/*!
 * @brief Disable the clock for specific IP.
 * @param clk : Clock to be Disabled.
 * @return kStatus_Success on success.
 * @return kStatus_Fail if clk is a watchdog clock gate (kCLOCK_WdtPeriph or
 *         kCLOCK_Watchdog), which are enable-only and cannot be disabled.
 */
status_t CLOCK_DisableClock(clock_ip_name_t clk);


/*!
 * @brief   Configure the clock selection muxes.
 * @param   connection  : Clock to be configured.
 * @return  Nothing
 */
void CLOCK_AttachClk(clock_attach_id_t connection);

/*!
 * @brief   Get the actual clock attach id.
 * This fuction uses the offset in input attach id, then it reads the actual
 * source value in the register and combine the offset to obtain an actual
 * attach id.
 * @param   connection  : Clock attach id to get.
 * @return  Clock source value.
 */
clock_attach_id_t CLOCK_GetClockAttachId(clock_attach_id_t connection);

/*!
 * @brief   Setup peripheral clock dividers.
 *
 * The raw field value is the direct divide ratio: value N (N != 0) selects
 * divide-by-N. A value of 0 selects the maximum division of 2^width (e.g. an
 * 8-bit field with value 0 divides by 256). The value is written verbatim to
 * the field.
 *
 * @param   div_name : Clock divider name
 * @param   value    : Raw divider field value
 */
void CLOCK_SetClockDiv(clock_div_name_t div_name, uint32_t value);

/*!
 * @brief   Get peripheral clock dividers.
 *
 * The raw field value is the direct divide ratio: value N (N != 0) selects
 * divide-by-N. A value of 0 selects the maximum division of 2^width (e.g. an
 * 8-bit field with value 0 divides by 256). The value is read verbatim from
 * the field.
 *
 * @param   div_name    : Clock divider name
 * @return  Raw divider field value
 */
uint32_t CLOCK_GetClockDiv(clock_div_name_t div_name);

/*!
 * @brief   Configure a Flexcomm serial clock divider chain (clkdiv + FRD).
 *
 * Programs all three fields of FLEXCOMM_CLKCFG[id] in a single write. The
 * generated Flexcomm functional clock is:
 *     F_prediv = F_in / clkDiv        (clkDiv == 0 selects F_in / 32)
 *     F_pulsed = F_prediv / (1 + frdMult / (frdDiv + 1))
 *     F_fc     = F_pulsed / 2
 * Programming frdMult to 0 disables (bypasses) the FRD, so F_pulsed = F_prediv.
 *
 * @param   id       Flexcomm index (0..5).
 * @param   clkDiv   Integer clock divider value [0..31].
 * @param   frdMult  FRD multiplier [0..255]; 0 bypasses the FRD.
 * @param   frdDiv   FRD divider term [0..255].
 * @return  kStatus_Success on success.
 * @return  kStatus_InvalidArgument if id or any field value is out of range.
 */
status_t CLOCK_SetFlexcommClkDiv(uint32_t id, uint32_t clkDiv, uint32_t frdMult, uint32_t frdDiv);



/*! @brief  Return Frequency of selected clock
 *  @return Frequency of selected clock
 */
uint32_t CLOCK_GetFreq(clock_name_t clockName);

/*!
 * @brief Select the root source feeding a named leaf clock.
 * @param name : Named leaf clock (clock_name_t).
 * @param src  : Root source to attach (clock_source_t).
 * @return kStatus_Success on success.
 * @return kStatus_InvalidArgument if the leaf has no selector or src is out of
 *         range for the selector width.
 */
status_t CLOCK_SetClockSource(clock_name_t name, clock_source_t src);

/*!
 * @brief Set the integer divider of a named leaf clock.
 * @param name : Named leaf clock (clock_name_t).
 * @param div  : Integer divider value.
 * @return kStatus_Success on success.
 * @return kStatus_InvalidArgument if the leaf has no divider.
 */
status_t CLOCK_SetClockDivByName(clock_name_t name, uint32_t div);

/*!
 * @brief Return the frequency a clock gate runs at.
 *
 * Gates with a dedicated leaf report that leaf's frequency; plain AHB bus gates
 * report the shared main AHB clock frequency.
 * @param gate : Clock gate (clock_ip_name_t).
 * @return Frequency in Hz, or 0 if the gate has no known rate leaf.
 */
uint32_t CLOCK_GetFreqByGate(clock_ip_name_t gate);

/*!
 * @brief Select the root source feeding a clock gate's leaf.
 * @param gate : Clock gate (clock_ip_name_t).
 * @param src  : Root source to attach (clock_source_t).
 * @return kStatus_Success on success.
 * @return kStatus_InvalidArgument if the gate is a shared-AHB gate (no own
 *         selector) or src is out of range.
 */
status_t CLOCK_SetClockSourceByGate(clock_ip_name_t gate, clock_source_t src);

/*!
 * @brief Set the integer divider of a clock gate's leaf.
 * @param gate : Clock gate (clock_ip_name_t).
 * @param div  : Integer divider value.
 * @return kStatus_Success on success.
 * @return kStatus_InvalidArgument if the gate is a shared-AHB gate (no own
 *         divider).
 */
status_t CLOCK_SetClockDivByGate(clock_ip_name_t gate, uint32_t div);

/*!
 * @brief Program a Flexcomm gate's full clock divider chain (clkdiv + FRD) in a
 *        single register write.
 * @param gate    : Clock gate (clock_ip_name_t); must be a Flexcomm gate.
 * @param clkDiv  : Integer clock divider value.
 * @param frdMult : FRD multiplier; 0 bypasses the FRD.
 * @param frdDiv  : FRD divider term.
 * @return kStatus_Success on success.
 * @return kStatus_InvalidArgument if the gate is not a Flexcomm gate or a field
 *         value is out of range.
 */
status_t CLOCK_SetFlexcommClkDivByGate(clock_ip_name_t gate, uint32_t clkDiv, uint32_t frdMult,
				       uint32_t frdDiv);




/*! @brief  Return Frequency of FlexComm Clock
 *  @return Frequency of FlexComm Clock
 */
uint32_t CLOCK_GetFlexCommClkFreq(uint32_t id);

/*! @brief  Return Frequency of CTimer Clock (id 0..4). */
uint32_t CLOCK_GetCTimerClkFreq(uint32_t id);

/*! @brief  Return Frequency of an ADSS dataport clock (id 0..3). */
uint32_t CLOCK_GetDataportClkFreq(uint32_t id);

/*! @brief  Return Frequency of the CM55 core / main AHB bus clock. */
uint32_t CLOCK_GetCoreSysClkFreq(void);

/*! @brief  Return Frequency of the XSPI functional clock. */
uint32_t CLOCK_GetXspiClkFreq(void);

/*! @brief  Return Frequency of the XSPI AHB clock. */
uint32_t CLOCK_GetXspiAhbClkFreq(void);

/*! @brief  Return Frequency of the TPIU trace clock. */
uint32_t CLOCK_GetTpiuClkFreq(void);

/*! @brief  Return Frequency of the OS timer clock. */
uint32_t CLOCK_GetOsTimerClkFreq(void);

/*! @brief  Return Frequency of the watchdog clock. */
uint32_t CLOCK_GetWwdtClkFreq(void);

/*! @brief  Return Frequency of the UTICK clock. */
uint32_t CLOCK_GetUtickClkFreq(void);

/*! @brief  Return Frequency of the frequency-measurement reference clock. */
uint32_t CLOCK_GetMeasRefClkFreq(void);

/*! @brief  Return Frequency of the frequency-measurement target clock. */
uint32_t CLOCK_GetMeasTargetClkFreq(void);

/*! @brief  Return Frequency of the GDET clock. */
uint32_t CLOCK_GetGdetClkFreq(void);

/*! @brief  Return Frequency of the I3C clock. */
uint32_t CLOCK_GetI3cClkFreq(void);

/*! @brief  Return Frequency of the PMRC clock. */
uint32_t CLOCK_GetPmrcClkFreq(void);

/*! @brief  Return Frequency of the memory-controller clock. */
uint32_t CLOCK_GetMemCtrlClkFreq(void);

/*! @brief  Return Frequency of the HiFi5 DSP clock. */
uint32_t CLOCK_GetDspClkFreq(void);

/*! @brief  Return Frequency of the HSI clock. */
uint32_t CLOCK_GetHsiClkFreq(void);

/*! @brief  Return Frequency of the sync-source clock. */
uint32_t CLOCK_GetSyncSrcClkFreq(void);

/*! @brief  Return Frequency of the UART DSS clock. */
uint32_t CLOCK_GetUartDssClkFreq(void);

/*! @brief  Return Frequency of the SDMA clock. */
uint32_t CLOCK_GetSdmaClkFreq(void);

/*! @brief  Return Frequency of the ADSS timer clock. */
uint32_t CLOCK_GetTimerClkFreq(void);

/*! @brief  Return Frequency of the motor-control timer clock. */
uint32_t CLOCK_GetMcTimerClkFreq(void);

/*! @brief  Return Frequency of the DSS watchdog clock. */
uint32_t CLOCK_GetWatchdogDssClkFreq(void);

/*! @brief  Return Frequency of the IRFIC clock. */
uint32_t CLOCK_GetIrficClkFreq(void);

/*! @brief  Return Frequency of the NSS bus clock. */
uint32_t CLOCK_GetNssBusClkFreq(void);

/*! @brief  Return Frequency of the NSS XSPI clock. */
uint32_t CLOCK_GetNssXspiClkFreq(void);

/*! @brief  Return Frequency of the Vision clock. */
uint32_t CLOCK_GetVisionClkFreq(void);

/*!
 * @brief   Enable the 32kHz oscillator timer clock.
 * This function enables the 32kHz oscillator timer clock source.
 */
void CLOCK_EnableOstimer32kClock();

/*!
 * @brief   Enable a root clock source.
 *
 * Powers up and enables the selected clock source by asserting its iref, osc
 * and clock-output enables. For the PLL this additionally releases the PLL
 * reset and enables the PLL bias. The function returns once the enable bits
 * have been written; it does not currently poll for a lock/ready status.
 *
 * @param   src : Clock source to enable.
 * @return  kStatus_Success on success, kStatus_InvalidArgument for an unknown
 *          source.
 */
status_t CLOCK_EnableClockSource(clock_source_t src);

/*!
 * @brief   Disable a root clock source.
 *
 * Disables the clock output and powers down the selected clock source. For the
 * PLL this additionally asserts the PLL reset and clears the PLL bias.
 *
 * @param   src : Clock source to disable.
 */
void CLOCK_DisableClockSource(clock_source_t src);

/*!
 * @brief   Set the frequency associated with a leaf clock source.
 *
 * The FRO sources (FROL, FRO, NSS FRO) are analogue and trimmed to a target
 * frequency outside of the CGU register map, so the application informs the
 * driver of the actual frequency in Hz using this function (mirrors the
 * CLOCK_SetXtalFreq pattern used on other devices). FROL defaults to
 * CLOCK_FROL_DEFAULT_FREQ (20 MHz) at startup.
 *
 * @note The PLL is not a leaf source: its output is computed from its selected
 * input source and multiplier fields, so calling this function with
 * kCLOCK_SrcPll has no effect. On the current hardware only FROL and the PLL
 * are populated; FRO and NSS FRO are not available.
 *
 * @param   src  : Leaf clock source to configure.
 * @param   freq : Frequency in Hz.
 */
void CLOCK_SetClockSourceFreq(clock_source_t src, uint32_t freq);

/*!
 * @brief   Get the output frequency of a clock source.
 *
 * Returns 0 if the source clock output is not enabled. For the FRO sources the
 * stored frequency is returned. The PLL output is self-describing and computed
 * entirely from hardware: the PLL_OSC_CFG clk_sel field selects the PLL input
 * source, the frequency of that input source is obtained recursively, and the
 * result is scaled by (div_integer + div_fractional / 256). The input
 * pre-divider (div_input_sel) is treated as pass-through.
 *
 * @param   src : Clock source to query.
 * @return  Frequency in Hz, or 0 if the source is disabled or unknown.
 */
uint32_t CLOCK_GetClockSourceFreq(clock_source_t src);

#endif /* IMXRTL3459AAA_cm55_core0_SERIES */

#if defined(__cplusplus)
}
#endif /* __cplusplus */

/*! @} */

#endif /* _FSL_CLOCK_H_ */
