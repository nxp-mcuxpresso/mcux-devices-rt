/*
** ###################################################################
**     Processors:          MIMXRT1171AVM8A
**                          MIMXRT1171CVM8A
**                          MIMXRT1171DVMAA
**                          MIMXRT1172AVM8A
**                          MIMXRT1172CVM8A
**                          MIMXRT1172DVMAA
**                          MIMXRT1173CVM8A_cm4
**                          MIMXRT1173CVM8A_cm7
**                          MIMXRT1175AVM8A_cm4
**                          MIMXRT1175AVM8A_cm7
**                          MIMXRT1175CVM8A_cm4
**                          MIMXRT1175CVM8A_cm7
**                          MIMXRT1175DVMAA_cm4
**                          MIMXRT1175DVMAA_cm7
**                          MIMXRT1176AVM8A_cm4
**                          MIMXRT1176AVM8A_cm7
**                          MIMXRT1176CVM8A_cm4
**                          MIMXRT1176CVM8A_cm7
**                          MIMXRT1176DVMAA_cm4
**                          MIMXRT1176DVMAA_cm7
**                          MIMXRT117HAVM8A_cm4
**                          MIMXRT117HAVM8A_cm7
**                          MIMXRT117HCVM8A_cm4
**                          MIMXRT117HCVM8A_cm7
**                          MIMXRT117HDVMAA_cm4
**                          MIMXRT117HDVMAA_cm7
**
**     Version:             rev. 1.0, 2020-12-29
**     Build:               b241022
**
**     Abstract:
**         CMSIS Peripheral Access Layer for IPS_DOMAIN
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2024 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 0.1 (2018-03-05)
**         Initial version.
**     - rev. 1.0 (2020-12-29)
**         Update header files to align with IMXRT1170RM Rev.0.
**
** ###################################################################
*/

/*!
 * @file IPS_DOMAIN.h
 * @version 1.0
 * @date 2020-12-29
 * @brief CMSIS Peripheral Access Layer for IPS_DOMAIN
 *
 * CMSIS Peripheral Access Layer for IPS_DOMAIN
 */

