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
**         CMSIS Peripheral Access Layer for ANADIG_MISC
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
 * @file ANADIG_MISC.h
 * @version 0.1
 * @date 2020-12-29
 * @brief CMSIS Peripheral Access Layer for ANADIG_MISC
 *
 * CMSIS Peripheral Access Layer for ANADIG_MISC
 */

#if !defined(ANADIG_MISC_H_)
#define ANADIG_MISC_H_                           /**< Symbol preventing repeated inclusion */

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
   -- ANADIG_MISC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ANADIG_MISC_Peripheral_Access_Layer ANADIG_MISC Peripheral Access Layer
 * @{
 */

/** ANADIG_MISC - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[2048];
  __I  uint32_t MISC_DIFPROG;                      /**< Chip Silicon Version Register, offset: 0x800 */
       uint8_t RESERVED_1[28];
  __IO uint32_t VDDSOC_AI_CTRL;                    /**< VDDSOC_AI_CTRL_REGISTER, offset: 0x820 */
       uint8_t RESERVED_2[12];
  __IO uint32_t VDDSOC_AI_WDATA;                   /**< VDDSOC_AI_WDATA_REGISTER, offset: 0x830 */
       uint8_t RESERVED_3[12];
  __I  uint32_t VDDSOC_AI_RDATA;                   /**< VDDSOC_AI_RDATA_REGISTER, offset: 0x840 */
       uint8_t RESERVED_4[12];
  __IO uint32_t VDDSOC2PLL_AI_CTRL_1G;             /**< VDDSOC2PLL_AI_CTRL_1G_REGISTER, offset: 0x850 */
       uint8_t RESERVED_5[12];
  __IO uint32_t VDDSOC2PLL_AI_WDATA_1G;            /**< VDDSOC2PLL_AI_WDATA_1G_REGISTER, offset: 0x860 */
       uint8_t RESERVED_6[12];
  __I  uint32_t VDDSOC2PLL_AI_RDATA_1G;            /**< VDDSOC2PLL_AI_RDATA_1G_REGISTER, offset: 0x870 */
       uint8_t RESERVED_7[12];
  __IO uint32_t VDDSOC2PLL_AI_CTRL_AUDIO;          /**< VDDSOC_AI_CTRL_AUDIO_REGISTER, offset: 0x880 */
       uint8_t RESERVED_8[12];
  __IO uint32_t VDDSOC2PLL_AI_WDATA_AUDIO;         /**< VDDSOC_AI_WDATA_AUDIO_REGISTER, offset: 0x890 */
       uint8_t RESERVED_9[12];
  __I  uint32_t VDDSOC2PLL_AI_RDATA_AUDIO;         /**< VDDSOC2PLL_AI_RDATA_REGISTER, offset: 0x8A0 */
       uint8_t RESERVED_10[12];
  __IO uint32_t VDDSOC2PLL_AI_CTRL_VIDEO;          /**< VDDSOC2PLL_AI_CTRL_VIDEO_REGISTER, offset: 0x8B0 */
       uint8_t RESERVED_11[12];
  __IO uint32_t VDDSOC2PLL_AI_WDATA_VIDEO;         /**< VDDSOC2PLL_AI_WDATA_VIDEO_REGISTER, offset: 0x8C0 */
       uint8_t RESERVED_12[12];
  __I  uint32_t VDDSOC2PLL_AI_RDATA_VIDEO;         /**< VDDSOC2PLL_AI_RDATA_VIDEO_REGISTER, offset: 0x8D0 */
       uint8_t RESERVED_13[12];
  __IO uint32_t VDDLPSR_AI_CTRL;                   /**< VDDSOC_AI_CTRL_REGISTER, offset: 0x8E0 */
       uint8_t RESERVED_14[12];
  __IO uint32_t VDDLPSR_AI_WDATA;                  /**< VDDLPSR_AI_WDATA_REGISTER, offset: 0x8F0 */
       uint8_t RESERVED_15[12];
  __I  uint32_t VDDLPSR_AI_RDATA_REFTOP;           /**< VDDLPSR_AI_RDATA_REFTOP_REGISTER, offset: 0x900 */
       uint8_t RESERVED_16[12];
  __I  uint32_t VDDLPSR_AI_RDATA_TMPSNS;           /**< VDDLPSR_AI_RDATA_TMPSNS_REGISTER, offset: 0x910 */
       uint8_t RESERVED_17[12];
  __IO uint32_t VDDLPSR_AI400M_CTRL;               /**< VDDLPSR_AI400M_CTRL_REGISTER, offset: 0x920 */
       uint8_t RESERVED_18[12];
  __IO uint32_t VDDLPSR_AI400M_WDATA;              /**< VDDLPSR_AI400M_WDATA_REGISTER, offset: 0x930 */
       uint8_t RESERVED_19[12];
  __I  uint32_t VDDLPSR_AI400M_RDATA;              /**< VDDLPSR_AI400M_RDATA_REGISTER, offset: 0x940 */
} ANADIG_MISC_Type;

