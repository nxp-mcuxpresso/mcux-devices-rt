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
**         CMSIS Peripheral Access Layer for ADSS_DP_TIMER
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
 * @file PERI_ADSS_DP_TIMER.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_DP_TIMER
 *
 * CMSIS Peripheral Access Layer for ADSS_DP_TIMER
 */

#if !defined(PERI_ADSS_DP_TIMER_H_)
#define PERI_ADSS_DP_TIMER_H_                    /**< Symbol preventing repeated inclusion */

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
   -- ADSS_DP_TIMER Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_DP_TIMER_Peripheral_Access_Layer ADSS_DP_TIMER Peripheral Access Layer
 * @{
 */

/** ADSS_DP_TIMER - Size of Registers Arrays */
#define ADSS_DP_TIMER_DP_TC_COUNT                 8u

/** ADSS_DP_TIMER - Register Layout Typedef */
typedef struct {
  struct {                                         /* offset: 0x0, array step: 0x18 */
    __IO uint32_t STARTEVENTCFG;                     /**< Configure the start/clear event, array offset: 0x0, array step: 0x18 */
    __IO uint32_t CAPTUREEVENTCFG;                   /**< Configure the capture event, array offset: 0x4, array step: 0x18 */
    __IO uint32_t COUNTERCFG;                        /**< Configure the counter, array offset: 0x8, array step: 0x18 */
    __I  uint32_t CAPTURE;                           /**< Captured counter value, array offset: 0xC, array step: 0x18 */
    __IO uint32_t COMPARE;                           /**< Counter compare value, array offset: 0x10, array step: 0x18 */
    __I  uint32_t COUNTER;                           /**< Counter value, array offset: 0x14, array step: 0x18 */
  } DP_TC[ADSS_DP_TIMER_DP_TC_COUNT];
  __O  uint32_t STARTCLEAR;                        /**< start/clear timer/counter(s)command, offset: 0xC0 */
  __IO uint32_t PAUSE;                             /**< Pause dataport timer command, offset: 0xC4 */
  __IO uint32_t RESUME;                            /**< Resume dataport timer command (when paused), offset: 0xC8 */
} ADSS_DP_TIMER_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_DP_TIMER Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_DP_TIMER_Register_Masks ADSS_DP_TIMER Register Masks
 * @{
 */

/*! @name STARTEVENTCFG - Configure the start/clear event */
/*! @{ */

#define ADSS_DP_TIMER_STARTEVENTCFG_EVENT_MASK   (0x7FU)
#define ADSS_DP_TIMER_STARTEVENTCFG_EVENT_SHIFT  (0U)
/*! Event - Select start event, as defined in section "Event lines" in the ADSS subsystem specification */
#define ADSS_DP_TIMER_STARTEVENTCFG_EVENT(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DP_TIMER_STARTEVENTCFG_EVENT_SHIFT)) & ADSS_DP_TIMER_STARTEVENTCFG_EVENT_MASK)

#define ADSS_DP_TIMER_STARTEVENTCFG_MODE_MASK    (0x180U)
#define ADSS_DP_TIMER_STARTEVENTCFG_MODE_SHIFT   (7U)
/*! Mode - select start counting mode
 *  0b00..Counter starts by writing to the StartClear register only
 *  0b01..start counting from 0 on the occurrence of the each selected start event or by writing to the StartClear register
 *  0b10..start counting from 0 on the first occurrence of the selected start event or by writing to the
 *        StartClear register. The mode is automatically set to manual after the first occurrence
 */
#define ADSS_DP_TIMER_STARTEVENTCFG_MODE(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_DP_TIMER_STARTEVENTCFG_MODE_SHIFT)) & ADSS_DP_TIMER_STARTEVENTCFG_MODE_MASK)
/*! @} */

/* The count of ADSS_DP_TIMER_STARTEVENTCFG */
#define ADSS_DP_TIMER_STARTEVENTCFG_COUNT        (8U)

/*! @name CAPTUREEVENTCFG - Configure the capture event */
/*! @{ */

#define ADSS_DP_TIMER_CAPTUREEVENTCFG_EVENT_MASK (0x7FU)
#define ADSS_DP_TIMER_CAPTUREEVENTCFG_EVENT_SHIFT (0U)
/*! Event - Select event to capture the timer value, as defined in section "Event lines" in the ADSS
 *    subsystem specification. At the occurance of capture event (rising edge) counter value wil be
 *    captured.
 *  0b0000000..none
 */
#define ADSS_DP_TIMER_CAPTUREEVENTCFG_EVENT(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_DP_TIMER_CAPTUREEVENTCFG_EVENT_SHIFT)) & ADSS_DP_TIMER_CAPTUREEVENTCFG_EVENT_MASK)
/*! @} */

/* The count of ADSS_DP_TIMER_CAPTUREEVENTCFG */
#define ADSS_DP_TIMER_CAPTUREEVENTCFG_COUNT      (8U)

/*! @name COUNTERCFG - Configure the counter */
/*! @{ */

#define ADSS_DP_TIMER_COUNTERCFG_MODE_MASK       (0x1U)
#define ADSS_DP_TIMER_COUNTERCFG_MODE_SHIFT      (0U)
/*! Mode - counter operation mode
 *  0b0..one-shot
 *  0b1..continuous
 */
#define ADSS_DP_TIMER_COUNTERCFG_MODE(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_DP_TIMER_COUNTERCFG_MODE_SHIFT)) & ADSS_DP_TIMER_COUNTERCFG_MODE_MASK)

#define ADSS_DP_TIMER_COUNTERCFG_ENABLECAPTURE_MASK (0x2U)
#define ADSS_DP_TIMER_COUNTERCFG_ENABLECAPTURE_SHIFT (1U)
/*! EnableCapture - enable capture
 *  0b0..false
 *  0b1..true
 */
#define ADSS_DP_TIMER_COUNTERCFG_ENABLECAPTURE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_DP_TIMER_COUNTERCFG_ENABLECAPTURE_SHIFT)) & ADSS_DP_TIMER_COUNTERCFG_ENABLECAPTURE_MASK)

#define ADSS_DP_TIMER_COUNTERCFG_ENABLECOMPARE_MASK (0x4U)
#define ADSS_DP_TIMER_COUNTERCFG_ENABLECOMPARE_SHIFT (2U)
/*! EnableCompare - enable compare
 *  0b0..false
 *  0b1..true
 */
#define ADSS_DP_TIMER_COUNTERCFG_ENABLECOMPARE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_DP_TIMER_COUNTERCFG_ENABLECOMPARE_SHIFT)) & ADSS_DP_TIMER_COUNTERCFG_ENABLECOMPARE_MASK)

#define ADSS_DP_TIMER_COUNTERCFG_ENABLECOUNTER_MASK (0x8U)
#define ADSS_DP_TIMER_COUNTERCFG_ENABLECOUNTER_SHIFT (3U)
/*! EnableCounter - enable counter
 *  0b0..false
 *  0b1..true
 */
#define ADSS_DP_TIMER_COUNTERCFG_ENABLECOUNTER(x) (((uint32_t)(((uint32_t)(x)) << ADSS_DP_TIMER_COUNTERCFG_ENABLECOUNTER_SHIFT)) & ADSS_DP_TIMER_COUNTERCFG_ENABLECOUNTER_MASK)

#define ADSS_DP_TIMER_COUNTERCFG_COUNTMODE_MASK  (0x10U)
#define ADSS_DP_TIMER_COUNTERCFG_COUNTMODE_SHIFT (4U)
/*! CountMode - Configures the counting mode, i.e. bclk or frame
 *  0b0..Count bit-clock
 *  0b1..Count frame
 */
#define ADSS_DP_TIMER_COUNTERCFG_COUNTMODE(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_DP_TIMER_COUNTERCFG_COUNTMODE_SHIFT)) & ADSS_DP_TIMER_COUNTERCFG_COUNTMODE_MASK)
/*! @} */

/* The count of ADSS_DP_TIMER_COUNTERCFG */
#define ADSS_DP_TIMER_COUNTERCFG_COUNT           (8U)

/*! @name CAPTURE - Captured counter value */
/*! @{ */

#define ADSS_DP_TIMER_CAPTURE_VALUE_MASK         (0xFFFFFFU)
#define ADSS_DP_TIMER_CAPTURE_VALUE_SHIFT        (0U)
/*! value - value */
#define ADSS_DP_TIMER_CAPTURE_VALUE(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_DP_TIMER_CAPTURE_VALUE_SHIFT)) & ADSS_DP_TIMER_CAPTURE_VALUE_MASK)
/*! @} */

/* The count of ADSS_DP_TIMER_CAPTURE */
#define ADSS_DP_TIMER_CAPTURE_COUNT              (8U)

/*! @name COMPARE - Counter compare value */
/*! @{ */

#define ADSS_DP_TIMER_COMPARE_VALUE_MASK         (0xFFFFFFU)
#define ADSS_DP_TIMER_COMPARE_VALUE_SHIFT        (0U)
/*! value - counter compare value */
#define ADSS_DP_TIMER_COMPARE_VALUE(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_DP_TIMER_COMPARE_VALUE_SHIFT)) & ADSS_DP_TIMER_COMPARE_VALUE_MASK)
/*! @} */

/* The count of ADSS_DP_TIMER_COMPARE */
#define ADSS_DP_TIMER_COMPARE_COUNT              (8U)

/*! @name COUNTER - Counter value */
/*! @{ */

#define ADSS_DP_TIMER_COUNTER_VALUE_MASK         (0xFFFFFFU)
#define ADSS_DP_TIMER_COUNTER_VALUE_SHIFT        (0U)
/*! value - counter value (after synchronization) */
#define ADSS_DP_TIMER_COUNTER_VALUE(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_DP_TIMER_COUNTER_VALUE_SHIFT)) & ADSS_DP_TIMER_COUNTER_VALUE_MASK)
/*! @} */

/* The count of ADSS_DP_TIMER_COUNTER */
#define ADSS_DP_TIMER_COUNTER_COUNT              (8U)

/*! @name STARTCLEAR - start/clear timer/counter(s)command */
/*! @{ */

#define ADSS_DP_TIMER_STARTCLEAR_VALUE_MASK      (0xFFU)
#define ADSS_DP_TIMER_STARTCLEAR_VALUE_SHIFT     (0U)
/*! value - bitfield to start/clear dataport timer/counter(s), bit0 = DP_TC0, bit 1 = DP_TC1...
 *    Write '1' to clear the counter content and restart.
 */
#define ADSS_DP_TIMER_STARTCLEAR_VALUE(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_DP_TIMER_STARTCLEAR_VALUE_SHIFT)) & ADSS_DP_TIMER_STARTCLEAR_VALUE_MASK)
/*! @} */

/*! @name PAUSE - Pause dataport timer command */
/*! @{ */

#define ADSS_DP_TIMER_PAUSE_VALUE_MASK           (0xFFU)
#define ADSS_DP_TIMER_PAUSE_VALUE_SHIFT          (0U)
/*! value - bitfield to pause dataport timer/counter(s), bit0 = TC0, bit 1 = TC1... Reading will
 *    indicate the pause status of the timer
 */
#define ADSS_DP_TIMER_PAUSE_VALUE(x)             (((uint32_t)(((uint32_t)(x)) << ADSS_DP_TIMER_PAUSE_VALUE_SHIFT)) & ADSS_DP_TIMER_PAUSE_VALUE_MASK)
/*! @} */

/*! @name RESUME - Resume dataport timer command (when paused) */
/*! @{ */

#define ADSS_DP_TIMER_RESUME_VALUE_MASK          (0xFFU)
#define ADSS_DP_TIMER_RESUME_VALUE_SHIFT         (0U)
/*! value - bitfield to resume a paused dataport timer/counter(s), bit0 = TC0, bit 1 = TC1...
 *    Reading will indicate the pause status of the timer
 */
#define ADSS_DP_TIMER_RESUME_VALUE(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_DP_TIMER_RESUME_VALUE_SHIFT)) & ADSS_DP_TIMER_RESUME_VALUE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADSS_DP_TIMER_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_DP_TIMER_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_DP_TIMER_H_ */

