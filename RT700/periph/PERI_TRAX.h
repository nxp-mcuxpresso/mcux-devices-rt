/*
** ###################################################################
**     Processors:          MIMXRT735SGAWAR_cm33_core0
**                          MIMXRT735SGAWAR_cm33_core1
**                          MIMXRT735SGAWAR_ezhv
**                          MIMXRT735SGAWAR_hifi1
**                          MIMXRT735SGFOA_cm33_core0
**                          MIMXRT735SGFOA_cm33_core1
**                          MIMXRT735SGFOA_ezhv
**                          MIMXRT735SGFOA_hifi1
**                          MIMXRT758SGAWAR_cm33_core0
**                          MIMXRT758SGAWAR_cm33_core1
**                          MIMXRT758SGAWAR_ezhv
**                          MIMXRT758SGAWAR_hifi1
**                          MIMXRT758SGFOA_cm33_core0
**                          MIMXRT758SGFOA_cm33_core1
**                          MIMXRT758SGFOA_ezhv
**                          MIMXRT758SGFOA_hifi1
**                          MIMXRT798SGAWAR_cm33_core0
**                          MIMXRT798SGAWAR_cm33_core1
**                          MIMXRT798SGAWAR_ezhv
**                          MIMXRT798SGAWAR_hifi1
**                          MIMXRT798SGAWAR_hifi4
**                          MIMXRT798SGFOA_cm33_core0
**                          MIMXRT798SGFOA_cm33_core1
**                          MIMXRT798SGFOA_ezhv
**                          MIMXRT798SGFOA_hifi1
**                          MIMXRT798SGFOA_hifi4
**
**     Version:             rev. 2.0, 2024-05-28
**     Build:               b240912
**
**     Abstract:
**         CMSIS Peripheral Access Layer for Trax
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2024 NXP
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
**
** ###################################################################
*/

/*!
 * @file Trax.h
 * @version 2.0
 * @date 2024-05-28
 * @brief CMSIS Peripheral Access Layer for Trax
 *
 * CMSIS Peripheral Access Layer for Trax
 */

#if !defined(Trax_H_)
#define Trax_H_                                  /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MIMXRT735SGAWAR_cm33_core0) || defined(CPU_MIMXRT735SGFOA_cm33_core0))
#include "MIMXRT735S_cm33_core0_COMMON.h"
#elif (defined(CPU_MIMXRT735SGAWAR_cm33_core1) || defined(CPU_MIMXRT735SGFOA_cm33_core1))
#include "MIMXRT735S_cm33_core1_COMMON.h"
#elif (defined(CPU_MIMXRT735SGAWAR_ezhv) || defined(CPU_MIMXRT735SGFOA_ezhv))
#include "MIMXRT735S_ezhv_COMMON.h"
#elif (defined(CPU_MIMXRT735SGAWAR_hifi1) || defined(CPU_MIMXRT735SGFOA_hifi1))
#include "MIMXRT735S_hifi1_COMMON.h"
#elif (defined(CPU_MIMXRT758SGAWAR_cm33_core0) || defined(CPU_MIMXRT758SGFOA_cm33_core0))
#include "MIMXRT758S_cm33_core0_COMMON.h"
#elif (defined(CPU_MIMXRT758SGAWAR_cm33_core1) || defined(CPU_MIMXRT758SGFOA_cm33_core1))
#include "MIMXRT758S_cm33_core1_COMMON.h"
#elif (defined(CPU_MIMXRT758SGAWAR_ezhv) || defined(CPU_MIMXRT758SGFOA_ezhv))
#include "MIMXRT758S_ezhv_COMMON.h"
#elif (defined(CPU_MIMXRT758SGAWAR_hifi1) || defined(CPU_MIMXRT758SGFOA_hifi1))
#include "MIMXRT758S_hifi1_COMMON.h"
#elif (defined(CPU_MIMXRT798SGAWAR_cm33_core0) || defined(CPU_MIMXRT798SGFOA_cm33_core0))
#include "MIMXRT798S_cm33_core0_COMMON.h"
#elif (defined(CPU_MIMXRT798SGAWAR_cm33_core1) || defined(CPU_MIMXRT798SGFOA_cm33_core1))
#include "MIMXRT798S_cm33_core1_COMMON.h"
#elif (defined(CPU_MIMXRT798SGAWAR_ezhv) || defined(CPU_MIMXRT798SGFOA_ezhv))
#include "MIMXRT798S_ezhv_COMMON.h"
#elif (defined(CPU_MIMXRT798SGAWAR_hifi1) || defined(CPU_MIMXRT798SGFOA_hifi1))
#include "MIMXRT798S_hifi1_COMMON.h"
#elif (defined(CPU_MIMXRT798SGAWAR_hifi4) || defined(CPU_MIMXRT798SGFOA_hifi4))
#include "MIMXRT798S_hifi4_COMMON.h"
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
#elif defined(__XTENSA__)
  /* anonymous unions are enabled by default */
