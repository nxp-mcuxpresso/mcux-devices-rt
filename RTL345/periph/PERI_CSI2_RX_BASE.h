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
**         CMSIS Peripheral Access Layer for CSI2_RX_BASE
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
 * @file PERI_CSI2_RX_BASE.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for CSI2_RX_BASE
 *
 * CMSIS Peripheral Access Layer for CSI2_RX_BASE
 */

#if !defined(PERI_CSI2_RX_BASE_H_)
#define PERI_CSI2_RX_BASE_H_                     /**< Symbol preventing repeated inclusion */

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
   -- CSI2_RX_BASE Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CSI2_RX_BASE_Peripheral_Access_Layer CSI2_RX_BASE Peripheral Access Layer
 * @{
 */

/** CSI2_RX_BASE - Register Layout Typedef */
typedef struct {
  __IO uint32_t CFG_MODE;                          /**< offset: 0x0 */
  __IO uint32_t CFG_FLUSH_COUNT;                   /**< offset: 0x4 */
  __IO uint32_t CFG_WATCHDOG_COUNT;                /**< offset: 0x8 */
  __I  uint32_t BIT_ERR;                           /**< offset: 0xC */
  __I  uint32_t PAYLOAD_CRC;                       /**< offset: 0x10 */
  __IO uint32_t IRQ_STATUS;                        /**< offset: 0x14 */
  __IO uint32_t IRQ_ENABLE;                        /**< offset: 0x18 */
  __IO uint32_t CFG_DISABLE_PAYLOAD_0;             /**< offset: 0x1C */
  __IO uint32_t CFG_DISABLE_PAYLOAD_1;             /**< offset: 0x20 */
  __IO uint32_t CFG_RX_USERDEF_DT_0;               /**< offset: 0x24 */
  __IO uint32_t CFG_RX_USERDEF_DT_1;               /**< offset: 0x28 */
  __IO uint32_t CFG_RX_GENERIC_DT_MAP;             /**< offset: 0x2C */
  __IO uint32_t CLOCK_LANE;                        /**< offset: 0x30 */
  __IO uint32_t LANE_0;                            /**< offset: 0x34 */
} CSI2_RX_BASE_Type;

/* ----------------------------------------------------------------------------
   -- CSI2_RX_BASE Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CSI2_RX_BASE_Register_Masks CSI2_RX_BASE Register Masks
 * @{
 */

/*! @name CFG_MODE -  */
/*! @{ */

#define CSI2_RX_BASE_CFG_MODE_CFG_NUM_LANES_MASK (0xFU)
#define CSI2_RX_BASE_CFG_MODE_CFG_NUM_LANES_SHIFT (0U)
/*! cfg_num_lanes - Sets the number of active lanes that are to be used for receiving data. */
#define CSI2_RX_BASE_CFG_MODE_CFG_NUM_LANES(x)   (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_MODE_CFG_NUM_LANES_SHIFT)) & CSI2_RX_BASE_CFG_MODE_CFG_NUM_LANES_MASK)

#define CSI2_RX_BASE_CFG_MODE_RESERVED_5_4_MASK  (0x30U)
#define CSI2_RX_BASE_CFG_MODE_RESERVED_5_4_SHIFT (4U)
#define CSI2_RX_BASE_CFG_MODE_RESERVED_5_4(x)    (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_MODE_RESERVED_5_4_SHIFT)) & CSI2_RX_BASE_CFG_MODE_RESERVED_5_4_MASK)

#define CSI2_RX_BASE_CFG_MODE_CFG_PPI_16_EN_MASK (0x40U)
#define CSI2_RX_BASE_CFG_MODE_CFG_PPI_16_EN_SHIFT (6U)
/*! cfg_ppi_16_en - Select either PPI_16 mode with up to four lanes or 8 bit mode with up to eight
 *    lanes. Must be set for C-PHY support. See the CSI-2 User Guide description for input
 *    cfg_ppi_16_en for additional information.
 */
#define CSI2_RX_BASE_CFG_MODE_CFG_PPI_16_EN(x)   (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_MODE_CFG_PPI_16_EN_SHIFT)) & CSI2_RX_BASE_CFG_MODE_CFG_PPI_16_EN_MASK)

#define CSI2_RX_BASE_CFG_MODE_CFG_CPHY_EN_MASK   (0x80U)
#define CSI2_RX_BASE_CFG_MODE_CFG_CPHY_EN_SHIFT  (7U)
/*! cfg_cphy_en - Select either CPHY mode with up to four lanes or DPHY mode with up to eight lanes.
 *    See the CSI-2 User Guide description for input cfg_cphy_en for additional information.
 */
#define CSI2_RX_BASE_CFG_MODE_CFG_CPHY_EN(x)     (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_MODE_CFG_CPHY_EN_SHIFT)) & CSI2_RX_BASE_CFG_MODE_CFG_CPHY_EN_MASK)

#define CSI2_RX_BASE_CFG_MODE_CFG_VCX_EN_MASK    (0x100U)
#define CSI2_RX_BASE_CFG_MODE_CFG_VCX_EN_SHIFT   (8U)
/*! cfg_vcx_en - Enables Virtual Channel Extension (VCX) which number of virtual channels to 16 for
 *    D-PHY and 32 for C-PHY. See the CSI-2 User Guide description for input cfg_cphy_en for
 *    additional information.
 */
#define CSI2_RX_BASE_CFG_MODE_CFG_VCX_EN(x)      (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_MODE_CFG_VCX_EN_SHIFT)) & CSI2_RX_BASE_CFG_MODE_CFG_VCX_EN_MASK)

#define CSI2_RX_BASE_CFG_MODE_CFG_PACKET_INTERFACE_EN_MASK (0x200U)
#define CSI2_RX_BASE_CFG_MODE_CFG_PACKET_INTERFACE_EN_SHIFT (9U)
/*! cfg_packet_interface_en - Selects packet interface instead of standard pixel interface. All data
 *    types are sent as bytes with no packing. See the CSI-2 User Guide description for input
 *    cfg_cphy_en for additional information.
 */
#define CSI2_RX_BASE_CFG_MODE_CFG_PACKET_INTERFACE_EN(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_MODE_CFG_PACKET_INTERFACE_EN_SHIFT)) & CSI2_RX_BASE_CFG_MODE_CFG_PACKET_INTERFACE_EN_MASK)

#define CSI2_RX_BASE_CFG_MODE_CFG_SCRAMBLE_TYPE_MASK (0x400U)
#define CSI2_RX_BASE_CFG_MODE_CFG_SCRAMBLE_TYPE_SHIFT (10U)
/*! cfg_scramble_type - If scramble mode is enabled and CPHY is enabled (cfg_cphy_en is true), This
 *    register determines if the initial scramble seed is the default, 2'b11, or a rotating initial
 *    seed.
 */
#define CSI2_RX_BASE_CFG_MODE_CFG_SCRAMBLE_TYPE(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_MODE_CFG_SCRAMBLE_TYPE_SHIFT)) & CSI2_RX_BASE_CFG_MODE_CFG_SCRAMBLE_TYPE_MASK)

#define CSI2_RX_BASE_CFG_MODE_CFG_SCRAMBLE_EN_MASK (0x800U)
#define CSI2_RX_BASE_CFG_MODE_CFG_SCRAMBLE_EN_SHIFT (11U)
/*! cfg_scramble_en - Select either scramble mode or unscramble for the RX data for the TX data.
 *    Scramble mode is a per lane scrambling function.
 */
#define CSI2_RX_BASE_CFG_MODE_CFG_SCRAMBLE_EN(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_MODE_CFG_SCRAMBLE_EN_SHIFT)) & CSI2_RX_BASE_CFG_MODE_CFG_SCRAMBLE_EN_MASK)

#define CSI2_RX_BASE_CFG_MODE_RESERVED_12_12_MASK (0x1000U)
#define CSI2_RX_BASE_CFG_MODE_RESERVED_12_12_SHIFT (12U)
#define CSI2_RX_BASE_CFG_MODE_RESERVED_12_12(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_MODE_RESERVED_12_12_SHIFT)) & CSI2_RX_BASE_CFG_MODE_RESERVED_12_12_MASK)

#define CSI2_RX_BASE_CFG_MODE_RESERVED_15_13_MASK (0xE000U)
#define CSI2_RX_BASE_CFG_MODE_RESERVED_15_13_SHIFT (13U)
#define CSI2_RX_BASE_CFG_MODE_RESERVED_15_13(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_MODE_RESERVED_15_13_SHIFT)) & CSI2_RX_BASE_CFG_MODE_RESERVED_15_13_MASK)

#define CSI2_RX_BASE_CFG_MODE_CFG_BYTE_DATA_FORMAT_MASK (0x30000U)
#define CSI2_RX_BASE_CFG_MODE_CFG_BYTE_DATA_FORMAT_SHIFT (16U)
/*! cfg_byte_data_format - For byte wide data types (RAW8, Embedded, Blank, NULL, and user defined),
 *    selects the number of bytes to send to each pixel port. See CSI-2 Controller User Guide
 *    description for additional information.
 */
#define CSI2_RX_BASE_CFG_MODE_CFG_BYTE_DATA_FORMAT(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_MODE_CFG_BYTE_DATA_FORMAT_SHIFT)) & CSI2_RX_BASE_CFG_MODE_CFG_BYTE_DATA_FORMAT_MASK)

#define CSI2_RX_BASE_CFG_MODE_RESERVED_29_18_MASK (0x3FFC0000U)
#define CSI2_RX_BASE_CFG_MODE_RESERVED_29_18_SHIFT (18U)
#define CSI2_RX_BASE_CFG_MODE_RESERVED_29_18(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_MODE_RESERVED_29_18_SHIFT)) & CSI2_RX_BASE_CFG_MODE_RESERVED_29_18_MASK)

#define CSI2_RX_BASE_CFG_MODE_CFG_BIST_DISABLE_MASK (0x40000000U)
#define CSI2_RX_BASE_CFG_MODE_CFG_BIST_DISABLE_SHIFT (30U)
/*! cfg_bist_disable - BIST disable: writing a 1 to this bit will disable BIST */
#define CSI2_RX_BASE_CFG_MODE_CFG_BIST_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_MODE_CFG_BIST_DISABLE_SHIFT)) & CSI2_RX_BASE_CFG_MODE_CFG_BIST_DISABLE_MASK)

#define CSI2_RX_BASE_CFG_MODE_BIST_START_BIT_MASK (0x80000000U)
#define CSI2_RX_BASE_CFG_MODE_BIST_START_BIT_SHIFT (31U)
/*! bist_start_bit - BIST start writing a 1 into this bit will start bist This field is referenced to clock "core_clk". */
#define CSI2_RX_BASE_CFG_MODE_BIST_START_BIT(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_MODE_BIST_START_BIT_SHIFT)) & CSI2_RX_BASE_CFG_MODE_BIST_START_BIT_MASK)
/*! @} */

/*! @name CFG_FLUSH_COUNT -  */
/*! @{ */

#define CSI2_RX_BASE_CFG_FLUSH_COUNT_CFG_FLUSH_COUNT_MASK (0xFU)
#define CSI2_RX_BASE_CFG_FLUSH_COUNT_CFG_FLUSH_COUNT_SHIFT (0U)
/*! cfg_flush_count - Count for flush counter. Number of cycles the controller waits for the FIFO to
 *    propagate writes to reads. A value of 3 works for most applications but should be set higher
 *    if core clock 10x or more of byte clock See the CSI-2 Controller User Guide descrport
 *    cfg_data_lane_en for additional information.
 */
#define CSI2_RX_BASE_CFG_FLUSH_COUNT_CFG_FLUSH_COUNT(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_FLUSH_COUNT_CFG_FLUSH_COUNT_SHIFT)) & CSI2_RX_BASE_CFG_FLUSH_COUNT_CFG_FLUSH_COUNT_MASK)

#define CSI2_RX_BASE_CFG_FLUSH_COUNT_RESERVED_31_4_MASK (0xFFFFFFF0U)
#define CSI2_RX_BASE_CFG_FLUSH_COUNT_RESERVED_31_4_SHIFT (4U)
#define CSI2_RX_BASE_CFG_FLUSH_COUNT_RESERVED_31_4(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_FLUSH_COUNT_RESERVED_31_4_SHIFT)) & CSI2_RX_BASE_CFG_FLUSH_COUNT_RESERVED_31_4_MASK)
/*! @} */

/*! @name CFG_WATCHDOG_COUNT -  */
/*! @{ */

#define CSI2_RX_BASE_CFG_WATCHDOG_COUNT_CFG_WATCHDOG_COUNT_MASK (0xFFFFU)
#define CSI2_RX_BASE_CFG_WATCHDOG_COUNT_CFG_WATCHDOG_COUNT_SHIFT (0U)
/*! cfg_watchdog_count - Count for watchdog timer */
#define CSI2_RX_BASE_CFG_WATCHDOG_COUNT_CFG_WATCHDOG_COUNT(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_WATCHDOG_COUNT_CFG_WATCHDOG_COUNT_SHIFT)) & CSI2_RX_BASE_CFG_WATCHDOG_COUNT_CFG_WATCHDOG_COUNT_MASK)

#define CSI2_RX_BASE_CFG_WATCHDOG_COUNT_RESERVED_30_16_MASK (0x7FFF0000U)
#define CSI2_RX_BASE_CFG_WATCHDOG_COUNT_RESERVED_30_16_SHIFT (16U)
#define CSI2_RX_BASE_CFG_WATCHDOG_COUNT_RESERVED_30_16(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_WATCHDOG_COUNT_RESERVED_30_16_SHIFT)) & CSI2_RX_BASE_CFG_WATCHDOG_COUNT_RESERVED_30_16_MASK)

#define CSI2_RX_BASE_CFG_WATCHDOG_COUNT_CFG_WATCHDOG_EN_MASK (0x80000000U)
#define CSI2_RX_BASE_CFG_WATCHDOG_COUNT_CFG_WATCHDOG_EN_SHIFT (31U)
/*! cfg_watchdog_en - Enable for watchdog timer */
#define CSI2_RX_BASE_CFG_WATCHDOG_COUNT_CFG_WATCHDOG_EN(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_WATCHDOG_COUNT_CFG_WATCHDOG_EN_SHIFT)) & CSI2_RX_BASE_CFG_WATCHDOG_COUNT_CFG_WATCHDOG_EN_MASK)
/*! @} */

/*! @name BIT_ERR -  */
/*! @{ */

#define CSI2_RX_BASE_BIT_ERR_BIT_ERR_MASK        (0xFFFFU)
#define CSI2_RX_BASE_BIT_ERR_BIT_ERR_SHIFT       (0U)
/*! bit_err - Captures the first Status event when either a one or two bit error occurs, crc error,
 *    or video interface errors, with only the one bit error providing position information.
 */
#define CSI2_RX_BASE_BIT_ERR_BIT_ERR(x)          (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_BIT_ERR_BIT_ERR_SHIFT)) & CSI2_RX_BASE_BIT_ERR_BIT_ERR_MASK)

#define CSI2_RX_BASE_BIT_ERR_ECC_RECEIVED_STATUS_MASK (0x3F0000U)
#define CSI2_RX_BASE_BIT_ERR_ECC_RECEIVED_STATUS_SHIFT (16U)
/*! ecc_received_status - Captures the received ECC of the last packet This field is referenced to clock "core_clk". */
#define CSI2_RX_BASE_BIT_ERR_ECC_RECEIVED_STATUS(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_BIT_ERR_ECC_RECEIVED_STATUS_SHIFT)) & CSI2_RX_BASE_BIT_ERR_ECC_RECEIVED_STATUS_MASK)

#define CSI2_RX_BASE_BIT_ERR_UNSUPPORTED_DATA_TYPE_STATUS_MASK (0x400000U)
#define CSI2_RX_BASE_BIT_ERR_UNSUPPORTED_DATA_TYPE_STATUS_SHIFT (22U)
/*! unsupported_data_type_status - Captures the assertion of the Rx Controller output unsupported_data_type This field is referenced to clock "core_clk". */
#define CSI2_RX_BASE_BIT_ERR_UNSUPPORTED_DATA_TYPE_STATUS(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_BIT_ERR_UNSUPPORTED_DATA_TYPE_STATUS_SHIFT)) & CSI2_RX_BASE_BIT_ERR_UNSUPPORTED_DATA_TYPE_STATUS_MASK)

#define CSI2_RX_BASE_BIT_ERR_EXIT_HS_ERROR_STATUS_MASK (0x800000U)
#define CSI2_RX_BASE_BIT_ERR_EXIT_HS_ERROR_STATUS_SHIFT (23U)
/*! exit_hs_error_status - Captures the assertion of the Rx Controller output exit_hs_error This field is referenced to clock "core_clk". */
#define CSI2_RX_BASE_BIT_ERR_EXIT_HS_ERROR_STATUS(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_BIT_ERR_EXIT_HS_ERROR_STATUS_SHIFT)) & CSI2_RX_BASE_BIT_ERR_EXIT_HS_ERROR_STATUS_MASK)

#define CSI2_RX_BASE_BIT_ERR_RESERVED_31_24_MASK (0xFF000000U)
#define CSI2_RX_BASE_BIT_ERR_RESERVED_31_24_SHIFT (24U)
#define CSI2_RX_BASE_BIT_ERR_RESERVED_31_24(x)   (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_BIT_ERR_RESERVED_31_24_SHIFT)) & CSI2_RX_BASE_BIT_ERR_RESERVED_31_24_MASK)
/*! @} */

/*! @name PAYLOAD_CRC -  */
/*! @{ */

#define CSI2_RX_BASE_PAYLOAD_CRC_CRC_RECEIVED_MASK (0xFFFFU)
#define CSI2_RX_BASE_PAYLOAD_CRC_CRC_RECEIVED_SHIFT (0U)
/*! crc_received - Calculated CRC from last received long packet This field is referenced to clock "core_clk". */
#define CSI2_RX_BASE_PAYLOAD_CRC_CRC_RECEIVED(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_PAYLOAD_CRC_CRC_RECEIVED_SHIFT)) & CSI2_RX_BASE_PAYLOAD_CRC_CRC_RECEIVED_MASK)

#define CSI2_RX_BASE_PAYLOAD_CRC_CRC_CALCULATED_MASK (0xFFFF0000U)
#define CSI2_RX_BASE_PAYLOAD_CRC_CRC_CALCULATED_SHIFT (16U)
/*! crc_calculated - Calculated CRC from last received long packet This field is referenced to clock "core_clk". */
#define CSI2_RX_BASE_PAYLOAD_CRC_CRC_CALCULATED(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_PAYLOAD_CRC_CRC_CALCULATED_SHIFT)) & CSI2_RX_BASE_PAYLOAD_CRC_CRC_CALCULATED_MASK)
/*! @} */

/*! @name IRQ_STATUS -  */
/*! @{ */

#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_0_MASK (0x1U)
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_0_SHIFT (0U)
/*! irq_status_0 - IRQ assertion of CRC error */
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_0(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_0_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_0_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_1_MASK (0x2U)
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_1_SHIFT (1U)
/*! irq_status_1 - IRQ_assertion of single bit ECC error */
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_1(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_1_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_1_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_2_MASK (0x4U)
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_2_SHIFT (2U)
/*! irq_status_2 - IRQ assertion of double bit ECC error */
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_2(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_2_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_2_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_3_MASK (0x8U)
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_3_SHIFT (3U)
/*! irq_status_3 - IRQ assertion of ULPS active changing */
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_3(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_3_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_3_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_4_MASK (0x10U)
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_4_SHIFT (4U)
/*! irq_status_4 - IRQ assertion of ULPS mark changing */
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_4(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_4_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_4_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_5_MASK (0x20U)
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_5_SHIFT (5U)
/*! irq_status_5 - IRQ assertion of lane error Determines state of Rx Controller irq_out output by
 *    AND-ing the irq_status[5] with corresponding IRQ_ENABLE bit and then OR-ing all the IRQ_STATUS
 *    bits together. Writing a 1 into the corresponding bit will clear that IRQ_STATUS bit
 */
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_5(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_5_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_5_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_6_MASK (0x40U)
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_6_SHIFT (6U)
/*! irq_status_6 - IRQ_assertion of watchdog error */
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_6(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_6_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_6_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_7_MASK (0x80U)
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_7_SHIFT (7U)
/*! irq_status_7 - IRQ assertion of internal error */
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_7(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_7_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_7_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_8_MASK (0x100U)
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_8_SHIFT (8U)
/*! irq_status_8 - IRQ assertion of parity error */
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_8(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_8_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_8_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_9_MASK (0x200U)
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_9_SHIFT (9U)
/*! irq_status_9 - IRQ assertion of BIST error */
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_9(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_9_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_9_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_10_MASK (0x400U)
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_10_SHIFT (10U)
/*! irq_status_10 - IRQ assertion of calibration active/cphy calibration active (if CPHY enabled) */
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_10(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_10_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_10_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_11_MASK (0x800U)
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_11_SHIFT (11U)
/*! irq_status_11 - IRQ assertion of phy_status Determines state of Rx Controller irq_out output by
 *    AND-ing the irq_status[11] with corresponding IRQ_ENABLE bit and then OR-ing all the
 *    IRQ_STATUS bits together. Writing a 1 into the corresponding bit will clear that IRQ_STATUS bit
 */
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_11(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_11_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_11_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_12_MASK (0x1000U)
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_12_SHIFT (12U)
/*! irq_status_12 - IRQ assertion of csr_parity_error */
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_12(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_12_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_12_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_13_13_MASK (0x2000U)
#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_13_13_SHIFT (13U)
#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_13_13(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_RESERVED_13_13_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_RESERVED_13_13_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_14_14_MASK (0x4000U)
#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_14_14_SHIFT (14U)
#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_14_14(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_RESERVED_14_14_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_RESERVED_14_14_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_15_MASK (0x8000U)
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_15_SHIFT (15U)
/*! irq_status_15 - IRQ assertion of crc_cphy_hdr_error */
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_15(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_15_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_15_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_16_16_MASK (0x10000U)
#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_16_16_SHIFT (16U)
#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_16_16(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_RESERVED_16_16_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_RESERVED_16_16_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_17_MASK (0x20000U)
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_17_SHIFT (17U)
/*! irq_status_17 - IRQ assertion of BIST done status. */
#define CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_17(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_17_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_IRQ_STATUS_17_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_18_18_MASK (0x40000U)
#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_18_18_SHIFT (18U)
#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_18_18(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_RESERVED_18_18_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_RESERVED_18_18_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_19_19_MASK (0x80000U)
#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_19_19_SHIFT (19U)
#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_19_19(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_RESERVED_19_19_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_RESERVED_19_19_MASK)

#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_31_20_MASK (0xFFF00000U)
#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_31_20_SHIFT (20U)
#define CSI2_RX_BASE_IRQ_STATUS_RESERVED_31_20(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_STATUS_RESERVED_31_20_SHIFT)) & CSI2_RX_BASE_IRQ_STATUS_RESERVED_31_20_MASK)
/*! @} */

/*! @name IRQ_ENABLE -  */
/*! @{ */

#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_0_MASK (0x1U)
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_0_SHIFT (0U)
/*! irq_enable_0 - IRQ enable for CRC error */
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_0(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_0_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_0_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_1_MASK (0x2U)
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_1_SHIFT (1U)
/*! irq_enable_1 - IRQ enable for single bit ECC error */
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_1(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_1_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_1_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_2_MASK (0x4U)
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_2_SHIFT (2U)
/*! irq_enable_2 - IRQ enable for double bit ECC error */
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_2(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_2_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_2_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_3_MASK (0x8U)
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_3_SHIFT (3U)
/*! irq_enable_3 - IRQ enable for ULPS active change */
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_3(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_3_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_3_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_4_MASK (0x10U)
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_4_SHIFT (4U)
/*! irq_enable_4 - IRQ enable for ULPS mark change */
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_4(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_4_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_4_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_5_MASK (0x20U)
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_5_SHIFT (5U)
/*! irq_enable_5 - IRQ enable for lane error */
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_5(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_5_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_5_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_6_MASK (0x40U)
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_6_SHIFT (6U)
/*! irq_enable_6 - IRQ_enable for watchdog error */
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_6(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_6_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_6_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_7_MASK (0x80U)
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_7_SHIFT (7U)
/*! irq_enable_7 - IRQ enable for internal error */
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_7(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_7_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_7_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_8_MASK (0x100U)
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_8_SHIFT (8U)
/*! irq_enable_8 - IRQ enable for parity error */
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_8(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_8_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_8_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_9_MASK (0x200U)
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_9_SHIFT (9U)
/*! irq_enable_9 - IRQ enable for bist error */
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_9(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_9_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_9_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_10_MASK (0x400U)
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_10_SHIFT (10U)
/*! irq_enable_10 - IRQ enable for calibration active */
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_10(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_10_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_10_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_11_MASK (0x800U)
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_11_SHIFT (11U)
/*! irq_enable_11 - IRQ enable for phy status */
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_11(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_11_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_11_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_12_MASK (0x1000U)
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_12_SHIFT (12U)
/*! irq_enable_12 - IRQ enable for CSR Parity */
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_12(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_12_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_12_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_13_13_MASK (0x2000U)
#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_13_13_SHIFT (13U)
#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_13_13(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_RESERVED_13_13_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_RESERVED_13_13_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_14_14_MASK (0x4000U)
#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_14_14_SHIFT (14U)
#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_14_14(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_RESERVED_14_14_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_RESERVED_14_14_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_15_MASK (0x8000U)
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_15_SHIFT (15U)
/*! irq_enable_15 - IRQ enable of CPHY header CRC Error */
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_15(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_15_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_15_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_16_16_MASK (0x10000U)
#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_16_16_SHIFT (16U)
#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_16_16(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_RESERVED_16_16_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_RESERVED_16_16_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_17_MASK (0x20000U)
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_17_SHIFT (17U)
/*! irq_enable_17 - IRQ enable of BIST done status */
#define CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_17(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_17_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_IRQ_ENABLE_17_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_18_18_MASK (0x40000U)
#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_18_18_SHIFT (18U)
#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_18_18(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_RESERVED_18_18_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_RESERVED_18_18_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_19_19_MASK (0x80000U)
#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_19_19_SHIFT (19U)
#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_19_19(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_RESERVED_19_19_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_RESERVED_19_19_MASK)

#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_31_20_MASK (0xFFF00000U)
#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_31_20_SHIFT (20U)
#define CSI2_RX_BASE_IRQ_ENABLE_RESERVED_31_20(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_IRQ_ENABLE_RESERVED_31_20_SHIFT)) & CSI2_RX_BASE_IRQ_ENABLE_RESERVED_31_20_MASK)
/*! @} */

/*! @name CFG_DISABLE_PAYLOAD_0 -  */
/*! @{ */

#define CSI2_RX_BASE_CFG_DISABLE_PAYLOAD_0_CFG_DISABLE_PAYLOAD_31_0_MASK (0xFFFFFFFFU)
#define CSI2_RX_BASE_CFG_DISABLE_PAYLOAD_0_CFG_DISABLE_PAYLOAD_31_0_SHIFT (0U)
/*! cfg_disable_payload_31_0 - CSI2 RX Controller cfg_diable_payload. See CSI-2 Controller User Guide description for additional information. */
#define CSI2_RX_BASE_CFG_DISABLE_PAYLOAD_0_CFG_DISABLE_PAYLOAD_31_0(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_DISABLE_PAYLOAD_0_CFG_DISABLE_PAYLOAD_31_0_SHIFT)) & CSI2_RX_BASE_CFG_DISABLE_PAYLOAD_0_CFG_DISABLE_PAYLOAD_31_0_MASK)
/*! @} */

/*! @name CFG_DISABLE_PAYLOAD_1 -  */
/*! @{ */

#define CSI2_RX_BASE_CFG_DISABLE_PAYLOAD_1_CFG_DISABLE_PAYLOAD_48_32_MASK (0x1FFFFU)
#define CSI2_RX_BASE_CFG_DISABLE_PAYLOAD_1_CFG_DISABLE_PAYLOAD_48_32_SHIFT (0U)
/*! cfg_disable_payload_48_32 - CSI2 RX Controller cfg_diable_payload. See CSI-2 Controller User Guide description for additional information. */
#define CSI2_RX_BASE_CFG_DISABLE_PAYLOAD_1_CFG_DISABLE_PAYLOAD_48_32(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_DISABLE_PAYLOAD_1_CFG_DISABLE_PAYLOAD_48_32_SHIFT)) & CSI2_RX_BASE_CFG_DISABLE_PAYLOAD_1_CFG_DISABLE_PAYLOAD_48_32_MASK)

#define CSI2_RX_BASE_CFG_DISABLE_PAYLOAD_1_RESERVED_63_49_MASK (0xFFFE0000U)
#define CSI2_RX_BASE_CFG_DISABLE_PAYLOAD_1_RESERVED_63_49_SHIFT (17U)
#define CSI2_RX_BASE_CFG_DISABLE_PAYLOAD_1_RESERVED_63_49(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_DISABLE_PAYLOAD_1_RESERVED_63_49_SHIFT)) & CSI2_RX_BASE_CFG_DISABLE_PAYLOAD_1_RESERVED_63_49_MASK)
/*! @} */

/*! @name CFG_RX_USERDEF_DT_0 -  */
/*! @{ */

#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_30H_DT_MASK (0x3FU)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_30H_DT_SHIFT (0U)
/*! cfg_userdef_30h_dt - Data type for USERDEF_30H */
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_30H_DT(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_30H_DT_SHIFT)) & CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_30H_DT_MASK)

#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_7_6_MASK (0xC0U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_7_6_SHIFT (6U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_7_6(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_7_6_SHIFT)) & CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_7_6_MASK)

#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_31H_DT_MASK (0x3F00U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_31H_DT_SHIFT (8U)
/*! cfg_userdef_31h_dt - Data type for USERDEF_31H */
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_31H_DT(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_31H_DT_SHIFT)) & CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_31H_DT_MASK)

#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_15_14_MASK (0xC000U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_15_14_SHIFT (14U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_15_14(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_15_14_SHIFT)) & CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_15_14_MASK)

#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_32H_DT_MASK (0x3F0000U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_32H_DT_SHIFT (16U)
/*! cfg_userdef_32h_dt - Data type for USERDEF_32H */
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_32H_DT(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_32H_DT_SHIFT)) & CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_32H_DT_MASK)

#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_23_22_MASK (0xC00000U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_23_22_SHIFT (22U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_23_22(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_23_22_SHIFT)) & CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_23_22_MASK)

#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_33H_DT_MASK (0x3F000000U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_33H_DT_SHIFT (24U)
/*! cfg_userdef_33h_dt - Data type for USERDEF_33H */
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_33H_DT(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_33H_DT_SHIFT)) & CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_CFG_USERDEF_33H_DT_MASK)

#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_31_30_MASK (0xC0000000U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_31_30_SHIFT (30U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_31_30(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_31_30_SHIFT)) & CSI2_RX_BASE_CFG_RX_USERDEF_DT_0_RESERVED_31_30_MASK)
/*! @} */

/*! @name CFG_RX_USERDEF_DT_1 -  */
/*! @{ */

#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_34H_DT_MASK (0x3FU)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_34H_DT_SHIFT (0U)
/*! cfg_userdef_34h_dt - Data type for USERDEF_34H */
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_34H_DT(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_34H_DT_SHIFT)) & CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_34H_DT_MASK)

#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_7_6_MASK (0xC0U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_7_6_SHIFT (6U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_7_6(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_7_6_SHIFT)) & CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_7_6_MASK)

#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_35H_DT_MASK (0x3F00U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_35H_DT_SHIFT (8U)
/*! cfg_userdef_35h_dt - Data type for USERDEF_35H */
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_35H_DT(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_35H_DT_SHIFT)) & CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_35H_DT_MASK)

#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_15_14_MASK (0xC000U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_15_14_SHIFT (14U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_15_14(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_15_14_SHIFT)) & CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_15_14_MASK)

#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_36H_DT_MASK (0x3F0000U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_36H_DT_SHIFT (16U)
/*! cfg_userdef_36h_dt - Data type for USERDEF_36H */
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_36H_DT(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_36H_DT_SHIFT)) & CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_36H_DT_MASK)

#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_23_22_MASK (0xC00000U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_23_22_SHIFT (22U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_23_22(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_23_22_SHIFT)) & CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_23_22_MASK)

#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_37H_DT_MASK (0x3F000000U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_37H_DT_SHIFT (24U)
/*! cfg_userdef_37h_dt - Data type for USERDEF_37H */
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_37H_DT(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_37H_DT_SHIFT)) & CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_CFG_USERDEF_37H_DT_MASK)

#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_31_30_MASK (0xC0000000U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_31_30_SHIFT (30U)
#define CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_31_30(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_31_30_SHIFT)) & CSI2_RX_BASE_CFG_RX_USERDEF_DT_1_RESERVED_31_30_MASK)
/*! @} */

/*! @name CFG_RX_GENERIC_DT_MAP -  */
/*! @{ */

#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_13H_DT_MASK (0x3FU)
#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_13H_DT_SHIFT (0U)
/*! cfg_generic_13h_dt - Data type for GENERIC_13H */
#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_13H_DT(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_13H_DT_SHIFT)) & CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_13H_DT_MASK)

#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_7_6_MASK (0xC0U)
#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_7_6_SHIFT (6U)
#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_7_6(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_7_6_SHIFT)) & CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_7_6_MASK)

#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_14H_DT_MASK (0x3F00U)
#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_14H_DT_SHIFT (8U)
/*! cfg_generic_14h_dt - Data type for GENERIC_14H */
#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_14H_DT(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_14H_DT_SHIFT)) & CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_14H_DT_MASK)

#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_15_14_MASK (0xC000U)
#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_15_14_SHIFT (14U)
#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_15_14(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_15_14_SHIFT)) & CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_15_14_MASK)

#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_15H_DT_MASK (0x3F0000U)
#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_15H_DT_SHIFT (16U)
/*! cfg_generic_15h_dt - Data type for GENERIC_15H */
#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_15H_DT(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_15H_DT_SHIFT)) & CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_15H_DT_MASK)

#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_23_22_MASK (0xC00000U)
#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_23_22_SHIFT (22U)
#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_23_22(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_23_22_SHIFT)) & CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_23_22_MASK)

#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_16H_DT_MASK (0x3F000000U)
#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_16H_DT_SHIFT (24U)
/*! cfg_generic_16h_dt - Data type for GENERIC_16H */
#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_16H_DT(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_16H_DT_SHIFT)) & CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_CFG_GENERIC_16H_DT_MASK)

#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_31_30_MASK (0xC0000000U)
#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_31_30_SHIFT (30U)
#define CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_31_30(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_31_30_SHIFT)) & CSI2_RX_BASE_CFG_RX_GENERIC_DT_MAP_RESERVED_31_30_MASK)
/*! @} */

/*! @name CLOCK_LANE -  */
/*! @{ */

#define CSI2_RX_BASE_CLOCK_LANE_ULPS_CLK_MARK_STATUS_MASK (0x1U)
#define CSI2_RX_BASE_CLOCK_LANE_ULPS_CLK_MARK_STATUS_SHIFT (0U)
/*! ulps_clk_mark_status - CSI2 RX ULPS status. See CSI-2 Controller User Guide description for
 *    additional information. This field is referenced to clock "core_clk".
 */
#define CSI2_RX_BASE_CLOCK_LANE_ULPS_CLK_MARK_STATUS(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CLOCK_LANE_ULPS_CLK_MARK_STATUS_SHIFT)) & CSI2_RX_BASE_CLOCK_LANE_ULPS_CLK_MARK_STATUS_MASK)

#define CSI2_RX_BASE_CLOCK_LANE_ULPS_CLK_STATUS_MASK (0x2U)
#define CSI2_RX_BASE_CLOCK_LANE_ULPS_CLK_STATUS_SHIFT (1U)
/*! ulps_clk_status - CSI2 RX ULPS status. See CSI-2 Controller User Guide description for
 *    additional information. This field is referenced to clock "core_clk".
 */
#define CSI2_RX_BASE_CLOCK_LANE_ULPS_CLK_STATUS(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CLOCK_LANE_ULPS_CLK_STATUS_SHIFT)) & CSI2_RX_BASE_CLOCK_LANE_ULPS_CLK_STATUS_MASK)

#define CSI2_RX_BASE_CLOCK_LANE_RESERVED_30_2_MASK (0x7FFFFFFCU)
#define CSI2_RX_BASE_CLOCK_LANE_RESERVED_30_2_SHIFT (2U)
#define CSI2_RX_BASE_CLOCK_LANE_RESERVED_30_2(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CLOCK_LANE_RESERVED_30_2_SHIFT)) & CSI2_RX_BASE_CLOCK_LANE_RESERVED_30_2_MASK)

#define CSI2_RX_BASE_CLOCK_LANE_CFG_CLK_LANE_EN_MASK (0x80000000U)
#define CSI2_RX_BASE_CLOCK_LANE_CFG_CLK_LANE_EN_SHIFT (31U)
/*! cfg_clk_lane_en - Forces PHY Enable_n signals to 1'b0 when register is set to 1. See the CSI-2
 *    Controller User Guide description of the input port cfg_data_lane_en for additional information.
 */
#define CSI2_RX_BASE_CLOCK_LANE_CFG_CLK_LANE_EN(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_CLOCK_LANE_CFG_CLK_LANE_EN_SHIFT)) & CSI2_RX_BASE_CLOCK_LANE_CFG_CLK_LANE_EN_MASK)
/*! @} */

/*! @name LANE_0 -  */
/*! @{ */

#define CSI2_RX_BASE_LANE_0_ULPS_MARK_STATUS_LN0_MASK (0x1U)
#define CSI2_RX_BASE_LANE_0_ULPS_MARK_STATUS_LN0_SHIFT (0U)
/*! ulps_mark_status_ln0 - CSI2 RX ULPS status. See CSI-2 Controller User Guide description for
 *    additional information. This field is referenced to clock "core_clk".
 */
#define CSI2_RX_BASE_LANE_0_ULPS_MARK_STATUS_LN0(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_ULPS_MARK_STATUS_LN0_SHIFT)) & CSI2_RX_BASE_LANE_0_ULPS_MARK_STATUS_LN0_MASK)

#define CSI2_RX_BASE_LANE_0_ULPS_STATUS_LN0_MASK (0x2U)
#define CSI2_RX_BASE_LANE_0_ULPS_STATUS_LN0_SHIFT (1U)
/*! ulps_status_ln0 - CSI2 RX ULPS status. See CSI-2 Controller User Guide description for
 *    additional information. This field is referenced to clock "core_clk".
 */
#define CSI2_RX_BASE_LANE_0_ULPS_STATUS_LN0(x)   (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_ULPS_STATUS_LN0_SHIFT)) & CSI2_RX_BASE_LANE_0_ULPS_STATUS_LN0_MASK)

#define CSI2_RX_BASE_LANE_0_STOPSTATE_STATUS_LN0_MASK (0x4U)
#define CSI2_RX_BASE_LANE_0_STOPSTATE_STATUS_LN0_SHIFT (2U)
/*! stopstate_status_ln0 - CSI2 RX PHY PPI StopState captured status from the PHY. See CSI-2
 *    Controller User Guide description for additional information. This field is referenced to clock
 *    "core_clk".
 */
#define CSI2_RX_BASE_LANE_0_STOPSTATE_STATUS_LN0(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_STOPSTATE_STATUS_LN0_SHIFT)) & CSI2_RX_BASE_LANE_0_STOPSTATE_STATUS_LN0_MASK)

#define CSI2_RX_BASE_LANE_0_SKEWCAL_STATUS_LN0_MASK (0x8U)
#define CSI2_RX_BASE_LANE_0_SKEWCAL_STATUS_LN0_SHIFT (3U)
/*! skewcal_status_ln0 - Asserted if lane currently being calibrated See CSI-2 Controller User Guide
 *    description for additional information. This field is referenced to clock "core_clk".
 */
#define CSI2_RX_BASE_LANE_0_SKEWCAL_STATUS_LN0(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_SKEWCAL_STATUS_LN0_SHIFT)) & CSI2_RX_BASE_LANE_0_SKEWCAL_STATUS_LN0_MASK)

#define CSI2_RX_BASE_LANE_0_RESERVED_7_4_MASK    (0xF0U)
#define CSI2_RX_BASE_LANE_0_RESERVED_7_4_SHIFT   (4U)
#define CSI2_RX_BASE_LANE_0_RESERVED_7_4(x)      (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_RESERVED_7_4_SHIFT)) & CSI2_RX_BASE_LANE_0_RESERVED_7_4_MASK)

#define CSI2_RX_BASE_LANE_0_RESERVED_8_8_MASK    (0x100U)
#define CSI2_RX_BASE_LANE_0_RESERVED_8_8_SHIFT   (8U)
#define CSI2_RX_BASE_LANE_0_RESERVED_8_8(x)      (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_RESERVED_8_8_SHIFT)) & CSI2_RX_BASE_LANE_0_RESERVED_8_8_MASK)

#define CSI2_RX_BASE_LANE_0_RESERVED_9_9_MASK    (0x200U)
#define CSI2_RX_BASE_LANE_0_RESERVED_9_9_SHIFT   (9U)
#define CSI2_RX_BASE_LANE_0_RESERVED_9_9(x)      (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_RESERVED_9_9_SHIFT)) & CSI2_RX_BASE_LANE_0_RESERVED_9_9_MASK)

#define CSI2_RX_BASE_LANE_0_RESERVED_10_10_MASK  (0x400U)
#define CSI2_RX_BASE_LANE_0_RESERVED_10_10_SHIFT (10U)
#define CSI2_RX_BASE_LANE_0_RESERVED_10_10(x)    (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_RESERVED_10_10_SHIFT)) & CSI2_RX_BASE_LANE_0_RESERVED_10_10_MASK)

#define CSI2_RX_BASE_LANE_0_RESERVED_11_11_MASK  (0x800U)
#define CSI2_RX_BASE_LANE_0_RESERVED_11_11_SHIFT (11U)
#define CSI2_RX_BASE_LANE_0_RESERVED_11_11(x)    (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_RESERVED_11_11_SHIFT)) & CSI2_RX_BASE_LANE_0_RESERVED_11_11_MASK)

#define CSI2_RX_BASE_LANE_0_RESERVED_12_12_MASK  (0x1000U)
#define CSI2_RX_BASE_LANE_0_RESERVED_12_12_SHIFT (12U)
#define CSI2_RX_BASE_LANE_0_RESERVED_12_12(x)    (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_RESERVED_12_12_SHIFT)) & CSI2_RX_BASE_LANE_0_RESERVED_12_12_MASK)

#define CSI2_RX_BASE_LANE_0_PPI_ERRSOTSYNCHS_LN0_MASK (0x2000U)
#define CSI2_RX_BASE_LANE_0_PPI_ERRSOTSYNCHS_LN0_SHIFT (13U)
/*! ppi_errsotsynchs_ln0 - CSI2 RX PHY PPI Errsotsynchs captured status from the PHY. See CSI-2
 *    Controller User Guide description for additional information.
 */
#define CSI2_RX_BASE_LANE_0_PPI_ERRSOTSYNCHS_LN0(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_PPI_ERRSOTSYNCHS_LN0_SHIFT)) & CSI2_RX_BASE_LANE_0_PPI_ERRSOTSYNCHS_LN0_MASK)

#define CSI2_RX_BASE_LANE_0_PPI_ERRSOTHS_LN0_MASK (0x4000U)
#define CSI2_RX_BASE_LANE_0_PPI_ERRSOTHS_LN0_SHIFT (14U)
/*! ppi_errsoths_ln0 - CSI2 RX PHY PPI ErrSotHS captured status from the PHY. See CSI-2 Controller
 *    User Guide description for additional information.
 */
#define CSI2_RX_BASE_LANE_0_PPI_ERRSOTHS_LN0(x)  (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_PPI_ERRSOTHS_LN0_SHIFT)) & CSI2_RX_BASE_LANE_0_PPI_ERRSOTHS_LN0_MASK)

#define CSI2_RX_BASE_LANE_0_RESERVED_15_15_MASK  (0x8000U)
#define CSI2_RX_BASE_LANE_0_RESERVED_15_15_SHIFT (15U)
#define CSI2_RX_BASE_LANE_0_RESERVED_15_15(x)    (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_RESERVED_15_15_SHIFT)) & CSI2_RX_BASE_LANE_0_RESERVED_15_15_MASK)

#define CSI2_RX_BASE_LANE_0_CPHY_HEADER_1_ERROR_MASK (0x10000U)
#define CSI2_RX_BASE_LANE_0_CPHY_HEADER_1_ERROR_SHIFT (16U)
/*! cphy_header_1_error - Error in CPHY header 1 for this lane. See CSI-2 Controller User Guide
 *    description for additional information. This field is referenced to clock "core_clk".
 */
#define CSI2_RX_BASE_LANE_0_CPHY_HEADER_1_ERROR(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_CPHY_HEADER_1_ERROR_SHIFT)) & CSI2_RX_BASE_LANE_0_CPHY_HEADER_1_ERROR_MASK)

#define CSI2_RX_BASE_LANE_0_CPHY_HEADER_2_ERROR_MASK (0x20000U)
#define CSI2_RX_BASE_LANE_0_CPHY_HEADER_2_ERROR_SHIFT (17U)
/*! cphy_header_2_error - Error in CPHY header 2 for this lane. See CSI-2 Controller User Guide
 *    description for additional information. This field is referenced to clock "core_clk".
 */
#define CSI2_RX_BASE_LANE_0_CPHY_HEADER_2_ERROR(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_CPHY_HEADER_2_ERROR_SHIFT)) & CSI2_RX_BASE_LANE_0_CPHY_HEADER_2_ERROR_MASK)

#define CSI2_RX_BASE_LANE_0_RESERVED_23_18_MASK  (0xFC0000U)
#define CSI2_RX_BASE_LANE_0_RESERVED_23_18_SHIFT (18U)
#define CSI2_RX_BASE_LANE_0_RESERVED_23_18(x)    (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_RESERVED_23_18_SHIFT)) & CSI2_RX_BASE_LANE_0_RESERVED_23_18_MASK)

#define CSI2_RX_BASE_LANE_0_RESERVED_25_24_MASK  (0x3000000U)
#define CSI2_RX_BASE_LANE_0_RESERVED_25_24_SHIFT (24U)
#define CSI2_RX_BASE_LANE_0_RESERVED_25_24(x)    (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_RESERVED_25_24_SHIFT)) & CSI2_RX_BASE_LANE_0_RESERVED_25_24_MASK)

#define CSI2_RX_BASE_LANE_0_RESERVED_30_26_MASK  (0x7C000000U)
#define CSI2_RX_BASE_LANE_0_RESERVED_30_26_SHIFT (26U)
#define CSI2_RX_BASE_LANE_0_RESERVED_30_26(x)    (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_RESERVED_30_26_SHIFT)) & CSI2_RX_BASE_LANE_0_RESERVED_30_26_MASK)

#define CSI2_RX_BASE_LANE_0_CFG_DATA_LANE_EN_LN0_MASK (0x80000000U)
#define CSI2_RX_BASE_LANE_0_CFG_DATA_LANE_EN_LN0_SHIFT (31U)
/*! cfg_data_lane_en_ln0 - Forces PHY Enable_n signals to 1'b0 when register is set to 1. See the
 *    CSI-2 Controller User Guide description of the input port cfg_data_lane_en for additional
 *    information.
 */
#define CSI2_RX_BASE_LANE_0_CFG_DATA_LANE_EN_LN0(x) (((uint32_t)(((uint32_t)(x)) << CSI2_RX_BASE_LANE_0_CFG_DATA_LANE_EN_LN0_SHIFT)) & CSI2_RX_BASE_LANE_0_CFG_DATA_LANE_EN_LN0_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group CSI2_RX_BASE_Register_Masks */


/*!
 * @}
 */ /* end of group CSI2_RX_BASE_Peripheral_Access_Layer */


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


#endif  /* PERI_CSI2_RX_BASE_H_ */

