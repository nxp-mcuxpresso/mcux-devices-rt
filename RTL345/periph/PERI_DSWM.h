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
**         CMSIS Peripheral Access Layer for DSWM
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
 * @file PERI_DSWM.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for DSWM
 *
 * CMSIS Peripheral Access Layer for DSWM
 */

#if !defined(PERI_DSWM_H_)
#define PERI_DSWM_H_                             /**< Symbol preventing repeated inclusion */

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
   -- DSWM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DSWM_Peripheral_Access_Layer DSWM Peripheral Access Layer
 * @{
 */

/** DSWM - Register Layout Typedef */
typedef struct {
  __IO uint32_t SWM0_00_MUX_CFG;                   /**< swm0_00 output select register, offset: 0x0 */
  __IO uint32_t SWM0_01_MUX_CFG;                   /**< swm0_01 output select register, offset: 0x4 */
  __IO uint32_t SWM0_02_MUX_CFG;                   /**< swm0_02 output select register, offset: 0x8 */
  __IO uint32_t SWM0_03_MUX_CFG;                   /**< swm0_03 output select register, offset: 0xC */
  __IO uint32_t SWM0_04_MUX_CFG;                   /**< swm0_04 output select register, offset: 0x10 */
  __IO uint32_t SWM0_05_MUX_CFG;                   /**< swm0_05 output select register, offset: 0x14 */
  __IO uint32_t SWM0_06_MUX_CFG;                   /**< swm0_06 output select register, offset: 0x18 */
  __IO uint32_t SWM0_07_MUX_CFG;                   /**< swm0_07 output select register, offset: 0x1C */
  __IO uint32_t SWM0_08_MUX_CFG;                   /**< swm0_08 output select register, offset: 0x20 */
  __IO uint32_t SWM0_09_MUX_CFG;                   /**< swm0_09 output select register, offset: 0x24 */
  __IO uint32_t SWM0_10_MUX_CFG;                   /**< swm0_10 output select register, offset: 0x28 */
  __IO uint32_t SWM0_11_MUX_CFG;                   /**< swm0_11 output select register, offset: 0x2C */
  __IO uint32_t SWM1_00_MUX_CFG;                   /**< swm1_00 output select register, offset: 0x30 */
  __IO uint32_t SWM1_01_MUX_CFG;                   /**< swm1_01 output select register, offset: 0x34 */
  __IO uint32_t SWM1_02_MUX_CFG;                   /**< swm1_02 output select register, offset: 0x38 */
  __IO uint32_t SWM1_03_MUX_CFG;                   /**< swm1_03 output select register, offset: 0x3C */
  __IO uint32_t SWM1_04_MUX_CFG;                   /**< swm1_04 output select register, offset: 0x40 */
  __IO uint32_t SWM1_05_MUX_CFG;                   /**< swm1_05 output select register, offset: 0x44 */
  __IO uint32_t SWM1_06_MUX_CFG;                   /**< swm1_06 output select register, offset: 0x48 */
  __IO uint32_t SWM1_07_MUX_CFG;                   /**< swm1_07 output select register, offset: 0x4C */
  __IO uint32_t SWM1_08_MUX_CFG;                   /**< swm1_08 output select register, offset: 0x50 */
  __IO uint32_t SWM1_09_MUX_CFG;                   /**< swm1_09 output select register, offset: 0x54 */
  __IO uint32_t SWM1_10_MUX_CFG;                   /**< swm1_10 output select register, offset: 0x58 */
  __IO uint32_t SWM1_11_MUX_CFG;                   /**< swm1_11 output select register, offset: 0x5C */
  __IO uint32_t SWM2_00_MUX_CFG;                   /**< swm2_00 output select register, offset: 0x60 */
  __IO uint32_t SWM2_01_MUX_CFG;                   /**< swm2_01 output select register, offset: 0x64 */
  __IO uint32_t SWM2_02_MUX_CFG;                   /**< swm2_02 output select register, offset: 0x68 */
  __IO uint32_t SWM2_03_MUX_CFG;                   /**< swm2_03 output select register, offset: 0x6C */
  __IO uint32_t SWM2_04_MUX_CFG;                   /**< swm2_04 output select register, offset: 0x70 */
  __IO uint32_t SWM2_05_MUX_CFG;                   /**< swm2_05 output select register, offset: 0x74 */
  __IO uint32_t SWM2_06_MUX_CFG;                   /**< swm2_06 output select register, offset: 0x78 */
  __IO uint32_t SWM2_07_MUX_CFG;                   /**< swm2_07 output select register, offset: 0x7C */
  __IO uint32_t SWM2_08_MUX_CFG;                   /**< swm2_08 output select register, offset: 0x80 */
  __IO uint32_t SWM2_09_MUX_CFG;                   /**< swm2_09 output select register, offset: 0x84 */
  __IO uint32_t SWM2_10_MUX_CFG;                   /**< swm2_10 output select register, offset: 0x88 */
  __IO uint32_t SWM2_11_MUX_CFG;                   /**< swm2_11 output select register, offset: 0x8C */
  __IO uint32_t SWM3_00_MUX_CFG;                   /**< swm3_00 output select register, offset: 0x90 */
  __IO uint32_t SWM3_01_MUX_CFG;                   /**< swm3_01 output select register, offset: 0x94 */
  __IO uint32_t SWM3_02_MUX_CFG;                   /**< swm3_02 output select register, offset: 0x98 */
  __IO uint32_t SWM3_03_MUX_CFG;                   /**< swm3_03 output select register, offset: 0x9C */
  __IO uint32_t SWM3_04_MUX_CFG;                   /**< swm3_04 output select register, offset: 0xA0 */
  __IO uint32_t SWM3_05_MUX_CFG;                   /**< swm3_05 output select register, offset: 0xA4 */
  __IO uint32_t SWM3_06_MUX_CFG;                   /**< swm3_06 output select register, offset: 0xA8 */
  __IO uint32_t SWM3_07_MUX_CFG;                   /**< swm3_07 output select register, offset: 0xAC */
  __IO uint32_t SWM3_08_MUX_CFG;                   /**< swm3_08 output select register, offset: 0xB0 */
  __IO uint32_t SWM3_09_MUX_CFG;                   /**< swm3_09 output select register, offset: 0xB4 */
  __IO uint32_t SWM3_10_MUX_CFG;                   /**< swm3_10 output select register, offset: 0xB8 */
  __IO uint32_t SWM3_11_MUX_CFG;                   /**< swm3_11 output select register, offset: 0xBC */
  __IO uint32_t SWM3_12_MUX_CFG;                   /**< swm3_12 output select register, offset: 0xC0 */
  __IO uint32_t SWM3_13_MUX_CFG;                   /**< swm3_13 output select register, offset: 0xC4 */
  __IO uint32_t SWM3_14_MUX_CFG;                   /**< swm3_14 output select register, offset: 0xC8 */
  __IO uint32_t SWM3_15_MUX_CFG;                   /**< swm3_15 output select register, offset: 0xCC */
       uint8_t RESERVED_0[48];
  __IO uint32_t SWM0_00_PIN_CFG;                   /**< swm0_00 output select register, offset: 0x100 */
  __IO uint32_t SWM0_01_PIN_CFG;                   /**< swm0_01 output select register, offset: 0x104 */
  __IO uint32_t SWM0_02_PIN_CFG;                   /**< swm0_02 output select register, offset: 0x108 */
  __IO uint32_t SWM0_03_PIN_CFG;                   /**< swm0_03 output select register, offset: 0x10C */
  __IO uint32_t SWM0_04_PIN_CFG;                   /**< swm0_04 output select register, offset: 0x110 */
  __IO uint32_t SWM0_05_PIN_CFG;                   /**< swm0_05 output select register, offset: 0x114 */
  __IO uint32_t SWM0_06_PIN_CFG;                   /**< swm0_06 output select register, offset: 0x118 */
  __IO uint32_t SWM0_07_PIN_CFG;                   /**< swm0_07 output select register, offset: 0x11C */
  __IO uint32_t SWM0_08_PIN_CFG;                   /**< swm0_08 output select register, offset: 0x120 */
  __IO uint32_t SWM0_09_PIN_CFG;                   /**< swm0_09 output select register, offset: 0x124 */
  __IO uint32_t SWM0_10_PIN_CFG;                   /**< swm0_10 output select register, offset: 0x128 */
  __IO uint32_t SWM0_11_PIN_CFG;                   /**< swm0_11 output select register, offset: 0x12C */
  __IO uint32_t SWM1_00_PIN_CFG;                   /**< swm1_00 output select register, offset: 0x130 */
  __IO uint32_t SWM1_01_PIN_CFG;                   /**< swm1_01 output select register, offset: 0x134 */
  __IO uint32_t SWM1_02_PIN_CFG;                   /**< swm1_02 output select register, offset: 0x138 */
  __IO uint32_t SWM1_03_PIN_CFG;                   /**< swm1_03 output select register, offset: 0x13C */
  __IO uint32_t SWM1_04_PIN_CFG;                   /**< swm1_04 output select register, offset: 0x140 */
  __IO uint32_t SWM1_05_PIN_CFG;                   /**< swm1_05 output select register, offset: 0x144 */
  __IO uint32_t SWM1_06_PIN_CFG;                   /**< swm1_06 output select register, offset: 0x148 */
  __IO uint32_t SWM1_07_PIN_CFG;                   /**< swm1_07 output select register, offset: 0x14C */
  __IO uint32_t SWM1_08_PIN_CFG;                   /**< swm1_08 output select register, offset: 0x150 */
  __IO uint32_t SWM1_09_PIN_CFG;                   /**< swm1_09 output select register, offset: 0x154 */
  __IO uint32_t SWM1_10_PIN_CFG;                   /**< swm1_10 output select register, offset: 0x158 */
  __IO uint32_t SWM1_11_PIN_CFG;                   /**< swm1_11 output select register, offset: 0x15C */
  __IO uint32_t SWM2_00_PIN_CFG;                   /**< swm2_00 output select register, offset: 0x160 */
  __IO uint32_t SWM2_01_PIN_CFG;                   /**< swm2_01 output select register, offset: 0x164 */
  __IO uint32_t SWM2_02_PIN_CFG;                   /**< swm2_02 output select register, offset: 0x168 */
  __IO uint32_t SWM2_03_PIN_CFG;                   /**< swm2_03 output select register, offset: 0x16C */
  __IO uint32_t SWM2_04_PIN_CFG;                   /**< swm2_04 output select register, offset: 0x170 */
  __IO uint32_t SWM2_05_PIN_CFG;                   /**< swm2_05 output select register, offset: 0x174 */
  __IO uint32_t SWM2_06_PIN_CFG;                   /**< swm2_06 output select register, offset: 0x178 */
  __IO uint32_t SWM2_07_PIN_CFG;                   /**< swm2_07 output select register, offset: 0x17C */
  __IO uint32_t SWM2_08_PIN_CFG;                   /**< swm2_08 output select register, offset: 0x180 */
  __IO uint32_t SWM2_09_PIN_CFG;                   /**< swm2_09 output select register, offset: 0x184 */
  __IO uint32_t SWM2_10_PIN_CFG;                   /**< swm2_10 output select register, offset: 0x188 */
  __IO uint32_t SWM2_11_PIN_CFG;                   /**< swm2_11 output select register, offset: 0x18C */
  __IO uint32_t SWM3_00_PIN_CFG;                   /**< swm3_00 output select register, offset: 0x190 */
  __IO uint32_t SWM3_01_PIN_CFG;                   /**< swm3_01 output select register, offset: 0x194 */
  __IO uint32_t SWM3_02_PIN_CFG;                   /**< swm3_02 output select register, offset: 0x198 */
  __IO uint32_t SWM3_03_PIN_CFG;                   /**< swm3_03 output select register, offset: 0x19C */
  __IO uint32_t SWM3_04_PIN_CFG;                   /**< swm3_04 output select register, offset: 0x1A0 */
  __IO uint32_t SWM3_05_PIN_CFG;                   /**< swm3_05 output select register, offset: 0x1A4 */
  __IO uint32_t SWM3_06_PIN_CFG;                   /**< swm3_06 output select register, offset: 0x1A8 */
  __IO uint32_t SWM3_07_PIN_CFG;                   /**< swm3_07 output select register, offset: 0x1AC */
  __IO uint32_t SWM3_08_PIN_CFG;                   /**< swm3_08 output select register, offset: 0x1B0 */
  __IO uint32_t SWM3_09_PIN_CFG;                   /**< swm3_09 output select register, offset: 0x1B4 */
  __IO uint32_t SWM3_10_PIN_CFG;                   /**< swm3_10 output select register, offset: 0x1B8 */
  __IO uint32_t SWM3_11_PIN_CFG;                   /**< swm3_11 output select register, offset: 0x1BC */
  __IO uint32_t SWM3_12_PIN_CFG;                   /**< swm3_12 output select register, offset: 0x1C0 */
  __IO uint32_t SWM3_13_PIN_CFG;                   /**< swm3_13 output select register, offset: 0x1C4 */
  __IO uint32_t SWM3_14_PIN_CFG;                   /**< swm3_14 output select register, offset: 0x1C8 */
  __IO uint32_t SWM3_15_PIN_CFG;                   /**< swm3_15 output select register, offset: 0x1CC */
       uint8_t RESERVED_1[3628];
  __I  uint32_t MODULE_ID;                         /**< Contains the ID number of the IP, offset: 0xFFC */
} DSWM_Type;

/* ----------------------------------------------------------------------------
   -- DSWM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DSWM_Register_Masks DSWM Register Masks
 * @{
 */

/*! @name SWM0_00_MUX_CFG - swm0_00 output select register */
/*! @{ */

#define DSWM_SWM0_00_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM0_00_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001001010..Configure function 'u_gpio_gpo0'
 *  0b001111110..Configure function 'u_gpio_sec_gpo0'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b011011100..Configure function 'u_ct0_cap0'
 *  0b100010000..Configure function 'u_ct3_cap4'
 *  0b100101100..Configure function 'u_ct0_out0'
 *  0b101000000..Configure function 'u_nss_dbgo_out0'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM0_00_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_00_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM0_00_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM0_01_MUX_CFG - swm0_01 output select register */
/*! @{ */

#define DSWM_SWM0_01_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM0_01_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001001011..Configure function 'u_gpio_gpo1'
 *  0b001111111..Configure function 'u_gpio_sec_gpo1'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b011011101..Configure function 'u_ct0_cap1'
 *  0b100010001..Configure function 'u_ct3_cap5'
 *  0b100101101..Configure function 'u_ct0_out1'
 *  0b101000001..Configure function 'u_nss_dbgo_out1'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM0_01_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_01_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM0_01_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM0_02_MUX_CFG - swm0_02 output select register */
/*! @{ */

#define DSWM_SWM0_02_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM0_02_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b000001110..Configure function 'u_fc2_sck'
 *  0b000001111..Configure function 'u_fc2_rxd_sda_mosi_csn'
 *  0b000010000..Configure function 'u_fc2_txd_scl_miso_io0'
 *  0b000010001..Configure function 'u_fc2_cts_sdax_sseln0_io1'
 *  0b000010010..Configure function 'u_fc2_rts_sclx_sseln1_io2'
 *  0b000010011..Configure function 'u_fc2_sseln2_io3'
 *  0b000010100..Configure function 'u_fc2_sseln3'
 *  0b000011010..Configure function 'u_fc4_sck'
 *  0b000011011..Configure function 'u_fc4_rxd_sda_mosi_csn'
 *  0b000011100..Configure function 'u_fc4_txd_scl_miso_io0'
 *  0b000011101..Configure function 'u_fc4_cts_sdax_sseln0_io1'
 *  0b000011110..Configure function 'u_fc4_rts_sclx_sseln1_io2'
 *  0b000011111..Configure function 'u_fc5_sck'
 *  0b000100000..Configure function 'u_fc5_rxd_sda_mosi_csn'
 *  0b000100001..Configure function 'u_fc5_txd_scl_miso_io0'
 *  0b000100010..Configure function 'u_fc5_cts_sdax_sseln0_io1'
 *  0b000100011..Configure function 'u_fc5_rts_sclx_sseln1_io2'
 *  0b000110001..Configure function 'u_xspi0_clock_loopback'
 *  0b000111111..Configure function 'u_xspi1_clock_loopback'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001001100..Configure function 'u_gpio_gpo2'
 *  0b010000000..Configure function 'u_gpio_sec_gpo2'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b011011110..Configure function 'u_ct0_cap2'
 *  0b100010010..Configure function 'u_ct3_cap6'
 *  0b100101110..Configure function 'u_ct0_out2'
 *  0b101000010..Configure function 'u_nss_dbgo_out2'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM0_02_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_02_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM0_02_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM0_03_MUX_CFG - swm0_03 output select register */
/*! @{ */

#define DSWM_SWM0_03_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM0_03_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b000001110..Configure function 'u_fc2_sck'
 *  0b000001111..Configure function 'u_fc2_rxd_sda_mosi_csn'
 *  0b000010000..Configure function 'u_fc2_txd_scl_miso_io0'
 *  0b000010001..Configure function 'u_fc2_cts_sdax_sseln0_io1'
 *  0b000010010..Configure function 'u_fc2_rts_sclx_sseln1_io2'
 *  0b000010011..Configure function 'u_fc2_sseln2_io3'
 *  0b000010100..Configure function 'u_fc2_sseln3'
 *  0b000011010..Configure function 'u_fc4_sck'
 *  0b000011011..Configure function 'u_fc4_rxd_sda_mosi_csn'
 *  0b000011100..Configure function 'u_fc4_txd_scl_miso_io0'
 *  0b000011101..Configure function 'u_fc4_cts_sdax_sseln0_io1'
 *  0b000011110..Configure function 'u_fc4_rts_sclx_sseln1_io2'
 *  0b000011111..Configure function 'u_fc5_sck'
 *  0b000100000..Configure function 'u_fc5_rxd_sda_mosi_csn'
 *  0b000100001..Configure function 'u_fc5_txd_scl_miso_io0'
 *  0b000100010..Configure function 'u_fc5_cts_sdax_sseln0_io1'
 *  0b000100011..Configure function 'u_fc5_rts_sclx_sseln1_io2'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001001101..Configure function 'u_gpio_gpo3'
 *  0b010000001..Configure function 'u_gpio_sec_gpo3'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b011011111..Configure function 'u_ct0_cap3'
 *  0b100010011..Configure function 'u_ct3_cap7'
 *  0b100101111..Configure function 'u_ct0_out3'
 *  0b101000011..Configure function 'u_nss_dbgo_out3'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM0_03_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_03_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM0_03_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM0_04_MUX_CFG - swm0_04 output select register */
/*! @{ */

#define DSWM_SWM0_04_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM0_04_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b000000111..Configure function 'u_fc1_sck'
 *  0b000001000..Configure function 'u_fc1_rxd_sda_mosi_csn'
 *  0b000001001..Configure function 'u_fc1_txd_scl_miso_io0'
 *  0b000001010..Configure function 'u_fc1_cts_sdax_sseln0_io1'
 *  0b000001011..Configure function 'u_fc1_rts_sclx_sseln1_io2'
 *  0b000001100..Configure function 'u_fc1_sseln2_io3'
 *  0b000001101..Configure function 'u_fc1_sseln3'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001001110..Configure function 'u_gpio_gpo4'
 *  0b010000010..Configure function 'u_gpio_sec_gpo4'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111110..Configure function 'u_dp1_sdi'
 *  0b010111111..Configure function 'u_dp1_sdo'
 *  0b011000000..Configure function 'u_dp1_frame'
 *  0b011000001..Configure function 'u_dp1_clk'
 *  0b011100000..Configure function 'u_ct0_cap4'
 *  0b100010100..Configure function 'u_ct3_cap8'
 *  0b100110000..Configure function 'u_ct1_out0'
 *  0b101000100..Configure function 'u_nss_dbgo_out4'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM0_04_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_04_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM0_04_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM0_05_MUX_CFG - swm0_05 output select register */
/*! @{ */

#define DSWM_SWM0_05_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM0_05_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b000000111..Configure function 'u_fc1_sck'
 *  0b000001000..Configure function 'u_fc1_rxd_sda_mosi_csn'
 *  0b000001001..Configure function 'u_fc1_txd_scl_miso_io0'
 *  0b000001010..Configure function 'u_fc1_cts_sdax_sseln0_io1'
 *  0b000001011..Configure function 'u_fc1_rts_sclx_sseln1_io2'
 *  0b000001100..Configure function 'u_fc1_sseln2_io3'
 *  0b000001101..Configure function 'u_fc1_sseln3'
 *  0b001001111..Configure function 'u_gpio_gpo5'
 *  0b010000011..Configure function 'u_gpio_sec_gpo5'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111110..Configure function 'u_dp1_sdi'
 *  0b010111111..Configure function 'u_dp1_sdo'
 *  0b011000000..Configure function 'u_dp1_frame'
 *  0b011000001..Configure function 'u_dp1_clk'
 *  0b011100001..Configure function 'u_ct0_cap5'
 *  0b100010101..Configure function 'u_ct3_cap9'
 *  0b100110001..Configure function 'u_ct1_out1'
 *  0b101000101..Configure function 'u_nss_dbgo_out5'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM0_05_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_05_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM0_05_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM0_06_MUX_CFG - swm0_06 output select register */
/*! @{ */

#define DSWM_SWM0_06_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM0_06_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000111..Configure function 'u_fc1_sck'
 *  0b000001000..Configure function 'u_fc1_rxd_sda_mosi_csn'
 *  0b000001001..Configure function 'u_fc1_txd_scl_miso_io0'
 *  0b000001010..Configure function 'u_fc1_cts_sdax_sseln0_io1'
 *  0b000001011..Configure function 'u_fc1_rts_sclx_sseln1_io2'
 *  0b000001100..Configure function 'u_fc1_sseln2_io3'
 *  0b000001101..Configure function 'u_fc1_sseln3'
 *  0b000010101..Configure function 'u_fc3_sck'
 *  0b000010110..Configure function 'u_fc3_rxd_sda_mosi_csn'
 *  0b000010111..Configure function 'u_fc3_txd_scl_miso_io0'
 *  0b000011000..Configure function 'u_fc3_cts_sdax_sseln0_io1'
 *  0b000011001..Configure function 'u_fc3_rts_sclx_sseln1_io2'
 *  0b000011010..Configure function 'u_fc4_sck'
 *  0b000011011..Configure function 'u_fc4_rxd_sda_mosi_csn'
 *  0b000011100..Configure function 'u_fc4_txd_scl_miso_io0'
 *  0b000011101..Configure function 'u_fc4_cts_sdax_sseln0_io1'
 *  0b000011110..Configure function 'u_fc4_rts_sclx_sseln1_io2'
 *  0b001000000..Configure function 'u_i3c_scl'
 *  0b001000001..Configure function 'u_i3c_sda'
 *  0b001010000..Configure function 'u_gpio_gpo6'
 *  0b010000100..Configure function 'u_gpio_sec_gpo6'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111110..Configure function 'u_dp1_sdi'
 *  0b010111111..Configure function 'u_dp1_sdo'
 *  0b011000000..Configure function 'u_dp1_frame'
 *  0b011000001..Configure function 'u_dp1_clk'
 *  0b011100010..Configure function 'u_ct0_cap6'
 *  0b100010110..Configure function 'u_ct3_cap10'
 *  0b100110010..Configure function 'u_ct1_out2'
 *  0b101000110..Configure function 'u_nss_dbgo_out6'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM0_06_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_06_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM0_06_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM0_07_MUX_CFG - swm0_07 output select register */
/*! @{ */

#define DSWM_SWM0_07_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM0_07_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000111..Configure function 'u_fc1_sck'
 *  0b000001000..Configure function 'u_fc1_rxd_sda_mosi_csn'
 *  0b000001001..Configure function 'u_fc1_txd_scl_miso_io0'
 *  0b000001010..Configure function 'u_fc1_cts_sdax_sseln0_io1'
 *  0b000001011..Configure function 'u_fc1_rts_sclx_sseln1_io2'
 *  0b000001100..Configure function 'u_fc1_sseln2_io3'
 *  0b000001101..Configure function 'u_fc1_sseln3'
 *  0b000010101..Configure function 'u_fc3_sck'
 *  0b000010110..Configure function 'u_fc3_rxd_sda_mosi_csn'
 *  0b000010111..Configure function 'u_fc3_txd_scl_miso_io0'
 *  0b000011000..Configure function 'u_fc3_cts_sdax_sseln0_io1'
 *  0b000011001..Configure function 'u_fc3_rts_sclx_sseln1_io2'
 *  0b000011010..Configure function 'u_fc4_sck'
 *  0b000011011..Configure function 'u_fc4_rxd_sda_mosi_csn'
 *  0b000011100..Configure function 'u_fc4_txd_scl_miso_io0'
 *  0b000011101..Configure function 'u_fc4_cts_sdax_sseln0_io1'
 *  0b000011110..Configure function 'u_fc4_rts_sclx_sseln1_io2'
 *  0b000110000..Configure function 'u_xspi0_int'
 *  0b000111110..Configure function 'u_xspi1_int'
 *  0b001000000..Configure function 'u_i3c_scl'
 *  0b001000001..Configure function 'u_i3c_sda'
 *  0b001010001..Configure function 'u_gpio_gpo7'
 *  0b010000101..Configure function 'u_gpio_sec_gpo7'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111110..Configure function 'u_dp1_sdi'
 *  0b010111111..Configure function 'u_dp1_sdo'
 *  0b011000000..Configure function 'u_dp1_frame'
 *  0b011000001..Configure function 'u_dp1_clk'
 *  0b011100011..Configure function 'u_ct0_cap7'
 *  0b100010111..Configure function 'u_ct3_cap11'
 *  0b100110011..Configure function 'u_ct1_out3'
 *  0b101000111..Configure function 'u_nss_dbgo_out7'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM0_07_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_07_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM0_07_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM0_08_MUX_CFG - swm0_08 output select register */
/*! @{ */

#define DSWM_SWM0_08_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM0_08_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b001000100..Configure function 'u_dap_swo'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001010010..Configure function 'u_gpio_gpo8'
 *  0b010000110..Configure function 'u_gpio_sec_gpo8'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111010..Configure function 'u_dp0_sdi'
 *  0b010111011..Configure function 'u_dp0_sdo'
 *  0b010111100..Configure function 'u_dp0_frame'
 *  0b010111101..Configure function 'u_dp0_clk'
 *  0b011100100..Configure function 'u_ct0_cap8'
 *  0b100011000..Configure function 'u_ct3_cap12'
 *  0b100110100..Configure function 'u_ct2_out0'
 *  0b101001000..Configure function 'u_nss_dbgo_cm55_so_txdata'
 *  0b101100010..Configure function 'u_irfic_gpio17'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM0_08_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_08_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM0_08_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM0_09_MUX_CFG - swm0_09 output select register */
/*! @{ */

#define DSWM_SWM0_09_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM0_09_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b001000100..Configure function 'u_dap_swo'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001010011..Configure function 'u_gpio_gpo9'
 *  0b010000111..Configure function 'u_gpio_sec_gpo9'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111010..Configure function 'u_dp0_sdi'
 *  0b010111011..Configure function 'u_dp0_sdo'
 *  0b010111100..Configure function 'u_dp0_frame'
 *  0b010111101..Configure function 'u_dp0_clk'
 *  0b011100101..Configure function 'u_ct0_cap9'
 *  0b100011001..Configure function 'u_ct3_cap13'
 *  0b100110101..Configure function 'u_ct2_out1'
 *  0b101001001..Configure function 'u_nss_dbgo_xsp_so_txdata'
 *  0b101100011..Configure function 'u_irfic_gpio18'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM0_09_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_09_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM0_09_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM0_10_MUX_CFG - swm0_10 output select register */
/*! @{ */

#define DSWM_SWM0_10_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM0_10_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b001000010..Configure function 'u_dap_swclk'
 *  0b001000011..Configure function 'u_dap_swdio'
 *  0b001010100..Configure function 'u_gpio_gpo10'
 *  0b010001000..Configure function 'u_gpio_sec_gpo10'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111010..Configure function 'u_dp0_sdi'
 *  0b010111011..Configure function 'u_dp0_sdo'
 *  0b010111100..Configure function 'u_dp0_frame'
 *  0b010111101..Configure function 'u_dp0_clk'
 *  0b011100110..Configure function 'u_ct0_cap10'
 *  0b100011010..Configure function 'u_ct3_cap14'
 *  0b100110110..Configure function 'u_ct2_out2'
 *  0b101011100..Configure function 'u_irfic_gpio11'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM0_10_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_10_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM0_10_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM0_11_MUX_CFG - swm0_11 output select register */
/*! @{ */

#define DSWM_SWM0_11_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM0_11_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b001000010..Configure function 'u_dap_swclk'
 *  0b001000011..Configure function 'u_dap_swdio'
 *  0b001010101..Configure function 'u_gpio_gpo11'
 *  0b010001001..Configure function 'u_gpio_sec_gpo11'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111010..Configure function 'u_dp0_sdi'
 *  0b010111011..Configure function 'u_dp0_sdo'
 *  0b010111100..Configure function 'u_dp0_frame'
 *  0b010111101..Configure function 'u_dp0_clk'
 *  0b011100111..Configure function 'u_ct0_cap11'
 *  0b100011011..Configure function 'u_ct3_cap15'
 *  0b100110111..Configure function 'u_ct2_out3'
 *  0b101100001..Configure function 'u_irfic_gpio16'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101110110..Configure function 'u_gen_tie0'
 *  0b101110111..Configure function 'u_gen_tie1'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM0_11_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_11_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM0_11_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM1_00_MUX_CFG - swm1_00 output select register */
/*! @{ */

#define DSWM_SWM1_00_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM1_00_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b000011010..Configure function 'u_fc4_sck'
 *  0b000011011..Configure function 'u_fc4_rxd_sda_mosi_csn'
 *  0b000011100..Configure function 'u_fc4_txd_scl_miso_io0'
 *  0b000011101..Configure function 'u_fc4_cts_sdax_sseln0_io1'
 *  0b000011110..Configure function 'u_fc4_rts_sclx_sseln1_io2'
 *  0b000110010..Configure function 'u_xspi1_sio0'
 *  0b000110011..Configure function 'u_xspi1_sio1'
 *  0b000110100..Configure function 'u_xspi1_sio2'
 *  0b000110101..Configure function 'u_xspi1_sio3'
 *  0b000110110..Configure function 'u_xspi1_sio4'
 *  0b000110111..Configure function 'u_xspi1_sio5'
 *  0b000111000..Configure function 'u_xspi1_sio6'
 *  0b000111001..Configure function 'u_xspi1_sio7'
 *  0b000111010..Configure function 'u_xspi1_sclk'
 *  0b000111011..Configure function 'u_xspi1_ssn1'
 *  0b000111100..Configure function 'u_xspi1_ssn2'
 *  0b000111101..Configure function 'u_xspi1_ds'
 *  0b001010110..Configure function 'u_gpio_gpo12'
 *  0b010001010..Configure function 'u_gpio_sec_gpo12'
 *  0b011000010..Configure function 'u_dp2_sdi'
 *  0b011000011..Configure function 'u_dp2_sdo'
 *  0b011000100..Configure function 'u_dp2_frame'
 *  0b011000101..Configure function 'u_dp2_clk'
 *  0b011101000..Configure function 'u_ct0_cap12'
 *  0b100011100..Configure function 'u_ct4_cap0'
 *  0b100111000..Configure function 'u_ct3_out0'
 *  0b101011101..Configure function 'u_irfic_gpio12'
 *  0b101100100..Configure function 'u_dbg_clk_frol'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM1_00_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_00_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM1_00_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM1_01_MUX_CFG - swm1_01 output select register */
/*! @{ */

#define DSWM_SWM1_01_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM1_01_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b000011010..Configure function 'u_fc4_sck'
 *  0b000011011..Configure function 'u_fc4_rxd_sda_mosi_csn'
 *  0b000011100..Configure function 'u_fc4_txd_scl_miso_io0'
 *  0b000011101..Configure function 'u_fc4_cts_sdax_sseln0_io1'
 *  0b000011110..Configure function 'u_fc4_rts_sclx_sseln1_io2'
 *  0b000110010..Configure function 'u_xspi1_sio0'
 *  0b000110011..Configure function 'u_xspi1_sio1'
 *  0b000110100..Configure function 'u_xspi1_sio2'
 *  0b000110101..Configure function 'u_xspi1_sio3'
 *  0b000110110..Configure function 'u_xspi1_sio4'
 *  0b000110111..Configure function 'u_xspi1_sio5'
 *  0b000111000..Configure function 'u_xspi1_sio6'
 *  0b000111001..Configure function 'u_xspi1_sio7'
 *  0b000111010..Configure function 'u_xspi1_sclk'
 *  0b000111011..Configure function 'u_xspi1_ssn1'
 *  0b000111100..Configure function 'u_xspi1_ssn2'
 *  0b000111101..Configure function 'u_xspi1_ds'
 *  0b001010111..Configure function 'u_gpio_gpo13'
 *  0b010001011..Configure function 'u_gpio_sec_gpo13'
 *  0b011000010..Configure function 'u_dp2_sdi'
 *  0b011000011..Configure function 'u_dp2_sdo'
 *  0b011000100..Configure function 'u_dp2_frame'
 *  0b011000101..Configure function 'u_dp2_clk'
 *  0b011101001..Configure function 'u_ct0_cap13'
 *  0b100011101..Configure function 'u_ct4_cap1'
 *  0b100111001..Configure function 'u_ct3_out1'
 *  0b101100000..Configure function 'u_irfic_gpio15'
 *  0b101100101..Configure function 'u_dbg_clk_frol_n'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM1_01_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_01_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM1_01_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM1_02_MUX_CFG - swm1_02 output select register */
/*! @{ */

#define DSWM_SWM1_02_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM1_02_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b000010101..Configure function 'u_fc3_sck'
 *  0b000010110..Configure function 'u_fc3_rxd_sda_mosi_csn'
 *  0b000010111..Configure function 'u_fc3_txd_scl_miso_io0'
 *  0b000011000..Configure function 'u_fc3_cts_sdax_sseln0_io1'
 *  0b000011001..Configure function 'u_fc3_rts_sclx_sseln1_io2'
 *  0b000110010..Configure function 'u_xspi1_sio0'
 *  0b000110011..Configure function 'u_xspi1_sio1'
 *  0b000110100..Configure function 'u_xspi1_sio2'
 *  0b000110101..Configure function 'u_xspi1_sio3'
 *  0b000110110..Configure function 'u_xspi1_sio4'
 *  0b000110111..Configure function 'u_xspi1_sio5'
 *  0b000111000..Configure function 'u_xspi1_sio6'
 *  0b000111001..Configure function 'u_xspi1_sio7'
 *  0b000111010..Configure function 'u_xspi1_sclk'
 *  0b000111011..Configure function 'u_xspi1_ssn1'
 *  0b000111100..Configure function 'u_xspi1_ssn2'
 *  0b000111101..Configure function 'u_xspi1_ds'
 *  0b001011000..Configure function 'u_gpio_gpo14'
 *  0b010001100..Configure function 'u_gpio_sec_gpo14'
 *  0b011000010..Configure function 'u_dp2_sdi'
 *  0b011000011..Configure function 'u_dp2_sdo'
 *  0b011000100..Configure function 'u_dp2_frame'
 *  0b011000101..Configure function 'u_dp2_clk'
 *  0b011101010..Configure function 'u_ct0_cap14'
 *  0b100011110..Configure function 'u_ct4_cap2'
 *  0b100111010..Configure function 'u_ct3_out2'
 *  0b101011111..Configure function 'u_irfic_gpio14'
 *  0b101100110..Configure function 'u_dbg_clk_fro'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM1_02_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_02_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM1_02_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM1_03_MUX_CFG - swm1_03 output select register */
/*! @{ */

#define DSWM_SWM1_03_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM1_03_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b000010101..Configure function 'u_fc3_sck'
 *  0b000010110..Configure function 'u_fc3_rxd_sda_mosi_csn'
 *  0b000010111..Configure function 'u_fc3_txd_scl_miso_io0'
 *  0b000011000..Configure function 'u_fc3_cts_sdax_sseln0_io1'
 *  0b000011001..Configure function 'u_fc3_rts_sclx_sseln1_io2'
 *  0b000110010..Configure function 'u_xspi1_sio0'
 *  0b000110011..Configure function 'u_xspi1_sio1'
 *  0b000110100..Configure function 'u_xspi1_sio2'
 *  0b000110101..Configure function 'u_xspi1_sio3'
 *  0b000110110..Configure function 'u_xspi1_sio4'
 *  0b000110111..Configure function 'u_xspi1_sio5'
 *  0b000111000..Configure function 'u_xspi1_sio6'
 *  0b000111001..Configure function 'u_xspi1_sio7'
 *  0b000111010..Configure function 'u_xspi1_sclk'
 *  0b000111011..Configure function 'u_xspi1_ssn1'
 *  0b000111100..Configure function 'u_xspi1_ssn2'
 *  0b000111101..Configure function 'u_xspi1_ds'
 *  0b001011001..Configure function 'u_gpio_gpo15'
 *  0b010001101..Configure function 'u_gpio_sec_gpo15'
 *  0b011000010..Configure function 'u_dp2_sdi'
 *  0b011000011..Configure function 'u_dp2_sdo'
 *  0b011000100..Configure function 'u_dp2_frame'
 *  0b011000101..Configure function 'u_dp2_clk'
 *  0b011101011..Configure function 'u_ct0_cap15'
 *  0b100011111..Configure function 'u_ct4_cap3'
 *  0b100111011..Configure function 'u_ct3_out3'
 *  0b101011110..Configure function 'u_irfic_gpio13'
 *  0b101100111..Configure function 'u_dbg_clk_fro_n'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM1_03_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_03_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM1_03_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM1_04_MUX_CFG - swm1_04 output select register */
/*! @{ */

#define DSWM_SWM1_04_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM1_04_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000111..Configure function 'u_fc1_sck'
 *  0b000001000..Configure function 'u_fc1_rxd_sda_mosi_csn'
 *  0b000001001..Configure function 'u_fc1_txd_scl_miso_io0'
 *  0b000001010..Configure function 'u_fc1_cts_sdax_sseln0_io1'
 *  0b000001011..Configure function 'u_fc1_rts_sclx_sseln1_io2'
 *  0b000001100..Configure function 'u_fc1_sseln2_io3'
 *  0b000001101..Configure function 'u_fc1_sseln3'
 *  0b000110010..Configure function 'u_xspi1_sio0'
 *  0b000110011..Configure function 'u_xspi1_sio1'
 *  0b000110100..Configure function 'u_xspi1_sio2'
 *  0b000110101..Configure function 'u_xspi1_sio3'
 *  0b000110110..Configure function 'u_xspi1_sio4'
 *  0b000110111..Configure function 'u_xspi1_sio5'
 *  0b000111000..Configure function 'u_xspi1_sio6'
 *  0b000111001..Configure function 'u_xspi1_sio7'
 *  0b000111010..Configure function 'u_xspi1_sclk'
 *  0b000111011..Configure function 'u_xspi1_ssn1'
 *  0b000111100..Configure function 'u_xspi1_ssn2'
 *  0b000111101..Configure function 'u_xspi1_ds'
 *  0b001011010..Configure function 'u_gpio_gpo16'
 *  0b010001110..Configure function 'u_gpio_sec_gpo16'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b011000110..Configure function 'u_dp3_sdi'
 *  0b011000111..Configure function 'u_dp3_sdo'
 *  0b011001000..Configure function 'u_dp3_frame'
 *  0b011001001..Configure function 'u_dp3_clk'
 *  0b011101100..Configure function 'u_ct1_cap0'
 *  0b100100000..Configure function 'u_ct4_cap4'
 *  0b100111100..Configure function 'u_ct4_out0'
 *  0b101101000..Configure function 'u_dbg_clk_nss_fro'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM1_04_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_04_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM1_04_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM1_05_MUX_CFG - swm1_05 output select register */
/*! @{ */

#define DSWM_SWM1_05_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM1_05_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000111..Configure function 'u_fc1_sck'
 *  0b000001000..Configure function 'u_fc1_rxd_sda_mosi_csn'
 *  0b000001001..Configure function 'u_fc1_txd_scl_miso_io0'
 *  0b000001010..Configure function 'u_fc1_cts_sdax_sseln0_io1'
 *  0b000001011..Configure function 'u_fc1_rts_sclx_sseln1_io2'
 *  0b000001100..Configure function 'u_fc1_sseln2_io3'
 *  0b000001101..Configure function 'u_fc1_sseln3'
 *  0b000110010..Configure function 'u_xspi1_sio0'
 *  0b000110011..Configure function 'u_xspi1_sio1'
 *  0b000110100..Configure function 'u_xspi1_sio2'
 *  0b000110101..Configure function 'u_xspi1_sio3'
 *  0b000110110..Configure function 'u_xspi1_sio4'
 *  0b000110111..Configure function 'u_xspi1_sio5'
 *  0b000111000..Configure function 'u_xspi1_sio6'
 *  0b000111001..Configure function 'u_xspi1_sio7'
 *  0b000111010..Configure function 'u_xspi1_sclk'
 *  0b000111011..Configure function 'u_xspi1_ssn1'
 *  0b000111100..Configure function 'u_xspi1_ssn2'
 *  0b000111101..Configure function 'u_xspi1_ds'
 *  0b001011011..Configure function 'u_gpio_gpo17'
 *  0b010001111..Configure function 'u_gpio_sec_gpo17'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b011000110..Configure function 'u_dp3_sdi'
 *  0b011000111..Configure function 'u_dp3_sdo'
 *  0b011001000..Configure function 'u_dp3_frame'
 *  0b011001001..Configure function 'u_dp3_clk'
 *  0b011101101..Configure function 'u_ct1_cap1'
 *  0b100100001..Configure function 'u_ct4_cap5'
 *  0b100111101..Configure function 'u_ct4_out1'
 *  0b101101001..Configure function 'u_dbg_clk_nss_fro_n'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM1_05_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_05_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM1_05_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM1_06_MUX_CFG - swm1_06 output select register */
/*! @{ */

#define DSWM_SWM1_06_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM1_06_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000111..Configure function 'u_fc1_sck'
 *  0b000001000..Configure function 'u_fc1_rxd_sda_mosi_csn'
 *  0b000001001..Configure function 'u_fc1_txd_scl_miso_io0'
 *  0b000001010..Configure function 'u_fc1_cts_sdax_sseln0_io1'
 *  0b000001011..Configure function 'u_fc1_rts_sclx_sseln1_io2'
 *  0b000001100..Configure function 'u_fc1_sseln2_io3'
 *  0b000001101..Configure function 'u_fc1_sseln3'
 *  0b000001110..Configure function 'u_fc2_sck'
 *  0b000001111..Configure function 'u_fc2_rxd_sda_mosi_csn'
 *  0b000010000..Configure function 'u_fc2_txd_scl_miso_io0'
 *  0b000010001..Configure function 'u_fc2_cts_sdax_sseln0_io1'
 *  0b000010010..Configure function 'u_fc2_rts_sclx_sseln1_io2'
 *  0b000010011..Configure function 'u_fc2_sseln2_io3'
 *  0b000010100..Configure function 'u_fc2_sseln3'
 *  0b000110010..Configure function 'u_xspi1_sio0'
 *  0b000110011..Configure function 'u_xspi1_sio1'
 *  0b000110100..Configure function 'u_xspi1_sio2'
 *  0b000110101..Configure function 'u_xspi1_sio3'
 *  0b000110110..Configure function 'u_xspi1_sio4'
 *  0b000110111..Configure function 'u_xspi1_sio5'
 *  0b000111000..Configure function 'u_xspi1_sio6'
 *  0b000111001..Configure function 'u_xspi1_sio7'
 *  0b000111010..Configure function 'u_xspi1_sclk'
 *  0b000111011..Configure function 'u_xspi1_ssn1'
 *  0b000111100..Configure function 'u_xspi1_ssn2'
 *  0b000111101..Configure function 'u_xspi1_ds'
 *  0b001011100..Configure function 'u_gpio_gpo18'
 *  0b010010000..Configure function 'u_gpio_sec_gpo18'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b011000110..Configure function 'u_dp3_sdi'
 *  0b011000111..Configure function 'u_dp3_sdo'
 *  0b011001000..Configure function 'u_dp3_frame'
 *  0b011001001..Configure function 'u_dp3_clk'
 *  0b011101110..Configure function 'u_ct1_cap2'
 *  0b100100010..Configure function 'u_ct4_cap6'
 *  0b100111110..Configure function 'u_ct4_out2'
 *  0b101101010..Configure function 'u_dbg_clk_pll'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM1_06_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_06_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM1_06_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM1_07_MUX_CFG - swm1_07 output select register */
/*! @{ */

#define DSWM_SWM1_07_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM1_07_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000111..Configure function 'u_fc1_sck'
 *  0b000001000..Configure function 'u_fc1_rxd_sda_mosi_csn'
 *  0b000001001..Configure function 'u_fc1_txd_scl_miso_io0'
 *  0b000001010..Configure function 'u_fc1_cts_sdax_sseln0_io1'
 *  0b000001011..Configure function 'u_fc1_rts_sclx_sseln1_io2'
 *  0b000001100..Configure function 'u_fc1_sseln2_io3'
 *  0b000001101..Configure function 'u_fc1_sseln3'
 *  0b000001110..Configure function 'u_fc2_sck'
 *  0b000001111..Configure function 'u_fc2_rxd_sda_mosi_csn'
 *  0b000010000..Configure function 'u_fc2_txd_scl_miso_io0'
 *  0b000010001..Configure function 'u_fc2_cts_sdax_sseln0_io1'
 *  0b000010010..Configure function 'u_fc2_rts_sclx_sseln1_io2'
 *  0b000010011..Configure function 'u_fc2_sseln2_io3'
 *  0b000010100..Configure function 'u_fc2_sseln3'
 *  0b000110010..Configure function 'u_xspi1_sio0'
 *  0b000110011..Configure function 'u_xspi1_sio1'
 *  0b000110100..Configure function 'u_xspi1_sio2'
 *  0b000110101..Configure function 'u_xspi1_sio3'
 *  0b000110110..Configure function 'u_xspi1_sio4'
 *  0b000110111..Configure function 'u_xspi1_sio5'
 *  0b000111000..Configure function 'u_xspi1_sio6'
 *  0b000111001..Configure function 'u_xspi1_sio7'
 *  0b000111010..Configure function 'u_xspi1_sclk'
 *  0b000111011..Configure function 'u_xspi1_ssn1'
 *  0b000111100..Configure function 'u_xspi1_ssn2'
 *  0b000111101..Configure function 'u_xspi1_ds'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001011101..Configure function 'u_gpio_gpo19'
 *  0b010010001..Configure function 'u_gpio_sec_gpo19'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b011000110..Configure function 'u_dp3_sdi'
 *  0b011000111..Configure function 'u_dp3_sdo'
 *  0b011001000..Configure function 'u_dp3_frame'
 *  0b011001001..Configure function 'u_dp3_clk'
 *  0b011101111..Configure function 'u_ct1_cap3'
 *  0b100100011..Configure function 'u_ct4_cap7'
 *  0b100111111..Configure function 'u_ct4_out3'
 *  0b101101011..Configure function 'u_dbg_clk_pll_n'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM1_07_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_07_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM1_07_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM1_08_MUX_CFG - swm1_08 output select register */
/*! @{ */

#define DSWM_SWM1_08_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM1_08_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000110010..Configure function 'u_xspi1_sio0'
 *  0b000110011..Configure function 'u_xspi1_sio1'
 *  0b000110100..Configure function 'u_xspi1_sio2'
 *  0b000110101..Configure function 'u_xspi1_sio3'
 *  0b000110110..Configure function 'u_xspi1_sio4'
 *  0b000110111..Configure function 'u_xspi1_sio5'
 *  0b000111000..Configure function 'u_xspi1_sio6'
 *  0b000111001..Configure function 'u_xspi1_sio7'
 *  0b000111010..Configure function 'u_xspi1_sclk'
 *  0b000111011..Configure function 'u_xspi1_ssn1'
 *  0b000111100..Configure function 'u_xspi1_ssn2'
 *  0b000111101..Configure function 'u_xspi1_ds'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001011110..Configure function 'u_gpio_gpo20'
 *  0b010010010..Configure function 'u_gpio_sec_gpo20'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111110..Configure function 'u_dp1_sdi'
 *  0b010111111..Configure function 'u_dp1_sdo'
 *  0b011000000..Configure function 'u_dp1_frame'
 *  0b011000001..Configure function 'u_dp1_clk'
 *  0b011110000..Configure function 'u_ct1_cap4'
 *  0b100100100..Configure function 'u_ct4_cap8'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM1_08_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_08_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM1_08_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM1_09_MUX_CFG - swm1_09 output select register */
/*! @{ */

#define DSWM_SWM1_09_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM1_09_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000110010..Configure function 'u_xspi1_sio0'
 *  0b000110011..Configure function 'u_xspi1_sio1'
 *  0b000110100..Configure function 'u_xspi1_sio2'
 *  0b000110101..Configure function 'u_xspi1_sio3'
 *  0b000110110..Configure function 'u_xspi1_sio4'
 *  0b000110111..Configure function 'u_xspi1_sio5'
 *  0b000111000..Configure function 'u_xspi1_sio6'
 *  0b000111001..Configure function 'u_xspi1_sio7'
 *  0b000111010..Configure function 'u_xspi1_sclk'
 *  0b000111011..Configure function 'u_xspi1_ssn1'
 *  0b000111100..Configure function 'u_xspi1_ssn2'
 *  0b000111101..Configure function 'u_xspi1_ds'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001011111..Configure function 'u_gpio_gpo21'
 *  0b010010011..Configure function 'u_gpio_sec_gpo21'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111110..Configure function 'u_dp1_sdi'
 *  0b010111111..Configure function 'u_dp1_sdo'
 *  0b011000000..Configure function 'u_dp1_frame'
 *  0b011000001..Configure function 'u_dp1_clk'
 *  0b011110001..Configure function 'u_ct1_cap5'
 *  0b100100101..Configure function 'u_ct4_cap9'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM1_09_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_09_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM1_09_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM1_10_MUX_CFG - swm1_10 output select register */
/*! @{ */

#define DSWM_SWM1_10_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM1_10_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000110010..Configure function 'u_xspi1_sio0'
 *  0b000110011..Configure function 'u_xspi1_sio1'
 *  0b000110100..Configure function 'u_xspi1_sio2'
 *  0b000110101..Configure function 'u_xspi1_sio3'
 *  0b000110110..Configure function 'u_xspi1_sio4'
 *  0b000110111..Configure function 'u_xspi1_sio5'
 *  0b000111000..Configure function 'u_xspi1_sio6'
 *  0b000111001..Configure function 'u_xspi1_sio7'
 *  0b000111010..Configure function 'u_xspi1_sclk'
 *  0b000111011..Configure function 'u_xspi1_ssn1'
 *  0b000111100..Configure function 'u_xspi1_ssn2'
 *  0b000111101..Configure function 'u_xspi1_ds'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001100000..Configure function 'u_gpio_gpo22'
 *  0b010010100..Configure function 'u_gpio_sec_gpo22'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111110..Configure function 'u_dp1_sdi'
 *  0b010111111..Configure function 'u_dp1_sdo'
 *  0b011000000..Configure function 'u_dp1_frame'
 *  0b011000001..Configure function 'u_dp1_clk'
 *  0b011110010..Configure function 'u_ct1_cap6'
 *  0b100100110..Configure function 'u_ct4_cap10'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM1_10_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_10_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM1_10_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM1_11_MUX_CFG - swm1_11 output select register */
/*! @{ */

#define DSWM_SWM1_11_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM1_11_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000110010..Configure function 'u_xspi1_sio0'
 *  0b000110011..Configure function 'u_xspi1_sio1'
 *  0b000110100..Configure function 'u_xspi1_sio2'
 *  0b000110101..Configure function 'u_xspi1_sio3'
 *  0b000110110..Configure function 'u_xspi1_sio4'
 *  0b000110111..Configure function 'u_xspi1_sio5'
 *  0b000111000..Configure function 'u_xspi1_sio6'
 *  0b000111001..Configure function 'u_xspi1_sio7'
 *  0b000111010..Configure function 'u_xspi1_sclk'
 *  0b000111011..Configure function 'u_xspi1_ssn1'
 *  0b000111100..Configure function 'u_xspi1_ssn2'
 *  0b000111101..Configure function 'u_xspi1_ds'
 *  0b000111110..Configure function 'u_xspi1_int'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001100001..Configure function 'u_gpio_gpo23'
 *  0b010010101..Configure function 'u_gpio_sec_gpo23'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111110..Configure function 'u_dp1_sdi'
 *  0b010111111..Configure function 'u_dp1_sdo'
 *  0b011000000..Configure function 'u_dp1_frame'
 *  0b011000001..Configure function 'u_dp1_clk'
 *  0b011110011..Configure function 'u_ct1_cap7'
 *  0b100100111..Configure function 'u_ct4_cap11'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM1_11_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_11_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM1_11_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM2_00_MUX_CFG - swm2_00 output select register */
/*! @{ */

#define DSWM_SWM2_00_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM2_00_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000100100..Configure function 'u_xspi0_sio0'
 *  0b000100101..Configure function 'u_xspi0_sio1'
 *  0b000100110..Configure function 'u_xspi0_sio2'
 *  0b000100111..Configure function 'u_xspi0_sio3'
 *  0b000101000..Configure function 'u_xspi0_sio4'
 *  0b000101001..Configure function 'u_xspi0_sio5'
 *  0b000101010..Configure function 'u_xspi0_sio6'
 *  0b000101011..Configure function 'u_xspi0_sio7'
 *  0b000101100..Configure function 'u_xspi0_sclk'
 *  0b000101101..Configure function 'u_xspi0_ssn1'
 *  0b000101110..Configure function 'u_xspi0_ssn2'
 *  0b000101111..Configure function 'u_xspi0_ds'
 *  0b001100010..Configure function 'u_gpio_gpo24'
 *  0b010010110..Configure function 'u_gpio_sec_gpo24'
 *  0b011110100..Configure function 'u_ct1_cap8'
 *  0b100101000..Configure function 'u_ct4_cap12'
 *  0b101101100..Configure function 'u_audio_pwm_data0'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM2_00_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_00_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM2_00_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM2_01_MUX_CFG - swm2_01 output select register */
/*! @{ */

#define DSWM_SWM2_01_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM2_01_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000100100..Configure function 'u_xspi0_sio0'
 *  0b000100101..Configure function 'u_xspi0_sio1'
 *  0b000100110..Configure function 'u_xspi0_sio2'
 *  0b000100111..Configure function 'u_xspi0_sio3'
 *  0b000101000..Configure function 'u_xspi0_sio4'
 *  0b000101001..Configure function 'u_xspi0_sio5'
 *  0b000101010..Configure function 'u_xspi0_sio6'
 *  0b000101011..Configure function 'u_xspi0_sio7'
 *  0b000101100..Configure function 'u_xspi0_sclk'
 *  0b000101101..Configure function 'u_xspi0_ssn1'
 *  0b000101110..Configure function 'u_xspi0_ssn2'
 *  0b000101111..Configure function 'u_xspi0_ds'
 *  0b001100011..Configure function 'u_gpio_gpo25'
 *  0b010010111..Configure function 'u_gpio_sec_gpo25'
 *  0b011001010..Configure function 'u_sct_out0'
 *  0b011001011..Configure function 'u_sct_out1'
 *  0b011001100..Configure function 'u_sct_out2'
 *  0b011001101..Configure function 'u_sct_out3'
 *  0b011001110..Configure function 'u_sct_out4'
 *  0b011001111..Configure function 'u_sct_out5'
 *  0b011010000..Configure function 'u_sct_out6'
 *  0b011010001..Configure function 'u_sct_out7'
 *  0b011010010..Configure function 'u_sct_out8'
 *  0b011010011..Configure function 'u_sct_out9'
 *  0b011010100..Configure function 'u_sct_gpi0'
 *  0b011010101..Configure function 'u_sct_gpi1'
 *  0b011010110..Configure function 'u_sct_gpi2'
 *  0b011010111..Configure function 'u_sct_gpi3'
 *  0b011011000..Configure function 'u_sct_gpi4'
 *  0b011011001..Configure function 'u_sct_gpi5'
 *  0b011011010..Configure function 'u_sct_gpi6'
 *  0b011011011..Configure function 'u_sct_gpi7'
 *  0b011110101..Configure function 'u_ct1_cap9'
 *  0b100101001..Configure function 'u_ct4_cap13'
 *  0b101001010..Configure function 'u_dss_gpo_out0'
 *  0b101101101..Configure function 'u_audio_pwm_data1'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM2_01_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_01_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM2_01_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM2_02_MUX_CFG - swm2_02 output select register */
/*! @{ */

#define DSWM_SWM2_02_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM2_02_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000100100..Configure function 'u_xspi0_sio0'
 *  0b000100101..Configure function 'u_xspi0_sio1'
 *  0b000100110..Configure function 'u_xspi0_sio2'
 *  0b000100111..Configure function 'u_xspi0_sio3'
 *  0b000101000..Configure function 'u_xspi0_sio4'
 *  0b000101001..Configure function 'u_xspi0_sio5'
 *  0b000101010..Configure function 'u_xspi0_sio6'
 *  0b000101011..Configure function 'u_xspi0_sio7'
 *  0b000101100..Configure function 'u_xspi0_sclk'
 *  0b000101101..Configure function 'u_xspi0_ssn1'
 *  0b000101110..Configure function 'u_xspi0_ssn2'
 *  0b000101111..Configure function 'u_xspi0_ds'
 *  0b001100100..Configure function 'u_gpio_gpo26'
 *  0b010011000..Configure function 'u_gpio_sec_gpo26'
 *  0b011110110..Configure function 'u_ct1_cap10'
 *  0b100101010..Configure function 'u_ct4_cap14'
 *  0b101000000..Configure function 'u_nss_dbgo_out0'
 *  0b101001011..Configure function 'u_dss_gpo_out1'
 *  0b101101110..Configure function 'u_audio_pwm_data2'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM2_02_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_02_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM2_02_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM2_03_MUX_CFG - swm2_03 output select register */
/*! @{ */

#define DSWM_SWM2_03_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM2_03_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000100100..Configure function 'u_xspi0_sio0'
 *  0b000100101..Configure function 'u_xspi0_sio1'
 *  0b000100110..Configure function 'u_xspi0_sio2'
 *  0b000100111..Configure function 'u_xspi0_sio3'
 *  0b000101000..Configure function 'u_xspi0_sio4'
 *  0b000101001..Configure function 'u_xspi0_sio5'
 *  0b000101010..Configure function 'u_xspi0_sio6'
 *  0b000101011..Configure function 'u_xspi0_sio7'
 *  0b000101100..Configure function 'u_xspi0_sclk'
 *  0b000101101..Configure function 'u_xspi0_ssn1'
 *  0b000101110..Configure function 'u_xspi0_ssn2'
 *  0b000101111..Configure function 'u_xspi0_ds'
 *  0b001100101..Configure function 'u_gpio_gpo27'
 *  0b010011001..Configure function 'u_gpio_sec_gpo27'
 *  0b011110111..Configure function 'u_ct1_cap11'
 *  0b100101011..Configure function 'u_ct4_cap15'
 *  0b101000001..Configure function 'u_nss_dbgo_out1'
 *  0b101001100..Configure function 'u_dss_gpo_out2'
 *  0b101011010..Configure function 'u_dsp3_uart0'
 *  0b101101111..Configure function 'u_audio_pwm_data3'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM2_03_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_03_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM2_03_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM2_04_MUX_CFG - swm2_04 output select register */
/*! @{ */

#define DSWM_SWM2_04_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM2_04_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000100100..Configure function 'u_xspi0_sio0'
 *  0b000100101..Configure function 'u_xspi0_sio1'
 *  0b000100110..Configure function 'u_xspi0_sio2'
 *  0b000100111..Configure function 'u_xspi0_sio3'
 *  0b000101000..Configure function 'u_xspi0_sio4'
 *  0b000101001..Configure function 'u_xspi0_sio5'
 *  0b000101010..Configure function 'u_xspi0_sio6'
 *  0b000101011..Configure function 'u_xspi0_sio7'
 *  0b000101100..Configure function 'u_xspi0_sclk'
 *  0b000101101..Configure function 'u_xspi0_ssn1'
 *  0b000101110..Configure function 'u_xspi0_ssn2'
 *  0b000101111..Configure function 'u_xspi0_ds'
 *  0b001100110..Configure function 'u_gpio_gpo28'
 *  0b010011010..Configure function 'u_gpio_sec_gpo28'
 *  0b011111000..Configure function 'u_ct1_cap12'
 *  0b101000010..Configure function 'u_nss_dbgo_out2'
 *  0b101001101..Configure function 'u_dss_gpo_out3'
 *  0b101011011..Configure function 'u_dsp3_uart1'
 *  0b101101011..Configure function 'u_dbg_clk_pll_n'
 *  0b101110000..Configure function 'u_audio_pwm_data4'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM2_04_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_04_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM2_04_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM2_05_MUX_CFG - swm2_05 output select register */
/*! @{ */

#define DSWM_SWM2_05_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM2_05_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000100100..Configure function 'u_xspi0_sio0'
 *  0b000100101..Configure function 'u_xspi0_sio1'
 *  0b000100110..Configure function 'u_xspi0_sio2'
 *  0b000100111..Configure function 'u_xspi0_sio3'
 *  0b000101000..Configure function 'u_xspi0_sio4'
 *  0b000101001..Configure function 'u_xspi0_sio5'
 *  0b000101010..Configure function 'u_xspi0_sio6'
 *  0b000101011..Configure function 'u_xspi0_sio7'
 *  0b000101100..Configure function 'u_xspi0_sclk'
 *  0b000101101..Configure function 'u_xspi0_ssn1'
 *  0b000101110..Configure function 'u_xspi0_ssn2'
 *  0b000101111..Configure function 'u_xspi0_ds'
 *  0b001100111..Configure function 'u_gpio_gpo29'
 *  0b010011011..Configure function 'u_gpio_sec_gpo29'
 *  0b011111001..Configure function 'u_ct1_cap13'
 *  0b101000011..Configure function 'u_nss_dbgo_out3'
 *  0b101001110..Configure function 'u_dss_gpo_out4'
 *  0b101011010..Configure function 'u_dsp3_uart0'
 *  0b101101010..Configure function 'u_dbg_clk_pll'
 *  0b101110001..Configure function 'u_audio_pwm_data5'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM2_05_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_05_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM2_05_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM2_06_MUX_CFG - swm2_06 output select register */
/*! @{ */

#define DSWM_SWM2_06_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM2_06_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000001110..Configure function 'u_fc2_sck'
 *  0b000001111..Configure function 'u_fc2_rxd_sda_mosi_csn'
 *  0b000010000..Configure function 'u_fc2_txd_scl_miso_io0'
 *  0b000010001..Configure function 'u_fc2_cts_sdax_sseln0_io1'
 *  0b000010010..Configure function 'u_fc2_rts_sclx_sseln1_io2'
 *  0b000010011..Configure function 'u_fc2_sseln2_io3'
 *  0b000010100..Configure function 'u_fc2_sseln3'
 *  0b000010101..Configure function 'u_fc3_sck'
 *  0b000010110..Configure function 'u_fc3_rxd_sda_mosi_csn'
 *  0b000010111..Configure function 'u_fc3_txd_scl_miso_io0'
 *  0b000011000..Configure function 'u_fc3_cts_sdax_sseln0_io1'
 *  0b000011001..Configure function 'u_fc3_rts_sclx_sseln1_io2'
 *  0b000011010..Configure function 'u_fc4_sck'
 *  0b000011011..Configure function 'u_fc4_rxd_sda_mosi_csn'
 *  0b000011100..Configure function 'u_fc4_txd_scl_miso_io0'
 *  0b000011101..Configure function 'u_fc4_cts_sdax_sseln0_io1'
 *  0b000011110..Configure function 'u_fc4_rts_sclx_sseln1_io2'
 *  0b000011111..Configure function 'u_fc5_sck'
 *  0b000100000..Configure function 'u_fc5_rxd_sda_mosi_csn'
 *  0b000100001..Configure function 'u_fc5_txd_scl_miso_io0'
 *  0b000100010..Configure function 'u_fc5_cts_sdax_sseln0_io1'
 *  0b000100011..Configure function 'u_fc5_rts_sclx_sseln1_io2'
 *  0b000100100..Configure function 'u_xspi0_sio0'
 *  0b000100101..Configure function 'u_xspi0_sio1'
 *  0b000100110..Configure function 'u_xspi0_sio2'
 *  0b000100111..Configure function 'u_xspi0_sio3'
 *  0b000101000..Configure function 'u_xspi0_sio4'
 *  0b000101001..Configure function 'u_xspi0_sio5'
 *  0b000101010..Configure function 'u_xspi0_sio6'
 *  0b000101011..Configure function 'u_xspi0_sio7'
 *  0b000101100..Configure function 'u_xspi0_sclk'
 *  0b000101101..Configure function 'u_xspi0_ssn1'
 *  0b000101110..Configure function 'u_xspi0_ssn2'
 *  0b000101111..Configure function 'u_xspi0_ds'
 *  0b001101000..Configure function 'u_gpio_gpo30'
 *  0b010011100..Configure function 'u_gpio_sec_gpo30'
 *  0b011111010..Configure function 'u_ct1_cap14'
 *  0b101000100..Configure function 'u_nss_dbgo_out4'
 *  0b101001111..Configure function 'u_dss_gpo_out5'
 *  0b101011011..Configure function 'u_dsp3_uart1'
 *  0b101101001..Configure function 'u_dbg_clk_nss_fro_n'
 *  0b101110010..Configure function 'u_audio_pwm_data6'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM2_06_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_06_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM2_06_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM2_07_MUX_CFG - swm2_07 output select register */
/*! @{ */

#define DSWM_SWM2_07_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM2_07_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000001110..Configure function 'u_fc2_sck'
 *  0b000001111..Configure function 'u_fc2_rxd_sda_mosi_csn'
 *  0b000010000..Configure function 'u_fc2_txd_scl_miso_io0'
 *  0b000010001..Configure function 'u_fc2_cts_sdax_sseln0_io1'
 *  0b000010010..Configure function 'u_fc2_rts_sclx_sseln1_io2'
 *  0b000010011..Configure function 'u_fc2_sseln2_io3'
 *  0b000010100..Configure function 'u_fc2_sseln3'
 *  0b000010101..Configure function 'u_fc3_sck'
 *  0b000010110..Configure function 'u_fc3_rxd_sda_mosi_csn'
 *  0b000010111..Configure function 'u_fc3_txd_scl_miso_io0'
 *  0b000011000..Configure function 'u_fc3_cts_sdax_sseln0_io1'
 *  0b000011001..Configure function 'u_fc3_rts_sclx_sseln1_io2'
 *  0b000011010..Configure function 'u_fc4_sck'
 *  0b000011011..Configure function 'u_fc4_rxd_sda_mosi_csn'
 *  0b000011100..Configure function 'u_fc4_txd_scl_miso_io0'
 *  0b000011101..Configure function 'u_fc4_cts_sdax_sseln0_io1'
 *  0b000011110..Configure function 'u_fc4_rts_sclx_sseln1_io2'
 *  0b000011111..Configure function 'u_fc5_sck'
 *  0b000100000..Configure function 'u_fc5_rxd_sda_mosi_csn'
 *  0b000100001..Configure function 'u_fc5_txd_scl_miso_io0'
 *  0b000100010..Configure function 'u_fc5_cts_sdax_sseln0_io1'
 *  0b000100011..Configure function 'u_fc5_rts_sclx_sseln1_io2'
 *  0b000100100..Configure function 'u_xspi0_sio0'
 *  0b000100101..Configure function 'u_xspi0_sio1'
 *  0b000100110..Configure function 'u_xspi0_sio2'
 *  0b000100111..Configure function 'u_xspi0_sio3'
 *  0b000101000..Configure function 'u_xspi0_sio4'
 *  0b000101001..Configure function 'u_xspi0_sio5'
 *  0b000101010..Configure function 'u_xspi0_sio6'
 *  0b000101011..Configure function 'u_xspi0_sio7'
 *  0b000101100..Configure function 'u_xspi0_sclk'
 *  0b000101101..Configure function 'u_xspi0_ssn1'
 *  0b000101110..Configure function 'u_xspi0_ssn2'
 *  0b000101111..Configure function 'u_xspi0_ds'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001101001..Configure function 'u_gpio_gpo31'
 *  0b010011101..Configure function 'u_gpio_sec_gpo31'
 *  0b011111011..Configure function 'u_ct1_cap15'
 *  0b101000101..Configure function 'u_nss_dbgo_out5'
 *  0b101010000..Configure function 'u_dss_gpo_out6'
 *  0b101101000..Configure function 'u_dbg_clk_nss_fro'
 *  0b101110011..Configure function 'u_audio_pwm_data7'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM2_07_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_07_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM2_07_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM2_08_MUX_CFG - swm2_08 output select register */
/*! @{ */

#define DSWM_SWM2_08_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM2_08_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b000100100..Configure function 'u_xspi0_sio0'
 *  0b000100101..Configure function 'u_xspi0_sio1'
 *  0b000100110..Configure function 'u_xspi0_sio2'
 *  0b000100111..Configure function 'u_xspi0_sio3'
 *  0b000101000..Configure function 'u_xspi0_sio4'
 *  0b000101001..Configure function 'u_xspi0_sio5'
 *  0b000101010..Configure function 'u_xspi0_sio6'
 *  0b000101011..Configure function 'u_xspi0_sio7'
 *  0b000101100..Configure function 'u_xspi0_sclk'
 *  0b000101101..Configure function 'u_xspi0_ssn1'
 *  0b000101110..Configure function 'u_xspi0_ssn2'
 *  0b000101111..Configure function 'u_xspi0_ds'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001101010..Configure function 'u_gpio_gpo32'
 *  0b010011110..Configure function 'u_gpio_sec_gpo32'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111010..Configure function 'u_dp0_sdi'
 *  0b010111011..Configure function 'u_dp0_sdo'
 *  0b010111100..Configure function 'u_dp0_frame'
 *  0b010111101..Configure function 'u_dp0_clk'
 *  0b011000110..Configure function 'u_dp3_sdi'
 *  0b011000111..Configure function 'u_dp3_sdo'
 *  0b011001000..Configure function 'u_dp3_frame'
 *  0b011001001..Configure function 'u_dp3_clk'
 *  0b011111100..Configure function 'u_ct2_cap0'
 *  0b101000110..Configure function 'u_nss_dbgo_out6'
 *  0b101010001..Configure function 'u_dss_gpo_out7'
 *  0b101100111..Configure function 'u_dbg_clk_fro_n'
 *  0b101110100..Configure function 'u_audio_pwm_ws'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM2_08_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_08_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM2_08_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM2_09_MUX_CFG - swm2_09 output select register */
/*! @{ */

#define DSWM_SWM2_09_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM2_09_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b000100100..Configure function 'u_xspi0_sio0'
 *  0b000100101..Configure function 'u_xspi0_sio1'
 *  0b000100110..Configure function 'u_xspi0_sio2'
 *  0b000100111..Configure function 'u_xspi0_sio3'
 *  0b000101000..Configure function 'u_xspi0_sio4'
 *  0b000101001..Configure function 'u_xspi0_sio5'
 *  0b000101010..Configure function 'u_xspi0_sio6'
 *  0b000101011..Configure function 'u_xspi0_sio7'
 *  0b000101100..Configure function 'u_xspi0_sclk'
 *  0b000101101..Configure function 'u_xspi0_ssn1'
 *  0b000101110..Configure function 'u_xspi0_ssn2'
 *  0b000101111..Configure function 'u_xspi0_ds'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001101011..Configure function 'u_gpio_gpo33'
 *  0b010011111..Configure function 'u_gpio_sec_gpo33'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111010..Configure function 'u_dp0_sdi'
 *  0b010111011..Configure function 'u_dp0_sdo'
 *  0b010111100..Configure function 'u_dp0_frame'
 *  0b010111101..Configure function 'u_dp0_clk'
 *  0b011000110..Configure function 'u_dp3_sdi'
 *  0b011000111..Configure function 'u_dp3_sdo'
 *  0b011001000..Configure function 'u_dp3_frame'
 *  0b011001001..Configure function 'u_dp3_clk'
 *  0b011111101..Configure function 'u_ct2_cap1'
 *  0b101000111..Configure function 'u_nss_dbgo_out7'
 *  0b101010010..Configure function 'u_dss_gpi_in0'
 *  0b101100110..Configure function 'u_dbg_clk_fro'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM2_09_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_09_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM2_09_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM2_10_MUX_CFG - swm2_10 output select register */
/*! @{ */

#define DSWM_SWM2_10_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM2_10_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b000100100..Configure function 'u_xspi0_sio0'
 *  0b000100101..Configure function 'u_xspi0_sio1'
 *  0b000100110..Configure function 'u_xspi0_sio2'
 *  0b000100111..Configure function 'u_xspi0_sio3'
 *  0b000101000..Configure function 'u_xspi0_sio4'
 *  0b000101001..Configure function 'u_xspi0_sio5'
 *  0b000101010..Configure function 'u_xspi0_sio6'
 *  0b000101011..Configure function 'u_xspi0_sio7'
 *  0b000101100..Configure function 'u_xspi0_sclk'
 *  0b000101101..Configure function 'u_xspi0_ssn1'
 *  0b000101110..Configure function 'u_xspi0_ssn2'
 *  0b000101111..Configure function 'u_xspi0_ds'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001101100..Configure function 'u_gpio_gpo34'
 *  0b010100000..Configure function 'u_gpio_sec_gpo34'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111010..Configure function 'u_dp0_sdi'
 *  0b010111011..Configure function 'u_dp0_sdo'
 *  0b010111100..Configure function 'u_dp0_frame'
 *  0b010111101..Configure function 'u_dp0_clk'
 *  0b011000110..Configure function 'u_dp3_sdi'
 *  0b011000111..Configure function 'u_dp3_sdo'
 *  0b011001000..Configure function 'u_dp3_frame'
 *  0b011001001..Configure function 'u_dp3_clk'
 *  0b011111110..Configure function 'u_ct2_cap2'
 *  0b101001000..Configure function 'u_nss_dbgo_cm55_so_txdata'
 *  0b101010011..Configure function 'u_dss_gpi_in1'
 *  0b101011010..Configure function 'u_dsp3_uart0'
 *  0b101100101..Configure function 'u_dbg_clk_frol_n'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM2_10_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_10_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM2_10_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM2_11_MUX_CFG - swm2_11 output select register */
/*! @{ */

#define DSWM_SWM2_11_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM2_11_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b000100100..Configure function 'u_xspi0_sio0'
 *  0b000100101..Configure function 'u_xspi0_sio1'
 *  0b000100110..Configure function 'u_xspi0_sio2'
 *  0b000100111..Configure function 'u_xspi0_sio3'
 *  0b000101000..Configure function 'u_xspi0_sio4'
 *  0b000101001..Configure function 'u_xspi0_sio5'
 *  0b000101010..Configure function 'u_xspi0_sio6'
 *  0b000101011..Configure function 'u_xspi0_sio7'
 *  0b000101100..Configure function 'u_xspi0_sclk'
 *  0b000101101..Configure function 'u_xspi0_ssn1'
 *  0b000101110..Configure function 'u_xspi0_ssn2'
 *  0b000101111..Configure function 'u_xspi0_ds'
 *  0b000110000..Configure function 'u_xspi0_int'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001101101..Configure function 'u_gpio_gpo35'
 *  0b010100001..Configure function 'u_gpio_sec_gpo35'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111010..Configure function 'u_dp0_sdi'
 *  0b010111011..Configure function 'u_dp0_sdo'
 *  0b010111100..Configure function 'u_dp0_frame'
 *  0b010111101..Configure function 'u_dp0_clk'
 *  0b011000110..Configure function 'u_dp3_sdi'
 *  0b011000111..Configure function 'u_dp3_sdo'
 *  0b011001000..Configure function 'u_dp3_frame'
 *  0b011001001..Configure function 'u_dp3_clk'
 *  0b011111111..Configure function 'u_ct2_cap3'
 *  0b101001001..Configure function 'u_nss_dbgo_xsp_so_txdata'
 *  0b101010100..Configure function 'u_dss_gpi_in2'
 *  0b101011011..Configure function 'u_dsp3_uart1'
 *  0b101100100..Configure function 'u_dbg_clk_frol'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM2_11_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_11_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM2_11_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM3_00_MUX_CFG - swm3_00 output select register */
/*! @{ */

#define DSWM_SWM3_00_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM3_00_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001101110..Configure function 'u_gpio_gpo36'
 *  0b010100010..Configure function 'u_gpio_sec_gpo36'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111110..Configure function 'u_dp1_sdi'
 *  0b010111111..Configure function 'u_dp1_sdo'
 *  0b011000000..Configure function 'u_dp1_frame'
 *  0b011000001..Configure function 'u_dp1_clk'
 *  0b011000010..Configure function 'u_dp2_sdi'
 *  0b011000011..Configure function 'u_dp2_sdo'
 *  0b011000100..Configure function 'u_dp2_frame'
 *  0b011000101..Configure function 'u_dp2_clk'
 *  0b100000000..Configure function 'u_ct2_cap4'
 *  0b101010101..Configure function 'u_dss_gpi_in3'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM3_00_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_00_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM3_00_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM3_01_MUX_CFG - swm3_01 output select register */
/*! @{ */

#define DSWM_SWM3_01_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM3_01_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001101111..Configure function 'u_gpio_gpo37'
 *  0b010100011..Configure function 'u_gpio_sec_gpo37'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111110..Configure function 'u_dp1_sdi'
 *  0b010111111..Configure function 'u_dp1_sdo'
 *  0b011000000..Configure function 'u_dp1_frame'
 *  0b011000001..Configure function 'u_dp1_clk'
 *  0b011000010..Configure function 'u_dp2_sdi'
 *  0b011000011..Configure function 'u_dp2_sdo'
 *  0b011000100..Configure function 'u_dp2_frame'
 *  0b011000101..Configure function 'u_dp2_clk'
 *  0b100000001..Configure function 'u_ct2_cap5'
 *  0b101010110..Configure function 'u_dss_gpi_in4'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM3_01_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_01_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM3_01_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM3_02_MUX_CFG - swm3_02 output select register */
/*! @{ */

#define DSWM_SWM3_02_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM3_02_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b000001110..Configure function 'u_fc2_sck'
 *  0b000001111..Configure function 'u_fc2_rxd_sda_mosi_csn'
 *  0b000010000..Configure function 'u_fc2_txd_scl_miso_io0'
 *  0b000010001..Configure function 'u_fc2_cts_sdax_sseln0_io1'
 *  0b000010010..Configure function 'u_fc2_rts_sclx_sseln1_io2'
 *  0b000010011..Configure function 'u_fc2_sseln2_io3'
 *  0b000010100..Configure function 'u_fc2_sseln3'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001110000..Configure function 'u_gpio_gpo38'
 *  0b010100100..Configure function 'u_gpio_sec_gpo38'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111110..Configure function 'u_dp1_sdi'
 *  0b010111111..Configure function 'u_dp1_sdo'
 *  0b011000000..Configure function 'u_dp1_frame'
 *  0b011000001..Configure function 'u_dp1_clk'
 *  0b011000010..Configure function 'u_dp2_sdi'
 *  0b011000011..Configure function 'u_dp2_sdo'
 *  0b011000100..Configure function 'u_dp2_frame'
 *  0b011000101..Configure function 'u_dp2_clk'
 *  0b100000010..Configure function 'u_ct2_cap6'
 *  0b101000000..Configure function 'u_nss_dbgo_out0'
 *  0b101010111..Configure function 'u_dss_gpi_in5'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM3_02_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_02_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM3_02_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM3_03_MUX_CFG - swm3_03 output select register */
/*! @{ */

#define DSWM_SWM3_03_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM3_03_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000110..Configure function 'u_fc0_sseln3'
 *  0b000001110..Configure function 'u_fc2_sck'
 *  0b000001111..Configure function 'u_fc2_rxd_sda_mosi_csn'
 *  0b000010000..Configure function 'u_fc2_txd_scl_miso_io0'
 *  0b000010001..Configure function 'u_fc2_cts_sdax_sseln0_io1'
 *  0b000010010..Configure function 'u_fc2_rts_sclx_sseln1_io2'
 *  0b000010011..Configure function 'u_fc2_sseln2_io3'
 *  0b000010100..Configure function 'u_fc2_sseln3'
 *  0b001110001..Configure function 'u_gpio_gpo39'
 *  0b010100101..Configure function 'u_gpio_sec_gpo39'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111110..Configure function 'u_dp1_sdi'
 *  0b010111111..Configure function 'u_dp1_sdo'
 *  0b011000000..Configure function 'u_dp1_frame'
 *  0b011000001..Configure function 'u_dp1_clk'
 *  0b011000010..Configure function 'u_dp2_sdi'
 *  0b011000011..Configure function 'u_dp2_sdo'
 *  0b011000100..Configure function 'u_dp2_frame'
 *  0b011000101..Configure function 'u_dp2_clk'
 *  0b100000011..Configure function 'u_ct2_cap7'
 *  0b101000001..Configure function 'u_nss_dbgo_out1'
 *  0b101011000..Configure function 'u_dss_gpi_in6'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM3_03_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_03_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM3_03_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM3_04_MUX_CFG - swm3_04 output select register */
/*! @{ */

#define DSWM_SWM3_04_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM3_04_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000111..Configure function 'u_fc1_sck'
 *  0b000001000..Configure function 'u_fc1_rxd_sda_mosi_csn'
 *  0b000001001..Configure function 'u_fc1_txd_scl_miso_io0'
 *  0b000001010..Configure function 'u_fc1_cts_sdax_sseln0_io1'
 *  0b000001011..Configure function 'u_fc1_rts_sclx_sseln1_io2'
 *  0b000001100..Configure function 'u_fc1_sseln2_io3'
 *  0b000001101..Configure function 'u_fc1_sseln3'
 *  0b001110010..Configure function 'u_gpio_gpo40'
 *  0b010100110..Configure function 'u_gpio_sec_gpo40'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111110..Configure function 'u_dp1_sdi'
 *  0b010111111..Configure function 'u_dp1_sdo'
 *  0b011000000..Configure function 'u_dp1_frame'
 *  0b011000001..Configure function 'u_dp1_clk'
 *  0b100000100..Configure function 'u_ct2_cap8'
 *  0b101000010..Configure function 'u_nss_dbgo_out2'
 *  0b101011001..Configure function 'u_dss_gpi_in7'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM3_04_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_04_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM3_04_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM3_05_MUX_CFG - swm3_05 output select register */
/*! @{ */

#define DSWM_SWM3_05_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM3_05_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000111..Configure function 'u_fc1_sck'
 *  0b000001000..Configure function 'u_fc1_rxd_sda_mosi_csn'
 *  0b000001001..Configure function 'u_fc1_txd_scl_miso_io0'
 *  0b000001010..Configure function 'u_fc1_cts_sdax_sseln0_io1'
 *  0b000001011..Configure function 'u_fc1_rts_sclx_sseln1_io2'
 *  0b000001100..Configure function 'u_fc1_sseln2_io3'
 *  0b000001101..Configure function 'u_fc1_sseln3'
 *  0b001110011..Configure function 'u_gpio_gpo41'
 *  0b010100111..Configure function 'u_gpio_sec_gpo41'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111110..Configure function 'u_dp1_sdi'
 *  0b010111111..Configure function 'u_dp1_sdo'
 *  0b011000000..Configure function 'u_dp1_frame'
 *  0b011000001..Configure function 'u_dp1_clk'
 *  0b100000101..Configure function 'u_ct2_cap9'
 *  0b101000011..Configure function 'u_nss_dbgo_out3'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM3_05_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_05_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM3_05_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM3_06_MUX_CFG - swm3_06 output select register */
/*! @{ */

#define DSWM_SWM3_06_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM3_06_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000111..Configure function 'u_fc1_sck'
 *  0b000001000..Configure function 'u_fc1_rxd_sda_mosi_csn'
 *  0b000001001..Configure function 'u_fc1_txd_scl_miso_io0'
 *  0b000001010..Configure function 'u_fc1_cts_sdax_sseln0_io1'
 *  0b000001011..Configure function 'u_fc1_rts_sclx_sseln1_io2'
 *  0b000001100..Configure function 'u_fc1_sseln2_io3'
 *  0b000001101..Configure function 'u_fc1_sseln3'
 *  0b000010101..Configure function 'u_fc3_sck'
 *  0b000010110..Configure function 'u_fc3_rxd_sda_mosi_csn'
 *  0b000010111..Configure function 'u_fc3_txd_scl_miso_io0'
 *  0b000011000..Configure function 'u_fc3_cts_sdax_sseln0_io1'
 *  0b000011001..Configure function 'u_fc3_rts_sclx_sseln1_io2'
 *  0b001110100..Configure function 'u_gpio_gpo42'
 *  0b010101000..Configure function 'u_gpio_sec_gpo42'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111110..Configure function 'u_dp1_sdi'
 *  0b010111111..Configure function 'u_dp1_sdo'
 *  0b011000000..Configure function 'u_dp1_frame'
 *  0b011000001..Configure function 'u_dp1_clk'
 *  0b100000110..Configure function 'u_ct2_cap10'
 *  0b101000100..Configure function 'u_nss_dbgo_out4'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM3_06_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_06_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM3_06_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM3_07_MUX_CFG - swm3_07 output select register */
/*! @{ */

#define DSWM_SWM3_07_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM3_07_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000000111..Configure function 'u_fc1_sck'
 *  0b000001000..Configure function 'u_fc1_rxd_sda_mosi_csn'
 *  0b000001001..Configure function 'u_fc1_txd_scl_miso_io0'
 *  0b000001010..Configure function 'u_fc1_cts_sdax_sseln0_io1'
 *  0b000001011..Configure function 'u_fc1_rts_sclx_sseln1_io2'
 *  0b000001100..Configure function 'u_fc1_sseln2_io3'
 *  0b000001101..Configure function 'u_fc1_sseln3'
 *  0b000010101..Configure function 'u_fc3_sck'
 *  0b000010110..Configure function 'u_fc3_rxd_sda_mosi_csn'
 *  0b000010111..Configure function 'u_fc3_txd_scl_miso_io0'
 *  0b000011000..Configure function 'u_fc3_cts_sdax_sseln0_io1'
 *  0b000011001..Configure function 'u_fc3_rts_sclx_sseln1_io2'
 *  0b001110101..Configure function 'u_gpio_gpo43'
 *  0b010101001..Configure function 'u_gpio_sec_gpo43'
 *  0b010110010..Configure function 'u_dmic_tdm0'
 *  0b010110011..Configure function 'u_dmic_tdm1'
 *  0b010110100..Configure function 'u_dmic_tdm2'
 *  0b010110101..Configure function 'u_dmic_tdm3'
 *  0b010110110..Configure function 'u_dmic_clk0'
 *  0b010110111..Configure function 'u_dmic_clk1'
 *  0b010111000..Configure function 'u_dmic_clk2'
 *  0b010111001..Configure function 'u_dmic_clk3'
 *  0b010111110..Configure function 'u_dp1_sdi'
 *  0b010111111..Configure function 'u_dp1_sdo'
 *  0b011000000..Configure function 'u_dp1_frame'
 *  0b011000001..Configure function 'u_dp1_clk'
 *  0b100000111..Configure function 'u_ct2_cap11'
 *  0b101000101..Configure function 'u_nss_dbgo_out5'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM3_07_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_07_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM3_07_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM3_08_MUX_CFG - swm3_08 output select register */
/*! @{ */

#define DSWM_SWM3_08_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM3_08_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000001110..Configure function 'u_fc2_sck'
 *  0b000001111..Configure function 'u_fc2_rxd_sda_mosi_csn'
 *  0b000010000..Configure function 'u_fc2_txd_scl_miso_io0'
 *  0b000010001..Configure function 'u_fc2_cts_sdax_sseln0_io1'
 *  0b000010010..Configure function 'u_fc2_rts_sclx_sseln1_io2'
 *  0b000010011..Configure function 'u_fc2_sseln2_io3'
 *  0b000010100..Configure function 'u_fc2_sseln3'
 *  0b000011010..Configure function 'u_fc4_sck'
 *  0b000011011..Configure function 'u_fc4_rxd_sda_mosi_csn'
 *  0b000011100..Configure function 'u_fc4_txd_scl_miso_io0'
 *  0b000011101..Configure function 'u_fc4_cts_sdax_sseln0_io1'
 *  0b000011110..Configure function 'u_fc4_rts_sclx_sseln1_io2'
 *  0b001110110..Configure function 'u_gpio_gpo44'
 *  0b010101010..Configure function 'u_gpio_sec_gpo44'
 *  0b011000110..Configure function 'u_dp3_sdi'
 *  0b011000111..Configure function 'u_dp3_sdo'
 *  0b011001000..Configure function 'u_dp3_frame'
 *  0b011001001..Configure function 'u_dp3_clk'
 *  0b100001000..Configure function 'u_ct2_cap12'
 *  0b101000110..Configure function 'u_nss_dbgo_out6'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM3_08_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_08_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM3_08_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM3_09_MUX_CFG - swm3_09 output select register */
/*! @{ */

#define DSWM_SWM3_09_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM3_09_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000000000..Configure function 'u_fc0_sck'
 *  0b000000001..Configure function 'u_fc0_rxd_sda_mosi_csn'
 *  0b000000010..Configure function 'u_fc0_txd_scl_miso_io0'
 *  0b000000011..Configure function 'u_fc0_cts_sdax_sseln0_io1'
 *  0b000000100..Configure function 'u_fc0_rts_sclx_sseln1_io2'
 *  0b000000101..Configure function 'u_fc0_sseln2_io3'
 *  0b000001110..Configure function 'u_fc2_sck'
 *  0b000001111..Configure function 'u_fc2_rxd_sda_mosi_csn'
 *  0b000010000..Configure function 'u_fc2_txd_scl_miso_io0'
 *  0b000010001..Configure function 'u_fc2_cts_sdax_sseln0_io1'
 *  0b000010010..Configure function 'u_fc2_rts_sclx_sseln1_io2'
 *  0b000010011..Configure function 'u_fc2_sseln2_io3'
 *  0b000010100..Configure function 'u_fc2_sseln3'
 *  0b000011010..Configure function 'u_fc4_sck'
 *  0b000011011..Configure function 'u_fc4_rxd_sda_mosi_csn'
 *  0b000011100..Configure function 'u_fc4_txd_scl_miso_io0'
 *  0b000011101..Configure function 'u_fc4_cts_sdax_sseln0_io1'
 *  0b000011110..Configure function 'u_fc4_rts_sclx_sseln1_io2'
 *  0b001110111..Configure function 'u_gpio_gpo45'
 *  0b010101011..Configure function 'u_gpio_sec_gpo45'
 *  0b011000110..Configure function 'u_dp3_sdi'
 *  0b011000111..Configure function 'u_dp3_sdo'
 *  0b011001000..Configure function 'u_dp3_frame'
 *  0b011001001..Configure function 'u_dp3_clk'
 *  0b100001001..Configure function 'u_ct2_cap13'
 *  0b101000111..Configure function 'u_nss_dbgo_out7'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM3_09_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_09_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM3_09_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM3_10_MUX_CFG - swm3_10 output select register */
/*! @{ */

#define DSWM_SWM3_10_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM3_10_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000001110..Configure function 'u_fc2_sck'
 *  0b000001111..Configure function 'u_fc2_rxd_sda_mosi_csn'
 *  0b000010000..Configure function 'u_fc2_txd_scl_miso_io0'
 *  0b000010001..Configure function 'u_fc2_cts_sdax_sseln0_io1'
 *  0b000010010..Configure function 'u_fc2_rts_sclx_sseln1_io2'
 *  0b000010011..Configure function 'u_fc2_sseln2_io3'
 *  0b000010100..Configure function 'u_fc2_sseln3'
 *  0b000011111..Configure function 'u_fc5_sck'
 *  0b000100000..Configure function 'u_fc5_rxd_sda_mosi_csn'
 *  0b000100001..Configure function 'u_fc5_txd_scl_miso_io0'
 *  0b000100010..Configure function 'u_fc5_cts_sdax_sseln0_io1'
 *  0b000100011..Configure function 'u_fc5_rts_sclx_sseln1_io2'
 *  0b001111000..Configure function 'u_gpio_gpo46'
 *  0b010101100..Configure function 'u_gpio_sec_gpo46'
 *  0b011000110..Configure function 'u_dp3_sdi'
 *  0b011000111..Configure function 'u_dp3_sdo'
 *  0b011001000..Configure function 'u_dp3_frame'
 *  0b011001001..Configure function 'u_dp3_clk'
 *  0b100001010..Configure function 'u_ct2_cap14'
 *  0b101001000..Configure function 'u_nss_dbgo_cm55_so_txdata'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM3_10_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_10_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM3_10_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM3_11_MUX_CFG - swm3_11 output select register */
/*! @{ */

#define DSWM_SWM3_11_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM3_11_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000001110..Configure function 'u_fc2_sck'
 *  0b000001111..Configure function 'u_fc2_rxd_sda_mosi_csn'
 *  0b000010000..Configure function 'u_fc2_txd_scl_miso_io0'
 *  0b000010001..Configure function 'u_fc2_cts_sdax_sseln0_io1'
 *  0b000010010..Configure function 'u_fc2_rts_sclx_sseln1_io2'
 *  0b000010011..Configure function 'u_fc2_sseln2_io3'
 *  0b000010100..Configure function 'u_fc2_sseln3'
 *  0b000011111..Configure function 'u_fc5_sck'
 *  0b000100000..Configure function 'u_fc5_rxd_sda_mosi_csn'
 *  0b000100001..Configure function 'u_fc5_txd_scl_miso_io0'
 *  0b000100010..Configure function 'u_fc5_cts_sdax_sseln0_io1'
 *  0b000100011..Configure function 'u_fc5_rts_sclx_sseln1_io2'
 *  0b001111001..Configure function 'u_gpio_gpo47'
 *  0b010101101..Configure function 'u_gpio_sec_gpo47'
 *  0b011000110..Configure function 'u_dp3_sdi'
 *  0b011000111..Configure function 'u_dp3_sdo'
 *  0b011001000..Configure function 'u_dp3_frame'
 *  0b011001001..Configure function 'u_dp3_clk'
 *  0b100001011..Configure function 'u_ct2_cap15'
 *  0b101001001..Configure function 'u_nss_dbgo_xsp_so_txdata'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM3_11_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_11_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM3_11_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM3_12_MUX_CFG - swm3_12 output select register */
/*! @{ */

#define DSWM_SWM3_12_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM3_12_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b001000010..Configure function 'u_dap_swclk'
 *  0b001000011..Configure function 'u_dap_swdio'
 *  0b001111010..Configure function 'u_gpio_gpo48'
 *  0b010101110..Configure function 'u_gpio_sec_gpo48'
 *  0b100001100..Configure function 'u_ct3_cap0'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM3_12_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_12_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM3_12_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM3_13_MUX_CFG - swm3_13 output select register */
/*! @{ */

#define DSWM_SWM3_13_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM3_13_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b001000010..Configure function 'u_dap_swclk'
 *  0b001000011..Configure function 'u_dap_swdio'
 *  0b001111011..Configure function 'u_gpio_gpo49'
 *  0b010101111..Configure function 'u_gpio_sec_gpo49'
 *  0b100001101..Configure function 'u_ct3_cap1'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM3_13_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_13_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM3_13_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM3_14_MUX_CFG - swm3_14 output select register */
/*! @{ */

#define DSWM_SWM3_14_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM3_14_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000001110..Configure function 'u_fc2_sck'
 *  0b000001111..Configure function 'u_fc2_rxd_sda_mosi_csn'
 *  0b000010000..Configure function 'u_fc2_txd_scl_miso_io0'
 *  0b000010001..Configure function 'u_fc2_cts_sdax_sseln0_io1'
 *  0b000010010..Configure function 'u_fc2_rts_sclx_sseln1_io2'
 *  0b000010011..Configure function 'u_fc2_sseln2_io3'
 *  0b000010100..Configure function 'u_fc2_sseln3'
 *  0b000011111..Configure function 'u_fc5_sck'
 *  0b000100000..Configure function 'u_fc5_rxd_sda_mosi_csn'
 *  0b000100001..Configure function 'u_fc5_txd_scl_miso_io0'
 *  0b000100010..Configure function 'u_fc5_cts_sdax_sseln0_io1'
 *  0b000100011..Configure function 'u_fc5_rts_sclx_sseln1_io2'
 *  0b001000000..Configure function 'u_i3c_scl'
 *  0b001000001..Configure function 'u_i3c_sda'
 *  0b001000100..Configure function 'u_dap_swo'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001111100..Configure function 'u_gpio_gpo50'
 *  0b010110000..Configure function 'u_gpio_sec_gpo50'
 *  0b100001110..Configure function 'u_ct3_cap2'
 *  0b101011010..Configure function 'u_dsp3_uart0'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM3_14_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_14_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM3_14_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM3_15_MUX_CFG - swm3_15 output select register */
/*! @{ */

#define DSWM_SWM3_15_MUX_CFG_PPINDEX_MASK        (0x1FFU)
#define DSWM_SWM3_15_MUX_CFG_PPINDEX_SHIFT       (0U)
/*! ppindex - Select peripheral port index
 *  0b000001110..Configure function 'u_fc2_sck'
 *  0b000001111..Configure function 'u_fc2_rxd_sda_mosi_csn'
 *  0b000010000..Configure function 'u_fc2_txd_scl_miso_io0'
 *  0b000010001..Configure function 'u_fc2_cts_sdax_sseln0_io1'
 *  0b000010010..Configure function 'u_fc2_rts_sclx_sseln1_io2'
 *  0b000010011..Configure function 'u_fc2_sseln2_io3'
 *  0b000010100..Configure function 'u_fc2_sseln3'
 *  0b000011111..Configure function 'u_fc5_sck'
 *  0b000100000..Configure function 'u_fc5_rxd_sda_mosi_csn'
 *  0b000100001..Configure function 'u_fc5_txd_scl_miso_io0'
 *  0b000100010..Configure function 'u_fc5_cts_sdax_sseln0_io1'
 *  0b000100011..Configure function 'u_fc5_rts_sclx_sseln1_io2'
 *  0b001000000..Configure function 'u_i3c_scl'
 *  0b001000001..Configure function 'u_i3c_sda'
 *  0b001000100..Configure function 'u_dap_swo'
 *  0b001000101..Configure function 'u_dap_trace_clk'
 *  0b001000110..Configure function 'u_dap_trace_data0'
 *  0b001000111..Configure function 'u_dap_trace_data1'
 *  0b001001000..Configure function 'u_dap_trace_data2'
 *  0b001001001..Configure function 'u_dap_trace_data3'
 *  0b001111101..Configure function 'u_gpio_gpo51'
 *  0b010110001..Configure function 'u_gpio_sec_gpo51'
 *  0b100001111..Configure function 'u_ct3_cap3'
 *  0b101011011..Configure function 'u_dsp3_uart1'
 *  0b101110101..Configure function 'u_gen_highz'
 *  0b101111000..Configure function 'u_gen_weak_pull_up'
 *  0b101111001..Configure function 'u_gen_weak_pull_down'
 */
#define DSWM_SWM3_15_MUX_CFG_PPINDEX(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_15_MUX_CFG_PPINDEX_SHIFT)) & DSWM_SWM3_15_MUX_CFG_PPINDEX_MASK)
/*! @} */

/*! @name SWM0_00_PIN_CFG - swm0_00 output select register */
/*! @{ */

#define DSWM_SWM0_00_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM0_00_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_00_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_00_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM0_00_PIN_CFG_EHS0_MASK)

#define DSWM_SWM0_00_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM0_00_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_00_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_00_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM0_00_PIN_CFG_EHS1_MASK)

#define DSWM_SWM0_00_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM0_00_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM0_00_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_00_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM0_00_PIN_CFG_RSEL_MASK)

#define DSWM_SWM0_00_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM0_00_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM0_00_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_00_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM0_00_PIN_CFG_ENZI_MASK)

#define DSWM_SWM0_00_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM0_00_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM0_00_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_00_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM0_00_PIN_CFG_ENSW_MASK)

#define DSWM_SWM0_00_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM0_00_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM0_00_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_00_PIN_CFG_OVR_SHIFT)) & DSWM_SWM0_00_PIN_CFG_OVR_MASK)

#define DSWM_SWM0_00_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM0_00_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM0_00_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_00_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM0_00_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM0_00_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM0_00_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM0_00_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_00_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM0_00_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM0_01_PIN_CFG - swm0_01 output select register */
/*! @{ */

#define DSWM_SWM0_01_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM0_01_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_01_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_01_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM0_01_PIN_CFG_EHS0_MASK)

#define DSWM_SWM0_01_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM0_01_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_01_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_01_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM0_01_PIN_CFG_EHS1_MASK)

#define DSWM_SWM0_01_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM0_01_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM0_01_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_01_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM0_01_PIN_CFG_RSEL_MASK)

#define DSWM_SWM0_01_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM0_01_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM0_01_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_01_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM0_01_PIN_CFG_ENZI_MASK)

#define DSWM_SWM0_01_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM0_01_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM0_01_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_01_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM0_01_PIN_CFG_ENSW_MASK)

#define DSWM_SWM0_01_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM0_01_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM0_01_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_01_PIN_CFG_OVR_SHIFT)) & DSWM_SWM0_01_PIN_CFG_OVR_MASK)

#define DSWM_SWM0_01_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM0_01_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM0_01_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_01_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM0_01_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM0_01_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM0_01_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM0_01_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_01_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM0_01_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM0_02_PIN_CFG - swm0_02 output select register */
/*! @{ */

#define DSWM_SWM0_02_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM0_02_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_02_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_02_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM0_02_PIN_CFG_EHS0_MASK)

#define DSWM_SWM0_02_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM0_02_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_02_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_02_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM0_02_PIN_CFG_EHS1_MASK)

#define DSWM_SWM0_02_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM0_02_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM0_02_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_02_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM0_02_PIN_CFG_RSEL_MASK)

#define DSWM_SWM0_02_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM0_02_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM0_02_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_02_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM0_02_PIN_CFG_ENZI_MASK)

#define DSWM_SWM0_02_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM0_02_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM0_02_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_02_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM0_02_PIN_CFG_ENSW_MASK)

#define DSWM_SWM0_02_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM0_02_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM0_02_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_02_PIN_CFG_OVR_SHIFT)) & DSWM_SWM0_02_PIN_CFG_OVR_MASK)

#define DSWM_SWM0_02_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM0_02_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM0_02_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_02_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM0_02_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM0_02_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM0_02_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM0_02_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_02_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM0_02_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM0_03_PIN_CFG - swm0_03 output select register */
/*! @{ */

#define DSWM_SWM0_03_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM0_03_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_03_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_03_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM0_03_PIN_CFG_EHS0_MASK)

#define DSWM_SWM0_03_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM0_03_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_03_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_03_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM0_03_PIN_CFG_EHS1_MASK)

#define DSWM_SWM0_03_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM0_03_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM0_03_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_03_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM0_03_PIN_CFG_RSEL_MASK)

#define DSWM_SWM0_03_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM0_03_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM0_03_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_03_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM0_03_PIN_CFG_ENZI_MASK)

#define DSWM_SWM0_03_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM0_03_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM0_03_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_03_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM0_03_PIN_CFG_ENSW_MASK)

#define DSWM_SWM0_03_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM0_03_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM0_03_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_03_PIN_CFG_OVR_SHIFT)) & DSWM_SWM0_03_PIN_CFG_OVR_MASK)

#define DSWM_SWM0_03_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM0_03_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM0_03_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_03_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM0_03_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM0_03_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM0_03_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM0_03_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_03_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM0_03_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM0_04_PIN_CFG - swm0_04 output select register */
/*! @{ */

#define DSWM_SWM0_04_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM0_04_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_04_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_04_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM0_04_PIN_CFG_EHS0_MASK)

#define DSWM_SWM0_04_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM0_04_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_04_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_04_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM0_04_PIN_CFG_EHS1_MASK)

#define DSWM_SWM0_04_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM0_04_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM0_04_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_04_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM0_04_PIN_CFG_RSEL_MASK)

#define DSWM_SWM0_04_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM0_04_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM0_04_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_04_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM0_04_PIN_CFG_ENZI_MASK)

#define DSWM_SWM0_04_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM0_04_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM0_04_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_04_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM0_04_PIN_CFG_ENSW_MASK)

#define DSWM_SWM0_04_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM0_04_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM0_04_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_04_PIN_CFG_OVR_SHIFT)) & DSWM_SWM0_04_PIN_CFG_OVR_MASK)

#define DSWM_SWM0_04_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM0_04_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM0_04_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_04_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM0_04_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM0_04_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM0_04_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM0_04_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_04_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM0_04_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM0_05_PIN_CFG - swm0_05 output select register */
/*! @{ */

#define DSWM_SWM0_05_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM0_05_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_05_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_05_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM0_05_PIN_CFG_EHS0_MASK)

#define DSWM_SWM0_05_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM0_05_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_05_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_05_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM0_05_PIN_CFG_EHS1_MASK)

#define DSWM_SWM0_05_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM0_05_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM0_05_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_05_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM0_05_PIN_CFG_RSEL_MASK)

#define DSWM_SWM0_05_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM0_05_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM0_05_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_05_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM0_05_PIN_CFG_ENZI_MASK)

#define DSWM_SWM0_05_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM0_05_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM0_05_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_05_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM0_05_PIN_CFG_ENSW_MASK)

#define DSWM_SWM0_05_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM0_05_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM0_05_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_05_PIN_CFG_OVR_SHIFT)) & DSWM_SWM0_05_PIN_CFG_OVR_MASK)

#define DSWM_SWM0_05_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM0_05_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM0_05_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_05_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM0_05_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM0_05_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM0_05_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM0_05_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_05_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM0_05_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM0_06_PIN_CFG - swm0_06 output select register */
/*! @{ */

#define DSWM_SWM0_06_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM0_06_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_06_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_06_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM0_06_PIN_CFG_EHS0_MASK)

#define DSWM_SWM0_06_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM0_06_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_06_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_06_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM0_06_PIN_CFG_EHS1_MASK)

#define DSWM_SWM0_06_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM0_06_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM0_06_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_06_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM0_06_PIN_CFG_RSEL_MASK)

#define DSWM_SWM0_06_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM0_06_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM0_06_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_06_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM0_06_PIN_CFG_ENZI_MASK)

#define DSWM_SWM0_06_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM0_06_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM0_06_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_06_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM0_06_PIN_CFG_ENSW_MASK)

#define DSWM_SWM0_06_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM0_06_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM0_06_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_06_PIN_CFG_OVR_SHIFT)) & DSWM_SWM0_06_PIN_CFG_OVR_MASK)

#define DSWM_SWM0_06_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM0_06_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM0_06_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_06_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM0_06_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM0_06_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM0_06_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM0_06_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_06_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM0_06_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM0_07_PIN_CFG - swm0_07 output select register */
/*! @{ */

#define DSWM_SWM0_07_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM0_07_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_07_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_07_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM0_07_PIN_CFG_EHS0_MASK)

#define DSWM_SWM0_07_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM0_07_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_07_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_07_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM0_07_PIN_CFG_EHS1_MASK)

#define DSWM_SWM0_07_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM0_07_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM0_07_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_07_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM0_07_PIN_CFG_RSEL_MASK)

#define DSWM_SWM0_07_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM0_07_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM0_07_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_07_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM0_07_PIN_CFG_ENZI_MASK)

#define DSWM_SWM0_07_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM0_07_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM0_07_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_07_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM0_07_PIN_CFG_ENSW_MASK)

#define DSWM_SWM0_07_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM0_07_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM0_07_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_07_PIN_CFG_OVR_SHIFT)) & DSWM_SWM0_07_PIN_CFG_OVR_MASK)

#define DSWM_SWM0_07_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM0_07_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM0_07_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_07_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM0_07_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM0_07_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM0_07_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM0_07_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_07_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM0_07_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM0_08_PIN_CFG - swm0_08 output select register */
/*! @{ */

#define DSWM_SWM0_08_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM0_08_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_08_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_08_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM0_08_PIN_CFG_EHS0_MASK)

#define DSWM_SWM0_08_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM0_08_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_08_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_08_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM0_08_PIN_CFG_EHS1_MASK)

#define DSWM_SWM0_08_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM0_08_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM0_08_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_08_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM0_08_PIN_CFG_RSEL_MASK)

#define DSWM_SWM0_08_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM0_08_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM0_08_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_08_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM0_08_PIN_CFG_ENZI_MASK)

#define DSWM_SWM0_08_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM0_08_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM0_08_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_08_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM0_08_PIN_CFG_ENSW_MASK)

#define DSWM_SWM0_08_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM0_08_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM0_08_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_08_PIN_CFG_OVR_SHIFT)) & DSWM_SWM0_08_PIN_CFG_OVR_MASK)

#define DSWM_SWM0_08_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM0_08_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM0_08_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_08_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM0_08_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM0_08_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM0_08_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM0_08_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_08_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM0_08_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM0_09_PIN_CFG - swm0_09 output select register */
/*! @{ */

#define DSWM_SWM0_09_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM0_09_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_09_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_09_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM0_09_PIN_CFG_EHS0_MASK)

#define DSWM_SWM0_09_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM0_09_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_09_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_09_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM0_09_PIN_CFG_EHS1_MASK)

#define DSWM_SWM0_09_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM0_09_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM0_09_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_09_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM0_09_PIN_CFG_RSEL_MASK)

#define DSWM_SWM0_09_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM0_09_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM0_09_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_09_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM0_09_PIN_CFG_ENZI_MASK)

#define DSWM_SWM0_09_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM0_09_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM0_09_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_09_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM0_09_PIN_CFG_ENSW_MASK)

#define DSWM_SWM0_09_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM0_09_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM0_09_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_09_PIN_CFG_OVR_SHIFT)) & DSWM_SWM0_09_PIN_CFG_OVR_MASK)

#define DSWM_SWM0_09_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM0_09_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM0_09_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_09_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM0_09_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM0_09_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM0_09_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM0_09_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_09_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM0_09_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM0_10_PIN_CFG - swm0_10 output select register */
/*! @{ */

#define DSWM_SWM0_10_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM0_10_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_10_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_10_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM0_10_PIN_CFG_EHS0_MASK)

#define DSWM_SWM0_10_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM0_10_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_10_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_10_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM0_10_PIN_CFG_EHS1_MASK)

#define DSWM_SWM0_10_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM0_10_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM0_10_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_10_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM0_10_PIN_CFG_RSEL_MASK)

#define DSWM_SWM0_10_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM0_10_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM0_10_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_10_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM0_10_PIN_CFG_ENZI_MASK)

#define DSWM_SWM0_10_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM0_10_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM0_10_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_10_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM0_10_PIN_CFG_ENSW_MASK)

#define DSWM_SWM0_10_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM0_10_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM0_10_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_10_PIN_CFG_OVR_SHIFT)) & DSWM_SWM0_10_PIN_CFG_OVR_MASK)

#define DSWM_SWM0_10_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM0_10_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM0_10_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_10_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM0_10_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM0_10_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM0_10_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM0_10_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_10_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM0_10_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM0_11_PIN_CFG - swm0_11 output select register */
/*! @{ */

#define DSWM_SWM0_11_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM0_11_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_11_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_11_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM0_11_PIN_CFG_EHS0_MASK)

#define DSWM_SWM0_11_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM0_11_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM0_11_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_11_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM0_11_PIN_CFG_EHS1_MASK)

#define DSWM_SWM0_11_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM0_11_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM0_11_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_11_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM0_11_PIN_CFG_RSEL_MASK)

#define DSWM_SWM0_11_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM0_11_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM0_11_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_11_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM0_11_PIN_CFG_ENZI_MASK)

#define DSWM_SWM0_11_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM0_11_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM0_11_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_11_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM0_11_PIN_CFG_ENSW_MASK)

#define DSWM_SWM0_11_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM0_11_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM0_11_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_11_PIN_CFG_OVR_SHIFT)) & DSWM_SWM0_11_PIN_CFG_OVR_MASK)

#define DSWM_SWM0_11_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM0_11_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM0_11_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_11_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM0_11_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM0_11_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM0_11_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM0_11_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM0_11_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM0_11_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM1_00_PIN_CFG - swm1_00 output select register */
/*! @{ */

#define DSWM_SWM1_00_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM1_00_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_00_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_00_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM1_00_PIN_CFG_EHS0_MASK)

#define DSWM_SWM1_00_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM1_00_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_00_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_00_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM1_00_PIN_CFG_EHS1_MASK)

#define DSWM_SWM1_00_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM1_00_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_00_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_00_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM1_00_PIN_CFG_EHD0_MASK)

#define DSWM_SWM1_00_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM1_00_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_00_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_00_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM1_00_PIN_CFG_EHD1_MASK)

#define DSWM_SWM1_00_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM1_00_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM1_00_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_00_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM1_00_PIN_CFG_ENZI_MASK)

#define DSWM_SWM1_00_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM1_00_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM1_00_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_00_PIN_CFG_OVR_SHIFT)) & DSWM_SWM1_00_PIN_CFG_OVR_MASK)

#define DSWM_SWM1_00_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM1_00_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM1_00_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_00_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM1_00_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM1_00_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM1_00_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM1_00_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_00_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM1_00_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM1_01_PIN_CFG - swm1_01 output select register */
/*! @{ */

#define DSWM_SWM1_01_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM1_01_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_01_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_01_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM1_01_PIN_CFG_EHS0_MASK)

#define DSWM_SWM1_01_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM1_01_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_01_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_01_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM1_01_PIN_CFG_EHS1_MASK)

#define DSWM_SWM1_01_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM1_01_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_01_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_01_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM1_01_PIN_CFG_EHD0_MASK)

#define DSWM_SWM1_01_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM1_01_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_01_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_01_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM1_01_PIN_CFG_EHD1_MASK)

#define DSWM_SWM1_01_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM1_01_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM1_01_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_01_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM1_01_PIN_CFG_ENZI_MASK)

#define DSWM_SWM1_01_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM1_01_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM1_01_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_01_PIN_CFG_OVR_SHIFT)) & DSWM_SWM1_01_PIN_CFG_OVR_MASK)

#define DSWM_SWM1_01_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM1_01_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM1_01_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_01_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM1_01_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM1_01_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM1_01_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM1_01_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_01_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM1_01_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM1_02_PIN_CFG - swm1_02 output select register */
/*! @{ */

#define DSWM_SWM1_02_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM1_02_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_02_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_02_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM1_02_PIN_CFG_EHS0_MASK)

#define DSWM_SWM1_02_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM1_02_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_02_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_02_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM1_02_PIN_CFG_EHS1_MASK)

#define DSWM_SWM1_02_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM1_02_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_02_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_02_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM1_02_PIN_CFG_EHD0_MASK)

#define DSWM_SWM1_02_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM1_02_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_02_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_02_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM1_02_PIN_CFG_EHD1_MASK)

#define DSWM_SWM1_02_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM1_02_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM1_02_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_02_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM1_02_PIN_CFG_ENZI_MASK)

#define DSWM_SWM1_02_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM1_02_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM1_02_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_02_PIN_CFG_OVR_SHIFT)) & DSWM_SWM1_02_PIN_CFG_OVR_MASK)

#define DSWM_SWM1_02_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM1_02_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM1_02_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_02_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM1_02_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM1_02_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM1_02_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM1_02_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_02_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM1_02_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM1_03_PIN_CFG - swm1_03 output select register */
/*! @{ */

#define DSWM_SWM1_03_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM1_03_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_03_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_03_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM1_03_PIN_CFG_EHS0_MASK)

#define DSWM_SWM1_03_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM1_03_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_03_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_03_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM1_03_PIN_CFG_EHS1_MASK)

#define DSWM_SWM1_03_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM1_03_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_03_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_03_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM1_03_PIN_CFG_EHD0_MASK)

#define DSWM_SWM1_03_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM1_03_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_03_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_03_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM1_03_PIN_CFG_EHD1_MASK)

#define DSWM_SWM1_03_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM1_03_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM1_03_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_03_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM1_03_PIN_CFG_ENZI_MASK)

#define DSWM_SWM1_03_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM1_03_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM1_03_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_03_PIN_CFG_OVR_SHIFT)) & DSWM_SWM1_03_PIN_CFG_OVR_MASK)

#define DSWM_SWM1_03_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM1_03_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM1_03_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_03_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM1_03_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM1_03_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM1_03_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM1_03_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_03_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM1_03_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM1_04_PIN_CFG - swm1_04 output select register */
/*! @{ */

#define DSWM_SWM1_04_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM1_04_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_04_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_04_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM1_04_PIN_CFG_EHS0_MASK)

#define DSWM_SWM1_04_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM1_04_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_04_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_04_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM1_04_PIN_CFG_EHS1_MASK)

#define DSWM_SWM1_04_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM1_04_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_04_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_04_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM1_04_PIN_CFG_EHD0_MASK)

#define DSWM_SWM1_04_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM1_04_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_04_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_04_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM1_04_PIN_CFG_EHD1_MASK)

#define DSWM_SWM1_04_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM1_04_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM1_04_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_04_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM1_04_PIN_CFG_ENZI_MASK)

#define DSWM_SWM1_04_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM1_04_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM1_04_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_04_PIN_CFG_OVR_SHIFT)) & DSWM_SWM1_04_PIN_CFG_OVR_MASK)

#define DSWM_SWM1_04_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM1_04_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM1_04_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_04_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM1_04_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM1_04_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM1_04_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM1_04_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_04_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM1_04_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM1_05_PIN_CFG - swm1_05 output select register */
/*! @{ */

#define DSWM_SWM1_05_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM1_05_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_05_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_05_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM1_05_PIN_CFG_EHS0_MASK)

#define DSWM_SWM1_05_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM1_05_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_05_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_05_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM1_05_PIN_CFG_EHS1_MASK)

#define DSWM_SWM1_05_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM1_05_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_05_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_05_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM1_05_PIN_CFG_EHD0_MASK)

#define DSWM_SWM1_05_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM1_05_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_05_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_05_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM1_05_PIN_CFG_EHD1_MASK)

#define DSWM_SWM1_05_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM1_05_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM1_05_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_05_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM1_05_PIN_CFG_ENZI_MASK)

#define DSWM_SWM1_05_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM1_05_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM1_05_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_05_PIN_CFG_OVR_SHIFT)) & DSWM_SWM1_05_PIN_CFG_OVR_MASK)

#define DSWM_SWM1_05_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM1_05_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM1_05_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_05_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM1_05_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM1_05_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM1_05_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM1_05_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_05_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM1_05_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM1_06_PIN_CFG - swm1_06 output select register */
/*! @{ */

#define DSWM_SWM1_06_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM1_06_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_06_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_06_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM1_06_PIN_CFG_EHS0_MASK)

#define DSWM_SWM1_06_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM1_06_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_06_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_06_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM1_06_PIN_CFG_EHS1_MASK)

#define DSWM_SWM1_06_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM1_06_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_06_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_06_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM1_06_PIN_CFG_EHD0_MASK)

#define DSWM_SWM1_06_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM1_06_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_06_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_06_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM1_06_PIN_CFG_EHD1_MASK)

#define DSWM_SWM1_06_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM1_06_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM1_06_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_06_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM1_06_PIN_CFG_ENZI_MASK)

#define DSWM_SWM1_06_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM1_06_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM1_06_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_06_PIN_CFG_OVR_SHIFT)) & DSWM_SWM1_06_PIN_CFG_OVR_MASK)

#define DSWM_SWM1_06_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM1_06_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM1_06_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_06_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM1_06_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM1_06_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM1_06_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM1_06_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_06_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM1_06_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM1_07_PIN_CFG - swm1_07 output select register */
/*! @{ */

#define DSWM_SWM1_07_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM1_07_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_07_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_07_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM1_07_PIN_CFG_EHS0_MASK)

#define DSWM_SWM1_07_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM1_07_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_07_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_07_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM1_07_PIN_CFG_EHS1_MASK)

#define DSWM_SWM1_07_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM1_07_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_07_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_07_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM1_07_PIN_CFG_EHD0_MASK)

#define DSWM_SWM1_07_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM1_07_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_07_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_07_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM1_07_PIN_CFG_EHD1_MASK)

#define DSWM_SWM1_07_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM1_07_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM1_07_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_07_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM1_07_PIN_CFG_ENZI_MASK)

#define DSWM_SWM1_07_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM1_07_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM1_07_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_07_PIN_CFG_OVR_SHIFT)) & DSWM_SWM1_07_PIN_CFG_OVR_MASK)

#define DSWM_SWM1_07_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM1_07_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM1_07_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_07_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM1_07_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM1_07_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM1_07_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM1_07_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_07_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM1_07_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM1_08_PIN_CFG - swm1_08 output select register */
/*! @{ */

#define DSWM_SWM1_08_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM1_08_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_08_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_08_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM1_08_PIN_CFG_EHS0_MASK)

#define DSWM_SWM1_08_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM1_08_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_08_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_08_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM1_08_PIN_CFG_EHS1_MASK)

#define DSWM_SWM1_08_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM1_08_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_08_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_08_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM1_08_PIN_CFG_EHD0_MASK)

#define DSWM_SWM1_08_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM1_08_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_08_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_08_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM1_08_PIN_CFG_EHD1_MASK)

#define DSWM_SWM1_08_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM1_08_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM1_08_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_08_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM1_08_PIN_CFG_ENZI_MASK)

#define DSWM_SWM1_08_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM1_08_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM1_08_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_08_PIN_CFG_OVR_SHIFT)) & DSWM_SWM1_08_PIN_CFG_OVR_MASK)

#define DSWM_SWM1_08_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM1_08_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM1_08_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_08_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM1_08_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM1_08_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM1_08_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM1_08_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_08_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM1_08_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM1_09_PIN_CFG - swm1_09 output select register */
/*! @{ */

#define DSWM_SWM1_09_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM1_09_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_09_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_09_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM1_09_PIN_CFG_EHS0_MASK)

#define DSWM_SWM1_09_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM1_09_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_09_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_09_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM1_09_PIN_CFG_EHS1_MASK)

#define DSWM_SWM1_09_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM1_09_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_09_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_09_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM1_09_PIN_CFG_EHD0_MASK)

#define DSWM_SWM1_09_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM1_09_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_09_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_09_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM1_09_PIN_CFG_EHD1_MASK)

#define DSWM_SWM1_09_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM1_09_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM1_09_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_09_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM1_09_PIN_CFG_ENZI_MASK)

#define DSWM_SWM1_09_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM1_09_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM1_09_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_09_PIN_CFG_OVR_SHIFT)) & DSWM_SWM1_09_PIN_CFG_OVR_MASK)

#define DSWM_SWM1_09_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM1_09_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM1_09_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_09_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM1_09_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM1_09_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM1_09_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM1_09_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_09_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM1_09_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM1_10_PIN_CFG - swm1_10 output select register */
/*! @{ */

#define DSWM_SWM1_10_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM1_10_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_10_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_10_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM1_10_PIN_CFG_EHS0_MASK)

#define DSWM_SWM1_10_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM1_10_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_10_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_10_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM1_10_PIN_CFG_EHS1_MASK)

#define DSWM_SWM1_10_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM1_10_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_10_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_10_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM1_10_PIN_CFG_EHD0_MASK)

#define DSWM_SWM1_10_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM1_10_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_10_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_10_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM1_10_PIN_CFG_EHD1_MASK)

#define DSWM_SWM1_10_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM1_10_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM1_10_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_10_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM1_10_PIN_CFG_ENZI_MASK)

#define DSWM_SWM1_10_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM1_10_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM1_10_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_10_PIN_CFG_OVR_SHIFT)) & DSWM_SWM1_10_PIN_CFG_OVR_MASK)

#define DSWM_SWM1_10_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM1_10_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM1_10_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_10_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM1_10_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM1_10_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM1_10_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM1_10_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_10_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM1_10_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM1_11_PIN_CFG - swm1_11 output select register */
/*! @{ */

#define DSWM_SWM1_11_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM1_11_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_11_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_11_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM1_11_PIN_CFG_EHS0_MASK)

#define DSWM_SWM1_11_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM1_11_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM1_11_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_11_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM1_11_PIN_CFG_EHS1_MASK)

#define DSWM_SWM1_11_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM1_11_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_11_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_11_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM1_11_PIN_CFG_EHD0_MASK)

#define DSWM_SWM1_11_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM1_11_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM1_11_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_11_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM1_11_PIN_CFG_EHD1_MASK)

#define DSWM_SWM1_11_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM1_11_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM1_11_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_11_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM1_11_PIN_CFG_ENZI_MASK)

#define DSWM_SWM1_11_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM1_11_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM1_11_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_11_PIN_CFG_OVR_SHIFT)) & DSWM_SWM1_11_PIN_CFG_OVR_MASK)

#define DSWM_SWM1_11_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM1_11_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM1_11_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_11_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM1_11_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM1_11_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM1_11_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM1_11_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM1_11_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM1_11_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM2_00_PIN_CFG - swm2_00 output select register */
/*! @{ */

#define DSWM_SWM2_00_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM2_00_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_00_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_00_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM2_00_PIN_CFG_EHS0_MASK)

#define DSWM_SWM2_00_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM2_00_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_00_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_00_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM2_00_PIN_CFG_EHS1_MASK)

#define DSWM_SWM2_00_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM2_00_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_00_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_00_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM2_00_PIN_CFG_EHD0_MASK)

#define DSWM_SWM2_00_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM2_00_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_00_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_00_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM2_00_PIN_CFG_EHD1_MASK)

#define DSWM_SWM2_00_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM2_00_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM2_00_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_00_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM2_00_PIN_CFG_ENZI_MASK)

#define DSWM_SWM2_00_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM2_00_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM2_00_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_00_PIN_CFG_OVR_SHIFT)) & DSWM_SWM2_00_PIN_CFG_OVR_MASK)

#define DSWM_SWM2_00_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM2_00_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM2_00_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_00_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM2_00_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM2_00_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM2_00_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM2_00_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_00_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM2_00_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM2_01_PIN_CFG - swm2_01 output select register */
/*! @{ */

#define DSWM_SWM2_01_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM2_01_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_01_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_01_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM2_01_PIN_CFG_EHS0_MASK)

#define DSWM_SWM2_01_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM2_01_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_01_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_01_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM2_01_PIN_CFG_EHS1_MASK)

#define DSWM_SWM2_01_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM2_01_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_01_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_01_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM2_01_PIN_CFG_EHD0_MASK)

#define DSWM_SWM2_01_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM2_01_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_01_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_01_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM2_01_PIN_CFG_EHD1_MASK)

#define DSWM_SWM2_01_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM2_01_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM2_01_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_01_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM2_01_PIN_CFG_ENZI_MASK)

#define DSWM_SWM2_01_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM2_01_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM2_01_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_01_PIN_CFG_OVR_SHIFT)) & DSWM_SWM2_01_PIN_CFG_OVR_MASK)

#define DSWM_SWM2_01_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM2_01_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM2_01_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_01_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM2_01_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM2_01_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM2_01_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM2_01_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_01_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM2_01_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM2_02_PIN_CFG - swm2_02 output select register */
/*! @{ */

#define DSWM_SWM2_02_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM2_02_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_02_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_02_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM2_02_PIN_CFG_EHS0_MASK)

#define DSWM_SWM2_02_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM2_02_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_02_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_02_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM2_02_PIN_CFG_EHS1_MASK)

#define DSWM_SWM2_02_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM2_02_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_02_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_02_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM2_02_PIN_CFG_EHD0_MASK)

#define DSWM_SWM2_02_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM2_02_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_02_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_02_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM2_02_PIN_CFG_EHD1_MASK)

#define DSWM_SWM2_02_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM2_02_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM2_02_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_02_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM2_02_PIN_CFG_ENZI_MASK)

#define DSWM_SWM2_02_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM2_02_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM2_02_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_02_PIN_CFG_OVR_SHIFT)) & DSWM_SWM2_02_PIN_CFG_OVR_MASK)

#define DSWM_SWM2_02_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM2_02_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM2_02_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_02_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM2_02_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM2_02_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM2_02_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM2_02_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_02_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM2_02_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM2_03_PIN_CFG - swm2_03 output select register */
/*! @{ */

#define DSWM_SWM2_03_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM2_03_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_03_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_03_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM2_03_PIN_CFG_EHS0_MASK)

#define DSWM_SWM2_03_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM2_03_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_03_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_03_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM2_03_PIN_CFG_EHS1_MASK)

#define DSWM_SWM2_03_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM2_03_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_03_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_03_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM2_03_PIN_CFG_EHD0_MASK)

#define DSWM_SWM2_03_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM2_03_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_03_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_03_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM2_03_PIN_CFG_EHD1_MASK)

#define DSWM_SWM2_03_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM2_03_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM2_03_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_03_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM2_03_PIN_CFG_ENZI_MASK)

#define DSWM_SWM2_03_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM2_03_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM2_03_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_03_PIN_CFG_OVR_SHIFT)) & DSWM_SWM2_03_PIN_CFG_OVR_MASK)

#define DSWM_SWM2_03_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM2_03_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM2_03_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_03_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM2_03_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM2_03_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM2_03_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM2_03_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_03_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM2_03_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM2_04_PIN_CFG - swm2_04 output select register */
/*! @{ */

#define DSWM_SWM2_04_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM2_04_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_04_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_04_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM2_04_PIN_CFG_EHS0_MASK)

#define DSWM_SWM2_04_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM2_04_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_04_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_04_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM2_04_PIN_CFG_EHS1_MASK)

#define DSWM_SWM2_04_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM2_04_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_04_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_04_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM2_04_PIN_CFG_EHD0_MASK)

#define DSWM_SWM2_04_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM2_04_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_04_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_04_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM2_04_PIN_CFG_EHD1_MASK)

#define DSWM_SWM2_04_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM2_04_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM2_04_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_04_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM2_04_PIN_CFG_ENZI_MASK)

#define DSWM_SWM2_04_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM2_04_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM2_04_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_04_PIN_CFG_OVR_SHIFT)) & DSWM_SWM2_04_PIN_CFG_OVR_MASK)

#define DSWM_SWM2_04_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM2_04_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM2_04_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_04_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM2_04_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM2_04_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM2_04_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM2_04_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_04_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM2_04_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM2_05_PIN_CFG - swm2_05 output select register */
/*! @{ */

#define DSWM_SWM2_05_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM2_05_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_05_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_05_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM2_05_PIN_CFG_EHS0_MASK)

#define DSWM_SWM2_05_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM2_05_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_05_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_05_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM2_05_PIN_CFG_EHS1_MASK)

#define DSWM_SWM2_05_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM2_05_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_05_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_05_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM2_05_PIN_CFG_EHD0_MASK)

#define DSWM_SWM2_05_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM2_05_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_05_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_05_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM2_05_PIN_CFG_EHD1_MASK)

#define DSWM_SWM2_05_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM2_05_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM2_05_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_05_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM2_05_PIN_CFG_ENZI_MASK)

#define DSWM_SWM2_05_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM2_05_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM2_05_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_05_PIN_CFG_OVR_SHIFT)) & DSWM_SWM2_05_PIN_CFG_OVR_MASK)

#define DSWM_SWM2_05_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM2_05_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM2_05_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_05_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM2_05_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM2_05_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM2_05_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM2_05_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_05_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM2_05_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM2_06_PIN_CFG - swm2_06 output select register */
/*! @{ */

#define DSWM_SWM2_06_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM2_06_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_06_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_06_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM2_06_PIN_CFG_EHS0_MASK)

#define DSWM_SWM2_06_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM2_06_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_06_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_06_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM2_06_PIN_CFG_EHS1_MASK)

#define DSWM_SWM2_06_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM2_06_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_06_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_06_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM2_06_PIN_CFG_EHD0_MASK)

#define DSWM_SWM2_06_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM2_06_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_06_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_06_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM2_06_PIN_CFG_EHD1_MASK)

#define DSWM_SWM2_06_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM2_06_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM2_06_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_06_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM2_06_PIN_CFG_ENZI_MASK)

#define DSWM_SWM2_06_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM2_06_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM2_06_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_06_PIN_CFG_OVR_SHIFT)) & DSWM_SWM2_06_PIN_CFG_OVR_MASK)

#define DSWM_SWM2_06_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM2_06_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM2_06_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_06_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM2_06_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM2_06_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM2_06_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM2_06_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_06_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM2_06_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM2_07_PIN_CFG - swm2_07 output select register */
/*! @{ */

#define DSWM_SWM2_07_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM2_07_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_07_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_07_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM2_07_PIN_CFG_EHS0_MASK)

#define DSWM_SWM2_07_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM2_07_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_07_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_07_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM2_07_PIN_CFG_EHS1_MASK)

#define DSWM_SWM2_07_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM2_07_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_07_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_07_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM2_07_PIN_CFG_EHD0_MASK)

#define DSWM_SWM2_07_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM2_07_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_07_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_07_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM2_07_PIN_CFG_EHD1_MASK)

#define DSWM_SWM2_07_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM2_07_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM2_07_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_07_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM2_07_PIN_CFG_ENZI_MASK)

#define DSWM_SWM2_07_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM2_07_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM2_07_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_07_PIN_CFG_OVR_SHIFT)) & DSWM_SWM2_07_PIN_CFG_OVR_MASK)

#define DSWM_SWM2_07_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM2_07_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM2_07_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_07_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM2_07_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM2_07_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM2_07_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM2_07_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_07_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM2_07_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM2_08_PIN_CFG - swm2_08 output select register */
/*! @{ */

#define DSWM_SWM2_08_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM2_08_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_08_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_08_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM2_08_PIN_CFG_EHS0_MASK)

#define DSWM_SWM2_08_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM2_08_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_08_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_08_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM2_08_PIN_CFG_EHS1_MASK)

#define DSWM_SWM2_08_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM2_08_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_08_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_08_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM2_08_PIN_CFG_EHD0_MASK)

#define DSWM_SWM2_08_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM2_08_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_08_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_08_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM2_08_PIN_CFG_EHD1_MASK)

#define DSWM_SWM2_08_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM2_08_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM2_08_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_08_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM2_08_PIN_CFG_ENZI_MASK)

#define DSWM_SWM2_08_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM2_08_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM2_08_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_08_PIN_CFG_OVR_SHIFT)) & DSWM_SWM2_08_PIN_CFG_OVR_MASK)

#define DSWM_SWM2_08_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM2_08_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM2_08_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_08_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM2_08_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM2_08_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM2_08_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM2_08_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_08_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM2_08_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM2_09_PIN_CFG - swm2_09 output select register */
/*! @{ */

#define DSWM_SWM2_09_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM2_09_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_09_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_09_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM2_09_PIN_CFG_EHS0_MASK)

#define DSWM_SWM2_09_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM2_09_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_09_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_09_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM2_09_PIN_CFG_EHS1_MASK)

#define DSWM_SWM2_09_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM2_09_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_09_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_09_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM2_09_PIN_CFG_EHD0_MASK)

#define DSWM_SWM2_09_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM2_09_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_09_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_09_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM2_09_PIN_CFG_EHD1_MASK)

#define DSWM_SWM2_09_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM2_09_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM2_09_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_09_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM2_09_PIN_CFG_ENZI_MASK)

#define DSWM_SWM2_09_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM2_09_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM2_09_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_09_PIN_CFG_OVR_SHIFT)) & DSWM_SWM2_09_PIN_CFG_OVR_MASK)

#define DSWM_SWM2_09_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM2_09_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM2_09_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_09_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM2_09_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM2_09_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM2_09_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM2_09_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_09_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM2_09_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM2_10_PIN_CFG - swm2_10 output select register */
/*! @{ */

#define DSWM_SWM2_10_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM2_10_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_10_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_10_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM2_10_PIN_CFG_EHS0_MASK)

#define DSWM_SWM2_10_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM2_10_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_10_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_10_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM2_10_PIN_CFG_EHS1_MASK)

#define DSWM_SWM2_10_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM2_10_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_10_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_10_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM2_10_PIN_CFG_EHD0_MASK)

#define DSWM_SWM2_10_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM2_10_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_10_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_10_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM2_10_PIN_CFG_EHD1_MASK)

#define DSWM_SWM2_10_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM2_10_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM2_10_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_10_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM2_10_PIN_CFG_ENZI_MASK)

#define DSWM_SWM2_10_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM2_10_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM2_10_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_10_PIN_CFG_OVR_SHIFT)) & DSWM_SWM2_10_PIN_CFG_OVR_MASK)

#define DSWM_SWM2_10_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM2_10_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM2_10_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_10_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM2_10_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM2_10_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM2_10_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM2_10_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_10_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM2_10_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM2_11_PIN_CFG - swm2_11 output select register */
/*! @{ */

#define DSWM_SWM2_11_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM2_11_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_11_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_11_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM2_11_PIN_CFG_EHS0_MASK)

#define DSWM_SWM2_11_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM2_11_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM2_11_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_11_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM2_11_PIN_CFG_EHS1_MASK)

#define DSWM_SWM2_11_PIN_CFG_EHD0_MASK           (0x4U)
#define DSWM_SWM2_11_PIN_CFG_EHD0_SHIFT          (2U)
/*! EHD0 - Driver impedance control bit 0
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_11_PIN_CFG_EHD0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_11_PIN_CFG_EHD0_SHIFT)) & DSWM_SWM2_11_PIN_CFG_EHD0_MASK)

#define DSWM_SWM2_11_PIN_CFG_EHD1_MASK           (0x8U)
#define DSWM_SWM2_11_PIN_CFG_EHD1_SHIFT          (3U)
/*! EHD1 - Driver impedance control bit 1
 *  0b0..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 *  0b1..EHD[1:0] 1.25/1.8V: 00=55/50 Ohms, 01=50/45 Ohms, 10=45/40 Ohms, 11=40/35 Ohms
 */
#define DSWM_SWM2_11_PIN_CFG_EHD1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_11_PIN_CFG_EHD1_SHIFT)) & DSWM_SWM2_11_PIN_CFG_EHD1_MASK)

#define DSWM_SWM2_11_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM2_11_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM2_11_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_11_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM2_11_PIN_CFG_ENZI_MASK)

#define DSWM_SWM2_11_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM2_11_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM2_11_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_11_PIN_CFG_OVR_SHIFT)) & DSWM_SWM2_11_PIN_CFG_OVR_MASK)

#define DSWM_SWM2_11_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM2_11_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM2_11_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_11_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM2_11_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM2_11_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM2_11_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM2_11_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM2_11_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM2_11_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM3_00_PIN_CFG - swm3_00 output select register */
/*! @{ */

#define DSWM_SWM3_00_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM3_00_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_00_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_00_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM3_00_PIN_CFG_EHS0_MASK)

#define DSWM_SWM3_00_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM3_00_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_00_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_00_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM3_00_PIN_CFG_EHS1_MASK)

#define DSWM_SWM3_00_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM3_00_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM3_00_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_00_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM3_00_PIN_CFG_RSEL_MASK)

#define DSWM_SWM3_00_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM3_00_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM3_00_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_00_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM3_00_PIN_CFG_ENZI_MASK)

#define DSWM_SWM3_00_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM3_00_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM3_00_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_00_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM3_00_PIN_CFG_ENSW_MASK)

#define DSWM_SWM3_00_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM3_00_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM3_00_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_00_PIN_CFG_OVR_SHIFT)) & DSWM_SWM3_00_PIN_CFG_OVR_MASK)

#define DSWM_SWM3_00_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM3_00_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM3_00_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_00_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM3_00_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM3_00_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM3_00_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM3_00_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_00_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM3_00_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM3_01_PIN_CFG - swm3_01 output select register */
/*! @{ */

#define DSWM_SWM3_01_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM3_01_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_01_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_01_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM3_01_PIN_CFG_EHS0_MASK)

#define DSWM_SWM3_01_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM3_01_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_01_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_01_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM3_01_PIN_CFG_EHS1_MASK)

#define DSWM_SWM3_01_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM3_01_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM3_01_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_01_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM3_01_PIN_CFG_RSEL_MASK)

#define DSWM_SWM3_01_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM3_01_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM3_01_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_01_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM3_01_PIN_CFG_ENZI_MASK)

#define DSWM_SWM3_01_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM3_01_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM3_01_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_01_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM3_01_PIN_CFG_ENSW_MASK)

#define DSWM_SWM3_01_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM3_01_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM3_01_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_01_PIN_CFG_OVR_SHIFT)) & DSWM_SWM3_01_PIN_CFG_OVR_MASK)

#define DSWM_SWM3_01_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM3_01_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM3_01_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_01_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM3_01_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM3_01_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM3_01_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM3_01_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_01_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM3_01_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM3_02_PIN_CFG - swm3_02 output select register */
/*! @{ */

#define DSWM_SWM3_02_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM3_02_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_02_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_02_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM3_02_PIN_CFG_EHS0_MASK)

#define DSWM_SWM3_02_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM3_02_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_02_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_02_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM3_02_PIN_CFG_EHS1_MASK)

#define DSWM_SWM3_02_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM3_02_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM3_02_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_02_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM3_02_PIN_CFG_RSEL_MASK)

#define DSWM_SWM3_02_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM3_02_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM3_02_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_02_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM3_02_PIN_CFG_ENZI_MASK)

#define DSWM_SWM3_02_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM3_02_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM3_02_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_02_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM3_02_PIN_CFG_ENSW_MASK)

#define DSWM_SWM3_02_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM3_02_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM3_02_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_02_PIN_CFG_OVR_SHIFT)) & DSWM_SWM3_02_PIN_CFG_OVR_MASK)

#define DSWM_SWM3_02_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM3_02_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM3_02_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_02_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM3_02_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM3_02_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM3_02_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM3_02_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_02_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM3_02_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM3_03_PIN_CFG - swm3_03 output select register */
/*! @{ */

#define DSWM_SWM3_03_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM3_03_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_03_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_03_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM3_03_PIN_CFG_EHS0_MASK)

#define DSWM_SWM3_03_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM3_03_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_03_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_03_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM3_03_PIN_CFG_EHS1_MASK)

#define DSWM_SWM3_03_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM3_03_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM3_03_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_03_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM3_03_PIN_CFG_RSEL_MASK)

#define DSWM_SWM3_03_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM3_03_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM3_03_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_03_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM3_03_PIN_CFG_ENZI_MASK)

#define DSWM_SWM3_03_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM3_03_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM3_03_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_03_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM3_03_PIN_CFG_ENSW_MASK)

#define DSWM_SWM3_03_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM3_03_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM3_03_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_03_PIN_CFG_OVR_SHIFT)) & DSWM_SWM3_03_PIN_CFG_OVR_MASK)

#define DSWM_SWM3_03_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM3_03_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM3_03_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_03_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM3_03_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM3_03_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM3_03_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM3_03_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_03_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM3_03_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM3_04_PIN_CFG - swm3_04 output select register */
/*! @{ */

#define DSWM_SWM3_04_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM3_04_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_04_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_04_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM3_04_PIN_CFG_EHS0_MASK)

#define DSWM_SWM3_04_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM3_04_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_04_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_04_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM3_04_PIN_CFG_EHS1_MASK)

#define DSWM_SWM3_04_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM3_04_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM3_04_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_04_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM3_04_PIN_CFG_RSEL_MASK)

#define DSWM_SWM3_04_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM3_04_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM3_04_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_04_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM3_04_PIN_CFG_ENZI_MASK)

#define DSWM_SWM3_04_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM3_04_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM3_04_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_04_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM3_04_PIN_CFG_ENSW_MASK)

#define DSWM_SWM3_04_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM3_04_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM3_04_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_04_PIN_CFG_OVR_SHIFT)) & DSWM_SWM3_04_PIN_CFG_OVR_MASK)

#define DSWM_SWM3_04_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM3_04_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM3_04_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_04_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM3_04_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM3_04_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM3_04_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM3_04_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_04_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM3_04_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM3_05_PIN_CFG - swm3_05 output select register */
/*! @{ */

#define DSWM_SWM3_05_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM3_05_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_05_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_05_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM3_05_PIN_CFG_EHS0_MASK)

#define DSWM_SWM3_05_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM3_05_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_05_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_05_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM3_05_PIN_CFG_EHS1_MASK)

#define DSWM_SWM3_05_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM3_05_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM3_05_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_05_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM3_05_PIN_CFG_RSEL_MASK)

#define DSWM_SWM3_05_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM3_05_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM3_05_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_05_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM3_05_PIN_CFG_ENZI_MASK)

#define DSWM_SWM3_05_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM3_05_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM3_05_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_05_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM3_05_PIN_CFG_ENSW_MASK)

#define DSWM_SWM3_05_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM3_05_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM3_05_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_05_PIN_CFG_OVR_SHIFT)) & DSWM_SWM3_05_PIN_CFG_OVR_MASK)

#define DSWM_SWM3_05_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM3_05_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM3_05_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_05_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM3_05_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM3_05_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM3_05_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM3_05_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_05_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM3_05_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM3_06_PIN_CFG - swm3_06 output select register */
/*! @{ */

#define DSWM_SWM3_06_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM3_06_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_06_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_06_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM3_06_PIN_CFG_EHS0_MASK)

#define DSWM_SWM3_06_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM3_06_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_06_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_06_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM3_06_PIN_CFG_EHS1_MASK)

#define DSWM_SWM3_06_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM3_06_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM3_06_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_06_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM3_06_PIN_CFG_RSEL_MASK)

#define DSWM_SWM3_06_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM3_06_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM3_06_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_06_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM3_06_PIN_CFG_ENZI_MASK)

#define DSWM_SWM3_06_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM3_06_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM3_06_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_06_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM3_06_PIN_CFG_ENSW_MASK)

#define DSWM_SWM3_06_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM3_06_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM3_06_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_06_PIN_CFG_OVR_SHIFT)) & DSWM_SWM3_06_PIN_CFG_OVR_MASK)

#define DSWM_SWM3_06_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM3_06_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM3_06_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_06_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM3_06_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM3_06_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM3_06_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM3_06_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_06_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM3_06_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM3_07_PIN_CFG - swm3_07 output select register */
/*! @{ */

#define DSWM_SWM3_07_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM3_07_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_07_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_07_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM3_07_PIN_CFG_EHS0_MASK)

#define DSWM_SWM3_07_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM3_07_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_07_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_07_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM3_07_PIN_CFG_EHS1_MASK)

#define DSWM_SWM3_07_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM3_07_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM3_07_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_07_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM3_07_PIN_CFG_RSEL_MASK)

#define DSWM_SWM3_07_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM3_07_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM3_07_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_07_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM3_07_PIN_CFG_ENZI_MASK)

#define DSWM_SWM3_07_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM3_07_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM3_07_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_07_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM3_07_PIN_CFG_ENSW_MASK)

#define DSWM_SWM3_07_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM3_07_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM3_07_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_07_PIN_CFG_OVR_SHIFT)) & DSWM_SWM3_07_PIN_CFG_OVR_MASK)

#define DSWM_SWM3_07_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM3_07_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM3_07_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_07_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM3_07_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM3_07_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM3_07_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM3_07_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_07_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM3_07_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM3_08_PIN_CFG - swm3_08 output select register */
/*! @{ */

#define DSWM_SWM3_08_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM3_08_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_08_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_08_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM3_08_PIN_CFG_EHS0_MASK)

#define DSWM_SWM3_08_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM3_08_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_08_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_08_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM3_08_PIN_CFG_EHS1_MASK)

#define DSWM_SWM3_08_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM3_08_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM3_08_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_08_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM3_08_PIN_CFG_RSEL_MASK)

#define DSWM_SWM3_08_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM3_08_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM3_08_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_08_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM3_08_PIN_CFG_ENZI_MASK)

#define DSWM_SWM3_08_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM3_08_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM3_08_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_08_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM3_08_PIN_CFG_ENSW_MASK)

#define DSWM_SWM3_08_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM3_08_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM3_08_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_08_PIN_CFG_OVR_SHIFT)) & DSWM_SWM3_08_PIN_CFG_OVR_MASK)

#define DSWM_SWM3_08_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM3_08_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM3_08_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_08_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM3_08_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM3_08_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM3_08_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM3_08_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_08_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM3_08_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM3_09_PIN_CFG - swm3_09 output select register */
/*! @{ */

#define DSWM_SWM3_09_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM3_09_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_09_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_09_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM3_09_PIN_CFG_EHS0_MASK)

#define DSWM_SWM3_09_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM3_09_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_09_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_09_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM3_09_PIN_CFG_EHS1_MASK)

#define DSWM_SWM3_09_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM3_09_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM3_09_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_09_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM3_09_PIN_CFG_RSEL_MASK)

#define DSWM_SWM3_09_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM3_09_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM3_09_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_09_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM3_09_PIN_CFG_ENZI_MASK)

#define DSWM_SWM3_09_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM3_09_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM3_09_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_09_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM3_09_PIN_CFG_ENSW_MASK)

#define DSWM_SWM3_09_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM3_09_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM3_09_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_09_PIN_CFG_OVR_SHIFT)) & DSWM_SWM3_09_PIN_CFG_OVR_MASK)

#define DSWM_SWM3_09_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM3_09_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM3_09_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_09_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM3_09_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM3_09_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM3_09_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM3_09_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_09_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM3_09_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM3_10_PIN_CFG - swm3_10 output select register */
/*! @{ */

#define DSWM_SWM3_10_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM3_10_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_10_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_10_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM3_10_PIN_CFG_EHS0_MASK)

#define DSWM_SWM3_10_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM3_10_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_10_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_10_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM3_10_PIN_CFG_EHS1_MASK)

#define DSWM_SWM3_10_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM3_10_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM3_10_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_10_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM3_10_PIN_CFG_RSEL_MASK)

#define DSWM_SWM3_10_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM3_10_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM3_10_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_10_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM3_10_PIN_CFG_ENZI_MASK)

#define DSWM_SWM3_10_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM3_10_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM3_10_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_10_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM3_10_PIN_CFG_ENSW_MASK)

#define DSWM_SWM3_10_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM3_10_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM3_10_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_10_PIN_CFG_OVR_SHIFT)) & DSWM_SWM3_10_PIN_CFG_OVR_MASK)

#define DSWM_SWM3_10_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM3_10_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM3_10_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_10_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM3_10_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM3_10_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM3_10_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM3_10_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_10_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM3_10_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM3_11_PIN_CFG - swm3_11 output select register */
/*! @{ */

#define DSWM_SWM3_11_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM3_11_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_11_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_11_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM3_11_PIN_CFG_EHS0_MASK)

#define DSWM_SWM3_11_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM3_11_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_11_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_11_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM3_11_PIN_CFG_EHS1_MASK)

#define DSWM_SWM3_11_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM3_11_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM3_11_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_11_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM3_11_PIN_CFG_RSEL_MASK)

#define DSWM_SWM3_11_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM3_11_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM3_11_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_11_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM3_11_PIN_CFG_ENZI_MASK)

#define DSWM_SWM3_11_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM3_11_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM3_11_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_11_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM3_11_PIN_CFG_ENSW_MASK)

#define DSWM_SWM3_11_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM3_11_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM3_11_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_11_PIN_CFG_OVR_SHIFT)) & DSWM_SWM3_11_PIN_CFG_OVR_MASK)

#define DSWM_SWM3_11_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM3_11_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM3_11_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_11_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM3_11_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM3_11_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM3_11_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM3_11_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_11_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM3_11_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM3_12_PIN_CFG - swm3_12 output select register */
/*! @{ */

#define DSWM_SWM3_12_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM3_12_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_12_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_12_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM3_12_PIN_CFG_EHS0_MASK)

#define DSWM_SWM3_12_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM3_12_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_12_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_12_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM3_12_PIN_CFG_EHS1_MASK)

#define DSWM_SWM3_12_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM3_12_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM3_12_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_12_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM3_12_PIN_CFG_RSEL_MASK)

#define DSWM_SWM3_12_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM3_12_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM3_12_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_12_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM3_12_PIN_CFG_ENZI_MASK)

#define DSWM_SWM3_12_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM3_12_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM3_12_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_12_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM3_12_PIN_CFG_ENSW_MASK)

#define DSWM_SWM3_12_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM3_12_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM3_12_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_12_PIN_CFG_OVR_SHIFT)) & DSWM_SWM3_12_PIN_CFG_OVR_MASK)

#define DSWM_SWM3_12_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM3_12_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM3_12_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_12_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM3_12_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM3_12_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM3_12_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM3_12_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_12_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM3_12_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM3_13_PIN_CFG - swm3_13 output select register */
/*! @{ */

#define DSWM_SWM3_13_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM3_13_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_13_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_13_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM3_13_PIN_CFG_EHS0_MASK)

#define DSWM_SWM3_13_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM3_13_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_13_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_13_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM3_13_PIN_CFG_EHS1_MASK)

#define DSWM_SWM3_13_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM3_13_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM3_13_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_13_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM3_13_PIN_CFG_RSEL_MASK)

#define DSWM_SWM3_13_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM3_13_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM3_13_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_13_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM3_13_PIN_CFG_ENZI_MASK)

#define DSWM_SWM3_13_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM3_13_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM3_13_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_13_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM3_13_PIN_CFG_ENSW_MASK)

#define DSWM_SWM3_13_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM3_13_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM3_13_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_13_PIN_CFG_OVR_SHIFT)) & DSWM_SWM3_13_PIN_CFG_OVR_MASK)

#define DSWM_SWM3_13_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM3_13_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM3_13_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_13_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM3_13_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM3_13_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM3_13_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM3_13_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_13_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM3_13_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM3_14_PIN_CFG - swm3_14 output select register */
/*! @{ */

#define DSWM_SWM3_14_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM3_14_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_14_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_14_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM3_14_PIN_CFG_EHS0_MASK)

#define DSWM_SWM3_14_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM3_14_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_14_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_14_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM3_14_PIN_CFG_EHS1_MASK)

#define DSWM_SWM3_14_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM3_14_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM3_14_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_14_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM3_14_PIN_CFG_RSEL_MASK)

#define DSWM_SWM3_14_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM3_14_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM3_14_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_14_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM3_14_PIN_CFG_ENZI_MASK)

#define DSWM_SWM3_14_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM3_14_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM3_14_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_14_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM3_14_PIN_CFG_ENSW_MASK)

#define DSWM_SWM3_14_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM3_14_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM3_14_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_14_PIN_CFG_OVR_SHIFT)) & DSWM_SWM3_14_PIN_CFG_OVR_MASK)

#define DSWM_SWM3_14_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM3_14_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM3_14_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_14_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM3_14_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM3_14_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM3_14_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM3_14_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_14_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM3_14_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name SWM3_15_PIN_CFG - swm3_15 output select register */
/*! @{ */

#define DSWM_SWM3_15_PIN_CFG_EHS0_MASK           (0x1U)
#define DSWM_SWM3_15_PIN_CFG_EHS0_SHIFT          (0U)
/*! EHS0 - Drive strength bit 0
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_15_PIN_CFG_EHS0(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_15_PIN_CFG_EHS0_SHIFT)) & DSWM_SWM3_15_PIN_CFG_EHS0_MASK)

#define DSWM_SWM3_15_PIN_CFG_EHS1_MASK           (0x2U)
#define DSWM_SWM3_15_PIN_CFG_EHS1_SHIFT          (1U)
/*! EHS1 - Drive strength bit1
 *  0b0..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 *  0b1..EHS[1:0] 1.25/1.8V: 00=TBD, 01=TBD, 10=TBD, 11=TBD
 */
#define DSWM_SWM3_15_PIN_CFG_EHS1(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_15_PIN_CFG_EHS1_SHIFT)) & DSWM_SWM3_15_PIN_CFG_EHS1_MASK)

#define DSWM_SWM3_15_PIN_CFG_RSEL_MASK           (0x10U)
#define DSWM_SWM3_15_PIN_CFG_RSEL_SHIFT          (4U)
/*! RSEL - Resistor Value
 *  0b0..50k selected
 *  0b1..10k selected
 */
#define DSWM_SWM3_15_PIN_CFG_RSEL(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_15_PIN_CFG_RSEL_SHIFT)) & DSWM_SWM3_15_PIN_CFG_RSEL_MASK)

#define DSWM_SWM3_15_PIN_CFG_ENZI_MASK           (0x20U)
#define DSWM_SWM3_15_PIN_CFG_ENZI_SHIFT          (5U)
/*! ENZI - Input receiver
 *  0b0..Enable input receiver
 *  0b1..Disable input receiver
 */
#define DSWM_SWM3_15_PIN_CFG_ENZI(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_15_PIN_CFG_ENZI_SHIFT)) & DSWM_SWM3_15_PIN_CFG_ENZI_MASK)

#define DSWM_SWM3_15_PIN_CFG_ENSW_MASK           (0x40U)
#define DSWM_SWM3_15_PIN_CFG_ENSW_SHIFT          (6U)
/*! ENSW - Analog receiver switch
 *  0b0..Enable analog receiver switch
 *  0b1..Disable analog receiver switch
 */
#define DSWM_SWM3_15_PIN_CFG_ENSW(x)             (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_15_PIN_CFG_ENSW_SHIFT)) & DSWM_SWM3_15_PIN_CFG_ENSW_MASK)

#define DSWM_SWM3_15_PIN_CFG_OVR_MASK            (0x80U)
#define DSWM_SWM3_15_PIN_CFG_OVR_SHIFT           (7U)
/*! OVR - OVR_PD and OVR_PUN enable switches to manually override the EPUN and EPD
 *  0b0..Disable OVR_PD and OVR_PUN switch
 *  0b1..Enable OVR_PD and OVR_PUN switch
 */
#define DSWM_SWM3_15_PIN_CFG_OVR(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_15_PIN_CFG_OVR_SHIFT)) & DSWM_SWM3_15_PIN_CFG_OVR_MASK)

#define DSWM_SWM3_15_PIN_CFG_OVR_PD_MASK         (0x100U)
#define DSWM_SWM3_15_PIN_CFG_OVR_PD_SHIFT        (8U)
/*! OVR_PD - Override pull-down setings
 *  0b0..Disable pull-down
 *  0b1..Enable pull-down
 */
#define DSWM_SWM3_15_PIN_CFG_OVR_PD(x)           (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_15_PIN_CFG_OVR_PD_SHIFT)) & DSWM_SWM3_15_PIN_CFG_OVR_PD_MASK)

#define DSWM_SWM3_15_PIN_CFG_OVR_PUN_MASK        (0x200U)
#define DSWM_SWM3_15_PIN_CFG_OVR_PUN_SHIFT       (9U)
/*! OVR_PUN - Override pull-up setings
 *  0b0..Enable pull-up
 *  0b1..Disable pull-up
 */
#define DSWM_SWM3_15_PIN_CFG_OVR_PUN(x)          (((uint32_t)(((uint32_t)(x)) << DSWM_SWM3_15_PIN_CFG_OVR_PUN_SHIFT)) & DSWM_SWM3_15_PIN_CFG_OVR_PUN_MASK)
/*! @} */

/*! @name MODULE_ID - Contains the ID number of the IP */
/*! @{ */

#define DSWM_MODULE_ID_APERTURE_MASK             (0xFFU)
#define DSWM_MODULE_ID_APERTURE_SHIFT            (0U)
/*! aperture - Contains the aperture size of the IP */
#define DSWM_MODULE_ID_APERTURE(x)               (((uint32_t)(((uint32_t)(x)) << DSWM_MODULE_ID_APERTURE_SHIFT)) & DSWM_MODULE_ID_APERTURE_MASK)

#define DSWM_MODULE_ID_MINOR_REV_MASK            (0xF00U)
#define DSWM_MODULE_ID_MINOR_REV_SHIFT           (8U)
/*! minor_rev - Minor revision, guaranteed software compatibility between minor revisions */
#define DSWM_MODULE_ID_MINOR_REV(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_MODULE_ID_MINOR_REV_SHIFT)) & DSWM_MODULE_ID_MINOR_REV_MASK)

#define DSWM_MODULE_ID_MAJOR_REV_MASK            (0xF000U)
#define DSWM_MODULE_ID_MAJOR_REV_SHIFT           (12U)
/*! major_rev - Major revision, guaranteed software compatibility between major revisions */
#define DSWM_MODULE_ID_MAJOR_REV(x)              (((uint32_t)(((uint32_t)(x)) << DSWM_MODULE_ID_MAJOR_REV_SHIFT)) & DSWM_MODULE_ID_MAJOR_REV_MASK)

#define DSWM_MODULE_ID_ID_MASK                   (0xFFFF0000U)
#define DSWM_MODULE_ID_ID_SHIFT                  (16U)
/*! id - Unique identification number, assigned by CoReUse */
#define DSWM_MODULE_ID_ID(x)                     (((uint32_t)(((uint32_t)(x)) << DSWM_MODULE_ID_ID_SHIFT)) & DSWM_MODULE_ID_ID_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group DSWM_Register_Masks */


/*!
 * @}
 */ /* end of group DSWM_Peripheral_Access_Layer */


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


#endif  /* PERI_DSWM_H_ */

