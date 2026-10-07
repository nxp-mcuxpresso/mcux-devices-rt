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
**         CMSIS Peripheral Access Layer for NSS_NIC
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
 * @file PERI_NSS_NIC.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for NSS_NIC
 *
 * CMSIS Peripheral Access Layer for NSS_NIC
 */

#if !defined(PERI_NSS_NIC_H_)
#define PERI_NSS_NIC_H_                          /**< Symbol preventing repeated inclusion */

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
   -- NSS_NIC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_NIC_Peripheral_Access_Layer NSS_NIC Peripheral Access Layer
 * @{
 */

/** NSS_NIC - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[8144];
  __I  uint32_t PERIPH_ID_4;                       /**< Peripheral ID register 4, offset: 0x1FD0 */
  __I  uint32_t PERIPH_ID_5;                       /**< Peripheral ID register 5, offset: 0x1FD4 */
  __I  uint32_t PERIPH_ID_6;                       /**< Peripheral ID register 6, offset: 0x1FD8 */
  __I  uint32_t PERIPH_ID_7;                       /**< Peripheral ID register 7, offset: 0x1FDC */
  __I  uint32_t PERIPH_ID_0;                       /**< Peripheral ID register 0, offset: 0x1FE0 */
  __I  uint32_t PERIPH_ID_1;                       /**< Peripheral ID register 1, offset: 0x1FE4 */
  __I  uint32_t PERIPH_ID_2;                       /**< Peripheral ID register 2, offset: 0x1FE8 */
  __I  uint32_t PERIPH_ID_3;                       /**< Peripheral ID register 3, offset: 0x1FEC */
  __I  uint32_t COMP_ID_0;                         /**< Component ID register 0, offset: 0x1FF0 */
  __I  uint32_t COMP_ID_1;                         /**< Component ID register 1, offset: 0x1FF4 */
  __I  uint32_t COMP_ID_2;                         /**< Component ID register 2, offset: 0x1FF8 */
  __I  uint32_t COMP_ID_3;                         /**< Component ID register 3, offset: 0x1FFC */
       uint8_t RESERVED_1[8];
  __IO uint32_t DNN_RAM_S0_FN_MOD_ISS_BM;          /**< Preceding bus matrix issuing functionality modification register., offset: 0x2008 */
       uint8_t RESERVED_2[262168];
  __IO uint32_t CM55_M0_IB_FN_MOD2;                /**< Bypass merging of data beats when upsizing/downsizing, offset: 0x42024 */
       uint8_t RESERVED_3[216];
  __IO uint32_t CM55_M0_IB_READ_QOS;               /**< Read channel QOS value, offset: 0x42100 */
  __IO uint32_t CM55_M0_IB_WRITE_QOS;              /**< Write channel QOS value, offset: 0x42104 */
  __IO uint32_t CM55_M0_IB_FN_MOD;                 /**< Issuing functionality modification register., offset: 0x42108 */
       uint8_t RESERVED_4[4084];
  __IO uint32_t U85_SRAM0_M1_READ_QOS;             /**< Read channel QOS value, offset: 0x43100 */
  __IO uint32_t U85_SRAM0_M1_WRITE_QOS;            /**< Write channel QOS value, offset: 0x43104 */
  __IO uint32_t U85_SRAM0_M1_FN_MOD;               /**< Issuing functionality modification register., offset: 0x43108 */
       uint8_t RESERVED_5[4084];
  __IO uint32_t U85_EXT0_M3_READ_QOS;              /**< Read channel QOS value, offset: 0x44100 */
  __IO uint32_t U85_EXT0_M3_WRITE_QOS;             /**< Write channel QOS value, offset: 0x44104 */
  __IO uint32_t U85_EXT0_M3_FN_MOD;                /**< Issuing functionality modification register., offset: 0x44108 */
       uint8_t RESERVED_6[4084];
  __IO uint32_t DMA_M4_READ_QOS;                   /**< Read channel QOS value, offset: 0x45100 */
  __IO uint32_t DMA_M4_WRITE_QOS;                  /**< Write channel QOS value, offset: 0x45104 */
  __IO uint32_t DMA_M4_FN_MOD;                     /**< Issuing functionality modification register., offset: 0x45108 */
       uint8_t RESERVED_7[3864];
  __IO uint32_t CSS_IN_M5_IB_FN_MOD2;              /**< Bypass merging of data beats when upsizing/downsizing, offset: 0x46024 */
       uint8_t RESERVED_8[224];
  __IO uint32_t CSS_IN_M5_IB_FN_MOD;               /**< Issuing functionality modification register., offset: 0x46108 */
       uint8_t RESERVED_9[4084];
  __IO uint32_t DSS_IN_M6_READ_QOS;                /**< Read channel QOS value, offset: 0x47100 */
  __IO uint32_t DSS_IN_M6_WRITE_QOS;               /**< Write channel QOS value, offset: 0x47104 */
  __IO uint32_t DSS_IN_M6_FN_MOD;                  /**< Issuing functionality modification register., offset: 0x47108 */
       uint8_t RESERVED_10[4084];
  __IO uint32_t DSS_IN_M7_READ_QOS;                /**< Read channel QOS value, offset: 0x48100 */
  __IO uint32_t DSS_IN_M7_WRITE_QOS;               /**< Write channel QOS value, offset: 0x48104 */
  __IO uint32_t DSS_IN_M7_FN_MOD;                  /**< Issuing functionality modification register., offset: 0x48108 */
       uint8_t RESERVED_11[4084];
  __IO uint32_t DSS_IN_M8_READ_QOS;                /**< Read channel QOS value, offset: 0x49100 */
  __IO uint32_t DSS_IN_M8_WRITE_QOS;               /**< Write channel QOS value, offset: 0x49104 */
  __IO uint32_t DSS_IN_M8_FN_MOD;                  /**< Issuing functionality modification register., offset: 0x49108 */
       uint8_t RESERVED_12[4084];
  __IO uint32_t DSS_IN_M9_READ_QOS;                /**< Read channel QOS value, offset: 0x4A100 */
  __IO uint32_t DSS_IN_M9_WRITE_QOS;               /**< Write channel QOS value, offset: 0x4A104 */
  __IO uint32_t DSS_IN_M9_FN_MOD;                  /**< Issuing functionality modification register., offset: 0x4A108 */
} NSS_NIC_Type;

