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
**         CMSIS Peripheral Access Layer for ADSS_ANCAHW
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
 * @file PERI_ADSS_ANCAHW.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_ANCAHW
 *
 * CMSIS Peripheral Access Layer for ADSS_ANCAHW
 */

#if !defined(PERI_ADSS_ANCAHW_H_)
#define PERI_ADSS_ANCAHW_H_                      /**< Symbol preventing repeated inclusion */

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
   -- ADSS_ANCAHW Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_ANCAHW_Peripheral_Access_Layer ADSS_ANCAHW Peripheral Access Layer
 * @{
 */

/** ADSS_ANCAHW - Size of Registers Arrays */
#define ADSS_ANCAHW_ANCCH_FILTERFADERS_COUNT      3u
#define ADSS_ANCAHW_ANCCH_MONFWD_COUNT            6u

/** ADSS_ANCAHW - Register Layout Typedef */
typedef struct {
  __IO uint32_t ANCGENCTRL;                        /**< Channel independent control, offset: 0x0 */
  __IO uint32_t BQINPUTCTRL;                       /**< The actual status of the DMA and interpolator-HSI ports. The fields in this register will follow AncGEnable, AncCh.DmaCfg and Interpolator IntGenCtrl.ch0/1_enable fields as soon as they are really synchronized and updated in the data processing clock domain., offset: 0x4 */
  __IO uint32_t ANCPCOUNT;                         /**< Progress of the ANC-AHW sampling phase., offset: 0x8 */
  __IO uint32_t ANCBQBANKSCTRL;                    /**< ANC Biquad Coefficient Bank Control and status check. Filter coefficient bank control array [TRSP, SDTN, FBCMP, FFANC, FBANC. FF2ANC]. This allows a central control for the switching of coefficient banks of different ANC Biquads, so that all BQs can switch the coefficients at the same time if needed., offset: 0xC */
  __IO uint32_t ANCCH_GENCFG;                      /**< Biquad Filter blocks cofiguration, offset: 0x10 */
  __IO uint32_t ANCCH_AUDIOFADERS;                 /**< Control of input- and output faders, offset: 0x14 */
  __IO uint32_t ANCCH_FILTERFADERS[ADSS_ANCAHW_ANCCH_FILTERFADERS_COUNT]; /**< Filter output fader gain array [TRSP, SDTN, FBCMP, FFANC, FBANC, FF2ANC], array offset: 0x18, array step: 0x4 */
  __IO uint32_t ANCCH_LLTRSPGAIN;                  /**< Low latency 8.Fs Tranparecy mode 2 MIC gain, offset: 0x24 */
  __IO uint32_t ANCCH_MONFWD[ADSS_ANCAHW_ANCCH_MONFWD_COUNT]; /**< Configuration of the monitor's DMA forwarding for DMA out 2, 3 and 4, array offset: 0x28, array step: 0x4 */
  __IO uint32_t ANCCH_ABSMAXMON;                   /**< Maximum of the absolute value on the ANC-AHW output, offset: 0x40 */
  __IO uint32_t ANCCH_SATDETLEVEL;                 /**< Saturation flags detection level, offset: 0x44 */
  __I  uint32_t ANCCH_CLIPSTATUS;                  /**< Clipping exception flags for all key signal path positions., offset: 0x48 */
  __I  uint32_t ANCCH_STATUS;                      /**< Saturation flags for all key signal path positions., offset: 0x4C */
  __IO uint32_t ANCCH_CLIPSTATUSCLR;               /**< Clipping exception flags clearance control register, offset: 0x50 */
  __IO uint32_t ANCCH_STATUSCLR;                   /**< Saturation flags clearance control register, offset: 0x54 */
  __IO uint32_t ANCCH_EVMASK;                      /**< ANC Event line enable, offset: 0x58 */
  __IO uint32_t SHORTCIRCUITDETECT_GENCFG;         /**< General configuration on enabling a measurement process of short circuit, measurement duration and enabling of signal power accumulation., offset: 0x5C */
  __IO uint32_t SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW; /**< Configuration on short circuit event generated by SW or by digital HW., offset: 0x60 */
  __I  uint32_t SHORTCIRCUITDETECT_LDO_CURRENT_ANA; /**< LDO current count read from analog after the recent measurement process is done., offset: 0x64 */
  __I  uint32_t SHORTCIRCUITDETECT_SIGNAL_POWER_L; /**< Low bits of the 30-bit result of signal power, by accumulating the absolute value of the 24-bit noise shaper input., offset: 0x68 */
  __I  uint32_t SHORTCIRCUITDETECT_SIGNAL_POWER_H; /**< High bits of the 30-bit result of signal power., offset: 0x6C */
} ADSS_ANCAHW_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_ANCAHW Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_ANCAHW_Register_Masks ADSS_ANCAHW Register Masks
 * @{
 */

/*! @name ANCGENCTRL - Channel independent control */
/*! @{ */

#define ADSS_ANCAHW_ANCGENCTRL_UPDATE_MASK       (0x1U)
#define ADSS_ANCAHW_ANCGENCTRL_UPDATE_SHIFT      (0U)
/*! update - Update registers control. This register can be used for updating both channels in a
 *    synchronous way. It must be used in case fader settings of both channels need to be updated
 *    together at the same time. This register also influences the read values AncCh().GenCfg.update
 *    fields of the channels.
 */
#define ADSS_ANCAHW_ANCGENCTRL_UPDATE(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCGENCTRL_UPDATE_SHIFT)) & ADSS_ANCAHW_ANCGENCTRL_UPDATE_MASK)
/*! @} */

/*! @name BQINPUTCTRL - The actual status of the DMA and interpolator-HSI ports. The fields in this register will follow AncGEnable, AncCh.DmaCfg and Interpolator IntGenCtrl.ch0/1_enable fields as soon as they are really synchronized and updated in the data processing clock domain. */
/*! @{ */

#define ADSS_ANCAHW_BQINPUTCTRL_FFANC_INPUT_SEL_MASK (0x3U)
#define ADSS_ANCAHW_BQINPUTCTRL_FFANC_INPUT_SEL_SHIFT (0U)
/*! ffanc_input_sel - Select input data for FFANC Biquad: 0 - data from Mic input; 1 - data from HSI bus
 *  0b00..Input data of FFANC Biquad is from the HSI bus through DMA.
 *  0b01..Input data of FFANC Biquad is from the decimated Mic input.
 *  0b10..Input data of FFANC Biquad is from FBCOMP input.
 *  0b11..Input data of FFANC Biquad is zero.
 */
#define ADSS_ANCAHW_BQINPUTCTRL_FFANC_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_BQINPUTCTRL_FFANC_INPUT_SEL_SHIFT)) & ADSS_ANCAHW_BQINPUTCTRL_FFANC_INPUT_SEL_MASK)

#define ADSS_ANCAHW_BQINPUTCTRL_FBANC_INPUT_SEL_MASK (0xCU)
#define ADSS_ANCAHW_BQINPUTCTRL_FBANC_INPUT_SEL_SHIFT (2U)
/*! fbanc_input_sel - Select input data for FBANC Biquad: 0 - data from Mic input; 1 - data from HSI bus
 *  0b00..Input data of FBANC Biquad is from the HSI bus through DMA.
 *  0b01..Input data of FBANC Biquad is from the decimated Mic input.
 *  0b10..Input data of FBANC Biquad is from FF ANC output.
 *  0b11..Input data of FBANC Biquad is from FF2ANC output.
 */
#define ADSS_ANCAHW_BQINPUTCTRL_FBANC_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_BQINPUTCTRL_FBANC_INPUT_SEL_SHIFT)) & ADSS_ANCAHW_BQINPUTCTRL_FBANC_INPUT_SEL_MASK)

#define ADSS_ANCAHW_BQINPUTCTRL_FF2ANC_INPUT_SEL_MASK (0x10U)
#define ADSS_ANCAHW_BQINPUTCTRL_FF2ANC_INPUT_SEL_SHIFT (4U)
/*! ff2anc_input_sel - Select input data for FF2ANC Biquad: 0 - data from Mic input; 1 - data from HSI bus
 *  0b0..Input data of FF2ANC Biquad is from the HSI bus through DMA.
 *  0b1..Input data of FF2ANC Biquad is from the decimated Mic input.
 */
#define ADSS_ANCAHW_BQINPUTCTRL_FF2ANC_INPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_BQINPUTCTRL_FF2ANC_INPUT_SEL_SHIFT)) & ADSS_ANCAHW_BQINPUTCTRL_FF2ANC_INPUT_SEL_MASK)

#define ADSS_ANCAHW_BQINPUTCTRL_FFANC_OUTPUT_SEL_MASK (0x20U)
#define ADSS_ANCAHW_BQINPUTCTRL_FFANC_OUTPUT_SEL_SHIFT (5U)
/*! ffanc_output_sel - Enable the multiplexer behind the FFANC output, which allows FFANC Biquad
 *    output to be further propagated inside ANC filter ('1' = active).
 *  0b0..Filter output of FFANC stops at the output of the BQ filter block, which should be fetched by a monitor
 *       point if needed. Zero value is propagated to other parts of the ANC filter.
 *  0b1..Filter output of FFANC is propagated to other parts of the ANC filter.
 */
#define ADSS_ANCAHW_BQINPUTCTRL_FFANC_OUTPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_BQINPUTCTRL_FFANC_OUTPUT_SEL_SHIFT)) & ADSS_ANCAHW_BQINPUTCTRL_FFANC_OUTPUT_SEL_MASK)

#define ADSS_ANCAHW_BQINPUTCTRL_FBANC_OUTPUT_SEL_MASK (0x40U)
#define ADSS_ANCAHW_BQINPUTCTRL_FBANC_OUTPUT_SEL_SHIFT (6U)
/*! fbanc_output_sel - Enable the multiplexer behind the FBANC output, which allows FBANC or FB2ANC
 *    Biquad output to be further propagated to the fader behind the FB Biquad.
 *  0b0..Filter output of FBANC is used as the output of FB Biquad.
 *  0b1..Filter output of FB2ANC is used as the output of FB Biquad.
 */
#define ADSS_ANCAHW_BQINPUTCTRL_FBANC_OUTPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_BQINPUTCTRL_FBANC_OUTPUT_SEL_SHIFT)) & ADSS_ANCAHW_BQINPUTCTRL_FBANC_OUTPUT_SEL_MASK)

#define ADSS_ANCAHW_BQINPUTCTRL_FF2ANC_OUTPUT_SEL_MASK (0x80U)
#define ADSS_ANCAHW_BQINPUTCTRL_FF2ANC_OUTPUT_SEL_SHIFT (7U)
/*! ff2anc_output_sel - Enable the multiplexer behind the FF2ANC output, which allows FF2ANC Biquad
 *    output to be further propagated inside ANC filter ('1' = active).
 *  0b0..Filter output of FF2ANC stops at the output of the BQ filter block, which should be fetched by a monitor
 *       point if needed. Zero value is propagated to other parts of the ANC filter.
 *  0b1..Filter output of FF2ANC is propagated to other parts of the ANC filter.
 */
#define ADSS_ANCAHW_BQINPUTCTRL_FF2ANC_OUTPUT_SEL(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_BQINPUTCTRL_FF2ANC_OUTPUT_SEL_SHIFT)) & ADSS_ANCAHW_BQINPUTCTRL_FF2ANC_OUTPUT_SEL_MASK)
/*! @} */

/*! @name ANCPCOUNT - Progress of the ANC-AHW sampling phase. */
/*! @{ */

#define ADSS_ANCAHW_ANCPCOUNT_CNT_IOBUS_MASK     (0x3FU)
#define ADSS_ANCAHW_ANCPCOUNT_CNT_IOBUS_SHIFT    (0U)
/*! cnt_iobus - Number of IObus clocks past after cnt_128fs update. */
#define ADSS_ANCAHW_ANCPCOUNT_CNT_IOBUS(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCPCOUNT_CNT_IOBUS_SHIFT)) & ADSS_ANCAHW_ANCPCOUNT_CNT_IOBUS_MASK)

#define ADSS_ANCAHW_ANCPCOUNT_CNT_128FS_MASK     (0x7F00U)
#define ADSS_ANCAHW_ANCPCOUNT_CNT_128FS_SHIFT    (8U)
/*! cnt_128fs - Number of 128Fs clock cycles after Sync_Fs pulse. */
#define ADSS_ANCAHW_ANCPCOUNT_CNT_128FS(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCPCOUNT_CNT_128FS_SHIFT)) & ADSS_ANCAHW_ANCPCOUNT_CNT_128FS_MASK)

#define ADSS_ANCAHW_ANCPCOUNT_CNT_FS_MASK        (0x7F0000U)
#define ADSS_ANCAHW_ANCPCOUNT_CNT_FS_SHIFT       (16U)
/*! cnt_fs - Number of Sync_Fs pulses past since enabling the counter. The value wraps-around to 0. */
#define ADSS_ANCAHW_ANCPCOUNT_CNT_FS(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCPCOUNT_CNT_FS_SHIFT)) & ADSS_ANCAHW_ANCPCOUNT_CNT_FS_MASK)

#define ADSS_ANCAHW_ANCPCOUNT_CNT_DISABLE_MASK   (0x800000U)
#define ADSS_ANCAHW_ANCPCOUNT_CNT_DISABLE_SHIFT  (23U)
/*! cnt_disable - If '1', disables this counter. Writing '0' to this field will presets all counter
 *    to their max values until the first Sync_Fs is received.
 */
#define ADSS_ANCAHW_ANCPCOUNT_CNT_DISABLE(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCPCOUNT_CNT_DISABLE_SHIFT)) & ADSS_ANCAHW_ANCPCOUNT_CNT_DISABLE_MASK)
/*! @} */

/*! @name ANCBQBANKSCTRL - ANC Biquad Coefficient Bank Control and status check. Filter coefficient bank control array [TRSP, SDTN, FBCMP, FFANC, FBANC. FF2ANC]. This allows a central control for the switching of coefficient banks of different ANC Biquads, so that all BQs can switch the coefficients at the same time if needed. */
/*! @{ */

#define ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FB2ANC_MASK (0x1U)
#define ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FB2ANC_SHIFT (0U)
/*! sel_bq_fb2anc - Biquad coefficient bank selection control for ANC Bq FB ANC. Any change on this
 *    field will assert the corresponding "busy" field to '1' until the respective coefficient bank
 *    is fully switched. This can take a full Fs period.
 */
#define ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FB2ANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FB2ANC_SHIFT)) & ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FB2ANC_MASK)

#define ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FFANC_MASK (0x2U)
#define ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FFANC_SHIFT (1U)
/*! sel_bq_ffanc - Biquad coefficient bank selection control for ANC Bq FFANC. Any change on this
 *    field will assert the corresponding "busy" field to '1' until the respective coefficient bank is
 *    fully switched. This can take a full Fs period.
 */
#define ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FFANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FFANC_SHIFT)) & ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FFANC_MASK)

#define ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FBANC_MASK (0x4U)
#define ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FBANC_SHIFT (2U)
/*! sel_bq_fbanc - Biquad coefficient bank selection control for ANC Bq FBANC. Any change on this
 *    field will assert the corresponding "busy" field to '1' until the respective coefficient bank is
 *    fully switched. This can take a full Fs period.
 */
#define ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FBANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FBANC_SHIFT)) & ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FBANC_MASK)

#define ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FF2ANC_MASK (0x8U)
#define ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FF2ANC_SHIFT (3U)
/*! sel_bq_ff2anc - Biquad coefficient bank selection control for ANC Bq FF2ANC. Any change on this
 *    field will assert the corresponding "busy" field to '1' until the respective coefficient bank
 *    is fully switched. This can take a full Fs period.
 */
#define ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FF2ANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FF2ANC_SHIFT)) & ADSS_ANCAHW_ANCBQBANKSCTRL_SEL_BQ_FF2ANC_MASK)

#define ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FB2ANC_MASK (0x100U)
#define ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FB2ANC_SHIFT (8U)
/*! busy_bq_fb2anc - If at '1', Writing to any of the respective coefficient banks may lead to audio
 *    disturbances, else writing to the bank which is not selected is safe.
 */
#define ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FB2ANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FB2ANC_SHIFT)) & ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FB2ANC_MASK)

#define ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FFANC_MASK (0x200U)
#define ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FFANC_SHIFT (9U)
/*! busy_bq_ffanc - If at '1', Writing to any of the respective coefficient banks may lead to audio
 *    disturbances, else writing to the bank which is not selected is safe.
 */
#define ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FFANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FFANC_SHIFT)) & ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FFANC_MASK)

#define ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FBANC_MASK (0x400U)
#define ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FBANC_SHIFT (10U)
/*! busy_bq_fbanc - If at '1', Writing to any of the respective coefficient banks may lead to audio
 *    disturbances, else writing to the bank which is not selected is safe.
 */
#define ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FBANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FBANC_SHIFT)) & ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FBANC_MASK)

#define ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FF2ANC_MASK (0x800U)
#define ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FF2ANC_SHIFT (11U)
/*! busy_bq_ff2anc - If at '1', Writing to any of the respective coefficient banks may lead to audio
 *    disturbances, else writing to the bank which is not selected is safe.
 */
#define ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FF2ANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FF2ANC_SHIFT)) & ADSS_ANCAHW_ANCBQBANKSCTRL_BUSY_BQ_FF2ANC_MASK)
/*! @} */

/*! @name ANCCH_GENCFG - Biquad Filter blocks cofiguration */
/*! @{ */

#define ADSS_ANCAHW_ANCCH_GENCFG_UPDATE_MASK     (0x1U)
#define ADSS_ANCAHW_ANCCH_GENCFG_UPDATE_SHIFT    (0U)
/*! update - Update registers control for this channel */
#define ADSS_ANCAHW_ANCCH_GENCFG_UPDATE(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_UPDATE_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_UPDATE_MASK)

#define ADSS_ANCAHW_ANCCH_GENCFG_AHW_PP_SR_MASK  (0x8U)
#define ADSS_ANCAHW_ANCCH_GENCFG_AHW_PP_SR_SHIFT (3U)
/*! ahw_pp_sr - Select sample rate of audio-preprocessed input
 *  0b0..Input audio-preprocessed data is at 1.Fs
 *  0b1..Input audio-preprocessed data is at 2.Fs
 */
#define ADSS_ANCAHW_ANCCH_GENCFG_AHW_PP_SR(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_AHW_PP_SR_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_AHW_PP_SR_MASK)

#define ADSS_ANCAHW_ANCCH_GENCFG_MUSIC_INSERT_MASK (0x10U)
#define ADSS_ANCAHW_ANCCH_GENCFG_MUSIC_INSERT_SHIFT (4U)
/*! music_insert - If set at '1' will enable the use of the music input stream of 1.Fs or 2.Fs. */
#define ADSS_ANCAHW_ANCCH_GENCFG_MUSIC_INSERT(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_MUSIC_INSERT_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_MUSIC_INSERT_MASK)

#define ADSS_ANCAHW_ANCCH_GENCFG_FFANC_CFG_MASK  (0x60U)
#define ADSS_ANCAHW_ANCCH_GENCFG_FFANC_CFG_SHIFT (5U)
/*! ffanc_cfg - FeedBack ANC biquad configuration control. Changes during operation can cause audio artifacts.
 *  0b00..FFANC Filter used for normal FFANC or Low latency Transparency mode 1. Both enabled functions have the same signal path.
 *  0b01..LL Transparency mode 2 is enabled. By having signal path of FFANC_TRSP1 but the input MIC is also subtracted from FBANC Filter input.
 *  0b10..FFANC filter output is not added to FBANC filter output. Instead, FFANC filter output is subtracted from FBANC filter input.
 *  0b11..DO NOT USE. In this mode the FBNC filyter's input MIC is subtracted from FBANC Filter input like in TRSP2 but the Filter output is not used.
 */
#define ADSS_ANCAHW_ANCCH_GENCFG_FFANC_CFG(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_FFANC_CFG_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_FFANC_CFG_MASK)

#define ADSS_ANCAHW_ANCCH_GENCFG_ANC_INSERT_MASK (0x80U)
#define ADSS_ANCAHW_ANCCH_GENCFG_ANC_INSERT_SHIFT (7U)
/*! anc_insert - Insert ANC stream which can be added to the output of ANC filter. */
#define ADSS_ANCAHW_ANCCH_GENCFG_ANC_INSERT(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_ANC_INSERT_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_ANC_INSERT_MASK)

#define ADSS_ANCAHW_ANCCH_GENCFG_FBCOMP_INSERT_MASK (0x100U)
#define ADSS_ANCAHW_ANCCH_GENCFG_FBCOMP_INSERT_SHIFT (8U)
/*! fbcomp_insert - Insert FB compensated stream of 1.Fs or 2.Fs. */
#define ADSS_ANCAHW_ANCCH_GENCFG_FBCOMP_INSERT(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_FBCOMP_INSERT_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_FBCOMP_INSERT_MASK)

#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_DMA_MASK (0x200U)
#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_DMA_SHIFT (9U)
/*! mute_hsi_dma - Mute to DMA input which is merged with ANC filter output */
#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_DMA(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_DMA_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_DMA_MASK)

#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_MUSIC_MASK (0x400U)
#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_MUSIC_SHIFT (10U)
/*! mute_hsi_music - Mute to Music HSI input */
#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_MUSIC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_MUSIC_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_MUSIC_MASK)

#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FBCOMP_MASK (0x800U)
#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FBCOMP_SHIFT (11U)
/*! mute_hsi_fbcomp - Mute to FB compensated HSI input */
#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FBCOMP(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FBCOMP_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FBCOMP_MASK)

#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FB2ANC_MASK (0x1000U)
#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FB2ANC_SHIFT (12U)
/*! mute_hsi_fb2anc - Mute HSI input to FB2ANC BQ. */
#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FB2ANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FB2ANC_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FB2ANC_MASK)

#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FF2ANC_MASK (0x2000U)
#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FF2ANC_SHIFT (13U)
/*! mute_hsi_ff2anc - Mute HSI input to FF2ANC BQ. */
#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FF2ANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FF2ANC_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FF2ANC_MASK)

#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FBANC_MASK (0x4000U)
#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FBANC_SHIFT (14U)
/*! mute_hsi_fbanc - Mute HSI input to FBANC BQ. */
#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FBANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FBANC_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FBANC_MASK)

#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FFANC_MASK (0x8000U)
#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FFANC_SHIFT (15U)
/*! mute_hsi_ffanc - Mute HSI input to FFANC BQ. */
#define ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FFANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FFANC_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_MUTE_HSI_FFANC_MASK)

#define ADSS_ANCAHW_ANCCH_GENCFG_FFANC_MODE_MASK (0x30000U)
#define ADSS_ANCAHW_ANCCH_GENCFG_FFANC_MODE_SHIFT (16U)
/*! ffanc_mode - Feedforward ANC biquad operation mode. Changes during operation can cause audio artifacts.
 *  0b00..Filter output = input. Use respective Fader to eventually mute the signal.
 *  0b01..Filter is set in serial cascaded biquad's configuration
 *  0b10..Filter is set in parallel biquad's configuration
 *  0b11..Filter is set in 12 serial cascaded biquad's configuration using the resources of ff2anc. This mode
 *        overrules the setting of ff2anc_mode which is forced at OFF.
 */
#define ADSS_ANCAHW_ANCCH_GENCFG_FFANC_MODE(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_FFANC_MODE_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_FFANC_MODE_MASK)

#define ADSS_ANCAHW_ANCCH_GENCFG_FBANC_MODE_MASK (0xC0000U)
#define ADSS_ANCAHW_ANCCH_GENCFG_FBANC_MODE_SHIFT (18U)
/*! fbanc_mode - FeedBack ANC biquad operation mode. Changes during operation can cause audio artifacts.
 *  0b00..Filter output = input. Use respective Fader to eventually mute the signal.
 *  0b01..Filter is set in serial cascaded biquad's configuration
 *  0b10..Filter is set in parallel biquad's configuration
 *  0b11..Filter is set in 12 serial cascaded biquad's configuration which performs 12 biquads in serial mode.
 */
#define ADSS_ANCAHW_ANCCH_GENCFG_FBANC_MODE(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_FBANC_MODE_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_FBANC_MODE_MASK)

#define ADSS_ANCAHW_ANCCH_GENCFG_FF2ANC_MODE_MASK (0x300000U)
#define ADSS_ANCAHW_ANCCH_GENCFG_FF2ANC_MODE_SHIFT (20U)
/*! ff2anc_mode - Second Feedforward ANC biquad operation mode. Changes during operation can cause audio artifacts.
 *  0b00..Filter output = input. Use respective Fader to eventually mute the signal.
 *  0b01..Filter is set in serial cascaded biquad's configuration
 *  0b10..Filter is set in parallel biquad's configuration
 */
#define ADSS_ANCAHW_ANCCH_GENCFG_FF2ANC_MODE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_FF2ANC_MODE_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_FF2ANC_MODE_MASK)

#define ADSS_ANCAHW_ANCCH_GENCFG_FB2ANC_MODE_MASK (0xC00000U)
#define ADSS_ANCAHW_ANCCH_GENCFG_FB2ANC_MODE_SHIFT (22U)
/*! fb2anc_mode - Second FeedBack ANC biquad operation mode. Changes during operation can cause audio artifacts.
 *  0b00..Filter output = input. Use respective Fader to eventually mute the signal.
 *  0b01..Filter is set in serial cascaded biquad's configuration
 *  0b10..Filter is set in parallel biquad's configuration
 */
#define ADSS_ANCAHW_ANCCH_GENCFG_FB2ANC_MODE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_GENCFG_FB2ANC_MODE_SHIFT)) & ADSS_ANCAHW_ANCCH_GENCFG_FB2ANC_MODE_MASK)
/*! @} */

/*! @name ANCCH_AUDIOFADERS - Control of input- and output faders */
/*! @{ */

#define ADSS_ANCAHW_ANCCH_AUDIOFADERS_INPUT_GAIN_MUSIC_MASK (0xFFU)
#define ADSS_ANCAHW_ANCCH_AUDIOFADERS_INPUT_GAIN_MUSIC_SHIFT (0U)
/*! input_gain_music - Gain value format 0.8.8 with range [0..1]. The highest setting will be rounded to 1.0 (bypass) */
#define ADSS_ANCAHW_ANCCH_AUDIOFADERS_INPUT_GAIN_MUSIC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_AUDIOFADERS_INPUT_GAIN_MUSIC_SHIFT)) & ADSS_ANCAHW_ANCCH_AUDIOFADERS_INPUT_GAIN_MUSIC_MASK)

#define ADSS_ANCAHW_ANCCH_AUDIOFADERS_INPUT_GAIN_FBCOMP_MASK (0xFF00U)
#define ADSS_ANCAHW_ANCCH_AUDIOFADERS_INPUT_GAIN_FBCOMP_SHIFT (8U)
/*! input_gain_fbcomp - Gain value format 0.8.8 with range [0..1]. The highest setting will be rounded to 1.0 (bypass) */
#define ADSS_ANCAHW_ANCCH_AUDIOFADERS_INPUT_GAIN_FBCOMP(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_AUDIOFADERS_INPUT_GAIN_FBCOMP_SHIFT)) & ADSS_ANCAHW_ANCCH_AUDIOFADERS_INPUT_GAIN_FBCOMP_MASK)

#define ADSS_ANCAHW_ANCCH_AUDIOFADERS_OUTPUT_GAIN_MASK (0xFF0000U)
#define ADSS_ANCAHW_ANCCH_AUDIOFADERS_OUTPUT_GAIN_SHIFT (16U)
/*! output_gain - Gain value format 0.8.8 with range [0..1]. The highest setting will be rounded to 1.0 (bypass) */
#define ADSS_ANCAHW_ANCCH_AUDIOFADERS_OUTPUT_GAIN(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_AUDIOFADERS_OUTPUT_GAIN_SHIFT)) & ADSS_ANCAHW_ANCCH_AUDIOFADERS_OUTPUT_GAIN_MASK)
/*! @} */

/*! @name ANCCH_FILTERFADERS - Filter output fader gain array [TRSP, SDTN, FBCMP, FFANC, FBANC, FF2ANC] */
/*! @{ */

#define ADSS_ANCAHW_ANCCH_FILTERFADERS_GAIN_MASK (0xFFU)
#define ADSS_ANCAHW_ANCCH_FILTERFADERS_GAIN_SHIFT (0U)
/*! gain - Gain value format 0.8.8 with range [0..1]. The highest setting will be rounded to 1.0 (bypass) */
#define ADSS_ANCAHW_ANCCH_FILTERFADERS_GAIN(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_FILTERFADERS_GAIN_SHIFT)) & ADSS_ANCAHW_ANCCH_FILTERFADERS_GAIN_MASK)
/*! @} */

/*! @name ANCCH_LLTRSPGAIN - Low latency 8.Fs Tranparecy mode 2 MIC gain */
/*! @{ */

#define ADSS_ANCAHW_ANCCH_LLTRSPGAIN_VALUE_MASK  (0x3FFFU)
#define ADSS_ANCAHW_ANCCH_LLTRSPGAIN_VALUE_SHIFT (0U)
/*! value - Gain value format 1.14.8 with range [-32 +32]. The highest setting will be rounded to
 *    32.0 Gain applied before adding ANC signal
 */
#define ADSS_ANCAHW_ANCCH_LLTRSPGAIN_VALUE(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_LLTRSPGAIN_VALUE_SHIFT)) & ADSS_ANCAHW_ANCCH_LLTRSPGAIN_VALUE_MASK)
/*! @} */

/*! @name ANCCH_MONFWD - Configuration of the monitor's DMA forwarding for DMA out 2, 3 and 4 */
/*! @{ */

#define ADSS_ANCAHW_ANCCH_MONFWD_SOURCE_SEL_MASK (0xFU)
#define ADSS_ANCAHW_ANCCH_MONFWD_SOURCE_SEL_SHIFT (0U)
/*! source_sel - Source selection for DMA Output (monitoring) data
 *  0b0000..Feedforward NC filter microphone pre-scaler output
 *  0b0001..Feedback NC filter microphone pre-scaler output
 *  0b0010..Feedforward NC filter output
 *  0b0011..Feedback NC filter output
 *  0b0100..Second Feedforward NC filter output
 *  0b0101..Side-tone filter output
 *  0b0110..FBCompensation filter output
 *  0b0111..FBCompensation filter output
 *  0b1000..Preprocessing block pre-scaler output
 *  0b1001..Preprocessing music output
 *  0b1010..FeedBack ANC input subtractor output
 *  0b1011..ANC filters adder output
 *  0b1100..Final adder output
 *  0b1101..FeedBack ANC input subtractor output
 *  0b1110..ANC filters adder output
 *  0b1111..Final adder output
 */
#define ADSS_ANCAHW_ANCCH_MONFWD_SOURCE_SEL(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_MONFWD_SOURCE_SEL_SHIFT)) & ADSS_ANCAHW_ANCCH_MONFWD_SOURCE_SEL_MASK)

#define ADSS_ANCAHW_ANCCH_MONFWD_CH_SEL_MASK     (0x10U)
#define ADSS_ANCAHW_ANCCH_MONFWD_CH_SEL_SHIFT    (4U)
/*! ch_sel - Enable HSI transmission for the monitor channel. */
#define ADSS_ANCAHW_ANCCH_MONFWD_CH_SEL(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_MONFWD_CH_SEL_SHIFT)) & ADSS_ANCAHW_ANCCH_MONFWD_CH_SEL_MASK)

#define ADSS_ANCAHW_ANCCH_MONFWD_UNDERRUN_MASK   (0x20U)
#define ADSS_ANCAHW_ANCCH_MONFWD_UNDERRUN_SHIFT  (5U)
/*! underrun - Underrun error of the ANC monitor channel, when data is not fetched by HSI before the new data is available. */
#define ADSS_ANCAHW_ANCCH_MONFWD_UNDERRUN(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_MONFWD_UNDERRUN_SHIFT)) & ADSS_ANCAHW_ANCCH_MONFWD_UNDERRUN_MASK)

#define ADSS_ANCAHW_ANCCH_MONFWD_CH_ENABLE_MASK  (0x40U)
#define ADSS_ANCAHW_ANCCH_MONFWD_CH_ENABLE_SHIFT (6U)
/*! ch_enable - ANC monitoring channel enable */
#define ADSS_ANCAHW_ANCCH_MONFWD_CH_ENABLE(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_MONFWD_CH_ENABLE_SHIFT)) & ADSS_ANCAHW_ANCCH_MONFWD_CH_ENABLE_MASK)

#define ADSS_ANCAHW_ANCCH_MONFWD_DEC_FACTOR_MASK (0x300U)
#define ADSS_ANCAHW_ANCCH_MONFWD_DEC_FACTOR_SHIFT (8U)
/*! dec_factor - Decimation factor applied to the selected signal factor = 2^(dec_factor). Range [1, 2, 4, 8] */
#define ADSS_ANCAHW_ANCCH_MONFWD_DEC_FACTOR(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_MONFWD_DEC_FACTOR_SHIFT)) & ADSS_ANCAHW_ANCCH_MONFWD_DEC_FACTOR_MASK)

#define ADSS_ANCAHW_ANCCH_MONFWD_DEC_FILTER_E_MASK (0x800000U)
#define ADSS_ANCAHW_ANCCH_MONFWD_DEC_FILTER_E_SHIFT (23U)
/*! dec_filter_e - Decimation filter enable. If '0', the signal will be sampled at the configured decimation factor. */
#define ADSS_ANCAHW_ANCCH_MONFWD_DEC_FILTER_E(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_MONFWD_DEC_FILTER_E_SHIFT)) & ADSS_ANCAHW_ANCCH_MONFWD_DEC_FILTER_E_MASK)
/*! @} */

/*! @name ANCCH_ABSMAXMON - Maximum of the absolute value on the ANC-AHW output */
/*! @{ */

#define ADSS_ANCAHW_ANCCH_ABSMAXMON_VALUE_MASK   (0xFFFU)
#define ADSS_ANCAHW_ANCCH_ABSMAXMON_VALUE_SHIFT  (0U)
/*! value - Maximum value occurred after last clear or reset in the format 0.12.12 Writing anything
 *    back to this register will clear its content to 0.
 */
#define ADSS_ANCAHW_ANCCH_ABSMAXMON_VALUE(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_ABSMAXMON_VALUE_SHIFT)) & ADSS_ANCAHW_ANCCH_ABSMAXMON_VALUE_MASK)
/*! @} */

/*! @name ANCCH_SATDETLEVEL - Saturation flags detection level */
/*! @{ */

#define ADSS_ANCAHW_ANCCH_SATDETLEVEL_VALUE_MASK (0xFFFU)
#define ADSS_ANCAHW_ANCCH_SATDETLEVEL_VALUE_SHIFT (0U)
/*! value - Detection threshold value in the format 0.12.12 */
#define ADSS_ANCAHW_ANCCH_SATDETLEVEL_VALUE(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_SATDETLEVEL_VALUE_SHIFT)) & ADSS_ANCAHW_ANCCH_SATDETLEVEL_VALUE_MASK)
/*! @} */

/*! @name ANCCH_CLIPSTATUS - Clipping exception flags for all key signal path positions. */
/*! @{ */

#define ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FFANC_MASK (0x1U)
#define ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FFANC_SHIFT (0U)
/*! clipflag_ffanc - If '1' clipping have been detected for at least one section of the FBCompensation filter */
#define ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FFANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FFANC_SHIFT)) & ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FFANC_MASK)

#define ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FBANC_MASK (0x2U)
#define ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FBANC_SHIFT (1U)
/*! clipflag_fbanc - If '1' clipping have been detected for at least one section of the feedforward NC filter */
#define ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FBANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FBANC_SHIFT)) & ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FBANC_MASK)

#define ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FF2ANC_MASK (0x4U)
#define ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FF2ANC_SHIFT (2U)
/*! clipflag_ff2anc - If '1' clipping have been detected for at least one section of the feedback NC filter */
#define ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FF2ANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FF2ANC_SHIFT)) & ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FF2ANC_MASK)

#define ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FB2ANC_MASK (0x8U)
#define ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FB2ANC_SHIFT (3U)
/*! clipflag_fb2anc - If '1' clipping have been detected for at least one section of the 2nd feedforward NC filter */
#define ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FB2ANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FB2ANC_SHIFT)) & ADSS_ANCAHW_ANCCH_CLIPSTATUS_CLIPFLAG_FB2ANC_MASK)
/*! @} */

/*! @name ANCCH_STATUS - Saturation flags for all key signal path positions. */
/*! @{ */

#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FFMIC_MASK (0x1U)
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FFMIC_SHIFT (0U)
/*! satflag_ffmic - If '1' saturation have been detected for the Feedforward NC filter microphone pre-scaler output */
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FFMIC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FFMIC_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FFMIC_MASK)

#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBMIC_MASK (0x2U)
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBMIC_SHIFT (1U)
/*! satflag_fbmic - If '1' saturation have been detected for the Feedback NC filter microphone pre-scaler output */
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBMIC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBMIC_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBMIC_MASK)

