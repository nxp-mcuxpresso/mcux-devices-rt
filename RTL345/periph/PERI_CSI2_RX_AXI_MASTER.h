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
**         CMSIS Peripheral Access Layer for CSI2_RX_AXI_MASTER
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
 * @file PERI_CSI2_RX_AXI_MASTER.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for CSI2_RX_AXI_MASTER
 *
 * CMSIS Peripheral Access Layer for CSI2_RX_AXI_MASTER
 */

#if !defined(PERI_CSI2_RX_AXI_MASTER_H_)
#define PERI_CSI2_RX_AXI_MASTER_H_               /**< Symbol preventing repeated inclusion */

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
   -- CSI2_RX_AXI_MASTER Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CSI2_RX_AXI_MASTER_Peripheral_Access_Layer CSI2_RX_AXI_MASTER Peripheral Access Layer
 * @{
 */

/** CSI2_RX_AXI_MASTER - Register Layout Typedef */
typedef struct {
  __IO uint32_t AXI_MODE_0;                        /**< offset: 0x0 */
       uint8_t RESERVED_0[12];
  __IO uint32_t CFG_AXI_BUFFER_0_L;                /**< offset: 0x10 */
  __IO uint32_t CFG_AXI_BUFFER_0_H;                /**< offset: 0x14 */
  __IO uint32_t CFG_AXI_BUFFER_1_L;                /**< offset: 0x18 */
  __IO uint32_t CFG_AXI_BUFFER_1_H;                /**< offset: 0x1C */
  __IO uint32_t CFG_AXI_BUFFER_2_L;                /**< offset: 0x20 */
  __IO uint32_t CFG_AXI_BUFFER_2_H;                /**< offset: 0x24 */
  __IO uint32_t CFG_AXI_BUFFER_UPDATE;             /**< offset: 0x28 */
  __IO uint32_t CFG_AXI_CH0_STRIDE_1;              /**< offset: 0x2C */
  __IO uint32_t CFG_AXI_CH0_STRIDE_2;              /**< offset: 0x30 */
       uint8_t RESERVED_1[24];
  __IO uint32_t CFG_AXI_DT_ENABLE;                 /**< offset: 0x4C */
  __IO uint32_t AXI_IRQ_STATUS;                    /**< offset: 0x50 */
  __IO uint32_t AXI_IRQ_ENABLE;                    /**< offset: 0x54 */
  __IO uint32_t CFG_AXI_CH0_LINE_CNT;              /**< offset: 0x58 */
} CSI2_RX_AXI_MASTER_Type;

/* ----------------------------------------------------------------------------
   -- CSI2_RX_AXI_MASTER Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CSI2_RX_AXI_MASTER_Register_Masks CSI2_RX_AXI_MASTER Register Masks
 * @{
 */

/*! @name AXI_MODE_0 -  */
/*! @{ */

#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_ENABLE_MASK (0x1U)
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_ENABLE_SHIFT (0U)
/*! cfg_axi_ch0_enable - Enable for AXI channel 0. */
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_ENABLE_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_ENABLE_MASK)

#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_RGBRAW_YUV_MASK (0x2U)
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_RGBRAW_YUV_SHIFT (1U)
/*! cfg_axi_ch0_rgbraw_yuv - RGB/RAW or YUV mode setting for channel 0. */
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_RGBRAW_YUV(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_RGBRAW_YUV_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_RGBRAW_YUV_MASK)

#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_VC_MASK (0x7CU)
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_VC_SHIFT (2U)
/*! cfg_axi_ch0_vc - Virtual Channel for AXI channel 0. */
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_VC(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_VC_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_VC_MASK)

#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_YUV_PLANAR_MODE_MASK (0x180U)
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_YUV_PLANAR_MODE_SHIFT (7U)
/*! cfg_axi_ch0_yuv_planar_mode - YUV Planar mode. */
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_YUV_PLANAR_MODE(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_YUV_PLANAR_MODE_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_YUV_PLANAR_MODE_MASK)

#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_AWCACHE_MASK (0x1E00U)
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_AWCACHE_SHIFT (9U)
/*! cfg_axi_ch0_awcache - Sets the value used for the AXI awcache field in each axi write transaction for channel 0. */
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_AWCACHE(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_AWCACHE_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_AWCACHE_MASK)

#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_YUV422_TO_YUV420_MASK (0x2000U)
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_YUV422_TO_YUV420_SHIFT (13U)
/*! cfg_axi_ch0_yuv422_to_yuv420 - Enable conversion of yuv422 8 and 10 bit types for channel 0. */
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_YUV422_TO_YUV420(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_YUV422_TO_YUV420_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_YUV422_TO_YUV420_MASK)

