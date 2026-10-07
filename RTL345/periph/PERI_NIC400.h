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
**         CMSIS Peripheral Access Layer for NIC400
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
 * @file PERI_NIC400.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for NIC400
 *
 * CMSIS Peripheral Access Layer for NIC400
 */

#if !defined(PERI_NIC400_H_)
#define PERI_NIC400_H_                           /**< Symbol preventing repeated inclusion */

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
   -- NIC400 Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NIC400_Peripheral_Access_Layer NIC400 Peripheral Access Layer
 * @{
 */

/** NIC400 - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[8144];
  __I  uint32_t PERIPH_ID_4;                       /**< offset: 0x1FD0 */
  __I  uint32_t PERIPH_ID_5;                       /**< offset: 0x1FD4 */
  __I  uint32_t PERIPH_ID_6;                       /**< offset: 0x1FD8 */
  __I  uint32_t PERIPH_ID_7;                       /**< offset: 0x1FDC */
  __I  uint32_t PERIPH_ID_0;                       /**< offset: 0x1FE0 */
  __I  uint32_t PERIPH_ID_1;                       /**< offset: 0x1FE4 */
  __I  uint32_t PERIPH_ID_2;                       /**< offset: 0x1FE8 */
  __I  uint32_t PERIPH_ID_3;                       /**< offset: 0x1FEC */
  __I  uint32_t COMP_ID_0;                         /**< offset: 0x1FF0 */
  __I  uint32_t COMP_ID_1;                         /**< offset: 0x1FF4 */
  __I  uint32_t COMP_ID_2;                         /**< offset: 0x1FF8 */
  __I  uint32_t COMP_ID_3;                         /**< offset: 0x1FFC */
       uint8_t RESERVED_1[8];
  __IO uint32_t _NSS_OUT_S0FN_MOD_ISS_BM;          /**< offset: 0x2008 */
       uint8_t RESERVED_2[4092];
  __IO uint32_t _MLM_OUT_S1_IBFN_MOD_ISS_BM;       /**< offset: 0x3008 */
       uint8_t RESERVED_3[24];
  __IO uint32_t _MLM_OUT_S1_IBFN_MOD2;             /**< offset: 0x3024 */
       uint8_t RESERVED_4[4];
  __IO uint32_t _MLM_OUT_S1_IBFN_MOD_LB;           /**< offset: 0x302C */
       uint8_t RESERVED_5[216];
  __IO uint32_t _MLM_OUT_S1_IBFN_MOD;              /**< offset: 0x3108 */
       uint8_t RESERVED_6[3836];
  __IO uint32_t _FLEXSPI_S3_IBFN_MOD_ISS_BM;       /**< offset: 0x4008 */
       uint8_t RESERVED_7[252];
  __IO uint32_t _FLEXSPI_S3_IBFN_MOD;              /**< offset: 0x4108 */
       uint8_t RESERVED_8[3836];
  __IO uint32_t _ROM_S4_IBFN_MOD_ISS_BM;           /**< offset: 0x5008 */
       uint8_t RESERVED_9[24];
  __IO uint32_t _ROM_S4_IBFN_MOD2;                 /**< offset: 0x5024 */
       uint8_t RESERVED_10[4];
  __IO uint32_t _ROM_S4_IBFN_MOD_LB;               /**< offset: 0x502C */
       uint8_t RESERVED_11[216];
  __IO uint32_t _ROM_S4_IBFN_MOD;                  /**< offset: 0x5108 */
       uint8_t RESERVED_12[3836];
  __IO uint32_t _DSS_S2FN_MOD_ISS_BM;              /**< offset: 0x6008 */
       uint8_t RESERVED_13[246004];
  __IO uint32_t _CM55_M0READ_QOS;                  /**< offset: 0x42100 */
  __IO uint32_t _CM55_M0WRITE_QOS;                 /**< offset: 0x42104 */
  __IO uint32_t _CM55_M0FN_MOD;                    /**< offset: 0x42108 */
       uint8_t RESERVED_14[4084];
  __IO uint32_t _NSS_IN_M1READ_QOS;                /**< offset: 0x43100 */
  __IO uint32_t _NSS_IN_M1WRITE_QOS;               /**< offset: 0x43104 */
  __IO uint32_t _NSS_IN_M1FN_MOD;                  /**< offset: 0x43108 */
       uint8_t RESERVED_15[3864];
  __IO uint32_t _MLM_IN_FSPI_M3_IBFN_MOD2;         /**< offset: 0x44024 */
       uint8_t RESERVED_16[216];
  __IO uint32_t _MLM_IN_FSPI_M3_IBREAD_QOS;        /**< offset: 0x44100 */
  __IO uint32_t _MLM_IN_FSPI_M3_IBWRITE_QOS;       /**< offset: 0x44104 */
  __IO uint32_t _MLM_IN_FSPI_M3_IBFN_MOD;          /**< offset: 0x44108 */
       uint8_t RESERVED_17[3864];
  __IO uint32_t _MLM_IN_NSS_M4_IBFN_MOD2;          /**< offset: 0x45024 */
       uint8_t RESERVED_18[216];
  __IO uint32_t _MLM_IN_NSS_M4_IBREAD_QOS;         /**< offset: 0x45100 */
  __IO uint32_t _MLM_IN_NSS_M4_IBWRITE_QOS;        /**< offset: 0x45104 */
  __IO uint32_t _MLM_IN_NSS_M4_IBFN_MOD;           /**< offset: 0x45108 */
       uint8_t RESERVED_19[3864];
  __IO uint32_t _MLM_IN_DSS_M2_IBFN_MOD2;          /**< offset: 0x46024 */
       uint8_t RESERVED_20[216];
  __IO uint32_t _MLM_IN_DSS_M2_IBREAD_QOS;         /**< offset: 0x46100 */
  __IO uint32_t _MLM_IN_DSS_M2_IBWRITE_QOS;        /**< offset: 0x46104 */
  __IO uint32_t _MLM_IN_DSS_M2_IBFN_MOD;           /**< offset: 0x46108 */
       uint8_t RESERVED_21[4084];
  __IO uint32_t _VSS_IN_M5_IBREAD_QOS;             /**< offset: 0x47100 */
  __IO uint32_t _VSS_IN_M5_IBWRITE_QOS;            /**< offset: 0x47104 */
  __IO uint32_t _VSS_IN_M5_IBFN_MOD;               /**< offset: 0x47108 */
} NIC400_Type;

