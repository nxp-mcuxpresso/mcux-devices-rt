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
**         CMSIS Peripheral Access Layer for PHY_LDO
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
 * @file PHY_LDO.h
 * @version 0.1
 * @date 2020-12-29
 * @brief CMSIS Peripheral Access Layer for PHY_LDO
 *
 * CMSIS Peripheral Access Layer for PHY_LDO
 */

#if !defined(PHY_LDO_H_)
#define PHY_LDO_H_                               /**< Symbol preventing repeated inclusion */

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
   -- PHY_LDO Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PHY_LDO_Peripheral_Access_Layer PHY_LDO Peripheral Access Layer
 * @{
 */

/** PHY_LDO - Register Layout Typedef */
typedef struct {
  struct {                                         /* offset: 0x0 */
    __IO uint32_t RW;                                /**< Analog Control Register CTRL0, offset: 0x0 */
    __IO uint32_t SET;                               /**< Analog Control Register CTRL0, offset: 0x4 */
    __IO uint32_t CLR;                               /**< Analog Control Register CTRL0, offset: 0x8 */
    __IO uint32_t TOG;                               /**< Analog Control Register CTRL0, offset: 0xC */
  } CTRL0;
       uint8_t RESERVED_0[64];
  struct {                                         /* offset: 0x50 */
    __I  uint32_t RW;                                /**< Analog Status Register STAT0, offset: 0x50 */
    __I  uint32_t SET;                               /**< Analog Status Register STAT0, offset: 0x54 */
    __I  uint32_t CLR;                               /**< Analog Status Register STAT0, offset: 0x58 */
    __I  uint32_t TOG;                               /**< Analog Status Register STAT0, offset: 0x5C */
  } STAT0;
} PHY_LDO_Type;

/* ----------------------------------------------------------------------------
   -- PHY_LDO Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PHY_LDO_Register_Masks PHY_LDO Register Masks
 * @{
 */

/*! @name CTRL0 - Analog Control Register CTRL0 */
/*! @{ */

#define PHY_LDO_CTRL0_LINREG_EN_MASK             (0x1U)
#define PHY_LDO_CTRL0_LINREG_EN_SHIFT            (0U)
/*! LINREG_EN - LinrReg master enable */
#define PHY_LDO_CTRL0_LINREG_EN(x)               (((uint32_t)(((uint32_t)(x)) << PHY_LDO_CTRL0_LINREG_EN_SHIFT)) & PHY_LDO_CTRL0_LINREG_EN_MASK)

#define PHY_LDO_CTRL0_LINREG_PWRUPLOAD_DIS_MASK  (0x2U)
#define PHY_LDO_CTRL0_LINREG_PWRUPLOAD_DIS_SHIFT (1U)
/*! LINREG_PWRUPLOAD_DIS - LinReg power-up load disable
 *  0b0..Internal pull-down enabled
 *  0b1..Internal pull-down disabled
 */
#define PHY_LDO_CTRL0_LINREG_PWRUPLOAD_DIS(x)    (((uint32_t)(((uint32_t)(x)) << PHY_LDO_CTRL0_LINREG_PWRUPLOAD_DIS_SHIFT)) & PHY_LDO_CTRL0_LINREG_PWRUPLOAD_DIS_MASK)

#define PHY_LDO_CTRL0_LINREG_ILIMIT_EN_MASK      (0x4U)
#define PHY_LDO_CTRL0_LINREG_ILIMIT_EN_SHIFT     (2U)
/*! LINREG_ILIMIT_EN - LinReg current-limit enable */
#define PHY_LDO_CTRL0_LINREG_ILIMIT_EN(x)        (((uint32_t)(((uint32_t)(x)) << PHY_LDO_CTRL0_LINREG_ILIMIT_EN_SHIFT)) & PHY_LDO_CTRL0_LINREG_ILIMIT_EN_MASK)

#define PHY_LDO_CTRL0_LINREG_OUTPUT_TRG_MASK     (0x1F0U)
#define PHY_LDO_CTRL0_LINREG_OUTPUT_TRG_SHIFT    (4U)
/*! LINREG_OUTPUT_TRG - LinReg output voltage target setting
 *  0b00000..Set output voltage to x.xV
 *  0b10000..Sets output voltage to 1.0V
 *  0b11111..Set output voltage to x.xV
 */
#define PHY_LDO_CTRL0_LINREG_OUTPUT_TRG(x)       (((uint32_t)(((uint32_t)(x)) << PHY_LDO_CTRL0_LINREG_OUTPUT_TRG_SHIFT)) & PHY_LDO_CTRL0_LINREG_OUTPUT_TRG_MASK)

#define PHY_LDO_CTRL0_LINREG_PHY_ISO_B_MASK      (0x8000U)
#define PHY_LDO_CTRL0_LINREG_PHY_ISO_B_SHIFT     (15U)
/*! LINREG_PHY_ISO_B - Isolation control for attached PHY load */
#define PHY_LDO_CTRL0_LINREG_PHY_ISO_B(x)        (((uint32_t)(((uint32_t)(x)) << PHY_LDO_CTRL0_LINREG_PHY_ISO_B_SHIFT)) & PHY_LDO_CTRL0_LINREG_PHY_ISO_B_MASK)
/*! @} */

/*! @name STAT0 - Analog Status Register STAT0 */
/*! @{ */

#define PHY_LDO_STAT0_LINREG_STAT_MASK           (0xFU)
#define PHY_LDO_STAT0_LINREG_STAT_SHIFT          (0U)
/*! LINREG_STAT - LinReg Status Bits */
#define PHY_LDO_STAT0_LINREG_STAT(x)             (((uint32_t)(((uint32_t)(x)) << PHY_LDO_STAT0_LINREG_STAT_SHIFT)) & PHY_LDO_STAT0_LINREG_STAT_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group PHY_LDO_Register_Masks */


/*!
 * @}
 */ /* end of group PHY_LDO_Peripheral_Access_Layer */


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


#endif  /* PHY_LDO_H_ */