/* ----------------------------------------------------------------------------
   -- NSS_NIC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_NIC_Register_Masks NSS_NIC Register Masks
 * @{
 */

/*! @name PERIPH_ID_4 - Peripheral ID register 4 */
/*! @{ */

#define NSS_NIC_PERIPH_ID_4_periph_id_4_MASK     (0xFFU)
#define NSS_NIC_PERIPH_ID_4_periph_id_4_SHIFT    (0U)
#define NSS_NIC_PERIPH_ID_4_periph_id_4(x)       (((uint32_t)(((uint32_t)(x)) << NSS_NIC_PERIPH_ID_4_periph_id_4_SHIFT)) & NSS_NIC_PERIPH_ID_4_periph_id_4_MASK)
/*! @} */

/*! @name PERIPH_ID_5 - Peripheral ID register 5 */
/*! @{ */

#define NSS_NIC_PERIPH_ID_5_periph_id_5_MASK     (0xFFU)
#define NSS_NIC_PERIPH_ID_5_periph_id_5_SHIFT    (0U)
#define NSS_NIC_PERIPH_ID_5_periph_id_5(x)       (((uint32_t)(((uint32_t)(x)) << NSS_NIC_PERIPH_ID_5_periph_id_5_SHIFT)) & NSS_NIC_PERIPH_ID_5_periph_id_5_MASK)
/*! @} */

/*! @name PERIPH_ID_6 - Peripheral ID register 6 */
/*! @{ */

#define NSS_NIC_PERIPH_ID_6_periph_id_6_MASK     (0xFFU)
#define NSS_NIC_PERIPH_ID_6_periph_id_6_SHIFT    (0U)
#define NSS_NIC_PERIPH_ID_6_periph_id_6(x)       (((uint32_t)(((uint32_t)(x)) << NSS_NIC_PERIPH_ID_6_periph_id_6_SHIFT)) & NSS_NIC_PERIPH_ID_6_periph_id_6_MASK)
/*! @} */

/*! @name PERIPH_ID_7 - Peripheral ID register 7 */
/*! @{ */

#define NSS_NIC_PERIPH_ID_7_periph_id_7_MASK     (0xFFU)
#define NSS_NIC_PERIPH_ID_7_periph_id_7_SHIFT    (0U)
#define NSS_NIC_PERIPH_ID_7_periph_id_7(x)       (((uint32_t)(((uint32_t)(x)) << NSS_NIC_PERIPH_ID_7_periph_id_7_SHIFT)) & NSS_NIC_PERIPH_ID_7_periph_id_7_MASK)
/*! @} */

/*! @name PERIPH_ID_0 - Peripheral ID register 0 */
/*! @{ */

#define NSS_NIC_PERIPH_ID_0_periph_id_0_MASK     (0xFFU)
#define NSS_NIC_PERIPH_ID_0_periph_id_0_SHIFT    (0U)
#define NSS_NIC_PERIPH_ID_0_periph_id_0(x)       (((uint32_t)(((uint32_t)(x)) << NSS_NIC_PERIPH_ID_0_periph_id_0_SHIFT)) & NSS_NIC_PERIPH_ID_0_periph_id_0_MASK)
/*! @} */

/*! @name PERIPH_ID_1 - Peripheral ID register 1 */
/*! @{ */