/* ----------------------------------------------------------------------------
   -- NIC400 Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NIC400_Register_Masks NIC400 Register Masks
 * @{
 */

/*! @name PERIPH_ID_4 -  */
/*! @{ */

#define NIC400_PERIPH_ID_4_PERIPH_ID_4_MASK      (0xFFU)
#define NIC400_PERIPH_ID_4_PERIPH_ID_4_SHIFT     (0U)
#define NIC400_PERIPH_ID_4_PERIPH_ID_4(x)        (((uint32_t)(((uint32_t)(x)) << NIC400_PERIPH_ID_4_PERIPH_ID_4_SHIFT)) & NIC400_PERIPH_ID_4_PERIPH_ID_4_MASK)
/*! @} */

/*! @name PERIPH_ID_5 -  */
/*! @{ */

#define NIC400_PERIPH_ID_5_PERIPH_ID_5_MASK      (0xFFU)
#define NIC400_PERIPH_ID_5_PERIPH_ID_5_SHIFT     (0U)
#define NIC400_PERIPH_ID_5_PERIPH_ID_5(x)        (((uint32_t)(((uint32_t)(x)) << NIC400_PERIPH_ID_5_PERIPH_ID_5_SHIFT)) & NIC400_PERIPH_ID_5_PERIPH_ID_5_MASK)
/*! @} */

/*! @name PERIPH_ID_6 -  */
/*! @{ */

#define NIC400_PERIPH_ID_6_PERIPH_ID_6_MASK      (0xFFU)
#define NIC400_PERIPH_ID_6_PERIPH_ID_6_SHIFT     (0U)
#define NIC400_PERIPH_ID_6_PERIPH_ID_6(x)        (((uint32_t)(((uint32_t)(x)) << NIC400_PERIPH_ID_6_PERIPH_ID_6_SHIFT)) & NIC400_PERIPH_ID_6_PERIPH_ID_6_MASK)
/*! @} */

/*! @name PERIPH_ID_7 -  */
/*! @{ */

#define NIC400_PERIPH_ID_7_PERIPH_ID_7_MASK      (0xFFU)
#define NIC400_PERIPH_ID_7_PERIPH_ID_7_SHIFT     (0U)
#define NIC400_PERIPH_ID_7_PERIPH_ID_7(x)        (((uint32_t)(((uint32_t)(x)) << NIC400_PERIPH_ID_7_PERIPH_ID_7_SHIFT)) & NIC400_PERIPH_ID_7_PERIPH_ID_7_MASK)
/*! @} */

/*! @name PERIPH_ID_0 -  */
/*! @{ */

#define NIC400_PERIPH_ID_0_PERIPH_ID_0_MASK      (0xFFU)
#define NIC400_PERIPH_ID_0_PERIPH_ID_0_SHIFT     (0U)
#define NIC400_PERIPH_ID_0_PERIPH_ID_0(x)        (((uint32_t)(((uint32_t)(x)) << NIC400_PERIPH_ID_0_PERIPH_ID_0_SHIFT)) & NIC400_PERIPH_ID_0_PERIPH_ID_0_MASK)
/*! @} */