#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FFANC_MASK (0x4U)
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FFANC_SHIFT (2U)
/*! satflag_ffanc - If '1' saturation have been detected for the Feedforward NC filter output */
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FFANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FFANC_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FFANC_MASK)

#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBANC_MASK (0x8U)
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBANC_SHIFT (3U)
/*! satflag_fbanc - If '1' saturation have been detected for the Feedback NC filter output */
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBANC_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBANC_MASK)

#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FF2ANC_MASK (0x10U)
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FF2ANC_SHIFT (4U)
/*! satflag_ff2anc - If '1' saturation have been detected for the Second Feedforward NC filter output */
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FF2ANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FF2ANC_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FF2ANC_MASK)

#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FB2ANC_MASK (0x20U)
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FB2ANC_SHIFT (5U)
/*! satflag_fb2anc - If '1' saturation have been detected for the Side-tone filter output */
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FB2ANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FB2ANC_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FB2ANC_MASK)

#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBCMP_I_MASK (0x40U)
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBCMP_I_SHIFT (6U)
/*! satflag_fbcmp_i - If '1' saturation have been detected for the FBCompensation filter output */
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBCMP_I(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBCMP_I_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBCMP_I_MASK)

#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBCMP_O_MASK (0x80U)
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBCMP_O_SHIFT (7U)
/*! satflag_fbcmp_o - If '1' saturation have been detected for the FBCompensation filter output */
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBCMP_O(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBCMP_O_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBCMP_O_MASK)