#define NSS_NIC_PERIPH_ID_1_periph_id_1_MASK     (0xFFU)
#define NSS_NIC_PERIPH_ID_1_periph_id_1_SHIFT    (0U)
#define NSS_NIC_PERIPH_ID_1_periph_id_1(x)       (((uint32_t)(((uint32_t)(x)) << NSS_NIC_PERIPH_ID_1_periph_id_1_SHIFT)) & NSS_NIC_PERIPH_ID_1_periph_id_1_MASK)
/*! @} */

/*! @name PERIPH_ID_2 - Peripheral ID register 2 */
/*! @{ */

#define NSS_NIC_PERIPH_ID_2_periph_id_2_MASK     (0xFFU)
#define NSS_NIC_PERIPH_ID_2_periph_id_2_SHIFT    (0U)
#define NSS_NIC_PERIPH_ID_2_periph_id_2(x)       (((uint32_t)(((uint32_t)(x)) << NSS_NIC_PERIPH_ID_2_periph_id_2_SHIFT)) & NSS_NIC_PERIPH_ID_2_periph_id_2_MASK)
/*! @} */

/*! @name PERIPH_ID_3 - Peripheral ID register 3 */
/*! @{ */

#define NSS_NIC_PERIPH_ID_3_cust_mod_num_MASK    (0xFU)
#define NSS_NIC_PERIPH_ID_3_cust_mod_num_SHIFT   (0U)
#define NSS_NIC_PERIPH_ID_3_cust_mod_num(x)      (((uint32_t)(((uint32_t)(x)) << NSS_NIC_PERIPH_ID_3_cust_mod_num_SHIFT)) & NSS_NIC_PERIPH_ID_3_cust_mod_num_MASK)

#define NSS_NIC_PERIPH_ID_3_rev_and_MASK         (0xF0U)
#define NSS_NIC_PERIPH_ID_3_rev_and_SHIFT        (4U)
#define NSS_NIC_PERIPH_ID_3_rev_and(x)           (((uint32_t)(((uint32_t)(x)) << NSS_NIC_PERIPH_ID_3_rev_and_SHIFT)) & NSS_NIC_PERIPH_ID_3_rev_and_MASK)
/*! @} */

/*! @name COMP_ID_0 - Component ID register 0 */
/*! @{ */

#define NSS_NIC_COMP_ID_0_comp_id_0_MASK         (0xFFU)
#define NSS_NIC_COMP_ID_0_comp_id_0_SHIFT        (0U)
#define NSS_NIC_COMP_ID_0_comp_id_0(x)           (((uint32_t)(((uint32_t)(x)) << NSS_NIC_COMP_ID_0_comp_id_0_SHIFT)) & NSS_NIC_COMP_ID_0_comp_id_0_MASK)
/*! @} */

/*! @name COMP_ID_1 - Component ID register 1 */
/*! @{ */

#define NSS_NIC_COMP_ID_1_comp_id_1_MASK         (0xFFU)
#define NSS_NIC_COMP_ID_1_comp_id_1_SHIFT        (0U)
#define NSS_NIC_COMP_ID_1_comp_id_1(x)           (((uint32_t)(((uint32_t)(x)) << NSS_NIC_COMP_ID_1_comp_id_1_SHIFT)) & NSS_NIC_COMP_ID_1_comp_id_1_MASK)
/*! @} */

/*! @name COMP_ID_2 - Component ID register 2 */
/*! @{ */

#define NSS_NIC_COMP_ID_2_comp_id_2_MASK         (0xFFU)
#define NSS_NIC_COMP_ID_2_comp_id_2_SHIFT        (0U)
#define NSS_NIC_COMP_ID_2_comp_id_2(x)           (((uint32_t)(((uint32_t)(x)) << NSS_NIC_COMP_ID_2_comp_id_2_SHIFT)) & NSS_NIC_COMP_ID_2_comp_id_2_MASK)
/*! @} */

/*! @name COMP_ID_3 - Component ID register 3 */
/*! @{ */

#define NSS_NIC_COMP_ID_3_comp_id_3_MASK         (0xFFU)
#define NSS_NIC_COMP_ID_3_comp_id_3_SHIFT        (0U)
#define NSS_NIC_COMP_ID_3_comp_id_3(x)           (((uint32_t)(((uint32_t)(x)) << NSS_NIC_COMP_ID_3_comp_id_3_SHIFT)) & NSS_NIC_COMP_ID_3_comp_id_3_MASK)
/*! @} */

/*! @name DNN_RAM_S0_FN_MOD_ISS_BM - Preceding bus matrix issuing functionality modification register. */
/*! @{ */