/* ----------------------------------------------------------------------------
   -- ANADIG_MISC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ANADIG_MISC_Register_Masks ANADIG_MISC Register Masks
 * @{
 */

/*! @name MISC_DIFPROG - Chip Silicon Version Register */
/*! @{ */

#define ANADIG_MISC_MISC_DIFPROG_CHIPID_MASK     (0xFFFFFFFFU)
#define ANADIG_MISC_MISC_DIFPROG_CHIPID_SHIFT    (0U)
/*! CHIPID - Chip ID */
#define ANADIG_MISC_MISC_DIFPROG_CHIPID(x)       (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_MISC_DIFPROG_CHIPID_SHIFT)) & ANADIG_MISC_MISC_DIFPROG_CHIPID_MASK)
/*! @} */

/*! @name VDDSOC_AI_CTRL - VDDSOC_AI_CTRL_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDSOC_AI_CTRL_VDDSOC_AI_ADDR_MASK (0xFFU)
#define ANADIG_MISC_VDDSOC_AI_CTRL_VDDSOC_AI_ADDR_SHIFT (0U)
/*! VDDSOC_AI_ADDR - VDDSOC_AI_ADDR */
#define ANADIG_MISC_VDDSOC_AI_CTRL_VDDSOC_AI_ADDR(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC_AI_CTRL_VDDSOC_AI_ADDR_SHIFT)) & ANADIG_MISC_VDDSOC_AI_CTRL_VDDSOC_AI_ADDR_MASK)

#define ANADIG_MISC_VDDSOC_AI_CTRL_VDDSOC_AIRWB_MASK (0x10000U)
#define ANADIG_MISC_VDDSOC_AI_CTRL_VDDSOC_AIRWB_SHIFT (16U)
/*! VDDSOC_AIRWB - VDDSOC_AIRWB */
#define ANADIG_MISC_VDDSOC_AI_CTRL_VDDSOC_AIRWB(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC_AI_CTRL_VDDSOC_AIRWB_SHIFT)) & ANADIG_MISC_VDDSOC_AI_CTRL_VDDSOC_AIRWB_MASK)
/*! @} */

/*! @name VDDSOC_AI_WDATA - VDDSOC_AI_WDATA_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDSOC_AI_WDATA_VDDSOC_AI_WDATA_MASK (0xFFFFFFFFU)
#define ANADIG_MISC_VDDSOC_AI_WDATA_VDDSOC_AI_WDATA_SHIFT (0U)
/*! VDDSOC_AI_WDATA - VDDSOC_AI_WDATA */
#define ANADIG_MISC_VDDSOC_AI_WDATA_VDDSOC_AI_WDATA(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC_AI_WDATA_VDDSOC_AI_WDATA_SHIFT)) & ANADIG_MISC_VDDSOC_AI_WDATA_VDDSOC_AI_WDATA_MASK)
/*! @} */

