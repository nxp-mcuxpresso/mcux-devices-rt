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
**         CMSIS Peripheral Access Layer for ADSS_ANCCODEC_SYSCON
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
 * @file PERI_ADSS_ANCCODEC_SYSCON.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_ANCCODEC_SYSCON
 *
 * CMSIS Peripheral Access Layer for ADSS_ANCCODEC_SYSCON
 */

#if !defined(PERI_ADSS_ANCCODEC_SYSCON_H_)
#define PERI_ADSS_ANCCODEC_SYSCON_H_             /**< Symbol preventing repeated inclusion */

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
   -- ADSS_ANCCODEC_SYSCON Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_ANCCODEC_SYSCON_Peripheral_Access_Layer ADSS_ANCCODEC_SYSCON Peripheral Access Layer
 * @{
 */

/** ADSS_ANCCODEC_SYSCON - Register Layout Typedef */
typedef struct {
  __IO uint32_t AUDIO_PWM;                         /**< Audio PWM control register (maps to d2a_pmucgu_audio_pwm_* signals), offset: 0x0 */
  __IO uint32_t CDU;                               /**< Clock distribution unit control register (maps to d2a_pmucgu_cdu_* signals), offset: 0x4 */
  __IO uint32_t ATB_MON;                           /**< ATB monitor control register (maps to d2a_atb_mon_sig_* and d2a_atb[12]_mon_* signals), offset: 0x8 */
  __IO uint32_t BG;                                /**< Bandgap control register (maps to d2a_sig_bg_* signals), offset: 0xC */
  __IO uint32_t LDOMICBIAS;                        /**< LDO MicBias control register (maps to d2a_sig_ldomicbias_* signals), offset: 0x10 */
  __IO uint32_t MICADC_ADC1_0;                     /**< MicADC ADC1 control register 0 (maps to d2a_sig_micadc_adc1_* clip/enable/input fields), offset: 0x14 */
  __IO uint32_t MICADC_ADC1_1;                     /**< MicADC ADC1 control register 1 (maps to d2a_sig_micadc_adc1_* offset/ota/vcm/vin fields), offset: 0x18 */
  __IO uint32_t MICADC_ADC1_2;                     /**< MicADC ADC1 control register 2 (maps to d2a_sig_micadc_adc1_vin_dc_shift), offset: 0x1C */
  __IO uint32_t MICADC_ADC2_0;                     /**< MicADC ADC2 control register 0 (maps to d2a_sig_micadc_adc2_* clip/enable/input fields), offset: 0x20 */
  __IO uint32_t MICADC_ADC2_1;                     /**< MicADC ADC2 control register 1 (maps to d2a_sig_micadc_adc2_* offset/ota/vcm/vin fields), offset: 0x24 */
  __IO uint32_t MICADC_ADC2_2;                     /**< MicADC ADC2 control register 2 (maps to d2a_sig_micadc_adc2_vin_dc_shift), offset: 0x28 */
  __IO uint32_t MICADC_ADC3_0;                     /**< MicADC ADC3 control register 0 (maps to d2a_sig_micadc_adc3_* clip/enable/input fields), offset: 0x2C */
  __IO uint32_t MICADC_ADC3_1;                     /**< MicADC ADC3 control register 1 (maps to d2a_sig_micadc_adc3_* offset/ota/vcm/vin fields), offset: 0x30 */
  __IO uint32_t MICADC_ADC3_2;                     /**< MicADC ADC3 control register 2 (maps to d2a_sig_micadc_adc3_vin_dc_shift), offset: 0x34 */
  __IO uint32_t MICADC_MISC;                       /**< MicADC miscellaneous control register (maps to d2a_sig_micadc_* shared and test signals), offset: 0x38 */
  __IO uint32_t LDOSPDR;                           /**< LDO SPDR control register (maps to d2a_spr_ldospdr_* signals), offset: 0x3C */
  __IO uint32_t SPDR;                              /**< SPDR control register (maps to d2a_spr_spdr_* signals), offset: 0x40 */
  __IO uint32_t TEST;                              /**< VHV test enable register (maps to d2a_sig_vhv_test_enable), offset: 0x44 */
  __IO uint32_t ADCS;                              /**< ADCs test and TCB control register (maps to d2a_sig_adcs_* signals), offset: 0x48 */
  __IO uint32_t CHARGEPUMP;                        /**< Charge pump control register (maps to d2a_pmucgu_chargepump_enable), offset: 0x4C */
} ADSS_ANCCODEC_SYSCON_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_ANCCODEC_SYSCON Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_ANCCODEC_SYSCON_Register_Masks ADSS_ANCCODEC_SYSCON Register Masks
 * @{
 */

/*! @name AUDIO_PWM - Audio PWM control register (maps to d2a_pmucgu_audio_pwm_* signals) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_bypass_MASK (0x1U)
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_bypass_SHIFT (0U)
/*! bypass - Audio PWM bypass enable (d2a_pmucgu_audio_pwm_bypass) */
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_bypass(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_AUDIO_PWM_bypass_SHIFT)) & ADSS_ANCCODEC_SYSCON_AUDIO_PWM_bypass_MASK)

#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_enable_MASK (0x200U)
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_enable_SHIFT (9U)
/*! enable - Audio PWM enable (d2a_pmucgu_audio_pwm_enable) */
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_AUDIO_PWM_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_AUDIO_PWM_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_mode_select_MASK (0x1C00U)
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_mode_select_SHIFT (10U)
/*! mode_select - Audio PWM mode select (d2a_pmucgu_audio_pwm_mode_select[2:0]) */
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_mode_select(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_AUDIO_PWM_mode_select_SHIFT)) & ADSS_ANCCODEC_SYSCON_AUDIO_PWM_mode_select_MASK)

#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_mute_MASK (0x2000U)
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_mute_SHIFT (13U)
/*! mute - Audio PWM mute (d2a_pmucgu_audio_pwm_mute) */
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_mute(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_AUDIO_PWM_mute_SHIFT)) & ADSS_ANCCODEC_SYSCON_AUDIO_PWM_mute_MASK)

#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_pll_input_test_se_MASK (0x4000U)
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_pll_input_test_se_SHIFT (14U)
/*! pll_input_test_se - Audio PWM PLL input test scan enable (d2a_pmucgu_audio_pwm_pll_input_test_se) */
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_pll_input_test_se(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_AUDIO_PWM_pll_input_test_se_SHIFT)) & ADSS_ANCCODEC_SYSCON_AUDIO_PWM_pll_input_test_se_MASK)

#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_pll_input_test_si_MASK (0x8000U)
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_pll_input_test_si_SHIFT (15U)
/*! pll_input_test_si - Audio PWM PLL input test scan input (d2a_pmucgu_audio_pwm_pll_input_test_si) */
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_pll_input_test_si(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_AUDIO_PWM_pll_input_test_si_SHIFT)) & ADSS_ANCCODEC_SYSCON_AUDIO_PWM_pll_input_test_si_MASK)

#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_pll_tcb_async_disable_MASK (0x10000U)
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_pll_tcb_async_disable_SHIFT (16U)
/*! pll_tcb_async_disable - Audio PWM PLL TCB async disable (d2a_pmucgu_audio_pwm_pll_tcb_async_disable) */
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_pll_tcb_async_disable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_AUDIO_PWM_pll_tcb_async_disable_SHIFT)) & ADSS_ANCCODEC_SYSCON_AUDIO_PWM_pll_tcb_async_disable_MASK)

#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_reset_MASK (0x20000U)
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_reset_SHIFT (17U)
/*! reset - Audio PWM reset (d2a_pmucgu_audio_pwm_reset) */
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_reset(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_AUDIO_PWM_reset_SHIFT)) & ADSS_ANCCODEC_SYSCON_AUDIO_PWM_reset_MASK)

