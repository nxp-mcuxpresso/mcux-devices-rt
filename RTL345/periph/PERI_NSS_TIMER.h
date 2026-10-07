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
**         CMSIS Peripheral Access Layer for NSS_TIMER
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
 * @file PERI_NSS_TIMER.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for NSS_TIMER
 *
 * CMSIS Peripheral Access Layer for NSS_TIMER
 */

#if !defined(PERI_NSS_TIMER_H_)
#define PERI_NSS_TIMER_H_                        /**< Symbol preventing repeated inclusion */

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
   -- NSS_TIMER Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_TIMER_Peripheral_Access_Layer NSS_TIMER Peripheral Access Layer
 * @{
 */

/** NSS_TIMER - Size of Registers Arrays */
#define NSS_TIMER_CHNL_COUNT                      6u

/** NSS_TIMER - Register Layout Typedef */
typedef struct {
  struct {                                         /* offset: 0x0, array step: 0x40 */
    __IO uint32_t CNTEVCFG;                          /**< configure the count event, array offset: 0x0, array step: 0x40 */
    __IO uint32_t STRTEVCFG;                         /**< configure the start/clear event, array offset: 0x4, array step: 0x40 */
    __IO uint32_t CPTREVCFG;                         /**< configure the capture event, array offset: 0x8, array step: 0x40 */
    __IO uint32_t CNTRCFG;                           /**< configure the counter, array offset: 0xC, array step: 0x40 */
    __I  uint32_t CPTR;                              /**< captured counter value, array offset: 0x10, array step: 0x40 */
    __IO uint32_t CMPR;                              /**< counter compare value, array offset: 0x14, array step: 0x40 */
    __I  uint32_t CNTR;                              /**< current counter value, array offset: 0x18, array step: 0x40 */
         uint8_t RESERVED_0[36];
  } CHNL[NSS_TIMER_CHNL_COUNT];
       uint8_t RESERVED_0[128];
  __O  uint32_t STRTCLR;                           /**< start/clear timer/counter(s)command, offset: 0x200 */
  __I  uint32_t MODULE_ID;                         /**< Contains the ID number of the IP, offset: 0x204 */
} NSS_TIMER_Type;

/* ----------------------------------------------------------------------------
   -- NSS_TIMER Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_TIMER_Register_Masks NSS_TIMER Register Masks
 * @{
 */

/*! @name CNTEVCFG - configure the count event */
/*! @{ */

#define NSS_TIMER_CNTEVCFG_INPUTSELECT_MASK      (0x3FU)
#define NSS_TIMER_CNTEVCFG_INPUTSELECT_SHIFT     (0U)
/*! InputSelect - input selection code
 *  0b000000..NSS timer0 event
 *  0b000001..NSS timer1 event
 *  0b000010..NSS timer2 event
 *  0b000011..NSS timer3 event
 *  0b000100..NSS timer4 event
 *  0b000101..NSS timer5 event
 *  0b000110..Ethos U85 IRQ event
 *  0b000111..Ethos U85 IRQ modulo n event
 *  0b001000..Event 0 of a programmable DNN RAM segment
 *  0b001001..Event 1 of a programmable DNN RAM segment
 *  0b001010..Event 2 of a programmable DNN RAM segment
 *  0b001011..Event 3 of a programmable DNN RAM segment
 *  0b001100..Event 4 of a programmable DNN RAM segment
 *  0b001101..Event 5 of a programmable DNN RAM segment
 *  0b001110..Event 6 of a programmable DNN RAM segment
 *  0b001111..Event 7 of a programmable DNN RAM segment
 *  0b010000..External DSS event 0 to NSS. Programmable DSS event source in the ADSS.
 *  0b010001..External DSS event 1 to NSS. Programmable DSS event source in the ADSS.
 *  0b010010..External DSS event 2 to NSS. Programmable DSS event source in the ADSS.
 *  0b010011..External DSS event 3 to NSS. Programmable DSS event source in the ADSS.
 *  0b010100..External DSS event 4 to NSS. Programmable DSS event source in the ADSS.
 *  0b010101..External DSS event 5 to NSS. Programmable DSS event source in the ADSS.
 *  0b010110..External DSS event 6 to NSS. Programmable DSS event source in the ADSS.
 *  0b010111..External DSS event 7 to NSS. Programmable DSS event source in the ADSS.
 *  0b011000..External CSS event 0 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011001..External CSS event 1 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011010..External CSS event 2 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011011..External CSS event 3 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011100..External CSS event 4 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011101..External CSS event 5 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011110..External CSS event 6 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011111..External CSS event 7 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b100000..External CSS event 8 to NSS. Programmable at CSS to the CSS DMA[0|1] Ch[0-5] complete event.
 *  0b100001..External CSS event 9 to NSS. Programmable at CSS to the CSS DMA[0|1] Ch[6-11] complete event.
 *  0b100010..External CSS event 10 to NSS. Programmable at CSS to the CSS DMA[0] Ch[12-17] complete event.
 *  0b100011..External CSS event 11 to NSS. Programmable at CSS to the CSS DMA[0] Ch[18-23] complete event.
 *  0b100100..External CSS event 12 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event.
 *  0b100101..External CSS event 13 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event.
 *  0b100110..External CSS event 14 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event.
 *  0b100111..External CSS event 15 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event.
 *  0b101000..Programmable NSS event source 0
 *  0b101001..Programmable NSS event source 1
 *  0b101010..Programmable NSS event source 2
 *  0b101011..Programmable NSS event source 3
 *  0b101100..Programmable NSS event source 4
 *  0b101101..Programmable NSS event source 5
 *  0b101110..Programmable NSS event source 6
 *  0b101111..Programmable NSS event source 7
 *  0b110000..Programmable NSS event source 8
 *  0b110001..Programmable NSS event source 9
 *  0b110010..Programmable NSS event source 10
 *  0b110011..Programmable NSS event source 11
 *  0b110100..Programmable NSS event source 12
 *  0b110101..Programmable NSS event source 13
 *  0b110110..Programmable NSS event source 14
 *  0b110111..Programmable NSS event source 15
 *  0b111000..NSS EDU error event
 *  0b111111..A 50 percent duty cycle version of the DSS/LPO clock, selectable in the syscfg.tickSrcSel register.
 */
#define NSS_TIMER_CNTEVCFG_INPUTSELECT(x)        (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_CNTEVCFG_INPUTSELECT_SHIFT)) & NSS_TIMER_CNTEVCFG_INPUTSELECT_MASK)

#define NSS_TIMER_CNTEVCFG_ENABLE_MASK           (0x100U)
#define NSS_TIMER_CNTEVCFG_ENABLE_SHIFT          (8U)
/*! Enable - enable external event
 *  0b0..false
 *  0b1..true
 */
#define NSS_TIMER_CNTEVCFG_ENABLE(x)             (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_CNTEVCFG_ENABLE_SHIFT)) & NSS_TIMER_CNTEVCFG_ENABLE_MASK)

#define NSS_TIMER_CNTEVCFG_ONPOSEDGE_MASK        (0x200U)
#define NSS_TIMER_CNTEVCFG_ONPOSEDGE_SHIFT       (9U)
/*! OnPosEdge - positive edge detection
 *  0b0..false
 *  0b1..true
 */
#define NSS_TIMER_CNTEVCFG_ONPOSEDGE(x)          (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_CNTEVCFG_ONPOSEDGE_SHIFT)) & NSS_TIMER_CNTEVCFG_ONPOSEDGE_MASK)

#define NSS_TIMER_CNTEVCFG_ONNEGEDGE_MASK        (0x400U)
#define NSS_TIMER_CNTEVCFG_ONNEGEDGE_SHIFT       (10U)
/*! OnNegEdge - negative edge detection
 *  0b0..false
 *  0b1..true
 */
#define NSS_TIMER_CNTEVCFG_ONNEGEDGE(x)          (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_CNTEVCFG_ONNEGEDGE_SHIFT)) & NSS_TIMER_CNTEVCFG_ONNEGEDGE_MASK)
/*! @} */

/* The count of NSS_TIMER_CNTEVCFG */
#define NSS_TIMER_CNTEVCFG_COUNT                 (6U)

/*! @name STRTEVCFG - configure the start/clear event */
/*! @{ */

#define NSS_TIMER_STRTEVCFG_INPUTSELECT_MASK     (0x3FU)
#define NSS_TIMER_STRTEVCFG_INPUTSELECT_SHIFT    (0U)
/*! InputSelect - input selection code
 *  0b000000..NSS timer0 event
 *  0b000001..NSS timer1 event
 *  0b000010..NSS timer2 event
 *  0b000011..NSS timer3 event
 *  0b000100..NSS timer4 event
 *  0b000101..NSS timer5 event
 *  0b000110..Ethos U85 IRQ event
 *  0b000111..Ethos U85 IRQ modulo n event
 *  0b001000..Event 0 of a programmable DNN RAM segment
 *  0b001001..Event 1 of a programmable DNN RAM segment
 *  0b001010..Event 2 of a programmable DNN RAM segment
 *  0b001011..Event 3 of a programmable DNN RAM segment
 *  0b001100..Event 4 of a programmable DNN RAM segment
 *  0b001101..Event 5 of a programmable DNN RAM segment
 *  0b001110..Event 6 of a programmable DNN RAM segment
 *  0b001111..Event 7 of a programmable DNN RAM segment
 *  0b010000..External DSS event 0 to NSS. Programmable DSS event source in the ADSS.
 *  0b010001..External DSS event 1 to NSS. Programmable DSS event source in the ADSS.
 *  0b010010..External DSS event 2 to NSS. Programmable DSS event source in the ADSS.
 *  0b010011..External DSS event 3 to NSS. Programmable DSS event source in the ADSS.
 *  0b010100..External DSS event 4 to NSS. Programmable DSS event source in the ADSS.
 *  0b010101..External DSS event 5 to NSS. Programmable DSS event source in the ADSS.
 *  0b010110..External DSS event 6 to NSS. Programmable DSS event source in the ADSS.
 *  0b010111..External DSS event 7 to NSS. Programmable DSS event source in the ADSS.
 *  0b011000..External CSS event 0 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011001..External CSS event 1 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011010..External CSS event 2 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011011..External CSS event 3 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011100..External CSS event 4 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011101..External CSS event 5 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011110..External CSS event 6 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011111..External CSS event 7 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b100000..External CSS event 8 to NSS. Programmable at CSS to the CSS DMA[0|1] Ch[0-5] complete event.
 *  0b100001..External CSS event 9 to NSS. Programmable at CSS to the CSS DMA[0|1] Ch[6-11] complete event.
 *  0b100010..External CSS event 10 to NSS. Programmable at CSS to the CSS DMA[0] Ch[12-17] complete event.
 *  0b100011..External CSS event 11 to NSS. Programmable at CSS to the CSS DMA[0] Ch[18-23] complete event.
 *  0b100100..External CSS event 12 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event.
 *  0b100101..External CSS event 13 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event.
 *  0b100110..External CSS event 14 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event.
 *  0b100111..External CSS event 15 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event.
 *  0b101000..Programmable NSS event source 0
 *  0b101001..Programmable NSS event source 1
 *  0b101010..Programmable NSS event source 2
 *  0b101011..Programmable NSS event source 3
 *  0b101100..Programmable NSS event source 4
 *  0b101101..Programmable NSS event source 5
 *  0b101110..Programmable NSS event source 6
 *  0b101111..Programmable NSS event source 7
 *  0b110000..Programmable NSS event source 8
 *  0b110001..Programmable NSS event source 9
 *  0b110010..Programmable NSS event source 10
 *  0b110011..Programmable NSS event source 11
 *  0b110100..Programmable NSS event source 12
 *  0b110101..Programmable NSS event source 13
 *  0b110110..Programmable NSS event source 14
 *  0b110111..Programmable NSS event source 15
 *  0b111000..NSS EDU error event
 *  0b111111..A 50 percent duty cycle version of the DSS/LPO clock, selectable in the syscfg.tickSrcSel register.
 */
#define NSS_TIMER_STRTEVCFG_INPUTSELECT(x)       (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_STRTEVCFG_INPUTSELECT_SHIFT)) & NSS_TIMER_STRTEVCFG_INPUTSELECT_MASK)

#define NSS_TIMER_STRTEVCFG_ENABLE_MASK          (0x100U)
#define NSS_TIMER_STRTEVCFG_ENABLE_SHIFT         (8U)
/*! Enable - enable external event
 *  0b0..false
 *  0b1..true
 */
#define NSS_TIMER_STRTEVCFG_ENABLE(x)            (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_STRTEVCFG_ENABLE_SHIFT)) & NSS_TIMER_STRTEVCFG_ENABLE_MASK)

#define NSS_TIMER_STRTEVCFG_ONPOSEDGE_MASK       (0x200U)
#define NSS_TIMER_STRTEVCFG_ONPOSEDGE_SHIFT      (9U)
/*! OnPosEdge - positive edge detection
 *  0b0..false
 *  0b1..true
 */
#define NSS_TIMER_STRTEVCFG_ONPOSEDGE(x)         (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_STRTEVCFG_ONPOSEDGE_SHIFT)) & NSS_TIMER_STRTEVCFG_ONPOSEDGE_MASK)

#define NSS_TIMER_STRTEVCFG_ONNEGEDGE_MASK       (0x400U)
#define NSS_TIMER_STRTEVCFG_ONNEGEDGE_SHIFT      (10U)
/*! OnNegEdge - negative edge detection
 *  0b0..false
 *  0b1..true
 */
#define NSS_TIMER_STRTEVCFG_ONNEGEDGE(x)         (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_STRTEVCFG_ONNEGEDGE_SHIFT)) & NSS_TIMER_STRTEVCFG_ONNEGEDGE_MASK)
/*! @} */

/* The count of NSS_TIMER_STRTEVCFG */
#define NSS_TIMER_STRTEVCFG_COUNT                (6U)

/*! @name CPTREVCFG - configure the capture event */
/*! @{ */

#define NSS_TIMER_CPTREVCFG_INPUTSELECT_MASK     (0x3FU)
#define NSS_TIMER_CPTREVCFG_INPUTSELECT_SHIFT    (0U)
/*! InputSelect - input selection code
 *  0b000000..NSS timer0 event
 *  0b000001..NSS timer1 event
 *  0b000010..NSS timer2 event
 *  0b000011..NSS timer3 event
 *  0b000100..NSS timer4 event
 *  0b000101..NSS timer5 event
 *  0b000110..Ethos U85 IRQ event
 *  0b000111..Ethos U85 IRQ modulo n event
 *  0b001000..Event 0 of a programmable DNN RAM segment
 *  0b001001..Event 1 of a programmable DNN RAM segment
 *  0b001010..Event 2 of a programmable DNN RAM segment
 *  0b001011..Event 3 of a programmable DNN RAM segment
 *  0b001100..Event 4 of a programmable DNN RAM segment
 *  0b001101..Event 5 of a programmable DNN RAM segment
 *  0b001110..Event 6 of a programmable DNN RAM segment
 *  0b001111..Event 7 of a programmable DNN RAM segment
 *  0b010000..External DSS event 0 to NSS. Programmable DSS event source in the ADSS.
 *  0b010001..External DSS event 1 to NSS. Programmable DSS event source in the ADSS.
 *  0b010010..External DSS event 2 to NSS. Programmable DSS event source in the ADSS.
 *  0b010011..External DSS event 3 to NSS. Programmable DSS event source in the ADSS.
 *  0b010100..External DSS event 4 to NSS. Programmable DSS event source in the ADSS.
 *  0b010101..External DSS event 5 to NSS. Programmable DSS event source in the ADSS.
 *  0b010110..External DSS event 6 to NSS. Programmable DSS event source in the ADSS.
 *  0b010111..External DSS event 7 to NSS. Programmable DSS event source in the ADSS.
 *  0b011000..External CSS event 0 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011001..External CSS event 1 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011010..External CSS event 2 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011011..External CSS event 3 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011100..External CSS event 4 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011101..External CSS event 5 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011110..External CSS event 6 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011111..External CSS event 7 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b100000..External CSS event 8 to NSS. Programmable at CSS to the CSS DMA[0|1] Ch[0-5] complete event.
 *  0b100001..External CSS event 9 to NSS. Programmable at CSS to the CSS DMA[0|1] Ch[6-11] complete event.
 *  0b100010..External CSS event 10 to NSS. Programmable at CSS to the CSS DMA[0] Ch[12-17] complete event.
 *  0b100011..External CSS event 11 to NSS. Programmable at CSS to the CSS DMA[0] Ch[18-23] complete event.
 *  0b100100..External CSS event 12 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event.
 *  0b100101..External CSS event 13 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event.
 *  0b100110..External CSS event 14 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event.
 *  0b100111..External CSS event 15 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event.
 *  0b101000..Programmable NSS event source 0
 *  0b101001..Programmable NSS event source 1
 *  0b101010..Programmable NSS event source 2
 *  0b101011..Programmable NSS event source 3
 *  0b101100..Programmable NSS event source 4
 *  0b101101..Programmable NSS event source 5
 *  0b101110..Programmable NSS event source 6
 *  0b101111..Programmable NSS event source 7
 *  0b110000..Programmable NSS event source 8
 *  0b110001..Programmable NSS event source 9
 *  0b110010..Programmable NSS event source 10
 *  0b110011..Programmable NSS event source 11
 *  0b110100..Programmable NSS event source 12
 *  0b110101..Programmable NSS event source 13
 *  0b110110..Programmable NSS event source 14
 *  0b110111..Programmable NSS event source 15
 *  0b111000..NSS EDU error event
 *  0b111111..A 50 percent duty cycle version of the DSS/LPO clock, selectable in the syscfg.tickSrcSel register.
 */
#define NSS_TIMER_CPTREVCFG_INPUTSELECT(x)       (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_CPTREVCFG_INPUTSELECT_SHIFT)) & NSS_TIMER_CPTREVCFG_INPUTSELECT_MASK)

#define NSS_TIMER_CPTREVCFG_ENABLE_MASK          (0x100U)
#define NSS_TIMER_CPTREVCFG_ENABLE_SHIFT         (8U)
/*! Enable - enable external event
 *  0b0..false
 *  0b1..true
 */
#define NSS_TIMER_CPTREVCFG_ENABLE(x)            (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_CPTREVCFG_ENABLE_SHIFT)) & NSS_TIMER_CPTREVCFG_ENABLE_MASK)

#define NSS_TIMER_CPTREVCFG_ONPOSEDGE_MASK       (0x200U)
#define NSS_TIMER_CPTREVCFG_ONPOSEDGE_SHIFT      (9U)
/*! OnPosEdge - positive edge detection
 *  0b0..false
 *  0b1..true
 */
#define NSS_TIMER_CPTREVCFG_ONPOSEDGE(x)         (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_CPTREVCFG_ONPOSEDGE_SHIFT)) & NSS_TIMER_CPTREVCFG_ONPOSEDGE_MASK)

#define NSS_TIMER_CPTREVCFG_ONNEGEDGE_MASK       (0x400U)
#define NSS_TIMER_CPTREVCFG_ONNEGEDGE_SHIFT      (10U)
/*! OnNegEdge - negative edge detection
 *  0b0..false
 *  0b1..true
 */
#define NSS_TIMER_CPTREVCFG_ONNEGEDGE(x)         (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_CPTREVCFG_ONNEGEDGE_SHIFT)) & NSS_TIMER_CPTREVCFG_ONNEGEDGE_MASK)
/*! @} */

/* The count of NSS_TIMER_CPTREVCFG */
#define NSS_TIMER_CPTREVCFG_COUNT                (6U)

/*! @name CNTRCFG - configure the counter */
/*! @{ */

#define NSS_TIMER_CNTRCFG_MODE_MASK              (0x1U)
#define NSS_TIMER_CNTRCFG_MODE_SHIFT             (0U)
/*! Mode - counter operation mode
 *  0b0..one-shot
 *  0b1..continuous
 */
#define NSS_TIMER_CNTRCFG_MODE(x)                (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_CNTRCFG_MODE_SHIFT)) & NSS_TIMER_CNTRCFG_MODE_MASK)

#define NSS_TIMER_CNTRCFG_ENCPTR_MASK            (0x2U)
#define NSS_TIMER_CNTRCFG_ENCPTR_SHIFT           (1U)
/*! EnCptr - enable capture
 *  0b0..false
 *  0b1..true
 */
#define NSS_TIMER_CNTRCFG_ENCPTR(x)              (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_CNTRCFG_ENCPTR_SHIFT)) & NSS_TIMER_CNTRCFG_ENCPTR_MASK)

#define NSS_TIMER_CNTRCFG_ENCMPR_MASK            (0x4U)
#define NSS_TIMER_CNTRCFG_ENCMPR_SHIFT           (2U)
/*! EnCmpr - enable compare
 *  0b0..false
 *  0b1..true
 */
#define NSS_TIMER_CNTRCFG_ENCMPR(x)              (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_CNTRCFG_ENCMPR_SHIFT)) & NSS_TIMER_CNTRCFG_ENCMPR_MASK)

#define NSS_TIMER_CNTRCFG_ENCNTR_MASK            (0x8U)
#define NSS_TIMER_CNTRCFG_ENCNTR_SHIFT           (3U)
/*! EnCntr - enable counter
 *  0b0..false
 *  0b1..true
 */
#define NSS_TIMER_CNTRCFG_ENCNTR(x)              (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_CNTRCFG_ENCNTR_SHIFT)) & NSS_TIMER_CNTRCFG_ENCNTR_MASK)
/*! @} */

/* The count of NSS_TIMER_CNTRCFG */
#define NSS_TIMER_CNTRCFG_COUNT                  (6U)

/*! @name CPTR - captured counter value */
/*! @{ */

#define NSS_TIMER_CPTR_VAL_MASK                  (0xFFFFFFU)
#define NSS_TIMER_CPTR_VAL_SHIFT                 (0U)
/*! val - value */
#define NSS_TIMER_CPTR_VAL(x)                    (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_CPTR_VAL_SHIFT)) & NSS_TIMER_CPTR_VAL_MASK)
/*! @} */

/* The count of NSS_TIMER_CPTR */
#define NSS_TIMER_CPTR_COUNT                     (6U)

/*! @name CMPR - counter compare value */
/*! @{ */

#define NSS_TIMER_CMPR_VAL_MASK                  (0xFFFFFFU)
#define NSS_TIMER_CMPR_VAL_SHIFT                 (0U)
/*! val - value */
#define NSS_TIMER_CMPR_VAL(x)                    (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_CMPR_VAL_SHIFT)) & NSS_TIMER_CMPR_VAL_MASK)
/*! @} */

/* The count of NSS_TIMER_CMPR */
#define NSS_TIMER_CMPR_COUNT                     (6U)

/*! @name CNTR - current counter value */
/*! @{ */

#define NSS_TIMER_CNTR_VAL_MASK                  (0xFFFFFFU)
#define NSS_TIMER_CNTR_VAL_SHIFT                 (0U)
/*! val - value */
#define NSS_TIMER_CNTR_VAL(x)                    (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_CNTR_VAL_SHIFT)) & NSS_TIMER_CNTR_VAL_MASK)
/*! @} */

/* The count of NSS_TIMER_CNTR */
#define NSS_TIMER_CNTR_COUNT                     (6U)

/*! @name STRTCLR - start/clear timer/counter(s)command */
/*! @{ */

#define NSS_TIMER_STRTCLR_VAL_MASK               (0x3FU)
#define NSS_TIMER_STRTCLR_VAL_SHIFT              (0U)
/*! val - bitfield to start/clear timer/counter(s), bit0 = counter0, bit 1 = counter1... */
#define NSS_TIMER_STRTCLR_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_STRTCLR_VAL_SHIFT)) & NSS_TIMER_STRTCLR_VAL_MASK)
/*! @} */

/*! @name MODULE_ID - Contains the ID number of the IP */
/*! @{ */

#define NSS_TIMER_MODULE_ID_APERTURE_MASK        (0xFFU)
#define NSS_TIMER_MODULE_ID_APERTURE_SHIFT       (0U)
/*! aperture - Contains the aperture size of the IP */
#define NSS_TIMER_MODULE_ID_APERTURE(x)          (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_MODULE_ID_APERTURE_SHIFT)) & NSS_TIMER_MODULE_ID_APERTURE_MASK)

#define NSS_TIMER_MODULE_ID_MINOR_REV_MASK       (0xF00U)
#define NSS_TIMER_MODULE_ID_MINOR_REV_SHIFT      (8U)
/*! minor_rev - Minor revision, guaranteed software compatibility between minor revisions */
#define NSS_TIMER_MODULE_ID_MINOR_REV(x)         (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_MODULE_ID_MINOR_REV_SHIFT)) & NSS_TIMER_MODULE_ID_MINOR_REV_MASK)

#define NSS_TIMER_MODULE_ID_MAJOR_REV_MASK       (0xF000U)
#define NSS_TIMER_MODULE_ID_MAJOR_REV_SHIFT      (12U)
/*! major_rev - Major revision, guaranteed software compatibility between major revisions */
#define NSS_TIMER_MODULE_ID_MAJOR_REV(x)         (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_MODULE_ID_MAJOR_REV_SHIFT)) & NSS_TIMER_MODULE_ID_MAJOR_REV_MASK)

#define NSS_TIMER_MODULE_ID_ID_MASK              (0xFFFF0000U)
#define NSS_TIMER_MODULE_ID_ID_SHIFT             (16U)
/*! id - Unique identification number, assigned by CoReUse */
#define NSS_TIMER_MODULE_ID_ID(x)                (((uint32_t)(((uint32_t)(x)) << NSS_TIMER_MODULE_ID_ID_SHIFT)) & NSS_TIMER_MODULE_ID_ID_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group NSS_TIMER_Register_Masks */


/*!
 * @}
 */ /* end of group NSS_TIMER_Peripheral_Access_Layer */


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


#endif  /* PERI_NSS_TIMER_H_ */

