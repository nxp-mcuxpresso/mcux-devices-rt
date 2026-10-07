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
**         CMSIS Peripheral Access Layer for NSS_WATCHDOG
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
 * @file PERI_NSS_WATCHDOG.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for NSS_WATCHDOG
 *
 * CMSIS Peripheral Access Layer for NSS_WATCHDOG
 */

#if !defined(PERI_NSS_WATCHDOG_H_)
#define PERI_NSS_WATCHDOG_H_                     /**< Symbol preventing repeated inclusion */

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
   -- NSS_WATCHDOG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_WATCHDOG_Peripheral_Access_Layer NSS_WATCHDOG Peripheral Access Layer
 * @{
 */

/** NSS_WATCHDOG - Register Layout Typedef */
typedef struct {
  __IO uint32_t WDCFG;                             /**< Watchdog configuration register, offset: 0x0 */
  __I  uint32_t WDSTATUS;                          /**< Current counter value, offset: 0x4 */
  __O  uint32_t WDRST;                             /**< Resets the watchdog timer count, offset: 0x8 */
} NSS_WATCHDOG_Type;

/* ----------------------------------------------------------------------------
   -- NSS_WATCHDOG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_WATCHDOG_Register_Masks NSS_WATCHDOG Register Masks
 * @{
 */

/*! @name WDCFG - Watchdog configuration register */
/*! @{ */

#define NSS_WATCHDOG_WDCFG_STROBEEVENT_MASK      (0x3FU)
#define NSS_WATCHDOG_WDCFG_STROBEEVENT_SHIFT     (0U)
/*! StrobeEvent - Event to be count occured on NSS eventbus
 *  0b000000..NSS timer0 event
 *  0b000001..NSS timer1 event
 *  0b000010..NSS timer2 event
 *  0b000011..NSS timer3 event
 *  0b000100..NSS timer4 event
 *  0b000101..NSS timer5 event
 *  0b000110..Ethos U85 IRQ event
 *  0b000111..Ethos U85 IRQ modulo n event
 *  0b001000..Event 0 of a programmable DNN RAM slice
 *  0b001001..Event 1 of a programmable DNN RAM slice
 *  0b001010..Event 2 of a programmable DNN RAM slice
 *  0b001011..Event 3 of a programmable DNN RAM slice
 *  0b001100..Event 4 of a programmable DNN RAM slice
 *  0b001101..Event 5 of a programmable DNN RAM slice
 *  0b001110..Event 6 of a programmable DNN RAM slice
 *  0b001111..Event 7 of a programmable DNN RAM slice
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
 */
#define NSS_WATCHDOG_WDCFG_STROBEEVENT(x)        (((uint32_t)(((uint32_t)(x)) << NSS_WATCHDOG_WDCFG_STROBEEVENT_SHIFT)) & NSS_WATCHDOG_WDCFG_STROBEEVENT_MASK)

#define NSS_WATCHDOG_WDCFG_ENABLE_MASK           (0x40U)
#define NSS_WATCHDOG_WDCFG_ENABLE_SHIFT          (6U)
/*! Enable - Enables the watchdog timer. Once enabled, a watchdog timer can only be disabled by
 *    resetting the system or when the ip_debug_mode input pin is set high
 *  0b0..false
 *  0b1..true
 */
#define NSS_WATCHDOG_WDCFG_ENABLE(x)             (((uint32_t)(((uint32_t)(x)) << NSS_WATCHDOG_WDCFG_ENABLE_SHIFT)) & NSS_WATCHDOG_WDCFG_ENABLE_MASK)

#define NSS_WATCHDOG_WDCFG_CNTLIMIT_MASK         (0x780U)
#define NSS_WATCHDOG_WDCFG_CNTLIMIT_SHIFT        (7U)
/*! CntLimit - Number of strobes to receive before signaling a watchdog timer error. This number must be greater than 0. */
#define NSS_WATCHDOG_WDCFG_CNTLIMIT(x)           (((uint32_t)(((uint32_t)(x)) << NSS_WATCHDOG_WDCFG_CNTLIMIT_SHIFT)) & NSS_WATCHDOG_WDCFG_CNTLIMIT_MASK)
/*! @} */

/*! @name WDSTATUS - Current counter value */
/*! @{ */

#define NSS_WATCHDOG_WDSTATUS_COUNT_MASK         (0xFU)
#define NSS_WATCHDOG_WDSTATUS_COUNT_SHIFT        (0U)
/*! count - value */
#define NSS_WATCHDOG_WDSTATUS_COUNT(x)           (((uint32_t)(((uint32_t)(x)) << NSS_WATCHDOG_WDSTATUS_COUNT_SHIFT)) & NSS_WATCHDOG_WDSTATUS_COUNT_MASK)
/*! @} */

/*! @name WDRST - Resets the watchdog timer count */
/*! @{ */

#define NSS_WATCHDOG_WDRST_WATCHDOG_RESET_MASK   (0xFFFFFFU)
#define NSS_WATCHDOG_WDRST_WATCHDOG_RESET_SHIFT  (0U)
/*! watchdog_reset - A write to this field with watchdog_reset_word resets the current counter value
 *  0b110011111101010101101110..When this value is written, the watchdog count value is reset to zero
 */
#define NSS_WATCHDOG_WDRST_WATCHDOG_RESET(x)     (((uint32_t)(((uint32_t)(x)) << NSS_WATCHDOG_WDRST_WATCHDOG_RESET_SHIFT)) & NSS_WATCHDOG_WDRST_WATCHDOG_RESET_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group NSS_WATCHDOG_Register_Masks */


/*!
 * @}
 */ /* end of group NSS_WATCHDOG_Peripheral_Access_Layer */


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


#endif  /* PERI_NSS_WATCHDOG_H_ */