#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_window_enable_MASK (0x40000U)
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_window_enable_SHIFT (18U)
/*! window_enable - Audio PWM window enable (d2a_pmucgu_audio_pwm_window_enable) */
#define ADSS_ANCCODEC_SYSCON_AUDIO_PWM_window_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_AUDIO_PWM_window_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_AUDIO_PWM_window_enable_MASK)
/*! @} */

/*! @name CDU - Clock distribution unit control register (maps to d2a_pmucgu_cdu_* signals) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_CDU_micadc_clk_enable_MASK (0x40U)
#define ADSS_ANCCODEC_SYSCON_CDU_micadc_clk_enable_SHIFT (6U)
/*! micadc_clk_enable - MicADC clock enable (d2a_pmucgu_cdu_micadc_clk_enable) */
#define ADSS_ANCCODEC_SYSCON_CDU_micadc_clk_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_CDU_micadc_clk_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_CDU_micadc_clk_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_CDU_micadc_cp_clk_enable_MASK (0x80U)
#define ADSS_ANCCODEC_SYSCON_CDU_micadc_cp_clk_enable_SHIFT (7U)
/*! micadc_cp_clk_enable - MicADC charge-pump clock enable (d2a_pmucgu_cdu_micadc_cp_clk_enable) */
#define ADSS_ANCCODEC_SYSCON_CDU_micadc_cp_clk_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_CDU_micadc_cp_clk_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_CDU_micadc_cp_clk_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_CDU_micadc_cp_clk_sel_MASK (0x700U)
#define ADSS_ANCCODEC_SYSCON_CDU_micadc_cp_clk_sel_SHIFT (8U)
/*! micadc_cp_clk_sel - MicADC charge-pump clock select (d2a_pmucgu_cdu_micadc_cp_clk_sel[2:0]); default 3 */
#define ADSS_ANCCODEC_SYSCON_CDU_micadc_cp_clk_sel(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_CDU_micadc_cp_clk_sel_SHIFT)) & ADSS_ANCCODEC_SYSCON_CDU_micadc_cp_clk_sel_MASK)

#define ADSS_ANCCODEC_SYSCON_CDU_micadc_div_sel_MASK (0x1800U)
#define ADSS_ANCCODEC_SYSCON_CDU_micadc_div_sel_SHIFT (11U)
/*! micadc_div_sel - MicADC divider select (d2a_pmucgu_cdu_micadc_div_sel[1:0]) */
#define ADSS_ANCCODEC_SYSCON_CDU_micadc_div_sel(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_CDU_micadc_div_sel_SHIFT)) & ADSS_ANCCODEC_SYSCON_CDU_micadc_div_sel_MASK)

#define ADSS_ANCCODEC_SYSCON_CDU_micadc_fs_sel_MASK (0x6000U)
#define ADSS_ANCCODEC_SYSCON_CDU_micadc_fs_sel_SHIFT (13U)
/*! micadc_fs_sel - MicADC sample-rate select (d2a_pmucgu_cdu_micadc_fs_sel[1:0]) */
#define ADSS_ANCCODEC_SYSCON_CDU_micadc_fs_sel(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_CDU_micadc_fs_sel_SHIFT)) & ADSS_ANCCODEC_SYSCON_CDU_micadc_fs_sel_MASK)

#define ADSS_ANCCODEC_SYSCON_CDU_pwm_clk_enable_MASK (0x8000U)
#define ADSS_ANCCODEC_SYSCON_CDU_pwm_clk_enable_SHIFT (15U)
/*! pwm_clk_enable - PWM clock enable (d2a_pmucgu_cdu_pwm_clk_enable) */
#define ADSS_ANCCODEC_SYSCON_CDU_pwm_clk_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_CDU_pwm_clk_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_CDU_pwm_clk_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_CDU_pwm_clk_sel_MASK (0xF0000U)
#define ADSS_ANCCODEC_SYSCON_CDU_pwm_clk_sel_SHIFT (16U)
/*! pwm_clk_sel - PWM clock select (d2a_pmucgu_cdu_pwm_clk_sel[3:0]) */
#define ADSS_ANCCODEC_SYSCON_CDU_pwm_clk_sel(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_CDU_pwm_clk_sel_SHIFT)) & ADSS_ANCCODEC_SYSCON_CDU_pwm_clk_sel_MASK)

#define ADSS_ANCCODEC_SYSCON_CDU_pwm_div2_enable_MASK (0x100000U)
#define ADSS_ANCCODEC_SYSCON_CDU_pwm_div2_enable_SHIFT (20U)
/*! pwm_div2_enable - PWM divide-by-2 enable (d2a_pmucgu_cdu_pwm_div2_enable) */
#define ADSS_ANCCODEC_SYSCON_CDU_pwm_div2_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_CDU_pwm_div2_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_CDU_pwm_div2_enable_MASK)
/*! @} */

/*! @name ATB_MON - ATB monitor control register (maps to d2a_atb_mon_sig_* and d2a_atb[12]_mon_* signals) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc1_select_MASK (0x7U)
#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc1_select_SHIFT (0U)
/*! micadc_adc1_select - ATB monitor MicADC ADC1 select (d2a_atb_mon_sig_micadc_adc1_select[2:0]) */
#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc1_select(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc1_select_SHIFT)) & ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc1_select_MASK)

#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc1_test_enable_MASK (0x8U)
#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc1_test_enable_SHIFT (3U)
/*! micadc_adc1_test_enable - ATB monitor MicADC ADC1 test enable (d2a_atb_mon_sig_micadc_adc1_test_enable) */
#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc1_test_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc1_test_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc1_test_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc2_select_MASK (0x70U)
#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc2_select_SHIFT (4U)
/*! micadc_adc2_select - ATB monitor MicADC ADC2 select (d2a_atb_mon_sig_micadc_adc2_select[2:0]) */
#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc2_select(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc2_select_SHIFT)) & ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc2_select_MASK)

#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc2_test_enable_MASK (0x80U)
#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc2_test_enable_SHIFT (7U)
/*! micadc_adc2_test_enable - ATB monitor MicADC ADC2 test enable (d2a_atb_mon_sig_micadc_adc2_test_enable) */
#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc2_test_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc2_test_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc2_test_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc3_select_MASK (0x700U)
#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc3_select_SHIFT (8U)
/*! micadc_adc3_select - ATB monitor MicADC ADC3 select (d2a_atb_mon_sig_micadc_adc3_select[2:0]) */
#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc3_select(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc3_select_SHIFT)) & ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc3_select_MASK)

#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc3_test_enable_MASK (0x800U)
#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc3_test_enable_SHIFT (11U)
/*! micadc_adc3_test_enable - ATB monitor MicADC ADC3 test enable (d2a_atb_mon_sig_micadc_adc3_test_enable) */
#define ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc3_test_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc3_test_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_ATB_MON_micadc_adc3_test_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_ATB_MON_atb1_reference_select_MASK (0x7000U)
#define ADSS_ANCCODEC_SYSCON_ATB_MON_atb1_reference_select_SHIFT (12U)
/*! atb1_reference_select - ATB1 monitor reference select (d2a_atb1_mon_sig_reference_select[2:0]) */
#define ADSS_ANCCODEC_SYSCON_ATB_MON_atb1_reference_select(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_ATB_MON_atb1_reference_select_SHIFT)) & ADSS_ANCCODEC_SYSCON_ATB_MON_atb1_reference_select_MASK)