#define NSS_NIC_DNN_RAM_S0_FN_MOD_ISS_BM_read_iss_override_MASK (0x1U)
#define NSS_NIC_DNN_RAM_S0_FN_MOD_ISS_BM_read_iss_override_SHIFT (0U)
/*! read_iss_override - Force read channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_DNN_RAM_S0_FN_MOD_ISS_BM_read_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DNN_RAM_S0_FN_MOD_ISS_BM_read_iss_override_SHIFT)) & NSS_NIC_DNN_RAM_S0_FN_MOD_ISS_BM_read_iss_override_MASK)

#define NSS_NIC_DNN_RAM_S0_FN_MOD_ISS_BM_write_iss_override_MASK (0x2U)
#define NSS_NIC_DNN_RAM_S0_FN_MOD_ISS_BM_write_iss_override_SHIFT (1U)
/*! write_iss_override - Force write channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_DNN_RAM_S0_FN_MOD_ISS_BM_write_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DNN_RAM_S0_FN_MOD_ISS_BM_write_iss_override_SHIFT)) & NSS_NIC_DNN_RAM_S0_FN_MOD_ISS_BM_write_iss_override_MASK)
/*! @} */

/*! @name CM55_M0_IB_FN_MOD2 - Bypass merging of data beats when upsizing/downsizing */
/*! @{ */

#define NSS_NIC_CM55_M0_IB_FN_MOD2_bypass_merge_MASK (0x1U)
#define NSS_NIC_CM55_M0_IB_FN_MOD2_bypass_merge_SHIFT (0U)
/*! bypass_merge
 *  0b0..Merge not bypassed
 *  0b1..Merge bypassed
 */
#define NSS_NIC_CM55_M0_IB_FN_MOD2_bypass_merge(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_CM55_M0_IB_FN_MOD2_bypass_merge_SHIFT)) & NSS_NIC_CM55_M0_IB_FN_MOD2_bypass_merge_MASK)
/*! @} */

/*! @name CM55_M0_IB_READ_QOS - Read channel QOS value */
/*! @{ */

#define NSS_NIC_CM55_M0_IB_READ_QOS_ar_qos_MASK  (0xFU)
#define NSS_NIC_CM55_M0_IB_READ_QOS_ar_qos_SHIFT (0U)
/*! ar_qos - Read channel QOS value. */
#define NSS_NIC_CM55_M0_IB_READ_QOS_ar_qos(x)    (((uint32_t)(((uint32_t)(x)) << NSS_NIC_CM55_M0_IB_READ_QOS_ar_qos_SHIFT)) & NSS_NIC_CM55_M0_IB_READ_QOS_ar_qos_MASK)
/*! @} */

/*! @name CM55_M0_IB_WRITE_QOS - Write channel QOS value */
/*! @{ */

#define NSS_NIC_CM55_M0_IB_WRITE_QOS_aw_qos_MASK (0xFU)
#define NSS_NIC_CM55_M0_IB_WRITE_QOS_aw_qos_SHIFT (0U)
/*! aw_qos - Write channel QOS value. */
#define NSS_NIC_CM55_M0_IB_WRITE_QOS_aw_qos(x)   (((uint32_t)(((uint32_t)(x)) << NSS_NIC_CM55_M0_IB_WRITE_QOS_aw_qos_SHIFT)) & NSS_NIC_CM55_M0_IB_WRITE_QOS_aw_qos_MASK)
/*! @} */

/*! @name CM55_M0_IB_FN_MOD - Issuing functionality modification register. */
/*! @{ */

#define NSS_NIC_CM55_M0_IB_FN_MOD_read_iss_override_MASK (0x1U)
#define NSS_NIC_CM55_M0_IB_FN_MOD_read_iss_override_SHIFT (0U)
/*! read_iss_override - Force read channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_CM55_M0_IB_FN_MOD_read_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_CM55_M0_IB_FN_MOD_read_iss_override_SHIFT)) & NSS_NIC_CM55_M0_IB_FN_MOD_read_iss_override_MASK)

#define NSS_NIC_CM55_M0_IB_FN_MOD_write_iss_override_MASK (0x2U)
#define NSS_NIC_CM55_M0_IB_FN_MOD_write_iss_override_SHIFT (1U)
/*! write_iss_override - Force write channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_CM55_M0_IB_FN_MOD_write_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_CM55_M0_IB_FN_MOD_write_iss_override_SHIFT)) & NSS_NIC_CM55_M0_IB_FN_MOD_write_iss_override_MASK)
/*! @} */

/*! @name U85_SRAM0_M1_READ_QOS - Read channel QOS value */
/*! @{ */

