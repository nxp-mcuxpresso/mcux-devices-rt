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
**         CMSIS Peripheral Access Layer for ADSS_MC_TIMER
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
 * @file PERI_ADSS_MC_TIMER.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_MC_TIMER
 *
 * CMSIS Peripheral Access Layer for ADSS_MC_TIMER
 */

#if !defined(PERI_ADSS_MC_TIMER_H_)
#define PERI_ADSS_MC_TIMER_H_                    /**< Symbol preventing repeated inclusion */

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
   -- ADSS_MC_TIMER Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_MC_TIMER_Peripheral_Access_Layer ADSS_MC_TIMER Peripheral Access Layer
 * @{
 */

/** ADSS_MC_TIMER - Size of Registers Arrays */
#define ADSS_MC_TIMER_COMPARECFG_COUNT            8u
#define ADSS_MC_TIMER_COMPARE_COUNT               8u
#define ADSS_MC_TIMER_CAPTURECFG_COUNT            8u
#define ADSS_MC_TIMER_CAPTURE_COUNT               8u

/** ADSS_MC_TIMER - Register Layout Typedef */
typedef struct {
  __IO uint32_t STARTEVENTCFG;                     /**< Configure starting the multichannel timer, offset: 0x0 */
  __IO uint32_t COUNTERCFG;                        /**< Configuration of the multichannel timer register, offset: 0x4 */
  __IO uint32_t MODULO;                            /**< Multichannel modulo value, offset: 0x8 */
  __I  uint32_t COUNTER;                           /**< Multichannel timer value, offset: 0xC */
  __O  uint32_t STARTCLEAR;                        /**< start/clear multichannel counter command, offset: 0x10 */
  __IO uint32_t PAUSE;                             /**< Multichannel timer pause register, offset: 0x14 */
  __IO uint32_t RESUME;                            /**< Multichannel timer resume register, offset: 0x18 */
       uint8_t RESERVED_0[4];
  __IO uint32_t COMPARECFG[ADSS_MC_TIMER_COMPARECFG_COUNT]; /**< Configure the 8 compare registers, array offset: 0x20, array step: 0x4 */
  __IO uint32_t COMPARE[ADSS_MC_TIMER_COMPARE_COUNT]; /**< Compare register value, array offset: 0x40, array step: 0x4 */
  __IO uint32_t CAPTURECFG[ADSS_MC_TIMER_CAPTURECFG_COUNT]; /**< Configure the capture register, array offset: 0x60, array step: 0x4 */
  __I  uint32_t CAPTURE[ADSS_MC_TIMER_CAPTURE_COUNT]; /**< Captured counter value, array offset: 0x80, array step: 0x4 */
} ADSS_MC_TIMER_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_MC_TIMER Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_MC_TIMER_Register_Masks ADSS_MC_TIMER Register Masks
 * @{
 */

/*! @name STARTEVENTCFG - Configure starting the multichannel timer */
/*! @{ */

#define ADSS_MC_TIMER_STARTEVENTCFG_EVENT_MASK   (0x7FU)
#define ADSS_MC_TIMER_STARTEVENTCFG_EVENT_SHIFT  (0U)
/*! Event - Select start event, as defined in section "Event lines" in the DSP subsystem specification */
#define ADSS_MC_TIMER_STARTEVENTCFG_EVENT(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_STARTEVENTCFG_EVENT_SHIFT)) & ADSS_MC_TIMER_STARTEVENTCFG_EVENT_MASK)

#define ADSS_MC_TIMER_STARTEVENTCFG_MODE_MASK    (0x180U)
#define ADSS_MC_TIMER_STARTEVENTCFG_MODE_SHIFT   (7U)
/*! Mode - select start counting mode
 *  0b00..Counter starts by writing to the StartClear register only
 *  0b01..start counting from 0 on the occurrence of the each selected start event or by writing to the StartClear register
 *  0b10..start counting from 0 on the first occurrence of the selected start event or by writing to the
 *        StartClear register. This mode is automatically set to manual after the first occurrence
 */
#define ADSS_MC_TIMER_STARTEVENTCFG_MODE(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_STARTEVENTCFG_MODE_SHIFT)) & ADSS_MC_TIMER_STARTEVENTCFG_MODE_MASK)
/*! @} */

/*! @name COUNTERCFG - Configuration of the multichannel timer register */
/*! @{ */

#define ADSS_MC_TIMER_COUNTERCFG_EVENT_MASK      (0x7FU)
#define ADSS_MC_TIMER_COUNTERCFG_EVENT_SHIFT     (0U)
/*! Event - Select the event to be counted, as defined in section "Event lines" in the DSP subsystem specification */
#define ADSS_MC_TIMER_COUNTERCFG_EVENT(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_COUNTERCFG_EVENT_SHIFT)) & ADSS_MC_TIMER_COUNTERCFG_EVENT_MASK)

#define ADSS_MC_TIMER_COUNTERCFG_MODE_MASK       (0x80U)
#define ADSS_MC_TIMER_COUNTERCFG_MODE_SHIFT      (7U)
/*! Mode - select counting mode
 *  0b0..count timer clock cycles
 *  0b1..Count external event
 */
#define ADSS_MC_TIMER_COUNTERCFG_MODE(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_COUNTERCFG_MODE_SHIFT)) & ADSS_MC_TIMER_COUNTERCFG_MODE_MASK)

#define ADSS_MC_TIMER_COUNTERCFG_ENABLE_MASK     (0x100U)
#define ADSS_MC_TIMER_COUNTERCFG_ENABLE_SHIFT    (8U)
/*! Enable - enables the multichannel timer */
#define ADSS_MC_TIMER_COUNTERCFG_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_COUNTERCFG_ENABLE_SHIFT)) & ADSS_MC_TIMER_COUNTERCFG_ENABLE_MASK)
/*! @} */

/*! @name MODULO - Multichannel modulo value */
/*! @{ */

#define ADSS_MC_TIMER_MODULO_VALUE_MASK          (0xFFFFFFU)
#define ADSS_MC_TIMER_MODULO_VALUE_SHIFT         (0U)
/*! value - Register that contains the highest value of the multichannel timer before wrapping back to zero */
#define ADSS_MC_TIMER_MODULO_VALUE(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_MODULO_VALUE_SHIFT)) & ADSS_MC_TIMER_MODULO_VALUE_MASK)
/*! @} */

/*! @name COUNTER - Multichannel timer value */
/*! @{ */

#define ADSS_MC_TIMER_COUNTER_VALUE_MASK         (0xFFFFFFU)
#define ADSS_MC_TIMER_COUNTER_VALUE_SHIFT        (0U)
/*! value - current value of the multichannel counter */
#define ADSS_MC_TIMER_COUNTER_VALUE(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_COUNTER_VALUE_SHIFT)) & ADSS_MC_TIMER_COUNTER_VALUE_MASK)
/*! @} */

/*! @name STARTCLEAR - start/clear multichannel counter command */
/*! @{ */

#define ADSS_MC_TIMER_STARTCLEAR_VALUE_MASK      (0x1U)
#define ADSS_MC_TIMER_STARTCLEAR_VALUE_SHIFT     (0U)
/*! value - Multichannel timer will be started and cleared when written to */
#define ADSS_MC_TIMER_STARTCLEAR_VALUE(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_STARTCLEAR_VALUE_SHIFT)) & ADSS_MC_TIMER_STARTCLEAR_VALUE_MASK)
/*! @} */

/*! @name PAUSE - Multichannel timer pause register */
/*! @{ */

#define ADSS_MC_TIMER_PAUSE_VALUE_MASK           (0x1U)
#define ADSS_MC_TIMER_PAUSE_VALUE_SHIFT          (0U)
/*! value - Multichannel timer will be paused when set to 1. Reading will indicate the pause status of the multichannel timer */
#define ADSS_MC_TIMER_PAUSE_VALUE(x)             (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_PAUSE_VALUE_SHIFT)) & ADSS_MC_TIMER_PAUSE_VALUE_MASK)
/*! @} */

/*! @name RESUME - Multichannel timer resume register */
/*! @{ */

#define ADSS_MC_TIMER_RESUME_VALUE_MASK          (0x1U)
#define ADSS_MC_TIMER_RESUME_VALUE_SHIFT         (0U)
/*! value - Multichannel timer will resume when set to 1. Reading will indicate the pause status of the multichannel timer */
#define ADSS_MC_TIMER_RESUME_VALUE(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_RESUME_VALUE_SHIFT)) & ADSS_MC_TIMER_RESUME_VALUE_MASK)
/*! @} */

/*! @name COMPARECFG - Configure the 8 compare registers */
/*! @{ */

#define ADSS_MC_TIMER_COMPARECFG_ENABLE_MASK     (0x1U)
#define ADSS_MC_TIMER_COMPARECFG_ENABLE_SHIFT    (0U)
/*! Enable - Enables the compare register */
#define ADSS_MC_TIMER_COMPARECFG_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_COMPARECFG_ENABLE_SHIFT)) & ADSS_MC_TIMER_COMPARECFG_ENABLE_MASK)

#define ADSS_MC_TIMER_COMPARECFG_MODE_MASK       (0x2U)
#define ADSS_MC_TIMER_COMPARECFG_MODE_SHIFT      (1U)
/*! Mode - select compare operation mode
 *  0b0..one-shot
 *  0b1..continuous
 */
#define ADSS_MC_TIMER_COMPARECFG_MODE(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_COMPARECFG_MODE_SHIFT)) & ADSS_MC_TIMER_COMPARECFG_MODE_MASK)
/*! @} */

/*! @name COMPARE - Compare register value */
/*! @{ */

#define ADSS_MC_TIMER_COMPARE_VALUE_MASK         (0xFFFFFFU)
#define ADSS_MC_TIMER_COMPARE_VALUE_SHIFT        (0U)
/*! value - current value of the compare register */
#define ADSS_MC_TIMER_COMPARE_VALUE(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_COMPARE_VALUE_SHIFT)) & ADSS_MC_TIMER_COMPARE_VALUE_MASK)
/*! @} */

/*! @name CAPTURECFG - Configure the capture register */
/*! @{ */

#define ADSS_MC_TIMER_CAPTURECFG_EVENT_MASK      (0x7FU)
#define ADSS_MC_TIMER_CAPTURECFG_EVENT_SHIFT     (0U)
/*! Event - Select event to capture the timer value, as defined in section "Event lines" in the DSP subsystem specification
 *  0b0000000..none
 */
#define ADSS_MC_TIMER_CAPTURECFG_EVENT(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_CAPTURECFG_EVENT_SHIFT)) & ADSS_MC_TIMER_CAPTURECFG_EVENT_MASK)

#define ADSS_MC_TIMER_CAPTURECFG_MODE_MASK       (0x80U)
#define ADSS_MC_TIMER_CAPTURECFG_MODE_SHIFT      (7U)
/*! Mode - capture operation mode
 *  0b0..one-shot
 *  0b1..continuous
 */
#define ADSS_MC_TIMER_CAPTURECFG_MODE(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_CAPTURECFG_MODE_SHIFT)) & ADSS_MC_TIMER_CAPTURECFG_MODE_MASK)

#define ADSS_MC_TIMER_CAPTURECFG_ENABLE_MASK     (0x100U)
#define ADSS_MC_TIMER_CAPTURECFG_ENABLE_SHIFT    (8U)
/*! Enable - enable capture with an event
 *  0b0..false
 *  0b1..capture when the selected capture event arrives
 */
#define ADSS_MC_TIMER_CAPTURECFG_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_CAPTURECFG_ENABLE_SHIFT)) & ADSS_MC_TIMER_CAPTURECFG_ENABLE_MASK)
/*! @} */

/*! @name CAPTURE - Captured counter value */
/*! @{ */

#define ADSS_MC_TIMER_CAPTURE_VALUE_MASK         (0xFFFFFFU)
#define ADSS_MC_TIMER_CAPTURE_VALUE_SHIFT        (0U)
/*! value - current value of the capture register */
#define ADSS_MC_TIMER_CAPTURE_VALUE(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_MC_TIMER_CAPTURE_VALUE_SHIFT)) & ADSS_MC_TIMER_CAPTURE_VALUE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADSS_MC_TIMER_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_MC_TIMER_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_MC_TIMER_H_ */

