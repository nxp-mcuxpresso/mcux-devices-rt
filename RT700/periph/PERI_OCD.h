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
**         CMSIS Peripheral Access Layer for OCD
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
 * @file OCD.h
 * @version 2.0
 * @date 2024-05-28
 * @brief CMSIS Peripheral Access Layer for OCD
 *
 * CMSIS Peripheral Access Layer for OCD
 */

#if !defined(OCD_H_)
#define OCD_H_                                   /**< Symbol preventing repeated inclusion */

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
   -- OCD Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup OCD_Peripheral_Access_Layer OCD Peripheral Access Layer
 * @{
 */

/** OCD - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[8192];
  __I  uint32_t OCDID;                             /**< OCDID, offset: 0x2000 */
       uint8_t RESERVED_1[4];
  __IO uint32_t DCRCLR;                            /**< DCRCLR, offset: 0x2008 */
  __IO uint32_t DCRSET;                            /**< DCRSET, offset: 0x200C */
  __IO uint32_t DSR;                               /**< DSR, offset: 0x2010 */
  __IO uint32_t DDR;                               /**< DDR, offset: 0x2014 */
  __IO uint32_t DDREXEC;                           /**< DDREXEC, offset: 0x2018 */
  __IO uint32_t DIR0EXEC;                          /**< DIR0EXEC, offset: 0x201C */
  __IO uint32_t DIR0;                              /**< DIR0, offset: 0x2020 */
  __IO uint32_t DIR1;                              /**< DIR1, offset: 0x2024 */
  __IO uint32_t DIR2;                              /**< DIR2, offset: 0x2028, available only on: HiFi4.OCD/HIFI4__OCD (missing on HiFi1.OCD/HIFI1__OCD) */
} OCD_Type;

/* ----------------------------------------------------------------------------
   -- OCD Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup OCD_Register_Masks OCD Register Masks
 * @{
 */

/*! @name OCDID - OCDID */
/*! @{ */

#define OCD_OCDID_CFGID_MASK                     (0xFFFFU)
#define OCD_OCDID_CFGID_SHIFT                    (0U)
/*! CFGID - Configuration ID. */
#define OCD_OCDID_CFGID(x)                       (((uint32_t)(((uint32_t)(x)) << OCD_OCDID_CFGID_SHIFT)) & OCD_OCDID_CFGID_MASK)

#define OCD_OCDID_STDCFG_MASK                    (0x10000U)
#define OCD_OCDID_STDCFG_SHIFT                   (16U)
/*! STDCFG - 1 if it is a Cadence standard configuration. */
#define OCD_OCDID_STDCFG(x)                      (((uint32_t)(((uint32_t)(x)) << OCD_OCDID_STDCFG_SHIFT)) & OCD_OCDID_STDCFG_MASK)

#define OCD_OCDID_MINVER_MASK                    (0xE0000U)
#define OCD_OCDID_MINVER_SHIFT                   (17U)
/*! MINVER - Minor version number. */
#define OCD_OCDID_MINVER(x)                      (((uint32_t)(((uint32_t)(x)) << OCD_OCDID_MINVER_SHIFT)) & OCD_OCDID_MINVER_MASK)

#define OCD_OCDID_MAJVER_MASK                    (0xF00000U)
#define OCD_OCDID_MAJVER_SHIFT                   (20U)
/*! MAJVER - Major version number. */
#define OCD_OCDID_MAJVER(x)                      (((uint32_t)(((uint32_t)(x)) << OCD_OCDID_MAJVER_SHIFT)) & OCD_OCDID_MAJVER_MASK)

#define OCD_OCDID_PRODOPT_MASK                   (0xF000000U)
#define OCD_OCDID_PRODOPT_SHIFT                  (24U)
/*! PRODOPT - Product specific options. */
#define OCD_OCDID_PRODOPT(x)                     (((uint32_t)(((uint32_t)(x)) << OCD_OCDID_PRODOPT_SHIFT)) & OCD_OCDID_PRODOPT_MASK)