/*! @name PERIPH_ID_1 -  */
/*! @{ */

#define NIC400_PERIPH_ID_1_PERIPH_ID_1_MASK      (0xFFU)
#define NIC400_PERIPH_ID_1_PERIPH_ID_1_SHIFT     (0U)
#define NIC400_PERIPH_ID_1_PERIPH_ID_1(x)        (((uint32_t)(((uint32_t)(x)) << NIC400_PERIPH_ID_1_PERIPH_ID_1_SHIFT)) & NIC400_PERIPH_ID_1_PERIPH_ID_1_MASK)
/*! @} */

/*! @name PERIPH_ID_2 -  */
/*! @{ */

#define NIC400_PERIPH_ID_2_PERIPH_ID_2_MASK      (0xFFU)
#define NIC400_PERIPH_ID_2_PERIPH_ID_2_SHIFT     (0U)
#define NIC400_PERIPH_ID_2_PERIPH_ID_2(x)        (((uint32_t)(((uint32_t)(x)) << NIC400_PERIPH_ID_2_PERIPH_ID_2_SHIFT)) & NIC400_PERIPH_ID_2_PERIPH_ID_2_MASK)
/*! @} */

/*! @name PERIPH_ID_3 -  */
/*! @{ */

#define NIC400_PERIPH_ID_3_CUST_MOD_NUM_MASK     (0xFU)
#define NIC400_PERIPH_ID_3_CUST_MOD_NUM_SHIFT    (0U)
#define NIC400_PERIPH_ID_3_CUST_MOD_NUM(x)       (((uint32_t)(((uint32_t)(x)) << NIC400_PERIPH_ID_3_CUST_MOD_NUM_SHIFT)) & NIC400_PERIPH_ID_3_CUST_MOD_NUM_MASK)

#define NIC400_PERIPH_ID_3_REV_AND_MASK          (0xF0U)
#define NIC400_PERIPH_ID_3_REV_AND_SHIFT         (4U)
#define NIC400_PERIPH_ID_3_REV_AND(x)            (((uint32_t)(((uint32_t)(x)) << NIC400_PERIPH_ID_3_REV_AND_SHIFT)) & NIC400_PERIPH_ID_3_REV_AND_MASK)
/*! @} */

/*! @name COMP_ID_0 -  */
/*! @{ */

#define NIC400_COMP_ID_0_COMP_ID_0_MASK          (0xFFU)
#define NIC400_COMP_ID_0_COMP_ID_0_SHIFT         (0U)
#define NIC400_COMP_ID_0_COMP_ID_0(x)            (((uint32_t)(((uint32_t)(x)) << NIC400_COMP_ID_0_COMP_ID_0_SHIFT)) & NIC400_COMP_ID_0_COMP_ID_0_MASK)
/*! @} */

/*! @name COMP_ID_1 -  */
/*! @{ */

#define NIC400_COMP_ID_1_COMP_ID_1_MASK          (0xFFU)
#define NIC400_COMP_ID_1_COMP_ID_1_SHIFT         (0U)
#define NIC400_COMP_ID_1_COMP_ID_1(x)            (((uint32_t)(((uint32_t)(x)) << NIC400_COMP_ID_1_COMP_ID_1_SHIFT)) & NIC400_COMP_ID_1_COMP_ID_1_MASK)
/*! @} */

/*! @name COMP_ID_2 -  */
/*! @{ */

#define NIC400_COMP_ID_2_COMP_ID_2_MASK          (0xFFU)
#define NIC400_COMP_ID_2_COMP_ID_2_SHIFT         (0U)
#define NIC400_COMP_ID_2_COMP_ID_2(x)            (((uint32_t)(((uint32_t)(x)) << NIC400_COMP_ID_2_COMP_ID_2_SHIFT)) & NIC400_COMP_ID_2_COMP_ID_2_MASK)
/*! @} */

/*! @name COMP_ID_3 -  */
/*! @{ */

#define NIC400_COMP_ID_3_COMP_ID_3_MASK          (0xFFU)
#define NIC400_COMP_ID_3_COMP_ID_3_SHIFT         (0U)
#define NIC400_COMP_ID_3_COMP_ID_3(x)            (((uint32_t)(((uint32_t)(x)) << NIC400_COMP_ID_3_COMP_ID_3_SHIFT)) & NIC400_COMP_ID_3_COMP_ID_3_MASK)
/*! @} */

/*! @name _NSS_OUT_S0FN_MOD_ISS_BM -  */
/*! @{ */

