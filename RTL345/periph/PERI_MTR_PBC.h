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
**         CMSIS Peripheral Access Layer for MTR_PBC
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
 * @file PERI_MTR_PBC.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for MTR_PBC
 *
 * CMSIS Peripheral Access Layer for MTR_PBC
 */

#if !defined(PERI_MTR_PBC_H_)
#define PERI_MTR_PBC_H_                          /**< Symbol preventing repeated inclusion */

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
   -- MTR_PBC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MTR_PBC_Peripheral_Access_Layer MTR_PBC Peripheral Access Layer
 * @{
 */

/** MTR_PBC - Register Layout Typedef */
typedef struct {
  __IO uint32_t IOR;                               /**< offset: 0x0 */
  __IO uint32_t IAR;                               /**< offset: 0x4 */
} MTR_PBC_Type;

/* ----------------------------------------------------------------------------
   -- MTR_PBC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MTR_PBC_Register_Masks MTR_PBC Register Masks
 * @{
 */

/*! @name IOR -  */
/*! @{ */

#define MTR_PBC_IOR_OFFSET_MASK                  (0xFFFFFFFFU)
#define MTR_PBC_IOR_OFFSET_SHIFT                 (0U)
#define MTR_PBC_IOR_OFFSET(x)                    (((uint32_t)(((uint32_t)(x)) << MTR_PBC_IOR_OFFSET_SHIFT)) & MTR_PBC_IOR_OFFSET_MASK)
/*! @} */

/*! @name IAR -  */
/*! @{ */

#define MTR_PBC_IAR_VALUE_MASK                   (0xFFFFFFFFU)
#define MTR_PBC_IAR_VALUE_SHIFT                  (0U)
#define MTR_PBC_IAR_VALUE(x)                     (((uint32_t)(((uint32_t)(x)) << MTR_PBC_IAR_VALUE_SHIFT)) & MTR_PBC_IAR_VALUE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group MTR_PBC_Register_Masks */


/*!
 * @}
 */ /* end of group MTR_PBC_Peripheral_Access_Layer */


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


#endif  /* PERI_MTR_PBC_H_ */