#define NSS_NIC_U85_SRAM0_M1_READ_QOS_ar_qos_MASK (0xFU)
#define NSS_NIC_U85_SRAM0_M1_READ_QOS_ar_qos_SHIFT (0U)
/*! ar_qos - Read channel QOS value. */
#define NSS_NIC_U85_SRAM0_M1_READ_QOS_ar_qos(x)  (((uint32_t)(((uint32_t)(x)) << NSS_NIC_U85_SRAM0_M1_READ_QOS_ar_qos_SHIFT)) & NSS_NIC_U85_SRAM0_M1_READ_QOS_ar_qos_MASK)
/*! @} */

/*! @name U85_SRAM0_M1_WRITE_QOS - Write channel QOS value */
/*! @{ */

#define NSS_NIC_U85_SRAM0_M1_WRITE_QOS_aw_qos_MASK (0xFU)
#define NSS_NIC_U85_SRAM0_M1_WRITE_QOS_aw_qos_SHIFT (0U)
/*! aw_qos - Write channel QOS value. */
#define NSS_NIC_U85_SRAM0_M1_WRITE_QOS_aw_qos(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_U85_SRAM0_M1_WRITE_QOS_aw_qos_SHIFT)) & NSS_NIC_U85_SRAM0_M1_WRITE_QOS_aw_qos_MASK)
/*! @} */

/*! @name U85_SRAM0_M1_FN_MOD - Issuing functionality modification register. */
/*! @{ */

#define NSS_NIC_U85_SRAM0_M1_FN_MOD_read_iss_override_MASK (0x1U)
#define NSS_NIC_U85_SRAM0_M1_FN_MOD_read_iss_override_SHIFT (0U)
/*! read_iss_override - Force read channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_U85_SRAM0_M1_FN_MOD_read_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_U85_SRAM0_M1_FN_MOD_read_iss_override_SHIFT)) & NSS_NIC_U85_SRAM0_M1_FN_MOD_read_iss_override_MASK)

#define NSS_NIC_U85_SRAM0_M1_FN_MOD_write_iss_override_MASK (0x2U)
#define NSS_NIC_U85_SRAM0_M1_FN_MOD_write_iss_override_SHIFT (1U)
/*! write_iss_override - Force write channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_U85_SRAM0_M1_FN_MOD_write_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_U85_SRAM0_M1_FN_MOD_write_iss_override_SHIFT)) & NSS_NIC_U85_SRAM0_M1_FN_MOD_write_iss_override_MASK)
/*! @} */

/*! @name U85_EXT0_M3_READ_QOS - Read channel QOS value */
/*! @{ */

#define NSS_NIC_U85_EXT0_M3_READ_QOS_ar_qos_MASK (0xFU)
#define NSS_NIC_U85_EXT0_M3_READ_QOS_ar_qos_SHIFT (0U)
/*! ar_qos - Read channel QOS value. */
#define NSS_NIC_U85_EXT0_M3_READ_QOS_ar_qos(x)   (((uint32_t)(((uint32_t)(x)) << NSS_NIC_U85_EXT0_M3_READ_QOS_ar_qos_SHIFT)) & NSS_NIC_U85_EXT0_M3_READ_QOS_ar_qos_MASK)
/*! @} */

/*! @name U85_EXT0_M3_WRITE_QOS - Write channel QOS value */
/*! @{ */

#define NSS_NIC_U85_EXT0_M3_WRITE_QOS_aw_qos_MASK (0xFU)
#define NSS_NIC_U85_EXT0_M3_WRITE_QOS_aw_qos_SHIFT (0U)
/*! aw_qos - Write channel QOS value. */
#define NSS_NIC_U85_EXT0_M3_WRITE_QOS_aw_qos(x)  (((uint32_t)(((uint32_t)(x)) << NSS_NIC_U85_EXT0_M3_WRITE_QOS_aw_qos_SHIFT)) & NSS_NIC_U85_EXT0_M3_WRITE_QOS_aw_qos_MASK)
/*! @} */

/*! @name U85_EXT0_M3_FN_MOD - Issuing functionality modification register. */
/*! @{ */

#define NSS_NIC_U85_EXT0_M3_FN_MOD_read_iss_override_MASK (0x1U)
#define NSS_NIC_U85_EXT0_M3_FN_MOD_read_iss_override_SHIFT (0U)
/*! read_iss_override - Force read channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_U85_EXT0_M3_FN_MOD_read_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_U85_EXT0_M3_FN_MOD_read_iss_override_SHIFT)) & NSS_NIC_U85_EXT0_M3_FN_MOD_read_iss_override_MASK)

#define NSS_NIC_U85_EXT0_M3_FN_MOD_write_iss_override_MASK (0x2U)
#define NSS_NIC_U85_EXT0_M3_FN_MOD_write_iss_override_SHIFT (1U)
/*! write_iss_override - Force write channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_U85_EXT0_M3_FN_MOD_write_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_U85_EXT0_M3_FN_MOD_write_iss_override_SHIFT)) & NSS_NIC_U85_EXT0_M3_FN_MOD_write_iss_override_MASK)
/*! @} */