#define NIC400__NSS_OUT_S0FN_MOD_ISS_BM_FN_MOD_ISS_BM_MASK (0x3U)
#define NIC400__NSS_OUT_S0FN_MOD_ISS_BM_FN_MOD_ISS_BM_SHIFT (0U)
#define NIC400__NSS_OUT_S0FN_MOD_ISS_BM_FN_MOD_ISS_BM(x) (((uint32_t)(((uint32_t)(x)) << NIC400__NSS_OUT_S0FN_MOD_ISS_BM_FN_MOD_ISS_BM_SHIFT)) & NIC400__NSS_OUT_S0FN_MOD_ISS_BM_FN_MOD_ISS_BM_MASK)
/*! @} */

/*! @name _MLM_OUT_S1_IBFN_MOD_ISS_BM -  */
/*! @{ */

#define NIC400__MLM_OUT_S1_IBFN_MOD_ISS_BM_FN_MOD_ISS_BM_MASK (0x3U)
#define NIC400__MLM_OUT_S1_IBFN_MOD_ISS_BM_FN_MOD_ISS_BM_SHIFT (0U)
#define NIC400__MLM_OUT_S1_IBFN_MOD_ISS_BM_FN_MOD_ISS_BM(x) (((uint32_t)(((uint32_t)(x)) << NIC400__MLM_OUT_S1_IBFN_MOD_ISS_BM_FN_MOD_ISS_BM_SHIFT)) & NIC400__MLM_OUT_S1_IBFN_MOD_ISS_BM_FN_MOD_ISS_BM_MASK)
/*! @} */

/*! @name _MLM_OUT_S1_IBFN_MOD2 -  */
/*! @{ */

#define NIC400__MLM_OUT_S1_IBFN_MOD2_BYPASS_MERGE_MASK (0x1U)
#define NIC400__MLM_OUT_S1_IBFN_MOD2_BYPASS_MERGE_SHIFT (0U)
#define NIC400__MLM_OUT_S1_IBFN_MOD2_BYPASS_MERGE(x) (((uint32_t)(((uint32_t)(x)) << NIC400__MLM_OUT_S1_IBFN_MOD2_BYPASS_MERGE_SHIFT)) & NIC400__MLM_OUT_S1_IBFN_MOD2_BYPASS_MERGE_MASK)
/*! @} */

/*! @name _MLM_OUT_S1_IBFN_MOD_LB -  */
/*! @{ */

#define NIC400__MLM_OUT_S1_IBFN_MOD_LB_FN_MOD_LB_MASK (0x1U)
#define NIC400__MLM_OUT_S1_IBFN_MOD_LB_FN_MOD_LB_SHIFT (0U)
#define NIC400__MLM_OUT_S1_IBFN_MOD_LB_FN_MOD_LB(x) (((uint32_t)(((uint32_t)(x)) << NIC400__MLM_OUT_S1_IBFN_MOD_LB_FN_MOD_LB_SHIFT)) & NIC400__MLM_OUT_S1_IBFN_MOD_LB_FN_MOD_LB_MASK)
/*! @} */

/*! @name _MLM_OUT_S1_IBFN_MOD -  */
/*! @{ */

#define NIC400__MLM_OUT_S1_IBFN_MOD_FN_MOD_MASK  (0x3U)
#define NIC400__MLM_OUT_S1_IBFN_MOD_FN_MOD_SHIFT (0U)
#define NIC400__MLM_OUT_S1_IBFN_MOD_FN_MOD(x)    (((uint32_t)(((uint32_t)(x)) << NIC400__MLM_OUT_S1_IBFN_MOD_FN_MOD_SHIFT)) & NIC400__MLM_OUT_S1_IBFN_MOD_FN_MOD_MASK)
/*! @} */

/*! @name _FLEXSPI_S3_IBFN_MOD_ISS_BM -  */
/*! @{ */

#define NIC400__FLEXSPI_S3_IBFN_MOD_ISS_BM_FN_MOD_ISS_BM_MASK (0x3U)
#define NIC400__FLEXSPI_S3_IBFN_MOD_ISS_BM_FN_MOD_ISS_BM_SHIFT (0U)
#define NIC400__FLEXSPI_S3_IBFN_MOD_ISS_BM_FN_MOD_ISS_BM(x) (((uint32_t)(((uint32_t)(x)) << NIC400__FLEXSPI_S3_IBFN_MOD_ISS_BM_FN_MOD_ISS_BM_SHIFT)) & NIC400__FLEXSPI_S3_IBFN_MOD_ISS_BM_FN_MOD_ISS_BM_MASK)
/*! @} */

/*! @name _FLEXSPI_S3_IBFN_MOD -  */
/*! @{ */

