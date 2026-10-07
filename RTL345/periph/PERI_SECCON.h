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
**         CMSIS Peripheral Access Layer for SECCON
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
 * @file PERI_SECCON.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for SECCON
 *
 * CMSIS Peripheral Access Layer for SECCON
 */

#if !defined(PERI_SECCON_H_)
#define PERI_SECCON_H_                           /**< Symbol preventing repeated inclusion */

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
   -- SECCON Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SECCON_Peripheral_Access_Layer SECCON Peripheral Access Layer
 * @{
 */

/** SECCON - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[4];
  __I  uint32_t LC_STATE_DP;                       /**< LC_STATE_DP, offset: 0x4 */
       uint8_t RESERVED_1[12];
  __IO uint32_t DEBUG_FEATURE_CPU0_DP;             /**< DEBUG_FEATURE_CPU0_DP, offset: 0x14 */
       uint8_t RESERVED_2[4];
  __IO uint32_t DEBUG_FEATURE_CPU1_DP;             /**< DEBUG_FEATURE_CPU1_DP, offset: 0x1C */
       uint8_t RESERVED_3[4];
  __IO uint32_t DEBUG_FEATURE_CPU3_DP;             /**< DEBUG_FEATURE_CPU3_DP, offset: 0x24 */
  __IO uint32_t DEBUG_AUTH_BEACON;                 /**< DEBUG_AUTH_BEACON, offset: 0x28 */
  __O  uint32_t SWD_ACCESS_CPU0;                   /**< SWD_ACCESS_CPU0, offset: 0x2C */
  __O  uint32_t SWD_ACCESS_CPU1;                   /**< SWD_ACCESS_CPU1, offset: 0x30 */
  __O  uint32_t SWD_ACCESS_CPU2;                   /**< SWD_ACCESS_CPU2, offset: 0x34 */
  __O  uint32_t SWD_ACCESS_CPU3;                   /**< SWD_ACCESS_CPU3, offset: 0x38 */
       uint8_t RESERVED_4[12];
  __IO uint32_t BOOT_STATE_LOCK;                   /**< BOOT_STATE_LOCK, offset: 0x48 */
  __IO uint32_t BOOT_STATE_0;                      /**< BOOT_STATE_0, offset: 0x4C */
  __IO uint32_t BOOT_STATE_1;                      /**< BOOT_STATE_1, offset: 0x50 */
  __IO uint32_t BOOT_STATE_2;                      /**< BOOT_STATE_2, offset: 0x54 */
  __IO uint32_t BOOT_STATE_3;                      /**< BOOT_STATE_3, offset: 0x58 */
       uint8_t RESERVED_5[32];
  __IO uint32_t CDI_KEY_0;                         /**< CDI_KEY_0, offset: 0x7C */
  __IO uint32_t CDI_KEY_1;                         /**< CDI_KEY_1, offset: 0x80 */
  __IO uint32_t CDI_KEY_2;                         /**< CDI_KEY_2, offset: 0x84 */
  __IO uint32_t CDI_KEY_3;                         /**< CDI_KEY_3, offset: 0x88 */
  __IO uint32_t CDI_KEY_4;                         /**< CDI_KEY_4, offset: 0x8C */
  __IO uint32_t CDI_KEY_5;                         /**< CDI_KEY_5, offset: 0x90 */
  __IO uint32_t CDI_KEY_6;                         /**< CDI_KEY_6, offset: 0x94 */
  __IO uint32_t CDI_KEY_7;                         /**< CDI_KEY_7, offset: 0x98 */
  __IO uint32_t SCRATCHPAD_0;                      /**< SCRATCHPAD_0, offset: 0x9C */
  __IO uint32_t SCRATCHPAD_1;                      /**< SCRATCHPAD_1, offset: 0xA0 */
  __IO uint32_t SCRATCHPAD_2;                      /**< SCRATCHPAD_2, offset: 0xA4 */
  __IO uint32_t SCRATCHPAD_3;                      /**< SCRATCHPAD_3, offset: 0xA8 */
  __IO uint32_t SCRATCHPAD_4;                      /**< SCRATCHPAD_4, offset: 0xAC */
       uint8_t RESERVED_6[52];
  __IO uint32_t CFGSSTCALIB;                       /**< CFGSSTCALIB, offset: 0xE4 */
  __IO uint32_t GDET_CTRL;                         /**< GDET_CTRL, offset: 0xE8 */
  __I  uint32_t GDET_STATUS;                       /**< GDET_STATUS, offset: 0xEC */
} SECCON_Type;

/* ----------------------------------------------------------------------------
   -- SECCON Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SECCON_Register_Masks SECCON Register Masks
 * @{
 */

/*! @name LC_STATE_DP - LC_STATE_DP */
/*! @{ */