/*! @name DMA_M4_READ_QOS - Read channel QOS value */
/*! @{ */

#define NSS_NIC_DMA_M4_READ_QOS_ar_qos_MASK      (0xFU)
#define NSS_NIC_DMA_M4_READ_QOS_ar_qos_SHIFT     (0U)
/*! ar_qos - Read channel QOS value. */
#define NSS_NIC_DMA_M4_READ_QOS_ar_qos(x)        (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DMA_M4_READ_QOS_ar_qos_SHIFT)) & NSS_NIC_DMA_M4_READ_QOS_ar_qos_MASK)
/*! @} */

/*! @name DMA_M4_WRITE_QOS - Write channel QOS value */
/*! @{ */

#define NSS_NIC_DMA_M4_WRITE_QOS_aw_qos_MASK     (0xFU)
#define NSS_NIC_DMA_M4_WRITE_QOS_aw_qos_SHIFT    (0U)
/*! aw_qos - Write channel QOS value. */
#define NSS_NIC_DMA_M4_WRITE_QOS_aw_qos(x)       (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DMA_M4_WRITE_QOS_aw_qos_SHIFT)) & NSS_NIC_DMA_M4_WRITE_QOS_aw_qos_MASK)
/*! @} */

/*! @name DMA_M4_FN_MOD - Issuing functionality modification register. */
/*! @{ */

#define NSS_NIC_DMA_M4_FN_MOD_read_iss_override_MASK (0x1U)
#define NSS_NIC_DMA_M4_FN_MOD_read_iss_override_SHIFT (0U)
/*! read_iss_override - Force read channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_DMA_M4_FN_MOD_read_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DMA_M4_FN_MOD_read_iss_override_SHIFT)) & NSS_NIC_DMA_M4_FN_MOD_read_iss_override_MASK)

#define NSS_NIC_DMA_M4_FN_MOD_write_iss_override_MASK (0x2U)
#define NSS_NIC_DMA_M4_FN_MOD_write_iss_override_SHIFT (1U)
/*! write_iss_override - Force write channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_DMA_M4_FN_MOD_write_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DMA_M4_FN_MOD_write_iss_override_SHIFT)) & NSS_NIC_DMA_M4_FN_MOD_write_iss_override_MASK)
/*! @} */

/*! @name CSS_IN_M5_IB_FN_MOD2 - Bypass merging of data beats when upsizing/downsizing */
/*! @{ */

#define NSS_NIC_CSS_IN_M5_IB_FN_MOD2_bypass_merge_MASK (0x1U)
#define NSS_NIC_CSS_IN_M5_IB_FN_MOD2_bypass_merge_SHIFT (0U)
/*! bypass_merge
 *  0b0..Merge not bypassed
 *  0b1..Merge bypassed
 */
#define NSS_NIC_CSS_IN_M5_IB_FN_MOD2_bypass_merge(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_CSS_IN_M5_IB_FN_MOD2_bypass_merge_SHIFT)) & NSS_NIC_CSS_IN_M5_IB_FN_MOD2_bypass_merge_MASK)
/*! @} */

/*! @name CSS_IN_M5_IB_FN_MOD - Issuing functionality modification register. */
/*! @{ */

#define NSS_NIC_CSS_IN_M5_IB_FN_MOD_read_iss_override_MASK (0x1U)
#define NSS_NIC_CSS_IN_M5_IB_FN_MOD_read_iss_override_SHIFT (0U)
/*! read_iss_override - Force read channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_CSS_IN_M5_IB_FN_MOD_read_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_CSS_IN_M5_IB_FN_MOD_read_iss_override_SHIFT)) & NSS_NIC_CSS_IN_M5_IB_FN_MOD_read_iss_override_MASK)

#define NSS_NIC_CSS_IN_M5_IB_FN_MOD_write_iss_override_MASK (0x2U)
#define NSS_NIC_CSS_IN_M5_IB_FN_MOD_write_iss_override_SHIFT (1U)
/*! write_iss_override - Force write channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_CSS_IN_M5_IB_FN_MOD_write_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_CSS_IN_M5_IB_FN_MOD_write_iss_override_SHIFT)) & NSS_NIC_CSS_IN_M5_IB_FN_MOD_write_iss_override_MASK)
/*! @} */

/*! @name DSS_IN_M6_READ_QOS - Read channel QOS value */
/*! @{ */

#define NSS_NIC_DSS_IN_M6_READ_QOS_ar_qos_MASK   (0xFU)
#define NSS_NIC_DSS_IN_M6_READ_QOS_ar_qos_SHIFT  (0U)
/*! ar_qos - Read channel QOS value. */
#define NSS_NIC_DSS_IN_M6_READ_QOS_ar_qos(x)     (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DSS_IN_M6_READ_QOS_ar_qos_SHIFT)) & NSS_NIC_DSS_IN_M6_READ_QOS_ar_qos_MASK)
/*! @} */