/*! @name VDDSOC_AI_RDATA - VDDSOC_AI_RDATA_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDSOC_AI_RDATA_VDDSOC_AI_RDATA_MASK (0xFFFFFFFFU)
#define ANADIG_MISC_VDDSOC_AI_RDATA_VDDSOC_AI_RDATA_SHIFT (0U)
/*! VDDSOC_AI_RDATA - VDDSOC_AI_RDATA */
#define ANADIG_MISC_VDDSOC_AI_RDATA_VDDSOC_AI_RDATA(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC_AI_RDATA_VDDSOC_AI_RDATA_SHIFT)) & ANADIG_MISC_VDDSOC_AI_RDATA_VDDSOC_AI_RDATA_MASK)
/*! @} */

/*! @name VDDSOC2PLL_AI_CTRL_1G - VDDSOC2PLL_AI_CTRL_1G_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AIADDR_1G_MASK (0xFFU)
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AIADDR_1G_SHIFT (0U)
/*! VDDSOC2PLL_AIADDR_1G - VDDSOC2PLL_AIADDR_1G */
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AIADDR_1G(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AIADDR_1G_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AIADDR_1G_MASK)

#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AITOGGLE_1G_MASK (0x100U)
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AITOGGLE_1G_SHIFT (8U)
/*! VDDSOC2PLL_AITOGGLE_1G - VDDSOC2PLL_AITOGGLE_1G */
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AITOGGLE_1G(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AITOGGLE_1G_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AITOGGLE_1G_MASK)

#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AITOGGLE_DONE_1G_MASK (0x200U)
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AITOGGLE_DONE_1G_SHIFT (9U)
/*! VDDSOC2PLL_AITOGGLE_DONE_1G - VDDSOC2PLL_AITOGGLE_DONE_1G */
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AITOGGLE_DONE_1G(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AITOGGLE_DONE_1G_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AITOGGLE_DONE_1G_MASK)

#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AIRWB_1G_MASK (0x10000U)
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AIRWB_1G_SHIFT (16U)
/*! VDDSOC2PLL_AIRWB_1G - VDDSOC2PLL_AIRWB_1G */
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AIRWB_1G(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AIRWB_1G_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_CTRL_1G_VDDSOC2PLL_AIRWB_1G_MASK)
/*! @} */

/*! @name VDDSOC2PLL_AI_WDATA_1G - VDDSOC2PLL_AI_WDATA_1G_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDSOC2PLL_AI_WDATA_1G_VDDSOC2PLL_AI_WDATA_1G_MASK (0xFFFFFFFFU)
#define ANADIG_MISC_VDDSOC2PLL_AI_WDATA_1G_VDDSOC2PLL_AI_WDATA_1G_SHIFT (0U)
/*! VDDSOC2PLL_AI_WDATA_1G - VDDSOC2PLL_AI_WDATA_1G */
#define ANADIG_MISC_VDDSOC2PLL_AI_WDATA_1G_VDDSOC2PLL_AI_WDATA_1G(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_WDATA_1G_VDDSOC2PLL_AI_WDATA_1G_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_WDATA_1G_VDDSOC2PLL_AI_WDATA_1G_MASK)
/*! @} */

/*! @name VDDSOC2PLL_AI_RDATA_1G - VDDSOC2PLL_AI_RDATA_1G_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDSOC2PLL_AI_RDATA_1G_VDDSOC2PLL_AI_RDATA_1G_MASK (0xFFFFFFFFU)
#define ANADIG_MISC_VDDSOC2PLL_AI_RDATA_1G_VDDSOC2PLL_AI_RDATA_1G_SHIFT (0U)
/*! VDDSOC2PLL_AI_RDATA_1G - VDDSOC2PLL_AI_RDATA_1G */
#define ANADIG_MISC_VDDSOC2PLL_AI_RDATA_1G_VDDSOC2PLL_AI_RDATA_1G(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_RDATA_1G_VDDSOC2PLL_AI_RDATA_1G_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_RDATA_1G_VDDSOC2PLL_AI_RDATA_1G_MASK)
/*! @} */

