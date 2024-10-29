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
**         CMSIS Peripheral Access Layer for TAP
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
 * @file TAP.h
 * @version 2.0
 * @date 2024-05-28
 * @brief CMSIS Peripheral Access Layer for TAP
 *
 * CMSIS Peripheral Access Layer for TAP
 */

#if !defined(TAP_H_)
#define TAP_H_                                   /**< Symbol preventing repeated inclusion */

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
   -- TAP Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup TAP_Peripheral_Access_Layer TAP Peripheral Access Layer
 * @{
 */

/** TAP - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[8];
  __IO uint8_t PWRCTL;                             /**< PWRCTL, offset: 0x8 */
  __IO uint8_t PWRSTAT;                            /**< PWRSTAT, offset: 0x9 */
       uint8_t RESERVED_1[20];
  __I  uint32_t IDCODE;                            /**< IDCODE, offset: 0x1E */
} TAP_Type;

/* ----------------------------------------------------------------------------
   -- TAP Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup TAP_Register_Masks TAP Register Masks
 * @{
 */

/*! @name PWRCTL - PWRCTL */
/*! @{ */

#define TAP_PWRCTL_RESERVED0_MASK                (0xFU)
#define TAP_PWRCTL_RESERVED0_SHIFT               (0U)
/*! RESERVED0 - reserved field */
#define TAP_PWRCTL_RESERVED0(x)                  (((uint8_t)(((uint8_t)(x)) << TAP_PWRCTL_RESERVED0_SHIFT)) & TAP_PWRCTL_RESERVED0_MASK)

#define TAP_PWRCTL_CoreReset_MASK                (0x10U)
#define TAP_PWRCTL_CoreReset_SHIFT               (4U)
/*! CoreReset - Setting to 1 asserts reset to the core */
#define TAP_PWRCTL_CoreReset(x)                  (((uint8_t)(((uint8_t)(x)) << TAP_PWRCTL_CoreReset_SHIFT)) & TAP_PWRCTL_CoreReset_MASK)

#define TAP_PWRCTL_RESERVED1_MASK                (0x20U)
#define TAP_PWRCTL_RESERVED1_SHIFT               (5U)
/*! RESERVED1 - reserved field */
#define TAP_PWRCTL_RESERVED1(x)                  (((uint8_t)(((uint8_t)(x)) << TAP_PWRCTL_RESERVED1_SHIFT)) & TAP_PWRCTL_RESERVED1_MASK)

#define TAP_PWRCTL_DebugReset_MASK               (0x40U)
#define TAP_PWRCTL_DebugReset_SHIFT              (6U)
/*! DebugReset - Setting to 1 asserts reset to the Xtensa Debug module */
#define TAP_PWRCTL_DebugReset(x)                 (((uint8_t)(((uint8_t)(x)) << TAP_PWRCTL_DebugReset_SHIFT)) & TAP_PWRCTL_DebugReset_MASK)

#define TAP_PWRCTL_reserved_MASK                 (0x80U)
#define TAP_PWRCTL_reserved_SHIFT                (7U)
/*! reserved - (Tied high in configurations without PSO. */
#define TAP_PWRCTL_reserved(x)                   (((uint8_t)(((uint8_t)(x)) << TAP_PWRCTL_reserved_SHIFT)) & TAP_PWRCTL_reserved_MASK)
/*! @} */

/*! @name PWRSTAT - PWRSTAT */
/*! @{ */

#define TAP_PWRSTAT_reserved_MASK                (0xFU)
#define TAP_PWRSTAT_reserved_SHIFT               (0U)
/*! reserved - (Tied high in configurations without PSO. */
#define TAP_PWRSTAT_reserved(x)                  (((uint8_t)(((uint8_t)(x)) << TAP_PWRSTAT_reserved_SHIFT)) & TAP_PWRSTAT_reserved_MASK)

#define TAP_PWRSTAT_CoreWasReset_MASK            (0x10U)
#define TAP_PWRSTAT_CoreWasReset_SHIFT           (4U)
/*! CoreWasReset - TAP Core was reset since last time this bit was cleared */
#define TAP_PWRSTAT_CoreWasReset(x)              (((uint8_t)(((uint8_t)(x)) << TAP_PWRSTAT_CoreWasReset_SHIFT)) & TAP_PWRSTAT_CoreWasReset_MASK)

#define TAP_PWRSTAT_RESERVED0_MASK               (0x20U)
#define TAP_PWRSTAT_RESERVED0_SHIFT              (5U)
/*! RESERVED0 - reserved field */
#define TAP_PWRSTAT_RESERVED0(x)                 (((uint8_t)(((uint8_t)(x)) << TAP_PWRSTAT_RESERVED0_SHIFT)) & TAP_PWRSTAT_RESERVED0_MASK)

#define TAP_PWRSTAT_DebugWasReset_MASK           (0x40U)
#define TAP_PWRSTAT_DebugWasReset_SHIFT          (6U)
/*! DebugWasReset - TAP Debug module was reset since last time this bit was cleared */
#define TAP_PWRSTAT_DebugWasReset(x)             (((uint8_t)(((uint8_t)(x)) << TAP_PWRSTAT_DebugWasReset_SHIFT)) & TAP_PWRSTAT_DebugWasReset_MASK)

#define TAP_PWRSTAT_RESERVED1_MASK               (0x80U)
#define TAP_PWRSTAT_RESERVED1_SHIFT              (7U)
/*! RESERVED1 - reserved field */
#define TAP_PWRSTAT_RESERVED1(x)                 (((uint8_t)(((uint8_t)(x)) << TAP_PWRSTAT_RESERVED1_SHIFT)) & TAP_PWRSTAT_RESERVED1_MASK)
/*! @} */

/*! @name IDCODE - IDCODE */
/*! @{ */

#define TAP_IDCODE_Check_MASK                    (0x1U)
#define TAP_IDCODE_Check_SHIFT                   (0U)
/*! Check - Check field */
#define TAP_IDCODE_Check(x)                      (((uint32_t)(((uint32_t)(x)) << TAP_IDCODE_Check_SHIFT)) & TAP_IDCODE_Check_MASK)

#define TAP_IDCODE_ManufacturerID_MASK           (0xFFEU)
#define TAP_IDCODE_ManufacturerID_SHIFT          (1U)
/*! ManufacturerID - JEDEC Manufacturer ID for Xtensa processors. */
#define TAP_IDCODE_ManufacturerID(x)             (((uint32_t)(((uint32_t)(x)) << TAP_IDCODE_ManufacturerID_SHIFT)) & TAP_IDCODE_ManufacturerID_MASK)

#define TAP_IDCODE_PartNum_MASK                  (0xFFFF000U)
#define TAP_IDCODE_PartNum_SHIFT                 (12U)
/*! PartNum - Xtensa part number */
#define TAP_IDCODE_PartNum(x)                    (((uint32_t)(((uint32_t)(x)) << TAP_IDCODE_PartNum_SHIFT)) & TAP_IDCODE_PartNum_MASK)

#define TAP_IDCODE_Version_MASK                  (0xF0000000U)
#define TAP_IDCODE_Version_SHIFT                 (28U)
/*! Version - Xtensa architecture version */
#define TAP_IDCODE_Version(x)                    (((uint32_t)(((uint32_t)(x)) << TAP_IDCODE_Version_SHIFT)) & TAP_IDCODE_Version_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group TAP_Register_Masks */


/*!
 * @}
 */ /* end of group TAP_Peripheral_Access_Layer */


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


#endif  /* TAP_H_ */