#define OCD_OCDID_PRODNO_MASK                    (0xF0000000U)
#define OCD_OCDID_PRODNO_SHIFT                   (28U)
/*! PRODNO - Product number (identifies device class/type). */
#define OCD_OCDID_PRODNO(x)                      (((uint32_t)(((uint32_t)(x)) << OCD_OCDID_PRODNO_SHIFT)) & OCD_OCDID_PRODNO_MASK)
/*! @} */

/*! @name DCRCLR - DCRCLR */
/*! @{ */

#define OCD_DCRCLR_EnableOCD_MASK                (0x1U)
#define OCD_DCRCLR_EnableOCD_SHIFT               (0U)
/*! EnableOCD - Set to activate the OCD. */
#define OCD_DCRCLR_EnableOCD(x)                  (((uint32_t)(((uint32_t)(x)) << OCD_DCRCLR_EnableOCD_SHIFT)) & OCD_DCRCLR_EnableOCD_MASK)

#define OCD_DCRCLR_DebugInterrupt_MASK           (0x2U)
#define OCD_DCRCLR_DebugInterrupt_SHIFT          (1U)
/*! DebugInterrupt - Set to break the core (same as DSR. */
#define OCD_DCRCLR_DebugInterrupt(x)             (((uint32_t)(((uint32_t)(x)) << OCD_DCRCLR_DebugInterrupt_SHIFT)) & OCD_DCRCLR_DebugInterrupt_MASK)

#define OCD_DCRCLR_InterruptAllConds_MASK        (0x4U)
#define OCD_DCRCLR_InterruptAllConds_SHIFT       (2U)
/*! InterruptAllConds - Set to allow debug interrupts to supersede all conditions */
#define OCD_DCRCLR_InterruptAllConds(x)          (((uint32_t)(((uint32_t)(x)) << OCD_DCRCLR_InterruptAllConds_SHIFT)) & OCD_DCRCLR_InterruptAllConds_MASK)

#define OCD_DCRCLR_RESERVED0_MASK                (0xFFF8U)
#define OCD_DCRCLR_RESERVED0_SHIFT               (3U)
/*! RESERVED0 - reserved field */
#define OCD_DCRCLR_RESERVED0(x)                  (((uint32_t)(((uint32_t)(x)) << OCD_DCRCLR_RESERVED0_SHIFT)) & OCD_DCRCLR_RESERVED0_MASK)

#define OCD_DCRCLR_BreakInEn_MASK                (0x10000U)
#define OCD_DCRCLR_BreakInEn_SHIFT               (16U)
/*! BreakInEn - Enable BreakIn */
#define OCD_DCRCLR_BreakInEn(x)                  (((uint32_t)(((uint32_t)(x)) << OCD_DCRCLR_BreakInEn_SHIFT)) & OCD_DCRCLR_BreakInEn_MASK)

#define OCD_DCRCLR_BreakOutEn_MASK               (0x20000U)
#define OCD_DCRCLR_BreakOutEn_SHIFT              (17U)
/*! BreakOutEn - Enable BreakOut */
#define OCD_DCRCLR_BreakOutEn(x)                 (((uint32_t)(((uint32_t)(x)) << OCD_DCRCLR_BreakOutEn_SHIFT)) & OCD_DCRCLR_BreakOutEn_MASK)

#define OCD_DCRCLR_RESERVED1_MASK                (0xC0000U)
#define OCD_DCRCLR_RESERVED1_SHIFT               (18U)
/*! RESERVED1 - reserved field */
#define OCD_DCRCLR_RESERVED1(x)                  (((uint32_t)(((uint32_t)(x)) << OCD_DCRCLR_RESERVED1_SHIFT)) & OCD_DCRCLR_RESERVED1_MASK)

#define OCD_DCRCLR_DebugSwActive_MASK            (0x100000U)
#define OCD_DCRCLR_DebugSwActive_SHIFT           (20U)
/*! DebugSwActive - A software-set flag that indicates user-controlled debug mode */
#define OCD_DCRCLR_DebugSwActive(x)              (((uint32_t)(((uint32_t)(x)) << OCD_DCRCLR_DebugSwActive_SHIFT)) & OCD_DCRCLR_DebugSwActive_MASK)