#else
  #error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- Trax Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Trax_Peripheral_Access_Layer Trax Peripheral Access Layer
 * @{
 */

/** Trax - Register Layout Typedef */
typedef struct {
  __I  uint32_t TRAXID;                            /**< TRAXID, offset: 0x0 */
  __IO uint32_t TRAXCTRL;                          /**< TRAXCTRL, offset: 0x4 */
  __I  uint32_t TRAXSTAT;                          /**< TRAXSTAT, offset: 0x8 */
  __IO uint32_t TRAXDATA;                          /**< TRAXDATA, offset: 0xC */
  __IO uint32_t TRAXADDR;                          /**< TRAXADDR, offset: 0x10 */
  __IO uint32_t TRIGGERPC;                         /**< TRIGGERPC, offset: 0x14 */
  __IO uint32_t PCMATCHCTRL;                       /**< PCMATCHCTRL, offset: 0x18 */
  __IO uint32_t DELAYCNT;                          /**< DELAYCNT, offset: 0x1C */
  __IO uint32_t MEMADDRSTART;                      /**< MEMADDRSTART, offset: 0x20 */
  __IO uint32_t MEMADDREND;                        /**< MEMADDREND, offset: 0x24 */
       uint8_t RESERVED_0[24];
  __I  uint32_t EXTTIMELO;                         /**< EXTTIMELO, offset: 0x40 */
  __I  uint32_t EXTTIMEHI;                         /**< EXTTIMEHI, offset: 0x44 */
} Trax_Type;

/* ----------------------------------------------------------------------------
   -- Trax Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Trax_Register_Masks Trax Register Masks
 * @{
 */

/*! @name TRAXID - TRAXID */
/*! @{ */

#define Trax_TRAXID_CFGID_MASK                   (0xFFFFU)
#define Trax_TRAXID_CFGID_SHIFT                  (0U)
/*! CFGID - Configuration ID. */
#define Trax_TRAXID_CFGID(x)                     (((uint32_t)(((uint32_t)(x)) << Trax_TRAXID_CFGID_SHIFT)) & Trax_TRAXID_CFGID_MASK)

#define Trax_TRAXID_STDCFG_MASK                  (0x10000U)
#define Trax_TRAXID_STDCFG_SHIFT                 (16U)
/*! STDCFG - 1 if it is a Cadence standard configuration. */
#define Trax_TRAXID_STDCFG(x)                    (((uint32_t)(((uint32_t)(x)) << Trax_TRAXID_STDCFG_SHIFT)) & Trax_TRAXID_STDCFG_MASK)

#define Trax_TRAXID_MINVER_MASK                  (0xE0000U)
#define Trax_TRAXID_MINVER_SHIFT                 (17U)
/*! MINVER - Minor version number. */
#define Trax_TRAXID_MINVER(x)                    (((uint32_t)(((uint32_t)(x)) << Trax_TRAXID_MINVER_SHIFT)) & Trax_TRAXID_MINVER_MASK)

#define Trax_TRAXID_MAJVER_MASK                  (0xF00000U)
#define Trax_TRAXID_MAJVER_SHIFT                 (20U)
/*! MAJVER - Major version number. */
#define Trax_TRAXID_MAJVER(x)                    (((uint32_t)(((uint32_t)(x)) << Trax_TRAXID_MAJVER_SHIFT)) & Trax_TRAXID_MAJVER_MASK)

#define Trax_TRAXID_PRODOPT_MASK                 (0xF000000U)
#define Trax_TRAXID_PRODOPT_SHIFT                (24U)
/*! PRODOPT - Product specific options. */
#define Trax_TRAXID_PRODOPT(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXID_PRODOPT_SHIFT)) & Trax_TRAXID_PRODOPT_MASK)

#define Trax_TRAXID_PRODNO_MASK                  (0xF0000000U)
#define Trax_TRAXID_PRODNO_SHIFT                 (28U)
/*! PRODNO - Product number (identifies device class/type). */
#define Trax_TRAXID_PRODNO(x)                    (((uint32_t)(((uint32_t)(x)) << Trax_TRAXID_PRODNO_SHIFT)) & Trax_TRAXID_PRODNO_MASK)
/*! @} */

/*! @name TRAXCTRL - TRAXCTRL */
/*! @{ */

#define Trax_TRAXCTRL_TREN_MASK                  (0x1U)
#define Trax_TRAXCTRL_TREN_SHIFT                 (0U)
/*! TREN - Trace enable. */
#define Trax_TRAXCTRL_TREN(x)                    (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_TREN_SHIFT)) & Trax_TRAXCTRL_TREN_MASK)

#define Trax_TRAXCTRL_TRSTP_MASK                 (0x2U)
#define Trax_TRAXCTRL_TRSTP_SHIFT                (1U)
/*! TRSTP - Trace stop. */
#define Trax_TRAXCTRL_TRSTP(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_TRSTP_SHIFT)) & Trax_TRAXCTRL_TRSTP_MASK)

#define Trax_TRAXCTRL_PCMEN_MASK                 (0x4U)
#define Trax_TRAXCTRL_PCMEN_SHIFT                (2U)
/*! PCMEN - PC match enable. */
#define Trax_TRAXCTRL_PCMEN(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_PCMEN_SHIFT)) & Trax_TRAXCTRL_PCMEN_MASK)

#define Trax_TRAXCTRL_RESERVED0_MASK             (0x8U)
#define Trax_TRAXCTRL_RESERVED0_SHIFT            (3U)
/*! RESERVED0 - reserved field */
#define Trax_TRAXCTRL_RESERVED0(x)               (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_RESERVED0_SHIFT)) & Trax_TRAXCTRL_RESERVED0_MASK)

#define Trax_TRAXCTRL_PTIEN_MASK                 (0x10U)
#define Trax_TRAXCTRL_PTIEN_SHIFT                (4U)
/*! PTIEN - Processor trigger input enable. */
#define Trax_TRAXCTRL_PTIEN(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_PTIEN_SHIFT)) & Trax_TRAXCTRL_PTIEN_MASK)

#define Trax_TRAXCTRL_CTIEN_MASK                 (0x20U)
#define Trax_TRAXCTRL_CTIEN_SHIFT                (5U)
/*! CTIEN - Cross-trigger input enable. */
#define Trax_TRAXCTRL_CTIEN(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_CTIEN_SHIFT)) & Trax_TRAXCTRL_CTIEN_MASK)

#define Trax_TRAXCTRL_RESERVED1_MASK             (0x40U)
#define Trax_TRAXCTRL_RESERVED1_SHIFT            (6U)
/*! RESERVED1 - reserved field */
#define Trax_TRAXCTRL_RESERVED1(x)               (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_RESERVED1_SHIFT)) & Trax_TRAXCTRL_RESERVED1_MASK)

#define Trax_TRAXCTRL_TMEN_MASK                  (0x80U)
#define Trax_TRAXCTRL_TMEN_SHIFT                 (7U)
/*! TMEN - TraceRAM enable. */
#define Trax_TRAXCTRL_TMEN(x)                    (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_TMEN_SHIFT)) & Trax_TRAXCTRL_TMEN_MASK)

#define Trax_TRAXCTRL_RESERVED2_MASK             (0x100U)
#define Trax_TRAXCTRL_RESERVED2_SHIFT            (8U)
/*! RESERVED2 - reserved field */
#define Trax_TRAXCTRL_RESERVED2(x)               (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_RESERVED2_SHIFT)) & Trax_TRAXCTRL_RESERVED2_MASK)

#define Trax_TRAXCTRL_CNTU_MASK                  (0x200U)
#define Trax_TRAXCTRL_CNTU_SHIFT                 (9U)
/*! CNTU - Post-stop-trigger countdown units. */
#define Trax_TRAXCTRL_CNTU(x)                    (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_CNTU_SHIFT)) & Trax_TRAXCTRL_CNTU_MASK)

#define Trax_TRAXCTRL_RESERVED3_MASK             (0x400U)
#define Trax_TRAXCTRL_RESERVED3_SHIFT            (10U)
/*! RESERVED3 - reserved field */
#define Trax_TRAXCTRL_RESERVED3(x)               (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_RESERVED3_SHIFT)) & Trax_TRAXCTRL_RESERVED3_MASK)

#define Trax_TRAXCTRL_TSEN_MASK                  (0x800U)
#define Trax_TRAXCTRL_TSEN_SHIFT                 (11U)
/*! TSEN - Enables embedding timestamp information in TRAX messages. */
#define Trax_TRAXCTRL_TSEN(x)                    (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_TSEN_SHIFT)) & Trax_TRAXCTRL_TSEN_MASK)

#define Trax_TRAXCTRL_SMPER_MASK                 (0x7000U)
#define Trax_TRAXCTRL_SMPER_SHIFT                (12U)
/*! SMPER - Synchronization message period.
 *  0b000..
 *  0b001..
 *  0b010..
 *  0b011..
 *  0b100..
 *  0b101..
 *  0b110..
 *  0b111..
 */
#define Trax_TRAXCTRL_SMPER(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_SMPER_SHIFT)) & Trax_TRAXCTRL_SMPER_MASK)

#define Trax_TRAXCTRL_RESERVED4_MASK             (0x8000U)
#define Trax_TRAXCTRL_RESERVED4_SHIFT            (15U)
/*! RESERVED4 - reserved field */
#define Trax_TRAXCTRL_RESERVED4(x)               (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_RESERVED4_SHIFT)) & Trax_TRAXCTRL_RESERVED4_MASK)

#define Trax_TRAXCTRL_PTOWT_MASK                 (0x10000U)
#define Trax_TRAXCTRL_PTOWT_SHIFT                (16U)
/*! PTOWT - Processor Trigger Output (PTO) is enabled when stop triggered. */
#define Trax_TRAXCTRL_PTOWT(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_PTOWT_SHIFT)) & Trax_TRAXCTRL_PTOWT_MASK)

#define Trax_TRAXCTRL_PTOWS_MASK                 (0x20000U)
#define Trax_TRAXCTRL_PTOWS_SHIFT                (17U)
/*! PTOWS - Processor Trigger Output (PTO) is enabled when trace stop completes. */
#define Trax_TRAXCTRL_PTOWS(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_PTOWS_SHIFT)) & Trax_TRAXCTRL_PTOWS_MASK)

#define Trax_TRAXCTRL_RESERVED5_MASK             (0xC0000U)
#define Trax_TRAXCTRL_RESERVED5_SHIFT            (18U)
/*! RESERVED5 - reserved field */
#define Trax_TRAXCTRL_RESERVED5(x)               (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_RESERVED5_SHIFT)) & Trax_TRAXCTRL_RESERVED5_MASK)

#define Trax_TRAXCTRL_CTOWT_MASK                 (0x100000U)
#define Trax_TRAXCTRL_CTOWT_SHIFT                (20U)
/*! CTOWT - Cross-Trigger Output (CTO) is enabled when stop triggered. */
#define Trax_TRAXCTRL_CTOWT(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_CTOWT_SHIFT)) & Trax_TRAXCTRL_CTOWT_MASK)

#define Trax_TRAXCTRL_CTOWS_MASK                 (0x200000U)
#define Trax_TRAXCTRL_CTOWS_SHIFT                (21U)
/*! CTOWS - Cross-Trigger Output (CTO) is enabled when trace stop completes. */
#define Trax_TRAXCTRL_CTOWS(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_CTOWS_SHIFT)) & Trax_TRAXCTRL_CTOWS_MASK)

#define Trax_TRAXCTRL_ITCTO_MASK                 (0x400000U)
#define Trax_TRAXCTRL_ITCTO_SHIFT                (22U)
/*! ITCTO - Integration mode: cross-trigger output (CrossTriggerOut). */
#define Trax_TRAXCTRL_ITCTO(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_ITCTO_SHIFT)) & Trax_TRAXCTRL_ITCTO_MASK)

#define Trax_TRAXCTRL_ITCTIA_MASK                (0x800000U)
#define Trax_TRAXCTRL_ITCTIA_SHIFT               (23U)
/*! ITCTIA - Integration mode: cross-trigger input acknowledge (CrossTriggerInAck). */
#define Trax_TRAXCTRL_ITCTIA(x)                  (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_ITCTIA_SHIFT)) & Trax_TRAXCTRL_ITCTIA_MASK)

#define Trax_TRAXCTRL_ATID_0_MASK                (0x1000000U)
#define Trax_TRAXCTRL_ATID_0_SHIFT               (24U)
/*! ATID_0 - ATB source ID bit 0. */
#define Trax_TRAXCTRL_ATID_0(x)                  (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_ATID_0_SHIFT)) & Trax_TRAXCTRL_ATID_0_MASK)

#define Trax_TRAXCTRL_ATID6_1_MASK               (0x7E000000U)
#define Trax_TRAXCTRL_ATID6_1_SHIFT              (25U)
/*! ATID6_1 - ATB source ID bit [6:1]. */
#define Trax_TRAXCTRL_ATID6_1(x)                 (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_ATID6_1_SHIFT)) & Trax_TRAXCTRL_ATID6_1_MASK)

#define Trax_TRAXCTRL_ATEN_MASK                  (0x80000000U)
#define Trax_TRAXCTRL_ATEN_SHIFT                 (31U)
/*! ATEN - ATB enable. */
#define Trax_TRAXCTRL_ATEN(x)                    (((uint32_t)(((uint32_t)(x)) << Trax_TRAXCTRL_ATEN_SHIFT)) & Trax_TRAXCTRL_ATEN_MASK)
/*! @} */

/*! @name TRAXSTAT - TRAXSTAT */
/*! @{ */

#define Trax_TRAXSTAT_TRACT_MASK                 (0x1U)
#define Trax_TRAXSTAT_TRACT_SHIFT                (0U)
/*! TRACT - Trace active flag. */
#define Trax_TRAXSTAT_TRACT(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXSTAT_TRACT_SHIFT)) & Trax_TRAXSTAT_TRACT_MASK)

#define Trax_TRAXSTAT_TRIG_MASK                  (0x2U)
#define Trax_TRAXSTAT_TRIG_SHIFT                 (1U)
/*! TRIG - Trace stop trigger. */
#define Trax_TRAXSTAT_TRIG(x)                    (((uint32_t)(((uint32_t)(x)) << Trax_TRAXSTAT_TRIG_SHIFT)) & Trax_TRAXSTAT_TRIG_MASK)

#define Trax_TRAXSTAT_PCMTG_MASK                 (0x4U)
#define Trax_TRAXSTAT_PCMTG_SHIFT                (2U)
/*! PCMTG - Stop trigger caused by PC match. */
#define Trax_TRAXSTAT_PCMTG(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXSTAT_PCMTG_SHIFT)) & Trax_TRAXSTAT_PCMTG_MASK)

#define Trax_TRAXSTAT_PJTR_MASK                  (0x8U)
#define Trax_TRAXSTAT_PJTR_SHIFT                 (3U)
/*! PJTR - JTAG transaction result. */
#define Trax_TRAXSTAT_PJTR(x)                    (((uint32_t)(((uint32_t)(x)) << Trax_TRAXSTAT_PJTR_SHIFT)) & Trax_TRAXSTAT_PJTR_MASK)

#define Trax_TRAXSTAT_PTITG_MASK                 (0x10U)
#define Trax_TRAXSTAT_PTITG_SHIFT                (4U)
/*! PTITG - Stop trigger caused by Processor Trigger Input (PTI). */
#define Trax_TRAXSTAT_PTITG(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXSTAT_PTITG_SHIFT)) & Trax_TRAXSTAT_PTITG_MASK)

#define Trax_TRAXSTAT_CTITG_MASK                 (0x20U)
#define Trax_TRAXSTAT_CTITG_SHIFT                (5U)
/*! CTITG - Stop trigger caused by Cross-Trigger Input (CTI). */
#define Trax_TRAXSTAT_CTITG(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXSTAT_CTITG_SHIFT)) & Trax_TRAXSTAT_CTITG_MASK)

#define Trax_TRAXSTAT_RESERVED0_MASK             (0xC0U)
#define Trax_TRAXSTAT_RESERVED0_SHIFT            (6U)
/*! RESERVED0 - reserved field */
#define Trax_TRAXSTAT_RESERVED0(x)               (((uint32_t)(((uint32_t)(x)) << Trax_TRAXSTAT_RESERVED0_SHIFT)) & Trax_TRAXSTAT_RESERVED0_MASK)

#define Trax_TRAXSTAT_MEMSZ_MASK                 (0x1F00U)
#define Trax_TRAXSTAT_MEMSZ_SHIFT                (8U)
/*! MEMSZ - TraceRAM size. */
#define Trax_TRAXSTAT_MEMSZ(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXSTAT_MEMSZ_SHIFT)) & Trax_TRAXSTAT_MEMSZ_MASK)

#define Trax_TRAXSTAT_RESERVED1_MASK             (0xE000U)
#define Trax_TRAXSTAT_RESERVED1_SHIFT            (13U)
/*! RESERVED1 - reserved field */
#define Trax_TRAXSTAT_RESERVED1(x)               (((uint32_t)(((uint32_t)(x)) << Trax_TRAXSTAT_RESERVED1_SHIFT)) & Trax_TRAXSTAT_RESERVED1_MASK)

#define Trax_TRAXSTAT_PTO_MASK                   (0x10000U)
#define Trax_TRAXSTAT_PTO_SHIFT                  (16U)
/*! PTO - Processor Trigger Output This bit reflects the current value of PTO. */
#define Trax_TRAXSTAT_PTO(x)                     (((uint32_t)(((uint32_t)(x)) << Trax_TRAXSTAT_PTO_SHIFT)) & Trax_TRAXSTAT_PTO_MASK)

#define Trax_TRAXSTAT_CTO_MASK                   (0x20000U)
#define Trax_TRAXSTAT_CTO_SHIFT                  (17U)
/*! CTO - Cross-Trigger Output This bit reflects the current value of CTO. */
#define Trax_TRAXSTAT_CTO(x)                     (((uint32_t)(((uint32_t)(x)) << Trax_TRAXSTAT_CTO_SHIFT)) & Trax_TRAXSTAT_CTO_MASK)

#define Trax_TRAXSTAT_RESERVED2_MASK             (0x3C0000U)
#define Trax_TRAXSTAT_RESERVED2_SHIFT            (18U)
/*! RESERVED2 - reserved field */
#define Trax_TRAXSTAT_RESERVED2(x)               (((uint32_t)(((uint32_t)(x)) << Trax_TRAXSTAT_RESERVED2_SHIFT)) & Trax_TRAXSTAT_RESERVED2_MASK)

#define Trax_TRAXSTAT_ITCTOA_MASK                (0x400000U)
#define Trax_TRAXSTAT_ITCTOA_SHIFT               (22U)
/*! ITCTOA - CrossTriggerOutAck input observation value used in integration mode. */
#define Trax_TRAXSTAT_ITCTOA(x)                  (((uint32_t)(((uint32_t)(x)) << Trax_TRAXSTAT_ITCTOA_SHIFT)) & Trax_TRAXSTAT_ITCTOA_MASK)

#define Trax_TRAXSTAT_ITCTI_MASK                 (0x800000U)
#define Trax_TRAXSTAT_ITCTI_SHIFT                (23U)
/*! ITCTI - CTI input observation value used in integration mode. */
#define Trax_TRAXSTAT_ITCTI(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXSTAT_ITCTI_SHIFT)) & Trax_TRAXSTAT_ITCTI_MASK)

#define Trax_TRAXSTAT_ITATR_MASK                 (0x1000000U)
#define Trax_TRAXSTAT_ITATR_SHIFT                (24U)
/*! ITATR - ATREADY input observation value used in integration mode. */
#define Trax_TRAXSTAT_ITATR(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXSTAT_ITATR_SHIFT)) & Trax_TRAXSTAT_ITATR_MASK)

#define Trax_TRAXSTAT_RESERVED3_MASK             (0xFE000000U)
#define Trax_TRAXSTAT_RESERVED3_SHIFT            (25U)
/*! RESERVED3 - reserved field */
#define Trax_TRAXSTAT_RESERVED3(x)               (((uint32_t)(((uint32_t)(x)) << Trax_TRAXSTAT_RESERVED3_SHIFT)) & Trax_TRAXSTAT_RESERVED3_MASK)
/*! @} */

/*! @name TRAXDATA - TRAXDATA */
/*! @{ */

#define Trax_TRAXDATA_TRAXDATA_MASK              (0xFFFFFFFFU)
#define Trax_TRAXDATA_TRAXDATA_SHIFT             (0U)
/*! TRAXDATA - Trace RAM word data. */
#define Trax_TRAXDATA_TRAXDATA(x)                (((uint32_t)(((uint32_t)(x)) << Trax_TRAXDATA_TRAXDATA_SHIFT)) & Trax_TRAXDATA_TRAXDATA_MASK)
/*! @} */

/*! @name TRAXADDR - TRAXADDR */
/*! @{ */

#define Trax_TRAXADDR_TADDR_MASK                 (0x7FFU)  /* Merged from fields with different position or width, of widths (9, 11), largest definition used */
#define Trax_TRAXADDR_TADDR_SHIFT                (0U)
/*! TADDR - TraceRAM word address pointer. */
#define Trax_TRAXADDR_TADDR(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXADDR_TADDR_SHIFT)) & Trax_TRAXADDR_TADDR_MASK)  /* Merged from fields with different position or width, of widths (9, 11), largest definition used */

#define Trax_TRAXADDR_RESERVED0_MASK             (0x1FFE00U)  /* Merged from fields with different position or width, of widths (10, 12), largest definition used */
#define Trax_TRAXADDR_RESERVED0_SHIFT            (9U)
/*! RESERVED0 - reserved field */
#define Trax_TRAXADDR_RESERVED0(x)               (((uint32_t)(((uint32_t)(x)) << Trax_TRAXADDR_RESERVED0_SHIFT)) & Trax_TRAXADDR_RESERVED0_MASK)  /* Merged from fields with different position or width, of widths (10, 12), largest definition used */

#define Trax_TRAXADDR_TWRAP_MASK                 (0x7FE00000U)
#define Trax_TRAXADDR_TWRAP_SHIFT                (21U)
/*! TWRAP - Wrap-around count. */
#define Trax_TRAXADDR_TWRAP(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXADDR_TWRAP_SHIFT)) & Trax_TRAXADDR_TWRAP_MASK)

#define Trax_TRAXADDR_TWSAT_MASK                 (0x80000000U)
#define Trax_TRAXADDR_TWSAT_SHIFT                (31U)
/*! TWSAT - Wrap-around overflow. */
#define Trax_TRAXADDR_TWSAT(x)                   (((uint32_t)(((uint32_t)(x)) << Trax_TRAXADDR_TWSAT_SHIFT)) & Trax_TRAXADDR_TWSAT_MASK)
/*! @} */

/*! @name TRIGGERPC - TRIGGERPC */
/*! @{ */

#define Trax_TRIGGERPC_TRIGGERPC_MASK            (0xFFFFFFFFU)
#define Trax_TRIGGERPC_TRIGGERPC_SHIFT           (0U)
/*! TRIGGERPC - Trax Trigger PC value */
#define Trax_TRIGGERPC_TRIGGERPC(x)              (((uint32_t)(((uint32_t)(x)) << Trax_TRIGGERPC_TRIGGERPC_SHIFT)) & Trax_TRIGGERPC_TRIGGERPC_MASK)
/*! @} */

/*! @name PCMATCHCTRL - PCMATCHCTRL */
/*! @{ */

#define Trax_PCMATCHCTRL_PCML_MASK               (0x1FU)
#define Trax_PCMATCHCTRL_PCML_SHIFT              (0U)
/*! PCML - Match Mask Length. */
#define Trax_PCMATCHCTRL_PCML(x)                 (((uint32_t)(((uint32_t)(x)) << Trax_PCMATCHCTRL_PCML_SHIFT)) & Trax_PCMATCHCTRL_PCML_MASK)

#define Trax_PCMATCHCTRL_RESERVED0_MASK          (0x7FFFFFE0U)
#define Trax_PCMATCHCTRL_RESERVED0_SHIFT         (5U)
/*! RESERVED0 - reserved field */
#define Trax_PCMATCHCTRL_RESERVED0(x)            (((uint32_t)(((uint32_t)(x)) << Trax_PCMATCHCTRL_RESERVED0_SHIFT)) & Trax_PCMATCHCTRL_RESERVED0_MASK)

#define Trax_PCMATCHCTRL_PCMS_MASK               (0x80000000U)
#define Trax_PCMATCHCTRL_PCMS_SHIFT              (31U)
/*! PCMS - 1 PC Match Sense. */
#define Trax_PCMATCHCTRL_PCMS(x)                 (((uint32_t)(((uint32_t)(x)) << Trax_PCMATCHCTRL_PCMS_SHIFT)) & Trax_PCMATCHCTRL_PCMS_MASK)
/*! @} */

/*! @name DELAYCNT - DELAYCNT */
/*! @{ */

#define Trax_DELAYCNT_DELAYCNT_MASK              (0xFFFFFFU)
#define Trax_DELAYCNT_DELAYCNT_SHIFT             (0U)
/*! DELAYCNT - Trax Delay count value (this field might get modified if trace is in progress) */
#define Trax_DELAYCNT_DELAYCNT(x)                (((uint32_t)(((uint32_t)(x)) << Trax_DELAYCNT_DELAYCNT_SHIFT)) & Trax_DELAYCNT_DELAYCNT_MASK)

#define Trax_DELAYCNT_RESERVED0_MASK             (0xFF000000U)
#define Trax_DELAYCNT_RESERVED0_SHIFT            (24U)
/*! RESERVED0 - reserved field */
#define Trax_DELAYCNT_RESERVED0(x)               (((uint32_t)(((uint32_t)(x)) << Trax_DELAYCNT_RESERVED0_SHIFT)) & Trax_DELAYCNT_RESERVED0_MASK)
/*! @} */

/*! @name MEMADDRSTART - MEMADDRSTART */
/*! @{ */

#define Trax_MEMADDRSTART_MEMADDRSTART_MASK      (0x7FFU)  /* Merged from fields with different position or width, of widths (9, 11), largest definition used */
#define Trax_MEMADDRSTART_MEMADDRSTART_SHIFT     (0U)
/*! MEMADDRSTART - Trace memory start address */
#define Trax_MEMADDRSTART_MEMADDRSTART(x)        (((uint32_t)(((uint32_t)(x)) << Trax_MEMADDRSTART_MEMADDRSTART_SHIFT)) & Trax_MEMADDRSTART_MEMADDRSTART_MASK)  /* Merged from fields with different position or width, of widths (9, 11), largest definition used */

#define Trax_MEMADDRSTART_RESERVED0_MASK         (0xFFFFFE00U)  /* Merged from fields with different position or width, of widths (21, 23), largest definition used */
#define Trax_MEMADDRSTART_RESERVED0_SHIFT        (9U)
/*! RESERVED0 - reserved field */
#define Trax_MEMADDRSTART_RESERVED0(x)           (((uint32_t)(((uint32_t)(x)) << Trax_MEMADDRSTART_RESERVED0_SHIFT)) & Trax_MEMADDRSTART_RESERVED0_MASK)  /* Merged from fields with different position or width, of widths (21, 23), largest definition used */
/*! @} */

/*! @name MEMADDREND - MEMADDREND */
/*! @{ */

#define Trax_MEMADDREND_MEMADDREND_MASK          (0x7FFU)  /* Merged from fields with different position or width, of widths (9, 11), largest definition used */
#define Trax_MEMADDREND_MEMADDREND_SHIFT         (0U)
/*! MEMADDREND - Trace memory end address */
#define Trax_MEMADDREND_MEMADDREND(x)            (((uint32_t)(((uint32_t)(x)) << Trax_MEMADDREND_MEMADDREND_SHIFT)) & Trax_MEMADDREND_MEMADDREND_MASK)  /* Merged from fields with different position or width, of widths (9, 11), largest definition used */
/*! @} */

/*! @name EXTTIMELO - EXTTIMELO */
/*! @{ */

#define Trax_EXTTIMELO_EXTTIMELO_MASK            (0xFFFFFFFFU)
#define Trax_EXTTIMELO_EXTTIMELO_SHIFT           (0U)
/*! EXTTIMELO - External time low portion - 32LSBs of time value, (value depends on value driven on DebugExtTime pins) */
#define Trax_EXTTIMELO_EXTTIMELO(x)              (((uint32_t)(((uint32_t)(x)) << Trax_EXTTIMELO_EXTTIMELO_SHIFT)) & Trax_EXTTIMELO_EXTTIMELO_MASK)
/*! @} */

/*! @name EXTTIMEHI - EXTTIMEHI */
/*! @{ */

#define Trax_EXTTIMEHI_EXTTIMEHI_MASK            (0xFFFFFFFFU)
#define Trax_EXTTIMEHI_EXTTIMEHI_SHIFT           (0U)
/*! EXTTIMEHI - External time high portion - 32 MSBs of time value, (value depends on value driven on DebugExtTime pins) */
#define Trax_EXTTIMEHI_EXTTIMEHI(x)              (((uint32_t)(((uint32_t)(x)) << Trax_EXTTIMEHI_EXTTIMEHI_SHIFT)) & Trax_EXTTIMEHI_EXTTIMEHI_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group Trax_Register_Masks */


/*!
 * @}
 */ /* end of group Trax_Peripheral_Access_Layer */


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
#elif defined(__XTENSA__)
  /* leave anonymous unions enabled */
#else
  #error Not supported compiler type
#endif

/*!
 * @}
 */ /* end of group Peripheral_access_layer */


#endif  /* Trax_H_ */