#define ADSS_ANCCODEC_SYSCON_ATB_MON_atb2_reference_select_MASK (0x38000U)
#define ADSS_ANCCODEC_SYSCON_ATB_MON_atb2_reference_select_SHIFT (15U)
/*! atb2_reference_select - ATB2 monitor reference select (d2a_atb2_mon_sig_reference_select[2:0]) */
#define ADSS_ANCCODEC_SYSCON_ATB_MON_atb2_reference_select(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_ATB_MON_atb2_reference_select_SHIFT)) & ADSS_ANCCODEC_SYSCON_ATB_MON_atb2_reference_select_MASK)

#define ADSS_ANCCODEC_SYSCON_ATB_MON_saradcs_select_MASK (0x300000U)
#define ADSS_ANCCODEC_SYSCON_ATB_MON_saradcs_select_SHIFT (20U)
/*! saradcs_select - ATB monitor SAR ADCs select (d2a_atb_mon_sig_saradcs_select[1:0]) */
#define ADSS_ANCCODEC_SYSCON_ATB_MON_saradcs_select(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_ATB_MON_saradcs_select_SHIFT)) & ADSS_ANCCODEC_SYSCON_ATB_MON_saradcs_select_MASK)

#define ADSS_ANCCODEC_SYSCON_ATB_MON_atb1_spdr_select_MASK (0x1C00000U)
#define ADSS_ANCCODEC_SYSCON_ATB_MON_atb1_spdr_select_SHIFT (22U)
/*! atb1_spdr_select - ATB1 monitor SPR/SPDR select (d2a_atb1_mon_spr_spdr_select[2:0]) */
#define ADSS_ANCCODEC_SYSCON_ATB_MON_atb1_spdr_select(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_ATB_MON_atb1_spdr_select_SHIFT)) & ADSS_ANCCODEC_SYSCON_ATB_MON_atb1_spdr_select_MASK)

#define ADSS_ANCCODEC_SYSCON_ATB_MON_atb2_spdr_select_MASK (0xE000000U)
#define ADSS_ANCCODEC_SYSCON_ATB_MON_atb2_spdr_select_SHIFT (25U)
/*! atb2_spdr_select - ATB2 monitor SPR/SPDR select (d2a_atb2_mon_spr_spdr_select[2:0]) */
#define ADSS_ANCCODEC_SYSCON_ATB_MON_atb2_spdr_select(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_ATB_MON_atb2_spdr_select_SHIFT)) & ADSS_ANCCODEC_SYSCON_ATB_MON_atb2_spdr_select_MASK)
/*! @} */

/*! @name BG - Bandgap control register (maps to d2a_sig_bg_* signals) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_BG_ldomicbias_i250n_enable_MASK (0x2U)
#define ADSS_ANCCODEC_SYSCON_BG_ldomicbias_i250n_enable_SHIFT (1U)
/*! ldomicbias_i250n_enable - Bandgap LDO MicBias 250nA current enable (d2a_sig_bg_ldomicbias_i250n_enable) */
#define ADSS_ANCCODEC_SYSCON_BG_ldomicbias_i250n_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_BG_ldomicbias_i250n_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_BG_ldomicbias_i250n_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_BG_micadc_i250n_enable_MASK (0x4U)
#define ADSS_ANCCODEC_SYSCON_BG_micadc_i250n_enable_SHIFT (2U)
/*! micadc_i250n_enable - Bandgap MicADC 250nA current enable (d2a_sig_bg_micadc_i250n_enable) */
#define ADSS_ANCCODEC_SYSCON_BG_micadc_i250n_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_BG_micadc_i250n_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_BG_micadc_i250n_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_BG_spdr_i250n_enable_MASK (0x8U)
#define ADSS_ANCCODEC_SYSCON_BG_spdr_i250n_enable_SHIFT (3U)
/*! spdr_i250n_enable - Bandgap SPDR 250nA current enable (d2a_sig_bg_spdr_i250n_enable) */
#define ADSS_ANCCODEC_SYSCON_BG_spdr_i250n_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_BG_spdr_i250n_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_BG_spdr_i250n_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_BG_temp_coeff_set_MASK (0x70U)
#define ADSS_ANCCODEC_SYSCON_BG_temp_coeff_set_SHIFT (4U)
/*! temp_coeff_set - Bandgap temperature coefficient setting (d2a_sig_bg_temp_coeff_set[2:0]); default 4 */
#define ADSS_ANCCODEC_SYSCON_BG_temp_coeff_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_BG_temp_coeff_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_BG_temp_coeff_set_MASK)

#define ADSS_ANCCODEC_SYSCON_BG_test_i500n_enable_MASK (0x80U)
#define ADSS_ANCCODEC_SYSCON_BG_test_i500n_enable_SHIFT (7U)
/*! test_i500n_enable - Bandgap test 500nA current enable (d2a_sig_bg_test_i500n_enable) */
#define ADSS_ANCCODEC_SYSCON_BG_test_i500n_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_BG_test_i500n_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_BG_test_i500n_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_BG_vref_tcoil_set_MASK (0x300U)
#define ADSS_ANCCODEC_SYSCON_BG_vref_tcoil_set_SHIFT (8U)
/*! vref_tcoil_set - Bandgap Vref tcoil setting (d2a_sig_bg_vref_tcoil_set[1:0]) */
#define ADSS_ANCCODEC_SYSCON_BG_vref_tcoil_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_BG_vref_tcoil_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_BG_vref_tcoil_set_MASK)
/*! @} */

/*! @name LDOMICBIAS - LDO MicBias control register (maps to d2a_sig_ldomicbias_* signals) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_ea_ibias_set_MASK (0x3U)
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_ea_ibias_set_SHIFT (0U)
/*! ea_ibias_set - LDO MicBias error amplifier ibias setting (d2a_sig_ldomicbias_ea_ibias_set[1:0]) */
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_ea_ibias_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_LDOMICBIAS_ea_ibias_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_LDOMICBIAS_ea_ibias_set_MASK)

#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_ea_rc_set_MASK (0xCU)
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_ea_rc_set_SHIFT (2U)
/*! ea_rc_set - LDO MicBias error amplifier RC setting (d2a_sig_ldomicbias_ea_rc_set[1:0]) */
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_ea_rc_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_LDOMICBIAS_ea_rc_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_LDOMICBIAS_ea_rc_set_MASK)

#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_enable_MASK (0x10U)
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_enable_SHIFT (4U)
/*! enable - LDO MicBias enable (d2a_sig_ldomicbias_enable) */
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_LDOMICBIAS_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_LDOMICBIAS_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_int_res_set_MASK (0x3E0U)
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_int_res_set_SHIFT (5U)
/*! int_res_set - LDO MicBias internal resistor setting (d2a_sig_ldomicbias_int_res_set[4:0]) */
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_int_res_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_LDOMICBIAS_int_res_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_LDOMICBIAS_int_res_set_MASK)

#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_res_fb_sel_1h_MASK (0xC00U)
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_res_fb_sel_1h_SHIFT (10U)
/*! res_fb_sel_1h - LDO MicBias feedback resistor select one-hot (d2a_sig_ldomicbias_res_fb_sel_1h[1:0]) */
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_res_fb_sel_1h(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_LDOMICBIAS_res_fb_sel_1h_SHIFT)) & ADSS_ANCCODEC_SYSCON_LDOMICBIAS_res_fb_sel_1h_MASK)

#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_set_MASK (0x1F000U)
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_set_SHIFT (12U)
/*! set - LDO MicBias output voltage setting (d2a_sig_ldomicbias_set[4:0]) */
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_set(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_LDOMICBIAS_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_LDOMICBIAS_set_MASK)