#define OCD_DCRCLR_OCDDebugStallInEn_MASK        (0x200000U)
#define OCD_DCRCLR_OCDDebugStallInEn_SHIFT       (21U)
/*! OCDDebugStallInEn - Enable the OCDDebugStall input */
#define OCD_DCRCLR_OCDDebugStallInEn(x)          (((uint32_t)(((uint32_t)(x)) << OCD_DCRCLR_OCDDebugStallInEn_SHIFT)) & OCD_DCRCLR_OCDDebugStallInEn_MASK)

#define OCD_DCRCLR_DebugModeOutEn_MASK           (0x400000U)
#define OCD_DCRCLR_DebugModeOutEn_SHIFT          (22U)
/*! DebugModeOutEn - Enable the XOCDMode output */
#define OCD_DCRCLR_DebugModeOutEn(x)             (((uint32_t)(((uint32_t)(x)) << OCD_DCRCLR_DebugModeOutEn_SHIFT)) & OCD_DCRCLR_DebugModeOutEn_MASK)

#define OCD_DCRCLR_RESERVED2_MASK                (0x800000U)
#define OCD_DCRCLR_RESERVED2_SHIFT               (23U)
/*! RESERVED2 - reserved field */
#define OCD_DCRCLR_RESERVED2(x)                  (((uint32_t)(((uint32_t)(x)) << OCD_DCRCLR_RESERVED2_SHIFT)) & OCD_DCRCLR_RESERVED2_MASK)

#define OCD_DCRCLR_BreakOutITO_MASK              (0x1000000U)
#define OCD_DCRCLR_BreakOutITO_SHIFT             (24U)
/*! BreakOutITO - Enable BreakOutITO */
#define OCD_DCRCLR_BreakOutITO(x)                (((uint32_t)(((uint32_t)(x)) << OCD_DCRCLR_BreakOutITO_SHIFT)) & OCD_DCRCLR_BreakOutITO_MASK)

#define OCD_DCRCLR_BreakInAckITO_MASK            (0x2000000U)
#define OCD_DCRCLR_BreakInAckITO_SHIFT           (25U)
/*! BreakInAckITO - BreakInAck topology detection control bit */
#define OCD_DCRCLR_BreakInAckITO(x)              (((uint32_t)(((uint32_t)(x)) << OCD_DCRCLR_BreakInAckITO_SHIFT)) & OCD_DCRCLR_BreakInAckITO_MASK)

#define OCD_DCRCLR_RESERVED3_MASK                (0xFC000000U)
#define OCD_DCRCLR_RESERVED3_SHIFT               (26U)
/*! RESERVED3 - reserved field */
#define OCD_DCRCLR_RESERVED3(x)                  (((uint32_t)(((uint32_t)(x)) << OCD_DCRCLR_RESERVED3_SHIFT)) & OCD_DCRCLR_RESERVED3_MASK)
/*! @} */

/*! @name DCRSET - DCRSET */
/*! @{ */

#define OCD_DCRSET_EnableOCD_MASK                (0x1U)
#define OCD_DCRSET_EnableOCD_SHIFT               (0U)
/*! EnableOCD - Set to activate the OCD. */
#define OCD_DCRSET_EnableOCD(x)                  (((uint32_t)(((uint32_t)(x)) << OCD_DCRSET_EnableOCD_SHIFT)) & OCD_DCRSET_EnableOCD_MASK)

#define OCD_DCRSET_DebugInterrupt_MASK           (0x2U)
#define OCD_DCRSET_DebugInterrupt_SHIFT          (1U)
/*! DebugInterrupt - Set to break the core (same as DSR. */
#define OCD_DCRSET_DebugInterrupt(x)             (((uint32_t)(((uint32_t)(x)) << OCD_DCRSET_DebugInterrupt_SHIFT)) & OCD_DCRSET_DebugInterrupt_MASK)

