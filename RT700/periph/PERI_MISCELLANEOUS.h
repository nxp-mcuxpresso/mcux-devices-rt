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
**         CMSIS Peripheral Access Layer for Miscellaneous
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
 * @file Miscellaneous.h
 * @version 2.0
 * @date 2024-05-28
 * @brief CMSIS Peripheral Access Layer for Miscellaneous
 *
 * CMSIS Peripheral Access Layer for Miscellaneous
 */

#if !defined(Miscellaneous_H_)
#define Miscellaneous_H_                         /**< Symbol preventing repeated inclusion */

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
   -- Miscellaneous Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Miscellaneous_Peripheral_Access_Layer Miscellaneous Peripheral Access Layer
 * @{
 */

/** Miscellaneous - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[12320];
  __IO uint32_t PWRCTL;                            /**< PWRCTL, offset: 0x3020 */
  __IO uint32_t PWRSTAT;                           /**< PWRSTAT, offset: 0x3024 */
  __I  uint32_t ERISTAT;                           /**< ERISTAT, offset: 0x3028 */
} Miscellaneous_Type;

/* ----------------------------------------------------------------------------
   -- Miscellaneous Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Miscellaneous_Register_Masks Miscellaneous Register Masks
 * @{
 */

/*! @name PWRCTL - PWRCTL */
/*! @{ */

#define Miscellaneous_PWRCTL_RESERVED0_MASK      (0xFFFFU)
#define Miscellaneous_PWRCTL_RESERVED0_SHIFT     (0U)
/*! RESERVED0 - reserved field */
#define Miscellaneous_PWRCTL_RESERVED0(x)        (((uint32_t)(((uint32_t)(x)) << Miscellaneous_PWRCTL_RESERVED0_SHIFT)) & Miscellaneous_PWRCTL_RESERVED0_MASK)

#define Miscellaneous_PWRCTL_CoreReset_MASK      (0x10000U)
#define Miscellaneous_PWRCTL_CoreReset_SHIFT     (16U)
/*! CoreReset - Setting to 1 asserts reset to the core */
#define Miscellaneous_PWRCTL_CoreReset(x)        (((uint32_t)(((uint32_t)(x)) << Miscellaneous_PWRCTL_CoreReset_SHIFT)) & Miscellaneous_PWRCTL_CoreReset_MASK)

#define Miscellaneous_PWRCTL_RESERVED1_MASK      (0xFFE0000U)
#define Miscellaneous_PWRCTL_RESERVED1_SHIFT     (17U)
/*! RESERVED1 - reserved field */
#define Miscellaneous_PWRCTL_RESERVED1(x)        (((uint32_t)(((uint32_t)(x)) << Miscellaneous_PWRCTL_RESERVED1_SHIFT)) & Miscellaneous_PWRCTL_RESERVED1_MASK)

#define Miscellaneous_PWRCTL_DebugReset_MASK     (0x10000000U)
#define Miscellaneous_PWRCTL_DebugReset_SHIFT    (28U)
/*! DebugReset - Setting to 1 asserts reset to the Xtensa Debug module */
#define Miscellaneous_PWRCTL_DebugReset(x)       (((uint32_t)(((uint32_t)(x)) << Miscellaneous_PWRCTL_DebugReset_SHIFT)) & Miscellaneous_PWRCTL_DebugReset_MASK)

#define Miscellaneous_PWRCTL_RESERVED2_MASK      (0xE0000000U)
#define Miscellaneous_PWRCTL_RESERVED2_SHIFT     (29U)
/*! RESERVED2 - reserved field */
#define Miscellaneous_PWRCTL_RESERVED2(x)        (((uint32_t)(((uint32_t)(x)) << Miscellaneous_PWRCTL_RESERVED2_SHIFT)) & Miscellaneous_PWRCTL_RESERVED2_MASK)
/*! @} */

/*! @name PWRSTAT - PWRSTAT */
/*! @{ */

