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
**         CMSIS Peripheral Access Layer for ADSS_MUTEX
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
 * @file PERI_ADSS_MUTEX.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_MUTEX
 *
 * CMSIS Peripheral Access Layer for ADSS_MUTEX
 */

#if !defined(PERI_ADSS_MUTEX_H_)
#define PERI_ADSS_MUTEX_H_                       /**< Symbol preventing repeated inclusion */

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
   -- ADSS_MUTEX Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_MUTEX_Peripheral_Access_Layer ADSS_MUTEX Peripheral Access Layer
 * @{
 */

/** ADSS_MUTEX - Register Layout Typedef */
typedef struct {
  __IO uint32_t MUTEX_0;                           /**< Mutex Control Register, offset: 0x0 */
  __IO uint32_t MUTEX_1;                           /**< Mutex Control Register, offset: 0x4 */
  __IO uint32_t MUTEX_2;                           /**< Mutex Control Register, offset: 0x8 */
  __IO uint32_t MUTEX_3;                           /**< Mutex Control Register, offset: 0xC */
} ADSS_MUTEX_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_MUTEX Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_MUTEX_Register_Masks ADSS_MUTEX Register Masks
 * @{
 */

/*! @name MUTEX_0 - Mutex Control Register */
/*! @{ */

#define ADSS_MUTEX_MUTEX_0_FREE_MASK             (0x1U)
#define ADSS_MUTEX_MUTEX_0_FREE_SHIFT            (0U)
/*! free - Any write sets the bit to '1'. Always cleared after read. '1' means free, '0' means busy */
#define ADSS_MUTEX_MUTEX_0_FREE(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_MUTEX_MUTEX_0_FREE_SHIFT)) & ADSS_MUTEX_MUTEX_0_FREE_MASK)
/*! @} */

/*! @name MUTEX_1 - Mutex Control Register */
/*! @{ */

#define ADSS_MUTEX_MUTEX_1_FREE_MASK             (0x1U)
#define ADSS_MUTEX_MUTEX_1_FREE_SHIFT            (0U)
/*! free - Any write sets the bit to '1'. Always cleared after read. '1' means free, '0' means busy */
#define ADSS_MUTEX_MUTEX_1_FREE(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_MUTEX_MUTEX_1_FREE_SHIFT)) & ADSS_MUTEX_MUTEX_1_FREE_MASK)
/*! @} */

/*! @name MUTEX_2 - Mutex Control Register */
/*! @{ */

#define ADSS_MUTEX_MUTEX_2_FREE_MASK             (0x1U)
#define ADSS_MUTEX_MUTEX_2_FREE_SHIFT            (0U)
/*! free - Any write sets the bit to '1'. Always cleared after read. '1' means free, '0' means busy */
#define ADSS_MUTEX_MUTEX_2_FREE(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_MUTEX_MUTEX_2_FREE_SHIFT)) & ADSS_MUTEX_MUTEX_2_FREE_MASK)
/*! @} */

/*! @name MUTEX_3 - Mutex Control Register */
/*! @{ */

#define ADSS_MUTEX_MUTEX_3_FREE_MASK             (0x1U)
#define ADSS_MUTEX_MUTEX_3_FREE_SHIFT            (0U)
/*! free - Any write sets the bit to '1'. Always cleared after read. '1' means free, '0' means busy */
#define ADSS_MUTEX_MUTEX_3_FREE(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_MUTEX_MUTEX_3_FREE_SHIFT)) & ADSS_MUTEX_MUTEX_3_FREE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADSS_MUTEX_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_MUTEX_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_MUTEX_H_ */