#define OCD_DCRSET_InterruptAllConds_MASK        (0x4U)
#define OCD_DCRSET_InterruptAllConds_SHIFT       (2U)
/*! InterruptAllConds - Set to allow debug interrupts to supersede all conditions */
#define OCD_DCRSET_InterruptAllConds(x)          (((uint32_t)(((uint32_t)(x)) << OCD_DCRSET_InterruptAllConds_SHIFT)) & OCD_DCRSET_InterruptAllConds_MASK)

#define OCD_DCRSET_RESERVED0_MASK                (0xFFF8U)
#define OCD_DCRSET_RESERVED0_SHIFT               (3U)
/*! RESERVED0 - reserved field */
#define OCD_DCRSET_RESERVED0(x)                  (((uint32_t)(((uint32_t)(x)) << OCD_DCRSET_RESERVED0_SHIFT)) & OCD_DCRSET_RESERVED0_MASK)

#define OCD_DCRSET_BreakInEn_MASK                (0x10000U)
#define OCD_DCRSET_BreakInEn_SHIFT               (16U)
/*! BreakInEn - Enable BreakIn */
#define OCD_DCRSET_BreakInEn(x)                  (((uint32_t)(((uint32_t)(x)) << OCD_DCRSET_BreakInEn_SHIFT)) & OCD_DCRSET_BreakInEn_MASK)

#define OCD_DCRSET_BreakOutEn_MASK               (0x20000U)
#define OCD_DCRSET_BreakOutEn_SHIFT              (17U)
/*! BreakOutEn - Enable BreakOut */
#define OCD_DCRSET_BreakOutEn(x)                 (((uint32_t)(((uint32_t)(x)) << OCD_DCRSET_BreakOutEn_SHIFT)) & OCD_DCRSET_BreakOutEn_MASK)

#define OCD_DCRSET_RESERVED1_MASK                (0xC0000U)
#define OCD_DCRSET_RESERVED1_SHIFT               (18U)
/*! RESERVED1 - reserved field */
#define OCD_DCRSET_RESERVED1(x)                  (((uint32_t)(((uint32_t)(x)) << OCD_DCRSET_RESERVED1_SHIFT)) & OCD_DCRSET_RESERVED1_MASK)

#define OCD_DCRSET_DebugSwActive_MASK            (0x100000U)
#define OCD_DCRSET_DebugSwActive_SHIFT           (20U)
/*! DebugSwActive - A software-set flag that indicates user-controlled debug mode */
#define OCD_DCRSET_DebugSwActive(x)              (((uint32_t)(((uint32_t)(x)) << OCD_DCRSET_DebugSwActive_SHIFT)) & OCD_DCRSET_DebugSwActive_MASK)

#define OCD_DCRSET_OCDDebugStallInEn_MASK        (0x200000U)
#define OCD_DCRSET_OCDDebugStallInEn_SHIFT       (21U)
/*! OCDDebugStallInEn - Enable the OCDDebugStall input */
#define OCD_DCRSET_OCDDebugStallInEn(x)          (((uint32_t)(((uint32_t)(x)) << OCD_DCRSET_OCDDebugStallInEn_SHIFT)) & OCD_DCRSET_OCDDebugStallInEn_MASK)

#define OCD_DCRSET_DebugModeOutEn_MASK           (0x400000U)
#define OCD_DCRSET_DebugModeOutEn_SHIFT          (22U)
/*! DebugModeOutEn - Enable the XOCDMode output */
#define OCD_DCRSET_DebugModeOutEn(x)             (((uint32_t)(((uint32_t)(x)) << OCD_DCRSET_DebugModeOutEn_SHIFT)) & OCD_DCRSET_DebugModeOutEn_MASK)

#define OCD_DCRSET_RESERVED2_MASK                (0x800000U)
#define OCD_DCRSET_RESERVED2_SHIFT               (23U)
/*! RESERVED2 - reserved field */
#define OCD_DCRSET_RESERVED2(x)                  (((uint32_t)(((uint32_t)(x)) << OCD_DCRSET_RESERVED2_SHIFT)) & OCD_DCRSET_RESERVED2_MASK)

