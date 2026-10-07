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
**         CMSIS Peripheral Access Layer for ADSS_DEC
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
 * @file PERI_ADSS_DEC.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_DEC
 *
 * CMSIS Peripheral Access Layer for ADSS_DEC
 */

#if !defined(PERI_ADSS_DEC_H_)
#define PERI_ADSS_DEC_H_                         /**< Symbol preventing repeated inclusion */

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
   -- ADSS_DEC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_DEC_Peripheral_Access_Layer ADSS_DEC Peripheral Access Layer
 * @{
 */

/** ADSS_DEC - Size of Registers Arrays */
#define ADSS_DEC_DECDMICCH_CFG_COUNT              4u
#define ADSS_DEC_DECMIXCH_CFG_COUNT               7u
#define ADSS_DEC_DECLOWLATENCYCH_CFG_COUNT        2u
#define ADSS_DEC_DECCH_OBS_COUNT                  13u
#define ADSS_DEC_DECDCCORRECTION_COUNT            3u

/** ADSS_DEC - Register Layout Typedef */
typedef struct {
  __IO uint32_t DECGENCTRL;                        /**< General decimator configuration Fields, offset: 0x0 */
  __IO uint32_t DECDMICCH_CFG[ADSS_DEC_DECDMICCH_CFG_COUNT]; /**< Configuration register for each decimator channel which can take dedicated Digital MIC input, array offset: 0x4, array step: 0x4 */
  __IO uint32_t DECMIXCH_CFG[ADSS_DEC_DECMIXCH_CFG_COUNT]; /**< Configuration register for each decimator channel which can take either Digital MIC and Analog MIC inputs, array offset: 0x14, array step: 0x4 */
  __IO uint32_t DECLOWLATENCYCH_CFG[ADSS_DEC_DECLOWLATENCYCH_CFG_COUNT]; /**< Configuration for the Low Latency Feed Forward and Feedback Channels, array offset: 0x30, array step: 0x4 */
  __IO uint32_t DECCH_ENABLE;                      /**< Enable of decimation channels, offset: 0x38 */
  __IO uint32_t DECCH_FIR_ENABLE;                  /**< Enable of FIR filter of decimation channels, offset: 0x3C */
  __IO uint32_t DECCH_IIR_ENABLE;                  /**< Enable of IIR filter of decimation channels, offset: 0x40 */
  __I  uint32_t DECCH_OBS[ADSS_DEC_DECCH_OBS_COUNT]; /**< Observer register for the decimator MIC channel, array offset: 0x44, array step: 0x4 */
  struct {                                         /* offset: 0x78, array step: 0x10 */
    __IO uint32_t CFG;                               /**< Global configuration on the DC correction loop, array offset: 0x78, array step: 0x10 */
    __IO uint32_t DC_TARGET;                         /**< DC target register_, array offset: 0x7C, array step: 0x10 */
    __IO uint32_t LPF;                               /**< Configuration on Sigma delta modulation noise shaper, array offset: 0x80, array step: 0x10 */
    __IO uint32_t SDM;                               /**< Configuration on Sigma delta modulation noise shaper, array offset: 0x84, array step: 0x10 */
  } DECDCCORRECTION[ADSS_DEC_DECDCCORRECTION_COUNT];
} ADSS_DEC_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_DEC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_DEC_Register_Masks ADSS_DEC Register Masks
 * @{
 */

/*! @name DECGENCTRL - General decimator configuration Fields */
/*! @{ */

#define ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_0_MASK  (0x3U)
#define ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_0_SHIFT (0U)
/*! dmic_osr_pdm_0 - Digital MICs OSR field for PDM 0. Also selects the DMIC clock freq divider setting in the Clockshop.
 *  0b00..DMIC clock running at 128.Fs
 *  0b01..DMIC clock running at 64.Fs
 *  0b10..DMIC clock running at 32.Fs
 *  0b11..DMIC clock running at 48.Fs
 */
#define ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_0(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_0_SHIFT)) & ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_0_MASK)

#define ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_1_MASK  (0xCU)
#define ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_1_SHIFT (2U)
/*! dmic_osr_pdm_1 - Digital MICs OSR field for PDM 1. Also selects the DMIC clock freq divider setting in the Clockshop.
 *  0b00..DMIC clock running at 128.Fs
 *  0b01..DMIC clock running at 64.Fs
 *  0b10..DMIC clock running at 32.Fs
 *  0b11..DMIC clock running at 48.Fs
 */
#define ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_1(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_1_SHIFT)) & ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_1_MASK)

#define ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_2_MASK  (0x30U)
#define ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_2_SHIFT (4U)
/*! dmic_osr_pdm_2 - Digital MICs OSR field for PDM 2. Also selects the DMIC clock freq divider setting in the Clockshop.
 *  0b00..DMIC clock running at 128.Fs
 *  0b01..DMIC clock running at 64.Fs
 *  0b10..DMIC clock running at 32.Fs
 */
#define ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_2(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_2_SHIFT)) & ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_2_MASK)

#define ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_3_MASK  (0xC0U)
#define ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_3_SHIFT (6U)
/*! dmic_osr_pdm_3 - Digital MICs OSR field for PDM 3. Also selects the DMIC clock freq divider setting in the Clockshop.
 *  0b00..DMIC clock running at 128.Fs
 *  0b01..DMIC clock running at 64.Fs
 *  0b10..DMIC clock running at 32.Fs
 */
#define ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_3(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_3_SHIFT)) & ADSS_DEC_DECGENCTRL_DMIC_OSR_PDM_3_MASK)

#define ADSS_DEC_DECGENCTRL_ENABLE_48FS_MASK     (0x100U)
#define ADSS_DEC_DECGENCTRL_ENABLE_48FS_SHIFT    (8U)
/*! enable_48Fs - Enable PDM 0 and PDM 1 to both run on OSR 48.
 *  0b0..Disable OSR 48Fs input to PDM 0 and PDM 1. Then PDM 0 and PDM 1 can be configured to run on OSR 128, OSR 64 or OSR 32.
 *  0b1..Enable OSR 48Fs input to PDM 0 and PDM 1. If set to '1', the 4 decimation channels dedicated to PDM 0 and
 *       PDM 1 will run on 48Fs clock. OSR of PDM 0 and PDM 1 are fixed to 48Fs. Other OSRs are not possible to
 *       choose by configuring dmic_osr_pdm_0 and dmic_osr_pdm_1.
 */
#define ADSS_DEC_DECGENCTRL_ENABLE_48FS(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECGENCTRL_ENABLE_48FS_SHIFT)) & ADSS_DEC_DECGENCTRL_ENABLE_48FS_MASK)

#define ADSS_DEC_DECGENCTRL_AHW_NC_SR_MASK       (0x200U)
#define ADSS_DEC_DECGENCTRL_AHW_NC_SR_SHIFT      (9U)
/*! ahw_nc_sr - Sample-rate control for the Low Latency path in ANC Accelerator HW
 *  0b0..ANC-AHW Low Latency path runs at 8.Fs sample rate till the input of the interpolator in front of the noise shaper
 *  0b1..ANC-AHW Low Latency path runs at 4.Fs sample rate till the input of the interpolator in front of the noise shaper
 */
#define ADSS_DEC_DECGENCTRL_AHW_NC_SR(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECGENCTRL_AHW_NC_SR_SHIFT)) & ADSS_DEC_DECGENCTRL_AHW_NC_SR_MASK)

#define ADSS_DEC_DECGENCTRL_ENABLE_AMIC_1_MASK   (0x2000U)
#define ADSS_DEC_DECGENCTRL_ENABLE_AMIC_1_SHIFT  (13U)
/*! enable_AMIC_1 - Enable Analog MIC 1 input to the decimator.
 *  0b0..Disable AMIC 1 input
 *  0b1..Enable AMIC 1 input
 */
#define ADSS_DEC_DECGENCTRL_ENABLE_AMIC_1(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECGENCTRL_ENABLE_AMIC_1_SHIFT)) & ADSS_DEC_DECGENCTRL_ENABLE_AMIC_1_MASK)

#define ADSS_DEC_DECGENCTRL_ENABLE_AMIC_2_MASK   (0x4000U)
#define ADSS_DEC_DECGENCTRL_ENABLE_AMIC_2_SHIFT  (14U)
/*! enable_AMIC_2 - Enable Analog MIC 2 input to the decimator.
 *  0b0..Disable AMIC 2 input
 *  0b1..Enable AMIC 2 input
 */
#define ADSS_DEC_DECGENCTRL_ENABLE_AMIC_2(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECGENCTRL_ENABLE_AMIC_2_SHIFT)) & ADSS_DEC_DECGENCTRL_ENABLE_AMIC_2_MASK)

#define ADSS_DEC_DECGENCTRL_ENABLE_AMIC_3_MASK   (0x8000U)
#define ADSS_DEC_DECGENCTRL_ENABLE_AMIC_3_SHIFT  (15U)
/*! enable_AMIC_3 - Enable Analog MIC 3 input to the decimator.
 *  0b0..Disable AMIC 3 input
 *  0b1..Enable AMIC 3 input
 */
#define ADSS_DEC_DECGENCTRL_ENABLE_AMIC_3(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECGENCTRL_ENABLE_AMIC_3_SHIFT)) & ADSS_DEC_DECGENCTRL_ENABLE_AMIC_3_MASK)
/*! @} */

/*! @name DECDMICCH_CFG - Configuration register for each decimator channel which can take dedicated Digital MIC input */
/*! @{ */

#define ADSS_DEC_DECDMICCH_CFG_DC_REMOVAL_K_MASK (0x3U)
#define ADSS_DEC_DECDMICCH_CFG_DC_REMOVAL_K_SHIFT (0U)
/*! dc_removal_k - DC Removal HPF K setting
 *  0b00..HPF cutoff frequency is 7.46 Hz (4 x 48kHz sampling freq)
 *  0b01..HPF cutoff frequency is 3.73 Hz (4 x 48kHz sampling freq)
 *  0b10..HPF cutoff frequency is 1.86 Hz (4 x 48kHz sampling freq)
 *  0b11..HPF cutoff frequency is 0.93 Hz (4 x 48kHz sampling freq)
 */
#define ADSS_DEC_DECDMICCH_CFG_DC_REMOVAL_K(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECDMICCH_CFG_DC_REMOVAL_K_SHIFT)) & ADSS_DEC_DECDMICCH_CFG_DC_REMOVAL_K_MASK)

#define ADSS_DEC_DECDMICCH_CFG_DC_REMOVAL_BYPASS_MASK (0x4U)
#define ADSS_DEC_DECDMICCH_CFG_DC_REMOVAL_BYPASS_SHIFT (2U)
/*! dc_removal_bypass - If set at '1' , the DC-removal HPF filter is switched off and fully bypass. */
#define ADSS_DEC_DECDMICCH_CFG_DC_REMOVAL_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECDMICCH_CFG_DC_REMOVAL_BYPASS_SHIFT)) & ADSS_DEC_DECDMICCH_CFG_DC_REMOVAL_BYPASS_MASK)

#define ADSS_DEC_DECDMICCH_CFG_SR_SEL_MASK       (0x18U)
#define ADSS_DEC_DECDMICCH_CFG_SR_SEL_SHIFT      (3U)
/*! sr_sel - Sample-rate select for HSI channel output
 *  0b00..Select Fs output to HSI
 *  0b01..Select 2.Fs output to HSI
 *  0b10..Select 4.Fs output to HSI
 *  0b11..Select 8.Fs output to HSI
 */
#define ADSS_DEC_DECDMICCH_CFG_SR_SEL(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECDMICCH_CFG_SR_SEL_SHIFT)) & ADSS_DEC_DECDMICCH_CFG_SR_SEL_MASK)
/*! @} */

/*! @name DECMIXCH_CFG - Configuration register for each decimator channel which can take either Digital MIC and Analog MIC inputs */
/*! @{ */

#define ADSS_DEC_DECMIXCH_CFG_DC_REMOVAL_K_MASK  (0x3U)
#define ADSS_DEC_DECMIXCH_CFG_DC_REMOVAL_K_SHIFT (0U)
/*! dc_removal_k - DC Removal HPF K setting
 *  0b00..HPF cutoff frequency is 7.46 Hz (4 x 48kHz sampling freq)
 *  0b01..HPF cutoff frequency is 3.73 Hz (4 x 48kHz sampling freq)
 *  0b10..HPF cutoff frequency is 1.86 Hz (4 x 48kHz sampling freq)
 *  0b11..HPF cutoff frequency is 0.93 Hz (4 x 48kHz sampling freq)
 */
#define ADSS_DEC_DECMIXCH_CFG_DC_REMOVAL_K(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECMIXCH_CFG_DC_REMOVAL_K_SHIFT)) & ADSS_DEC_DECMIXCH_CFG_DC_REMOVAL_K_MASK)

#define ADSS_DEC_DECMIXCH_CFG_DC_REMOVAL_BYPASS_MASK (0x4U)
#define ADSS_DEC_DECMIXCH_CFG_DC_REMOVAL_BYPASS_SHIFT (2U)
/*! dc_removal_bypass - If set at '1' , the DC-removal HPF filter is switched off and fully bypass for the decimation channel */
#define ADSS_DEC_DECMIXCH_CFG_DC_REMOVAL_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECMIXCH_CFG_DC_REMOVAL_BYPASS_SHIFT)) & ADSS_DEC_DECMIXCH_CFG_DC_REMOVAL_BYPASS_MASK)

#define ADSS_DEC_DECMIXCH_CFG_SR_SEL_MASK        (0x18U)
#define ADSS_DEC_DECMIXCH_CFG_SR_SEL_SHIFT       (3U)
/*! sr_sel - Sample-rate select for HSI output of low latency channel 2
 *  0b00..Select Fs output to HSI
 *  0b01..Select 2.Fs output to HSI
 *  0b10..Select 4.Fs output to HSI
 *  0b11..Select 8.Fs output to HSI
 */
#define ADSS_DEC_DECMIXCH_CFG_SR_SEL(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECMIXCH_CFG_SR_SEL_SHIFT)) & ADSS_DEC_DECMIXCH_CFG_SR_SEL_MASK)

#define ADSS_DEC_DECMIXCH_CFG_MIC_SEL_MASK       (0x1E0U)
#define ADSS_DEC_DECMIXCH_CFG_MIC_SEL_SHIFT      (5U)
/*! mic_sel - Microphone input select for decimation channels which can take either DMIC or AMIC inputs
 *  0b0000..Selects AMIC1
 *  0b0001..Selects AMIC2
 *  0b0010..Selects AMIC3
 *  0b1000..Selects DMIC_L1 (data received during LOW clock period)
 *  0b1001..Selects DMIC_H1 (data received during HIGH clock period)
 *  0b1010..Selects DMIC_L2 (data received during LOW clock period)
 *  0b1011..Selects DMIC_H2 (data received during HIGH clock period)
 *  0b1100..Selects DMIC_L3 (data received during LOW clock period)
 *  0b1101..Selects DMIC_H3 (data received during HIGH clock period)
 *  0b1110..Selects DMIC_L4 (data received during LOW clock period)
 *  0b1111..Selects DMIC_H4 (data received during HIGH clock period)
 */
#define ADSS_DEC_DECMIXCH_CFG_MIC_SEL(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECMIXCH_CFG_MIC_SEL_SHIFT)) & ADSS_DEC_DECMIXCH_CFG_MIC_SEL_MASK)
/*! @} */

/*! @name DECLOWLATENCYCH_CFG - Configuration for the Low Latency Feed Forward and Feedback Channels */
/*! @{ */

#define ADSS_DEC_DECLOWLATENCYCH_CFG_DC_REMOVAL_K_MASK (0x3U)
#define ADSS_DEC_DECLOWLATENCYCH_CFG_DC_REMOVAL_K_SHIFT (0U)
/*! dc_removal_k - DC Removal HPF K setting for Low Latency Decimation feed-forward channel.
 *  0b00..df
 *  0b01..HPF cutoff frequency is 7.46 Hz (8 x 48kHz sampling freq)
 *  0b10..HPF cutoff frequency is 3.73 Hz (8 x 48kHz sampling freq)
 *  0b11..HPF cutoff frequency is 1.86 Hz (8 x 48kHz sampling freq)
 */
#define ADSS_DEC_DECLOWLATENCYCH_CFG_DC_REMOVAL_K(x) (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECLOWLATENCYCH_CFG_DC_REMOVAL_K_SHIFT)) & ADSS_DEC_DECLOWLATENCYCH_CFG_DC_REMOVAL_K_MASK)

#define ADSS_DEC_DECLOWLATENCYCH_CFG_DC_REMOVAL_BYPASS_MASK (0x4U)
#define ADSS_DEC_DECLOWLATENCYCH_CFG_DC_REMOVAL_BYPASS_SHIFT (2U)
/*! dc_removal_bypass - If set at '1' , the DC-removal HPF filter is switched off and fully bypass for the decimation channel */
#define ADSS_DEC_DECLOWLATENCYCH_CFG_DC_REMOVAL_BYPASS(x) (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECLOWLATENCYCH_CFG_DC_REMOVAL_BYPASS_SHIFT)) & ADSS_DEC_DECLOWLATENCYCH_CFG_DC_REMOVAL_BYPASS_MASK)

#define ADSS_DEC_DECLOWLATENCYCH_CFG_MIC_SEL_MASK (0x1E0U)
#define ADSS_DEC_DECLOWLATENCYCH_CFG_MIC_SEL_SHIFT (5U)
/*! mic_sel - Microphone input select for the 2 Low Latency Noise Canceling decimation channels
 *  0b0000..Selects AMIC1
 *  0b0001..Selects AMIC2
 *  0b0010..Selects AMIC3
 *  0b1000..Selects DMIC_L1 (data received during LOW clock period)
 *  0b1001..Selects DMIC_H1 (data received during HIGH clock period)
 *  0b1010..Selects DMIC_L2 (data received during LOW clock period)
 *  0b1011..Selects DMIC_H2 (data received during HIGH clock period)
 *  0b1100..Selects DMIC_L3 (data received during LOW clock period)
 *  0b1101..Selects DMIC_H3 (data received during HIGH clock period)
 *  0b1110..Selects DMIC_L4 (data received during LOW clock period)
 *  0b1111..Selects DMIC_H4 (data received during HIGH clock period)
 */
#define ADSS_DEC_DECLOWLATENCYCH_CFG_MIC_SEL(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECLOWLATENCYCH_CFG_MIC_SEL_SHIFT)) & ADSS_DEC_DECLOWLATENCYCH_CFG_MIC_SEL_MASK)
/*! @} */

/*! @name DECCH_ENABLE - Enable of decimation channels */
/*! @{ */

#define ADSS_DEC_DECCH_ENABLE_CH_DMIC0_ENABLE_MASK (0x1U)
#define ADSS_DEC_DECCH_ENABLE_CH_DMIC0_ENABLE_SHIFT (0U)
/*! ch_dmic0_enable - Enable of dmic decimation filter chain 0
 *  0b0..Disable the decimation channel
 *  0b1..Enable the decimation channel
 */
#define ADSS_DEC_DECCH_ENABLE_CH_DMIC0_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_ENABLE_CH_DMIC0_ENABLE_SHIFT)) & ADSS_DEC_DECCH_ENABLE_CH_DMIC0_ENABLE_MASK)

#define ADSS_DEC_DECCH_ENABLE_CH_DMIC1_ENABLE_MASK (0x2U)
#define ADSS_DEC_DECCH_ENABLE_CH_DMIC1_ENABLE_SHIFT (1U)
/*! ch_dmic1_enable - Enable of dmic decimation filter chain 1
 *  0b0..Disable the decimation channel
 *  0b1..Enable the decimation channel
 */
#define ADSS_DEC_DECCH_ENABLE_CH_DMIC1_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_ENABLE_CH_DMIC1_ENABLE_SHIFT)) & ADSS_DEC_DECCH_ENABLE_CH_DMIC1_ENABLE_MASK)

#define ADSS_DEC_DECCH_ENABLE_CH_DMIC2_ENABLE_MASK (0x4U)
#define ADSS_DEC_DECCH_ENABLE_CH_DMIC2_ENABLE_SHIFT (2U)
/*! ch_dmic2_enable - Enable of dmic decimation filter chain 2
 *  0b0..Disable the decimation channel
 *  0b1..Enable the decimation channel
 */
#define ADSS_DEC_DECCH_ENABLE_CH_DMIC2_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_ENABLE_CH_DMIC2_ENABLE_SHIFT)) & ADSS_DEC_DECCH_ENABLE_CH_DMIC2_ENABLE_MASK)

#define ADSS_DEC_DECCH_ENABLE_CH_DMIC3_ENABLE_MASK (0x8U)
#define ADSS_DEC_DECCH_ENABLE_CH_DMIC3_ENABLE_SHIFT (3U)
/*! ch_dmic3_enable - Enable of dmic decimation filter chain 3
 *  0b0..Disable the decimation channel
 *  0b1..Enable the decimation channel
 */
#define ADSS_DEC_DECCH_ENABLE_CH_DMIC3_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_ENABLE_CH_DMIC3_ENABLE_SHIFT)) & ADSS_DEC_DECCH_ENABLE_CH_DMIC3_ENABLE_MASK)

#define ADSS_DEC_DECCH_ENABLE_CH_MIX0_ENABLE_MASK (0x10U)
#define ADSS_DEC_DECCH_ENABLE_CH_MIX0_ENABLE_SHIFT (4U)
/*! ch_mix0_enable - Enable of mix decimation filter chain 0
 *  0b0..Disable the decimation channel
 *  0b1..Enable the decimation channel
 */
#define ADSS_DEC_DECCH_ENABLE_CH_MIX0_ENABLE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_ENABLE_CH_MIX0_ENABLE_SHIFT)) & ADSS_DEC_DECCH_ENABLE_CH_MIX0_ENABLE_MASK)

#define ADSS_DEC_DECCH_ENABLE_CH_MIX1_ENABLE_MASK (0x20U)
#define ADSS_DEC_DECCH_ENABLE_CH_MIX1_ENABLE_SHIFT (5U)
/*! ch_mix1_enable - Enable of mix decimation filter chain 1
 *  0b0..Disable the decimation channel
 *  0b1..Enable the decimation channel
 */
#define ADSS_DEC_DECCH_ENABLE_CH_MIX1_ENABLE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_ENABLE_CH_MIX1_ENABLE_SHIFT)) & ADSS_DEC_DECCH_ENABLE_CH_MIX1_ENABLE_MASK)

#define ADSS_DEC_DECCH_ENABLE_CH_MIX2_ENABLE_MASK (0x40U)
#define ADSS_DEC_DECCH_ENABLE_CH_MIX2_ENABLE_SHIFT (6U)
/*! ch_mix2_enable - Enable of mix decimation filter chain 2
 *  0b0..Disable the decimation channel
 *  0b1..Enable the decimation channel
 */
#define ADSS_DEC_DECCH_ENABLE_CH_MIX2_ENABLE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_ENABLE_CH_MIX2_ENABLE_SHIFT)) & ADSS_DEC_DECCH_ENABLE_CH_MIX2_ENABLE_MASK)

#define ADSS_DEC_DECCH_ENABLE_CH_MIX3_ENABLE_MASK (0x80U)
#define ADSS_DEC_DECCH_ENABLE_CH_MIX3_ENABLE_SHIFT (7U)
/*! ch_mix3_enable - Enable of mix decimation filter chain 3
 *  0b0..Disable the decimation channel
 *  0b1..Enable the decimation channel
 */
#define ADSS_DEC_DECCH_ENABLE_CH_MIX3_ENABLE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_ENABLE_CH_MIX3_ENABLE_SHIFT)) & ADSS_DEC_DECCH_ENABLE_CH_MIX3_ENABLE_MASK)

#define ADSS_DEC_DECCH_ENABLE_CH_MIX4_ENABLE_MASK (0x100U)
#define ADSS_DEC_DECCH_ENABLE_CH_MIX4_ENABLE_SHIFT (8U)
/*! ch_mix4_enable - Enable of mix decimation filter chain 4
 *  0b0..Disable the decimation channel
 *  0b1..Enable the decimation channel
 */
#define ADSS_DEC_DECCH_ENABLE_CH_MIX4_ENABLE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_ENABLE_CH_MIX4_ENABLE_SHIFT)) & ADSS_DEC_DECCH_ENABLE_CH_MIX4_ENABLE_MASK)

#define ADSS_DEC_DECCH_ENABLE_CH_MIX5_ENABLE_MASK (0x200U)
#define ADSS_DEC_DECCH_ENABLE_CH_MIX5_ENABLE_SHIFT (9U)
/*! ch_mix5_enable - Enable of mix decimation filter chain 5
 *  0b0..Disable the decimation channel
 *  0b1..Enable the decimation channel
 */
#define ADSS_DEC_DECCH_ENABLE_CH_MIX5_ENABLE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_ENABLE_CH_MIX5_ENABLE_SHIFT)) & ADSS_DEC_DECCH_ENABLE_CH_MIX5_ENABLE_MASK)

#define ADSS_DEC_DECCH_ENABLE_CH_MIX6_ENABLE_MASK (0x400U)
#define ADSS_DEC_DECCH_ENABLE_CH_MIX6_ENABLE_SHIFT (10U)
/*! ch_mix6_enable - Enable of mix decimation filter chain 6
 *  0b0..Disable the decimation channel
 *  0b1..Enable the decimation channel
 */
#define ADSS_DEC_DECCH_ENABLE_CH_MIX6_ENABLE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_ENABLE_CH_MIX6_ENABLE_SHIFT)) & ADSS_DEC_DECCH_ENABLE_CH_MIX6_ENABLE_MASK)

#define ADSS_DEC_DECCH_ENABLE_CH_FF_ENABLE_MASK  (0x800U)
#define ADSS_DEC_DECCH_ENABLE_CH_FF_ENABLE_SHIFT (11U)
/*! ch_ff_enable - Enable of Low Latency Feed-forward decimation filter chain
 *  0b0..Disable the decimation channel
 *  0b1..Enable the decimation channel
 */
#define ADSS_DEC_DECCH_ENABLE_CH_FF_ENABLE(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_ENABLE_CH_FF_ENABLE_SHIFT)) & ADSS_DEC_DECCH_ENABLE_CH_FF_ENABLE_MASK)

#define ADSS_DEC_DECCH_ENABLE_CH_FB_ENABLE_MASK  (0x1000U)
#define ADSS_DEC_DECCH_ENABLE_CH_FB_ENABLE_SHIFT (12U)
/*! ch_fb_enable - Enable of Low Latency Feed-back decimation filter chain
 *  0b0..Disable the decimation channel
 *  0b1..Enable the decimation channel
 */
#define ADSS_DEC_DECCH_ENABLE_CH_FB_ENABLE(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_ENABLE_CH_FB_ENABLE_SHIFT)) & ADSS_DEC_DECCH_ENABLE_CH_FB_ENABLE_MASK)
/*! @} */

/*! @name DECCH_FIR_ENABLE - Enable of FIR filter of decimation channels */
/*! @{ */

#define ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC0_MASK  (0x1U)
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC0_SHIFT (0U)
/*! ch_dmic0 - Enable of FIR filter of dmic decimation filter chain 0
 *  0b0..Disable the FIR filter of decimation channel
 *  0b1..Enable the FIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC0(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC0_SHIFT)) & ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC0_MASK)

#define ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC1_MASK  (0x2U)
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC1_SHIFT (1U)
/*! ch_dmic1 - Enable of FIR filter of dmic decimation filter chain 1
 *  0b0..Disable the FIR filter of decimation channel
 *  0b1..Enable the FIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC1(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC1_SHIFT)) & ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC1_MASK)

#define ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC2_MASK  (0x4U)
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC2_SHIFT (2U)
/*! ch_dmic2 - Enable of FIR filter of dmic decimation filter chain 2
 *  0b0..Disable the FIR filter of decimation channel
 *  0b1..Enable the FIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC2(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC2_SHIFT)) & ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC2_MASK)

#define ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC3_MASK  (0x8U)
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC3_SHIFT (3U)
/*! ch_dmic3 - Enable of FIR filter of dmic decimation filter chain 3
 *  0b0..Disable the FIR filter of decimation channel
 *  0b1..Enable the FIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC3(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC3_SHIFT)) & ADSS_DEC_DECCH_FIR_ENABLE_CH_DMIC3_MASK)

#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX0_MASK   (0x10U)
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX0_SHIFT  (4U)
/*! ch_mix0 - Enable of FIR filter of mix decimation filter chain 0
 *  0b0..Disable the FIR filter of decimation channel
 *  0b1..Enable the FIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX0(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX0_SHIFT)) & ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX0_MASK)

#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX1_MASK   (0x20U)
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX1_SHIFT  (5U)
/*! ch_mix1 - Enable of FIR filter of mix decimation filter chain 1
 *  0b0..Disable the FIR filter of decimation channel
 *  0b1..Enable the FIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX1(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX1_SHIFT)) & ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX1_MASK)

#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX2_MASK   (0x40U)
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX2_SHIFT  (6U)
/*! ch_mix2 - Enable of FIR filter of mix decimation filter chain 2
 *  0b0..Disable the FIR filter of decimation channel
 *  0b1..Enable the FIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX2(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX2_SHIFT)) & ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX2_MASK)

#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX3_MASK   (0x80U)
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX3_SHIFT  (7U)
/*! ch_mix3 - Enable of FIR filter of mix decimation filter chain 3
 *  0b0..Disable the FIR filter of decimation channel
 *  0b1..Enable the FIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX3(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX3_SHIFT)) & ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX3_MASK)

#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX4_MASK   (0x100U)
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX4_SHIFT  (8U)
/*! ch_mix4 - Enable of FIR filter of mix decimation filter chain 4
 *  0b0..Disable the FIR filter of decimation channel
 *  0b1..Enable the FIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX4(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX4_SHIFT)) & ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX4_MASK)

#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX5_MASK   (0x200U)
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX5_SHIFT  (9U)
/*! ch_mix5 - Enable of FIR filter of mix decimation filter chain 5
 *  0b0..Disable the FIR filter of decimation channel
 *  0b1..Enable the FIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX5(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX5_SHIFT)) & ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX5_MASK)

#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX6_MASK   (0x400U)
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX6_SHIFT  (10U)
/*! ch_mix6 - Enable of FIR filter of mix decimation filter chain 6
 *  0b0..Disable the FIR filter of decimation channel
 *  0b1..Enable the FIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX6(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX6_SHIFT)) & ADSS_DEC_DECCH_FIR_ENABLE_CH_MIX6_MASK)
/*! @} */

/*! @name DECCH_IIR_ENABLE - Enable of IIR filter of decimation channels */
/*! @{ */

#define ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC0_MASK  (0x1U)
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC0_SHIFT (0U)
/*! ch_dmic0 - Enable of IIR filter of dmic decimation filter chain 0
 *  0b0..Disable the IIR filter of decimation channel
 *  0b1..Enable the IIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC0(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC0_SHIFT)) & ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC0_MASK)

#define ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC1_MASK  (0x2U)
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC1_SHIFT (1U)
/*! ch_dmic1 - Enable of IIR filter of dmic decimation filter chain 1
 *  0b0..Disable the IIR filter of decimation channel
 *  0b1..Enable the IIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC1(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC1_SHIFT)) & ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC1_MASK)

#define ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC2_MASK  (0x4U)
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC2_SHIFT (2U)
/*! ch_dmic2 - Enable of IIR filter of dmic decimation filter chain 2
 *  0b0..Disable the IIR filter of decimation channel
 *  0b1..Enable the IIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC2(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC2_SHIFT)) & ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC2_MASK)

#define ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC3_MASK  (0x8U)
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC3_SHIFT (3U)
/*! ch_dmic3 - Enable of IIR filter of dmic decimation filter chain 3
 *  0b0..Disable the IIR filter of decimation channel
 *  0b1..Enable the IIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC3(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC3_SHIFT)) & ADSS_DEC_DECCH_IIR_ENABLE_CH_DMIC3_MASK)

#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX0_MASK   (0x10U)
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX0_SHIFT  (4U)
/*! ch_mix0 - Enable of IIR filter of mix decimation filter chain 0
 *  0b0..Disable the IIR filter of decimation channel
 *  0b1..Enable the IIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX0(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX0_SHIFT)) & ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX0_MASK)

#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX1_MASK   (0x20U)
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX1_SHIFT  (5U)
/*! ch_mix1 - Enable of IIR filter of mix decimation filter chain 1
 *  0b0..Disable the IIR filter of decimation channel
 *  0b1..Enable the IIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX1(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX1_SHIFT)) & ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX1_MASK)

#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX2_MASK   (0x40U)
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX2_SHIFT  (6U)
/*! ch_mix2 - Enable of IIR filter of mix decimation filter chain 2
 *  0b0..Disable the IIR filter of decimation channel
 *  0b1..Enable the IIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX2(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX2_SHIFT)) & ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX2_MASK)

#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX3_MASK   (0x80U)
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX3_SHIFT  (7U)
/*! ch_mix3 - Enable of IIR filter of mix decimation filter chain 3
 *  0b0..Disable the IIR filter of decimation channel
 *  0b1..Enable the IIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX3(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX3_SHIFT)) & ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX3_MASK)

#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX4_MASK   (0x100U)
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX4_SHIFT  (8U)
/*! ch_mix4 - Enable of IIR filter of mix decimation filter chain 4
 *  0b0..Disable the IIR filter of decimation channel
 *  0b1..Enable the IIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX4(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX4_SHIFT)) & ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX4_MASK)

#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX5_MASK   (0x200U)
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX5_SHIFT  (9U)
/*! ch_mix5 - Enable of IIR filter of mix decimation filter chain 5
 *  0b0..Disable the IIR filter of decimation channel
 *  0b1..Enable the IIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX5(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX5_SHIFT)) & ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX5_MASK)

#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX6_MASK   (0x400U)
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX6_SHIFT  (10U)
/*! ch_mix6 - Enable of IIR filter of mix decimation filter chain 6
 *  0b0..Disable the IIR filter of decimation channel
 *  0b1..Enable the IIR filter of decimation channel
 */
#define ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX6(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX6_SHIFT)) & ADSS_DEC_DECCH_IIR_ENABLE_CH_MIX6_MASK)
/*! @} */

/*! @name DECCH_OBS - Observer register for the decimator MIC channel */
/*! @{ */

#define ADSS_DEC_DECCH_OBS_DC_REMOVAL_OFFSET_MASK (0xFFFFFFU)
#define ADSS_DEC_DECCH_OBS_DC_REMOVAL_OFFSET_SHIFT (0U)
/*! dc_removal_offset - Current value of the LF (DC) removal value for the Mic Channel */
#define ADSS_DEC_DECCH_OBS_DC_REMOVAL_OFFSET(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DECCH_OBS_DC_REMOVAL_OFFSET_SHIFT)) & ADSS_DEC_DECCH_OBS_DC_REMOVAL_OFFSET_MASK)
/*! @} */

/*! @name CFG - Global configuration on the DC correction loop */
/*! @{ */

#define ADSS_DEC_CFG_GAIN_MASK                   (0xFFU)
#define ADSS_DEC_CFG_GAIN_SHIFT                  (0U)
/*! gain - 50 -- programmable DC-Loop gain; unsigned; range 10..200 */
#define ADSS_DEC_CFG_GAIN(x)                     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_CFG_GAIN_SHIFT)) & ADSS_DEC_CFG_GAIN_MASK)

#define ADSS_DEC_CFG_RESET_PHASE_DURATION_MASK   (0xFF00U)
#define ADSS_DEC_CFG_RESET_PHASE_DURATION_SHIFT  (8U)
/*! reset_phase_duration - 12 (0.512 sec@fs=24kHz) -- reset-phase duration; unsigned; lsb=1/fs*1024 sec. (range 0 .. 5.45 sec (@fs=48kHz)) */
#define ADSS_DEC_CFG_RESET_PHASE_DURATION(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_CFG_RESET_PHASE_DURATION_SHIFT)) & ADSS_DEC_CFG_RESET_PHASE_DURATION_MASK)

#define ADSS_DEC_CFG_DC_LOOP_T_INITIAL_MASK      (0xFF0000U)
#define ADSS_DEC_CFG_DC_LOOP_T_INITIAL_SHIFT     (16U)
/*! dc_loop_t_initial - 24 (1.024 sec @fs=24kHz) -- init-phase duration; unsigned; lsb=1/fs*1024
 *    sec. (range 0 .. 5.44 sec (@fs=48kHz), resolution (64ms (@fs=16kHz) .. 21.3 ms (@fs=48kHz)))
 */
#define ADSS_DEC_CFG_DC_LOOP_T_INITIAL(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_CFG_DC_LOOP_T_INITIAL_SHIFT)) & ADSS_DEC_CFG_DC_LOOP_T_INITIAL_MASK)

#define ADSS_DEC_CFG_RESET_ENABLE_MASK           (0x1000000U)
#define ADSS_DEC_CFG_RESET_ENABLE_SHIFT          (24U)
/*! reset_enable - Enable/disable the reset behavior of DC control loop
 *  0b0..Disable reset behavior
 *  0b1..Enable reset behavior
 */
#define ADSS_DEC_CFG_RESET_ENABLE(x)             (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_CFG_RESET_ENABLE_SHIFT)) & ADSS_DEC_CFG_RESET_ENABLE_MASK)

#define ADSS_DEC_CFG_ENABLE_MASK                 (0x2000000U)
#define ADSS_DEC_CFG_ENABLE_SHIFT                (25U)
/*! enable - Enable of DC correction loop
 *  0b0..Disable DC correction loop
 *  0b1..Enable DC correction loop
 */
#define ADSS_DEC_CFG_ENABLE(x)                   (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_CFG_ENABLE_SHIFT)) & ADSS_DEC_CFG_ENABLE_MASK)
/*! @} */

/* The count of ADSS_DEC_CFG */
#define ADSS_DEC_CFG_COUNT                       (3U)

/*! @name DC_TARGET - DC target register_ */
/*! @{ */

#define ADSS_DEC_DC_TARGET_FX_MOD_DC_MASK        (0xFFFFFFU)
#define ADSS_DEC_DC_TARGET_FX_MOD_DC_SHIFT       (0U)
/*! fx_mod_dc - 2013266 round(0.12 * 2**24) DC_target_fx_mod_DC = round(DC_target * 2^fracQ_mod_DC); */
#define ADSS_DEC_DC_TARGET_FX_MOD_DC(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_DC_TARGET_FX_MOD_DC_SHIFT)) & ADSS_DEC_DC_TARGET_FX_MOD_DC_MASK)
/*! @} */

/* The count of ADSS_DEC_DC_TARGET */
#define ADSS_DEC_DC_TARGET_COUNT                 (3U)

/*! @name LPF - Configuration on Sigma delta modulation noise shaper */
/*! @{ */

#define ADSS_DEC_LPF_LPF2_BSHIFT_MASK            (0x3FU)
#define ADSS_DEC_LPF_LPF2_BSHIFT_SHIFT           (0U)
/*! lpf2_bshift - LPF2 coefficient */
#define ADSS_DEC_LPF_LPF2_BSHIFT(x)              (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_LPF_LPF2_BSHIFT_SHIFT)) & ADSS_DEC_LPF_LPF2_BSHIFT_MASK)

#define ADSS_DEC_LPF_LPF1_BSHIFT_MASK            (0xFC0U)
#define ADSS_DEC_LPF_LPF1_BSHIFT_SHIFT           (6U)
/*! lpf1_bshift - LPF1 coefficient during normal operation */
#define ADSS_DEC_LPF_LPF1_BSHIFT(x)              (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_LPF_LPF1_BSHIFT_SHIFT)) & ADSS_DEC_LPF_LPF1_BSHIFT_MASK)

#define ADSS_DEC_LPF_LPF1_BSHIFT_INIT_MASK       (0x3F000U)
#define ADSS_DEC_LPF_LPF1_BSHIFT_INIT_SHIFT      (12U)
/*! lpf1_bshift_init - LPF1 coefficient during init-phase */
#define ADSS_DEC_LPF_LPF1_BSHIFT_INIT(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_LPF_LPF1_BSHIFT_INIT_SHIFT)) & ADSS_DEC_LPF_LPF1_BSHIFT_INIT_MASK)

#define ADSS_DEC_LPF_LPF_BYPASS_MASK             (0x40000U)
#define ADSS_DEC_LPF_LPF_BYPASS_SHIFT            (18U)
/*! lpf_bypass - Configuration on the usage of LPF as SDM input
 *  0b0..using LPF to generage SDM input.
 *  0b1..bypass the LPF, and only using the SDM.
 */
#define ADSS_DEC_LPF_LPF_BYPASS(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_LPF_LPF_BYPASS_SHIFT)) & ADSS_DEC_LPF_LPF_BYPASS_MASK)
/*! @} */

/* The count of ADSS_DEC_LPF */
#define ADSS_DEC_LPF_COUNT                       (3U)

/*! @name SDM - Configuration on Sigma delta modulation noise shaper */
/*! @{ */

#define ADSS_DEC_SDM_SDM_IN_MASK                 (0x3FFFFU)
#define ADSS_DEC_SDM_SDM_IN_SHIFT                (0U)
/*! sdm_in - when LPF is bypassed, using this value as SDM input. signed range -32.0~31.0 */
#define ADSS_DEC_SDM_SDM_IN(x)                   (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_SDM_SDM_IN_SHIFT)) & ADSS_DEC_SDM_SDM_IN_MASK)

#define ADSS_DEC_SDM_NS_ORDER_MASK               (0xC0000U)
#define ADSS_DEC_SDM_NS_ORDER_SHIFT              (18U)
/*! ns_order - Configuration on the SDM noise shaper order
 *  0b00..SDM is bypassed
 *  0b01..Use 1st order SDM
 *  0b10..Use 2nd order SDM
 *  0b11..Use 3rd order SDM
 */
#define ADSS_DEC_SDM_NS_ORDER(x)                 (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_SDM_NS_ORDER_SHIFT)) & ADSS_DEC_SDM_NS_ORDER_MASK)

#define ADSS_DEC_SDM_DITHER_MAG_MASK             (0x300000U)
#define ADSS_DEC_SDM_DITHER_MAG_SHIFT            (20U)
/*! dither_mag - Configuration on the dither magnitude of the SDM noise shaper order
 *  0b00..No dither
 *  0b01..dither magnitude 1
 *  0b10..dither magnitude 5
 *  0b11..dither magnitude 9
 */
#define ADSS_DEC_SDM_DITHER_MAG(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_SDM_DITHER_MAG_SHIFT)) & ADSS_DEC_SDM_DITHER_MAG_MASK)

#define ADSS_DEC_SDM_DITHER_TYPE_MASK            (0xC00000U)
#define ADSS_DEC_SDM_DITHER_TYPE_SHIFT           (22U)
/*! dither_type - Configuration on the dither type of the SDM noise shaper order
 *  0b00..No dither
 *  0b01..fixed dither of 1LSB
 *  0b10..uniform distribute 0 or 1
 *  0b11..uniform distribute -1, 0 or 1
 */
#define ADSS_DEC_SDM_DITHER_TYPE(x)              (((uint32_t)(((uint32_t)(x)) << ADSS_DEC_SDM_DITHER_TYPE_SHIFT)) & ADSS_DEC_SDM_DITHER_TYPE_MASK)
/*! @} */

/* The count of ADSS_DEC_SDM */
#define ADSS_DEC_SDM_COUNT                       (3U)


/*!
 * @}
 */ /* end of group ADSS_DEC_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_DEC_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_DEC_H_ */