#define SECCON_LC_STATE_DP_LC_STATE_DP_MASK      (0xFFU)
#define SECCON_LC_STATE_DP_LC_STATE_DP_SHIFT     (0U)
/*! LC_STATE_DP - Duplicate of Life Cycle State Register. Default is IN_FIELD_LOCKED(0xCF) */
#define SECCON_LC_STATE_DP_LC_STATE_DP(x)        (((uint32_t)(((uint32_t)(x)) << SECCON_LC_STATE_DP_LC_STATE_DP_SHIFT)) & SECCON_LC_STATE_DP_LC_STATE_DP_MASK)
/*! @} */

/*! @name DEBUG_FEATURE_CPU0_DP - DEBUG_FEATURE_CPU0_DP */
/*! @{ */

#define SECCON_DEBUG_FEATURE_CPU0_DP_DBGEN_MASK  (0x3U)
#define SECCON_DEBUG_FEATURE_CPU0_DP_DBGEN_SHIFT (0U)
/*! DBGEN - 2'b10 : Debug enabled (corresponding CM55 signal set) All other values : Debug disabled */
#define SECCON_DEBUG_FEATURE_CPU0_DP_DBGEN(x)    (((uint32_t)(((uint32_t)(x)) << SECCON_DEBUG_FEATURE_CPU0_DP_DBGEN_SHIFT)) & SECCON_DEBUG_FEATURE_CPU0_DP_DBGEN_MASK)

#define SECCON_DEBUG_FEATURE_CPU0_DP_NIDEN_MASK  (0xCU)
#define SECCON_DEBUG_FEATURE_CPU0_DP_NIDEN_SHIFT (2U)
/*! NIDEN - 2'b10 : Debug enabled (corresponding CM55 signal set) All other values : Debug disabled */
#define SECCON_DEBUG_FEATURE_CPU0_DP_NIDEN(x)    (((uint32_t)(((uint32_t)(x)) << SECCON_DEBUG_FEATURE_CPU0_DP_NIDEN_SHIFT)) & SECCON_DEBUG_FEATURE_CPU0_DP_NIDEN_MASK)

#define SECCON_DEBUG_FEATURE_CPU0_DP_SPIDEN_MASK (0x30U)
#define SECCON_DEBUG_FEATURE_CPU0_DP_SPIDEN_SHIFT (4U)
/*! SPIDEN - 2'b10 : Debug enabled (corresponding CM55 signal set) All other values : Debug disabled */
#define SECCON_DEBUG_FEATURE_CPU0_DP_SPIDEN(x)   (((uint32_t)(((uint32_t)(x)) << SECCON_DEBUG_FEATURE_CPU0_DP_SPIDEN_SHIFT)) & SECCON_DEBUG_FEATURE_CPU0_DP_SPIDEN_MASK)

#define SECCON_DEBUG_FEATURE_CPU0_DP_SPNIDEN_MASK (0xC0U)
#define SECCON_DEBUG_FEATURE_CPU0_DP_SPNIDEN_SHIFT (6U)
/*! SPNIDEN - 2'b10 : Debug enabled (corresponding CM55 signal set) All other values : Debug disabled */
#define SECCON_DEBUG_FEATURE_CPU0_DP_SPNIDEN(x)  (((uint32_t)(((uint32_t)(x)) << SECCON_DEBUG_FEATURE_CPU0_DP_SPNIDEN_SHIFT)) & SECCON_DEBUG_FEATURE_CPU0_DP_SPNIDEN_MASK)
/*! @} */

/*! @name DEBUG_FEATURE_CPU1_DP - DEBUG_FEATURE_CPU1_DP */
/*! @{ */

#define SECCON_DEBUG_FEATURE_CPU1_DP_DBGEN_MASK  (0x3U)
#define SECCON_DEBUG_FEATURE_CPU1_DP_DBGEN_SHIFT (0U)
/*! DBGEN - 2'b10 : Debug enabled (corresponding NSS CM55 signal set) All other values : Debug disabled */
#define SECCON_DEBUG_FEATURE_CPU1_DP_DBGEN(x)    (((uint32_t)(((uint32_t)(x)) << SECCON_DEBUG_FEATURE_CPU1_DP_DBGEN_SHIFT)) & SECCON_DEBUG_FEATURE_CPU1_DP_DBGEN_MASK)

#define SECCON_DEBUG_FEATURE_CPU1_DP_NIDEN_MASK  (0xCU)
#define SECCON_DEBUG_FEATURE_CPU1_DP_NIDEN_SHIFT (2U)
/*! NIDEN - 2'b10 : Debug enabled (corresponding NSS CM55 signal set) All other values : Debug disabled */
#define SECCON_DEBUG_FEATURE_CPU1_DP_NIDEN(x)    (((uint32_t)(((uint32_t)(x)) << SECCON_DEBUG_FEATURE_CPU1_DP_NIDEN_SHIFT)) & SECCON_DEBUG_FEATURE_CPU1_DP_NIDEN_MASK)
/*! @} */

