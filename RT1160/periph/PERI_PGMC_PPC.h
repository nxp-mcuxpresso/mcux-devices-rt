/*
** ###################################################################
**     Processors:          MIMXRT1165CVM5A_cm4
**                          MIMXRT1165CVM5A_cm7
**                          MIMXRT1165DVM6A_cm4
**                          MIMXRT1165DVM6A_cm7
**                          MIMXRT1165XVM5A_cm4
**                          MIMXRT1165XVM5A_cm7
**                          MIMXRT1166CVM5A_cm4
**                          MIMXRT1166CVM5A_cm7
**                          MIMXRT1166DVM6A_cm4
**                          MIMXRT1166DVM6A_cm7
**                          MIMXRT1166XVM5A_cm4
**                          MIMXRT1166XVM5A_cm7
**
**     Version:             rev. 0.1, 2020-12-29
**     Build:               b240705
**
**     Abstract:
**         CMSIS Peripheral Access Layer for PGMC_PPC
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2024 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 0.1 (2020-12-29)
**         Initial version.
**
** ###################################################################
*/

/*!
 * @file PGMC_PPC.h
 * @version 0.1
 * @date 2020-12-29
 * @brief CMSIS Peripheral Access Layer for PGMC_PPC
 *
 * CMSIS Peripheral Access Layer for PGMC_PPC
 */

#if !defined(PGMC_PPC_H_)
#define PGMC_PPC_H_                              /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MIMXRT1165CVM5A_cm4) || defined(CPU_MIMXRT1165DVM6A_cm4) || defined(CPU_MIMXRT1165XVM5A_cm4))
#include "MIMXRT1165_cm4_COMMON.h"
#elif (defined(CPU_MIMXRT1165CVM5A_cm7) || defined(CPU_MIMXRT1165DVM6A_cm7) || defined(CPU_MIMXRT1165XVM5A_cm7))
#include "MIMXRT1165_cm7_COMMON.h"
#elif (defined(CPU_MIMXRT1166CVM5A_cm4) || defined(CPU_MIMXRT1166DVM6A_cm4) || defined(CPU_MIMXRT1166XVM5A_cm4))
#include "MIMXRT1166_cm4_COMMON.h"
#elif (defined(CPU_MIMXRT1166CVM5A_cm7) || defined(CPU_MIMXRT1166DVM6A_cm7) || defined(CPU_MIMXRT1166XVM5A_cm7))
#include "MIMXRT1166_cm7_COMMON.h"
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
#elif defined(__CWCC__)
  #pragma push
  #pragma cpp_extensions on
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=extended
#else
  #error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- PGMC_PPC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PGMC_PPC_Peripheral_Access_Layer PGMC_PPC Peripheral Access Layer
 * @{
 */

/** PGMC_PPC - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[4];
  __IO uint32_t PPC_AUTHEN_CTRL;                   /**< PPC Authentication Control, offset: 0x4 */
       uint8_t RESERVED_1[8];
  __IO uint32_t PPC_MODE;                          /**< PPC Mode, offset: 0x10 */
  __IO uint32_t PPC_STBY_CM_CTRL;                  /**< PPC standby CPU mode control, offset: 0x14 */
  __IO uint32_t PPC_STBY_SP_CTRL;                  /**< PPC standby Setpoint control, offset: 0x18 */
} PGMC_PPC_Type;

/* ----------------------------------------------------------------------------
   -- PGMC_PPC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PGMC_PPC_Register_Masks PGMC_PPC Register Masks
 * @{
 */

/*! @name PPC_AUTHEN_CTRL - PPC Authentication Control */
/*! @{ */

#define PGMC_PPC_PPC_AUTHEN_CTRL_USER_MASK       (0x1U)
#define PGMC_PPC_PPC_AUTHEN_CTRL_USER_SHIFT      (0U)
/*! USER - Allow user mode access */
#define PGMC_PPC_PPC_AUTHEN_CTRL_USER(x)         (((uint32_t)(((uint32_t)(x)) << PGMC_PPC_PPC_AUTHEN_CTRL_USER_SHIFT)) & PGMC_PPC_PPC_AUTHEN_CTRL_USER_MASK)

#define PGMC_PPC_PPC_AUTHEN_CTRL_NONSECURE_MASK  (0x2U)
#define PGMC_PPC_PPC_AUTHEN_CTRL_NONSECURE_SHIFT (1U)
/*! NONSECURE - Allow non-secure mode access */
#define PGMC_PPC_PPC_AUTHEN_CTRL_NONSECURE(x)    (((uint32_t)(((uint32_t)(x)) << PGMC_PPC_PPC_AUTHEN_CTRL_NONSECURE_SHIFT)) & PGMC_PPC_PPC_AUTHEN_CTRL_NONSECURE_MASK)