#define Miscellaneous_PWRSTAT_reserved_MASK      (0xFFFFU)
#define Miscellaneous_PWRSTAT_reserved_SHIFT     (0U)
/*! reserved - bit 0, 4, 8, 12 are tied high in configurations without PSO. */
#define Miscellaneous_PWRSTAT_reserved(x)        (((uint32_t)(((uint32_t)(x)) << Miscellaneous_PWRSTAT_reserved_SHIFT)) & Miscellaneous_PWRSTAT_reserved_MASK)

#define Miscellaneous_PWRSTAT_CoreWasReset_MASK  (0x10000U)
#define Miscellaneous_PWRSTAT_CoreWasReset_SHIFT (16U)
/*! CoreWasReset - Core was reset since last time this bit was cleared (value depends on PWRCTL. */
#define Miscellaneous_PWRSTAT_CoreWasReset(x)    (((uint32_t)(((uint32_t)(x)) << Miscellaneous_PWRSTAT_CoreWasReset_SHIFT)) & Miscellaneous_PWRSTAT_CoreWasReset_MASK)

#define Miscellaneous_PWRSTAT_RESERVED0_MASK     (0xFFE0000U)
#define Miscellaneous_PWRSTAT_RESERVED0_SHIFT    (17U)
/*! RESERVED0 - reserved field */
#define Miscellaneous_PWRSTAT_RESERVED0(x)       (((uint32_t)(((uint32_t)(x)) << Miscellaneous_PWRSTAT_RESERVED0_SHIFT)) & Miscellaneous_PWRSTAT_RESERVED0_MASK)

#define Miscellaneous_PWRSTAT_DebugWasReset_MASK (0x10000000U)
#define Miscellaneous_PWRSTAT_DebugWasReset_SHIFT (28U)
/*! DebugWasReset - Debug module was reset since last time this bit was cleared (value depends on PWRCTL. */
#define Miscellaneous_PWRSTAT_DebugWasReset(x)   (((uint32_t)(((uint32_t)(x)) << Miscellaneous_PWRSTAT_DebugWasReset_SHIFT)) & Miscellaneous_PWRSTAT_DebugWasReset_MASK)

#define Miscellaneous_PWRSTAT_RESERVED1_MASK     (0xE0000000U)
#define Miscellaneous_PWRSTAT_RESERVED1_SHIFT    (29U)
/*! RESERVED1 - reserved field */
#define Miscellaneous_PWRSTAT_RESERVED1(x)       (((uint32_t)(((uint32_t)(x)) << Miscellaneous_PWRSTAT_RESERVED1_SHIFT)) & Miscellaneous_PWRSTAT_RESERVED1_MASK)
/*! @} */

/*! @name ERISTAT - ERISTAT */
/*! @{ */

#define Miscellaneous_ERISTAT_WRISUC_MASK        (0x1U)
#define Miscellaneous_ERISTAT_WRISUC_SHIFT       (0U)
/*! WRISUC - ERI write success indication, (value is updated based on processor write to eri interface) */
#define Miscellaneous_ERISTAT_WRISUC(x)          (((uint32_t)(((uint32_t)(x)) << Miscellaneous_ERISTAT_WRISUC_SHIFT)) & Miscellaneous_ERISTAT_WRISUC_MASK)

#define Miscellaneous_ERISTAT_RESERVED0_MASK     (0xFFFFFFFEU)
#define Miscellaneous_ERISTAT_RESERVED0_SHIFT    (1U)
/*! RESERVED0 - reserved field */
#define Miscellaneous_ERISTAT_RESERVED0(x)       (((uint32_t)(((uint32_t)(x)) << Miscellaneous_ERISTAT_RESERVED0_SHIFT)) & Miscellaneous_ERISTAT_RESERVED0_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group Miscellaneous_Register_Masks */


/*!
 * @}
 */ /* end of group Miscellaneous_Peripheral_Access_Layer */


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


#endif  /* Miscellaneous_H_ */

