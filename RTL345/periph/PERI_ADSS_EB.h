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
**         CMSIS Peripheral Access Layer for ADSS_EB
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
 * @file PERI_ADSS_EB.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_EB
 *
 * CMSIS Peripheral Access Layer for ADSS_EB
 */

#if !defined(PERI_ADSS_EB_H_)
#define PERI_ADSS_EB_H_                          /**< Symbol preventing repeated inclusion */

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
   -- ADSS_EB Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_EB_Peripheral_Access_Layer ADSS_EB Peripheral Access Layer
 * @{
 */

/** ADSS_EB - Size of Registers Arrays */
#define ADSS_EB_NSSEVENT_SEL_COUNT                8u
#define ADSS_EB_CSSEVENT_SEL_COUNT                8u

/** ADSS_EB - Register Layout Typedef */
typedef struct {
  __IO uint32_t EVENT7_SEL;                        /**< Selects driver of event line 7, offset: 0x0 */
  __IO uint32_t EVENT8_SEL;                        /**< Selects driver of event line 8, offset: 0x4 */
  __IO uint32_t EVENT12_SEL;                       /**< Selects driver of event line 12, offset: 0x8 */
  __IO uint32_t EVENT13_SEL;                       /**< Selects driver of event line 13, offset: 0xC */
  __IO uint32_t EVENT14_SEL;                       /**< Selects driver of event line 14, offset: 0x10 */
  __IO uint32_t EVENT18_SEL;                       /**< Selects driver of event line 18, offset: 0x14 */
  __IO uint32_t EVENT19_SEL;                       /**< Selects driver of event line 19, offset: 0x18 */
  __IO uint32_t EVENT30_SEL;                       /**< Selects driver of event line 30, offset: 0x1C */
  __IO uint32_t EVENT31_SEL;                       /**< Selects driver of event line 31, offset: 0x20 */
  __IO uint32_t EVENT36_SEL;                       /**< Selects driver of event line 36, offset: 0x24 */
  __IO uint32_t EVENT37_SEL;                       /**< Selects driver of event line 37, offset: 0x28 */
  __IO uint32_t EVENT38_SEL;                       /**< Selects driver of event line 38, offset: 0x2C */
  __IO uint32_t EVENT39_SEL;                       /**< Selects driver of event line 39, offset: 0x30 */
  __IO uint32_t EVENT40_SEL;                       /**< Selects driver of event line 40, offset: 0x34 */
  __IO uint32_t EVENT41_SEL;                       /**< Selects driver of event line 41, offset: 0x38 */
  __IO uint32_t EVENT42_SEL;                       /**< Selects driver of event line 42, offset: 0x3C */
  __IO uint32_t EVENT43_SEL;                       /**< Selects driver of event line 43, offset: 0x40 */
  __IO uint32_t EVENT48_SEL;                       /**< Selects driver of event line 48, offset: 0x44 */
  __IO uint32_t EVENT49_SEL;                       /**< Selects driver of event line 49, offset: 0x48 */
  __IO uint32_t EVENT50_SEL;                       /**< Selects driver of event line 50, offset: 0x4C */
  __IO uint32_t EVENT51_SEL;                       /**< Selects driver of event line 51, offset: 0x50 */
  __IO uint32_t EVENT52_SEL;                       /**< Selects driver of event line 52, offset: 0x54 */
  __IO uint32_t EVENT53_SEL;                       /**< Selects driver of event line 53, offset: 0x58 */
  __IO uint32_t EVENT54_SEL;                       /**< Selects driver of event line 54, offset: 0x5C */
  __IO uint32_t EVENT55_SEL;                       /**< Selects driver of event line 55, offset: 0x60 */
  __IO uint32_t EVENT56_SEL;                       /**< Selects driver of event line 56, offset: 0x64 */
  __IO uint32_t EVENT57_SEL;                       /**< Selects driver of event line 57, offset: 0x68 */
  __IO uint32_t EVENT58_SEL;                       /**< Selects driver of event line 58, offset: 0x6C */
  __IO uint32_t EVENT59_SEL;                       /**< Selects driver of event line 59, offset: 0x70 */
  __IO uint32_t EVENT60_SEL;                       /**< Selects driver of event line 60, offset: 0x74 */
  __IO uint32_t EVENT61_SEL;                       /**< Selects driver of event line 61, offset: 0x78 */
  __IO uint32_t EVENT62_SEL;                       /**< Selects driver of event line 62, offset: 0x7C */
  __IO uint32_t EVENT63_SEL;                       /**< Selects driver of event line 63, offset: 0x80 */
  __IO uint32_t EVENT64_SEL;                       /**< Selects driver of event line 64, offset: 0x84 */
  __IO uint32_t EVENT65_SEL;                       /**< Selects driver of event line 65, offset: 0x88 */
  __IO uint32_t EVENT66_SEL;                       /**< Selects driver of event line 66, offset: 0x8C */
  __IO uint32_t EVENT67_SEL;                       /**< Selects driver of event line 67, offset: 0x90 */
  __IO uint32_t EVENT68_SEL;                       /**< Selects driver of event line 68, offset: 0x94 */
  __IO uint32_t EVENT69_SEL;                       /**< Selects driver of event line 69, offset: 0x98 */
  __IO uint32_t EVENT70_SEL;                       /**< Selects driver of event line 70, offset: 0x9C */
  __IO uint32_t EVENT71_SEL;                       /**< Selects driver of event line 71, offset: 0xA0 */
       uint8_t RESERVED_0[28];
  __IO uint32_t NSSEVENT_SEL[ADSS_EB_NSSEVENT_SEL_COUNT]; /**< Selects the DSS event routed to the NSS event, array offset: 0xC0, array step: 0x4 */
  __IO uint32_t CSSEVENT_SEL[ADSS_EB_CSSEVENT_SEL_COUNT]; /**< Selects the DSS event routed to the CSS event, array offset: 0xE0, array step: 0x4 */
  __IO uint32_t MPO_RATIO;                         /**< mpo_ratio to PMRC, offset: 0x100 */
} ADSS_EB_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_EB Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_EB_Register_Masks ADSS_EB Register Masks
 * @{
 */

/*! @name EVENT7_SEL - Selects driver of event line 7 */
/*! @{ */

#define ADSS_EB_EVENT7_SEL_SEL_MASK              (0x1U)
#define ADSS_EB_EVENT7_SEL_SEL_SHIFT             (0U)
/*! sel - Selects driver of event line 7
 *  0b0..Programmable strobe from syncsource bit 0
 *  0b1..UART released 0
 */
#define ADSS_EB_EVENT7_SEL_SEL(x)                (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT7_SEL_SEL_SHIFT)) & ADSS_EB_EVENT7_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT8_SEL - Selects driver of event line 8 */
/*! @{ */

#define ADSS_EB_EVENT8_SEL_SEL_MASK              (0x1U)
#define ADSS_EB_EVENT8_SEL_SEL_SHIFT             (0U)
/*! sel - Selects driver of event line 8
 *  0b0..Programmable strobe from syncsource bit 1
 *  0b1..UART released 1
 */
#define ADSS_EB_EVENT8_SEL_SEL(x)                (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT8_SEL_SEL_SHIFT)) & ADSS_EB_EVENT8_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT12_SEL - Selects driver of event line 12 */
/*! @{ */

#define ADSS_EB_EVENT12_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT12_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 12
 *  0b0..Programmable strobe from syncsource bit 5
 *  0b1..Event from general purpose timer bit 0
 */
#define ADSS_EB_EVENT12_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT12_SEL_SEL_SHIFT)) & ADSS_EB_EVENT12_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT13_SEL - Selects driver of event line 13 */
/*! @{ */

#define ADSS_EB_EVENT13_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT13_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 13
 *  0b0..Programmable strobe from syncsource bit 6
 *  0b1..Event from general purpose timer 1
 */
#define ADSS_EB_EVENT13_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT13_SEL_SEL_SHIFT)) & ADSS_EB_EVENT13_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT14_SEL - Selects driver of event line 14 */
/*! @{ */

#define ADSS_EB_EVENT14_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT14_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 14
 *  0b0..Programmable strobe from syncsource bit 7
 *  0b1..Event from general purpose timer 2
 */
#define ADSS_EB_EVENT14_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT14_SEL_SEL_SHIFT)) & ADSS_EB_EVENT14_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT18_SEL - Selects driver of event line 18 */
/*! @{ */

#define ADSS_EB_EVENT18_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT18_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 18
 *  0b0..Event from general purpose timer 6
 *  0b1..SDMA channel ready channel 0
 */
#define ADSS_EB_EVENT18_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT18_SEL_SEL_SHIFT)) & ADSS_EB_EVENT18_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT19_SEL - Selects driver of event line 19 */
/*! @{ */

#define ADSS_EB_EVENT19_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT19_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 19
 *  0b0..Event from general purpose timer 7
 *  0b1..SDMA channel ready channel 1
 */
#define ADSS_EB_EVENT19_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT19_SEL_SEL_SHIFT)) & ADSS_EB_EVENT19_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT30_SEL - Selects driver of event line 30 */
/*! @{ */

#define ADSS_EB_EVENT30_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT30_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 30
 *  0b0..Event from dataport timer 6
 *  0b1..Trace buffer has been filled with data
 */
#define ADSS_EB_EVENT30_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT30_SEL_SEL_SHIFT)) & ADSS_EB_EVENT30_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT31_SEL - Selects driver of event line 31 */
/*! @{ */

#define ADSS_EB_EVENT31_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT31_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 31
 *  0b0..Event from dataport timer 6
 *  0b1..HSI shadow register can be updated
 */
#define ADSS_EB_EVENT31_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT31_SEL_SEL_SHIFT)) & ADSS_EB_EVENT31_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT36_SEL - Selects driver of event line 36 */
/*! @{ */

#define ADSS_EB_EVENT36_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT36_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 36
 *  0b0..Dataport 2 frame
 *  0b1..HSI ready channel 0
 */
#define ADSS_EB_EVENT36_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT36_SEL_SEL_SHIFT)) & ADSS_EB_EVENT36_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT37_SEL - Selects driver of event line 37 */
/*! @{ */

#define ADSS_EB_EVENT37_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT37_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 37
 *  0b0..Dataport 2 event
 *  0b1..HSI ready channel 1
 */
#define ADSS_EB_EVENT37_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT37_SEL_SEL_SHIFT)) & ADSS_EB_EVENT37_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT38_SEL - Selects driver of event line 38 */
/*! @{ */

#define ADSS_EB_EVENT38_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT38_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 38
 *  0b0..Dataport 3 frame
 *  0b1..HSI ready channel 2
 */
#define ADSS_EB_EVENT38_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT38_SEL_SEL_SHIFT)) & ADSS_EB_EVENT38_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT39_SEL - Selects driver of event line 39 */
/*! @{ */

#define ADSS_EB_EVENT39_SEL_SEL_MASK             (0x3U)
#define ADSS_EB_EVENT39_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 39
 *  0b00..Dataport 3 event
 *  0b01..HSI ready channel 3
 *  0b10..ANC event 0
 */
#define ADSS_EB_EVENT39_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT39_SEL_SEL_SHIFT)) & ADSS_EB_EVENT39_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT40_SEL - Selects driver of event line 40 */
/*! @{ */

#define ADSS_EB_EVENT40_SEL_SEL_MASK             (0x3U)
#define ADSS_EB_EVENT40_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 40
 *  0b00..HSI ready channel 4
 *  0b01..Event 0 from global HSI port
 *  0b10..ANC event 1
 *  0b11..Speaker driver short circuit event
 */
#define ADSS_EB_EVENT40_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT40_SEL_SEL_SHIFT)) & ADSS_EB_EVENT40_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT41_SEL - Selects driver of event line 41 */
/*! @{ */

#define ADSS_EB_EVENT41_SEL_SEL_MASK             (0x3U)
#define ADSS_EB_EVENT41_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 41
 *  0b00..HSI ready channel 5
 *  0b01..Event 1 from global HSI port
 *  0b10..ANC event 2
 */
#define ADSS_EB_EVENT41_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT41_SEL_SEL_SHIFT)) & ADSS_EB_EVENT41_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT42_SEL - Selects driver of event line 42 */
/*! @{ */

#define ADSS_EB_EVENT42_SEL_SEL_MASK             (0x3U)
#define ADSS_EB_EVENT42_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 42
 *  0b00..HSI ready channel 6
 *  0b01..Event 2 from global HSI port
 *  0b10..ANC event 3
 */
#define ADSS_EB_EVENT42_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT42_SEL_SEL_SHIFT)) & ADSS_EB_EVENT42_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT43_SEL - Selects driver of event line 43 */
/*! @{ */

#define ADSS_EB_EVENT43_SEL_SEL_MASK             (0x3U)
#define ADSS_EB_EVENT43_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 43
 *  0b00..HSI ready channel 7
 *  0b01..Event 3 from global HSI port
 *  0b10..ANC event 4
 */
#define ADSS_EB_EVENT43_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT43_SEL_SEL_SHIFT)) & ADSS_EB_EVENT43_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT48_SEL - Selects driver of event line 48 */
/*! @{ */

#define ADSS_EB_EVENT48_SEL_SEL_MASK             (0x7U)
#define ADSS_EB_EVENT48_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 48
 *  0b000..Event 0 from DSP3 instance 0 event generator
 *  0b001..Event 0 from DSP3 instance 0 event generator
 *  0b010..Event 0 from Cadence HiFI5s event generator
 *  0b011..Event 0 from CM55 of CSS
 *  0b100..Event 0 from CM55 of NSS
 */
#define ADSS_EB_EVENT48_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT48_SEL_SEL_SHIFT)) & ADSS_EB_EVENT48_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT49_SEL - Selects driver of event line 49 */
/*! @{ */

#define ADSS_EB_EVENT49_SEL_SEL_MASK             (0x7U)
#define ADSS_EB_EVENT49_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 49
 *  0b000..Event 1 from DSP3 instance 0 event generator
 *  0b001..Event 1 from DSP3 instance 1 event generator
 *  0b010..Event 1 from Cadence HiFI5s event generator
 *  0b011..Event 1 from CM55 of CSS
 *  0b100..Event 1 from CM55 of NSS
 */
#define ADSS_EB_EVENT49_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT49_SEL_SEL_SHIFT)) & ADSS_EB_EVENT49_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT50_SEL - Selects driver of event line 50 */
/*! @{ */

#define ADSS_EB_EVENT50_SEL_SEL_MASK             (0x7U)
#define ADSS_EB_EVENT50_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 50
 *  0b000..Event 2 from DSP3 instance 0 event generator
 *  0b001..Event 2 from DSP3 instance 1 event generator
 *  0b010..Event 2 from Cadence HiFI5s event generator
 *  0b011..Event 2 from CM55 of CSS
 *  0b100..Event 2 from CM55 of NSS
 */
#define ADSS_EB_EVENT50_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT50_SEL_SEL_SHIFT)) & ADSS_EB_EVENT50_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT51_SEL - Selects driver of event line 51 */
/*! @{ */

#define ADSS_EB_EVENT51_SEL_SEL_MASK             (0x7U)
#define ADSS_EB_EVENT51_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 51
 *  0b000..Event 3 from DSP3 instance 0 event generator
 *  0b001..Event 3 from DSP3 instance 1 event generator
 *  0b010..Event 3 from Cadence HiFI5s event generator
 *  0b011..Event 3 from CM55 of CSS
 *  0b100..Event 3 from CM55 of NSS
 */
#define ADSS_EB_EVENT51_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT51_SEL_SEL_SHIFT)) & ADSS_EB_EVENT51_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT52_SEL - Selects driver of event line 52 */
/*! @{ */

#define ADSS_EB_EVENT52_SEL_SEL_MASK             (0x7U)
#define ADSS_EB_EVENT52_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 52
 *  0b000..Event 4 from DSP3 instance 0 event generator
 *  0b001..Event 4 from DSP3 instance 1 event generator
 *  0b010..Event 4 from Cadence HiFI5s event generator
 *  0b011..Event 4 from CM55 of CSS
 *  0b100..Event 4 from CM55 of NSS
 */
#define ADSS_EB_EVENT52_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT52_SEL_SEL_SHIFT)) & ADSS_EB_EVENT52_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT53_SEL - Selects driver of event line 53 */
/*! @{ */

#define ADSS_EB_EVENT53_SEL_SEL_MASK             (0x7U)
#define ADSS_EB_EVENT53_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 53
 *  0b000..Event 5 from DSP3 instance 0 event generator
 *  0b001..Event 5 from DSP3 instance 1 event generator
 *  0b010..Event 5 from Cadence HiFI5s event generator
 *  0b011..Event 5 from CM55 of CSS
 *  0b100..Event 5 from CM55 of NSS
 */
#define ADSS_EB_EVENT53_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT53_SEL_SEL_SHIFT)) & ADSS_EB_EVENT53_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT54_SEL - Selects driver of event line 54 */
/*! @{ */

#define ADSS_EB_EVENT54_SEL_SEL_MASK             (0x7U)
#define ADSS_EB_EVENT54_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 54
 *  0b000..Event 6 from DSP3 instance 0 event generator
 *  0b001..Event 6 from DSP3 instance 1 event generator
 *  0b010..Event 6 from Cadence HiFI5s event generator
 *  0b011..Event 6 from CM55 of CSS
 *  0b100..Event 6 from CM55 of NSS
 */
#define ADSS_EB_EVENT54_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT54_SEL_SEL_SHIFT)) & ADSS_EB_EVENT54_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT55_SEL - Selects driver of event line 55 */
/*! @{ */

#define ADSS_EB_EVENT55_SEL_SEL_MASK             (0x7U)
#define ADSS_EB_EVENT55_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 55
 *  0b000..Event 7 from DSP3 instance 0 event generator
 *  0b001..Event 7 from DSP3 instance 1 event generator
 *  0b010..Event 7 from Cadence HiFI5s event generator
 *  0b011..Event 7 from CM55 of CSS
 *  0b100..Event 7 from CM55 of NSS
 */
#define ADSS_EB_EVENT55_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT55_SEL_SEL_SHIFT)) & ADSS_EB_EVENT55_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT56_SEL - Selects driver of event line 56 */
/*! @{ */

#define ADSS_EB_EVENT56_SEL_SEL_MASK             (0x7U)
#define ADSS_EB_EVENT56_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 56
 *  0b000..Event 8 from DSP3 instance 0 event generator
 *  0b001..Event 8 from DSP3 instance 1 event generator
 *  0b010..Event 8 from Cadence HiFI5s event generator
 *  0b011..Event 0 from peripherals from CSS
 *  0b100..Event 0 from XSP
 *  0b101..eDMA channel 0 done
 */
#define ADSS_EB_EVENT56_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT56_SEL_SEL_SHIFT)) & ADSS_EB_EVENT56_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT57_SEL - Selects driver of event line 57 */
/*! @{ */

#define ADSS_EB_EVENT57_SEL_SEL_MASK             (0x7U)
#define ADSS_EB_EVENT57_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 57
 *  0b000..Event 9 from DSP3 instance 0 event generator
 *  0b001..Event 9 from DSP3 instance 1 event generator
 *  0b010..Event 9 from Cadence HiFI5s event generator
 *  0b011..Event 1 from peripherals from CSS
 *  0b100..Event 1 from XSP
 *  0b101..eDMA channel 1 done
 */
#define ADSS_EB_EVENT57_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT57_SEL_SEL_SHIFT)) & ADSS_EB_EVENT57_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT58_SEL - Selects driver of event line 58 */
/*! @{ */

#define ADSS_EB_EVENT58_SEL_SEL_MASK             (0x7U)
#define ADSS_EB_EVENT58_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 58
 *  0b000..Event 10 from DSP3 instance 0 event generator
 *  0b001..Event 10 from DSP3 instance 1 event generator
 *  0b010..Event 10 from Cadence HiFI5s event generator
 *  0b011..Event 2 from peripherals from CSS
 *  0b100..Event 2 from XSP
 *  0b101..eDMA channel 2 done
 */
#define ADSS_EB_EVENT58_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT58_SEL_SEL_SHIFT)) & ADSS_EB_EVENT58_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT59_SEL - Selects driver of event line 59 */
/*! @{ */

#define ADSS_EB_EVENT59_SEL_SEL_MASK             (0x7U)
#define ADSS_EB_EVENT59_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 59
 *  0b000..Event 11 from DSP3 instance 0 event generator
 *  0b001..Event 11 from DSP3 instance 1 event generator
 *  0b010..Event 11 from Cadence HiFI5s event generator
 *  0b011..Event 3 from peripherals from CSS
 *  0b100..Event 3 from XSP
 *  0b101..eDMA channel 3 done
 */
#define ADSS_EB_EVENT59_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT59_SEL_SEL_SHIFT)) & ADSS_EB_EVENT59_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT60_SEL - Selects driver of event line 60 */
/*! @{ */

#define ADSS_EB_EVENT60_SEL_SEL_MASK             (0x7U)
#define ADSS_EB_EVENT60_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 60
 *  0b000..Event 12 from DSP3 instance 0 event generator
 *  0b001..Event 12 from DSP3 instance 1 event generator
 *  0b010..Event 12 from Cadence HiFI5s event generator
 *  0b011..Event 4 from peripherals from CSS
 *  0b100..Event 4 from XSP
 *  0b101..eDMA channel 4 done
 */
#define ADSS_EB_EVENT60_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT60_SEL_SEL_SHIFT)) & ADSS_EB_EVENT60_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT61_SEL - Selects driver of event line 61 */
/*! @{ */

#define ADSS_EB_EVENT61_SEL_SEL_MASK             (0x7U)
#define ADSS_EB_EVENT61_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 61
 *  0b000..Event 13 from DSP3 instance 0 event generator
 *  0b001..Event 13 from DSP3 instance 1 event generator
 *  0b010..Event 13 from Cadence HiFI5s event generator
 *  0b011..Event 5 from peripherals from CSS
 *  0b100..Event 5 from XSP
 *  0b101..eDMA channel 5 done
 *  0b110..MicADC level detection event
 */
#define ADSS_EB_EVENT61_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT61_SEL_SEL_SHIFT)) & ADSS_EB_EVENT61_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT62_SEL - Selects driver of event line 62 */
/*! @{ */

#define ADSS_EB_EVENT62_SEL_SEL_MASK             (0x7U)
#define ADSS_EB_EVENT62_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 62
 *  0b000..Event 14 from DSP3 instance 0 event generator
 *  0b001..Event 14 from DSP3 instance 1 event generator
 *  0b010..Event 14 from Cadence HiFI5s event generator
 *  0b011..Event 6 from peripherals from CSS
 *  0b100..Event 6 from XSP
 *  0b101..eDMA channel 6 done
 */
#define ADSS_EB_EVENT62_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT62_SEL_SEL_SHIFT)) & ADSS_EB_EVENT62_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT63_SEL - Selects driver of event line 63 */
/*! @{ */

#define ADSS_EB_EVENT63_SEL_SEL_MASK             (0x7U)
#define ADSS_EB_EVENT63_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 63
 *  0b000..Event 15 from DSP3 instance 0 event generator
 *  0b001..Event 15 from DSP3 instance 1 event generator
 *  0b010..Event 15 from Cadence HiFI5s event generator
 *  0b011..Event 7 from peripherals from CSS
 *  0b100..Event 7 from XSP
 *  0b101..eDMA channel 7 done
 *  0b110..Ethos-U85 Interrupt
 */
#define ADSS_EB_EVENT63_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT63_SEL_SEL_SHIFT)) & ADSS_EB_EVENT63_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT64_SEL - Selects driver of event line 64 */
/*! @{ */

#define ADSS_EB_EVENT64_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT64_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 64
 *  0b0..Event 0 from multichannel timer
 *  0b1..Event 0 from GPIO
 */
#define ADSS_EB_EVENT64_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT64_SEL_SEL_SHIFT)) & ADSS_EB_EVENT64_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT65_SEL - Selects driver of event line 65 */
/*! @{ */

#define ADSS_EB_EVENT65_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT65_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 65
 *  0b0..Event 0 from multichannel timer
 *  0b1..Event 0 from GPIO
 */
#define ADSS_EB_EVENT65_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT65_SEL_SEL_SHIFT)) & ADSS_EB_EVENT65_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT66_SEL - Selects driver of event line 66 */
/*! @{ */

#define ADSS_EB_EVENT66_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT66_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 66
 *  0b0..Event 0 from multichannel timer
 *  0b1..Event 0 from GPIO
 */
#define ADSS_EB_EVENT66_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT66_SEL_SEL_SHIFT)) & ADSS_EB_EVENT66_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT67_SEL - Selects driver of event line 67 */
/*! @{ */

#define ADSS_EB_EVENT67_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT67_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 67
 *  0b0..Event 0 from multichannel timer
 *  0b1..Event 0 from GPIO
 */
#define ADSS_EB_EVENT67_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT67_SEL_SEL_SHIFT)) & ADSS_EB_EVENT67_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT68_SEL - Selects driver of event line 68 */
/*! @{ */

#define ADSS_EB_EVENT68_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT68_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 68
 *  0b0..Event 0 from multichannel timer
 *  0b1..Event 0 from GPIO
 */
#define ADSS_EB_EVENT68_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT68_SEL_SEL_SHIFT)) & ADSS_EB_EVENT68_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT69_SEL - Selects driver of event line 69 */
/*! @{ */

#define ADSS_EB_EVENT69_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT69_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 69
 *  0b0..Event 0 from multichannel timer
 *  0b1..Event 0 from GPIO
 */
#define ADSS_EB_EVENT69_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT69_SEL_SEL_SHIFT)) & ADSS_EB_EVENT69_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT70_SEL - Selects driver of event line 70 */
/*! @{ */

#define ADSS_EB_EVENT70_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT70_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 70
 *  0b0..Event 0 from multichannel timer
 *  0b1..Event 0 from GPIO
 */
#define ADSS_EB_EVENT70_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT70_SEL_SEL_SHIFT)) & ADSS_EB_EVENT70_SEL_SEL_MASK)
/*! @} */

/*! @name EVENT71_SEL - Selects driver of event line 71 */
/*! @{ */

#define ADSS_EB_EVENT71_SEL_SEL_MASK             (0x1U)
#define ADSS_EB_EVENT71_SEL_SEL_SHIFT            (0U)
/*! sel - Selects driver of event line 71
 *  0b0..Event 0 from multichannel timer
 *  0b1..Event 0 from GPIO
 */
#define ADSS_EB_EVENT71_SEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_EVENT71_SEL_SEL_SHIFT)) & ADSS_EB_EVENT71_SEL_SEL_MASK)
/*! @} */

/*! @name NSSEVENT_SEL - Selects the DSS event routed to the NSS event */
/*! @{ */

#define ADSS_EB_NSSEVENT_SEL_EVENT_MASK          (0x7FU)
#define ADSS_EB_NSSEVENT_SEL_EVENT_SHIFT         (0U)
/*! event - Event mapped to the DSS2NSS event */
#define ADSS_EB_NSSEVENT_SEL_EVENT(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_EB_NSSEVENT_SEL_EVENT_SHIFT)) & ADSS_EB_NSSEVENT_SEL_EVENT_MASK)
/*! @} */

/*! @name CSSEVENT_SEL - Selects the DSS event routed to the CSS event */
/*! @{ */

#define ADSS_EB_CSSEVENT_SEL_EVENT_MASK          (0x7FU)
#define ADSS_EB_CSSEVENT_SEL_EVENT_SHIFT         (0U)
/*! event - Event mapped to the DSS2CSS event */
#define ADSS_EB_CSSEVENT_SEL_EVENT(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_EB_CSSEVENT_SEL_EVENT_SHIFT)) & ADSS_EB_CSSEVENT_SEL_EVENT_MASK)
/*! @} */

/*! @name MPO_RATIO - mpo_ratio to PMRC */
/*! @{ */

#define ADSS_EB_MPO_RATIO_VALUE_MASK             (0x1U)
#define ADSS_EB_MPO_RATIO_VALUE_SHIFT            (0U)
/*! value - Set when a higher ratio is requested */
#define ADSS_EB_MPO_RATIO_VALUE(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_EB_MPO_RATIO_VALUE_SHIFT)) & ADSS_EB_MPO_RATIO_VALUE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADSS_EB_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_EB_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_EB_H_ */

