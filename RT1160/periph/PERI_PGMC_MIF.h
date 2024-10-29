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
**         CMSIS Peripheral Access Layer for PGMC_MIF
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
 * @file PGMC_MIF.h
 * @version 0.1
 * @date 2020-12-29
 * @brief CMSIS Peripheral Access Layer for PGMC_MIF
 *
 * CMSIS Peripheral Access Layer for PGMC_MIF
 */

#if !defined(PGMC_MIF_H_)
#define PGMC_MIF_H_                              /**< Symbol preventing repeated inclusion */

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
   -- PGMC_MIF Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PGMC_MIF_Peripheral_Access_Layer PGMC_MIF Peripheral Access Layer
 * @{
 */

/** PGMC_MIF - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[4];
  __IO uint32_t MIF_AUTHEN_CTRL;                   /**< MIF Authentication Control, offset: 0x4 */
       uint8_t RESERVED_1[8];
  __IO uint32_t MIF_MLPL_SLEEP;                    /**< MIF MLPL control of SLEEP, offset: 0x10 */
       uint8_t RESERVED_2[12];
  __IO uint32_t MIF_MLPL_IG;                       /**< MIF MLPL control of IG, offset: 0x20 */
       uint8_t RESERVED_3[12];
  __IO uint32_t MIF_MLPL_LS;                       /**< MIF MLPL control of LS, offset: 0x30 */
       uint8_t RESERVED_4[12];
  __IO uint32_t MIF_MLPL_HS;                       /**< MIF MLPL control of HS, offset: 0x40 */
       uint8_t RESERVED_5[12];
  __IO uint32_t MIF_MLPL_STDBY;                    /**< MIF MLPL control of STDBY, offset: 0x50 */
       uint8_t RESERVED_6[12];
  __IO uint32_t MIF_MLPL_ARR_PDN;                  /**< MIF MLPL control of array power down, offset: 0x60 */
       uint8_t RESERVED_7[12];
  __IO uint32_t MIF_MLPL_PER_PDN;                  /**< MIF MLPL control of peripheral power down, offset: 0x70 */
       uint8_t RESERVED_8[12];
  __IO uint32_t MIF_MLPL_INITN;                    /**< MIF MLPL control of INITN, offset: 0x80 */
       uint8_t RESERVED_9[44];
  __IO uint32_t MIF_MLPL_ISO;                      /**< MIF MLPL control of isolation enable, offset: 0xB0 */
} PGMC_MIF_Type;

/* ----------------------------------------------------------------------------
   -- PGMC_MIF Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PGMC_MIF_Register_Masks PGMC_MIF Register Masks
 * @{
 */

/*! @name MIF_AUTHEN_CTRL - MIF Authentication Control */
/*! @{ */

#define PGMC_MIF_MIF_AUTHEN_CTRL_LOCK_CFG_MASK   (0x100000U)
#define PGMC_MIF_MIF_AUTHEN_CTRL_LOCK_CFG_SHIFT  (20U)
/*! LOCK_CFG - Configuration lock */
#define PGMC_MIF_MIF_AUTHEN_CTRL_LOCK_CFG(x)     (((uint32_t)(((uint32_t)(x)) << PGMC_MIF_MIF_AUTHEN_CTRL_LOCK_CFG_SHIFT)) & PGMC_MIF_MIF_AUTHEN_CTRL_LOCK_CFG_MASK)
/*! @} */

/*! @name MIF_MLPL_SLEEP - MIF MLPL control of SLEEP */
/*! @{ */

#define PGMC_MIF_MIF_MLPL_SLEEP_MLPL_CTRL_MASK   (0xFFFFU)
#define PGMC_MIF_MIF_MLPL_SLEEP_MLPL_CTRL_SHIFT  (0U)
/*! MLPL_CTRL - Signal behavior at each MLPL */
#define PGMC_MIF_MIF_MLPL_SLEEP_MLPL_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << PGMC_MIF_MIF_MLPL_SLEEP_MLPL_CTRL_SHIFT)) & PGMC_MIF_MIF_MLPL_SLEEP_MLPL_CTRL_MASK)
/*! @} */

/*! @name MIF_MLPL_IG - MIF MLPL control of IG */
/*! @{ */

#define PGMC_MIF_MIF_MLPL_IG_MLPL_CTRL_MASK      (0xFFFFU)
#define PGMC_MIF_MIF_MLPL_IG_MLPL_CTRL_SHIFT     (0U)
/*! MLPL_CTRL - Signal behavior at each MLPL */
#define PGMC_MIF_MIF_MLPL_IG_MLPL_CTRL(x)        (((uint32_t)(((uint32_t)(x)) << PGMC_MIF_MIF_MLPL_IG_MLPL_CTRL_SHIFT)) & PGMC_MIF_MIF_MLPL_IG_MLPL_CTRL_MASK)
/*! @} */

/*! @name MIF_MLPL_LS - MIF MLPL control of LS */
/*! @{ */

#define PGMC_MIF_MIF_MLPL_LS_MLPL_CTRL_MASK      (0xFFFFU)
#define PGMC_MIF_MIF_MLPL_LS_MLPL_CTRL_SHIFT     (0U)
/*! MLPL_CTRL - Signal behavior at each MLPL */
#define PGMC_MIF_MIF_MLPL_LS_MLPL_CTRL(x)        (((uint32_t)(((uint32_t)(x)) << PGMC_MIF_MIF_MLPL_LS_MLPL_CTRL_SHIFT)) & PGMC_MIF_MIF_MLPL_LS_MLPL_CTRL_MASK)
/*! @} */