#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_PP_I_MASK (0x100U)
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_PP_I_SHIFT (8U)
/*! satflag_pp_i - If '1' saturation have been detected for the Preprocessing block pre-scaler output */
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_PP_I(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_PP_I_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_PP_I_MASK)

#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_PP_O_MASK (0x200U)
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_PP_O_SHIFT (9U)
/*! satflag_pp_o - If '1' saturation have been detected for the Preprocessing music output */
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_PP_O(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_PP_O_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_PP_O_MASK)

#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBSUB_MASK (0x400U)
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBSUB_SHIFT (10U)
/*! satflag_fbsub - If '1' saturation have been detected for the FeedBack ANC input subtractor output */
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBSUB(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBSUB_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_FBSUB_MASK)

#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_ANC_ADD_MASK (0x800U)
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_ANC_ADD_SHIFT (11U)
/*! satflag_anc_add - If '1' saturation have been detected for the ANC filters adder output */
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_ANC_ADD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_ANC_ADD_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_ANC_ADD_MASK)

#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_OUTPUT_MASK (0x1000U)
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_OUTPUT_SHIFT (12U)
/*! satflag_output - If '1' saturation have been detected for the Final adder output */
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_OUTPUT(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_OUTPUT_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_OUTPUT_MASK)

#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_ANC_DSP_MASK (0x2000U)
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_ANC_DSP_SHIFT (13U)
/*! satflag_anc_dsp - If '1' saturation have been detected for the FeedBack ANC input subtractor output */
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_ANC_DSP(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_ANC_DSP_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_ANC_DSP_MASK)