#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_bod_enable_MASK (0x20000U)
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_bod_enable_SHIFT (17U)
/*! bod_enable - LDO MicBias brownout detection enable (d2a_sig_ldomicbias_bod_enable) */
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_bod_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_LDOMICBIAS_bod_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_LDOMICBIAS_bod_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_bypass_MASK (0x40000U)
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_bypass_SHIFT (18U)
/*! bypass - LDO MicBias bypass enable (d2a_sig_ldomicbias_bypass) */
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_bypass(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_LDOMICBIAS_bypass_SHIFT)) & ADSS_ANCCODEC_SYSCON_LDOMICBIAS_bypass_MASK)

#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_use_vana_MASK (0x80000U)
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_use_vana_SHIFT (19U)
/*! use_vana - LDO MicBias use VANA supply (d2a_sig_ldomicbias_use_vana) */
#define ADSS_ANCCODEC_SYSCON_LDOMICBIAS_use_vana(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_LDOMICBIAS_use_vana_SHIFT)) & ADSS_ANCCODEC_SYSCON_LDOMICBIAS_use_vana_MASK)
/*! @} */

/*! @name MICADC_ADC1_0 - MicADC ADC1 control register 0 (maps to d2a_sig_micadc_adc1_* clip/enable/input fields) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_chop_clk_invert_enable_MASK (0x1U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_chop_clk_invert_enable_SHIFT (0U)
/*! chop_clk_invert_enable - ADC1 chop clock invert enable (d2a_sig_micadc_adc1_chop_clk_invert_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_chop_clk_invert_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_chop_clk_invert_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_chop_clk_invert_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipH1_set_MASK (0x1EU)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipH1_set_SHIFT (1U)
/*! clipH1_set - ADC1 high clip level 1 setting (d2a_sig_micadc_adc1_clipH1_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipH1_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipH1_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipH1_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipH2_set_MASK (0x1E0U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipH2_set_SHIFT (5U)
/*! clipH2_set - ADC1 high clip level 2 setting (d2a_sig_micadc_adc1_clipH2_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipH2_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipH2_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipH2_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipL1_set_MASK (0x1E00U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipL1_set_SHIFT (9U)
/*! clipL1_set - ADC1 low clip level 1 setting (d2a_sig_micadc_adc1_clipL1_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipL1_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipL1_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipL1_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipL2_set_MASK (0x1E000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipL2_set_SHIFT (13U)
/*! clipL2_set - ADC1 low clip level 2 setting (d2a_sig_micadc_adc1_clipL2_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipL2_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipL2_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_clipL2_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_enable_MASK (0x20000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_enable_SHIFT (17U)
/*! enable - ADC1 enable (d2a_sig_micadc_adc1_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_input_sel_1h_MASK (0x7C0000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_input_sel_1h_SHIFT (18U)
/*! input_sel_1h - ADC1 input select one-hot (d2a_sig_micadc_adc1_input_sel_1h[4:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_input_sel_1h(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_input_sel_1h_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_input_sel_1h_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_int1_cap_set_MASK (0x7800000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_int1_cap_set_SHIFT (23U)
/*! int1_cap_set - ADC1 integrator 1 capacitor setting (d2a_sig_micadc_adc1_int1_cap_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_int1_cap_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_int1_cap_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_int1_cap_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_int234_cap_set_MASK (0x78000000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_int234_cap_set_SHIFT (27U)
/*! int234_cap_set - ADC1 integrators 2/3/4 capacitor setting (d2a_sig_micadc_adc1_int234_cap_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_int234_cap_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_int234_cap_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_int234_cap_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_lownoise_enable_MASK (0x80000000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_lownoise_enable_SHIFT (31U)
/*! lownoise_enable - ADC1 low-noise mode enable (d2a_sig_micadc_adc1_lownoise_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_lownoise_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_lownoise_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_0_lownoise_enable_MASK)
/*! @} */

/*! @name MICADC_ADC1_1 - MicADC ADC1 control register 1 (maps to d2a_sig_micadc_adc1_* offset/ota/vcm/vin fields) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_offset_bypass_MASK (0x1U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_offset_bypass_SHIFT (0U)
/*! offset_bypass - ADC1 offset bypass (d2a_sig_micadc_adc1_offset_bypass) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_offset_bypass(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_offset_bypass_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_offset_bypass_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_offset_set_MASK (0x7EU)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_offset_set_SHIFT (1U)
/*! offset_set - ADC1 offset setting (d2a_sig_micadc_adc1_offset_set[5:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_offset_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_offset_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_offset_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_ota1_bias_set_MASK (0x780U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_ota1_bias_set_SHIFT (7U)
/*! ota1_bias_set - ADC1 OTA1 bias setting (d2a_sig_micadc_adc1_ota1_bias_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_ota1_bias_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_ota1_bias_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_ota1_bias_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_ota1_casc_set_MASK (0x7800U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_ota1_casc_set_SHIFT (11U)
/*! ota1_casc_set - ADC1 OTA1 cascode setting (d2a_sig_micadc_adc1_ota1_casc_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_ota1_casc_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_ota1_casc_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_ota1_casc_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_ota2_bias_set_MASK (0x78000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_ota2_bias_set_SHIFT (15U)
/*! ota2_bias_set - ADC1 OTA2 bias setting (d2a_sig_micadc_adc1_ota2_bias_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_ota2_bias_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_ota2_bias_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_ota2_bias_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vcm1_set_MASK (0x380000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vcm1_set_SHIFT (19U)
/*! vcm1_set - ADC1 common-mode voltage 1 setting (d2a_sig_micadc_adc1_vcm1_set[2:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vcm1_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vcm1_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vcm1_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vcm2_set_MASK (0x1C00000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vcm2_set_SHIFT (22U)
/*! vcm2_set - ADC1 common-mode voltage 2 setting (d2a_sig_micadc_adc1_vcm2_set[2:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vcm2_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vcm2_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vcm2_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vin_dc_enable_MASK (0x2000000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vin_dc_enable_SHIFT (25U)
/*! vin_dc_enable - ADC1 Vin DC enable (d2a_sig_micadc_adc1_vin_dc_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vin_dc_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vin_dc_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vin_dc_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vin_dc_set_1h_MASK (0x7C000000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vin_dc_set_1h_SHIFT (26U)
/*! vin_dc_set_1h - ADC1 Vin DC set one-hot (d2a_sig_micadc_adc1_vin_dc_set_1h[4:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vin_dc_set_1h(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vin_dc_set_1h_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_1_vin_dc_set_1h_MASK)
/*! @} */

/*! @name MICADC_ADC1_2 - MicADC ADC1 control register 2 (maps to d2a_sig_micadc_adc1_vin_dc_shift) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_2_vin_dc_shift_MASK (0x3FU)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_2_vin_dc_shift_SHIFT (0U)
/*! vin_dc_shift - ADC1 Vin DC shift (d2a_sig_micadc_adc1_vin_dc_shift[5:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC1_2_vin_dc_shift(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC1_2_vin_dc_shift_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC1_2_vin_dc_shift_MASK)
/*! @} */