/*! @name DEBUG_FEATURE_CPU3_DP - DEBUG_FEATURE_CPU3_DP */
/*! @{ */

#define SECCON_DEBUG_FEATURE_CPU3_DP_DBGEN_MASK  (0x3U)
#define SECCON_DEBUG_FEATURE_CPU3_DP_DBGEN_SHIFT (0U)
/*! DBGEN - 2'b10 : Debug enabled (corresponding ADSS HiFi5 signal set) All other values : Debug disabled */
#define SECCON_DEBUG_FEATURE_CPU3_DP_DBGEN(x)    (((uint32_t)(((uint32_t)(x)) << SECCON_DEBUG_FEATURE_CPU3_DP_DBGEN_SHIFT)) & SECCON_DEBUG_FEATURE_CPU3_DP_DBGEN_MASK)

#define SECCON_DEBUG_FEATURE_CPU3_DP_NIDEN_MASK  (0xCU)
#define SECCON_DEBUG_FEATURE_CPU3_DP_NIDEN_SHIFT (2U)
/*! NIDEN - 2'b10 : Debug enabled (corresponding ADSS HiFi5 signal set) All other values : Debug disabled */
#define SECCON_DEBUG_FEATURE_CPU3_DP_NIDEN(x)    (((uint32_t)(((uint32_t)(x)) << SECCON_DEBUG_FEATURE_CPU3_DP_NIDEN_SHIFT)) & SECCON_DEBUG_FEATURE_CPU3_DP_NIDEN_MASK)
/*! @} */

/*! @name DEBUG_AUTH_BEACON - DEBUG_AUTH_BEACON */
/*! @{ */

#define SECCON_DEBUG_AUTH_BEACON_DEBUG_AUTH_BEACON_MASK (0xFFFFFFFFU)
#define SECCON_DEBUG_AUTH_BEACON_DEBUG_AUTH_BEACON_SHIFT (0U)
/*! DEBUG_AUTH_BEACON - Use case to be defined and locked by ROM using SECURITY_LOCK_EN register */
#define SECCON_DEBUG_AUTH_BEACON_DEBUG_AUTH_BEACON(x) (((uint32_t)(((uint32_t)(x)) << SECCON_DEBUG_AUTH_BEACON_DEBUG_AUTH_BEACON_SHIFT)) & SECCON_DEBUG_AUTH_BEACON_DEBUG_AUTH_BEACON_MASK)
/*! @} */

/*! @name SWD_ACCESS_CPU0 - SWD_ACCESS_CPU0 */
/*! @{ */

#define SECCON_SWD_ACCESS_CPU0_SEC_CODE_NS_MASK  (0xFFFFU)
#define SECCON_SWD_ACCESS_CPU0_SEC_CODE_NS_SHIFT (0U)
/*! SEC_CODE_NS - SEC_CODE_NS, controls AP signal ap_en 16'h0 : CPU secure debug access is not
 *    allowed. Reading back returns 16'h5 16'h5678 : CPU secure debug access is allowed. Reading back
 *    returns 16'hA
 */
#define SECCON_SWD_ACCESS_CPU0_SEC_CODE_NS(x)    (((uint32_t)(((uint32_t)(x)) << SECCON_SWD_ACCESS_CPU0_SEC_CODE_NS_SHIFT)) & SECCON_SWD_ACCESS_CPU0_SEC_CODE_NS_MASK)

#define SECCON_SWD_ACCESS_CPU0_SEC_CODE_S_MASK   (0xFFFF0000U)
#define SECCON_SWD_ACCESS_CPU0_SEC_CODE_S_SHIFT  (16U)
/*! SEC_CODE_S - SEC_CODE_S, controls AP signal ap_secure_en 16'h0 : CPU secure debug access is not
 *    allowed. Reading back returns 16'h5 16'h1234 : CPU secure debug access is allowed. Reading
 *    back returns 16'hA
 */
#define SECCON_SWD_ACCESS_CPU0_SEC_CODE_S(x)     (((uint32_t)(((uint32_t)(x)) << SECCON_SWD_ACCESS_CPU0_SEC_CODE_S_SHIFT)) & SECCON_SWD_ACCESS_CPU0_SEC_CODE_S_MASK)
/*! @} */

/*! @name SWD_ACCESS_CPU1 - SWD_ACCESS_CPU1 */
/*! @{ */

#define SECCON_SWD_ACCESS_CPU1_SEC_CODE_MASK     (0xFFFFU)
#define SECCON_SWD_ACCESS_CPU1_SEC_CODE_SHIFT    (0U)
/*! SEC_CODE - SEC_CODE, controls NSS CM55 AP signal ap_en 16'h0 : CPU secure debug access is not
 *    allowed. Reading back returns 16'h5 16'h5678 : CPU secure debug access is allowed. Reading back
 *    returns 16'hA
 */