#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_OUT_FADER_MASK (0x4000U)
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_OUT_FADER_SHIFT (14U)
/*! satflag_out_fader - If '1' saturation have been detected for the ANC filters adder output */
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_OUT_FADER(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_OUT_FADER_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_OUT_FADER_MASK)

#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_NS_I_MASK (0x8000U)
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_NS_I_SHIFT (15U)
/*! satflag_ns_i - If '1' saturation have been detected for the Final adder output */
#define ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_NS_I(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_NS_I_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_SATFLAG_NS_I_MASK)

#define ADSS_ANCAHW_ANCCH_STATUS_CLIPFLAGS_ANY_MASK (0x800000U)
#define ADSS_ANCAHW_ANCCH_STATUS_CLIPFLAGS_ANY_SHIFT (23U)
/*! clipflags_any - The or function of all exception bits inside ClipStatus register */
#define ADSS_ANCAHW_ANCCH_STATUS_CLIPFLAGS_ANY(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUS_CLIPFLAGS_ANY_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUS_CLIPFLAGS_ANY_MASK)
/*! @} */

/*! @name ANCCH_CLIPSTATUSCLR - Clipping exception flags clearance control register */
/*! @{ */

#define ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FFANC_MASK (0x1U)
#define ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FFANC_SHIFT (0U)
/*! clipflag_ffanc - Writing '1' will clear the content of ClipStatus.clipflag_ffanc */
#define ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FFANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FFANC_SHIFT)) & ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FFANC_MASK)