#define NIC400__FLEXSPI_S3_IBFN_MOD_FN_MOD_MASK  (0x3U)
#define NIC400__FLEXSPI_S3_IBFN_MOD_FN_MOD_SHIFT (0U)
#define NIC400__FLEXSPI_S3_IBFN_MOD_FN_MOD(x)    (((uint32_t)(((uint32_t)(x)) << NIC400__FLEXSPI_S3_IBFN_MOD_FN_MOD_SHIFT)) & NIC400__FLEXSPI_S3_IBFN_MOD_FN_MOD_MASK)
/*! @} */

/*! @name _ROM_S4_IBFN_MOD_ISS_BM -  */
/*! @{ */

#define NIC400__ROM_S4_IBFN_MOD_ISS_BM_FN_MOD_ISS_BM_MASK (0x3U)
#define NIC400__ROM_S4_IBFN_MOD_ISS_BM_FN_MOD_ISS_BM_SHIFT (0U)
#define NIC400__ROM_S4_IBFN_MOD_ISS_BM_FN_MOD_ISS_BM(x) (((uint32_t)(((uint32_t)(x)) << NIC400__ROM_S4_IBFN_MOD_ISS_BM_FN_MOD_ISS_BM_SHIFT)) & NIC400__ROM_S4_IBFN_MOD_ISS_BM_FN_MOD_ISS_BM_MASK)
/*! @} */

/*! @name _ROM_S4_IBFN_MOD2 -  */
/*! @{ */

#define NIC400__ROM_S4_IBFN_MOD2_BYPASS_MERGE_MASK (0x1U)
#define NIC400__ROM_S4_IBFN_MOD2_BYPASS_MERGE_SHIFT (0U)
#define NIC400__ROM_S4_IBFN_MOD2_BYPASS_MERGE(x) (((uint32_t)(((uint32_t)(x)) << NIC400__ROM_S4_IBFN_MOD2_BYPASS_MERGE_SHIFT)) & NIC400__ROM_S4_IBFN_MOD2_BYPASS_MERGE_MASK)
/*! @} */

/*! @name _ROM_S4_IBFN_MOD_LB -  */
/*! @{ */

#define NIC400__ROM_S4_IBFN_MOD_LB_FN_MOD_LB_MASK (0x1U)
#define NIC400__ROM_S4_IBFN_MOD_LB_FN_MOD_LB_SHIFT (0U)
#define NIC400__ROM_S4_IBFN_MOD_LB_FN_MOD_LB(x)  (((uint32_t)(((uint32_t)(x)) << NIC400__ROM_S4_IBFN_MOD_LB_FN_MOD_LB_SHIFT)) & NIC400__ROM_S4_IBFN_MOD_LB_FN_MOD_LB_MASK)
/*! @} */

/*! @name _ROM_S4_IBFN_MOD -  */
/*! @{ */

#define NIC400__ROM_S4_IBFN_MOD_FN_MOD_MASK      (0x3U)
#define NIC400__ROM_S4_IBFN_MOD_FN_MOD_SHIFT     (0U)
#define NIC400__ROM_S4_IBFN_MOD_FN_MOD(x)        (((uint32_t)(((uint32_t)(x)) << NIC400__ROM_S4_IBFN_MOD_FN_MOD_SHIFT)) & NIC400__ROM_S4_IBFN_MOD_FN_MOD_MASK)
/*! @} */

/*! @name _DSS_S2FN_MOD_ISS_BM -  */
/*! @{ */

#define NIC400__DSS_S2FN_MOD_ISS_BM_FN_MOD_ISS_BM_MASK (0x3U)
#define NIC400__DSS_S2FN_MOD_ISS_BM_FN_MOD_ISS_BM_SHIFT (0U)
#define NIC400__DSS_S2FN_MOD_ISS_BM_FN_MOD_ISS_BM(x) (((uint32_t)(((uint32_t)(x)) << NIC400__DSS_S2FN_MOD_ISS_BM_FN_MOD_ISS_BM_SHIFT)) & NIC400__DSS_S2FN_MOD_ISS_BM_FN_MOD_ISS_BM_MASK)
/*! @} */

/*! @name _CM55_M0READ_QOS -  */
/*! @{ */

#define NIC400__CM55_M0READ_QOS_AR_QOS_MASK      (0xFU)
#define NIC400__CM55_M0READ_QOS_AR_QOS_SHIFT     (0U)
#define NIC400__CM55_M0READ_QOS_AR_QOS(x)        (((uint32_t)(((uint32_t)(x)) << NIC400__CM55_M0READ_QOS_AR_QOS_SHIFT)) & NIC400__CM55_M0READ_QOS_AR_QOS_MASK)
/*! @} */

/*! @name _CM55_M0WRITE_QOS -  */
/*! @{ */