#define OCD_DCRSET_BreakOutITO_MASK              (0x1000000U)
#define OCD_DCRSET_BreakOutITO_SHIFT             (24U)
/*! BreakOutITO - Enable BreakOutITO */
#define OCD_DCRSET_BreakOutITO(x)                (((uint32_t)(((uint32_t)(x)) << OCD_DCRSET_BreakOutITO_SHIFT)) & OCD_DCRSET_BreakOutITO_MASK)

#define OCD_DCRSET_BreakInAckITO_MASK            (0x2000000U)
#define OCD_DCRSET_BreakInAckITO_SHIFT           (25U)
/*! BreakInAckITO - BreakInAck topology detection control bit */
#define OCD_DCRSET_BreakInAckITO(x)              (((uint32_t)(((uint32_t)(x)) << OCD_DCRSET_BreakInAckITO_SHIFT)) & OCD_DCRSET_BreakInAckITO_MASK)

#define OCD_DCRSET_RESERVED3_MASK                (0xFC000000U)
#define OCD_DCRSET_RESERVED3_SHIFT               (26U)
/*! RESERVED3 - reserved field */
#define OCD_DCRSET_RESERVED3(x)                  (((uint32_t)(((uint32_t)(x)) << OCD_DCRSET_RESERVED3_SHIFT)) & OCD_DCRSET_RESERVED3_MASK)
/*! @} */

/*! @name DSR - DSR */
/*! @{ */

#define OCD_DSR_ExecDone_MASK                    (0x1U)
#define OCD_DSR_ExecDone_SHIFT                   (0U)
/*! ExecDone - Instruction in DIR completed execution (w/ or w/o exception) */
#define OCD_DSR_ExecDone(x)                      (((uint32_t)(((uint32_t)(x)) << OCD_DSR_ExecDone_SHIFT)) & OCD_DSR_ExecDone_MASK)

#define OCD_DSR_ExecException_MASK               (0x2U)
#define OCD_DSR_ExecException_SHIFT              (1U)
/*! ExecException - A previous instruction in DIR completed with an exception */
#define OCD_DSR_ExecException(x)                 (((uint32_t)(((uint32_t)(x)) << OCD_DSR_ExecException_SHIFT)) & OCD_DSR_ExecException_MASK)

#define OCD_DSR_ExecBusy_MASK                    (0x4U)
#define OCD_DSR_ExecBusy_SHIFT                   (2U)
/*! ExecBusy - Core is executing DIR (meaningful while Stopped is 1) */
#define OCD_DSR_ExecBusy(x)                      (((uint32_t)(((uint32_t)(x)) << OCD_DSR_ExecBusy_SHIFT)) & OCD_DSR_ExecBusy_MASK)

#define OCD_DSR_ExecOverrun_MASK                 (0x8U)
#define OCD_DSR_ExecOverrun_SHIFT                (3U)
/*! ExecOverrun - DIR execution attempted while previous execute still busy */
#define OCD_DSR_ExecOverrun(x)                   (((uint32_t)(((uint32_t)(x)) << OCD_DSR_ExecOverrun_SHIFT)) & OCD_DSR_ExecOverrun_MASK)

#define OCD_DSR_Stopped_MASK                     (0x10U)
#define OCD_DSR_Stopped_SHIFT                    (4U)
/*! Stopped - Core is under OCD debug control, in Stopped or executing DIR */
#define OCD_DSR_Stopped(x)                       (((uint32_t)(((uint32_t)(x)) << OCD_DSR_Stopped_SHIFT)) & OCD_DSR_Stopped_MASK)

#define OCD_DSR_StopCause_MASK                   (0x1E0U)
#define OCD_DSR_StopCause_SHIFT                  (5U)
/*! StopCause - Reason for stopping. */
#define OCD_DSR_StopCause(x)                     (((uint32_t)(((uint32_t)(x)) << OCD_DSR_StopCause_SHIFT)) & OCD_DSR_StopCause_MASK)