#define ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FBANC_MASK (0x2U)
#define ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FBANC_SHIFT (1U)
/*! clipflag_fbanc - Writing '1' will clear the content of ClipStatus.clipflag_fbanc */
#define ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FBANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FBANC_SHIFT)) & ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FBANC_MASK)

#define ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FF2ANC_MASK (0x4U)
#define ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FF2ANC_SHIFT (2U)
/*! clipflag_ff2anc - Writing '1' will clear the content of ClipStatus.clipflag_ff2anc */
#define ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FF2ANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FF2ANC_SHIFT)) & ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FF2ANC_MASK)

#define ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FB2ANC_MASK (0x8U)
#define ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FB2ANC_SHIFT (3U)
/*! clipflag_fb2anc - Writing '1' will clear the content of ClipStatus.clipflag_fb2anc */
#define ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FB2ANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FB2ANC_SHIFT)) & ADSS_ANCAHW_ANCCH_CLIPSTATUSCLR_CLIPFLAG_FB2ANC_MASK)
/*! @} */

/*! @name ANCCH_STATUSCLR - Saturation flags clearance control register */
/*! @{ */

#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FFMIC_MASK (0x1U)
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FFMIC_SHIFT (0U)
/*! satflag_ffmic - Writing '1' will clear the content of ClipStatus.satflag_ffmic */
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FFMIC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FFMIC_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FFMIC_MASK)