/*! @name VDDSOC2PLL_AI_CTRL_AUDIO - VDDSOC_AI_CTRL_AUDIO_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AI_ADDR_AUDIO_MASK (0xFFU)
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AI_ADDR_AUDIO_SHIFT (0U)
/*! VDDSOC2PLL_AI_ADDR_AUDIO - VDDSOC2PLL_AI_ADDR_AUDIO */
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AI_ADDR_AUDIO(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AI_ADDR_AUDIO_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AI_ADDR_AUDIO_MASK)

#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AITOGGLE_AUDIO_MASK (0x100U)
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AITOGGLE_AUDIO_SHIFT (8U)
/*! VDDSOC2PLL_AITOGGLE_AUDIO - VDDSOC2PLL_AITOGGLE_AUDIO */
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AITOGGLE_AUDIO(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AITOGGLE_AUDIO_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AITOGGLE_AUDIO_MASK)

#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AITOGGLE_DONE_AUDIO_MASK (0x200U)
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AITOGGLE_DONE_AUDIO_SHIFT (9U)
/*! VDDSOC2PLL_AITOGGLE_DONE_AUDIO - VDDSOC2PLL_AITOGGLE_DONE_AUDIO */
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AITOGGLE_DONE_AUDIO(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AITOGGLE_DONE_AUDIO_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AITOGGLE_DONE_AUDIO_MASK)

#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AIRWB_AUDIO_MASK (0x10000U)
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AIRWB_AUDIO_SHIFT (16U)
/*! VDDSOC2PLL_AIRWB_AUDIO - VDDSOC_AIRWB */
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AIRWB_AUDIO(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AIRWB_AUDIO_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_CTRL_AUDIO_VDDSOC2PLL_AIRWB_AUDIO_MASK)
/*! @} */

/*! @name VDDSOC2PLL_AI_WDATA_AUDIO - VDDSOC_AI_WDATA_AUDIO_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDSOC2PLL_AI_WDATA_AUDIO_VDDSOC2PLL_AI_WDATA_AUDIO_MASK (0xFFFFFFFFU)
#define ANADIG_MISC_VDDSOC2PLL_AI_WDATA_AUDIO_VDDSOC2PLL_AI_WDATA_AUDIO_SHIFT (0U)
/*! VDDSOC2PLL_AI_WDATA_AUDIO - VDDSOC2PLL_AI_WDATA_AUDIO */
#define ANADIG_MISC_VDDSOC2PLL_AI_WDATA_AUDIO_VDDSOC2PLL_AI_WDATA_AUDIO(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_WDATA_AUDIO_VDDSOC2PLL_AI_WDATA_AUDIO_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_WDATA_AUDIO_VDDSOC2PLL_AI_WDATA_AUDIO_MASK)
/*! @} */

/*! @name VDDSOC2PLL_AI_RDATA_AUDIO - VDDSOC2PLL_AI_RDATA_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDSOC2PLL_AI_RDATA_AUDIO_VDDSOC2PLL_AI_RDATA_AUDIO_MASK (0xFFFFFFFFU)
#define ANADIG_MISC_VDDSOC2PLL_AI_RDATA_AUDIO_VDDSOC2PLL_AI_RDATA_AUDIO_SHIFT (0U)
/*! VDDSOC2PLL_AI_RDATA_AUDIO - VDDSOC2PLL_AI_RDATA_AUDIO */
#define ANADIG_MISC_VDDSOC2PLL_AI_RDATA_AUDIO_VDDSOC2PLL_AI_RDATA_AUDIO(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_RDATA_AUDIO_VDDSOC2PLL_AI_RDATA_AUDIO_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_RDATA_AUDIO_VDDSOC2PLL_AI_RDATA_AUDIO_MASK)
/*! @} */