/*! @name MICADC_ADC2_0 - MicADC ADC2 control register 0 (maps to d2a_sig_micadc_adc2_* clip/enable/input fields) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_chop_clk_invert_enable_MASK (0x1U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_chop_clk_invert_enable_SHIFT (0U)
/*! chop_clk_invert_enable - ADC2 chop clock invert enable (d2a_sig_micadc_adc2_chop_clk_invert_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_chop_clk_invert_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_chop_clk_invert_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_chop_clk_invert_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipH1_set_MASK (0x1EU)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipH1_set_SHIFT (1U)
/*! clipH1_set - ADC2 high clip level 1 setting (d2a_sig_micadc_adc2_clipH1_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipH1_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipH1_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipH1_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipH2_set_MASK (0x1E0U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipH2_set_SHIFT (5U)
/*! clipH2_set - ADC2 high clip level 2 setting (d2a_sig_micadc_adc2_clipH2_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipH2_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipH2_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipH2_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipL1_set_MASK (0x1E00U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipL1_set_SHIFT (9U)
/*! clipL1_set - ADC2 low clip level 1 setting (d2a_sig_micadc_adc2_clipL1_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipL1_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipL1_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipL1_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipL2_set_MASK (0x1E000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipL2_set_SHIFT (13U)
/*! clipL2_set - ADC2 low clip level 2 setting (d2a_sig_micadc_adc2_clipL2_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipL2_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipL2_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_clipL2_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_enable_MASK (0x20000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_enable_SHIFT (17U)
/*! enable - ADC2 enable (d2a_sig_micadc_adc2_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_input_sel_1h_MASK (0x7C0000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_input_sel_1h_SHIFT (18U)
/*! input_sel_1h - ADC2 input select one-hot (d2a_sig_micadc_adc2_input_sel_1h[4:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_input_sel_1h(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_input_sel_1h_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_input_sel_1h_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_int1_cap_set_MASK (0x7800000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_int1_cap_set_SHIFT (23U)
/*! int1_cap_set - ADC2 integrator 1 capacitor setting (d2a_sig_micadc_adc2_int1_cap_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_int1_cap_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_int1_cap_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_int1_cap_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_int234_cap_set_MASK (0x78000000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_int234_cap_set_SHIFT (27U)
/*! int234_cap_set - ADC2 integrators 2/3/4 capacitor setting (d2a_sig_micadc_adc2_int234_cap_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_int234_cap_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_int234_cap_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_int234_cap_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_lownoise_enable_MASK (0x80000000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_lownoise_enable_SHIFT (31U)
/*! lownoise_enable - ADC2 low-noise mode enable (d2a_sig_micadc_adc2_lownoise_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_lownoise_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_lownoise_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_0_lownoise_enable_MASK)
/*! @} */

/*! @name MICADC_ADC2_1 - MicADC ADC2 control register 1 (maps to d2a_sig_micadc_adc2_* offset/ota/vcm/vin fields) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_offset_bypass_MASK (0x1U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_offset_bypass_SHIFT (0U)
/*! offset_bypass - ADC2 offset bypass (d2a_sig_micadc_adc2_offset_bypass) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_offset_bypass(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_offset_bypass_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_offset_bypass_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_offset_set_MASK (0x7EU)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_offset_set_SHIFT (1U)
/*! offset_set - ADC2 offset setting (d2a_sig_micadc_adc2_offset_set[5:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_offset_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_offset_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_offset_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_ota1_bias_set_MASK (0x780U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_ota1_bias_set_SHIFT (7U)
/*! ota1_bias_set - ADC2 OTA1 bias setting (d2a_sig_micadc_adc2_ota1_bias_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_ota1_bias_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_ota1_bias_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_ota1_bias_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_ota1_casc_set_MASK (0x7800U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_ota1_casc_set_SHIFT (11U)
/*! ota1_casc_set - ADC2 OTA1 cascode setting (d2a_sig_micadc_adc2_ota1_casc_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_ota1_casc_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_ota1_casc_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_ota1_casc_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_ota2_bias_set_MASK (0x78000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_ota2_bias_set_SHIFT (15U)
/*! ota2_bias_set - ADC2 OTA2 bias setting (d2a_sig_micadc_adc2_ota2_bias_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_ota2_bias_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_ota2_bias_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_ota2_bias_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vcm1_set_MASK (0x380000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vcm1_set_SHIFT (19U)
/*! vcm1_set - ADC2 common-mode voltage 1 setting (d2a_sig_micadc_adc2_vcm1_set[2:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vcm1_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vcm1_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vcm1_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vcm2_set_MASK (0x1C00000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vcm2_set_SHIFT (22U)
/*! vcm2_set - ADC2 common-mode voltage 2 setting (d2a_sig_micadc_adc2_vcm2_set[2:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vcm2_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vcm2_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vcm2_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vin_dc_enable_MASK (0x2000000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vin_dc_enable_SHIFT (25U)
/*! vin_dc_enable - ADC2 Vin DC enable (d2a_sig_micadc_adc2_vin_dc_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vin_dc_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vin_dc_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vin_dc_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vin_dc_set_1h_MASK (0x7C000000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vin_dc_set_1h_SHIFT (26U)
/*! vin_dc_set_1h - ADC2 Vin DC set one-hot (d2a_sig_micadc_adc2_vin_dc_set_1h[4:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vin_dc_set_1h(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vin_dc_set_1h_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_1_vin_dc_set_1h_MASK)
/*! @} */

/*! @name MICADC_ADC2_2 - MicADC ADC2 control register 2 (maps to d2a_sig_micadc_adc2_vin_dc_shift) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_2_vin_dc_shift_MASK (0x3FU)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_2_vin_dc_shift_SHIFT (0U)
/*! vin_dc_shift - ADC2 Vin DC shift (d2a_sig_micadc_adc2_vin_dc_shift[5:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC2_2_vin_dc_shift(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC2_2_vin_dc_shift_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC2_2_vin_dc_shift_MASK)
/*! @} */

/*! @name MICADC_ADC3_0 - MicADC ADC3 control register 0 (maps to d2a_sig_micadc_adc3_* clip/enable/input fields) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_chop_clk_invert_enable_MASK (0x1U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_chop_clk_invert_enable_SHIFT (0U)
/*! chop_clk_invert_enable - ADC3 chop clock invert enable (d2a_sig_micadc_adc3_chop_clk_invert_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_chop_clk_invert_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_chop_clk_invert_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_chop_clk_invert_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipH1_set_MASK (0x1EU)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipH1_set_SHIFT (1U)
/*! clipH1_set - ADC3 high clip level 1 setting (d2a_sig_micadc_adc3_clipH1_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipH1_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipH1_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipH1_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipH2_set_MASK (0x1E0U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipH2_set_SHIFT (5U)
/*! clipH2_set - ADC3 high clip level 2 setting (d2a_sig_micadc_adc3_clipH2_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipH2_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipH2_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipH2_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipL1_set_MASK (0x1E00U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipL1_set_SHIFT (9U)
/*! clipL1_set - ADC3 low clip level 1 setting (d2a_sig_micadc_adc3_clipL1_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipL1_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipL1_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipL1_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipL2_set_MASK (0x1E000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipL2_set_SHIFT (13U)
/*! clipL2_set - ADC3 low clip level 2 setting (d2a_sig_micadc_adc3_clipL2_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipL2_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipL2_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_clipL2_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_enable_MASK (0x20000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_enable_SHIFT (17U)
/*! enable - ADC3 enable (d2a_sig_micadc_adc3_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_input_sel_1h_MASK (0x7C0000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_input_sel_1h_SHIFT (18U)
/*! input_sel_1h - ADC3 input select one-hot (d2a_sig_micadc_adc3_input_sel_1h[4:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_input_sel_1h(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_input_sel_1h_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_input_sel_1h_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_int1_cap_set_MASK (0x7800000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_int1_cap_set_SHIFT (23U)
/*! int1_cap_set - ADC3 integrator 1 capacitor setting (d2a_sig_micadc_adc3_int1_cap_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_int1_cap_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_int1_cap_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_int1_cap_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_int234_cap_set_MASK (0x78000000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_int234_cap_set_SHIFT (27U)
/*! int234_cap_set - ADC3 integrators 2/3/4 capacitor setting (d2a_sig_micadc_adc3_int234_cap_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_int234_cap_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_int234_cap_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_int234_cap_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_lownoise_enable_MASK (0x80000000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_lownoise_enable_SHIFT (31U)
/*! lownoise_enable - ADC3 low-noise mode enable (d2a_sig_micadc_adc3_lownoise_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_lownoise_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_lownoise_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_0_lownoise_enable_MASK)
/*! @} */

