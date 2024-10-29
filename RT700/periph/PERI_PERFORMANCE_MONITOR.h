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
**         CMSIS Peripheral Access Layer for Performance_Monitor
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
 * @file Performance_Monitor.h
 * @version 2.0
 * @date 2024-05-28
 * @brief CMSIS Peripheral Access Layer for Performance_Monitor
 *
 * CMSIS Peripheral Access Layer for Performance_Monitor
 */

#if !defined(Performance_Monitor_H_)
#define Performance_Monitor_H_                   /**< Symbol preventing repeated inclusion */

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
   -- Performance_Monitor Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Performance_Monitor_Peripheral_Access_Layer Performance_Monitor Peripheral Access Layer
 * @{
 */

/** Performance_Monitor - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[4096];
  __IO uint32_t PMG;                               /**< PMG, offset: 0x1000 */
       uint8_t RESERVED_1[12];
  __I  uint32_t INTPC;                             /**< INTPC, offset: 0x1010 */
       uint8_t RESERVED_2[108];
  __IO uint32_t PM0;                               /**< PM0, offset: 0x1080 */
  __IO uint32_t PM1;                               /**< PM1, offset: 0x1084 */
       uint8_t RESERVED_3[120];
  __IO uint32_t PMCTRL0;                           /**< PMCTRL0, offset: 0x1100 */
  __IO uint32_t PMCTRL1;                           /**< PMCTRL1, offset: 0x1104 */
       uint8_t RESERVED_4[120];
  __IO uint32_t PMSTAT0;                           /**< PMSTAT0, offset: 0x1180 */
  __IO uint32_t PMSTAT1;                           /**< PMSTAT1, offset: 0x1184 */
} Performance_Monitor_Type;

/* ----------------------------------------------------------------------------
   -- Performance_Monitor Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Performance_Monitor_Register_Masks Performance_Monitor Register Masks
 * @{
 */

/*! @name PMG - PMG */
/*! @{ */

#define Performance_Monitor_PMG_PMEN_MASK        (0x1U)
#define Performance_Monitor_PMG_PMEN_SHIFT       (0U)
/*! PMEN - Overall enable for all performance counting */
#define Performance_Monitor_PMG_PMEN(x)          (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMG_PMEN_SHIFT)) & Performance_Monitor_PMG_PMEN_MASK)

#define Performance_Monitor_PMG_RESERVED0_MASK   (0xFFFFFFFEU)
#define Performance_Monitor_PMG_RESERVED0_SHIFT  (1U)
/*! RESERVED0 - reserved field */
#define Performance_Monitor_PMG_RESERVED0(x)     (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMG_RESERVED0_SHIFT)) & Performance_Monitor_PMG_RESERVED0_MASK)
/*! @} */

/*! @name INTPC - INTPC */
/*! @{ */

#define Performance_Monitor_INTPC_INTPC_MASK     (0xFFFFFFFFU)
#define Performance_Monitor_INTPC_INTPC_SHIFT    (0U)
/*! INTPC - The PC (or the last-known good PC) at the time that the performance counter interrupt was asserted */
#define Performance_Monitor_INTPC_INTPC(x)       (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_INTPC_INTPC_SHIFT)) & Performance_Monitor_INTPC_INTPC_MASK)
/*! @} */

/*! @name PM0 - PM0 */
/*! @{ */

#define Performance_Monitor_PM0_PM0_MASK         (0xFFFFFFFFU)
#define Performance_Monitor_PM0_PM0_SHIFT        (0U)
/*! PM0 - Performance monitor 0 value */
#define Performance_Monitor_PM0_PM0(x)           (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PM0_PM0_SHIFT)) & Performance_Monitor_PM0_PM0_MASK)
/*! @} */

/*! @name PM1 - PM1 */
/*! @{ */

#define Performance_Monitor_PM1_PM1_MASK         (0xFFFFFFFFU)
#define Performance_Monitor_PM1_PM1_SHIFT        (0U)
/*! PM1 - Performance monitor 1 value */
#define Performance_Monitor_PM1_PM1(x)           (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PM1_PM1_SHIFT)) & Performance_Monitor_PM1_PM1_MASK)
/*! @} */

/*! @name PMCTRL0 - PMCTRL0 */
/*! @{ */

#define Performance_Monitor_PMCTRL0_INTEN_MASK   (0x1U)
#define Performance_Monitor_PMCTRL0_INTEN_SHIFT  (0U)
/*! INTEN - Enables assertion of PerfMonInt output when overflow happens. */
#define Performance_Monitor_PMCTRL0_INTEN(x)     (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMCTRL0_INTEN_SHIFT)) & Performance_Monitor_PMCTRL0_INTEN_MASK)

#define Performance_Monitor_PMCTRL0_RESERVED0_MASK (0x6U)
#define Performance_Monitor_PMCTRL0_RESERVED0_SHIFT (1U)
/*! RESERVED0 - reserved field */
#define Performance_Monitor_PMCTRL0_RESERVED0(x) (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMCTRL0_RESERVED0_SHIFT)) & Performance_Monitor_PMCTRL0_RESERVED0_MASK)