/*! @name VDDSOC2PLL_AI_CTRL_VIDEO - VDDSOC2PLL_AI_CTRL_VIDEO_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AIADDR_VIDEO_MASK (0xFFU)
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AIADDR_VIDEO_SHIFT (0U)
/*! VDDSOC2PLL_AIADDR_VIDEO - VDDSOC2PLL_AIADDR_VIDEO */
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AIADDR_VIDEO(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AIADDR_VIDEO_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AIADDR_VIDEO_MASK)

#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AITOGGLE_VIDEO_MASK (0x100U)
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AITOGGLE_VIDEO_SHIFT (8U)
/*! VDDSOC2PLL_AITOGGLE_VIDEO - VDDSOC2PLL_AITOGGLE_VIDEO */
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AITOGGLE_VIDEO(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AITOGGLE_VIDEO_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AITOGGLE_VIDEO_MASK)

#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AITOGGLE_DONE_VIDEO_MASK (0x200U)
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AITOGGLE_DONE_VIDEO_SHIFT (9U)
/*! VDDSOC2PLL_AITOGGLE_DONE_VIDEO - VDDSOC2PLL_AITOGGLE_DONE_VIDEO */
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AITOGGLE_DONE_VIDEO(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AITOGGLE_DONE_VIDEO_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AITOGGLE_DONE_VIDEO_MASK)

#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AIRWB_VIDEO_MASK (0x10000U)
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AIRWB_VIDEO_SHIFT (16U)
/*! VDDSOC2PLL_AIRWB_VIDEO - VDDSOC2PLL_AIRWB_VIDEO */
#define ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AIRWB_VIDEO(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AIRWB_VIDEO_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_CTRL_VIDEO_VDDSOC2PLL_AIRWB_VIDEO_MASK)
/*! @} */

/*! @name VDDSOC2PLL_AI_WDATA_VIDEO - VDDSOC2PLL_AI_WDATA_VIDEO_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDSOC2PLL_AI_WDATA_VIDEO_VDDSOC2PLL_AI_WDATA_VIDEO_MASK (0xFFFFFFFFU)
#define ANADIG_MISC_VDDSOC2PLL_AI_WDATA_VIDEO_VDDSOC2PLL_AI_WDATA_VIDEO_SHIFT (0U)
/*! VDDSOC2PLL_AI_WDATA_VIDEO - VDDSOC2PLL_AI_WDATA_VIDEO */
#define ANADIG_MISC_VDDSOC2PLL_AI_WDATA_VIDEO_VDDSOC2PLL_AI_WDATA_VIDEO(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_WDATA_VIDEO_VDDSOC2PLL_AI_WDATA_VIDEO_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_WDATA_VIDEO_VDDSOC2PLL_AI_WDATA_VIDEO_MASK)
/*! @} */

/*! @name VDDSOC2PLL_AI_RDATA_VIDEO - VDDSOC2PLL_AI_RDATA_VIDEO_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDSOC2PLL_AI_RDATA_VIDEO_VDDSOC2PLL_AI_RDATA_VIDEO_MASK (0xFFFFFFFFU)
#define ANADIG_MISC_VDDSOC2PLL_AI_RDATA_VIDEO_VDDSOC2PLL_AI_RDATA_VIDEO_SHIFT (0U)
/*! VDDSOC2PLL_AI_RDATA_VIDEO - VDDSOC2PLL_AI_RDATA_VIDEO */
#define ANADIG_MISC_VDDSOC2PLL_AI_RDATA_VIDEO_VDDSOC2PLL_AI_RDATA_VIDEO(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDSOC2PLL_AI_RDATA_VIDEO_VDDSOC2PLL_AI_RDATA_VIDEO_SHIFT)) & ANADIG_MISC_VDDSOC2PLL_AI_RDATA_VIDEO_VDDSOC2PLL_AI_RDATA_VIDEO_MASK)
/*! @} */

