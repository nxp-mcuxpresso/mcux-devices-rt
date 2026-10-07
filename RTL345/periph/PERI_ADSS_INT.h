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
**         CMSIS Peripheral Access Layer for ADSS_INT
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
 * @file PERI_ADSS_INT.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_INT
 *
 * CMSIS Peripheral Access Layer for ADSS_INT
 */

#if !defined(PERI_ADSS_INT_H_)
#define PERI_ADSS_INT_H_                         /**< Symbol preventing repeated inclusion */

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
   -- ADSS_INT Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_INT_Peripheral_Access_Layer ADSS_INT Peripheral Access Layer
 * @{
 */

/** ADSS_INT - Register Layout Typedef */
typedef struct {
  __IO uint32_t INTGENCTRL;                        /**< General control for Interpolation path. Common for both channels. The registers must not be changed after enabling the operation of the codec., offset: 0x0 */
  __IO uint32_t INTSCALECFG;                       /**< Pre- and post-scaling configuration, offset: 0x4 */
  __IO uint32_t INTCHOFFSET;                       /**< Offset control register, offset: 0x8 */
  __IO uint32_t INTCHFIXEDPWM;                     /**< Registers for the PWM fixed values, offset: 0xC */
  __IO uint32_t LDO_STARTUP_CFG;                   /**< General control for the LDO startup feature, offset: 0x10 */
  __O  uint32_t LDO_STARTUP_CLR;                   /**< Startup clear register, offset: 0x14 */
} ADSS_INT_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_INT Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_INT_Register_Masks ADSS_INT Register Masks
 * @{
 */

/*! @name INTGENCTRL - General control for Interpolation path. Common for both channels. The registers must not be changed after enabling the operation of the codec. */
/*! @{ */

#define ADSS_INT_INTGENCTRL_PWM_SEL_MASK         (0x1U)
#define ADSS_INT_INTGENCTRL_PWM_SEL_SHIFT        (0U)
/*! pwm_sel - PWM select control field. The encoding is: "00" - normal operation (non-test mode);
 *    "01" - test mode, fixed pwm value(s); "1x" - start-up ramp/shut-down drop (applicable only for
 *    single ended mode).
 *  0b0..Normal operation (non-test mode)
 *  0b1..Test mode, fixed pwm value(s) for inputs "_a". Note: PWM inputs "_b" are only used for single-ended mode
 *       which is not supported in NxH3676. Those are always directly driven by the fixed values.
 */
#define ADSS_INT_INTGENCTRL_PWM_SEL(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_PWM_SEL_SHIFT)) & ADSS_INT_INTGENCTRL_PWM_SEL_MASK)

#define ADSS_INT_INTGENCTRL_CH_ENABLE_MASK       (0x8U)
#define ADSS_INT_INTGENCTRL_CH_ENABLE_SHIFT      (3U)
/*! ch_enable - If '1', channel 0 is enabled at the very next Fs sample. For DMA, HSI and all other
 *    inputs, samples are only taken complete. That is, if bot channels are enabled, both samples
 *    are taken when both are arrived at the port. In case of the availability of only one channel the
 *    sample will not be taken and delayed to be taken together with its "stereo" counterpart. This
 *    is to keep channel alignment. Note: ch0_enable and ch1_enable are synchronized in HW and have
 *    to be programmed in one atomic action.
 */
#define ADSS_INT_INTGENCTRL_CH_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_CH_ENABLE_SHIFT)) & ADSS_INT_INTGENCTRL_CH_ENABLE_MASK)

#define ADSS_INT_INTGENCTRL_FS_HALF_ENABLE_MASK  (0x10U)
#define ADSS_INT_INTGENCTRL_FS_HALF_ENABLE_SHIFT (4U)
/*! fs_half_enable - Allow the sample rate fs at the inputs of the music and FB compensation
 *    interpolators to be half the sample rate used by the MicADC sample rate (assuming MicADC fs is 48kHz).
 *  0b0..Input sample rate fs at the input of the music and FB compensation interpolator is the same used by the
 *       MicADC sample rate, which is fs = 48kHz
 *  0b1..Input sample rate fs at the input of the music and FB compensation interpolator can be half the sample
 *       rate (i.e. 24kHz) used by the MicADC sample rate.
 */
#define ADSS_INT_INTGENCTRL_FS_HALF_ENABLE(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_FS_HALF_ENABLE_SHIFT)) & ADSS_INT_INTGENCTRL_FS_HALF_ENABLE_MASK)

#define ADSS_INT_INTGENCTRL_ATTENUATOR_MASK      (0xC0U)
#define ADSS_INT_INTGENCTRL_ATTENUATOR_SHIFT     (6U)
/*! attenuator - Final output gain (attenuation). Set before enabling audio.
 *  0b00..
 *  0b01..
 *  0b10..
 */
#define ADSS_INT_INTGENCTRL_ATTENUATOR(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_ATTENUATOR_SHIFT)) & ADSS_INT_INTGENCTRL_ATTENUATOR_MASK)

#define ADSS_INT_INTGENCTRL_ANC_PATH_EN_MASK     (0x100U)
#define ADSS_INT_INTGENCTRL_ANC_PATH_EN_SHIFT    (8U)
/*! anc_path_en - ANC path enable bit: '0' - the path is disabled; '1' - the path is enabled.
 *  0b0..The path to the ANC adder is disabled
 *  0b1..The path to the ANC adder is enabled
 */
#define ADSS_INT_INTGENCTRL_ANC_PATH_EN(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_ANC_PATH_EN_SHIFT)) & ADSS_INT_INTGENCTRL_ANC_PATH_EN_MASK)

#define ADSS_INT_INTGENCTRL_INTERPOL_MUTE_MUSIC_MASK (0x200U)
#define ADSS_INT_INTGENCTRL_INTERPOL_MUTE_MUSIC_SHIFT (9U)
/*! interpol_mute_music - Interpolator mute control bit for music input: '0' - the interpolator is not muted; '1' - the interpolator is muted.
 *  0b0..The interpolator is not muted. Music level is controlled by ANC-DSP preprocessing gain setting
 *  0b1..The interpolator is muted. The preprocessing gain is forced to 0.
 */
#define ADSS_INT_INTGENCTRL_INTERPOL_MUTE_MUSIC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_INTERPOL_MUTE_MUSIC_SHIFT)) & ADSS_INT_INTGENCTRL_INTERPOL_MUTE_MUSIC_MASK)

#define ADSS_INT_INTGENCTRL_INTERPOL_MUTE_FBCOMP_MASK (0x400U)
#define ADSS_INT_INTGENCTRL_INTERPOL_MUTE_FBCOMP_SHIFT (10U)
/*! interpol_mute_fbcomp - Interpolator mute control bit for fb compensated input: '0' - the
 *    interpolator is not muted; '1' - the interpolator is muted.
 *  0b0..The interpolator is not muted. FB compensated input level is controlled by DSP preprocessing gain setting
 *  0b1..The interpolator is muted. The preprocessing gain is forced to 0.
 */
#define ADSS_INT_INTGENCTRL_INTERPOL_MUTE_FBCOMP(x) (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_INTERPOL_MUTE_FBCOMP_SHIFT)) & ADSS_INT_INTGENCTRL_INTERPOL_MUTE_FBCOMP_MASK)

#define ADSS_INT_INTGENCTRL_PWM_BITLENGTH_CTRL_MASK (0xE000U)
#define ADSS_INT_INTGENCTRL_PWM_BITLENGTH_CTRL_SHIFT (13U)
/*! pwm_bitlength_ctrl - Select the bit width of the noise shaper output used as the input of PWM streamer
 *  0b000..Use all 8-bit output of the noise shaper as input for PWM streamer
 *  0b001..Use 7-bit LSBs of the noise shaper as input for PWM streamer, the higher bits are sign extended.
 *  0b010..Use 6-bit LSBs of the noise shaper as input for PWM streamer, the higher bits are sign extended.
 *  0b011..Use 5-bit LSBs of the noise shaper as input for PWM streamer, the higher bits are sign extended.
 *  0b100..Use 4-bit LSBs of the noise shaper as input for PWM streamer, the higher bits are sign extended.
 */
#define ADSS_INT_INTGENCTRL_PWM_BITLENGTH_CTRL(x) (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_PWM_BITLENGTH_CTRL_SHIFT)) & ADSS_INT_INTGENCTRL_PWM_BITLENGTH_CTRL_MASK)

#define ADSS_INT_INTGENCTRL_NS_INPUT_LIMIT_MASK  (0x3F0000U)
#define ADSS_INT_INTGENCTRL_NS_INPUT_LIMIT_SHIFT (16U)
/*! ns_input_limit - Controls the clipping level at the input of the Noise Shaper. Can be set
 *    (before enabling the interpolator) between 46% and 95% in 64 steps. The 24bit signed input of NS is
 *    clipped at (ns_input_limit + 59) x 2 ^ 16. The Noise Shaping filter needs some overhead to
 *    avoid the integrators to saturate. In addition the analog output stage also has a > 1.0 gain and
 *    requires protection agains overdriving. The output towards PWM will be limited around
 *    (ns_input_limit + 59).
 */
#define ADSS_INT_INTGENCTRL_NS_INPUT_LIMIT(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_NS_INPUT_LIMIT_SHIFT)) & ADSS_INT_INTGENCTRL_NS_INPUT_LIMIT_MASK)

#define ADSS_INT_INTGENCTRL_AUDIO_PP_SRC_SR_MASK (0xC00000U)
#define ADSS_INT_INTGENCTRL_AUDIO_PP_SRC_SR_SHIFT (22U)
/*! audio_pp_src_sr - Set input sample rate of the interpolators for the audio preprocessed music input and the FB compensation input.
 *  0b00..Input sample rate is 1.Fs
 *  0b01..Input sample rate is 2.Fs
 *  0b10..Input sample rate is 4.Fs
 *  0b11..Input sample rate is 8.Fs
 */
#define ADSS_INT_INTGENCTRL_AUDIO_PP_SRC_SR(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_AUDIO_PP_SRC_SR_SHIFT)) & ADSS_INT_INTGENCTRL_AUDIO_PP_SRC_SR_MASK)

#define ADSS_INT_INTGENCTRL_AUDIO_PP_TGT_SR_MASK (0x3000000U)
#define ADSS_INT_INTGENCTRL_AUDIO_PP_TGT_SR_SHIFT (24U)
/*! audio_pp_tgt_sr - Set the target sample rate of the interpolators for the audio preprocessed music input and the FB compensation input.
 *  0b00..Target sample rate is 4.Fs
 *  0b01..Target sample rate is 8.Fs
 *  0b10..Target sample rate is 16.Fs
 *  0b11..Not used
 */
#define ADSS_INT_INTGENCTRL_AUDIO_PP_TGT_SR(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_AUDIO_PP_TGT_SR_SHIFT)) & ADSS_INT_INTGENCTRL_AUDIO_PP_TGT_SR_MASK)

#define ADSS_INT_INTGENCTRL_NS_UPSAMPLE_MASK     (0x4000000U)
#define ADSS_INT_INTGENCTRL_NS_UPSAMPLE_SHIFT    (26U)
/*! ns_upsample - Enable the interpolation stage in front of the noise shaper
 *  0b0..Directly pass through the data as input to the noise shaper
 *  0b1..Upsample the data by 2 as input to the noise shaper (normally used to upsample 8.Fs data to 16.Fs data)
 */
#define ADSS_INT_INTGENCTRL_NS_UPSAMPLE(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_NS_UPSAMPLE_SHIFT)) & ADSS_INT_INTGENCTRL_NS_UPSAMPLE_MASK)

#define ADSS_INT_INTGENCTRL_NS_4FS_MASK          (0x8000000U)
#define ADSS_INT_INTGENCTRL_NS_4FS_SHIFT         (27U)
/*! ns_4fs - Set noise shaper to 4.Fs mode
 *  0b0..Noise shaper does not receives 4.Fs input or generate 4.Fs WS to the PWM streamer.
 *  0b1..Noise shaper receives 4.Fs input or generate 4.Fs WS to the PWM streamer.
 */
#define ADSS_INT_INTGENCTRL_NS_4FS(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_NS_4FS_SHIFT)) & ADSS_INT_INTGENCTRL_NS_4FS_MASK)

#define ADSS_INT_INTGENCTRL_NS_16FS_MASK         (0x10000000U)
#define ADSS_INT_INTGENCTRL_NS_16FS_SHIFT        (28U)
/*! ns_16fs - Set noise shaper to 16.Fs mode
 *  0b0..Noise shaper does not receives 16.Fs input or generate 16.Fs WS to the PWM streamer.
 *  0b1..Noise shaper receives 16.Fs input or generate 16.Fs WS to the PWM streamer.
 */
#define ADSS_INT_INTGENCTRL_NS_16FS(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_NS_16FS_SHIFT)) & ADSS_INT_INTGENCTRL_NS_16FS_MASK)

#define ADSS_INT_INTGENCTRL_NS_8FS_MASK          (0x20000000U)
#define ADSS_INT_INTGENCTRL_NS_8FS_SHIFT         (29U)
/*! ns_8fs - Set noise shaper to 8.Fs mode
 *  0b0..Noise shaper does not receives 8.Fs input or generate 8.Fs WS to the PWM streamer.
 *  0b1..Noise shaper receives 8.Fs input or generate 8.Fs WS to the PWM streamer.
 */
#define ADSS_INT_INTGENCTRL_NS_8FS(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_NS_8FS_SHIFT)) & ADSS_INT_INTGENCTRL_NS_8FS_MASK)

#define ADSS_INT_INTGENCTRL_NS_ENABLE_MASK       (0x40000000U)
#define ADSS_INT_INTGENCTRL_NS_ENABLE_SHIFT      (30U)
/*! ns_enable - Enable or disable the noise shaper
 *  0b0..Disable the noise shaper.
 *  0b1..Enable the noise shaper.
 */
#define ADSS_INT_INTGENCTRL_NS_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_NS_ENABLE_SHIFT)) & ADSS_INT_INTGENCTRL_NS_ENABLE_MASK)

#define ADSS_INT_INTGENCTRL_NS_ATTENUATE_MASK    (0x80000000U)
#define ADSS_INT_INTGENCTRL_NS_ATTENUATE_SHIFT   (31U)
/*! ns_attenuate - Attenuate the noise shaper input by 0.5 and scale back the noise shaper output by
 *    multiplying by 2. This can be used in 4/5/6-bit mode of the noise shaper to bring back the
 *    dynamic range when the full range input signal clips within the noise shaper.
 *  0b0..Disable the noise shaper input attenuation
 *  0b1..Enable the noise shaper input attenuation
 */
#define ADSS_INT_INTGENCTRL_NS_ATTENUATE(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTGENCTRL_NS_ATTENUATE_SHIFT)) & ADSS_INT_INTGENCTRL_NS_ATTENUATE_MASK)
/*! @} */

/*! @name INTSCALECFG - Pre- and post-scaling configuration */
/*! @{ */

#define ADSS_INT_INTSCALECFG_PRE_FFANC_MASK      (0xFU)
#define ADSS_INT_INTSCALECFG_PRE_FFANC_SHIFT     (0U)
/*! pre_ffanc - Feedforwrd ANC MIC input pre scale by shift left with range [-5..+5] = 2^(-5..+5). */
#define ADSS_INT_INTSCALECFG_PRE_FFANC(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTSCALECFG_PRE_FFANC_SHIFT)) & ADSS_INT_INTSCALECFG_PRE_FFANC_MASK)

#define ADSS_INT_INTSCALECFG_PRE_FBANC_MASK      (0xF0U)
#define ADSS_INT_INTSCALECFG_PRE_FBANC_SHIFT     (4U)
/*! pre_fbanc - Feedback ANC MIC input pre scale by shift left with range [-5..+5] = 2^(-5..+5). */
#define ADSS_INT_INTSCALECFG_PRE_FBANC(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTSCALECFG_PRE_FBANC_SHIFT)) & ADSS_INT_INTSCALECFG_PRE_FBANC_MASK)

#define ADSS_INT_INTSCALECFG_PRE_MUSIC_MASK      (0xF00U)
#define ADSS_INT_INTSCALECFG_PRE_MUSIC_SHIFT     (8U)
/*! pre_music - PreProcessed Music HSI input pre scale by shift left with range [-5..+5] = 2^(-5..+5). */
#define ADSS_INT_INTSCALECFG_PRE_MUSIC(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTSCALECFG_PRE_MUSIC_SHIFT)) & ADSS_INT_INTSCALECFG_PRE_MUSIC_MASK)

#define ADSS_INT_INTSCALECFG_PRE_FBCOMP_MASK     (0xF000U)
#define ADSS_INT_INTSCALECFG_PRE_FBCOMP_SHIFT    (12U)
/*! pre_fbcomp - PreProcessed FB compensated HSI input pre scale by shift left with range [-5..+5] = 2^(-5..+5). */
#define ADSS_INT_INTSCALECFG_PRE_FBCOMP(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTSCALECFG_PRE_FBCOMP_SHIFT)) & ADSS_INT_INTSCALECFG_PRE_FBCOMP_MASK)

#define ADSS_INT_INTSCALECFG_POST_FINAL_MASK     (0x70000U)
#define ADSS_INT_INTSCALECFG_POST_FINAL_SHIFT    (16U)
/*! post_final - Final post scale by shift left with range [0..+5] = 2^(0..+5). */
#define ADSS_INT_INTSCALECFG_POST_FINAL(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTSCALECFG_POST_FINAL_SHIFT)) & ADSS_INT_INTSCALECFG_POST_FINAL_MASK)
/*! @} */

/*! @name INTCHOFFSET - Offset control register */
/*! @{ */

#define ADSS_INT_INTCHOFFSET_OFFSET_MASK         (0xFFFFFFU)
#define ADSS_INT_INTCHOFFSET_OFFSET_SHIFT        (0U)
/*! offset - Signed value for offset added to the final output signal towards the Noise shaper
 *    before Output Gain attenuation. Set before enabling audio.
 */
#define ADSS_INT_INTCHOFFSET_OFFSET(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTCHOFFSET_OFFSET_SHIFT)) & ADSS_INT_INTCHOFFSET_OFFSET_MASK)
/*! @} */

/*! @name INTCHFIXEDPWM - Registers for the PWM fixed values */
/*! @{ */

#define ADSS_INT_INTCHFIXEDPWM_VAL_A_MASK        (0xFFU)
#define ADSS_INT_INTCHFIXEDPWM_VAL_A_SHIFT       (0U)
/*! val_a - Fixed PWM input "a" value setting used if IntGenCtrl.pwm_sel = 1 */
#define ADSS_INT_INTCHFIXEDPWM_VAL_A(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTCHFIXEDPWM_VAL_A_SHIFT)) & ADSS_INT_INTCHFIXEDPWM_VAL_A_MASK)

#define ADSS_INT_INTCHFIXEDPWM_VAL_B_MASK        (0xFF00U)
#define ADSS_INT_INTCHFIXEDPWM_VAL_B_SHIFT       (8U)
/*! val_b - Fixed PWM input "b" value setting (always connected for NxH3676) */
#define ADSS_INT_INTCHFIXEDPWM_VAL_B(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_INT_INTCHFIXEDPWM_VAL_B_SHIFT)) & ADSS_INT_INTCHFIXEDPWM_VAL_B_MASK)
/*! @} */

/*! @name LDO_STARTUP_CFG - General control for the LDO startup feature */
/*! @{ */

#define ADSS_INT_LDO_STARTUP_CFG_MODE_MASK       (0x1U)
#define ADSS_INT_LDO_STARTUP_CFG_MODE_SHIFT      (0U)
/*! mode - Mode select for the LDO startup.
 *  0b0..LDO startup is pulled down when the internal counter reaches to the value set in the width field
 *  0b1..LDO startup is pulled down by an APB write to the startup clear register
 */
#define ADSS_INT_LDO_STARTUP_CFG_MODE(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_INT_LDO_STARTUP_CFG_MODE_SHIFT)) & ADSS_INT_LDO_STARTUP_CFG_MODE_MASK)

#define ADSS_INT_LDO_STARTUP_CFG_WIDTH_MASK      (0xFFEU)
#define ADSS_INT_LDO_STARTUP_CFG_WIDTH_SHIFT     (1U)
/*! width - Start-up width configuration for the output op_startup pulse. */
#define ADSS_INT_LDO_STARTUP_CFG_WIDTH(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_INT_LDO_STARTUP_CFG_WIDTH_SHIFT)) & ADSS_INT_LDO_STARTUP_CFG_WIDTH_MASK)
/*! @} */

/*! @name LDO_STARTUP_CLR - Startup clear register */
/*! @{ */

#define ADSS_INT_LDO_STARTUP_CLR_CLEAR_MASK      (0x1U)
#define ADSS_INT_LDO_STARTUP_CLR_CLEAR_SHIFT     (0U)
/*! clear - A write to this bit clears op_startup when mode select is '1' */
#define ADSS_INT_LDO_STARTUP_CLR_CLEAR(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_INT_LDO_STARTUP_CLR_CLEAR_SHIFT)) & ADSS_INT_LDO_STARTUP_CLR_CLEAR_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADSS_INT_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_INT_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_INT_H_ */

