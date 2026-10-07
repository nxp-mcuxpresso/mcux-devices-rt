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
**         CMSIS Peripheral Access Layer for NSS_DBG_GPO
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
 * @file PERI_NSS_DBG_GPO.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for NSS_DBG_GPO
 *
 * CMSIS Peripheral Access Layer for NSS_DBG_GPO
 */

#if !defined(PERI_NSS_DBG_GPO_H_)
#define PERI_NSS_DBG_GPO_H_                      /**< Symbol preventing repeated inclusion */

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
   -- NSS_DBG_GPO Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_DBG_GPO_Peripheral_Access_Layer NSS_DBG_GPO Peripheral Access Layer
 * @{
 */

/** NSS_DBG_GPO - Size of Registers Arrays */
#define NSS_DBG_GPO_EVSEL_COUNT                   8u

/** NSS_DBG_GPO - Register Layout Typedef */
typedef struct {
  __IO uint32_t MODE;                              /**< Set sw/gp mode for each dbg_gpo, offset: 0x0 */
  __IO uint32_t GPOUTPUT;                          /**< Set/clear value of each dbg_gpo gpOutput register, offset: 0x4 */
  __IO uint32_t GPSET;                             /**< Set value of each dbg_gpo gpOutput register, offset: 0x8 */
  __IO uint32_t GPCLR;                             /**< Clear value of each dbg_gpo gpOutput register, offset: 0xC */
  __IO uint32_t GPTOGGLE;                          /**< Toggle value of each dbg_gpo gpOutput register, offset: 0x10 */
  __IO uint32_t EVMODE;                            /**< Set the event mode for each dbg_gpo, offset: 0x14 */
  __IO uint32_t EVSEL[NSS_DBG_GPO_EVSEL_COUNT];    /**< Select which event is coupled., array offset: 0x18, array step: 0x4 */
} NSS_DBG_GPO_Type;

/* ----------------------------------------------------------------------------
   -- NSS_DBG_GPO Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_DBG_GPO_Register_Masks NSS_DBG_GPO Register Masks
 * @{
 */

/*! @name MODE - Set sw/gp mode for each dbg_gpo */
/*! @{ */

#define NSS_DBG_GPO_MODE_VAL_MASK                (0xFFU)
#define NSS_DBG_GPO_MODE_VAL_SHIFT               (0U)
/*! val - bitfield to set the mode for each debug output; bit0 = dbg_gpo_0, bit 1 = dbg_gpo_1... */
#define NSS_DBG_GPO_MODE_VAL(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_DBG_GPO_MODE_VAL_SHIFT)) & NSS_DBG_GPO_MODE_VAL_MASK)
/*! @} */

/*! @name GPOUTPUT - Set/clear value of each dbg_gpo gpOutput register */
/*! @{ */

#define NSS_DBG_GPO_GPOUTPUT_VAL_MASK            (0xFFU)
#define NSS_DBG_GPO_GPOUTPUT_VAL_SHIFT           (0U)
/*! val - bitfield to set/clear each debug output; bit0 = dbg_gpo_0, bit 1 = dbg_gpo_1... */
#define NSS_DBG_GPO_GPOUTPUT_VAL(x)              (((uint32_t)(((uint32_t)(x)) << NSS_DBG_GPO_GPOUTPUT_VAL_SHIFT)) & NSS_DBG_GPO_GPOUTPUT_VAL_MASK)
/*! @} */

/*! @name GPSET - Set value of each dbg_gpo gpOutput register */
/*! @{ */

#define NSS_DBG_GPO_GPSET_VAL_MASK               (0xFFU)
#define NSS_DBG_GPO_GPSET_VAL_SHIFT              (0U)
/*! val - bitfield to set each debug output; bit0 = dbg_gpo_0, bit 1 = dbg_gpo_1... Write 1 to set a
 *    bitfield. Write 0 is ignored. Read gives 0.
 */
#define NSS_DBG_GPO_GPSET_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_DBG_GPO_GPSET_VAL_SHIFT)) & NSS_DBG_GPO_GPSET_VAL_MASK)
/*! @} */

/*! @name GPCLR - Clear value of each dbg_gpo gpOutput register */
/*! @{ */

#define NSS_DBG_GPO_GPCLR_VAL_MASK               (0xFFU)
#define NSS_DBG_GPO_GPCLR_VAL_SHIFT              (0U)
/*! val - bitfield to clear each debug output; bit0 = dbg_gpo_0, bit 1 = dbg_gpo_1... Write 1 to
 *    clear a bitfield. Write 0 is ignored. Read gives 0.
 */
#define NSS_DBG_GPO_GPCLR_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_DBG_GPO_GPCLR_VAL_SHIFT)) & NSS_DBG_GPO_GPCLR_VAL_MASK)
/*! @} */

/*! @name GPTOGGLE - Toggle value of each dbg_gpo gpOutput register */
/*! @{ */

#define NSS_DBG_GPO_GPTOGGLE_VAL_MASK            (0xFFU)
#define NSS_DBG_GPO_GPTOGGLE_VAL_SHIFT           (0U)
/*! val - bitfield to toggle each debug output; bit0 = dbg_gpo_0, bit 1 = dbg_gpo_1... Write 1 to
 *    toggle a bitfield. Write 0 is ignored. Read gives 0.
 */
#define NSS_DBG_GPO_GPTOGGLE_VAL(x)              (((uint32_t)(((uint32_t)(x)) << NSS_DBG_GPO_GPTOGGLE_VAL_SHIFT)) & NSS_DBG_GPO_GPTOGGLE_VAL_MASK)
/*! @} */

/*! @name EVMODE - Set the event mode for each dbg_gpo */
/*! @{ */

#define NSS_DBG_GPO_EVMODE_VAL_MASK              (0xFFU)
#define NSS_DBG_GPO_EVMODE_VAL_SHIFT             (0U)
/*! val - bitfield to set the event mode for each debug output; bit0 = dbg_gpo_0, bit 1 = dbg_gpo_1... */
#define NSS_DBG_GPO_EVMODE_VAL(x)                (((uint32_t)(((uint32_t)(x)) << NSS_DBG_GPO_EVMODE_VAL_SHIFT)) & NSS_DBG_GPO_EVMODE_VAL_MASK)
/*! @} */

/*! @name EVSEL - Select which event is coupled. */
/*! @{ */

#define NSS_DBG_GPO_EVSEL_EVENTS_MASK            (0x3FU)
#define NSS_DBG_GPO_EVSEL_EVENTS_SHIFT           (0U)
/*! events
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
#define NSS_DBG_GPO_EVSEL_EVENTS(x)              (((uint32_t)(((uint32_t)(x)) << NSS_DBG_GPO_EVSEL_EVENTS_SHIFT)) & NSS_DBG_GPO_EVSEL_EVENTS_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group NSS_DBG_GPO_Register_Masks */


/*!
 * @}
 */ /* end of group NSS_DBG_GPO_Peripheral_Access_Layer */


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


#endif  /* PERI_NSS_DBG_GPO_H_ */