#define OCD_DSR_RESERVED0_MASK                   (0x200U)
#define OCD_DSR_RESERVED0_SHIFT                  (9U)
/*! RESERVED0 - reserved field */
#define OCD_DSR_RESERVED0(x)                     (((uint32_t)(((uint32_t)(x)) << OCD_DSR_RESERVED0_SHIFT)) & OCD_DSR_RESERVED0_MASK)

#define OCD_DSR_CoreWroteDDR_MASK                (0x400U)
#define OCD_DSR_CoreWroteDDR_SHIFT               (10U)
/*! CoreWroteDDR - Core wrote to DDR, i. */
#define OCD_DSR_CoreWroteDDR(x)                  (((uint32_t)(((uint32_t)(x)) << OCD_DSR_CoreWroteDDR_SHIFT)) & OCD_DSR_CoreWroteDDR_MASK)

#define OCD_DSR_CoreReadDDR_MASK                 (0x800U)
#define OCD_DSR_CoreReadDDR_SHIFT                (11U)
/*! CoreReadDDR - Core read from DDR, i. */
#define OCD_DSR_CoreReadDDR(x)                   (((uint32_t)(((uint32_t)(x)) << OCD_DSR_CoreReadDDR_SHIFT)) & OCD_DSR_CoreReadDDR_MASK)

#define OCD_DSR_RESERVED1_MASK                   (0x3000U)
#define OCD_DSR_RESERVED1_SHIFT                  (12U)
/*! RESERVED1 - reserved field */
#define OCD_DSR_RESERVED1(x)                     (((uint32_t)(((uint32_t)(x)) << OCD_DSR_RESERVED1_SHIFT)) & OCD_DSR_RESERVED1_MASK)

#define OCD_DSR_HostWroteDDR_MASK                (0x4000U)
#define OCD_DSR_HostWroteDDR_SHIFT               (14U)
/*! HostWroteDDR - Host wrote to DDR (via JTAG or APB) (includes DDREXEC) */
#define OCD_DSR_HostWroteDDR(x)                  (((uint32_t)(((uint32_t)(x)) << OCD_DSR_HostWroteDDR_SHIFT)) & OCD_DSR_HostWroteDDR_MASK)

#define OCD_DSR_HostReadDDR_MASK                 (0x8000U)
#define OCD_DSR_HostReadDDR_SHIFT                (15U)
/*! HostReadDDR - Host read from DDR (via JTAG or APB) (includes DDREXEC) */
#define OCD_DSR_HostReadDDR(x)                   (((uint32_t)(((uint32_t)(x)) << OCD_DSR_HostReadDDR_SHIFT)) & OCD_DSR_HostReadDDR_MASK)

#define OCD_DSR_DebugPendBreak_MASK              (0x10000U)
#define OCD_DSR_DebugPendBreak_SHIFT             (16U)
/*! DebugPendBreak - Debug interrupt pending due to BreakIn signal */
#define OCD_DSR_DebugPendBreak(x)                (((uint32_t)(((uint32_t)(x)) << OCD_DSR_DebugPendBreak_SHIFT)) & OCD_DSR_DebugPendBreak_MASK)

#define OCD_DSR_DebugPendHost_MASK               (0x20000U)
#define OCD_DSR_DebugPendHost_SHIFT              (17U)
/*! DebugPendHost - Debug interrupt pending due to DCR. */
#define OCD_DSR_DebugPendHost(x)                 (((uint32_t)(((uint32_t)(x)) << OCD_DSR_DebugPendHost_SHIFT)) & OCD_DSR_DebugPendHost_MASK)

#define OCD_DSR_DebugPendTrax_MASK               (0x40000U)
#define OCD_DSR_DebugPendTrax_SHIFT              (18U)
/*! DebugPendTrax - Debug interrupt pending due to TRAX PTO */
#define OCD_DSR_DebugPendTrax(x)                 (((uint32_t)(((uint32_t)(x)) << OCD_DSR_DebugPendTrax_SHIFT)) & OCD_DSR_DebugPendTrax_MASK)