/*! @name VDDLPSR_AI_CTRL - VDDSOC_AI_CTRL_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDLPSR_AI_CTRL_VDDLPSR_AI_ADDR_MASK (0xFFU)
#define ANADIG_MISC_VDDLPSR_AI_CTRL_VDDLPSR_AI_ADDR_SHIFT (0U)
/*! VDDLPSR_AI_ADDR - VDDLPSR_AI_ADDR */
#define ANADIG_MISC_VDDLPSR_AI_CTRL_VDDLPSR_AI_ADDR(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDLPSR_AI_CTRL_VDDLPSR_AI_ADDR_SHIFT)) & ANADIG_MISC_VDDLPSR_AI_CTRL_VDDLPSR_AI_ADDR_MASK)

#define ANADIG_MISC_VDDLPSR_AI_CTRL_VDDLPSR_AIRWB_MASK (0x10000U)
#define ANADIG_MISC_VDDLPSR_AI_CTRL_VDDLPSR_AIRWB_SHIFT (16U)
/*! VDDLPSR_AIRWB - VDDLPSR_AIRWB */
#define ANADIG_MISC_VDDLPSR_AI_CTRL_VDDLPSR_AIRWB(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDLPSR_AI_CTRL_VDDLPSR_AIRWB_SHIFT)) & ANADIG_MISC_VDDLPSR_AI_CTRL_VDDLPSR_AIRWB_MASK)
/*! @} */

/*! @name VDDLPSR_AI_WDATA - VDDLPSR_AI_WDATA_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDLPSR_AI_WDATA_VDDLPSR_AI_WDATA_MASK (0xFFFFFFFFU)
#define ANADIG_MISC_VDDLPSR_AI_WDATA_VDDLPSR_AI_WDATA_SHIFT (0U)
/*! VDDLPSR_AI_WDATA - VDD_LPSR_AI_WDATA */
#define ANADIG_MISC_VDDLPSR_AI_WDATA_VDDLPSR_AI_WDATA(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDLPSR_AI_WDATA_VDDLPSR_AI_WDATA_SHIFT)) & ANADIG_MISC_VDDLPSR_AI_WDATA_VDDLPSR_AI_WDATA_MASK)
/*! @} */

/*! @name VDDLPSR_AI_RDATA_REFTOP - VDDLPSR_AI_RDATA_REFTOP_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDLPSR_AI_RDATA_REFTOP_VDDLPSR_AI_RDATA_REFTOP_MASK (0xFFFFFFFFU)
#define ANADIG_MISC_VDDLPSR_AI_RDATA_REFTOP_VDDLPSR_AI_RDATA_REFTOP_SHIFT (0U)
/*! VDDLPSR_AI_RDATA_REFTOP - VDDLPSR_AI_RDATA_REFTOP */
#define ANADIG_MISC_VDDLPSR_AI_RDATA_REFTOP_VDDLPSR_AI_RDATA_REFTOP(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDLPSR_AI_RDATA_REFTOP_VDDLPSR_AI_RDATA_REFTOP_SHIFT)) & ANADIG_MISC_VDDLPSR_AI_RDATA_REFTOP_VDDLPSR_AI_RDATA_REFTOP_MASK)
/*! @} */

/*! @name VDDLPSR_AI_RDATA_TMPSNS - VDDLPSR_AI_RDATA_TMPSNS_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDLPSR_AI_RDATA_TMPSNS_VDDLPSR_AI_RDATA_TMPSNS_MASK (0xFFFFFFFFU)
#define ANADIG_MISC_VDDLPSR_AI_RDATA_TMPSNS_VDDLPSR_AI_RDATA_TMPSNS_SHIFT (0U)
/*! VDDLPSR_AI_RDATA_TMPSNS - VDDLPSR_AI_RDATA_TMPSNS */
#define ANADIG_MISC_VDDLPSR_AI_RDATA_TMPSNS_VDDLPSR_AI_RDATA_TMPSNS(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDLPSR_AI_RDATA_TMPSNS_VDDLPSR_AI_RDATA_TMPSNS_SHIFT)) & ANADIG_MISC_VDDLPSR_AI_RDATA_TMPSNS_VDDLPSR_AI_RDATA_TMPSNS_MASK)
/*! @} */