#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_PKT_HDR_EN_MASK (0x4000U)
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_PKT_HDR_EN_SHIFT (14U)
/*! cfg_axi_ch0_pkt_hdr_en - Enable writing the CSI-2 packet header information to AXI target memory for channel 0. */
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_PKT_HDR_EN(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_PKT_HDR_EN_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_PKT_HDR_EN_MASK)

#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_LINE_SWITCH_MODE_MASK (0x8000U)
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_LINE_SWITCH_MODE_SHIFT (15U)
/*! cfg_axi_ch0_line_switch_mode - Enable line mode for channel 0. */
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_LINE_SWITCH_MODE(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_LINE_SWITCH_MODE_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_LINE_SWITCH_MODE_MASK)

#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_PINGPONG_EN_MASK (0x10000U)
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_PINGPONG_EN_SHIFT (16U)
/*! cfg_axi_ch0_pingpong_en - Enable ping-pong buffer mode for channel 0. When set, hardware
 *    alternates between buffer address slots [0] and [1] on each frame start. Pre-load both slots via two
 *    cfg_axi_buffer_update_wr_notify events before enabling.
 */
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_PINGPONG_EN(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_PINGPONG_EN_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_MODE_0_CFG_AXI_CH0_PINGPONG_EN_MASK)

#define CSI2_RX_AXI_MASTER_AXI_MODE_0_RESERVED_31_17_MASK (0xFFFE0000U)
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_RESERVED_31_17_SHIFT (17U)
#define CSI2_RX_AXI_MASTER_AXI_MODE_0_RESERVED_31_17(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_MODE_0_RESERVED_31_17_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_MODE_0_RESERVED_31_17_MASK)
/*! @} */

/*! @name CFG_AXI_BUFFER_0_L -  */
/*! @{ */

#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_0_L_CFG_AXI_BUFFER_0_L_MASK (0xFFFFFFFFU)
#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_0_L_CFG_AXI_BUFFER_0_L_SHIFT (0U)
/*! cfg_axi_buffer_0_l - Lower address for target buffer 0. */
#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_0_L_CFG_AXI_BUFFER_0_L(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_0_L_CFG_AXI_BUFFER_0_L_SHIFT)) & CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_0_L_CFG_AXI_BUFFER_0_L_MASK)
/*! @} */

/*! @name CFG_AXI_BUFFER_0_H -  */
/*! @{ */

#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_0_H_CFG_AXI_BUFFER_0_H_MASK (0xFFFFFFFFU)
#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_0_H_CFG_AXI_BUFFER_0_H_SHIFT (0U)
/*! cfg_axi_buffer_0_h - upper address for target buffer 0. */
#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_0_H_CFG_AXI_BUFFER_0_H(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_0_H_CFG_AXI_BUFFER_0_H_SHIFT)) & CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_0_H_CFG_AXI_BUFFER_0_H_MASK)
/*! @} */

/*! @name CFG_AXI_BUFFER_1_L -  */
/*! @{ */

#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_1_L_CFG_AXI_BUFFER_1_L_MASK (0xFFFFFFFFU)
#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_1_L_CFG_AXI_BUFFER_1_L_SHIFT (0U)
/*! cfg_axi_buffer_1_l - Lower address for target buffer 1. */
#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_1_L_CFG_AXI_BUFFER_1_L(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_1_L_CFG_AXI_BUFFER_1_L_SHIFT)) & CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_1_L_CFG_AXI_BUFFER_1_L_MASK)
/*! @} */

/*! @name CFG_AXI_BUFFER_1_H -  */
/*! @{ */

#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_1_H_CFG_AXI_BUFFER_1_H_MASK (0xFFFFFFFFU)
#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_1_H_CFG_AXI_BUFFER_1_H_SHIFT (0U)
/*! cfg_axi_buffer_1_h - upper address for target buffer 1. */
#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_1_H_CFG_AXI_BUFFER_1_H(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_1_H_CFG_AXI_BUFFER_1_H_SHIFT)) & CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_1_H_CFG_AXI_BUFFER_1_H_MASK)
/*! @} */

/*! @name CFG_AXI_BUFFER_2_L -  */
/*! @{ */