#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBMIC_MASK (0x2U)
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBMIC_SHIFT (1U)
/*! satflag_fbmic - Writing '1' will clear the content of ClipStatus.satflag_fbmic */
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBMIC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBMIC_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBMIC_MASK)

#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FFANC_MASK (0x4U)
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FFANC_SHIFT (2U)
/*! satflag_ffanc - Writing '1' will clear the content of ClipStatus.satflag_ffanc */
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FFANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FFANC_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FFANC_MASK)

#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBANC_MASK (0x8U)
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBANC_SHIFT (3U)
/*! satflag_fbanc - Writing '1' will clear the content of ClipStatus.satflag_fbanc */
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBANC_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBANC_MASK)

#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FF2ANC_MASK (0x10U)
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FF2ANC_SHIFT (4U)
/*! satflag_ff2anc - Writing '1' will clear the content of ClipStatus.satflag_ff2anc */
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FF2ANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FF2ANC_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FF2ANC_MASK)

#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FB2ANC_MASK (0x20U)
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FB2ANC_SHIFT (5U)
/*! satflag_fb2anc - Writing '1' will clear the content of ClipStatus.satflag_fb2anc */
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FB2ANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FB2ANC_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FB2ANC_MASK)

#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBCMP_I_MASK (0x40U)
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBCMP_I_SHIFT (6U)
/*! satflag_fbcmp_i - Writing '1' will clear the content of ClipStatus.satflag_fbcmp_i */
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBCMP_I(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBCMP_I_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBCMP_I_MASK)