#define PGMC_PPC_PPC_AUTHEN_CTRL_LOCK_SETTING_MASK (0x10U)
#define PGMC_PPC_PPC_AUTHEN_CTRL_LOCK_SETTING_SHIFT (4U)
/*! LOCK_SETTING - Lock NONSECURE and USER */
#define PGMC_PPC_PPC_AUTHEN_CTRL_LOCK_SETTING(x) (((uint32_t)(((uint32_t)(x)) << PGMC_PPC_PPC_AUTHEN_CTRL_LOCK_SETTING_SHIFT)) & PGMC_PPC_PPC_AUTHEN_CTRL_LOCK_SETTING_MASK)

#define PGMC_PPC_PPC_AUTHEN_CTRL_WHITE_LIST_MASK (0xF00U)
#define PGMC_PPC_PPC_AUTHEN_CTRL_WHITE_LIST_SHIFT (8U)
/*! WHITE_LIST - Domain ID white list */
#define PGMC_PPC_PPC_AUTHEN_CTRL_WHITE_LIST(x)   (((uint32_t)(((uint32_t)(x)) << PGMC_PPC_PPC_AUTHEN_CTRL_WHITE_LIST_SHIFT)) & PGMC_PPC_PPC_AUTHEN_CTRL_WHITE_LIST_MASK)

#define PGMC_PPC_PPC_AUTHEN_CTRL_LOCK_LIST_MASK  (0x1000U)
#define PGMC_PPC_PPC_AUTHEN_CTRL_LOCK_LIST_SHIFT (12U)
/*! LOCK_LIST - White list lock */
#define PGMC_PPC_PPC_AUTHEN_CTRL_LOCK_LIST(x)    (((uint32_t)(((uint32_t)(x)) << PGMC_PPC_PPC_AUTHEN_CTRL_LOCK_LIST_SHIFT)) & PGMC_PPC_PPC_AUTHEN_CTRL_LOCK_LIST_MASK)

#define PGMC_PPC_PPC_AUTHEN_CTRL_LOCK_CFG_MASK   (0x100000U)
#define PGMC_PPC_PPC_AUTHEN_CTRL_LOCK_CFG_SHIFT  (20U)
/*! LOCK_CFG - Configuration lock */
#define PGMC_PPC_PPC_AUTHEN_CTRL_LOCK_CFG(x)     (((uint32_t)(((uint32_t)(x)) << PGMC_PPC_PPC_AUTHEN_CTRL_LOCK_CFG_SHIFT)) & PGMC_PPC_PPC_AUTHEN_CTRL_LOCK_CFG_MASK)
/*! @} */

/*! @name PPC_MODE - PPC Mode */
/*! @{ */

#define PGMC_PPC_PPC_MODE_CTRL_MODE_MASK         (0x3U)
#define PGMC_PPC_PPC_MODE_CTRL_MODE_SHIFT        (0U)
/*! CTRL_MODE - Control mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
 *  0b00..Not affected by any low power mode
 *  0b01..Controlled by CPU power mode of the domain
 *  0b10..Controlled by Setpoint and system standby
 *  0b11..Reserved
 */
#define PGMC_PPC_PPC_MODE_CTRL_MODE(x)           (((uint32_t)(((uint32_t)(x)) << PGMC_PPC_PPC_MODE_CTRL_MODE_SHIFT)) & PGMC_PPC_PPC_MODE_CTRL_MODE_MASK)

#define PGMC_PPC_PPC_MODE_DOMAIN_ASSIGN_MASK     (0x30U)
#define PGMC_PPC_PPC_MODE_DOMAIN_ASSIGN_SHIFT    (4U)
/*! DOMAIN_ASSIGN - Domain assignment of the BPC
 *  0b00..Domain 0
 *  0b01..Domain 1
 *  0b10..Domain 2
 *  0b11..Domain 3
 */
#define PGMC_PPC_PPC_MODE_DOMAIN_ASSIGN(x)       (((uint32_t)(((uint32_t)(x)) << PGMC_PPC_PPC_MODE_DOMAIN_ASSIGN_SHIFT)) & PGMC_PPC_PPC_MODE_DOMAIN_ASSIGN_MASK)
/*! @} */

/*! @name PPC_STBY_CM_CTRL - PPC standby CPU mode control */
/*! @{ */

