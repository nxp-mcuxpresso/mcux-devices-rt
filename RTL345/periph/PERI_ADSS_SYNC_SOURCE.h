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
**         CMSIS Peripheral Access Layer for ADSS_SYNC_SOURCE
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
 * @file PERI_ADSS_SYNC_SOURCE.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_SYNC_SOURCE
 *
 * CMSIS Peripheral Access Layer for ADSS_SYNC_SOURCE
 */

#if !defined(PERI_ADSS_SYNC_SOURCE_H_)
#define PERI_ADSS_SYNC_SOURCE_H_                 /**< Symbol preventing repeated inclusion */

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
   -- ADSS_SYNC_SOURCE Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_SYNC_SOURCE_Peripheral_Access_Layer ADSS_SYNC_SOURCE Peripheral Access Layer
 * @{
 */

/** ADSS_SYNC_SOURCE - Size of Registers Arrays */
#define ADSS_SYNC_SOURCE_SYNCSOURCESYNCCFG_COUNT  8u
#define ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_COUNT     2u
#define ADSS_SYNC_SOURCE_DSPCLKSTEALCURRENT_COUNT 2u
#define ADSS_SYNC_SOURCE_DSPCLKSTEALNEXT_COUNT    2u

/** ADSS_SYNC_SOURCE - Register Layout Typedef */
typedef struct {
  __IO uint32_t SYNCSOURCECFG;                     /**< Configuration register of the SyncSource module, offset: 0x0 */
  __IO uint32_t SYNCSOURCESYNCCFG[ADSS_SYNC_SOURCE_SYNCSOURCESYNCCFG_COUNT]; /**< Configuration register of the Sync event generation, array offset: 0x4, array step: 0x4 */
  __IO uint32_t GLOBALSTEALCFG;                    /**< Configuration of the global stealing, offset: 0x24 */
  __IO uint32_t DSPCLKSTEALCFG[ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_COUNT]; /**< Clock stealing configuration for one DSP, array offset: 0x28, array step: 0x4 */
  __IO uint32_t DSPCLKSTEALCURRENT[ADSS_SYNC_SOURCE_DSPCLKSTEALCURRENT_COUNT]; /**< Current number of cycles to be stolen for one DSP, array offset: 0x30, array step: 0x4 */
  __IO uint32_t DSPCLKSTEALNEXT[ADSS_SYNC_SOURCE_DSPCLKSTEALNEXT_COUNT]; /**< Number of cycles to be stolen for the DSP after next event, array offset: 0x38, array step: 0x4 */
       uint8_t RESERVED_0[4];
  __IO uint32_t SYNCSOURCEPROTECTION;              /**< Protection of SyncSource configuration, offset: 0x44 */
  __I  uint32_t SYNCSOURCEPROTECTIONCOUNTER;       /**< SyncSource protection counter value, offset: 0x48 */
  __IO uint32_t SYNCSOURCEHWEVENTCFG0;             /**< SyncSource HW event configuration register 0 (fs1, 4fs1, 8fs1, 16fs1, sync0, sync1, sync2), offset: 0x4C */
  __IO uint32_t SYNCSOURCEHWEVENTCFG1;             /**< SyncSource HW event configuration register 1 (sync3, sync4, sync5, sync6, sync7), offset: 0x50 */
  __IO uint32_t SYNCSOURCEHWEVENTENABLECFG;        /**< Per-strobe HW event enable configuration register. Each bit enables HW timing event alignment for the corresponding strobe channel., offset: 0x54 */
} ADSS_SYNC_SOURCE_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_SYNC_SOURCE Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_SYNC_SOURCE_Register_Masks ADSS_SYNC_SOURCE Register Masks
 * @{
 */

/*! @name SYNCSOURCECFG - Configuration register of the SyncSource module */
/*! @{ */

#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1_STROBE_EN_MASK (0x1U)
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1_STROBE_EN_SHIFT (0U)
/*! fs1_strobe_en - Enables the fs1 strobe generation */
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1_STROBE_EN(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1_STROBE_EN_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1_STROBE_EN_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1X4_STROBE_EN_MASK (0x2U)
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1X4_STROBE_EN_SHIFT (1U)
/*! fs1x4_strobe_en - Enables the 4fs1 strobe generation */
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1X4_STROBE_EN(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1X4_STROBE_EN_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1X4_STROBE_EN_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1X8_STROBE_EN_MASK (0x4U)
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1X8_STROBE_EN_SHIFT (2U)
/*! fs1x8_strobe_en - Enables the 8fs1 strobe generation */
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1X8_STROBE_EN(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1X8_STROBE_EN_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1X8_STROBE_EN_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1X16_STROBE_EN_MASK (0x8U)
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1X16_STROBE_EN_SHIFT (3U)
/*! fs1x16_strobe_en - Enables the 16fs1 strobe generation */
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1X16_STROBE_EN(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1X16_STROBE_EN_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCECFG_FS1X16_STROBE_EN_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FRAME_STROBE_EN_MASK (0x10U)
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FRAME_STROBE_EN_SHIFT (4U)
/*! frame_strobe_en - Enables the frame strobe generation */
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FRAME_STROBE_EN(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCECFG_FRAME_STROBE_EN_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCECFG_FRAME_STROBE_EN_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FRAME_LEN_SEL_MASK (0x60U)
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FRAME_LEN_SEL_SHIFT (5U)
/*! frame_len_sel - frame length selection bit .
 *  0b00..frame strobe is (Fs1)/8
 *  0b01..frame strobe is (Fs1)/16
 *  0b10..frame strobe is (Fs1)/32
 *  0b11..frame strobe is (Fs1)/64
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FRAME_LEN_SEL(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCECFG_FRAME_LEN_SEL_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCECFG_FRAME_LEN_SEL_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC0_EN_MASK (0x80U)
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC0_EN_SHIFT (7U)
/*! sync0_en - Enables Sync0 event generation. */
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC0_EN(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC0_EN_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC0_EN_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC1_EN_MASK (0x100U)
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC1_EN_SHIFT (8U)
/*! sync1_en - Enables Sync1 event generation. */
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC1_EN(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC1_EN_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC1_EN_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC2_EN_MASK (0x200U)
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC2_EN_SHIFT (9U)
/*! sync2_en - Enables Sync2 event generation. */
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC2_EN(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC2_EN_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC2_EN_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC3_EN_MASK (0x400U)
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC3_EN_SHIFT (10U)
/*! sync3_en - Enables Sync3 event generation. */
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC3_EN(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC3_EN_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC3_EN_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC4_EN_MASK (0x800U)
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC4_EN_SHIFT (11U)
/*! sync4_en - Enables Sync4 event generation. */
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC4_EN(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC4_EN_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC4_EN_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC5_EN_MASK (0x1000U)
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC5_EN_SHIFT (12U)
/*! sync5_en - Enables Sync5 event generation. */
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC5_EN(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC5_EN_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC5_EN_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC6_EN_MASK (0x2000U)
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC6_EN_SHIFT (13U)
/*! sync6_en - Enables Sync6 event generation. */
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC6_EN(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC6_EN_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC6_EN_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC7_EN_MASK (0x4000U)
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC7_EN_SHIFT (14U)
/*! sync7_en - Enables Sync7 event generation. */
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC7_EN(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC7_EN_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCECFG_SYNC7_EN_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_STROBE_CNT_FREE_RUNNING_MASK (0x8000U)
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_STROBE_CNT_FREE_RUNNING_SHIFT (15U)
/*! strobe_cnt_free_running - Enables free running mode for strobe counter. When enabled, the
 *    counter responsible to generate the Fs1, frame, and sync strobes stays (free) running when the
 *    generation for all strobes is disabled. This allows the system synchronization is not broken when
 *    any of the strobes is re-enabled again.
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_STROBE_CNT_FREE_RUNNING(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCECFG_STROBE_CNT_FREE_RUNNING_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCECFG_STROBE_CNT_FREE_RUNNING_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FRAME_STROBE_CNT_FREE_RUNNING_MASK (0x10000U)
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FRAME_STROBE_CNT_FREE_RUNNING_SHIFT (16U)
/*! frame_strobe_cnt_free_running - Enables free running mode for frame strobe counter. When
 *    enabled, the counter responsible to generate the frame and sync strobes stays running even when the
 *    generation of the frame and sync strobes is disabled. This allows the system synchronization is
 *    not broken when any of the strobes is re-enabled again.
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCECFG_FRAME_STROBE_CNT_FREE_RUNNING(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCECFG_FRAME_STROBE_CNT_FREE_RUNNING_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCECFG_FRAME_STROBE_CNT_FREE_RUNNING_MASK)
/*! @} */

/*! @name SYNCSOURCESYNCCFG - Configuration register of the Sync event generation */
/*! @{ */

#define ADSS_SYNC_SOURCE_SYNCSOURCESYNCCFG_SYNC_FREQ_MASK (0xFU)
#define ADSS_SYNC_SOURCE_SYNCSOURCESYNCCFG_SYNC_FREQ_SHIFT (0U)
/*! sync_freq - The frequency of the sync strobe = (16Fs1)/2^(sync_freq).<br><br> sync_freq=0
 *    selects 16fs1 (fastest), each increment halves the frequency.<br> The slowest frequency allowed is =
 *    frame frequency.<br> - sync_freq max = 7 if frame_len_sel = 0;<br> - sync_freq max = 8 if
 *    frame_len_sel = 1;<br> - sync_freq max = 9 if frame_len_sel = 2;<br> - sync_freq max = 10 if
 *    frame_len_sel = 3;
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCESYNCCFG_SYNC_FREQ(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCESYNCCFG_SYNC_FREQ_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCESYNCCFG_SYNC_FREQ_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCESYNCCFG_SYNC_PHASE_MASK (0x1FFF0U)
#define ADSS_SYNC_SOURCE_SYNCSOURCESYNCCFG_SYNC_PHASE_SHIFT (4U)
/*! sync_phase - The phase shift of the sync strobe over the full<br> sync period. The maximum
 *    allowed is the sync period -1; with<br> sync period = (2^(sync_freq)*16).<br><br> The phase shift
 *    step is a 128Fs1 period.<br> Ex : If the sync frequency = Fs1 (sync_freq=3) and sync_phase =
 *    2,<br> the sync pulse will happen 2*128Fs1 clock cycles after Fs1 strobe.
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCESYNCCFG_SYNC_PHASE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCESYNCCFG_SYNC_PHASE_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCESYNCCFG_SYNC_PHASE_MASK)
/*! @} */

/*! @name GLOBALSTEALCFG - Configuration of the global stealing */
/*! @{ */

#define ADSS_SYNC_SOURCE_GLOBALSTEALCFG_GLOBAL_STEALING_MASK (0x1U)
#define ADSS_SYNC_SOURCE_GLOBALSTEALCFG_GLOBAL_STEALING_SHIFT (0U)
/*! global_stealing - If enabled, all the DSP clock stealers will use the same value programmed in
 *    the num_cycle_steal of the DSPClkStealCfg0. <br> The DSP1 Stealing configuration registers will
 *    be ignored
 */
#define ADSS_SYNC_SOURCE_GLOBALSTEALCFG_GLOBAL_STEALING(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_GLOBALSTEALCFG_GLOBAL_STEALING_SHIFT)) & ADSS_SYNC_SOURCE_GLOBALSTEALCFG_GLOBAL_STEALING_MASK)
/*! @} */

/*! @name DSPCLKSTEALCFG - Clock stealing configuration for one DSP */
/*! @{ */

#define ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_LFSR_SEED_MASK (0xFFU)
#define ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_LFSR_SEED_SHIFT (0U)
/*! lfsr_seed - The initial value of the LFSR used for the cycle stealer on DSP clock. 0x00 value is
 *    not allowed and will be changed by HW to 0x01
 */
#define ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_LFSR_SEED(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_LFSR_SEED_SHIFT)) & ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_LFSR_SEED_MASK)

#define ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_EVENT_SEL_MASK (0x3F00U)
#define ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_EVENT_SEL_SHIFT (8U)
/*! event_sel - Selects the event from the dsp event bus on which the clock stealing will be
 *    reinitialized. <br> Upon event detection, the LFSR is reset to the lfsr_seed value.<br> This field is
 *    valid only when free_running is 0 (set to 1 by default).
 */
#define ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_EVENT_SEL(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_EVENT_SEL_SHIFT)) & ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_EVENT_SEL_MASK)

#define ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_FREE_RUNNING_MASK (0x4000U)
#define ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_FREE_RUNNING_SHIFT (14U)
/*! free_running - When this bit is set, the event_sel field is ignored and the LFSR is free running without preloading from the lfsr seed */
#define ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_FREE_RUNNING(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_FREE_RUNNING_SHIFT)) & ADSS_SYNC_SOURCE_DSPCLKSTEALCFG_FREE_RUNNING_MASK)
/*! @} */

/*! @name DSPCLKSTEALCURRENT - Current number of cycles to be stolen for one DSP */
/*! @{ */

#define ADSS_SYNC_SOURCE_DSPCLKSTEALCURRENT_NUM_CYCLE_STEAL_MASK (0xFFU)
#define ADSS_SYNC_SOURCE_DSPCLKSTEALCURRENT_NUM_CYCLE_STEAL_SHIFT (0U)
/*! num_cycle_steal - The number of cycles to be stolen on the DSP clock over 255 cycles.<br> This
 *    value is compared to the LFSR immediately after write.<br> This field is updated by HW, means
 *    that reading from this register<br> gives the actual number of cycles stolen from the DSP
 *    (from<br> DSPClkStealCurrent or DSPClkStealNext if the register is written and an event occured).
 */
#define ADSS_SYNC_SOURCE_DSPCLKSTEALCURRENT_NUM_CYCLE_STEAL(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_DSPCLKSTEALCURRENT_NUM_CYCLE_STEAL_SHIFT)) & ADSS_SYNC_SOURCE_DSPCLKSTEALCURRENT_NUM_CYCLE_STEAL_MASK)
/*! @} */

/*! @name DSPCLKSTEALNEXT - Number of cycles to be stolen for the DSP after next event */
/*! @{ */

#define ADSS_SYNC_SOURCE_DSPCLKSTEALNEXT_NUM_CYCLE_STEAL_MASK (0xFFU)
#define ADSS_SYNC_SOURCE_DSPCLKSTEALNEXT_NUM_CYCLE_STEAL_SHIFT (0U)
/*! num_cycle_steal - The number of cycles to be stolen on the DSP clock over 255 cycles.<br> This
 *    value is compared to the LFSR after the next event selected<br> by event_sel in
 *    DSPClkStealCfg.<br> If free_running is selected on event_sel, this num_cycle_steal will be ignored.
 */
#define ADSS_SYNC_SOURCE_DSPCLKSTEALNEXT_NUM_CYCLE_STEAL(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_DSPCLKSTEALNEXT_NUM_CYCLE_STEAL_SHIFT)) & ADSS_SYNC_SOURCE_DSPCLKSTEALNEXT_NUM_CYCLE_STEAL_MASK)
/*! @} */

/*! @name SYNCSOURCEPROTECTION - Protection of SyncSource configuration */
/*! @{ */

#define ADSS_SYNC_SOURCE_SYNCSOURCEPROTECTION_ENABLE_MASK (0xFFFFFFU)
#define ADSS_SYNC_SOURCE_SYNCSOURCEPROTECTION_ENABLE_SHIFT (0U)
/*! enable - When the magic word is written to this field, write access is<br> allowed to the
 *    SyncSource IO registers.<br> When other value is written, write access to the following io registers
 *    is forbidden and will rise an io access error :<br> - SyncSourceCfg<br> -
 *    SyncSourceSyncCfg<br> - GlobalStealCfg<br> - DSPClkStealCfg<br> - DSPClkStealCurrent<br> - DSPClkStealNext<br> -
 *    SyncsourceHWEventCfg0<br> - SyncsourceHWEventCfg1<br> - SyncSourceHWEventEnableCfg<br><br>
 *    When the register is read, it returns the state of the write protection.
 *  0b000000000000000000000000..Protection is disabled
 *  0b000000000000000000000001..Protection is enabled
 *  0b010101111111101100010010..Enables write access
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCEPROTECTION_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEPROTECTION_ENABLE_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEPROTECTION_ENABLE_MASK)
/*! @} */

/*! @name SYNCSOURCEPROTECTIONCOUNTER - SyncSource protection counter value */
/*! @{ */

#define ADSS_SYNC_SOURCE_SYNCSOURCEPROTECTIONCOUNTER_VALUE_MASK (0x7U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEPROTECTIONCOUNTER_VALUE_SHIFT (0U)
/*! value - SyncSource protection counter value */
#define ADSS_SYNC_SOURCE_SYNCSOURCEPROTECTIONCOUNTER_VALUE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEPROTECTIONCOUNTER_VALUE_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEPROTECTIONCOUNTER_VALUE_MASK)
/*! @} */

/*! @name SYNCSOURCEHWEVENTCFG0 - SyncSource HW event configuration register 0 (fs1, 4fs1, 8fs1, 16fs1, sync0, sync1, sync2) */
/*! @{ */

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_FS1_STROBE_MASK (0xFU)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_FS1_STROBE_SHIFT (0U)
/*! event_sel_fs1_strobe - Maps the HW event from the ANC on which the fs1 strobe event will be generated */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_FS1_STROBE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_FS1_STROBE_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_FS1_STROBE_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_4FS1_STROBE_MASK (0xF0U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_4FS1_STROBE_SHIFT (4U)
/*! event_sel_4fs1_strobe - Maps the HW event from the ANC on which the 4fs1 strobe event will be generated */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_4FS1_STROBE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_4FS1_STROBE_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_4FS1_STROBE_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_8FS1_STROBE_MASK (0xF00U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_8FS1_STROBE_SHIFT (8U)
/*! event_sel_8fs1_strobe - Maps the HW event from the ANC on which the 8fs1 strobe event will be generated */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_8FS1_STROBE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_8FS1_STROBE_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_8FS1_STROBE_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_16FS1_STROBE_MASK (0xF000U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_16FS1_STROBE_SHIFT (12U)
/*! event_sel_16fs1_strobe - Maps the HW event from the ANC on which the 16fs1 strobe event will be generated */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_16FS1_STROBE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_16FS1_STROBE_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_16FS1_STROBE_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_SYNC0_MASK (0xF0000U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_SYNC0_SHIFT (16U)
/*! event_sel_sync0 - Maps the HW event from the ANC on which the programmable strobe sync0 event will be generated */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_SYNC0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_SYNC0_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_SYNC0_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_SYNC1_MASK (0xF00000U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_SYNC1_SHIFT (20U)
/*! event_sel_sync1 - Maps the HW event from the ANC on which the programmable strobe sync1 event will be generated */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_SYNC1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_SYNC1_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG0_EVENT_SEL_SYNC1_MASK)
/*! @} */

/*! @name SYNCSOURCEHWEVENTCFG1 - SyncSource HW event configuration register 1 (sync3, sync4, sync5, sync6, sync7) */
/*! @{ */

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC2_MASK (0xFU)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC2_SHIFT (0U)
/*! event_sel_sync2 - Maps the HW event from the ANC on which the programmable strobe sync2 event will be generated */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC2(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC2_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC2_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC3_MASK (0xF0U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC3_SHIFT (4U)
/*! event_sel_sync3 - Maps the HW event from the ANC on which the programmable strobe sync3 event will be generated */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC3(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC3_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC3_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC4_MASK (0xF00U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC4_SHIFT (8U)
/*! event_sel_sync4 - Maps the HW event from the ANC on which the programmable strobe sync4 event will be generated */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC4(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC4_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC4_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC5_MASK (0xF000U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC5_SHIFT (12U)
/*! event_sel_sync5 - Maps the HW event from the ANC on which the programmable strobe sync5 event will be generated */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC5(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC5_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC5_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC6_MASK (0xF0000U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC6_SHIFT (16U)
/*! event_sel_sync6 - Maps the HW event from the ANC on which the programmable strobe sync6 event will be generated */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC6(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC6_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC6_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC7_MASK (0xF00000U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC7_SHIFT (20U)
/*! event_sel_sync7 - Maps the HW event from the ANC on which the programmable strobe sync7 event will be generated */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC7(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC7_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTCFG1_EVENT_SEL_SYNC7_MASK)
/*! @} */

/*! @name SYNCSOURCEHWEVENTENABLECFG - Per-strobe HW event enable configuration register. Each bit enables HW timing event alignment for the corresponding strobe channel. */
/*! @{ */

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_FS1_MASK (0x1U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_FS1_SHIFT (0U)
/*! hw_event_enable_fs1 - Enables HW event alignment for fs1 strobe generation. When set, the strobe
 *    phase is locked to the first occurrence of the selected HW input event.
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_FS1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_FS1_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_FS1_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_4FS1_MASK (0x2U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_4FS1_SHIFT (1U)
/*! hw_event_enable_4fs1 - Enables HW event alignment for 4fs1 strobe generation. When set, the
 *    strobe phase is locked to the first occurrence of the selected HW input event.
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_4FS1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_4FS1_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_4FS1_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_8FS1_MASK (0x4U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_8FS1_SHIFT (2U)
/*! hw_event_enable_8fs1 - Enables HW event alignment for 8fs1 strobe generation. When set, the
 *    strobe phase is locked to the first occurrence of the selected HW input event.
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_8FS1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_8FS1_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_8FS1_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_16FS1_MASK (0x8U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_16FS1_SHIFT (3U)
/*! hw_event_enable_16fs1 - Enables HW event alignment for 16fs1 strobe generation. When set, the
 *    strobe phase is locked to the first occurrence of the selected HW input event.
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_16FS1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_16FS1_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_16FS1_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC0_MASK (0x10U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC0_SHIFT (4U)
/*! hw_event_enable_sync0 - Enables HW event alignment for sync0 strobe generation. When set, the
 *    strobe phase is locked to the first occurrence of the selected HW input event.
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC0_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC0_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC1_MASK (0x20U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC1_SHIFT (5U)
/*! hw_event_enable_sync1 - Enables HW event alignment for sync1 strobe generation. When set, the
 *    strobe phase is locked to the first occurrence of the selected HW input event.
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC1_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC1_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC2_MASK (0x40U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC2_SHIFT (6U)
/*! hw_event_enable_sync2 - Enables HW event alignment for sync2 strobe generation. When set, the
 *    strobe phase is locked to the first occurrence of the selected HW input event.
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC2(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC2_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC2_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC3_MASK (0x80U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC3_SHIFT (7U)
/*! hw_event_enable_sync3 - Enables HW event alignment for sync3 strobe generation. When set, the
 *    strobe phase is locked to the first occurrence of the selected HW input event.
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC3(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC3_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC3_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC4_MASK (0x100U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC4_SHIFT (8U)
/*! hw_event_enable_sync4 - Enables HW event alignment for sync4 strobe generation. When set, the
 *    strobe phase is locked to the first occurrence of the selected HW input event.
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC4(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC4_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC4_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC5_MASK (0x200U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC5_SHIFT (9U)
/*! hw_event_enable_sync5 - Enables HW event alignment for sync5 strobe generation. When set, the
 *    strobe phase is locked to the first occurrence of the selected HW input event.
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC5(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC5_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC5_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC6_MASK (0x400U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC6_SHIFT (10U)
/*! hw_event_enable_sync6 - Enables HW event alignment for sync6 strobe generation. When set, the
 *    strobe phase is locked to the first occurrence of the selected HW input event.
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC6(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC6_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC6_MASK)

#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC7_MASK (0x800U)
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC7_SHIFT (11U)
/*! hw_event_enable_sync7 - Enables HW event alignment for sync7 strobe generation. When set, the
 *    strobe phase is locked to the first occurrence of the selected HW input event.
 */
#define ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC7(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC7_SHIFT)) & ADSS_SYNC_SOURCE_SYNCSOURCEHWEVENTENABLECFG_HW_EVENT_ENABLE_SYNC7_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADSS_SYNC_SOURCE_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_SYNC_SOURCE_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_SYNC_SOURCE_H_ */