/*! @name MICADC_ADC3_1 - MicADC ADC3 control register 1 (maps to d2a_sig_micadc_adc3_* offset/ota/vcm/vin fields) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_offset_bypass_MASK (0x1U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_offset_bypass_SHIFT (0U)
/*! offset_bypass - ADC3 offset bypass (d2a_sig_micadc_adc3_offset_bypass) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_offset_bypass(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_offset_bypass_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_offset_bypass_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_offset_set_MASK (0x7EU)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_offset_set_SHIFT (1U)
/*! offset_set - ADC3 offset setting (d2a_sig_micadc_adc3_offset_set[5:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_offset_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_offset_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_offset_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_ota1_bias_set_MASK (0x780U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_ota1_bias_set_SHIFT (7U)
/*! ota1_bias_set - ADC3 OTA1 bias setting (d2a_sig_micadc_adc3_ota1_bias_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_ota1_bias_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_ota1_bias_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_ota1_bias_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_ota1_casc_set_MASK (0x7800U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_ota1_casc_set_SHIFT (11U)
/*! ota1_casc_set - ADC3 OTA1 cascode setting (d2a_sig_micadc_adc3_ota1_casc_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_ota1_casc_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_ota1_casc_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_ota1_casc_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_ota2_bias_set_MASK (0x78000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_ota2_bias_set_SHIFT (15U)
/*! ota2_bias_set - ADC3 OTA2 bias setting (d2a_sig_micadc_adc3_ota2_bias_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_ota2_bias_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_ota2_bias_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_ota2_bias_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vcm1_set_MASK (0x380000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vcm1_set_SHIFT (19U)
/*! vcm1_set - ADC3 common-mode voltage 1 setting (d2a_sig_micadc_adc3_vcm1_set[2:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vcm1_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vcm1_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vcm1_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vcm2_set_MASK (0x1C00000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vcm2_set_SHIFT (22U)
/*! vcm2_set - ADC3 common-mode voltage 2 setting (d2a_sig_micadc_adc3_vcm2_set[2:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vcm2_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vcm2_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vcm2_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vin_dc_enable_MASK (0x2000000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vin_dc_enable_SHIFT (25U)
/*! vin_dc_enable - ADC3 Vin DC enable (d2a_sig_micadc_adc3_vin_dc_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vin_dc_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vin_dc_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vin_dc_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vin_dc_set_1h_MASK (0x7C000000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vin_dc_set_1h_SHIFT (26U)
/*! vin_dc_set_1h - ADC3 Vin DC set one-hot (d2a_sig_micadc_adc3_vin_dc_set_1h[4:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vin_dc_set_1h(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vin_dc_set_1h_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_1_vin_dc_set_1h_MASK)
/*! @} */

/*! @name MICADC_ADC3_2 - MicADC ADC3 control register 2 (maps to d2a_sig_micadc_adc3_vin_dc_shift) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_2_vin_dc_shift_MASK (0x3FU)
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_2_vin_dc_shift_SHIFT (0U)
/*! vin_dc_shift - ADC3 Vin DC shift (d2a_sig_micadc_adc3_vin_dc_shift[5:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_ADC3_2_vin_dc_shift(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_ADC3_2_vin_dc_shift_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_ADC3_2_vin_dc_shift_MASK)
/*! @} */

