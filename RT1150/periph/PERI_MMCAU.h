/*
** ###################################################################
**     Processors:          MIMXRT1151XHM8B
**                          MIMXRT1151XVM8B
**                          MIMXRT1152XHM8B
**                          MIMXRT1152XVM8B
**
**     Version:             rev. 0.2, 2026-02-26
**     Build:               b260226
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MMCAU
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2026 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 0.1 (2026-01-09)
**         Initial version.
**     - rev. 0.2 (2026-02-26)
**         Update header file based on RM Rev1.
**
** ###################################################################
*/

/*!
 * @file PERI_MMCAU.h
 * @version 0.2
 * @date 2026-02-26
 * @brief CMSIS Peripheral Access Layer for MMCAU
 *
 * CMSIS Peripheral Access Layer for MMCAU
 */

#if !defined(PERI_MMCAU_H_)
#define PERI_MMCAU_H_                            /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MIMXRT1151XHM8B) || defined(CPU_MIMXRT1151XVM8B))
#include "MIMXRT1151_COMMON.h"
#elif (defined(CPU_MIMXRT1152XHM8B) || defined(CPU_MIMXRT1152XVM8B))
#include "MIMXRT1152_COMMON.h"
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
   -- MMCAU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MMCAU_Peripheral_Access_Layer MMCAU Peripheral Access Layer
 * @{
 */

/** MMCAU - Size of Registers Arrays */
#define MMCAU_CA_COUNT                            9u

/** MMCAU - Register Layout Typedef */
typedef struct {
  __IO uint32_t CASR;                              /**< Status Register, offset: 0x0 */
  __IO uint32_t CAA;                               /**< Accumulator, offset: 0x4 */
  __IO uint32_t CA[MMCAU_CA_COUNT];                /**< General Purpose Register, array offset: 0x8, array step: 0x4 */
} MMCAU_Type;

/* ----------------------------------------------------------------------------
   -- MMCAU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MMCAU_Register_Masks MMCAU Register Masks
 * @{
 */

/*! @name CASR - Status Register */
/*! @{ */

#define MMCAU_CASR_IC_MASK                       (0x1U)
#define MMCAU_CASR_IC_SHIFT                      (0U)
/*! IC - Illegal Command
 *  0b0..No illegal commands issued.
 *  0b1..Illegal command issued.
 */
#define MMCAU_CASR_IC(x)                         (((uint32_t)(((uint32_t)(x)) << MMCAU_CASR_IC_SHIFT)) & MMCAU_CASR_IC_MASK)

#define MMCAU_CASR_DPE_MASK                      (0x2U)
#define MMCAU_CASR_DPE_SHIFT                     (1U)
/*! DPE - DES Parity Error
 *  0b0..No error detected.
 *  0b1..DES key parity error detected.
 */
#define MMCAU_CASR_DPE(x)                        (((uint32_t)(((uint32_t)(x)) << MMCAU_CASR_DPE_SHIFT)) & MMCAU_CASR_DPE_MASK)

#define MMCAU_CASR_VER_MASK                      (0xF0000000U)
#define MMCAU_CASR_VER_SHIFT                     (28U)
/*! VER - CAU Version
 *  0b0001..Initial CAU version.
 *  0b0010..Second version, added support for SHA-256 algorithm (This is the value on this device).
 */
#define MMCAU_CASR_VER(x)                        (((uint32_t)(((uint32_t)(x)) << MMCAU_CASR_VER_SHIFT)) & MMCAU_CASR_VER_MASK)
/*! @} */

/*! @name CAA - Accumulator */
/*! @{ */

#define MMCAU_CAA_ACC_MASK                       (0xFFFFFFFFU)
#define MMCAU_CAA_ACC_SHIFT                      (0U)
/*! ACC - Accumulator */
#define MMCAU_CAA_ACC(x)                         (((uint32_t)(((uint32_t)(x)) << MMCAU_CAA_ACC_SHIFT)) & MMCAU_CAA_ACC_MASK)
/*! @} */

/*! @name CA - General Purpose Register */
/*! @{ */

#define MMCAU_CA_CAn_MASK                        (0xFFFFFFFFU)
#define MMCAU_CA_CAn_SHIFT                       (0U)
/*! CAn - General Purpose Registers */
#define MMCAU_CA_CAn(x)                          (((uint32_t)(((uint32_t)(x)) << MMCAU_CA_CAn_SHIFT)) & MMCAU_CA_CAn_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group MMCAU_Register_Masks */


/*!
 * @}
 */ /* end of group MMCAU_Peripheral_Access_Layer */


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


#endif  /* PERI_MMCAU_H_ */