#define NIC400__CM55_M0WRITE_QOS_AW_QOS_MASK     (0xFU)
#define NIC400__CM55_M0WRITE_QOS_AW_QOS_SHIFT    (0U)
#define NIC400__CM55_M0WRITE_QOS_AW_QOS(x)       (((uint32_t)(((uint32_t)(x)) << NIC400__CM55_M0WRITE_QOS_AW_QOS_SHIFT)) & NIC400__CM55_M0WRITE_QOS_AW_QOS_MASK)
/*! @} */

/*! @name _CM55_M0FN_MOD -  */
/*! @{ */

#define NIC400__CM55_M0FN_MOD_FN_MOD_MASK        (0x3U)
#define NIC400__CM55_M0FN_MOD_FN_MOD_SHIFT       (0U)
#define NIC400__CM55_M0FN_MOD_FN_MOD(x)          (((uint32_t)(((uint32_t)(x)) << NIC400__CM55_M0FN_MOD_FN_MOD_SHIFT)) & NIC400__CM55_M0FN_MOD_FN_MOD_MASK)
/*! @} */

/*! @name _NSS_IN_M1READ_QOS -  */
/*! @{ */

#define NIC400__NSS_IN_M1READ_QOS_AR_QOS_MASK    (0xFU)
#define NIC400__NSS_IN_M1READ_QOS_AR_QOS_SHIFT   (0U)
#define NIC400__NSS_IN_M1READ_QOS_AR_QOS(x)      (((uint32_t)(((uint32_t)(x)) << NIC400__NSS_IN_M1READ_QOS_AR_QOS_SHIFT)) & NIC400__NSS_IN_M1READ_QOS_AR_QOS_MASK)
/*! @} */

/*! @name _NSS_IN_M1WRITE_QOS -  */
/*! @{ */

#define NIC400__NSS_IN_M1WRITE_QOS_AW_QOS_MASK   (0xFU)
#define NIC400__NSS_IN_M1WRITE_QOS_AW_QOS_SHIFT  (0U)
#define NIC400__NSS_IN_M1WRITE_QOS_AW_QOS(x)     (((uint32_t)(((uint32_t)(x)) << NIC400__NSS_IN_M1WRITE_QOS_AW_QOS_SHIFT)) & NIC400__NSS_IN_M1WRITE_QOS_AW_QOS_MASK)
/*! @} */

/*! @name _NSS_IN_M1FN_MOD -  */
/*! @{ */

#define NIC400__NSS_IN_M1FN_MOD_FN_MOD_MASK      (0x3U)
#define NIC400__NSS_IN_M1FN_MOD_FN_MOD_SHIFT     (0U)
#define NIC400__NSS_IN_M1FN_MOD_FN_MOD(x)        (((uint32_t)(((uint32_t)(x)) << NIC400__NSS_IN_M1FN_MOD_FN_MOD_SHIFT)) & NIC400__NSS_IN_M1FN_MOD_FN_MOD_MASK)
/*! @} */

/*! @name _MLM_IN_FSPI_M3_IBFN_MOD2 -  */
/*! @{ */

#define NIC400__MLM_IN_FSPI_M3_IBFN_MOD2_BYPASS_MERGE_MASK (0x1U)
#define NIC400__MLM_IN_FSPI_M3_IBFN_MOD2_BYPASS_MERGE_SHIFT (0U)
#define NIC400__MLM_IN_FSPI_M3_IBFN_MOD2_BYPASS_MERGE(x) (((uint32_t)(((uint32_t)(x)) << NIC400__MLM_IN_FSPI_M3_IBFN_MOD2_BYPASS_MERGE_SHIFT)) & NIC400__MLM_IN_FSPI_M3_IBFN_MOD2_BYPASS_MERGE_MASK)
/*! @} */

/*! @name _MLM_IN_FSPI_M3_IBREAD_QOS -  */
/*! @{ */

#define NIC400__MLM_IN_FSPI_M3_IBREAD_QOS_AR_QOS_MASK (0xFU)
#define NIC400__MLM_IN_FSPI_M3_IBREAD_QOS_AR_QOS_SHIFT (0U)
#define NIC400__MLM_IN_FSPI_M3_IBREAD_QOS_AR_QOS(x) (((uint32_t)(((uint32_t)(x)) << NIC400__MLM_IN_FSPI_M3_IBREAD_QOS_AR_QOS_SHIFT)) & NIC400__MLM_IN_FSPI_M3_IBREAD_QOS_AR_QOS_MASK)
/*! @} */

/*! @name _MLM_IN_FSPI_M3_IBWRITE_QOS -  */
/*! @{ */

