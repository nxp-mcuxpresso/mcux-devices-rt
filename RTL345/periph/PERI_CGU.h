/*
** ###################################################################
**     Processors:          IMXRTL3459AAAFAWAR_cm55_core0
**                          IMXRTL3459AAAFAWAR_cm55_core1
**                          IMXRTL3459AAAFBWAR_cm55_core0
**                          IMXRTL3459AAAFBWAR_cm55_core1
**
**     Version:             rev. 1.0, 2026-06-19
**     Build:               b261012
**
**     Abstract:
**         CMSIS Peripheral Access Layer for CGU
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2026 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2026-06-19)
**         Initial version
**
** ###################################################################
*/

/*!
 * @file PERI_CGU.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for CGU
 *
 * CMSIS Peripheral Access Layer for CGU
 */

#if !defined(PERI_CGU_H_)
#define PERI_CGU_H_                              /**< Symbol preventing repeated inclusion */

#if (defined(CPU_IMXRTL3459AAAFAWAR_cm55_core0) || defined(CPU_IMXRTL3459AAAFBWAR_cm55_core0))
#include "IMXRTL3459AAA_cm55_core0_COMMON.h"
#elif (defined(CPU_IMXRTL3459AAAFAWAR_cm55_core1) || defined(CPU_IMXRTL3459AAAFBWAR_cm55_core1))
#include "IMXRTL3459AAA_cm55_core1_COMMON.h"
#else
  #error "No valid CPU defined!"
#endif

/* ----------------------------------------------------------------------------
   -- Device Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Peripheral_access_layer Device Peripheral Access Layer
 * @{
 */


/*
** Start of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic push
  #else
    #pragma push
    #pragma anon_unions
  #endif
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=extended
#else
  #error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- CGU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CGU_Peripheral_Access_Layer CGU Peripheral Access Layer
 * @{
 */

/** CGU - Size of Registers Arrays */
#define CGU_FLEXCOMM_CLKCFG_COUNT                 6u

/** CGU - Register Layout Typedef */
typedef struct {
  __I  uint32_t STATUS_CTRLSS;                     /**< Status bits of the CGU., offset: 0x0 */
  __I  uint32_t STATUS_ADSS;                       /**< Status bits of the CGU., offset: 0x4 */
  __IO uint32_t FROL_CFG;                          /**< Configuration for the FROL oscillator., offset: 0x8 */
  __IO uint32_t FRO_CFG;                           /**< Configuration for the FRO oscillator., offset: 0xC */
  __IO uint32_t PLL_OSC_CFG;                       /**< Configuration for the PLL., offset: 0x10 */
  __IO uint32_t PLL_MODE_CFG;                      /**< Configuration for the PLL., offset: 0x14 */
  __IO uint32_t NSS_FRO_CFG;                       /**< Configuration for the NSS FRO., offset: 0x18 */
  __IO uint32_t CDU_CFG;                           /**< Analogue clock distribution unit configuration., offset: 0x1C */
  __I  uint32_t CTRLSS_CORERSTEN;                  /**< Status register for the CtrlSS module core reset enable.<br> The register indicates if the module core (functional-clock domain) is in reset or not.<br> <br> The core reset is asserted when the corresponding bit is set in ctrlss_coreRstEn OR in ctrlss_busRstEn.<br> <br> 0: Module core is out of reset.<br> 1: Module core is in reset., offset: 0x20 */
  __O  uint32_t CTRLSS_CORERSTENSET;               /**< Register to set bits in ctrlss_coreRstEn.<br> Write 1 to set a bitfield (enable the reset).<br> Write 0 is ignored. Read gives 0.<br> Affects the core (functional-clock domain) reset only. Does not affect the bus (configuration-clock domain) reset., offset: 0x24 */
  __O  uint32_t CTRLSS_CORERSTENCLR;               /**< Register to clear bits in ctrlss_coreRstEn.<br> Write 1 to clear a bitfield (disable the reset).<br> Write 0 is ignored. Read gives 0.<br> Note: the core reset may still be asserted if the corresponding ctrlss_busRstEn bit remains set., offset: 0x28 */
  __I  uint32_t CTRLSS_BUSRSTEN;                   /**< Status register for the CtrlSS module bus reset enable.<br> The register indicates if the module bus (configuration-clock domain) is in reset or not.<br> <br> Setting a bit here asserts BOTH the bus (configuration-clock domain) reset AND the core (functional-clock domain) reset.<br> The bus reset is NOT controlled by ctrlss_coreRstEn.<br> <br> 0: Module bus is out of reset.<br> 1: Module bus is in reset., offset: 0x2C */
  __O  uint32_t CTRLSS_BUSRSTENSET;                /**< Register to set bits in ctrlss_busRstEn.<br> Write 1 to set a bitfield (enable the reset).<br> Write 0 is ignored. Read gives 0.<br> Setting a bit asserts both the bus (configuration-clock domain) reset and the core (functional-clock domain) reset for that module., offset: 0x30 */
  __O  uint32_t CTRLSS_BUSRSTENCLR;                /**< Register to clear bits in ctrlss_busRstEn.<br> Write 1 to clear a bitfield (disable the reset).<br> Write 0 is ignored. Read gives 0.<br> Clearing a bit de-asserts the bus reset. The core reset is also de-asserted unless the corresponding ctrlss_coreRstEn bit is still set., offset: 0x34 */
  __IO uint32_t CTRLSS_CLKSEL0;                    /**< CtrlSS modules clock source selection - part 1, offset: 0x38 */
  __IO uint32_t CTRLSS_CLKSEL1;                    /**< CtrlSS modules clock source selection - part 2., offset: 0x3C */
  __IO uint32_t CTRLSS_CLKCFG0;                    /**< CtrlSS modules clock configuration 0, offset: 0x40 */
  __IO uint32_t CTRLSS_CLKCFG1;                    /**< CtrlSS modules clock configuration 1, offset: 0x44 */
  __IO uint32_t CTIMER_CLKCFG;                     /**< Ctimer modules clock configuration 1, offset: 0x48 */
  __IO uint32_t FLEXCOMM_CLKCFG[CGU_FLEXCOMM_CLKCFG_COUNT]; /**< Defines the clock division for the flexcomm serial clock., array offset: 0x4C, array step: 0x4 */
  __IO uint32_t PMRC_CLKCFG;                       /**< PMRC clock configuration, offset: 0x64 */
  __IO uint32_t CTRLSS_WD_CLKCFG;                  /**< CtrlSS modules clock configuration, offset: 0x68 */
  __IO uint32_t CTRLSS_FREQ_MEAS_CLKCFG;           /**< CtrlSS frequency measurement module clock configuration, offset: 0x6C */
  __I  uint32_t CTRLSS_BUSCLKEN0;                  /**< First status register for the CtrlSS bus clock enable.<br> The register indicates if the clock is enabled or disabled.<br> <br> 0: Clock is disabled<br> 1: Clock is enabled, offset: 0x70 */
  __O  uint32_t CTRLSS_BUSCLKEN0SET;               /**< Register to set bits in ctrlss_busclkEn0.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x74 */
  __O  uint32_t CTRLSS_BUSCLKEN0CLR;               /**< Register to clear bits in ctrlss_busclkEn0.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x78 */
  __I  uint32_t CTRLSS_DS_BUSCLKEN0;               /**< Deepsleep CtrlSS bus clock enable override.<br> The value of this register will be and'ed with the actual busclken to define the<br> setting during deepsleep., offset: 0x7C */
  __O  uint32_t CTRLSS_DS_BUSCLKEN0SET;            /**< Register to set bits in ctrlss_ds_busclkEn0.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x80 */
  __O  uint32_t CTRLSS_DS_BUSCLKEN0CLR;            /**< Register to clear bits in ctrlss_ds_busclkEn0.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x84 */
  __I  uint32_t CTRLSS_BUSCLKEN1;                  /**< Second status register for the CtrlSS bus clock enable.<br> The register indicates if the clock is enabled or disabled.<br> <br> 0: Clock is disabled<br> 1: Clock is enabled, offset: 0x88 */
  __O  uint32_t CTRLSS_BUSCLKEN1SET;               /**< Register to set bits in ctrlss_busclkEn1.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x8C */
  __O  uint32_t CTRLSS_BUSCLKEN1CLR;               /**< Register to clear bits in ctrlss_busclkEn1.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x90 */
  __I  uint32_t CTRLSS_DS_BUSCLKEN1;               /**< Deepsleep CtrlSS bus clock enable override.<br> The value of this register will be and'ed with the actual busclken to define the<br> setting during deepsleep., offset: 0x94 */
  __O  uint32_t CTRLSS_DS_BUSCLKEN1SET;            /**< Register to set bits in ctrlss_ds_busclkEn1.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x98 */
  __O  uint32_t CTRLSS_DS_BUSCLKEN1CLR;            /**< Register to clear bits in ctrlss_ds_busclkEn1.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x9C */
  __I  uint32_t CTRLSS_CLKEN;                      /**< Status register for the CtrlSS module clock enable.<br> The register indicates if the clock is enabled or disabled.<br> <br> 0: Clock is disabled<br> 1: Clock is enabled, offset: 0xA0 */
  __O  uint32_t CTRLSS_CLKENSET;                   /**< Register to set bits in ctrlss_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0xA4 */
  __O  uint32_t CTRLSS_CLKENCLR;                   /**< Register to clear bits in ctrlss_clkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0xA8 */
  __I  uint32_t CTRLSS_DS_CLKEN;                   /**< Deepsleep CtrlSS module clock enable override.<br> The value of this register will be and'ed with the actual busclken to define the<br> setting during deepsleep., offset: 0xAC */
  __O  uint32_t CTRLSS_DS_CLKENSET;                /**< Register to set bits in ctrlss_ds_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0xB0 */
  __O  uint32_t CTRLSS_DS_CLKENCLR;                /**< Register to clear bits in ctrlss_ds_clkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0xB4 */
  __IO uint32_t CTRLSS_CLK_GATE_OVERRIDE;          /**< Automatic clock gating overrule configuration register., offset: 0xB8 */
  __IO uint32_t ADSS_CLKCFG_MAIN;                  /**< DSP clock configuration, offset: 0xBC */
  __IO uint32_t ADSS_CLKCFG_ANC;                   /**< ANC clock configuration, offset: 0xC0 */
  __IO uint32_t ADSS_CLKCFG_DMIC;                  /**< DMIC clock configuration, offset: 0xC4 */
  __IO uint32_t ADSS_PERIPH_CLKCFG0;               /**< ADSS peripherals clock configuration, offset: 0xC8 */
  __IO uint32_t ADSS_PERIPH_CLKCFG1;               /**< ADSS peripheral clock configuration, offset: 0xCC */
  __IO uint32_t ADSS_CLKSEL;                       /**< ADSS modules clock source selection., offset: 0xD0 */
  __IO uint32_t ADSS_DP_CLKSEL;                    /**< ADSS dataport clock source selection., offset: 0xD4 */
  __IO uint32_t ADSS_DMIC_CLKSEL;                  /**< ADSS dmic modules clock source selection., offset: 0xD8 */
  __I  uint32_t ADSS_RSTEN;                        /**< Status register for the ADSS module reset enable.<br> The register indicates if the module is in reset or not.<br> <br> 0: Module is out of reset.<br> 1: Module is in reset., offset: 0xDC */
  __O  uint32_t ADSS_RSTENSET;                     /**< Register to set bits in adss_rstEn.<br> Write 1 to set a bitfield (enable the reset).<br> Write 0 is ignored. Read gives 0., offset: 0xE0 */
  __O  uint32_t ADSS_RSTENCLR;                     /**< Register to clear bits in adss_rstEn.<br> Write 1 to clear a bitfield (disable the reset).<br> Write 0 is ignored. Read gives 0., offset: 0xE4 */
  __I  uint32_t ADSS_CLKEN;                        /**< Status register for the ADSS module clock enable.<br> The register indicates if the clock is enabled or disabled.<br> <br> 0: Clock is disabled<br> 1: Clock is enabled, offset: 0xE8 */
  __O  uint32_t ADSS_CLKENSET;                     /**< Register to set bits in adss_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0xEC */
  __O  uint32_t ADSS_CLKENCLR;                     /**< Register to clear bits in adss_clkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0xF0 */
  __I  uint32_t ADSS_DS_CLKEN;                     /**< Deepsleep ADSS module clock enable override.<br> The value of this register will be and'ed with the actual busclken to define the<br> setting during deepsleep., offset: 0xF4 */
  __O  uint32_t ADSS_DS_CLKENSET;                  /**< Register to set bits in adss_ds_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0xF8 */
  __O  uint32_t ADSS_DS_CLKENCLR;                  /**< Register to clear bits in adss_ds_clkEnClr.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0xFC */
  __I  uint32_t ANC_DMIC_CLKEN;                    /**< Status register for the ANC/DMIC/Interpolator module clock enable.<br> The register indicates if the clock is enabled or disabled.<br> <br> 0: Clock is disabled<br> 1: Clock is enabled, offset: 0x100 */
  __O  uint32_t ANC_DMIC_CLKENSET;                 /**< Register to set bits in anc_dmic_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x104 */
  __O  uint32_t ANC_DMIC_CLKENCLR;                 /**< Register to clear bits in anc_dmic_clkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x108 */
  __I  uint32_t ANC_DMIC_DS_CLKEN;                 /**< Deepsleep ANC/DMIC/Interpolator clock enable override.<br> The value of this register will be and'ed with the actual busclken to define the<br> setting during deepsleep., offset: 0x10C */
  __O  uint32_t ANC_DMIC_DS_CLKENSET;              /**< Register to set bits in anc_dmic_ds_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x110 */
  __O  uint32_t ANC_DMIC_DS_CLKENCLR;              /**< Register to clear bits in anc_dmic_ds_clkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x114 */
  __IO uint32_t ADSS_CLK_GATE_OVERRIDE;            /**< Override for automatic clock gating in the ADSS., offset: 0x118 */
  __IO uint32_t DATAPORTS_CLKDIV;                  /**< Data port clock dividers, offset: 0x11C */
  __IO uint32_t IRFIC;                             /**< irfic clock divider setting., offset: 0x120 */
  __IO uint32_t NSS_CLKSEL;                        /**< NSS modules clock source selection, offset: 0x124 */
  __I  uint32_t NSS_RSTEN;                         /**< Status register for the NSS module reset enable.<br> The register indicates if the module is in reset or not.<br> <br> 0: Module is out of reset.<br> 1: Module is in reset., offset: 0x128 */
  __O  uint32_t NSS_RSTENSET;                      /**< Register to set bits in nss_rstEn.<br> Write 1 to set a bitfield (enable the reset).<br> Write 0 is ignored. Read gives 0., offset: 0x12C */
  __O  uint32_t NSS_RSTENCLR;                      /**< Register to clear bits in nss_rstEn.<br> Write 1 to clear a bitfield (disable the reset).<br> Write 0 is ignored. Read gives 0., offset: 0x130 */
  __I  uint32_t NSS_CLKEN;                         /**< Status register for the NSS clock enable.<br> The register indicates if the clock is enabled or disabled.<br> <br> 0: Clock is disabled<br> 1: Clock is enabled, offset: 0x134 */
  __O  uint32_t NSS_CLKENSET;                      /**< Register to set bits in nss_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x138 */
  __O  uint32_t NSS_CLKENCLR;                      /**< Register to clear bits in nss_clkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x13C */
  __I  uint32_t NSS_DS_CLKEN;                      /**< Deepsleep NSS clock enable override.<br> The value of this register will be and'ed with the actual busclken to define the<br> setting during deepsleep., offset: 0x140 */
  __O  uint32_t NSS_DS_CLKENSET;                   /**< Register to set bits in nss_ds_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x144 */
  __O  uint32_t NSS_DS_CLKENCLR;                   /**< Register to clear bits in nss_ds_clkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x148 */
  __IO uint32_t NSS_XSPI_CLKCFG;                   /**< NSS xspi clock configuration, offset: 0x14C */
  __I  uint32_t VISION_CLKEN;                      /**< Status register for the vision SS clock enable.<br> The register indicates if the clock is enabled or disabled.<br> <br> 0: Clock is disabled<br> 1: Clock is enabled, offset: 0x150 */
  __O  uint32_t VISION_CLKENSET;                   /**< Register to set bits in vision_ClkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x154 */
  __O  uint32_t VISION_CLKENCLR;                   /**< Register to clear bits in vision_ClkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x158 */
  __I  uint32_t VISION_DS_CLKEN;                   /**< Deepsleep vision clock enable override.<br> The value of this register will be and'ed with the actual busclken to define the<br> setting during deepsleep., offset: 0x15C */
  __O  uint32_t VISION_DS_CLKENSET;                /**< Register to set bits in vision_ds_ClkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x160 */
  __O  uint32_t VISION_DS_CLKENCLR;                /**< Register to clear bits in vision_ds_ClkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x164 */
  __IO uint32_t VISION_CLKSEL;                     /**< Vision clock source selection, offset: 0x168 */
  __IO uint32_t VISION_CLKCFG;                     /**< Vision SS clock configuration, offset: 0x16C */
  __I  uint32_t XBREAK_RSTEN;                      /**< Status register for the xbreak module reset enable.<br> The register indicates if the module is in reset or not.<br> <br> 0: Module is out of reset.<br> 1: Module is in reset., offset: 0x170 */
  __O  uint32_t XBREAK_RSTENSET;                   /**< Register to set bits in xbreak_rstEn.<br> Write 1 to set a bitfield (enable the reset).<br> Write 0 is ignored. Read gives 0., offset: 0x174 */
  __O  uint32_t XBREAK_RSTENCLR;                   /**< Register to clear bits in xbreak_rstEn.<br> Write 1 to clear a bitfield (disable the reset).<br> Write 0 is ignored. Read gives 0., offset: 0x178 */
  __I  uint32_t XBREAK_CLKEN;                      /**< Status register for the xbreak module clock enable.<br> The register indicates if the clock is enabled or disabled.<br> <br> 0: Clock is disabled<br> 1: Clock is enabled, offset: 0x17C */
  __O  uint32_t XBREAK_CLKENSET;                   /**< Register to set bits in xbreak_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x180 */
  __O  uint32_t XBREAK_CLKENCLR;                   /**< Register to clear bits in xbreak_clkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0., offset: 0x184 */
  __IO uint32_t DEBUG_CLK_DIV;                     /**< offset: 0x188 */
} CGU_Type;

/* ----------------------------------------------------------------------------
   -- CGU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CGU_Register_Masks CGU Register Masks
 * @{
 */

/*! @name STATUS_CTRLSS - Status bits of the CGU. */
/*! @{ */

#define CGU_STATUS_CTRLSS_CLKSEL_BUSY_MASK       (0x1U)
#define CGU_STATUS_CTRLSS_CLKSEL_BUSY_SHIFT      (0U)
/*! clksel_busy - Update of the clock mux selection ongoing. */
#define CGU_STATUS_CTRLSS_CLKSEL_BUSY(x)         (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_CLKSEL_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_CLKSEL_BUSY_MASK)

#define CGU_STATUS_CTRLSS_CPU_CLKDIV_BUSY_MASK   (0x2U)
#define CGU_STATUS_CTRLSS_CPU_CLKDIV_BUSY_SHIFT  (1U)
/*! cpu_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_CPU_CLKDIV_BUSY(x)     (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_CPU_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_CPU_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_CSS_XSPI_AHB_CLKDIV_BUSY_MASK (0x4U)
#define CGU_STATUS_CTRLSS_CSS_XSPI_AHB_CLKDIV_BUSY_SHIFT (2U)
/*! css_xspi_ahb_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_CSS_XSPI_AHB_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_CSS_XSPI_AHB_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_CSS_XSPI_AHB_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_CSS_XSPI_CLKDIV_BUSY_MASK (0x8U)
#define CGU_STATUS_CTRLSS_CSS_XSPI_CLKDIV_BUSY_SHIFT (3U)
/*! css_xspi_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_CSS_XSPI_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_CSS_XSPI_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_CSS_XSPI_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_NSS_XSPI_AHB_CLKDIV_BUSY_MASK (0x10U)
#define CGU_STATUS_CTRLSS_NSS_XSPI_AHB_CLKDIV_BUSY_SHIFT (4U)
/*! nss_xspi_ahb_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_NSS_XSPI_AHB_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_NSS_XSPI_AHB_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_NSS_XSPI_AHB_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_NSS_XSPI_CLKDIV_BUSY_MASK (0x20U)
#define CGU_STATUS_CTRLSS_NSS_XSPI_CLKDIV_BUSY_SHIFT (5U)
/*! nss_xspi_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_NSS_XSPI_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_NSS_XSPI_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_NSS_XSPI_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_TPIU_CLKDIV_BUSY_MASK  (0x40U)
#define CGU_STATUS_CTRLSS_TPIU_CLKDIV_BUSY_SHIFT (6U)
/*! tpiu_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_TPIU_CLKDIV_BUSY(x)    (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_TPIU_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_TPIU_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_UTICK_CLKDIV_BUSY_MASK (0x80U)
#define CGU_STATUS_CTRLSS_UTICK_CLKDIV_BUSY_SHIFT (7U)
/*! utick_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_UTICK_CLKDIV_BUSY(x)   (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_UTICK_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_UTICK_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_GDET_CLKDIV_BUSY_MASK  (0x100U)
#define CGU_STATUS_CTRLSS_GDET_CLKDIV_BUSY_SHIFT (8U)
/*! gdet_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_GDET_CLKDIV_BUSY(x)    (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_GDET_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_GDET_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_OS_TIMER_CLKDIV_BUSY_MASK (0x200U)
#define CGU_STATUS_CTRLSS_OS_TIMER_CLKDIV_BUSY_SHIFT (9U)
/*! os_timer_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_OS_TIMER_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_OS_TIMER_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_OS_TIMER_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_I3C_CLKDIV_BUSY_MASK   (0x400U)
#define CGU_STATUS_CTRLSS_I3C_CLKDIV_BUSY_SHIFT  (10U)
/*! i3c_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_I3C_CLKDIV_BUSY(x)     (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_I3C_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_I3C_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_CTIMER0_CLKDIV_BUSY_MASK (0x800U)
#define CGU_STATUS_CTRLSS_CTIMER0_CLKDIV_BUSY_SHIFT (11U)
/*! ctimer0_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_CTIMER0_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_CTIMER0_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_CTIMER0_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_CTIMER1_CLKDIV_BUSY_MASK (0x1000U)
#define CGU_STATUS_CTRLSS_CTIMER1_CLKDIV_BUSY_SHIFT (12U)
/*! ctimer1_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_CTIMER1_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_CTIMER1_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_CTIMER1_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_CTIMER2_CLKDIV_BUSY_MASK (0x2000U)
#define CGU_STATUS_CTRLSS_CTIMER2_CLKDIV_BUSY_SHIFT (13U)
/*! ctimer2_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_CTIMER2_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_CTIMER2_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_CTIMER2_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_CTIMER3_CLKDIV_BUSY_MASK (0x4000U)
#define CGU_STATUS_CTRLSS_CTIMER3_CLKDIV_BUSY_SHIFT (14U)
/*! ctimer3_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_CTIMER3_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_CTIMER3_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_CTIMER3_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_CTIMER4_CLKDIV_BUSY_MASK (0x8000U)
#define CGU_STATUS_CTRLSS_CTIMER4_CLKDIV_BUSY_SHIFT (15U)
/*! ctimer4_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_CTIMER4_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_CTIMER4_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_CTIMER4_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_FLEXCOMM0_CLKDIV_BUSY_MASK (0x10000U)
#define CGU_STATUS_CTRLSS_FLEXCOMM0_CLKDIV_BUSY_SHIFT (16U)
/*! flexcomm0_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_FLEXCOMM0_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_FLEXCOMM0_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_FLEXCOMM0_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_FLEXCOMM1_CLKDIV_BUSY_MASK (0x20000U)
#define CGU_STATUS_CTRLSS_FLEXCOMM1_CLKDIV_BUSY_SHIFT (17U)
/*! flexcomm1_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_FLEXCOMM1_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_FLEXCOMM1_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_FLEXCOMM1_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_FLEXCOMM2_CLKDIV_BUSY_MASK (0x40000U)
#define CGU_STATUS_CTRLSS_FLEXCOMM2_CLKDIV_BUSY_SHIFT (18U)
/*! flexcomm2_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_FLEXCOMM2_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_FLEXCOMM2_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_FLEXCOMM2_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_FLEXCOMM3_CLKDIV_BUSY_MASK (0x80000U)
#define CGU_STATUS_CTRLSS_FLEXCOMM3_CLKDIV_BUSY_SHIFT (19U)
/*! flexcomm3_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_FLEXCOMM3_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_FLEXCOMM3_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_FLEXCOMM3_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_FLEXCOMM4_CLKDIV_BUSY_MASK (0x100000U)
#define CGU_STATUS_CTRLSS_FLEXCOMM4_CLKDIV_BUSY_SHIFT (20U)
/*! flexcomm4_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_FLEXCOMM4_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_FLEXCOMM4_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_FLEXCOMM4_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_FLEXCOMM5_CLKDIV_BUSY_MASK (0x200000U)
#define CGU_STATUS_CTRLSS_FLEXCOMM5_CLKDIV_BUSY_SHIFT (21U)
/*! flexcomm5_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_FLEXCOMM5_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_FLEXCOMM5_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_FLEXCOMM5_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_PMRC_CLKDIV_BUSY_MASK  (0x400000U)
#define CGU_STATUS_CTRLSS_PMRC_CLKDIV_BUSY_SHIFT (22U)
/*! pmrc_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_PMRC_CLKDIV_BUSY(x)    (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_PMRC_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_PMRC_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_MEM_CTRL_CLKDIV_BUSY_MASK (0x800000U)
#define CGU_STATUS_CTRLSS_MEM_CTRL_CLKDIV_BUSY_SHIFT (23U)
/*! mem_ctrl_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_MEM_CTRL_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_MEM_CTRL_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_MEM_CTRL_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_WD_CLKDIV_BUSY_MASK    (0x1000000U)
#define CGU_STATUS_CTRLSS_WD_CLKDIV_BUSY_SHIFT   (24U)
/*! wd_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_WD_CLKDIV_BUSY(x)      (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_WD_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_WD_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_FREQ_MEAS_CLKDIV_BUSY_MASK (0x2000000U)
#define CGU_STATUS_CTRLSS_FREQ_MEAS_CLKDIV_BUSY_SHIFT (25U)
/*! freq_meas_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_FREQ_MEAS_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_FREQ_MEAS_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_FREQ_MEAS_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_FREQ_TARGET_CLKDIV_BUSY_MASK (0x4000000U)
#define CGU_STATUS_CTRLSS_FREQ_TARGET_CLKDIV_BUSY_SHIFT (26U)
/*! freq_target_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_FREQ_TARGET_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_FREQ_TARGET_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_FREQ_TARGET_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_VISION_PLL_REF_CLKDIV_BUSY_MASK (0x8000000U)
#define CGU_STATUS_CTRLSS_VISION_PLL_REF_CLKDIV_BUSY_SHIFT (27U)
/*! vision_pll_ref_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_VISION_PLL_REF_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_VISION_PLL_REF_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_VISION_PLL_REF_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_VISION_PIXEL_CLKDIV_BUSY_MASK (0x10000000U)
#define CGU_STATUS_CTRLSS_VISION_PIXEL_CLKDIV_BUSY_SHIFT (28U)
/*! vision_pixel_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_VISION_PIXEL_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_VISION_PIXEL_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_VISION_PIXEL_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_VISION_RX_ESC_CLKDIV_BUSY_MASK (0x20000000U)
#define CGU_STATUS_CTRLSS_VISION_RX_ESC_CLKDIV_BUSY_SHIFT (29U)
/*! vision_rx_esc_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_VISION_RX_ESC_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_VISION_RX_ESC_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_VISION_RX_ESC_CLKDIV_BUSY_MASK)

#define CGU_STATUS_CTRLSS_VISION_TX_ESC_CLKDIV_BUSY_MASK (0x40000000U)
#define CGU_STATUS_CTRLSS_VISION_TX_ESC_CLKDIV_BUSY_SHIFT (30U)
/*! vision_tx_esc_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_CTRLSS_VISION_TX_ESC_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_CTRLSS_VISION_TX_ESC_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_CTRLSS_VISION_TX_ESC_CLKDIV_BUSY_MASK)
/*! @} */

/*! @name STATUS_ADSS - Status bits of the CGU. */
/*! @{ */

#define CGU_STATUS_ADSS_DSP_CLKDIV_BUSY_MASK     (0x1U)
#define CGU_STATUS_ADSS_DSP_CLKDIV_BUSY_SHIFT    (0U)
/*! dsp_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_DSP_CLKDIV_BUSY(x)       (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_DSP_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_DSP_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_HSI_CLKDIV_BUSY_MASK     (0x2U)
#define CGU_STATUS_ADSS_HSI_CLKDIV_BUSY_SHIFT    (1U)
/*! hsi_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_HSI_CLKDIV_BUSY(x)       (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_HSI_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_HSI_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_CODEC_SYNC_CLKDIV_BUSY_MASK (0x4U)
#define CGU_STATUS_ADSS_CODEC_SYNC_CLKDIV_BUSY_SHIFT (2U)
/*! codec_sync_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_CODEC_SYNC_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_CODEC_SYNC_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_CODEC_SYNC_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_CODEC_128FS_CLKDIV_BUSY_MASK (0x8U)
#define CGU_STATUS_ADSS_CODEC_128FS_CLKDIV_BUSY_SHIFT (3U)
/*! codec_128fs_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_CODEC_128FS_CLKDIV_BUSY(x) (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_CODEC_128FS_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_CODEC_128FS_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_DP0_CLKDIV_BUSY_MASK     (0x10U)
#define CGU_STATUS_ADSS_DP0_CLKDIV_BUSY_SHIFT    (4U)
/*! dp0_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_DP0_CLKDIV_BUSY(x)       (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_DP0_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_DP0_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_DP1_CLKDIV_BUSY_MASK     (0x20U)
#define CGU_STATUS_ADSS_DP1_CLKDIV_BUSY_SHIFT    (5U)
/*! dp1_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_DP1_CLKDIV_BUSY(x)       (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_DP1_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_DP1_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_DP2_CLKDIV_BUSY_MASK     (0x40U)
#define CGU_STATUS_ADSS_DP2_CLKDIV_BUSY_SHIFT    (6U)
/*! dp2_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_DP2_CLKDIV_BUSY(x)       (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_DP2_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_DP2_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_DP3_CLKDIV_BUSY_MASK     (0x80U)
#define CGU_STATUS_ADSS_DP3_CLKDIV_BUSY_SHIFT    (7U)
/*! dp3_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_DP3_CLKDIV_BUSY(x)       (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_DP3_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_DP3_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_DMIC0_CLKDIV_BUSY_MASK   (0x100U)
#define CGU_STATUS_ADSS_DMIC0_CLKDIV_BUSY_SHIFT  (8U)
/*! dmic0_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_DMIC0_CLKDIV_BUSY(x)     (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_DMIC0_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_DMIC0_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_DMIC1_CLKDIV_BUSY_MASK   (0x200U)
#define CGU_STATUS_ADSS_DMIC1_CLKDIV_BUSY_SHIFT  (9U)
/*! dmic1_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_DMIC1_CLKDIV_BUSY(x)     (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_DMIC1_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_DMIC1_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_DMIC2_CLKDIV_BUSY_MASK   (0x400U)
#define CGU_STATUS_ADSS_DMIC2_CLKDIV_BUSY_SHIFT  (10U)
/*! dmic2_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_DMIC2_CLKDIV_BUSY(x)     (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_DMIC2_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_DMIC2_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_DMIC3_CLKDIV_BUSY_MASK   (0x800U)
#define CGU_STATUS_ADSS_DMIC3_CLKDIV_BUSY_SHIFT  (11U)
/*! dmic3_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_DMIC3_CLKDIV_BUSY(x)     (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_DMIC3_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_DMIC3_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_SYNC_SRC_CLKDIV_BUSY_MASK (0x1000U)
#define CGU_STATUS_ADSS_SYNC_SRC_CLKDIV_BUSY_SHIFT (12U)
/*! sync_src_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_SYNC_SRC_CLKDIV_BUSY(x)  (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_SYNC_SRC_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_SYNC_SRC_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_UART_CLKDIV_BUSY_MASK    (0x2000U)
#define CGU_STATUS_ADSS_UART_CLKDIV_BUSY_SHIFT   (13U)
/*! uart_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_UART_CLKDIV_BUSY(x)      (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_UART_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_UART_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_SDMA_CLKDIV_BUSY_MASK    (0x4000U)
#define CGU_STATUS_ADSS_SDMA_CLKDIV_BUSY_SHIFT   (14U)
/*! sdma_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_SDMA_CLKDIV_BUSY(x)      (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_SDMA_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_SDMA_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_TIMER_CLKDIV_BUSY_MASK   (0x8000U)
#define CGU_STATUS_ADSS_TIMER_CLKDIV_BUSY_SHIFT  (15U)
/*! timer_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_TIMER_CLKDIV_BUSY(x)     (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_TIMER_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_TIMER_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_MC_TIMER_CLKDIV_BUSY_MASK (0x10000U)
#define CGU_STATUS_ADSS_MC_TIMER_CLKDIV_BUSY_SHIFT (16U)
/*! mc_timer_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_MC_TIMER_CLKDIV_BUSY(x)  (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_MC_TIMER_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_MC_TIMER_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_WATCHDOG_CLKDIV_BUSY_MASK (0x20000U)
#define CGU_STATUS_ADSS_WATCHDOG_CLKDIV_BUSY_SHIFT (17U)
/*! watchdog_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_WATCHDOG_CLKDIV_BUSY(x)  (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_WATCHDOG_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_WATCHDOG_CLKDIV_BUSY_MASK)

#define CGU_STATUS_ADSS_IRFIC_CLKDIV_BUSY_MASK   (0x40000U)
#define CGU_STATUS_ADSS_IRFIC_CLKDIV_BUSY_SHIFT  (18U)
/*! irfic_clkdiv_busy - Update of the clock divider setting ongoing. */
#define CGU_STATUS_ADSS_IRFIC_CLKDIV_BUSY(x)     (((uint32_t)(((uint32_t)(x)) << CGU_STATUS_ADSS_IRFIC_CLKDIV_BUSY_SHIFT)) & CGU_STATUS_ADSS_IRFIC_CLKDIV_BUSY_MASK)
/*! @} */

/*! @name FROL_CFG - Configuration for the FROL oscillator. */
/*! @{ */

#define CGU_FROL_CFG_OSC_EN_MASK                 (0x1U)
#define CGU_FROL_CFG_OSC_EN_SHIFT                (0U)
/*! osc_en - FROL analogue clock enable */
#define CGU_FROL_CFG_OSC_EN(x)                   (((uint32_t)(((uint32_t)(x)) << CGU_FROL_CFG_OSC_EN_SHIFT)) & CGU_FROL_CFG_OSC_EN_MASK)

#define CGU_FROL_CFG_CLK_EN_MASK                 (0x2U)
#define CGU_FROL_CFG_CLK_EN_SHIFT                (1U)
/*! clk_en - FROL clock output enable */
#define CGU_FROL_CFG_CLK_EN(x)                   (((uint32_t)(((uint32_t)(x)) << CGU_FROL_CFG_CLK_EN_SHIFT)) & CGU_FROL_CFG_CLK_EN_MASK)

#define CGU_FROL_CFG_IREF_EN_MASK                (0x4U)
#define CGU_FROL_CFG_IREF_EN_SHIFT               (2U)
/*! iref_en - FROL iref enable */
#define CGU_FROL_CFG_IREF_EN(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_FROL_CFG_IREF_EN_SHIFT)) & CGU_FROL_CFG_IREF_EN_MASK)

#define CGU_FROL_CFG_IREF_SET_MASK               (0x78U)
#define CGU_FROL_CFG_IREF_SET_SHIFT              (3U)
/*! iref_set - Set iref and bias currents: 91.2559+iref_set*20.3041 */
#define CGU_FROL_CFG_IREF_SET(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_FROL_CFG_IREF_SET_SHIFT)) & CGU_FROL_CFG_IREF_SET_MASK)

#define CGU_FROL_CFG_COARSE_SEL_MASK             (0x1F80U)
#define CGU_FROL_CFG_COARSE_SEL_SHIFT            (7U)
/*! coarse_sel - Coarse frequency selection */
#define CGU_FROL_CFG_COARSE_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CGU_FROL_CFG_COARSE_SEL_SHIFT)) & CGU_FROL_CFG_COARSE_SEL_MASK)

#define CGU_FROL_CFG_FINE_SEL_MASK               (0xFE000U)
#define CGU_FROL_CFG_FINE_SEL_SHIFT              (13U)
/*! fine_sel - Finecoarse frequency selection */
#define CGU_FROL_CFG_FINE_SEL(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_FROL_CFG_FINE_SEL_SHIFT)) & CGU_FROL_CFG_FINE_SEL_MASK)

#define CGU_FROL_CFG_OTA_CHOP_EN_MASK            (0x100000U)
#define CGU_FROL_CFG_OTA_CHOP_EN_SHIFT           (20U)
/*! ota_chop_en - TBD - input from analogue */
#define CGU_FROL_CFG_OTA_CHOP_EN(x)              (((uint32_t)(((uint32_t)(x)) << CGU_FROL_CFG_OTA_CHOP_EN_SHIFT)) & CGU_FROL_CFG_OTA_CHOP_EN_MASK)
/*! @} */

/*! @name FRO_CFG - Configuration for the FRO oscillator. */
/*! @{ */

#define CGU_FRO_CFG_OSC_EN_MASK                  (0x1U)
#define CGU_FRO_CFG_OSC_EN_SHIFT                 (0U)
/*! osc_en - FRO analogue clock enable */
#define CGU_FRO_CFG_OSC_EN(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_FRO_CFG_OSC_EN_SHIFT)) & CGU_FRO_CFG_OSC_EN_MASK)

#define CGU_FRO_CFG_CLK_EN_MASK                  (0x2U)
#define CGU_FRO_CFG_CLK_EN_SHIFT                 (1U)
/*! clk_en - FRO clock output enable */
#define CGU_FRO_CFG_CLK_EN(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_FRO_CFG_CLK_EN_SHIFT)) & CGU_FRO_CFG_CLK_EN_MASK)

#define CGU_FRO_CFG_IREF_EN_MASK                 (0x4U)
#define CGU_FRO_CFG_IREF_EN_SHIFT                (2U)
/*! iref_en - FROL iref enable */
#define CGU_FRO_CFG_IREF_EN(x)                   (((uint32_t)(((uint32_t)(x)) << CGU_FRO_CFG_IREF_EN_SHIFT)) & CGU_FRO_CFG_IREF_EN_MASK)

#define CGU_FRO_CFG_IREF_SET_MASK                (0x78U)
#define CGU_FRO_CFG_IREF_SET_SHIFT               (3U)
/*! iref_set - Set iref and bias currents: 91.2559+iref_set*20.3041 */
#define CGU_FRO_CFG_IREF_SET(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_FRO_CFG_IREF_SET_SHIFT)) & CGU_FRO_CFG_IREF_SET_MASK)

#define CGU_FRO_CFG_COARSE_SEL_MASK              (0x1F80U)
#define CGU_FRO_CFG_COARSE_SEL_SHIFT             (7U)
/*! coarse_sel - Coarse frequency selection */
#define CGU_FRO_CFG_COARSE_SEL(x)                (((uint32_t)(((uint32_t)(x)) << CGU_FRO_CFG_COARSE_SEL_SHIFT)) & CGU_FRO_CFG_COARSE_SEL_MASK)

#define CGU_FRO_CFG_FINE_SEL_MASK                (0xFE000U)
#define CGU_FRO_CFG_FINE_SEL_SHIFT               (13U)
/*! fine_sel - Finecoarse frequency selection */
#define CGU_FRO_CFG_FINE_SEL(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_FRO_CFG_FINE_SEL_SHIFT)) & CGU_FRO_CFG_FINE_SEL_MASK)

#define CGU_FRO_CFG_COMP_CAP_SEL_MASK            (0x700000U)
#define CGU_FRO_CFG_COMP_CAP_SEL_SHIFT           (20U)
/*! comp_cap_sel - TBD - input from analogue */
#define CGU_FRO_CFG_COMP_CAP_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CGU_FRO_CFG_COMP_CAP_SEL_SHIFT)) & CGU_FRO_CFG_COMP_CAP_SEL_MASK)

#define CGU_FRO_CFG_COMP_RES_SEL_MASK            (0x3800000U)
#define CGU_FRO_CFG_COMP_RES_SEL_SHIFT           (23U)
/*! comp_res_sel - TBD - input from analogue */
#define CGU_FRO_CFG_COMP_RES_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CGU_FRO_CFG_COMP_RES_SEL_SHIFT)) & CGU_FRO_CFG_COMP_RES_SEL_MASK)

#define CGU_FRO_CFG_FREQ_LOW_EN_MASK             (0x4000000U)
#define CGU_FRO_CFG_FREQ_LOW_EN_SHIFT            (26U)
/*! freq_low_en - TBD - input from analogue */
#define CGU_FRO_CFG_FREQ_LOW_EN(x)               (((uint32_t)(((uint32_t)(x)) << CGU_FRO_CFG_FREQ_LOW_EN_SHIFT)) & CGU_FRO_CFG_FREQ_LOW_EN_MASK)

#define CGU_FRO_CFG_FRO_HIGH_PWR_EN_MASK         (0x8000000U)
#define CGU_FRO_CFG_FRO_HIGH_PWR_EN_SHIFT        (27U)
/*! fro_high_pwr_en - TBD - input from analogue */
#define CGU_FRO_CFG_FRO_HIGH_PWR_EN(x)           (((uint32_t)(((uint32_t)(x)) << CGU_FRO_CFG_FRO_HIGH_PWR_EN_SHIFT)) & CGU_FRO_CFG_FRO_HIGH_PWR_EN_MASK)

#define CGU_FRO_CFG_OTA_CHOP_EN_MASK             (0x10000000U)
#define CGU_FRO_CFG_OTA_CHOP_EN_SHIFT            (28U)
/*! ota_chop_en - TBD - input from analogue */
#define CGU_FRO_CFG_OTA_CHOP_EN(x)               (((uint32_t)(((uint32_t)(x)) << CGU_FRO_CFG_OTA_CHOP_EN_SHIFT)) & CGU_FRO_CFG_OTA_CHOP_EN_MASK)

#define CGU_FRO_CFG_CLK_DIV_EN_MASK              (0x20000000U)
#define CGU_FRO_CFG_CLK_DIV_EN_SHIFT             (29U)
/*! clk_div_en - TBD - input from analogue */
#define CGU_FRO_CFG_CLK_DIV_EN(x)                (((uint32_t)(((uint32_t)(x)) << CGU_FRO_CFG_CLK_DIV_EN_SHIFT)) & CGU_FRO_CFG_CLK_DIV_EN_MASK)
/*! @} */

/*! @name PLL_OSC_CFG - Configuration for the PLL. */
/*! @{ */

#define CGU_PLL_OSC_CFG_OSC_EN_MASK              (0x1U)
#define CGU_PLL_OSC_CFG_OSC_EN_SHIFT             (0U)
/*! osc_en - PLL analogue enable */
#define CGU_PLL_OSC_CFG_OSC_EN(x)                (((uint32_t)(((uint32_t)(x)) << CGU_PLL_OSC_CFG_OSC_EN_SHIFT)) & CGU_PLL_OSC_CFG_OSC_EN_MASK)

#define CGU_PLL_OSC_CFG_CLK_EN_MASK              (0x2U)
#define CGU_PLL_OSC_CFG_CLK_EN_SHIFT             (1U)
/*! clk_en - PLL clock enable */
#define CGU_PLL_OSC_CFG_CLK_EN(x)                (((uint32_t)(((uint32_t)(x)) << CGU_PLL_OSC_CFG_CLK_EN_SHIFT)) & CGU_PLL_OSC_CFG_CLK_EN_MASK)

#define CGU_PLL_OSC_CFG_IREF_EN_MASK             (0x4U)
#define CGU_PLL_OSC_CFG_IREF_EN_SHIFT            (2U)
/*! iref_en - FROL iref enable */
#define CGU_PLL_OSC_CFG_IREF_EN(x)               (((uint32_t)(((uint32_t)(x)) << CGU_PLL_OSC_CFG_IREF_EN_SHIFT)) & CGU_PLL_OSC_CFG_IREF_EN_MASK)

#define CGU_PLL_OSC_CFG_IREF_SET_MASK            (0x78U)
#define CGU_PLL_OSC_CFG_IREF_SET_SHIFT           (3U)
/*! iref_set - Set iref and bias currents: 91.2559+iref_set*20.3041 */
#define CGU_PLL_OSC_CFG_IREF_SET(x)              (((uint32_t)(((uint32_t)(x)) << CGU_PLL_OSC_CFG_IREF_SET_SHIFT)) & CGU_PLL_OSC_CFG_IREF_SET_MASK)

#define CGU_PLL_OSC_CFG_CLK_SEL_MASK             (0x380U)
#define CGU_PLL_OSC_CFG_CLK_SEL_SHIFT            (7U)
/*! clk_sel - PLL input clock selection */
#define CGU_PLL_OSC_CFG_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CGU_PLL_OSC_CFG_CLK_SEL_SHIFT)) & CGU_PLL_OSC_CFG_CLK_SEL_MASK)

#define CGU_PLL_OSC_CFG_DIV_INPUT_SEL_MASK       (0x7C00U)
#define CGU_PLL_OSC_CFG_DIV_INPUT_SEL_SHIFT      (10U)
/*! div_input_sel - TBD - input from analogue */
#define CGU_PLL_OSC_CFG_DIV_INPUT_SEL(x)         (((uint32_t)(((uint32_t)(x)) << CGU_PLL_OSC_CFG_DIV_INPUT_SEL_SHIFT)) & CGU_PLL_OSC_CFG_DIV_INPUT_SEL_MASK)

#define CGU_PLL_OSC_CFG_REF_CLK_EN_MASK          (0x8000U)
#define CGU_PLL_OSC_CFG_REF_CLK_EN_SHIFT         (15U)
/*! ref_clk_en - PLL reference clock enable */
#define CGU_PLL_OSC_CFG_REF_CLK_EN(x)            (((uint32_t)(((uint32_t)(x)) << CGU_PLL_OSC_CFG_REF_CLK_EN_SHIFT)) & CGU_PLL_OSC_CFG_REF_CLK_EN_MASK)

#define CGU_PLL_OSC_CFG_DIV_FRACTIONAL_MASK      (0xFF0000U)
#define CGU_PLL_OSC_CFG_DIV_FRACTIONAL_SHIFT     (16U)
/*! div_fractional - TBD - input from analogue */
#define CGU_PLL_OSC_CFG_DIV_FRACTIONAL(x)        (((uint32_t)(((uint32_t)(x)) << CGU_PLL_OSC_CFG_DIV_FRACTIONAL_SHIFT)) & CGU_PLL_OSC_CFG_DIV_FRACTIONAL_MASK)

#define CGU_PLL_OSC_CFG_DIV_INTEGER_MASK         (0x7F000000U)
#define CGU_PLL_OSC_CFG_DIV_INTEGER_SHIFT        (24U)
/*! div_integer - TBD - input from analogue */
#define CGU_PLL_OSC_CFG_DIV_INTEGER(x)           (((uint32_t)(((uint32_t)(x)) << CGU_PLL_OSC_CFG_DIV_INTEGER_SHIFT)) & CGU_PLL_OSC_CFG_DIV_INTEGER_MASK)
/*! @} */

/*! @name PLL_MODE_CFG - Configuration for the PLL. */
/*! @{ */

#define CGU_PLL_MODE_CFG_RESET_N_MASK            (0x1U)
#define CGU_PLL_MODE_CFG_RESET_N_SHIFT           (0U)
/*! reset_n - TBD - input from analogue */
#define CGU_PLL_MODE_CFG_RESET_N(x)              (((uint32_t)(((uint32_t)(x)) << CGU_PLL_MODE_CFG_RESET_N_SHIFT)) & CGU_PLL_MODE_CFG_RESET_N_MASK)

#define CGU_PLL_MODE_CFG_BIAS_EN_MASK            (0x2U)
#define CGU_PLL_MODE_CFG_BIAS_EN_SHIFT           (1U)
/*! bias_en - TBD - input from analogue */
#define CGU_PLL_MODE_CFG_BIAS_EN(x)              (((uint32_t)(((uint32_t)(x)) << CGU_PLL_MODE_CFG_BIAS_EN_SHIFT)) & CGU_PLL_MODE_CFG_BIAS_EN_MASK)

#define CGU_PLL_MODE_CFG_CPI_CUR_INCR_MASK       (0xCU)
#define CGU_PLL_MODE_CFG_CPI_CUR_INCR_SHIFT      (2U)
/*! cpi_cur_incr - TBD - input from analogue */
#define CGU_PLL_MODE_CFG_CPI_CUR_INCR(x)         (((uint32_t)(((uint32_t)(x)) << CGU_PLL_MODE_CFG_CPI_CUR_INCR_SHIFT)) & CGU_PLL_MODE_CFG_CPI_CUR_INCR_MASK)

#define CGU_PLL_MODE_CFG_LOOPFILTER_LOWBW_MASK   (0x10U)
#define CGU_PLL_MODE_CFG_LOOPFILTER_LOWBW_SHIFT  (4U)
/*! loopfilter_lowbw - TBD - input from analogue */
#define CGU_PLL_MODE_CFG_LOOPFILTER_LOWBW(x)     (((uint32_t)(((uint32_t)(x)) << CGU_PLL_MODE_CFG_LOOPFILTER_LOWBW_SHIFT)) & CGU_PLL_MODE_CFG_LOOPFILTER_LOWBW_MASK)

#define CGU_PLL_MODE_CFG_PLL_LOOPFILTER_CAP_HF_MASK (0x60U)
#define CGU_PLL_MODE_CFG_PLL_LOOPFILTER_CAP_HF_SHIFT (5U)
/*! pll_loopfilter_cap_hf - TBD - input from analogue */
#define CGU_PLL_MODE_CFG_PLL_LOOPFILTER_CAP_HF(x) (((uint32_t)(((uint32_t)(x)) << CGU_PLL_MODE_CFG_PLL_LOOPFILTER_CAP_HF_SHIFT)) & CGU_PLL_MODE_CFG_PLL_LOOPFILTER_CAP_HF_MASK)

#define CGU_PLL_MODE_CFG_NS_DITHER_MAG_MASK      (0x180U)
#define CGU_PLL_MODE_CFG_NS_DITHER_MAG_SHIFT     (7U)
/*! ns_dither_mag - TBD - input from analogue */
#define CGU_PLL_MODE_CFG_NS_DITHER_MAG(x)        (((uint32_t)(((uint32_t)(x)) << CGU_PLL_MODE_CFG_NS_DITHER_MAG_SHIFT)) & CGU_PLL_MODE_CFG_NS_DITHER_MAG_MASK)

#define CGU_PLL_MODE_CFG_NS_DITHER_TYPE_MASK     (0x600U)
#define CGU_PLL_MODE_CFG_NS_DITHER_TYPE_SHIFT    (9U)
/*! ns_dither_type - TBD - input from analogue */
#define CGU_PLL_MODE_CFG_NS_DITHER_TYPE(x)       (((uint32_t)(((uint32_t)(x)) << CGU_PLL_MODE_CFG_NS_DITHER_TYPE_SHIFT)) & CGU_PLL_MODE_CFG_NS_DITHER_TYPE_MASK)

#define CGU_PLL_MODE_CFG_NS_ENABLE_MASK          (0x800U)
#define CGU_PLL_MODE_CFG_NS_ENABLE_SHIFT         (11U)
/*! ns_enable - TBD - input from analogue */
#define CGU_PLL_MODE_CFG_NS_ENABLE(x)            (((uint32_t)(((uint32_t)(x)) << CGU_PLL_MODE_CFG_NS_ENABLE_SHIFT)) & CGU_PLL_MODE_CFG_NS_ENABLE_MASK)

#define CGU_PLL_MODE_CFG_NS_ORDER_MASK           (0x3000U)
#define CGU_PLL_MODE_CFG_NS_ORDER_SHIFT          (12U)
/*! ns_order - TBD - input from analogue */
#define CGU_PLL_MODE_CFG_NS_ORDER(x)             (((uint32_t)(((uint32_t)(x)) << CGU_PLL_MODE_CFG_NS_ORDER_SHIFT)) & CGU_PLL_MODE_CFG_NS_ORDER_MASK)

#define CGU_PLL_MODE_CFG_PRECHARGE_BIAS_ENABLE_MASK (0x4000U)
#define CGU_PLL_MODE_CFG_PRECHARGE_BIAS_ENABLE_SHIFT (14U)
/*! precharge_bias_enable - TBD - input from analogue */
#define CGU_PLL_MODE_CFG_PRECHARGE_BIAS_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << CGU_PLL_MODE_CFG_PRECHARGE_BIAS_ENABLE_SHIFT)) & CGU_PLL_MODE_CFG_PRECHARGE_BIAS_ENABLE_MASK)

#define CGU_PLL_MODE_CFG_PRECHARGE_START_MASK    (0x8000U)
#define CGU_PLL_MODE_CFG_PRECHARGE_START_SHIFT   (15U)
/*! precharge_start - TBD - input from analogue */
#define CGU_PLL_MODE_CFG_PRECHARGE_START(x)      (((uint32_t)(((uint32_t)(x)) << CGU_PLL_MODE_CFG_PRECHARGE_START_SHIFT)) & CGU_PLL_MODE_CFG_PRECHARGE_START_MASK)

#define CGU_PLL_MODE_CFG_PRECHARGE_STOP_MASK     (0x10000U)
#define CGU_PLL_MODE_CFG_PRECHARGE_STOP_SHIFT    (16U)
/*! precharge_stop - TBD - input from analogue */
#define CGU_PLL_MODE_CFG_PRECHARGE_STOP(x)       (((uint32_t)(((uint32_t)(x)) << CGU_PLL_MODE_CFG_PRECHARGE_STOP_SHIFT)) & CGU_PLL_MODE_CFG_PRECHARGE_STOP_MASK)

#define CGU_PLL_MODE_CFG_PLL_PRECHARGE_ACTIVE_MASK (0x20000U)
#define CGU_PLL_MODE_CFG_PLL_PRECHARGE_ACTIVE_SHIFT (17U)
/*! pll_precharge_active - PLL precharge status. */
#define CGU_PLL_MODE_CFG_PLL_PRECHARGE_ACTIVE(x) (((uint32_t)(((uint32_t)(x)) << CGU_PLL_MODE_CFG_PLL_PRECHARGE_ACTIVE_SHIFT)) & CGU_PLL_MODE_CFG_PLL_PRECHARGE_ACTIVE_MASK)
/*! @} */

/*! @name NSS_FRO_CFG - Configuration for the NSS FRO. */
/*! @{ */

#define CGU_NSS_FRO_CFG_OSC_EN_MASK              (0x1U)
#define CGU_NSS_FRO_CFG_OSC_EN_SHIFT             (0U)
/*! osc_en - PLL analogue enable */
#define CGU_NSS_FRO_CFG_OSC_EN(x)                (((uint32_t)(((uint32_t)(x)) << CGU_NSS_FRO_CFG_OSC_EN_SHIFT)) & CGU_NSS_FRO_CFG_OSC_EN_MASK)

#define CGU_NSS_FRO_CFG_CLK_EN_MASK              (0x2U)
#define CGU_NSS_FRO_CFG_CLK_EN_SHIFT             (1U)
/*! clk_en - FRO clock output enable */
#define CGU_NSS_FRO_CFG_CLK_EN(x)                (((uint32_t)(((uint32_t)(x)) << CGU_NSS_FRO_CFG_CLK_EN_SHIFT)) & CGU_NSS_FRO_CFG_CLK_EN_MASK)

#define CGU_NSS_FRO_CFG_IREF_EN_MASK             (0x4U)
#define CGU_NSS_FRO_CFG_IREF_EN_SHIFT            (2U)
/*! iref_en - FROL iref enable */
#define CGU_NSS_FRO_CFG_IREF_EN(x)               (((uint32_t)(((uint32_t)(x)) << CGU_NSS_FRO_CFG_IREF_EN_SHIFT)) & CGU_NSS_FRO_CFG_IREF_EN_MASK)

#define CGU_NSS_FRO_CFG_IREF_SET_MASK            (0x78U)
#define CGU_NSS_FRO_CFG_IREF_SET_SHIFT           (3U)
/*! iref_set - Set iref current for FRO NSS: 508.21+iref_set*101.246 */
#define CGU_NSS_FRO_CFG_IREF_SET(x)              (((uint32_t)(((uint32_t)(x)) << CGU_NSS_FRO_CFG_IREF_SET_SHIFT)) & CGU_NSS_FRO_CFG_IREF_SET_MASK)

#define CGU_NSS_FRO_CFG_FREQ_MASK                (0xFF80U)
#define CGU_NSS_FRO_CFG_FREQ_SHIFT               (7U)
/*! freq - Frequency setting */
#define CGU_NSS_FRO_CFG_FREQ(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_NSS_FRO_CFG_FREQ_SHIFT)) & CGU_NSS_FRO_CFG_FREQ_MASK)

#define CGU_NSS_FRO_CFG_OSC_SEL_MASK             (0x30000U)
#define CGU_NSS_FRO_CFG_OSC_SEL_SHIFT            (16U)
/*! osc_sel - TBD - input from analogue */
#define CGU_NSS_FRO_CFG_OSC_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CGU_NSS_FRO_CFG_OSC_SEL_SHIFT)) & CGU_NSS_FRO_CFG_OSC_SEL_MASK)

#define CGU_NSS_FRO_CFG_IPTAT_EN_MASK            (0x40000U)
#define CGU_NSS_FRO_CFG_IPTAT_EN_SHIFT           (18U)
/*! iptat_en - TBD - input from analogue */
#define CGU_NSS_FRO_CFG_IPTAT_EN(x)              (((uint32_t)(((uint32_t)(x)) << CGU_NSS_FRO_CFG_IPTAT_EN_SHIFT)) & CGU_NSS_FRO_CFG_IPTAT_EN_MASK)

#define CGU_NSS_FRO_CFG_TC_MASK                  (0x780000U)
#define CGU_NSS_FRO_CFG_TC_SHIFT                 (19U)
/*! tc - TBD - input from analogue */
#define CGU_NSS_FRO_CFG_TC(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_NSS_FRO_CFG_TC_SHIFT)) & CGU_NSS_FRO_CFG_TC_MASK)

#define CGU_NSS_FRO_CFG_DIV_SEL_MASK             (0x1800000U)
#define CGU_NSS_FRO_CFG_DIV_SEL_SHIFT            (23U)
/*! div_sel - TBD - input from analogue */
#define CGU_NSS_FRO_CFG_DIV_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CGU_NSS_FRO_CFG_DIV_SEL_SHIFT)) & CGU_NSS_FRO_CFG_DIV_SEL_MASK)
/*! @} */

/*! @name CDU_CFG - Analogue clock distribution unit configuration. */
/*! @{ */

#define CGU_CDU_CFG_DCDC_CLK_EN_MASK             (0x1U)
#define CGU_CDU_CFG_DCDC_CLK_EN_SHIFT            (0U)
/*! dcdc_clk_en - DCDC clock enable control. */
#define CGU_CDU_CFG_DCDC_CLK_EN(x)               (((uint32_t)(((uint32_t)(x)) << CGU_CDU_CFG_DCDC_CLK_EN_SHIFT)) & CGU_CDU_CFG_DCDC_CLK_EN_MASK)

#define CGU_CDU_CFG_DCDC_CLK_SEL_MASK            (0x6U)
#define CGU_CDU_CFG_DCDC_CLK_SEL_SHIFT           (1U)
/*! dcdc_clk_sel - TBD - input from analogue */
#define CGU_CDU_CFG_DCDC_CLK_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CDU_CFG_DCDC_CLK_SEL_SHIFT)) & CGU_CDU_CFG_DCDC_CLK_SEL_MASK)

#define CGU_CDU_CFG_DIV18_EN_MASK                (0x8U)
#define CGU_CDU_CFG_DIV18_EN_SHIFT               (3U)
/*! div18_en - TBD - input from analogue */
#define CGU_CDU_CFG_DIV18_EN(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_CDU_CFG_DIV18_EN_SHIFT)) & CGU_CDU_CFG_DIV18_EN_MASK)

#define CGU_CDU_CFG_DIV3_EN_MASK                 (0x10U)
#define CGU_CDU_CFG_DIV3_EN_SHIFT                (4U)
/*! div3_en - TBD - input from analogue */
#define CGU_CDU_CFG_DIV3_EN(x)                   (((uint32_t)(((uint32_t)(x)) << CGU_CDU_CFG_DIV3_EN_SHIFT)) & CGU_CDU_CFG_DIV3_EN_MASK)

#define CGU_CDU_CFG_EXT_2048FS_EN_MASK           (0x20U)
#define CGU_CDU_CFG_EXT_2048FS_EN_SHIFT          (5U)
/*! ext_2048fs_en - TBD - input from analogue */
#define CGU_CDU_CFG_EXT_2048FS_EN(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CDU_CFG_EXT_2048FS_EN_SHIFT)) & CGU_CDU_CFG_EXT_2048FS_EN_MASK)

#define CGU_CDU_CFG_OSC_SEL_MASK                 (0xC0U)
#define CGU_CDU_CFG_OSC_SEL_SHIFT                (6U)
/*! osc_sel - TBD - input from analogue */
#define CGU_CDU_CFG_OSC_SEL(x)                   (((uint32_t)(((uint32_t)(x)) << CGU_CDU_CFG_OSC_SEL_SHIFT)) & CGU_CDU_CFG_OSC_SEL_MASK)

#define CGU_CDU_CFG_CDU_EN_MASK                  (0x100U)
#define CGU_CDU_CFG_CDU_EN_SHIFT                 (8U)
/*! cdu_en - TBD - input from analogue */
#define CGU_CDU_CFG_CDU_EN(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_CDU_CFG_CDU_EN_SHIFT)) & CGU_CDU_CFG_CDU_EN_MASK)
/*! @} */

/*! @name CTRLSS_CORERSTEN - Status register for the CtrlSS module core reset enable.<br> The register indicates if the module core (functional-clock domain) is in reset or not.<br> <br> The core reset is asserted when the corresponding bit is set in ctrlss_coreRstEn OR in ctrlss_busRstEn.<br> <br> 0: Module core is out of reset.<br> 1: Module core is in reset. */
/*! @{ */

#define CGU_CTRLSS_CORERSTEN_TPIU_TRACE_MASK     (0x1U)
#define CGU_CTRLSS_CORERSTEN_TPIU_TRACE_SHIFT    (0U)
/*! tpiu_trace - TPIU reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTEN_TPIU_TRACE(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTEN_TPIU_TRACE_SHIFT)) & CGU_CTRLSS_CORERSTEN_TPIU_TRACE_MASK)

#define CGU_CTRLSS_CORERSTEN_UTICK_MASK          (0x2U)
#define CGU_CTRLSS_CORERSTEN_UTICK_SHIFT         (1U)
/*! utick - Micro-tick reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTEN_UTICK(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTEN_UTICK_SHIFT)) & CGU_CTRLSS_CORERSTEN_UTICK_MASK)

#define CGU_CTRLSS_CORERSTEN_GDET_MASK           (0x4U)
#define CGU_CTRLSS_CORERSTEN_GDET_SHIFT          (2U)
/*! gdet - Gdet reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTEN_GDET(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTEN_GDET_SHIFT)) & CGU_CTRLSS_CORERSTEN_GDET_MASK)

#define CGU_CTRLSS_CORERSTEN_OSTIMER_MASK        (0x8U)
#define CGU_CTRLSS_CORERSTEN_OSTIMER_SHIFT       (3U)
/*! ostimer - OS timer reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTEN_OSTIMER(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTEN_OSTIMER_SHIFT)) & CGU_CTRLSS_CORERSTEN_OSTIMER_MASK)

#define CGU_CTRLSS_CORERSTEN_CTIMER0_MASK        (0x10U)
#define CGU_CTRLSS_CORERSTEN_CTIMER0_SHIFT       (4U)
/*! Ctimer0 - Ctimer0 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTEN_CTIMER0(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTEN_CTIMER0_SHIFT)) & CGU_CTRLSS_CORERSTEN_CTIMER0_MASK)

#define CGU_CTRLSS_CORERSTEN_CTIMER1_MASK        (0x20U)
#define CGU_CTRLSS_CORERSTEN_CTIMER1_SHIFT       (5U)
/*! Ctimer1 - Ctimer1 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTEN_CTIMER1(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTEN_CTIMER1_SHIFT)) & CGU_CTRLSS_CORERSTEN_CTIMER1_MASK)

#define CGU_CTRLSS_CORERSTEN_CTIMER2_MASK        (0x40U)
#define CGU_CTRLSS_CORERSTEN_CTIMER2_SHIFT       (6U)
/*! Ctimer2 - Ctimer2 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTEN_CTIMER2(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTEN_CTIMER2_SHIFT)) & CGU_CTRLSS_CORERSTEN_CTIMER2_MASK)

#define CGU_CTRLSS_CORERSTEN_CTIMER3_MASK        (0x80U)
#define CGU_CTRLSS_CORERSTEN_CTIMER3_SHIFT       (7U)
/*! Ctimer3 - Ctimer3 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTEN_CTIMER3(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTEN_CTIMER3_SHIFT)) & CGU_CTRLSS_CORERSTEN_CTIMER3_MASK)

#define CGU_CTRLSS_CORERSTEN_CTIMER4_MASK        (0x100U)
#define CGU_CTRLSS_CORERSTEN_CTIMER4_SHIFT       (8U)
/*! Ctimer4 - Ctimer4 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTEN_CTIMER4(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTEN_CTIMER4_SHIFT)) & CGU_CTRLSS_CORERSTEN_CTIMER4_MASK)

#define CGU_CTRLSS_CORERSTEN_FLEXCOMM0_MASK      (0x200U)
#define CGU_CTRLSS_CORERSTEN_FLEXCOMM0_SHIFT     (9U)
/*! Flexcomm0 - Flexcomm0 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTEN_FLEXCOMM0(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTEN_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_CORERSTEN_FLEXCOMM0_MASK)

#define CGU_CTRLSS_CORERSTEN_FLEXCOMM1_MASK      (0x400U)
#define CGU_CTRLSS_CORERSTEN_FLEXCOMM1_SHIFT     (10U)
/*! Flexcomm1 - Flexcomm1 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTEN_FLEXCOMM1(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTEN_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_CORERSTEN_FLEXCOMM1_MASK)

#define CGU_CTRLSS_CORERSTEN_FLEXCOMM2_MASK      (0x800U)
#define CGU_CTRLSS_CORERSTEN_FLEXCOMM2_SHIFT     (11U)
/*! Flexcomm2 - Flexcomm2 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTEN_FLEXCOMM2(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTEN_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_CORERSTEN_FLEXCOMM2_MASK)

#define CGU_CTRLSS_CORERSTEN_FLEXCOMM3_MASK      (0x1000U)
#define CGU_CTRLSS_CORERSTEN_FLEXCOMM3_SHIFT     (12U)
/*! Flexcomm3 - Flexcomm3 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTEN_FLEXCOMM3(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTEN_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_CORERSTEN_FLEXCOMM3_MASK)

#define CGU_CTRLSS_CORERSTEN_FLEXCOMM4_MASK      (0x2000U)
#define CGU_CTRLSS_CORERSTEN_FLEXCOMM4_SHIFT     (13U)
/*! Flexcomm4 - Flexcomm4 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTEN_FLEXCOMM4(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTEN_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_CORERSTEN_FLEXCOMM4_MASK)

#define CGU_CTRLSS_CORERSTEN_FLEXCOMM5_MASK      (0x4000U)
#define CGU_CTRLSS_CORERSTEN_FLEXCOMM5_SHIFT     (14U)
/*! Flexcomm5 - Flexcomm5 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTEN_FLEXCOMM5(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTEN_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_CORERSTEN_FLEXCOMM5_MASK)

#define CGU_CTRLSS_CORERSTEN_I3C_MASK            (0x8000U)
#define CGU_CTRLSS_CORERSTEN_I3C_SHIFT           (15U)
/*! i3c - I3c reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTEN_I3C(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTEN_I3C_SHIFT)) & CGU_CTRLSS_CORERSTEN_I3C_MASK)
/*! @} */

/*! @name CTRLSS_CORERSTENSET - Register to set bits in ctrlss_coreRstEn.<br> Write 1 to set a bitfield (enable the reset).<br> Write 0 is ignored. Read gives 0.<br> Affects the core (functional-clock domain) reset only. Does not affect the bus (configuration-clock domain) reset. */
/*! @{ */

#define CGU_CTRLSS_CORERSTENSET_TPIU_TRACE_MASK  (0x1U)
#define CGU_CTRLSS_CORERSTENSET_TPIU_TRACE_SHIFT (0U)
/*! tpiu_trace - TPIU reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENSET_TPIU_TRACE(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENSET_TPIU_TRACE_SHIFT)) & CGU_CTRLSS_CORERSTENSET_TPIU_TRACE_MASK)

#define CGU_CTRLSS_CORERSTENSET_UTICK_MASK       (0x2U)
#define CGU_CTRLSS_CORERSTENSET_UTICK_SHIFT      (1U)
/*! utick - Micro-tick reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENSET_UTICK(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENSET_UTICK_SHIFT)) & CGU_CTRLSS_CORERSTENSET_UTICK_MASK)

#define CGU_CTRLSS_CORERSTENSET_GDET_MASK        (0x4U)
#define CGU_CTRLSS_CORERSTENSET_GDET_SHIFT       (2U)
/*! gdet - Gdet reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENSET_GDET(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENSET_GDET_SHIFT)) & CGU_CTRLSS_CORERSTENSET_GDET_MASK)

#define CGU_CTRLSS_CORERSTENSET_OSTIMER_MASK     (0x8U)
#define CGU_CTRLSS_CORERSTENSET_OSTIMER_SHIFT    (3U)
/*! ostimer - OS timer reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENSET_OSTIMER(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENSET_OSTIMER_SHIFT)) & CGU_CTRLSS_CORERSTENSET_OSTIMER_MASK)

#define CGU_CTRLSS_CORERSTENSET_CTIMER0_MASK     (0x10U)
#define CGU_CTRLSS_CORERSTENSET_CTIMER0_SHIFT    (4U)
/*! Ctimer0 - Ctimer0 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENSET_CTIMER0(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENSET_CTIMER0_SHIFT)) & CGU_CTRLSS_CORERSTENSET_CTIMER0_MASK)

#define CGU_CTRLSS_CORERSTENSET_CTIMER1_MASK     (0x20U)
#define CGU_CTRLSS_CORERSTENSET_CTIMER1_SHIFT    (5U)
/*! Ctimer1 - Ctimer1 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENSET_CTIMER1(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENSET_CTIMER1_SHIFT)) & CGU_CTRLSS_CORERSTENSET_CTIMER1_MASK)

#define CGU_CTRLSS_CORERSTENSET_CTIMER2_MASK     (0x40U)
#define CGU_CTRLSS_CORERSTENSET_CTIMER2_SHIFT    (6U)
/*! Ctimer2 - Ctimer2 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENSET_CTIMER2(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENSET_CTIMER2_SHIFT)) & CGU_CTRLSS_CORERSTENSET_CTIMER2_MASK)

#define CGU_CTRLSS_CORERSTENSET_CTIMER3_MASK     (0x80U)
#define CGU_CTRLSS_CORERSTENSET_CTIMER3_SHIFT    (7U)
/*! Ctimer3 - Ctimer3 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENSET_CTIMER3(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENSET_CTIMER3_SHIFT)) & CGU_CTRLSS_CORERSTENSET_CTIMER3_MASK)

#define CGU_CTRLSS_CORERSTENSET_CTIMER4_MASK     (0x100U)
#define CGU_CTRLSS_CORERSTENSET_CTIMER4_SHIFT    (8U)
/*! Ctimer4 - Ctimer4 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENSET_CTIMER4(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENSET_CTIMER4_SHIFT)) & CGU_CTRLSS_CORERSTENSET_CTIMER4_MASK)

#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM0_MASK   (0x200U)
#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM0_SHIFT  (9U)
/*! Flexcomm0 - Flexcomm0 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM0(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENSET_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_CORERSTENSET_FLEXCOMM0_MASK)

#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM1_MASK   (0x400U)
#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM1_SHIFT  (10U)
/*! Flexcomm1 - Flexcomm1 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM1(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENSET_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_CORERSTENSET_FLEXCOMM1_MASK)

#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM2_MASK   (0x800U)
#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM2_SHIFT  (11U)
/*! Flexcomm2 - Flexcomm2 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM2(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENSET_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_CORERSTENSET_FLEXCOMM2_MASK)

#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM3_MASK   (0x1000U)
#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM3_SHIFT  (12U)
/*! Flexcomm3 - Flexcomm3 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM3(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENSET_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_CORERSTENSET_FLEXCOMM3_MASK)

#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM4_MASK   (0x2000U)
#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM4_SHIFT  (13U)
/*! Flexcomm4 - Flexcomm4 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM4(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENSET_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_CORERSTENSET_FLEXCOMM4_MASK)

#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM5_MASK   (0x4000U)
#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM5_SHIFT  (14U)
/*! Flexcomm5 - Flexcomm5 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENSET_FLEXCOMM5(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENSET_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_CORERSTENSET_FLEXCOMM5_MASK)

#define CGU_CTRLSS_CORERSTENSET_I3C_MASK         (0x8000U)
#define CGU_CTRLSS_CORERSTENSET_I3C_SHIFT        (15U)
/*! i3c - I3c reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENSET_I3C(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENSET_I3C_SHIFT)) & CGU_CTRLSS_CORERSTENSET_I3C_MASK)
/*! @} */

/*! @name CTRLSS_CORERSTENCLR - Register to clear bits in ctrlss_coreRstEn.<br> Write 1 to clear a bitfield (disable the reset).<br> Write 0 is ignored. Read gives 0.<br> Note: the core reset may still be asserted if the corresponding ctrlss_busRstEn bit remains set. */
/*! @{ */

#define CGU_CTRLSS_CORERSTENCLR_TPIU_TRACE_MASK  (0x1U)
#define CGU_CTRLSS_CORERSTENCLR_TPIU_TRACE_SHIFT (0U)
/*! tpiu_trace - TPIU reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENCLR_TPIU_TRACE(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENCLR_TPIU_TRACE_SHIFT)) & CGU_CTRLSS_CORERSTENCLR_TPIU_TRACE_MASK)

#define CGU_CTRLSS_CORERSTENCLR_UTICK_MASK       (0x2U)
#define CGU_CTRLSS_CORERSTENCLR_UTICK_SHIFT      (1U)
/*! utick - Micro-tick reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENCLR_UTICK(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENCLR_UTICK_SHIFT)) & CGU_CTRLSS_CORERSTENCLR_UTICK_MASK)

#define CGU_CTRLSS_CORERSTENCLR_GDET_MASK        (0x4U)
#define CGU_CTRLSS_CORERSTENCLR_GDET_SHIFT       (2U)
/*! gdet - Gdet reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENCLR_GDET(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENCLR_GDET_SHIFT)) & CGU_CTRLSS_CORERSTENCLR_GDET_MASK)

#define CGU_CTRLSS_CORERSTENCLR_OSTIMER_MASK     (0x8U)
#define CGU_CTRLSS_CORERSTENCLR_OSTIMER_SHIFT    (3U)
/*! ostimer - OS timer reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENCLR_OSTIMER(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENCLR_OSTIMER_SHIFT)) & CGU_CTRLSS_CORERSTENCLR_OSTIMER_MASK)

#define CGU_CTRLSS_CORERSTENCLR_CTIMER0_MASK     (0x10U)
#define CGU_CTRLSS_CORERSTENCLR_CTIMER0_SHIFT    (4U)
/*! Ctimer0 - Ctimer0 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENCLR_CTIMER0(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENCLR_CTIMER0_SHIFT)) & CGU_CTRLSS_CORERSTENCLR_CTIMER0_MASK)

#define CGU_CTRLSS_CORERSTENCLR_CTIMER1_MASK     (0x20U)
#define CGU_CTRLSS_CORERSTENCLR_CTIMER1_SHIFT    (5U)
/*! Ctimer1 - Ctimer1 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENCLR_CTIMER1(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENCLR_CTIMER1_SHIFT)) & CGU_CTRLSS_CORERSTENCLR_CTIMER1_MASK)

#define CGU_CTRLSS_CORERSTENCLR_CTIMER2_MASK     (0x40U)
#define CGU_CTRLSS_CORERSTENCLR_CTIMER2_SHIFT    (6U)
/*! Ctimer2 - Ctimer2 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENCLR_CTIMER2(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENCLR_CTIMER2_SHIFT)) & CGU_CTRLSS_CORERSTENCLR_CTIMER2_MASK)

#define CGU_CTRLSS_CORERSTENCLR_CTIMER3_MASK     (0x80U)
#define CGU_CTRLSS_CORERSTENCLR_CTIMER3_SHIFT    (7U)
/*! Ctimer3 - Ctimer3 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENCLR_CTIMER3(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENCLR_CTIMER3_SHIFT)) & CGU_CTRLSS_CORERSTENCLR_CTIMER3_MASK)

#define CGU_CTRLSS_CORERSTENCLR_CTIMER4_MASK     (0x100U)
#define CGU_CTRLSS_CORERSTENCLR_CTIMER4_SHIFT    (8U)
/*! Ctimer4 - Ctimer4 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENCLR_CTIMER4(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENCLR_CTIMER4_SHIFT)) & CGU_CTRLSS_CORERSTENCLR_CTIMER4_MASK)

#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM0_MASK   (0x200U)
#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM0_SHIFT  (9U)
/*! Flexcomm0 - Flexcomm0 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM0(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENCLR_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_CORERSTENCLR_FLEXCOMM0_MASK)

#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM1_MASK   (0x400U)
#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM1_SHIFT  (10U)
/*! Flexcomm1 - Flexcomm1 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM1(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENCLR_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_CORERSTENCLR_FLEXCOMM1_MASK)

#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM2_MASK   (0x800U)
#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM2_SHIFT  (11U)
/*! Flexcomm2 - Flexcomm2 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM2(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENCLR_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_CORERSTENCLR_FLEXCOMM2_MASK)

#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM3_MASK   (0x1000U)
#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM3_SHIFT  (12U)
/*! Flexcomm3 - Flexcomm3 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM3(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENCLR_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_CORERSTENCLR_FLEXCOMM3_MASK)

#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM4_MASK   (0x2000U)
#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM4_SHIFT  (13U)
/*! Flexcomm4 - Flexcomm4 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM4(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENCLR_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_CORERSTENCLR_FLEXCOMM4_MASK)

#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM5_MASK   (0x4000U)
#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM5_SHIFT  (14U)
/*! Flexcomm5 - Flexcomm5 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENCLR_FLEXCOMM5(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENCLR_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_CORERSTENCLR_FLEXCOMM5_MASK)

#define CGU_CTRLSS_CORERSTENCLR_I3C_MASK         (0x8000U)
#define CGU_CTRLSS_CORERSTENCLR_I3C_SHIFT        (15U)
/*! i3c - I3c reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_CORERSTENCLR_I3C(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CORERSTENCLR_I3C_SHIFT)) & CGU_CTRLSS_CORERSTENCLR_I3C_MASK)
/*! @} */

/*! @name CTRLSS_BUSRSTEN - Status register for the CtrlSS module bus reset enable.<br> The register indicates if the module bus (configuration-clock domain) is in reset or not.<br> <br> Setting a bit here asserts BOTH the bus (configuration-clock domain) reset AND the core (functional-clock domain) reset.<br> The bus reset is NOT controlled by ctrlss_coreRstEn.<br> <br> 0: Module bus is out of reset.<br> 1: Module bus is in reset. */
/*! @{ */

#define CGU_CTRLSS_BUSRSTEN_TPIU_TRACE_MASK      (0x1U)
#define CGU_CTRLSS_BUSRSTEN_TPIU_TRACE_SHIFT     (0U)
/*! tpiu_trace - TPIU reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTEN_TPIU_TRACE(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTEN_TPIU_TRACE_SHIFT)) & CGU_CTRLSS_BUSRSTEN_TPIU_TRACE_MASK)

#define CGU_CTRLSS_BUSRSTEN_UTICK_MASK           (0x2U)
#define CGU_CTRLSS_BUSRSTEN_UTICK_SHIFT          (1U)
/*! utick - Micro-tick reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTEN_UTICK(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTEN_UTICK_SHIFT)) & CGU_CTRLSS_BUSRSTEN_UTICK_MASK)

#define CGU_CTRLSS_BUSRSTEN_GDET_MASK            (0x4U)
#define CGU_CTRLSS_BUSRSTEN_GDET_SHIFT           (2U)
/*! gdet - Gdet reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTEN_GDET(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTEN_GDET_SHIFT)) & CGU_CTRLSS_BUSRSTEN_GDET_MASK)

#define CGU_CTRLSS_BUSRSTEN_OSTIMER_MASK         (0x8U)
#define CGU_CTRLSS_BUSRSTEN_OSTIMER_SHIFT        (3U)
/*! ostimer - OS timer reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTEN_OSTIMER(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTEN_OSTIMER_SHIFT)) & CGU_CTRLSS_BUSRSTEN_OSTIMER_MASK)

#define CGU_CTRLSS_BUSRSTEN_CTIMER0_MASK         (0x10U)
#define CGU_CTRLSS_BUSRSTEN_CTIMER0_SHIFT        (4U)
/*! Ctimer0 - Ctimer0 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTEN_CTIMER0(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTEN_CTIMER0_SHIFT)) & CGU_CTRLSS_BUSRSTEN_CTIMER0_MASK)

#define CGU_CTRLSS_BUSRSTEN_CTIMER1_MASK         (0x20U)
#define CGU_CTRLSS_BUSRSTEN_CTIMER1_SHIFT        (5U)
/*! Ctimer1 - Ctimer1 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTEN_CTIMER1(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTEN_CTIMER1_SHIFT)) & CGU_CTRLSS_BUSRSTEN_CTIMER1_MASK)

#define CGU_CTRLSS_BUSRSTEN_CTIMER2_MASK         (0x40U)
#define CGU_CTRLSS_BUSRSTEN_CTIMER2_SHIFT        (6U)
/*! Ctimer2 - Ctimer2 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTEN_CTIMER2(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTEN_CTIMER2_SHIFT)) & CGU_CTRLSS_BUSRSTEN_CTIMER2_MASK)

#define CGU_CTRLSS_BUSRSTEN_CTIMER3_MASK         (0x80U)
#define CGU_CTRLSS_BUSRSTEN_CTIMER3_SHIFT        (7U)
/*! Ctimer3 - Ctimer3 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTEN_CTIMER3(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTEN_CTIMER3_SHIFT)) & CGU_CTRLSS_BUSRSTEN_CTIMER3_MASK)

#define CGU_CTRLSS_BUSRSTEN_CTIMER4_MASK         (0x100U)
#define CGU_CTRLSS_BUSRSTEN_CTIMER4_SHIFT        (8U)
/*! Ctimer4 - Ctimer4 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTEN_CTIMER4(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTEN_CTIMER4_SHIFT)) & CGU_CTRLSS_BUSRSTEN_CTIMER4_MASK)

#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM0_MASK       (0x200U)
#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM0_SHIFT      (9U)
/*! Flexcomm0 - Flexcomm0 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM0(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTEN_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_BUSRSTEN_FLEXCOMM0_MASK)

#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM1_MASK       (0x400U)
#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM1_SHIFT      (10U)
/*! Flexcomm1 - Flexcomm1 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM1(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTEN_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_BUSRSTEN_FLEXCOMM1_MASK)

#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM2_MASK       (0x800U)
#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM2_SHIFT      (11U)
/*! Flexcomm2 - Flexcomm2 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM2(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTEN_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_BUSRSTEN_FLEXCOMM2_MASK)

#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM3_MASK       (0x1000U)
#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM3_SHIFT      (12U)
/*! Flexcomm3 - Flexcomm3 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM3(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTEN_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_BUSRSTEN_FLEXCOMM3_MASK)

#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM4_MASK       (0x2000U)
#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM4_SHIFT      (13U)
/*! Flexcomm4 - Flexcomm4 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM4(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTEN_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_BUSRSTEN_FLEXCOMM4_MASK)

#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM5_MASK       (0x4000U)
#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM5_SHIFT      (14U)
/*! Flexcomm5 - Flexcomm5 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTEN_FLEXCOMM5(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTEN_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_BUSRSTEN_FLEXCOMM5_MASK)

#define CGU_CTRLSS_BUSRSTEN_I3C_MASK             (0x8000U)
#define CGU_CTRLSS_BUSRSTEN_I3C_SHIFT            (15U)
/*! i3c - I3c reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTEN_I3C(x)               (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTEN_I3C_SHIFT)) & CGU_CTRLSS_BUSRSTEN_I3C_MASK)
/*! @} */

/*! @name CTRLSS_BUSRSTENSET - Register to set bits in ctrlss_busRstEn.<br> Write 1 to set a bitfield (enable the reset).<br> Write 0 is ignored. Read gives 0.<br> Setting a bit asserts both the bus (configuration-clock domain) reset and the core (functional-clock domain) reset for that module. */
/*! @{ */

#define CGU_CTRLSS_BUSRSTENSET_TPIU_TRACE_MASK   (0x1U)
#define CGU_CTRLSS_BUSRSTENSET_TPIU_TRACE_SHIFT  (0U)
/*! tpiu_trace - TPIU reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENSET_TPIU_TRACE(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENSET_TPIU_TRACE_SHIFT)) & CGU_CTRLSS_BUSRSTENSET_TPIU_TRACE_MASK)

#define CGU_CTRLSS_BUSRSTENSET_UTICK_MASK        (0x2U)
#define CGU_CTRLSS_BUSRSTENSET_UTICK_SHIFT       (1U)
/*! utick - Micro-tick reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENSET_UTICK(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENSET_UTICK_SHIFT)) & CGU_CTRLSS_BUSRSTENSET_UTICK_MASK)

#define CGU_CTRLSS_BUSRSTENSET_GDET_MASK         (0x4U)
#define CGU_CTRLSS_BUSRSTENSET_GDET_SHIFT        (2U)
/*! gdet - Gdet reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENSET_GDET(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENSET_GDET_SHIFT)) & CGU_CTRLSS_BUSRSTENSET_GDET_MASK)

#define CGU_CTRLSS_BUSRSTENSET_OSTIMER_MASK      (0x8U)
#define CGU_CTRLSS_BUSRSTENSET_OSTIMER_SHIFT     (3U)
/*! ostimer - OS timer reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENSET_OSTIMER(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENSET_OSTIMER_SHIFT)) & CGU_CTRLSS_BUSRSTENSET_OSTIMER_MASK)

#define CGU_CTRLSS_BUSRSTENSET_CTIMER0_MASK      (0x10U)
#define CGU_CTRLSS_BUSRSTENSET_CTIMER0_SHIFT     (4U)
/*! Ctimer0 - Ctimer0 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENSET_CTIMER0(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENSET_CTIMER0_SHIFT)) & CGU_CTRLSS_BUSRSTENSET_CTIMER0_MASK)

#define CGU_CTRLSS_BUSRSTENSET_CTIMER1_MASK      (0x20U)
#define CGU_CTRLSS_BUSRSTENSET_CTIMER1_SHIFT     (5U)
/*! Ctimer1 - Ctimer1 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENSET_CTIMER1(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENSET_CTIMER1_SHIFT)) & CGU_CTRLSS_BUSRSTENSET_CTIMER1_MASK)

#define CGU_CTRLSS_BUSRSTENSET_CTIMER2_MASK      (0x40U)
#define CGU_CTRLSS_BUSRSTENSET_CTIMER2_SHIFT     (6U)
/*! Ctimer2 - Ctimer2 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENSET_CTIMER2(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENSET_CTIMER2_SHIFT)) & CGU_CTRLSS_BUSRSTENSET_CTIMER2_MASK)

#define CGU_CTRLSS_BUSRSTENSET_CTIMER3_MASK      (0x80U)
#define CGU_CTRLSS_BUSRSTENSET_CTIMER3_SHIFT     (7U)
/*! Ctimer3 - Ctimer3 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENSET_CTIMER3(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENSET_CTIMER3_SHIFT)) & CGU_CTRLSS_BUSRSTENSET_CTIMER3_MASK)

#define CGU_CTRLSS_BUSRSTENSET_CTIMER4_MASK      (0x100U)
#define CGU_CTRLSS_BUSRSTENSET_CTIMER4_SHIFT     (8U)
/*! Ctimer4 - Ctimer4 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENSET_CTIMER4(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENSET_CTIMER4_SHIFT)) & CGU_CTRLSS_BUSRSTENSET_CTIMER4_MASK)

#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM0_MASK    (0x200U)
#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM0_SHIFT   (9U)
/*! Flexcomm0 - Flexcomm0 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM0(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENSET_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_BUSRSTENSET_FLEXCOMM0_MASK)

#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM1_MASK    (0x400U)
#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM1_SHIFT   (10U)
/*! Flexcomm1 - Flexcomm1 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM1(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENSET_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_BUSRSTENSET_FLEXCOMM1_MASK)

#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM2_MASK    (0x800U)
#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM2_SHIFT   (11U)
/*! Flexcomm2 - Flexcomm2 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM2(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENSET_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_BUSRSTENSET_FLEXCOMM2_MASK)

#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM3_MASK    (0x1000U)
#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM3_SHIFT   (12U)
/*! Flexcomm3 - Flexcomm3 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM3(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENSET_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_BUSRSTENSET_FLEXCOMM3_MASK)

#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM4_MASK    (0x2000U)
#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM4_SHIFT   (13U)
/*! Flexcomm4 - Flexcomm4 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM4(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENSET_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_BUSRSTENSET_FLEXCOMM4_MASK)

#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM5_MASK    (0x4000U)
#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM5_SHIFT   (14U)
/*! Flexcomm5 - Flexcomm5 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENSET_FLEXCOMM5(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENSET_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_BUSRSTENSET_FLEXCOMM5_MASK)

#define CGU_CTRLSS_BUSRSTENSET_I3C_MASK          (0x8000U)
#define CGU_CTRLSS_BUSRSTENSET_I3C_SHIFT         (15U)
/*! i3c - I3c reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENSET_I3C(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENSET_I3C_SHIFT)) & CGU_CTRLSS_BUSRSTENSET_I3C_MASK)
/*! @} */

/*! @name CTRLSS_BUSRSTENCLR - Register to clear bits in ctrlss_busRstEn.<br> Write 1 to clear a bitfield (disable the reset).<br> Write 0 is ignored. Read gives 0.<br> Clearing a bit de-asserts the bus reset. The core reset is also de-asserted unless the corresponding ctrlss_coreRstEn bit is still set. */
/*! @{ */

#define CGU_CTRLSS_BUSRSTENCLR_TPIU_TRACE_MASK   (0x1U)
#define CGU_CTRLSS_BUSRSTENCLR_TPIU_TRACE_SHIFT  (0U)
/*! tpiu_trace - TPIU reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENCLR_TPIU_TRACE(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENCLR_TPIU_TRACE_SHIFT)) & CGU_CTRLSS_BUSRSTENCLR_TPIU_TRACE_MASK)

#define CGU_CTRLSS_BUSRSTENCLR_UTICK_MASK        (0x2U)
#define CGU_CTRLSS_BUSRSTENCLR_UTICK_SHIFT       (1U)
/*! utick - Micro-tick reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENCLR_UTICK(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENCLR_UTICK_SHIFT)) & CGU_CTRLSS_BUSRSTENCLR_UTICK_MASK)

#define CGU_CTRLSS_BUSRSTENCLR_GDET_MASK         (0x4U)
#define CGU_CTRLSS_BUSRSTENCLR_GDET_SHIFT        (2U)
/*! gdet - Gdet reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENCLR_GDET(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENCLR_GDET_SHIFT)) & CGU_CTRLSS_BUSRSTENCLR_GDET_MASK)

#define CGU_CTRLSS_BUSRSTENCLR_OSTIMER_MASK      (0x8U)
#define CGU_CTRLSS_BUSRSTENCLR_OSTIMER_SHIFT     (3U)
/*! ostimer - OS timer reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENCLR_OSTIMER(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENCLR_OSTIMER_SHIFT)) & CGU_CTRLSS_BUSRSTENCLR_OSTIMER_MASK)

#define CGU_CTRLSS_BUSRSTENCLR_CTIMER0_MASK      (0x10U)
#define CGU_CTRLSS_BUSRSTENCLR_CTIMER0_SHIFT     (4U)
/*! Ctimer0 - Ctimer0 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENCLR_CTIMER0(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENCLR_CTIMER0_SHIFT)) & CGU_CTRLSS_BUSRSTENCLR_CTIMER0_MASK)

#define CGU_CTRLSS_BUSRSTENCLR_CTIMER1_MASK      (0x20U)
#define CGU_CTRLSS_BUSRSTENCLR_CTIMER1_SHIFT     (5U)
/*! Ctimer1 - Ctimer1 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENCLR_CTIMER1(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENCLR_CTIMER1_SHIFT)) & CGU_CTRLSS_BUSRSTENCLR_CTIMER1_MASK)

#define CGU_CTRLSS_BUSRSTENCLR_CTIMER2_MASK      (0x40U)
#define CGU_CTRLSS_BUSRSTENCLR_CTIMER2_SHIFT     (6U)
/*! Ctimer2 - Ctimer2 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENCLR_CTIMER2(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENCLR_CTIMER2_SHIFT)) & CGU_CTRLSS_BUSRSTENCLR_CTIMER2_MASK)

#define CGU_CTRLSS_BUSRSTENCLR_CTIMER3_MASK      (0x80U)
#define CGU_CTRLSS_BUSRSTENCLR_CTIMER3_SHIFT     (7U)
/*! Ctimer3 - Ctimer3 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENCLR_CTIMER3(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENCLR_CTIMER3_SHIFT)) & CGU_CTRLSS_BUSRSTENCLR_CTIMER3_MASK)

#define CGU_CTRLSS_BUSRSTENCLR_CTIMER4_MASK      (0x100U)
#define CGU_CTRLSS_BUSRSTENCLR_CTIMER4_SHIFT     (8U)
/*! Ctimer4 - Ctimer4 reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENCLR_CTIMER4(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENCLR_CTIMER4_SHIFT)) & CGU_CTRLSS_BUSRSTENCLR_CTIMER4_MASK)

#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM0_MASK    (0x200U)
#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM0_SHIFT   (9U)
/*! Flexcomm0 - Flexcomm0 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM0(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM0_MASK)

#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM1_MASK    (0x400U)
#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM1_SHIFT   (10U)
/*! Flexcomm1 - Flexcomm1 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM1(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM1_MASK)

#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM2_MASK    (0x800U)
#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM2_SHIFT   (11U)
/*! Flexcomm2 - Flexcomm2 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM2(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM2_MASK)

#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM3_MASK    (0x1000U)
#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM3_SHIFT   (12U)
/*! Flexcomm3 - Flexcomm3 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM3(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM3_MASK)

#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM4_MASK    (0x2000U)
#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM4_SHIFT   (13U)
/*! Flexcomm4 - Flexcomm4 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM4(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM4_MASK)

#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM5_MASK    (0x4000U)
#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM5_SHIFT   (14U)
/*! Flexcomm5 - Flexcomm5 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM5(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_BUSRSTENCLR_FLEXCOMM5_MASK)

#define CGU_CTRLSS_BUSRSTENCLR_I3C_MASK          (0x8000U)
#define CGU_CTRLSS_BUSRSTENCLR_I3C_SHIFT         (15U)
/*! i3c - I3c reset
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_CTRLSS_BUSRSTENCLR_I3C(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSRSTENCLR_I3C_SHIFT)) & CGU_CTRLSS_BUSRSTENCLR_I3C_MASK)
/*! @} */

/*! @name CTRLSS_CLKSEL0 - CtrlSS modules clock source selection - part 1 */
/*! @{ */

#define CGU_CTRLSS_CLKSEL0_MAIN_MASK             (0x3U)
#define CGU_CTRLSS_CLKSEL0_MAIN_SHIFT            (0U)
/*! Main - Clock source selection for the CSS CM55 and bus clock.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_CTRLSS_CLKSEL0_MAIN(x)               (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL0_MAIN_SHIFT)) & CGU_CTRLSS_CLKSEL0_MAIN_MASK)

#define CGU_CTRLSS_CLKSEL0_XSPI_MASK             (0xCU)
#define CGU_CTRLSS_CLKSEL0_XSPI_SHIFT            (2U)
/*! xspi - Clock source selection for the CSS xspi module.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_CTRLSS_CLKSEL0_XSPI(x)               (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL0_XSPI_SHIFT)) & CGU_CTRLSS_CLKSEL0_XSPI_MASK)

#define CGU_CTRLSS_CLKSEL0_TPIU_MASK             (0x10U)
#define CGU_CTRLSS_CLKSEL0_TPIU_SHIFT            (4U)
/*! tpiu - Clock source selection for the CSS tpiu and watchdog module.
 *  0b0..Select FROL as main clock source.
 *  0b1..Select FRO as main clock source.
 */
#define CGU_CTRLSS_CLKSEL0_TPIU(x)               (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL0_TPIU_SHIFT)) & CGU_CTRLSS_CLKSEL0_TPIU_MASK)

#define CGU_CTRLSS_CLKSEL0_UTICK_MASK            (0x60U)
#define CGU_CTRLSS_CLKSEL0_UTICK_SHIFT           (5U)
/*! utick - Clock source selection for the CSS utick module.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_CTRLSS_CLKSEL0_UTICK(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL0_UTICK_SHIFT)) & CGU_CTRLSS_CLKSEL0_UTICK_MASK)

#define CGU_CTRLSS_CLKSEL0_MEAS_REF_MASK         (0x780U)
#define CGU_CTRLSS_CLKSEL0_MEAS_REF_SHIFT        (7U)
/*! meas_ref - Clock source selection for the CSS measurement reference frequency.
 *  0b0000..Select FROL as main clock source.
 *  0b0001..Select FRO as main clock source.
 *  0b0010..Select NSS FRO as main clock source.
 *  0b0011..Select PLL as main clock source.
 *  0b0100..Select PMRO clock.
 *  0b0101..Select DGO PMRO clock.
 *  0b0110..Select dataport 0 interface clock.
 *  0b0111..Select dataport 1 interface clock.
 *  0b1000..Select dataport 2 interface clock.
 *  0b1001..Select dataport 3 interface clock.
 *  0b1010..Select SWM0_04 clock.
 *  0b1011..Select SWM1_00 clock.
 *  0b1100..Select SWM2_00 clock.
 *  0b1101..Select SWM3_00 clock.
 *  0b1110..Select SWM3_00 clock.
 *  0b1111..Select SWM3_00 clock.
 */
#define CGU_CTRLSS_CLKSEL0_MEAS_REF(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL0_MEAS_REF_SHIFT)) & CGU_CTRLSS_CLKSEL0_MEAS_REF_MASK)

#define CGU_CTRLSS_CLKSEL0_MEAS_TARGET_MASK      (0x7800U)
#define CGU_CTRLSS_CLKSEL0_MEAS_TARGET_SHIFT     (11U)
/*! meas_target - Clock source selection for the CSS measurement target frequency.
 *  0b0000..Select FROL as main clock source.
 *  0b0001..Select FRO as main clock source.
 *  0b0010..Select NSS FRO as main clock source.
 *  0b0011..Select PLL as main clock source.
 *  0b0100..Select PMRO clock.
 *  0b0101..Select DGO PMRO clock.
 *  0b0110..Select dataport 0 interface clock.
 *  0b0111..Select dataport 1 interface clock.
 *  0b1000..Select dataport 2 interface clock.
 *  0b1001..Select dataport 3 interface clock.
 *  0b1010..Select SWM0_04 clock.
 *  0b1011..Select SWM1_00 clock.
 *  0b1100..Select SWM2_00 clock.
 *  0b1101..Select SWM3_00 clock.
 *  0b1110..Select SWM3_00 clock.
 *  0b1111..Select SWM3_00 clock.
 */
#define CGU_CTRLSS_CLKSEL0_MEAS_TARGET(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL0_MEAS_TARGET_SHIFT)) & CGU_CTRLSS_CLKSEL0_MEAS_TARGET_MASK)

#define CGU_CTRLSS_CLKSEL0_GDET_MASK             (0x8000U)
#define CGU_CTRLSS_CLKSEL0_GDET_SHIFT            (15U)
/*! gdet - Clock source selection for the CSS gdet.
 *  0b0..Select FROL as main clock source.
 *  0b1..Select FRO as main clock source.
 */
#define CGU_CTRLSS_CLKSEL0_GDET(x)               (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL0_GDET_SHIFT)) & CGU_CTRLSS_CLKSEL0_GDET_MASK)

#define CGU_CTRLSS_CLKSEL0_I3C_MASK              (0x30000U)
#define CGU_CTRLSS_CLKSEL0_I3C_SHIFT             (16U)
/*! i3c - Clock source selection for the CSS i3c.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_CTRLSS_CLKSEL0_I3C(x)                (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL0_I3C_SHIFT)) & CGU_CTRLSS_CLKSEL0_I3C_MASK)

#define CGU_CTRLSS_CLKSEL0_PMRC_MASK             (0x40000U)
#define CGU_CTRLSS_CLKSEL0_PMRC_SHIFT            (18U)
/*! pmrc - Clock source selection for the CSS pmrc.
 *  0b0..Select FROL as main clock source.
 *  0b1..Select FRO as main clock source.
 */
#define CGU_CTRLSS_CLKSEL0_PMRC(x)               (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL0_PMRC_SHIFT)) & CGU_CTRLSS_CLKSEL0_PMRC_MASK)
/*! @} */

/*! @name CTRLSS_CLKSEL1 - CtrlSS modules clock source selection - part 2. */
/*! @{ */

#define CGU_CTRLSS_CLKSEL1_CTIMER0_MASK          (0x3U)
#define CGU_CTRLSS_CLKSEL1_CTIMER0_SHIFT         (0U)
/*! ctimer0 - Clock source selection for the CSS ctimer0.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_CTRLSS_CLKSEL1_CTIMER0(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL1_CTIMER0_SHIFT)) & CGU_CTRLSS_CLKSEL1_CTIMER0_MASK)

#define CGU_CTRLSS_CLKSEL1_CTIMER1_MASK          (0xCU)
#define CGU_CTRLSS_CLKSEL1_CTIMER1_SHIFT         (2U)
/*! ctimer1 - Clock source selection for the CSS ctimer1.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_CTRLSS_CLKSEL1_CTIMER1(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL1_CTIMER1_SHIFT)) & CGU_CTRLSS_CLKSEL1_CTIMER1_MASK)

#define CGU_CTRLSS_CLKSEL1_CTIMER2_MASK          (0x30U)
#define CGU_CTRLSS_CLKSEL1_CTIMER2_SHIFT         (4U)
/*! ctimer2 - Clock source selection for the CSS ctimer2.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_CTRLSS_CLKSEL1_CTIMER2(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL1_CTIMER2_SHIFT)) & CGU_CTRLSS_CLKSEL1_CTIMER2_MASK)

#define CGU_CTRLSS_CLKSEL1_CTIMER3_MASK          (0xC0U)
#define CGU_CTRLSS_CLKSEL1_CTIMER3_SHIFT         (6U)
/*! ctimer3 - Clock source selection for the CSS ctimer3.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_CTRLSS_CLKSEL1_CTIMER3(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL1_CTIMER3_SHIFT)) & CGU_CTRLSS_CLKSEL1_CTIMER3_MASK)

#define CGU_CTRLSS_CLKSEL1_CTIMER4_MASK          (0x300U)
#define CGU_CTRLSS_CLKSEL1_CTIMER4_SHIFT         (8U)
/*! ctimer4 - Clock source selection for the CSS ctimer4.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_CTRLSS_CLKSEL1_CTIMER4(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL1_CTIMER4_SHIFT)) & CGU_CTRLSS_CLKSEL1_CTIMER4_MASK)

#define CGU_CTRLSS_CLKSEL1_FLEXCOMM0_MASK        (0xC00U)
#define CGU_CTRLSS_CLKSEL1_FLEXCOMM0_SHIFT       (10U)
/*! flexcomm0 - Clock source selection for the CSS flexcomm0.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_CTRLSS_CLKSEL1_FLEXCOMM0(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL1_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_CLKSEL1_FLEXCOMM0_MASK)

#define CGU_CTRLSS_CLKSEL1_FLEXCOMM1_MASK        (0x3000U)
#define CGU_CTRLSS_CLKSEL1_FLEXCOMM1_SHIFT       (12U)
/*! flexcomm1 - Clock source selection for the CSS flexcomm1.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_CTRLSS_CLKSEL1_FLEXCOMM1(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL1_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_CLKSEL1_FLEXCOMM1_MASK)

#define CGU_CTRLSS_CLKSEL1_FLEXCOMM2_MASK        (0xC000U)
#define CGU_CTRLSS_CLKSEL1_FLEXCOMM2_SHIFT       (14U)
/*! flexcomm2 - Clock source selection for the CSS flexcomm2.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_CTRLSS_CLKSEL1_FLEXCOMM2(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL1_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_CLKSEL1_FLEXCOMM2_MASK)

#define CGU_CTRLSS_CLKSEL1_FLEXCOMM3_MASK        (0x30000U)
#define CGU_CTRLSS_CLKSEL1_FLEXCOMM3_SHIFT       (16U)
/*! flexcomm3 - Clock source selection for the CSS flexcomm3.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_CTRLSS_CLKSEL1_FLEXCOMM3(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL1_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_CLKSEL1_FLEXCOMM3_MASK)

#define CGU_CTRLSS_CLKSEL1_FLEXCOMM4_MASK        (0xC0000U)
#define CGU_CTRLSS_CLKSEL1_FLEXCOMM4_SHIFT       (18U)
/*! flexcomm4 - Clock source selection for the CSS flexcomm4.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_CTRLSS_CLKSEL1_FLEXCOMM4(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL1_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_CLKSEL1_FLEXCOMM4_MASK)

#define CGU_CTRLSS_CLKSEL1_FLEXCOMM5_MASK        (0x300000U)
#define CGU_CTRLSS_CLKSEL1_FLEXCOMM5_SHIFT       (20U)
/*! flexcomm5 - Clock source selection for the CSS flexcomm5.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_CTRLSS_CLKSEL1_FLEXCOMM5(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKSEL1_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_CLKSEL1_FLEXCOMM5_MASK)
/*! @} */

/*! @name CTRLSS_CLKCFG0 - CtrlSS modules clock configuration 0 */
/*! @{ */

#define CGU_CTRLSS_CLKCFG0_CPU_AHB_CLKDIV_MASK   (0xFFU)
#define CGU_CTRLSS_CLKCFG0_CPU_AHB_CLKDIV_SHIFT  (0U)
/*! cpu_ahb_clkdiv - Main bus and processor clock divider setting. */
#define CGU_CTRLSS_CLKCFG0_CPU_AHB_CLKDIV(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKCFG0_CPU_AHB_CLKDIV_SHIFT)) & CGU_CTRLSS_CLKCFG0_CPU_AHB_CLKDIV_MASK)

#define CGU_CTRLSS_CLKCFG0_XSPI_AHB_CLKDIV_MASK  (0xFF00U)
#define CGU_CTRLSS_CLKCFG0_XSPI_AHB_CLKDIV_SHIFT (8U)
/*! xspi_ahb_clkdiv - XSPI bus clock divider setting. */
#define CGU_CTRLSS_CLKCFG0_XSPI_AHB_CLKDIV(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKCFG0_XSPI_AHB_CLKDIV_SHIFT)) & CGU_CTRLSS_CLKCFG0_XSPI_AHB_CLKDIV_MASK)

#define CGU_CTRLSS_CLKCFG0_XSPI_CLKDIV_MASK      (0xFF0000U)
#define CGU_CTRLSS_CLKCFG0_XSPI_CLKDIV_SHIFT     (16U)
/*! xspi_clkdiv - XSPI main clock divider setting. */
#define CGU_CTRLSS_CLKCFG0_XSPI_CLKDIV(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKCFG0_XSPI_CLKDIV_SHIFT)) & CGU_CTRLSS_CLKCFG0_XSPI_CLKDIV_MASK)

#define CGU_CTRLSS_CLKCFG0_TPIU_CLKDIV_MASK      (0xFF000000U)
#define CGU_CTRLSS_CLKCFG0_TPIU_CLKDIV_SHIFT     (24U)
/*! tpiu_clkdiv - TPIU main clock divider setting. */
#define CGU_CTRLSS_CLKCFG0_TPIU_CLKDIV(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKCFG0_TPIU_CLKDIV_SHIFT)) & CGU_CTRLSS_CLKCFG0_TPIU_CLKDIV_MASK)
/*! @} */

/*! @name CTRLSS_CLKCFG1 - CtrlSS modules clock configuration 1 */
/*! @{ */

#define CGU_CTRLSS_CLKCFG1_UTICK_CLKDIV_MASK     (0xFFU)
#define CGU_CTRLSS_CLKCFG1_UTICK_CLKDIV_SHIFT    (0U)
/*! utick_clkdiv - utick main clock divider setting. */
#define CGU_CTRLSS_CLKCFG1_UTICK_CLKDIV(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKCFG1_UTICK_CLKDIV_SHIFT)) & CGU_CTRLSS_CLKCFG1_UTICK_CLKDIV_MASK)

#define CGU_CTRLSS_CLKCFG1_GDET_CLKDIV_MASK      (0xFF00U)
#define CGU_CTRLSS_CLKCFG1_GDET_CLKDIV_SHIFT     (8U)
/*! gdet_clkdiv - GDet clock divider setting. */
#define CGU_CTRLSS_CLKCFG1_GDET_CLKDIV(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKCFG1_GDET_CLKDIV_SHIFT)) & CGU_CTRLSS_CLKCFG1_GDET_CLKDIV_MASK)

#define CGU_CTRLSS_CLKCFG1_OS_TIMER_CLKDIV_MASK  (0xFF0000U)
#define CGU_CTRLSS_CLKCFG1_OS_TIMER_CLKDIV_SHIFT (16U)
/*! os_timer_clkdiv - OS timer divider setting. */
#define CGU_CTRLSS_CLKCFG1_OS_TIMER_CLKDIV(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKCFG1_OS_TIMER_CLKDIV_SHIFT)) & CGU_CTRLSS_CLKCFG1_OS_TIMER_CLKDIV_MASK)

#define CGU_CTRLSS_CLKCFG1_I3C_CLKDIV_MASK       (0xFF000000U)
#define CGU_CTRLSS_CLKCFG1_I3C_CLKDIV_SHIFT      (24U)
/*! i3c_clkdiv - I3c divider setting. */
#define CGU_CTRLSS_CLKCFG1_I3C_CLKDIV(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKCFG1_I3C_CLKDIV_SHIFT)) & CGU_CTRLSS_CLKCFG1_I3C_CLKDIV_MASK)
/*! @} */

/*! @name CTIMER_CLKCFG - Ctimer modules clock configuration 1 */
/*! @{ */

#define CGU_CTIMER_CLKCFG_CTIMER0_CLKDIV_MASK    (0x3FU)
#define CGU_CTIMER_CLKCFG_CTIMER0_CLKDIV_SHIFT   (0U)
/*! ctimer0_clkdiv - CTimer0 clock divider setting. */
#define CGU_CTIMER_CLKCFG_CTIMER0_CLKDIV(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTIMER_CLKCFG_CTIMER0_CLKDIV_SHIFT)) & CGU_CTIMER_CLKCFG_CTIMER0_CLKDIV_MASK)

#define CGU_CTIMER_CLKCFG_CTIMER1_CLKDIV_MASK    (0xFC0U)
#define CGU_CTIMER_CLKCFG_CTIMER1_CLKDIV_SHIFT   (6U)
/*! ctimer1_clkdiv - CTimer1 clock divider setting. */
#define CGU_CTIMER_CLKCFG_CTIMER1_CLKDIV(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTIMER_CLKCFG_CTIMER1_CLKDIV_SHIFT)) & CGU_CTIMER_CLKCFG_CTIMER1_CLKDIV_MASK)

#define CGU_CTIMER_CLKCFG_CTIMER2_CLKDIV_MASK    (0x3F000U)
#define CGU_CTIMER_CLKCFG_CTIMER2_CLKDIV_SHIFT   (12U)
/*! ctimer2_clkdiv - CTimer2 clock divider setting. */
#define CGU_CTIMER_CLKCFG_CTIMER2_CLKDIV(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTIMER_CLKCFG_CTIMER2_CLKDIV_SHIFT)) & CGU_CTIMER_CLKCFG_CTIMER2_CLKDIV_MASK)

#define CGU_CTIMER_CLKCFG_CTIMER3_CLKDIV_MASK    (0xFC0000U)
#define CGU_CTIMER_CLKCFG_CTIMER3_CLKDIV_SHIFT   (18U)
/*! ctimer3_clkdiv - CTimer3 clock divider setting. */
#define CGU_CTIMER_CLKCFG_CTIMER3_CLKDIV(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTIMER_CLKCFG_CTIMER3_CLKDIV_SHIFT)) & CGU_CTIMER_CLKCFG_CTIMER3_CLKDIV_MASK)

#define CGU_CTIMER_CLKCFG_CTIMER4_CLKDIV_MASK    (0x3F000000U)
#define CGU_CTIMER_CLKCFG_CTIMER4_CLKDIV_SHIFT   (24U)
/*! ctimer4_clkdiv - CTimer4 clock divider setting. */
#define CGU_CTIMER_CLKCFG_CTIMER4_CLKDIV(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTIMER_CLKCFG_CTIMER4_CLKDIV_SHIFT)) & CGU_CTIMER_CLKCFG_CTIMER4_CLKDIV_MASK)
/*! @} */

/*! @name FLEXCOMM_CLKCFG - Defines the clock division for the flexcomm serial clock. */
/*! @{ */

#define CGU_FLEXCOMM_CLKCFG_CLKDIV_MASK          (0x1FU)
#define CGU_FLEXCOMM_CLKCFG_CLKDIV_SHIFT         (0U)
/*! clkdiv - Divider value for the integer clock divider */
#define CGU_FLEXCOMM_CLKCFG_CLKDIV(x)            (((uint32_t)(((uint32_t)(x)) << CGU_FLEXCOMM_CLKCFG_CLKDIV_SHIFT)) & CGU_FLEXCOMM_CLKCFG_CLKDIV_MASK)

#define CGU_FLEXCOMM_CLKCFG_FRD_MULT_MASK        (0x1FE0U)
#define CGU_FLEXCOMM_CLKCFG_FRD_MULT_SHIFT       (5U)
/*! frd_mult - Value of the multiplier parameter of the FRD.<cr> Programming this value to 0 will
 *    disable the FRD divider which means it is bypassed.
 */
#define CGU_FLEXCOMM_CLKCFG_FRD_MULT(x)          (((uint32_t)(((uint32_t)(x)) << CGU_FLEXCOMM_CLKCFG_FRD_MULT_SHIFT)) & CGU_FLEXCOMM_CLKCFG_FRD_MULT_MASK)

#define CGU_FLEXCOMM_CLKCFG_FRD_DIV_MASK         (0x1FE000U)
#define CGU_FLEXCOMM_CLKCFG_FRD_DIV_SHIFT        (13U)
/*! frd_div - Value of the multiplier parameter of the FRD. */
#define CGU_FLEXCOMM_CLKCFG_FRD_DIV(x)           (((uint32_t)(((uint32_t)(x)) << CGU_FLEXCOMM_CLKCFG_FRD_DIV_SHIFT)) & CGU_FLEXCOMM_CLKCFG_FRD_DIV_MASK)
/*! @} */

/*! @name PMRC_CLKCFG - PMRC clock configuration */
/*! @{ */

#define CGU_PMRC_CLKCFG_PMRC_CLKDIV_MASK         (0xFFU)
#define CGU_PMRC_CLKCFG_PMRC_CLKDIV_SHIFT        (0U)
/*! pmrc_clkdiv - Fc0 clock divider setting. */
#define CGU_PMRC_CLKCFG_PMRC_CLKDIV(x)           (((uint32_t)(((uint32_t)(x)) << CGU_PMRC_CLKCFG_PMRC_CLKDIV_SHIFT)) & CGU_PMRC_CLKCFG_PMRC_CLKDIV_MASK)

#define CGU_PMRC_CLKCFG_MEM_CTRL_CLKDIV_MASK     (0xFF00U)
#define CGU_PMRC_CLKCFG_MEM_CTRL_CLKDIV_SHIFT    (8U)
/*! mem_ctrl_clkdiv - Fc0 clock divider setting. */
#define CGU_PMRC_CLKCFG_MEM_CTRL_CLKDIV(x)       (((uint32_t)(((uint32_t)(x)) << CGU_PMRC_CLKCFG_MEM_CTRL_CLKDIV_SHIFT)) & CGU_PMRC_CLKCFG_MEM_CTRL_CLKDIV_MASK)
/*! @} */

/*! @name CTRLSS_WD_CLKCFG - CtrlSS modules clock configuration */
/*! @{ */

#define CGU_CTRLSS_WD_CLKCFG_CLKDIV_MASK         (0xFFFFFFFFU)
#define CGU_CTRLSS_WD_CLKCFG_CLKDIV_SHIFT        (0U)
/*! clkdiv - Watchdog main clock divider setting. */
#define CGU_CTRLSS_WD_CLKCFG_CLKDIV(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_WD_CLKCFG_CLKDIV_SHIFT)) & CGU_CTRLSS_WD_CLKCFG_CLKDIV_MASK)
/*! @} */

/*! @name CTRLSS_FREQ_MEAS_CLKCFG - CtrlSS frequency measurement module clock configuration */
/*! @{ */

#define CGU_CTRLSS_FREQ_MEAS_CLKCFG_REF_CLKDIV_MASK (0xFFFFU)
#define CGU_CTRLSS_FREQ_MEAS_CLKCFG_REF_CLKDIV_SHIFT (0U)
/*! ref_clkdiv - Reference clock divider setting. */
#define CGU_CTRLSS_FREQ_MEAS_CLKCFG_REF_CLKDIV(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_FREQ_MEAS_CLKCFG_REF_CLKDIV_SHIFT)) & CGU_CTRLSS_FREQ_MEAS_CLKCFG_REF_CLKDIV_MASK)

#define CGU_CTRLSS_FREQ_MEAS_CLKCFG_TARGET_CLKDIV_MASK (0xFFFF0000U)
#define CGU_CTRLSS_FREQ_MEAS_CLKCFG_TARGET_CLKDIV_SHIFT (16U)
/*! target_clkdiv - Target clock divider setting. */
#define CGU_CTRLSS_FREQ_MEAS_CLKCFG_TARGET_CLKDIV(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_FREQ_MEAS_CLKCFG_TARGET_CLKDIV_SHIFT)) & CGU_CTRLSS_FREQ_MEAS_CLKCFG_TARGET_CLKDIV_MASK)
/*! @} */

/*! @name CTRLSS_BUSCLKEN0 - First status register for the CtrlSS bus clock enable.<br> The register indicates if the clock is enabled or disabled.<br> <br> 0: Clock is disabled<br> 1: Clock is enabled */
/*! @{ */

#define CGU_CTRLSS_BUSCLKEN0_ROM0_MASK           (0x1U)
#define CGU_CTRLSS_BUSCLKEN0_ROM0_SHIFT          (0U)
/*! rom0 - Clock enable for the ROM AHB-clock..
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_ROM0(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_ROM0_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_ROM0_MASK)

#define CGU_CTRLSS_BUSCLKEN0_PKC_MASK            (0x2U)
#define CGU_CTRLSS_BUSCLKEN0_PKC_SHIFT           (1U)
/*! pkc - PKC clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_PKC(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_PKC_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_PKC_MASK)

#define CGU_CTRLSS_BUSCLKEN0_PKC_RAM_MASK        (0x4U)
#define CGU_CTRLSS_BUSCLKEN0_PKC_RAM_SHIFT       (2U)
/*! pkc_ram - PKC ram and zeroise clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_PKC_RAM(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_PKC_RAM_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_PKC_RAM_MASK)

#define CGU_CTRLSS_BUSCLKEN0_PINMUX_MASK         (0x8U)
#define CGU_CTRLSS_BUSCLKEN0_PINMUX_SHIFT        (3U)
/*! pinmux - Pinmux APB clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_PINMUX(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_PINMUX_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_PINMUX_MASK)

#define CGU_CTRLSS_BUSCLKEN0_CPU_MASK            (0x10U)
#define CGU_CTRLSS_BUSCLKEN0_CPU_SHIFT           (4U)
/*! cpu - CtrlSS CM55 processor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_CPU(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_CPU_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_CPU_MASK)

#define CGU_CTRLSS_BUSCLKEN0_GPIO_PORT0_MASK     (0x20U)
#define CGU_CTRLSS_BUSCLKEN0_GPIO_PORT0_SHIFT    (5U)
/*! gpio_port0 - GPIO port0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_GPIO_PORT0(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_GPIO_PORT0_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_GPIO_PORT0_MASK)

#define CGU_CTRLSS_BUSCLKEN0_GPIO_PORT1_MASK     (0x40U)
#define CGU_CTRLSS_BUSCLKEN0_GPIO_PORT1_SHIFT    (6U)
/*! gpio_port1 - GPIO port1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_GPIO_PORT1(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_GPIO_PORT1_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_GPIO_PORT1_MASK)

#define CGU_CTRLSS_BUSCLKEN0_SEC_GPIO_PORT0_MASK (0x80U)
#define CGU_CTRLSS_BUSCLKEN0_SEC_GPIO_PORT0_SHIFT (7U)
/*! sec_gpio_port0 - Secure GPIO port0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_SEC_GPIO_PORT0(x)   (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_SEC_GPIO_PORT0_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_SEC_GPIO_PORT0_MASK)

#define CGU_CTRLSS_BUSCLKEN0_SEC_GPIO_PORT1_MASK (0x100U)
#define CGU_CTRLSS_BUSCLKEN0_SEC_GPIO_PORT1_SHIFT (8U)
/*! sec_gpio_port1 - Secure GPIO port1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_SEC_GPIO_PORT1(x)   (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_SEC_GPIO_PORT1_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_SEC_GPIO_PORT1_MASK)

#define CGU_CTRLSS_BUSCLKEN0_GPIO_PINT_MASK      (0x200U)
#define CGU_CTRLSS_BUSCLKEN0_GPIO_PINT_SHIFT     (9U)
/*! gpio_pint - Gpio pint (Pin interrupt and pattern matching) ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_GPIO_PINT(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_GPIO_PINT_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_GPIO_PINT_MASK)

#define CGU_CTRLSS_BUSCLKEN0_SEC_GPIO_PINT_MASK  (0x400U)
#define CGU_CTRLSS_BUSCLKEN0_SEC_GPIO_PINT_SHIFT (10U)
/*! sec_gpio_pint - Secure gpio pint (Pin interrupt and pattern matching) ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_SEC_GPIO_PINT(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_SEC_GPIO_PINT_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_SEC_GPIO_PINT_MASK)

#define CGU_CTRLSS_BUSCLKEN0_GPIO_GLOBINT_MASK   (0x800U)
#define CGU_CTRLSS_BUSCLKEN0_GPIO_GLOBINT_SHIFT  (11U)
/*! gpio_globint - GPIO global interrupt ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_GPIO_GLOBINT(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_GPIO_GLOBINT_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_GPIO_GLOBINT_MASK)

#define CGU_CTRLSS_BUSCLKEN0_DMA0_MASK           (0x1000U)
#define CGU_CTRLSS_BUSCLKEN0_DMA0_SHIFT          (12U)
/*! dma0 - DMA0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_DMA0(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_DMA0_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_DMA0_MASK)

#define CGU_CTRLSS_BUSCLKEN0_DMA1_MASK           (0x2000U)
#define CGU_CTRLSS_BUSCLKEN0_DMA1_SHIFT          (13U)
/*! dma1 - DMA1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_DMA1(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_DMA1_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_DMA1_MASK)

#define CGU_CTRLSS_BUSCLKEN0_CRC_MASK            (0x4000U)
#define CGU_CTRLSS_BUSCLKEN0_CRC_SHIFT           (14U)
/*! crc - CRC ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_CRC(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_CRC_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_CRC_MASK)

#define CGU_CTRLSS_BUSCLKEN0_WDT_MASK            (0x8000U)
#define CGU_CTRLSS_BUSCLKEN0_WDT_SHIFT           (15U)
/*! wdt - Watchdog timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_WDT(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_WDT_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_WDT_MASK)

#define CGU_CTRLSS_BUSCLKEN0_CDOG_MASK           (0x10000U)
#define CGU_CTRLSS_BUSCLKEN0_CDOG_SHIFT          (16U)
/*! cdog - Code watchdog ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_CDOG(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_CDOG_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_CDOG_MASK)

#define CGU_CTRLSS_BUSCLKEN0_NIC_AXI_MASK        (0x20000U)
#define CGU_CTRLSS_BUSCLKEN0_NIC_AXI_SHIFT       (17U)
/*! nic_axi - NIC axi abh clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_NIC_AXI(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_NIC_AXI_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_NIC_AXI_MASK)

#define CGU_CTRLSS_BUSCLKEN0_NIC_REG_MASK        (0x40000U)
#define CGU_CTRLSS_BUSCLKEN0_NIC_REG_SHIFT       (18U)
/*! nic_reg - NIC reg abh clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_NIC_REG(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_NIC_REG_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_NIC_REG_MASK)

#define CGU_CTRLSS_BUSCLKEN0_MRT_MASK            (0x80000U)
#define CGU_CTRLSS_BUSCLKEN0_MRT_SHIFT           (19U)
/*! mrt - Multi-rate timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_MRT(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_MRT_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_MRT_MASK)

#define CGU_CTRLSS_BUSCLKEN0_OS_TIMER_MASK       (0x100000U)
#define CGU_CTRLSS_BUSCLKEN0_OS_TIMER_SHIFT      (20U)
/*! OS_timer - OS event timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_OS_TIMER(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_OS_TIMER_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_OS_TIMER_MASK)

#define CGU_CTRLSS_BUSCLKEN0_SC_TIMER_MASK       (0x200000U)
#define CGU_CTRLSS_BUSCLKEN0_SC_TIMER_SHIFT      (21U)
/*! SC_timer - SC timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_SC_TIMER(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_SC_TIMER_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_SC_TIMER_MASK)

#define CGU_CTRLSS_BUSCLKEN0_UTICK_MASK          (0x400000U)
#define CGU_CTRLSS_BUSCLKEN0_UTICK_SHIFT         (22U)
/*! utick - Micro-tick ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_UTICK(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_UTICK_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_UTICK_MASK)

#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM0_MASK      (0x800000U)
#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM0_SHIFT     (23U)
/*! flexcomm0 - Flexcomm module 0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM0(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_FLEXCOMM0_MASK)

#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM1_MASK      (0x1000000U)
#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM1_SHIFT     (24U)
/*! flexcomm1 - Flexcomm module 1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM1(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_FLEXCOMM1_MASK)

#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM2_MASK      (0x2000000U)
#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM2_SHIFT     (25U)
/*! flexcomm2 - Flexcomm module 2 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM2(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_FLEXCOMM2_MASK)

#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM3_MASK      (0x4000000U)
#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM3_SHIFT     (26U)
/*! flexcomm3 - Flexcomm module 3 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM3(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_FLEXCOMM3_MASK)

#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM4_MASK      (0x8000000U)
#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM4_SHIFT     (27U)
/*! flexcomm4 - Flexcomm module 4 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM4(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_FLEXCOMM4_MASK)

#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM5_MASK      (0x10000000U)
#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM5_SHIFT     (28U)
/*! flexcomm5 - Flexcomm module 5 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_FLEXCOMM5(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_FLEXCOMM5_MASK)

#define CGU_CTRLSS_BUSCLKEN0_IWIC_MASK           (0x20000000U)
#define CGU_CTRLSS_BUSCLKEN0_IWIC_SHIFT          (29U)
/*! iwic - Internal wake-up interrupt controller ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_IWIC(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_IWIC_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_IWIC_MASK)

#define CGU_CTRLSS_BUSCLKEN0_OTP_MASK            (0x40000000U)
#define CGU_CTRLSS_BUSCLKEN0_OTP_SHIFT           (30U)
/*! otp - OTP ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_OTP(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_OTP_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_OTP_MASK)

#define CGU_CTRLSS_BUSCLKEN0_VISION_MASK         (0x80000000U)
#define CGU_CTRLSS_BUSCLKEN0_VISION_SHIFT        (31U)
/*! vision - Vision SS ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0_VISION(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0_VISION_SHIFT)) & CGU_CTRLSS_BUSCLKEN0_VISION_MASK)
/*! @} */

/*! @name CTRLSS_BUSCLKEN0SET - Register to set bits in ctrlss_busclkEn0.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_CTRLSS_BUSCLKEN0SET_ROM0_MASK        (0x1U)
#define CGU_CTRLSS_BUSCLKEN0SET_ROM0_SHIFT       (0U)
/*! rom0 - Clock enable for the ROM AHB-clock..
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_ROM0(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_ROM0_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_ROM0_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_PKC_MASK         (0x2U)
#define CGU_CTRLSS_BUSCLKEN0SET_PKC_SHIFT        (1U)
/*! pkc - PKC clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_PKC(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_PKC_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_PKC_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_PKC_RAM_MASK     (0x4U)
#define CGU_CTRLSS_BUSCLKEN0SET_PKC_RAM_SHIFT    (2U)
/*! pkc_ram - PKC ram and zeroise clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_PKC_RAM(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_PKC_RAM_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_PKC_RAM_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_PINMUX_MASK      (0x8U)
#define CGU_CTRLSS_BUSCLKEN0SET_PINMUX_SHIFT     (3U)
/*! pinmux - Pinmux APB clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_PINMUX(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_PINMUX_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_PINMUX_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_CPU_MASK         (0x10U)
#define CGU_CTRLSS_BUSCLKEN0SET_CPU_SHIFT        (4U)
/*! cpu - CtrlSS CM55 processor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_CPU(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_CPU_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_CPU_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_GPIO_PORT0_MASK  (0x20U)
#define CGU_CTRLSS_BUSCLKEN0SET_GPIO_PORT0_SHIFT (5U)
/*! gpio_port0 - GPIO port0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_GPIO_PORT0(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_GPIO_PORT0_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_GPIO_PORT0_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_GPIO_PORT1_MASK  (0x40U)
#define CGU_CTRLSS_BUSCLKEN0SET_GPIO_PORT1_SHIFT (6U)
/*! gpio_port1 - GPIO port1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_GPIO_PORT1(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_GPIO_PORT1_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_GPIO_PORT1_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_SEC_GPIO_PORT0_MASK (0x80U)
#define CGU_CTRLSS_BUSCLKEN0SET_SEC_GPIO_PORT0_SHIFT (7U)
/*! sec_gpio_port0 - Secure GPIO port0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_SEC_GPIO_PORT0(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_SEC_GPIO_PORT0_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_SEC_GPIO_PORT0_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_SEC_GPIO_PORT1_MASK (0x100U)
#define CGU_CTRLSS_BUSCLKEN0SET_SEC_GPIO_PORT1_SHIFT (8U)
/*! sec_gpio_port1 - Secure GPIO port1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_SEC_GPIO_PORT1(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_SEC_GPIO_PORT1_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_SEC_GPIO_PORT1_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_GPIO_PINT_MASK   (0x200U)
#define CGU_CTRLSS_BUSCLKEN0SET_GPIO_PINT_SHIFT  (9U)
/*! gpio_pint - Gpio pint (Pin interrupt and pattern matching) ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_GPIO_PINT(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_GPIO_PINT_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_GPIO_PINT_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_SEC_GPIO_PINT_MASK (0x400U)
#define CGU_CTRLSS_BUSCLKEN0SET_SEC_GPIO_PINT_SHIFT (10U)
/*! sec_gpio_pint - Secure gpio pint (Pin interrupt and pattern matching) ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_SEC_GPIO_PINT(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_SEC_GPIO_PINT_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_SEC_GPIO_PINT_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_GPIO_GLOBINT_MASK (0x800U)
#define CGU_CTRLSS_BUSCLKEN0SET_GPIO_GLOBINT_SHIFT (11U)
/*! gpio_globint - GPIO global interrupt ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_GPIO_GLOBINT(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_GPIO_GLOBINT_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_GPIO_GLOBINT_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_DMA0_MASK        (0x1000U)
#define CGU_CTRLSS_BUSCLKEN0SET_DMA0_SHIFT       (12U)
/*! dma0 - DMA0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_DMA0(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_DMA0_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_DMA0_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_DMA1_MASK        (0x2000U)
#define CGU_CTRLSS_BUSCLKEN0SET_DMA1_SHIFT       (13U)
/*! dma1 - DMA1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_DMA1(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_DMA1_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_DMA1_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_CRC_MASK         (0x4000U)
#define CGU_CTRLSS_BUSCLKEN0SET_CRC_SHIFT        (14U)
/*! crc - CRC ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_CRC(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_CRC_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_CRC_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_WDT_MASK         (0x8000U)
#define CGU_CTRLSS_BUSCLKEN0SET_WDT_SHIFT        (15U)
/*! wdt - Watchdog timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_WDT(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_WDT_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_WDT_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_CDOG_MASK        (0x10000U)
#define CGU_CTRLSS_BUSCLKEN0SET_CDOG_SHIFT       (16U)
/*! cdog - Code watchdog ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_CDOG(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_CDOG_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_CDOG_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_NIC_AXI_MASK     (0x20000U)
#define CGU_CTRLSS_BUSCLKEN0SET_NIC_AXI_SHIFT    (17U)
/*! nic_axi - NIC axi abh clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_NIC_AXI(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_NIC_AXI_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_NIC_AXI_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_NIC_REG_MASK     (0x40000U)
#define CGU_CTRLSS_BUSCLKEN0SET_NIC_REG_SHIFT    (18U)
/*! nic_reg - NIC reg abh clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_NIC_REG(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_NIC_REG_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_NIC_REG_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_MRT_MASK         (0x80000U)
#define CGU_CTRLSS_BUSCLKEN0SET_MRT_SHIFT        (19U)
/*! mrt - Multi-rate timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_MRT(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_MRT_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_MRT_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_OS_TIMER_MASK    (0x100000U)
#define CGU_CTRLSS_BUSCLKEN0SET_OS_TIMER_SHIFT   (20U)
/*! OS_timer - OS event timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_OS_TIMER(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_OS_TIMER_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_OS_TIMER_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_SC_TIMER_MASK    (0x200000U)
#define CGU_CTRLSS_BUSCLKEN0SET_SC_TIMER_SHIFT   (21U)
/*! SC_timer - SC timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_SC_TIMER(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_SC_TIMER_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_SC_TIMER_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_UTICK_MASK       (0x400000U)
#define CGU_CTRLSS_BUSCLKEN0SET_UTICK_SHIFT      (22U)
/*! utick - Micro-tick ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_UTICK(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_UTICK_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_UTICK_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM0_MASK   (0x800000U)
#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM0_SHIFT  (23U)
/*! flexcomm0 - Flexcomm module 0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM0(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM0_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM1_MASK   (0x1000000U)
#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM1_SHIFT  (24U)
/*! flexcomm1 - Flexcomm module 1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM1(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM1_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM2_MASK   (0x2000000U)
#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM2_SHIFT  (25U)
/*! flexcomm2 - Flexcomm module 2 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM2(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM2_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM3_MASK   (0x4000000U)
#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM3_SHIFT  (26U)
/*! flexcomm3 - Flexcomm module 3 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM3(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM3_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM4_MASK   (0x8000000U)
#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM4_SHIFT  (27U)
/*! flexcomm4 - Flexcomm module 4 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM4(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM4_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM5_MASK   (0x10000000U)
#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM5_SHIFT  (28U)
/*! flexcomm5 - Flexcomm module 5 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM5(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_FLEXCOMM5_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_IWIC_MASK        (0x20000000U)
#define CGU_CTRLSS_BUSCLKEN0SET_IWIC_SHIFT       (29U)
/*! iwic - Internal wake-up interrupt controller ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_IWIC(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_IWIC_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_IWIC_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_OTP_MASK         (0x40000000U)
#define CGU_CTRLSS_BUSCLKEN0SET_OTP_SHIFT        (30U)
/*! otp - OTP ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_OTP(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_OTP_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_OTP_MASK)

#define CGU_CTRLSS_BUSCLKEN0SET_VISION_MASK      (0x80000000U)
#define CGU_CTRLSS_BUSCLKEN0SET_VISION_SHIFT     (31U)
/*! vision - Vision SS ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0SET_VISION(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0SET_VISION_SHIFT)) & CGU_CTRLSS_BUSCLKEN0SET_VISION_MASK)
/*! @} */

/*! @name CTRLSS_BUSCLKEN0CLR - Register to clear bits in ctrlss_busclkEn0.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_CTRLSS_BUSCLKEN0CLR_ROM0_MASK        (0x1U)
#define CGU_CTRLSS_BUSCLKEN0CLR_ROM0_SHIFT       (0U)
/*! rom0 - Clock enable for the ROM AHB-clock..
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_ROM0(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_ROM0_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_ROM0_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_PKC_MASK         (0x2U)
#define CGU_CTRLSS_BUSCLKEN0CLR_PKC_SHIFT        (1U)
/*! pkc - PKC clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_PKC(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_PKC_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_PKC_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_PKC_RAM_MASK     (0x4U)
#define CGU_CTRLSS_BUSCLKEN0CLR_PKC_RAM_SHIFT    (2U)
/*! pkc_ram - PKC ram and zeroise clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_PKC_RAM(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_PKC_RAM_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_PKC_RAM_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_PINMUX_MASK      (0x8U)
#define CGU_CTRLSS_BUSCLKEN0CLR_PINMUX_SHIFT     (3U)
/*! pinmux - Pinmux APB clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_PINMUX(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_PINMUX_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_PINMUX_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_CPU_MASK         (0x10U)
#define CGU_CTRLSS_BUSCLKEN0CLR_CPU_SHIFT        (4U)
/*! cpu - CtrlSS CM55 processor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_CPU(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_CPU_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_CPU_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_GPIO_PORT0_MASK  (0x20U)
#define CGU_CTRLSS_BUSCLKEN0CLR_GPIO_PORT0_SHIFT (5U)
/*! gpio_port0 - GPIO port0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_GPIO_PORT0(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_GPIO_PORT0_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_GPIO_PORT0_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_GPIO_PORT1_MASK  (0x40U)
#define CGU_CTRLSS_BUSCLKEN0CLR_GPIO_PORT1_SHIFT (6U)
/*! gpio_port1 - GPIO port1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_GPIO_PORT1(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_GPIO_PORT1_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_GPIO_PORT1_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_SEC_GPIO_PORT0_MASK (0x80U)
#define CGU_CTRLSS_BUSCLKEN0CLR_SEC_GPIO_PORT0_SHIFT (7U)
/*! sec_gpio_port0 - Secure GPIO port0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_SEC_GPIO_PORT0(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_SEC_GPIO_PORT0_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_SEC_GPIO_PORT0_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_SEC_GPIO_PORT1_MASK (0x100U)
#define CGU_CTRLSS_BUSCLKEN0CLR_SEC_GPIO_PORT1_SHIFT (8U)
/*! sec_gpio_port1 - Secure GPIO port1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_SEC_GPIO_PORT1(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_SEC_GPIO_PORT1_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_SEC_GPIO_PORT1_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_GPIO_PINT_MASK   (0x200U)
#define CGU_CTRLSS_BUSCLKEN0CLR_GPIO_PINT_SHIFT  (9U)
/*! gpio_pint - Gpio pint (Pin interrupt and pattern matching) ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_GPIO_PINT(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_GPIO_PINT_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_GPIO_PINT_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_SEC_GPIO_PINT_MASK (0x400U)
#define CGU_CTRLSS_BUSCLKEN0CLR_SEC_GPIO_PINT_SHIFT (10U)
/*! sec_gpio_pint - Secure gpio pint (Pin interrupt and pattern matching) ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_SEC_GPIO_PINT(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_SEC_GPIO_PINT_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_SEC_GPIO_PINT_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_GPIO_GLOBINT_MASK (0x800U)
#define CGU_CTRLSS_BUSCLKEN0CLR_GPIO_GLOBINT_SHIFT (11U)
/*! gpio_globint - GPIO global interrupt ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_GPIO_GLOBINT(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_GPIO_GLOBINT_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_GPIO_GLOBINT_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_DMA0_MASK        (0x1000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_DMA0_SHIFT       (12U)
/*! dma0 - DMA0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_DMA0(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_DMA0_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_DMA0_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_DMA1_MASK        (0x2000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_DMA1_SHIFT       (13U)
/*! dma1 - DMA1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_DMA1(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_DMA1_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_DMA1_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_CRC_MASK         (0x4000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_CRC_SHIFT        (14U)
/*! crc - CRC ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_CRC(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_CRC_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_CRC_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_WDT_MASK         (0x8000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_WDT_SHIFT        (15U)
/*! wdt - Watchdog timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_WDT(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_WDT_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_WDT_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_CDOG_MASK        (0x10000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_CDOG_SHIFT       (16U)
/*! cdog - Code watchdog ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_CDOG(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_CDOG_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_CDOG_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_NIC_AXI_MASK     (0x20000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_NIC_AXI_SHIFT    (17U)
/*! nic_axi - NIC axi abh clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_NIC_AXI(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_NIC_AXI_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_NIC_AXI_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_NIC_REG_MASK     (0x40000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_NIC_REG_SHIFT    (18U)
/*! nic_reg - NIC reg abh clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_NIC_REG(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_NIC_REG_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_NIC_REG_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_MRT_MASK         (0x80000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_MRT_SHIFT        (19U)
/*! mrt - Multi-rate timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_MRT(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_MRT_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_MRT_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_OS_TIMER_MASK    (0x100000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_OS_TIMER_SHIFT   (20U)
/*! OS_timer - OS event timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_OS_TIMER(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_OS_TIMER_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_OS_TIMER_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_SC_TIMER_MASK    (0x200000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_SC_TIMER_SHIFT   (21U)
/*! SC_timer - SC timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_SC_TIMER(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_SC_TIMER_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_SC_TIMER_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_UTICK_MASK       (0x400000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_UTICK_SHIFT      (22U)
/*! utick - Micro-tick ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_UTICK(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_UTICK_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_UTICK_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM0_MASK   (0x800000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM0_SHIFT  (23U)
/*! flexcomm0 - Flexcomm module 0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM0(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM0_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM1_MASK   (0x1000000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM1_SHIFT  (24U)
/*! flexcomm1 - Flexcomm module 1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM1(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM1_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM2_MASK   (0x2000000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM2_SHIFT  (25U)
/*! flexcomm2 - Flexcomm module 2 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM2(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM2_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM3_MASK   (0x4000000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM3_SHIFT  (26U)
/*! flexcomm3 - Flexcomm module 3 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM3(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM3_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM4_MASK   (0x8000000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM4_SHIFT  (27U)
/*! flexcomm4 - Flexcomm module 4 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM4(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM4_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM5_MASK   (0x10000000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM5_SHIFT  (28U)
/*! flexcomm5 - Flexcomm module 5 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM5(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_FLEXCOMM5_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_IWIC_MASK        (0x20000000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_IWIC_SHIFT       (29U)
/*! iwic - Internal wake-up interrupt controller ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_IWIC(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_IWIC_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_IWIC_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_OTP_MASK         (0x40000000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_OTP_SHIFT        (30U)
/*! otp - OTP ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_OTP(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_OTP_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_OTP_MASK)

#define CGU_CTRLSS_BUSCLKEN0CLR_VISION_MASK      (0x80000000U)
#define CGU_CTRLSS_BUSCLKEN0CLR_VISION_SHIFT     (31U)
/*! vision - Vision SS ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN0CLR_VISION(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN0CLR_VISION_SHIFT)) & CGU_CTRLSS_BUSCLKEN0CLR_VISION_MASK)
/*! @} */

/*! @name CTRLSS_DS_BUSCLKEN0 - Deepsleep CtrlSS bus clock enable override.<br> The value of this register will be and'ed with the actual busclken to define the<br> setting during deepsleep. */
/*! @{ */

#define CGU_CTRLSS_DS_BUSCLKEN0_ROM0_MASK        (0x1U)
#define CGU_CTRLSS_DS_BUSCLKEN0_ROM0_SHIFT       (0U)
/*! rom0 - Clock enable for the ROM AHB-clock..
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_ROM0(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_ROM0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_ROM0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_PKC_MASK         (0x2U)
#define CGU_CTRLSS_DS_BUSCLKEN0_PKC_SHIFT        (1U)
/*! pkc - PKC clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_PKC(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_PKC_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_PKC_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_PKC_RAM_MASK     (0x4U)
#define CGU_CTRLSS_DS_BUSCLKEN0_PKC_RAM_SHIFT    (2U)
/*! pkc_ram - PKC ram and zeroise clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_PKC_RAM(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_PKC_RAM_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_PKC_RAM_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_PINMUX_MASK      (0x8U)
#define CGU_CTRLSS_DS_BUSCLKEN0_PINMUX_SHIFT     (3U)
/*! pinmux - Pinmux APB clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_PINMUX(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_PINMUX_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_PINMUX_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_CPU_MASK         (0x10U)
#define CGU_CTRLSS_DS_BUSCLKEN0_CPU_SHIFT        (4U)
/*! cpu - CtrlSS CM55 processor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_CPU(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_CPU_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_CPU_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_GPIO_PORT0_MASK  (0x20U)
#define CGU_CTRLSS_DS_BUSCLKEN0_GPIO_PORT0_SHIFT (5U)
/*! gpio_port0 - GPIO port0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_GPIO_PORT0(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_GPIO_PORT0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_GPIO_PORT0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_GPIO_PORT1_MASK  (0x40U)
#define CGU_CTRLSS_DS_BUSCLKEN0_GPIO_PORT1_SHIFT (6U)
/*! gpio_port1 - GPIO port1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_GPIO_PORT1(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_GPIO_PORT1_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_GPIO_PORT1_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_SEC_GPIO_PORT0_MASK (0x80U)
#define CGU_CTRLSS_DS_BUSCLKEN0_SEC_GPIO_PORT0_SHIFT (7U)
/*! sec_gpio_port0 - Secure GPIO port0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_SEC_GPIO_PORT0(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_SEC_GPIO_PORT0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_SEC_GPIO_PORT0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_SEC_GPIO_PORT1_MASK (0x100U)
#define CGU_CTRLSS_DS_BUSCLKEN0_SEC_GPIO_PORT1_SHIFT (8U)
/*! sec_gpio_port1 - Secure GPIO port1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_SEC_GPIO_PORT1(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_SEC_GPIO_PORT1_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_SEC_GPIO_PORT1_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_GPIO_PINT_MASK   (0x200U)
#define CGU_CTRLSS_DS_BUSCLKEN0_GPIO_PINT_SHIFT  (9U)
/*! gpio_pint - Gpio pint (Pin interrupt and pattern matching) ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_GPIO_PINT(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_GPIO_PINT_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_GPIO_PINT_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_SEC_GPIO_PINT_MASK (0x400U)
#define CGU_CTRLSS_DS_BUSCLKEN0_SEC_GPIO_PINT_SHIFT (10U)
/*! sec_gpio_pint - Secure gpio pint (Pin interrupt and pattern matching) ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_SEC_GPIO_PINT(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_SEC_GPIO_PINT_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_SEC_GPIO_PINT_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_GPIO_GLOBINT_MASK (0x800U)
#define CGU_CTRLSS_DS_BUSCLKEN0_GPIO_GLOBINT_SHIFT (11U)
/*! gpio_globint - GPIO global interrupt ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_GPIO_GLOBINT(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_GPIO_GLOBINT_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_GPIO_GLOBINT_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_DMA0_MASK        (0x1000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_DMA0_SHIFT       (12U)
/*! dma0 - DMA0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_DMA0(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_DMA0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_DMA0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_DMA1_MASK        (0x2000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_DMA1_SHIFT       (13U)
/*! dma1 - DMA1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_DMA1(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_DMA1_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_DMA1_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_CRC_MASK         (0x4000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_CRC_SHIFT        (14U)
/*! crc - CRC ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_CRC(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_CRC_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_CRC_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_WDT_MASK         (0x8000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_WDT_SHIFT        (15U)
/*! wdt - Watchdog timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_WDT(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_WDT_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_WDT_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_CDOG_MASK        (0x10000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_CDOG_SHIFT       (16U)
/*! cdog - Code watchdog ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_CDOG(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_CDOG_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_CDOG_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_NIC_AXI_MASK     (0x20000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_NIC_AXI_SHIFT    (17U)
/*! nic_axi - NIC axi abh clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_NIC_AXI(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_NIC_AXI_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_NIC_AXI_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_NIC_REG_MASK     (0x40000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_NIC_REG_SHIFT    (18U)
/*! nic_reg - NIC reg abh clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_NIC_REG(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_NIC_REG_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_NIC_REG_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_MRT_MASK         (0x80000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_MRT_SHIFT        (19U)
/*! mrt - Multi-rate timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_MRT(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_MRT_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_MRT_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_OS_TIMER_MASK    (0x100000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_OS_TIMER_SHIFT   (20U)
/*! OS_timer - OS event timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_OS_TIMER(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_OS_TIMER_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_OS_TIMER_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_SC_TIMER_MASK    (0x200000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_SC_TIMER_SHIFT   (21U)
/*! SC_timer - SC timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_SC_TIMER(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_SC_TIMER_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_SC_TIMER_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_UTICK_MASK       (0x400000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_UTICK_SHIFT      (22U)
/*! utick - Micro-tick ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_UTICK(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_UTICK_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_UTICK_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM0_MASK   (0x800000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM0_SHIFT  (23U)
/*! flexcomm0 - Flexcomm module 0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM0(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM1_MASK   (0x1000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM1_SHIFT  (24U)
/*! flexcomm1 - Flexcomm module 1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM1(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM1_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM2_MASK   (0x2000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM2_SHIFT  (25U)
/*! flexcomm2 - Flexcomm module 2 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM2(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM2_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM3_MASK   (0x4000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM3_SHIFT  (26U)
/*! flexcomm3 - Flexcomm module 3 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM3(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM3_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM4_MASK   (0x8000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM4_SHIFT  (27U)
/*! flexcomm4 - Flexcomm module 4 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM4(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM4_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM5_MASK   (0x10000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM5_SHIFT  (28U)
/*! flexcomm5 - Flexcomm module 5 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM5(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_FLEXCOMM5_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_IWIC_MASK        (0x20000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_IWIC_SHIFT       (29U)
/*! iwic - Internal wake-up interrupt controller ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_IWIC(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_IWIC_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_IWIC_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_OTP_MASK         (0x40000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_OTP_SHIFT        (30U)
/*! otp - OTP ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_OTP(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_OTP_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_OTP_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0_VISION_MASK      (0x80000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0_VISION_SHIFT     (31U)
/*! vision - Vision SS ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0_VISION(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0_VISION_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0_VISION_MASK)
/*! @} */

/*! @name CTRLSS_DS_BUSCLKEN0SET - Register to set bits in ctrlss_ds_busclkEn0.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_CTRLSS_DS_BUSCLKEN0SET_ROM0_MASK     (0x1U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_ROM0_SHIFT    (0U)
/*! rom0 - Clock enable for the ROM AHB-clock..
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_ROM0(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_ROM0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_ROM0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_PKC_MASK      (0x2U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_PKC_SHIFT     (1U)
/*! pkc - PKC clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_PKC(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_PKC_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_PKC_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_PKC_RAM_MASK  (0x4U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_PKC_RAM_SHIFT (2U)
/*! pkc_ram - PKC ram and zeroise clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_PKC_RAM(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_PKC_RAM_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_PKC_RAM_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_PINMUX_MASK   (0x8U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_PINMUX_SHIFT  (3U)
/*! pinmux - Pinmux APB clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_PINMUX(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_PINMUX_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_PINMUX_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_CPU_MASK      (0x10U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_CPU_SHIFT     (4U)
/*! cpu - CtrlSS CM55 processor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_CPU(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_CPU_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_CPU_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_PORT0_MASK (0x20U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_PORT0_SHIFT (5U)
/*! gpio_port0 - GPIO port0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_PORT0(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_PORT0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_PORT0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_PORT1_MASK (0x40U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_PORT1_SHIFT (6U)
/*! gpio_port1 - GPIO port1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_PORT1(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_PORT1_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_PORT1_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_SEC_GPIO_PORT0_MASK (0x80U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_SEC_GPIO_PORT0_SHIFT (7U)
/*! sec_gpio_port0 - Secure GPIO port0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_SEC_GPIO_PORT0(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_SEC_GPIO_PORT0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_SEC_GPIO_PORT0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_SEC_GPIO_PORT1_MASK (0x100U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_SEC_GPIO_PORT1_SHIFT (8U)
/*! sec_gpio_port1 - Secure GPIO port1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_SEC_GPIO_PORT1(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_SEC_GPIO_PORT1_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_SEC_GPIO_PORT1_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_PINT_MASK (0x200U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_PINT_SHIFT (9U)
/*! gpio_pint - Gpio pint (Pin interrupt and pattern matching) ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_PINT(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_PINT_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_PINT_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_SEC_GPIO_PINT_MASK (0x400U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_SEC_GPIO_PINT_SHIFT (10U)
/*! sec_gpio_pint - Secure gpio pint (Pin interrupt and pattern matching) ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_SEC_GPIO_PINT(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_SEC_GPIO_PINT_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_SEC_GPIO_PINT_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_GLOBINT_MASK (0x800U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_GLOBINT_SHIFT (11U)
/*! gpio_globint - GPIO global interrupt ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_GLOBINT(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_GLOBINT_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_GPIO_GLOBINT_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_DMA0_MASK     (0x1000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_DMA0_SHIFT    (12U)
/*! dma0 - DMA0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_DMA0(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_DMA0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_DMA0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_DMA1_MASK     (0x2000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_DMA1_SHIFT    (13U)
/*! dma1 - DMA1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_DMA1(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_DMA1_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_DMA1_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_CRC_MASK      (0x4000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_CRC_SHIFT     (14U)
/*! crc - CRC ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_CRC(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_CRC_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_CRC_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_WDT_MASK      (0x8000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_WDT_SHIFT     (15U)
/*! wdt - Watchdog timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_WDT(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_WDT_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_WDT_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_CDOG_MASK     (0x10000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_CDOG_SHIFT    (16U)
/*! cdog - Code watchdog ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_CDOG(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_CDOG_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_CDOG_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_NIC_AXI_MASK  (0x20000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_NIC_AXI_SHIFT (17U)
/*! nic_axi - NIC axi abh clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_NIC_AXI(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_NIC_AXI_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_NIC_AXI_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_NIC_REG_MASK  (0x40000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_NIC_REG_SHIFT (18U)
/*! nic_reg - NIC reg abh clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_NIC_REG(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_NIC_REG_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_NIC_REG_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_MRT_MASK      (0x80000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_MRT_SHIFT     (19U)
/*! mrt - Multi-rate timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_MRT(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_MRT_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_MRT_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_OS_TIMER_MASK (0x100000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_OS_TIMER_SHIFT (20U)
/*! OS_timer - OS event timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_OS_TIMER(x)   (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_OS_TIMER_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_OS_TIMER_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_SC_TIMER_MASK (0x200000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_SC_TIMER_SHIFT (21U)
/*! SC_timer - SC timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_SC_TIMER(x)   (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_SC_TIMER_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_SC_TIMER_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_UTICK_MASK    (0x400000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_UTICK_SHIFT   (22U)
/*! utick - Micro-tick ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_UTICK(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_UTICK_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_UTICK_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM0_MASK (0x800000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM0_SHIFT (23U)
/*! flexcomm0 - Flexcomm module 0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM0(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM1_MASK (0x1000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM1_SHIFT (24U)
/*! flexcomm1 - Flexcomm module 1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM1(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM1_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM2_MASK (0x2000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM2_SHIFT (25U)
/*! flexcomm2 - Flexcomm module 2 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM2(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM2_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM3_MASK (0x4000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM3_SHIFT (26U)
/*! flexcomm3 - Flexcomm module 3 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM3(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM3_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM4_MASK (0x8000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM4_SHIFT (27U)
/*! flexcomm4 - Flexcomm module 4 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM4(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM4_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM5_MASK (0x10000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM5_SHIFT (28U)
/*! flexcomm5 - Flexcomm module 5 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM5(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_FLEXCOMM5_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_IWIC_MASK     (0x20000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_IWIC_SHIFT    (29U)
/*! iwic - Internal wake-up interrupt controller ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_IWIC(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_IWIC_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_IWIC_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_OTP_MASK      (0x40000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_OTP_SHIFT     (30U)
/*! otp - OTP ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_OTP(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_OTP_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_OTP_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0SET_VISION_MASK   (0x80000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0SET_VISION_SHIFT  (31U)
/*! vision - Vision SS ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0SET_VISION(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0SET_VISION_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0SET_VISION_MASK)
/*! @} */

/*! @name CTRLSS_DS_BUSCLKEN0CLR - Register to clear bits in ctrlss_ds_busclkEn0.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_ROM0_MASK     (0x1U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_ROM0_SHIFT    (0U)
/*! rom0 - Clock enable for the ROM AHB-clock..
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_ROM0(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_ROM0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_ROM0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_PKC_MASK      (0x2U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_PKC_SHIFT     (1U)
/*! pkc - PKC clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_PKC(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_PKC_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_PKC_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_PKC_RAM_MASK  (0x4U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_PKC_RAM_SHIFT (2U)
/*! pkc_ram - PKC ram and zeroise clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_PKC_RAM(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_PKC_RAM_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_PKC_RAM_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_PINMUX_MASK   (0x8U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_PINMUX_SHIFT  (3U)
/*! pinmux - Pinmux APB clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_PINMUX(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_PINMUX_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_PINMUX_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_CPU_MASK      (0x10U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_CPU_SHIFT     (4U)
/*! cpu - CtrlSS CM55 processor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_CPU(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_CPU_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_CPU_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_PORT0_MASK (0x20U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_PORT0_SHIFT (5U)
/*! gpio_port0 - GPIO port0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_PORT0(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_PORT0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_PORT0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_PORT1_MASK (0x40U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_PORT1_SHIFT (6U)
/*! gpio_port1 - GPIO port1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_PORT1(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_PORT1_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_PORT1_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_SEC_GPIO_PORT0_MASK (0x80U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_SEC_GPIO_PORT0_SHIFT (7U)
/*! sec_gpio_port0 - Secure GPIO port0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_SEC_GPIO_PORT0(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_SEC_GPIO_PORT0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_SEC_GPIO_PORT0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_SEC_GPIO_PORT1_MASK (0x100U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_SEC_GPIO_PORT1_SHIFT (8U)
/*! sec_gpio_port1 - Secure GPIO port1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_SEC_GPIO_PORT1(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_SEC_GPIO_PORT1_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_SEC_GPIO_PORT1_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_PINT_MASK (0x200U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_PINT_SHIFT (9U)
/*! gpio_pint - Gpio pint (Pin interrupt and pattern matching) ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_PINT(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_PINT_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_PINT_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_SEC_GPIO_PINT_MASK (0x400U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_SEC_GPIO_PINT_SHIFT (10U)
/*! sec_gpio_pint - Secure gpio pint (Pin interrupt and pattern matching) ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_SEC_GPIO_PINT(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_SEC_GPIO_PINT_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_SEC_GPIO_PINT_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_GLOBINT_MASK (0x800U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_GLOBINT_SHIFT (11U)
/*! gpio_globint - GPIO global interrupt ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_GLOBINT(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_GLOBINT_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_GPIO_GLOBINT_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_DMA0_MASK     (0x1000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_DMA0_SHIFT    (12U)
/*! dma0 - DMA0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_DMA0(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_DMA0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_DMA0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_DMA1_MASK     (0x2000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_DMA1_SHIFT    (13U)
/*! dma1 - DMA1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_DMA1(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_DMA1_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_DMA1_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_CRC_MASK      (0x4000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_CRC_SHIFT     (14U)
/*! crc - CRC ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_CRC(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_CRC_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_CRC_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_WDT_MASK      (0x8000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_WDT_SHIFT     (15U)
/*! wdt - Watchdog timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_WDT(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_WDT_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_WDT_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_CDOG_MASK     (0x10000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_CDOG_SHIFT    (16U)
/*! cdog - Code watchdog ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_CDOG(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_CDOG_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_CDOG_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_NIC_AXI_MASK  (0x20000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_NIC_AXI_SHIFT (17U)
/*! nic_axi - NIC axi abh clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_NIC_AXI(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_NIC_AXI_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_NIC_AXI_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_NIC_REG_MASK  (0x40000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_NIC_REG_SHIFT (18U)
/*! nic_reg - NIC reg abh clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_NIC_REG(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_NIC_REG_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_NIC_REG_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_MRT_MASK      (0x80000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_MRT_SHIFT     (19U)
/*! mrt - Multi-rate timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_MRT(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_MRT_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_MRT_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_OS_TIMER_MASK (0x100000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_OS_TIMER_SHIFT (20U)
/*! OS_timer - OS event timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_OS_TIMER(x)   (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_OS_TIMER_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_OS_TIMER_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_SC_TIMER_MASK (0x200000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_SC_TIMER_SHIFT (21U)
/*! SC_timer - SC timer ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_SC_TIMER(x)   (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_SC_TIMER_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_SC_TIMER_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_UTICK_MASK    (0x400000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_UTICK_SHIFT   (22U)
/*! utick - Micro-tick ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_UTICK(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_UTICK_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_UTICK_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM0_MASK (0x800000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM0_SHIFT (23U)
/*! flexcomm0 - Flexcomm module 0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM0(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM1_MASK (0x1000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM1_SHIFT (24U)
/*! flexcomm1 - Flexcomm module 1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM1(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM1_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM2_MASK (0x2000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM2_SHIFT (25U)
/*! flexcomm2 - Flexcomm module 2 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM2(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM2_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM3_MASK (0x4000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM3_SHIFT (26U)
/*! flexcomm3 - Flexcomm module 3 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM3(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM3_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM4_MASK (0x8000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM4_SHIFT (27U)
/*! flexcomm4 - Flexcomm module 4 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM4(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM4_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM5_MASK (0x10000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM5_SHIFT (28U)
/*! flexcomm5 - Flexcomm module 5 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM5(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_FLEXCOMM5_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_IWIC_MASK     (0x20000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_IWIC_SHIFT    (29U)
/*! iwic - Internal wake-up interrupt controller ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_IWIC(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_IWIC_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_IWIC_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_OTP_MASK      (0x40000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_OTP_SHIFT     (30U)
/*! otp - OTP ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_OTP(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_OTP_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_OTP_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN0CLR_VISION_MASK   (0x80000000U)
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_VISION_SHIFT  (31U)
/*! vision - Vision SS ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN0CLR_VISION(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN0CLR_VISION_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN0CLR_VISION_MASK)
/*! @} */

/*! @name CTRLSS_BUSCLKEN1 - Second status register for the CtrlSS bus clock enable.<br> The register indicates if the clock is enabled or disabled.<br> <br> 0: Clock is disabled<br> 1: Clock is enabled */
/*! @{ */

#define CGU_CTRLSS_BUSCLKEN1_CTIMER0_MASK        (0x1U)
#define CGU_CTRLSS_BUSCLKEN1_CTIMER0_SHIFT       (0U)
/*! ctimer0 - Standard counter timer 0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1_CTIMER0(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1_CTIMER0_SHIFT)) & CGU_CTRLSS_BUSCLKEN1_CTIMER0_MASK)

#define CGU_CTRLSS_BUSCLKEN1_CTIMER1_MASK        (0x2U)
#define CGU_CTRLSS_BUSCLKEN1_CTIMER1_SHIFT       (1U)
/*! ctimer1 - Standard counter timer 1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1_CTIMER1(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1_CTIMER1_SHIFT)) & CGU_CTRLSS_BUSCLKEN1_CTIMER1_MASK)

#define CGU_CTRLSS_BUSCLKEN1_CTIMER2_MASK        (0x4U)
#define CGU_CTRLSS_BUSCLKEN1_CTIMER2_SHIFT       (2U)
/*! ctimer2 - Standard counter timer 2 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1_CTIMER2(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1_CTIMER2_SHIFT)) & CGU_CTRLSS_BUSCLKEN1_CTIMER2_MASK)

#define CGU_CTRLSS_BUSCLKEN1_CTIMER3_MASK        (0x8U)
#define CGU_CTRLSS_BUSCLKEN1_CTIMER3_SHIFT       (3U)
/*! ctimer3 - Standard counter timer 3 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1_CTIMER3(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1_CTIMER3_SHIFT)) & CGU_CTRLSS_BUSCLKEN1_CTIMER3_MASK)

#define CGU_CTRLSS_BUSCLKEN1_CTIMER4_MASK        (0x10U)
#define CGU_CTRLSS_BUSCLKEN1_CTIMER4_SHIFT       (4U)
/*! ctimer4 - Standard counter timer 4 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1_CTIMER4(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1_CTIMER4_SHIFT)) & CGU_CTRLSS_BUSCLKEN1_CTIMER4_MASK)

#define CGU_CTRLSS_BUSCLKEN1_I3C_MASK            (0x20U)
#define CGU_CTRLSS_BUSCLKEN1_I3C_SHIFT           (5U)
/*! i3c - I3c ahb clock enable
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1_I3C(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1_I3C_SHIFT)) & CGU_CTRLSS_BUSCLKEN1_I3C_MASK)

#define CGU_CTRLSS_BUSCLKEN1_FREQ_MEAS_MASK      (0x40U)
#define CGU_CTRLSS_BUSCLKEN1_FREQ_MEAS_SHIFT     (6U)
/*! freq_meas - Calibration unit ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1_FREQ_MEAS(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1_FREQ_MEAS_SHIFT)) & CGU_CTRLSS_BUSCLKEN1_FREQ_MEAS_MASK)

#define CGU_CTRLSS_BUSCLKEN1_XSPI_MASK           (0x80U)
#define CGU_CTRLSS_BUSCLKEN1_XSPI_SHIFT          (7U)
/*! xspi - CtrlSS xspi ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1_XSPI(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1_XSPI_SHIFT)) & CGU_CTRLSS_BUSCLKEN1_XSPI_MASK)

#define CGU_CTRLSS_BUSCLKEN1_TRNG_MASK           (0x100U)
#define CGU_CTRLSS_BUSCLKEN1_TRNG_SHIFT          (8U)
/*! trng - True random number generator bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1_TRNG(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1_TRNG_SHIFT)) & CGU_CTRLSS_BUSCLKEN1_TRNG_MASK)

#define CGU_CTRLSS_BUSCLKEN1_SGI_MASK            (0x200U)
#define CGU_CTRLSS_BUSCLKEN1_SGI_SHIFT           (9U)
/*! sgi - Secure generic interface bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1_SGI(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1_SGI_SHIFT)) & CGU_CTRLSS_BUSCLKEN1_SGI_MASK)

#define CGU_CTRLSS_BUSCLKEN1_GDET_MASK           (0x400U)
#define CGU_CTRLSS_BUSCLKEN1_GDET_SHIFT          (10U)
/*! gdet - Glitch detector bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1_GDET(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1_GDET_SHIFT)) & CGU_CTRLSS_BUSCLKEN1_GDET_MASK)

#define CGU_CTRLSS_BUSCLKEN1_UDF_MASK            (0x800U)
#define CGU_CTRLSS_BUSCLKEN1_UDF_SHIFT           (11U)
/*! udf - Undocumented function bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1_UDF(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1_UDF_SHIFT)) & CGU_CTRLSS_BUSCLKEN1_UDF_MASK)

#define CGU_CTRLSS_BUSCLKEN1_ITRC_MASK           (0x1000U)
#define CGU_CTRLSS_BUSCLKEN1_ITRC_SHIFT          (12U)
/*! itrc - Intrusion and tamper response controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1_ITRC(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1_ITRC_SHIFT)) & CGU_CTRLSS_BUSCLKEN1_ITRC_MASK)

#define CGU_CTRLSS_BUSCLKEN1_SECCON_MASK         (0x2000U)
#define CGU_CTRLSS_BUSCLKEN1_SECCON_SHIFT        (13U)
/*! seccon - secure controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1_SECCON(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1_SECCON_SHIFT)) & CGU_CTRLSS_BUSCLKEN1_SECCON_MASK)

#define CGU_CTRLSS_BUSCLKEN1_GLIKEY_MASK         (0x4000U)
#define CGU_CTRLSS_BUSCLKEN1_GLIKEY_SHIFT        (14U)
/*! glikey - glikey bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1_GLIKEY(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1_GLIKEY_SHIFT)) & CGU_CTRLSS_BUSCLKEN1_GLIKEY_MASK)

#define CGU_CTRLSS_BUSCLKEN1_PMRC_MASK           (0x8000U)
#define CGU_CTRLSS_BUSCLKEN1_PMRC_SHIFT          (15U)
/*! pmrc - Power mode and reset controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1_PMRC(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1_PMRC_SHIFT)) & CGU_CTRLSS_BUSCLKEN1_PMRC_MASK)
/*! @} */

/*! @name CTRLSS_BUSCLKEN1SET - Register to set bits in ctrlss_busclkEn1.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_CTRLSS_BUSCLKEN1SET_CTIMER0_MASK     (0x1U)
#define CGU_CTRLSS_BUSCLKEN1SET_CTIMER0_SHIFT    (0U)
/*! ctimer0 - Standard counter timer 0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1SET_CTIMER0(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1SET_CTIMER0_SHIFT)) & CGU_CTRLSS_BUSCLKEN1SET_CTIMER0_MASK)

#define CGU_CTRLSS_BUSCLKEN1SET_CTIMER1_MASK     (0x2U)
#define CGU_CTRLSS_BUSCLKEN1SET_CTIMER1_SHIFT    (1U)
/*! ctimer1 - Standard counter timer 1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1SET_CTIMER1(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1SET_CTIMER1_SHIFT)) & CGU_CTRLSS_BUSCLKEN1SET_CTIMER1_MASK)

#define CGU_CTRLSS_BUSCLKEN1SET_CTIMER2_MASK     (0x4U)
#define CGU_CTRLSS_BUSCLKEN1SET_CTIMER2_SHIFT    (2U)
/*! ctimer2 - Standard counter timer 2 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1SET_CTIMER2(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1SET_CTIMER2_SHIFT)) & CGU_CTRLSS_BUSCLKEN1SET_CTIMER2_MASK)

#define CGU_CTRLSS_BUSCLKEN1SET_CTIMER3_MASK     (0x8U)
#define CGU_CTRLSS_BUSCLKEN1SET_CTIMER3_SHIFT    (3U)
/*! ctimer3 - Standard counter timer 3 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1SET_CTIMER3(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1SET_CTIMER3_SHIFT)) & CGU_CTRLSS_BUSCLKEN1SET_CTIMER3_MASK)

#define CGU_CTRLSS_BUSCLKEN1SET_CTIMER4_MASK     (0x10U)
#define CGU_CTRLSS_BUSCLKEN1SET_CTIMER4_SHIFT    (4U)
/*! ctimer4 - Standard counter timer 4 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1SET_CTIMER4(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1SET_CTIMER4_SHIFT)) & CGU_CTRLSS_BUSCLKEN1SET_CTIMER4_MASK)

#define CGU_CTRLSS_BUSCLKEN1SET_I3C_MASK         (0x20U)
#define CGU_CTRLSS_BUSCLKEN1SET_I3C_SHIFT        (5U)
/*! i3c - I3c ahb clock enable
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1SET_I3C(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1SET_I3C_SHIFT)) & CGU_CTRLSS_BUSCLKEN1SET_I3C_MASK)

#define CGU_CTRLSS_BUSCLKEN1SET_FREQ_MEAS_MASK   (0x40U)
#define CGU_CTRLSS_BUSCLKEN1SET_FREQ_MEAS_SHIFT  (6U)
/*! freq_meas - Calibration unit ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1SET_FREQ_MEAS(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1SET_FREQ_MEAS_SHIFT)) & CGU_CTRLSS_BUSCLKEN1SET_FREQ_MEAS_MASK)

#define CGU_CTRLSS_BUSCLKEN1SET_XSPI_MASK        (0x80U)
#define CGU_CTRLSS_BUSCLKEN1SET_XSPI_SHIFT       (7U)
/*! xspi - CtrlSS xspi ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1SET_XSPI(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1SET_XSPI_SHIFT)) & CGU_CTRLSS_BUSCLKEN1SET_XSPI_MASK)

#define CGU_CTRLSS_BUSCLKEN1SET_TRNG_MASK        (0x100U)
#define CGU_CTRLSS_BUSCLKEN1SET_TRNG_SHIFT       (8U)
/*! trng - True random number generator bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1SET_TRNG(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1SET_TRNG_SHIFT)) & CGU_CTRLSS_BUSCLKEN1SET_TRNG_MASK)

#define CGU_CTRLSS_BUSCLKEN1SET_SGI_MASK         (0x200U)
#define CGU_CTRLSS_BUSCLKEN1SET_SGI_SHIFT        (9U)
/*! sgi - Secure generic interface bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1SET_SGI(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1SET_SGI_SHIFT)) & CGU_CTRLSS_BUSCLKEN1SET_SGI_MASK)

#define CGU_CTRLSS_BUSCLKEN1SET_GDET_MASK        (0x400U)
#define CGU_CTRLSS_BUSCLKEN1SET_GDET_SHIFT       (10U)
/*! gdet - Glitch detector bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1SET_GDET(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1SET_GDET_SHIFT)) & CGU_CTRLSS_BUSCLKEN1SET_GDET_MASK)

#define CGU_CTRLSS_BUSCLKEN1SET_UDF_MASK         (0x800U)
#define CGU_CTRLSS_BUSCLKEN1SET_UDF_SHIFT        (11U)
/*! udf - Undocumented function bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1SET_UDF(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1SET_UDF_SHIFT)) & CGU_CTRLSS_BUSCLKEN1SET_UDF_MASK)

#define CGU_CTRLSS_BUSCLKEN1SET_ITRC_MASK        (0x1000U)
#define CGU_CTRLSS_BUSCLKEN1SET_ITRC_SHIFT       (12U)
/*! itrc - Intrusion and tamper response controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1SET_ITRC(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1SET_ITRC_SHIFT)) & CGU_CTRLSS_BUSCLKEN1SET_ITRC_MASK)

#define CGU_CTRLSS_BUSCLKEN1SET_SECCON_MASK      (0x2000U)
#define CGU_CTRLSS_BUSCLKEN1SET_SECCON_SHIFT     (13U)
/*! seccon - secure controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1SET_SECCON(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1SET_SECCON_SHIFT)) & CGU_CTRLSS_BUSCLKEN1SET_SECCON_MASK)

#define CGU_CTRLSS_BUSCLKEN1SET_GLIKEY_MASK      (0x4000U)
#define CGU_CTRLSS_BUSCLKEN1SET_GLIKEY_SHIFT     (14U)
/*! glikey - glikey bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1SET_GLIKEY(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1SET_GLIKEY_SHIFT)) & CGU_CTRLSS_BUSCLKEN1SET_GLIKEY_MASK)

#define CGU_CTRLSS_BUSCLKEN1SET_PMRC_MASK        (0x8000U)
#define CGU_CTRLSS_BUSCLKEN1SET_PMRC_SHIFT       (15U)
/*! pmrc - Power mode and reset controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1SET_PMRC(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1SET_PMRC_SHIFT)) & CGU_CTRLSS_BUSCLKEN1SET_PMRC_MASK)
/*! @} */

/*! @name CTRLSS_BUSCLKEN1CLR - Register to clear bits in ctrlss_busclkEn1.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_CTRLSS_BUSCLKEN1CLR_CTIMER0_MASK     (0x1U)
#define CGU_CTRLSS_BUSCLKEN1CLR_CTIMER0_SHIFT    (0U)
/*! ctimer0 - Standard counter timer 0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1CLR_CTIMER0(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1CLR_CTIMER0_SHIFT)) & CGU_CTRLSS_BUSCLKEN1CLR_CTIMER0_MASK)

#define CGU_CTRLSS_BUSCLKEN1CLR_CTIMER1_MASK     (0x2U)
#define CGU_CTRLSS_BUSCLKEN1CLR_CTIMER1_SHIFT    (1U)
/*! ctimer1 - Standard counter timer 1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1CLR_CTIMER1(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1CLR_CTIMER1_SHIFT)) & CGU_CTRLSS_BUSCLKEN1CLR_CTIMER1_MASK)

#define CGU_CTRLSS_BUSCLKEN1CLR_CTIMER2_MASK     (0x4U)
#define CGU_CTRLSS_BUSCLKEN1CLR_CTIMER2_SHIFT    (2U)
/*! ctimer2 - Standard counter timer 2 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1CLR_CTIMER2(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1CLR_CTIMER2_SHIFT)) & CGU_CTRLSS_BUSCLKEN1CLR_CTIMER2_MASK)

#define CGU_CTRLSS_BUSCLKEN1CLR_CTIMER3_MASK     (0x8U)
#define CGU_CTRLSS_BUSCLKEN1CLR_CTIMER3_SHIFT    (3U)
/*! ctimer3 - Standard counter timer 3 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1CLR_CTIMER3(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1CLR_CTIMER3_SHIFT)) & CGU_CTRLSS_BUSCLKEN1CLR_CTIMER3_MASK)

#define CGU_CTRLSS_BUSCLKEN1CLR_CTIMER4_MASK     (0x10U)
#define CGU_CTRLSS_BUSCLKEN1CLR_CTIMER4_SHIFT    (4U)
/*! ctimer4 - Standard counter timer 4 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1CLR_CTIMER4(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1CLR_CTIMER4_SHIFT)) & CGU_CTRLSS_BUSCLKEN1CLR_CTIMER4_MASK)

#define CGU_CTRLSS_BUSCLKEN1CLR_I3C_MASK         (0x20U)
#define CGU_CTRLSS_BUSCLKEN1CLR_I3C_SHIFT        (5U)
/*! i3c - I3c ahb clock enable
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1CLR_I3C(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1CLR_I3C_SHIFT)) & CGU_CTRLSS_BUSCLKEN1CLR_I3C_MASK)

#define CGU_CTRLSS_BUSCLKEN1CLR_FREQ_MEAS_MASK   (0x40U)
#define CGU_CTRLSS_BUSCLKEN1CLR_FREQ_MEAS_SHIFT  (6U)
/*! freq_meas - Calibration unit ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1CLR_FREQ_MEAS(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1CLR_FREQ_MEAS_SHIFT)) & CGU_CTRLSS_BUSCLKEN1CLR_FREQ_MEAS_MASK)

#define CGU_CTRLSS_BUSCLKEN1CLR_XSPI_MASK        (0x80U)
#define CGU_CTRLSS_BUSCLKEN1CLR_XSPI_SHIFT       (7U)
/*! xspi - CtrlSS xspi ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1CLR_XSPI(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1CLR_XSPI_SHIFT)) & CGU_CTRLSS_BUSCLKEN1CLR_XSPI_MASK)

#define CGU_CTRLSS_BUSCLKEN1CLR_TRNG_MASK        (0x100U)
#define CGU_CTRLSS_BUSCLKEN1CLR_TRNG_SHIFT       (8U)
/*! trng - True random number generator bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1CLR_TRNG(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1CLR_TRNG_SHIFT)) & CGU_CTRLSS_BUSCLKEN1CLR_TRNG_MASK)

#define CGU_CTRLSS_BUSCLKEN1CLR_SGI_MASK         (0x200U)
#define CGU_CTRLSS_BUSCLKEN1CLR_SGI_SHIFT        (9U)
/*! sgi - Secure generic interface bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1CLR_SGI(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1CLR_SGI_SHIFT)) & CGU_CTRLSS_BUSCLKEN1CLR_SGI_MASK)

#define CGU_CTRLSS_BUSCLKEN1CLR_GDET_MASK        (0x400U)
#define CGU_CTRLSS_BUSCLKEN1CLR_GDET_SHIFT       (10U)
/*! gdet - Glitch detector bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1CLR_GDET(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1CLR_GDET_SHIFT)) & CGU_CTRLSS_BUSCLKEN1CLR_GDET_MASK)

#define CGU_CTRLSS_BUSCLKEN1CLR_UDF_MASK         (0x800U)
#define CGU_CTRLSS_BUSCLKEN1CLR_UDF_SHIFT        (11U)
/*! udf - Undocumented function bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1CLR_UDF(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1CLR_UDF_SHIFT)) & CGU_CTRLSS_BUSCLKEN1CLR_UDF_MASK)

#define CGU_CTRLSS_BUSCLKEN1CLR_ITRC_MASK        (0x1000U)
#define CGU_CTRLSS_BUSCLKEN1CLR_ITRC_SHIFT       (12U)
/*! itrc - Intrusion and tamper response controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1CLR_ITRC(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1CLR_ITRC_SHIFT)) & CGU_CTRLSS_BUSCLKEN1CLR_ITRC_MASK)

#define CGU_CTRLSS_BUSCLKEN1CLR_SECCON_MASK      (0x2000U)
#define CGU_CTRLSS_BUSCLKEN1CLR_SECCON_SHIFT     (13U)
/*! seccon - secure controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1CLR_SECCON(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1CLR_SECCON_SHIFT)) & CGU_CTRLSS_BUSCLKEN1CLR_SECCON_MASK)

#define CGU_CTRLSS_BUSCLKEN1CLR_GLIKEY_MASK      (0x4000U)
#define CGU_CTRLSS_BUSCLKEN1CLR_GLIKEY_SHIFT     (14U)
/*! glikey - glikey bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1CLR_GLIKEY(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1CLR_GLIKEY_SHIFT)) & CGU_CTRLSS_BUSCLKEN1CLR_GLIKEY_MASK)

#define CGU_CTRLSS_BUSCLKEN1CLR_PMRC_MASK        (0x8000U)
#define CGU_CTRLSS_BUSCLKEN1CLR_PMRC_SHIFT       (15U)
/*! pmrc - Power mode and reset controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_BUSCLKEN1CLR_PMRC(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_BUSCLKEN1CLR_PMRC_SHIFT)) & CGU_CTRLSS_BUSCLKEN1CLR_PMRC_MASK)
/*! @} */

/*! @name CTRLSS_DS_BUSCLKEN1 - Deepsleep CtrlSS bus clock enable override.<br> The value of this register will be and'ed with the actual busclken to define the<br> setting during deepsleep. */
/*! @{ */

#define CGU_CTRLSS_DS_BUSCLKEN1_CTIMER0_MASK     (0x1U)
#define CGU_CTRLSS_DS_BUSCLKEN1_CTIMER0_SHIFT    (0U)
/*! ctimer0 - Standard counter timer 0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1_CTIMER0(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1_CTIMER0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1_CTIMER0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1_CTIMER1_MASK     (0x2U)
#define CGU_CTRLSS_DS_BUSCLKEN1_CTIMER1_SHIFT    (1U)
/*! ctimer1 - Standard counter timer 1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1_CTIMER1(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1_CTIMER1_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1_CTIMER1_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1_CTIMER2_MASK     (0x4U)
#define CGU_CTRLSS_DS_BUSCLKEN1_CTIMER2_SHIFT    (2U)
/*! ctimer2 - Standard counter timer 2 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1_CTIMER2(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1_CTIMER2_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1_CTIMER2_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1_CTIMER3_MASK     (0x8U)
#define CGU_CTRLSS_DS_BUSCLKEN1_CTIMER3_SHIFT    (3U)
/*! ctimer3 - Standard counter timer 3 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1_CTIMER3(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1_CTIMER3_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1_CTIMER3_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1_CTIMER4_MASK     (0x10U)
#define CGU_CTRLSS_DS_BUSCLKEN1_CTIMER4_SHIFT    (4U)
/*! ctimer4 - Standard counter timer 4 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1_CTIMER4(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1_CTIMER4_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1_CTIMER4_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1_I3C_MASK         (0x20U)
#define CGU_CTRLSS_DS_BUSCLKEN1_I3C_SHIFT        (5U)
/*! i3c - I3c ahb clock enable
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1_I3C(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1_I3C_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1_I3C_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1_FREQ_MEAS_MASK   (0x40U)
#define CGU_CTRLSS_DS_BUSCLKEN1_FREQ_MEAS_SHIFT  (6U)
/*! freq_meas - Calibration unit ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1_FREQ_MEAS(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1_FREQ_MEAS_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1_FREQ_MEAS_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1_XSPI_MASK        (0x80U)
#define CGU_CTRLSS_DS_BUSCLKEN1_XSPI_SHIFT       (7U)
/*! xspi - CtrlSS xspi ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1_XSPI(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1_XSPI_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1_XSPI_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1_TRNG_MASK        (0x100U)
#define CGU_CTRLSS_DS_BUSCLKEN1_TRNG_SHIFT       (8U)
/*! trng - True random number generator bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1_TRNG(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1_TRNG_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1_TRNG_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1_SGI_MASK         (0x200U)
#define CGU_CTRLSS_DS_BUSCLKEN1_SGI_SHIFT        (9U)
/*! sgi - Secure generic interface bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1_SGI(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1_SGI_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1_SGI_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1_GDET_MASK        (0x400U)
#define CGU_CTRLSS_DS_BUSCLKEN1_GDET_SHIFT       (10U)
/*! gdet - Glitch detector bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1_GDET(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1_GDET_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1_GDET_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1_UDF_MASK         (0x800U)
#define CGU_CTRLSS_DS_BUSCLKEN1_UDF_SHIFT        (11U)
/*! udf - Undocumented function bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1_UDF(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1_UDF_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1_UDF_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1_ITRC_MASK        (0x1000U)
#define CGU_CTRLSS_DS_BUSCLKEN1_ITRC_SHIFT       (12U)
/*! itrc - Intrusion and tamper response controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1_ITRC(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1_ITRC_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1_ITRC_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1_SECCON_MASK      (0x2000U)
#define CGU_CTRLSS_DS_BUSCLKEN1_SECCON_SHIFT     (13U)
/*! seccon - secure controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1_SECCON(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1_SECCON_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1_SECCON_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1_GLIKEY_MASK      (0x4000U)
#define CGU_CTRLSS_DS_BUSCLKEN1_GLIKEY_SHIFT     (14U)
/*! glikey - glikey bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1_GLIKEY(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1_GLIKEY_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1_GLIKEY_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1_PMRC_MASK        (0x8000U)
#define CGU_CTRLSS_DS_BUSCLKEN1_PMRC_SHIFT       (15U)
/*! pmrc - Power mode and reset controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1_PMRC(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1_PMRC_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1_PMRC_MASK)
/*! @} */

/*! @name CTRLSS_DS_BUSCLKEN1SET - Register to set bits in ctrlss_ds_busclkEn1.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER0_MASK  (0x1U)
#define CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER0_SHIFT (0U)
/*! ctimer0 - Standard counter timer 0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER0(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER1_MASK  (0x2U)
#define CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER1_SHIFT (1U)
/*! ctimer1 - Standard counter timer 1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER1(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER1_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER1_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER2_MASK  (0x4U)
#define CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER2_SHIFT (2U)
/*! ctimer2 - Standard counter timer 2 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER2(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER2_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER2_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER3_MASK  (0x8U)
#define CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER3_SHIFT (3U)
/*! ctimer3 - Standard counter timer 3 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER3(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER3_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER3_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER4_MASK  (0x10U)
#define CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER4_SHIFT (4U)
/*! ctimer4 - Standard counter timer 4 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER4(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER4_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1SET_CTIMER4_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1SET_I3C_MASK      (0x20U)
#define CGU_CTRLSS_DS_BUSCLKEN1SET_I3C_SHIFT     (5U)
/*! i3c - I3c ahb clock enable
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1SET_I3C(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1SET_I3C_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1SET_I3C_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1SET_FREQ_MEAS_MASK (0x40U)
#define CGU_CTRLSS_DS_BUSCLKEN1SET_FREQ_MEAS_SHIFT (6U)
/*! freq_meas - Calibration unit ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1SET_FREQ_MEAS(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1SET_FREQ_MEAS_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1SET_FREQ_MEAS_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1SET_XSPI_MASK     (0x80U)
#define CGU_CTRLSS_DS_BUSCLKEN1SET_XSPI_SHIFT    (7U)
/*! xspi - CtrlSS xspi ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1SET_XSPI(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1SET_XSPI_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1SET_XSPI_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1SET_TRNG_MASK     (0x100U)
#define CGU_CTRLSS_DS_BUSCLKEN1SET_TRNG_SHIFT    (8U)
/*! trng - True random number generator bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1SET_TRNG(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1SET_TRNG_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1SET_TRNG_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1SET_SGI_MASK      (0x200U)
#define CGU_CTRLSS_DS_BUSCLKEN1SET_SGI_SHIFT     (9U)
/*! sgi - Secure generic interface bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1SET_SGI(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1SET_SGI_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1SET_SGI_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1SET_GDET_MASK     (0x400U)
#define CGU_CTRLSS_DS_BUSCLKEN1SET_GDET_SHIFT    (10U)
/*! gdet - Glitch detector bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1SET_GDET(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1SET_GDET_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1SET_GDET_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1SET_UDF_MASK      (0x800U)
#define CGU_CTRLSS_DS_BUSCLKEN1SET_UDF_SHIFT     (11U)
/*! udf - Undocumented function bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1SET_UDF(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1SET_UDF_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1SET_UDF_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1SET_ITRC_MASK     (0x1000U)
#define CGU_CTRLSS_DS_BUSCLKEN1SET_ITRC_SHIFT    (12U)
/*! itrc - Intrusion and tamper response controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1SET_ITRC(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1SET_ITRC_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1SET_ITRC_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1SET_SECCON_MASK   (0x2000U)
#define CGU_CTRLSS_DS_BUSCLKEN1SET_SECCON_SHIFT  (13U)
/*! seccon - secure controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1SET_SECCON(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1SET_SECCON_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1SET_SECCON_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1SET_GLIKEY_MASK   (0x4000U)
#define CGU_CTRLSS_DS_BUSCLKEN1SET_GLIKEY_SHIFT  (14U)
/*! glikey - glikey bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1SET_GLIKEY(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1SET_GLIKEY_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1SET_GLIKEY_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1SET_PMRC_MASK     (0x8000U)
#define CGU_CTRLSS_DS_BUSCLKEN1SET_PMRC_SHIFT    (15U)
/*! pmrc - Power mode and reset controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1SET_PMRC(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1SET_PMRC_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1SET_PMRC_MASK)
/*! @} */

/*! @name CTRLSS_DS_BUSCLKEN1CLR - Register to clear bits in ctrlss_ds_busclkEn1.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER0_MASK  (0x1U)
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER0_SHIFT (0U)
/*! ctimer0 - Standard counter timer 0 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER0(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER0_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER0_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER1_MASK  (0x2U)
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER1_SHIFT (1U)
/*! ctimer1 - Standard counter timer 1 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER1(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER1_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER1_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER2_MASK  (0x4U)
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER2_SHIFT (2U)
/*! ctimer2 - Standard counter timer 2 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER2(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER2_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER2_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER3_MASK  (0x8U)
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER3_SHIFT (3U)
/*! ctimer3 - Standard counter timer 3 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER3(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER3_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER3_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER4_MASK  (0x10U)
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER4_SHIFT (4U)
/*! ctimer4 - Standard counter timer 4 ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER4(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER4_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1CLR_CTIMER4_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1CLR_I3C_MASK      (0x20U)
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_I3C_SHIFT     (5U)
/*! i3c - I3c ahb clock enable
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_I3C(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1CLR_I3C_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1CLR_I3C_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1CLR_FREQ_MEAS_MASK (0x40U)
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_FREQ_MEAS_SHIFT (6U)
/*! freq_meas - Calibration unit ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_FREQ_MEAS(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1CLR_FREQ_MEAS_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1CLR_FREQ_MEAS_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1CLR_XSPI_MASK     (0x80U)
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_XSPI_SHIFT    (7U)
/*! xspi - CtrlSS xspi ahb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_XSPI(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1CLR_XSPI_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1CLR_XSPI_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1CLR_TRNG_MASK     (0x100U)
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_TRNG_SHIFT    (8U)
/*! trng - True random number generator bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_TRNG(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1CLR_TRNG_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1CLR_TRNG_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1CLR_SGI_MASK      (0x200U)
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_SGI_SHIFT     (9U)
/*! sgi - Secure generic interface bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_SGI(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1CLR_SGI_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1CLR_SGI_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1CLR_GDET_MASK     (0x400U)
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_GDET_SHIFT    (10U)
/*! gdet - Glitch detector bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_GDET(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1CLR_GDET_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1CLR_GDET_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1CLR_UDF_MASK      (0x800U)
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_UDF_SHIFT     (11U)
/*! udf - Undocumented function bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_UDF(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1CLR_UDF_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1CLR_UDF_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1CLR_ITRC_MASK     (0x1000U)
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_ITRC_SHIFT    (12U)
/*! itrc - Intrusion and tamper response controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_ITRC(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1CLR_ITRC_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1CLR_ITRC_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1CLR_SECCON_MASK   (0x2000U)
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_SECCON_SHIFT  (13U)
/*! seccon - secure controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_SECCON(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1CLR_SECCON_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1CLR_SECCON_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1CLR_GLIKEY_MASK   (0x4000U)
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_GLIKEY_SHIFT  (14U)
/*! glikey - glikey bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_GLIKEY(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1CLR_GLIKEY_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1CLR_GLIKEY_MASK)

#define CGU_CTRLSS_DS_BUSCLKEN1CLR_PMRC_MASK     (0x8000U)
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_PMRC_SHIFT    (15U)
/*! pmrc - Power mode and reset controller bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_BUSCLKEN1CLR_PMRC(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_BUSCLKEN1CLR_PMRC_SHIFT)) & CGU_CTRLSS_DS_BUSCLKEN1CLR_PMRC_MASK)
/*! @} */

/*! @name CTRLSS_CLKEN - Status register for the CtrlSS module clock enable.<br> The register indicates if the clock is enabled or disabled.<br> <br> 0: Clock is disabled<br> 1: Clock is enabled */
/*! @{ */

#define CGU_CTRLSS_CLKEN_WDT_MASK                (0x1U)
#define CGU_CTRLSS_CLKEN_WDT_SHIFT               (0U)
/*! WDT - Watch dog timer module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_WDT(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_WDT_SHIFT)) & CGU_CTRLSS_CLKEN_WDT_MASK)

#define CGU_CTRLSS_CLKEN_TPIU_TRACE_MASK         (0x2U)
#define CGU_CTRLSS_CLKEN_TPIU_TRACE_SHIFT        (1U)
/*! tpiu_trace - TPIU trace module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_TPIU_TRACE(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_TPIU_TRACE_SHIFT)) & CGU_CTRLSS_CLKEN_TPIU_TRACE_MASK)

#define CGU_CTRLSS_CLKEN_UART_MASK               (0x4U)
#define CGU_CTRLSS_CLKEN_UART_SHIFT              (2U)
/*! Uart - Uart module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_UART(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_UART_SHIFT)) & CGU_CTRLSS_CLKEN_UART_MASK)

#define CGU_CTRLSS_CLKEN_UTICK_MASK              (0x8U)
#define CGU_CTRLSS_CLKEN_UTICK_SHIFT             (3U)
/*! utick - Utick module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_UTICK(x)                (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_UTICK_SHIFT)) & CGU_CTRLSS_CLKEN_UTICK_MASK)

#define CGU_CTRLSS_CLKEN_FREQ_MEAS_REF_MASK      (0x10U)
#define CGU_CTRLSS_CLKEN_FREQ_MEAS_REF_SHIFT     (4U)
/*! freq_meas_ref - Freq. meas. reference input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_FREQ_MEAS_REF(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_FREQ_MEAS_REF_SHIFT)) & CGU_CTRLSS_CLKEN_FREQ_MEAS_REF_MASK)

#define CGU_CTRLSS_CLKEN_FREQ_MEAS_TARGET_MASK   (0x20U)
#define CGU_CTRLSS_CLKEN_FREQ_MEAS_TARGET_SHIFT  (5U)
/*! freq_meas_target - Freq. meas. target input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_FREQ_MEAS_TARGET(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_FREQ_MEAS_TARGET_SHIFT)) & CGU_CTRLSS_CLKEN_FREQ_MEAS_TARGET_MASK)

#define CGU_CTRLSS_CLKEN_GDET_MASK               (0x40U)
#define CGU_CTRLSS_CLKEN_GDET_SHIFT              (6U)
/*! GDet - GDet module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_GDET(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_GDET_SHIFT)) & CGU_CTRLSS_CLKEN_GDET_MASK)

#define CGU_CTRLSS_CLKEN_OS_TIMER_MASK           (0x80U)
#define CGU_CTRLSS_CLKEN_OS_TIMER_SHIFT          (7U)
/*! OS_timer - OS timer module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_OS_TIMER(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_OS_TIMER_SHIFT)) & CGU_CTRLSS_CLKEN_OS_TIMER_MASK)

#define CGU_CTRLSS_CLKEN_CTIMER0_MASK            (0x100U)
#define CGU_CTRLSS_CLKEN_CTIMER0_SHIFT           (8U)
/*! Ctimer0 - Ctimer0 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_CTIMER0(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_CTIMER0_SHIFT)) & CGU_CTRLSS_CLKEN_CTIMER0_MASK)

#define CGU_CTRLSS_CLKEN_CTIMER1_MASK            (0x200U)
#define CGU_CTRLSS_CLKEN_CTIMER1_SHIFT           (9U)
/*! Ctimer1 - Ctimer1 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_CTIMER1(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_CTIMER1_SHIFT)) & CGU_CTRLSS_CLKEN_CTIMER1_MASK)

#define CGU_CTRLSS_CLKEN_CTIMER2_MASK            (0x400U)
#define CGU_CTRLSS_CLKEN_CTIMER2_SHIFT           (10U)
/*! Ctimer2 - Ctimer2 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_CTIMER2(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_CTIMER2_SHIFT)) & CGU_CTRLSS_CLKEN_CTIMER2_MASK)

#define CGU_CTRLSS_CLKEN_CTIMER3_MASK            (0x800U)
#define CGU_CTRLSS_CLKEN_CTIMER3_SHIFT           (11U)
/*! Ctimer3 - Ctimer3 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_CTIMER3(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_CTIMER3_SHIFT)) & CGU_CTRLSS_CLKEN_CTIMER3_MASK)

#define CGU_CTRLSS_CLKEN_CTIMER4_MASK            (0x1000U)
#define CGU_CTRLSS_CLKEN_CTIMER4_SHIFT           (12U)
/*! Ctimer4 - Ctimer4 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_CTIMER4(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_CTIMER4_SHIFT)) & CGU_CTRLSS_CLKEN_CTIMER4_MASK)

#define CGU_CTRLSS_CLKEN_FLEXCOMM0_MASK          (0x2000U)
#define CGU_CTRLSS_CLKEN_FLEXCOMM0_SHIFT         (13U)
/*! Flexcomm0 - Flexcomm0 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_FLEXCOMM0(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_CLKEN_FLEXCOMM0_MASK)

#define CGU_CTRLSS_CLKEN_FLEXCOMM1_MASK          (0x4000U)
#define CGU_CTRLSS_CLKEN_FLEXCOMM1_SHIFT         (14U)
/*! Flexcomm1 - Flexcomm1 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_FLEXCOMM1(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_CLKEN_FLEXCOMM1_MASK)

#define CGU_CTRLSS_CLKEN_FLEXCOMM2_MASK          (0x8000U)
#define CGU_CTRLSS_CLKEN_FLEXCOMM2_SHIFT         (15U)
/*! Flexcomm2 - Flexcomm2 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_FLEXCOMM2(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_CLKEN_FLEXCOMM2_MASK)

#define CGU_CTRLSS_CLKEN_FLEXCOMM3_MASK          (0x10000U)
#define CGU_CTRLSS_CLKEN_FLEXCOMM3_SHIFT         (16U)
/*! Flexcomm3 - Flexcomm3 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_FLEXCOMM3(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_CLKEN_FLEXCOMM3_MASK)

#define CGU_CTRLSS_CLKEN_FLEXCOMM4_MASK          (0x20000U)
#define CGU_CTRLSS_CLKEN_FLEXCOMM4_SHIFT         (17U)
/*! Flexcomm4 - Flexcomm4 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_FLEXCOMM4(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_CLKEN_FLEXCOMM4_MASK)

#define CGU_CTRLSS_CLKEN_FLEXCOMM5_MASK          (0x40000U)
#define CGU_CTRLSS_CLKEN_FLEXCOMM5_SHIFT         (18U)
/*! Flexcomm5 - Flexcomm5 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_FLEXCOMM5(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_CLKEN_FLEXCOMM5_MASK)

#define CGU_CTRLSS_CLKEN_I3C_MASK                (0x80000U)
#define CGU_CTRLSS_CLKEN_I3C_SHIFT               (19U)
/*! i3c - I3c module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_I3C(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_I3C_SHIFT)) & CGU_CTRLSS_CLKEN_I3C_MASK)

#define CGU_CTRLSS_CLKEN_XSPI_MASK               (0x100000U)
#define CGU_CTRLSS_CLKEN_XSPI_SHIFT              (20U)
/*! xspi - XSPI module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_XSPI(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_XSPI_SHIFT)) & CGU_CTRLSS_CLKEN_XSPI_MASK)

#define CGU_CTRLSS_CLKEN_XSPI_SFIF_MASK          (0x200000U)
#define CGU_CTRLSS_CLKEN_XSPI_SFIF_SHIFT         (21U)
/*! xspi_sfif - XSPI 1x sample clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_XSPI_SFIF(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_XSPI_SFIF_SHIFT)) & CGU_CTRLSS_CLKEN_XSPI_SFIF_MASK)

#define CGU_CTRLSS_CLKEN_XSPI_2XSFIF_MASK        (0x400000U)
#define CGU_CTRLSS_CLKEN_XSPI_2XSFIF_SHIFT       (22U)
/*! xspi_2xsfif - XSPI 2x sample clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_XSPI_2XSFIF(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_XSPI_2XSFIF_SHIFT)) & CGU_CTRLSS_CLKEN_XSPI_2XSFIF_MASK)

#define CGU_CTRLSS_CLKEN_PMRC_MASK               (0x800000U)
#define CGU_CTRLSS_CLKEN_PMRC_SHIFT              (23U)
/*! pmrc - PMRC clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_PMRC(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_PMRC_SHIFT)) & CGU_CTRLSS_CLKEN_PMRC_MASK)

#define CGU_CTRLSS_CLKEN_MEM_CTRL_MASK           (0x1000000U)
#define CGU_CTRLSS_CLKEN_MEM_CTRL_SHIFT          (24U)
/*! mem_ctrl - Memory control clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKEN_MEM_CTRL(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKEN_MEM_CTRL_SHIFT)) & CGU_CTRLSS_CLKEN_MEM_CTRL_MASK)
/*! @} */

/*! @name CTRLSS_CLKENSET - Register to set bits in ctrlss_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_CTRLSS_CLKENSET_WDT_MASK             (0x1U)
#define CGU_CTRLSS_CLKENSET_WDT_SHIFT            (0U)
/*! WDT - Watch dog timer module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_WDT(x)               (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_WDT_SHIFT)) & CGU_CTRLSS_CLKENSET_WDT_MASK)

#define CGU_CTRLSS_CLKENSET_TPIU_TRACE_MASK      (0x2U)
#define CGU_CTRLSS_CLKENSET_TPIU_TRACE_SHIFT     (1U)
/*! tpiu_trace - TPIU trace module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_TPIU_TRACE(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_TPIU_TRACE_SHIFT)) & CGU_CTRLSS_CLKENSET_TPIU_TRACE_MASK)

#define CGU_CTRLSS_CLKENSET_UART_MASK            (0x4U)
#define CGU_CTRLSS_CLKENSET_UART_SHIFT           (2U)
/*! Uart - Uart module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_UART(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_UART_SHIFT)) & CGU_CTRLSS_CLKENSET_UART_MASK)

#define CGU_CTRLSS_CLKENSET_UTICK_MASK           (0x8U)
#define CGU_CTRLSS_CLKENSET_UTICK_SHIFT          (3U)
/*! utick - Utick module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_UTICK(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_UTICK_SHIFT)) & CGU_CTRLSS_CLKENSET_UTICK_MASK)

#define CGU_CTRLSS_CLKENSET_FREQ_MEAS_REF_MASK   (0x10U)
#define CGU_CTRLSS_CLKENSET_FREQ_MEAS_REF_SHIFT  (4U)
/*! freq_meas_ref - Freq. meas. reference input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_FREQ_MEAS_REF(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_FREQ_MEAS_REF_SHIFT)) & CGU_CTRLSS_CLKENSET_FREQ_MEAS_REF_MASK)

#define CGU_CTRLSS_CLKENSET_FREQ_MEAS_TARGET_MASK (0x20U)
#define CGU_CTRLSS_CLKENSET_FREQ_MEAS_TARGET_SHIFT (5U)
/*! freq_meas_target - Freq. meas. target input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_FREQ_MEAS_TARGET(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_FREQ_MEAS_TARGET_SHIFT)) & CGU_CTRLSS_CLKENSET_FREQ_MEAS_TARGET_MASK)

#define CGU_CTRLSS_CLKENSET_GDET_MASK            (0x40U)
#define CGU_CTRLSS_CLKENSET_GDET_SHIFT           (6U)
/*! GDet - GDet module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_GDET(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_GDET_SHIFT)) & CGU_CTRLSS_CLKENSET_GDET_MASK)

#define CGU_CTRLSS_CLKENSET_OS_TIMER_MASK        (0x80U)
#define CGU_CTRLSS_CLKENSET_OS_TIMER_SHIFT       (7U)
/*! OS_timer - OS timer module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_OS_TIMER(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_OS_TIMER_SHIFT)) & CGU_CTRLSS_CLKENSET_OS_TIMER_MASK)

#define CGU_CTRLSS_CLKENSET_CTIMER0_MASK         (0x100U)
#define CGU_CTRLSS_CLKENSET_CTIMER0_SHIFT        (8U)
/*! Ctimer0 - Ctimer0 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_CTIMER0(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_CTIMER0_SHIFT)) & CGU_CTRLSS_CLKENSET_CTIMER0_MASK)

#define CGU_CTRLSS_CLKENSET_CTIMER1_MASK         (0x200U)
#define CGU_CTRLSS_CLKENSET_CTIMER1_SHIFT        (9U)
/*! Ctimer1 - Ctimer1 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_CTIMER1(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_CTIMER1_SHIFT)) & CGU_CTRLSS_CLKENSET_CTIMER1_MASK)

#define CGU_CTRLSS_CLKENSET_CTIMER2_MASK         (0x400U)
#define CGU_CTRLSS_CLKENSET_CTIMER2_SHIFT        (10U)
/*! Ctimer2 - Ctimer2 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_CTIMER2(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_CTIMER2_SHIFT)) & CGU_CTRLSS_CLKENSET_CTIMER2_MASK)

#define CGU_CTRLSS_CLKENSET_CTIMER3_MASK         (0x800U)
#define CGU_CTRLSS_CLKENSET_CTIMER3_SHIFT        (11U)
/*! Ctimer3 - Ctimer3 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_CTIMER3(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_CTIMER3_SHIFT)) & CGU_CTRLSS_CLKENSET_CTIMER3_MASK)

#define CGU_CTRLSS_CLKENSET_CTIMER4_MASK         (0x1000U)
#define CGU_CTRLSS_CLKENSET_CTIMER4_SHIFT        (12U)
/*! Ctimer4 - Ctimer4 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_CTIMER4(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_CTIMER4_SHIFT)) & CGU_CTRLSS_CLKENSET_CTIMER4_MASK)

#define CGU_CTRLSS_CLKENSET_FLEXCOMM0_MASK       (0x2000U)
#define CGU_CTRLSS_CLKENSET_FLEXCOMM0_SHIFT      (13U)
/*! Flexcomm0 - Flexcomm0 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_FLEXCOMM0(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_CLKENSET_FLEXCOMM0_MASK)

#define CGU_CTRLSS_CLKENSET_FLEXCOMM1_MASK       (0x4000U)
#define CGU_CTRLSS_CLKENSET_FLEXCOMM1_SHIFT      (14U)
/*! Flexcomm1 - Flexcomm1 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_FLEXCOMM1(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_CLKENSET_FLEXCOMM1_MASK)

#define CGU_CTRLSS_CLKENSET_FLEXCOMM2_MASK       (0x8000U)
#define CGU_CTRLSS_CLKENSET_FLEXCOMM2_SHIFT      (15U)
/*! Flexcomm2 - Flexcomm2 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_FLEXCOMM2(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_CLKENSET_FLEXCOMM2_MASK)

#define CGU_CTRLSS_CLKENSET_FLEXCOMM3_MASK       (0x10000U)
#define CGU_CTRLSS_CLKENSET_FLEXCOMM3_SHIFT      (16U)
/*! Flexcomm3 - Flexcomm3 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_FLEXCOMM3(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_CLKENSET_FLEXCOMM3_MASK)

#define CGU_CTRLSS_CLKENSET_FLEXCOMM4_MASK       (0x20000U)
#define CGU_CTRLSS_CLKENSET_FLEXCOMM4_SHIFT      (17U)
/*! Flexcomm4 - Flexcomm4 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_FLEXCOMM4(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_CLKENSET_FLEXCOMM4_MASK)

#define CGU_CTRLSS_CLKENSET_FLEXCOMM5_MASK       (0x40000U)
#define CGU_CTRLSS_CLKENSET_FLEXCOMM5_SHIFT      (18U)
/*! Flexcomm5 - Flexcomm5 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_FLEXCOMM5(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_CLKENSET_FLEXCOMM5_MASK)

#define CGU_CTRLSS_CLKENSET_I3C_MASK             (0x80000U)
#define CGU_CTRLSS_CLKENSET_I3C_SHIFT            (19U)
/*! i3c - I3c module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_I3C(x)               (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_I3C_SHIFT)) & CGU_CTRLSS_CLKENSET_I3C_MASK)

#define CGU_CTRLSS_CLKENSET_XSPI_MASK            (0x100000U)
#define CGU_CTRLSS_CLKENSET_XSPI_SHIFT           (20U)
/*! xspi - XSPI module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_XSPI(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_XSPI_SHIFT)) & CGU_CTRLSS_CLKENSET_XSPI_MASK)

#define CGU_CTRLSS_CLKENSET_XSPI_SFIF_MASK       (0x200000U)
#define CGU_CTRLSS_CLKENSET_XSPI_SFIF_SHIFT      (21U)
/*! xspi_sfif - XSPI 1x sample clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_XSPI_SFIF(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_XSPI_SFIF_SHIFT)) & CGU_CTRLSS_CLKENSET_XSPI_SFIF_MASK)

#define CGU_CTRLSS_CLKENSET_XSPI_2XSFIF_MASK     (0x400000U)
#define CGU_CTRLSS_CLKENSET_XSPI_2XSFIF_SHIFT    (22U)
/*! xspi_2xsfif - XSPI 2x sample clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_XSPI_2XSFIF(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_XSPI_2XSFIF_SHIFT)) & CGU_CTRLSS_CLKENSET_XSPI_2XSFIF_MASK)

#define CGU_CTRLSS_CLKENSET_PMRC_MASK            (0x800000U)
#define CGU_CTRLSS_CLKENSET_PMRC_SHIFT           (23U)
/*! pmrc - PMRC clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_PMRC(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_PMRC_SHIFT)) & CGU_CTRLSS_CLKENSET_PMRC_MASK)

#define CGU_CTRLSS_CLKENSET_MEM_CTRL_MASK        (0x1000000U)
#define CGU_CTRLSS_CLKENSET_MEM_CTRL_SHIFT       (24U)
/*! mem_ctrl - Memory control clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENSET_MEM_CTRL(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENSET_MEM_CTRL_SHIFT)) & CGU_CTRLSS_CLKENSET_MEM_CTRL_MASK)
/*! @} */

/*! @name CTRLSS_CLKENCLR - Register to clear bits in ctrlss_clkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_CTRLSS_CLKENCLR_WDT_MASK             (0x1U)
#define CGU_CTRLSS_CLKENCLR_WDT_SHIFT            (0U)
/*! WDT - Watch dog timer module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_WDT(x)               (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_WDT_SHIFT)) & CGU_CTRLSS_CLKENCLR_WDT_MASK)

#define CGU_CTRLSS_CLKENCLR_TPIU_TRACE_MASK      (0x2U)
#define CGU_CTRLSS_CLKENCLR_TPIU_TRACE_SHIFT     (1U)
/*! tpiu_trace - TPIU trace module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_TPIU_TRACE(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_TPIU_TRACE_SHIFT)) & CGU_CTRLSS_CLKENCLR_TPIU_TRACE_MASK)

#define CGU_CTRLSS_CLKENCLR_UART_MASK            (0x4U)
#define CGU_CTRLSS_CLKENCLR_UART_SHIFT           (2U)
/*! Uart - Uart module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_UART(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_UART_SHIFT)) & CGU_CTRLSS_CLKENCLR_UART_MASK)

#define CGU_CTRLSS_CLKENCLR_UTICK_MASK           (0x8U)
#define CGU_CTRLSS_CLKENCLR_UTICK_SHIFT          (3U)
/*! utick - Utick module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_UTICK(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_UTICK_SHIFT)) & CGU_CTRLSS_CLKENCLR_UTICK_MASK)

#define CGU_CTRLSS_CLKENCLR_FREQ_MEAS_REF_MASK   (0x10U)
#define CGU_CTRLSS_CLKENCLR_FREQ_MEAS_REF_SHIFT  (4U)
/*! freq_meas_ref - Freq. meas. reference input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_FREQ_MEAS_REF(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_FREQ_MEAS_REF_SHIFT)) & CGU_CTRLSS_CLKENCLR_FREQ_MEAS_REF_MASK)

#define CGU_CTRLSS_CLKENCLR_FREQ_MEAS_TARGET_MASK (0x20U)
#define CGU_CTRLSS_CLKENCLR_FREQ_MEAS_TARGET_SHIFT (5U)
/*! freq_meas_target - Freq. meas. target input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_FREQ_MEAS_TARGET(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_FREQ_MEAS_TARGET_SHIFT)) & CGU_CTRLSS_CLKENCLR_FREQ_MEAS_TARGET_MASK)

#define CGU_CTRLSS_CLKENCLR_GDET_MASK            (0x40U)
#define CGU_CTRLSS_CLKENCLR_GDET_SHIFT           (6U)
/*! GDet - GDet module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_GDET(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_GDET_SHIFT)) & CGU_CTRLSS_CLKENCLR_GDET_MASK)

#define CGU_CTRLSS_CLKENCLR_OS_TIMER_MASK        (0x80U)
#define CGU_CTRLSS_CLKENCLR_OS_TIMER_SHIFT       (7U)
/*! OS_timer - OS timer module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_OS_TIMER(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_OS_TIMER_SHIFT)) & CGU_CTRLSS_CLKENCLR_OS_TIMER_MASK)

#define CGU_CTRLSS_CLKENCLR_CTIMER0_MASK         (0x100U)
#define CGU_CTRLSS_CLKENCLR_CTIMER0_SHIFT        (8U)
/*! Ctimer0 - Ctimer0 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_CTIMER0(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_CTIMER0_SHIFT)) & CGU_CTRLSS_CLKENCLR_CTIMER0_MASK)

#define CGU_CTRLSS_CLKENCLR_CTIMER1_MASK         (0x200U)
#define CGU_CTRLSS_CLKENCLR_CTIMER1_SHIFT        (9U)
/*! Ctimer1 - Ctimer1 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_CTIMER1(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_CTIMER1_SHIFT)) & CGU_CTRLSS_CLKENCLR_CTIMER1_MASK)

#define CGU_CTRLSS_CLKENCLR_CTIMER2_MASK         (0x400U)
#define CGU_CTRLSS_CLKENCLR_CTIMER2_SHIFT        (10U)
/*! Ctimer2 - Ctimer2 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_CTIMER2(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_CTIMER2_SHIFT)) & CGU_CTRLSS_CLKENCLR_CTIMER2_MASK)

#define CGU_CTRLSS_CLKENCLR_CTIMER3_MASK         (0x800U)
#define CGU_CTRLSS_CLKENCLR_CTIMER3_SHIFT        (11U)
/*! Ctimer3 - Ctimer3 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_CTIMER3(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_CTIMER3_SHIFT)) & CGU_CTRLSS_CLKENCLR_CTIMER3_MASK)

#define CGU_CTRLSS_CLKENCLR_CTIMER4_MASK         (0x1000U)
#define CGU_CTRLSS_CLKENCLR_CTIMER4_SHIFT        (12U)
/*! Ctimer4 - Ctimer4 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_CTIMER4(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_CTIMER4_SHIFT)) & CGU_CTRLSS_CLKENCLR_CTIMER4_MASK)

#define CGU_CTRLSS_CLKENCLR_FLEXCOMM0_MASK       (0x2000U)
#define CGU_CTRLSS_CLKENCLR_FLEXCOMM0_SHIFT      (13U)
/*! Flexcomm0 - Flexcomm0 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_FLEXCOMM0(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_CLKENCLR_FLEXCOMM0_MASK)

#define CGU_CTRLSS_CLKENCLR_FLEXCOMM1_MASK       (0x4000U)
#define CGU_CTRLSS_CLKENCLR_FLEXCOMM1_SHIFT      (14U)
/*! Flexcomm1 - Flexcomm1 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_FLEXCOMM1(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_CLKENCLR_FLEXCOMM1_MASK)

#define CGU_CTRLSS_CLKENCLR_FLEXCOMM2_MASK       (0x8000U)
#define CGU_CTRLSS_CLKENCLR_FLEXCOMM2_SHIFT      (15U)
/*! Flexcomm2 - Flexcomm2 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_FLEXCOMM2(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_CLKENCLR_FLEXCOMM2_MASK)

#define CGU_CTRLSS_CLKENCLR_FLEXCOMM3_MASK       (0x10000U)
#define CGU_CTRLSS_CLKENCLR_FLEXCOMM3_SHIFT      (16U)
/*! Flexcomm3 - Flexcomm3 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_FLEXCOMM3(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_CLKENCLR_FLEXCOMM3_MASK)

#define CGU_CTRLSS_CLKENCLR_FLEXCOMM4_MASK       (0x20000U)
#define CGU_CTRLSS_CLKENCLR_FLEXCOMM4_SHIFT      (17U)
/*! Flexcomm4 - Flexcomm4 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_FLEXCOMM4(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_CLKENCLR_FLEXCOMM4_MASK)

#define CGU_CTRLSS_CLKENCLR_FLEXCOMM5_MASK       (0x40000U)
#define CGU_CTRLSS_CLKENCLR_FLEXCOMM5_SHIFT      (18U)
/*! Flexcomm5 - Flexcomm5 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_FLEXCOMM5(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_CLKENCLR_FLEXCOMM5_MASK)

#define CGU_CTRLSS_CLKENCLR_I3C_MASK             (0x80000U)
#define CGU_CTRLSS_CLKENCLR_I3C_SHIFT            (19U)
/*! i3c - I3c module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_I3C(x)               (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_I3C_SHIFT)) & CGU_CTRLSS_CLKENCLR_I3C_MASK)

#define CGU_CTRLSS_CLKENCLR_XSPI_MASK            (0x100000U)
#define CGU_CTRLSS_CLKENCLR_XSPI_SHIFT           (20U)
/*! xspi - XSPI module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_XSPI(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_XSPI_SHIFT)) & CGU_CTRLSS_CLKENCLR_XSPI_MASK)

#define CGU_CTRLSS_CLKENCLR_XSPI_SFIF_MASK       (0x200000U)
#define CGU_CTRLSS_CLKENCLR_XSPI_SFIF_SHIFT      (21U)
/*! xspi_sfif - XSPI 1x sample clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_XSPI_SFIF(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_XSPI_SFIF_SHIFT)) & CGU_CTRLSS_CLKENCLR_XSPI_SFIF_MASK)

#define CGU_CTRLSS_CLKENCLR_XSPI_2XSFIF_MASK     (0x400000U)
#define CGU_CTRLSS_CLKENCLR_XSPI_2XSFIF_SHIFT    (22U)
/*! xspi_2xsfif - XSPI 2x sample clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_XSPI_2XSFIF(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_XSPI_2XSFIF_SHIFT)) & CGU_CTRLSS_CLKENCLR_XSPI_2XSFIF_MASK)

#define CGU_CTRLSS_CLKENCLR_PMRC_MASK            (0x800000U)
#define CGU_CTRLSS_CLKENCLR_PMRC_SHIFT           (23U)
/*! pmrc - PMRC clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_PMRC(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_PMRC_SHIFT)) & CGU_CTRLSS_CLKENCLR_PMRC_MASK)

#define CGU_CTRLSS_CLKENCLR_MEM_CTRL_MASK        (0x1000000U)
#define CGU_CTRLSS_CLKENCLR_MEM_CTRL_SHIFT       (24U)
/*! mem_ctrl - Memory control clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_CLKENCLR_MEM_CTRL(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLKENCLR_MEM_CTRL_SHIFT)) & CGU_CTRLSS_CLKENCLR_MEM_CTRL_MASK)
/*! @} */

/*! @name CTRLSS_DS_CLKEN - Deepsleep CtrlSS module clock enable override.<br> The value of this register will be and'ed with the actual busclken to define the<br> setting during deepsleep. */
/*! @{ */

#define CGU_CTRLSS_DS_CLKEN_WDT_MASK             (0x1U)
#define CGU_CTRLSS_DS_CLKEN_WDT_SHIFT            (0U)
/*! WDT - Watch dog timer module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_WDT(x)               (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_WDT_SHIFT)) & CGU_CTRLSS_DS_CLKEN_WDT_MASK)

#define CGU_CTRLSS_DS_CLKEN_TPIU_TRACE_MASK      (0x2U)
#define CGU_CTRLSS_DS_CLKEN_TPIU_TRACE_SHIFT     (1U)
/*! tpiu_trace - TPIU trace module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_TPIU_TRACE(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_TPIU_TRACE_SHIFT)) & CGU_CTRLSS_DS_CLKEN_TPIU_TRACE_MASK)

#define CGU_CTRLSS_DS_CLKEN_UART_MASK            (0x4U)
#define CGU_CTRLSS_DS_CLKEN_UART_SHIFT           (2U)
/*! Uart - Uart module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_UART(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_UART_SHIFT)) & CGU_CTRLSS_DS_CLKEN_UART_MASK)

#define CGU_CTRLSS_DS_CLKEN_UTICK_MASK           (0x8U)
#define CGU_CTRLSS_DS_CLKEN_UTICK_SHIFT          (3U)
/*! utick - Utick module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_UTICK(x)             (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_UTICK_SHIFT)) & CGU_CTRLSS_DS_CLKEN_UTICK_MASK)

#define CGU_CTRLSS_DS_CLKEN_FREQ_MEAS_REF_MASK   (0x10U)
#define CGU_CTRLSS_DS_CLKEN_FREQ_MEAS_REF_SHIFT  (4U)
/*! freq_meas_ref - Freq. meas. reference input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_FREQ_MEAS_REF(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_FREQ_MEAS_REF_SHIFT)) & CGU_CTRLSS_DS_CLKEN_FREQ_MEAS_REF_MASK)

#define CGU_CTRLSS_DS_CLKEN_FREQ_MEAS_TARGET_MASK (0x20U)
#define CGU_CTRLSS_DS_CLKEN_FREQ_MEAS_TARGET_SHIFT (5U)
/*! freq_meas_target - Freq. meas. target input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_FREQ_MEAS_TARGET(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_FREQ_MEAS_TARGET_SHIFT)) & CGU_CTRLSS_DS_CLKEN_FREQ_MEAS_TARGET_MASK)

#define CGU_CTRLSS_DS_CLKEN_GDET_MASK            (0x40U)
#define CGU_CTRLSS_DS_CLKEN_GDET_SHIFT           (6U)
/*! GDet - GDet module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_GDET(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_GDET_SHIFT)) & CGU_CTRLSS_DS_CLKEN_GDET_MASK)

#define CGU_CTRLSS_DS_CLKEN_OS_TIMER_MASK        (0x80U)
#define CGU_CTRLSS_DS_CLKEN_OS_TIMER_SHIFT       (7U)
/*! OS_timer - OS timer module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_OS_TIMER(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_OS_TIMER_SHIFT)) & CGU_CTRLSS_DS_CLKEN_OS_TIMER_MASK)

#define CGU_CTRLSS_DS_CLKEN_CTIMER0_MASK         (0x100U)
#define CGU_CTRLSS_DS_CLKEN_CTIMER0_SHIFT        (8U)
/*! Ctimer0 - Ctimer0 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_CTIMER0(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_CTIMER0_SHIFT)) & CGU_CTRLSS_DS_CLKEN_CTIMER0_MASK)

#define CGU_CTRLSS_DS_CLKEN_CTIMER1_MASK         (0x200U)
#define CGU_CTRLSS_DS_CLKEN_CTIMER1_SHIFT        (9U)
/*! Ctimer1 - Ctimer1 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_CTIMER1(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_CTIMER1_SHIFT)) & CGU_CTRLSS_DS_CLKEN_CTIMER1_MASK)

#define CGU_CTRLSS_DS_CLKEN_CTIMER2_MASK         (0x400U)
#define CGU_CTRLSS_DS_CLKEN_CTIMER2_SHIFT        (10U)
/*! Ctimer2 - Ctimer2 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_CTIMER2(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_CTIMER2_SHIFT)) & CGU_CTRLSS_DS_CLKEN_CTIMER2_MASK)

#define CGU_CTRLSS_DS_CLKEN_CTIMER3_MASK         (0x800U)
#define CGU_CTRLSS_DS_CLKEN_CTIMER3_SHIFT        (11U)
/*! Ctimer3 - Ctimer3 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_CTIMER3(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_CTIMER3_SHIFT)) & CGU_CTRLSS_DS_CLKEN_CTIMER3_MASK)

#define CGU_CTRLSS_DS_CLKEN_CTIMER4_MASK         (0x1000U)
#define CGU_CTRLSS_DS_CLKEN_CTIMER4_SHIFT        (12U)
/*! Ctimer4 - Ctimer4 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_CTIMER4(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_CTIMER4_SHIFT)) & CGU_CTRLSS_DS_CLKEN_CTIMER4_MASK)

#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM0_MASK       (0x2000U)
#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM0_SHIFT      (13U)
/*! Flexcomm0 - Flexcomm0 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM0(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_DS_CLKEN_FLEXCOMM0_MASK)

#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM1_MASK       (0x4000U)
#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM1_SHIFT      (14U)
/*! Flexcomm1 - Flexcomm1 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM1(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_DS_CLKEN_FLEXCOMM1_MASK)

#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM2_MASK       (0x8000U)
#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM2_SHIFT      (15U)
/*! Flexcomm2 - Flexcomm2 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM2(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_DS_CLKEN_FLEXCOMM2_MASK)

#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM3_MASK       (0x10000U)
#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM3_SHIFT      (16U)
/*! Flexcomm3 - Flexcomm3 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM3(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_DS_CLKEN_FLEXCOMM3_MASK)

#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM4_MASK       (0x20000U)
#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM4_SHIFT      (17U)
/*! Flexcomm4 - Flexcomm4 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM4(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_DS_CLKEN_FLEXCOMM4_MASK)

#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM5_MASK       (0x40000U)
#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM5_SHIFT      (18U)
/*! Flexcomm5 - Flexcomm5 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_FLEXCOMM5(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_DS_CLKEN_FLEXCOMM5_MASK)

#define CGU_CTRLSS_DS_CLKEN_I3C_MASK             (0x80000U)
#define CGU_CTRLSS_DS_CLKEN_I3C_SHIFT            (19U)
/*! i3c - I3c module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_I3C(x)               (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_I3C_SHIFT)) & CGU_CTRLSS_DS_CLKEN_I3C_MASK)

#define CGU_CTRLSS_DS_CLKEN_XSPI_MASK            (0x100000U)
#define CGU_CTRLSS_DS_CLKEN_XSPI_SHIFT           (20U)
/*! xspi - XSPI module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_XSPI(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_XSPI_SHIFT)) & CGU_CTRLSS_DS_CLKEN_XSPI_MASK)

#define CGU_CTRLSS_DS_CLKEN_XSPI_SFIF_MASK       (0x200000U)
#define CGU_CTRLSS_DS_CLKEN_XSPI_SFIF_SHIFT      (21U)
/*! xspi_sfif - XSPI 1x sample clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_XSPI_SFIF(x)         (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_XSPI_SFIF_SHIFT)) & CGU_CTRLSS_DS_CLKEN_XSPI_SFIF_MASK)

#define CGU_CTRLSS_DS_CLKEN_XSPI_2XSFIF_MASK     (0x400000U)
#define CGU_CTRLSS_DS_CLKEN_XSPI_2XSFIF_SHIFT    (22U)
/*! xspi_2xsfif - XSPI 2x sample clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_XSPI_2XSFIF(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_XSPI_2XSFIF_SHIFT)) & CGU_CTRLSS_DS_CLKEN_XSPI_2XSFIF_MASK)

#define CGU_CTRLSS_DS_CLKEN_PMRC_MASK            (0x800000U)
#define CGU_CTRLSS_DS_CLKEN_PMRC_SHIFT           (23U)
/*! pmrc - PMRC clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_PMRC(x)              (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_PMRC_SHIFT)) & CGU_CTRLSS_DS_CLKEN_PMRC_MASK)

#define CGU_CTRLSS_DS_CLKEN_MEM_CTRL_MASK        (0x1000000U)
#define CGU_CTRLSS_DS_CLKEN_MEM_CTRL_SHIFT       (24U)
/*! mem_ctrl - Memory control clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKEN_MEM_CTRL(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKEN_MEM_CTRL_SHIFT)) & CGU_CTRLSS_DS_CLKEN_MEM_CTRL_MASK)
/*! @} */

/*! @name CTRLSS_DS_CLKENSET - Register to set bits in ctrlss_ds_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_CTRLSS_DS_CLKENSET_WDT_MASK          (0x1U)
#define CGU_CTRLSS_DS_CLKENSET_WDT_SHIFT         (0U)
/*! WDT - Watch dog timer module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_WDT(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_WDT_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_WDT_MASK)

#define CGU_CTRLSS_DS_CLKENSET_TPIU_TRACE_MASK   (0x2U)
#define CGU_CTRLSS_DS_CLKENSET_TPIU_TRACE_SHIFT  (1U)
/*! tpiu_trace - TPIU trace module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_TPIU_TRACE(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_TPIU_TRACE_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_TPIU_TRACE_MASK)

#define CGU_CTRLSS_DS_CLKENSET_UART_MASK         (0x4U)
#define CGU_CTRLSS_DS_CLKENSET_UART_SHIFT        (2U)
/*! Uart - Uart module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_UART(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_UART_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_UART_MASK)

#define CGU_CTRLSS_DS_CLKENSET_UTICK_MASK        (0x8U)
#define CGU_CTRLSS_DS_CLKENSET_UTICK_SHIFT       (3U)
/*! utick - Utick module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_UTICK(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_UTICK_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_UTICK_MASK)

#define CGU_CTRLSS_DS_CLKENSET_FREQ_MEAS_REF_MASK (0x10U)
#define CGU_CTRLSS_DS_CLKENSET_FREQ_MEAS_REF_SHIFT (4U)
/*! freq_meas_ref - Freq. meas. reference input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_FREQ_MEAS_REF(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_FREQ_MEAS_REF_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_FREQ_MEAS_REF_MASK)

#define CGU_CTRLSS_DS_CLKENSET_FREQ_MEAS_TARGET_MASK (0x20U)
#define CGU_CTRLSS_DS_CLKENSET_FREQ_MEAS_TARGET_SHIFT (5U)
/*! freq_meas_target - Freq. meas. target input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_FREQ_MEAS_TARGET(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_FREQ_MEAS_TARGET_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_FREQ_MEAS_TARGET_MASK)

#define CGU_CTRLSS_DS_CLKENSET_GDET_MASK         (0x40U)
#define CGU_CTRLSS_DS_CLKENSET_GDET_SHIFT        (6U)
/*! GDet - GDet module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_GDET(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_GDET_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_GDET_MASK)

#define CGU_CTRLSS_DS_CLKENSET_OS_TIMER_MASK     (0x80U)
#define CGU_CTRLSS_DS_CLKENSET_OS_TIMER_SHIFT    (7U)
/*! OS_timer - OS timer module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_OS_TIMER(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_OS_TIMER_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_OS_TIMER_MASK)

#define CGU_CTRLSS_DS_CLKENSET_CTIMER0_MASK      (0x100U)
#define CGU_CTRLSS_DS_CLKENSET_CTIMER0_SHIFT     (8U)
/*! Ctimer0 - Ctimer0 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_CTIMER0(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_CTIMER0_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_CTIMER0_MASK)

#define CGU_CTRLSS_DS_CLKENSET_CTIMER1_MASK      (0x200U)
#define CGU_CTRLSS_DS_CLKENSET_CTIMER1_SHIFT     (9U)
/*! Ctimer1 - Ctimer1 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_CTIMER1(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_CTIMER1_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_CTIMER1_MASK)

#define CGU_CTRLSS_DS_CLKENSET_CTIMER2_MASK      (0x400U)
#define CGU_CTRLSS_DS_CLKENSET_CTIMER2_SHIFT     (10U)
/*! Ctimer2 - Ctimer2 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_CTIMER2(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_CTIMER2_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_CTIMER2_MASK)

#define CGU_CTRLSS_DS_CLKENSET_CTIMER3_MASK      (0x800U)
#define CGU_CTRLSS_DS_CLKENSET_CTIMER3_SHIFT     (11U)
/*! Ctimer3 - Ctimer3 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_CTIMER3(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_CTIMER3_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_CTIMER3_MASK)

#define CGU_CTRLSS_DS_CLKENSET_CTIMER4_MASK      (0x1000U)
#define CGU_CTRLSS_DS_CLKENSET_CTIMER4_SHIFT     (12U)
/*! Ctimer4 - Ctimer4 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_CTIMER4(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_CTIMER4_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_CTIMER4_MASK)

#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM0_MASK    (0x2000U)
#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM0_SHIFT   (13U)
/*! Flexcomm0 - Flexcomm0 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM0(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_FLEXCOMM0_MASK)

#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM1_MASK    (0x4000U)
#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM1_SHIFT   (14U)
/*! Flexcomm1 - Flexcomm1 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM1(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_FLEXCOMM1_MASK)

#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM2_MASK    (0x8000U)
#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM2_SHIFT   (15U)
/*! Flexcomm2 - Flexcomm2 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM2(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_FLEXCOMM2_MASK)

#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM3_MASK    (0x10000U)
#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM3_SHIFT   (16U)
/*! Flexcomm3 - Flexcomm3 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM3(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_FLEXCOMM3_MASK)

#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM4_MASK    (0x20000U)
#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM4_SHIFT   (17U)
/*! Flexcomm4 - Flexcomm4 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM4(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_FLEXCOMM4_MASK)

#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM5_MASK    (0x40000U)
#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM5_SHIFT   (18U)
/*! Flexcomm5 - Flexcomm5 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_FLEXCOMM5(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_FLEXCOMM5_MASK)

#define CGU_CTRLSS_DS_CLKENSET_I3C_MASK          (0x80000U)
#define CGU_CTRLSS_DS_CLKENSET_I3C_SHIFT         (19U)
/*! i3c - I3c module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_I3C(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_I3C_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_I3C_MASK)

#define CGU_CTRLSS_DS_CLKENSET_XSPI_MASK         (0x100000U)
#define CGU_CTRLSS_DS_CLKENSET_XSPI_SHIFT        (20U)
/*! xspi - XSPI module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_XSPI(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_XSPI_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_XSPI_MASK)

#define CGU_CTRLSS_DS_CLKENSET_XSPI_SFIF_MASK    (0x200000U)
#define CGU_CTRLSS_DS_CLKENSET_XSPI_SFIF_SHIFT   (21U)
/*! xspi_sfif - XSPI 1x sample clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_XSPI_SFIF(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_XSPI_SFIF_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_XSPI_SFIF_MASK)

#define CGU_CTRLSS_DS_CLKENSET_XSPI_2XSFIF_MASK  (0x400000U)
#define CGU_CTRLSS_DS_CLKENSET_XSPI_2XSFIF_SHIFT (22U)
/*! xspi_2xsfif - XSPI 2x sample clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_XSPI_2XSFIF(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_XSPI_2XSFIF_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_XSPI_2XSFIF_MASK)

#define CGU_CTRLSS_DS_CLKENSET_PMRC_MASK         (0x800000U)
#define CGU_CTRLSS_DS_CLKENSET_PMRC_SHIFT        (23U)
/*! pmrc - PMRC clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_PMRC(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_PMRC_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_PMRC_MASK)

#define CGU_CTRLSS_DS_CLKENSET_MEM_CTRL_MASK     (0x1000000U)
#define CGU_CTRLSS_DS_CLKENSET_MEM_CTRL_SHIFT    (24U)
/*! mem_ctrl - Memory control clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENSET_MEM_CTRL(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENSET_MEM_CTRL_SHIFT)) & CGU_CTRLSS_DS_CLKENSET_MEM_CTRL_MASK)
/*! @} */

/*! @name CTRLSS_DS_CLKENCLR - Register to clear bits in ctrlss_ds_clkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_CTRLSS_DS_CLKENCLR_WDT_MASK          (0x1U)
#define CGU_CTRLSS_DS_CLKENCLR_WDT_SHIFT         (0U)
/*! WDT - Watch dog timer module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_WDT(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_WDT_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_WDT_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_TPIU_TRACE_MASK   (0x2U)
#define CGU_CTRLSS_DS_CLKENCLR_TPIU_TRACE_SHIFT  (1U)
/*! tpiu_trace - TPIU trace module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_TPIU_TRACE(x)     (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_TPIU_TRACE_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_TPIU_TRACE_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_UART_MASK         (0x4U)
#define CGU_CTRLSS_DS_CLKENCLR_UART_SHIFT        (2U)
/*! Uart - Uart module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_UART(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_UART_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_UART_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_UTICK_MASK        (0x8U)
#define CGU_CTRLSS_DS_CLKENCLR_UTICK_SHIFT       (3U)
/*! utick - Utick module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_UTICK(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_UTICK_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_UTICK_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_FREQ_MEAS_REF_MASK (0x10U)
#define CGU_CTRLSS_DS_CLKENCLR_FREQ_MEAS_REF_SHIFT (4U)
/*! freq_meas_ref - Freq. meas. reference input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_FREQ_MEAS_REF(x)  (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_FREQ_MEAS_REF_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_FREQ_MEAS_REF_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_FREQ_MEAS_TARGET_MASK (0x20U)
#define CGU_CTRLSS_DS_CLKENCLR_FREQ_MEAS_TARGET_SHIFT (5U)
/*! freq_meas_target - Freq. meas. target input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_FREQ_MEAS_TARGET(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_FREQ_MEAS_TARGET_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_FREQ_MEAS_TARGET_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_GDET_MASK         (0x40U)
#define CGU_CTRLSS_DS_CLKENCLR_GDET_SHIFT        (6U)
/*! GDet - GDet module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_GDET(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_GDET_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_GDET_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_OS_TIMER_MASK     (0x80U)
#define CGU_CTRLSS_DS_CLKENCLR_OS_TIMER_SHIFT    (7U)
/*! OS_timer - OS timer module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_OS_TIMER(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_OS_TIMER_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_OS_TIMER_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_CTIMER0_MASK      (0x100U)
#define CGU_CTRLSS_DS_CLKENCLR_CTIMER0_SHIFT     (8U)
/*! Ctimer0 - Ctimer0 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_CTIMER0(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_CTIMER0_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_CTIMER0_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_CTIMER1_MASK      (0x200U)
#define CGU_CTRLSS_DS_CLKENCLR_CTIMER1_SHIFT     (9U)
/*! Ctimer1 - Ctimer1 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_CTIMER1(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_CTIMER1_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_CTIMER1_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_CTIMER2_MASK      (0x400U)
#define CGU_CTRLSS_DS_CLKENCLR_CTIMER2_SHIFT     (10U)
/*! Ctimer2 - Ctimer2 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_CTIMER2(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_CTIMER2_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_CTIMER2_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_CTIMER3_MASK      (0x800U)
#define CGU_CTRLSS_DS_CLKENCLR_CTIMER3_SHIFT     (11U)
/*! Ctimer3 - Ctimer3 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_CTIMER3(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_CTIMER3_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_CTIMER3_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_CTIMER4_MASK      (0x1000U)
#define CGU_CTRLSS_DS_CLKENCLR_CTIMER4_SHIFT     (12U)
/*! Ctimer4 - Ctimer4 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_CTIMER4(x)        (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_CTIMER4_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_CTIMER4_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM0_MASK    (0x2000U)
#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM0_SHIFT   (13U)
/*! Flexcomm0 - Flexcomm0 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM0(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM0_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM0_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM1_MASK    (0x4000U)
#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM1_SHIFT   (14U)
/*! Flexcomm1 - Flexcomm1 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM1(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM1_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM1_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM2_MASK    (0x8000U)
#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM2_SHIFT   (15U)
/*! Flexcomm2 - Flexcomm2 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM2(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM2_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM2_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM3_MASK    (0x10000U)
#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM3_SHIFT   (16U)
/*! Flexcomm3 - Flexcomm3 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM3(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM3_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM3_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM4_MASK    (0x20000U)
#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM4_SHIFT   (17U)
/*! Flexcomm4 - Flexcomm4 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM4(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM4_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM4_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM5_MASK    (0x40000U)
#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM5_SHIFT   (18U)
/*! Flexcomm5 - Flexcomm5 module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM5(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM5_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_FLEXCOMM5_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_I3C_MASK          (0x80000U)
#define CGU_CTRLSS_DS_CLKENCLR_I3C_SHIFT         (19U)
/*! i3c - I3c module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_I3C(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_I3C_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_I3C_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_XSPI_MASK         (0x100000U)
#define CGU_CTRLSS_DS_CLKENCLR_XSPI_SHIFT        (20U)
/*! xspi - XSPI module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_XSPI(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_XSPI_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_XSPI_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_XSPI_SFIF_MASK    (0x200000U)
#define CGU_CTRLSS_DS_CLKENCLR_XSPI_SFIF_SHIFT   (21U)
/*! xspi_sfif - XSPI 1x sample clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_XSPI_SFIF(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_XSPI_SFIF_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_XSPI_SFIF_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_XSPI_2XSFIF_MASK  (0x400000U)
#define CGU_CTRLSS_DS_CLKENCLR_XSPI_2XSFIF_SHIFT (22U)
/*! xspi_2xsfif - XSPI 2x sample clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_XSPI_2XSFIF(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_XSPI_2XSFIF_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_XSPI_2XSFIF_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_PMRC_MASK         (0x800000U)
#define CGU_CTRLSS_DS_CLKENCLR_PMRC_SHIFT        (23U)
/*! pmrc - PMRC clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_PMRC(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_PMRC_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_PMRC_MASK)

#define CGU_CTRLSS_DS_CLKENCLR_MEM_CTRL_MASK     (0x1000000U)
#define CGU_CTRLSS_DS_CLKENCLR_MEM_CTRL_SHIFT    (24U)
/*! mem_ctrl - Memory control clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_CTRLSS_DS_CLKENCLR_MEM_CTRL(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_DS_CLKENCLR_MEM_CTRL_SHIFT)) & CGU_CTRLSS_DS_CLKENCLR_MEM_CTRL_MASK)
/*! @} */

/*! @name CTRLSS_CLK_GATE_OVERRIDE - Automatic clock gating overrule configuration register. */
/*! @{ */

#define CGU_CTRLSS_CLK_GATE_OVERRIDE_ROM_MASK    (0x1U)
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_ROM_SHIFT   (0U)
/*! rom - Overrule for the automatic clock gating of ROM controller
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_ROM(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLK_GATE_OVERRIDE_ROM_SHIFT)) & CGU_CTRLSS_CLK_GATE_OVERRIDE_ROM_MASK)

#define CGU_CTRLSS_CLK_GATE_OVERRIDE_PKC_MASK    (0x2U)
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_PKC_SHIFT   (1U)
/*! pkc - Overrule for the automatic clock gating of PKC RAM controller
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_PKC(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLK_GATE_OVERRIDE_PKC_SHIFT)) & CGU_CTRLSS_CLK_GATE_OVERRIDE_PKC_MASK)

#define CGU_CTRLSS_CLK_GATE_OVERRIDE_AHB2VPB0_MASK (0x4U)
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_AHB2VPB0_SHIFT (2U)
/*! ahb2vpb0 - Overrule for the automatic clock gating of AHB2VPB0 bridge
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_AHB2VPB0(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLK_GATE_OVERRIDE_AHB2VPB0_SHIFT)) & CGU_CTRLSS_CLK_GATE_OVERRIDE_AHB2VPB0_MASK)

#define CGU_CTRLSS_CLK_GATE_OVERRIDE_AHB2VPB1_MASK (0x8U)
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_AHB2VPB1_SHIFT (3U)
/*! ahb2vpb1 - Overrule for the automatic clock gating of AHB2VPB1 bridge
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_AHB2VPB1(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLK_GATE_OVERRIDE_AHB2VPB1_SHIFT)) & CGU_CTRLSS_CLK_GATE_OVERRIDE_AHB2VPB1_MASK)

#define CGU_CTRLSS_CLK_GATE_OVERRIDE_SDMA0_MASK  (0x10U)
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_SDMA0_SHIFT (4U)
/*! sdma0 - Overrule for the automatic clock gating of SDMA0
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_SDMA0(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLK_GATE_OVERRIDE_SDMA0_SHIFT)) & CGU_CTRLSS_CLK_GATE_OVERRIDE_SDMA0_MASK)

#define CGU_CTRLSS_CLK_GATE_OVERRIDE_CRC_MASK    (0x20U)
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_CRC_SHIFT   (5U)
/*! crc - Overrule for the automatic clock gating of CRC generator
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_CRC(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLK_GATE_OVERRIDE_CRC_SHIFT)) & CGU_CTRLSS_CLK_GATE_OVERRIDE_CRC_MASK)

#define CGU_CTRLSS_CLK_GATE_OVERRIDE_SDMA1_MASK  (0x40U)
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_SDMA1_SHIFT (6U)
/*! sdma1 - Overrule for the automatic clock gating of SDMA1
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_SDMA1(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLK_GATE_OVERRIDE_SDMA1_SHIFT)) & CGU_CTRLSS_CLK_GATE_OVERRIDE_SDMA1_MASK)

#define CGU_CTRLSS_CLK_GATE_OVERRIDE_DEBUG_MASK  (0x80U)
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_DEBUG_SHIFT (7U)
/*! debug - Overrule for the automatic clock gating of Debug CLK (DBG_CLK)
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_DEBUG(x)    (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLK_GATE_OVERRIDE_DEBUG_SHIFT)) & CGU_CTRLSS_CLK_GATE_OVERRIDE_DEBUG_MASK)

#define CGU_CTRLSS_CLK_GATE_OVERRIDE_NIC_MASK    (0x100U)
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_NIC_SHIFT   (8U)
/*! nic - Overrule for the automatic clock gating of the AXI bus infrastructure. While the clock
 *    gating is handled in the CGU, the signal is needed in CSS to connect to the Q-channel controller.
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_NIC(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLK_GATE_OVERRIDE_NIC_SHIFT)) & CGU_CTRLSS_CLK_GATE_OVERRIDE_NIC_MASK)

#define CGU_CTRLSS_CLK_GATE_OVERRIDE_MTR_MASK    (0x8000000U)
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_MTR_SHIFT   (27U)
/*! mtr - Overrule for the automatic clock gating for the MTR.
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_MTR(x)      (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLK_GATE_OVERRIDE_MTR_SHIFT)) & CGU_CTRLSS_CLK_GATE_OVERRIDE_MTR_MASK)

#define CGU_CTRLSS_CLK_GATE_OVERRIDE_PART1_MTR_MASK (0x10000000U)
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_PART1_MTR_SHIFT (28U)
/*! part1_mtr - Overrule for the automatic clock gating for of part1 of the MTR.
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_PART1_MTR(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLK_GATE_OVERRIDE_PART1_MTR_SHIFT)) & CGU_CTRLSS_CLK_GATE_OVERRIDE_PART1_MTR_MASK)

#define CGU_CTRLSS_CLK_GATE_OVERRIDE_PART2_MTR_MASK (0x20000000U)
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_PART2_MTR_SHIFT (29U)
/*! part2_mtr - Overrule for the automatic clock gating for of part2 of the MTR.
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_PART2_MTR(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLK_GATE_OVERRIDE_PART2_MTR_SHIFT)) & CGU_CTRLSS_CLK_GATE_OVERRIDE_PART2_MTR_MASK)

#define CGU_CTRLSS_CLK_GATE_OVERRIDE_PART3_MTR_MASK (0x40000000U)
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_PART3_MTR_SHIFT (30U)
/*! part3_mtr - Overrule for the automatic clock gating for of part3 of the MTR.
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_PART3_MTR(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLK_GATE_OVERRIDE_PART3_MTR_SHIFT)) & CGU_CTRLSS_CLK_GATE_OVERRIDE_PART3_MTR_MASK)

#define CGU_CTRLSS_CLK_GATE_OVERRIDE_PART4_MTR_MASK (0x80000000U)
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_PART4_MTR_SHIFT (31U)
/*! part4_mtr - Overrule for the automatic clock gating for of part4 of the MTR.
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_CTRLSS_CLK_GATE_OVERRIDE_PART4_MTR(x) (((uint32_t)(((uint32_t)(x)) << CGU_CTRLSS_CLK_GATE_OVERRIDE_PART4_MTR_SHIFT)) & CGU_CTRLSS_CLK_GATE_OVERRIDE_PART4_MTR_MASK)
/*! @} */

/*! @name ADSS_CLKCFG_MAIN - DSP clock configuration */
/*! @{ */

#define CGU_ADSS_CLKCFG_MAIN_DSP_CLKDIV_MASK     (0xFFFFU)
#define CGU_ADSS_CLKCFG_MAIN_DSP_CLKDIV_SHIFT    (0U)
/*! dsp_clkdiv - DSP main clock divider setting. */
#define CGU_ADSS_CLKCFG_MAIN_DSP_CLKDIV(x)       (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKCFG_MAIN_DSP_CLKDIV_SHIFT)) & CGU_ADSS_CLKCFG_MAIN_DSP_CLKDIV_MASK)

#define CGU_ADSS_CLKCFG_MAIN_HSI_CLKDIV_MASK     (0xFFFF0000U)
#define CGU_ADSS_CLKCFG_MAIN_HSI_CLKDIV_SHIFT    (16U)
/*! hsi_clkdiv - HSI clock divider setting. */
#define CGU_ADSS_CLKCFG_MAIN_HSI_CLKDIV(x)       (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKCFG_MAIN_HSI_CLKDIV_SHIFT)) & CGU_ADSS_CLKCFG_MAIN_HSI_CLKDIV_MASK)
/*! @} */

/*! @name ADSS_CLKCFG_ANC - ANC clock configuration */
/*! @{ */

#define CGU_ADSS_CLKCFG_ANC_CODEC_SYNC_CLKDIV_MASK (0xFU)
#define CGU_ADSS_CLKCFG_ANC_CODEC_SYNC_CLKDIV_SHIFT (0U)
/*! codec_sync_clkdiv - ANC codec sync clock divider setting. */
#define CGU_ADSS_CLKCFG_ANC_CODEC_SYNC_CLKDIV(x) (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKCFG_ANC_CODEC_SYNC_CLKDIV_SHIFT)) & CGU_ADSS_CLKCFG_ANC_CODEC_SYNC_CLKDIV_MASK)

#define CGU_ADSS_CLKCFG_ANC_CODEC_128FS_CLKDIV_MASK (0xFF0U)
#define CGU_ADSS_CLKCFG_ANC_CODEC_128FS_CLKDIV_SHIFT (4U)
/*! codec_128fs_clkdiv - 128Fs clock divider setting. */
#define CGU_ADSS_CLKCFG_ANC_CODEC_128FS_CLKDIV(x) (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKCFG_ANC_CODEC_128FS_CLKDIV_SHIFT)) & CGU_ADSS_CLKCFG_ANC_CODEC_128FS_CLKDIV_MASK)
/*! @} */

/*! @name ADSS_CLKCFG_DMIC - DMIC clock configuration */
/*! @{ */

#define CGU_ADSS_CLKCFG_DMIC_DMIC0_CLKDIV_MASK   (0xFFU)
#define CGU_ADSS_CLKCFG_DMIC_DMIC0_CLKDIV_SHIFT  (0U)
/*! dmic0_clkdiv - DMIC0 clock divider setting. */
#define CGU_ADSS_CLKCFG_DMIC_DMIC0_CLKDIV(x)     (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKCFG_DMIC_DMIC0_CLKDIV_SHIFT)) & CGU_ADSS_CLKCFG_DMIC_DMIC0_CLKDIV_MASK)

#define CGU_ADSS_CLKCFG_DMIC_DMIC1_CLKDIV_MASK   (0xFF00U)
#define CGU_ADSS_CLKCFG_DMIC_DMIC1_CLKDIV_SHIFT  (8U)
/*! dmic1_clkdiv - DMIC1 clock divider setting. */
#define CGU_ADSS_CLKCFG_DMIC_DMIC1_CLKDIV(x)     (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKCFG_DMIC_DMIC1_CLKDIV_SHIFT)) & CGU_ADSS_CLKCFG_DMIC_DMIC1_CLKDIV_MASK)

#define CGU_ADSS_CLKCFG_DMIC_DMIC2_CLKDIV_MASK   (0xFF0000U)
#define CGU_ADSS_CLKCFG_DMIC_DMIC2_CLKDIV_SHIFT  (16U)
/*! dmic2_clkdiv - DMIC2 clock divider setting. */
#define CGU_ADSS_CLKCFG_DMIC_DMIC2_CLKDIV(x)     (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKCFG_DMIC_DMIC2_CLKDIV_SHIFT)) & CGU_ADSS_CLKCFG_DMIC_DMIC2_CLKDIV_MASK)

#define CGU_ADSS_CLKCFG_DMIC_DMIC3_CLKDIV_MASK   (0xFF000000U)
#define CGU_ADSS_CLKCFG_DMIC_DMIC3_CLKDIV_SHIFT  (24U)
/*! dmic3_clkdiv - DMIC3 clock divider setting. */
#define CGU_ADSS_CLKCFG_DMIC_DMIC3_CLKDIV(x)     (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKCFG_DMIC_DMIC3_CLKDIV_SHIFT)) & CGU_ADSS_CLKCFG_DMIC_DMIC3_CLKDIV_MASK)
/*! @} */

/*! @name ADSS_PERIPH_CLKCFG0 - ADSS peripherals clock configuration */
/*! @{ */

#define CGU_ADSS_PERIPH_CLKCFG0_SYNC_SRC_CLKDIV_MASK (0xFFU)
#define CGU_ADSS_PERIPH_CLKCFG0_SYNC_SRC_CLKDIV_SHIFT (0U)
/*! sync_src_clkdiv - Sync-source clock divider setting. */
#define CGU_ADSS_PERIPH_CLKCFG0_SYNC_SRC_CLKDIV(x) (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_PERIPH_CLKCFG0_SYNC_SRC_CLKDIV_SHIFT)) & CGU_ADSS_PERIPH_CLKCFG0_SYNC_SRC_CLKDIV_MASK)

#define CGU_ADSS_PERIPH_CLKCFG0_UART_CLKDIV_MASK (0xFFFF00U)
#define CGU_ADSS_PERIPH_CLKCFG0_UART_CLKDIV_SHIFT (8U)
/*! uart_clkdiv - SDMAC clock divider setting. */
#define CGU_ADSS_PERIPH_CLKCFG0_UART_CLKDIV(x)   (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_PERIPH_CLKCFG0_UART_CLKDIV_SHIFT)) & CGU_ADSS_PERIPH_CLKCFG0_UART_CLKDIV_MASK)

#define CGU_ADSS_PERIPH_CLKCFG0_SDMA_CLKDIV_MASK (0xFF000000U)
#define CGU_ADSS_PERIPH_CLKCFG0_SDMA_CLKDIV_SHIFT (24U)
/*! sdma_clkdiv - SDMA clock divider setting. */
#define CGU_ADSS_PERIPH_CLKCFG0_SDMA_CLKDIV(x)   (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_PERIPH_CLKCFG0_SDMA_CLKDIV_SHIFT)) & CGU_ADSS_PERIPH_CLKCFG0_SDMA_CLKDIV_MASK)
/*! @} */

/*! @name ADSS_PERIPH_CLKCFG1 - ADSS peripheral clock configuration */
/*! @{ */

#define CGU_ADSS_PERIPH_CLKCFG1_TIMER_CLKDIV_MASK (0xFFU)
#define CGU_ADSS_PERIPH_CLKCFG1_TIMER_CLKDIV_SHIFT (0U)
/*! timer_clkdiv - Timer clock divider setting. */
#define CGU_ADSS_PERIPH_CLKCFG1_TIMER_CLKDIV(x)  (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_PERIPH_CLKCFG1_TIMER_CLKDIV_SHIFT)) & CGU_ADSS_PERIPH_CLKCFG1_TIMER_CLKDIV_MASK)

#define CGU_ADSS_PERIPH_CLKCFG1_MC_TIMER_CLKDIV_MASK (0xFF00U)
#define CGU_ADSS_PERIPH_CLKCFG1_MC_TIMER_CLKDIV_SHIFT (8U)
/*! mc_timer_clkdiv - MC timer clock divider setting. */
#define CGU_ADSS_PERIPH_CLKCFG1_MC_TIMER_CLKDIV(x) (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_PERIPH_CLKCFG1_MC_TIMER_CLKDIV_SHIFT)) & CGU_ADSS_PERIPH_CLKCFG1_MC_TIMER_CLKDIV_MASK)

#define CGU_ADSS_PERIPH_CLKCFG1_WATCHDOG_CLKDIV_MASK (0xFF0000U)
#define CGU_ADSS_PERIPH_CLKCFG1_WATCHDOG_CLKDIV_SHIFT (16U)
/*! watchdog_clkdiv - Watchdog clock divider setting. */
#define CGU_ADSS_PERIPH_CLKCFG1_WATCHDOG_CLKDIV(x) (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_PERIPH_CLKCFG1_WATCHDOG_CLKDIV_SHIFT)) & CGU_ADSS_PERIPH_CLKCFG1_WATCHDOG_CLKDIV_MASK)
/*! @} */

/*! @name ADSS_CLKSEL - ADSS modules clock source selection. */
/*! @{ */

#define CGU_ADSS_CLKSEL_MAIN_MASK                (0x3U)
#define CGU_ADSS_CLKSEL_MAIN_SHIFT               (0U)
/*! Main - Clock source selection for the ADSS main clock.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_ADSS_CLKSEL_MAIN(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKSEL_MAIN_SHIFT)) & CGU_ADSS_CLKSEL_MAIN_MASK)

#define CGU_ADSS_CLKSEL_CODEC_128FS_MASK         (0xCU)
#define CGU_ADSS_CLKSEL_CODEC_128FS_SHIFT        (2U)
/*! codec_128fs - Clock source selection for the ADSS 128fs clock.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_ADSS_CLKSEL_CODEC_128FS(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKSEL_CODEC_128FS_SHIFT)) & CGU_ADSS_CLKSEL_CODEC_128FS_MASK)
/*! @} */

/*! @name ADSS_DP_CLKSEL - ADSS dataport clock source selection. */
/*! @{ */

#define CGU_ADSS_DP_CLKSEL_DP0_INT_SRC_MASK      (0x3U)
#define CGU_ADSS_DP_CLKSEL_DP0_INT_SRC_SHIFT     (0U)
/*! dp0_int_src - Clock source selection for the ADSS dataport0 clock.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_ADSS_DP_CLKSEL_DP0_INT_SRC(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DP_CLKSEL_DP0_INT_SRC_SHIFT)) & CGU_ADSS_DP_CLKSEL_DP0_INT_SRC_MASK)

#define CGU_ADSS_DP_CLKSEL_DP0_EXT_SEL_MASK      (0x4U)
#define CGU_ADSS_DP_CLKSEL_DP0_EXT_SEL_SHIFT     (2U)
/*! dp0_ext_sel - Select to use the pad-clock (external) or cgu-clock (internal) as module clock source.
 *  0b0..Use the internal generated clock.
 *  0b1..Use the PAD-based clock.
 */
#define CGU_ADSS_DP_CLKSEL_DP0_EXT_SEL(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DP_CLKSEL_DP0_EXT_SEL_SHIFT)) & CGU_ADSS_DP_CLKSEL_DP0_EXT_SEL_MASK)

#define CGU_ADSS_DP_CLKSEL_DP1_INT_SRC_MASK      (0x18U)
#define CGU_ADSS_DP_CLKSEL_DP1_INT_SRC_SHIFT     (3U)
/*! dp1_int_src - Clock source selection for the ADSS dataport1 clock.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_ADSS_DP_CLKSEL_DP1_INT_SRC(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DP_CLKSEL_DP1_INT_SRC_SHIFT)) & CGU_ADSS_DP_CLKSEL_DP1_INT_SRC_MASK)

#define CGU_ADSS_DP_CLKSEL_DP1_EXT_SEL_MASK      (0x20U)
#define CGU_ADSS_DP_CLKSEL_DP1_EXT_SEL_SHIFT     (5U)
/*! dp1_ext_sel - Select to use the pad-clock (external) or cgu-clock (internal) as module clock source.
 *  0b0..Use the internal generated clock.
 *  0b1..Use the PAD-based clock.
 */
#define CGU_ADSS_DP_CLKSEL_DP1_EXT_SEL(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DP_CLKSEL_DP1_EXT_SEL_SHIFT)) & CGU_ADSS_DP_CLKSEL_DP1_EXT_SEL_MASK)

#define CGU_ADSS_DP_CLKSEL_DP2_INT_SRC_MASK      (0xC0U)
#define CGU_ADSS_DP_CLKSEL_DP2_INT_SRC_SHIFT     (6U)
/*! dp2_int_src - Clock source selection for the ADSS dataport2 clock.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_ADSS_DP_CLKSEL_DP2_INT_SRC(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DP_CLKSEL_DP2_INT_SRC_SHIFT)) & CGU_ADSS_DP_CLKSEL_DP2_INT_SRC_MASK)

#define CGU_ADSS_DP_CLKSEL_DP2_EXT_SEL_MASK      (0x100U)
#define CGU_ADSS_DP_CLKSEL_DP2_EXT_SEL_SHIFT     (8U)
/*! dp2_ext_sel - Select to use the pad-clock (external) or cgu-clock (internal) as module clock source.
 *  0b0..Use the internal generated clock.
 *  0b1..Use the PAD-based clock.
 */
#define CGU_ADSS_DP_CLKSEL_DP2_EXT_SEL(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DP_CLKSEL_DP2_EXT_SEL_SHIFT)) & CGU_ADSS_DP_CLKSEL_DP2_EXT_SEL_MASK)

#define CGU_ADSS_DP_CLKSEL_DP3_INT_SRC_MASK      (0x600U)
#define CGU_ADSS_DP_CLKSEL_DP3_INT_SRC_SHIFT     (9U)
/*! dp3_int_src - Clock source selection for the ADSS dataport3 clock.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_ADSS_DP_CLKSEL_DP3_INT_SRC(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DP_CLKSEL_DP3_INT_SRC_SHIFT)) & CGU_ADSS_DP_CLKSEL_DP3_INT_SRC_MASK)

#define CGU_ADSS_DP_CLKSEL_DP3_EXT_SEL_MASK      (0x800U)
#define CGU_ADSS_DP_CLKSEL_DP3_EXT_SEL_SHIFT     (11U)
/*! dp3_ext_sel - Select to use the pad-clock (external) or cgu-clock (internal) as module clock source.
 *  0b0..Use the internal generated clock.
 *  0b1..Use the PAD-based clock.
 */
#define CGU_ADSS_DP_CLKSEL_DP3_EXT_SEL(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DP_CLKSEL_DP3_EXT_SEL_SHIFT)) & CGU_ADSS_DP_CLKSEL_DP3_EXT_SEL_MASK)
/*! @} */

/*! @name ADSS_DMIC_CLKSEL - ADSS dmic modules clock source selection. */
/*! @{ */

#define CGU_ADSS_DMIC_CLKSEL_DMIC0_EXT_SEL_MASK  (0x1U)
#define CGU_ADSS_DMIC_CLKSEL_DMIC0_EXT_SEL_SHIFT (0U)
/*! dmic0_ext_sel - Select to use the pad-clock (external) or cgu-clock (internal) as module clock source.
 *  0b0..Use the internal generated clock.
 *  0b1..Use the PAD-based clock.
 */
#define CGU_ADSS_DMIC_CLKSEL_DMIC0_EXT_SEL(x)    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DMIC_CLKSEL_DMIC0_EXT_SEL_SHIFT)) & CGU_ADSS_DMIC_CLKSEL_DMIC0_EXT_SEL_MASK)

#define CGU_ADSS_DMIC_CLKSEL_DMIC0_PAD_SRC_MASK  (0x6U)
#define CGU_ADSS_DMIC_CLKSEL_DMIC0_PAD_SRC_SHIFT (1U)
/*! dmic0_pad_src - Selects which dmic clock pad will be used as external clock source.
 *  0b00..Use the clock from dmic0.
 *  0b01..Use the clock from dmic1.
 *  0b10..Use the clock from dmic2.
 *  0b11..Use the clock from dmic3.
 */
#define CGU_ADSS_DMIC_CLKSEL_DMIC0_PAD_SRC(x)    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DMIC_CLKSEL_DMIC0_PAD_SRC_SHIFT)) & CGU_ADSS_DMIC_CLKSEL_DMIC0_PAD_SRC_MASK)

#define CGU_ADSS_DMIC_CLKSEL_DMIC0_INT_SRC_MASK  (0x18U)
#define CGU_ADSS_DMIC_CLKSEL_DMIC0_INT_SRC_SHIFT (3U)
/*! dmic0_int_src - Clock source selection for the ADSS dmic0 clock.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_ADSS_DMIC_CLKSEL_DMIC0_INT_SRC(x)    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DMIC_CLKSEL_DMIC0_INT_SRC_SHIFT)) & CGU_ADSS_DMIC_CLKSEL_DMIC0_INT_SRC_MASK)

#define CGU_ADSS_DMIC_CLKSEL_DMIC1_EXT_SEL_MASK  (0x20U)
#define CGU_ADSS_DMIC_CLKSEL_DMIC1_EXT_SEL_SHIFT (5U)
/*! dmic1_ext_sel - Select to use the pad-clock (external) or cgu-clock (internal) as module clock source.
 *  0b0..Use the internal generated clock.
 *  0b1..Use the PAD-based clock.
 */
#define CGU_ADSS_DMIC_CLKSEL_DMIC1_EXT_SEL(x)    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DMIC_CLKSEL_DMIC1_EXT_SEL_SHIFT)) & CGU_ADSS_DMIC_CLKSEL_DMIC1_EXT_SEL_MASK)

#define CGU_ADSS_DMIC_CLKSEL_DMIC1_PAD_SRC_MASK  (0xC0U)
#define CGU_ADSS_DMIC_CLKSEL_DMIC1_PAD_SRC_SHIFT (6U)
/*! dmic1_pad_src - Selects which dmic clock pad will be used as external clock source.
 *  0b00..Use the clock from dmic0.
 *  0b01..Use the clock from dmic1.
 *  0b10..Use the clock from dmic2.
 *  0b11..Use the clock from dmic3.
 */
#define CGU_ADSS_DMIC_CLKSEL_DMIC1_PAD_SRC(x)    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DMIC_CLKSEL_DMIC1_PAD_SRC_SHIFT)) & CGU_ADSS_DMIC_CLKSEL_DMIC1_PAD_SRC_MASK)

#define CGU_ADSS_DMIC_CLKSEL_DMIC1_INT_SRC_MASK  (0x300U)
#define CGU_ADSS_DMIC_CLKSEL_DMIC1_INT_SRC_SHIFT (8U)
/*! dmic1_int_src - Clock source selection for the ADSS dmic1 clock.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_ADSS_DMIC_CLKSEL_DMIC1_INT_SRC(x)    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DMIC_CLKSEL_DMIC1_INT_SRC_SHIFT)) & CGU_ADSS_DMIC_CLKSEL_DMIC1_INT_SRC_MASK)

#define CGU_ADSS_DMIC_CLKSEL_DMIC2_EXT_SEL_MASK  (0x400U)
#define CGU_ADSS_DMIC_CLKSEL_DMIC2_EXT_SEL_SHIFT (10U)
/*! dmic2_ext_sel - Select to use the pad-clock (external) or cgu-clock (internal) as module clock source.
 *  0b0..Use the internal generated clock.
 *  0b1..Use the PAD-based clock.
 */
#define CGU_ADSS_DMIC_CLKSEL_DMIC2_EXT_SEL(x)    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DMIC_CLKSEL_DMIC2_EXT_SEL_SHIFT)) & CGU_ADSS_DMIC_CLKSEL_DMIC2_EXT_SEL_MASK)

#define CGU_ADSS_DMIC_CLKSEL_DMIC2_PAD_SRC_MASK  (0x1800U)
#define CGU_ADSS_DMIC_CLKSEL_DMIC2_PAD_SRC_SHIFT (11U)
/*! dmic2_pad_src - Selects which dmic clock pad will be used as external clock source.
 *  0b00..Use the clock from dmic0.
 *  0b01..Use the clock from dmic1.
 *  0b10..Use the clock from dmic2.
 *  0b11..Use the clock from dmic3.
 */
#define CGU_ADSS_DMIC_CLKSEL_DMIC2_PAD_SRC(x)    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DMIC_CLKSEL_DMIC2_PAD_SRC_SHIFT)) & CGU_ADSS_DMIC_CLKSEL_DMIC2_PAD_SRC_MASK)

#define CGU_ADSS_DMIC_CLKSEL_DMIC2_INT_SRC_MASK  (0x6000U)
#define CGU_ADSS_DMIC_CLKSEL_DMIC2_INT_SRC_SHIFT (13U)
/*! dmic2_int_src - Clock source selection for the ADSS dmic2 clock.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select FRO as main clock source.
 */
#define CGU_ADSS_DMIC_CLKSEL_DMIC2_INT_SRC(x)    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DMIC_CLKSEL_DMIC2_INT_SRC_SHIFT)) & CGU_ADSS_DMIC_CLKSEL_DMIC2_INT_SRC_MASK)

#define CGU_ADSS_DMIC_CLKSEL_DMIC3_EXT_SEL_MASK  (0x8000U)
#define CGU_ADSS_DMIC_CLKSEL_DMIC3_EXT_SEL_SHIFT (15U)
/*! dmic3_ext_sel - Select to use the pad-clock (external) or cgu-clock (internal) as module clock source.
 *  0b0..Use the internal generated clock.
 *  0b1..Use the PAD-based clock.
 */
#define CGU_ADSS_DMIC_CLKSEL_DMIC3_EXT_SEL(x)    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DMIC_CLKSEL_DMIC3_EXT_SEL_SHIFT)) & CGU_ADSS_DMIC_CLKSEL_DMIC3_EXT_SEL_MASK)

#define CGU_ADSS_DMIC_CLKSEL_DMIC3_PAD_SRC_MASK  (0x30000U)
#define CGU_ADSS_DMIC_CLKSEL_DMIC3_PAD_SRC_SHIFT (16U)
/*! dmic3_pad_src - Selects which dmic clock pad will be used as external clock source.
 *  0b00..Use the clock from dmic0.
 *  0b01..Use the clock from dmic1.
 *  0b10..Use the clock from dmic2.
 *  0b11..Use the clock from dmic3.
 */
#define CGU_ADSS_DMIC_CLKSEL_DMIC3_PAD_SRC(x)    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DMIC_CLKSEL_DMIC3_PAD_SRC_SHIFT)) & CGU_ADSS_DMIC_CLKSEL_DMIC3_PAD_SRC_MASK)

#define CGU_ADSS_DMIC_CLKSEL_DMIC3_INT_SRC_MASK  (0xC0000U)
#define CGU_ADSS_DMIC_CLKSEL_DMIC3_INT_SRC_SHIFT (18U)
/*! dmic3_int_src - Clock source selection for the ADSS dmic3 clock.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select FRO as main clock source.
 */
#define CGU_ADSS_DMIC_CLKSEL_DMIC3_INT_SRC(x)    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DMIC_CLKSEL_DMIC3_INT_SRC_SHIFT)) & CGU_ADSS_DMIC_CLKSEL_DMIC3_INT_SRC_MASK)
/*! @} */

/*! @name ADSS_RSTEN - Status register for the ADSS module reset enable.<br> The register indicates if the module is in reset or not.<br> <br> 0: Module is out of reset.<br> 1: Module is in reset. */
/*! @{ */

#define CGU_ADSS_RSTEN_DSP_SYS_MASK              (0x1U)
#define CGU_ADSS_RSTEN_DSP_SYS_SHIFT             (0U)
/*! dsp_sys - Dsp system reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_DSP_SYS(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_DSP_SYS_SHIFT)) & CGU_ADSS_RSTEN_DSP_SYS_MASK)

#define CGU_ADSS_RSTEN_DSP_COMM_MASK             (0x2U)
#define CGU_ADSS_RSTEN_DSP_COMM_SHIFT            (1U)
/*! dsp_comm - Dsp communication interface logic reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_DSP_COMM(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_DSP_COMM_SHIFT)) & CGU_ADSS_RSTEN_DSP_COMM_MASK)

#define CGU_ADSS_RSTEN_APB_MASK                  (0x4U)
#define CGU_ADSS_RSTEN_APB_SHIFT                 (2U)
/*! apb - Dsp APB configuration reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_APB(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_APB_SHIFT)) & CGU_ADSS_RSTEN_APB_MASK)

#define CGU_ADSS_RSTEN_DSP0_MASK                 (0x8U)
#define CGU_ADSS_RSTEN_DSP0_SHIFT                (3U)
/*! dsp0 - DSP3 0 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_DSP0(x)                   (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_DSP0_SHIFT)) & CGU_ADSS_RSTEN_DSP0_MASK)

#define CGU_ADSS_RSTEN_DSP1_MASK                 (0x10U)
#define CGU_ADSS_RSTEN_DSP1_SHIFT                (4U)
/*! dsp1 - DSP3 1 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_DSP1(x)                   (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_DSP1_SHIFT)) & CGU_ADSS_RSTEN_DSP1_MASK)

#define CGU_ADSS_RSTEN_HIFI5S_MASK               (0x20U)
#define CGU_ADSS_RSTEN_HIFI5S_SHIFT              (5U)
/*! hifi5s - hifi5s reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_HIFI5S(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_HIFI5S_SHIFT)) & CGU_ADSS_RSTEN_HIFI5S_MASK)

#define CGU_ADSS_RSTEN_IOMEM_MASK                (0x40U)
#define CGU_ADSS_RSTEN_IOMEM_SHIFT               (6U)
/*! iomem - ADSS iomem reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_IOMEM(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_IOMEM_SHIFT)) & CGU_ADSS_RSTEN_IOMEM_MASK)

#define CGU_ADSS_RSTEN_HSI_MASK                  (0x80U)
#define CGU_ADSS_RSTEN_HSI_SHIFT                 (7U)
/*! hsi - ADSS hsi reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_HSI(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_HSI_SHIFT)) & CGU_ADSS_RSTEN_HSI_MASK)

#define CGU_ADSS_RSTEN_PERFMON_MASK              (0x100U)
#define CGU_ADSS_RSTEN_PERFMON_SHIFT             (8U)
/*! perfmon - ADSS performance monitor reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_PERFMON(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_PERFMON_SHIFT)) & CGU_ADSS_RSTEN_PERFMON_MASK)

#define CGU_ADSS_RSTEN_SDMAC_MASK                (0x200U)
#define CGU_ADSS_RSTEN_SDMAC_SHIFT               (9U)
/*! sdmac - ADSS steaming dma controller reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_SDMAC(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_SDMAC_SHIFT)) & CGU_ADSS_RSTEN_SDMAC_MASK)

#define CGU_ADSS_RSTEN_DSS_TMR_MASK              (0x400U)
#define CGU_ADSS_RSTEN_DSS_TMR_SHIFT             (10U)
/*! dss_tmr - ADSS timer reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_DSS_TMR(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_DSS_TMR_SHIFT)) & CGU_ADSS_RSTEN_DSS_TMR_MASK)

#define CGU_ADSS_RSTEN_MC_TMR_MASK               (0x800U)
#define CGU_ADSS_RSTEN_MC_TMR_SHIFT              (11U)
/*! mc_tmr - ADSS multi-rate timer reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_MC_TMR(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_MC_TMR_SHIFT)) & CGU_ADSS_RSTEN_MC_TMR_MASK)

#define CGU_ADSS_RSTEN_SYNC_SOURCE_MASK          (0x1000U)
#define CGU_ADSS_RSTEN_SYNC_SOURCE_SHIFT         (12U)
/*! sync_source - ADSS sync-source reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_SYNC_SOURCE(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_SYNC_SOURCE_SHIFT)) & CGU_ADSS_RSTEN_SYNC_SOURCE_MASK)

#define CGU_ADSS_RSTEN_DP_TIMER_MASK             (0x2000U)
#define CGU_ADSS_RSTEN_DP_TIMER_SHIFT            (13U)
/*! dp_timer - ADSS dataport timer reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_DP_TIMER(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_DP_TIMER_SHIFT)) & CGU_ADSS_RSTEN_DP_TIMER_MASK)

#define CGU_ADSS_RSTEN_DP0_MASK                  (0x4000U)
#define CGU_ADSS_RSTEN_DP0_SHIFT                 (14U)
/*! dp0 - ADSS dataport 0 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_DP0(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_DP0_SHIFT)) & CGU_ADSS_RSTEN_DP0_MASK)

#define CGU_ADSS_RSTEN_DP1_MASK                  (0x8000U)
#define CGU_ADSS_RSTEN_DP1_SHIFT                 (15U)
/*! dp1 - ADSS dataport 1 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_DP1(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_DP1_SHIFT)) & CGU_ADSS_RSTEN_DP1_MASK)

#define CGU_ADSS_RSTEN_DP2_MASK                  (0x10000U)
#define CGU_ADSS_RSTEN_DP2_SHIFT                 (16U)
/*! dp2 - ADSS dataport 2 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_DP2(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_DP2_SHIFT)) & CGU_ADSS_RSTEN_DP2_MASK)

#define CGU_ADSS_RSTEN_DP3_MASK                  (0x20000U)
#define CGU_ADSS_RSTEN_DP3_SHIFT                 (17U)
/*! dp3 - ADSS dataport 3 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_DP3(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_DP3_SHIFT)) & CGU_ADSS_RSTEN_DP3_MASK)

#define CGU_ADSS_RSTEN_EDU_MASK                  (0x40000U)
#define CGU_ADSS_RSTEN_EDU_SHIFT                 (18U)
/*! edu - ADSS error-distribution unit reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_EDU(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_EDU_SHIFT)) & CGU_ADSS_RSTEN_EDU_MASK)

#define CGU_ADSS_RSTEN_CODEC_DEC_MASK            (0x80000U)
#define CGU_ADSS_RSTEN_CODEC_DEC_SHIFT           (19U)
/*! codec_dec - ADSS codec decimator reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_CODEC_DEC(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_CODEC_DEC_SHIFT)) & CGU_ADSS_RSTEN_CODEC_DEC_MASK)

#define CGU_ADSS_RSTEN_CODEC_ANC_MASK            (0x100000U)
#define CGU_ADSS_RSTEN_CODEC_ANC_SHIFT           (20U)
/*! codec_anc - ADSS codec ANC reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_CODEC_ANC(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_CODEC_ANC_SHIFT)) & CGU_ADSS_RSTEN_CODEC_ANC_MASK)

#define CGU_ADSS_RSTEN_CODEC_INT_MASK            (0x200000U)
#define CGU_ADSS_RSTEN_CODEC_INT_SHIFT           (21U)
/*! codec_int - ADSS codec interpolator reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_CODEC_INT(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_CODEC_INT_SHIFT)) & CGU_ADSS_RSTEN_CODEC_INT_MASK)

#define CGU_ADSS_RSTEN_CODEC_SSRC_MASK           (0x400000U)
#define CGU_ADSS_RSTEN_CODEC_SSRC_SHIFT          (22U)
/*! codec_ssrc - ADSS codec sync/source reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_CODEC_SSRC(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_CODEC_SSRC_SHIFT)) & CGU_ADSS_RSTEN_CODEC_SSRC_MASK)

#define CGU_ADSS_RSTEN_CODEC_DEC_XFS_MASK        (0x800000U)
#define CGU_ADSS_RSTEN_CODEC_DEC_XFS_SHIFT       (23U)
/*! codec_dec_xfs - ADSS decimator xfs clock.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_CODEC_DEC_XFS(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_CODEC_DEC_XFS_SHIFT)) & CGU_ADSS_RSTEN_CODEC_DEC_XFS_MASK)

#define CGU_ADSS_RSTEN_CODEC_DEC_DMIC_MASK       (0x1000000U)
#define CGU_ADSS_RSTEN_CODEC_DEC_DMIC_SHIFT      (24U)
/*! codec_dec_dmic - ADSS codec dmic reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_CODEC_DEC_DMIC(x)         (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_CODEC_DEC_DMIC_SHIFT)) & CGU_ADSS_RSTEN_CODEC_DEC_DMIC_MASK)

#define CGU_ADSS_RSTEN_XMEM_COEFF_BANK_MASK      (0x2000000U)
#define CGU_ADSS_RSTEN_XMEM_COEFF_BANK_SHIFT     (25U)
/*! xmem_coeff_bank - ADSS codec register file reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_XMEM_COEFF_BANK(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_XMEM_COEFF_BANK_SHIFT)) & CGU_ADSS_RSTEN_XMEM_COEFF_BANK_MASK)

#define CGU_ADSS_RSTEN_DSP_DEBUG_MASK            (0x4000000U)
#define CGU_ADSS_RSTEN_DSP_DEBUG_SHIFT           (26U)
/*! dsp_debug - ADSS dsp debug reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_DSP_DEBUG(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_DSP_DEBUG_SHIFT)) & CGU_ADSS_RSTEN_DSP_DEBUG_MASK)

#define CGU_ADSS_RSTEN_IRFIC_MASK                (0x8000000U)
#define CGU_ADSS_RSTEN_IRFIC_SHIFT               (27U)
/*! irfic - iRFIC reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTEN_IRFIC(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTEN_IRFIC_SHIFT)) & CGU_ADSS_RSTEN_IRFIC_MASK)
/*! @} */

/*! @name ADSS_RSTENSET - Register to set bits in adss_rstEn.<br> Write 1 to set a bitfield (enable the reset).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_ADSS_RSTENSET_DSP_SYS_MASK           (0x1U)
#define CGU_ADSS_RSTENSET_DSP_SYS_SHIFT          (0U)
/*! dsp_sys - Dsp system reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_DSP_SYS(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_DSP_SYS_SHIFT)) & CGU_ADSS_RSTENSET_DSP_SYS_MASK)

#define CGU_ADSS_RSTENSET_DSP_COMM_MASK          (0x2U)
#define CGU_ADSS_RSTENSET_DSP_COMM_SHIFT         (1U)
/*! dsp_comm - Dsp communication interface logic reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_DSP_COMM(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_DSP_COMM_SHIFT)) & CGU_ADSS_RSTENSET_DSP_COMM_MASK)

#define CGU_ADSS_RSTENSET_APB_MASK               (0x4U)
#define CGU_ADSS_RSTENSET_APB_SHIFT              (2U)
/*! apb - Dsp APB configuration reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_APB(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_APB_SHIFT)) & CGU_ADSS_RSTENSET_APB_MASK)

#define CGU_ADSS_RSTENSET_DSP0_MASK              (0x8U)
#define CGU_ADSS_RSTENSET_DSP0_SHIFT             (3U)
/*! dsp0 - DSP3 0 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_DSP0(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_DSP0_SHIFT)) & CGU_ADSS_RSTENSET_DSP0_MASK)

#define CGU_ADSS_RSTENSET_DSP1_MASK              (0x10U)
#define CGU_ADSS_RSTENSET_DSP1_SHIFT             (4U)
/*! dsp1 - DSP3 1 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_DSP1(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_DSP1_SHIFT)) & CGU_ADSS_RSTENSET_DSP1_MASK)

#define CGU_ADSS_RSTENSET_HIFI5S_MASK            (0x20U)
#define CGU_ADSS_RSTENSET_HIFI5S_SHIFT           (5U)
/*! hifi5s - hifi5s reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_HIFI5S(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_HIFI5S_SHIFT)) & CGU_ADSS_RSTENSET_HIFI5S_MASK)

#define CGU_ADSS_RSTENSET_IOMEM_MASK             (0x40U)
#define CGU_ADSS_RSTENSET_IOMEM_SHIFT            (6U)
/*! iomem - ADSS iomem reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_IOMEM(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_IOMEM_SHIFT)) & CGU_ADSS_RSTENSET_IOMEM_MASK)

#define CGU_ADSS_RSTENSET_HSI_MASK               (0x80U)
#define CGU_ADSS_RSTENSET_HSI_SHIFT              (7U)
/*! hsi - ADSS hsi reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_HSI(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_HSI_SHIFT)) & CGU_ADSS_RSTENSET_HSI_MASK)

#define CGU_ADSS_RSTENSET_PERFMON_MASK           (0x100U)
#define CGU_ADSS_RSTENSET_PERFMON_SHIFT          (8U)
/*! perfmon - ADSS performance monitor reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_PERFMON(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_PERFMON_SHIFT)) & CGU_ADSS_RSTENSET_PERFMON_MASK)

#define CGU_ADSS_RSTENSET_SDMAC_MASK             (0x200U)
#define CGU_ADSS_RSTENSET_SDMAC_SHIFT            (9U)
/*! sdmac - ADSS steaming dma controller reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_SDMAC(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_SDMAC_SHIFT)) & CGU_ADSS_RSTENSET_SDMAC_MASK)

#define CGU_ADSS_RSTENSET_DSS_TMR_MASK           (0x400U)
#define CGU_ADSS_RSTENSET_DSS_TMR_SHIFT          (10U)
/*! dss_tmr - ADSS timer reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_DSS_TMR(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_DSS_TMR_SHIFT)) & CGU_ADSS_RSTENSET_DSS_TMR_MASK)

#define CGU_ADSS_RSTENSET_MC_TMR_MASK            (0x800U)
#define CGU_ADSS_RSTENSET_MC_TMR_SHIFT           (11U)
/*! mc_tmr - ADSS multi-rate timer reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_MC_TMR(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_MC_TMR_SHIFT)) & CGU_ADSS_RSTENSET_MC_TMR_MASK)

#define CGU_ADSS_RSTENSET_SYNC_SOURCE_MASK       (0x1000U)
#define CGU_ADSS_RSTENSET_SYNC_SOURCE_SHIFT      (12U)
/*! sync_source - ADSS sync-source reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_SYNC_SOURCE(x)         (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_SYNC_SOURCE_SHIFT)) & CGU_ADSS_RSTENSET_SYNC_SOURCE_MASK)

#define CGU_ADSS_RSTENSET_DP_TIMER_MASK          (0x2000U)
#define CGU_ADSS_RSTENSET_DP_TIMER_SHIFT         (13U)
/*! dp_timer - ADSS dataport timer reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_DP_TIMER(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_DP_TIMER_SHIFT)) & CGU_ADSS_RSTENSET_DP_TIMER_MASK)

#define CGU_ADSS_RSTENSET_DP0_MASK               (0x4000U)
#define CGU_ADSS_RSTENSET_DP0_SHIFT              (14U)
/*! dp0 - ADSS dataport 0 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_DP0(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_DP0_SHIFT)) & CGU_ADSS_RSTENSET_DP0_MASK)

#define CGU_ADSS_RSTENSET_DP1_MASK               (0x8000U)
#define CGU_ADSS_RSTENSET_DP1_SHIFT              (15U)
/*! dp1 - ADSS dataport 1 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_DP1(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_DP1_SHIFT)) & CGU_ADSS_RSTENSET_DP1_MASK)

#define CGU_ADSS_RSTENSET_DP2_MASK               (0x10000U)
#define CGU_ADSS_RSTENSET_DP2_SHIFT              (16U)
/*! dp2 - ADSS dataport 2 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_DP2(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_DP2_SHIFT)) & CGU_ADSS_RSTENSET_DP2_MASK)

#define CGU_ADSS_RSTENSET_DP3_MASK               (0x20000U)
#define CGU_ADSS_RSTENSET_DP3_SHIFT              (17U)
/*! dp3 - ADSS dataport 3 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_DP3(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_DP3_SHIFT)) & CGU_ADSS_RSTENSET_DP3_MASK)

#define CGU_ADSS_RSTENSET_EDU_MASK               (0x40000U)
#define CGU_ADSS_RSTENSET_EDU_SHIFT              (18U)
/*! edu - ADSS error-distribution unit reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_EDU(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_EDU_SHIFT)) & CGU_ADSS_RSTENSET_EDU_MASK)

#define CGU_ADSS_RSTENSET_CODEC_DEC_MASK         (0x80000U)
#define CGU_ADSS_RSTENSET_CODEC_DEC_SHIFT        (19U)
/*! codec_dec - ADSS codec decimator reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_CODEC_DEC(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_CODEC_DEC_SHIFT)) & CGU_ADSS_RSTENSET_CODEC_DEC_MASK)

#define CGU_ADSS_RSTENSET_CODEC_ANC_MASK         (0x100000U)
#define CGU_ADSS_RSTENSET_CODEC_ANC_SHIFT        (20U)
/*! codec_anc - ADSS codec ANC reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_CODEC_ANC(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_CODEC_ANC_SHIFT)) & CGU_ADSS_RSTENSET_CODEC_ANC_MASK)

#define CGU_ADSS_RSTENSET_CODEC_INT_MASK         (0x200000U)
#define CGU_ADSS_RSTENSET_CODEC_INT_SHIFT        (21U)
/*! codec_int - ADSS codec interpolator reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_CODEC_INT(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_CODEC_INT_SHIFT)) & CGU_ADSS_RSTENSET_CODEC_INT_MASK)

#define CGU_ADSS_RSTENSET_CODEC_SSRC_MASK        (0x400000U)
#define CGU_ADSS_RSTENSET_CODEC_SSRC_SHIFT       (22U)
/*! codec_ssrc - ADSS codec sync/source reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_CODEC_SSRC(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_CODEC_SSRC_SHIFT)) & CGU_ADSS_RSTENSET_CODEC_SSRC_MASK)

#define CGU_ADSS_RSTENSET_CODEC_DEC_XFS_MASK     (0x800000U)
#define CGU_ADSS_RSTENSET_CODEC_DEC_XFS_SHIFT    (23U)
/*! codec_dec_xfs - ADSS decimator xfs clock.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_CODEC_DEC_XFS(x)       (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_CODEC_DEC_XFS_SHIFT)) & CGU_ADSS_RSTENSET_CODEC_DEC_XFS_MASK)

#define CGU_ADSS_RSTENSET_CODEC_DEC_DMIC_MASK    (0x1000000U)
#define CGU_ADSS_RSTENSET_CODEC_DEC_DMIC_SHIFT   (24U)
/*! codec_dec_dmic - ADSS codec dmic reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_CODEC_DEC_DMIC(x)      (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_CODEC_DEC_DMIC_SHIFT)) & CGU_ADSS_RSTENSET_CODEC_DEC_DMIC_MASK)

#define CGU_ADSS_RSTENSET_XMEM_COEFF_BANK_MASK   (0x2000000U)
#define CGU_ADSS_RSTENSET_XMEM_COEFF_BANK_SHIFT  (25U)
/*! xmem_coeff_bank - ADSS codec register file reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_XMEM_COEFF_BANK(x)     (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_XMEM_COEFF_BANK_SHIFT)) & CGU_ADSS_RSTENSET_XMEM_COEFF_BANK_MASK)

#define CGU_ADSS_RSTENSET_DSP_DEBUG_MASK         (0x4000000U)
#define CGU_ADSS_RSTENSET_DSP_DEBUG_SHIFT        (26U)
/*! dsp_debug - ADSS dsp debug reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_DSP_DEBUG(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_DSP_DEBUG_SHIFT)) & CGU_ADSS_RSTENSET_DSP_DEBUG_MASK)

#define CGU_ADSS_RSTENSET_IRFIC_MASK             (0x8000000U)
#define CGU_ADSS_RSTENSET_IRFIC_SHIFT            (27U)
/*! irfic - iRFIC reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENSET_IRFIC(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENSET_IRFIC_SHIFT)) & CGU_ADSS_RSTENSET_IRFIC_MASK)
/*! @} */

/*! @name ADSS_RSTENCLR - Register to clear bits in adss_rstEn.<br> Write 1 to clear a bitfield (disable the reset).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_ADSS_RSTENCLR_DSP_SYS_MASK           (0x1U)
#define CGU_ADSS_RSTENCLR_DSP_SYS_SHIFT          (0U)
/*! dsp_sys - Dsp system reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_DSP_SYS(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_DSP_SYS_SHIFT)) & CGU_ADSS_RSTENCLR_DSP_SYS_MASK)

#define CGU_ADSS_RSTENCLR_DSP_COMM_MASK          (0x2U)
#define CGU_ADSS_RSTENCLR_DSP_COMM_SHIFT         (1U)
/*! dsp_comm - Dsp communication interface logic reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_DSP_COMM(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_DSP_COMM_SHIFT)) & CGU_ADSS_RSTENCLR_DSP_COMM_MASK)

#define CGU_ADSS_RSTENCLR_APB_MASK               (0x4U)
#define CGU_ADSS_RSTENCLR_APB_SHIFT              (2U)
/*! apb - Dsp APB configuration reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_APB(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_APB_SHIFT)) & CGU_ADSS_RSTENCLR_APB_MASK)

#define CGU_ADSS_RSTENCLR_DSP0_MASK              (0x8U)
#define CGU_ADSS_RSTENCLR_DSP0_SHIFT             (3U)
/*! dsp0 - DSP3 0 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_DSP0(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_DSP0_SHIFT)) & CGU_ADSS_RSTENCLR_DSP0_MASK)

#define CGU_ADSS_RSTENCLR_DSP1_MASK              (0x10U)
#define CGU_ADSS_RSTENCLR_DSP1_SHIFT             (4U)
/*! dsp1 - DSP3 1 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_DSP1(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_DSP1_SHIFT)) & CGU_ADSS_RSTENCLR_DSP1_MASK)

#define CGU_ADSS_RSTENCLR_HIFI5S_MASK            (0x20U)
#define CGU_ADSS_RSTENCLR_HIFI5S_SHIFT           (5U)
/*! hifi5s - hifi5s reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_HIFI5S(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_HIFI5S_SHIFT)) & CGU_ADSS_RSTENCLR_HIFI5S_MASK)

#define CGU_ADSS_RSTENCLR_IOMEM_MASK             (0x40U)
#define CGU_ADSS_RSTENCLR_IOMEM_SHIFT            (6U)
/*! iomem - ADSS iomem reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_IOMEM(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_IOMEM_SHIFT)) & CGU_ADSS_RSTENCLR_IOMEM_MASK)

#define CGU_ADSS_RSTENCLR_HSI_MASK               (0x80U)
#define CGU_ADSS_RSTENCLR_HSI_SHIFT              (7U)
/*! hsi - ADSS hsi reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_HSI(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_HSI_SHIFT)) & CGU_ADSS_RSTENCLR_HSI_MASK)

#define CGU_ADSS_RSTENCLR_PERFMON_MASK           (0x100U)
#define CGU_ADSS_RSTENCLR_PERFMON_SHIFT          (8U)
/*! perfmon - ADSS performance monitor reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_PERFMON(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_PERFMON_SHIFT)) & CGU_ADSS_RSTENCLR_PERFMON_MASK)

#define CGU_ADSS_RSTENCLR_SDMAC_MASK             (0x200U)
#define CGU_ADSS_RSTENCLR_SDMAC_SHIFT            (9U)
/*! sdmac - ADSS steaming dma controller reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_SDMAC(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_SDMAC_SHIFT)) & CGU_ADSS_RSTENCLR_SDMAC_MASK)

#define CGU_ADSS_RSTENCLR_DSS_TMR_MASK           (0x400U)
#define CGU_ADSS_RSTENCLR_DSS_TMR_SHIFT          (10U)
/*! dss_tmr - ADSS timer reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_DSS_TMR(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_DSS_TMR_SHIFT)) & CGU_ADSS_RSTENCLR_DSS_TMR_MASK)

#define CGU_ADSS_RSTENCLR_MC_TMR_MASK            (0x800U)
#define CGU_ADSS_RSTENCLR_MC_TMR_SHIFT           (11U)
/*! mc_tmr - ADSS multi-rate timer reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_MC_TMR(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_MC_TMR_SHIFT)) & CGU_ADSS_RSTENCLR_MC_TMR_MASK)

#define CGU_ADSS_RSTENCLR_SYNC_SOURCE_MASK       (0x1000U)
#define CGU_ADSS_RSTENCLR_SYNC_SOURCE_SHIFT      (12U)
/*! sync_source - ADSS sync-source reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_SYNC_SOURCE(x)         (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_SYNC_SOURCE_SHIFT)) & CGU_ADSS_RSTENCLR_SYNC_SOURCE_MASK)

#define CGU_ADSS_RSTENCLR_DP_TIMER_MASK          (0x2000U)
#define CGU_ADSS_RSTENCLR_DP_TIMER_SHIFT         (13U)
/*! dp_timer - ADSS dataport timer reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_DP_TIMER(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_DP_TIMER_SHIFT)) & CGU_ADSS_RSTENCLR_DP_TIMER_MASK)

#define CGU_ADSS_RSTENCLR_DP0_MASK               (0x4000U)
#define CGU_ADSS_RSTENCLR_DP0_SHIFT              (14U)
/*! dp0 - ADSS dataport 0 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_DP0(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_DP0_SHIFT)) & CGU_ADSS_RSTENCLR_DP0_MASK)

#define CGU_ADSS_RSTENCLR_DP1_MASK               (0x8000U)
#define CGU_ADSS_RSTENCLR_DP1_SHIFT              (15U)
/*! dp1 - ADSS dataport 1 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_DP1(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_DP1_SHIFT)) & CGU_ADSS_RSTENCLR_DP1_MASK)

#define CGU_ADSS_RSTENCLR_DP2_MASK               (0x10000U)
#define CGU_ADSS_RSTENCLR_DP2_SHIFT              (16U)
/*! dp2 - ADSS dataport 2 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_DP2(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_DP2_SHIFT)) & CGU_ADSS_RSTENCLR_DP2_MASK)

#define CGU_ADSS_RSTENCLR_DP3_MASK               (0x20000U)
#define CGU_ADSS_RSTENCLR_DP3_SHIFT              (17U)
/*! dp3 - ADSS dataport 3 reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_DP3(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_DP3_SHIFT)) & CGU_ADSS_RSTENCLR_DP3_MASK)

#define CGU_ADSS_RSTENCLR_EDU_MASK               (0x40000U)
#define CGU_ADSS_RSTENCLR_EDU_SHIFT              (18U)
/*! edu - ADSS error-distribution unit reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_EDU(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_EDU_SHIFT)) & CGU_ADSS_RSTENCLR_EDU_MASK)

#define CGU_ADSS_RSTENCLR_CODEC_DEC_MASK         (0x80000U)
#define CGU_ADSS_RSTENCLR_CODEC_DEC_SHIFT        (19U)
/*! codec_dec - ADSS codec decimator reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_CODEC_DEC(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_CODEC_DEC_SHIFT)) & CGU_ADSS_RSTENCLR_CODEC_DEC_MASK)

#define CGU_ADSS_RSTENCLR_CODEC_ANC_MASK         (0x100000U)
#define CGU_ADSS_RSTENCLR_CODEC_ANC_SHIFT        (20U)
/*! codec_anc - ADSS codec ANC reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_CODEC_ANC(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_CODEC_ANC_SHIFT)) & CGU_ADSS_RSTENCLR_CODEC_ANC_MASK)

#define CGU_ADSS_RSTENCLR_CODEC_INT_MASK         (0x200000U)
#define CGU_ADSS_RSTENCLR_CODEC_INT_SHIFT        (21U)
/*! codec_int - ADSS codec interpolator reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_CODEC_INT(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_CODEC_INT_SHIFT)) & CGU_ADSS_RSTENCLR_CODEC_INT_MASK)

#define CGU_ADSS_RSTENCLR_CODEC_SSRC_MASK        (0x400000U)
#define CGU_ADSS_RSTENCLR_CODEC_SSRC_SHIFT       (22U)
/*! codec_ssrc - ADSS codec sync/source reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_CODEC_SSRC(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_CODEC_SSRC_SHIFT)) & CGU_ADSS_RSTENCLR_CODEC_SSRC_MASK)

#define CGU_ADSS_RSTENCLR_CODEC_DEC_XFS_MASK     (0x800000U)
#define CGU_ADSS_RSTENCLR_CODEC_DEC_XFS_SHIFT    (23U)
/*! codec_dec_xfs - ADSS decimator xfs clock.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_CODEC_DEC_XFS(x)       (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_CODEC_DEC_XFS_SHIFT)) & CGU_ADSS_RSTENCLR_CODEC_DEC_XFS_MASK)

#define CGU_ADSS_RSTENCLR_CODEC_DEC_DMIC_MASK    (0x1000000U)
#define CGU_ADSS_RSTENCLR_CODEC_DEC_DMIC_SHIFT   (24U)
/*! codec_dec_dmic - ADSS codec dmic reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_CODEC_DEC_DMIC(x)      (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_CODEC_DEC_DMIC_SHIFT)) & CGU_ADSS_RSTENCLR_CODEC_DEC_DMIC_MASK)

#define CGU_ADSS_RSTENCLR_XMEM_COEFF_BANK_MASK   (0x2000000U)
#define CGU_ADSS_RSTENCLR_XMEM_COEFF_BANK_SHIFT  (25U)
/*! xmem_coeff_bank - ADSS codec register file reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_XMEM_COEFF_BANK(x)     (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_XMEM_COEFF_BANK_SHIFT)) & CGU_ADSS_RSTENCLR_XMEM_COEFF_BANK_MASK)

#define CGU_ADSS_RSTENCLR_DSP_DEBUG_MASK         (0x4000000U)
#define CGU_ADSS_RSTENCLR_DSP_DEBUG_SHIFT        (26U)
/*! dsp_debug - ADSS dsp debug reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_DSP_DEBUG(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_DSP_DEBUG_SHIFT)) & CGU_ADSS_RSTENCLR_DSP_DEBUG_MASK)

#define CGU_ADSS_RSTENCLR_IRFIC_MASK             (0x8000000U)
#define CGU_ADSS_RSTENCLR_IRFIC_SHIFT            (27U)
/*! irfic - iRFIC reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_ADSS_RSTENCLR_IRFIC(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_RSTENCLR_IRFIC_SHIFT)) & CGU_ADSS_RSTENCLR_IRFIC_MASK)
/*! @} */

/*! @name ADSS_CLKEN - Status register for the ADSS module clock enable.<br> The register indicates if the clock is enabled or disabled.<br> <br> 0: Clock is disabled<br> 1: Clock is enabled */
/*! @{ */

#define CGU_ADSS_CLKEN_DSP_SYS_MASK              (0x1U)
#define CGU_ADSS_CLKEN_DSP_SYS_SHIFT             (0U)
/*! dsp_sys - DSP3 main clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_DSP_SYS(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_DSP_SYS_SHIFT)) & CGU_ADSS_CLKEN_DSP_SYS_MASK)

#define CGU_ADSS_CLKEN_DSP_COMM_MASK             (0x2U)
#define CGU_ADSS_CLKEN_DSP_COMM_SHIFT            (1U)
/*! dsp_comm - ADSS clock enable for access to e.g. the memories.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_DSP_COMM(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_DSP_COMM_SHIFT)) & CGU_ADSS_CLKEN_DSP_COMM_MASK)

#define CGU_ADSS_CLKEN_HIFI5_MASK                (0x4U)
#define CGU_ADSS_CLKEN_HIFI5_SHIFT               (2U)
/*! hifi5 - Hifi5s processor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_HIFI5(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_HIFI5_SHIFT)) & CGU_ADSS_CLKEN_HIFI5_MASK)

#define CGU_ADSS_CLKEN_DSP0_NOSTEAL_MASK         (0x8U)
#define CGU_ADSS_CLKEN_DSP0_NOSTEAL_SHIFT        (3U)
/*! dsp0_nosteal - Enables the DSP3 0 nosteal clock.<br> The actual DSP3 0 clock is a gated version
 *    of this clock<br> where pulses are stolen based on the HW load averaging algorithm.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_DSP0_NOSTEAL(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_DSP0_NOSTEAL_SHIFT)) & CGU_ADSS_CLKEN_DSP0_NOSTEAL_MASK)

#define CGU_ADSS_CLKEN_DSP1_NOSTEAL_MASK         (0x10U)
#define CGU_ADSS_CLKEN_DSP1_NOSTEAL_SHIFT        (4U)
/*! dsp1_nosteal - Enables the DSP3 1 nosteal clock.<br> The actual DSP3 1 clock is a gated version
 *    of this clock<br> where pulses are stolen based on the HW load averaging algorithm.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_DSP1_NOSTEAL(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_DSP1_NOSTEAL_SHIFT)) & CGU_ADSS_CLKEN_DSP1_NOSTEAL_MASK)

#define CGU_ADSS_CLKEN_DSP_DEBUG_MASK            (0x20U)
#define CGU_ADSS_CLKEN_DSP_DEBUG_SHIFT           (5U)
/*! dsp_debug - DSP debug clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_DSP_DEBUG(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_DSP_DEBUG_SHIFT)) & CGU_ADSS_CLKEN_DSP_DEBUG_MASK)

#define CGU_ADSS_CLKEN_PCACHE0_MASK              (0x40U)
#define CGU_ADSS_CLKEN_PCACHE0_SHIFT             (6U)
/*! pcache0 - ADSS pcache0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_PCACHE0(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_PCACHE0_SHIFT)) & CGU_ADSS_CLKEN_PCACHE0_MASK)

#define CGU_ADSS_CLKEN_DCACHE0_MASK              (0x80U)
#define CGU_ADSS_CLKEN_DCACHE0_SHIFT             (7U)
/*! dcache0 - ADSS dcache0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_DCACHE0(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_DCACHE0_SHIFT)) & CGU_ADSS_CLKEN_DCACHE0_MASK)

#define CGU_ADSS_CLKEN_PCACHE1_MASK              (0x100U)
#define CGU_ADSS_CLKEN_PCACHE1_SHIFT             (8U)
/*! pcache1 - ADSS pcache1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_PCACHE1(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_PCACHE1_SHIFT)) & CGU_ADSS_CLKEN_PCACHE1_MASK)

#define CGU_ADSS_CLKEN_DCACHE1_MASK              (0x200U)
#define CGU_ADSS_CLKEN_DCACHE1_SHIFT             (9U)
/*! dcache1 - ADSS dcache1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_DCACHE1(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_DCACHE1_SHIFT)) & CGU_ADSS_CLKEN_DCACHE1_MASK)

#define CGU_ADSS_CLKEN_HSI_MASK                  (0x400U)
#define CGU_ADSS_CLKEN_HSI_SHIFT                 (10U)
/*! hsi - ADSS HSI clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_HSI(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_HSI_SHIFT)) & CGU_ADSS_CLKEN_HSI_MASK)

#define CGU_ADSS_CLKEN_PERFMON_MASK              (0x800U)
#define CGU_ADSS_CLKEN_PERFMON_SHIFT             (11U)
/*! perfmon - ADSS performance monitor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_PERFMON(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_PERFMON_SHIFT)) & CGU_ADSS_CLKEN_PERFMON_MASK)

#define CGU_ADSS_CLKEN_SDMAC_MASK                (0x1000U)
#define CGU_ADSS_CLKEN_SDMAC_SHIFT               (12U)
/*! sdmac - Streaming DMA controller clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_SDMAC(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_SDMAC_SHIFT)) & CGU_ADSS_CLKEN_SDMAC_MASK)

#define CGU_ADSS_CLKEN_TMR_MASK                  (0x2000U)
#define CGU_ADSS_CLKEN_TMR_SHIFT                 (13U)
/*! tmr - ADSS timer clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_TMR(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_TMR_SHIFT)) & CGU_ADSS_CLKEN_TMR_MASK)

#define CGU_ADSS_CLKEN_MC_TMR_MASK               (0x4000U)
#define CGU_ADSS_CLKEN_MC_TMR_SHIFT              (14U)
/*! mc_tmr - ADSS multi-channel timer clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_MC_TMR(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_MC_TMR_SHIFT)) & CGU_ADSS_CLKEN_MC_TMR_MASK)

#define CGU_ADSS_CLKEN_WATCHDOG_MASK             (0x8000U)
#define CGU_ADSS_CLKEN_WATCHDOG_SHIFT            (15U)
/*! watchdog - Clock enable for the ADSS watchdog. This is an 'enable ones' bit, which cannot be disabled again.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_WATCHDOG(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_WATCHDOG_SHIFT)) & CGU_ADSS_CLKEN_WATCHDOG_MASK)

#define CGU_ADSS_CLKEN_UART_MASK                 (0x10000U)
#define CGU_ADSS_CLKEN_UART_SHIFT                (16U)
/*! uart - ADSS debug uart clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_UART(x)                   (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_UART_SHIFT)) & CGU_ADSS_CLKEN_UART_MASK)

#define CGU_ADSS_CLKEN_AXI_NSS_MASK              (0x20000U)
#define CGU_ADSS_CLKEN_AXI_NSS_SHIFT             (17U)
/*! axi_nss - ADSS clock enable for the NSS input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_AXI_NSS(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_AXI_NSS_SHIFT)) & CGU_ADSS_CLKEN_AXI_NSS_MASK)

#define CGU_ADSS_CLKEN_AXI_CSS_MASK              (0x40000U)
#define CGU_ADSS_CLKEN_AXI_CSS_SHIFT             (18U)
/*! axi_css - ADSS clock enable for the CtrlSS input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_AXI_CSS(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_AXI_CSS_SHIFT)) & CGU_ADSS_CLKEN_AXI_CSS_MASK)

#define CGU_ADSS_CLKEN_APB_MASK                  (0x80000U)
#define CGU_ADSS_CLKEN_APB_SHIFT                 (19U)
/*! apb - ADSS apb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_APB(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_APB_SHIFT)) & CGU_ADSS_CLKEN_APB_MASK)

#define CGU_ADSS_CLKEN_DP0_MASK                  (0x100000U)
#define CGU_ADSS_CLKEN_DP0_SHIFT                 (20U)
/*! dp0 - Dataport 0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_DP0(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_DP0_SHIFT)) & CGU_ADSS_CLKEN_DP0_MASK)

#define CGU_ADSS_CLKEN_DP1_MASK                  (0x200000U)
#define CGU_ADSS_CLKEN_DP1_SHIFT                 (21U)
/*! dp1 - Dataport 1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_DP1(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_DP1_SHIFT)) & CGU_ADSS_CLKEN_DP1_MASK)

#define CGU_ADSS_CLKEN_DP2_MASK                  (0x400000U)
#define CGU_ADSS_CLKEN_DP2_SHIFT                 (22U)
/*! dp2 - Dataport 2 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_DP2(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_DP2_SHIFT)) & CGU_ADSS_CLKEN_DP2_MASK)

#define CGU_ADSS_CLKEN_DP3_MASK                  (0x800000U)
#define CGU_ADSS_CLKEN_DP3_SHIFT                 (23U)
/*! dp3 - Dataport 3 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_DP3(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_DP3_SHIFT)) & CGU_ADSS_CLKEN_DP3_MASK)

#define CGU_ADSS_CLKEN_IRFIC_MASK                (0x1000000U)
#define CGU_ADSS_CLKEN_IRFIC_SHIFT               (24U)
/*! irfic - RF interface main clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKEN_IRFIC(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKEN_IRFIC_SHIFT)) & CGU_ADSS_CLKEN_IRFIC_MASK)
/*! @} */

/*! @name ADSS_CLKENSET - Register to set bits in adss_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_ADSS_CLKENSET_DSP_SYS_MASK           (0x1U)
#define CGU_ADSS_CLKENSET_DSP_SYS_SHIFT          (0U)
/*! dsp_sys - DSP3 main clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_DSP_SYS(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_DSP_SYS_SHIFT)) & CGU_ADSS_CLKENSET_DSP_SYS_MASK)

#define CGU_ADSS_CLKENSET_DSP_COMM_MASK          (0x2U)
#define CGU_ADSS_CLKENSET_DSP_COMM_SHIFT         (1U)
/*! dsp_comm - ADSS clock enable for access to e.g. the memories.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_DSP_COMM(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_DSP_COMM_SHIFT)) & CGU_ADSS_CLKENSET_DSP_COMM_MASK)

#define CGU_ADSS_CLKENSET_HIFI5_MASK             (0x4U)
#define CGU_ADSS_CLKENSET_HIFI5_SHIFT            (2U)
/*! hifi5 - Hifi5s processor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_HIFI5(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_HIFI5_SHIFT)) & CGU_ADSS_CLKENSET_HIFI5_MASK)

#define CGU_ADSS_CLKENSET_DSP0_NOSTEAL_MASK      (0x8U)
#define CGU_ADSS_CLKENSET_DSP0_NOSTEAL_SHIFT     (3U)
/*! dsp0_nosteal - Enables the DSP3 0 nosteal clock.<br> The actual DSP3 0 clock is a gated version
 *    of this clock<br> where pulses are stolen based on the HW load averaging algorithm.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_DSP0_NOSTEAL(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_DSP0_NOSTEAL_SHIFT)) & CGU_ADSS_CLKENSET_DSP0_NOSTEAL_MASK)

#define CGU_ADSS_CLKENSET_DSP1_NOSTEAL_MASK      (0x10U)
#define CGU_ADSS_CLKENSET_DSP1_NOSTEAL_SHIFT     (4U)
/*! dsp1_nosteal - Enables the DSP3 1 nosteal clock.<br> The actual DSP3 1 clock is a gated version
 *    of this clock<br> where pulses are stolen based on the HW load averaging algorithm.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_DSP1_NOSTEAL(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_DSP1_NOSTEAL_SHIFT)) & CGU_ADSS_CLKENSET_DSP1_NOSTEAL_MASK)

#define CGU_ADSS_CLKENSET_DSP_DEBUG_MASK         (0x20U)
#define CGU_ADSS_CLKENSET_DSP_DEBUG_SHIFT        (5U)
/*! dsp_debug - DSP debug clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_DSP_DEBUG(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_DSP_DEBUG_SHIFT)) & CGU_ADSS_CLKENSET_DSP_DEBUG_MASK)

#define CGU_ADSS_CLKENSET_PCACHE0_MASK           (0x40U)
#define CGU_ADSS_CLKENSET_PCACHE0_SHIFT          (6U)
/*! pcache0 - ADSS pcache0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_PCACHE0(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_PCACHE0_SHIFT)) & CGU_ADSS_CLKENSET_PCACHE0_MASK)

#define CGU_ADSS_CLKENSET_DCACHE0_MASK           (0x80U)
#define CGU_ADSS_CLKENSET_DCACHE0_SHIFT          (7U)
/*! dcache0 - ADSS dcache0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_DCACHE0(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_DCACHE0_SHIFT)) & CGU_ADSS_CLKENSET_DCACHE0_MASK)

#define CGU_ADSS_CLKENSET_PCACHE1_MASK           (0x100U)
#define CGU_ADSS_CLKENSET_PCACHE1_SHIFT          (8U)
/*! pcache1 - ADSS pcache1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_PCACHE1(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_PCACHE1_SHIFT)) & CGU_ADSS_CLKENSET_PCACHE1_MASK)

#define CGU_ADSS_CLKENSET_DCACHE1_MASK           (0x200U)
#define CGU_ADSS_CLKENSET_DCACHE1_SHIFT          (9U)
/*! dcache1 - ADSS dcache1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_DCACHE1(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_DCACHE1_SHIFT)) & CGU_ADSS_CLKENSET_DCACHE1_MASK)

#define CGU_ADSS_CLKENSET_HSI_MASK               (0x400U)
#define CGU_ADSS_CLKENSET_HSI_SHIFT              (10U)
/*! hsi - ADSS HSI clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_HSI(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_HSI_SHIFT)) & CGU_ADSS_CLKENSET_HSI_MASK)

#define CGU_ADSS_CLKENSET_PERFMON_MASK           (0x800U)
#define CGU_ADSS_CLKENSET_PERFMON_SHIFT          (11U)
/*! perfmon - ADSS performance monitor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_PERFMON(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_PERFMON_SHIFT)) & CGU_ADSS_CLKENSET_PERFMON_MASK)

#define CGU_ADSS_CLKENSET_SDMAC_MASK             (0x1000U)
#define CGU_ADSS_CLKENSET_SDMAC_SHIFT            (12U)
/*! sdmac - Streaming DMA controller clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_SDMAC(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_SDMAC_SHIFT)) & CGU_ADSS_CLKENSET_SDMAC_MASK)

#define CGU_ADSS_CLKENSET_TMR_MASK               (0x2000U)
#define CGU_ADSS_CLKENSET_TMR_SHIFT              (13U)
/*! tmr - ADSS timer clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_TMR(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_TMR_SHIFT)) & CGU_ADSS_CLKENSET_TMR_MASK)

#define CGU_ADSS_CLKENSET_MC_TMR_MASK            (0x4000U)
#define CGU_ADSS_CLKENSET_MC_TMR_SHIFT           (14U)
/*! mc_tmr - ADSS multi-channel timer clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_MC_TMR(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_MC_TMR_SHIFT)) & CGU_ADSS_CLKENSET_MC_TMR_MASK)

#define CGU_ADSS_CLKENSET_WATCHDOG_MASK          (0x8000U)
#define CGU_ADSS_CLKENSET_WATCHDOG_SHIFT         (15U)
/*! watchdog - Clock enable for the ADSS watchdog. This is an 'enable ones' bit, which cannot be disabled again.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_WATCHDOG(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_WATCHDOG_SHIFT)) & CGU_ADSS_CLKENSET_WATCHDOG_MASK)

#define CGU_ADSS_CLKENSET_UART_MASK              (0x10000U)
#define CGU_ADSS_CLKENSET_UART_SHIFT             (16U)
/*! uart - ADSS debug uart clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_UART(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_UART_SHIFT)) & CGU_ADSS_CLKENSET_UART_MASK)

#define CGU_ADSS_CLKENSET_AXI_NSS_MASK           (0x20000U)
#define CGU_ADSS_CLKENSET_AXI_NSS_SHIFT          (17U)
/*! axi_nss - ADSS clock enable for the NSS input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_AXI_NSS(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_AXI_NSS_SHIFT)) & CGU_ADSS_CLKENSET_AXI_NSS_MASK)

#define CGU_ADSS_CLKENSET_AXI_CSS_MASK           (0x40000U)
#define CGU_ADSS_CLKENSET_AXI_CSS_SHIFT          (18U)
/*! axi_css - ADSS clock enable for the CtrlSS input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_AXI_CSS(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_AXI_CSS_SHIFT)) & CGU_ADSS_CLKENSET_AXI_CSS_MASK)

#define CGU_ADSS_CLKENSET_APB_MASK               (0x80000U)
#define CGU_ADSS_CLKENSET_APB_SHIFT              (19U)
/*! apb - ADSS apb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_APB(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_APB_SHIFT)) & CGU_ADSS_CLKENSET_APB_MASK)

#define CGU_ADSS_CLKENSET_DP0_MASK               (0x100000U)
#define CGU_ADSS_CLKENSET_DP0_SHIFT              (20U)
/*! dp0 - Dataport 0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_DP0(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_DP0_SHIFT)) & CGU_ADSS_CLKENSET_DP0_MASK)

#define CGU_ADSS_CLKENSET_DP1_MASK               (0x200000U)
#define CGU_ADSS_CLKENSET_DP1_SHIFT              (21U)
/*! dp1 - Dataport 1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_DP1(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_DP1_SHIFT)) & CGU_ADSS_CLKENSET_DP1_MASK)

#define CGU_ADSS_CLKENSET_DP2_MASK               (0x400000U)
#define CGU_ADSS_CLKENSET_DP2_SHIFT              (22U)
/*! dp2 - Dataport 2 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_DP2(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_DP2_SHIFT)) & CGU_ADSS_CLKENSET_DP2_MASK)

#define CGU_ADSS_CLKENSET_DP3_MASK               (0x800000U)
#define CGU_ADSS_CLKENSET_DP3_SHIFT              (23U)
/*! dp3 - Dataport 3 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_DP3(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_DP3_SHIFT)) & CGU_ADSS_CLKENSET_DP3_MASK)

#define CGU_ADSS_CLKENSET_IRFIC_MASK             (0x1000000U)
#define CGU_ADSS_CLKENSET_IRFIC_SHIFT            (24U)
/*! irfic - RF interface main clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENSET_IRFIC(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENSET_IRFIC_SHIFT)) & CGU_ADSS_CLKENSET_IRFIC_MASK)
/*! @} */

/*! @name ADSS_CLKENCLR - Register to clear bits in adss_clkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_ADSS_CLKENCLR_DSP_SYS_MASK           (0x1U)
#define CGU_ADSS_CLKENCLR_DSP_SYS_SHIFT          (0U)
/*! dsp_sys - DSP3 main clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_DSP_SYS(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_DSP_SYS_SHIFT)) & CGU_ADSS_CLKENCLR_DSP_SYS_MASK)

#define CGU_ADSS_CLKENCLR_DSP_COMM_MASK          (0x2U)
#define CGU_ADSS_CLKENCLR_DSP_COMM_SHIFT         (1U)
/*! dsp_comm - ADSS clock enable for access to e.g. the memories.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_DSP_COMM(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_DSP_COMM_SHIFT)) & CGU_ADSS_CLKENCLR_DSP_COMM_MASK)

#define CGU_ADSS_CLKENCLR_HIFI5_MASK             (0x4U)
#define CGU_ADSS_CLKENCLR_HIFI5_SHIFT            (2U)
/*! hifi5 - Hifi5s processor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_HIFI5(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_HIFI5_SHIFT)) & CGU_ADSS_CLKENCLR_HIFI5_MASK)

#define CGU_ADSS_CLKENCLR_DSP0_NOSTEAL_MASK      (0x8U)
#define CGU_ADSS_CLKENCLR_DSP0_NOSTEAL_SHIFT     (3U)
/*! dsp0_nosteal - Enables the DSP3 0 nosteal clock.<br> The actual DSP3 0 clock is a gated version
 *    of this clock<br> where pulses are stolen based on the HW load averaging algorithm.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_DSP0_NOSTEAL(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_DSP0_NOSTEAL_SHIFT)) & CGU_ADSS_CLKENCLR_DSP0_NOSTEAL_MASK)

#define CGU_ADSS_CLKENCLR_DSP1_NOSTEAL_MASK      (0x10U)
#define CGU_ADSS_CLKENCLR_DSP1_NOSTEAL_SHIFT     (4U)
/*! dsp1_nosteal - Enables the DSP3 1 nosteal clock.<br> The actual DSP3 1 clock is a gated version
 *    of this clock<br> where pulses are stolen based on the HW load averaging algorithm.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_DSP1_NOSTEAL(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_DSP1_NOSTEAL_SHIFT)) & CGU_ADSS_CLKENCLR_DSP1_NOSTEAL_MASK)

#define CGU_ADSS_CLKENCLR_DSP_DEBUG_MASK         (0x20U)
#define CGU_ADSS_CLKENCLR_DSP_DEBUG_SHIFT        (5U)
/*! dsp_debug - DSP debug clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_DSP_DEBUG(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_DSP_DEBUG_SHIFT)) & CGU_ADSS_CLKENCLR_DSP_DEBUG_MASK)

#define CGU_ADSS_CLKENCLR_PCACHE0_MASK           (0x40U)
#define CGU_ADSS_CLKENCLR_PCACHE0_SHIFT          (6U)
/*! pcache0 - ADSS pcache0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_PCACHE0(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_PCACHE0_SHIFT)) & CGU_ADSS_CLKENCLR_PCACHE0_MASK)

#define CGU_ADSS_CLKENCLR_DCACHE0_MASK           (0x80U)
#define CGU_ADSS_CLKENCLR_DCACHE0_SHIFT          (7U)
/*! dcache0 - ADSS dcache0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_DCACHE0(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_DCACHE0_SHIFT)) & CGU_ADSS_CLKENCLR_DCACHE0_MASK)

#define CGU_ADSS_CLKENCLR_PCACHE1_MASK           (0x100U)
#define CGU_ADSS_CLKENCLR_PCACHE1_SHIFT          (8U)
/*! pcache1 - ADSS pcache1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_PCACHE1(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_PCACHE1_SHIFT)) & CGU_ADSS_CLKENCLR_PCACHE1_MASK)

#define CGU_ADSS_CLKENCLR_DCACHE1_MASK           (0x200U)
#define CGU_ADSS_CLKENCLR_DCACHE1_SHIFT          (9U)
/*! dcache1 - ADSS dcache1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_DCACHE1(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_DCACHE1_SHIFT)) & CGU_ADSS_CLKENCLR_DCACHE1_MASK)

#define CGU_ADSS_CLKENCLR_HSI_MASK               (0x400U)
#define CGU_ADSS_CLKENCLR_HSI_SHIFT              (10U)
/*! hsi - ADSS HSI clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_HSI(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_HSI_SHIFT)) & CGU_ADSS_CLKENCLR_HSI_MASK)

#define CGU_ADSS_CLKENCLR_PERFMON_MASK           (0x800U)
#define CGU_ADSS_CLKENCLR_PERFMON_SHIFT          (11U)
/*! perfmon - ADSS performance monitor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_PERFMON(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_PERFMON_SHIFT)) & CGU_ADSS_CLKENCLR_PERFMON_MASK)

#define CGU_ADSS_CLKENCLR_SDMAC_MASK             (0x1000U)
#define CGU_ADSS_CLKENCLR_SDMAC_SHIFT            (12U)
/*! sdmac - Streaming DMA controller clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_SDMAC(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_SDMAC_SHIFT)) & CGU_ADSS_CLKENCLR_SDMAC_MASK)

#define CGU_ADSS_CLKENCLR_TMR_MASK               (0x2000U)
#define CGU_ADSS_CLKENCLR_TMR_SHIFT              (13U)
/*! tmr - ADSS timer clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_TMR(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_TMR_SHIFT)) & CGU_ADSS_CLKENCLR_TMR_MASK)

#define CGU_ADSS_CLKENCLR_MC_TMR_MASK            (0x4000U)
#define CGU_ADSS_CLKENCLR_MC_TMR_SHIFT           (14U)
/*! mc_tmr - ADSS multi-channel timer clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_MC_TMR(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_MC_TMR_SHIFT)) & CGU_ADSS_CLKENCLR_MC_TMR_MASK)

#define CGU_ADSS_CLKENCLR_WATCHDOG_MASK          (0x8000U)
#define CGU_ADSS_CLKENCLR_WATCHDOG_SHIFT         (15U)
/*! watchdog - Clock enable for the ADSS watchdog. This is an 'enable ones' bit, which cannot be disabled again.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_WATCHDOG(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_WATCHDOG_SHIFT)) & CGU_ADSS_CLKENCLR_WATCHDOG_MASK)

#define CGU_ADSS_CLKENCLR_UART_MASK              (0x10000U)
#define CGU_ADSS_CLKENCLR_UART_SHIFT             (16U)
/*! uart - ADSS debug uart clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_UART(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_UART_SHIFT)) & CGU_ADSS_CLKENCLR_UART_MASK)

#define CGU_ADSS_CLKENCLR_AXI_NSS_MASK           (0x20000U)
#define CGU_ADSS_CLKENCLR_AXI_NSS_SHIFT          (17U)
/*! axi_nss - ADSS clock enable for the NSS input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_AXI_NSS(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_AXI_NSS_SHIFT)) & CGU_ADSS_CLKENCLR_AXI_NSS_MASK)

#define CGU_ADSS_CLKENCLR_AXI_CSS_MASK           (0x40000U)
#define CGU_ADSS_CLKENCLR_AXI_CSS_SHIFT          (18U)
/*! axi_css - ADSS clock enable for the CtrlSS input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_AXI_CSS(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_AXI_CSS_SHIFT)) & CGU_ADSS_CLKENCLR_AXI_CSS_MASK)

#define CGU_ADSS_CLKENCLR_APB_MASK               (0x80000U)
#define CGU_ADSS_CLKENCLR_APB_SHIFT              (19U)
/*! apb - ADSS apb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_APB(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_APB_SHIFT)) & CGU_ADSS_CLKENCLR_APB_MASK)

#define CGU_ADSS_CLKENCLR_DP0_MASK               (0x100000U)
#define CGU_ADSS_CLKENCLR_DP0_SHIFT              (20U)
/*! dp0 - Dataport 0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_DP0(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_DP0_SHIFT)) & CGU_ADSS_CLKENCLR_DP0_MASK)

#define CGU_ADSS_CLKENCLR_DP1_MASK               (0x200000U)
#define CGU_ADSS_CLKENCLR_DP1_SHIFT              (21U)
/*! dp1 - Dataport 1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_DP1(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_DP1_SHIFT)) & CGU_ADSS_CLKENCLR_DP1_MASK)

#define CGU_ADSS_CLKENCLR_DP2_MASK               (0x400000U)
#define CGU_ADSS_CLKENCLR_DP2_SHIFT              (22U)
/*! dp2 - Dataport 2 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_DP2(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_DP2_SHIFT)) & CGU_ADSS_CLKENCLR_DP2_MASK)

#define CGU_ADSS_CLKENCLR_DP3_MASK               (0x800000U)
#define CGU_ADSS_CLKENCLR_DP3_SHIFT              (23U)
/*! dp3 - Dataport 3 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_DP3(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_DP3_SHIFT)) & CGU_ADSS_CLKENCLR_DP3_MASK)

#define CGU_ADSS_CLKENCLR_IRFIC_MASK             (0x1000000U)
#define CGU_ADSS_CLKENCLR_IRFIC_SHIFT            (24U)
/*! irfic - RF interface main clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_CLKENCLR_IRFIC(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLKENCLR_IRFIC_SHIFT)) & CGU_ADSS_CLKENCLR_IRFIC_MASK)
/*! @} */

/*! @name ADSS_DS_CLKEN - Deepsleep ADSS module clock enable override.<br> The value of this register will be and'ed with the actual busclken to define the<br> setting during deepsleep. */
/*! @{ */

#define CGU_ADSS_DS_CLKEN_DSP_SYS_MASK           (0x1U)
#define CGU_ADSS_DS_CLKEN_DSP_SYS_SHIFT          (0U)
/*! dsp_sys - DSP3 main clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_DSP_SYS(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_DSP_SYS_SHIFT)) & CGU_ADSS_DS_CLKEN_DSP_SYS_MASK)

#define CGU_ADSS_DS_CLKEN_DSP_COMM_MASK          (0x2U)
#define CGU_ADSS_DS_CLKEN_DSP_COMM_SHIFT         (1U)
/*! dsp_comm - ADSS clock enable for access to e.g. the memories.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_DSP_COMM(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_DSP_COMM_SHIFT)) & CGU_ADSS_DS_CLKEN_DSP_COMM_MASK)

#define CGU_ADSS_DS_CLKEN_HIFI5_MASK             (0x4U)
#define CGU_ADSS_DS_CLKEN_HIFI5_SHIFT            (2U)
/*! hifi5 - Hifi5s processor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_HIFI5(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_HIFI5_SHIFT)) & CGU_ADSS_DS_CLKEN_HIFI5_MASK)

#define CGU_ADSS_DS_CLKEN_DSP0_NOSTEAL_MASK      (0x8U)
#define CGU_ADSS_DS_CLKEN_DSP0_NOSTEAL_SHIFT     (3U)
/*! dsp0_nosteal - Enables the DSP3 0 nosteal clock.<br> The actual DSP3 0 clock is a gated version
 *    of this clock<br> where pulses are stolen based on the HW load averaging algorithm.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_DSP0_NOSTEAL(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_DSP0_NOSTEAL_SHIFT)) & CGU_ADSS_DS_CLKEN_DSP0_NOSTEAL_MASK)

#define CGU_ADSS_DS_CLKEN_DSP1_NOSTEAL_MASK      (0x10U)
#define CGU_ADSS_DS_CLKEN_DSP1_NOSTEAL_SHIFT     (4U)
/*! dsp1_nosteal - Enables the DSP3 1 nosteal clock.<br> The actual DSP3 1 clock is a gated version
 *    of this clock<br> where pulses are stolen based on the HW load averaging algorithm.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_DSP1_NOSTEAL(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_DSP1_NOSTEAL_SHIFT)) & CGU_ADSS_DS_CLKEN_DSP1_NOSTEAL_MASK)

#define CGU_ADSS_DS_CLKEN_DSP_DEBUG_MASK         (0x20U)
#define CGU_ADSS_DS_CLKEN_DSP_DEBUG_SHIFT        (5U)
/*! dsp_debug - DSP debug clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_DSP_DEBUG(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_DSP_DEBUG_SHIFT)) & CGU_ADSS_DS_CLKEN_DSP_DEBUG_MASK)

#define CGU_ADSS_DS_CLKEN_PCACHE0_MASK           (0x40U)
#define CGU_ADSS_DS_CLKEN_PCACHE0_SHIFT          (6U)
/*! pcache0 - ADSS pcache0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_PCACHE0(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_PCACHE0_SHIFT)) & CGU_ADSS_DS_CLKEN_PCACHE0_MASK)

#define CGU_ADSS_DS_CLKEN_DCACHE0_MASK           (0x80U)
#define CGU_ADSS_DS_CLKEN_DCACHE0_SHIFT          (7U)
/*! dcache0 - ADSS dcache0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_DCACHE0(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_DCACHE0_SHIFT)) & CGU_ADSS_DS_CLKEN_DCACHE0_MASK)

#define CGU_ADSS_DS_CLKEN_PCACHE1_MASK           (0x100U)
#define CGU_ADSS_DS_CLKEN_PCACHE1_SHIFT          (8U)
/*! pcache1 - ADSS pcache1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_PCACHE1(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_PCACHE1_SHIFT)) & CGU_ADSS_DS_CLKEN_PCACHE1_MASK)

#define CGU_ADSS_DS_CLKEN_DCACHE1_MASK           (0x200U)
#define CGU_ADSS_DS_CLKEN_DCACHE1_SHIFT          (9U)
/*! dcache1 - ADSS dcache1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_DCACHE1(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_DCACHE1_SHIFT)) & CGU_ADSS_DS_CLKEN_DCACHE1_MASK)

#define CGU_ADSS_DS_CLKEN_HSI_MASK               (0x400U)
#define CGU_ADSS_DS_CLKEN_HSI_SHIFT              (10U)
/*! hsi - ADSS HSI clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_HSI(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_HSI_SHIFT)) & CGU_ADSS_DS_CLKEN_HSI_MASK)

#define CGU_ADSS_DS_CLKEN_PERFMON_MASK           (0x800U)
#define CGU_ADSS_DS_CLKEN_PERFMON_SHIFT          (11U)
/*! perfmon - ADSS performance monitor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_PERFMON(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_PERFMON_SHIFT)) & CGU_ADSS_DS_CLKEN_PERFMON_MASK)

#define CGU_ADSS_DS_CLKEN_SDMAC_MASK             (0x1000U)
#define CGU_ADSS_DS_CLKEN_SDMAC_SHIFT            (12U)
/*! sdmac - Streaming DMA controller clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_SDMAC(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_SDMAC_SHIFT)) & CGU_ADSS_DS_CLKEN_SDMAC_MASK)

#define CGU_ADSS_DS_CLKEN_TMR_MASK               (0x2000U)
#define CGU_ADSS_DS_CLKEN_TMR_SHIFT              (13U)
/*! tmr - ADSS timer clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_TMR(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_TMR_SHIFT)) & CGU_ADSS_DS_CLKEN_TMR_MASK)

#define CGU_ADSS_DS_CLKEN_MC_TMR_MASK            (0x4000U)
#define CGU_ADSS_DS_CLKEN_MC_TMR_SHIFT           (14U)
/*! mc_tmr - ADSS multi-channel timer clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_MC_TMR(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_MC_TMR_SHIFT)) & CGU_ADSS_DS_CLKEN_MC_TMR_MASK)

#define CGU_ADSS_DS_CLKEN_WATCHDOG_MASK          (0x8000U)
#define CGU_ADSS_DS_CLKEN_WATCHDOG_SHIFT         (15U)
/*! watchdog - Clock enable for the ADSS watchdog. This is an 'enable ones' bit, which cannot be disabled again.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_WATCHDOG(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_WATCHDOG_SHIFT)) & CGU_ADSS_DS_CLKEN_WATCHDOG_MASK)

#define CGU_ADSS_DS_CLKEN_UART_MASK              (0x10000U)
#define CGU_ADSS_DS_CLKEN_UART_SHIFT             (16U)
/*! uart - ADSS debug uart clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_UART(x)                (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_UART_SHIFT)) & CGU_ADSS_DS_CLKEN_UART_MASK)

#define CGU_ADSS_DS_CLKEN_AXI_NSS_MASK           (0x20000U)
#define CGU_ADSS_DS_CLKEN_AXI_NSS_SHIFT          (17U)
/*! axi_nss - ADSS clock enable for the NSS input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_AXI_NSS(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_AXI_NSS_SHIFT)) & CGU_ADSS_DS_CLKEN_AXI_NSS_MASK)

#define CGU_ADSS_DS_CLKEN_AXI_CSS_MASK           (0x40000U)
#define CGU_ADSS_DS_CLKEN_AXI_CSS_SHIFT          (18U)
/*! axi_css - ADSS clock enable for the CtrlSS input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_AXI_CSS(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_AXI_CSS_SHIFT)) & CGU_ADSS_DS_CLKEN_AXI_CSS_MASK)

#define CGU_ADSS_DS_CLKEN_APB_MASK               (0x80000U)
#define CGU_ADSS_DS_CLKEN_APB_SHIFT              (19U)
/*! apb - ADSS apb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_APB(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_APB_SHIFT)) & CGU_ADSS_DS_CLKEN_APB_MASK)

#define CGU_ADSS_DS_CLKEN_DP0_MASK               (0x100000U)
#define CGU_ADSS_DS_CLKEN_DP0_SHIFT              (20U)
/*! dp0 - Dataport 0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_DP0(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_DP0_SHIFT)) & CGU_ADSS_DS_CLKEN_DP0_MASK)

#define CGU_ADSS_DS_CLKEN_DP1_MASK               (0x200000U)
#define CGU_ADSS_DS_CLKEN_DP1_SHIFT              (21U)
/*! dp1 - Dataport 1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_DP1(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_DP1_SHIFT)) & CGU_ADSS_DS_CLKEN_DP1_MASK)

#define CGU_ADSS_DS_CLKEN_DP2_MASK               (0x400000U)
#define CGU_ADSS_DS_CLKEN_DP2_SHIFT              (22U)
/*! dp2 - Dataport 2 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_DP2(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_DP2_SHIFT)) & CGU_ADSS_DS_CLKEN_DP2_MASK)

#define CGU_ADSS_DS_CLKEN_DP3_MASK               (0x800000U)
#define CGU_ADSS_DS_CLKEN_DP3_SHIFT              (23U)
/*! dp3 - Dataport 3 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_DP3(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_DP3_SHIFT)) & CGU_ADSS_DS_CLKEN_DP3_MASK)

#define CGU_ADSS_DS_CLKEN_IRFIC_MASK             (0x1000000U)
#define CGU_ADSS_DS_CLKEN_IRFIC_SHIFT            (24U)
/*! irfic - RF interface main clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKEN_IRFIC(x)               (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKEN_IRFIC_SHIFT)) & CGU_ADSS_DS_CLKEN_IRFIC_MASK)
/*! @} */

/*! @name ADSS_DS_CLKENSET - Register to set bits in adss_ds_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_ADSS_DS_CLKENSET_DSP_SYS_MASK        (0x1U)
#define CGU_ADSS_DS_CLKENSET_DSP_SYS_SHIFT       (0U)
/*! dsp_sys - DSP3 main clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_DSP_SYS(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_DSP_SYS_SHIFT)) & CGU_ADSS_DS_CLKENSET_DSP_SYS_MASK)

#define CGU_ADSS_DS_CLKENSET_DSP_COMM_MASK       (0x2U)
#define CGU_ADSS_DS_CLKENSET_DSP_COMM_SHIFT      (1U)
/*! dsp_comm - ADSS clock enable for access to e.g. the memories.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_DSP_COMM(x)         (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_DSP_COMM_SHIFT)) & CGU_ADSS_DS_CLKENSET_DSP_COMM_MASK)

#define CGU_ADSS_DS_CLKENSET_HIFI5_MASK          (0x4U)
#define CGU_ADSS_DS_CLKENSET_HIFI5_SHIFT         (2U)
/*! hifi5 - Hifi5s processor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_HIFI5(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_HIFI5_SHIFT)) & CGU_ADSS_DS_CLKENSET_HIFI5_MASK)

#define CGU_ADSS_DS_CLKENSET_DSP0_NOSTEAL_MASK   (0x8U)
#define CGU_ADSS_DS_CLKENSET_DSP0_NOSTEAL_SHIFT  (3U)
/*! dsp0_nosteal - Enables the DSP3 0 nosteal clock.<br> The actual DSP3 0 clock is a gated version
 *    of this clock<br> where pulses are stolen based on the HW load averaging algorithm.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_DSP0_NOSTEAL(x)     (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_DSP0_NOSTEAL_SHIFT)) & CGU_ADSS_DS_CLKENSET_DSP0_NOSTEAL_MASK)

#define CGU_ADSS_DS_CLKENSET_DSP1_NOSTEAL_MASK   (0x10U)
#define CGU_ADSS_DS_CLKENSET_DSP1_NOSTEAL_SHIFT  (4U)
/*! dsp1_nosteal - Enables the DSP3 1 nosteal clock.<br> The actual DSP3 1 clock is a gated version
 *    of this clock<br> where pulses are stolen based on the HW load averaging algorithm.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_DSP1_NOSTEAL(x)     (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_DSP1_NOSTEAL_SHIFT)) & CGU_ADSS_DS_CLKENSET_DSP1_NOSTEAL_MASK)

#define CGU_ADSS_DS_CLKENSET_DSP_DEBUG_MASK      (0x20U)
#define CGU_ADSS_DS_CLKENSET_DSP_DEBUG_SHIFT     (5U)
/*! dsp_debug - DSP debug clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_DSP_DEBUG(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_DSP_DEBUG_SHIFT)) & CGU_ADSS_DS_CLKENSET_DSP_DEBUG_MASK)

#define CGU_ADSS_DS_CLKENSET_PCACHE0_MASK        (0x40U)
#define CGU_ADSS_DS_CLKENSET_PCACHE0_SHIFT       (6U)
/*! pcache0 - ADSS pcache0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_PCACHE0(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_PCACHE0_SHIFT)) & CGU_ADSS_DS_CLKENSET_PCACHE0_MASK)

#define CGU_ADSS_DS_CLKENSET_DCACHE0_MASK        (0x80U)
#define CGU_ADSS_DS_CLKENSET_DCACHE0_SHIFT       (7U)
/*! dcache0 - ADSS dcache0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_DCACHE0(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_DCACHE0_SHIFT)) & CGU_ADSS_DS_CLKENSET_DCACHE0_MASK)

#define CGU_ADSS_DS_CLKENSET_PCACHE1_MASK        (0x100U)
#define CGU_ADSS_DS_CLKENSET_PCACHE1_SHIFT       (8U)
/*! pcache1 - ADSS pcache1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_PCACHE1(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_PCACHE1_SHIFT)) & CGU_ADSS_DS_CLKENSET_PCACHE1_MASK)

#define CGU_ADSS_DS_CLKENSET_DCACHE1_MASK        (0x200U)
#define CGU_ADSS_DS_CLKENSET_DCACHE1_SHIFT       (9U)
/*! dcache1 - ADSS dcache1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_DCACHE1(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_DCACHE1_SHIFT)) & CGU_ADSS_DS_CLKENSET_DCACHE1_MASK)

#define CGU_ADSS_DS_CLKENSET_HSI_MASK            (0x400U)
#define CGU_ADSS_DS_CLKENSET_HSI_SHIFT           (10U)
/*! hsi - ADSS HSI clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_HSI(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_HSI_SHIFT)) & CGU_ADSS_DS_CLKENSET_HSI_MASK)

#define CGU_ADSS_DS_CLKENSET_PERFMON_MASK        (0x800U)
#define CGU_ADSS_DS_CLKENSET_PERFMON_SHIFT       (11U)
/*! perfmon - ADSS performance monitor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_PERFMON(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_PERFMON_SHIFT)) & CGU_ADSS_DS_CLKENSET_PERFMON_MASK)

#define CGU_ADSS_DS_CLKENSET_SDMAC_MASK          (0x1000U)
#define CGU_ADSS_DS_CLKENSET_SDMAC_SHIFT         (12U)
/*! sdmac - Streaming DMA controller clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_SDMAC(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_SDMAC_SHIFT)) & CGU_ADSS_DS_CLKENSET_SDMAC_MASK)

#define CGU_ADSS_DS_CLKENSET_TMR_MASK            (0x2000U)
#define CGU_ADSS_DS_CLKENSET_TMR_SHIFT           (13U)
/*! tmr - ADSS timer clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_TMR(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_TMR_SHIFT)) & CGU_ADSS_DS_CLKENSET_TMR_MASK)

#define CGU_ADSS_DS_CLKENSET_MC_TMR_MASK         (0x4000U)
#define CGU_ADSS_DS_CLKENSET_MC_TMR_SHIFT        (14U)
/*! mc_tmr - ADSS multi-channel timer clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_MC_TMR(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_MC_TMR_SHIFT)) & CGU_ADSS_DS_CLKENSET_MC_TMR_MASK)

#define CGU_ADSS_DS_CLKENSET_WATCHDOG_MASK       (0x8000U)
#define CGU_ADSS_DS_CLKENSET_WATCHDOG_SHIFT      (15U)
/*! watchdog - Clock enable for the ADSS watchdog. This is an 'enable ones' bit, which cannot be disabled again.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_WATCHDOG(x)         (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_WATCHDOG_SHIFT)) & CGU_ADSS_DS_CLKENSET_WATCHDOG_MASK)

#define CGU_ADSS_DS_CLKENSET_UART_MASK           (0x10000U)
#define CGU_ADSS_DS_CLKENSET_UART_SHIFT          (16U)
/*! uart - ADSS debug uart clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_UART(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_UART_SHIFT)) & CGU_ADSS_DS_CLKENSET_UART_MASK)

#define CGU_ADSS_DS_CLKENSET_AXI_NSS_MASK        (0x20000U)
#define CGU_ADSS_DS_CLKENSET_AXI_NSS_SHIFT       (17U)
/*! axi_nss - ADSS clock enable for the NSS input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_AXI_NSS(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_AXI_NSS_SHIFT)) & CGU_ADSS_DS_CLKENSET_AXI_NSS_MASK)

#define CGU_ADSS_DS_CLKENSET_AXI_CSS_MASK        (0x40000U)
#define CGU_ADSS_DS_CLKENSET_AXI_CSS_SHIFT       (18U)
/*! axi_css - ADSS clock enable for the CtrlSS input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_AXI_CSS(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_AXI_CSS_SHIFT)) & CGU_ADSS_DS_CLKENSET_AXI_CSS_MASK)

#define CGU_ADSS_DS_CLKENSET_APB_MASK            (0x80000U)
#define CGU_ADSS_DS_CLKENSET_APB_SHIFT           (19U)
/*! apb - ADSS apb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_APB(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_APB_SHIFT)) & CGU_ADSS_DS_CLKENSET_APB_MASK)

#define CGU_ADSS_DS_CLKENSET_DP0_MASK            (0x100000U)
#define CGU_ADSS_DS_CLKENSET_DP0_SHIFT           (20U)
/*! dp0 - Dataport 0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_DP0(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_DP0_SHIFT)) & CGU_ADSS_DS_CLKENSET_DP0_MASK)

#define CGU_ADSS_DS_CLKENSET_DP1_MASK            (0x200000U)
#define CGU_ADSS_DS_CLKENSET_DP1_SHIFT           (21U)
/*! dp1 - Dataport 1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_DP1(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_DP1_SHIFT)) & CGU_ADSS_DS_CLKENSET_DP1_MASK)

#define CGU_ADSS_DS_CLKENSET_DP2_MASK            (0x400000U)
#define CGU_ADSS_DS_CLKENSET_DP2_SHIFT           (22U)
/*! dp2 - Dataport 2 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_DP2(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_DP2_SHIFT)) & CGU_ADSS_DS_CLKENSET_DP2_MASK)

#define CGU_ADSS_DS_CLKENSET_DP3_MASK            (0x800000U)
#define CGU_ADSS_DS_CLKENSET_DP3_SHIFT           (23U)
/*! dp3 - Dataport 3 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_DP3(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_DP3_SHIFT)) & CGU_ADSS_DS_CLKENSET_DP3_MASK)

#define CGU_ADSS_DS_CLKENSET_IRFIC_MASK          (0x1000000U)
#define CGU_ADSS_DS_CLKENSET_IRFIC_SHIFT         (24U)
/*! irfic - RF interface main clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENSET_IRFIC(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENSET_IRFIC_SHIFT)) & CGU_ADSS_DS_CLKENSET_IRFIC_MASK)
/*! @} */

/*! @name ADSS_DS_CLKENCLR - Register to clear bits in adss_ds_clkEnClr.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_ADSS_DS_CLKENCLR_DSP_SYS_MASK        (0x1U)
#define CGU_ADSS_DS_CLKENCLR_DSP_SYS_SHIFT       (0U)
/*! dsp_sys - DSP3 main clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_DSP_SYS(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_DSP_SYS_SHIFT)) & CGU_ADSS_DS_CLKENCLR_DSP_SYS_MASK)

#define CGU_ADSS_DS_CLKENCLR_DSP_COMM_MASK       (0x2U)
#define CGU_ADSS_DS_CLKENCLR_DSP_COMM_SHIFT      (1U)
/*! dsp_comm - ADSS clock enable for access to e.g. the memories.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_DSP_COMM(x)         (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_DSP_COMM_SHIFT)) & CGU_ADSS_DS_CLKENCLR_DSP_COMM_MASK)

#define CGU_ADSS_DS_CLKENCLR_HIFI5_MASK          (0x4U)
#define CGU_ADSS_DS_CLKENCLR_HIFI5_SHIFT         (2U)
/*! hifi5 - Hifi5s processor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_HIFI5(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_HIFI5_SHIFT)) & CGU_ADSS_DS_CLKENCLR_HIFI5_MASK)

#define CGU_ADSS_DS_CLKENCLR_DSP0_NOSTEAL_MASK   (0x8U)
#define CGU_ADSS_DS_CLKENCLR_DSP0_NOSTEAL_SHIFT  (3U)
/*! dsp0_nosteal - Enables the DSP3 0 nosteal clock.<br> The actual DSP3 0 clock is a gated version
 *    of this clock<br> where pulses are stolen based on the HW load averaging algorithm.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_DSP0_NOSTEAL(x)     (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_DSP0_NOSTEAL_SHIFT)) & CGU_ADSS_DS_CLKENCLR_DSP0_NOSTEAL_MASK)

#define CGU_ADSS_DS_CLKENCLR_DSP1_NOSTEAL_MASK   (0x10U)
#define CGU_ADSS_DS_CLKENCLR_DSP1_NOSTEAL_SHIFT  (4U)
/*! dsp1_nosteal - Enables the DSP3 1 nosteal clock.<br> The actual DSP3 1 clock is a gated version
 *    of this clock<br> where pulses are stolen based on the HW load averaging algorithm.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_DSP1_NOSTEAL(x)     (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_DSP1_NOSTEAL_SHIFT)) & CGU_ADSS_DS_CLKENCLR_DSP1_NOSTEAL_MASK)

#define CGU_ADSS_DS_CLKENCLR_DSP_DEBUG_MASK      (0x20U)
#define CGU_ADSS_DS_CLKENCLR_DSP_DEBUG_SHIFT     (5U)
/*! dsp_debug - DSP debug clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_DSP_DEBUG(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_DSP_DEBUG_SHIFT)) & CGU_ADSS_DS_CLKENCLR_DSP_DEBUG_MASK)

#define CGU_ADSS_DS_CLKENCLR_PCACHE0_MASK        (0x40U)
#define CGU_ADSS_DS_CLKENCLR_PCACHE0_SHIFT       (6U)
/*! pcache0 - ADSS pcache0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_PCACHE0(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_PCACHE0_SHIFT)) & CGU_ADSS_DS_CLKENCLR_PCACHE0_MASK)

#define CGU_ADSS_DS_CLKENCLR_DCACHE0_MASK        (0x80U)
#define CGU_ADSS_DS_CLKENCLR_DCACHE0_SHIFT       (7U)
/*! dcache0 - ADSS dcache0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_DCACHE0(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_DCACHE0_SHIFT)) & CGU_ADSS_DS_CLKENCLR_DCACHE0_MASK)

#define CGU_ADSS_DS_CLKENCLR_PCACHE1_MASK        (0x100U)
#define CGU_ADSS_DS_CLKENCLR_PCACHE1_SHIFT       (8U)
/*! pcache1 - ADSS pcache1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_PCACHE1(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_PCACHE1_SHIFT)) & CGU_ADSS_DS_CLKENCLR_PCACHE1_MASK)

#define CGU_ADSS_DS_CLKENCLR_DCACHE1_MASK        (0x200U)
#define CGU_ADSS_DS_CLKENCLR_DCACHE1_SHIFT       (9U)
/*! dcache1 - ADSS dcache1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_DCACHE1(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_DCACHE1_SHIFT)) & CGU_ADSS_DS_CLKENCLR_DCACHE1_MASK)

#define CGU_ADSS_DS_CLKENCLR_HSI_MASK            (0x400U)
#define CGU_ADSS_DS_CLKENCLR_HSI_SHIFT           (10U)
/*! hsi - ADSS HSI clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_HSI(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_HSI_SHIFT)) & CGU_ADSS_DS_CLKENCLR_HSI_MASK)

#define CGU_ADSS_DS_CLKENCLR_PERFMON_MASK        (0x800U)
#define CGU_ADSS_DS_CLKENCLR_PERFMON_SHIFT       (11U)
/*! perfmon - ADSS performance monitor clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_PERFMON(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_PERFMON_SHIFT)) & CGU_ADSS_DS_CLKENCLR_PERFMON_MASK)

#define CGU_ADSS_DS_CLKENCLR_SDMAC_MASK          (0x1000U)
#define CGU_ADSS_DS_CLKENCLR_SDMAC_SHIFT         (12U)
/*! sdmac - Streaming DMA controller clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_SDMAC(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_SDMAC_SHIFT)) & CGU_ADSS_DS_CLKENCLR_SDMAC_MASK)

#define CGU_ADSS_DS_CLKENCLR_TMR_MASK            (0x2000U)
#define CGU_ADSS_DS_CLKENCLR_TMR_SHIFT           (13U)
/*! tmr - ADSS timer clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_TMR(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_TMR_SHIFT)) & CGU_ADSS_DS_CLKENCLR_TMR_MASK)

#define CGU_ADSS_DS_CLKENCLR_MC_TMR_MASK         (0x4000U)
#define CGU_ADSS_DS_CLKENCLR_MC_TMR_SHIFT        (14U)
/*! mc_tmr - ADSS multi-channel timer clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_MC_TMR(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_MC_TMR_SHIFT)) & CGU_ADSS_DS_CLKENCLR_MC_TMR_MASK)

#define CGU_ADSS_DS_CLKENCLR_WATCHDOG_MASK       (0x8000U)
#define CGU_ADSS_DS_CLKENCLR_WATCHDOG_SHIFT      (15U)
/*! watchdog - Clock enable for the ADSS watchdog. This is an 'enable ones' bit, which cannot be disabled again.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_WATCHDOG(x)         (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_WATCHDOG_SHIFT)) & CGU_ADSS_DS_CLKENCLR_WATCHDOG_MASK)

#define CGU_ADSS_DS_CLKENCLR_UART_MASK           (0x10000U)
#define CGU_ADSS_DS_CLKENCLR_UART_SHIFT          (16U)
/*! uart - ADSS debug uart clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_UART(x)             (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_UART_SHIFT)) & CGU_ADSS_DS_CLKENCLR_UART_MASK)

#define CGU_ADSS_DS_CLKENCLR_AXI_NSS_MASK        (0x20000U)
#define CGU_ADSS_DS_CLKENCLR_AXI_NSS_SHIFT       (17U)
/*! axi_nss - ADSS clock enable for the NSS input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_AXI_NSS(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_AXI_NSS_SHIFT)) & CGU_ADSS_DS_CLKENCLR_AXI_NSS_MASK)

#define CGU_ADSS_DS_CLKENCLR_AXI_CSS_MASK        (0x40000U)
#define CGU_ADSS_DS_CLKENCLR_AXI_CSS_SHIFT       (18U)
/*! axi_css - ADSS clock enable for the CtrlSS input clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_AXI_CSS(x)          (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_AXI_CSS_SHIFT)) & CGU_ADSS_DS_CLKENCLR_AXI_CSS_MASK)

#define CGU_ADSS_DS_CLKENCLR_APB_MASK            (0x80000U)
#define CGU_ADSS_DS_CLKENCLR_APB_SHIFT           (19U)
/*! apb - ADSS apb clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_APB(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_APB_SHIFT)) & CGU_ADSS_DS_CLKENCLR_APB_MASK)

#define CGU_ADSS_DS_CLKENCLR_DP0_MASK            (0x100000U)
#define CGU_ADSS_DS_CLKENCLR_DP0_SHIFT           (20U)
/*! dp0 - Dataport 0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_DP0(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_DP0_SHIFT)) & CGU_ADSS_DS_CLKENCLR_DP0_MASK)

#define CGU_ADSS_DS_CLKENCLR_DP1_MASK            (0x200000U)
#define CGU_ADSS_DS_CLKENCLR_DP1_SHIFT           (21U)
/*! dp1 - Dataport 1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_DP1(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_DP1_SHIFT)) & CGU_ADSS_DS_CLKENCLR_DP1_MASK)

#define CGU_ADSS_DS_CLKENCLR_DP2_MASK            (0x400000U)
#define CGU_ADSS_DS_CLKENCLR_DP2_SHIFT           (22U)
/*! dp2 - Dataport 2 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_DP2(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_DP2_SHIFT)) & CGU_ADSS_DS_CLKENCLR_DP2_MASK)

#define CGU_ADSS_DS_CLKENCLR_DP3_MASK            (0x800000U)
#define CGU_ADSS_DS_CLKENCLR_DP3_SHIFT           (23U)
/*! dp3 - Dataport 3 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_DP3(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_DP3_SHIFT)) & CGU_ADSS_DS_CLKENCLR_DP3_MASK)

#define CGU_ADSS_DS_CLKENCLR_IRFIC_MASK          (0x1000000U)
#define CGU_ADSS_DS_CLKENCLR_IRFIC_SHIFT         (24U)
/*! irfic - RF interface main clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ADSS_DS_CLKENCLR_IRFIC(x)            (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_DS_CLKENCLR_IRFIC_SHIFT)) & CGU_ADSS_DS_CLKENCLR_IRFIC_MASK)
/*! @} */

/*! @name ANC_DMIC_CLKEN - Status register for the ANC/DMIC/Interpolator module clock enable.<br> The register indicates if the clock is enabled or disabled.<br> <br> 0: Clock is disabled<br> 1: Clock is enabled */
/*! @{ */

#define CGU_ANC_DMIC_CLKEN_CODEC_SYNC_MASK       (0x1U)
#define CGU_ANC_DMIC_CLKEN_CODEC_SYNC_SHIFT      (0U)
/*! codec_sync - Codec synchronisation clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKEN_CODEC_SYNC(x)         (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKEN_CODEC_SYNC_SHIFT)) & CGU_ANC_DMIC_CLKEN_CODEC_SYNC_MASK)

#define CGU_ANC_DMIC_CLKEN_CODEC_DEC_128FS_MASK  (0x2U)
#define CGU_ANC_DMIC_CLKEN_CODEC_DEC_128FS_SHIFT (1U)
/*! codec_dec_128fs - 128Fs decimator clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKEN_CODEC_DEC_128FS(x)    (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKEN_CODEC_DEC_128FS_SHIFT)) & CGU_ANC_DMIC_CLKEN_CODEC_DEC_128FS_MASK)

#define CGU_ANC_DMIC_CLKEN_CODEC_ANC_128FS_MASK  (0x4U)
#define CGU_ANC_DMIC_CLKEN_CODEC_ANC_128FS_SHIFT (2U)
/*! codec_anc_128fs - 128Fs active noise cancelation (ANC) clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKEN_CODEC_ANC_128FS(x)    (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKEN_CODEC_ANC_128FS_SHIFT)) & CGU_ANC_DMIC_CLKEN_CODEC_ANC_128FS_MASK)

#define CGU_ANC_DMIC_CLKEN_CODEC_INT_128FS_MASK  (0x8U)
#define CGU_ANC_DMIC_CLKEN_CODEC_INT_128FS_SHIFT (3U)
/*! codec_int_128fs - 128Fs interpolator clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKEN_CODEC_INT_128FS(x)    (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKEN_CODEC_INT_128FS_SHIFT)) & CGU_ANC_DMIC_CLKEN_CODEC_INT_128FS_MASK)

#define CGU_ANC_DMIC_CLKEN_SYNC_SRC_MASK         (0x10U)
#define CGU_ANC_DMIC_CLKEN_SYNC_SRC_SHIFT        (4U)
/*! sync_src - ADSS sync-source module clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKEN_SYNC_SRC(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKEN_SYNC_SRC_SHIFT)) & CGU_ANC_DMIC_CLKEN_SYNC_SRC_MASK)

#define CGU_ANC_DMIC_CLKEN_DMIC0_MASK            (0x20U)
#define CGU_ANC_DMIC_CLKEN_DMIC0_SHIFT           (5U)
/*! dmic0 - Digital microphone 0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKEN_DMIC0(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKEN_DMIC0_SHIFT)) & CGU_ANC_DMIC_CLKEN_DMIC0_MASK)

#define CGU_ANC_DMIC_CLKEN_DMIC1_MASK            (0x40U)
#define CGU_ANC_DMIC_CLKEN_DMIC1_SHIFT           (6U)
/*! dmic1 - Digital microphone 1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKEN_DMIC1(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKEN_DMIC1_SHIFT)) & CGU_ANC_DMIC_CLKEN_DMIC1_MASK)

#define CGU_ANC_DMIC_CLKEN_DMIC2_MASK            (0x80U)
#define CGU_ANC_DMIC_CLKEN_DMIC2_SHIFT           (7U)
/*! dmic2 - Digital microphone 2 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKEN_DMIC2(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKEN_DMIC2_SHIFT)) & CGU_ANC_DMIC_CLKEN_DMIC2_MASK)

#define CGU_ANC_DMIC_CLKEN_DMIC3_MASK            (0x100U)
#define CGU_ANC_DMIC_CLKEN_DMIC3_SHIFT           (8U)
/*! dmic3 - Digital microphone 3 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKEN_DMIC3(x)              (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKEN_DMIC3_SHIFT)) & CGU_ANC_DMIC_CLKEN_DMIC3_MASK)
/*! @} */

/*! @name ANC_DMIC_CLKENSET - Register to set bits in anc_dmic_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_ANC_DMIC_CLKENSET_CODEC_SYNC_MASK    (0x1U)
#define CGU_ANC_DMIC_CLKENSET_CODEC_SYNC_SHIFT   (0U)
/*! codec_sync - Codec synchronisation clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENSET_CODEC_SYNC(x)      (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENSET_CODEC_SYNC_SHIFT)) & CGU_ANC_DMIC_CLKENSET_CODEC_SYNC_MASK)

#define CGU_ANC_DMIC_CLKENSET_CODEC_DEC_128FS_MASK (0x2U)
#define CGU_ANC_DMIC_CLKENSET_CODEC_DEC_128FS_SHIFT (1U)
/*! codec_dec_128fs - 128Fs decimator clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENSET_CODEC_DEC_128FS(x) (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENSET_CODEC_DEC_128FS_SHIFT)) & CGU_ANC_DMIC_CLKENSET_CODEC_DEC_128FS_MASK)

#define CGU_ANC_DMIC_CLKENSET_CODEC_ANC_128FS_MASK (0x4U)
#define CGU_ANC_DMIC_CLKENSET_CODEC_ANC_128FS_SHIFT (2U)
/*! codec_anc_128fs - 128Fs active noise cancelation (ANC) clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENSET_CODEC_ANC_128FS(x) (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENSET_CODEC_ANC_128FS_SHIFT)) & CGU_ANC_DMIC_CLKENSET_CODEC_ANC_128FS_MASK)

#define CGU_ANC_DMIC_CLKENSET_CODEC_INT_128FS_MASK (0x8U)
#define CGU_ANC_DMIC_CLKENSET_CODEC_INT_128FS_SHIFT (3U)
/*! codec_int_128fs - 128Fs interpolator clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENSET_CODEC_INT_128FS(x) (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENSET_CODEC_INT_128FS_SHIFT)) & CGU_ANC_DMIC_CLKENSET_CODEC_INT_128FS_MASK)

#define CGU_ANC_DMIC_CLKENSET_SYNC_SRC_MASK      (0x10U)
#define CGU_ANC_DMIC_CLKENSET_SYNC_SRC_SHIFT     (4U)
/*! sync_src - ADSS sync-source module clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENSET_SYNC_SRC(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENSET_SYNC_SRC_SHIFT)) & CGU_ANC_DMIC_CLKENSET_SYNC_SRC_MASK)

#define CGU_ANC_DMIC_CLKENSET_DMIC0_MASK         (0x20U)
#define CGU_ANC_DMIC_CLKENSET_DMIC0_SHIFT        (5U)
/*! dmic0 - Digital microphone 0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENSET_DMIC0(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENSET_DMIC0_SHIFT)) & CGU_ANC_DMIC_CLKENSET_DMIC0_MASK)

#define CGU_ANC_DMIC_CLKENSET_DMIC1_MASK         (0x40U)
#define CGU_ANC_DMIC_CLKENSET_DMIC1_SHIFT        (6U)
/*! dmic1 - Digital microphone 1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENSET_DMIC1(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENSET_DMIC1_SHIFT)) & CGU_ANC_DMIC_CLKENSET_DMIC1_MASK)

#define CGU_ANC_DMIC_CLKENSET_DMIC2_MASK         (0x80U)
#define CGU_ANC_DMIC_CLKENSET_DMIC2_SHIFT        (7U)
/*! dmic2 - Digital microphone 2 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENSET_DMIC2(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENSET_DMIC2_SHIFT)) & CGU_ANC_DMIC_CLKENSET_DMIC2_MASK)

#define CGU_ANC_DMIC_CLKENSET_DMIC3_MASK         (0x100U)
#define CGU_ANC_DMIC_CLKENSET_DMIC3_SHIFT        (8U)
/*! dmic3 - Digital microphone 3 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENSET_DMIC3(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENSET_DMIC3_SHIFT)) & CGU_ANC_DMIC_CLKENSET_DMIC3_MASK)
/*! @} */

/*! @name ANC_DMIC_CLKENCLR - Register to clear bits in anc_dmic_clkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_ANC_DMIC_CLKENCLR_CODEC_SYNC_MASK    (0x1U)
#define CGU_ANC_DMIC_CLKENCLR_CODEC_SYNC_SHIFT   (0U)
/*! codec_sync - Codec synchronisation clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENCLR_CODEC_SYNC(x)      (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENCLR_CODEC_SYNC_SHIFT)) & CGU_ANC_DMIC_CLKENCLR_CODEC_SYNC_MASK)

#define CGU_ANC_DMIC_CLKENCLR_CODEC_DEC_128FS_MASK (0x2U)
#define CGU_ANC_DMIC_CLKENCLR_CODEC_DEC_128FS_SHIFT (1U)
/*! codec_dec_128fs - 128Fs decimator clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENCLR_CODEC_DEC_128FS(x) (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENCLR_CODEC_DEC_128FS_SHIFT)) & CGU_ANC_DMIC_CLKENCLR_CODEC_DEC_128FS_MASK)

#define CGU_ANC_DMIC_CLKENCLR_CODEC_ANC_128FS_MASK (0x4U)
#define CGU_ANC_DMIC_CLKENCLR_CODEC_ANC_128FS_SHIFT (2U)
/*! codec_anc_128fs - 128Fs active noise cancelation (ANC) clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENCLR_CODEC_ANC_128FS(x) (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENCLR_CODEC_ANC_128FS_SHIFT)) & CGU_ANC_DMIC_CLKENCLR_CODEC_ANC_128FS_MASK)

#define CGU_ANC_DMIC_CLKENCLR_CODEC_INT_128FS_MASK (0x8U)
#define CGU_ANC_DMIC_CLKENCLR_CODEC_INT_128FS_SHIFT (3U)
/*! codec_int_128fs - 128Fs interpolator clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENCLR_CODEC_INT_128FS(x) (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENCLR_CODEC_INT_128FS_SHIFT)) & CGU_ANC_DMIC_CLKENCLR_CODEC_INT_128FS_MASK)

#define CGU_ANC_DMIC_CLKENCLR_SYNC_SRC_MASK      (0x10U)
#define CGU_ANC_DMIC_CLKENCLR_SYNC_SRC_SHIFT     (4U)
/*! sync_src - ADSS sync-source module clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENCLR_SYNC_SRC(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENCLR_SYNC_SRC_SHIFT)) & CGU_ANC_DMIC_CLKENCLR_SYNC_SRC_MASK)

#define CGU_ANC_DMIC_CLKENCLR_DMIC0_MASK         (0x20U)
#define CGU_ANC_DMIC_CLKENCLR_DMIC0_SHIFT        (5U)
/*! dmic0 - Digital microphone 0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENCLR_DMIC0(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENCLR_DMIC0_SHIFT)) & CGU_ANC_DMIC_CLKENCLR_DMIC0_MASK)

#define CGU_ANC_DMIC_CLKENCLR_DMIC1_MASK         (0x40U)
#define CGU_ANC_DMIC_CLKENCLR_DMIC1_SHIFT        (6U)
/*! dmic1 - Digital microphone 1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENCLR_DMIC1(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENCLR_DMIC1_SHIFT)) & CGU_ANC_DMIC_CLKENCLR_DMIC1_MASK)

#define CGU_ANC_DMIC_CLKENCLR_DMIC2_MASK         (0x80U)
#define CGU_ANC_DMIC_CLKENCLR_DMIC2_SHIFT        (7U)
/*! dmic2 - Digital microphone 2 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENCLR_DMIC2(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENCLR_DMIC2_SHIFT)) & CGU_ANC_DMIC_CLKENCLR_DMIC2_MASK)

#define CGU_ANC_DMIC_CLKENCLR_DMIC3_MASK         (0x100U)
#define CGU_ANC_DMIC_CLKENCLR_DMIC3_SHIFT        (8U)
/*! dmic3 - Digital microphone 3 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_CLKENCLR_DMIC3(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_CLKENCLR_DMIC3_SHIFT)) & CGU_ANC_DMIC_CLKENCLR_DMIC3_MASK)
/*! @} */

/*! @name ANC_DMIC_DS_CLKEN - Deepsleep ANC/DMIC/Interpolator clock enable override.<br> The value of this register will be and'ed with the actual busclken to define the<br> setting during deepsleep. */
/*! @{ */

#define CGU_ANC_DMIC_DS_CLKEN_CODEC_SYNC_MASK    (0x1U)
#define CGU_ANC_DMIC_DS_CLKEN_CODEC_SYNC_SHIFT   (0U)
/*! codec_sync - Codec synchronisation clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKEN_CODEC_SYNC(x)      (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKEN_CODEC_SYNC_SHIFT)) & CGU_ANC_DMIC_DS_CLKEN_CODEC_SYNC_MASK)

#define CGU_ANC_DMIC_DS_CLKEN_CODEC_DEC_128FS_MASK (0x2U)
#define CGU_ANC_DMIC_DS_CLKEN_CODEC_DEC_128FS_SHIFT (1U)
/*! codec_dec_128fs - 128Fs decimator clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKEN_CODEC_DEC_128FS(x) (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKEN_CODEC_DEC_128FS_SHIFT)) & CGU_ANC_DMIC_DS_CLKEN_CODEC_DEC_128FS_MASK)

#define CGU_ANC_DMIC_DS_CLKEN_CODEC_ANC_128FS_MASK (0x4U)
#define CGU_ANC_DMIC_DS_CLKEN_CODEC_ANC_128FS_SHIFT (2U)
/*! codec_anc_128fs - 128Fs active noise cancelation (ANC) clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKEN_CODEC_ANC_128FS(x) (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKEN_CODEC_ANC_128FS_SHIFT)) & CGU_ANC_DMIC_DS_CLKEN_CODEC_ANC_128FS_MASK)

#define CGU_ANC_DMIC_DS_CLKEN_CODEC_INT_128FS_MASK (0x8U)
#define CGU_ANC_DMIC_DS_CLKEN_CODEC_INT_128FS_SHIFT (3U)
/*! codec_int_128fs - 128Fs interpolator clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKEN_CODEC_INT_128FS(x) (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKEN_CODEC_INT_128FS_SHIFT)) & CGU_ANC_DMIC_DS_CLKEN_CODEC_INT_128FS_MASK)

#define CGU_ANC_DMIC_DS_CLKEN_SYNC_SRC_MASK      (0x10U)
#define CGU_ANC_DMIC_DS_CLKEN_SYNC_SRC_SHIFT     (4U)
/*! sync_src - ADSS sync-source module clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKEN_SYNC_SRC(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKEN_SYNC_SRC_SHIFT)) & CGU_ANC_DMIC_DS_CLKEN_SYNC_SRC_MASK)

#define CGU_ANC_DMIC_DS_CLKEN_DMIC0_MASK         (0x20U)
#define CGU_ANC_DMIC_DS_CLKEN_DMIC0_SHIFT        (5U)
/*! dmic0 - Digital microphone 0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKEN_DMIC0(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKEN_DMIC0_SHIFT)) & CGU_ANC_DMIC_DS_CLKEN_DMIC0_MASK)

#define CGU_ANC_DMIC_DS_CLKEN_DMIC1_MASK         (0x40U)
#define CGU_ANC_DMIC_DS_CLKEN_DMIC1_SHIFT        (6U)
/*! dmic1 - Digital microphone 1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKEN_DMIC1(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKEN_DMIC1_SHIFT)) & CGU_ANC_DMIC_DS_CLKEN_DMIC1_MASK)

#define CGU_ANC_DMIC_DS_CLKEN_DMIC2_MASK         (0x80U)
#define CGU_ANC_DMIC_DS_CLKEN_DMIC2_SHIFT        (7U)
/*! dmic2 - Digital microphone 2 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKEN_DMIC2(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKEN_DMIC2_SHIFT)) & CGU_ANC_DMIC_DS_CLKEN_DMIC2_MASK)

#define CGU_ANC_DMIC_DS_CLKEN_DMIC3_MASK         (0x100U)
#define CGU_ANC_DMIC_DS_CLKEN_DMIC3_SHIFT        (8U)
/*! dmic3 - Digital microphone 3 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKEN_DMIC3(x)           (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKEN_DMIC3_SHIFT)) & CGU_ANC_DMIC_DS_CLKEN_DMIC3_MASK)
/*! @} */

/*! @name ANC_DMIC_DS_CLKENSET - Register to set bits in anc_dmic_ds_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_ANC_DMIC_DS_CLKENSET_CODEC_SYNC_MASK (0x1U)
#define CGU_ANC_DMIC_DS_CLKENSET_CODEC_SYNC_SHIFT (0U)
/*! codec_sync - Codec synchronisation clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENSET_CODEC_SYNC(x)   (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENSET_CODEC_SYNC_SHIFT)) & CGU_ANC_DMIC_DS_CLKENSET_CODEC_SYNC_MASK)

#define CGU_ANC_DMIC_DS_CLKENSET_CODEC_DEC_128FS_MASK (0x2U)
#define CGU_ANC_DMIC_DS_CLKENSET_CODEC_DEC_128FS_SHIFT (1U)
/*! codec_dec_128fs - 128Fs decimator clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENSET_CODEC_DEC_128FS(x) (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENSET_CODEC_DEC_128FS_SHIFT)) & CGU_ANC_DMIC_DS_CLKENSET_CODEC_DEC_128FS_MASK)

#define CGU_ANC_DMIC_DS_CLKENSET_CODEC_ANC_128FS_MASK (0x4U)
#define CGU_ANC_DMIC_DS_CLKENSET_CODEC_ANC_128FS_SHIFT (2U)
/*! codec_anc_128fs - 128Fs active noise cancelation (ANC) clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENSET_CODEC_ANC_128FS(x) (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENSET_CODEC_ANC_128FS_SHIFT)) & CGU_ANC_DMIC_DS_CLKENSET_CODEC_ANC_128FS_MASK)

#define CGU_ANC_DMIC_DS_CLKENSET_CODEC_INT_128FS_MASK (0x8U)
#define CGU_ANC_DMIC_DS_CLKENSET_CODEC_INT_128FS_SHIFT (3U)
/*! codec_int_128fs - 128Fs interpolator clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENSET_CODEC_INT_128FS(x) (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENSET_CODEC_INT_128FS_SHIFT)) & CGU_ANC_DMIC_DS_CLKENSET_CODEC_INT_128FS_MASK)

#define CGU_ANC_DMIC_DS_CLKENSET_SYNC_SRC_MASK   (0x10U)
#define CGU_ANC_DMIC_DS_CLKENSET_SYNC_SRC_SHIFT  (4U)
/*! sync_src - ADSS sync-source module clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENSET_SYNC_SRC(x)     (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENSET_SYNC_SRC_SHIFT)) & CGU_ANC_DMIC_DS_CLKENSET_SYNC_SRC_MASK)

#define CGU_ANC_DMIC_DS_CLKENSET_DMIC0_MASK      (0x20U)
#define CGU_ANC_DMIC_DS_CLKENSET_DMIC0_SHIFT     (5U)
/*! dmic0 - Digital microphone 0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENSET_DMIC0(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENSET_DMIC0_SHIFT)) & CGU_ANC_DMIC_DS_CLKENSET_DMIC0_MASK)

#define CGU_ANC_DMIC_DS_CLKENSET_DMIC1_MASK      (0x40U)
#define CGU_ANC_DMIC_DS_CLKENSET_DMIC1_SHIFT     (6U)
/*! dmic1 - Digital microphone 1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENSET_DMIC1(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENSET_DMIC1_SHIFT)) & CGU_ANC_DMIC_DS_CLKENSET_DMIC1_MASK)

#define CGU_ANC_DMIC_DS_CLKENSET_DMIC2_MASK      (0x80U)
#define CGU_ANC_DMIC_DS_CLKENSET_DMIC2_SHIFT     (7U)
/*! dmic2 - Digital microphone 2 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENSET_DMIC2(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENSET_DMIC2_SHIFT)) & CGU_ANC_DMIC_DS_CLKENSET_DMIC2_MASK)

#define CGU_ANC_DMIC_DS_CLKENSET_DMIC3_MASK      (0x100U)
#define CGU_ANC_DMIC_DS_CLKENSET_DMIC3_SHIFT     (8U)
/*! dmic3 - Digital microphone 3 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENSET_DMIC3(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENSET_DMIC3_SHIFT)) & CGU_ANC_DMIC_DS_CLKENSET_DMIC3_MASK)
/*! @} */

/*! @name ANC_DMIC_DS_CLKENCLR - Register to clear bits in anc_dmic_ds_clkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_ANC_DMIC_DS_CLKENCLR_CODEC_SYNC_MASK (0x1U)
#define CGU_ANC_DMIC_DS_CLKENCLR_CODEC_SYNC_SHIFT (0U)
/*! codec_sync - Codec synchronisation clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENCLR_CODEC_SYNC(x)   (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENCLR_CODEC_SYNC_SHIFT)) & CGU_ANC_DMIC_DS_CLKENCLR_CODEC_SYNC_MASK)

#define CGU_ANC_DMIC_DS_CLKENCLR_CODEC_DEC_128FS_MASK (0x2U)
#define CGU_ANC_DMIC_DS_CLKENCLR_CODEC_DEC_128FS_SHIFT (1U)
/*! codec_dec_128fs - 128Fs decimator clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENCLR_CODEC_DEC_128FS(x) (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENCLR_CODEC_DEC_128FS_SHIFT)) & CGU_ANC_DMIC_DS_CLKENCLR_CODEC_DEC_128FS_MASK)

#define CGU_ANC_DMIC_DS_CLKENCLR_CODEC_ANC_128FS_MASK (0x4U)
#define CGU_ANC_DMIC_DS_CLKENCLR_CODEC_ANC_128FS_SHIFT (2U)
/*! codec_anc_128fs - 128Fs active noise cancelation (ANC) clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENCLR_CODEC_ANC_128FS(x) (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENCLR_CODEC_ANC_128FS_SHIFT)) & CGU_ANC_DMIC_DS_CLKENCLR_CODEC_ANC_128FS_MASK)

#define CGU_ANC_DMIC_DS_CLKENCLR_CODEC_INT_128FS_MASK (0x8U)
#define CGU_ANC_DMIC_DS_CLKENCLR_CODEC_INT_128FS_SHIFT (3U)
/*! codec_int_128fs - 128Fs interpolator clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENCLR_CODEC_INT_128FS(x) (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENCLR_CODEC_INT_128FS_SHIFT)) & CGU_ANC_DMIC_DS_CLKENCLR_CODEC_INT_128FS_MASK)

#define CGU_ANC_DMIC_DS_CLKENCLR_SYNC_SRC_MASK   (0x10U)
#define CGU_ANC_DMIC_DS_CLKENCLR_SYNC_SRC_SHIFT  (4U)
/*! sync_src - ADSS sync-source module clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENCLR_SYNC_SRC(x)     (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENCLR_SYNC_SRC_SHIFT)) & CGU_ANC_DMIC_DS_CLKENCLR_SYNC_SRC_MASK)

#define CGU_ANC_DMIC_DS_CLKENCLR_DMIC0_MASK      (0x20U)
#define CGU_ANC_DMIC_DS_CLKENCLR_DMIC0_SHIFT     (5U)
/*! dmic0 - Digital microphone 0 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENCLR_DMIC0(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENCLR_DMIC0_SHIFT)) & CGU_ANC_DMIC_DS_CLKENCLR_DMIC0_MASK)

#define CGU_ANC_DMIC_DS_CLKENCLR_DMIC1_MASK      (0x40U)
#define CGU_ANC_DMIC_DS_CLKENCLR_DMIC1_SHIFT     (6U)
/*! dmic1 - Digital microphone 1 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENCLR_DMIC1(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENCLR_DMIC1_SHIFT)) & CGU_ANC_DMIC_DS_CLKENCLR_DMIC1_MASK)

#define CGU_ANC_DMIC_DS_CLKENCLR_DMIC2_MASK      (0x80U)
#define CGU_ANC_DMIC_DS_CLKENCLR_DMIC2_SHIFT     (7U)
/*! dmic2 - Digital microphone 2 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENCLR_DMIC2(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENCLR_DMIC2_SHIFT)) & CGU_ANC_DMIC_DS_CLKENCLR_DMIC2_MASK)

#define CGU_ANC_DMIC_DS_CLKENCLR_DMIC3_MASK      (0x100U)
#define CGU_ANC_DMIC_DS_CLKENCLR_DMIC3_SHIFT     (8U)
/*! dmic3 - Digital microphone 3 clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_ANC_DMIC_DS_CLKENCLR_DMIC3(x)        (((uint32_t)(((uint32_t)(x)) << CGU_ANC_DMIC_DS_CLKENCLR_DMIC3_SHIFT)) & CGU_ANC_DMIC_DS_CLKENCLR_DMIC3_MASK)
/*! @} */

/*! @name ADSS_CLK_GATE_OVERRIDE - Override for automatic clock gating in the ADSS. */
/*! @{ */

#define CGU_ADSS_CLK_GATE_OVERRIDE_DSP0_MASK     (0x1U)
#define CGU_ADSS_CLK_GATE_OVERRIDE_DSP0_SHIFT    (0U)
/*! dsp0 - Overrule auto-gating DSP0.
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_ADSS_CLK_GATE_OVERRIDE_DSP0(x)       (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLK_GATE_OVERRIDE_DSP0_SHIFT)) & CGU_ADSS_CLK_GATE_OVERRIDE_DSP0_MASK)

#define CGU_ADSS_CLK_GATE_OVERRIDE_DSP1_MASK     (0x2U)
#define CGU_ADSS_CLK_GATE_OVERRIDE_DSP1_SHIFT    (1U)
/*! dsp1 - Overrule auto-gating DSP1.
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_ADSS_CLK_GATE_OVERRIDE_DSP1(x)       (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLK_GATE_OVERRIDE_DSP1_SHIFT)) & CGU_ADSS_CLK_GATE_OVERRIDE_DSP1_MASK)

#define CGU_ADSS_CLK_GATE_OVERRIDE_IOMEM_MASK    (0x4U)
#define CGU_ADSS_CLK_GATE_OVERRIDE_IOMEM_SHIFT   (2U)
/*! iomem - Overrule auto-gating for iomem.
 *  0b0..Clock gating active and controlled by HW.
 *  0b1..Clock gating overruled, clock is not gated and runs continuously.
 */
#define CGU_ADSS_CLK_GATE_OVERRIDE_IOMEM(x)      (((uint32_t)(((uint32_t)(x)) << CGU_ADSS_CLK_GATE_OVERRIDE_IOMEM_SHIFT)) & CGU_ADSS_CLK_GATE_OVERRIDE_IOMEM_MASK)
/*! @} */

/*! @name DATAPORTS_CLKDIV - Data port clock dividers */
/*! @{ */

#define CGU_DATAPORTS_CLKDIV_DP0_MASK            (0xFFU)
#define CGU_DATAPORTS_CLKDIV_DP0_SHIFT           (0U)
/*! dp0 - Dataport divider setting. */
#define CGU_DATAPORTS_CLKDIV_DP0(x)              (((uint32_t)(((uint32_t)(x)) << CGU_DATAPORTS_CLKDIV_DP0_SHIFT)) & CGU_DATAPORTS_CLKDIV_DP0_MASK)

#define CGU_DATAPORTS_CLKDIV_DP1_MASK            (0xFF00U)
#define CGU_DATAPORTS_CLKDIV_DP1_SHIFT           (8U)
/*! dp1 - Dataport divider setting. */
#define CGU_DATAPORTS_CLKDIV_DP1(x)              (((uint32_t)(((uint32_t)(x)) << CGU_DATAPORTS_CLKDIV_DP1_SHIFT)) & CGU_DATAPORTS_CLKDIV_DP1_MASK)

#define CGU_DATAPORTS_CLKDIV_DP2_MASK            (0xFF0000U)
#define CGU_DATAPORTS_CLKDIV_DP2_SHIFT           (16U)
/*! dp2 - Dataport divider setting. */
#define CGU_DATAPORTS_CLKDIV_DP2(x)              (((uint32_t)(((uint32_t)(x)) << CGU_DATAPORTS_CLKDIV_DP2_SHIFT)) & CGU_DATAPORTS_CLKDIV_DP2_MASK)

#define CGU_DATAPORTS_CLKDIV_DP3_MASK            (0xFF000000U)
#define CGU_DATAPORTS_CLKDIV_DP3_SHIFT           (24U)
/*! dp3 - Dataport divider setting. */
#define CGU_DATAPORTS_CLKDIV_DP3(x)              (((uint32_t)(((uint32_t)(x)) << CGU_DATAPORTS_CLKDIV_DP3_SHIFT)) & CGU_DATAPORTS_CLKDIV_DP3_MASK)
/*! @} */

/*! @name IRFIC - irfic clock divider setting. */
/*! @{ */

#define CGU_IRFIC_CLKDIV_MASK                    (0x7U)
#define CGU_IRFIC_CLKDIV_SHIFT                   (0U)
/*! clkdiv - Clock divider setting. */
#define CGU_IRFIC_CLKDIV(x)                      (((uint32_t)(((uint32_t)(x)) << CGU_IRFIC_CLKDIV_SHIFT)) & CGU_IRFIC_CLKDIV_MASK)
/*! @} */

/*! @name NSS_CLKSEL - NSS modules clock source selection */
/*! @{ */

#define CGU_NSS_CLKSEL_MAIN_MASK                 (0x3U)
#define CGU_NSS_CLKSEL_MAIN_SHIFT                (0U)
/*! Main - Clock source selection for the main NSS clock.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_NSS_CLKSEL_MAIN(x)                   (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKSEL_MAIN_SHIFT)) & CGU_NSS_CLKSEL_MAIN_MASK)

#define CGU_NSS_CLKSEL_XSPI_MASK                 (0xCU)
#define CGU_NSS_CLKSEL_XSPI_SHIFT                (2U)
/*! xspi - Clock source selection for the NSS xspi clock.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_NSS_CLKSEL_XSPI(x)                   (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKSEL_XSPI_SHIFT)) & CGU_NSS_CLKSEL_XSPI_MASK)
/*! @} */

/*! @name NSS_RSTEN - Status register for the NSS module reset enable.<br> The register indicates if the module is in reset or not.<br> <br> 0: Module is out of reset.<br> 1: Module is in reset. */
/*! @{ */

#define CGU_NSS_RSTEN_XSPI_MASK                  (0x1U)
#define CGU_NSS_RSTEN_XSPI_SHIFT                 (0U)
/*! xspi - XSPI reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_NSS_RSTEN_XSPI(x)                    (((uint32_t)(((uint32_t)(x)) << CGU_NSS_RSTEN_XSPI_SHIFT)) & CGU_NSS_RSTEN_XSPI_MASK)

#define CGU_NSS_RSTEN_DEBUG_MASK                 (0x2U)
#define CGU_NSS_RSTEN_DEBUG_SHIFT                (1U)
/*! debug - NSS debug logic reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_NSS_RSTEN_DEBUG(x)                   (((uint32_t)(((uint32_t)(x)) << CGU_NSS_RSTEN_DEBUG_SHIFT)) & CGU_NSS_RSTEN_DEBUG_MASK)
/*! @} */

/*! @name NSS_RSTENSET - Register to set bits in nss_rstEn.<br> Write 1 to set a bitfield (enable the reset).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_NSS_RSTENSET_XSPI_MASK               (0x1U)
#define CGU_NSS_RSTENSET_XSPI_SHIFT              (0U)
/*! xspi - XSPI reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_NSS_RSTENSET_XSPI(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_NSS_RSTENSET_XSPI_SHIFT)) & CGU_NSS_RSTENSET_XSPI_MASK)

#define CGU_NSS_RSTENSET_DEBUG_MASK              (0x2U)
#define CGU_NSS_RSTENSET_DEBUG_SHIFT             (1U)
/*! debug - NSS debug logic reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_NSS_RSTENSET_DEBUG(x)                (((uint32_t)(((uint32_t)(x)) << CGU_NSS_RSTENSET_DEBUG_SHIFT)) & CGU_NSS_RSTENSET_DEBUG_MASK)
/*! @} */

/*! @name NSS_RSTENCLR - Register to clear bits in nss_rstEn.<br> Write 1 to clear a bitfield (disable the reset).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_NSS_RSTENCLR_XSPI_MASK               (0x1U)
#define CGU_NSS_RSTENCLR_XSPI_SHIFT              (0U)
/*! xspi - XSPI reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_NSS_RSTENCLR_XSPI(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_NSS_RSTENCLR_XSPI_SHIFT)) & CGU_NSS_RSTENCLR_XSPI_MASK)

#define CGU_NSS_RSTENCLR_DEBUG_MASK              (0x2U)
#define CGU_NSS_RSTENCLR_DEBUG_SHIFT             (1U)
/*! debug - NSS debug logic reset.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_NSS_RSTENCLR_DEBUG(x)                (((uint32_t)(((uint32_t)(x)) << CGU_NSS_RSTENCLR_DEBUG_SHIFT)) & CGU_NSS_RSTENCLR_DEBUG_MASK)
/*! @} */

/*! @name NSS_CLKEN - Status register for the NSS clock enable.<br> The register indicates if the clock is enabled or disabled.<br> <br> 0: Clock is disabled<br> 1: Clock is enabled */
/*! @{ */

#define CGU_NSS_CLKEN_BUS_CLK_EN_MASK            (0x1U)
#define CGU_NSS_CLKEN_BUS_CLK_EN_SHIFT           (0U)
/*! bus_clk_en - NSS XSPI bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_CLKEN_BUS_CLK_EN(x)              (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKEN_BUS_CLK_EN_SHIFT)) & CGU_NSS_CLKEN_BUS_CLK_EN_MASK)

#define CGU_NSS_CLKEN_XSPI_CLK_EN_MASK           (0x2U)
#define CGU_NSS_CLKEN_XSPI_CLK_EN_SHIFT          (1U)
/*! xspi_clk_en - NSS XSPI module and double sampling clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_CLKEN_XSPI_CLK_EN(x)             (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKEN_XSPI_CLK_EN_SHIFT)) & CGU_NSS_CLKEN_XSPI_CLK_EN_MASK)

#define CGU_NSS_CLKEN_XSPI_SFIF_EN_MASK          (0x4U)
#define CGU_NSS_CLKEN_XSPI_SFIF_EN_SHIFT         (2U)
/*! xspi_sfif_en - NSS XSPI sample clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_CLKEN_XSPI_SFIF_EN(x)            (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKEN_XSPI_SFIF_EN_SHIFT)) & CGU_NSS_CLKEN_XSPI_SFIF_EN_MASK)

#define CGU_NSS_CLKEN_NSS_CLK_EN_MASK            (0x8U)
#define CGU_NSS_CLKEN_NSS_CLK_EN_SHIFT           (3U)
/*! nss_clk_en - NSS main system clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_CLKEN_NSS_CLK_EN(x)              (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKEN_NSS_CLK_EN_SHIFT)) & CGU_NSS_CLKEN_NSS_CLK_EN_MASK)

#define CGU_NSS_CLKEN_DBG_SO_CLK_EN_MASK         (0x10U)
#define CGU_NSS_CLKEN_DBG_SO_CLK_EN_SHIFT        (4U)
/*! dbg_so_clk_en - NSS serial debug clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_CLKEN_DBG_SO_CLK_EN(x)           (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKEN_DBG_SO_CLK_EN_SHIFT)) & CGU_NSS_CLKEN_DBG_SO_CLK_EN_MASK)
/*! @} */

/*! @name NSS_CLKENSET - Register to set bits in nss_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_NSS_CLKENSET_BUS_CLK_EN_MASK         (0x1U)
#define CGU_NSS_CLKENSET_BUS_CLK_EN_SHIFT        (0U)
/*! bus_clk_en - NSS XSPI bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_CLKENSET_BUS_CLK_EN(x)           (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKENSET_BUS_CLK_EN_SHIFT)) & CGU_NSS_CLKENSET_BUS_CLK_EN_MASK)

#define CGU_NSS_CLKENSET_XSPI_CLK_EN_MASK        (0x2U)
#define CGU_NSS_CLKENSET_XSPI_CLK_EN_SHIFT       (1U)
/*! xspi_clk_en - NSS XSPI module and double sampling clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_CLKENSET_XSPI_CLK_EN(x)          (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKENSET_XSPI_CLK_EN_SHIFT)) & CGU_NSS_CLKENSET_XSPI_CLK_EN_MASK)

#define CGU_NSS_CLKENSET_XSPI_SFIF_EN_MASK       (0x4U)
#define CGU_NSS_CLKENSET_XSPI_SFIF_EN_SHIFT      (2U)
/*! xspi_sfif_en - NSS XSPI sample clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_CLKENSET_XSPI_SFIF_EN(x)         (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKENSET_XSPI_SFIF_EN_SHIFT)) & CGU_NSS_CLKENSET_XSPI_SFIF_EN_MASK)

#define CGU_NSS_CLKENSET_NSS_CLK_EN_MASK         (0x8U)
#define CGU_NSS_CLKENSET_NSS_CLK_EN_SHIFT        (3U)
/*! nss_clk_en - NSS main system clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_CLKENSET_NSS_CLK_EN(x)           (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKENSET_NSS_CLK_EN_SHIFT)) & CGU_NSS_CLKENSET_NSS_CLK_EN_MASK)

#define CGU_NSS_CLKENSET_DBG_SO_CLK_EN_MASK      (0x10U)
#define CGU_NSS_CLKENSET_DBG_SO_CLK_EN_SHIFT     (4U)
/*! dbg_so_clk_en - NSS serial debug clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_CLKENSET_DBG_SO_CLK_EN(x)        (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKENSET_DBG_SO_CLK_EN_SHIFT)) & CGU_NSS_CLKENSET_DBG_SO_CLK_EN_MASK)
/*! @} */

/*! @name NSS_CLKENCLR - Register to clear bits in nss_clkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_NSS_CLKENCLR_BUS_CLK_EN_MASK         (0x1U)
#define CGU_NSS_CLKENCLR_BUS_CLK_EN_SHIFT        (0U)
/*! bus_clk_en - NSS XSPI bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_CLKENCLR_BUS_CLK_EN(x)           (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKENCLR_BUS_CLK_EN_SHIFT)) & CGU_NSS_CLKENCLR_BUS_CLK_EN_MASK)

#define CGU_NSS_CLKENCLR_XSPI_CLK_EN_MASK        (0x2U)
#define CGU_NSS_CLKENCLR_XSPI_CLK_EN_SHIFT       (1U)
/*! xspi_clk_en - NSS XSPI module and double sampling clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_CLKENCLR_XSPI_CLK_EN(x)          (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKENCLR_XSPI_CLK_EN_SHIFT)) & CGU_NSS_CLKENCLR_XSPI_CLK_EN_MASK)

#define CGU_NSS_CLKENCLR_XSPI_SFIF_EN_MASK       (0x4U)
#define CGU_NSS_CLKENCLR_XSPI_SFIF_EN_SHIFT      (2U)
/*! xspi_sfif_en - NSS XSPI sample clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_CLKENCLR_XSPI_SFIF_EN(x)         (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKENCLR_XSPI_SFIF_EN_SHIFT)) & CGU_NSS_CLKENCLR_XSPI_SFIF_EN_MASK)

#define CGU_NSS_CLKENCLR_NSS_CLK_EN_MASK         (0x8U)
#define CGU_NSS_CLKENCLR_NSS_CLK_EN_SHIFT        (3U)
/*! nss_clk_en - NSS main system clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_CLKENCLR_NSS_CLK_EN(x)           (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKENCLR_NSS_CLK_EN_SHIFT)) & CGU_NSS_CLKENCLR_NSS_CLK_EN_MASK)

#define CGU_NSS_CLKENCLR_DBG_SO_CLK_EN_MASK      (0x10U)
#define CGU_NSS_CLKENCLR_DBG_SO_CLK_EN_SHIFT     (4U)
/*! dbg_so_clk_en - NSS serial debug clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_CLKENCLR_DBG_SO_CLK_EN(x)        (((uint32_t)(((uint32_t)(x)) << CGU_NSS_CLKENCLR_DBG_SO_CLK_EN_SHIFT)) & CGU_NSS_CLKENCLR_DBG_SO_CLK_EN_MASK)
/*! @} */

/*! @name NSS_DS_CLKEN - Deepsleep NSS clock enable override.<br> The value of this register will be and'ed with the actual busclken to define the<br> setting during deepsleep. */
/*! @{ */

#define CGU_NSS_DS_CLKEN_BUS_CLK_EN_MASK         (0x1U)
#define CGU_NSS_DS_CLKEN_BUS_CLK_EN_SHIFT        (0U)
/*! bus_clk_en - NSS XSPI bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_DS_CLKEN_BUS_CLK_EN(x)           (((uint32_t)(((uint32_t)(x)) << CGU_NSS_DS_CLKEN_BUS_CLK_EN_SHIFT)) & CGU_NSS_DS_CLKEN_BUS_CLK_EN_MASK)

#define CGU_NSS_DS_CLKEN_XSPI_CLK_EN_MASK        (0x2U)
#define CGU_NSS_DS_CLKEN_XSPI_CLK_EN_SHIFT       (1U)
/*! xspi_clk_en - NSS XSPI module and double sampling clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_DS_CLKEN_XSPI_CLK_EN(x)          (((uint32_t)(((uint32_t)(x)) << CGU_NSS_DS_CLKEN_XSPI_CLK_EN_SHIFT)) & CGU_NSS_DS_CLKEN_XSPI_CLK_EN_MASK)

#define CGU_NSS_DS_CLKEN_XSPI_SFIF_EN_MASK       (0x4U)
#define CGU_NSS_DS_CLKEN_XSPI_SFIF_EN_SHIFT      (2U)
/*! xspi_sfif_en - NSS XSPI sample clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_DS_CLKEN_XSPI_SFIF_EN(x)         (((uint32_t)(((uint32_t)(x)) << CGU_NSS_DS_CLKEN_XSPI_SFIF_EN_SHIFT)) & CGU_NSS_DS_CLKEN_XSPI_SFIF_EN_MASK)

#define CGU_NSS_DS_CLKEN_NSS_CLK_EN_MASK         (0x8U)
#define CGU_NSS_DS_CLKEN_NSS_CLK_EN_SHIFT        (3U)
/*! nss_clk_en - NSS main system clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_DS_CLKEN_NSS_CLK_EN(x)           (((uint32_t)(((uint32_t)(x)) << CGU_NSS_DS_CLKEN_NSS_CLK_EN_SHIFT)) & CGU_NSS_DS_CLKEN_NSS_CLK_EN_MASK)

#define CGU_NSS_DS_CLKEN_DBG_SO_CLK_EN_MASK      (0x10U)
#define CGU_NSS_DS_CLKEN_DBG_SO_CLK_EN_SHIFT     (4U)
/*! dbg_so_clk_en - NSS serial debug clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_DS_CLKEN_DBG_SO_CLK_EN(x)        (((uint32_t)(((uint32_t)(x)) << CGU_NSS_DS_CLKEN_DBG_SO_CLK_EN_SHIFT)) & CGU_NSS_DS_CLKEN_DBG_SO_CLK_EN_MASK)
/*! @} */

/*! @name NSS_DS_CLKENSET - Register to set bits in nss_ds_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_NSS_DS_CLKENSET_BUS_CLK_EN_MASK      (0x1U)
#define CGU_NSS_DS_CLKENSET_BUS_CLK_EN_SHIFT     (0U)
/*! bus_clk_en - NSS XSPI bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_DS_CLKENSET_BUS_CLK_EN(x)        (((uint32_t)(((uint32_t)(x)) << CGU_NSS_DS_CLKENSET_BUS_CLK_EN_SHIFT)) & CGU_NSS_DS_CLKENSET_BUS_CLK_EN_MASK)

#define CGU_NSS_DS_CLKENSET_XSPI_CLK_EN_MASK     (0x2U)
#define CGU_NSS_DS_CLKENSET_XSPI_CLK_EN_SHIFT    (1U)
/*! xspi_clk_en - NSS XSPI module and double sampling clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_DS_CLKENSET_XSPI_CLK_EN(x)       (((uint32_t)(((uint32_t)(x)) << CGU_NSS_DS_CLKENSET_XSPI_CLK_EN_SHIFT)) & CGU_NSS_DS_CLKENSET_XSPI_CLK_EN_MASK)

#define CGU_NSS_DS_CLKENSET_XSPI_SFIF_EN_MASK    (0x4U)
#define CGU_NSS_DS_CLKENSET_XSPI_SFIF_EN_SHIFT   (2U)
/*! xspi_sfif_en - NSS XSPI sample clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_DS_CLKENSET_XSPI_SFIF_EN(x)      (((uint32_t)(((uint32_t)(x)) << CGU_NSS_DS_CLKENSET_XSPI_SFIF_EN_SHIFT)) & CGU_NSS_DS_CLKENSET_XSPI_SFIF_EN_MASK)

#define CGU_NSS_DS_CLKENSET_NSS_CLK_EN_MASK      (0x8U)
#define CGU_NSS_DS_CLKENSET_NSS_CLK_EN_SHIFT     (3U)
/*! nss_clk_en - NSS main system clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_DS_CLKENSET_NSS_CLK_EN(x)        (((uint32_t)(((uint32_t)(x)) << CGU_NSS_DS_CLKENSET_NSS_CLK_EN_SHIFT)) & CGU_NSS_DS_CLKENSET_NSS_CLK_EN_MASK)

#define CGU_NSS_DS_CLKENSET_DBG_SO_CLK_EN_MASK   (0x10U)
#define CGU_NSS_DS_CLKENSET_DBG_SO_CLK_EN_SHIFT  (4U)
/*! dbg_so_clk_en - NSS serial debug clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_DS_CLKENSET_DBG_SO_CLK_EN(x)     (((uint32_t)(((uint32_t)(x)) << CGU_NSS_DS_CLKENSET_DBG_SO_CLK_EN_SHIFT)) & CGU_NSS_DS_CLKENSET_DBG_SO_CLK_EN_MASK)
/*! @} */

/*! @name NSS_DS_CLKENCLR - Register to clear bits in nss_ds_clkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_NSS_DS_CLKENCLR_BUS_CLK_EN_MASK      (0x1U)
#define CGU_NSS_DS_CLKENCLR_BUS_CLK_EN_SHIFT     (0U)
/*! bus_clk_en - NSS XSPI bus clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_DS_CLKENCLR_BUS_CLK_EN(x)        (((uint32_t)(((uint32_t)(x)) << CGU_NSS_DS_CLKENCLR_BUS_CLK_EN_SHIFT)) & CGU_NSS_DS_CLKENCLR_BUS_CLK_EN_MASK)

#define CGU_NSS_DS_CLKENCLR_XSPI_CLK_EN_MASK     (0x2U)
#define CGU_NSS_DS_CLKENCLR_XSPI_CLK_EN_SHIFT    (1U)
/*! xspi_clk_en - NSS XSPI module and double sampling clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_DS_CLKENCLR_XSPI_CLK_EN(x)       (((uint32_t)(((uint32_t)(x)) << CGU_NSS_DS_CLKENCLR_XSPI_CLK_EN_SHIFT)) & CGU_NSS_DS_CLKENCLR_XSPI_CLK_EN_MASK)

#define CGU_NSS_DS_CLKENCLR_XSPI_SFIF_EN_MASK    (0x4U)
#define CGU_NSS_DS_CLKENCLR_XSPI_SFIF_EN_SHIFT   (2U)
/*! xspi_sfif_en - NSS XSPI sample clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_DS_CLKENCLR_XSPI_SFIF_EN(x)      (((uint32_t)(((uint32_t)(x)) << CGU_NSS_DS_CLKENCLR_XSPI_SFIF_EN_SHIFT)) & CGU_NSS_DS_CLKENCLR_XSPI_SFIF_EN_MASK)

#define CGU_NSS_DS_CLKENCLR_NSS_CLK_EN_MASK      (0x8U)
#define CGU_NSS_DS_CLKENCLR_NSS_CLK_EN_SHIFT     (3U)
/*! nss_clk_en - NSS main system clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_DS_CLKENCLR_NSS_CLK_EN(x)        (((uint32_t)(((uint32_t)(x)) << CGU_NSS_DS_CLKENCLR_NSS_CLK_EN_SHIFT)) & CGU_NSS_DS_CLKENCLR_NSS_CLK_EN_MASK)

#define CGU_NSS_DS_CLKENCLR_DBG_SO_CLK_EN_MASK   (0x10U)
#define CGU_NSS_DS_CLKENCLR_DBG_SO_CLK_EN_SHIFT  (4U)
/*! dbg_so_clk_en - NSS serial debug clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_NSS_DS_CLKENCLR_DBG_SO_CLK_EN(x)     (((uint32_t)(((uint32_t)(x)) << CGU_NSS_DS_CLKENCLR_DBG_SO_CLK_EN_SHIFT)) & CGU_NSS_DS_CLKENCLR_DBG_SO_CLK_EN_MASK)
/*! @} */

/*! @name NSS_XSPI_CLKCFG - NSS xspi clock configuration */
/*! @{ */

#define CGU_NSS_XSPI_CLKCFG_BUS_CLKDIV_MASK      (0xFFU)
#define CGU_NSS_XSPI_CLKCFG_BUS_CLKDIV_SHIFT     (0U)
/*! bus_clkdiv - Main bus and processor clock divider setting. */
#define CGU_NSS_XSPI_CLKCFG_BUS_CLKDIV(x)        (((uint32_t)(((uint32_t)(x)) << CGU_NSS_XSPI_CLKCFG_BUS_CLKDIV_SHIFT)) & CGU_NSS_XSPI_CLKCFG_BUS_CLKDIV_MASK)

#define CGU_NSS_XSPI_CLKCFG_XSPI_CLKDIV_MASK     (0xFF00U)
#define CGU_NSS_XSPI_CLKCFG_XSPI_CLKDIV_SHIFT    (8U)
/*! xspi_clkdiv - XSPI main clock divider setting. */
#define CGU_NSS_XSPI_CLKCFG_XSPI_CLKDIV(x)       (((uint32_t)(((uint32_t)(x)) << CGU_NSS_XSPI_CLKCFG_XSPI_CLKDIV_SHIFT)) & CGU_NSS_XSPI_CLKCFG_XSPI_CLKDIV_MASK)
/*! @} */

/*! @name VISION_CLKEN - Status register for the vision SS clock enable.<br> The register indicates if the clock is enabled or disabled.<br> <br> 0: Clock is disabled<br> 1: Clock is enabled */
/*! @{ */

#define CGU_VISION_CLKEN_PLL_REF_MASK            (0x1U)
#define CGU_VISION_CLKEN_PLL_REF_SHIFT           (0U)
/*! PLL_ref - Vision PLL ref module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_CLKEN_PLL_REF(x)              (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKEN_PLL_REF_SHIFT)) & CGU_VISION_CLKEN_PLL_REF_MASK)

#define CGU_VISION_CLKEN_PIXEL_MASK              (0x2U)
#define CGU_VISION_CLKEN_PIXEL_SHIFT             (1U)
/*! pixel - Pixel module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_CLKEN_PIXEL(x)                (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKEN_PIXEL_SHIFT)) & CGU_VISION_CLKEN_PIXEL_MASK)

#define CGU_VISION_CLKEN_RX_ESC_MASK             (0x4U)
#define CGU_VISION_CLKEN_RX_ESC_SHIFT            (2U)
/*! rx_esc - Escape mode receive clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_CLKEN_RX_ESC(x)               (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKEN_RX_ESC_SHIFT)) & CGU_VISION_CLKEN_RX_ESC_MASK)

#define CGU_VISION_CLKEN_TX_ESC_MASK             (0x8U)
#define CGU_VISION_CLKEN_TX_ESC_SHIFT            (3U)
/*! tx_esc - Escape mode transmit clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_CLKEN_TX_ESC(x)               (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKEN_TX_ESC_SHIFT)) & CGU_VISION_CLKEN_TX_ESC_MASK)
/*! @} */

/*! @name VISION_CLKENSET - Register to set bits in vision_ClkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_VISION_CLKENSET_PLL_REF_MASK         (0x1U)
#define CGU_VISION_CLKENSET_PLL_REF_SHIFT        (0U)
/*! PLL_ref - Vision PLL ref module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_CLKENSET_PLL_REF(x)           (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKENSET_PLL_REF_SHIFT)) & CGU_VISION_CLKENSET_PLL_REF_MASK)

#define CGU_VISION_CLKENSET_PIXEL_MASK           (0x2U)
#define CGU_VISION_CLKENSET_PIXEL_SHIFT          (1U)
/*! pixel - Pixel module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_CLKENSET_PIXEL(x)             (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKENSET_PIXEL_SHIFT)) & CGU_VISION_CLKENSET_PIXEL_MASK)

#define CGU_VISION_CLKENSET_RX_ESC_MASK          (0x4U)
#define CGU_VISION_CLKENSET_RX_ESC_SHIFT         (2U)
/*! rx_esc - Escape mode receive clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_CLKENSET_RX_ESC(x)            (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKENSET_RX_ESC_SHIFT)) & CGU_VISION_CLKENSET_RX_ESC_MASK)

#define CGU_VISION_CLKENSET_TX_ESC_MASK          (0x8U)
#define CGU_VISION_CLKENSET_TX_ESC_SHIFT         (3U)
/*! tx_esc - Escape mode transmit clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_CLKENSET_TX_ESC(x)            (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKENSET_TX_ESC_SHIFT)) & CGU_VISION_CLKENSET_TX_ESC_MASK)
/*! @} */

/*! @name VISION_CLKENCLR - Register to clear bits in vision_ClkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_VISION_CLKENCLR_PLL_REF_MASK         (0x1U)
#define CGU_VISION_CLKENCLR_PLL_REF_SHIFT        (0U)
/*! PLL_ref - Vision PLL ref module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_CLKENCLR_PLL_REF(x)           (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKENCLR_PLL_REF_SHIFT)) & CGU_VISION_CLKENCLR_PLL_REF_MASK)

#define CGU_VISION_CLKENCLR_PIXEL_MASK           (0x2U)
#define CGU_VISION_CLKENCLR_PIXEL_SHIFT          (1U)
/*! pixel - Pixel module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_CLKENCLR_PIXEL(x)             (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKENCLR_PIXEL_SHIFT)) & CGU_VISION_CLKENCLR_PIXEL_MASK)

#define CGU_VISION_CLKENCLR_RX_ESC_MASK          (0x4U)
#define CGU_VISION_CLKENCLR_RX_ESC_SHIFT         (2U)
/*! rx_esc - Escape mode receive clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_CLKENCLR_RX_ESC(x)            (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKENCLR_RX_ESC_SHIFT)) & CGU_VISION_CLKENCLR_RX_ESC_MASK)

#define CGU_VISION_CLKENCLR_TX_ESC_MASK          (0x8U)
#define CGU_VISION_CLKENCLR_TX_ESC_SHIFT         (3U)
/*! tx_esc - Escape mode transmit clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_CLKENCLR_TX_ESC(x)            (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKENCLR_TX_ESC_SHIFT)) & CGU_VISION_CLKENCLR_TX_ESC_MASK)
/*! @} */

/*! @name VISION_DS_CLKEN - Deepsleep vision clock enable override.<br> The value of this register will be and'ed with the actual busclken to define the<br> setting during deepsleep. */
/*! @{ */

#define CGU_VISION_DS_CLKEN_PLL_REF_MASK         (0x1U)
#define CGU_VISION_DS_CLKEN_PLL_REF_SHIFT        (0U)
/*! PLL_ref - Vision PLL ref module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_DS_CLKEN_PLL_REF(x)           (((uint32_t)(((uint32_t)(x)) << CGU_VISION_DS_CLKEN_PLL_REF_SHIFT)) & CGU_VISION_DS_CLKEN_PLL_REF_MASK)

#define CGU_VISION_DS_CLKEN_PIXEL_MASK           (0x2U)
#define CGU_VISION_DS_CLKEN_PIXEL_SHIFT          (1U)
/*! pixel - Pixel module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_DS_CLKEN_PIXEL(x)             (((uint32_t)(((uint32_t)(x)) << CGU_VISION_DS_CLKEN_PIXEL_SHIFT)) & CGU_VISION_DS_CLKEN_PIXEL_MASK)

#define CGU_VISION_DS_CLKEN_RX_ESC_MASK          (0x4U)
#define CGU_VISION_DS_CLKEN_RX_ESC_SHIFT         (2U)
/*! rx_esc - Escape mode receive clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_DS_CLKEN_RX_ESC(x)            (((uint32_t)(((uint32_t)(x)) << CGU_VISION_DS_CLKEN_RX_ESC_SHIFT)) & CGU_VISION_DS_CLKEN_RX_ESC_MASK)

#define CGU_VISION_DS_CLKEN_TX_ESC_MASK          (0x8U)
#define CGU_VISION_DS_CLKEN_TX_ESC_SHIFT         (3U)
/*! tx_esc - Escape mode transmit clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_DS_CLKEN_TX_ESC(x)            (((uint32_t)(((uint32_t)(x)) << CGU_VISION_DS_CLKEN_TX_ESC_SHIFT)) & CGU_VISION_DS_CLKEN_TX_ESC_MASK)
/*! @} */

/*! @name VISION_DS_CLKENSET - Register to set bits in vision_ds_ClkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_VISION_DS_CLKENSET_PLL_REF_MASK      (0x1U)
#define CGU_VISION_DS_CLKENSET_PLL_REF_SHIFT     (0U)
/*! PLL_ref - Vision PLL ref module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_DS_CLKENSET_PLL_REF(x)        (((uint32_t)(((uint32_t)(x)) << CGU_VISION_DS_CLKENSET_PLL_REF_SHIFT)) & CGU_VISION_DS_CLKENSET_PLL_REF_MASK)

#define CGU_VISION_DS_CLKENSET_PIXEL_MASK        (0x2U)
#define CGU_VISION_DS_CLKENSET_PIXEL_SHIFT       (1U)
/*! pixel - Pixel module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_DS_CLKENSET_PIXEL(x)          (((uint32_t)(((uint32_t)(x)) << CGU_VISION_DS_CLKENSET_PIXEL_SHIFT)) & CGU_VISION_DS_CLKENSET_PIXEL_MASK)

#define CGU_VISION_DS_CLKENSET_RX_ESC_MASK       (0x4U)
#define CGU_VISION_DS_CLKENSET_RX_ESC_SHIFT      (2U)
/*! rx_esc - Escape mode receive clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_DS_CLKENSET_RX_ESC(x)         (((uint32_t)(((uint32_t)(x)) << CGU_VISION_DS_CLKENSET_RX_ESC_SHIFT)) & CGU_VISION_DS_CLKENSET_RX_ESC_MASK)

#define CGU_VISION_DS_CLKENSET_TX_ESC_MASK       (0x8U)
#define CGU_VISION_DS_CLKENSET_TX_ESC_SHIFT      (3U)
/*! tx_esc - Escape mode transmit clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_DS_CLKENSET_TX_ESC(x)         (((uint32_t)(((uint32_t)(x)) << CGU_VISION_DS_CLKENSET_TX_ESC_SHIFT)) & CGU_VISION_DS_CLKENSET_TX_ESC_MASK)
/*! @} */

/*! @name VISION_DS_CLKENCLR - Register to clear bits in vision_ds_ClkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_VISION_DS_CLKENCLR_PLL_REF_MASK      (0x1U)
#define CGU_VISION_DS_CLKENCLR_PLL_REF_SHIFT     (0U)
/*! PLL_ref - Vision PLL ref module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_DS_CLKENCLR_PLL_REF(x)        (((uint32_t)(((uint32_t)(x)) << CGU_VISION_DS_CLKENCLR_PLL_REF_SHIFT)) & CGU_VISION_DS_CLKENCLR_PLL_REF_MASK)

#define CGU_VISION_DS_CLKENCLR_PIXEL_MASK        (0x2U)
#define CGU_VISION_DS_CLKENCLR_PIXEL_SHIFT       (1U)
/*! pixel - Pixel module clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_DS_CLKENCLR_PIXEL(x)          (((uint32_t)(((uint32_t)(x)) << CGU_VISION_DS_CLKENCLR_PIXEL_SHIFT)) & CGU_VISION_DS_CLKENCLR_PIXEL_MASK)

#define CGU_VISION_DS_CLKENCLR_RX_ESC_MASK       (0x4U)
#define CGU_VISION_DS_CLKENCLR_RX_ESC_SHIFT      (2U)
/*! rx_esc - Escape mode receive clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_DS_CLKENCLR_RX_ESC(x)         (((uint32_t)(((uint32_t)(x)) << CGU_VISION_DS_CLKENCLR_RX_ESC_SHIFT)) & CGU_VISION_DS_CLKENCLR_RX_ESC_MASK)

#define CGU_VISION_DS_CLKENCLR_TX_ESC_MASK       (0x8U)
#define CGU_VISION_DS_CLKENCLR_TX_ESC_SHIFT      (3U)
/*! tx_esc - Escape mode transmit clock.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_VISION_DS_CLKENCLR_TX_ESC(x)         (((uint32_t)(((uint32_t)(x)) << CGU_VISION_DS_CLKENCLR_TX_ESC_SHIFT)) & CGU_VISION_DS_CLKENCLR_TX_ESC_MASK)
/*! @} */

/*! @name VISION_CLKSEL - Vision clock source selection */
/*! @{ */

#define CGU_VISION_CLKSEL_MAIN_MASK              (0x3U)
#define CGU_VISION_CLKSEL_MAIN_SHIFT             (0U)
/*! main - Clock source selection for the Vision SS.
 *  0b00..Select FROL as main clock source.
 *  0b01..Select FRO as main clock source.
 *  0b10..Select NSS FRO as main clock source.
 *  0b11..Select PLL as main clock source.
 */
#define CGU_VISION_CLKSEL_MAIN(x)                (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKSEL_MAIN_SHIFT)) & CGU_VISION_CLKSEL_MAIN_MASK)
/*! @} */

/*! @name VISION_CLKCFG - Vision SS clock configuration */
/*! @{ */

#define CGU_VISION_CLKCFG_PLL_REF_CLKDIV_MASK    (0xFFU)
#define CGU_VISION_CLKCFG_PLL_REF_CLKDIV_SHIFT   (0U)
/*! pll_ref_clkdiv - PLL ref clock divider setting. */
#define CGU_VISION_CLKCFG_PLL_REF_CLKDIV(x)      (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKCFG_PLL_REF_CLKDIV_SHIFT)) & CGU_VISION_CLKCFG_PLL_REF_CLKDIV_MASK)

#define CGU_VISION_CLKCFG_PIXEL_CLKDIV_MASK      (0xFF00U)
#define CGU_VISION_CLKCFG_PIXEL_CLKDIV_SHIFT     (8U)
/*! pixel_clkdiv - PLL ref clock divider setting. */
#define CGU_VISION_CLKCFG_PIXEL_CLKDIV(x)        (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKCFG_PIXEL_CLKDIV_SHIFT)) & CGU_VISION_CLKCFG_PIXEL_CLKDIV_MASK)

#define CGU_VISION_CLKCFG_RX_ESC_CLKDIV_MASK     (0xFF0000U)
#define CGU_VISION_CLKCFG_RX_ESC_CLKDIV_SHIFT    (16U)
/*! rx_esc_clkdiv - PLL ref clock divider setting. */
#define CGU_VISION_CLKCFG_RX_ESC_CLKDIV(x)       (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKCFG_RX_ESC_CLKDIV_SHIFT)) & CGU_VISION_CLKCFG_RX_ESC_CLKDIV_MASK)

#define CGU_VISION_CLKCFG_TX_ESC_CLKDIV_MASK     (0xFF000000U)
#define CGU_VISION_CLKCFG_TX_ESC_CLKDIV_SHIFT    (24U)
/*! tx_esc_clkdiv - PLL ref clock divider setting. */
#define CGU_VISION_CLKCFG_TX_ESC_CLKDIV(x)       (((uint32_t)(((uint32_t)(x)) << CGU_VISION_CLKCFG_TX_ESC_CLKDIV_SHIFT)) & CGU_VISION_CLKCFG_TX_ESC_CLKDIV_MASK)
/*! @} */

/*! @name XBREAK_RSTEN - Status register for the xbreak module reset enable.<br> The register indicates if the module is in reset or not.<br> <br> 0: Module is out of reset.<br> 1: Module is in reset. */
/*! @{ */

#define CGU_XBREAK_RSTEN_APB_MASK                (0x1U)
#define CGU_XBREAK_RSTEN_APB_SHIFT               (0U)
/*! apb - Reset control for the crossbreak APB.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTEN_APB(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTEN_APB_SHIFT)) & CGU_XBREAK_RSTEN_APB_MASK)

#define CGU_XBREAK_RSTEN_XSP_MASK                (0x2U)
#define CGU_XBREAK_RSTEN_XSP_SHIFT               (1U)
/*! xsp - Reset control for the crossbreak logic of xsp.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTEN_XSP(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTEN_XSP_SHIFT)) & CGU_XBREAK_RSTEN_XSP_MASK)

#define CGU_XBREAK_RSTEN_CM55_CSS_MASK           (0x4U)
#define CGU_XBREAK_RSTEN_CM55_CSS_SHIFT          (2U)
/*! cm55_css - Reset control for the crossbreak logic of CM55 of the CtrlSS.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTEN_CM55_CSS(x)             (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTEN_CM55_CSS_SHIFT)) & CGU_XBREAK_RSTEN_CM55_CSS_MASK)

#define CGU_XBREAK_RSTEN_CM55_NSS_MASK           (0x8U)
#define CGU_XBREAK_RSTEN_CM55_NSS_SHIFT          (3U)
/*! cm55_nss - Reset control for the crossbreak logic of CM55 of the NSS.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTEN_CM55_NSS(x)             (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTEN_CM55_NSS_SHIFT)) & CGU_XBREAK_RSTEN_CM55_NSS_MASK)

#define CGU_XBREAK_RSTEN_HIFI5S_MASK             (0x10U)
#define CGU_XBREAK_RSTEN_HIFI5S_SHIFT            (4U)
/*! hifi5s - Reset control for the crossbreak logic of hifi5s.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTEN_HIFI5S(x)               (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTEN_HIFI5S_SHIFT)) & CGU_XBREAK_RSTEN_HIFI5S_MASK)

#define CGU_XBREAK_RSTEN_ETHOS_U85_MASK          (0x20U)
#define CGU_XBREAK_RSTEN_ETHOS_U85_SHIFT         (5U)
/*! ethos_u85 - Reset control for the crossbreak logic of the ethos U85.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTEN_ETHOS_U85(x)            (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTEN_ETHOS_U85_SHIFT)) & CGU_XBREAK_RSTEN_ETHOS_U85_MASK)

#define CGU_XBREAK_RSTEN_DSP0_MASK               (0x40U)
#define CGU_XBREAK_RSTEN_DSP0_SHIFT              (6U)
/*! dsp0 - Reset control for the crossbreak logic of dsp0.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTEN_DSP0(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTEN_DSP0_SHIFT)) & CGU_XBREAK_RSTEN_DSP0_MASK)

#define CGU_XBREAK_RSTEN_DSP1_MASK               (0x80U)
#define CGU_XBREAK_RSTEN_DSP1_SHIFT              (7U)
/*! dsp1 - Reset control for the crossbreak logic of dsp1.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTEN_DSP1(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTEN_DSP1_SHIFT)) & CGU_XBREAK_RSTEN_DSP1_MASK)
/*! @} */

/*! @name XBREAK_RSTENSET - Register to set bits in xbreak_rstEn.<br> Write 1 to set a bitfield (enable the reset).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_XBREAK_RSTENSET_APB_MASK             (0x1U)
#define CGU_XBREAK_RSTENSET_APB_SHIFT            (0U)
/*! apb - Reset control for the crossbreak APB.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTENSET_APB(x)               (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTENSET_APB_SHIFT)) & CGU_XBREAK_RSTENSET_APB_MASK)

#define CGU_XBREAK_RSTENSET_XSP_MASK             (0x2U)
#define CGU_XBREAK_RSTENSET_XSP_SHIFT            (1U)
/*! xsp - Reset control for the crossbreak logic of xsp.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTENSET_XSP(x)               (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTENSET_XSP_SHIFT)) & CGU_XBREAK_RSTENSET_XSP_MASK)

#define CGU_XBREAK_RSTENSET_CM55_CSS_MASK        (0x4U)
#define CGU_XBREAK_RSTENSET_CM55_CSS_SHIFT       (2U)
/*! cm55_css - Reset control for the crossbreak logic of CM55 of the CtrlSS.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTENSET_CM55_CSS(x)          (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTENSET_CM55_CSS_SHIFT)) & CGU_XBREAK_RSTENSET_CM55_CSS_MASK)

#define CGU_XBREAK_RSTENSET_CM55_NSS_MASK        (0x8U)
#define CGU_XBREAK_RSTENSET_CM55_NSS_SHIFT       (3U)
/*! cm55_nss - Reset control for the crossbreak logic of CM55 of the NSS.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTENSET_CM55_NSS(x)          (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTENSET_CM55_NSS_SHIFT)) & CGU_XBREAK_RSTENSET_CM55_NSS_MASK)

#define CGU_XBREAK_RSTENSET_HIFI5S_MASK          (0x10U)
#define CGU_XBREAK_RSTENSET_HIFI5S_SHIFT         (4U)
/*! hifi5s - Reset control for the crossbreak logic of hifi5s.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTENSET_HIFI5S(x)            (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTENSET_HIFI5S_SHIFT)) & CGU_XBREAK_RSTENSET_HIFI5S_MASK)

#define CGU_XBREAK_RSTENSET_ETHOS_U85_MASK       (0x20U)
#define CGU_XBREAK_RSTENSET_ETHOS_U85_SHIFT      (5U)
/*! ethos_u85 - Reset control for the crossbreak logic of the ethos U85.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTENSET_ETHOS_U85(x)         (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTENSET_ETHOS_U85_SHIFT)) & CGU_XBREAK_RSTENSET_ETHOS_U85_MASK)

#define CGU_XBREAK_RSTENSET_DSP0_MASK            (0x40U)
#define CGU_XBREAK_RSTENSET_DSP0_SHIFT           (6U)
/*! dsp0 - Reset control for the crossbreak logic of dsp0.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTENSET_DSP0(x)              (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTENSET_DSP0_SHIFT)) & CGU_XBREAK_RSTENSET_DSP0_MASK)

#define CGU_XBREAK_RSTENSET_DSP1_MASK            (0x80U)
#define CGU_XBREAK_RSTENSET_DSP1_SHIFT           (7U)
/*! dsp1 - Reset control for the crossbreak logic of dsp1.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTENSET_DSP1(x)              (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTENSET_DSP1_SHIFT)) & CGU_XBREAK_RSTENSET_DSP1_MASK)
/*! @} */

/*! @name XBREAK_RSTENCLR - Register to clear bits in xbreak_rstEn.<br> Write 1 to clear a bitfield (disable the reset).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_XBREAK_RSTENCLR_APB_MASK             (0x1U)
#define CGU_XBREAK_RSTENCLR_APB_SHIFT            (0U)
/*! apb - Reset control for the crossbreak APB.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTENCLR_APB(x)               (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTENCLR_APB_SHIFT)) & CGU_XBREAK_RSTENCLR_APB_MASK)

#define CGU_XBREAK_RSTENCLR_XSP_MASK             (0x2U)
#define CGU_XBREAK_RSTENCLR_XSP_SHIFT            (1U)
/*! xsp - Reset control for the crossbreak logic of xsp.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTENCLR_XSP(x)               (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTENCLR_XSP_SHIFT)) & CGU_XBREAK_RSTENCLR_XSP_MASK)

#define CGU_XBREAK_RSTENCLR_CM55_CSS_MASK        (0x4U)
#define CGU_XBREAK_RSTENCLR_CM55_CSS_SHIFT       (2U)
/*! cm55_css - Reset control for the crossbreak logic of CM55 of the CtrlSS.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTENCLR_CM55_CSS(x)          (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTENCLR_CM55_CSS_SHIFT)) & CGU_XBREAK_RSTENCLR_CM55_CSS_MASK)

#define CGU_XBREAK_RSTENCLR_CM55_NSS_MASK        (0x8U)
#define CGU_XBREAK_RSTENCLR_CM55_NSS_SHIFT       (3U)
/*! cm55_nss - Reset control for the crossbreak logic of CM55 of the NSS.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTENCLR_CM55_NSS(x)          (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTENCLR_CM55_NSS_SHIFT)) & CGU_XBREAK_RSTENCLR_CM55_NSS_MASK)

#define CGU_XBREAK_RSTENCLR_HIFI5S_MASK          (0x10U)
#define CGU_XBREAK_RSTENCLR_HIFI5S_SHIFT         (4U)
/*! hifi5s - Reset control for the crossbreak logic of hifi5s.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTENCLR_HIFI5S(x)            (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTENCLR_HIFI5S_SHIFT)) & CGU_XBREAK_RSTENCLR_HIFI5S_MASK)

#define CGU_XBREAK_RSTENCLR_ETHOS_U85_MASK       (0x20U)
#define CGU_XBREAK_RSTENCLR_ETHOS_U85_SHIFT      (5U)
/*! ethos_u85 - Reset control for the crossbreak logic of the ethos U85.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTENCLR_ETHOS_U85(x)         (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTENCLR_ETHOS_U85_SHIFT)) & CGU_XBREAK_RSTENCLR_ETHOS_U85_MASK)

#define CGU_XBREAK_RSTENCLR_DSP0_MASK            (0x40U)
#define CGU_XBREAK_RSTENCLR_DSP0_SHIFT           (6U)
/*! dsp0 - Reset control for the crossbreak logic of dsp0.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTENCLR_DSP0(x)              (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTENCLR_DSP0_SHIFT)) & CGU_XBREAK_RSTENCLR_DSP0_MASK)

#define CGU_XBREAK_RSTENCLR_DSP1_MASK            (0x80U)
#define CGU_XBREAK_RSTENCLR_DSP1_SHIFT           (7U)
/*! dsp1 - Reset control for the crossbreak logic of dsp1.
 *  0b0..Module out of reset.
 *  0b1..Module in reset.
 */
#define CGU_XBREAK_RSTENCLR_DSP1(x)              (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_RSTENCLR_DSP1_SHIFT)) & CGU_XBREAK_RSTENCLR_DSP1_MASK)
/*! @} */

/*! @name XBREAK_CLKEN - Status register for the xbreak module clock enable.<br> The register indicates if the clock is enabled or disabled.<br> <br> 0: Clock is disabled<br> 1: Clock is enabled */
/*! @{ */

#define CGU_XBREAK_CLKEN_APB_MASK                (0x1U)
#define CGU_XBREAK_CLKEN_APB_SHIFT               (0U)
/*! apb - Clock control for the crossbreak APB.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKEN_APB(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKEN_APB_SHIFT)) & CGU_XBREAK_CLKEN_APB_MASK)

#define CGU_XBREAK_CLKEN_XSP_MASK                (0x2U)
#define CGU_XBREAK_CLKEN_XSP_SHIFT               (1U)
/*! xsp - Clock control for the crossbreak logic of xsp.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKEN_XSP(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKEN_XSP_SHIFT)) & CGU_XBREAK_CLKEN_XSP_MASK)

#define CGU_XBREAK_CLKEN_CM55_CSS_MASK           (0x4U)
#define CGU_XBREAK_CLKEN_CM55_CSS_SHIFT          (2U)
/*! cm55_css - Clock control for the crossbreak logic of CM55 of the CtrlSS.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKEN_CM55_CSS(x)             (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKEN_CM55_CSS_SHIFT)) & CGU_XBREAK_CLKEN_CM55_CSS_MASK)

#define CGU_XBREAK_CLKEN_CM55_NSS_MASK           (0x8U)
#define CGU_XBREAK_CLKEN_CM55_NSS_SHIFT          (3U)
/*! cm55_nss - Clock control for the crossbreak logic of CM55 of the NSS.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKEN_CM55_NSS(x)             (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKEN_CM55_NSS_SHIFT)) & CGU_XBREAK_CLKEN_CM55_NSS_MASK)

#define CGU_XBREAK_CLKEN_HIFI5S_MASK             (0x10U)
#define CGU_XBREAK_CLKEN_HIFI5S_SHIFT            (4U)
/*! hifi5s - Clock control for the crossbreak logic of hifi5s.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKEN_HIFI5S(x)               (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKEN_HIFI5S_SHIFT)) & CGU_XBREAK_CLKEN_HIFI5S_MASK)

#define CGU_XBREAK_CLKEN_ETHOS_U85_MASK          (0x20U)
#define CGU_XBREAK_CLKEN_ETHOS_U85_SHIFT         (5U)
/*! ethos_u85 - Clock control for the crossbreak logic of the ethos U85.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKEN_ETHOS_U85(x)            (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKEN_ETHOS_U85_SHIFT)) & CGU_XBREAK_CLKEN_ETHOS_U85_MASK)

#define CGU_XBREAK_CLKEN_DSP0_MASK               (0x40U)
#define CGU_XBREAK_CLKEN_DSP0_SHIFT              (6U)
/*! dsp0 - Clock control for the crossbreak logic of dsp0.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKEN_DSP0(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKEN_DSP0_SHIFT)) & CGU_XBREAK_CLKEN_DSP0_MASK)

#define CGU_XBREAK_CLKEN_DSP1_MASK               (0x80U)
#define CGU_XBREAK_CLKEN_DSP1_SHIFT              (7U)
/*! dsp1 - Clock control for the crossbreak logic of dsp1.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKEN_DSP1(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKEN_DSP1_SHIFT)) & CGU_XBREAK_CLKEN_DSP1_MASK)

#define CGU_XBREAK_CLKEN_DSP_NOSTEAL_MASK        (0x100U)
#define CGU_XBREAK_CLKEN_DSP_NOSTEAL_SHIFT       (8U)
/*! dsp_nosteal - Clock control for the crossbreak logic of the nosteal logic in ADSS.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKEN_DSP_NOSTEAL(x)          (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKEN_DSP_NOSTEAL_SHIFT)) & CGU_XBREAK_CLKEN_DSP_NOSTEAL_MASK)
/*! @} */

/*! @name XBREAK_CLKENSET - Register to set bits in xbreak_clkEn.<br> Write 1 to set a bitfield (enable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_XBREAK_CLKENSET_APB_MASK             (0x1U)
#define CGU_XBREAK_CLKENSET_APB_SHIFT            (0U)
/*! apb - Clock control for the crossbreak APB.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENSET_APB(x)               (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENSET_APB_SHIFT)) & CGU_XBREAK_CLKENSET_APB_MASK)

#define CGU_XBREAK_CLKENSET_XSP_MASK             (0x2U)
#define CGU_XBREAK_CLKENSET_XSP_SHIFT            (1U)
/*! xsp - Clock control for the crossbreak logic of xsp.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENSET_XSP(x)               (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENSET_XSP_SHIFT)) & CGU_XBREAK_CLKENSET_XSP_MASK)

#define CGU_XBREAK_CLKENSET_CM55_CSS_MASK        (0x4U)
#define CGU_XBREAK_CLKENSET_CM55_CSS_SHIFT       (2U)
/*! cm55_css - Clock control for the crossbreak logic of CM55 of the CtrlSS.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENSET_CM55_CSS(x)          (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENSET_CM55_CSS_SHIFT)) & CGU_XBREAK_CLKENSET_CM55_CSS_MASK)

#define CGU_XBREAK_CLKENSET_CM55_NSS_MASK        (0x8U)
#define CGU_XBREAK_CLKENSET_CM55_NSS_SHIFT       (3U)
/*! cm55_nss - Clock control for the crossbreak logic of CM55 of the NSS.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENSET_CM55_NSS(x)          (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENSET_CM55_NSS_SHIFT)) & CGU_XBREAK_CLKENSET_CM55_NSS_MASK)

#define CGU_XBREAK_CLKENSET_HIFI5S_MASK          (0x10U)
#define CGU_XBREAK_CLKENSET_HIFI5S_SHIFT         (4U)
/*! hifi5s - Clock control for the crossbreak logic of hifi5s.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENSET_HIFI5S(x)            (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENSET_HIFI5S_SHIFT)) & CGU_XBREAK_CLKENSET_HIFI5S_MASK)

#define CGU_XBREAK_CLKENSET_ETHOS_U85_MASK       (0x20U)
#define CGU_XBREAK_CLKENSET_ETHOS_U85_SHIFT      (5U)
/*! ethos_u85 - Clock control for the crossbreak logic of the ethos U85.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENSET_ETHOS_U85(x)         (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENSET_ETHOS_U85_SHIFT)) & CGU_XBREAK_CLKENSET_ETHOS_U85_MASK)

#define CGU_XBREAK_CLKENSET_DSP0_MASK            (0x40U)
#define CGU_XBREAK_CLKENSET_DSP0_SHIFT           (6U)
/*! dsp0 - Clock control for the crossbreak logic of dsp0.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENSET_DSP0(x)              (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENSET_DSP0_SHIFT)) & CGU_XBREAK_CLKENSET_DSP0_MASK)

#define CGU_XBREAK_CLKENSET_DSP1_MASK            (0x80U)
#define CGU_XBREAK_CLKENSET_DSP1_SHIFT           (7U)
/*! dsp1 - Clock control for the crossbreak logic of dsp1.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENSET_DSP1(x)              (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENSET_DSP1_SHIFT)) & CGU_XBREAK_CLKENSET_DSP1_MASK)

#define CGU_XBREAK_CLKENSET_DSP_NOSTEAL_MASK     (0x100U)
#define CGU_XBREAK_CLKENSET_DSP_NOSTEAL_SHIFT    (8U)
/*! dsp_nosteal - Clock control for the crossbreak logic of the nosteal logic in ADSS.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENSET_DSP_NOSTEAL(x)       (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENSET_DSP_NOSTEAL_SHIFT)) & CGU_XBREAK_CLKENSET_DSP_NOSTEAL_MASK)
/*! @} */

/*! @name XBREAK_CLKENCLR - Register to clear bits in xbreak_clkEn.<br> Write 1 to clear a bitfield (disable the clock).<br> Write 0 is ignored. Read gives 0. */
/*! @{ */

#define CGU_XBREAK_CLKENCLR_APB_MASK             (0x1U)
#define CGU_XBREAK_CLKENCLR_APB_SHIFT            (0U)
/*! apb - Clock control for the crossbreak APB.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENCLR_APB(x)               (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENCLR_APB_SHIFT)) & CGU_XBREAK_CLKENCLR_APB_MASK)

#define CGU_XBREAK_CLKENCLR_XSP_MASK             (0x2U)
#define CGU_XBREAK_CLKENCLR_XSP_SHIFT            (1U)
/*! xsp - Clock control for the crossbreak logic of xsp.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENCLR_XSP(x)               (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENCLR_XSP_SHIFT)) & CGU_XBREAK_CLKENCLR_XSP_MASK)

#define CGU_XBREAK_CLKENCLR_CM55_CSS_MASK        (0x4U)
#define CGU_XBREAK_CLKENCLR_CM55_CSS_SHIFT       (2U)
/*! cm55_css - Clock control for the crossbreak logic of CM55 of the CtrlSS.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENCLR_CM55_CSS(x)          (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENCLR_CM55_CSS_SHIFT)) & CGU_XBREAK_CLKENCLR_CM55_CSS_MASK)

#define CGU_XBREAK_CLKENCLR_CM55_NSS_MASK        (0x8U)
#define CGU_XBREAK_CLKENCLR_CM55_NSS_SHIFT       (3U)
/*! cm55_nss - Clock control for the crossbreak logic of CM55 of the NSS.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENCLR_CM55_NSS(x)          (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENCLR_CM55_NSS_SHIFT)) & CGU_XBREAK_CLKENCLR_CM55_NSS_MASK)

#define CGU_XBREAK_CLKENCLR_HIFI5S_MASK          (0x10U)
#define CGU_XBREAK_CLKENCLR_HIFI5S_SHIFT         (4U)
/*! hifi5s - Clock control for the crossbreak logic of hifi5s.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENCLR_HIFI5S(x)            (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENCLR_HIFI5S_SHIFT)) & CGU_XBREAK_CLKENCLR_HIFI5S_MASK)

#define CGU_XBREAK_CLKENCLR_ETHOS_U85_MASK       (0x20U)
#define CGU_XBREAK_CLKENCLR_ETHOS_U85_SHIFT      (5U)
/*! ethos_u85 - Clock control for the crossbreak logic of the ethos U85.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENCLR_ETHOS_U85(x)         (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENCLR_ETHOS_U85_SHIFT)) & CGU_XBREAK_CLKENCLR_ETHOS_U85_MASK)

#define CGU_XBREAK_CLKENCLR_DSP0_MASK            (0x40U)
#define CGU_XBREAK_CLKENCLR_DSP0_SHIFT           (6U)
/*! dsp0 - Clock control for the crossbreak logic of dsp0.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENCLR_DSP0(x)              (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENCLR_DSP0_SHIFT)) & CGU_XBREAK_CLKENCLR_DSP0_MASK)

#define CGU_XBREAK_CLKENCLR_DSP1_MASK            (0x80U)
#define CGU_XBREAK_CLKENCLR_DSP1_SHIFT           (7U)
/*! dsp1 - Clock control for the crossbreak logic of dsp1.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENCLR_DSP1(x)              (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENCLR_DSP1_SHIFT)) & CGU_XBREAK_CLKENCLR_DSP1_MASK)

#define CGU_XBREAK_CLKENCLR_DSP_NOSTEAL_MASK     (0x100U)
#define CGU_XBREAK_CLKENCLR_DSP_NOSTEAL_SHIFT    (8U)
/*! dsp_nosteal - Clock control for the crossbreak logic of the nosteal logic in ADSS.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_XBREAK_CLKENCLR_DSP_NOSTEAL(x)       (((uint32_t)(((uint32_t)(x)) << CGU_XBREAK_CLKENCLR_DSP_NOSTEAL_SHIFT)) & CGU_XBREAK_CLKENCLR_DSP_NOSTEAL_MASK)
/*! @} */

/*! @name DEBUG_CLK_DIV -  */
/*! @{ */

#define CGU_DEBUG_CLK_DIV_FROL_EN_MASK           (0x1U)
#define CGU_DEBUG_CLK_DIV_FROL_EN_SHIFT          (0U)
/*! frol_en - FROL debug clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_DEBUG_CLK_DIV_FROL_EN(x)             (((uint32_t)(((uint32_t)(x)) << CGU_DEBUG_CLK_DIV_FROL_EN_SHIFT)) & CGU_DEBUG_CLK_DIV_FROL_EN_MASK)

#define CGU_DEBUG_CLK_DIV_FROL_MASK              (0xEU)
#define CGU_DEBUG_CLK_DIV_FROL_SHIFT             (1U)
/*! frol - FROL debug clock division selection.
 *  0b000..Select division by 2.
 *  0b001..Select division by 4.
 *  0b010..Select division by 8.
 *  0b011..Select division by 16.
 *  0b100..Select division by 32.
 *  0b101..Select division by 64.
 *  0b110..Select division by 128.
 *  0b111..Select division by 256.
 */
#define CGU_DEBUG_CLK_DIV_FROL(x)                (((uint32_t)(((uint32_t)(x)) << CGU_DEBUG_CLK_DIV_FROL_SHIFT)) & CGU_DEBUG_CLK_DIV_FROL_MASK)

#define CGU_DEBUG_CLK_DIV_FRO_EN_MASK            (0x10U)
#define CGU_DEBUG_CLK_DIV_FRO_EN_SHIFT           (4U)
/*! fro_en - FROL debug clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_DEBUG_CLK_DIV_FRO_EN(x)              (((uint32_t)(((uint32_t)(x)) << CGU_DEBUG_CLK_DIV_FRO_EN_SHIFT)) & CGU_DEBUG_CLK_DIV_FRO_EN_MASK)

#define CGU_DEBUG_CLK_DIV_FRO_MASK               (0xE0U)
#define CGU_DEBUG_CLK_DIV_FRO_SHIFT              (5U)
/*! fro - FROL debug clock division selection.
 *  0b000..Select division by 2.
 *  0b001..Select division by 4.
 *  0b010..Select division by 8.
 *  0b011..Select division by 16.
 *  0b100..Select division by 32.
 *  0b101..Select division by 64.
 *  0b110..Select division by 128.
 *  0b111..Select division by 256.
 */
#define CGU_DEBUG_CLK_DIV_FRO(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_DEBUG_CLK_DIV_FRO_SHIFT)) & CGU_DEBUG_CLK_DIV_FRO_MASK)

#define CGU_DEBUG_CLK_DIV_NSS_FRO_EN_MASK        (0x100U)
#define CGU_DEBUG_CLK_DIV_NSS_FRO_EN_SHIFT       (8U)
/*! nss_fro_en - FROL debug clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_DEBUG_CLK_DIV_NSS_FRO_EN(x)          (((uint32_t)(((uint32_t)(x)) << CGU_DEBUG_CLK_DIV_NSS_FRO_EN_SHIFT)) & CGU_DEBUG_CLK_DIV_NSS_FRO_EN_MASK)

#define CGU_DEBUG_CLK_DIV_NSS_FRO_MASK           (0xE00U)
#define CGU_DEBUG_CLK_DIV_NSS_FRO_SHIFT          (9U)
/*! nss_fro - FROL debug clock division selection.
 *  0b000..Select division by 2.
 *  0b001..Select division by 4.
 *  0b010..Select division by 8.
 *  0b011..Select division by 16.
 *  0b100..Select division by 32.
 *  0b101..Select division by 64.
 *  0b110..Select division by 128.
 *  0b111..Select division by 256.
 */
#define CGU_DEBUG_CLK_DIV_NSS_FRO(x)             (((uint32_t)(((uint32_t)(x)) << CGU_DEBUG_CLK_DIV_NSS_FRO_SHIFT)) & CGU_DEBUG_CLK_DIV_NSS_FRO_MASK)

#define CGU_DEBUG_CLK_DIV_PLL_EN_MASK            (0x1000U)
#define CGU_DEBUG_CLK_DIV_PLL_EN_SHIFT           (12U)
/*! pll_en - FROL debug clock enable.
 *  0b0..Clock is disabled.
 *  0b1..Clock is enabled.
 */
#define CGU_DEBUG_CLK_DIV_PLL_EN(x)              (((uint32_t)(((uint32_t)(x)) << CGU_DEBUG_CLK_DIV_PLL_EN_SHIFT)) & CGU_DEBUG_CLK_DIV_PLL_EN_MASK)

#define CGU_DEBUG_CLK_DIV_PLL_MASK               (0xE000U)
#define CGU_DEBUG_CLK_DIV_PLL_SHIFT              (13U)
/*! pll - FROL debug clock division selection.
 *  0b000..Select division by 2.
 *  0b001..Select division by 4.
 *  0b010..Select division by 8.
 *  0b011..Select division by 16.
 *  0b100..Select division by 32.
 *  0b101..Select division by 64.
 *  0b110..Select division by 128.
 *  0b111..Select division by 256.
 */
#define CGU_DEBUG_CLK_DIV_PLL(x)                 (((uint32_t)(((uint32_t)(x)) << CGU_DEBUG_CLK_DIV_PLL_SHIFT)) & CGU_DEBUG_CLK_DIV_PLL_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group CGU_Register_Masks */


/*!
 * @}
 */ /* end of group CGU_Peripheral_Access_Layer */


/*
** End of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic pop
  #else
    #pragma pop
  #endif
#elif defined(__GNUC__)
  /* leave anonymous unions enabled */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=default
#else
  #error Not supported compiler type
#endif

/*!
 * @}
 */ /* end of group Peripheral_access_layer */


#endif  /* PERI_CGU_H_ */