#define Performance_Monitor_PMCTRL0_KRNLCNT_MASK (0x8U)
#define Performance_Monitor_PMCTRL0_KRNLCNT_SHIFT (3U)
/*! KRNLCNT - Enables counting when EXECLEVEL > TRACESCOPE (i. */
#define Performance_Monitor_PMCTRL0_KRNLCNT(x)   (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMCTRL0_KRNLCNT_SHIFT)) & Performance_Monitor_PMCTRL0_KRNLCNT_MASK)

#define Performance_Monitor_PMCTRL0_TRACELEVEL_MASK (0xF0U)
#define Performance_Monitor_PMCTRL0_TRACELEVEL_SHIFT (4U)
/*! TRACELEVEL - Compares this value to EXECLEVEL when deciding whether to count. */
#define Performance_Monitor_PMCTRL0_TRACELEVEL(x) (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMCTRL0_TRACELEVEL_SHIFT)) & Performance_Monitor_PMCTRL0_TRACELEVEL_MASK)

#define Performance_Monitor_PMCTRL0_SELECT_MASK  (0x1F00U)
#define Performance_Monitor_PMCTRL0_SELECT_SHIFT (8U)
/*! SELECT - Selects input to be counted by the counter. */
#define Performance_Monitor_PMCTRL0_SELECT(x)    (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMCTRL0_SELECT_SHIFT)) & Performance_Monitor_PMCTRL0_SELECT_MASK)

#define Performance_Monitor_PMCTRL0_RESERVED1_MASK (0xE000U)
#define Performance_Monitor_PMCTRL0_RESERVED1_SHIFT (13U)
/*! RESERVED1 - reserved field */
#define Performance_Monitor_PMCTRL0_RESERVED1(x) (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMCTRL0_RESERVED1_SHIFT)) & Performance_Monitor_PMCTRL0_RESERVED1_MASK)

#define Performance_Monitor_PMCTRL0_MASK_MASK    (0xFFFF0000U)
#define Performance_Monitor_PMCTRL0_MASK_SHIFT   (16U)
/*! MASK - Selects input subsets to be counted (counter will increment only once even if more than
 *    one condition corresponding to a mask bit occurs).
 */
#define Performance_Monitor_PMCTRL0_MASK(x)      (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMCTRL0_MASK_SHIFT)) & Performance_Monitor_PMCTRL0_MASK_MASK)
/*! @} */

/*! @name PMCTRL1 - PMCTRL1 */
/*! @{ */

#define Performance_Monitor_PMCTRL1_INTEN_MASK   (0x1U)
#define Performance_Monitor_PMCTRL1_INTEN_SHIFT  (0U)
/*! INTEN - Enables assertion of PerfMonInt output when overflow happens. */
#define Performance_Monitor_PMCTRL1_INTEN(x)     (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMCTRL1_INTEN_SHIFT)) & Performance_Monitor_PMCTRL1_INTEN_MASK)

#define Performance_Monitor_PMCTRL1_RESERVED0_MASK (0x6U)
#define Performance_Monitor_PMCTRL1_RESERVED0_SHIFT (1U)
/*! RESERVED0 - reserved field */
#define Performance_Monitor_PMCTRL1_RESERVED0(x) (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMCTRL1_RESERVED0_SHIFT)) & Performance_Monitor_PMCTRL1_RESERVED0_MASK)

#define Performance_Monitor_PMCTRL1_KRNLCNT_MASK (0x8U)
#define Performance_Monitor_PMCTRL1_KRNLCNT_SHIFT (3U)
/*! KRNLCNT - Enables counting when EXECLEVEL > TRACESCOPE (i. */
#define Performance_Monitor_PMCTRL1_KRNLCNT(x)   (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMCTRL1_KRNLCNT_SHIFT)) & Performance_Monitor_PMCTRL1_KRNLCNT_MASK)

#define Performance_Monitor_PMCTRL1_TRACELEVEL_MASK (0xF0U)
#define Performance_Monitor_PMCTRL1_TRACELEVEL_SHIFT (4U)
/*! TRACELEVEL - Compares this value to EXECLEVEL when deciding whether to count. */
#define Performance_Monitor_PMCTRL1_TRACELEVEL(x) (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMCTRL1_TRACELEVEL_SHIFT)) & Performance_Monitor_PMCTRL1_TRACELEVEL_MASK)

#define Performance_Monitor_PMCTRL1_SELECT_MASK  (0x1F00U)
#define Performance_Monitor_PMCTRL1_SELECT_SHIFT (8U)
/*! SELECT - Selects input to be counted by the counter. */
#define Performance_Monitor_PMCTRL1_SELECT(x)    (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMCTRL1_SELECT_SHIFT)) & Performance_Monitor_PMCTRL1_SELECT_MASK)