#define NIC400__MLM_IN_FSPI_M3_IBWRITE_QOS_AW_QOS_MASK (0xFU)
#define NIC400__MLM_IN_FSPI_M3_IBWRITE_QOS_AW_QOS_SHIFT (0U)
#define NIC400__MLM_IN_FSPI_M3_IBWRITE_QOS_AW_QOS(x) (((uint32_t)(((uint32_t)(x)) << NIC400__MLM_IN_FSPI_M3_IBWRITE_QOS_AW_QOS_SHIFT)) & NIC400__MLM_IN_FSPI_M3_IBWRITE_QOS_AW_QOS_MASK)
/*! @} */

/*! @name _MLM_IN_FSPI_M3_IBFN_MOD -  */
/*! @{ */

#define NIC400__MLM_IN_FSPI_M3_IBFN_MOD_FN_MOD_MASK (0x3U)
#define NIC400__MLM_IN_FSPI_M3_IBFN_MOD_FN_MOD_SHIFT (0U)
#define NIC400__MLM_IN_FSPI_M3_IBFN_MOD_FN_MOD(x) (((uint32_t)(((uint32_t)(x)) << NIC400__MLM_IN_FSPI_M3_IBFN_MOD_FN_MOD_SHIFT)) & NIC400__MLM_IN_FSPI_M3_IBFN_MOD_FN_MOD_MASK)
/*! @} */

/*! @name _MLM_IN_NSS_M4_IBFN_MOD2 -  */
/*! @{ */

#define NIC400__MLM_IN_NSS_M4_IBFN_MOD2_BYPASS_MERGE_MASK (0x1U)
#define NIC400__MLM_IN_NSS_M4_IBFN_MOD2_BYPASS_MERGE_SHIFT (0U)
#define NIC400__MLM_IN_NSS_M4_IBFN_MOD2_BYPASS_MERGE(x) (((uint32_t)(((uint32_t)(x)) << NIC400__MLM_IN_NSS_M4_IBFN_MOD2_BYPASS_MERGE_SHIFT)) & NIC400__MLM_IN_NSS_M4_IBFN_MOD2_BYPASS_MERGE_MASK)
/*! @} */

/*! @name _MLM_IN_NSS_M4_IBREAD_QOS -  */
/*! @{ */

#define NIC400__MLM_IN_NSS_M4_IBREAD_QOS_AR_QOS_MASK (0xFU)
#define NIC400__MLM_IN_NSS_M4_IBREAD_QOS_AR_QOS_SHIFT (0U)
#define NIC400__MLM_IN_NSS_M4_IBREAD_QOS_AR_QOS(x) (((uint32_t)(((uint32_t)(x)) << NIC400__MLM_IN_NSS_M4_IBREAD_QOS_AR_QOS_SHIFT)) & NIC400__MLM_IN_NSS_M4_IBREAD_QOS_AR_QOS_MASK)
/*! @} */

/*! @name _MLM_IN_NSS_M4_IBWRITE_QOS -  */
/*! @{ */

#define NIC400__MLM_IN_NSS_M4_IBWRITE_QOS_AW_QOS_MASK (0xFU)
#define NIC400__MLM_IN_NSS_M4_IBWRITE_QOS_AW_QOS_SHIFT (0U)
#define NIC400__MLM_IN_NSS_M4_IBWRITE_QOS_AW_QOS(x) (((uint32_t)(((uint32_t)(x)) << NIC400__MLM_IN_NSS_M4_IBWRITE_QOS_AW_QOS_SHIFT)) & NIC400__MLM_IN_NSS_M4_IBWRITE_QOS_AW_QOS_MASK)
/*! @} */

/*! @name _MLM_IN_NSS_M4_IBFN_MOD -  */
/*! @{ */

#define NIC400__MLM_IN_NSS_M4_IBFN_MOD_FN_MOD_MASK (0x3U)
#define NIC400__MLM_IN_NSS_M4_IBFN_MOD_FN_MOD_SHIFT (0U)
#define NIC400__MLM_IN_NSS_M4_IBFN_MOD_FN_MOD(x) (((uint32_t)(((uint32_t)(x)) << NIC400__MLM_IN_NSS_M4_IBFN_MOD_FN_MOD_SHIFT)) & NIC400__MLM_IN_NSS_M4_IBFN_MOD_FN_MOD_MASK)
/*! @} */

/*! @name _MLM_IN_DSS_M2_IBFN_MOD2 -  */
/*! @{ */