#if !defined(IPS_DOMAIN_H_)
#define IPS_DOMAIN_H_                            /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MIMXRT1171AVM8A) || defined(CPU_MIMXRT1171CVM8A) || defined(CPU_MIMXRT1171DVMAA))
#include "MIMXRT1171_COMMON.h"
#elif (defined(CPU_MIMXRT1172AVM8A) || defined(CPU_MIMXRT1172CVM8A) || defined(CPU_MIMXRT1172DVMAA))
#include "MIMXRT1172_COMMON.h"
#elif (defined(CPU_MIMXRT1173CVM8A_cm4))
#include "MIMXRT1173_cm4_COMMON.h"
#elif (defined(CPU_MIMXRT1173CVM8A_cm7))
#include "MIMXRT1173_cm7_COMMON.h"
#elif (defined(CPU_MIMXRT1175AVM8A_cm4) || defined(CPU_MIMXRT1175CVM8A_cm4) || defined(CPU_MIMXRT1175DVMAA_cm4))
#include "MIMXRT1175_cm4_COMMON.h"
#elif (defined(CPU_MIMXRT1175AVM8A_cm7) || defined(CPU_MIMXRT1175CVM8A_cm7) || defined(CPU_MIMXRT1175DVMAA_cm7))
#include "MIMXRT1175_cm7_COMMON.h"
#elif (defined(CPU_MIMXRT1176AVM8A_cm4) || defined(CPU_MIMXRT1176CVM8A_cm4) || defined(CPU_MIMXRT1176DVMAA_cm4))
#include "MIMXRT1176_cm4_COMMON.h"
#elif (defined(CPU_MIMXRT1176AVM8A_cm7) || defined(CPU_MIMXRT1176CVM8A_cm7) || defined(CPU_MIMXRT1176DVMAA_cm7))
#include "MIMXRT1176_cm7_COMMON.h"
#elif (defined(CPU_MIMXRT117HAVM8A_cm4) || defined(CPU_MIMXRT117HCVM8A_cm4) || defined(CPU_MIMXRT117HDVMAA_cm4))
#include "MIMXRT117H_cm4_COMMON.h"
#elif (defined(CPU_MIMXRT117HAVM8A_cm7) || defined(CPU_MIMXRT117HCVM8A_cm7) || defined(CPU_MIMXRT117HDVMAA_cm7))
#include "MIMXRT117H_cm7_COMMON.h"
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
   -- IPS_DOMAIN Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup IPS_DOMAIN_Peripheral_Access_Layer IPS_DOMAIN Peripheral Access Layer
 * @{
 */

/** IPS_DOMAIN - Size of Registers Arrays */
#define IPS_DOMAIN_SLOT_CTRL_COUNT                38u

/** IPS_DOMAIN - Register Layout Typedef */
typedef struct {
  struct {                                         /* offset: 0x0, array step: 0x10 */
    __IO uint32_t SLOT_CTRL;                         /**< Slot Control Register, array offset: 0x0, array step: 0x10 */
         uint8_t RESERVED_0[12];
  } SLOT_CTRL[IPS_DOMAIN_SLOT_CTRL_COUNT];
} IPS_DOMAIN_Type;

/* ----------------------------------------------------------------------------
   -- IPS_DOMAIN Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup IPS_DOMAIN_Register_Masks IPS_DOMAIN Register Masks
 * @{
 */

/*! @name SLOT_CTRL - Slot Control Register */
/*! @{ */

#define IPS_DOMAIN_SLOT_CTRL_LOCKED_DOMAIN_ID_MASK (0xFU)
#define IPS_DOMAIN_SLOT_CTRL_LOCKED_DOMAIN_ID_SHIFT (0U)
/*! LOCKED_DOMAIN_ID - Domain ID of the slot to be locked */
#define IPS_DOMAIN_SLOT_CTRL_LOCKED_DOMAIN_ID(x) (((uint32_t)(((uint32_t)(x)) << IPS_DOMAIN_SLOT_CTRL_LOCKED_DOMAIN_ID_SHIFT)) & IPS_DOMAIN_SLOT_CTRL_LOCKED_DOMAIN_ID_MASK)

#define IPS_DOMAIN_SLOT_CTRL_DOMAIN_LOCK_MASK    (0x8000U)
#define IPS_DOMAIN_SLOT_CTRL_DOMAIN_LOCK_SHIFT   (15U)
/*! DOMAIN_LOCK - Lock domain ID of this slot
 *  0b0..Do not lock the domain ID
 *  0b1..Lock the domain ID
 */
#define IPS_DOMAIN_SLOT_CTRL_DOMAIN_LOCK(x)      (((uint32_t)(((uint32_t)(x)) << IPS_DOMAIN_SLOT_CTRL_DOMAIN_LOCK_SHIFT)) & IPS_DOMAIN_SLOT_CTRL_DOMAIN_LOCK_MASK)

#define IPS_DOMAIN_SLOT_CTRL_ALLOW_NONSECURE_MASK (0x10000U)
#define IPS_DOMAIN_SLOT_CTRL_ALLOW_NONSECURE_SHIFT (16U)
/*! ALLOW_NONSECURE - Allow non-secure write access to this domain control register or domain register
 *  0b0..Do not allow non-secure write access
 *  0b1..Allow non-secure write access
 */
#define IPS_DOMAIN_SLOT_CTRL_ALLOW_NONSECURE(x)  (((uint32_t)(((uint32_t)(x)) << IPS_DOMAIN_SLOT_CTRL_ALLOW_NONSECURE_SHIFT)) & IPS_DOMAIN_SLOT_CTRL_ALLOW_NONSECURE_MASK)

#define IPS_DOMAIN_SLOT_CTRL_ALLOW_USER_MASK     (0x20000U)
#define IPS_DOMAIN_SLOT_CTRL_ALLOW_USER_SHIFT    (17U)
/*! ALLOW_USER - Allow user write access to this domain control register or domain register
 *  0b0..Do not allow user write access
 *  0b1..Allow user write access
 */
#define IPS_DOMAIN_SLOT_CTRL_ALLOW_USER(x)       (((uint32_t)(((uint32_t)(x)) << IPS_DOMAIN_SLOT_CTRL_ALLOW_USER_SHIFT)) & IPS_DOMAIN_SLOT_CTRL_ALLOW_USER_MASK)

#define IPS_DOMAIN_SLOT_CTRL_LOCK_CONTROL_MASK   (0x80000000U)
#define IPS_DOMAIN_SLOT_CTRL_LOCK_CONTROL_SHIFT  (31U)
/*! LOCK_CONTROL - Lock control of this slot
 *  0b0..Do not lock the control register of this slot
 *  0b1..Lock the control register of this slot
 */
#define IPS_DOMAIN_SLOT_CTRL_LOCK_CONTROL(x)     (((uint32_t)(((uint32_t)(x)) << IPS_DOMAIN_SLOT_CTRL_LOCK_CONTROL_SHIFT)) & IPS_DOMAIN_SLOT_CTRL_LOCK_CONTROL_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group IPS_DOMAIN_Register_Masks */


/*!
 * @}
 */ /* end of group IPS_DOMAIN_Peripheral_Access_Layer */


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


#endif  /* IPS_DOMAIN_H_ */

