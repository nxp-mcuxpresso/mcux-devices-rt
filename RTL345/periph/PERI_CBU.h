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
**         CMSIS Peripheral Access Layer for CBU
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
 * @file PERI_CBU.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for CBU
 *
 * CMSIS Peripheral Access Layer for CBU
 */

#if !defined(PERI_CBU_H_)
#define PERI_CBU_H_                              /**< Symbol preventing repeated inclusion */

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
   -- CBU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CBU_Peripheral_Access_Layer CBU Peripheral Access Layer
 * @{
 */

/** CBU - Register Layout Typedef */
typedef struct {
  __IO uint32_t DSP3_0_CROSSBREAK_CFG;             /**< Crossbreak debug configuration register for DSP3 0, offset: 0x0 */
  __IO uint32_t DSP3_1_CROSSBREAK_CFG;             /**< Crossbreak debug configuration register for DSP3 1, offset: 0x4 */
  __IO uint32_t XSP_CROSSBREAK_CFG;                /**< Crossbreak debug configuration register for XSP, offset: 0x8 */
  __IO uint32_t CM55_CSS_CROSSBREAK_CFG;           /**< Crossbreak debug configuration register for CSS Cortex M55, offset: 0xC */
  __IO uint32_t CM55_NSS_CROSSBREAK_CFG;           /**< Crossbreak debug configuration register for NSS Cortex M55, offset: 0x10 */
  __IO uint32_t HIFI5S_CROSSBREAK_CFG;             /**< Crossbreak debug configuration register for HiFi5s, offset: 0x14 */
  __IO uint32_t WD_DSP3_0_CROSSBREAK_CFG;          /**< Crossbreak debug configuration register for the DSP3 0 watchdog, offset: 0x18 */
  __IO uint32_t WD_DSP3_1_CROSSBREAK_CFG;          /**< Crossbreak debug configuration register for the DSP3 1 watchdog, offset: 0x1C */
  __IO uint32_t WD_XSP_CROSSBREAK_CFG;             /**< Crossbreak debug configuration register for the XSP watchdog, offset: 0x20 */
  __IO uint32_t WD_CM55_CSS_CROSSBREAK_CFG;        /**< Crossbreak debug configuration register for the CSS Cortex M55 watchdog, offset: 0x24 */
  __IO uint32_t WD_CM55_NSS_CROSSBREAK_CFG;        /**< Crossbreak debug configuration register for the NSS Cortex M55 watchdog, offset: 0x28 */
  __IO uint32_t WD_HIFI5S_CROSSBREAK_CFG;          /**< Crossbreak debug configuration register for the HiFi5s watchdog, offset: 0x2C */
  __IO uint32_t DSS_TC_CROSSBREAK_CFG;             /**< Crossbreak debug configuration register for the DSS timers, offset: 0x30 */
  __IO uint32_t DSS_DP_TC_CROSSBREAK_CFG;          /**< Crossbreak debug configuration register for the DSS DP timers, offset: 0x34 */
  __IO uint32_t DSS_SS_CROSSBREAK_CFG;             /**< Crossbreak debug configuration register for the SyncSource, offset: 0x38 */
  __IO uint32_t DSS_HSI_CROSSBREAK_CFG;            /**< Crossbreak debug configuration register for the HSI Bus, offset: 0x3C */
  __IO uint32_t DSS_PM_CROSSBREAK_CFG;             /**< Crossbreak debug configuration register for the DSS performance monitor, offset: 0x40 */
  __IO uint32_t NSS_TC_CROSSBREAK_CFG;             /**< Crossbreak debug configuration register for the NSS timers, offset: 0x44 */
  __IO uint32_t NSS_ETHOS_CROSSBREAK_CFG;          /**< Crossbreak debug configuration register for the NSS Ethos, offset: 0x48 */
  __IO uint32_t CSS_TC_CROSSBREAK_CFG;             /**< Crossbreak debug configuration register for the CSS timers, offset: 0x4C */
  __IO uint32_t PMRC_LF_TC_CROSSBREAK_CFG;         /**< Crossbreak debug configuration register for the PMRC LF-timer, offset: 0x50 */
  __IO uint32_t EVENT_CROSSBREAK_CFG;              /**< Crossbreak debug break configuration register, offset: 0x54 */
  __IO uint32_t RESTART_EVENT_CROSSBREAK_CFG;      /**< Selects the event of the event_bus that will be used to restart, offset: 0x58 */
  __IO uint32_t DSP3_0_CROSSBREAK_RESTART_CFG;     /**< Crossbreak debug configuration restart register for DSP3 0, offset: 0x5C */
  __IO uint32_t DSP3_1_CROSSBREAK_RESTART_CFG;     /**< Crossbreak debug configuration restart register for DSP3 1, offset: 0x60 */
  __IO uint32_t XSP_CROSSBREAK_RESTART_CFG;        /**< Crossbreak debug configuration restart register for XSP, offset: 0x64 */
  __IO uint32_t CM55_CSS_CROSSBREAK_RESTART_CFG;   /**< Crossbreak debug configuration restart register for CSS Cortex M55, offset: 0x68 */
  __IO uint32_t CM55_NSS_CROSSBREAK_RESTART_CFG;   /**< Crossbreak debug configuration restart register for NSS Cortex M55, offset: 0x6C */
  __IO uint32_t HIFI5S_CROSSBREAK_RESTART_CFG;     /**< Crossbreak debug configuration restart register for HiFi5s, offset: 0x70 */
  __O  uint32_t SW_TRIGGER;                        /**< Software controlled triggers for the crossbreak module, offset: 0x74 */
} CBU_Type;

/* ----------------------------------------------------------------------------
   -- CBU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CBU_Register_Masks CBU Register Masks
 * @{
 */

/*! @name DSP3_0_CROSSBREAK_CFG - Crossbreak debug configuration register for DSP3 0 */
/*! @{ */

#define CBU_DSP3_0_CROSSBREAK_CFG_DSP1_MASK      (0x2U)
#define CBU_DSP3_0_CROSSBREAK_CFG_DSP1_SHIFT     (1U)
/*! dsp1 - Break on DSP3 1 breakpoint when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_CFG_DSP1(x)        (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_DSP3_0_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_DSP3_0_CROSSBREAK_CFG_XSP_MASK       (0x4U)
#define CBU_DSP3_0_CROSSBREAK_CFG_XSP_SHIFT      (2U)
/*! xsp - Break on XSP breakpoint when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_CFG_XSP(x)         (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_DSP3_0_CROSSBREAK_CFG_XSP_MASK)

#define CBU_DSP3_0_CROSSBREAK_CFG_CM55_CSS_MASK  (0x8U)
#define CBU_DSP3_0_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Break on CSS Cortex M55 breakpoint when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_CFG_CM55_CSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_DSP3_0_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_DSP3_0_CROSSBREAK_CFG_CM55_NSS_MASK  (0x10U)
#define CBU_DSP3_0_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Break on NSS Cortex M55 breakpoint when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_CFG_CM55_NSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_DSP3_0_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_DSP3_0_CROSSBREAK_CFG_HIFI5S_MASK    (0x20U)
#define CBU_DSP3_0_CROSSBREAK_CFG_HIFI5S_SHIFT   (5U)
/*! hifi5s - Break on HiFi5s breakpoint when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_CFG_HIFI5S(x)      (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_DSP3_0_CROSSBREAK_CFG_HIFI5S_MASK)

#define CBU_DSP3_0_CROSSBREAK_CFG_EVENT_MASK     (0x40U)
#define CBU_DSP3_0_CROSSBREAK_CFG_EVENT_SHIFT    (6U)
/*! event - Break on (DSS or NSS or CSS) event when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_CFG_EVENT(x)       (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_CFG_EVENT_SHIFT)) & CBU_DSP3_0_CROSSBREAK_CFG_EVENT_MASK)

#define CBU_DSP3_0_CROSSBREAK_CFG_ERROR_MASK     (0x80U)
#define CBU_DSP3_0_CROSSBREAK_CFG_ERROR_SHIFT    (7U)
/*! error - Break on (DSS or NSS) EDU error signal when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_CFG_ERROR(x)       (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_CFG_ERROR_SHIFT)) & CBU_DSP3_0_CROSSBREAK_CFG_ERROR_MASK)

#define CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER0_MASK (0x100U)
#define CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER0_SHIFT (8U)
/*! sw_trigger0 - Break on SW trigger 0 when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER0(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER0_SHIFT)) & CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER0_MASK)

#define CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER1_MASK (0x200U)
#define CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER1_SHIFT (9U)
/*! sw_trigger1 - Break on SW trigger 1 when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER1(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER1_SHIFT)) & CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER1_MASK)

#define CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER2_MASK (0x400U)
#define CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER2_SHIFT (10U)
/*! sw_trigger2 - Break on SW trigger 2 when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER2(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER2_SHIFT)) & CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER2_MASK)

#define CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER3_MASK (0x800U)
#define CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER3_SHIFT (11U)
/*! sw_trigger3 - Break on SW trigger 3 when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER3(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER3_SHIFT)) & CBU_DSP3_0_CROSSBREAK_CFG_SW_TRIGGER3_MASK)
/*! @} */

/*! @name DSP3_1_CROSSBREAK_CFG - Crossbreak debug configuration register for DSP3 1 */
/*! @{ */

#define CBU_DSP3_1_CROSSBREAK_CFG_DSP0_MASK      (0x1U)
#define CBU_DSP3_1_CROSSBREAK_CFG_DSP0_SHIFT     (0U)
/*! dsp0 - Break on DSP3 0 breakpoint when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_CFG_DSP0(x)        (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_DSP3_1_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_DSP3_1_CROSSBREAK_CFG_XSP_MASK       (0x4U)
#define CBU_DSP3_1_CROSSBREAK_CFG_XSP_SHIFT      (2U)
/*! xsp - Break on XSP breakpoint when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_CFG_XSP(x)         (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_DSP3_1_CROSSBREAK_CFG_XSP_MASK)

#define CBU_DSP3_1_CROSSBREAK_CFG_CM55_CSS_MASK  (0x8U)
#define CBU_DSP3_1_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Break on CSS Cortex M55 breakpoint when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_CFG_CM55_CSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_DSP3_1_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_DSP3_1_CROSSBREAK_CFG_CM55_NSS_MASK  (0x10U)
#define CBU_DSP3_1_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Break on NSS Cortex M55 breakpoint when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_CFG_CM55_NSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_DSP3_1_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_DSP3_1_CROSSBREAK_CFG_HIFI5S_MASK    (0x20U)
#define CBU_DSP3_1_CROSSBREAK_CFG_HIFI5S_SHIFT   (5U)
/*! hifi5s - Break on HiFi5s breakpoint when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_CFG_HIFI5S(x)      (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_DSP3_1_CROSSBREAK_CFG_HIFI5S_MASK)

#define CBU_DSP3_1_CROSSBREAK_CFG_EVENT_MASK     (0x40U)
#define CBU_DSP3_1_CROSSBREAK_CFG_EVENT_SHIFT    (6U)
/*! event - Break on (DSS or NSS or CSS) event when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_CFG_EVENT(x)       (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_CFG_EVENT_SHIFT)) & CBU_DSP3_1_CROSSBREAK_CFG_EVENT_MASK)

#define CBU_DSP3_1_CROSSBREAK_CFG_ERROR_MASK     (0x80U)
#define CBU_DSP3_1_CROSSBREAK_CFG_ERROR_SHIFT    (7U)
/*! error - Break on (DSS or NSS) EDU error signal when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_CFG_ERROR(x)       (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_CFG_ERROR_SHIFT)) & CBU_DSP3_1_CROSSBREAK_CFG_ERROR_MASK)

#define CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER0_MASK (0x100U)
#define CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER0_SHIFT (8U)
/*! sw_trigger0 - Break on SW trigger 0 when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER0(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER0_SHIFT)) & CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER0_MASK)

#define CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER1_MASK (0x200U)
#define CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER1_SHIFT (9U)
/*! sw_trigger1 - Break on SW trigger 1 when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER1(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER1_SHIFT)) & CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER1_MASK)

#define CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER2_MASK (0x400U)
#define CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER2_SHIFT (10U)
/*! sw_trigger2 - Break on SW trigger 2 when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER2(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER2_SHIFT)) & CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER2_MASK)

#define CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER3_MASK (0x800U)
#define CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER3_SHIFT (11U)
/*! sw_trigger3 - Break on SW trigger 3 when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER3(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER3_SHIFT)) & CBU_DSP3_1_CROSSBREAK_CFG_SW_TRIGGER3_MASK)
/*! @} */

/*! @name XSP_CROSSBREAK_CFG - Crossbreak debug configuration register for XSP */
/*! @{ */

#define CBU_XSP_CROSSBREAK_CFG_DSP0_MASK         (0x1U)
#define CBU_XSP_CROSSBREAK_CFG_DSP0_SHIFT        (0U)
/*! dsp0 - Break on DSP3 0 breakpoint when set to 1 */
#define CBU_XSP_CROSSBREAK_CFG_DSP0(x)           (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_XSP_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_XSP_CROSSBREAK_CFG_DSP1_MASK         (0x2U)
#define CBU_XSP_CROSSBREAK_CFG_DSP1_SHIFT        (1U)
/*! dsp1 - Break on DSP3 1 breakpoint when set to 1 */
#define CBU_XSP_CROSSBREAK_CFG_DSP1(x)           (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_XSP_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_XSP_CROSSBREAK_CFG_CM55_CSS_MASK     (0x8U)
#define CBU_XSP_CROSSBREAK_CFG_CM55_CSS_SHIFT    (3U)
/*! cm55_css - Break on CSS Cortex M55 breakpoint when set to 1 */
#define CBU_XSP_CROSSBREAK_CFG_CM55_CSS(x)       (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_XSP_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_XSP_CROSSBREAK_CFG_CM55_NSS_MASK     (0x10U)
#define CBU_XSP_CROSSBREAK_CFG_CM55_NSS_SHIFT    (4U)
/*! cm55_nss - Break on NSS Cortex M55 breakpoint when set to 1 */
#define CBU_XSP_CROSSBREAK_CFG_CM55_NSS(x)       (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_XSP_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_XSP_CROSSBREAK_CFG_HIFI5S_MASK       (0x20U)
#define CBU_XSP_CROSSBREAK_CFG_HIFI5S_SHIFT      (5U)
/*! hifi5s - Break on HiFi5s breakpoint when set to 1 */
#define CBU_XSP_CROSSBREAK_CFG_HIFI5S(x)         (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_XSP_CROSSBREAK_CFG_HIFI5S_MASK)

#define CBU_XSP_CROSSBREAK_CFG_EVENT_MASK        (0x40U)
#define CBU_XSP_CROSSBREAK_CFG_EVENT_SHIFT       (6U)
/*! event - Break on (DSS or NSS or CSS) event when set to 1 */
#define CBU_XSP_CROSSBREAK_CFG_EVENT(x)          (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_CFG_EVENT_SHIFT)) & CBU_XSP_CROSSBREAK_CFG_EVENT_MASK)

#define CBU_XSP_CROSSBREAK_CFG_ERROR_MASK        (0x80U)
#define CBU_XSP_CROSSBREAK_CFG_ERROR_SHIFT       (7U)
/*! error - Break on (DSS or NSS) EDU error signal when set to 1 */
#define CBU_XSP_CROSSBREAK_CFG_ERROR(x)          (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_CFG_ERROR_SHIFT)) & CBU_XSP_CROSSBREAK_CFG_ERROR_MASK)

#define CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER0_MASK  (0x100U)
#define CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER0_SHIFT (8U)
/*! sw_trigger0 - Break on SW trigger 0 when set to 1 */
#define CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER0(x)    (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER0_SHIFT)) & CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER0_MASK)

#define CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER1_MASK  (0x200U)
#define CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER1_SHIFT (9U)
/*! sw_trigger1 - Break on SW trigger 1 when set to 1 */
#define CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER1(x)    (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER1_SHIFT)) & CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER1_MASK)

#define CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER2_MASK  (0x400U)
#define CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER2_SHIFT (10U)
/*! sw_trigger2 - Break on SW trigger 2 when set to 1 */
#define CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER2(x)    (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER2_SHIFT)) & CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER2_MASK)

#define CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER3_MASK  (0x800U)
#define CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER3_SHIFT (11U)
/*! sw_trigger3 - Break on SW trigger 3 when set to 1 */
#define CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER3(x)    (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER3_SHIFT)) & CBU_XSP_CROSSBREAK_CFG_SW_TRIGGER3_MASK)
/*! @} */

/*! @name CM55_CSS_CROSSBREAK_CFG - Crossbreak debug configuration register for CSS Cortex M55 */
/*! @{ */

#define CBU_CM55_CSS_CROSSBREAK_CFG_DSP0_MASK    (0x1U)
#define CBU_CM55_CSS_CROSSBREAK_CFG_DSP0_SHIFT   (0U)
/*! dsp0 - Break on DSP3 0 breakpoint when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_CFG_DSP0(x)      (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_CM55_CSS_CROSSBREAK_CFG_DSP1_MASK    (0x2U)
#define CBU_CM55_CSS_CROSSBREAK_CFG_DSP1_SHIFT   (1U)
/*! dsp1 - Break on DSP3 1 breakpoint when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_CFG_DSP1(x)      (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_CM55_CSS_CROSSBREAK_CFG_XSP_MASK     (0x4U)
#define CBU_CM55_CSS_CROSSBREAK_CFG_XSP_SHIFT    (2U)
/*! xsp - Break on XSP breakpoint when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_CFG_XSP(x)       (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_CFG_XSP_MASK)

#define CBU_CM55_CSS_CROSSBREAK_CFG_CM55_NSS_MASK (0x10U)
#define CBU_CM55_CSS_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Break on NSS Cortex M55 breakpoint when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_CFG_CM55_NSS(x)  (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_CM55_CSS_CROSSBREAK_CFG_HIFI5S_MASK  (0x20U)
#define CBU_CM55_CSS_CROSSBREAK_CFG_HIFI5S_SHIFT (5U)
/*! hifi5s - Break on HiFi5s breakpoint when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_CFG_HIFI5S(x)    (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_CFG_HIFI5S_MASK)

#define CBU_CM55_CSS_CROSSBREAK_CFG_EVENT_MASK   (0x40U)
#define CBU_CM55_CSS_CROSSBREAK_CFG_EVENT_SHIFT  (6U)
/*! event - Break on (DSS or NSS or CSS) event when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_CFG_EVENT(x)     (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_CFG_EVENT_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_CFG_EVENT_MASK)

#define CBU_CM55_CSS_CROSSBREAK_CFG_ERROR_MASK   (0x80U)
#define CBU_CM55_CSS_CROSSBREAK_CFG_ERROR_SHIFT  (7U)
/*! error - Break on (DSS or NSS) EDU error signal when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_CFG_ERROR(x)     (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_CFG_ERROR_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_CFG_ERROR_MASK)

#define CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER0_MASK (0x100U)
#define CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER0_SHIFT (8U)
/*! sw_trigger0 - Break on SW trigger 0 when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER0(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER0_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER0_MASK)

#define CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER1_MASK (0x200U)
#define CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER1_SHIFT (9U)
/*! sw_trigger1 - Break on SW trigger 1 when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER1(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER1_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER1_MASK)

#define CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER2_MASK (0x400U)
#define CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER2_SHIFT (10U)
/*! sw_trigger2 - Break on SW trigger 2 when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER2(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER2_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER2_MASK)

#define CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER3_MASK (0x800U)
#define CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER3_SHIFT (11U)
/*! sw_trigger3 - Break on SW trigger 3 when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER3(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER3_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_CFG_SW_TRIGGER3_MASK)
/*! @} */

/*! @name CM55_NSS_CROSSBREAK_CFG - Crossbreak debug configuration register for NSS Cortex M55 */
/*! @{ */

#define CBU_CM55_NSS_CROSSBREAK_CFG_DSP0_MASK    (0x1U)
#define CBU_CM55_NSS_CROSSBREAK_CFG_DSP0_SHIFT   (0U)
/*! dsp0 - Break on DSP3 0 breakpoint when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_CFG_DSP0(x)      (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_CM55_NSS_CROSSBREAK_CFG_DSP1_MASK    (0x2U)
#define CBU_CM55_NSS_CROSSBREAK_CFG_DSP1_SHIFT   (1U)
/*! dsp1 - Break on DSP3 1 breakpoint when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_CFG_DSP1(x)      (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_CM55_NSS_CROSSBREAK_CFG_XSP_MASK     (0x4U)
#define CBU_CM55_NSS_CROSSBREAK_CFG_XSP_SHIFT    (2U)
/*! xsp - Break on XSP breakpoint when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_CFG_XSP(x)       (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_CFG_XSP_MASK)

#define CBU_CM55_NSS_CROSSBREAK_CFG_CM55_CSS_MASK (0x8U)
#define CBU_CM55_NSS_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Break on CSS Cortex M55 breakpoint when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_CFG_CM55_CSS(x)  (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_CM55_NSS_CROSSBREAK_CFG_HIFI5S_MASK  (0x20U)
#define CBU_CM55_NSS_CROSSBREAK_CFG_HIFI5S_SHIFT (5U)
/*! hifi5s - Break on HiFi5s breakpoint when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_CFG_HIFI5S(x)    (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_CFG_HIFI5S_MASK)

#define CBU_CM55_NSS_CROSSBREAK_CFG_EVENT_MASK   (0x40U)
#define CBU_CM55_NSS_CROSSBREAK_CFG_EVENT_SHIFT  (6U)
/*! event - Break on (DSS or NSS or CSS) event when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_CFG_EVENT(x)     (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_CFG_EVENT_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_CFG_EVENT_MASK)

#define CBU_CM55_NSS_CROSSBREAK_CFG_ERROR_MASK   (0x80U)
#define CBU_CM55_NSS_CROSSBREAK_CFG_ERROR_SHIFT  (7U)
/*! error - Break on (DSS or NSS) EDU error signal when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_CFG_ERROR(x)     (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_CFG_ERROR_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_CFG_ERROR_MASK)

#define CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER0_MASK (0x100U)
#define CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER0_SHIFT (8U)
/*! sw_trigger0 - Break on SW trigger 0 when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER0(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER0_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER0_MASK)

#define CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER1_MASK (0x200U)
#define CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER1_SHIFT (9U)
/*! sw_trigger1 - Break on SW trigger 1 when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER1(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER1_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER1_MASK)

#define CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER2_MASK (0x400U)
#define CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER2_SHIFT (10U)
/*! sw_trigger2 - Break on SW trigger 2 when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER2(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER2_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER2_MASK)

#define CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER3_MASK (0x800U)
#define CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER3_SHIFT (11U)
/*! sw_trigger3 - Break on SW trigger 3 when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER3(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER3_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_CFG_SW_TRIGGER3_MASK)
/*! @} */

/*! @name HIFI5S_CROSSBREAK_CFG - Crossbreak debug configuration register for HiFi5s */
/*! @{ */

#define CBU_HIFI5S_CROSSBREAK_CFG_DSP0_MASK      (0x1U)
#define CBU_HIFI5S_CROSSBREAK_CFG_DSP0_SHIFT     (0U)
/*! dsp0 - Break on DSP3 0 breakpoint when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_CFG_DSP0(x)        (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_HIFI5S_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_HIFI5S_CROSSBREAK_CFG_DSP1_MASK      (0x2U)
#define CBU_HIFI5S_CROSSBREAK_CFG_DSP1_SHIFT     (1U)
/*! dsp1 - Break on DSP3 1 breakpoint when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_CFG_DSP1(x)        (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_HIFI5S_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_HIFI5S_CROSSBREAK_CFG_XSP_MASK       (0x4U)
#define CBU_HIFI5S_CROSSBREAK_CFG_XSP_SHIFT      (2U)
/*! xsp - Break on XSP breakpoint when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_CFG_XSP(x)         (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_HIFI5S_CROSSBREAK_CFG_XSP_MASK)

#define CBU_HIFI5S_CROSSBREAK_CFG_CM55_CSS_MASK  (0x8U)
#define CBU_HIFI5S_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Break on CSS Cortex M55 breakpoint when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_CFG_CM55_CSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_HIFI5S_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_HIFI5S_CROSSBREAK_CFG_CM55_NSS_MASK  (0x10U)
#define CBU_HIFI5S_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Break on NSS Cortex M55 breakpoint when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_CFG_CM55_NSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_HIFI5S_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_HIFI5S_CROSSBREAK_CFG_EVENT_MASK     (0x40U)
#define CBU_HIFI5S_CROSSBREAK_CFG_EVENT_SHIFT    (6U)
/*! event - Break on (DSS or NSS or CSS) event when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_CFG_EVENT(x)       (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_CFG_EVENT_SHIFT)) & CBU_HIFI5S_CROSSBREAK_CFG_EVENT_MASK)

#define CBU_HIFI5S_CROSSBREAK_CFG_ERROR_MASK     (0x80U)
#define CBU_HIFI5S_CROSSBREAK_CFG_ERROR_SHIFT    (7U)
/*! error - Break on (DSS or NSS) EDU error signal when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_CFG_ERROR(x)       (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_CFG_ERROR_SHIFT)) & CBU_HIFI5S_CROSSBREAK_CFG_ERROR_MASK)

#define CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER0_MASK (0x100U)
#define CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER0_SHIFT (8U)
/*! sw_trigger0 - Break on SW trigger 0 when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER0(x) (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER0_SHIFT)) & CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER0_MASK)

#define CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER1_MASK (0x200U)
#define CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER1_SHIFT (9U)
/*! sw_trigger1 - Break on SW trigger 1 when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER1(x) (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER1_SHIFT)) & CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER1_MASK)

#define CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER2_MASK (0x400U)
#define CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER2_SHIFT (10U)
/*! sw_trigger2 - Break on SW trigger 2 when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER2(x) (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER2_SHIFT)) & CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER2_MASK)

#define CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER3_MASK (0x800U)
#define CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER3_SHIFT (11U)
/*! sw_trigger3 - Break on SW trigger 3 when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER3(x) (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER3_SHIFT)) & CBU_HIFI5S_CROSSBREAK_CFG_SW_TRIGGER3_MASK)
/*! @} */

/*! @name WD_DSP3_0_CROSSBREAK_CFG - Crossbreak debug configuration register for the DSP3 0 watchdog */
/*! @{ */

#define CBU_WD_DSP3_0_CROSSBREAK_CFG_DSP1_MASK   (0x2U)
#define CBU_WD_DSP3_0_CROSSBREAK_CFG_DSP1_SHIFT  (1U)
/*! dsp1 - Halt watchdog of DSP3 0 when DSP3 1 is in debug mode when set to 1 */
#define CBU_WD_DSP3_0_CROSSBREAK_CFG_DSP1(x)     (((uint32_t)(((uint32_t)(x)) << CBU_WD_DSP3_0_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_WD_DSP3_0_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_WD_DSP3_0_CROSSBREAK_CFG_XSP_MASK    (0x4U)
#define CBU_WD_DSP3_0_CROSSBREAK_CFG_XSP_SHIFT   (2U)
/*! xsp - Halt watchdog of DSP3 0 when XSP is in debug mode when set to 1 */
#define CBU_WD_DSP3_0_CROSSBREAK_CFG_XSP(x)      (((uint32_t)(((uint32_t)(x)) << CBU_WD_DSP3_0_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_WD_DSP3_0_CROSSBREAK_CFG_XSP_MASK)

#define CBU_WD_DSP3_0_CROSSBREAK_CFG_CM55_CSS_MASK (0x8U)
#define CBU_WD_DSP3_0_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Halt watchdog of DSP3 0 when CSS Cortex M55 is in debug mode when set to 1 */
#define CBU_WD_DSP3_0_CROSSBREAK_CFG_CM55_CSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_WD_DSP3_0_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_WD_DSP3_0_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_WD_DSP3_0_CROSSBREAK_CFG_CM55_NSS_MASK (0x10U)
#define CBU_WD_DSP3_0_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Halt watchdog of DSP3 0 when NSS Cortex M55 is in debug mode when set to 1 */
#define CBU_WD_DSP3_0_CROSSBREAK_CFG_CM55_NSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_WD_DSP3_0_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_WD_DSP3_0_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_WD_DSP3_0_CROSSBREAK_CFG_HIFI5S_MASK (0x20U)
#define CBU_WD_DSP3_0_CROSSBREAK_CFG_HIFI5S_SHIFT (5U)
/*! hifi5s - Halt watchdog of DSP3 0 when HiFi5s is in debug mode when set to 1 */
#define CBU_WD_DSP3_0_CROSSBREAK_CFG_HIFI5S(x)   (((uint32_t)(((uint32_t)(x)) << CBU_WD_DSP3_0_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_WD_DSP3_0_CROSSBREAK_CFG_HIFI5S_MASK)
/*! @} */

/*! @name WD_DSP3_1_CROSSBREAK_CFG - Crossbreak debug configuration register for the DSP3 1 watchdog */
/*! @{ */

#define CBU_WD_DSP3_1_CROSSBREAK_CFG_DSP0_MASK   (0x1U)
#define CBU_WD_DSP3_1_CROSSBREAK_CFG_DSP0_SHIFT  (0U)
/*! dsp0 - Halt watchdog of DSP3 1 when DSP3 0 is in debug mode when set to 1 */
#define CBU_WD_DSP3_1_CROSSBREAK_CFG_DSP0(x)     (((uint32_t)(((uint32_t)(x)) << CBU_WD_DSP3_1_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_WD_DSP3_1_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_WD_DSP3_1_CROSSBREAK_CFG_XSP_MASK    (0x4U)
#define CBU_WD_DSP3_1_CROSSBREAK_CFG_XSP_SHIFT   (2U)
/*! xsp - Halt watchdog of DSP3 1 when XSP is in debug mode when set to 1 */
#define CBU_WD_DSP3_1_CROSSBREAK_CFG_XSP(x)      (((uint32_t)(((uint32_t)(x)) << CBU_WD_DSP3_1_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_WD_DSP3_1_CROSSBREAK_CFG_XSP_MASK)

#define CBU_WD_DSP3_1_CROSSBREAK_CFG_CM55_CSS_MASK (0x8U)
#define CBU_WD_DSP3_1_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Halt watchdog of DSP3 1 when CSS Cortex M55 is in debug mode when set to 1 */
#define CBU_WD_DSP3_1_CROSSBREAK_CFG_CM55_CSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_WD_DSP3_1_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_WD_DSP3_1_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_WD_DSP3_1_CROSSBREAK_CFG_CM55_NSS_MASK (0x10U)
#define CBU_WD_DSP3_1_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Halt watchdog of DSP3 1 when NSS Cortex M55 is in debug mode when set to 1 */
#define CBU_WD_DSP3_1_CROSSBREAK_CFG_CM55_NSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_WD_DSP3_1_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_WD_DSP3_1_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_WD_DSP3_1_CROSSBREAK_CFG_HIFI5S_MASK (0x20U)
#define CBU_WD_DSP3_1_CROSSBREAK_CFG_HIFI5S_SHIFT (5U)
/*! hifi5s - Halt watchdog of DSP3 1 when HiFi5s is in debug mode when set to 1 */
#define CBU_WD_DSP3_1_CROSSBREAK_CFG_HIFI5S(x)   (((uint32_t)(((uint32_t)(x)) << CBU_WD_DSP3_1_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_WD_DSP3_1_CROSSBREAK_CFG_HIFI5S_MASK)
/*! @} */

/*! @name WD_XSP_CROSSBREAK_CFG - Crossbreak debug configuration register for the XSP watchdog */
/*! @{ */

#define CBU_WD_XSP_CROSSBREAK_CFG_DSP0_MASK      (0x1U)
#define CBU_WD_XSP_CROSSBREAK_CFG_DSP0_SHIFT     (0U)
/*! dsp0 - Halt watchdog of XSP when DSP3 0 is in debug mode when set to 1 */
#define CBU_WD_XSP_CROSSBREAK_CFG_DSP0(x)        (((uint32_t)(((uint32_t)(x)) << CBU_WD_XSP_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_WD_XSP_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_WD_XSP_CROSSBREAK_CFG_DSP1_MASK      (0x2U)
#define CBU_WD_XSP_CROSSBREAK_CFG_DSP1_SHIFT     (1U)
/*! dsp1 - Halt watchdog of XSP when DSP3 1 is in debug mode when set to 1 */
#define CBU_WD_XSP_CROSSBREAK_CFG_DSP1(x)        (((uint32_t)(((uint32_t)(x)) << CBU_WD_XSP_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_WD_XSP_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_WD_XSP_CROSSBREAK_CFG_CM55_CSS_MASK  (0x8U)
#define CBU_WD_XSP_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Halt watchdog of XSP when CSS Cortex M55 is in debug mode when set to 1 */
#define CBU_WD_XSP_CROSSBREAK_CFG_CM55_CSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_WD_XSP_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_WD_XSP_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_WD_XSP_CROSSBREAK_CFG_CM55_NSS_MASK  (0x10U)
#define CBU_WD_XSP_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Halt watchdog of XSP when NSS Cortex M55 is in debug mode when set to 1 */
#define CBU_WD_XSP_CROSSBREAK_CFG_CM55_NSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_WD_XSP_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_WD_XSP_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_WD_XSP_CROSSBREAK_CFG_HIFI5S_MASK    (0x20U)
#define CBU_WD_XSP_CROSSBREAK_CFG_HIFI5S_SHIFT   (5U)
/*! hifi5s - Halt watchdog of XSP when HiFi5s is in debug mode when set to 1 */
#define CBU_WD_XSP_CROSSBREAK_CFG_HIFI5S(x)      (((uint32_t)(((uint32_t)(x)) << CBU_WD_XSP_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_WD_XSP_CROSSBREAK_CFG_HIFI5S_MASK)
/*! @} */

/*! @name WD_CM55_CSS_CROSSBREAK_CFG - Crossbreak debug configuration register for the CSS Cortex M55 watchdog */
/*! @{ */

#define CBU_WD_CM55_CSS_CROSSBREAK_CFG_DSP0_MASK (0x1U)
#define CBU_WD_CM55_CSS_CROSSBREAK_CFG_DSP0_SHIFT (0U)
/*! dsp0 - Halt watchdog of CSS Cortex M55 when DSP3 0 is in debug mode when set to 1 */
#define CBU_WD_CM55_CSS_CROSSBREAK_CFG_DSP0(x)   (((uint32_t)(((uint32_t)(x)) << CBU_WD_CM55_CSS_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_WD_CM55_CSS_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_WD_CM55_CSS_CROSSBREAK_CFG_DSP1_MASK (0x2U)
#define CBU_WD_CM55_CSS_CROSSBREAK_CFG_DSP1_SHIFT (1U)
/*! dsp1 - Halt watchdog of CSS Cortex M55 when DSP3 1 is in debug mode when set to 1 */
#define CBU_WD_CM55_CSS_CROSSBREAK_CFG_DSP1(x)   (((uint32_t)(((uint32_t)(x)) << CBU_WD_CM55_CSS_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_WD_CM55_CSS_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_WD_CM55_CSS_CROSSBREAK_CFG_XSP_MASK  (0x4U)
#define CBU_WD_CM55_CSS_CROSSBREAK_CFG_XSP_SHIFT (2U)
/*! xsp - Halt watchdog of CSS Cortex M55 when XSP is in debug mode when set to 1 */
#define CBU_WD_CM55_CSS_CROSSBREAK_CFG_XSP(x)    (((uint32_t)(((uint32_t)(x)) << CBU_WD_CM55_CSS_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_WD_CM55_CSS_CROSSBREAK_CFG_XSP_MASK)

#define CBU_WD_CM55_CSS_CROSSBREAK_CFG_CM55_NSS_MASK (0x10U)
#define CBU_WD_CM55_CSS_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Halt watchdog of CSS Cortex M55 when NSS Cortex M55 is in debug mode when set to 1 */
#define CBU_WD_CM55_CSS_CROSSBREAK_CFG_CM55_NSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_WD_CM55_CSS_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_WD_CM55_CSS_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_WD_CM55_CSS_CROSSBREAK_CFG_HIFI5S_MASK (0x20U)
#define CBU_WD_CM55_CSS_CROSSBREAK_CFG_HIFI5S_SHIFT (5U)
/*! hifi5s - Halt watchdog of CSS Cortex M55 when HiFi5s is in debug mode when set to 1 */
#define CBU_WD_CM55_CSS_CROSSBREAK_CFG_HIFI5S(x) (((uint32_t)(((uint32_t)(x)) << CBU_WD_CM55_CSS_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_WD_CM55_CSS_CROSSBREAK_CFG_HIFI5S_MASK)
/*! @} */

/*! @name WD_CM55_NSS_CROSSBREAK_CFG - Crossbreak debug configuration register for the NSS Cortex M55 watchdog */
/*! @{ */

#define CBU_WD_CM55_NSS_CROSSBREAK_CFG_DSP0_MASK (0x1U)
#define CBU_WD_CM55_NSS_CROSSBREAK_CFG_DSP0_SHIFT (0U)
/*! dsp0 - Halt watchdog of NSS Cortex M55 when DSP3 0 is in debug mode when set to 1 */
#define CBU_WD_CM55_NSS_CROSSBREAK_CFG_DSP0(x)   (((uint32_t)(((uint32_t)(x)) << CBU_WD_CM55_NSS_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_WD_CM55_NSS_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_WD_CM55_NSS_CROSSBREAK_CFG_DSP1_MASK (0x2U)
#define CBU_WD_CM55_NSS_CROSSBREAK_CFG_DSP1_SHIFT (1U)
/*! dsp1 - Halt watchdog of NSS Cortex M55 when DSP3 1 is in debug mode when set to 1 */
#define CBU_WD_CM55_NSS_CROSSBREAK_CFG_DSP1(x)   (((uint32_t)(((uint32_t)(x)) << CBU_WD_CM55_NSS_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_WD_CM55_NSS_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_WD_CM55_NSS_CROSSBREAK_CFG_XSP_MASK  (0x4U)
#define CBU_WD_CM55_NSS_CROSSBREAK_CFG_XSP_SHIFT (2U)
/*! xsp - Halt watchdog of NSS Cortex M55 when XSP is in debug mode when set to 1 */
#define CBU_WD_CM55_NSS_CROSSBREAK_CFG_XSP(x)    (((uint32_t)(((uint32_t)(x)) << CBU_WD_CM55_NSS_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_WD_CM55_NSS_CROSSBREAK_CFG_XSP_MASK)

#define CBU_WD_CM55_NSS_CROSSBREAK_CFG_CM55_CSS_MASK (0x8U)
#define CBU_WD_CM55_NSS_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Halt watchdog of NSS Cortex M55 when CSS Cortex M55 is in debug mode when set to 1 */
#define CBU_WD_CM55_NSS_CROSSBREAK_CFG_CM55_CSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_WD_CM55_NSS_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_WD_CM55_NSS_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_WD_CM55_NSS_CROSSBREAK_CFG_HIFI5S_MASK (0x20U)
#define CBU_WD_CM55_NSS_CROSSBREAK_CFG_HIFI5S_SHIFT (5U)
/*! hifi5s - Halt watchdog of NSS Cortex M55 when HiFi5s is in debug mode when set to 1 */
#define CBU_WD_CM55_NSS_CROSSBREAK_CFG_HIFI5S(x) (((uint32_t)(((uint32_t)(x)) << CBU_WD_CM55_NSS_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_WD_CM55_NSS_CROSSBREAK_CFG_HIFI5S_MASK)
/*! @} */

/*! @name WD_HIFI5S_CROSSBREAK_CFG - Crossbreak debug configuration register for the HiFi5s watchdog */
/*! @{ */

#define CBU_WD_HIFI5S_CROSSBREAK_CFG_DSP0_MASK   (0x1U)
#define CBU_WD_HIFI5S_CROSSBREAK_CFG_DSP0_SHIFT  (0U)
/*! dsp0 - Halt watchdog of HiFi5s when DSP3 0 is in debug mode when set to 1 */
#define CBU_WD_HIFI5S_CROSSBREAK_CFG_DSP0(x)     (((uint32_t)(((uint32_t)(x)) << CBU_WD_HIFI5S_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_WD_HIFI5S_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_WD_HIFI5S_CROSSBREAK_CFG_DSP1_MASK   (0x2U)
#define CBU_WD_HIFI5S_CROSSBREAK_CFG_DSP1_SHIFT  (1U)
/*! dsp1 - Halt watchdog of HiFi5s when DSP3 1 is in debug mode when set to 1 */
#define CBU_WD_HIFI5S_CROSSBREAK_CFG_DSP1(x)     (((uint32_t)(((uint32_t)(x)) << CBU_WD_HIFI5S_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_WD_HIFI5S_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_WD_HIFI5S_CROSSBREAK_CFG_XSP_MASK    (0x4U)
#define CBU_WD_HIFI5S_CROSSBREAK_CFG_XSP_SHIFT   (2U)
/*! xsp - Halt watchdog of HiFi5s when XSP is in debug mode when set to 1 */
#define CBU_WD_HIFI5S_CROSSBREAK_CFG_XSP(x)      (((uint32_t)(((uint32_t)(x)) << CBU_WD_HIFI5S_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_WD_HIFI5S_CROSSBREAK_CFG_XSP_MASK)

#define CBU_WD_HIFI5S_CROSSBREAK_CFG_CM55_CSS_MASK (0x8U)
#define CBU_WD_HIFI5S_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Halt watchdog of HiFi5s when CSS Cortex M55 is in debug mode when set to 1 */
#define CBU_WD_HIFI5S_CROSSBREAK_CFG_CM55_CSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_WD_HIFI5S_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_WD_HIFI5S_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_WD_HIFI5S_CROSSBREAK_CFG_CM55_NSS_MASK (0x10U)
#define CBU_WD_HIFI5S_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Halt watchdog of HiFi5s when NSS Cortex M55 is in debug mode when set to 1 */
#define CBU_WD_HIFI5S_CROSSBREAK_CFG_CM55_NSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_WD_HIFI5S_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_WD_HIFI5S_CROSSBREAK_CFG_CM55_NSS_MASK)
/*! @} */

/*! @name DSS_TC_CROSSBREAK_CFG - Crossbreak debug configuration register for the DSS timers */
/*! @{ */

#define CBU_DSS_TC_CROSSBREAK_CFG_DSP0_MASK      (0x1U)
#define CBU_DSS_TC_CROSSBREAK_CFG_DSP0_SHIFT     (0U)
/*! dsp0 - Halt DSS timer when DSP3 0 is in debug mode when set to 1 */
#define CBU_DSS_TC_CROSSBREAK_CFG_DSP0(x)        (((uint32_t)(((uint32_t)(x)) << CBU_DSS_TC_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_DSS_TC_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_DSS_TC_CROSSBREAK_CFG_DSP1_MASK      (0x2U)
#define CBU_DSS_TC_CROSSBREAK_CFG_DSP1_SHIFT     (1U)
/*! dsp1 - Halt DSS timer when DSP3 1 is in debug mode when set to 1 */
#define CBU_DSS_TC_CROSSBREAK_CFG_DSP1(x)        (((uint32_t)(((uint32_t)(x)) << CBU_DSS_TC_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_DSS_TC_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_DSS_TC_CROSSBREAK_CFG_XSP_MASK       (0x4U)
#define CBU_DSS_TC_CROSSBREAK_CFG_XSP_SHIFT      (2U)
/*! xsp - Halt DSS timer when XSP is in debug mode when set to 1 */
#define CBU_DSS_TC_CROSSBREAK_CFG_XSP(x)         (((uint32_t)(((uint32_t)(x)) << CBU_DSS_TC_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_DSS_TC_CROSSBREAK_CFG_XSP_MASK)

#define CBU_DSS_TC_CROSSBREAK_CFG_CM55_CSS_MASK  (0x8U)
#define CBU_DSS_TC_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Halt DSS timer when CSS Cortex M55 is in debug mode when set to 1 */
#define CBU_DSS_TC_CROSSBREAK_CFG_CM55_CSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_DSS_TC_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_DSS_TC_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_DSS_TC_CROSSBREAK_CFG_CM55_NSS_MASK  (0x10U)
#define CBU_DSS_TC_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Halt DSS timer when NSS Cortex M55 is in debug mode when set to 1 */
#define CBU_DSS_TC_CROSSBREAK_CFG_CM55_NSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_DSS_TC_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_DSS_TC_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_DSS_TC_CROSSBREAK_CFG_HIFI5S_MASK    (0x20U)
#define CBU_DSS_TC_CROSSBREAK_CFG_HIFI5S_SHIFT   (5U)
/*! hifi5s - Halt DSS timer when HiFi5s is in debug mode when set to 1 */
#define CBU_DSS_TC_CROSSBREAK_CFG_HIFI5S(x)      (((uint32_t)(((uint32_t)(x)) << CBU_DSS_TC_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_DSS_TC_CROSSBREAK_CFG_HIFI5S_MASK)
/*! @} */

/*! @name DSS_DP_TC_CROSSBREAK_CFG - Crossbreak debug configuration register for the DSS DP timers */
/*! @{ */

#define CBU_DSS_DP_TC_CROSSBREAK_CFG_DSP0_MASK   (0x1U)
#define CBU_DSS_DP_TC_CROSSBREAK_CFG_DSP0_SHIFT  (0U)
/*! dsp0 - Halt DSS timer when DSP3 0 is in debug mode when set to 1 */
#define CBU_DSS_DP_TC_CROSSBREAK_CFG_DSP0(x)     (((uint32_t)(((uint32_t)(x)) << CBU_DSS_DP_TC_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_DSS_DP_TC_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_DSS_DP_TC_CROSSBREAK_CFG_DSP1_MASK   (0x2U)
#define CBU_DSS_DP_TC_CROSSBREAK_CFG_DSP1_SHIFT  (1U)
/*! dsp1 - Halt DSS timer when DSP3 1 is in debug mode when set to 1 */
#define CBU_DSS_DP_TC_CROSSBREAK_CFG_DSP1(x)     (((uint32_t)(((uint32_t)(x)) << CBU_DSS_DP_TC_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_DSS_DP_TC_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_DSS_DP_TC_CROSSBREAK_CFG_XSP_MASK    (0x4U)
#define CBU_DSS_DP_TC_CROSSBREAK_CFG_XSP_SHIFT   (2U)
/*! xsp - Halt DSS timer when XSP is in debug mode when set to 1 */
#define CBU_DSS_DP_TC_CROSSBREAK_CFG_XSP(x)      (((uint32_t)(((uint32_t)(x)) << CBU_DSS_DP_TC_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_DSS_DP_TC_CROSSBREAK_CFG_XSP_MASK)

#define CBU_DSS_DP_TC_CROSSBREAK_CFG_CM55_CSS_MASK (0x8U)
#define CBU_DSS_DP_TC_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Halt DSS timer when CSS Cortex M55 is in debug mode when set to 1 */
#define CBU_DSS_DP_TC_CROSSBREAK_CFG_CM55_CSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSS_DP_TC_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_DSS_DP_TC_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_DSS_DP_TC_CROSSBREAK_CFG_CM55_NSS_MASK (0x10U)
#define CBU_DSS_DP_TC_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Halt DSS timer when NSS Cortex M55 is in debug mode when set to 1 */
#define CBU_DSS_DP_TC_CROSSBREAK_CFG_CM55_NSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSS_DP_TC_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_DSS_DP_TC_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_DSS_DP_TC_CROSSBREAK_CFG_HIFI5S_MASK (0x20U)
#define CBU_DSS_DP_TC_CROSSBREAK_CFG_HIFI5S_SHIFT (5U)
/*! hifi5s - Halt DSS timer when HiFi5s is in debug mode when set to 1 */
#define CBU_DSS_DP_TC_CROSSBREAK_CFG_HIFI5S(x)   (((uint32_t)(((uint32_t)(x)) << CBU_DSS_DP_TC_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_DSS_DP_TC_CROSSBREAK_CFG_HIFI5S_MASK)
/*! @} */

/*! @name DSS_SS_CROSSBREAK_CFG - Crossbreak debug configuration register for the SyncSource */
/*! @{ */

#define CBU_DSS_SS_CROSSBREAK_CFG_DSP0_MASK      (0x1U)
#define CBU_DSS_SS_CROSSBREAK_CFG_DSP0_SHIFT     (0U)
/*! dsp0 - Halt DSS timer when DSP3 0 is in debug mode when set to 1 */
#define CBU_DSS_SS_CROSSBREAK_CFG_DSP0(x)        (((uint32_t)(((uint32_t)(x)) << CBU_DSS_SS_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_DSS_SS_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_DSS_SS_CROSSBREAK_CFG_DSP1_MASK      (0x2U)
#define CBU_DSS_SS_CROSSBREAK_CFG_DSP1_SHIFT     (1U)
/*! dsp1 - Halt DSS timer when DSP3 1 is in debug mode when set to 1 */
#define CBU_DSS_SS_CROSSBREAK_CFG_DSP1(x)        (((uint32_t)(((uint32_t)(x)) << CBU_DSS_SS_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_DSS_SS_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_DSS_SS_CROSSBREAK_CFG_XSP_MASK       (0x4U)
#define CBU_DSS_SS_CROSSBREAK_CFG_XSP_SHIFT      (2U)
/*! xsp - Halt DSS timer when XSP is in debug mode when set to 1 */
#define CBU_DSS_SS_CROSSBREAK_CFG_XSP(x)         (((uint32_t)(((uint32_t)(x)) << CBU_DSS_SS_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_DSS_SS_CROSSBREAK_CFG_XSP_MASK)

#define CBU_DSS_SS_CROSSBREAK_CFG_CM55_CSS_MASK  (0x8U)
#define CBU_DSS_SS_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Halt DSS timer when CSS Cortex M55 is in debug mode when set to 1 */
#define CBU_DSS_SS_CROSSBREAK_CFG_CM55_CSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_DSS_SS_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_DSS_SS_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_DSS_SS_CROSSBREAK_CFG_CM55_NSS_MASK  (0x10U)
#define CBU_DSS_SS_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Halt DSS timer when NSS Cortex M55 is in debug mode when set to 1 */
#define CBU_DSS_SS_CROSSBREAK_CFG_CM55_NSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_DSS_SS_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_DSS_SS_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_DSS_SS_CROSSBREAK_CFG_HIFI5S_MASK    (0x20U)
#define CBU_DSS_SS_CROSSBREAK_CFG_HIFI5S_SHIFT   (5U)
/*! hifi5s - Halt DSS timer when HiFi5s is in debug mode when set to 1 */
#define CBU_DSS_SS_CROSSBREAK_CFG_HIFI5S(x)      (((uint32_t)(((uint32_t)(x)) << CBU_DSS_SS_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_DSS_SS_CROSSBREAK_CFG_HIFI5S_MASK)
/*! @} */

/*! @name DSS_HSI_CROSSBREAK_CFG - Crossbreak debug configuration register for the HSI Bus */
/*! @{ */

#define CBU_DSS_HSI_CROSSBREAK_CFG_DSP0_MASK     (0x1U)
#define CBU_DSS_HSI_CROSSBREAK_CFG_DSP0_SHIFT    (0U)
/*! dsp0 - Halt HSI when DSP3 0 is in debug mode when set to 1 */
#define CBU_DSS_HSI_CROSSBREAK_CFG_DSP0(x)       (((uint32_t)(((uint32_t)(x)) << CBU_DSS_HSI_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_DSS_HSI_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_DSS_HSI_CROSSBREAK_CFG_DSP1_MASK     (0x2U)
#define CBU_DSS_HSI_CROSSBREAK_CFG_DSP1_SHIFT    (1U)
/*! dsp1 - Halt HSI when DSP3 1 is in debug mode when set to 1 */
#define CBU_DSS_HSI_CROSSBREAK_CFG_DSP1(x)       (((uint32_t)(((uint32_t)(x)) << CBU_DSS_HSI_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_DSS_HSI_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_DSS_HSI_CROSSBREAK_CFG_XSP_MASK      (0x4U)
#define CBU_DSS_HSI_CROSSBREAK_CFG_XSP_SHIFT     (2U)
/*! xsp - Halt HSI when XSP is in debug mode when set to 1 */
#define CBU_DSS_HSI_CROSSBREAK_CFG_XSP(x)        (((uint32_t)(((uint32_t)(x)) << CBU_DSS_HSI_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_DSS_HSI_CROSSBREAK_CFG_XSP_MASK)

#define CBU_DSS_HSI_CROSSBREAK_CFG_CM55_CSS_MASK (0x8U)
#define CBU_DSS_HSI_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Halt HSI when CSS Cortex M55 is in debug mode when set to 1 */
#define CBU_DSS_HSI_CROSSBREAK_CFG_CM55_CSS(x)   (((uint32_t)(((uint32_t)(x)) << CBU_DSS_HSI_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_DSS_HSI_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_DSS_HSI_CROSSBREAK_CFG_CM55_NSS_MASK (0x10U)
#define CBU_DSS_HSI_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Halt HSI when NSS Cortex M55 is in debug mode when set to 1 */
#define CBU_DSS_HSI_CROSSBREAK_CFG_CM55_NSS(x)   (((uint32_t)(((uint32_t)(x)) << CBU_DSS_HSI_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_DSS_HSI_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_DSS_HSI_CROSSBREAK_CFG_HIFI5S_MASK   (0x20U)
#define CBU_DSS_HSI_CROSSBREAK_CFG_HIFI5S_SHIFT  (5U)
/*! hifi5s - Halt HSI when HiFi5s is in debug mode when set to 1 */
#define CBU_DSS_HSI_CROSSBREAK_CFG_HIFI5S(x)     (((uint32_t)(((uint32_t)(x)) << CBU_DSS_HSI_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_DSS_HSI_CROSSBREAK_CFG_HIFI5S_MASK)
/*! @} */

/*! @name DSS_PM_CROSSBREAK_CFG - Crossbreak debug configuration register for the DSS performance monitor */
/*! @{ */

#define CBU_DSS_PM_CROSSBREAK_CFG_DSP0_MASK      (0x1U)
#define CBU_DSS_PM_CROSSBREAK_CFG_DSP0_SHIFT     (0U)
/*! dsp0 - Halt DSS performance monitor when DSP3 0 is in debug mode when set to 1 */
#define CBU_DSS_PM_CROSSBREAK_CFG_DSP0(x)        (((uint32_t)(((uint32_t)(x)) << CBU_DSS_PM_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_DSS_PM_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_DSS_PM_CROSSBREAK_CFG_DSP1_MASK      (0x2U)
#define CBU_DSS_PM_CROSSBREAK_CFG_DSP1_SHIFT     (1U)
/*! dsp1 - Halt DSS performance monitor when DSP3 1 is in debug mode when set to 1 */
#define CBU_DSS_PM_CROSSBREAK_CFG_DSP1(x)        (((uint32_t)(((uint32_t)(x)) << CBU_DSS_PM_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_DSS_PM_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_DSS_PM_CROSSBREAK_CFG_XSP_MASK       (0x4U)
#define CBU_DSS_PM_CROSSBREAK_CFG_XSP_SHIFT      (2U)
/*! xsp - Halt DSS performance monitor when XSP is in debug mode when set to 1 */
#define CBU_DSS_PM_CROSSBREAK_CFG_XSP(x)         (((uint32_t)(((uint32_t)(x)) << CBU_DSS_PM_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_DSS_PM_CROSSBREAK_CFG_XSP_MASK)

#define CBU_DSS_PM_CROSSBREAK_CFG_CM55_CSS_MASK  (0x8U)
#define CBU_DSS_PM_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Halt DSS performance monitor when CSS Cortex M55 is in debug mode when set to 1 */
#define CBU_DSS_PM_CROSSBREAK_CFG_CM55_CSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_DSS_PM_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_DSS_PM_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_DSS_PM_CROSSBREAK_CFG_CM55_NSS_MASK  (0x10U)
#define CBU_DSS_PM_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Halt DSS performance monitor when NSS Cortex M55 is in debug mode when set to 1 */
#define CBU_DSS_PM_CROSSBREAK_CFG_CM55_NSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_DSS_PM_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_DSS_PM_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_DSS_PM_CROSSBREAK_CFG_HIFI5S_MASK    (0x20U)
#define CBU_DSS_PM_CROSSBREAK_CFG_HIFI5S_SHIFT   (5U)
/*! hifi5s - Halt DSS performance monitor when HiFi5s is in debug mode when set to 1 */
#define CBU_DSS_PM_CROSSBREAK_CFG_HIFI5S(x)      (((uint32_t)(((uint32_t)(x)) << CBU_DSS_PM_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_DSS_PM_CROSSBREAK_CFG_HIFI5S_MASK)
/*! @} */

/*! @name NSS_TC_CROSSBREAK_CFG - Crossbreak debug configuration register for the NSS timers */
/*! @{ */

#define CBU_NSS_TC_CROSSBREAK_CFG_DSP0_MASK      (0x1U)
#define CBU_NSS_TC_CROSSBREAK_CFG_DSP0_SHIFT     (0U)
/*! dsp0 - Halt NSS timer when DSP3 0 is in debug mode when set to 1 */
#define CBU_NSS_TC_CROSSBREAK_CFG_DSP0(x)        (((uint32_t)(((uint32_t)(x)) << CBU_NSS_TC_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_NSS_TC_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_NSS_TC_CROSSBREAK_CFG_DSP1_MASK      (0x2U)
#define CBU_NSS_TC_CROSSBREAK_CFG_DSP1_SHIFT     (1U)
/*! dsp1 - Halt NSS timer when DSP3 1 is in debug mode when set to 1 */
#define CBU_NSS_TC_CROSSBREAK_CFG_DSP1(x)        (((uint32_t)(((uint32_t)(x)) << CBU_NSS_TC_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_NSS_TC_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_NSS_TC_CROSSBREAK_CFG_XSP_MASK       (0x4U)
#define CBU_NSS_TC_CROSSBREAK_CFG_XSP_SHIFT      (2U)
/*! xsp - Halt NSS timer when XSP is in debug mode when set to 1 */
#define CBU_NSS_TC_CROSSBREAK_CFG_XSP(x)         (((uint32_t)(((uint32_t)(x)) << CBU_NSS_TC_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_NSS_TC_CROSSBREAK_CFG_XSP_MASK)

#define CBU_NSS_TC_CROSSBREAK_CFG_CM55_CSS_MASK  (0x8U)
#define CBU_NSS_TC_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Halt NSS timer when CSS Cortex M55 is in debug mode when set to 1 */
#define CBU_NSS_TC_CROSSBREAK_CFG_CM55_CSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_NSS_TC_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_NSS_TC_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_NSS_TC_CROSSBREAK_CFG_CM55_NSS_MASK  (0x10U)
#define CBU_NSS_TC_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Halt NSS timer when NSS Cortex M55 is in debug mode when set to 1 */
#define CBU_NSS_TC_CROSSBREAK_CFG_CM55_NSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_NSS_TC_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_NSS_TC_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_NSS_TC_CROSSBREAK_CFG_HIFI5S_MASK    (0x20U)
#define CBU_NSS_TC_CROSSBREAK_CFG_HIFI5S_SHIFT   (5U)
/*! hifi5s - Halt NSS timer when HiFi5s is in debug mode when set to 1 */
#define CBU_NSS_TC_CROSSBREAK_CFG_HIFI5S(x)      (((uint32_t)(((uint32_t)(x)) << CBU_NSS_TC_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_NSS_TC_CROSSBREAK_CFG_HIFI5S_MASK)
/*! @} */

/*! @name NSS_ETHOS_CROSSBREAK_CFG - Crossbreak debug configuration register for the NSS Ethos */
/*! @{ */

#define CBU_NSS_ETHOS_CROSSBREAK_CFG_DSP0_MASK   (0x1U)
#define CBU_NSS_ETHOS_CROSSBREAK_CFG_DSP0_SHIFT  (0U)
/*! dsp0 - Halt NSS Ethos when DSP3 0 is in debug mode when set to 1 */
#define CBU_NSS_ETHOS_CROSSBREAK_CFG_DSP0(x)     (((uint32_t)(((uint32_t)(x)) << CBU_NSS_ETHOS_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_NSS_ETHOS_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_NSS_ETHOS_CROSSBREAK_CFG_DSP1_MASK   (0x2U)
#define CBU_NSS_ETHOS_CROSSBREAK_CFG_DSP1_SHIFT  (1U)
/*! dsp1 - Halt NSS Ethos when DSP3 1 is in debug mode when set to 1 */
#define CBU_NSS_ETHOS_CROSSBREAK_CFG_DSP1(x)     (((uint32_t)(((uint32_t)(x)) << CBU_NSS_ETHOS_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_NSS_ETHOS_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_NSS_ETHOS_CROSSBREAK_CFG_XSP_MASK    (0x4U)
#define CBU_NSS_ETHOS_CROSSBREAK_CFG_XSP_SHIFT   (2U)
/*! xsp - Halt NSS Ethos when XSP is in debug mode when set to 1 */
#define CBU_NSS_ETHOS_CROSSBREAK_CFG_XSP(x)      (((uint32_t)(((uint32_t)(x)) << CBU_NSS_ETHOS_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_NSS_ETHOS_CROSSBREAK_CFG_XSP_MASK)

#define CBU_NSS_ETHOS_CROSSBREAK_CFG_CM55_CSS_MASK (0x8U)
#define CBU_NSS_ETHOS_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Halt NSS Ethos when CSS Cortex M55 is in debug mode when set to 1 */
#define CBU_NSS_ETHOS_CROSSBREAK_CFG_CM55_CSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_NSS_ETHOS_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_NSS_ETHOS_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_NSS_ETHOS_CROSSBREAK_CFG_CM55_NSS_MASK (0x10U)
#define CBU_NSS_ETHOS_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Halt NSS Ethos when NSS Cortex M55 is in debug mode when set to 1 */
#define CBU_NSS_ETHOS_CROSSBREAK_CFG_CM55_NSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_NSS_ETHOS_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_NSS_ETHOS_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_NSS_ETHOS_CROSSBREAK_CFG_HIFI5S_MASK (0x20U)
#define CBU_NSS_ETHOS_CROSSBREAK_CFG_HIFI5S_SHIFT (5U)
/*! hifi5s - Halt NSS Ethos when HiFi5s is in debug mode when set to 1 */
#define CBU_NSS_ETHOS_CROSSBREAK_CFG_HIFI5S(x)   (((uint32_t)(((uint32_t)(x)) << CBU_NSS_ETHOS_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_NSS_ETHOS_CROSSBREAK_CFG_HIFI5S_MASK)
/*! @} */

/*! @name CSS_TC_CROSSBREAK_CFG - Crossbreak debug configuration register for the CSS timers */
/*! @{ */

#define CBU_CSS_TC_CROSSBREAK_CFG_DSP0_MASK      (0x1U)
#define CBU_CSS_TC_CROSSBREAK_CFG_DSP0_SHIFT     (0U)
/*! dsp0 - Halt CSS timer when DSP3 0 is in debug mode when set to 1 */
#define CBU_CSS_TC_CROSSBREAK_CFG_DSP0(x)        (((uint32_t)(((uint32_t)(x)) << CBU_CSS_TC_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_CSS_TC_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_CSS_TC_CROSSBREAK_CFG_DSP1_MASK      (0x2U)
#define CBU_CSS_TC_CROSSBREAK_CFG_DSP1_SHIFT     (1U)
/*! dsp1 - Halt CSS timer when DSP3 1 is in debug mode when set to 1 */
#define CBU_CSS_TC_CROSSBREAK_CFG_DSP1(x)        (((uint32_t)(((uint32_t)(x)) << CBU_CSS_TC_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_CSS_TC_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_CSS_TC_CROSSBREAK_CFG_XSP_MASK       (0x4U)
#define CBU_CSS_TC_CROSSBREAK_CFG_XSP_SHIFT      (2U)
/*! xsp - Halt CSS timer when XSP is in debug mode when set to 1 */
#define CBU_CSS_TC_CROSSBREAK_CFG_XSP(x)         (((uint32_t)(((uint32_t)(x)) << CBU_CSS_TC_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_CSS_TC_CROSSBREAK_CFG_XSP_MASK)

#define CBU_CSS_TC_CROSSBREAK_CFG_CM55_CSS_MASK  (0x8U)
#define CBU_CSS_TC_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Halt CSS timer when CSS Cortex M55 is in debug mode when set to 1 */
#define CBU_CSS_TC_CROSSBREAK_CFG_CM55_CSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_CSS_TC_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_CSS_TC_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_CSS_TC_CROSSBREAK_CFG_CM55_NSS_MASK  (0x10U)
#define CBU_CSS_TC_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Halt CSS timer when NSS Cortex M55 is in debug mode when set to 1 */
#define CBU_CSS_TC_CROSSBREAK_CFG_CM55_NSS(x)    (((uint32_t)(((uint32_t)(x)) << CBU_CSS_TC_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_CSS_TC_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_CSS_TC_CROSSBREAK_CFG_HIFI5S_MASK    (0x20U)
#define CBU_CSS_TC_CROSSBREAK_CFG_HIFI5S_SHIFT   (5U)
/*! hifi5s - Halt CSS timer when HiFi5s is in debug mode when set to 1 */
#define CBU_CSS_TC_CROSSBREAK_CFG_HIFI5S(x)      (((uint32_t)(((uint32_t)(x)) << CBU_CSS_TC_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_CSS_TC_CROSSBREAK_CFG_HIFI5S_MASK)
/*! @} */

/*! @name PMRC_LF_TC_CROSSBREAK_CFG - Crossbreak debug configuration register for the PMRC LF-timer */
/*! @{ */

#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_DSP0_MASK  (0x1U)
#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_DSP0_SHIFT (0U)
/*! dsp0 - Halt LF-timer when DSP3 0 is in debug mode when set to 1 */
#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_DSP0(x)    (((uint32_t)(((uint32_t)(x)) << CBU_PMRC_LF_TC_CROSSBREAK_CFG_DSP0_SHIFT)) & CBU_PMRC_LF_TC_CROSSBREAK_CFG_DSP0_MASK)

#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_DSP1_MASK  (0x2U)
#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_DSP1_SHIFT (1U)
/*! dsp1 - Halt LF-timer when DSP3 1 is in debug mode when set to 1 */
#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_DSP1(x)    (((uint32_t)(((uint32_t)(x)) << CBU_PMRC_LF_TC_CROSSBREAK_CFG_DSP1_SHIFT)) & CBU_PMRC_LF_TC_CROSSBREAK_CFG_DSP1_MASK)

#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_XSP_MASK   (0x4U)
#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_XSP_SHIFT  (2U)
/*! xsp - Halt LF-timer when XSP is in debug mode when set to 1 */
#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_XSP(x)     (((uint32_t)(((uint32_t)(x)) << CBU_PMRC_LF_TC_CROSSBREAK_CFG_XSP_SHIFT)) & CBU_PMRC_LF_TC_CROSSBREAK_CFG_XSP_MASK)

#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_CM55_CSS_MASK (0x8U)
#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Halt LF-timer when CSS Cortex M55 is in debug mode when set to 1 */
#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_CM55_CSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_PMRC_LF_TC_CROSSBREAK_CFG_CM55_CSS_SHIFT)) & CBU_PMRC_LF_TC_CROSSBREAK_CFG_CM55_CSS_MASK)

#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_CM55_NSS_MASK (0x10U)
#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Halt LF-timer when NSS Cortex M55 is in debug mode when set to 1 */
#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_CM55_NSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_PMRC_LF_TC_CROSSBREAK_CFG_CM55_NSS_SHIFT)) & CBU_PMRC_LF_TC_CROSSBREAK_CFG_CM55_NSS_MASK)

#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_HIFI5S_MASK (0x20U)
#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_HIFI5S_SHIFT (5U)
/*! hifi5s - Halt LF-timer when HiFi5s is in debug mode when set to 1 */
#define CBU_PMRC_LF_TC_CROSSBREAK_CFG_HIFI5S(x)  (((uint32_t)(((uint32_t)(x)) << CBU_PMRC_LF_TC_CROSSBREAK_CFG_HIFI5S_SHIFT)) & CBU_PMRC_LF_TC_CROSSBREAK_CFG_HIFI5S_MASK)
/*! @} */

/*! @name EVENT_CROSSBREAK_CFG - Crossbreak debug break configuration register */
/*! @{ */

#define CBU_EVENT_CROSSBREAK_CFG_EVENT_MASK      (0xFFU)
#define CBU_EVENT_CROSSBREAK_CFG_EVENT_SHIFT     (0U)
/*! event - Selects the event that will be used to trigger a break */
#define CBU_EVENT_CROSSBREAK_CFG_EVENT(x)        (((uint32_t)(((uint32_t)(x)) << CBU_EVENT_CROSSBREAK_CFG_EVENT_SHIFT)) & CBU_EVENT_CROSSBREAK_CFG_EVENT_MASK)
/*! @} */

/*! @name RESTART_EVENT_CROSSBREAK_CFG - Selects the event of the event_bus that will be used to restart */
/*! @{ */

#define CBU_RESTART_EVENT_CROSSBREAK_CFG_EVENT_MASK (0xFFU)
#define CBU_RESTART_EVENT_CROSSBREAK_CFG_EVENT_SHIFT (0U)
/*! event - Selects the event that will be used to trigger a restart */
#define CBU_RESTART_EVENT_CROSSBREAK_CFG_EVENT(x) (((uint32_t)(((uint32_t)(x)) << CBU_RESTART_EVENT_CROSSBREAK_CFG_EVENT_SHIFT)) & CBU_RESTART_EVENT_CROSSBREAK_CFG_EVENT_MASK)
/*! @} */

/*! @name DSP3_0_CROSSBREAK_RESTART_CFG - Crossbreak debug configuration restart register for DSP3 0 */
/*! @{ */

#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_DSP1_MASK (0x2U)
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_DSP1_SHIFT (1U)
/*! dsp1 - Restart on DSP3 1 restart when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_DSP1(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_RESTART_CFG_DSP1_SHIFT)) & CBU_DSP3_0_CROSSBREAK_RESTART_CFG_DSP1_MASK)

#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_XSP_MASK (0x4U)
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_XSP_SHIFT (2U)
/*! xsp - Restart on XSP restart when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_XSP(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_RESTART_CFG_XSP_SHIFT)) & CBU_DSP3_0_CROSSBREAK_RESTART_CFG_XSP_MASK)

#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_CM55_CSS_MASK (0x8U)
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Restart on CSS Cortex M55 restart when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_CM55_CSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_RESTART_CFG_CM55_CSS_SHIFT)) & CBU_DSP3_0_CROSSBREAK_RESTART_CFG_CM55_CSS_MASK)

#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_CM55_NSS_MASK (0x10U)
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Restart on NSS Cortex M55 restart when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_CM55_NSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_RESTART_CFG_CM55_NSS_SHIFT)) & CBU_DSP3_0_CROSSBREAK_RESTART_CFG_CM55_NSS_MASK)

#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_HIFI5S_MASK (0x20U)
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_HIFI5S_SHIFT (5U)
/*! hifi5s - Restart on HiFi5s restart when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_HIFI5S(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_RESTART_CFG_HIFI5S_SHIFT)) & CBU_DSP3_0_CROSSBREAK_RESTART_CFG_HIFI5S_MASK)

#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_EVENT_MASK (0x40U)
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_EVENT_SHIFT (6U)
/*! event - Restart on (DSS or NSS or CSS) event when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_EVENT(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_RESTART_CFG_EVENT_SHIFT)) & CBU_DSP3_0_CROSSBREAK_RESTART_CFG_EVENT_MASK)

#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_ERROR_MASK (0x80U)
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_ERROR_SHIFT (7U)
/*! error - Restart on (DSS or NSS) EDU error break signal when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_ERROR(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_RESTART_CFG_ERROR_SHIFT)) & CBU_DSP3_0_CROSSBREAK_RESTART_CFG_ERROR_MASK)

#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_MASK (0x100U)
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_SHIFT (8U)
/*! sw_trigger0 - Restart on SW trigger 0 when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER0(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_SHIFT)) & CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_MASK)

#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_MASK (0x200U)
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_SHIFT (9U)
/*! sw_trigger1 - Restart on SW trigger 1 when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER1(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_SHIFT)) & CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_MASK)

#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_MASK (0x400U)
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_SHIFT (10U)
/*! sw_trigger2 - Restart on SW trigger 2 when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER2(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_SHIFT)) & CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_MASK)

#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_MASK (0x800U)
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_SHIFT (11U)
/*! sw_trigger3 - Restart on SW trigger 3 when set to 1 */
#define CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER3(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_SHIFT)) & CBU_DSP3_0_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_MASK)
/*! @} */

/*! @name DSP3_1_CROSSBREAK_RESTART_CFG - Crossbreak debug configuration restart register for DSP3 1 */
/*! @{ */

#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_DSP0_MASK (0x1U)
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_DSP0_SHIFT (0U)
/*! dsp0 - Restart on DSP3 0 restart when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_DSP0(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_RESTART_CFG_DSP0_SHIFT)) & CBU_DSP3_1_CROSSBREAK_RESTART_CFG_DSP0_MASK)

#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_XSP_MASK (0x4U)
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_XSP_SHIFT (2U)
/*! xsp - Restart on XSP restart when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_XSP(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_RESTART_CFG_XSP_SHIFT)) & CBU_DSP3_1_CROSSBREAK_RESTART_CFG_XSP_MASK)

#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_CM55_CSS_MASK (0x8U)
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Restart on CSS Cortex M55 restart when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_CM55_CSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_RESTART_CFG_CM55_CSS_SHIFT)) & CBU_DSP3_1_CROSSBREAK_RESTART_CFG_CM55_CSS_MASK)

#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_CM55_NSS_MASK (0x10U)
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Restart on NSS Cortex M55 restart when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_CM55_NSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_RESTART_CFG_CM55_NSS_SHIFT)) & CBU_DSP3_1_CROSSBREAK_RESTART_CFG_CM55_NSS_MASK)

#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_HIFI5S_MASK (0x20U)
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_HIFI5S_SHIFT (5U)
/*! hifi5s - Restart on HiFi5s restart when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_HIFI5S(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_RESTART_CFG_HIFI5S_SHIFT)) & CBU_DSP3_1_CROSSBREAK_RESTART_CFG_HIFI5S_MASK)

#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_EVENT_MASK (0x40U)
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_EVENT_SHIFT (6U)
/*! event - Restart on (DSS or NSS or CSS) event when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_EVENT(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_RESTART_CFG_EVENT_SHIFT)) & CBU_DSP3_1_CROSSBREAK_RESTART_CFG_EVENT_MASK)

#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_ERROR_MASK (0x80U)
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_ERROR_SHIFT (7U)
/*! error - Restart on (DSS or NSS) EDU error break signal when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_ERROR(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_RESTART_CFG_ERROR_SHIFT)) & CBU_DSP3_1_CROSSBREAK_RESTART_CFG_ERROR_MASK)

#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_MASK (0x100U)
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_SHIFT (8U)
/*! sw_trigger0 - Restart on SW trigger 0 when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER0(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_SHIFT)) & CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_MASK)

#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_MASK (0x200U)
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_SHIFT (9U)
/*! sw_trigger1 - Restart on SW trigger 1 when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER1(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_SHIFT)) & CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_MASK)

#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_MASK (0x400U)
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_SHIFT (10U)
/*! sw_trigger2 - Restart on SW trigger 2 when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER2(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_SHIFT)) & CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_MASK)

#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_MASK (0x800U)
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_SHIFT (11U)
/*! sw_trigger3 - Restart on SW trigger 3 when set to 1 */
#define CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER3(x) (((uint32_t)(((uint32_t)(x)) << CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_SHIFT)) & CBU_DSP3_1_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_MASK)
/*! @} */

/*! @name XSP_CROSSBREAK_RESTART_CFG - Crossbreak debug configuration restart register for XSP */
/*! @{ */

#define CBU_XSP_CROSSBREAK_RESTART_CFG_DSP0_MASK (0x1U)
#define CBU_XSP_CROSSBREAK_RESTART_CFG_DSP0_SHIFT (0U)
/*! dsp0 - Restart on DSP3 0 restart when set to 1 */
#define CBU_XSP_CROSSBREAK_RESTART_CFG_DSP0(x)   (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_RESTART_CFG_DSP0_SHIFT)) & CBU_XSP_CROSSBREAK_RESTART_CFG_DSP0_MASK)

#define CBU_XSP_CROSSBREAK_RESTART_CFG_DSP1_MASK (0x2U)
#define CBU_XSP_CROSSBREAK_RESTART_CFG_DSP1_SHIFT (1U)
/*! dsp1 - Restart on DSP3 1 restart when set to 1 */
#define CBU_XSP_CROSSBREAK_RESTART_CFG_DSP1(x)   (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_RESTART_CFG_DSP1_SHIFT)) & CBU_XSP_CROSSBREAK_RESTART_CFG_DSP1_MASK)

#define CBU_XSP_CROSSBREAK_RESTART_CFG_CM55_CSS_MASK (0x8U)
#define CBU_XSP_CROSSBREAK_RESTART_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Restart on CSS Cortex M55 restart when set to 1 */
#define CBU_XSP_CROSSBREAK_RESTART_CFG_CM55_CSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_RESTART_CFG_CM55_CSS_SHIFT)) & CBU_XSP_CROSSBREAK_RESTART_CFG_CM55_CSS_MASK)

#define CBU_XSP_CROSSBREAK_RESTART_CFG_CM55_NSS_MASK (0x10U)
#define CBU_XSP_CROSSBREAK_RESTART_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Restart on NSS Cortex M55 restart when set to 1 */
#define CBU_XSP_CROSSBREAK_RESTART_CFG_CM55_NSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_RESTART_CFG_CM55_NSS_SHIFT)) & CBU_XSP_CROSSBREAK_RESTART_CFG_CM55_NSS_MASK)

#define CBU_XSP_CROSSBREAK_RESTART_CFG_HIFI5S_MASK (0x20U)
#define CBU_XSP_CROSSBREAK_RESTART_CFG_HIFI5S_SHIFT (5U)
/*! hifi5s - Restart on HiFi5s restart when set to 1 */
#define CBU_XSP_CROSSBREAK_RESTART_CFG_HIFI5S(x) (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_RESTART_CFG_HIFI5S_SHIFT)) & CBU_XSP_CROSSBREAK_RESTART_CFG_HIFI5S_MASK)

#define CBU_XSP_CROSSBREAK_RESTART_CFG_EVENT_MASK (0x40U)
#define CBU_XSP_CROSSBREAK_RESTART_CFG_EVENT_SHIFT (6U)
/*! event - Restart on (DSS or NSS or CSS) event when set to 1 */
#define CBU_XSP_CROSSBREAK_RESTART_CFG_EVENT(x)  (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_RESTART_CFG_EVENT_SHIFT)) & CBU_XSP_CROSSBREAK_RESTART_CFG_EVENT_MASK)

#define CBU_XSP_CROSSBREAK_RESTART_CFG_ERROR_MASK (0x80U)
#define CBU_XSP_CROSSBREAK_RESTART_CFG_ERROR_SHIFT (7U)
/*! error - Restart on (DSS or NSS) EDU error break signal when set to 1 */
#define CBU_XSP_CROSSBREAK_RESTART_CFG_ERROR(x)  (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_RESTART_CFG_ERROR_SHIFT)) & CBU_XSP_CROSSBREAK_RESTART_CFG_ERROR_MASK)

#define CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_MASK (0x100U)
#define CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_SHIFT (8U)
/*! sw_trigger0 - Restart on SW trigger 0 when set to 1 */
#define CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER0(x) (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_SHIFT)) & CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_MASK)

#define CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_MASK (0x200U)
#define CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_SHIFT (9U)
/*! sw_trigger1 - Restart on SW trigger 1 when set to 1 */
#define CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER1(x) (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_SHIFT)) & CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_MASK)

#define CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_MASK (0x400U)
#define CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_SHIFT (10U)
/*! sw_trigger2 - Restart on SW trigger 2 when set to 1 */
#define CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER2(x) (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_SHIFT)) & CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_MASK)

#define CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_MASK (0x800U)
#define CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_SHIFT (11U)
/*! sw_trigger3 - Restart on SW trigger 3 when set to 1 */
#define CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER3(x) (((uint32_t)(((uint32_t)(x)) << CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_SHIFT)) & CBU_XSP_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_MASK)
/*! @} */

/*! @name CM55_CSS_CROSSBREAK_RESTART_CFG - Crossbreak debug configuration restart register for CSS Cortex M55 */
/*! @{ */

#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_DSP0_MASK (0x1U)
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_DSP0_SHIFT (0U)
/*! dsp0 - Restart on DSP3 0 restart when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_DSP0(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_DSP0_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_DSP0_MASK)

#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_DSP1_MASK (0x2U)
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_DSP1_SHIFT (1U)
/*! dsp1 - Restart on DSP3 1 restart when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_DSP1(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_DSP1_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_DSP1_MASK)

#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_XSP_MASK (0x4U)
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_XSP_SHIFT (2U)
/*! xsp - Restart on XSP restart when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_XSP(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_XSP_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_XSP_MASK)

#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_CM55_NSS_MASK (0x10U)
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Restart on NSS Cortex M55 restart when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_CM55_NSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_CM55_NSS_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_CM55_NSS_MASK)

#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_HIFI5S_MASK (0x20U)
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_HIFI5S_SHIFT (5U)
/*! hifi5s - Restart on HiFi5s restart when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_HIFI5S(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_HIFI5S_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_HIFI5S_MASK)

#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_EVENT_MASK (0x40U)
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_EVENT_SHIFT (6U)
/*! event - Restart on (DSS or NSS or CSS) event when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_EVENT(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_EVENT_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_EVENT_MASK)

#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_ERROR_MASK (0x80U)
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_ERROR_SHIFT (7U)
/*! error - Restart on (DSS or NSS) EDU error break signal when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_ERROR(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_ERROR_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_ERROR_MASK)

#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_MASK (0x100U)
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_SHIFT (8U)
/*! sw_trigger0 - Restart on SW trigger 0 when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER0(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_MASK)

#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_MASK (0x200U)
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_SHIFT (9U)
/*! sw_trigger1 - Restart on SW trigger 1 when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER1(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_MASK)

#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_MASK (0x400U)
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_SHIFT (10U)
/*! sw_trigger2 - Restart on SW trigger 2 when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER2(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_MASK)

#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_MASK (0x800U)
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_SHIFT (11U)
/*! sw_trigger3 - Restart on SW trigger 3 when set to 1 */
#define CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER3(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_SHIFT)) & CBU_CM55_CSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_MASK)
/*! @} */

/*! @name CM55_NSS_CROSSBREAK_RESTART_CFG - Crossbreak debug configuration restart register for NSS Cortex M55 */
/*! @{ */

#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_DSP0_MASK (0x1U)
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_DSP0_SHIFT (0U)
/*! dsp0 - Restart on DSP3 0 restart when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_DSP0(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_DSP0_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_DSP0_MASK)

#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_DSP1_MASK (0x2U)
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_DSP1_SHIFT (1U)
/*! dsp1 - Restart on DSP3 1 restart when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_DSP1(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_DSP1_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_DSP1_MASK)

#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_XSP_MASK (0x4U)
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_XSP_SHIFT (2U)
/*! xsp - Restart on XSP restart when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_XSP(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_XSP_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_XSP_MASK)

#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_CM55_CSS_MASK (0x8U)
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Restart on CSS Cortex M55 restart when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_CM55_CSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_CM55_CSS_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_CM55_CSS_MASK)

#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_HIFI5S_MASK (0x20U)
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_HIFI5S_SHIFT (5U)
/*! hifi5s - Restart on HiFi5s restart when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_HIFI5S(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_HIFI5S_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_HIFI5S_MASK)

#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_EVENT_MASK (0x40U)
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_EVENT_SHIFT (6U)
/*! event - Restart on (DSS or NSS or CSS) event when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_EVENT(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_EVENT_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_EVENT_MASK)

#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_ERROR_MASK (0x80U)
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_ERROR_SHIFT (7U)
/*! error - Restart on (DSS or NSS) EDU error break signal when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_ERROR(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_ERROR_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_ERROR_MASK)

#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_MASK (0x100U)
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_SHIFT (8U)
/*! sw_trigger0 - Restart on SW trigger 0 when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER0(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_MASK)

#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_MASK (0x200U)
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_SHIFT (9U)
/*! sw_trigger1 - Restart on SW trigger 1 when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER1(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_MASK)

#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_MASK (0x400U)
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_SHIFT (10U)
/*! sw_trigger2 - Restart on SW trigger 2 when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER2(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_MASK)

#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_MASK (0x800U)
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_SHIFT (11U)
/*! sw_trigger3 - Restart on SW trigger 3 when set to 1 */
#define CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER3(x) (((uint32_t)(((uint32_t)(x)) << CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_SHIFT)) & CBU_CM55_NSS_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_MASK)
/*! @} */

/*! @name HIFI5S_CROSSBREAK_RESTART_CFG - Crossbreak debug configuration restart register for HiFi5s */
/*! @{ */

#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_DSP0_MASK (0x1U)
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_DSP0_SHIFT (0U)
/*! dsp0 - Restart on DSP3 0 restart when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_DSP0(x) (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_RESTART_CFG_DSP0_SHIFT)) & CBU_HIFI5S_CROSSBREAK_RESTART_CFG_DSP0_MASK)

#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_DSP1_MASK (0x2U)
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_DSP1_SHIFT (1U)
/*! dsp1 - Restart on DSP3 1 restart when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_DSP1(x) (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_RESTART_CFG_DSP1_SHIFT)) & CBU_HIFI5S_CROSSBREAK_RESTART_CFG_DSP1_MASK)

#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_XSP_MASK (0x4U)
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_XSP_SHIFT (2U)
/*! xsp - Restart on XSP restart when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_XSP(x) (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_RESTART_CFG_XSP_SHIFT)) & CBU_HIFI5S_CROSSBREAK_RESTART_CFG_XSP_MASK)

#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_CM55_CSS_MASK (0x8U)
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_CM55_CSS_SHIFT (3U)
/*! cm55_css - Restart on CSS Cortex M55 restart when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_CM55_CSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_RESTART_CFG_CM55_CSS_SHIFT)) & CBU_HIFI5S_CROSSBREAK_RESTART_CFG_CM55_CSS_MASK)

#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_CM55_NSS_MASK (0x10U)
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_CM55_NSS_SHIFT (4U)
/*! cm55_nss - Restart on NSS Cortex M55 restart when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_CM55_NSS(x) (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_RESTART_CFG_CM55_NSS_SHIFT)) & CBU_HIFI5S_CROSSBREAK_RESTART_CFG_CM55_NSS_MASK)

#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_EVENT_MASK (0x40U)
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_EVENT_SHIFT (6U)
/*! event - Restart on (DSS or NSS or CSS) event when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_EVENT(x) (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_RESTART_CFG_EVENT_SHIFT)) & CBU_HIFI5S_CROSSBREAK_RESTART_CFG_EVENT_MASK)

#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_ERROR_MASK (0x80U)
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_ERROR_SHIFT (7U)
/*! error - Restart on (DSS or NSS) EDU error break signal when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_ERROR(x) (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_RESTART_CFG_ERROR_SHIFT)) & CBU_HIFI5S_CROSSBREAK_RESTART_CFG_ERROR_MASK)

#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_MASK (0x100U)
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_SHIFT (8U)
/*! sw_trigger0 - Restart on SW trigger 0 when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER0(x) (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_SHIFT)) & CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER0_MASK)

#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_MASK (0x200U)
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_SHIFT (9U)
/*! sw_trigger1 - Restart on SW trigger 1 when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER1(x) (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_SHIFT)) & CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER1_MASK)

#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_MASK (0x400U)
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_SHIFT (10U)
/*! sw_trigger2 - Restart on SW trigger 2 when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER2(x) (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_SHIFT)) & CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER2_MASK)

#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_MASK (0x800U)
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_SHIFT (11U)
/*! sw_trigger3 - Restart on SW trigger 3 when set to 1 */
#define CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER3(x) (((uint32_t)(((uint32_t)(x)) << CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_SHIFT)) & CBU_HIFI5S_CROSSBREAK_RESTART_CFG_SW_TRIGGER3_MASK)
/*! @} */

/*! @name SW_TRIGGER - Software controlled triggers for the crossbreak module */
/*! @{ */

#define CBU_SW_TRIGGER_SW_TRIGGER0_MASK          (0x1U)
#define CBU_SW_TRIGGER_SW_TRIGGER0_SHIFT         (0U)
/*! sw_trigger0 - Software trigger 0 */
#define CBU_SW_TRIGGER_SW_TRIGGER0(x)            (((uint32_t)(((uint32_t)(x)) << CBU_SW_TRIGGER_SW_TRIGGER0_SHIFT)) & CBU_SW_TRIGGER_SW_TRIGGER0_MASK)

#define CBU_SW_TRIGGER_SW_TRIGGER1_MASK          (0x2U)
#define CBU_SW_TRIGGER_SW_TRIGGER1_SHIFT         (1U)
/*! sw_trigger1 - Software trigger 1 */
#define CBU_SW_TRIGGER_SW_TRIGGER1(x)            (((uint32_t)(((uint32_t)(x)) << CBU_SW_TRIGGER_SW_TRIGGER1_SHIFT)) & CBU_SW_TRIGGER_SW_TRIGGER1_MASK)

#define CBU_SW_TRIGGER_SW_TRIGGER2_MASK          (0x4U)
#define CBU_SW_TRIGGER_SW_TRIGGER2_SHIFT         (2U)
/*! sw_trigger2 - Software trigger 2 */
#define CBU_SW_TRIGGER_SW_TRIGGER2(x)            (((uint32_t)(((uint32_t)(x)) << CBU_SW_TRIGGER_SW_TRIGGER2_SHIFT)) & CBU_SW_TRIGGER_SW_TRIGGER2_MASK)

#define CBU_SW_TRIGGER_SW_TRIGGER3_MASK          (0x8U)
#define CBU_SW_TRIGGER_SW_TRIGGER3_SHIFT         (3U)
/*! sw_trigger3 - Software trigger 3 */
#define CBU_SW_TRIGGER_SW_TRIGGER3(x)            (((uint32_t)(((uint32_t)(x)) << CBU_SW_TRIGGER_SW_TRIGGER3_SHIFT)) & CBU_SW_TRIGGER_SW_TRIGGER3_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group CBU_Register_Masks */


/*!
 * @}
 */ /* end of group CBU_Peripheral_Access_Layer */


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


#endif  /* PERI_CBU_H_ */

