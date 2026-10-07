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
**         CMSIS Peripheral Access Layer for MTR_BIST
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
 * @file PERI_MTR_BIST.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for MTR_BIST
 *
 * CMSIS Peripheral Access Layer for MTR_BIST
 */

#if !defined(PERI_MTR_BIST_H_)
#define PERI_MTR_BIST_H_                         /**< Symbol preventing repeated inclusion */

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
   -- MTR_BIST Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MTR_BIST_Peripheral_Access_Layer MTR_BIST Peripheral Access Layer
 * @{
 */

/** MTR_BIST - Register Layout Typedef */
typedef struct {
  __IO uint32_t IOR;                               /**< offset: 0x0 */
  __IO uint32_t IAR;                               /**< offset: 0x4 */
  __IO uint32_t BSTARTDA;                          /**< offset: 0x8 */
  __IO uint32_t BSTATDA;                           /**< offset: 0xC */
} MTR_BIST_Type;

/* ----------------------------------------------------------------------------
   -- MTR_BIST Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MTR_BIST_Register_Masks MTR_BIST Register Masks
 * @{
 */

/*! @name IOR -  */
/*! @{ */

#define MTR_BIST_IOR_OFFSET_MASK                 (0xFFFFFFFFU)
#define MTR_BIST_IOR_OFFSET_SHIFT                (0U)
#define MTR_BIST_IOR_OFFSET(x)                   (((uint32_t)(((uint32_t)(x)) << MTR_BIST_IOR_OFFSET_SHIFT)) & MTR_BIST_IOR_OFFSET_MASK)
/*! @} */

/*! @name IAR -  */
/*! @{ */

#define MTR_BIST_IAR_VALUE_MASK                  (0xFFFFFFFFU)
#define MTR_BIST_IAR_VALUE_SHIFT                 (0U)
#define MTR_BIST_IAR_VALUE(x)                    (((uint32_t)(((uint32_t)(x)) << MTR_BIST_IAR_VALUE_SHIFT)) & MTR_BIST_IAR_VALUE_MASK)
/*! @} */

/*! @name BSTARTDA -  */
/*! @{ */

#define MTR_BIST_BSTARTDA_BSTART_MASK            (0x3U)
#define MTR_BIST_BSTARTDA_BSTART_SHIFT           (0U)
/*! BSTART
 *  0b00..
 *  0b01..
 *  0b10..
 *  0b11..
 */
#define MTR_BIST_BSTARTDA_BSTART(x)              (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTARTDA_BSTART_SHIFT)) & MTR_BIST_BSTARTDA_BSTART_MASK)

#define MTR_BIST_BSTARTDA_GALPAT_EN_MASK         (0x4U)
#define MTR_BIST_BSTARTDA_GALPAT_EN_SHIFT        (2U)
#define MTR_BIST_BSTARTDA_GALPAT_EN(x)           (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTARTDA_GALPAT_EN_SHIFT)) & MTR_BIST_BSTARTDA_GALPAT_EN_MASK)

#define MTR_BIST_BSTARTDA_LBEN_MASK              (0x8U)
#define MTR_BIST_BSTARTDA_LBEN_SHIFT             (3U)
#define MTR_BIST_BSTARTDA_LBEN(x)                (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTARTDA_LBEN_SHIFT)) & MTR_BIST_BSTARTDA_LBEN_MASK)

#define MTR_BIST_BSTARTDA_DEAD_MASK              (0x10U)
#define MTR_BIST_BSTARTDA_DEAD_SHIFT             (4U)
#define MTR_BIST_BSTARTDA_DEAD(x)                (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTARTDA_DEAD_SHIFT)) & MTR_BIST_BSTARTDA_DEAD_MASK)

#define MTR_BIST_BSTARTDA_FAILED_ONLY_MASK       (0x20U)
#define MTR_BIST_BSTARTDA_FAILED_ONLY_SHIFT      (5U)
#define MTR_BIST_BSTARTDA_FAILED_ONLY(x)         (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTARTDA_FAILED_ONLY_SHIFT)) & MTR_BIST_BSTARTDA_FAILED_ONLY_MASK)

#define MTR_BIST_BSTARTDA_WIDE_MODE_MASK         (0x40U)
#define MTR_BIST_BSTARTDA_WIDE_MODE_SHIFT        (6U)
#define MTR_BIST_BSTARTDA_WIDE_MODE(x)           (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTARTDA_WIDE_MODE_SHIFT)) & MTR_BIST_BSTARTDA_WIDE_MODE_MASK)

#define MTR_BIST_BSTARTDA_LOOP_MASK              (0xF00U)
#define MTR_BIST_BSTARTDA_LOOP_SHIFT             (8U)
#define MTR_BIST_BSTARTDA_LOOP(x)                (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTARTDA_LOOP_SHIFT)) & MTR_BIST_BSTARTDA_LOOP_MASK)

#define MTR_BIST_BSTARTDA_SEQEN_MASK             (0x1000U)
#define MTR_BIST_BSTARTDA_SEQEN_SHIFT            (12U)
#define MTR_BIST_BSTARTDA_SEQEN(x)               (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTARTDA_SEQEN_SHIFT)) & MTR_BIST_BSTARTDA_SEQEN_MASK)

#define MTR_BIST_BSTARTDA_ME_VMP_MASK            (0xF0000U)
#define MTR_BIST_BSTARTDA_ME_VMP_SHIFT           (16U)
/*! ME_VMP - The number of march phases, minus 1 */
#define MTR_BIST_BSTARTDA_ME_VMP(x)              (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTARTDA_ME_VMP_SHIFT)) & MTR_BIST_BSTARTDA_ME_VMP_MASK)

#define MTR_BIST_BSTARTDA_ME_D_MASK              (0x800000U)
#define MTR_BIST_BSTARTDA_ME_D_SHIFT             (23U)
/*! ME_D
 *  0b0..
 *  0b1..
 */
#define MTR_BIST_BSTARTDA_ME_D(x)                (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTARTDA_ME_D_SHIFT)) & MTR_BIST_BSTARTDA_ME_D_MASK)

#define MTR_BIST_BSTARTDA_ROW_REPAIR_MASK        (0x1000000U)
#define MTR_BIST_BSTARTDA_ROW_REPAIR_SHIFT       (24U)
#define MTR_BIST_BSTARTDA_ROW_REPAIR(x)          (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTARTDA_ROW_REPAIR_SHIFT)) & MTR_BIST_BSTARTDA_ROW_REPAIR_MASK)

#define MTR_BIST_BSTARTDA_FIRST_FAULT_MASK       (0x2000000U)
#define MTR_BIST_BSTARTDA_FIRST_FAULT_SHIFT      (25U)
#define MTR_BIST_BSTARTDA_FIRST_FAULT(x)         (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTARTDA_FIRST_FAULT_SHIFT)) & MTR_BIST_BSTARTDA_FIRST_FAULT_MASK)
/*! @} */

/*! @name BSTATDA -  */
/*! @{ */

#define MTR_BIST_BSTATDA_STATUS_MASK             (0xFU)
#define MTR_BIST_BSTATDA_STATUS_SHIFT            (0U)
/*! STATUS
 *  0b0000..
 *  0b0001..
 *  0b0010..
 *  0b0011..
 *  0b0101..
 *  0b0110..
 *  0b0111..
 *  0b1011..
 *  0b1111..
 */
#define MTR_BIST_BSTATDA_STATUS(x)               (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTATDA_STATUS_SHIFT)) & MTR_BIST_BSTATDA_STATUS_MASK)

#define MTR_BIST_BSTATDA_PSOURCE_MASK            (0x10U)
#define MTR_BIST_BSTATDA_PSOURCE_SHIFT           (4U)
#define MTR_BIST_BSTATDA_PSOURCE(x)              (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTATDA_PSOURCE_SHIFT)) & MTR_BIST_BSTATDA_PSOURCE_MASK)

#define MTR_BIST_BSTATDA_HOLD_ERR_MASK           (0x20U)
#define MTR_BIST_BSTATDA_HOLD_ERR_SHIFT          (5U)
#define MTR_BIST_BSTATDA_HOLD_ERR(x)             (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTATDA_HOLD_ERR_SHIFT)) & MTR_BIST_BSTATDA_HOLD_ERR_MASK)

#define MTR_BIST_BSTATDA_UCF_MASK                (0x40U)
#define MTR_BIST_BSTATDA_UCF_SHIFT               (6U)
#define MTR_BIST_BSTATDA_UCF(x)                  (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTATDA_UCF_SHIFT)) & MTR_BIST_BSTATDA_UCF_MASK)

#define MTR_BIST_BSTATDA_SRF_MASK                (0x80U)
#define MTR_BIST_BSTATDA_SRF_SHIFT               (7U)
#define MTR_BIST_BSTATDA_SRF(x)                  (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTATDA_SRF_SHIFT)) & MTR_BIST_BSTATDA_SRF_MASK)

#define MTR_BIST_BSTATDA_PCOVF_MASK              (0x100U)
#define MTR_BIST_BSTATDA_PCOVF_SHIFT             (8U)
#define MTR_BIST_BSTATDA_PCOVF(x)                (((uint32_t)(((uint32_t)(x)) << MTR_BIST_BSTATDA_PCOVF_SHIFT)) & MTR_BIST_BSTATDA_PCOVF_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group MTR_BIST_Register_Masks */


/*!
 * @}
 */ /* end of group MTR_BIST_Peripheral_Access_Layer */


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


#endif  /* PERI_MTR_BIST_H_ */