#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBCMP_O_MASK (0x80U)
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBCMP_O_SHIFT (7U)
/*! satflag_fbcmp_o - Writing '1' will clear the content of ClipStatus.satflag_fbcmp_o */
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBCMP_O(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBCMP_O_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBCMP_O_MASK)

#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_PP_I_MASK (0x100U)
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_PP_I_SHIFT (8U)
/*! satflag_pp_i - Writing '1' will clear the content of ClipStatus.satflag_pp_i */
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_PP_I(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_PP_I_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_PP_I_MASK)

#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_PP_O_MASK (0x200U)
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_PP_O_SHIFT (9U)
/*! satflag_pp_o - Writing '1' will clear the content of ClipStatus.satflag_pp_o */
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_PP_O(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_PP_O_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_PP_O_MASK)

#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBSUB_MASK (0x400U)
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBSUB_SHIFT (10U)
/*! satflag_fbsub - Writing '1' will clear the content of ClipStatus.satflag_fbsub */
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBSUB(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBSUB_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_FBSUB_MASK)

#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_ANC_ADD_MASK (0x800U)
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_ANC_ADD_SHIFT (11U)
/*! satflag_anc_add - Writing '1' will clear the content of ClipStatus.satflag_anc_add */
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_ANC_ADD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_ANC_ADD_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_ANC_ADD_MASK)

#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_OUTPUT_MASK (0x1000U)
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_OUTPUT_SHIFT (12U)
/*! satflag_output - Writing '1' will clear the content of ClipStatus.satflag_output */
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_OUTPUT(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_OUTPUT_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_OUTPUT_MASK)

#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_ANC_DSP_MASK (0x2000U)
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_ANC_DSP_SHIFT (13U)
/*! satflag_anc_dsp - Writing '1' will clear the content of ClipStatus.satflag_anc_dsp */
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_ANC_DSP(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_ANC_DSP_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_ANC_DSP_MASK)

#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_OUT_FADER_MASK (0x4000U)
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_OUT_FADER_SHIFT (14U)
/*! satflag_out_fader - Writing '1' will clear the content of ClipStatus.satflag_out_fader */
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_OUT_FADER(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_OUT_FADER_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_OUT_FADER_MASK)

#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_NS_I_MASK (0x8000U)
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_NS_I_SHIFT (15U)
/*! satflag_ns_i - Writing '1' will clear the content of ClipStatus.satflag_ns_i */
#define ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_NS_I(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_NS_I_SHIFT)) & ADSS_ANCAHW_ANCCH_STATUSCLR_SATFLAG_NS_I_MASK)
/*! @} */

/*! @name ANCCH_EVMASK - ANC Event line enable */
/*! @{ */

#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FFMIC_MASK (0x1U)
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FFMIC_SHIFT (0U)
/*! satflag_ffmic - If '1', the source for satflag_ffmic is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FFMIC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FFMIC_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FFMIC_MASK)

#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBMIC_MASK (0x2U)
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBMIC_SHIFT (1U)
/*! satflag_fbmic - If '1', the source for satflag_fbmic is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBMIC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBMIC_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBMIC_MASK)

#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FFANC_MASK (0x4U)
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FFANC_SHIFT (2U)
/*! satflag_ffanc - If '1', the source for satflag_ffanc is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FFANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FFANC_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FFANC_MASK)

#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBANC_MASK (0x8U)
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBANC_SHIFT (3U)
/*! satflag_fbanc - If '1', the source for satflag_fbanc is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBANC_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBANC_MASK)

#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FF2ANC_MASK (0x10U)
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FF2ANC_SHIFT (4U)
/*! satflag_ff2anc - If '1', the source for satflag_ff2anc is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FF2ANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FF2ANC_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FF2ANC_MASK)

#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FB2ANC_MASK (0x20U)
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FB2ANC_SHIFT (5U)
/*! satflag_fb2anc - If '1', the source for satflag_fb2anc is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FB2ANC(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FB2ANC_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FB2ANC_MASK)

#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBCMP_I_MASK (0x40U)
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBCMP_I_SHIFT (6U)
/*! satflag_fbcmp_i - If '1', the source for satflag_fbcmp_i is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBCMP_I(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBCMP_I_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBCMP_I_MASK)

#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBCMP_O_MASK (0x80U)
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBCMP_O_SHIFT (7U)
/*! satflag_fbcmp_o - If '1', the source for satflag_fbcmp_o is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBCMP_O(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBCMP_O_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBCMP_O_MASK)

#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_PP_I_MASK (0x100U)
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_PP_I_SHIFT (8U)
/*! satflag_pp_i - If '1', the source for satflag_pp_i is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_PP_I(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_PP_I_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_PP_I_MASK)

#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_PP_O_MASK (0x200U)
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_PP_O_SHIFT (9U)
/*! satflag_pp_o - If '1', the source for satflag_pp_o is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_PP_O(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_PP_O_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_PP_O_MASK)

#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBSUB_MASK (0x400U)
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBSUB_SHIFT (10U)
/*! satflag_fbsub - If '1', the source for satflag_fbsub is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBSUB(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBSUB_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_FBSUB_MASK)

#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_ANC_ADD_MASK (0x800U)
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_ANC_ADD_SHIFT (11U)
/*! satflag_anc_add - If '1', the source for satflag_anc_add is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_ANC_ADD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_ANC_ADD_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_ANC_ADD_MASK)

#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_OUTPUT_MASK (0x1000U)
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_OUTPUT_SHIFT (12U)
/*! satflag_output - If '1', the source for satflag_output is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_OUTPUT(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_OUTPUT_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_OUTPUT_MASK)

#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_ANC_DSP_MASK (0x2000U)
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_ANC_DSP_SHIFT (13U)
/*! satflag_anc_dsp - If '1', the source for satflag_anc_dsp is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_ANC_DSP(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_ANC_DSP_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_ANC_DSP_MASK)

#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_OUT_FADER_MASK (0x4000U)
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_OUT_FADER_SHIFT (14U)
/*! satflag_out_fader - If '1', the source for satflag_out_fader is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_OUT_FADER(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_OUT_FADER_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_OUT_FADER_MASK)

#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_NS_I_MASK (0x8000U)
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_NS_I_SHIFT (15U)
/*! satflag_ns_i - If '1', the source for satflag_ns_i is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_NS_I(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_NS_I_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_SATFLAG_NS_I_MASK)

#define ADSS_ANCAHW_ANCCH_EVMASK_CLIPFLAGS_ANY_MASK (0x800000U)
#define ADSS_ANCAHW_ANCCH_EVMASK_CLIPFLAGS_ANY_SHIFT (23U)
/*! clipflags_any - If '1', the source for clipflags_any is forwarded on the event line of this channel */
#define ADSS_ANCAHW_ANCCH_EVMASK_CLIPFLAGS_ANY(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_ANCCH_EVMASK_CLIPFLAGS_ANY_SHIFT)) & ADSS_ANCAHW_ANCCH_EVMASK_CLIPFLAGS_ANY_MASK)
/*! @} */