#define PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_AT_WAIT_MASK (0x2U)
#define PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_AT_WAIT_SHIFT (1U)
/*! STBY_ON_AT_WAIT - PMIC Standby on when domain enters WAIT mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field. */
#define PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_AT_WAIT(x) (((uint32_t)(((uint32_t)(x)) << PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_AT_WAIT_SHIFT)) & PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_AT_WAIT_MASK)

#define PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_AT_STOP_MASK (0x4U)
#define PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_AT_STOP_SHIFT (2U)
/*! STBY_ON_AT_STOP - PMIC Standby on when domain enters STOP mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field. */
#define PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_AT_STOP(x) (((uint32_t)(((uint32_t)(x)) << PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_AT_STOP_SHIFT)) & PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_AT_STOP_MASK)

#define PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_AT_SUSPEND_MASK (0x8U)
#define PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_AT_SUSPEND_SHIFT (3U)
/*! STBY_ON_AT_SUSPEND - PMIC Standby on when domain enters SUSPEND mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field. */
#define PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_AT_SUSPEND(x) (((uint32_t)(((uint32_t)(x)) << PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_AT_SUSPEND_SHIFT)) & PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_AT_SUSPEND_MASK)

#define PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_SOFT_MASK (0x100U)
#define PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_SOFT_SHIFT (8U)
/*! STBY_ON_SOFT - Software PMIC standby on trigger */
#define PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_SOFT(x) (((uint32_t)(((uint32_t)(x)) << PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_SOFT_SHIFT)) & PGMC_PPC_PPC_STBY_CM_CTRL_STBY_ON_SOFT_MASK)

#define PGMC_PPC_PPC_STBY_CM_CTRL_STBY_OFF_SOFT_MASK (0x200U)
#define PGMC_PPC_PPC_STBY_CM_CTRL_STBY_OFF_SOFT_SHIFT (9U)
/*! STBY_OFF_SOFT - Software PMIC standby off trigger */
#define PGMC_PPC_PPC_STBY_CM_CTRL_STBY_OFF_SOFT(x) (((uint32_t)(((uint32_t)(x)) << PGMC_PPC_PPC_STBY_CM_CTRL_STBY_OFF_SOFT_SHIFT)) & PGMC_PPC_PPC_STBY_CM_CTRL_STBY_OFF_SOFT_MASK)
/*! @} */

/*! @name PPC_STBY_SP_CTRL - PPC standby Setpoint control */
/*! @{ */

#define PGMC_PPC_PPC_STBY_SP_CTRL_STBY_ON_AT_SP_ACTIVE_MASK (0xFFFFU)
#define PGMC_PPC_PPC_STBY_SP_CTRL_STBY_ON_AT_SP_ACTIVE_SHIFT (0U)
/*! STBY_ON_AT_SP_ACTIVE - PMIC standby on when system enters Setpoint number. This field is locked by AUTHEN_CTRL[LOCK_CFG] field. */
#define PGMC_PPC_PPC_STBY_SP_CTRL_STBY_ON_AT_SP_ACTIVE(x) (((uint32_t)(((uint32_t)(x)) << PGMC_PPC_PPC_STBY_SP_CTRL_STBY_ON_AT_SP_ACTIVE_SHIFT)) & PGMC_PPC_PPC_STBY_SP_CTRL_STBY_ON_AT_SP_ACTIVE_MASK)

#define PGMC_PPC_PPC_STBY_SP_CTRL_STBY_ON_AT_SP_SLEEP_MASK (0xFFFF0000U)
#define PGMC_PPC_PPC_STBY_SP_CTRL_STBY_ON_AT_SP_SLEEP_SHIFT (16U)
/*! STBY_ON_AT_SP_SLEEP - PMIC standby on when system enters Setpoint number and system is in
 *    standby mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
 */
#define PGMC_PPC_PPC_STBY_SP_CTRL_STBY_ON_AT_SP_SLEEP(x) (((uint32_t)(((uint32_t)(x)) << PGMC_PPC_PPC_STBY_SP_CTRL_STBY_ON_AT_SP_SLEEP_SHIFT)) & PGMC_PPC_PPC_STBY_SP_CTRL_STBY_ON_AT_SP_SLEEP_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group PGMC_PPC_Register_Masks */


/*!
 * @}
 */ /* end of group PGMC_PPC_Peripheral_Access_Layer */


/*
** End of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic pop
  #else
    #pragma pop
  #endif
#elif defined(__CWCC__)
  #pragma pop
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


#endif  /* PGMC_PPC_H_ */