#define SECCON_SWD_ACCESS_CPU1_SEC_CODE(x)       (((uint32_t)(((uint32_t)(x)) << SECCON_SWD_ACCESS_CPU1_SEC_CODE_SHIFT)) & SECCON_SWD_ACCESS_CPU1_SEC_CODE_MASK)
/*! @} */

/*! @name SWD_ACCESS_CPU2 - SWD_ACCESS_CPU2 */
/*! @{ */

#define SECCON_SWD_ACCESS_CPU2_SEC_CODE_MASK     (0xFFFFU)
#define SECCON_SWD_ACCESS_CPU2_SEC_CODE_SHIFT    (0U)
/*! SEC_CODE - SEC_CODE, controls NSS XSP AP signal ap_en 16'h0 : CPU secure debug access is not
 *    allowed. Reading back returns 16'h5 16'h5678 : CPU secure debug access is allowed. Reading back
 *    returns 16'hA
 */
#define SECCON_SWD_ACCESS_CPU2_SEC_CODE(x)       (((uint32_t)(((uint32_t)(x)) << SECCON_SWD_ACCESS_CPU2_SEC_CODE_SHIFT)) & SECCON_SWD_ACCESS_CPU2_SEC_CODE_MASK)
/*! @} */

/*! @name SWD_ACCESS_CPU3 - SWD_ACCESS_CPU3 */
/*! @{ */

#define SECCON_SWD_ACCESS_CPU3_SEC_CODE_MASK     (0xFFFFU)
#define SECCON_SWD_ACCESS_CPU3_SEC_CODE_SHIFT    (0U)
/*! SEC_CODE - SEC_CODE, controls ADSS AP signal ap_en 16'h0 : CPU secure debug access is not
 *    allowed. Reading back returns 16'h5 16'h5678 : CPU secure debug access is allowed. Reading back
 *    returns 16'hA
 */
#define SECCON_SWD_ACCESS_CPU3_SEC_CODE(x)       (((uint32_t)(((uint32_t)(x)) << SECCON_SWD_ACCESS_CPU3_SEC_CODE_SHIFT)) & SECCON_SWD_ACCESS_CPU3_SEC_CODE_MASK)
/*! @} */

/*! @name BOOT_STATE_LOCK - BOOT_STATE_LOCK */
/*! @{ */

#define SECCON_BOOT_STATE_LOCK_BOOT_STATE_LOCK_MASK (0xFFFFFFFFU)
#define SECCON_BOOT_STATE_LOCK_BOOT_STATE_LOCK_SHIFT (0U)
/*! BOOT_STATE_LOCK - 32'h0000_000A : BOOT_STATE_X and SCRATCHPAD_3 registers are RW others :
 *    BOOT_STATE_X, SCRATCHPAD_3 and BOOT_STATE_LOCK are RO until warm reset
 */
#define SECCON_BOOT_STATE_LOCK_BOOT_STATE_LOCK(x) (((uint32_t)(((uint32_t)(x)) << SECCON_BOOT_STATE_LOCK_BOOT_STATE_LOCK_SHIFT)) & SECCON_BOOT_STATE_LOCK_BOOT_STATE_LOCK_MASK)
/*! @} */

/*! @name BOOT_STATE_0 - BOOT_STATE_0 */
/*! @{ */

#define SECCON_BOOT_STATE_0_BOOT_STATE_0_MASK    (0xFFFFFFFFU)
#define SECCON_BOOT_STATE_0_BOOT_STATE_0_SHIFT   (0U)
/*! BOOT_STATE_0 - Boot state registers must be implemented to store the state the chip booted in.
 *    Field definition of Boot State is left for ROM developers. Read access is locked on
 *    BOOT_STATE_LOCK register
 */
#define SECCON_BOOT_STATE_0_BOOT_STATE_0(x)      (((uint32_t)(((uint32_t)(x)) << SECCON_BOOT_STATE_0_BOOT_STATE_0_SHIFT)) & SECCON_BOOT_STATE_0_BOOT_STATE_0_MASK)
/*! @} */

/*! @name BOOT_STATE_1 - BOOT_STATE_1 */
/*! @{ */

#define SECCON_BOOT_STATE_1_BOOT_STATE_1_MASK    (0xFFFFFFFFU)
#define SECCON_BOOT_STATE_1_BOOT_STATE_1_SHIFT   (0U)
/*! BOOT_STATE_1 - Boot state registers must be implemented to store the state the chip booted in.
 *    Field definition of Boot State is left for ROM developers. Read access is locked on
 *    BOOT_STATE_LOCK register
 */