#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_2_L_CFG_AXI_BUFFER_2_L_MASK (0xFFFFFFFFU)
#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_2_L_CFG_AXI_BUFFER_2_L_SHIFT (0U)
/*! cfg_axi_buffer_2_l - Lower address for target buffer 2. */
#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_2_L_CFG_AXI_BUFFER_2_L(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_2_L_CFG_AXI_BUFFER_2_L_SHIFT)) & CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_2_L_CFG_AXI_BUFFER_2_L_MASK)
/*! @} */

/*! @name CFG_AXI_BUFFER_2_H -  */
/*! @{ */

#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_2_H_CFG_AXI_BUFFER_2_H_MASK (0xFFFFFFFFU)
#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_2_H_CFG_AXI_BUFFER_2_H_SHIFT (0U)
/*! cfg_axi_buffer_2_h - upper address for target buffer 2. */
#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_2_H_CFG_AXI_BUFFER_2_H(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_2_H_CFG_AXI_BUFFER_2_H_SHIFT)) & CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_2_H_CFG_AXI_BUFFER_2_H_MASK)
/*! @} */

/*! @name CFG_AXI_BUFFER_UPDATE -  */
/*! @{ */

#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_UPDATE_CFG_AXI_BUFFER_UPDATE_MASK (0x3U)
#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_UPDATE_CFG_AXI_BUFFER_UPDATE_SHIFT (0U)
/*! cfg_axi_buffer_update - Writes the values of the CFG_AXI_BUFFER_x_L/H registers to the selected channel buffers. */
#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_UPDATE_CFG_AXI_BUFFER_UPDATE(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_UPDATE_CFG_AXI_BUFFER_UPDATE_SHIFT)) & CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_UPDATE_CFG_AXI_BUFFER_UPDATE_MASK)

#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_UPDATE_RESERVED_31_2_MASK (0xFFFFFFFCU)
#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_UPDATE_RESERVED_31_2_SHIFT (2U)
#define CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_UPDATE_RESERVED_31_2(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_UPDATE_RESERVED_31_2_SHIFT)) & CSI2_RX_AXI_MASTER_CFG_AXI_BUFFER_UPDATE_RESERVED_31_2_MASK)
/*! @} */

/*! @name CFG_AXI_CH0_STRIDE_1 -  */
/*! @{ */

#define CSI2_RX_AXI_MASTER_CFG_AXI_CH0_STRIDE_1_CFG_AXI_CH0_STRIDE_1_MASK (0xFFFFFFFFU)
#define CSI2_RX_AXI_MASTER_CFG_AXI_CH0_STRIDE_1_CFG_AXI_CH0_STRIDE_1_SHIFT (0U)
/*! cfg_axi_ch0_stride_1 - The stride value used to calculate the Ch 0 destination start address for
 *    the next video line in packed mode, and for the Y buffer in planar and semi-planar modes.
 */
#define CSI2_RX_AXI_MASTER_CFG_AXI_CH0_STRIDE_1_CFG_AXI_CH0_STRIDE_1(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_CFG_AXI_CH0_STRIDE_1_CFG_AXI_CH0_STRIDE_1_SHIFT)) & CSI2_RX_AXI_MASTER_CFG_AXI_CH0_STRIDE_1_CFG_AXI_CH0_STRIDE_1_MASK)
/*! @} */

/*! @name CFG_AXI_CH0_STRIDE_2 -  */
/*! @{ */

#define CSI2_RX_AXI_MASTER_CFG_AXI_CH0_STRIDE_2_CFG_AXI_CH0_STRIDE_2_MASK (0xFFFFFFFFU)
#define CSI2_RX_AXI_MASTER_CFG_AXI_CH0_STRIDE_2_CFG_AXI_CH0_STRIDE_2_SHIFT (0U)
/*! cfg_axi_ch0_stride_2 - The stride value used to calculate the Ch 0 destination start address for
 *    the UV buffer in semi-planar mode, and both U & V buffers in planar mode for the next video
 *    line.
 */
#define CSI2_RX_AXI_MASTER_CFG_AXI_CH0_STRIDE_2_CFG_AXI_CH0_STRIDE_2(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_CFG_AXI_CH0_STRIDE_2_CFG_AXI_CH0_STRIDE_2_SHIFT)) & CSI2_RX_AXI_MASTER_CFG_AXI_CH0_STRIDE_2_CFG_AXI_CH0_STRIDE_2_MASK)
/*! @} */

/*! @name CFG_AXI_DT_ENABLE -  */
/*! @{ */