#define OCD_DSR_RESERVED2_MASK                   (0x80000U)
#define OCD_DSR_RESERVED2_SHIFT                  (19U)
/*! RESERVED2 - reserved field */
#define OCD_DSR_RESERVED2(x)                     (((uint32_t)(((uint32_t)(x)) << OCD_DSR_RESERVED2_SHIFT)) & OCD_DSR_RESERVED2_MASK)

#define OCD_DSR_DebugIntBreak_MASK               (0x100000U)
#define OCD_DSR_DebugIntBreak_SHIFT              (20U)
/*! DebugIntBreak - Debug interrupt taken due to BreakIn signal */
#define OCD_DSR_DebugIntBreak(x)                 (((uint32_t)(((uint32_t)(x)) << OCD_DSR_DebugIntBreak_SHIFT)) & OCD_DSR_DebugIntBreak_MASK)

#define OCD_DSR_DebugIntHost_MASK                (0x200000U)
#define OCD_DSR_DebugIntHost_SHIFT               (21U)
/*! DebugIntHost - Debug interrupt taken due to DCR. */
#define OCD_DSR_DebugIntHost(x)                  (((uint32_t)(((uint32_t)(x)) << OCD_DSR_DebugIntHost_SHIFT)) & OCD_DSR_DebugIntHost_MASK)

#define OCD_DSR_DebugIntTrax_MASK                (0x400000U)
#define OCD_DSR_DebugIntTrax_SHIFT               (22U)
/*! DebugIntTrax - Debug interrupt taken due to TRAX PTO */
#define OCD_DSR_DebugIntTrax(x)                  (((uint32_t)(((uint32_t)(x)) << OCD_DSR_DebugIntTrax_SHIFT)) & OCD_DSR_DebugIntTrax_MASK)

#define OCD_DSR_RunStallToggle_MASK              (0x800000U)
#define OCD_DSR_RunStallToggle_SHIFT             (23U)
/*! RunStallToggle - Set when RunStall input to Xtensa changes polarity. */
#define OCD_DSR_RunStallToggle(x)                (((uint32_t)(((uint32_t)(x)) << OCD_DSR_RunStallToggle_SHIFT)) & OCD_DSR_RunStallToggle_MASK)

#define OCD_DSR_OCDDebugStallInputValue_MASK     (0x1000000U)
#define OCD_DSR_OCDDebugStallInputValue_SHIFT    (24U)
/*! OCDDebugStallInputValue - Provides the real-time value of the RunStall input to Xtensa (value depends on Runstall signal state) */
#define OCD_DSR_OCDDebugStallInputValue(x)       (((uint32_t)(((uint32_t)(x)) << OCD_DSR_OCDDebugStallInputValue_SHIFT)) & OCD_DSR_OCDDebugStallInputValue_MASK)

#define OCD_DSR_BreakOutAckITI_MASK              (0x2000000U)
#define OCD_DSR_BreakOutAckITI_SHIFT             (25U)
/*! BreakOutAckITI - Break-out topology detection status bit (value depends on BreakOutAck signal state) */
#define OCD_DSR_BreakOutAckITI(x)                (((uint32_t)(((uint32_t)(x)) << OCD_DSR_BreakOutAckITI_SHIFT)) & OCD_DSR_BreakOutAckITI_MASK)

#define OCD_DSR_BreakInITI_MASK                  (0x4000000U)
#define OCD_DSR_BreakInITI_SHIFT                 (26U)
/*! BreakInITI - Break-in topology detection status bit (value depends on BreakIn signal state) */
#define OCD_DSR_BreakInITI(x)                    (((uint32_t)(((uint32_t)(x)) << OCD_DSR_BreakInITI_SHIFT)) & OCD_DSR_BreakInITI_MASK)

#define OCD_DSR_RESERVED3_MASK                   (0x78000000U)
#define OCD_DSR_RESERVED3_SHIFT                  (27U)
/*! RESERVED3 - reserved field */
#define OCD_DSR_RESERVED3(x)                     (((uint32_t)(((uint32_t)(x)) << OCD_DSR_RESERVED3_SHIFT)) & OCD_DSR_RESERVED3_MASK)

