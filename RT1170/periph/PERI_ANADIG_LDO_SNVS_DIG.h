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
**         CMSIS Peripheral Access Layer for ANADIG_LDO_SNVS_DIG
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
 * @file ANADIG_LDO_SNVS_DIG.h
 * @version 1.0
 * @date 2020-12-29
 * @brief CMSIS Peripheral Access Layer for ANADIG_LDO_SNVS_DIG
 *
 * CMSIS Peripheral Access Layer for ANADIG_LDO_SNVS_DIG
 */

#if !defined(ANADIG_LDO_SNVS_DIG_H_)
#define ANADIG_LDO_SNVS_DIG_H_                   /**< Symbol preventing repeated inclusion */

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
   -- ANADIG_LDO_SNVS_DIG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ANADIG_LDO_SNVS_DIG_Peripheral_Access_Layer ANADIG_LDO_SNVS_DIG Peripheral Access Layer
 * @{
 */

/** ANADIG_LDO_SNVS_DIG - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[1344];
  __IO uint32_t PMU_LDO_SNVS_DIG;                  /**< PMU_LDO_SNVS_DIG_REGISTER, offset: 0x540 */
} ANADIG_LDO_SNVS_DIG_Type;

/* ----------------------------------------------------------------------------
   -- ANADIG_LDO_SNVS_DIG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ANADIG_LDO_SNVS_DIG_Register_Masks ANADIG_LDO_SNVS_DIG Register Masks
 * @{
 */

/*! @name PMU_LDO_SNVS_DIG - PMU_LDO_SNVS_DIG_REGISTER */
/*! @{ */

#define ANADIG_LDO_SNVS_DIG_PMU_LDO_SNVS_DIG_REG_LP_EN_MASK (0x1U)
#define ANADIG_LDO_SNVS_DIG_PMU_LDO_SNVS_DIG_REG_LP_EN_SHIFT (0U)
/*! REG_LP_EN - REG_LP_EN */
#define ANADIG_LDO_SNVS_DIG_PMU_LDO_SNVS_DIG_REG_LP_EN(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_LDO_SNVS_DIG_PMU_LDO_SNVS_DIG_REG_LP_EN_SHIFT)) & ANADIG_LDO_SNVS_DIG_PMU_LDO_SNVS_DIG_REG_LP_EN_MASK)

#define ANADIG_LDO_SNVS_DIG_PMU_LDO_SNVS_DIG_TEST_OVERRIDE_MASK (0x2U)
#define ANADIG_LDO_SNVS_DIG_PMU_LDO_SNVS_DIG_TEST_OVERRIDE_SHIFT (1U)
/*! TEST_OVERRIDE - test_override */
#define ANADIG_LDO_SNVS_DIG_PMU_LDO_SNVS_DIG_TEST_OVERRIDE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_LDO_SNVS_DIG_PMU_LDO_SNVS_DIG_TEST_OVERRIDE_SHIFT)) & ANADIG_LDO_SNVS_DIG_PMU_LDO_SNVS_DIG_TEST_OVERRIDE_MASK)

#define ANADIG_LDO_SNVS_DIG_PMU_LDO_SNVS_DIG_REG_EN_MASK (0x4U)
#define ANADIG_LDO_SNVS_DIG_PMU_LDO_SNVS_DIG_REG_EN_SHIFT (2U)
/*! REG_EN - REG_EN */
#define ANADIG_LDO_SNVS_DIG_PMU_LDO_SNVS_DIG_REG_EN(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_LDO_SNVS_DIG_PMU_LDO_SNVS_DIG_REG_EN_SHIFT)) & ANADIG_LDO_SNVS_DIG_PMU_LDO_SNVS_DIG_REG_EN_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ANADIG_LDO_SNVS_DIG_Register_Masks */


/*!
 * @}
 */ /* end of group ANADIG_LDO_SNVS_DIG_Peripheral_Access_Layer */


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


#endif  /* ANADIG_LDO_SNVS_DIG_H_ */