#define CSI2_RX_AXI_MASTER_CFG_AXI_DT_ENABLE_CFG_AXI_DT_ENABLE_MASK (0xFFFFFFFU)
#define CSI2_RX_AXI_MASTER_CFG_AXI_DT_ENABLE_CFG_AXI_DT_ENABLE_SHIFT (0U)
/*! cfg_axi_dt_enable - axi long data type enables for packets to be packed into AXI memory. */
#define CSI2_RX_AXI_MASTER_CFG_AXI_DT_ENABLE_CFG_AXI_DT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_CFG_AXI_DT_ENABLE_CFG_AXI_DT_ENABLE_SHIFT)) & CSI2_RX_AXI_MASTER_CFG_AXI_DT_ENABLE_CFG_AXI_DT_ENABLE_MASK)

#define CSI2_RX_AXI_MASTER_CFG_AXI_DT_ENABLE_RESERVED_31_28_MASK (0xF0000000U)
#define CSI2_RX_AXI_MASTER_CFG_AXI_DT_ENABLE_RESERVED_31_28_SHIFT (28U)
#define CSI2_RX_AXI_MASTER_CFG_AXI_DT_ENABLE_RESERVED_31_28(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_CFG_AXI_DT_ENABLE_RESERVED_31_28_SHIFT)) & CSI2_RX_AXI_MASTER_CFG_AXI_DT_ENABLE_RESERVED_31_28_MASK)
/*! @} */