/*! @name MICADC_MISC - MicADC miscellaneous control register (maps to d2a_sig_micadc_* shared and test signals) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_all_bias_set_MASK (0x7U)
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_all_bias_set_SHIFT (0U)
/*! all_bias_set - MicADC global bias setting (d2a_sig_micadc_all_bias_set[2:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_all_bias_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_MISC_all_bias_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_MISC_all_bias_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_clk_chop_div_MASK (0x38U)
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_clk_chop_div_SHIFT (3U)
/*! clk_chop_div - MicADC chop clock divider (d2a_sig_micadc_clk_chop_div[2:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_clk_chop_div(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_MISC_clk_chop_div_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_MISC_clk_chop_div_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_clk_chop_enable_MASK (0x40U)
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_clk_chop_enable_SHIFT (6U)
/*! clk_chop_enable - MicADC chop clock enable (d2a_sig_micadc_clk_chop_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_clk_chop_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_MISC_clk_chop_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_MISC_clk_chop_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_clk_chop_sel_MASK (0x80U)
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_clk_chop_sel_SHIFT (7U)
/*! clk_chop_sel - MicADC chop clock select (d2a_sig_micadc_clk_chop_sel) */
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_clk_chop_sel(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_MISC_clk_chop_sel_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_MISC_clk_chop_sel_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_ldo_fb_set_MASK (0xF00U)
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_ldo_fb_set_SHIFT (8U)
/*! ldo_fb_set - MicADC LDO feedback setting (d2a_sig_micadc_ldo_fb_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_ldo_fb_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_MISC_ldo_fb_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_MISC_ldo_fb_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_10uA_enable_MASK (0x1000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_10uA_enable_SHIFT (12U)
/*! tcoilamp_10uA_enable - MicADC tcoil amplifier 10uA current enable (d2a_sig_micadc_tcoilamp_10uA_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_10uA_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_10uA_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_10uA_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_5uA_enable_MASK (0x2000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_5uA_enable_SHIFT (13U)
/*! tcoilamp_5uA_enable - MicADC tcoil amplifier 5uA current enable (d2a_sig_micadc_tcoilamp_5uA_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_5uA_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_5uA_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_5uA_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_enable_MASK (0x4000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_enable_SHIFT (14U)
/*! tcoilamp_enable - MicADC tcoil amplifier enable (d2a_sig_micadc_tcoilamp_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_extra_filter_set_MASK (0x18000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_extra_filter_set_SHIFT (15U)
/*! tcoilamp_extra_filter_set - MicADC tcoil amplifier extra filter setting (d2a_sig_micadc_tcoilamp_extra_filter_set[1:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_extra_filter_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_extra_filter_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_extra_filter_set_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_gain_MASK (0x1E0000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_gain_SHIFT (17U)
/*! tcoilamp_gain - MicADC tcoil amplifier gain setting (d2a_sig_micadc_tcoilamp_gain[3:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_gain(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_gain_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_MISC_tcoilamp_gain_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_current_enable_MASK (0x200000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_current_enable_SHIFT (21U)
/*! test_current_enable - MicADC test current enable (d2a_sig_micadc_test_current_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_current_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_current_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_current_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_dac_clk_MASK (0x400000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_dac_clk_SHIFT (22U)
/*! test_dac_clk - MicADC test DAC clock (d2a_sig_micadc_test_dac_clk) */
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_dac_clk(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_dac_clk_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_dac_clk_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_dac_enable_MASK (0x800000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_dac_enable_SHIFT (23U)
/*! test_dac_enable - MicADC test DAC enable (d2a_sig_micadc_test_dac_enable) */
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_dac_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_dac_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_dac_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_quantiser_in_MASK (0x1000000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_quantiser_in_SHIFT (24U)
/*! test_quantiser_in - MicADC test quantiser input (d2a_sig_micadc_test_quantiser_in) */
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_quantiser_in(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_quantiser_in_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_MISC_test_quantiser_in_MASK)

#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_vhv_sel_MASK (0x6000000U)
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_vhv_sel_SHIFT (25U)
/*! vhv_sel - VHV supply select (d2a_sig_vhv_sel[1:0]) */
#define ADSS_ANCCODEC_SYSCON_MICADC_MISC_vhv_sel(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_MICADC_MISC_vhv_sel_SHIFT)) & ADSS_ANCCODEC_SYSCON_MICADC_MISC_vhv_sel_MASK)
/*! @} */

/*! @name LDOSPDR - LDO SPDR control register (maps to d2a_spr_ldospdr_* signals) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_LDOSPDR_enable_MASK (0x1U)
#define ADSS_ANCCODEC_SYSCON_LDOSPDR_enable_SHIFT (0U)
/*! enable - LDO SPDR enable (d2a_spr_ldospdr_enable) */
#define ADSS_ANCCODEC_SYSCON_LDOSPDR_enable(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_LDOSPDR_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_LDOSPDR_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_LDOSPDR_res_trim_MASK (0x3EU)
#define ADSS_ANCCODEC_SYSCON_LDOSPDR_res_trim_SHIFT (1U)
/*! res_trim - LDO SPDR resistor trim (d2a_spr_ldospdr_res_trim[4:0]) */
#define ADSS_ANCCODEC_SYSCON_LDOSPDR_res_trim(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_LDOSPDR_res_trim_SHIFT)) & ADSS_ANCCODEC_SYSCON_LDOSPDR_res_trim_MASK)

#define ADSS_ANCCODEC_SYSCON_LDOSPDR_scp_detection_enable_MASK (0x40U)
#define ADSS_ANCCODEC_SYSCON_LDOSPDR_scp_detection_enable_SHIFT (6U)
/*! scp_detection_enable - LDO SPDR short-circuit protection detection enable (d2a_spr_ldospdr_scp_detection_enable) */
#define ADSS_ANCCODEC_SYSCON_LDOSPDR_scp_detection_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_LDOSPDR_scp_detection_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_LDOSPDR_scp_detection_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_LDOSPDR_scp_vrefn_trim_MASK (0x380U)
#define ADSS_ANCCODEC_SYSCON_LDOSPDR_scp_vrefn_trim_SHIFT (7U)
/*! scp_vrefn_trim - LDO SPDR SCP negative reference trim (d2a_spr_ldospdr_scp_vrefn_trim[2:0]) */
#define ADSS_ANCCODEC_SYSCON_LDOSPDR_scp_vrefn_trim(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_LDOSPDR_scp_vrefn_trim_SHIFT)) & ADSS_ANCCODEC_SYSCON_LDOSPDR_scp_vrefn_trim_MASK)

#define ADSS_ANCCODEC_SYSCON_LDOSPDR_scp_vrefp_trim_MASK (0x1C00U)
#define ADSS_ANCCODEC_SYSCON_LDOSPDR_scp_vrefp_trim_SHIFT (10U)
/*! scp_vrefp_trim - LDO SPDR SCP positive reference trim (d2a_spr_ldospdr_scp_vrefp_trim[2:0]) */
#define ADSS_ANCCODEC_SYSCON_LDOSPDR_scp_vrefp_trim(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_LDOSPDR_scp_vrefp_trim_SHIFT)) & ADSS_ANCCODEC_SYSCON_LDOSPDR_scp_vrefp_trim_MASK)

#define ADSS_ANCCODEC_SYSCON_LDOSPDR_bod_enable_MASK (0x2000U)
#define ADSS_ANCCODEC_SYSCON_LDOSPDR_bod_enable_SHIFT (13U)
/*! bod_enable - LDO SPDR brownout detection enable (d2a_spr_ldospdr_bod_enable) */
#define ADSS_ANCCODEC_SYSCON_LDOSPDR_bod_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_LDOSPDR_bod_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_LDOSPDR_bod_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_LDOSPDR_bypass_MASK (0x8000U)
#define ADSS_ANCCODEC_SYSCON_LDOSPDR_bypass_SHIFT (15U)
/*! bypass - LDO SPDR bypass enable (d2a_spr_ldospdr_bypass) */
#define ADSS_ANCCODEC_SYSCON_LDOSPDR_bypass(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_LDOSPDR_bypass_SHIFT)) & ADSS_ANCCODEC_SYSCON_LDOSPDR_bypass_MASK)
/*! @} */

/*! @name SPDR - SPDR control register (maps to d2a_spr_spdr_* signals) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_SPDR_bias_enable_MASK (0x1U)
#define ADSS_ANCCODEC_SYSCON_SPDR_bias_enable_SHIFT (0U)
/*! bias_enable - SPDR bias enable (d2a_spr_spdr_bias_enable) */
#define ADSS_ANCCODEC_SYSCON_SPDR_bias_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_bias_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_bias_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_SPDR_bias_set_MASK  (0xEU)
#define ADSS_ANCCODEC_SYSCON_SPDR_bias_set_SHIFT (1U)
/*! bias_set - SPDR bias setting (d2a_spr_spdr_bias_set[2:0]); default 3 */
#define ADSS_ANCCODEC_SYSCON_SPDR_bias_set(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_bias_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_bias_set_MASK)

#define ADSS_ANCCODEC_SYSCON_SPDR_enb_del_MASK   (0x10U)
#define ADSS_ANCCODEC_SYSCON_SPDR_enb_del_SHIFT  (4U)
/*! enb_del - SPDR enable delay (d2a_spr_spdr_enb_del) */
#define ADSS_ANCCODEC_SYSCON_SPDR_enb_del(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_enb_del_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_enb_del_MASK)

#define ADSS_ANCCODEC_SYSCON_SPDR_hardmute_MASK  (0x20U)
#define ADSS_ANCCODEC_SYSCON_SPDR_hardmute_SHIFT (5U)
/*! hardmute - SPDR hard mute (d2a_spr_spdr_hardmute) */
#define ADSS_ANCCODEC_SYSCON_SPDR_hardmute(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_hardmute_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_hardmute_MASK)

#define ADSS_ANCCODEC_SYSCON_SPDR_openloop_enable_MASK (0x40U)
#define ADSS_ANCCODEC_SYSCON_SPDR_openloop_enable_SHIFT (6U)
/*! openloop_enable - SPDR open-loop mode enable (d2a_spr_spdr_openloop_enable) */
#define ADSS_ANCCODEC_SYSCON_SPDR_openloop_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_openloop_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_openloop_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_SPDR_output_stage_enb_1_MASK (0x80U)
#define ADSS_ANCCODEC_SYSCON_SPDR_output_stage_enb_1_SHIFT (7U)
/*! output_stage_enb_1 - SPDR output stage enable 1 (d2a_spr_spdr_output_stage_enb_1) */
#define ADSS_ANCCODEC_SYSCON_SPDR_output_stage_enb_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_output_stage_enb_1_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_output_stage_enb_1_MASK)

#define ADSS_ANCCODEC_SYSCON_SPDR_output_stage_enb_2_MASK (0x100U)
#define ADSS_ANCCODEC_SYSCON_SPDR_output_stage_enb_2_SHIFT (8U)
/*! output_stage_enb_2 - SPDR output stage enable 2 (d2a_spr_spdr_output_stage_enb_2) */
#define ADSS_ANCCODEC_SYSCON_SPDR_output_stage_enb_2(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_output_stage_enb_2_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_output_stage_enb_2_MASK)

#define ADSS_ANCCODEC_SYSCON_SPDR_output_stage_enb_4_MASK (0x200U)
#define ADSS_ANCCODEC_SYSCON_SPDR_output_stage_enb_4_SHIFT (9U)
/*! output_stage_enb_4 - SPDR output stage enable 4 (d2a_spr_spdr_output_stage_enb_4) */
#define ADSS_ANCCODEC_SYSCON_SPDR_output_stage_enb_4(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_output_stage_enb_4_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_output_stage_enb_4_MASK)

#define ADSS_ANCCODEC_SYSCON_SPDR_por_MASK       (0x400U)
#define ADSS_ANCCODEC_SYSCON_SPDR_por_SHIFT      (10U)
/*! por - SPDR power-on reset (d2a_spr_spdr_por) */
#define ADSS_ANCCODEC_SYSCON_SPDR_por(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_por_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_por_MASK)

#define ADSS_ANCCODEC_SYSCON_SPDR_reset_MASK     (0x800U)
#define ADSS_ANCCODEC_SYSCON_SPDR_reset_SHIFT    (11U)
/*! reset - SPDR reset (d2a_spr_spdr_reset) */
#define ADSS_ANCCODEC_SYSCON_SPDR_reset(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_reset_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_reset_MASK)

#define ADSS_ANCCODEC_SYSCON_SPDR_sc_double_bias_enable_MASK (0x1000U)
#define ADSS_ANCCODEC_SYSCON_SPDR_sc_double_bias_enable_SHIFT (12U)
/*! sc_double_bias_enable - SPDR switched-capacitor double bias enable (d2a_spr_spdr_sc_double_bias_enable) */
#define ADSS_ANCCODEC_SYSCON_SPDR_sc_double_bias_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_sc_double_bias_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_sc_double_bias_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_SPDR_sc_enable_MASK (0x2000U)
#define ADSS_ANCCODEC_SYSCON_SPDR_sc_enable_SHIFT (13U)
/*! sc_enable - SPDR switched-capacitor enable (d2a_spr_spdr_sc_enable) */
#define ADSS_ANCCODEC_SYSCON_SPDR_sc_enable(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_sc_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_sc_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_SPDR_sc_filter_cap_gnd_MASK (0x4000U)
#define ADSS_ANCCODEC_SYSCON_SPDR_sc_filter_cap_gnd_SHIFT (14U)
/*! sc_filter_cap_gnd - SPDR switched-capacitor filter capacitor ground (d2a_spr_spdr_sc_filter_cap_gnd) */
#define ADSS_ANCCODEC_SYSCON_SPDR_sc_filter_cap_gnd(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_sc_filter_cap_gnd_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_sc_filter_cap_gnd_MASK)

#define ADSS_ANCCODEC_SYSCON_SPDR_sc_slope_set_MASK (0x38000U)
#define ADSS_ANCCODEC_SYSCON_SPDR_sc_slope_set_SHIFT (15U)
/*! sc_slope_set - SPDR switched-capacitor slope setting (d2a_spr_spdr_sc_slope_set[2:0]) */
#define ADSS_ANCCODEC_SYSCON_SPDR_sc_slope_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_sc_slope_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_sc_slope_set_MASK)

#define ADSS_ANCCODEC_SYSCON_SPDR_sw_por_MASK    (0x40000U)
#define ADSS_ANCCODEC_SYSCON_SPDR_sw_por_SHIFT   (18U)
/*! sw_por - SPDR software power-on reset (d2a_spr_spdr_sw_por) */
#define ADSS_ANCCODEC_SYSCON_SPDR_sw_por(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_sw_por_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_sw_por_MASK)

#define ADSS_ANCCODEC_SYSCON_SPDR_vrefok_MASK    (0x80000U)
#define ADSS_ANCCODEC_SYSCON_SPDR_vrefok_SHIFT   (19U)
/*! vrefok - SPDR voltage reference OK (d2a_spr_spdr_vrefok) */
#define ADSS_ANCCODEC_SYSCON_SPDR_vrefok(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_vrefok_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_vrefok_MASK)

#define ADSS_ANCCODEC_SYSCON_SPDR_bias_sc_set_MASK (0xF00000U)
#define ADSS_ANCCODEC_SYSCON_SPDR_bias_sc_set_SHIFT (20U)
/*! bias_sc_set - SPDR bias switched-capacitor setting (d2a_spr_spdr_bias_sc_set[3:0]) */
#define ADSS_ANCCODEC_SYSCON_SPDR_bias_sc_set(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_SPDR_bias_sc_set_SHIFT)) & ADSS_ANCCODEC_SYSCON_SPDR_bias_sc_set_MASK)
/*! @} */

/*! @name TEST - VHV test enable register (maps to d2a_sig_vhv_test_enable) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_TEST_vhv_test_enable_MASK (0x1U)
#define ADSS_ANCCODEC_SYSCON_TEST_vhv_test_enable_SHIFT (0U)
/*! vhv_test_enable - VHV test enable (d2a_sig_vhv_test_enable) */
#define ADSS_ANCCODEC_SYSCON_TEST_vhv_test_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_TEST_vhv_test_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_TEST_vhv_test_enable_MASK)
/*! @} */

/*! @name ADCS - ADCs test and TCB control register (maps to d2a_sig_adcs_* signals) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_ADCS_input_test_se_MASK (0x1U)
#define ADSS_ANCCODEC_SYSCON_ADCS_input_test_se_SHIFT (0U)
/*! input_test_se - ADCs input test scan enable (d2a_sig_adcs_input_test_se) */
#define ADSS_ANCCODEC_SYSCON_ADCS_input_test_se(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_ADCS_input_test_se_SHIFT)) & ADSS_ANCCODEC_SYSCON_ADCS_input_test_se_MASK)

#define ADSS_ANCCODEC_SYSCON_ADCS_input_test_si_MASK (0x2U)
#define ADSS_ANCCODEC_SYSCON_ADCS_input_test_si_SHIFT (1U)
/*! input_test_si - ADCs input test scan input (d2a_sig_adcs_input_test_si) */
#define ADSS_ANCCODEC_SYSCON_ADCS_input_test_si(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_ADCS_input_test_si_SHIFT)) & ADSS_ANCCODEC_SYSCON_ADCS_input_test_si_MASK)

#define ADSS_ANCCODEC_SYSCON_ADCS_tcb_async_disable_MASK (0x4U)
#define ADSS_ANCCODEC_SYSCON_ADCS_tcb_async_disable_SHIFT (2U)
/*! tcb_async_disable - ADCs TCB async disable (d2a_sig_adcs_tcb_async_disable) */
#define ADSS_ANCCODEC_SYSCON_ADCS_tcb_async_disable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_ADCS_tcb_async_disable_SHIFT)) & ADSS_ANCCODEC_SYSCON_ADCS_tcb_async_disable_MASK)
/*! @} */

/*! @name CHARGEPUMP - Charge pump control register (maps to d2a_pmucgu_chargepump_enable) */
/*! @{ */

#define ADSS_ANCCODEC_SYSCON_CHARGEPUMP_enable_MASK (0x1U)
#define ADSS_ANCCODEC_SYSCON_CHARGEPUMP_enable_SHIFT (0U)
/*! enable - Charge pump enable (d2a_pmucgu_chargepump_enable) */
#define ADSS_ANCCODEC_SYSCON_CHARGEPUMP_enable(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_CHARGEPUMP_enable_SHIFT)) & ADSS_ANCCODEC_SYSCON_CHARGEPUMP_enable_MASK)

#define ADSS_ANCCODEC_SYSCON_CHARGEPUMP_cap_sel_MASK (0xEU)
#define ADSS_ANCCODEC_SYSCON_CHARGEPUMP_cap_sel_SHIFT (1U)
/*! cap_sel - Charge pump capacitor select (d2a_pmucgu_chargepump_cap_sel[2:0]) */
#define ADSS_ANCCODEC_SYSCON_CHARGEPUMP_cap_sel(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCCODEC_SYSCON_CHARGEPUMP_cap_sel_SHIFT)) & ADSS_ANCCODEC_SYSCON_CHARGEPUMP_cap_sel_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADSS_ANCCODEC_SYSCON_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_ANCCODEC_SYSCON_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_ANCCODEC_SYSCON_H_ */