/*! @name DSS_IN_M6_WRITE_QOS - Write channel QOS value */
/*! @{ */

#define NSS_NIC_DSS_IN_M6_WRITE_QOS_aw_qos_MASK  (0xFU)
#define NSS_NIC_DSS_IN_M6_WRITE_QOS_aw_qos_SHIFT (0U)
/*! aw_qos - Write channel QOS value. */
#define NSS_NIC_DSS_IN_M6_WRITE_QOS_aw_qos(x)    (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DSS_IN_M6_WRITE_QOS_aw_qos_SHIFT)) & NSS_NIC_DSS_IN_M6_WRITE_QOS_aw_qos_MASK)
/*! @} */

/*! @name DSS_IN_M6_FN_MOD - Issuing functionality modification register. */
/*! @{ */

#define NSS_NIC_DSS_IN_M6_FN_MOD_read_iss_override_MASK (0x1U)
#define NSS_NIC_DSS_IN_M6_FN_MOD_read_iss_override_SHIFT (0U)
/*! read_iss_override - Force read channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_DSS_IN_M6_FN_MOD_read_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DSS_IN_M6_FN_MOD_read_iss_override_SHIFT)) & NSS_NIC_DSS_IN_M6_FN_MOD_read_iss_override_MASK)

#define NSS_NIC_DSS_IN_M6_FN_MOD_write_iss_override_MASK (0x2U)
#define NSS_NIC_DSS_IN_M6_FN_MOD_write_iss_override_SHIFT (1U)
/*! write_iss_override - Force write channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_DSS_IN_M6_FN_MOD_write_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DSS_IN_M6_FN_MOD_write_iss_override_SHIFT)) & NSS_NIC_DSS_IN_M6_FN_MOD_write_iss_override_MASK)
/*! @} */

/*! @name DSS_IN_M7_READ_QOS - Read channel QOS value */
/*! @{ */

#define NSS_NIC_DSS_IN_M7_READ_QOS_ar_qos_MASK   (0xFU)
#define NSS_NIC_DSS_IN_M7_READ_QOS_ar_qos_SHIFT  (0U)
/*! ar_qos - Read channel QOS value. */
#define NSS_NIC_DSS_IN_M7_READ_QOS_ar_qos(x)     (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DSS_IN_M7_READ_QOS_ar_qos_SHIFT)) & NSS_NIC_DSS_IN_M7_READ_QOS_ar_qos_MASK)
/*! @} */

/*! @name DSS_IN_M7_WRITE_QOS - Write channel QOS value */
/*! @{ */

#define NSS_NIC_DSS_IN_M7_WRITE_QOS_aw_qos_MASK  (0xFU)
#define NSS_NIC_DSS_IN_M7_WRITE_QOS_aw_qos_SHIFT (0U)
/*! aw_qos - Write channel QOS value. */
#define NSS_NIC_DSS_IN_M7_WRITE_QOS_aw_qos(x)    (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DSS_IN_M7_WRITE_QOS_aw_qos_SHIFT)) & NSS_NIC_DSS_IN_M7_WRITE_QOS_aw_qos_MASK)
/*! @} */

/*! @name DSS_IN_M7_FN_MOD - Issuing functionality modification register. */
/*! @{ */

#define NSS_NIC_DSS_IN_M7_FN_MOD_read_iss_override_MASK (0x1U)
#define NSS_NIC_DSS_IN_M7_FN_MOD_read_iss_override_SHIFT (0U)
/*! read_iss_override - Force read channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_DSS_IN_M7_FN_MOD_read_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DSS_IN_M7_FN_MOD_read_iss_override_SHIFT)) & NSS_NIC_DSS_IN_M7_FN_MOD_read_iss_override_MASK)

#define NSS_NIC_DSS_IN_M7_FN_MOD_write_iss_override_MASK (0x2U)
#define NSS_NIC_DSS_IN_M7_FN_MOD_write_iss_override_SHIFT (1U)
/*! write_iss_override - Force write channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_DSS_IN_M7_FN_MOD_write_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DSS_IN_M7_FN_MOD_write_iss_override_SHIFT)) & NSS_NIC_DSS_IN_M7_FN_MOD_write_iss_override_MASK)
/*! @} */

/*! @name DSS_IN_M8_READ_QOS - Read channel QOS value */
/*! @{ */

#define NSS_NIC_DSS_IN_M8_READ_QOS_ar_qos_MASK   (0xFU)
#define NSS_NIC_DSS_IN_M8_READ_QOS_ar_qos_SHIFT  (0U)
/*! ar_qos - Read channel QOS value. */
#define NSS_NIC_DSS_IN_M8_READ_QOS_ar_qos(x)     (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DSS_IN_M8_READ_QOS_ar_qos_SHIFT)) & NSS_NIC_DSS_IN_M8_READ_QOS_ar_qos_MASK)
/*! @} */