/*! @name SHORTCIRCUITDETECT_GENCFG - General configuration on enabling a measurement process of short circuit, measurement duration and enabling of signal power accumulation. */
/*! @{ */

#define ADSS_ANCAHW_SHORTCIRCUITDETECT_GENCFG_ENABLE_MASK (0x1U)
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_GENCFG_ENABLE_SHIFT (0U)
/*! enable - Enable one short circuit measurement process. After enabled, the amount of
 *    measure_duration 8.Fs samples is used as the duration of the measurement. The process is stopped until the
 *    amount of measure_duration 8.Fs samples is reached.
 *  0b0..When this field is read as 0, the measurement process is done or not enabled. Write a 0 to this field
 *       won't cause anything and does not stop the ongoing measurement process.
 *  0b1..Write a 1 to this field to start the measurement process. The process will not stop by writing a 0 to
 *       this field. It will stop until the amount of 8.Fs sample count reaches measure_duration.
 */
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_GENCFG_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_SHORTCIRCUITDETECT_GENCFG_ENABLE_SHIFT)) & ADSS_ANCAHW_SHORTCIRCUITDETECT_GENCFG_ENABLE_MASK)

#define ADSS_ANCAHW_SHORTCIRCUITDETECT_GENCFG_ACC_ENABLE_MASK (0x2U)
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_GENCFG_ACC_ENABLE_SHIFT (1U)
/*! acc_enable - Enable signal power accumulation on the absolute value at the noise shaper input
 *  0b0..Signal power accumulation of noise shaper input is disabled.
 *  0b1..Enable signal power accumulation on the absolute value at the noise shaper input
 */
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_GENCFG_ACC_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_SHORTCIRCUITDETECT_GENCFG_ACC_ENABLE_SHIFT)) & ADSS_ANCAHW_SHORTCIRCUITDETECT_GENCFG_ACC_ENABLE_MASK)

#define ADSS_ANCAHW_SHORTCIRCUITDETECT_GENCFG_MEASURE_DURATION_MASK (0x7FFF00U)
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_GENCFG_MEASURE_DURATION_SHIFT (8U)
/*! measure_duration - Amount of 8.Fs samples to count for one measurement process. */
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_GENCFG_MEASURE_DURATION(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_SHORTCIRCUITDETECT_GENCFG_MEASURE_DURATION_SHIFT)) & ADSS_ANCAHW_SHORTCIRCUITDETECT_GENCFG_MEASURE_DURATION_MASK)
/*! @} */

/*! @name SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW - Configuration on short circuit event generated by SW or by digital HW. */
/*! @{ */

#define ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW_OVERFLOW_COUNT_MASK (0x1FFFFU)
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW_OVERFLOW_COUNT_SHIFT (0U)
/*! overflow_count - A configurable current count which can be compared with the LDO current count
 *    read from analog. When the read value from analog is larger than this value, the short circuit
 *    event is generated by digital HW.
 */
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW_OVERFLOW_COUNT(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW_OVERFLOW_COUNT_SHIFT)) & ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW_OVERFLOW_COUNT_MASK)

#define ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW_SW_SHORT_EVENT_MASK (0x20000U)
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW_SW_SHORT_EVENT_SHIFT (17U)
/*! sw_short_event - Generate the short circuit event by SW through writing 1 to this field */
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW_SW_SHORT_EVENT(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW_SW_SHORT_EVENT_SHIFT)) & ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW_SW_SHORT_EVENT_MASK)

#define ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW_SHORT_EVENT_STATUS_MASK (0x40000U)
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW_SHORT_EVENT_STATUS_SHIFT (18U)
/*! short_event_status - Event status to indicate a short event is triggered. Writing '1' will clear the content of this status bit. */
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW_SHORT_EVENT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW_SHORT_EVENT_STATUS_SHIFT)) & ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_OVERFLOW_SHORT_EVENT_STATUS_MASK)
/*! @} */

/*! @name SHORTCIRCUITDETECT_LDO_CURRENT_ANA - LDO current count read from analog after the recent measurement process is done. */
/*! @{ */

#define ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_ANA_VALUE_MASK (0x1FFFFU)
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_ANA_VALUE_SHIFT (0U)
/*! value - LDO current measurement read from analog. The value only reflects the previous current
 *    measurement process and will be updated after every measurement process.
 */
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_ANA_VALUE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_ANA_VALUE_SHIFT)) & ADSS_ANCAHW_SHORTCIRCUITDETECT_LDO_CURRENT_ANA_VALUE_MASK)
/*! @} */

/*! @name SHORTCIRCUITDETECT_SIGNAL_POWER_L - Low bits of the 30-bit result of signal power, by accumulating the absolute value of the 24-bit noise shaper input. */
/*! @{ */

#define ADSS_ANCAHW_SHORTCIRCUITDETECT_SIGNAL_POWER_L_VALUE_MASK (0xFFFFFFU)
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_SIGNAL_POWER_L_VALUE_SHIFT (0U)
/*! value - Low 24-bit of the 30-bit accumulation results of signal power */
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_SIGNAL_POWER_L_VALUE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_SHORTCIRCUITDETECT_SIGNAL_POWER_L_VALUE_SHIFT)) & ADSS_ANCAHW_SHORTCIRCUITDETECT_SIGNAL_POWER_L_VALUE_MASK)
/*! @} */

/*! @name SHORTCIRCUITDETECT_SIGNAL_POWER_H - High bits of the 30-bit result of signal power. */
/*! @{ */

#define ADSS_ANCAHW_SHORTCIRCUITDETECT_SIGNAL_POWER_H_VALUE_MASK (0x3FU)
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_SIGNAL_POWER_H_VALUE_SHIFT (0U)
/*! value - Low 6-bit of the 30-bit accumulation results of signal power */
#define ADSS_ANCAHW_SHORTCIRCUITDETECT_SIGNAL_POWER_H_VALUE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ANCAHW_SHORTCIRCUITDETECT_SIGNAL_POWER_H_VALUE_SHIFT)) & ADSS_ANCAHW_SHORTCIRCUITDETECT_SIGNAL_POWER_H_VALUE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADSS_ANCAHW_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_ANCAHW_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_ANCAHW_H_ */