#define SECCON_BOOT_STATE_1_BOOT_STATE_1(x)      (((uint32_t)(((uint32_t)(x)) << SECCON_BOOT_STATE_1_BOOT_STATE_1_SHIFT)) & SECCON_BOOT_STATE_1_BOOT_STATE_1_MASK)
/*! @} */

/*! @name BOOT_STATE_2 - BOOT_STATE_2 */
/*! @{ */

#define SECCON_BOOT_STATE_2_BOOT_STATE_2_MASK    (0xFFFFFFFFU)
#define SECCON_BOOT_STATE_2_BOOT_STATE_2_SHIFT   (0U)
/*! BOOT_STATE_2 - Boot state registers must be implemented to store the state the chip booted in.
 *    Field definition of Boot State is left for ROM developers. Read access is locked on
 *    BOOT_STATE_LOCK register
 */
#define SECCON_BOOT_STATE_2_BOOT_STATE_2(x)      (((uint32_t)(((uint32_t)(x)) << SECCON_BOOT_STATE_2_BOOT_STATE_2_SHIFT)) & SECCON_BOOT_STATE_2_BOOT_STATE_2_MASK)
/*! @} */

/*! @name BOOT_STATE_3 - BOOT_STATE_3 */
/*! @{ */

#define SECCON_BOOT_STATE_3_BOOT_STATE_3_MASK    (0xFFFFFFFFU)
#define SECCON_BOOT_STATE_3_BOOT_STATE_3_SHIFT   (0U)
/*! BOOT_STATE_3 - Boot state registers must be implemented to store the state the chip booted in.
 *    Field definition of Boot State is left for ROM developers. Read access is locked on
 *    BOOT_STATE_LOCK register
 */
#define SECCON_BOOT_STATE_3_BOOT_STATE_3(x)      (((uint32_t)(((uint32_t)(x)) << SECCON_BOOT_STATE_3_BOOT_STATE_3_SHIFT)) & SECCON_BOOT_STATE_3_BOOT_STATE_3_MASK)
/*! @} */

/*! @name CDI_KEY_0 - CDI_KEY_0 */
/*! @{ */

#define SECCON_CDI_KEY_0_CDI_KEY_0_MASK          (0xFFFFFFFFU)
#define SECCON_CDI_KEY_0_CDI_KEY_0_SHIFT         (0U)
/*! CDI_KEY_0 - These registers are used to store the final CDI measured by ROM. This value is
 *    passed on to customer application. No special protection is needed for this register. These
 *    registers do not drive any HW logic.
 */
#define SECCON_CDI_KEY_0_CDI_KEY_0(x)            (((uint32_t)(((uint32_t)(x)) << SECCON_CDI_KEY_0_CDI_KEY_0_SHIFT)) & SECCON_CDI_KEY_0_CDI_KEY_0_MASK)
/*! @} */

/*! @name CDI_KEY_1 - CDI_KEY_1 */
/*! @{ */

#define SECCON_CDI_KEY_1_CDI_KEY_1_MASK          (0xFFFFFFFFU)
#define SECCON_CDI_KEY_1_CDI_KEY_1_SHIFT         (0U)
/*! CDI_KEY_1 - These registers are used to store the final CDI measured by ROM. This value is
 *    passed on to customer application. No special protection is needed for this register. These
 *    registers do not drive any HW logic.
 */
#define SECCON_CDI_KEY_1_CDI_KEY_1(x)            (((uint32_t)(((uint32_t)(x)) << SECCON_CDI_KEY_1_CDI_KEY_1_SHIFT)) & SECCON_CDI_KEY_1_CDI_KEY_1_MASK)
/*! @} */

/*! @name CDI_KEY_2 - CDI_KEY_2 */
/*! @{ */

#define SECCON_CDI_KEY_2_CDI_KEY_2_MASK          (0xFFFFFFFFU)
#define SECCON_CDI_KEY_2_CDI_KEY_2_SHIFT         (0U)
/*! CDI_KEY_2 - These registers are used to store the final CDI measured by ROM. This value is
 *    passed on to customer application. No special protection is needed for this register. These
 *    registers do not drive any HW logic.
 */
#define SECCON_CDI_KEY_2_CDI_KEY_2(x)            (((uint32_t)(((uint32_t)(x)) << SECCON_CDI_KEY_2_CDI_KEY_2_SHIFT)) & SECCON_CDI_KEY_2_CDI_KEY_2_MASK)
/*! @} */

/*! @name CDI_KEY_3 - CDI_KEY_3 */
/*! @{ */

#define SECCON_CDI_KEY_3_CDI_KEY_3_MASK          (0xFFFFFFFFU)
#define SECCON_CDI_KEY_3_CDI_KEY_3_SHIFT         (0U)
/*! CDI_KEY_3 - These registers are used to store the final CDI measured by ROM. This value is
 *    passed on to customer application. No special protection is needed for this register. These
 *    registers do not drive any HW logic.
 */