#define Performance_Monitor_PMCTRL1_RESERVED1_MASK (0xE000U)
#define Performance_Monitor_PMCTRL1_RESERVED1_SHIFT (13U)
/*! RESERVED1 - reserved field */
#define Performance_Monitor_PMCTRL1_RESERVED1(x) (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMCTRL1_RESERVED1_SHIFT)) & Performance_Monitor_PMCTRL1_RESERVED1_MASK)

#define Performance_Monitor_PMCTRL1_MASK_MASK    (0xFFFF0000U)
#define Performance_Monitor_PMCTRL1_MASK_SHIFT   (16U)
/*! MASK - Selects input subsets to be counted (counter will increment only once even if more than
 *    one condition corresponding to a mask bit occurs).
 */
#define Performance_Monitor_PMCTRL1_MASK(x)      (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMCTRL1_MASK_SHIFT)) & Performance_Monitor_PMCTRL1_MASK_MASK)
/*! @} */

/*! @name PMSTAT0 - PMSTAT0 */
/*! @{ */

#define Performance_Monitor_PMSTAT0_OVFL_MASK    (0x1U)
#define Performance_Monitor_PMSTAT0_OVFL_SHIFT   (0U)
/*! OVFL - Counter Overflow. */
#define Performance_Monitor_PMSTAT0_OVFL(x)      (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMSTAT0_OVFL_SHIFT)) & Performance_Monitor_PMSTAT0_OVFL_MASK)

#define Performance_Monitor_PMSTAT0_RESERVED0_MASK (0xEU)
#define Performance_Monitor_PMSTAT0_RESERVED0_SHIFT (1U)
/*! RESERVED0 - reserved field */
#define Performance_Monitor_PMSTAT0_RESERVED0(x) (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMSTAT0_RESERVED0_SHIFT)) & Performance_Monitor_PMSTAT0_RESERVED0_MASK)

#define Performance_Monitor_PMSTAT0_INTASRT_MASK (0x10U)
#define Performance_Monitor_PMSTAT0_INTASRT_SHIFT (4U)
/*! INTASRT - This counter's overflow caused PerfMonInt to be asserted */
#define Performance_Monitor_PMSTAT0_INTASRT(x)   (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMSTAT0_INTASRT_SHIFT)) & Performance_Monitor_PMSTAT0_INTASRT_MASK)

#define Performance_Monitor_PMSTAT0_RESERVED1_MASK (0xFFFFFFE0U)
#define Performance_Monitor_PMSTAT0_RESERVED1_SHIFT (5U)
/*! RESERVED1 - reserved field */
#define Performance_Monitor_PMSTAT0_RESERVED1(x) (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMSTAT0_RESERVED1_SHIFT)) & Performance_Monitor_PMSTAT0_RESERVED1_MASK)
/*! @} */

/*! @name PMSTAT1 - PMSTAT1 */
/*! @{ */

#define Performance_Monitor_PMSTAT1_OVFL_MASK    (0x1U)
#define Performance_Monitor_PMSTAT1_OVFL_SHIFT   (0U)
/*! OVFL - Counter Overflow. */
#define Performance_Monitor_PMSTAT1_OVFL(x)      (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMSTAT1_OVFL_SHIFT)) & Performance_Monitor_PMSTAT1_OVFL_MASK)

#define Performance_Monitor_PMSTAT1_RESERVED0_MASK (0xEU)
#define Performance_Monitor_PMSTAT1_RESERVED0_SHIFT (1U)
/*! RESERVED0 - reserved field */
#define Performance_Monitor_PMSTAT1_RESERVED0(x) (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMSTAT1_RESERVED0_SHIFT)) & Performance_Monitor_PMSTAT1_RESERVED0_MASK)

#define Performance_Monitor_PMSTAT1_INTASRT_MASK (0x10U)
#define Performance_Monitor_PMSTAT1_INTASRT_SHIFT (4U)
/*! INTASRT - This counter's overflow caused PerfMonInt to be asserted */
#define Performance_Monitor_PMSTAT1_INTASRT(x)   (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMSTAT1_INTASRT_SHIFT)) & Performance_Monitor_PMSTAT1_INTASRT_MASK)

#define Performance_Monitor_PMSTAT1_RESERVED1_MASK (0xFFFFFFE0U)
#define Performance_Monitor_PMSTAT1_RESERVED1_SHIFT (5U)
/*! RESERVED1 - reserved field */
#define Performance_Monitor_PMSTAT1_RESERVED1(x) (((uint32_t)(((uint32_t)(x)) << Performance_Monitor_PMSTAT1_RESERVED1_SHIFT)) & Performance_Monitor_PMSTAT1_RESERVED1_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group Performance_Monitor_Register_Masks */


/*!
 * @}
 */ /* end of group Performance_Monitor_Peripheral_Access_Layer */


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


#endif  /* Performance_Monitor_H_ */