/*! @name VDDLPSR_AI400M_CTRL - VDDLPSR_AI400M_CTRL_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AI400M_ADDR_MASK (0xFFU)
#define ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AI400M_ADDR_SHIFT (0U)
/*! VDDLPSR_AI400M_ADDR - VDDLPSR_AI400M_ADDR */
#define ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AI400M_ADDR(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AI400M_ADDR_SHIFT)) & ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AI400M_ADDR_MASK)

#define ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AITOGGLE_400M_MASK (0x100U)
#define ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AITOGGLE_400M_SHIFT (8U)
/*! VDDLPSR_AITOGGLE_400M - VDDLPSR_AITOGGLE_400M */
#define ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AITOGGLE_400M(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AITOGGLE_400M_SHIFT)) & ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AITOGGLE_400M_MASK)

#define ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AITOGGLE_DONE_400M_MASK (0x200U)
#define ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AITOGGLE_DONE_400M_SHIFT (9U)
/*! VDDLPSR_AITOGGLE_DONE_400M - VDDLPSR_AITOGGLE_DONE_400M */
#define ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AITOGGLE_DONE_400M(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AITOGGLE_DONE_400M_SHIFT)) & ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AITOGGLE_DONE_400M_MASK)

#define ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AI400M_RWB_MASK (0x10000U)
#define ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AI400M_RWB_SHIFT (16U)
/*! VDDLPSR_AI400M_RWB - VDDLPSR_AI400M_RWB */
#define ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AI400M_RWB(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AI400M_RWB_SHIFT)) & ANADIG_MISC_VDDLPSR_AI400M_CTRL_VDDLPSR_AI400M_RWB_MASK)
/*! @} */

/*! @name VDDLPSR_AI400M_WDATA - VDDLPSR_AI400M_WDATA_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDLPSR_AI400M_WDATA_VDDLPSR_AI400M_WDATA_MASK (0xFFFFFFFFU)
#define ANADIG_MISC_VDDLPSR_AI400M_WDATA_VDDLPSR_AI400M_WDATA_SHIFT (0U)
/*! VDDLPSR_AI400M_WDATA - VDDLPSR_AI400M_WDATA */
#define ANADIG_MISC_VDDLPSR_AI400M_WDATA_VDDLPSR_AI400M_WDATA(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDLPSR_AI400M_WDATA_VDDLPSR_AI400M_WDATA_SHIFT)) & ANADIG_MISC_VDDLPSR_AI400M_WDATA_VDDLPSR_AI400M_WDATA_MASK)
/*! @} */

/*! @name VDDLPSR_AI400M_RDATA - VDDLPSR_AI400M_RDATA_REGISTER */
/*! @{ */

#define ANADIG_MISC_VDDLPSR_AI400M_RDATA_VDDLPSR_AI400M_RDATA_MASK (0xFFFFFFFFU)
#define ANADIG_MISC_VDDLPSR_AI400M_RDATA_VDDLPSR_AI400M_RDATA_SHIFT (0U)
/*! VDDLPSR_AI400M_RDATA - VDDLPSR_AI400M_RDATA */
#define ANADIG_MISC_VDDLPSR_AI400M_RDATA_VDDLPSR_AI400M_RDATA(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_MISC_VDDLPSR_AI400M_RDATA_VDDLPSR_AI400M_RDATA_SHIFT)) & ANADIG_MISC_VDDLPSR_AI400M_RDATA_VDDLPSR_AI400M_RDATA_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ANADIG_MISC_Register_Masks */


/*!
 * @}
 */ /* end of group ANADIG_MISC_Peripheral_Access_Layer */


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


#endif  /* ANADIG_MISC_H_ */