#define SECCON_CDI_KEY_3_CDI_KEY_3(x)            (((uint32_t)(((uint32_t)(x)) << SECCON_CDI_KEY_3_CDI_KEY_3_SHIFT)) & SECCON_CDI_KEY_3_CDI_KEY_3_MASK)
/*! @} */

/*! @name CDI_KEY_4 - CDI_KEY_4 */
/*! @{ */

#define SECCON_CDI_KEY_4_CDI_KEY_4_MASK          (0xFFFFFFFFU)
#define SECCON_CDI_KEY_4_CDI_KEY_4_SHIFT         (0U)
/*! CDI_KEY_4 - These registers are used to store the final CDI measured by ROM. This value is
 *    passed on to customer application. No special protection is needed for this register. These
 *    registers do not drive any HW logic.
 */
#define SECCON_CDI_KEY_4_CDI_KEY_4(x)            (((uint32_t)(((uint32_t)(x)) << SECCON_CDI_KEY_4_CDI_KEY_4_SHIFT)) & SECCON_CDI_KEY_4_CDI_KEY_4_MASK)
/*! @} */

/*! @name CDI_KEY_5 - CDI_KEY_5 */
/*! @{ */

#define SECCON_CDI_KEY_5_CDI_KEY_5_MASK          (0xFFFFFFFFU)
#define SECCON_CDI_KEY_5_CDI_KEY_5_SHIFT         (0U)
/*! CDI_KEY_5 - These registers are used to store the final CDI measured by ROM. This value is
 *    passed on to customer application. No special protection is needed for this register. These
 *    registers do not drive any HW logic.
 */
#define SECCON_CDI_KEY_5_CDI_KEY_5(x)            (((uint32_t)(((uint32_t)(x)) << SECCON_CDI_KEY_5_CDI_KEY_5_SHIFT)) & SECCON_CDI_KEY_5_CDI_KEY_5_MASK)
/*! @} */

/*! @name CDI_KEY_6 - CDI_KEY_6 */
/*! @{ */

#define SECCON_CDI_KEY_6_CDI_KEY_6_MASK          (0xFFFFFFFFU)
#define SECCON_CDI_KEY_6_CDI_KEY_6_SHIFT         (0U)
/*! CDI_KEY_6 - These registers are used to store the final CDI measured by ROM. This value is
 *    passed on to customer application. No special protection is needed for this register. These
 *    registers do not drive any HW logic.
 */
#define SECCON_CDI_KEY_6_CDI_KEY_6(x)            (((uint32_t)(((uint32_t)(x)) << SECCON_CDI_KEY_6_CDI_KEY_6_SHIFT)) & SECCON_CDI_KEY_6_CDI_KEY_6_MASK)
/*! @} */

/*! @name CDI_KEY_7 - CDI_KEY_7 */
/*! @{ */

#define SECCON_CDI_KEY_7_CDI_KEY_7_MASK          (0xFFFFFFFFU)
#define SECCON_CDI_KEY_7_CDI_KEY_7_SHIFT         (0U)
/*! CDI_KEY_7 - These registers are used to store the final CDI measured by ROM. This value is
 *    passed on to customer application. No special protection is needed for this register. These
 *    registers do not drive any HW logic.
 */
#define SECCON_CDI_KEY_7_CDI_KEY_7(x)            (((uint32_t)(((uint32_t)(x)) << SECCON_CDI_KEY_7_CDI_KEY_7_SHIFT)) & SECCON_CDI_KEY_7_CDI_KEY_7_MASK)
/*! @} */

/*! @name SCRATCHPAD_0 - SCRATCHPAD_0 */
/*! @{ */

#define SECCON_SCRATCHPAD_0_SCRATCHPAD_0_MASK    (0xFFFFFFFFU)
#define SECCON_SCRATCHPAD_0_SCRATCHPAD_0_SHIFT   (0U)
/*! SCRATCHPAD_0 - Scratchpad registers are used as an interface between users and ROM for request
 *    submissions, status resording, etc. Scratchpad registers will not drive any HW logic, but
 *    restrictions on reset value/type must be carefully implemented.
 */
#define SECCON_SCRATCHPAD_0_SCRATCHPAD_0(x)      (((uint32_t)(((uint32_t)(x)) << SECCON_SCRATCHPAD_0_SCRATCHPAD_0_SHIFT)) & SECCON_SCRATCHPAD_0_SCRATCHPAD_0_MASK)
/*! @} */

/*! @name SCRATCHPAD_1 - SCRATCHPAD_1 */
/*! @{ */