/*! @name MIF_MLPL_HS - MIF MLPL control of HS */
/*! @{ */

#define PGMC_MIF_MIF_MLPL_HS_MLPL_CTRL_MASK      (0xFFFFU)
#define PGMC_MIF_MIF_MLPL_HS_MLPL_CTRL_SHIFT     (0U)
/*! MLPL_CTRL - Signal behavior at each MLPL */
#define PGMC_MIF_MIF_MLPL_HS_MLPL_CTRL(x)        (((uint32_t)(((uint32_t)(x)) << PGMC_MIF_MIF_MLPL_HS_MLPL_CTRL_SHIFT)) & PGMC_MIF_MIF_MLPL_HS_MLPL_CTRL_MASK)
/*! @} */

/*! @name MIF_MLPL_STDBY - MIF MLPL control of STDBY */
/*! @{ */

#define PGMC_MIF_MIF_MLPL_STDBY_MLPL_CTRL_MASK   (0xFFFFU)
#define PGMC_MIF_MIF_MLPL_STDBY_MLPL_CTRL_SHIFT  (0U)
/*! MLPL_CTRL - Signal behavior at each MLPL */
#define PGMC_MIF_MIF_MLPL_STDBY_MLPL_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << PGMC_MIF_MIF_MLPL_STDBY_MLPL_CTRL_SHIFT)) & PGMC_MIF_MIF_MLPL_STDBY_MLPL_CTRL_MASK)
/*! @} */

/*! @name MIF_MLPL_ARR_PDN - MIF MLPL control of array power down */
/*! @{ */

#define PGMC_MIF_MIF_MLPL_ARR_PDN_MLPL_CTRL_MASK (0xFFFFU)
#define PGMC_MIF_MIF_MLPL_ARR_PDN_MLPL_CTRL_SHIFT (0U)
/*! MLPL_CTRL - Signal behavior at each MLPL */
#define PGMC_MIF_MIF_MLPL_ARR_PDN_MLPL_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << PGMC_MIF_MIF_MLPL_ARR_PDN_MLPL_CTRL_SHIFT)) & PGMC_MIF_MIF_MLPL_ARR_PDN_MLPL_CTRL_MASK)
/*! @} */

/*! @name MIF_MLPL_PER_PDN - MIF MLPL control of peripheral power down */
/*! @{ */

#define PGMC_MIF_MIF_MLPL_PER_PDN_MLPL_CTRL_MASK (0xFFFFU)
#define PGMC_MIF_MIF_MLPL_PER_PDN_MLPL_CTRL_SHIFT (0U)
/*! MLPL_CTRL - Signal behavior at each MLPL */
#define PGMC_MIF_MIF_MLPL_PER_PDN_MLPL_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << PGMC_MIF_MIF_MLPL_PER_PDN_MLPL_CTRL_SHIFT)) & PGMC_MIF_MIF_MLPL_PER_PDN_MLPL_CTRL_MASK)
/*! @} */

/*! @name MIF_MLPL_INITN - MIF MLPL control of INITN */
/*! @{ */

#define PGMC_MIF_MIF_MLPL_INITN_MLPL_CTRL_MASK   (0xFFFFU)
#define PGMC_MIF_MIF_MLPL_INITN_MLPL_CTRL_SHIFT  (0U)
/*! MLPL_CTRL - Signal behavior at each MLPL */
#define PGMC_MIF_MIF_MLPL_INITN_MLPL_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << PGMC_MIF_MIF_MLPL_INITN_MLPL_CTRL_SHIFT)) & PGMC_MIF_MIF_MLPL_INITN_MLPL_CTRL_MASK)

#define PGMC_MIF_MIF_MLPL_INITN_BYPASS_VDD_OK_MASK (0x80000000U)
#define PGMC_MIF_MIF_MLPL_INITN_BYPASS_VDD_OK_SHIFT (31U)
/*! BYPASS_VDD_OK - Bypass vdd_ok. This field is locked by AUTHEN_CTRL[LOCK_CFG] field. */
#define PGMC_MIF_MIF_MLPL_INITN_BYPASS_VDD_OK(x) (((uint32_t)(((uint32_t)(x)) << PGMC_MIF_MIF_MLPL_INITN_BYPASS_VDD_OK_SHIFT)) & PGMC_MIF_MIF_MLPL_INITN_BYPASS_VDD_OK_MASK)
/*! @} */

/*! @name MIF_MLPL_ISO - MIF MLPL control of isolation enable */
/*! @{ */

#define PGMC_MIF_MIF_MLPL_ISO_MLPL_CTRL_MASK     (0xFFFFU)
#define PGMC_MIF_MIF_MLPL_ISO_MLPL_CTRL_SHIFT    (0U)
/*! MLPL_CTRL - Signal behavior at each MLPL */
#define PGMC_MIF_MIF_MLPL_ISO_MLPL_CTRL(x)       (((uint32_t)(((uint32_t)(x)) << PGMC_MIF_MIF_MLPL_ISO_MLPL_CTRL_SHIFT)) & PGMC_MIF_MIF_MLPL_ISO_MLPL_CTRL_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group PGMC_MIF_Register_Masks */


/*!
 * @}
 */ /* end of group PGMC_MIF_Peripheral_Access_Layer */


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


#endif  /* PGMC_MIF_H_ */