#define OCD_DSR_DebugOn_MASK                     (0x80000000U)
#define OCD_DSR_DebugOn_SHIFT                    (31U)
/*! DebugOn - Always 1. */
#define OCD_DSR_DebugOn(x)                       (((uint32_t)(((uint32_t)(x)) << OCD_DSR_DebugOn_SHIFT)) & OCD_DSR_DebugOn_MASK)
/*! @} */

/*! @name DDR - DDR */
/*! @{ */

#define OCD_DDR_DDR_MASK                         (0xFFFFFFFFU)
#define OCD_DDR_DDR_SHIFT                        (0U)
/*! DDR - Debug data register, for host to/from target transfers (update to DDREXEC also updates this register) */
#define OCD_DDR_DDR(x)                           (((uint32_t)(((uint32_t)(x)) << OCD_DDR_DDR_SHIFT)) & OCD_DDR_DDR_MASK)
/*! @} */

/*! @name DDREXEC - DDREXEC */
/*! @{ */

#define OCD_DDREXEC_DDREXEC_MASK                 (0xFFFFFFFFU)
#define OCD_DDREXEC_DDREXEC_SHIFT                (0U)
/*! DDREXEC - Alias to DDR, executes DIR when accessed (update to DDR also updates this register). */
#define OCD_DDREXEC_DDREXEC(x)                   (((uint32_t)(((uint32_t)(x)) << OCD_DDREXEC_DDREXEC_SHIFT)) & OCD_DDREXEC_DDREXEC_MASK)
/*! @} */

/*! @name DIR0EXEC - DIR0EXEC */
/*! @{ */

#define OCD_DIR0EXEC_DIR0EXEC_MASK               (0xFFFFFFFFU)
#define OCD_DIR0EXEC_DIR0EXEC_SHIFT              (0U)
/*! DIR0EXEC - Alias to DIR0, executes the instruction when written (update to DIR0 also updates this register). */
#define OCD_DIR0EXEC_DIR0EXEC(x)                 (((uint32_t)(((uint32_t)(x)) << OCD_DIR0EXEC_DIR0EXEC_SHIFT)) & OCD_DIR0EXEC_DIR0EXEC_MASK)
/*! @} */

/*! @name DIR0 - DIR0 */
/*! @{ */

#define OCD_DIR0_DIR0_MASK                       (0xFFFFFFFFU)
#define OCD_DIR0_DIR0_SHIFT                      (0U)
/*! DIR0 - Debug instruction register, first 32 bits (update to DIR0EXEC also updates this register). */
#define OCD_DIR0_DIR0(x)                         (((uint32_t)(((uint32_t)(x)) << OCD_DIR0_DIR0_SHIFT)) & OCD_DIR0_DIR0_MASK)
/*! @} */

/*! @name DIR1 - DIR1 */
/*! @{ */

#define OCD_DIR1_DIR1_MASK                       (0xFFFFFFFFU)
#define OCD_DIR1_DIR1_SHIFT                      (0U)
/*! DIR1 - Debug instruction register, remaining bits. */
#define OCD_DIR1_DIR1(x)                         (((uint32_t)(((uint32_t)(x)) << OCD_DIR1_DIR1_SHIFT)) & OCD_DIR1_DIR1_MASK)
/*! @} */

/*! @name DIR2 - DIR2 */
/*! @{ */

#define OCD_DIR2_DIR2_MASK                       (0xFFFFFFFFU)
#define OCD_DIR2_DIR2_SHIFT                      (0U)
/*! DIR2 - Debug instruction register, remaining bits. */
#define OCD_DIR2_DIR2(x)                         (((uint32_t)(((uint32_t)(x)) << OCD_DIR2_DIR2_SHIFT)) & OCD_DIR2_DIR2_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group OCD_Register_Masks */


/*!
 * @}
 */ /* end of group OCD_Peripheral_Access_Layer */


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


#endif  /* OCD_H_ */

