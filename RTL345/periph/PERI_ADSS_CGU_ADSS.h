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
**         CMSIS Peripheral Access Layer for ADSS_CGU_ADSS
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
 * @file PERI_ADSS_CGU_ADSS.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_CGU_ADSS
 *
 * CMSIS Peripheral Access Layer for ADSS_CGU_ADSS
 */

#if !defined(PERI_ADSS_CGU_ADSS_H_)
#define PERI_ADSS_CGU_ADSS_H_                    /**< Symbol preventing repeated inclusion */

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
   -- ADSS_CGU_ADSS Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_CGU_ADSS_Peripheral_Access_Layer ADSS_CGU_ADSS Peripheral Access Layer
 * @{
 */

/** ADSS_CGU_ADSS - Register Layout Typedef */
typedef struct {
  __IO uint32_t CGU_CLKENSET;                      /**< Register to enable the clocks to multiple peripherals. When written, the register bits corresponding to bits set to '1' are set high. The others are untouched. Reading will return the content of the enable register, offset: 0x0 */
  __IO uint32_t CGU_CLKENRESET;                    /**< Register to disable the clocks to multiple peripherals. When written, the register bits corresponding to bits set to '1' are set high. The others are untouched. Reading will return the content of the enable register, offset: 0x4 */
} ADSS_CGU_ADSS_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_CGU_ADSS Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_CGU_ADSS_Register_Masks ADSS_CGU_ADSS Register Masks
 * @{
 */

/*! @name CGU_CLKENSET - Register to enable the clocks to multiple peripherals. When written, the register bits corresponding to bits set to '1' are set high. The others are untouched. Reading will return the content of the enable register */
/*! @{ */

#define ADSS_CGU_ADSS_CGU_CLKENSET_TIMER_MASK    (0x1U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_TIMER_SHIFT   (0U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_TIMER(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENSET_TIMER_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENSET_TIMER_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENSET_MC_TIMER_MASK (0x2U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_MC_TIMER_SHIFT (1U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_MC_TIMER(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENSET_MC_TIMER_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENSET_MC_TIMER_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENSET_DP_TIMER_MASK (0x4U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_DP_TIMER_SHIFT (2U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_DP_TIMER(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENSET_DP_TIMER_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENSET_DP_TIMER_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENSET_HSI_MASK      (0x8U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_HSI_SHIFT     (3U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_HSI(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENSET_HSI_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENSET_HSI_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENSET_DP_MASK       (0x10U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_DP_SHIFT      (4U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_DP(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENSET_DP_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENSET_DP_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENSET_ANC_MASK      (0x20U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_ANC_SHIFT     (5U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_ANC(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENSET_ANC_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENSET_ANC_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENSET_HSI_PORT_MASK (0x40U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_HSI_PORT_SHIFT (6U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_HSI_PORT(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENSET_HSI_PORT_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENSET_HSI_PORT_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENSET_ERROR_MASK    (0x80U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_ERROR_SHIFT   (7U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_ERROR(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENSET_ERROR_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENSET_ERROR_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENSET_EVENT_MASK    (0x100U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_EVENT_SHIFT   (8U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_EVENT(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENSET_EVENT_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENSET_EVENT_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENSET_WATCHDOG_DSP0_MASK (0x1000U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_WATCHDOG_DSP0_SHIFT (12U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_WATCHDOG_DSP0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENSET_WATCHDOG_DSP0_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENSET_WATCHDOG_DSP0_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENSET_PERFMON_DSP0_MASK (0x2000U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_PERFMON_DSP0_SHIFT (13U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_PERFMON_DSP0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENSET_PERFMON_DSP0_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENSET_PERFMON_DSP0_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENSET_CLKSTEAL_DSP0_MASK (0x4000U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_CLKSTEAL_DSP0_SHIFT (14U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_CLKSTEAL_DSP0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENSET_CLKSTEAL_DSP0_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENSET_CLKSTEAL_DSP0_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENSET_WATCHDOG_DSP1_MASK (0x40000U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_WATCHDOG_DSP1_SHIFT (18U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_WATCHDOG_DSP1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENSET_WATCHDOG_DSP1_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENSET_WATCHDOG_DSP1_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENSET_PERFMON_DSP1_MASK (0x80000U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_PERFMON_DSP1_SHIFT (19U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_PERFMON_DSP1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENSET_PERFMON_DSP1_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENSET_PERFMON_DSP1_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENSET_CLKSTEAL_DSP1_MASK (0x100000U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_CLKSTEAL_DSP1_SHIFT (20U)
#define ADSS_CGU_ADSS_CGU_CLKENSET_CLKSTEAL_DSP1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENSET_CLKSTEAL_DSP1_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENSET_CLKSTEAL_DSP1_MASK)
/*! @} */

/*! @name CGU_CLKENRESET - Register to disable the clocks to multiple peripherals. When written, the register bits corresponding to bits set to '1' are set high. The others are untouched. Reading will return the content of the enable register */
/*! @{ */

#define ADSS_CGU_ADSS_CGU_CLKENRESET_TIMER_MASK  (0x1U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_TIMER_SHIFT (0U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_TIMER(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENRESET_TIMER_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENRESET_TIMER_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENRESET_MC_TIMER_MASK (0x2U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_MC_TIMER_SHIFT (1U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_MC_TIMER(x) (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENRESET_MC_TIMER_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENRESET_MC_TIMER_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENRESET_DP_TIMER_MASK (0x4U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_DP_TIMER_SHIFT (2U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_DP_TIMER(x) (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENRESET_DP_TIMER_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENRESET_DP_TIMER_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENRESET_HSI_MASK    (0x8U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_HSI_SHIFT   (3U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_HSI(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENRESET_HSI_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENRESET_HSI_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENRESET_DP_MASK     (0x10U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_DP_SHIFT    (4U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_DP(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENRESET_DP_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENRESET_DP_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENRESET_ANC_MASK    (0x20U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_ANC_SHIFT   (5U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_ANC(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENRESET_ANC_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENRESET_ANC_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENRESET_HSI_PORT_MASK (0x40U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_HSI_PORT_SHIFT (6U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_HSI_PORT(x) (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENRESET_HSI_PORT_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENRESET_HSI_PORT_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENRESET_ERROR_MASK  (0x80U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_ERROR_SHIFT (7U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_ERROR(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENRESET_ERROR_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENRESET_ERROR_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENRESET_EVENT_MASK  (0x100U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_EVENT_SHIFT (8U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_EVENT(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENRESET_EVENT_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENRESET_EVENT_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENRESET_WATCHDOG_DSP0_MASK (0x1000U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_WATCHDOG_DSP0_SHIFT (12U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_WATCHDOG_DSP0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENRESET_WATCHDOG_DSP0_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENRESET_WATCHDOG_DSP0_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENRESET_PERFMON_DSP0_MASK (0x2000U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_PERFMON_DSP0_SHIFT (13U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_PERFMON_DSP0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENRESET_PERFMON_DSP0_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENRESET_PERFMON_DSP0_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENRESET_CLKSTEAL_DSP0_MASK (0x4000U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_CLKSTEAL_DSP0_SHIFT (14U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_CLKSTEAL_DSP0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENRESET_CLKSTEAL_DSP0_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENRESET_CLKSTEAL_DSP0_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENRESET_WATCHDOG_DSP1_MASK (0x40000U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_WATCHDOG_DSP1_SHIFT (18U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_WATCHDOG_DSP1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENRESET_WATCHDOG_DSP1_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENRESET_WATCHDOG_DSP1_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENRESET_PERFMON_DSP1_MASK (0x80000U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_PERFMON_DSP1_SHIFT (19U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_PERFMON_DSP1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENRESET_PERFMON_DSP1_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENRESET_PERFMON_DSP1_MASK)

#define ADSS_CGU_ADSS_CGU_CLKENRESET_CLKSTEAL_DSP1_MASK (0x100000U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_CLKSTEAL_DSP1_SHIFT (20U)
#define ADSS_CGU_ADSS_CGU_CLKENRESET_CLKSTEAL_DSP1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_CGU_ADSS_CGU_CLKENRESET_CLKSTEAL_DSP1_SHIFT)) & ADSS_CGU_ADSS_CGU_CLKENRESET_CLKSTEAL_DSP1_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADSS_CGU_ADSS_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_CGU_ADSS_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_CGU_ADSS_H_ */