#define SECCON_SCRATCHPAD_1_SCRATCHPAD_1_MASK    (0xFFFFFFFFU)
#define SECCON_SCRATCHPAD_1_SCRATCHPAD_1_SHIFT   (0U)
/*! SCRATCHPAD_1 - Scratchpad registers are used as an interface between users and ROM for request
 *    submissions, status resording, etc. Scratchpad registers will not drive any HW logic, but
 *    restrictions on reset value/type must be carefully implemented.
 */
#define SECCON_SCRATCHPAD_1_SCRATCHPAD_1(x)      (((uint32_t)(((uint32_t)(x)) << SECCON_SCRATCHPAD_1_SCRATCHPAD_1_SHIFT)) & SECCON_SCRATCHPAD_1_SCRATCHPAD_1_MASK)
/*! @} */

/*! @name SCRATCHPAD_2 - SCRATCHPAD_2 */
/*! @{ */

#define SECCON_SCRATCHPAD_2_SCRATCHPAD_2_MASK    (0xFFFFFFFFU)
#define SECCON_SCRATCHPAD_2_SCRATCHPAD_2_SHIFT   (0U)
/*! SCRATCHPAD_2 - Scratchpad registers are used as an interface between users and ROM for request
 *    submissions, status resording, etc. Scratchpad registers will not drive any HW logic, but
 *    restrictions on reset value/type must be carefully implemented.
 */
#define SECCON_SCRATCHPAD_2_SCRATCHPAD_2(x)      (((uint32_t)(((uint32_t)(x)) << SECCON_SCRATCHPAD_2_SCRATCHPAD_2_SHIFT)) & SECCON_SCRATCHPAD_2_SCRATCHPAD_2_MASK)
/*! @} */

/*! @name SCRATCHPAD_3 - SCRATCHPAD_3 */
/*! @{ */

#define SECCON_SCRATCHPAD_3_SCRATCHPAD_3_MASK    (0xFFFFFFFFU)
#define SECCON_SCRATCHPAD_3_SCRATCHPAD_3_SHIFT   (0U)
/*! SCRATCHPAD_3 - Scratchpad registers are used as an interface between users and ROM for request
 *    submissions, status resording, etc. Scratchpad registers will not drive any HW logic, but
 *    restrictions on reset value/type must be carefully implemented.
 */
#define SECCON_SCRATCHPAD_3_SCRATCHPAD_3(x)      (((uint32_t)(((uint32_t)(x)) << SECCON_SCRATCHPAD_3_SCRATCHPAD_3_SHIFT)) & SECCON_SCRATCHPAD_3_SCRATCHPAD_3_MASK)
/*! @} */

/*! @name SCRATCHPAD_4 - SCRATCHPAD_4 */
/*! @{ */

#define SECCON_SCRATCHPAD_4_SCRATCHPAD_4_MASK    (0xFFFFFFFFU)
#define SECCON_SCRATCHPAD_4_SCRATCHPAD_4_SHIFT   (0U)
/*! SCRATCHPAD_4 - Scratchpad registers are used as an interface between users and ROM for request
 *    submissions, status resording, etc. Scratchpad registers will not drive any HW logic, but
 *    restrictions on reset value/type must be carefully implemented.
 */
#define SECCON_SCRATCHPAD_4_SCRATCHPAD_4(x)      (((uint32_t)(((uint32_t)(x)) << SECCON_SCRATCHPAD_4_SCRATCHPAD_4_SHIFT)) & SECCON_SCRATCHPAD_4_SCRATCHPAD_4_MASK)
/*! @} */

/*! @name CFGSSTCALIB - CFGSSTCALIB */
/*! @{ */

#define SECCON_CFGSSTCALIB_TENMS_MASK            (0xFFFFFFU)
#define SECCON_CFGSSTCALIB_TENMS_SHIFT           (0U)
/*! TENMS - Provides an integer value to compute a 10ms (100Hz) delay from either the external
 *    reference clock or CM55 CLKIN, if the reference clock is not implemented.
 */
#define SECCON_CFGSSTCALIB_TENMS(x)              (((uint32_t)(((uint32_t)(x)) << SECCON_CFGSSTCALIB_TENMS_SHIFT)) & SECCON_CFGSSTCALIB_TENMS_MASK)

#define SECCON_CFGSSTCALIB_SKEW_MASK             (0x1000000U)
#define SECCON_CFGSSTCALIB_SKEW_SHIFT            (24U)
/*! SKEW - Indicates whether the 10ms calibration value is exact. 1'b0 : 10ms calibration is exact
 *    1'b1 : 10ms calibration is not exact bacause of clock frequency
 */
#define SECCON_CFGSSTCALIB_SKEW(x)               (((uint32_t)(((uint32_t)(x)) << SECCON_CFGSSTCALIB_SKEW_SHIFT)) & SECCON_CFGSSTCALIB_SKEW_MASK)