/*! @name AXI_IRQ_STATUS -  */
/*! @{ */

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_0_MASK (0x1U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_0_SHIFT (0U)
/*! axi_irq_status_0 - IRQ assertion indicates a SOF packet has been received for channel 0 This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_0(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_0_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_0_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_1_MASK (0x2U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_1_SHIFT (1U)
/*! axi_irq_status_1 - IRQ_assertion indicates an EOF packet has been received for channel 0 This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_1(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_1_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_1_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_2_MASK (0x4U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_2_SHIFT (2U)
/*! axi_irq_status_2 - IRQ assertion indicates a SOF packet has been received for channel 1 This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_2(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_2_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_2_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_3_MASK (0x8U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_3_SHIFT (3U)
/*! axi_irq_status_3 - IRQ assertion indicates an EOF packet has been received for channel 1 This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_3(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_3_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_3_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_4_MASK (0x10U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_4_SHIFT (4U)
/*! axi_irq_status_4 - IRQ assertion indicates a SOF packet has been received for channel 2 This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_4(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_4_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_4_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_5_MASK (0x20U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_5_SHIFT (5U)
/*! axi_irq_status_5 - IRQ assertion indicates an EOF packet has been received for channel 2 This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_5(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_5_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_5_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_6_MASK (0x40U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_6_SHIFT (6U)
/*! axi_irq_status_6 - IRQ_assertion indicates a SOF packet has been received for channel 3 This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_6(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_6_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_6_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_7_MASK (0x80U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_7_SHIFT (7U)
/*! axi_irq_status_7 - IRQ assertion indicates an EOF packet has been received for channel 3 This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_7(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_7_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_7_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_8_MASK (0x100U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_8_SHIFT (8U)
/*! axi_irq_status_8 - IRQ assertion indicates an underflow in the axi ch0 pointer buffer This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_8(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_8_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_8_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_9_MASK (0x200U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_9_SHIFT (9U)
/*! axi_irq_status_9 - IRQ assertion indicates an underflow in the axi ch1 pointer buffer This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_9(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_9_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_9_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_10_MASK (0x400U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_10_SHIFT (10U)
/*! axi_irq_status_10 - IRQ assertion indicates an underflow in the axi ch2 pointer buffer This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_10(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_10_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_10_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_11_MASK (0x800U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_11_SHIFT (11U)
/*! axi_irq_status_11 - IRQ assertion indicates an underflow in the axi ch3 pointer buffer This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_11(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_11_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_11_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_12_MASK (0x1000U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_12_SHIFT (12U)
/*! axi_irq_status_12 - IRQ assertion indicates an overflow in the AXI FIFO storing the CSI-2 packet
 *    This field is referenced to clock "core_clk".
 */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_12(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_12_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_12_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_13_MASK (0x2000U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_13_SHIFT (13U)
/*! axi_irq_status_13 - IRQ assertion indicates an overflow in the axi ch0 pointer buffer. This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_13(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_13_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_13_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_14_MASK (0x4000U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_14_SHIFT (14U)
/*! axi_irq_status_14 - IRQ assertion indicates an overflow in the axi ch1 pointer buffer. This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_14(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_14_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_14_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_15_MASK (0x8000U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_15_SHIFT (15U)
/*! axi_irq_status_15 - IRQ assertion indicates an overflow in the axi ch2 pointer buffer. This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_15(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_15_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_15_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_16_MASK (0x10000U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_16_SHIFT (16U)
/*! axi_irq_status_16 - IRQ assertion indicates an overflow in the axi ch3 pointer buffer. This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_16(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_16_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_16_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_17_MASK (0x20000U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_17_SHIFT (17U)
/*! axi_irq_status_17 - IRQ assertion indicates a line count event has occurred for channel 0. This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_17(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_17_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_17_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_18_MASK (0x40000U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_18_SHIFT (18U)
/*! axi_irq_status_18 - IRQ assertion indicates a line count event has occurred for channel 1. This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_18(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_18_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_18_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_19_MASK (0x80000U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_19_SHIFT (19U)
/*! axi_irq_status_19 - IRQ assertion indicates a line count event has occurred for channel 2. This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_19(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_19_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_19_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_20_MASK (0x100000U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_20_SHIFT (20U)
/*! axi_irq_status_20 - IRQ assertion indicates a line count event has occurred for channel 3. This field is referenced to clock "core_clk". */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_20(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_20_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_AXI_IRQ_STATUS_20_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_RESERVED_31_21_MASK (0xFFE00000U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_RESERVED_31_21_SHIFT (21U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_RESERVED_31_21(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_RESERVED_31_21_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_STATUS_RESERVED_31_21_MASK)
/*! @} */

/*! @name AXI_IRQ_ENABLE -  */
/*! @{ */

#define CSI2_RX_AXI_MASTER_AXI_IRQ_ENABLE_AXI_IRQ_ENABLE_MASK (0x1FFFFFU)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_ENABLE_AXI_IRQ_ENABLE_SHIFT (0U)
/*! axi_irq_enable - axi irq mask. */
#define CSI2_RX_AXI_MASTER_AXI_IRQ_ENABLE_AXI_IRQ_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_ENABLE_AXI_IRQ_ENABLE_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_ENABLE_AXI_IRQ_ENABLE_MASK)

#define CSI2_RX_AXI_MASTER_AXI_IRQ_ENABLE_RESERVED_31_21_MASK (0xFFE00000U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_ENABLE_RESERVED_31_21_SHIFT (21U)
#define CSI2_RX_AXI_MASTER_AXI_IRQ_ENABLE_RESERVED_31_21(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_AXI_IRQ_ENABLE_RESERVED_31_21_SHIFT)) & CSI2_RX_AXI_MASTER_AXI_IRQ_ENABLE_RESERVED_31_21_MASK)
/*! @} */

/*! @name CFG_AXI_CH0_LINE_CNT -  */
/*! @{ */

#define CSI2_RX_AXI_MASTER_CFG_AXI_CH0_LINE_CNT_CFG_AXI_CH0_LINE_CNT_MASK (0xFFFFU)
#define CSI2_RX_AXI_MASTER_CFG_AXI_CH0_LINE_CNT_CFG_AXI_CH0_LINE_CNT_SHIFT (0U)
/*! cfg_axi_ch0_line_cnt - The line count setting for channel 0 when in line switch mode. */
#define CSI2_RX_AXI_MASTER_CFG_AXI_CH0_LINE_CNT_CFG_AXI_CH0_LINE_CNT(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_CFG_AXI_CH0_LINE_CNT_CFG_AXI_CH0_LINE_CNT_SHIFT)) & CSI2_RX_AXI_MASTER_CFG_AXI_CH0_LINE_CNT_CFG_AXI_CH0_LINE_CNT_MASK)

#define CSI2_RX_AXI_MASTER_CFG_AXI_CH0_LINE_CNT_RESERVED_31_16_MASK (0xFFFF0000U)
#define CSI2_RX_AXI_MASTER_CFG_AXI_CH0_LINE_CNT_RESERVED_31_16_SHIFT (16U)
#define CSI2_RX_AXI_MASTER_CFG_AXI_CH0_LINE_CNT_RESERVED_31_16(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_AXI_MASTER_CFG_AXI_CH0_LINE_CNT_RESERVED_31_16_SHIFT)) & CSI2_RX_AXI_MASTER_CFG_AXI_CH0_LINE_CNT_RESERVED_31_16_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group CSI2_RX_AXI_MASTER_Register_Masks */


/*!
 * @}
 */ /* end of group CSI2_RX_AXI_MASTER_Peripheral_Access_Layer */


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


#endif  /* PERI_CSI2_RX_AXI_MASTER_H_ */