/*! @name DSS_IN_M8_WRITE_QOS - Write channel QOS value */
/*! @{ */

#define NSS_NIC_DSS_IN_M8_WRITE_QOS_aw_qos_MASK  (0xFU)
#define NSS_NIC_DSS_IN_M8_WRITE_QOS_aw_qos_SHIFT (0U)
/*! aw_qos - Write channel QOS value. */
#define NSS_NIC_DSS_IN_M8_WRITE_QOS_aw_qos(x)    (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DSS_IN_M8_WRITE_QOS_aw_qos_SHIFT)) & NSS_NIC_DSS_IN_M8_WRITE_QOS_aw_qos_MASK)
/*! @} */

/*! @name DSS_IN_M8_FN_MOD - Issuing functionality modification register. */
/*! @{ */

#define NSS_NIC_DSS_IN_M8_FN_MOD_read_iss_override_MASK (0x1U)
#define NSS_NIC_DSS_IN_M8_FN_MOD_read_iss_override_SHIFT (0U)
/*! read_iss_override - Force read channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_DSS_IN_M8_FN_MOD_read_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DSS_IN_M8_FN_MOD_read_iss_override_SHIFT)) & NSS_NIC_DSS_IN_M8_FN_MOD_read_iss_override_MASK)

#define NSS_NIC_DSS_IN_M8_FN_MOD_write_iss_override_MASK (0x2U)
#define NSS_NIC_DSS_IN_M8_FN_MOD_write_iss_override_SHIFT (1U)
/*! write_iss_override - Force write channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_DSS_IN_M8_FN_MOD_write_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DSS_IN_M8_FN_MOD_write_iss_override_SHIFT)) & NSS_NIC_DSS_IN_M8_FN_MOD_write_iss_override_MASK)
/*! @} */

/*! @name DSS_IN_M9_READ_QOS - Read channel QOS value */
/*! @{ */

#define NSS_NIC_DSS_IN_M9_READ_QOS_ar_qos_MASK   (0xFU)
#define NSS_NIC_DSS_IN_M9_READ_QOS_ar_qos_SHIFT  (0U)
/*! ar_qos - Read channel QOS value. */
#define NSS_NIC_DSS_IN_M9_READ_QOS_ar_qos(x)     (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DSS_IN_M9_READ_QOS_ar_qos_SHIFT)) & NSS_NIC_DSS_IN_M9_READ_QOS_ar_qos_MASK)
/*! @} */

/*! @name DSS_IN_M9_WRITE_QOS - Write channel QOS value */
/*! @{ */

#define NSS_NIC_DSS_IN_M9_WRITE_QOS_aw_qos_MASK  (0xFU)
#define NSS_NIC_DSS_IN_M9_WRITE_QOS_aw_qos_SHIFT (0U)
/*! aw_qos - Write channel QOS value. */
#define NSS_NIC_DSS_IN_M9_WRITE_QOS_aw_qos(x)    (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DSS_IN_M9_WRITE_QOS_aw_qos_SHIFT)) & NSS_NIC_DSS_IN_M9_WRITE_QOS_aw_qos_MASK)
/*! @} */

/*! @name DSS_IN_M9_FN_MOD - Issuing functionality modification register. */
/*! @{ */

#define NSS_NIC_DSS_IN_M9_FN_MOD_read_iss_override_MASK (0x1U)
#define NSS_NIC_DSS_IN_M9_FN_MOD_read_iss_override_SHIFT (0U)
/*! read_iss_override - Force read channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_DSS_IN_M9_FN_MOD_read_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DSS_IN_M9_FN_MOD_read_iss_override_SHIFT)) & NSS_NIC_DSS_IN_M9_FN_MOD_read_iss_override_MASK)

#define NSS_NIC_DSS_IN_M9_FN_MOD_write_iss_override_MASK (0x2U)
#define NSS_NIC_DSS_IN_M9_FN_MOD_write_iss_override_SHIFT (1U)
/*! write_iss_override - Force write channel issuing capability to be set to 1 transaction.
 *  0b0..Override disabled
 *  0b1..Override enabled
 */
#define NSS_NIC_DSS_IN_M9_FN_MOD_write_iss_override(x) (((uint32_t)(((uint32_t)(x)) << NSS_NIC_DSS_IN_M9_FN_MOD_write_iss_override_SHIFT)) & NSS_NIC_DSS_IN_M9_FN_MOD_write_iss_override_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group NSS_NIC_Register_Masks */


/*!
 * @}
 */ /* end of group NSS_NIC_Peripheral_Access_Layer */


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


#endif  /* PERI_NSS_NIC_H_ */

