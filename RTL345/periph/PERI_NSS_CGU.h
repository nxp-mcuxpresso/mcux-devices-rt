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
**         CMSIS Peripheral Access Layer for NSS_CGU
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
 * @file PERI_NSS_CGU.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for NSS_CGU
 *
 * CMSIS Peripheral Access Layer for NSS_CGU
 */

#if !defined(PERI_NSS_CGU_H_)
#define PERI_NSS_CGU_H_                          /**< Symbol preventing repeated inclusion */

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
   -- NSS_CGU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_CGU_Peripheral_Access_Layer NSS_CGU Peripheral Access Layer
 * @{
 */

/** NSS_CGU - Register Layout Typedef */
typedef struct {
  __I  uint32_t RSTEN;                             /**< Indicates the status of the reset registers., offset: 0x0 */
  __O  uint32_t RSTENSET;                          /**< Write 1 to set a bitfield (assert reset). Write 0 is ignored. Read gives 0., offset: 0x4 */
  __O  uint32_t RSTENCLR;                          /**< Write 1 to clear a bitfield (deassert reset). Write 0 is ignored. Read gives 0., offset: 0x8 */
  __I  uint32_t CLKEN;                             /**< Indicates if the clock is enabled or disabled., offset: 0xC */
  __O  uint32_t CLKENSET;                          /**< Write 1 to set a bitfield (enable the clock). Write 0 is ignored. Read gives 0., offset: 0x10 */
  __O  uint32_t CLKENCLR;                          /**< Write 1 to clear a bitfield (disable the clock). Write 0 is ignored. Read gives 0., offset: 0x14 */
  __I  uint32_t CLKOVERRIDEEN;                     /**< This is the list of clocks that are automatically clock gated by HW when enabled and there is no activity. When a clock is enabled, the HW will dynamically gate/ungate the clock (automatic clock gating). When the override switch is on, the automatic clock gating is disabled and the clock is al the time running when the clock is enabled., offset: 0x18 */
  __O  uint32_t CLKOVERRIDEENSET;                  /**< Write 1 to set a bitfield (override the clock). Write 0 is ignored. Read gives 0., offset: 0x1C */
  __O  uint32_t CLKOVERRIDEENCLR;                  /**< Write 1 to clear a bitfield (automatic clock gating). Write 0 is ignored. Read gives 0., offset: 0x20 */
  __IO uint32_t MAIN_CLKDIV;                       /**< Indicates the status of the reset registers., offset: 0x24 */
  __IO uint32_t CM55_CLKDIV;                       /**< Indicates the status of the reset registers., offset: 0x28 */
  __IO uint32_t XSP_CLKDIV;                        /**< Indicates the status of the reset registers., offset: 0x2C */
  __IO uint32_t DRAINCNT0;                         /**< offset: 0x30 */
  __IO uint32_t DRAINCNT1;                         /**< offset: 0x34 */
  __IO uint32_t DRAINCNT2;                         /**< offset: 0x38 */
  __IO uint32_t DRAINCNT3;                         /**< offset: 0x3C */
  __IO uint32_t XSP_CLKSTEAL;                      /**< Register to override the clockstealing flag to the XSP. By default the flag is based on the XSP Predivider and XSP LFSR divider settings. In case of artifacts, the status of the the flag can be overriden with this register. This register should only be changed while the XSP is idle., offset: 0x40 */
} NSS_CGU_Type;

/* ----------------------------------------------------------------------------
   -- NSS_CGU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_CGU_Register_Masks NSS_CGU Register Masks
 * @{
 */

/*! @name RSTEN - Indicates the status of the reset registers. */
/*! @{ */

#define NSS_CGU_RSTEN_NIC_MASK                   (0x1U)
#define NSS_CGU_RSTEN_NIC_SHIFT                  (0U)
/*! nic - NIC reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_NIC(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_NIC_SHIFT)) & NSS_CGU_RSTEN_NIC_MASK)

#define NSS_CGU_RSTEN_DBG_GPO_MASK               (0x2U)
#define NSS_CGU_RSTEN_DBG_GPO_SHIFT              (1U)
/*! dbg_gpo - Reset of debug GPO module.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_DBG_GPO(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_DBG_GPO_SHIFT)) & NSS_CGU_RSTEN_DBG_GPO_MASK)

#define NSS_CGU_RSTEN_CSSEVENTGEN_MASK           (0x4U)
#define NSS_CGU_RSTEN_CSSEVENTGEN_SHIFT          (2U)
/*! cssEventGen - Resets the CSS Event Generator. Deassert this reset for receiving events from/sending events to CSS.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_CSSEVENTGEN(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_CSSEVENTGEN_SHIFT)) & NSS_CGU_RSTEN_CSSEVENTGEN_MASK)

#define NSS_CGU_RSTEN_CM55POR_MASK               (0x10U)
#define NSS_CGU_RSTEN_CM55POR_SHIFT              (4U)
/*! cm55Por - CM55 Cold reset, must be asserted and released together with cm55DbgRst. Will also
 *    drive the nMBISTRESET signal of the CM55.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_CM55POR(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_CM55POR_SHIFT)) & NSS_CGU_RSTEN_CM55POR_MASK)

#define NSS_CGU_RSTEN_CM55SYS_MASK               (0x20U)
#define NSS_CGU_RSTEN_CM55SYS_SHIFT              (5U)
/*! cm55Sys - CM55 Warm reset, resets most of the core except the debug logic. Can be used to reset
 *    the cpu, but holding it to start executing code.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_CM55SYS(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_CM55SYS_SHIFT)) & NSS_CGU_RSTEN_CM55SYS_MASK)

#define NSS_CGU_RSTEN_CM55DBG_MASK               (0x40U)
#define NSS_CGU_RSTEN_CM55DBG_SHIFT              (6U)
/*! cm55Dbg - CM55 Debug reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_CM55DBG(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_CM55DBG_SHIFT)) & NSS_CGU_RSTEN_CM55DBG_MASK)

#define NSS_CGU_RSTEN_CM55IWIC_MASK              (0x80U)
#define NSS_CGU_RSTEN_CM55IWIC_SHIFT             (7U)
/*! cm55Iwic - CM55 Internal Wakeup Controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_CM55IWIC(x)                (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_CM55IWIC_SHIFT)) & NSS_CGU_RSTEN_CM55IWIC_MASK)

#define NSS_CGU_RSTEN_U85_MASK                   (0x100U)
#define NSS_CGU_RSTEN_U85_SHIFT                  (8U)
/*! u85 - Ethos U85 Reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_U85(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_U85_SHIFT)) & NSS_CGU_RSTEN_U85_MASK)

#define NSS_CGU_RSTEN_XSP_MASK                   (0x200U)
#define NSS_CGU_RSTEN_XSP_SHIFT                  (9U)
/*! xsp - XSP reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_XSP(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_XSP_SHIFT)) & NSS_CGU_RSTEN_XSP_MASK)

#define NSS_CGU_RSTEN_XSP_SYS_MASK               (0x400U)
#define NSS_CGU_RSTEN_XSP_SYS_SHIFT              (10U)
/*! xsp_sys - XSP system reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_XSP_SYS(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_XSP_SYS_SHIFT)) & NSS_CGU_RSTEN_XSP_SYS_MASK)

#define NSS_CGU_RSTEN_WDT_MASK                   (0x800U)
#define NSS_CGU_RSTEN_WDT_SHIFT                  (11U)
/*! wdt - NSS watchdog reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_WDT(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_WDT_SHIFT)) & NSS_CGU_RSTEN_WDT_MASK)

#define NSS_CGU_RSTEN_DNNRAM0_MASK               (0x1000U)
#define NSS_CGU_RSTEN_DNNRAM0_SHIFT              (12U)
/*! dnnRam0 - DNN RAM 0 controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_DNNRAM0(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_DNNRAM0_SHIFT)) & NSS_CGU_RSTEN_DNNRAM0_MASK)

#define NSS_CGU_RSTEN_DNNRAM1_MASK               (0x2000U)
#define NSS_CGU_RSTEN_DNNRAM1_SHIFT              (13U)
/*! dnnRam1 - DNN RAM 1 controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_DNNRAM1(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_DNNRAM1_SHIFT)) & NSS_CGU_RSTEN_DNNRAM1_MASK)

#define NSS_CGU_RSTEN_DNNRAM2_MASK               (0x4000U)
#define NSS_CGU_RSTEN_DNNRAM2_SHIFT              (14U)
/*! dnnRam2 - DNN RAM 2 controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_DNNRAM2(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_DNNRAM2_SHIFT)) & NSS_CGU_RSTEN_DNNRAM2_MASK)

#define NSS_CGU_RSTEN_DNNRAM3_MASK               (0x8000U)
#define NSS_CGU_RSTEN_DNNRAM3_SHIFT              (15U)
/*! dnnRam3 - DNN RAM 3 controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_DNNRAM3(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_DNNRAM3_SHIFT)) & NSS_CGU_RSTEN_DNNRAM3_MASK)

#define NSS_CGU_RSTEN_DNNRAM4_MASK               (0x10000U)
#define NSS_CGU_RSTEN_DNNRAM4_SHIFT              (16U)
/*! dnnRam4 - DNN RAM 4 controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_DNNRAM4(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_DNNRAM4_SHIFT)) & NSS_CGU_RSTEN_DNNRAM4_MASK)

#define NSS_CGU_RSTEN_XSP_DBG_SO_MASK            (0x40000U)
#define NSS_CGU_RSTEN_XSP_DBG_SO_SHIFT           (18U)
/*! xsp_dbg_so - XSP Debug Serial Out reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_XSP_DBG_SO(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_XSP_DBG_SO_SHIFT)) & NSS_CGU_RSTEN_XSP_DBG_SO_MASK)

#define NSS_CGU_RSTEN_CM55_DBG_SO_MASK           (0x80000U)
#define NSS_CGU_RSTEN_CM55_DBG_SO_SHIFT          (19U)
/*! cm55_dbg_so - CM55 Debug Serial Out reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_CM55_DBG_SO(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_CM55_DBG_SO_SHIFT)) & NSS_CGU_RSTEN_CM55_DBG_SO_MASK)

#define NSS_CGU_RSTEN_DMA_MASK                   (0x100000U)
#define NSS_CGU_RSTEN_DMA_SHIFT                  (20U)
/*! dma - Resets the DMA module.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_DMA(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_DMA_SHIFT)) & NSS_CGU_RSTEN_DMA_MASK)

#define NSS_CGU_RSTEN_APB_MASK                   (0x200000U)
#define NSS_CGU_RSTEN_APB_SHIFT                  (21U)
/*! apb - Resets the AHBIO2APB module. The reset will be asserted after 7 CM55 cycles. After 2 CM55
 *    cycles, the reset will automatically be deasserted again.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_APB(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_APB_SHIFT)) & NSS_CGU_RSTEN_APB_MASK)

#define NSS_CGU_RSTEN_EDU_MASK                   (0x800000U)
#define NSS_CGU_RSTEN_EDU_SHIFT                  (23U)
/*! edu - Resets the Error Detection Unit module. The previous error status can only be reset by writing to it or full POR reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_EDU(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_EDU_SHIFT)) & NSS_CGU_RSTEN_EDU_MASK)

#define NSS_CGU_RSTEN_EVENTGEN_MASK              (0x1000000U)
#define NSS_CGU_RSTEN_EVENTGEN_SHIFT             (24U)
/*! eventGen - Resets the Event Generator/Mux module (aka NSS EvenBus).
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_EVENTGEN(x)                (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_EVENTGEN_SHIFT)) & NSS_CGU_RSTEN_EVENTGEN_MASK)

#define NSS_CGU_RSTEN_DSSEVENTGEN_MASK           (0x2000000U)
#define NSS_CGU_RSTEN_DSSEVENTGEN_SHIFT          (25U)
/*! dssEventGen - Resets the DSS Event Generator. Deassert this reset for receiving events from/sending events to DSS.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_DSSEVENTGEN(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_DSSEVENTGEN_SHIFT)) & NSS_CGU_RSTEN_DSSEVENTGEN_MASK)

#define NSS_CGU_RSTEN_PMON_MASK                  (0x4000000U)
#define NSS_CGU_RSTEN_PMON_SHIFT                 (26U)
/*! pmon - Resets the Performance Monitor module.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_PMON(x)                    (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_PMON_SHIFT)) & NSS_CGU_RSTEN_PMON_MASK)

#define NSS_CGU_RSTEN_TIMER_MASK                 (0x8000000U)
#define NSS_CGU_RSTEN_TIMER_SHIFT                (27U)
/*! timer - Resets the Timer module.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_TIMER(x)                   (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_TIMER_SHIFT)) & NSS_CGU_RSTEN_TIMER_MASK)

#define NSS_CGU_RSTEN_SYSCFG_MASK                (0x10000000U)
#define NSS_CGU_RSTEN_SYSCFG_SHIFT               (28U)
/*! sysCfg - Resets the sysCfg module (only the APB registers).
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_SYSCFG(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_SYSCFG_SHIFT)) & NSS_CGU_RSTEN_SYSCFG_MASK)

#define NSS_CGU_RSTEN_CGU_MASK                   (0x20000000U)
#define NSS_CGU_RSTEN_CGU_SHIFT                  (29U)
/*! cgu - Resets the CGU module.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTEN_CGU(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTEN_CGU_SHIFT)) & NSS_CGU_RSTEN_CGU_MASK)
/*! @} */

/*! @name RSTENSET - Write 1 to set a bitfield (assert reset). Write 0 is ignored. Read gives 0. */
/*! @{ */

#define NSS_CGU_RSTENSET_NIC_MASK                (0x1U)
#define NSS_CGU_RSTENSET_NIC_SHIFT               (0U)
/*! nic - NIC reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_NIC(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_NIC_SHIFT)) & NSS_CGU_RSTENSET_NIC_MASK)

#define NSS_CGU_RSTENSET_DBG_GPO_MASK            (0x2U)
#define NSS_CGU_RSTENSET_DBG_GPO_SHIFT           (1U)
/*! dbg_gpo - Reset of debug GPO module.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_DBG_GPO(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_DBG_GPO_SHIFT)) & NSS_CGU_RSTENSET_DBG_GPO_MASK)

#define NSS_CGU_RSTENSET_CSSEVENTGEN_MASK        (0x4U)
#define NSS_CGU_RSTENSET_CSSEVENTGEN_SHIFT       (2U)
/*! cssEventGen - Resets the CSS Event Generator. Deassert this reset for receiving events from/sending events to CSS.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_CSSEVENTGEN(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_CSSEVENTGEN_SHIFT)) & NSS_CGU_RSTENSET_CSSEVENTGEN_MASK)

#define NSS_CGU_RSTENSET_CM55POR_MASK            (0x10U)
#define NSS_CGU_RSTENSET_CM55POR_SHIFT           (4U)
/*! cm55Por - CM55 Cold reset, must be asserted and released together with cm55DbgRst. Will also
 *    drive the nMBISTRESET signal of the CM55.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_CM55POR(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_CM55POR_SHIFT)) & NSS_CGU_RSTENSET_CM55POR_MASK)

#define NSS_CGU_RSTENSET_CM55SYS_MASK            (0x20U)
#define NSS_CGU_RSTENSET_CM55SYS_SHIFT           (5U)
/*! cm55Sys - CM55 Warm reset, resets most of the core except the debug logic. Can be used to reset
 *    the cpu, but holding it to start executing code.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_CM55SYS(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_CM55SYS_SHIFT)) & NSS_CGU_RSTENSET_CM55SYS_MASK)

#define NSS_CGU_RSTENSET_CM55DBG_MASK            (0x40U)
#define NSS_CGU_RSTENSET_CM55DBG_SHIFT           (6U)
/*! cm55Dbg - CM55 Debug reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_CM55DBG(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_CM55DBG_SHIFT)) & NSS_CGU_RSTENSET_CM55DBG_MASK)

#define NSS_CGU_RSTENSET_CM55IWIC_MASK           (0x80U)
#define NSS_CGU_RSTENSET_CM55IWIC_SHIFT          (7U)
/*! cm55Iwic - CM55 Internal Wakeup Controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_CM55IWIC(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_CM55IWIC_SHIFT)) & NSS_CGU_RSTENSET_CM55IWIC_MASK)

#define NSS_CGU_RSTENSET_U85_MASK                (0x100U)
#define NSS_CGU_RSTENSET_U85_SHIFT               (8U)
/*! u85 - Ethos U85 Reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_U85(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_U85_SHIFT)) & NSS_CGU_RSTENSET_U85_MASK)

#define NSS_CGU_RSTENSET_XSP_MASK                (0x200U)
#define NSS_CGU_RSTENSET_XSP_SHIFT               (9U)
/*! xsp - XSP reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_XSP(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_XSP_SHIFT)) & NSS_CGU_RSTENSET_XSP_MASK)

#define NSS_CGU_RSTENSET_XSP_SYS_MASK            (0x400U)
#define NSS_CGU_RSTENSET_XSP_SYS_SHIFT           (10U)
/*! xsp_sys - XSP system reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_XSP_SYS(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_XSP_SYS_SHIFT)) & NSS_CGU_RSTENSET_XSP_SYS_MASK)

#define NSS_CGU_RSTENSET_WDT_MASK                (0x800U)
#define NSS_CGU_RSTENSET_WDT_SHIFT               (11U)
/*! wdt - NSS watchdog reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_WDT(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_WDT_SHIFT)) & NSS_CGU_RSTENSET_WDT_MASK)

#define NSS_CGU_RSTENSET_DNNRAM0_MASK            (0x1000U)
#define NSS_CGU_RSTENSET_DNNRAM0_SHIFT           (12U)
/*! dnnRam0 - DNN RAM 0 controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_DNNRAM0(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_DNNRAM0_SHIFT)) & NSS_CGU_RSTENSET_DNNRAM0_MASK)

#define NSS_CGU_RSTENSET_DNNRAM1_MASK            (0x2000U)
#define NSS_CGU_RSTENSET_DNNRAM1_SHIFT           (13U)
/*! dnnRam1 - DNN RAM 1 controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_DNNRAM1(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_DNNRAM1_SHIFT)) & NSS_CGU_RSTENSET_DNNRAM1_MASK)

#define NSS_CGU_RSTENSET_DNNRAM2_MASK            (0x4000U)
#define NSS_CGU_RSTENSET_DNNRAM2_SHIFT           (14U)
/*! dnnRam2 - DNN RAM 2 controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_DNNRAM2(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_DNNRAM2_SHIFT)) & NSS_CGU_RSTENSET_DNNRAM2_MASK)

#define NSS_CGU_RSTENSET_DNNRAM3_MASK            (0x8000U)
#define NSS_CGU_RSTENSET_DNNRAM3_SHIFT           (15U)
/*! dnnRam3 - DNN RAM 3 controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_DNNRAM3(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_DNNRAM3_SHIFT)) & NSS_CGU_RSTENSET_DNNRAM3_MASK)

#define NSS_CGU_RSTENSET_DNNRAM4_MASK            (0x10000U)
#define NSS_CGU_RSTENSET_DNNRAM4_SHIFT           (16U)
/*! dnnRam4 - DNN RAM 4 controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_DNNRAM4(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_DNNRAM4_SHIFT)) & NSS_CGU_RSTENSET_DNNRAM4_MASK)

#define NSS_CGU_RSTENSET_XSP_DBG_SO_MASK         (0x40000U)
#define NSS_CGU_RSTENSET_XSP_DBG_SO_SHIFT        (18U)
/*! xsp_dbg_so - XSP Debug Serial Out reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_XSP_DBG_SO(x)           (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_XSP_DBG_SO_SHIFT)) & NSS_CGU_RSTENSET_XSP_DBG_SO_MASK)

#define NSS_CGU_RSTENSET_CM55_DBG_SO_MASK        (0x80000U)
#define NSS_CGU_RSTENSET_CM55_DBG_SO_SHIFT       (19U)
/*! cm55_dbg_so - CM55 Debug Serial Out reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_CM55_DBG_SO(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_CM55_DBG_SO_SHIFT)) & NSS_CGU_RSTENSET_CM55_DBG_SO_MASK)

#define NSS_CGU_RSTENSET_DMA_MASK                (0x100000U)
#define NSS_CGU_RSTENSET_DMA_SHIFT               (20U)
/*! dma - Resets the DMA module.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_DMA(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_DMA_SHIFT)) & NSS_CGU_RSTENSET_DMA_MASK)

#define NSS_CGU_RSTENSET_APB_MASK                (0x200000U)
#define NSS_CGU_RSTENSET_APB_SHIFT               (21U)
/*! apb - Resets the AHBIO2APB module. The reset will be asserted after 7 CM55 cycles. After 2 CM55
 *    cycles, the reset will automatically be deasserted again.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_APB(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_APB_SHIFT)) & NSS_CGU_RSTENSET_APB_MASK)

#define NSS_CGU_RSTENSET_EDU_MASK                (0x800000U)
#define NSS_CGU_RSTENSET_EDU_SHIFT               (23U)
/*! edu - Resets the Error Detection Unit module. The previous error status can only be reset by writing to it or full POR reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_EDU(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_EDU_SHIFT)) & NSS_CGU_RSTENSET_EDU_MASK)

#define NSS_CGU_RSTENSET_EVENTGEN_MASK           (0x1000000U)
#define NSS_CGU_RSTENSET_EVENTGEN_SHIFT          (24U)
/*! eventGen - Resets the Event Generator/Mux module (aka NSS EvenBus).
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_EVENTGEN(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_EVENTGEN_SHIFT)) & NSS_CGU_RSTENSET_EVENTGEN_MASK)

#define NSS_CGU_RSTENSET_DSSEVENTGEN_MASK        (0x2000000U)
#define NSS_CGU_RSTENSET_DSSEVENTGEN_SHIFT       (25U)
/*! dssEventGen - Resets the DSS Event Generator. Deassert this reset for receiving events from/sending events to DSS.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_DSSEVENTGEN(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_DSSEVENTGEN_SHIFT)) & NSS_CGU_RSTENSET_DSSEVENTGEN_MASK)

#define NSS_CGU_RSTENSET_PMON_MASK               (0x4000000U)
#define NSS_CGU_RSTENSET_PMON_SHIFT              (26U)
/*! pmon - Resets the Performance Monitor module.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_PMON(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_PMON_SHIFT)) & NSS_CGU_RSTENSET_PMON_MASK)

#define NSS_CGU_RSTENSET_TIMER_MASK              (0x8000000U)
#define NSS_CGU_RSTENSET_TIMER_SHIFT             (27U)
/*! timer - Resets the Timer module.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_TIMER(x)                (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_TIMER_SHIFT)) & NSS_CGU_RSTENSET_TIMER_MASK)

#define NSS_CGU_RSTENSET_SYSCFG_MASK             (0x10000000U)
#define NSS_CGU_RSTENSET_SYSCFG_SHIFT            (28U)
/*! sysCfg - Resets the sysCfg module (only the APB registers).
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_SYSCFG(x)               (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_SYSCFG_SHIFT)) & NSS_CGU_RSTENSET_SYSCFG_MASK)

#define NSS_CGU_RSTENSET_CGU_MASK                (0x20000000U)
#define NSS_CGU_RSTENSET_CGU_SHIFT               (29U)
/*! cgu - Resets the CGU module.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENSET_CGU(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENSET_CGU_SHIFT)) & NSS_CGU_RSTENSET_CGU_MASK)
/*! @} */

/*! @name RSTENCLR - Write 1 to clear a bitfield (deassert reset). Write 0 is ignored. Read gives 0. */
/*! @{ */

#define NSS_CGU_RSTENCLR_NIC_MASK                (0x1U)
#define NSS_CGU_RSTENCLR_NIC_SHIFT               (0U)
/*! nic - NIC reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_NIC(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_NIC_SHIFT)) & NSS_CGU_RSTENCLR_NIC_MASK)

#define NSS_CGU_RSTENCLR_DBG_GPO_MASK            (0x2U)
#define NSS_CGU_RSTENCLR_DBG_GPO_SHIFT           (1U)
/*! dbg_gpo - Reset of debug GPO module.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_DBG_GPO(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_DBG_GPO_SHIFT)) & NSS_CGU_RSTENCLR_DBG_GPO_MASK)

#define NSS_CGU_RSTENCLR_CSSEVENTGEN_MASK        (0x4U)
#define NSS_CGU_RSTENCLR_CSSEVENTGEN_SHIFT       (2U)
/*! cssEventGen - Resets the CSS Event Generator. Deassert this reset for receiving events from/sending events to CSS.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_CSSEVENTGEN(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_CSSEVENTGEN_SHIFT)) & NSS_CGU_RSTENCLR_CSSEVENTGEN_MASK)

#define NSS_CGU_RSTENCLR_CM55POR_MASK            (0x10U)
#define NSS_CGU_RSTENCLR_CM55POR_SHIFT           (4U)
/*! cm55Por - CM55 Cold reset, must be asserted and released together with cm55DbgRst. Will also
 *    drive the nMBISTRESET signal of the CM55.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_CM55POR(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_CM55POR_SHIFT)) & NSS_CGU_RSTENCLR_CM55POR_MASK)

#define NSS_CGU_RSTENCLR_CM55SYS_MASK            (0x20U)
#define NSS_CGU_RSTENCLR_CM55SYS_SHIFT           (5U)
/*! cm55Sys - CM55 Warm reset, resets most of the core except the debug logic. Can be used to reset
 *    the cpu, but holding it to start executing code.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_CM55SYS(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_CM55SYS_SHIFT)) & NSS_CGU_RSTENCLR_CM55SYS_MASK)

#define NSS_CGU_RSTENCLR_CM55DBG_MASK            (0x40U)
#define NSS_CGU_RSTENCLR_CM55DBG_SHIFT           (6U)
/*! cm55Dbg - CM55 Debug reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_CM55DBG(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_CM55DBG_SHIFT)) & NSS_CGU_RSTENCLR_CM55DBG_MASK)

#define NSS_CGU_RSTENCLR_CM55IWIC_MASK           (0x80U)
#define NSS_CGU_RSTENCLR_CM55IWIC_SHIFT          (7U)
/*! cm55Iwic - CM55 Internal Wakeup Controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_CM55IWIC(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_CM55IWIC_SHIFT)) & NSS_CGU_RSTENCLR_CM55IWIC_MASK)

#define NSS_CGU_RSTENCLR_U85_MASK                (0x100U)
#define NSS_CGU_RSTENCLR_U85_SHIFT               (8U)
/*! u85 - Ethos U85 Reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_U85(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_U85_SHIFT)) & NSS_CGU_RSTENCLR_U85_MASK)

#define NSS_CGU_RSTENCLR_XSP_MASK                (0x200U)
#define NSS_CGU_RSTENCLR_XSP_SHIFT               (9U)
/*! xsp - XSP reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_XSP(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_XSP_SHIFT)) & NSS_CGU_RSTENCLR_XSP_MASK)

#define NSS_CGU_RSTENCLR_XSP_SYS_MASK            (0x400U)
#define NSS_CGU_RSTENCLR_XSP_SYS_SHIFT           (10U)
/*! xsp_sys - XSP system reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_XSP_SYS(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_XSP_SYS_SHIFT)) & NSS_CGU_RSTENCLR_XSP_SYS_MASK)

#define NSS_CGU_RSTENCLR_WDT_MASK                (0x800U)
#define NSS_CGU_RSTENCLR_WDT_SHIFT               (11U)
/*! wdt - NSS watchdog reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_WDT(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_WDT_SHIFT)) & NSS_CGU_RSTENCLR_WDT_MASK)

#define NSS_CGU_RSTENCLR_DNNRAM0_MASK            (0x1000U)
#define NSS_CGU_RSTENCLR_DNNRAM0_SHIFT           (12U)
/*! dnnRam0 - DNN RAM 0 controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_DNNRAM0(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_DNNRAM0_SHIFT)) & NSS_CGU_RSTENCLR_DNNRAM0_MASK)

#define NSS_CGU_RSTENCLR_DNNRAM1_MASK            (0x2000U)
#define NSS_CGU_RSTENCLR_DNNRAM1_SHIFT           (13U)
/*! dnnRam1 - DNN RAM 1 controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_DNNRAM1(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_DNNRAM1_SHIFT)) & NSS_CGU_RSTENCLR_DNNRAM1_MASK)

#define NSS_CGU_RSTENCLR_DNNRAM2_MASK            (0x4000U)
#define NSS_CGU_RSTENCLR_DNNRAM2_SHIFT           (14U)
/*! dnnRam2 - DNN RAM 2 controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_DNNRAM2(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_DNNRAM2_SHIFT)) & NSS_CGU_RSTENCLR_DNNRAM2_MASK)

#define NSS_CGU_RSTENCLR_DNNRAM3_MASK            (0x8000U)
#define NSS_CGU_RSTENCLR_DNNRAM3_SHIFT           (15U)
/*! dnnRam3 - DNN RAM 3 controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_DNNRAM3(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_DNNRAM3_SHIFT)) & NSS_CGU_RSTENCLR_DNNRAM3_MASK)

#define NSS_CGU_RSTENCLR_DNNRAM4_MASK            (0x10000U)
#define NSS_CGU_RSTENCLR_DNNRAM4_SHIFT           (16U)
/*! dnnRam4 - DNN RAM 4 controller reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_DNNRAM4(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_DNNRAM4_SHIFT)) & NSS_CGU_RSTENCLR_DNNRAM4_MASK)

#define NSS_CGU_RSTENCLR_XSP_DBG_SO_MASK         (0x40000U)
#define NSS_CGU_RSTENCLR_XSP_DBG_SO_SHIFT        (18U)
/*! xsp_dbg_so - XSP Debug Serial Out reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_XSP_DBG_SO(x)           (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_XSP_DBG_SO_SHIFT)) & NSS_CGU_RSTENCLR_XSP_DBG_SO_MASK)

#define NSS_CGU_RSTENCLR_CM55_DBG_SO_MASK        (0x80000U)
#define NSS_CGU_RSTENCLR_CM55_DBG_SO_SHIFT       (19U)
/*! cm55_dbg_so - CM55 Debug Serial Out reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_CM55_DBG_SO(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_CM55_DBG_SO_SHIFT)) & NSS_CGU_RSTENCLR_CM55_DBG_SO_MASK)

#define NSS_CGU_RSTENCLR_DMA_MASK                (0x100000U)
#define NSS_CGU_RSTENCLR_DMA_SHIFT               (20U)
/*! dma - Resets the DMA module.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_DMA(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_DMA_SHIFT)) & NSS_CGU_RSTENCLR_DMA_MASK)

#define NSS_CGU_RSTENCLR_APB_MASK                (0x200000U)
#define NSS_CGU_RSTENCLR_APB_SHIFT               (21U)
/*! apb - Resets the AHBIO2APB module. The reset will be asserted after 7 CM55 cycles. After 2 CM55
 *    cycles, the reset will automatically be deasserted again.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_APB(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_APB_SHIFT)) & NSS_CGU_RSTENCLR_APB_MASK)

#define NSS_CGU_RSTENCLR_EDU_MASK                (0x800000U)
#define NSS_CGU_RSTENCLR_EDU_SHIFT               (23U)
/*! edu - Resets the Error Detection Unit module. The previous error status can only be reset by writing to it or full POR reset.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_EDU(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_EDU_SHIFT)) & NSS_CGU_RSTENCLR_EDU_MASK)

#define NSS_CGU_RSTENCLR_EVENTGEN_MASK           (0x1000000U)
#define NSS_CGU_RSTENCLR_EVENTGEN_SHIFT          (24U)
/*! eventGen - Resets the Event Generator/Mux module (aka NSS EvenBus).
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_EVENTGEN(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_EVENTGEN_SHIFT)) & NSS_CGU_RSTENCLR_EVENTGEN_MASK)

#define NSS_CGU_RSTENCLR_DSSEVENTGEN_MASK        (0x2000000U)
#define NSS_CGU_RSTENCLR_DSSEVENTGEN_SHIFT       (25U)
/*! dssEventGen - Resets the DSS Event Generator. Deassert this reset for receiving events from/sending events to DSS.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_DSSEVENTGEN(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_DSSEVENTGEN_SHIFT)) & NSS_CGU_RSTENCLR_DSSEVENTGEN_MASK)

#define NSS_CGU_RSTENCLR_PMON_MASK               (0x4000000U)
#define NSS_CGU_RSTENCLR_PMON_SHIFT              (26U)
/*! pmon - Resets the Performance Monitor module.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_PMON(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_PMON_SHIFT)) & NSS_CGU_RSTENCLR_PMON_MASK)

#define NSS_CGU_RSTENCLR_TIMER_MASK              (0x8000000U)
#define NSS_CGU_RSTENCLR_TIMER_SHIFT             (27U)
/*! timer - Resets the Timer module.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_TIMER(x)                (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_TIMER_SHIFT)) & NSS_CGU_RSTENCLR_TIMER_MASK)

#define NSS_CGU_RSTENCLR_SYSCFG_MASK             (0x10000000U)
#define NSS_CGU_RSTENCLR_SYSCFG_SHIFT            (28U)
/*! sysCfg - Resets the sysCfg module (only the APB registers).
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_SYSCFG(x)               (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_SYSCFG_SHIFT)) & NSS_CGU_RSTENCLR_SYSCFG_MASK)

#define NSS_CGU_RSTENCLR_CGU_MASK                (0x20000000U)
#define NSS_CGU_RSTENCLR_CGU_SHIFT               (29U)
/*! cgu - Resets the CGU module.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_RSTENCLR_CGU(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_RSTENCLR_CGU_SHIFT)) & NSS_CGU_RSTENCLR_CGU_MASK)
/*! @} */

/*! @name CLKEN - Indicates if the clock is enabled or disabled. */
/*! @{ */

#define NSS_CGU_CLKEN_NIC_MASK                   (0x1U)
#define NSS_CGU_CLKEN_NIC_SHIFT                  (0U)
/*! nic - NIC clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_NIC(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_NIC_SHIFT)) & NSS_CGU_CLKEN_NIC_MASK)

#define NSS_CGU_CLKEN_CSSEVENTGEN_MASK           (0x4U)
#define NSS_CGU_CLKEN_CSSEVENTGEN_SHIFT          (2U)
/*! cssEventGen - CSS Event Generator clock. Enable this clock for receiving events from/sending events to CSS.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_CSSEVENTGEN(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_CSSEVENTGEN_SHIFT)) & NSS_CGU_CLKEN_CSSEVENTGEN_MASK)

#define NSS_CGU_CLKEN_CM55CLKIN_MASK             (0x10U)
#define NSS_CGU_CLKEN_CM55CLKIN_SHIFT            (4U)
/*! cm55ClkIn - CM55 Core clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_CM55CLKIN(x)               (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_CM55CLKIN_SHIFT)) & NSS_CGU_CLKEN_CM55CLKIN_MASK)

#define NSS_CGU_CLKEN_CM55DBG_MASK               (0x20U)
#define NSS_CGU_CLKEN_CM55DBG_SHIFT              (5U)
/*! cm55Dbg - CM55 debug clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_CM55DBG(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_CM55DBG_SHIFT)) & NSS_CGU_CLKEN_CM55DBG_MASK)

#define NSS_CGU_CLKEN_CM55IWIC_MASK              (0x40U)
#define NSS_CGU_CLKEN_CM55IWIC_SHIFT             (6U)
/*! cm55Iwic - CM55 IWIC clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_CM55IWIC(x)                (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_CM55IWIC_SHIFT)) & NSS_CGU_CLKEN_CM55IWIC_MASK)

#define NSS_CGU_CLKEN_U85_MASK                   (0x100U)
#define NSS_CGU_CLKEN_U85_SHIFT                  (8U)
/*! u85 - Ethos U85 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_U85(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_U85_SHIFT)) & NSS_CGU_CLKEN_U85_MASK)

#define NSS_CGU_CLKEN_XSP_MASK                   (0x200U)
#define NSS_CGU_CLKEN_XSP_SHIFT                  (9U)
/*! xsp - XSP core clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_XSP(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_XSP_SHIFT)) & NSS_CGU_CLKEN_XSP_MASK)

#define NSS_CGU_CLKEN_XSP_SYS_MASK               (0x400U)
#define NSS_CGU_CLKEN_XSP_SYS_SHIFT              (10U)
/*! xsp_sys - XSP system clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_XSP_SYS(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_XSP_SYS_SHIFT)) & NSS_CGU_CLKEN_XSP_SYS_MASK)

#define NSS_CGU_CLKEN_WDT_MASK                   (0x800U)
#define NSS_CGU_CLKEN_WDT_SHIFT                  (11U)
/*! wdt - NSS watchdog clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_WDT(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_WDT_SHIFT)) & NSS_CGU_CLKEN_WDT_MASK)

#define NSS_CGU_CLKEN_DNNRAM0_MASK               (0x1000U)
#define NSS_CGU_CLKEN_DNNRAM0_SHIFT              (12U)
/*! dnnRam0 - DNN RAM 0 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_DNNRAM0(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_DNNRAM0_SHIFT)) & NSS_CGU_CLKEN_DNNRAM0_MASK)

#define NSS_CGU_CLKEN_DNNRAM1_MASK               (0x2000U)
#define NSS_CGU_CLKEN_DNNRAM1_SHIFT              (13U)
/*! dnnRam1 - DNN RAM 1 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_DNNRAM1(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_DNNRAM1_SHIFT)) & NSS_CGU_CLKEN_DNNRAM1_MASK)

#define NSS_CGU_CLKEN_DNNRAM2_MASK               (0x4000U)
#define NSS_CGU_CLKEN_DNNRAM2_SHIFT              (14U)
/*! dnnRam2 - DNN RAM 2 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_DNNRAM2(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_DNNRAM2_SHIFT)) & NSS_CGU_CLKEN_DNNRAM2_MASK)

#define NSS_CGU_CLKEN_DNNRAM3_MASK               (0x8000U)
#define NSS_CGU_CLKEN_DNNRAM3_SHIFT              (15U)
/*! dnnRam3 - DNN RAM 3 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_DNNRAM3(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_DNNRAM3_SHIFT)) & NSS_CGU_CLKEN_DNNRAM3_MASK)

#define NSS_CGU_CLKEN_DNNRAM4_MASK               (0x10000U)
#define NSS_CGU_CLKEN_DNNRAM4_SHIFT              (16U)
/*! dnnRam4 - DNN RAM 4 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_DNNRAM4(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_DNNRAM4_SHIFT)) & NSS_CGU_CLKEN_DNNRAM4_MASK)

#define NSS_CGU_CLKEN_XSP_DBG_SO_MASK            (0x40000U)
#define NSS_CGU_CLKEN_XSP_DBG_SO_SHIFT           (18U)
/*! xsp_dbg_so - XSP Debug Serial Out clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_XSP_DBG_SO(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_XSP_DBG_SO_SHIFT)) & NSS_CGU_CLKEN_XSP_DBG_SO_MASK)

#define NSS_CGU_CLKEN_CM55_DBG_SO_MASK           (0x80000U)
#define NSS_CGU_CLKEN_CM55_DBG_SO_SHIFT          (19U)
/*! cm55_dbg_so - CM55 Debug Serial Out clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_CM55_DBG_SO(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_CM55_DBG_SO_SHIFT)) & NSS_CGU_CLKEN_CM55_DBG_SO_MASK)

#define NSS_CGU_CLKEN_DMA_MASK                   (0x100000U)
#define NSS_CGU_CLKEN_DMA_SHIFT                  (20U)
/*! dma - DMA clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_DMA(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_DMA_SHIFT)) & NSS_CGU_CLKEN_DMA_MASK)

#define NSS_CGU_CLKEN_EDU_MASK                   (0x400000U)
#define NSS_CGU_CLKEN_EDU_SHIFT                  (22U)
/*! edu - Error Detection Unit clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_EDU(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_EDU_SHIFT)) & NSS_CGU_CLKEN_EDU_MASK)

#define NSS_CGU_CLKEN_EVENTGEN_MASK              (0x800000U)
#define NSS_CGU_CLKEN_EVENTGEN_SHIFT             (23U)
/*! eventGen - Event Generator/Mux clock (aka NSS Event Bus).
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_EVENTGEN(x)                (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_EVENTGEN_SHIFT)) & NSS_CGU_CLKEN_EVENTGEN_MASK)

#define NSS_CGU_CLKEN_DSSEVENTGEN_MASK           (0x1000000U)
#define NSS_CGU_CLKEN_DSSEVENTGEN_SHIFT          (24U)
/*! dssEventGen - DSS Event Generator clock. Enable this clock for receiving events from/sending events to DSS.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_DSSEVENTGEN(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_DSSEVENTGEN_SHIFT)) & NSS_CGU_CLKEN_DSSEVENTGEN_MASK)

#define NSS_CGU_CLKEN_PMON_MASK                  (0x2000000U)
#define NSS_CGU_CLKEN_PMON_SHIFT                 (25U)
/*! pmon - Performance Monitor clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_PMON(x)                    (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_PMON_SHIFT)) & NSS_CGU_CLKEN_PMON_MASK)

#define NSS_CGU_CLKEN_TIMER_MASK                 (0x4000000U)
#define NSS_CGU_CLKEN_TIMER_SHIFT                (26U)
/*! timer - Timer clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_TIMER(x)                   (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_TIMER_SHIFT)) & NSS_CGU_CLKEN_TIMER_MASK)

#define NSS_CGU_CLKEN_CTRLSS_MASK                (0x10000000U)
#define NSS_CGU_CLKEN_CTRLSS_SHIFT               (28U)
/*! CtrlSS - CtrlSS clock - (APB, AXI CSS_in, AXI CSS_out). The NIC LPC controller can still
 *    dynamically gate the clock for AXI CSS_in and AXI CSS_out.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_CTRLSS(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_CTRLSS_SHIFT)) & NSS_CGU_CLKEN_CTRLSS_MASK)

#define NSS_CGU_CLKEN_DSS_MASK                   (0x20000000U)
#define NSS_CGU_CLKEN_DSS_SHIFT                  (29U)
/*! DSS - DSS clock - (AXI DSS_in0, AXI DSS_in1, AXI DSS_in2, AXI DSS_in3). The NIC LPC controller
 *    can still dynamically gate the clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_DSS(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_DSS_SHIFT)) & NSS_CGU_CLKEN_DSS_MASK)

#define NSS_CGU_CLKEN_XSPI_MASK                  (0x40000000U)
#define NSS_CGU_CLKEN_XSPI_SHIFT                 (30U)
/*! xSPI - xSPI clocks - NIC Ext Mem, xSPI IPG, AHB clocks.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_XSPI(x)                    (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_XSPI_SHIFT)) & NSS_CGU_CLKEN_XSPI_MASK)

#define NSS_CGU_CLKEN_PRINCE3M_MASK              (0x80000000U)
#define NSS_CGU_CLKEN_PRINCE3M_SHIFT             (31U)
/*! Prince3M - Prince_3M clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKEN_PRINCE3M(x)                (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKEN_PRINCE3M_SHIFT)) & NSS_CGU_CLKEN_PRINCE3M_MASK)
/*! @} */

/*! @name CLKENSET - Write 1 to set a bitfield (enable the clock). Write 0 is ignored. Read gives 0. */
/*! @{ */

#define NSS_CGU_CLKENSET_NIC_MASK                (0x1U)
#define NSS_CGU_CLKENSET_NIC_SHIFT               (0U)
/*! nic - NIC clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_NIC(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_NIC_SHIFT)) & NSS_CGU_CLKENSET_NIC_MASK)

#define NSS_CGU_CLKENSET_CSSEVENTGEN_MASK        (0x4U)
#define NSS_CGU_CLKENSET_CSSEVENTGEN_SHIFT       (2U)
/*! cssEventGen - CSS Event Generator clock. Enable this clock for receiving events from/sending events to CSS.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_CSSEVENTGEN(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_CSSEVENTGEN_SHIFT)) & NSS_CGU_CLKENSET_CSSEVENTGEN_MASK)

#define NSS_CGU_CLKENSET_CM55CLKIN_MASK          (0x10U)
#define NSS_CGU_CLKENSET_CM55CLKIN_SHIFT         (4U)
/*! cm55ClkIn - CM55 Core clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_CM55CLKIN(x)            (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_CM55CLKIN_SHIFT)) & NSS_CGU_CLKENSET_CM55CLKIN_MASK)

#define NSS_CGU_CLKENSET_CM55DBG_MASK            (0x20U)
#define NSS_CGU_CLKENSET_CM55DBG_SHIFT           (5U)
/*! cm55Dbg - CM55 debug clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_CM55DBG(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_CM55DBG_SHIFT)) & NSS_CGU_CLKENSET_CM55DBG_MASK)

#define NSS_CGU_CLKENSET_CM55IWIC_MASK           (0x40U)
#define NSS_CGU_CLKENSET_CM55IWIC_SHIFT          (6U)
/*! cm55Iwic - CM55 IWIC clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_CM55IWIC(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_CM55IWIC_SHIFT)) & NSS_CGU_CLKENSET_CM55IWIC_MASK)

#define NSS_CGU_CLKENSET_U85_MASK                (0x100U)
#define NSS_CGU_CLKENSET_U85_SHIFT               (8U)
/*! u85 - Ethos U85 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_U85(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_U85_SHIFT)) & NSS_CGU_CLKENSET_U85_MASK)

#define NSS_CGU_CLKENSET_XSP_MASK                (0x200U)
#define NSS_CGU_CLKENSET_XSP_SHIFT               (9U)
/*! xsp - XSP core clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_XSP(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_XSP_SHIFT)) & NSS_CGU_CLKENSET_XSP_MASK)

#define NSS_CGU_CLKENSET_XSP_SYS_MASK            (0x400U)
#define NSS_CGU_CLKENSET_XSP_SYS_SHIFT           (10U)
/*! xsp_sys - XSP system clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_XSP_SYS(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_XSP_SYS_SHIFT)) & NSS_CGU_CLKENSET_XSP_SYS_MASK)

#define NSS_CGU_CLKENSET_WDT_MASK                (0x800U)
#define NSS_CGU_CLKENSET_WDT_SHIFT               (11U)
/*! wdt - NSS watchdog clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_WDT(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_WDT_SHIFT)) & NSS_CGU_CLKENSET_WDT_MASK)

#define NSS_CGU_CLKENSET_DNNRAM0_MASK            (0x1000U)
#define NSS_CGU_CLKENSET_DNNRAM0_SHIFT           (12U)
/*! dnnRam0 - DNN RAM 0 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_DNNRAM0(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_DNNRAM0_SHIFT)) & NSS_CGU_CLKENSET_DNNRAM0_MASK)

#define NSS_CGU_CLKENSET_DNNRAM1_MASK            (0x2000U)
#define NSS_CGU_CLKENSET_DNNRAM1_SHIFT           (13U)
/*! dnnRam1 - DNN RAM 1 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_DNNRAM1(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_DNNRAM1_SHIFT)) & NSS_CGU_CLKENSET_DNNRAM1_MASK)

#define NSS_CGU_CLKENSET_DNNRAM2_MASK            (0x4000U)
#define NSS_CGU_CLKENSET_DNNRAM2_SHIFT           (14U)
/*! dnnRam2 - DNN RAM 2 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_DNNRAM2(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_DNNRAM2_SHIFT)) & NSS_CGU_CLKENSET_DNNRAM2_MASK)

#define NSS_CGU_CLKENSET_DNNRAM3_MASK            (0x8000U)
#define NSS_CGU_CLKENSET_DNNRAM3_SHIFT           (15U)
/*! dnnRam3 - DNN RAM 3 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_DNNRAM3(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_DNNRAM3_SHIFT)) & NSS_CGU_CLKENSET_DNNRAM3_MASK)

#define NSS_CGU_CLKENSET_DNNRAM4_MASK            (0x10000U)
#define NSS_CGU_CLKENSET_DNNRAM4_SHIFT           (16U)
/*! dnnRam4 - DNN RAM 4 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_DNNRAM4(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_DNNRAM4_SHIFT)) & NSS_CGU_CLKENSET_DNNRAM4_MASK)

#define NSS_CGU_CLKENSET_XSP_DBG_SO_MASK         (0x40000U)
#define NSS_CGU_CLKENSET_XSP_DBG_SO_SHIFT        (18U)
/*! xsp_dbg_so - XSP Debug Serial Out clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_XSP_DBG_SO(x)           (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_XSP_DBG_SO_SHIFT)) & NSS_CGU_CLKENSET_XSP_DBG_SO_MASK)

#define NSS_CGU_CLKENSET_CM55_DBG_SO_MASK        (0x80000U)
#define NSS_CGU_CLKENSET_CM55_DBG_SO_SHIFT       (19U)
/*! cm55_dbg_so - CM55 Debug Serial Out clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_CM55_DBG_SO(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_CM55_DBG_SO_SHIFT)) & NSS_CGU_CLKENSET_CM55_DBG_SO_MASK)

#define NSS_CGU_CLKENSET_DMA_MASK                (0x100000U)
#define NSS_CGU_CLKENSET_DMA_SHIFT               (20U)
/*! dma - DMA clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_DMA(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_DMA_SHIFT)) & NSS_CGU_CLKENSET_DMA_MASK)

#define NSS_CGU_CLKENSET_EDU_MASK                (0x400000U)
#define NSS_CGU_CLKENSET_EDU_SHIFT               (22U)
/*! edu - Error Detection Unit clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_EDU(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_EDU_SHIFT)) & NSS_CGU_CLKENSET_EDU_MASK)

#define NSS_CGU_CLKENSET_EVENTGEN_MASK           (0x800000U)
#define NSS_CGU_CLKENSET_EVENTGEN_SHIFT          (23U)
/*! eventGen - Event Generator/Mux clock (aka NSS Event Bus).
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_EVENTGEN(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_EVENTGEN_SHIFT)) & NSS_CGU_CLKENSET_EVENTGEN_MASK)

#define NSS_CGU_CLKENSET_DSSEVENTGEN_MASK        (0x1000000U)
#define NSS_CGU_CLKENSET_DSSEVENTGEN_SHIFT       (24U)
/*! dssEventGen - DSS Event Generator clock. Enable this clock for receiving events from/sending events to DSS.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_DSSEVENTGEN(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_DSSEVENTGEN_SHIFT)) & NSS_CGU_CLKENSET_DSSEVENTGEN_MASK)

#define NSS_CGU_CLKENSET_PMON_MASK               (0x2000000U)
#define NSS_CGU_CLKENSET_PMON_SHIFT              (25U)
/*! pmon - Performance Monitor clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_PMON(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_PMON_SHIFT)) & NSS_CGU_CLKENSET_PMON_MASK)

#define NSS_CGU_CLKENSET_TIMER_MASK              (0x4000000U)
#define NSS_CGU_CLKENSET_TIMER_SHIFT             (26U)
/*! timer - Timer clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_TIMER(x)                (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_TIMER_SHIFT)) & NSS_CGU_CLKENSET_TIMER_MASK)

#define NSS_CGU_CLKENSET_CTRLSS_MASK             (0x10000000U)
#define NSS_CGU_CLKENSET_CTRLSS_SHIFT            (28U)
/*! CtrlSS - CtrlSS clock - (APB, AXI CSS_in, AXI CSS_out). The NIC LPC controller can still
 *    dynamically gate the clock for AXI CSS_in and AXI CSS_out.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_CTRLSS(x)               (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_CTRLSS_SHIFT)) & NSS_CGU_CLKENSET_CTRLSS_MASK)

#define NSS_CGU_CLKENSET_DSS_MASK                (0x20000000U)
#define NSS_CGU_CLKENSET_DSS_SHIFT               (29U)
/*! DSS - DSS clock - (AXI DSS_in0, AXI DSS_in1, AXI DSS_in2, AXI DSS_in3). The NIC LPC controller
 *    can still dynamically gate the clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_DSS(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_DSS_SHIFT)) & NSS_CGU_CLKENSET_DSS_MASK)

#define NSS_CGU_CLKENSET_XSPI_MASK               (0x40000000U)
#define NSS_CGU_CLKENSET_XSPI_SHIFT              (30U)
/*! xSPI - xSPI clocks - NIC Ext Mem, xSPI IPG, AHB clocks.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_XSPI(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_XSPI_SHIFT)) & NSS_CGU_CLKENSET_XSPI_MASK)

#define NSS_CGU_CLKENSET_PRINCE3M_MASK           (0x80000000U)
#define NSS_CGU_CLKENSET_PRINCE3M_SHIFT          (31U)
/*! Prince3M - Prince_3M clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENSET_PRINCE3M(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENSET_PRINCE3M_SHIFT)) & NSS_CGU_CLKENSET_PRINCE3M_MASK)
/*! @} */

/*! @name CLKENCLR - Write 1 to clear a bitfield (disable the clock). Write 0 is ignored. Read gives 0. */
/*! @{ */

#define NSS_CGU_CLKENCLR_NIC_MASK                (0x1U)
#define NSS_CGU_CLKENCLR_NIC_SHIFT               (0U)
/*! nic - NIC clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_NIC(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_NIC_SHIFT)) & NSS_CGU_CLKENCLR_NIC_MASK)

#define NSS_CGU_CLKENCLR_CSSEVENTGEN_MASK        (0x4U)
#define NSS_CGU_CLKENCLR_CSSEVENTGEN_SHIFT       (2U)
/*! cssEventGen - CSS Event Generator clock. Enable this clock for receiving events from/sending events to CSS.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_CSSEVENTGEN(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_CSSEVENTGEN_SHIFT)) & NSS_CGU_CLKENCLR_CSSEVENTGEN_MASK)

#define NSS_CGU_CLKENCLR_CM55CLKIN_MASK          (0x10U)
#define NSS_CGU_CLKENCLR_CM55CLKIN_SHIFT         (4U)
/*! cm55ClkIn - CM55 Core clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_CM55CLKIN(x)            (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_CM55CLKIN_SHIFT)) & NSS_CGU_CLKENCLR_CM55CLKIN_MASK)

#define NSS_CGU_CLKENCLR_CM55DBG_MASK            (0x20U)
#define NSS_CGU_CLKENCLR_CM55DBG_SHIFT           (5U)
/*! cm55Dbg - CM55 debug clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_CM55DBG(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_CM55DBG_SHIFT)) & NSS_CGU_CLKENCLR_CM55DBG_MASK)

#define NSS_CGU_CLKENCLR_CM55IWIC_MASK           (0x40U)
#define NSS_CGU_CLKENCLR_CM55IWIC_SHIFT          (6U)
/*! cm55Iwic - CM55 IWIC clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_CM55IWIC(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_CM55IWIC_SHIFT)) & NSS_CGU_CLKENCLR_CM55IWIC_MASK)

#define NSS_CGU_CLKENCLR_U85_MASK                (0x100U)
#define NSS_CGU_CLKENCLR_U85_SHIFT               (8U)
/*! u85 - Ethos U85 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_U85(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_U85_SHIFT)) & NSS_CGU_CLKENCLR_U85_MASK)

#define NSS_CGU_CLKENCLR_XSP_MASK                (0x200U)
#define NSS_CGU_CLKENCLR_XSP_SHIFT               (9U)
/*! xsp - XSP core clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_XSP(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_XSP_SHIFT)) & NSS_CGU_CLKENCLR_XSP_MASK)

#define NSS_CGU_CLKENCLR_XSP_SYS_MASK            (0x400U)
#define NSS_CGU_CLKENCLR_XSP_SYS_SHIFT           (10U)
/*! xsp_sys - XSP system clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_XSP_SYS(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_XSP_SYS_SHIFT)) & NSS_CGU_CLKENCLR_XSP_SYS_MASK)

#define NSS_CGU_CLKENCLR_WDT_MASK                (0x800U)
#define NSS_CGU_CLKENCLR_WDT_SHIFT               (11U)
/*! wdt - NSS watchdog clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_WDT(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_WDT_SHIFT)) & NSS_CGU_CLKENCLR_WDT_MASK)

#define NSS_CGU_CLKENCLR_DNNRAM0_MASK            (0x1000U)
#define NSS_CGU_CLKENCLR_DNNRAM0_SHIFT           (12U)
/*! dnnRam0 - DNN RAM 0 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_DNNRAM0(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_DNNRAM0_SHIFT)) & NSS_CGU_CLKENCLR_DNNRAM0_MASK)

#define NSS_CGU_CLKENCLR_DNNRAM1_MASK            (0x2000U)
#define NSS_CGU_CLKENCLR_DNNRAM1_SHIFT           (13U)
/*! dnnRam1 - DNN RAM 1 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_DNNRAM1(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_DNNRAM1_SHIFT)) & NSS_CGU_CLKENCLR_DNNRAM1_MASK)

#define NSS_CGU_CLKENCLR_DNNRAM2_MASK            (0x4000U)
#define NSS_CGU_CLKENCLR_DNNRAM2_SHIFT           (14U)
/*! dnnRam2 - DNN RAM 2 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_DNNRAM2(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_DNNRAM2_SHIFT)) & NSS_CGU_CLKENCLR_DNNRAM2_MASK)

#define NSS_CGU_CLKENCLR_DNNRAM3_MASK            (0x8000U)
#define NSS_CGU_CLKENCLR_DNNRAM3_SHIFT           (15U)
/*! dnnRam3 - DNN RAM 3 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_DNNRAM3(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_DNNRAM3_SHIFT)) & NSS_CGU_CLKENCLR_DNNRAM3_MASK)

#define NSS_CGU_CLKENCLR_DNNRAM4_MASK            (0x10000U)
#define NSS_CGU_CLKENCLR_DNNRAM4_SHIFT           (16U)
/*! dnnRam4 - DNN RAM 4 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_DNNRAM4(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_DNNRAM4_SHIFT)) & NSS_CGU_CLKENCLR_DNNRAM4_MASK)

#define NSS_CGU_CLKENCLR_XSP_DBG_SO_MASK         (0x40000U)
#define NSS_CGU_CLKENCLR_XSP_DBG_SO_SHIFT        (18U)
/*! xsp_dbg_so - XSP Debug Serial Out clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_XSP_DBG_SO(x)           (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_XSP_DBG_SO_SHIFT)) & NSS_CGU_CLKENCLR_XSP_DBG_SO_MASK)

#define NSS_CGU_CLKENCLR_CM55_DBG_SO_MASK        (0x80000U)
#define NSS_CGU_CLKENCLR_CM55_DBG_SO_SHIFT       (19U)
/*! cm55_dbg_so - CM55 Debug Serial Out clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_CM55_DBG_SO(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_CM55_DBG_SO_SHIFT)) & NSS_CGU_CLKENCLR_CM55_DBG_SO_MASK)

#define NSS_CGU_CLKENCLR_DMA_MASK                (0x100000U)
#define NSS_CGU_CLKENCLR_DMA_SHIFT               (20U)
/*! dma - DMA clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_DMA(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_DMA_SHIFT)) & NSS_CGU_CLKENCLR_DMA_MASK)

#define NSS_CGU_CLKENCLR_EDU_MASK                (0x400000U)
#define NSS_CGU_CLKENCLR_EDU_SHIFT               (22U)
/*! edu - Error Detection Unit clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_EDU(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_EDU_SHIFT)) & NSS_CGU_CLKENCLR_EDU_MASK)

#define NSS_CGU_CLKENCLR_EVENTGEN_MASK           (0x800000U)
#define NSS_CGU_CLKENCLR_EVENTGEN_SHIFT          (23U)
/*! eventGen - Event Generator/Mux clock (aka NSS Event Bus).
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_EVENTGEN(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_EVENTGEN_SHIFT)) & NSS_CGU_CLKENCLR_EVENTGEN_MASK)

#define NSS_CGU_CLKENCLR_DSSEVENTGEN_MASK        (0x1000000U)
#define NSS_CGU_CLKENCLR_DSSEVENTGEN_SHIFT       (24U)
/*! dssEventGen - DSS Event Generator clock. Enable this clock for receiving events from/sending events to DSS.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_DSSEVENTGEN(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_DSSEVENTGEN_SHIFT)) & NSS_CGU_CLKENCLR_DSSEVENTGEN_MASK)

#define NSS_CGU_CLKENCLR_PMON_MASK               (0x2000000U)
#define NSS_CGU_CLKENCLR_PMON_SHIFT              (25U)
/*! pmon - Performance Monitor clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_PMON(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_PMON_SHIFT)) & NSS_CGU_CLKENCLR_PMON_MASK)

#define NSS_CGU_CLKENCLR_TIMER_MASK              (0x4000000U)
#define NSS_CGU_CLKENCLR_TIMER_SHIFT             (26U)
/*! timer - Timer clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_TIMER(x)                (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_TIMER_SHIFT)) & NSS_CGU_CLKENCLR_TIMER_MASK)

#define NSS_CGU_CLKENCLR_CTRLSS_MASK             (0x10000000U)
#define NSS_CGU_CLKENCLR_CTRLSS_SHIFT            (28U)
/*! CtrlSS - CtrlSS clock - (APB, AXI CSS_in, AXI CSS_out). The NIC LPC controller can still
 *    dynamically gate the clock for AXI CSS_in and AXI CSS_out.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_CTRLSS(x)               (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_CTRLSS_SHIFT)) & NSS_CGU_CLKENCLR_CTRLSS_MASK)

#define NSS_CGU_CLKENCLR_DSS_MASK                (0x20000000U)
#define NSS_CGU_CLKENCLR_DSS_SHIFT               (29U)
/*! DSS - DSS clock - (AXI DSS_in0, AXI DSS_in1, AXI DSS_in2, AXI DSS_in3). The NIC LPC controller
 *    can still dynamically gate the clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_DSS(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_DSS_SHIFT)) & NSS_CGU_CLKENCLR_DSS_MASK)

#define NSS_CGU_CLKENCLR_XSPI_MASK               (0x40000000U)
#define NSS_CGU_CLKENCLR_XSPI_SHIFT              (30U)
/*! xSPI - xSPI clocks - NIC Ext Mem, xSPI IPG, AHB clocks.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_XSPI(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_XSPI_SHIFT)) & NSS_CGU_CLKENCLR_XSPI_MASK)

#define NSS_CGU_CLKENCLR_PRINCE3M_MASK           (0x80000000U)
#define NSS_CGU_CLKENCLR_PRINCE3M_SHIFT          (31U)
/*! Prince3M - Prince_3M clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKENCLR_PRINCE3M(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKENCLR_PRINCE3M_SHIFT)) & NSS_CGU_CLKENCLR_PRINCE3M_MASK)
/*! @} */

/*! @name CLKOVERRIDEEN - This is the list of clocks that are automatically clock gated by HW when enabled and there is no activity. When a clock is enabled, the HW will dynamically gate/ungate the clock (automatic clock gating). When the override switch is on, the automatic clock gating is disabled and the clock is al the time running when the clock is enabled. */
/*! @{ */

#define NSS_CGU_CLKOVERRIDEEN_CM55CLKIN_MASK     (0x1U)
#define NSS_CGU_CLKOVERRIDEEN_CM55CLKIN_SHIFT    (0U)
/*! cm55ClkIn - Override switch for automatic gating of the CM55 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_CM55CLKIN(x)       (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_CM55CLKIN_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_CM55CLKIN_MASK)

#define NSS_CGU_CLKOVERRIDEEN_CM55CLKINDBGWAKE_MASK (0x2U)
#define NSS_CGU_CLKOVERRIDEEN_CM55CLKINDBGWAKE_SHIFT (1U)
/*! cm55ClkInDbgWake - Override switch for CM55 CLKIN wake-up on debug power-up.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_CM55CLKINDBGWAKE(x) (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_CM55CLKINDBGWAKE_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_CM55CLKINDBGWAKE_MASK)

#define NSS_CGU_CLKOVERRIDEEN_CM55IWIC_MASK      (0x4U)
#define NSS_CGU_CLKOVERRIDEEN_CM55IWIC_SHIFT     (2U)
/*! cm55Iwic - Override switch for automatic gating of the CM55 IWIC clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_CM55IWIC(x)        (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_CM55IWIC_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_CM55IWIC_MASK)

#define NSS_CGU_CLKOVERRIDEEN_CM55DBG_MASK       (0x8U)
#define NSS_CGU_CLKOVERRIDEEN_CM55DBG_SHIFT      (3U)
/*! cm55Dbg - Override switch for automatic gating of the CM55 Debug clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_CM55DBG(x)         (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_CM55DBG_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_CM55DBG_MASK)

#define NSS_CGU_CLKOVERRIDEEN_U85_MASK           (0x10U)
#define NSS_CGU_CLKOVERRIDEEN_U85_SHIFT          (4U)
/*! u85 - Override switch for automatic gating of the Ethos U85 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_U85(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_U85_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_U85_MASK)

#define NSS_CGU_CLKOVERRIDEEN_DMA_MASK           (0x20U)
#define NSS_CGU_CLKOVERRIDEEN_DMA_SHIFT          (5U)
/*! dma - Override switch for automatic gating of the DMA clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_DMA(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_DMA_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_DMA_MASK)

#define NSS_CGU_CLKOVERRIDEEN_APB_MASK           (0x40U)
#define NSS_CGU_CLKOVERRIDEEN_APB_SHIFT          (6U)
/*! apb - Override switch for automatic gating of the APB clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_APB(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_APB_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_APB_MASK)

#define NSS_CGU_CLKOVERRIDEEN_NIC_MASK           (0x80U)
#define NSS_CGU_CLKOVERRIDEEN_NIC_SHIFT          (7U)
/*! nic - Override switch for automatic gating of the NIC clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_NIC(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_NIC_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_NIC_MASK)

#define NSS_CGU_CLKOVERRIDEEN_NICGPV_MASK        (0x100U)
#define NSS_CGU_CLKOVERRIDEEN_NICGPV_SHIFT       (8U)
/*! nicGpv - Override switch for automatic gating of the NIC GPV clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_NICGPV(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_NICGPV_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_NICGPV_MASK)

#define NSS_CGU_CLKOVERRIDEEN_NICDSSIN_MASK      (0x200U)
#define NSS_CGU_CLKOVERRIDEEN_NICDSSIN_SHIFT     (9U)
/*! nicDssIn - Override switch for automatic gating of the NIC Dss clock for the DSS In0 and In1 interface.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_NICDSSIN(x)        (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_NICDSSIN_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_NICDSSIN_MASK)

#define NSS_CGU_CLKOVERRIDEEN_NICXSPHCLK_MASK    (0x400U)
#define NSS_CGU_CLKOVERRIDEEN_NICXSPHCLK_SHIFT   (10U)
/*! nicXspHclk - Override switch for automatic gating of the NIC XSP AHB clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_NICXSPHCLK(x)      (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_NICXSPHCLK_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_NICXSPHCLK_MASK)

#define NSS_CGU_CLKOVERRIDEEN_NICCSSIN_MASK      (0x800U)
#define NSS_CGU_CLKOVERRIDEEN_NICCSSIN_SHIFT     (11U)
/*! nicCssIn - Override switch for automatic gating of the NIC CSS clock for the CSS In interface.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_NICCSSIN(x)        (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_NICCSSIN_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_NICCSSIN_MASK)

#define NSS_CGU_CLKOVERRIDEEN_NICCSSOUT_MASK     (0x1000U)
#define NSS_CGU_CLKOVERRIDEEN_NICCSSOUT_SHIFT    (12U)
/*! nicCssOut - Override switch for automatic gating of the NIC CSS clock for the CSS Out interface.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_NICCSSOUT(x)       (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_NICCSSOUT_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_NICCSSOUT_MASK)

#define NSS_CGU_CLKOVERRIDEEN_NICEXTMEM_MASK     (0x2000U)
#define NSS_CGU_CLKOVERRIDEEN_NICEXTMEM_SHIFT    (13U)
/*! nicExtMem - Override switch for automatic gating of the NIC Ext Mem clock. This implicitly
 *    overrides the hardware controlled xSPI Doze controller and automatic gating of the xSPI clocks
 *    (ipg, ahb) is also overridden.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_NICEXTMEM(x)       (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_NICEXTMEM_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_NICEXTMEM_MASK)

#define NSS_CGU_CLKOVERRIDEEN_XSP_MASK           (0x4000U)
#define NSS_CGU_CLKOVERRIDEEN_XSP_SHIFT          (14U)
/*! xsp - Override switch for automatic gating of the XSP core clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_XSP(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_XSP_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_XSP_MASK)

#define NSS_CGU_CLKOVERRIDEEN_XSPIIPS_S_MASK     (0x8000U)
#define NSS_CGU_CLKOVERRIDEEN_XSPIIPS_S_SHIFT    (15U)
/*! xSPIIPS_S - Override switch for automatic gating of the xSPI IPS clock. This implicitly
 *    overrides the Hardware controlled xSPI Doze controller and automatic gating of the xSPI clocks (ipg,
 *    ahb) is also overridden.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_XSPIIPS_S(x)       (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_XSPIIPS_S_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_XSPIIPS_S_MASK)

#define NSS_CGU_CLKOVERRIDEEN_XSPIDOZEIPS_AO_MASK (0x10000U)
#define NSS_CGU_CLKOVERRIDEEN_XSPIDOZEIPS_AO_SHIFT (16U)
/*! xSPIDozeIPS_AO - Override xSPI free running IPG clock in xSPI Doze mode. Only xSPI AHB clock is dynamically gated in xSPI Doze mode.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_XSPIDOZEIPS_AO(x)  (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_XSPIDOZEIPS_AO_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_XSPIDOZEIPS_AO_MASK)

#define NSS_CGU_CLKOVERRIDEEN_XSPIDOZEMODE_MASK  (0x20000U)
#define NSS_CGU_CLKOVERRIDEEN_XSPIDOZEMODE_SHIFT (17U)
/*! xSPIDozeMode - Override the hardware xSPI Doze mode controller, both free running IPG and AHB clocks are not gated.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEEN_XSPIDOZEMODE(x)    (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEEN_XSPIDOZEMODE_SHIFT)) & NSS_CGU_CLKOVERRIDEEN_XSPIDOZEMODE_MASK)
/*! @} */

/*! @name CLKOVERRIDEENSET - Write 1 to set a bitfield (override the clock). Write 0 is ignored. Read gives 0. */
/*! @{ */

#define NSS_CGU_CLKOVERRIDEENSET_CM55CLKIN_MASK  (0x1U)
#define NSS_CGU_CLKOVERRIDEENSET_CM55CLKIN_SHIFT (0U)
/*! cm55ClkIn - Override switch for automatic gating of the CM55 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_CM55CLKIN(x)    (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_CM55CLKIN_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_CM55CLKIN_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_CM55CLKINDBGWAKE_MASK (0x2U)
#define NSS_CGU_CLKOVERRIDEENSET_CM55CLKINDBGWAKE_SHIFT (1U)
/*! cm55ClkInDbgWake - Override switch for CM55 CLKIN wake-up on debug power-up.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_CM55CLKINDBGWAKE(x) (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_CM55CLKINDBGWAKE_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_CM55CLKINDBGWAKE_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_CM55IWIC_MASK   (0x4U)
#define NSS_CGU_CLKOVERRIDEENSET_CM55IWIC_SHIFT  (2U)
/*! cm55Iwic - Override switch for automatic gating of the CM55 IWIC clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_CM55IWIC(x)     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_CM55IWIC_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_CM55IWIC_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_CM55DBG_MASK    (0x8U)
#define NSS_CGU_CLKOVERRIDEENSET_CM55DBG_SHIFT   (3U)
/*! cm55Dbg - Override switch for automatic gating of the CM55 Debug clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_CM55DBG(x)      (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_CM55DBG_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_CM55DBG_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_U85_MASK        (0x10U)
#define NSS_CGU_CLKOVERRIDEENSET_U85_SHIFT       (4U)
/*! u85 - Override switch for automatic gating of the Ethos U85 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_U85(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_U85_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_U85_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_DMA_MASK        (0x20U)
#define NSS_CGU_CLKOVERRIDEENSET_DMA_SHIFT       (5U)
/*! dma - Override switch for automatic gating of the DMA clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_DMA(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_DMA_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_DMA_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_APB_MASK        (0x40U)
#define NSS_CGU_CLKOVERRIDEENSET_APB_SHIFT       (6U)
/*! apb - Override switch for automatic gating of the APB clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_APB(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_APB_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_APB_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_NIC_MASK        (0x80U)
#define NSS_CGU_CLKOVERRIDEENSET_NIC_SHIFT       (7U)
/*! nic - Override switch for automatic gating of the NIC clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_NIC(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_NIC_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_NIC_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_NICGPV_MASK     (0x100U)
#define NSS_CGU_CLKOVERRIDEENSET_NICGPV_SHIFT    (8U)
/*! nicGpv - Override switch for automatic gating of the NIC GPV clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_NICGPV(x)       (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_NICGPV_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_NICGPV_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_NICDSSIN_MASK   (0x200U)
#define NSS_CGU_CLKOVERRIDEENSET_NICDSSIN_SHIFT  (9U)
/*! nicDssIn - Override switch for automatic gating of the NIC Dss clock for the DSS In0 and In1 interface.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_NICDSSIN(x)     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_NICDSSIN_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_NICDSSIN_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_NICXSPHCLK_MASK (0x400U)
#define NSS_CGU_CLKOVERRIDEENSET_NICXSPHCLK_SHIFT (10U)
/*! nicXspHclk - Override switch for automatic gating of the NIC XSP AHB clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_NICXSPHCLK(x)   (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_NICXSPHCLK_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_NICXSPHCLK_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_NICCSSIN_MASK   (0x800U)
#define NSS_CGU_CLKOVERRIDEENSET_NICCSSIN_SHIFT  (11U)
/*! nicCssIn - Override switch for automatic gating of the NIC CSS clock for the CSS In interface.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_NICCSSIN(x)     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_NICCSSIN_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_NICCSSIN_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_NICCSSOUT_MASK  (0x1000U)
#define NSS_CGU_CLKOVERRIDEENSET_NICCSSOUT_SHIFT (12U)
/*! nicCssOut - Override switch for automatic gating of the NIC CSS clock for the CSS Out interface.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_NICCSSOUT(x)    (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_NICCSSOUT_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_NICCSSOUT_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_NICEXTMEM_MASK  (0x2000U)
#define NSS_CGU_CLKOVERRIDEENSET_NICEXTMEM_SHIFT (13U)
/*! nicExtMem - Override switch for automatic gating of the NIC Ext Mem clock. This implicitly
 *    overrides the hardware controlled xSPI Doze controller and automatic gating of the xSPI clocks
 *    (ipg, ahb) is also overridden.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_NICEXTMEM(x)    (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_NICEXTMEM_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_NICEXTMEM_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_XSP_MASK        (0x4000U)
#define NSS_CGU_CLKOVERRIDEENSET_XSP_SHIFT       (14U)
/*! xsp - Override switch for automatic gating of the XSP core clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_XSP(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_XSP_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_XSP_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_XSPIIPS_S_MASK  (0x8000U)
#define NSS_CGU_CLKOVERRIDEENSET_XSPIIPS_S_SHIFT (15U)
/*! xSPIIPS_S - Override switch for automatic gating of the xSPI IPS clock. This implicitly
 *    overrides the Hardware controlled xSPI Doze controller and automatic gating of the xSPI clocks (ipg,
 *    ahb) is also overridden.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_XSPIIPS_S(x)    (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_XSPIIPS_S_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_XSPIIPS_S_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_XSPIDOZEIPS_AO_MASK (0x10000U)
#define NSS_CGU_CLKOVERRIDEENSET_XSPIDOZEIPS_AO_SHIFT (16U)
/*! xSPIDozeIPS_AO - Override xSPI free running IPG clock in xSPI Doze mode. Only xSPI AHB clock is dynamically gated in xSPI Doze mode.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_XSPIDOZEIPS_AO(x) (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_XSPIDOZEIPS_AO_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_XSPIDOZEIPS_AO_MASK)

#define NSS_CGU_CLKOVERRIDEENSET_XSPIDOZEMODE_MASK (0x20000U)
#define NSS_CGU_CLKOVERRIDEENSET_XSPIDOZEMODE_SHIFT (17U)
/*! xSPIDozeMode - Override the hardware xSPI Doze mode controller, both free running IPG and AHB clocks are not gated.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENSET_XSPIDOZEMODE(x) (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENSET_XSPIDOZEMODE_SHIFT)) & NSS_CGU_CLKOVERRIDEENSET_XSPIDOZEMODE_MASK)
/*! @} */

/*! @name CLKOVERRIDEENCLR - Write 1 to clear a bitfield (automatic clock gating). Write 0 is ignored. Read gives 0. */
/*! @{ */

#define NSS_CGU_CLKOVERRIDEENCLR_CM55CLKIN_MASK  (0x1U)
#define NSS_CGU_CLKOVERRIDEENCLR_CM55CLKIN_SHIFT (0U)
/*! cm55ClkIn - Override switch for automatic gating of the CM55 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_CM55CLKIN(x)    (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_CM55CLKIN_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_CM55CLKIN_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_CM55CLKINDBGWAKE_MASK (0x2U)
#define NSS_CGU_CLKOVERRIDEENCLR_CM55CLKINDBGWAKE_SHIFT (1U)
/*! cm55ClkInDbgWake - Override switch for CM55 CLKIN wake-up on debug power-up.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_CM55CLKINDBGWAKE(x) (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_CM55CLKINDBGWAKE_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_CM55CLKINDBGWAKE_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_CM55IWIC_MASK   (0x4U)
#define NSS_CGU_CLKOVERRIDEENCLR_CM55IWIC_SHIFT  (2U)
/*! cm55Iwic - Override switch for automatic gating of the CM55 IWIC clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_CM55IWIC(x)     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_CM55IWIC_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_CM55IWIC_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_CM55DBG_MASK    (0x8U)
#define NSS_CGU_CLKOVERRIDEENCLR_CM55DBG_SHIFT   (3U)
/*! cm55Dbg - Override switch for automatic gating of the CM55 Debug clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_CM55DBG(x)      (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_CM55DBG_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_CM55DBG_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_U85_MASK        (0x10U)
#define NSS_CGU_CLKOVERRIDEENCLR_U85_SHIFT       (4U)
/*! u85 - Override switch for automatic gating of the Ethos U85 clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_U85(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_U85_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_U85_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_DMA_MASK        (0x20U)
#define NSS_CGU_CLKOVERRIDEENCLR_DMA_SHIFT       (5U)
/*! dma - Override switch for automatic gating of the DMA clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_DMA(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_DMA_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_DMA_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_APB_MASK        (0x40U)
#define NSS_CGU_CLKOVERRIDEENCLR_APB_SHIFT       (6U)
/*! apb - Override switch for automatic gating of the APB clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_APB(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_APB_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_APB_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_NIC_MASK        (0x80U)
#define NSS_CGU_CLKOVERRIDEENCLR_NIC_SHIFT       (7U)
/*! nic - Override switch for automatic gating of the NIC clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_NIC(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_NIC_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_NIC_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_NICGPV_MASK     (0x100U)
#define NSS_CGU_CLKOVERRIDEENCLR_NICGPV_SHIFT    (8U)
/*! nicGpv - Override switch for automatic gating of the NIC GPV clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_NICGPV(x)       (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_NICGPV_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_NICGPV_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_NICDSSIN_MASK   (0x200U)
#define NSS_CGU_CLKOVERRIDEENCLR_NICDSSIN_SHIFT  (9U)
/*! nicDssIn - Override switch for automatic gating of the NIC Dss clock for the DSS In0 and In1 interface.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_NICDSSIN(x)     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_NICDSSIN_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_NICDSSIN_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_NICXSPHCLK_MASK (0x400U)
#define NSS_CGU_CLKOVERRIDEENCLR_NICXSPHCLK_SHIFT (10U)
/*! nicXspHclk - Override switch for automatic gating of the NIC XSP AHB clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_NICXSPHCLK(x)   (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_NICXSPHCLK_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_NICXSPHCLK_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_NICCSSIN_MASK   (0x800U)
#define NSS_CGU_CLKOVERRIDEENCLR_NICCSSIN_SHIFT  (11U)
/*! nicCssIn - Override switch for automatic gating of the NIC CSS clock for the CSS In interface.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_NICCSSIN(x)     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_NICCSSIN_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_NICCSSIN_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_NICCSSOUT_MASK  (0x1000U)
#define NSS_CGU_CLKOVERRIDEENCLR_NICCSSOUT_SHIFT (12U)
/*! nicCssOut - Override switch for automatic gating of the NIC CSS clock for the CSS Out interface.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_NICCSSOUT(x)    (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_NICCSSOUT_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_NICCSSOUT_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_NICEXTMEM_MASK  (0x2000U)
#define NSS_CGU_CLKOVERRIDEENCLR_NICEXTMEM_SHIFT (13U)
/*! nicExtMem - Override switch for automatic gating of the NIC Ext Mem clock. This implicitly
 *    overrides the hardware controlled xSPI Doze controller and automatic gating of the xSPI clocks
 *    (ipg, ahb) is also overridden.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_NICEXTMEM(x)    (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_NICEXTMEM_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_NICEXTMEM_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_XSP_MASK        (0x4000U)
#define NSS_CGU_CLKOVERRIDEENCLR_XSP_SHIFT       (14U)
/*! xsp - Override switch for automatic gating of the XSP core clock.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_XSP(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_XSP_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_XSP_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_XSPIIPS_S_MASK  (0x8000U)
#define NSS_CGU_CLKOVERRIDEENCLR_XSPIIPS_S_SHIFT (15U)
/*! xSPIIPS_S - Override switch for automatic gating of the xSPI IPS clock. This implicitly
 *    overrides the Hardware controlled xSPI Doze controller and automatic gating of the xSPI clocks (ipg,
 *    ahb) is also overridden.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_XSPIIPS_S(x)    (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_XSPIIPS_S_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_XSPIIPS_S_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_XSPIDOZEIPS_AO_MASK (0x10000U)
#define NSS_CGU_CLKOVERRIDEENCLR_XSPIDOZEIPS_AO_SHIFT (16U)
/*! xSPIDozeIPS_AO - Override xSPI free running IPG clock in xSPI Doze mode. Only xSPI AHB clock is dynamically gated in xSPI Doze mode.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_XSPIDOZEIPS_AO(x) (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_XSPIDOZEIPS_AO_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_XSPIDOZEIPS_AO_MASK)

#define NSS_CGU_CLKOVERRIDEENCLR_XSPIDOZEMODE_MASK (0x20000U)
#define NSS_CGU_CLKOVERRIDEENCLR_XSPIDOZEMODE_SHIFT (17U)
/*! xSPIDozeMode - Override the hardware xSPI Doze mode controller, both free running IPG and AHB clocks are not gated.
 *  0b0..false
 *  0b1..true
 */
#define NSS_CGU_CLKOVERRIDEENCLR_XSPIDOZEMODE(x) (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CLKOVERRIDEENCLR_XSPIDOZEMODE_SHIFT)) & NSS_CGU_CLKOVERRIDEENCLR_XSPIDOZEMODE_MASK)
/*! @} */

/*! @name MAIN_CLKDIV - Indicates the status of the reset registers. */
/*! @{ */

#define NSS_CGU_MAIN_CLKDIV_LFSR_DIV_MASK        (0xFFU)
#define NSS_CGU_MAIN_CLKDIV_LFSR_DIV_SHIFT       (0U)
/*! lfsr_div - Frequency control for the LFSR based divider. */
#define NSS_CGU_MAIN_CLKDIV_LFSR_DIV(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_MAIN_CLKDIV_LFSR_DIV_SHIFT)) & NSS_CGU_MAIN_CLKDIV_LFSR_DIV_MASK)

#define NSS_CGU_MAIN_CLKDIV_LFSR_SYNC_VALUE_MASK (0xFF0000U)
#define NSS_CGU_MAIN_CLKDIV_LFSR_SYNC_VALUE_SHIFT (16U)
/*! lfsr_sync_value - ToDo: fix description */
#define NSS_CGU_MAIN_CLKDIV_LFSR_SYNC_VALUE(x)   (((uint32_t)(((uint32_t)(x)) << NSS_CGU_MAIN_CLKDIV_LFSR_SYNC_VALUE_SHIFT)) & NSS_CGU_MAIN_CLKDIV_LFSR_SYNC_VALUE_MASK)

#define NSS_CGU_MAIN_CLKDIV_LFSR_SYNC_MODE_MASK  (0x6000000U)
#define NSS_CGU_MAIN_CLKDIV_LFSR_SYNC_MODE_SHIFT (25U)
/*! lfsr_sync_mode - ToDo
 *  0b00..No sync - free-running
 *  0b01..Sync at startup
 *  0b10..Continuous sync.
 */
#define NSS_CGU_MAIN_CLKDIV_LFSR_SYNC_MODE(x)    (((uint32_t)(((uint32_t)(x)) << NSS_CGU_MAIN_CLKDIV_LFSR_SYNC_MODE_SHIFT)) & NSS_CGU_MAIN_CLKDIV_LFSR_SYNC_MODE_MASK)

#define NSS_CGU_MAIN_CLKDIV_LFSR_BIN_MASK        (0x8000000U)
#define NSS_CGU_MAIN_CLKDIV_LFSR_BIN_SHIFT       (27U)
/*! lfsr_bin - Switch between LFSR or binary division 0: LFSR division 1: Binary division */
#define NSS_CGU_MAIN_CLKDIV_LFSR_BIN(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_MAIN_CLKDIV_LFSR_BIN_SHIFT)) & NSS_CGU_MAIN_CLKDIV_LFSR_BIN_MASK)

#define NSS_CGU_MAIN_CLKDIV_PREDIV_MASK          (0xF0000000U)
#define NSS_CGU_MAIN_CLKDIV_PREDIV_SHIFT         (28U)
/*! prediv - Division factor for the pre-divider. The resulting frequency will be 1/div_factor * the
 *    input clock frequency. When 1 is set, the divider is effectively bypassed, giving a 1:1 ratio
 *    between the input and output clock frequency. The internal counter is clock gated.
 */
#define NSS_CGU_MAIN_CLKDIV_PREDIV(x)            (((uint32_t)(((uint32_t)(x)) << NSS_CGU_MAIN_CLKDIV_PREDIV_SHIFT)) & NSS_CGU_MAIN_CLKDIV_PREDIV_MASK)
/*! @} */

/*! @name CM55_CLKDIV - Indicates the status of the reset registers. */
/*! @{ */

#define NSS_CGU_CM55_CLKDIV_LFSR_DIV_MASK        (0xFFU)
#define NSS_CGU_CM55_CLKDIV_LFSR_DIV_SHIFT       (0U)
/*! lfsr_div - Frequency control for the LFSR based divider. */
#define NSS_CGU_CM55_CLKDIV_LFSR_DIV(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CM55_CLKDIV_LFSR_DIV_SHIFT)) & NSS_CGU_CM55_CLKDIV_LFSR_DIV_MASK)

#define NSS_CGU_CM55_CLKDIV_LFSR_SYNC_VALUE_MASK (0xFF0000U)
#define NSS_CGU_CM55_CLKDIV_LFSR_SYNC_VALUE_SHIFT (16U)
/*! lfsr_sync_value - ToDo: fix description */
#define NSS_CGU_CM55_CLKDIV_LFSR_SYNC_VALUE(x)   (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CM55_CLKDIV_LFSR_SYNC_VALUE_SHIFT)) & NSS_CGU_CM55_CLKDIV_LFSR_SYNC_VALUE_MASK)

#define NSS_CGU_CM55_CLKDIV_LFSR_SYNC_MODE_MASK  (0x6000000U)
#define NSS_CGU_CM55_CLKDIV_LFSR_SYNC_MODE_SHIFT (25U)
/*! lfsr_sync_mode - ToDo
 *  0b00..No sync - free-running
 *  0b01..Sync at startup
 *  0b10..Continuous sync.
 */
#define NSS_CGU_CM55_CLKDIV_LFSR_SYNC_MODE(x)    (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CM55_CLKDIV_LFSR_SYNC_MODE_SHIFT)) & NSS_CGU_CM55_CLKDIV_LFSR_SYNC_MODE_MASK)

#define NSS_CGU_CM55_CLKDIV_LFSR_BIN_MASK        (0x8000000U)
#define NSS_CGU_CM55_CLKDIV_LFSR_BIN_SHIFT       (27U)
/*! lfsr_bin - Switch between LFSR or binary division 0: LFSR division 1: Binary division */
#define NSS_CGU_CM55_CLKDIV_LFSR_BIN(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CM55_CLKDIV_LFSR_BIN_SHIFT)) & NSS_CGU_CM55_CLKDIV_LFSR_BIN_MASK)

#define NSS_CGU_CM55_CLKDIV_PREDIV_MASK          (0xF0000000U)
#define NSS_CGU_CM55_CLKDIV_PREDIV_SHIFT         (28U)
/*! prediv - Division factor for the pre-divider. The resulting frequency will be 1/div_factor * the
 *    input clock frequency. When 1 is set, the divider is effectively bypassed, giving a 1:1 ratio
 *    between the input and output clock frequency. The internal counter is clock gated.
 */
#define NSS_CGU_CM55_CLKDIV_PREDIV(x)            (((uint32_t)(((uint32_t)(x)) << NSS_CGU_CM55_CLKDIV_PREDIV_SHIFT)) & NSS_CGU_CM55_CLKDIV_PREDIV_MASK)
/*! @} */

/*! @name XSP_CLKDIV - Indicates the status of the reset registers. */
/*! @{ */

#define NSS_CGU_XSP_CLKDIV_LFSR_DIV_MASK         (0xFFU)
#define NSS_CGU_XSP_CLKDIV_LFSR_DIV_SHIFT        (0U)
/*! lfsr_div - Frequency control for the LFSR based divider. */
#define NSS_CGU_XSP_CLKDIV_LFSR_DIV(x)           (((uint32_t)(((uint32_t)(x)) << NSS_CGU_XSP_CLKDIV_LFSR_DIV_SHIFT)) & NSS_CGU_XSP_CLKDIV_LFSR_DIV_MASK)

#define NSS_CGU_XSP_CLKDIV_LFSR_SYNC_VALUE_MASK  (0xFF0000U)
#define NSS_CGU_XSP_CLKDIV_LFSR_SYNC_VALUE_SHIFT (16U)
/*! lfsr_sync_value - ToDo: fix description */
#define NSS_CGU_XSP_CLKDIV_LFSR_SYNC_VALUE(x)    (((uint32_t)(((uint32_t)(x)) << NSS_CGU_XSP_CLKDIV_LFSR_SYNC_VALUE_SHIFT)) & NSS_CGU_XSP_CLKDIV_LFSR_SYNC_VALUE_MASK)

#define NSS_CGU_XSP_CLKDIV_LFSR_SYNC_MODE_MASK   (0x6000000U)
#define NSS_CGU_XSP_CLKDIV_LFSR_SYNC_MODE_SHIFT  (25U)
/*! lfsr_sync_mode - ToDo
 *  0b00..No sync - free-running
 *  0b01..Sync at startup
 *  0b10..Continuous sync.
 */
#define NSS_CGU_XSP_CLKDIV_LFSR_SYNC_MODE(x)     (((uint32_t)(((uint32_t)(x)) << NSS_CGU_XSP_CLKDIV_LFSR_SYNC_MODE_SHIFT)) & NSS_CGU_XSP_CLKDIV_LFSR_SYNC_MODE_MASK)

#define NSS_CGU_XSP_CLKDIV_LFSR_BIN_MASK         (0x8000000U)
#define NSS_CGU_XSP_CLKDIV_LFSR_BIN_SHIFT        (27U)
/*! lfsr_bin - Switch between LFSR or binary division 0: LFSR division 1: Binary division */
#define NSS_CGU_XSP_CLKDIV_LFSR_BIN(x)           (((uint32_t)(((uint32_t)(x)) << NSS_CGU_XSP_CLKDIV_LFSR_BIN_SHIFT)) & NSS_CGU_XSP_CLKDIV_LFSR_BIN_MASK)

#define NSS_CGU_XSP_CLKDIV_PREDIV_MASK           (0xF0000000U)
#define NSS_CGU_XSP_CLKDIV_PREDIV_SHIFT          (28U)
/*! prediv - Division factor for the pre-divider. The resulting frequency will be 1/div_factor * the
 *    input clock frequency. When 1 is set, the divider is effectively bypassed, giving a 1:1 ratio
 *    between the input and output clock frequency. The internal counter is clock gated.
 */
#define NSS_CGU_XSP_CLKDIV_PREDIV(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_XSP_CLKDIV_PREDIV_SHIFT)) & NSS_CGU_XSP_CLKDIV_PREDIV_MASK)
/*! @} */

/*! @name DRAINCNT0 -  */
/*! @{ */

#define NSS_CGU_DRAINCNT0_CM55CLKIN_MASK         (0x3FU)
#define NSS_CGU_DRAINCNT0_CM55CLKIN_SHIFT        (0U)
/*! cm55ClkIn - Drain counter for the automatic clock gating of the CM55 core clock domain. */
#define NSS_CGU_DRAINCNT0_CM55CLKIN(x)           (((uint32_t)(((uint32_t)(x)) << NSS_CGU_DRAINCNT0_CM55CLKIN_SHIFT)) & NSS_CGU_DRAINCNT0_CM55CLKIN_MASK)

#define NSS_CGU_DRAINCNT0_CM55DBG_MASK           (0x3F00U)
#define NSS_CGU_DRAINCNT0_CM55DBG_SHIFT          (8U)
/*! cm55Dbg - Drain counter for the automatic clock gating of the CM55 Debug clock domain. */
#define NSS_CGU_DRAINCNT0_CM55DBG(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_DRAINCNT0_CM55DBG_SHIFT)) & NSS_CGU_DRAINCNT0_CM55DBG_MASK)

#define NSS_CGU_DRAINCNT0_U85_MASK               (0x3F0000U)
#define NSS_CGU_DRAINCNT0_U85_SHIFT              (16U)
/*! u85 - Drain counter for the automatic clock gating of the U85. */
#define NSS_CGU_DRAINCNT0_U85(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_DRAINCNT0_U85_SHIFT)) & NSS_CGU_DRAINCNT0_U85_MASK)

#define NSS_CGU_DRAINCNT0_DMA_MASK               (0x3F000000U)
#define NSS_CGU_DRAINCNT0_DMA_SHIFT              (24U)
/*! dma - Drain counter for the automatic clock gating of the DMA. */
#define NSS_CGU_DRAINCNT0_DMA(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_DRAINCNT0_DMA_SHIFT)) & NSS_CGU_DRAINCNT0_DMA_MASK)
/*! @} */

/*! @name DRAINCNT1 -  */
/*! @{ */

#define NSS_CGU_DRAINCNT1_APB_MASK               (0x3FU)
#define NSS_CGU_DRAINCNT1_APB_SHIFT              (0U)
/*! apb - Drain counter for the automatic clock gating of the APB clock domain. */
#define NSS_CGU_DRAINCNT1_APB(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_DRAINCNT1_APB_SHIFT)) & NSS_CGU_DRAINCNT1_APB_MASK)

#define NSS_CGU_DRAINCNT1_NIC_MASK               (0x3F00U)
#define NSS_CGU_DRAINCNT1_NIC_SHIFT              (8U)
/*! nic - Drain counter for the automatic clock gating of the NIC clock domain. */
#define NSS_CGU_DRAINCNT1_NIC(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_CGU_DRAINCNT1_NIC_SHIFT)) & NSS_CGU_DRAINCNT1_NIC_MASK)

#define NSS_CGU_DRAINCNT1_NICGPV_MASK            (0x3F0000U)
#define NSS_CGU_DRAINCNT1_NICGPV_SHIFT           (16U)
/*! nicGpv - Drain counter for the automatic clock gating of the NIC GPV clock domain. */
#define NSS_CGU_DRAINCNT1_NICGPV(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_DRAINCNT1_NICGPV_SHIFT)) & NSS_CGU_DRAINCNT1_NICGPV_MASK)
/*! @} */

/*! @name DRAINCNT2 -  */
/*! @{ */

#define NSS_CGU_DRAINCNT2_NICXSPHCLK_MASK        (0x3FU)
#define NSS_CGU_DRAINCNT2_NICXSPHCLK_SHIFT       (0U)
/*! nicXspHclk - Drain counter for the automatic clock gating of the NIC XSP AHB clock domain. */
#define NSS_CGU_DRAINCNT2_NICXSPHCLK(x)          (((uint32_t)(((uint32_t)(x)) << NSS_CGU_DRAINCNT2_NICXSPHCLK_SHIFT)) & NSS_CGU_DRAINCNT2_NICXSPHCLK_MASK)

#define NSS_CGU_DRAINCNT2_NICCSS_MASK            (0x3F00U)
#define NSS_CGU_DRAINCNT2_NICCSS_SHIFT           (8U)
/*! nicCss - Drain counter for the automatic clock gating of the NIC CSS in and CSS out clock domain. */
#define NSS_CGU_DRAINCNT2_NICCSS(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_DRAINCNT2_NICCSS_SHIFT)) & NSS_CGU_DRAINCNT2_NICCSS_MASK)

#define NSS_CGU_DRAINCNT2_NICDSS_MASK            (0x3F000000U)
#define NSS_CGU_DRAINCNT2_NICDSS_SHIFT           (24U)
/*! nicDss - Drain counter for the automatic clock gating of the NIC DSS clock domain. */
#define NSS_CGU_DRAINCNT2_NICDSS(x)              (((uint32_t)(((uint32_t)(x)) << NSS_CGU_DRAINCNT2_NICDSS_SHIFT)) & NSS_CGU_DRAINCNT2_NICDSS_MASK)
/*! @} */

/*! @name DRAINCNT3 -  */
/*! @{ */

#define NSS_CGU_DRAINCNT3_NICEXTMEM_MASK         (0xFFU)
#define NSS_CGU_DRAINCNT3_NICEXTMEM_SHIFT        (0U)
/*! nicExtMem - Drain counter for the automatic clock gating of the NIC Ext Mem domain. */
#define NSS_CGU_DRAINCNT3_NICEXTMEM(x)           (((uint32_t)(((uint32_t)(x)) << NSS_CGU_DRAINCNT3_NICEXTMEM_SHIFT)) & NSS_CGU_DRAINCNT3_NICEXTMEM_MASK)

#define NSS_CGU_DRAINCNT3_XSPIIPS_MASK           (0xFF00U)
#define NSS_CGU_DRAINCNT3_XSPIIPS_SHIFT          (8U)
/*! xSPIIPS - Drain counter for the automatic clock gating of the xSPI IPG clock. */
#define NSS_CGU_DRAINCNT3_XSPIIPS(x)             (((uint32_t)(((uint32_t)(x)) << NSS_CGU_DRAINCNT3_XSPIIPS_SHIFT)) & NSS_CGU_DRAINCNT3_XSPIIPS_MASK)

#define NSS_CGU_DRAINCNT3_XSPIDOZEMODE_MASK      (0xFF0000U)
#define NSS_CGU_DRAINCNT3_XSPIDOZEMODE_SHIFT     (16U)
/*! xSPIDozeMode - Drain counter for the automatic clock gating of the xSPI clocks (IPG and AHB) in DOZE mode. */
#define NSS_CGU_DRAINCNT3_XSPIDOZEMODE(x)        (((uint32_t)(((uint32_t)(x)) << NSS_CGU_DRAINCNT3_XSPIDOZEMODE_SHIFT)) & NSS_CGU_DRAINCNT3_XSPIDOZEMODE_MASK)
/*! @} */

/*! @name XSP_CLKSTEAL - Register to override the clockstealing flag to the XSP. By default the flag is based on the XSP Predivider and XSP LFSR divider settings. In case of artifacts, the status of the the flag can be overriden with this register. This register should only be changed while the XSP is idle. */
/*! @{ */

#define NSS_CGU_XSP_CLKSTEAL_OVERRIDEEN_MASK     (0x1U)
#define NSS_CGU_XSP_CLKSTEAL_OVERRIDEEN_SHIFT    (0U)
/*! overrideEn - Override the HW automatic clockstealing flag towards the XSP
 *  0b0..Clockstealing flag is automatically set by HW.
 *  0b1..Clockstealing flag is overriden by the value in the overrideVal field.
 */
#define NSS_CGU_XSP_CLKSTEAL_OVERRIDEEN(x)       (((uint32_t)(((uint32_t)(x)) << NSS_CGU_XSP_CLKSTEAL_OVERRIDEEN_SHIFT)) & NSS_CGU_XSP_CLKSTEAL_OVERRIDEEN_MASK)

#define NSS_CGU_XSP_CLKSTEAL_OVERRIDEVAL_MASK    (0x2U)
#define NSS_CGU_XSP_CLKSTEAL_OVERRIDEVAL_SHIFT   (1U)
/*! overrideVal - Value of the clockstealing flag towards the XSP when overrideEn field is enabled.
 *  0b0..Indicate to the XSP that NO clockstealing is applied.
 *  0b1..Indicate to the XSP that clockstealing is applied.
 */
#define NSS_CGU_XSP_CLKSTEAL_OVERRIDEVAL(x)      (((uint32_t)(((uint32_t)(x)) << NSS_CGU_XSP_CLKSTEAL_OVERRIDEVAL_SHIFT)) & NSS_CGU_XSP_CLKSTEAL_OVERRIDEVAL_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group NSS_CGU_Register_Masks */


/*!
 * @}
 */ /* end of group NSS_CGU_Peripheral_Access_Layer */


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


#endif  /* PERI_NSS_CGU_H_ */