#define NIC400__MLM_IN_DSS_M2_IBFN_MOD2_BYPASS_MERGE_MASK (0x1U)
#define NIC400__MLM_IN_DSS_M2_IBFN_MOD2_BYPASS_MERGE_SHIFT (0U)
#define NIC400__MLM_IN_DSS_M2_IBFN_MOD2_BYPASS_MERGE(x) (((uint32_t)(((uint32_t)(x)) << NIC400__MLM_IN_DSS_M2_IBFN_MOD2_BYPASS_MERGE_SHIFT)) & NIC400__MLM_IN_DSS_M2_IBFN_MOD2_BYPASS_MERGE_MASK)
/*! @} */

/*! @name _MLM_IN_DSS_M2_IBREAD_QOS -  */
/*! @{ */

#define NIC400__MLM_IN_DSS_M2_IBREAD_QOS_AR_QOS_MASK (0xFU)
#define NIC400__MLM_IN_DSS_M2_IBREAD_QOS_AR_QOS_SHIFT (0U)
#define NIC400__MLM_IN_DSS_M2_IBREAD_QOS_AR_QOS(x) (((uint32_t)(((uint32_t)(x)) << NIC400__MLM_IN_DSS_M2_IBREAD_QOS_AR_QOS_SHIFT)) & NIC400__MLM_IN_DSS_M2_IBREAD_QOS_AR_QOS_MASK)
/*! @} */

/*! @name _MLM_IN_DSS_M2_IBWRITE_QOS -  */
/*! @{ */

#define NIC400__MLM_IN_DSS_M2_IBWRITE_QOS_AW_QOS_MASK (0xFU)
#define NIC400__MLM_IN_DSS_M2_IBWRITE_QOS_AW_QOS_SHIFT (0U)
#define NIC400__MLM_IN_DSS_M2_IBWRITE_QOS_AW_QOS(x) (((uint32_t)(((uint32_t)(x)) << NIC400__MLM_IN_DSS_M2_IBWRITE_QOS_AW_QOS_SHIFT)) & NIC400__MLM_IN_DSS_M2_IBWRITE_QOS_AW_QOS_MASK)
/*! @} */

/*! @name _MLM_IN_DSS_M2_IBFN_MOD -  */
/*! @{ */

#define NIC400__MLM_IN_DSS_M2_IBFN_MOD_FN_MOD_MASK (0x3U)
#define NIC400__MLM_IN_DSS_M2_IBFN_MOD_FN_MOD_SHIFT (0U)
#define NIC400__MLM_IN_DSS_M2_IBFN_MOD_FN_MOD(x) (((uint32_t)(((uint32_t)(x)) << NIC400__MLM_IN_DSS_M2_IBFN_MOD_FN_MOD_SHIFT)) & NIC400__MLM_IN_DSS_M2_IBFN_MOD_FN_MOD_MASK)
/*! @} */

/*! @name _VSS_IN_M5_IBREAD_QOS -  */
/*! @{ */

#define NIC400__VSS_IN_M5_IBREAD_QOS_AR_QOS_MASK (0xFU)
#define NIC400__VSS_IN_M5_IBREAD_QOS_AR_QOS_SHIFT (0U)
#define NIC400__VSS_IN_M5_IBREAD_QOS_AR_QOS(x)   (((uint32_t)(((uint32_t)(x)) << NIC400__VSS_IN_M5_IBREAD_QOS_AR_QOS_SHIFT)) & NIC400__VSS_IN_M5_IBREAD_QOS_AR_QOS_MASK)
/*! @} */

/*! @name _VSS_IN_M5_IBWRITE_QOS -  */
/*! @{ */

#define NIC400__VSS_IN_M5_IBWRITE_QOS_AW_QOS_MASK (0xFU)
#define NIC400__VSS_IN_M5_IBWRITE_QOS_AW_QOS_SHIFT (0U)
#define NIC400__VSS_IN_M5_IBWRITE_QOS_AW_QOS(x)  (((uint32_t)(((uint32_t)(x)) << NIC400__VSS_IN_M5_IBWRITE_QOS_AW_QOS_SHIFT)) & NIC400__VSS_IN_M5_IBWRITE_QOS_AW_QOS_MASK)
/*! @} */

/*! @name _VSS_IN_M5_IBFN_MOD -  */
/*! @{ */

#define NIC400__VSS_IN_M5_IBFN_MOD_FN_MOD_MASK   (0x3U)
#define NIC400__VSS_IN_M5_IBFN_MOD_FN_MOD_SHIFT  (0U)
#define NIC400__VSS_IN_M5_IBFN_MOD_FN_MOD(x)     (((uint32_t)(((uint32_t)(x)) << NIC400__VSS_IN_M5_IBFN_MOD_FN_MOD_SHIFT)) & NIC400__VSS_IN_M5_IBFN_MOD_FN_MOD_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group NIC400_Register_Masks */


/*!
 * @}
 */ /* end of group NIC400_Peripheral_Access_Layer */


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


#endif  /* PERI_NIC400_H_ */