#define SECCON_CFGSSTCALIB_NOREF_MASK            (0x2000000U)
#define SECCON_CFGSSTCALIB_NOREF_SHIFT           (25U)
/*! NOREF - Indicates whether the external reference clock is implemented. 1'b0 : Reference clock is
 *    implemented 1'b1 : Reference clock is not implemented
 */
#define SECCON_CFGSSTCALIB_NOREF(x)              (((uint32_t)(((uint32_t)(x)) << SECCON_CFGSSTCALIB_NOREF_SHIFT)) & SECCON_CFGSSTCALIB_NOREF_MASK)
/*! @} */

/*! @name GDET_CTRL - GDET_CTRL */
/*! @{ */

#define SECCON_GDET_CTRL_EVENT_CNT_CLR_MASK      (0x1U)
#define SECCON_GDET_CTRL_EVENT_CNT_CLR_SHIFT     (0U)
/*! EVENT_CNT_CLR - When set, it clears GDET event counter and its a single pulse */
#define SECCON_GDET_CTRL_EVENT_CNT_CLR(x)        (((uint32_t)(((uint32_t)(x)) << SECCON_GDET_CTRL_EVENT_CNT_CLR_SHIFT)) & SECCON_GDET_CTRL_EVENT_CNT_CLR_MASK)

#define SECCON_GDET_CTRL_ERR_CLR_MASK            (0x2U)
#define SECCON_GDET_CTRL_ERR_CLR_SHIFT           (1U)
/*! ERR_CLR - When set, it clears GDET error status and its a single pulse */
#define SECCON_GDET_CTRL_ERR_CLR(x)              (((uint32_t)(((uint32_t)(x)) << SECCON_GDET_CTRL_ERR_CLR_SHIFT)) & SECCON_GDET_CTRL_ERR_CLR_MASK)

#define SECCON_GDET_CTRL_ISOLATE_ON_SW_CTRL_MASK (0xCU)
#define SECCON_GDET_CTRL_ISOLATE_ON_SW_CTRL_SHIFT (2U)
/*! ISOLATE_ON_SW_CTRL - Controls GDET input signal isolate_on 2'b10 : GDET isolation is enabled others : GDET isolation is disabled */
#define SECCON_GDET_CTRL_ISOLATE_ON_SW_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SECCON_GDET_CTRL_ISOLATE_ON_SW_CTRL_SHIFT)) & SECCON_GDET_CTRL_ISOLATE_ON_SW_CTRL_MASK)
/*! @} */

/*! @name GDET_STATUS - GDET_STATUS */
/*! @{ */

#define SECCON_GDET_STATUS_EVENT_CNT_MASK        (0xFFU)
#define SECCON_GDET_STATUS_EVENT_CNT_SHIFT       (0U)
/*! EVENT_CNT - Event counter value */
#define SECCON_GDET_STATUS_EVENT_CNT(x)          (((uint32_t)(((uint32_t)(x)) << SECCON_GDET_STATUS_EVENT_CNT_SHIFT)) & SECCON_GDET_STATUS_EVENT_CNT_MASK)

#define SECCON_GDET_STATUS_POS_SYNC_MASK         (0x100U)
#define SECCON_GDET_STATUS_POS_SYNC_SHIFT        (8U)
/*! POS_SYNC - Positive glitch detected */
#define SECCON_GDET_STATUS_POS_SYNC(x)           (((uint32_t)(((uint32_t)(x)) << SECCON_GDET_STATUS_POS_SYNC_SHIFT)) & SECCON_GDET_STATUS_POS_SYNC_MASK)

#define SECCON_GDET_STATUS_NEG_SYNC_MASK         (0x200U)
#define SECCON_GDET_STATUS_NEG_SYNC_SHIFT        (9U)
/*! NEG_SYNC - Negative glitch detected */
#define SECCON_GDET_STATUS_NEG_SYNC(x)           (((uint32_t)(((uint32_t)(x)) << SECCON_GDET_STATUS_NEG_SYNC_SHIFT)) & SECCON_GDET_STATUS_NEG_SYNC_MASK)

#define SECCON_GDET_STATUS_EVENT_CNT_CLR_FLAG_MASK (0x400U)
#define SECCON_GDET_STATUS_EVENT_CNT_CLR_FLAG_SHIFT (10U)
/*! EVENT_CNT_CLR_FLAG - When set, it indicates that the event counter is cleared */
#define SECCON_GDET_STATUS_EVENT_CNT_CLR_FLAG(x) (((uint32_t)(((uint32_t)(x)) << SECCON_GDET_STATUS_EVENT_CNT_CLR_FLAG_SHIFT)) & SECCON_GDET_STATUS_EVENT_CNT_CLR_FLAG_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group SECCON_Register_Masks */


/*!
 * @}
 */ /* end of group SECCON_Peripheral_Access_Layer */


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


#endif  /* PERI_SECCON_H_ */

