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
**         CMSIS Peripheral Access Layer for ADSS_DP
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
 * @file PERI_ADSS_DP.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_DP
 *
 * CMSIS Peripheral Access Layer for ADSS_DP
 */

#if !defined(PERI_ADSS_DP_H_)
#define PERI_ADSS_DP_H_                          /**< Symbol preventing repeated inclusion */

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
   -- ADSS_DP Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_DP_Peripheral_Access_Layer ADSS_DP Peripheral Access Layer
 * @{
 */

/** ADSS_DP - Size of Registers Arrays */
#define ADSS_DP_CH_ALLOC_IN_COUNT                 8u
#define ADSS_DP_CH_ALLOC_OUT_COUNT                8u
#define ADSS_DP_FIFO_CFG_COUNT                    6u
#define ADSS_DP_FIFO_EN_COUNT                     6u

/** ADSS_DP - Register Layout Typedef */
typedef struct {
  __IO uint32_t ENABLE;                            /**< enable register, offset: 0x0 */
  __IO uint32_t EDGE_CFG;                          /**< Receive/transmit edge configuration. No write operation should be done when the DT field is asserted. In order to deassert the DT bit, the Data Port must be disabled (enable register)., offset: 0x4 */
  __IO uint32_t FR_CFG;                            /**< Frame configuration register. No write operation should be done when the DT field is asserted. In order to deassert the DT bit, the Data Port must be disabled (enable register)., offset: 0x8 */
  __IO uint32_t CH_CFG;                            /**< channels configuration register. No write operation should be done when the DT field is asserted. In order to deassert the DT bit, the Data Port must be disabled (enable register)., offset: 0xC */
  __IO uint32_t CH_EN;                             /**< allocation of channel0 to channel7., offset: 0x10 */
  __IO uint32_t CH_ALLOC_IN[ADSS_DP_CH_ALLOC_IN_COUNT]; /**< Channel allocation register. No write operation should be done when the DT field is asserted. In order to deassert the DT bit, the corresponding channel must be disabled (ch_en register)., array offset: 0x14, array step: 0x4 */
  __IO uint32_t CH_ALLOC_OUT[ADSS_DP_CH_ALLOC_OUT_COUNT]; /**< Channel allocation register. No write operation should be done when the DT field is asserted. In order to deassert the DT bit, the corresponding channel must be disabled (ch_en register)., array offset: 0x34, array step: 0x4 */
  __IO uint32_t FIFO_CFG[ADSS_DP_FIFO_CFG_COUNT];  /**< configuration of the Data Port module. No write operation should be done when the DT field is asserted. In order to deassert the DT bit, the FIFO must be disabled (fifo_en register)., array offset: 0x54, array step: 0x4 */
  __I  uint32_t INTSTAT;                           /**< interrupt status register., offset: 0x6C */
  __IO uint32_t INTEN;                             /**< APB register for the interrupt enable configuration and for clearing interrupts (2 modes)., offset: 0x70 */
  __IO uint32_t SCNTR_CFG;                         /**< Parameters for fractional counters. No write operation should be done when the DT field is asserted. In order to deassert the DT bit, the Data Port must be disabled (enable register)., offset: 0x74 */
  __I  uint32_t SCNTR_MI;                          /**< Sample counter used for latency control., offset: 0x78 */
  __IO uint32_t SCK_DETECT_CFG;                    /**< Configuration register for sck and frame detection. This allows the data port to detect whether the sck and the frame inputs are interrupted. When either of the signals is interrupted, an event is generated onto DSP event bus. Afterwards, the module detects whether the sck and the frame signals are back on again. When both the signals are back on, another event is generated onto DSP event bus., offset: 0x7C */
       uint8_t RESERVED_0[8];
  __IO uint32_t FIFO_EN[ADSS_DP_FIFO_EN_COUNT];    /**< Enable register of the FIFO., array offset: 0x88, array step: 0x4 */
} ADSS_DP_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_DP Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_DP_Register_Masks ADSS_DP Register Masks
 * @{
 */

/*! @name ENABLE - enable register */
/*! @{ */

#define ADSS_DP_ENABLE_EN_MASK                   (0x1U)
#define ADSS_DP_ENABLE_EN_SHIFT                  (0U)
/*! en - Enables the Data Port module.
 *  0b0..Data Port module is disabled.
 *  0b1..Data Port module is enabled.
 */
#define ADSS_DP_ENABLE_EN(x)                     (((uint32_t)(((uint32_t)(x)) << ADSS_DP_ENABLE_EN_SHIFT)) & ADSS_DP_ENABLE_EN_MASK)

#define ADSS_DP_ENABLE_STAT_MASK                 (0x2U)
#define ADSS_DP_ENABLE_STAT_SHIFT                (1U)
/*! stat - Enable status of the Data Port module.
 *  0b0..Data Port module is disabled.
 *  0b1..Data Port module is enabled.
 */
#define ADSS_DP_ENABLE_STAT(x)                   (((uint32_t)(((uint32_t)(x)) << ADSS_DP_ENABLE_STAT_SHIFT)) & ADSS_DP_ENABLE_STAT_MASK)
/*! @} */

/*! @name EDGE_CFG - Receive/transmit edge configuration. No write operation should be done when the DT field is asserted. In order to deassert the DT bit, the Data Port must be disabled (enable register). */
/*! @{ */

#define ADSS_DP_EDGE_CFG_IN_NEG_MASK             (0x1U)
#define ADSS_DP_EDGE_CFG_IN_NEG_SHIFT            (0U)
/*! in_neg - Indicates if the input must be sampled on the falling edge of the serial clock.
 *  0b0..Using the rising edge.
 *  0b1..Using the falling edge.
 */
#define ADSS_DP_EDGE_CFG_IN_NEG(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_DP_EDGE_CFG_IN_NEG_SHIFT)) & ADSS_DP_EDGE_CFG_IN_NEG_MASK)

#define ADSS_DP_EDGE_CFG_OUT_NEG_MASK            (0x2U)
#define ADSS_DP_EDGE_CFG_OUT_NEG_SHIFT           (1U)
/*! out_neg - Indicates if the output must be generated on the falling edge of the serial clock.
 *  0b0..Using the rising edge.
 *  0b1..Using the falling edge.
 */
#define ADSS_DP_EDGE_CFG_OUT_NEG(x)              (((uint32_t)(((uint32_t)(x)) << ADSS_DP_EDGE_CFG_OUT_NEG_SHIFT)) & ADSS_DP_EDGE_CFG_OUT_NEG_MASK)

#define ADSS_DP_EDGE_CFG_DT_MASK                 (0x80000000U)
#define ADSS_DP_EDGE_CFG_DT_SHIFT                (31U)
/*! dt - Don't touch. When '1', the module is running and it is illegal to change the contents of
 *    this register. When '0', the module is not running and it is safe to change the contents of this
 *    register.
 *  0b0..It is allowed to change the contents of this register.
 *  0b1..It is forbidden to change the contents of this register.
 */
#define ADSS_DP_EDGE_CFG_DT(x)                   (((uint32_t)(((uint32_t)(x)) << ADSS_DP_EDGE_CFG_DT_SHIFT)) & ADSS_DP_EDGE_CFG_DT_MASK)
/*! @} */

/*! @name FR_CFG - Frame configuration register. No write operation should be done when the DT field is asserted. In order to deassert the DT bit, the Data Port must be disabled (enable register). */
/*! @{ */

#define ADSS_DP_FR_CFG_HIGH_MASK                 (0xFFFU)
#define ADSS_DP_FR_CFG_HIGH_SHIFT                (0U)
/*! high - Specifies (in terms of serial clock cycles) the length of the high part of the frame minus one. */
#define ADSS_DP_FR_CFG_HIGH(x)                   (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FR_CFG_HIGH_SHIFT)) & ADSS_DP_FR_CFG_HIGH_MASK)

#define ADSS_DP_FR_CFG_LOW_MASK                  (0xFFF000U)
#define ADSS_DP_FR_CFG_LOW_SHIFT                 (12U)
/*! low - Specifies (in terms of serial clock cycles) the length of the low part of the frame minus one. */
#define ADSS_DP_FR_CFG_LOW(x)                    (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FR_CFG_LOW_SHIFT)) & ADSS_DP_FR_CFG_LOW_MASK)

#define ADSS_DP_FR_CFG_MASTER_MASK               (0x1000000U)
#define ADSS_DP_FR_CFG_MASTER_SHIFT              (24U)
/*! master - master: the Data Port module generates the FRAME signal and the clock signal. slave:
 *    the Data Port module receives the FRAME signal and the clock signal.
 *  0b0..The Data Port module receives the FRAME signal and the clock signal.
 *  0b1..The Data Port module generates the FRAME signal and the clock signal.
 */
#define ADSS_DP_FR_CFG_MASTER(x)                 (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FR_CFG_MASTER_SHIFT)) & ADSS_DP_FR_CFG_MASTER_MASK)

#define ADSS_DP_FR_CFG_DEL_MASK                  (0x2000000U)
#define ADSS_DP_FR_CFG_DEL_SHIFT                 (25U)
/*! del - Controls the frame signaling mode (immediate or delayed).
 *  0b0..the Data Port module operates in immediate signaling mode.
 *  0b1..the Data Port module operates in delayed signaling mode.
 */
#define ADSS_DP_FR_CFG_DEL(x)                    (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FR_CFG_DEL_SHIFT)) & ADSS_DP_FR_CFG_DEL_MASK)

#define ADSS_DP_FR_CFG_RX_FR_INV_MASK            (0x4000000U)
#define ADSS_DP_FR_CFG_RX_FR_INV_SHIFT           (26U)
/*! rx_fr_inv - Defines if the start of a frame will be indicated by the falling edge or by the rising edge of the FRAME line.
 *  0b0..The start of the frame is indicated by the rising edge of the FRAME line.
 *  0b1..The start of the frame is indicated by the falling edge of the FRAME line.
 */
#define ADSS_DP_FR_CFG_RX_FR_INV(x)              (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FR_CFG_RX_FR_INV_SHIFT)) & ADSS_DP_FR_CFG_RX_FR_INV_MASK)

#define ADSS_DP_FR_CFG_NEG_DETECT_MASK           (0x8000000U)
#define ADSS_DP_FR_CFG_NEG_DETECT_SHIFT          (27U)
/*! neg_detect - Enables the synchronization on falling-edge of the WS/FRAME. When enabled, the
 *    falling edge of the FRAME line indicates the start of the second channel of the frame.
 *  0b0..The Data Port module only synchronize on the rising edge of the WS/FRAME.
 *  0b1..The Data Port uses both rising and falling edge of WS/FRAME for synchronization.
 */
#define ADSS_DP_FR_CFG_NEG_DETECT(x)             (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FR_CFG_NEG_DETECT_SHIFT)) & ADSS_DP_FR_CFG_NEG_DETECT_MASK)

#define ADSS_DP_FR_CFG_TX_ALIGN_SOF_MASK         (0x10000000U)
#define ADSS_DP_FR_CFG_TX_ALIGN_SOF_SHIFT        (28U)
/*! tx_align_sof - Defines whether to align to the frame start edge for the transmission of data in
 *    FIFOs onto the serial line. This configuration must be combined with the configuration of
 *    sync_grp_id of FIFOs. When this option is enabled, Tx FIFOs which are configured to the same
 *    non-zero sync_grp_id, should start to transmit together aligning with the frame start edge.
 *  0b0..In this case, the transmission of data in FIFOs is not aligned to the frame start edge. FIFO will transmit when it is initially full.
 *  0b1..Enable the alignment of transmission to frame start edge
 */
#define ADSS_DP_FR_CFG_TX_ALIGN_SOF(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FR_CFG_TX_ALIGN_SOF_SHIFT)) & ADSS_DP_FR_CFG_TX_ALIGN_SOF_MASK)

#define ADSS_DP_FR_CFG_RX_ALIGN_SOF_MASK         (0x20000000U)
#define ADSS_DP_FR_CFG_RX_ALIGN_SOF_SHIFT        (29U)
/*! rx_align_sof - Defines whether to align to the frame start edge for the receiving of data in
 *    FIFOs from the serial line. This configuration must be combined with the configuration of
 *    sync_grp_id of FIFOs. When this option is enabled, Rx FIFOs which are configured to the same non-zero
 *    sync_grp_id, should start to receive together aligning with the frame start edge.
 *  0b0..In this case, the receiving of data in FIFOs is not guaranteed to align to the frame start edge. FIFO
 *       will receive when a data is received from the serial line.
 *  0b1..Enable the alignment of receiving to frame start edge
 */
#define ADSS_DP_FR_CFG_RX_ALIGN_SOF(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FR_CFG_RX_ALIGN_SOF_SHIFT)) & ADSS_DP_FR_CFG_RX_ALIGN_SOF_MASK)

#define ADSS_DP_FR_CFG_FR_EVENT_INV_MASK         (0x40000000U)
#define ADSS_DP_FR_CFG_FR_EVENT_INV_SHIFT        (30U)
/*! fr_event_inv - Defines whether to invert the edge of the frame signal when it is used as event
 *    to event bus. Depending on which edge you would like to use to generate an event, this bit
 *    needs to be configured properly. For the event bus, the rising edge of this signal is used to
 *    generate an event.
 *  0b0..The frame signal is passed as it is to the event bus. In this case, the rising edge of the frame signal
 *       is used to generate an event by the event bus.
 *  0b1..By setting this bit to 1, the frame signal is inverted and the falling edge of the frame signal is used
 *       by the event bus as an event. For example, if the falling edge of the frame signal is the frame start edge,
 *       by setting this bit to 1, the frame start edge (which is the falling edge) of the frame signal is used to
 *       generate an event. On the other hand, if the rising edge of the frame signal is the frame start edge, by
 *       setting this bit to 1, the other edge (which is still the falling edge) of the frame signal is used to
 *       generate an event.
 */
#define ADSS_DP_FR_CFG_FR_EVENT_INV(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FR_CFG_FR_EVENT_INV_SHIFT)) & ADSS_DP_FR_CFG_FR_EVENT_INV_MASK)

#define ADSS_DP_FR_CFG_DT_MASK                   (0x80000000U)
#define ADSS_DP_FR_CFG_DT_SHIFT                  (31U)
/*! dt - Don't touch. When '1', the module is running and it is illegal to change the contents of
 *    this register. When '0', the module is not running and it is safe to change the contents of this
 *    register.
 *  0b0..It is allowed to change the contents of this register.
 *  0b1..It is forbidden to change the contents of this register.
 */
#define ADSS_DP_FR_CFG_DT(x)                     (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FR_CFG_DT_SHIFT)) & ADSS_DP_FR_CFG_DT_MASK)
/*! @} */

/*! @name CH_CFG - channels configuration register. No write operation should be done when the DT field is asserted. In order to deassert the DT bit, the Data Port must be disabled (enable register). */
/*! @{ */

#define ADSS_DP_CH_CFG_WORD_LEN_MASK             (0x1FU)
#define ADSS_DP_CH_CFG_WORD_LEN_SHIFT            (0U)
/*! word_len - Defines (in terms of serial clock cycles) the expected length of all the words of the
 *    frame minus 1. The last word might have a shorter length than the one specified by this field
 *    (truncated word). The word_len defines the number of bits of a word on the serial lines. In
 *    general, it is the same as the number of bits of the data in the FIFO. But for control FIFOs,
 *    the length of the data will be 1 bit smaller than the one specified by the word_len field.
 */
#define ADSS_DP_CH_CFG_WORD_LEN(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_CFG_WORD_LEN_SHIFT)) & ADSS_DP_CH_CFG_WORD_LEN_MASK)

#define ADSS_DP_CH_CFG_OFFSET_MASK               (0x3E0U)
#define ADSS_DP_CH_CFG_OFFSET_SHIFT              (5U)
/*! offset - Defines the position in the data register of the first bit to be transferred
 *    (transmitted/received) over the serial line(s).
 */
#define ADSS_DP_CH_CFG_OFFSET(x)                 (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_CFG_OFFSET_SHIFT)) & ADSS_DP_CH_CFG_OFFSET_MASK)

#define ADSS_DP_CH_CFG_MSB_ALIGN_MASK            (0x400U)
#define ADSS_DP_CH_CFG_MSB_ALIGN_SHIFT           (10U)
/*! msb_align - Defines the order the content of the FIFO is transmitted/received over the serial
 *    line. If 1, the data is transmitted/received MSB first. If 0, the data is transmitted LSB first.
 *  0b0..The data is transmitted/received over the serial line LSB first.
 *  0b1..The data is transmitted/received over the serial line MSB first.
 */
#define ADSS_DP_CH_CFG_MSB_ALIGN(x)              (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_CFG_MSB_ALIGN_SHIFT)) & ADSS_DP_CH_CFG_MSB_ALIGN_MASK)

#define ADSS_DP_CH_CFG_TRUNC_MASK                (0x800U)
#define ADSS_DP_CH_CFG_TRUNC_SHIFT               (11U)
/*! trunc - Specifies if a word must be stored even if it is smaller than its expected length (=word_len).
 *  0b0..If a RX word is smaller than the expected length (=word_len), then it is not stored.
 *  0b1..a RX word is accepted even if it is smaller than the expected length (=word_len).
 */
#define ADSS_DP_CH_CFG_TRUNC(x)                  (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_CFG_TRUNC_SHIFT)) & ADSS_DP_CH_CFG_TRUNC_MASK)

#define ADSS_DP_CH_CFG_TRIS_FIRST_MASK           (0x1000U)
#define ADSS_DP_CH_CFG_TRIS_FIRST_SHIFT          (12U)
/*! tris_first - In the output direction, this field indicates whether the first bit of each output word must be tristated.
 *  0b0..No tristate.
 *  0b1..First bit tristated.
 */
#define ADSS_DP_CH_CFG_TRIS_FIRST(x)             (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_CFG_TRIS_FIRST_SHIFT)) & ADSS_DP_CH_CFG_TRIS_FIRST_MASK)

#define ADSS_DP_CH_CFG_TRIS_PAD_MASK             (0x2000U)
#define ADSS_DP_CH_CFG_TRIS_PAD_SHIFT            (13U)
/*! tris_pad - In the output direction, when this field is set, the serial output corresponding to
 *    all bit positions in a frame not allocated to an output channel (= padding bits) will be
 *    tristated.
 *  0b0..The padding bits are driven low.
 *  0b1..The padding bits are tristated.
 */
#define ADSS_DP_CH_CFG_TRIS_PAD(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_CFG_TRIS_PAD_SHIFT)) & ADSS_DP_CH_CFG_TRIS_PAD_MASK)

#define ADSS_DP_CH_CFG_A_FR_TX_MASK              (0x4000U)
#define ADSS_DP_CH_CFG_A_FR_TX_SHIFT             (14U)
/*! a_fr_tx - Enable the functionality to handle additional output channels.
 *  0b0..Handling additional output channels disabled
 *  0b1..Handling additional output channels enabled
 */
#define ADSS_DP_CH_CFG_A_FR_TX(x)                (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_CFG_A_FR_TX_SHIFT)) & ADSS_DP_CH_CFG_A_FR_TX_MASK)

#define ADSS_DP_CH_CFG_A_FR_RX_MASK              (0x8000U)
#define ADSS_DP_CH_CFG_A_FR_RX_SHIFT             (15U)
/*! a_fr_rx - Enable the functionality to handle additional input channels.
 *  0b0..Handling additional input channels disabled
 *  0b1..Handling additional input channels enabled.
 */
#define ADSS_DP_CH_CFG_A_FR_RX(x)                (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_CFG_A_FR_RX_SHIFT)) & ADSS_DP_CH_CFG_A_FR_RX_MASK)

#define ADSS_DP_CH_CFG_ALIGN24BMSB_MASK          (0x10000U)
#define ADSS_DP_CH_CFG_ALIGN24BMSB_SHIFT         (16U)
/*! Align24bMSB - Enable the functionality to align the 24-bit HSI data at the MSB of the 32-bit
 *    data in FIFO. This option is only used when the data port is configured into 32-bit mode, while
 *    the HSI data width is 24-bit.
 *  0b0..1. Keep the 24b data received from the HSI as it is and store in the lower 24-bit of the 32-bit word in
 *       FIFO. 2. Use the lower 24-bit of the 32-bit word in FIFO, and put onto the HSI bus.
 *  0b1..1. Enable the alignment of the 24b data received from the HSI to the MSB of the 32-bit word in FIFO. 2.
 *       Shift down the 32b data received from the serial line by 8 bit, before stored into FIFO and put onto the
 *       HSI bus.
 */
#define ADSS_DP_CH_CFG_ALIGN24BMSB(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_CFG_ALIGN24BMSB_SHIFT)) & ADSS_DP_CH_CFG_ALIGN24BMSB_MASK)

#define ADSS_DP_CH_CFG_DT_MASK                   (0x80000000U)
#define ADSS_DP_CH_CFG_DT_SHIFT                  (31U)
/*! dt - Don't touch. When '1', the module is running and it is illegal to change the contents of
 *    this register. When '0', the module is not running and it is safe to change the contents of this
 *    register.
 *  0b0..It is allowed to change the contents of this register.
 *  0b1..It is forbidden to change the contents of this register.
 */
#define ADSS_DP_CH_CFG_DT(x)                     (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_CFG_DT_SHIFT)) & ADSS_DP_CH_CFG_DT_MASK)
/*! @} */

/*! @name CH_EN - allocation of channel0 to channel7. */
/*! @{ */

#define ADSS_DP_CH_EN_RX_EN_MASK                 (0xFFU)
#define ADSS_DP_CH_EN_RX_EN_SHIFT                (0U)
/*! rx_en - When rx_en[x] = '1', the channel with the corresponding index is enabled as input
 *    channel, and is allocated to the FIFO indicated with fifo_id in the corresponding ch_alloc_inx
 *    register.
 *  0b00000000..The channel is not enabled as input channel and not allocated to a FIFO.
 *  0b00000001..The channel is enabled as input channel and allocated to the FIFO specified by fifo_id.
 */
#define ADSS_DP_CH_EN_RX_EN(x)                   (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_EN_RX_EN_SHIFT)) & ADSS_DP_CH_EN_RX_EN_MASK)

#define ADSS_DP_CH_EN_TX_EN_MASK                 (0xFF00U)
#define ADSS_DP_CH_EN_TX_EN_SHIFT                (8U)
/*! tx_en - When tx_en[x] = '1', the channel with the corresponding index is enabled as output
 *    channel, and is allocated to the FIFO indicated with fifo_id in the corresponding ch_alloc_outx
 *    register.
 *  0b00000000..The channel is not enabled as output chanenl and not allocated to a FIFO.
 *  0b00000001..The channel is enabled as output channel and allocated to the FIFO specified by fifo_id.
 */
#define ADSS_DP_CH_EN_TX_EN(x)                   (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_EN_TX_EN_SHIFT)) & ADSS_DP_CH_EN_TX_EN_MASK)

#define ADSS_DP_CH_EN_BUSY_MASK                  (0x80000000U)
#define ADSS_DP_CH_EN_BUSY_SHIFT                 (31U)
/*! busy - Indicates if a write operation is ongoing on ch_en register.
 *  0b0..Clock domain transitioning is done.
 *  0b1..Clock domain transitioning is still in progress.
 */
#define ADSS_DP_CH_EN_BUSY(x)                    (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_EN_BUSY_SHIFT)) & ADSS_DP_CH_EN_BUSY_MASK)
/*! @} */

/*! @name CH_ALLOC_IN - Channel allocation register. No write operation should be done when the DT field is asserted. In order to deassert the DT bit, the corresponding channel must be disabled (ch_en register). */
/*! @{ */

#define ADSS_DP_CH_ALLOC_IN_FIFO_ID_MASK         (0x7U)
#define ADSS_DP_CH_ALLOC_IN_FIFO_ID_SHIFT        (0U)
/*! fifo_id - Defines which FIFO is allocated to the channel. */
#define ADSS_DP_CH_ALLOC_IN_FIFO_ID(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_ALLOC_IN_FIFO_ID_SHIFT)) & ADSS_DP_CH_ALLOC_IN_FIFO_ID_MASK)

#define ADSS_DP_CH_ALLOC_IN_DT_MASK              (0x80000000U)
#define ADSS_DP_CH_ALLOC_IN_DT_SHIFT             (31U)
/*! dt - Don't touch field. Modifying this register is only allowed when the DT field is '0'.
 *  0b0..It is allowed to change the contents of this register.
 *  0b1..It is forbidden to change the contents of this register.
 */
#define ADSS_DP_CH_ALLOC_IN_DT(x)                (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_ALLOC_IN_DT_SHIFT)) & ADSS_DP_CH_ALLOC_IN_DT_MASK)
/*! @} */

/*! @name CH_ALLOC_OUT - Channel allocation register. No write operation should be done when the DT field is asserted. In order to deassert the DT bit, the corresponding channel must be disabled (ch_en register). */
/*! @{ */

#define ADSS_DP_CH_ALLOC_OUT_FIFO_ID_MASK        (0x7U)
#define ADSS_DP_CH_ALLOC_OUT_FIFO_ID_SHIFT       (0U)
/*! fifo_id - Defines which FIFO is allocated to the channel. */
#define ADSS_DP_CH_ALLOC_OUT_FIFO_ID(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_ALLOC_OUT_FIFO_ID_SHIFT)) & ADSS_DP_CH_ALLOC_OUT_FIFO_ID_MASK)

#define ADSS_DP_CH_ALLOC_OUT_DT_MASK             (0x80000000U)
#define ADSS_DP_CH_ALLOC_OUT_DT_SHIFT            (31U)
/*! dt - Don't touch field. Modifying this register is only allowed when the DT field is '0'.
 *  0b0..It is allowed to change the contents of this register.
 *  0b1..It is forbidden to change the contents of this register.
 */
#define ADSS_DP_CH_ALLOC_OUT_DT(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_DP_CH_ALLOC_OUT_DT_SHIFT)) & ADSS_DP_CH_ALLOC_OUT_DT_MASK)
/*! @} */

/*! @name FIFO_CFG - configuration of the Data Port module. No write operation should be done when the DT field is asserted. In order to deassert the DT bit, the FIFO must be disabled (fifo_en register). */
/*! @{ */

#define ADSS_DP_FIFO_CFG_DIRECTION_MASK          (0x1U)
#define ADSS_DP_FIFO_CFG_DIRECTION_SHIFT         (0U)
/*! direction - Indicates the direction assigned to the FIFO [1 = Input] [0 = Output].
 *  0b0..output fifo (data being transmitted on serial lines)
 *  0b1..input fifo (storing data from serial lines)
 */
#define ADSS_DP_FIFO_CFG_DIRECTION(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FIFO_CFG_DIRECTION_SHIFT)) & ADSS_DP_FIFO_CFG_DIRECTION_MASK)

#define ADSS_DP_FIFO_CFG_SYNC_GRP_ID_MASK        (0xEU)
#define ADSS_DP_FIFO_CFG_SYNC_GRP_ID_SHIFT       (1U)
/*! sync_grp_id - Indicates which synchronized group the FIFO is part of. [0 = FIFO is not part of
 *    any sync group, 1 = FIFO is part of sync group 0, 2 = FIFO is part of sync group 1, 3 = FIFO is
 *    part of sync group 2, 4 = FIFO is part of sync group 3, 5 = FIFO is part of sync group 4, 6 =
 *    FIFO is part of sync group 5, 7 = FIFO is part of sync group 6]
 */
#define ADSS_DP_FIFO_CFG_SYNC_GRP_ID(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FIFO_CFG_SYNC_GRP_ID_SHIFT)) & ADSS_DP_FIFO_CFG_SYNC_GRP_ID_MASK)

#define ADSS_DP_FIFO_CFG_CONTROL_MASK            (0x10U)
#define ADSS_DP_FIFO_CFG_CONTROL_SHIFT           (4U)
/*! control - Indicates if the FIFO is used for control channels. */
#define ADSS_DP_FIFO_CFG_CONTROL(x)              (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FIFO_CFG_CONTROL_SHIFT)) & ADSS_DP_FIFO_CFG_CONTROL_MASK)

#define ADSS_DP_FIFO_CFG_TX_STREAM_MASK          (0x20U)
#define ADSS_DP_FIFO_CFG_TX_STREAM_SHIFT         (5U)
/*! tx_stream - Indicates if the Tx FIFO is in its streaming status. When '1', the Tx FIFO is in its
 *    streaming status. When '0', the Tx FIFO is not streaming.
 */
#define ADSS_DP_FIFO_CFG_TX_STREAM(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FIFO_CFG_TX_STREAM_SHIFT)) & ADSS_DP_FIFO_CFG_TX_STREAM_MASK)

#define ADSS_DP_FIFO_CFG_DT_MASK                 (0x80000000U)
#define ADSS_DP_FIFO_CFG_DT_SHIFT                (31U)
/*! dt - Don't touch field. Modifying this register is only allowed when the DT field is '0'.
 *  0b0..It is allowed to change the contents of this register.
 *  0b1..It is forbidden to change the contents of this register.
 */
#define ADSS_DP_FIFO_CFG_DT(x)                   (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FIFO_CFG_DT_SHIFT)) & ADSS_DP_FIFO_CFG_DT_MASK)
/*! @} */

/*! @name INTSTAT - interrupt status register. */
/*! @{ */

#define ADSS_DP_INTSTAT_UNDERRUN0_MASK           (0x1U)
#define ADSS_DP_INTSTAT_UNDERRUN0_SHIFT          (0U)
/*! underrun0 - Interrupt status of underrun interrupt for FIFO. */
#define ADSS_DP_INTSTAT_UNDERRUN0(x)             (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_UNDERRUN0_SHIFT)) & ADSS_DP_INTSTAT_UNDERRUN0_MASK)

#define ADSS_DP_INTSTAT_UNDERRUN1_MASK           (0x2U)
#define ADSS_DP_INTSTAT_UNDERRUN1_SHIFT          (1U)
/*! underrun1 - Interrupt status of underrun interrupt for FIFO. */
#define ADSS_DP_INTSTAT_UNDERRUN1(x)             (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_UNDERRUN1_SHIFT)) & ADSS_DP_INTSTAT_UNDERRUN1_MASK)

#define ADSS_DP_INTSTAT_UNDERRUN2_MASK           (0x4U)
#define ADSS_DP_INTSTAT_UNDERRUN2_SHIFT          (2U)
/*! underrun2 - Interrupt status of underrun interrupt for FIFO. */
#define ADSS_DP_INTSTAT_UNDERRUN2(x)             (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_UNDERRUN2_SHIFT)) & ADSS_DP_INTSTAT_UNDERRUN2_MASK)

#define ADSS_DP_INTSTAT_UNDERRUN3_MASK           (0x8U)
#define ADSS_DP_INTSTAT_UNDERRUN3_SHIFT          (3U)
/*! underrun3 - Interrupt status of underrun interrupt for FIFO. */
#define ADSS_DP_INTSTAT_UNDERRUN3(x)             (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_UNDERRUN3_SHIFT)) & ADSS_DP_INTSTAT_UNDERRUN3_MASK)

#define ADSS_DP_INTSTAT_UNDERRUN4_MASK           (0x10U)
#define ADSS_DP_INTSTAT_UNDERRUN4_SHIFT          (4U)
/*! underrun4 - Interrupt status of underrun interrupt for FIFO. */
#define ADSS_DP_INTSTAT_UNDERRUN4(x)             (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_UNDERRUN4_SHIFT)) & ADSS_DP_INTSTAT_UNDERRUN4_MASK)

#define ADSS_DP_INTSTAT_UNDERRUN5_MASK           (0x20U)
#define ADSS_DP_INTSTAT_UNDERRUN5_SHIFT          (5U)
/*! underrun5 - Interrupt status of underrun interrupt for FIFO. */
#define ADSS_DP_INTSTAT_UNDERRUN5(x)             (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_UNDERRUN5_SHIFT)) & ADSS_DP_INTSTAT_UNDERRUN5_MASK)

#define ADSS_DP_INTSTAT_OVERRUN0_MASK            (0x40U)
#define ADSS_DP_INTSTAT_OVERRUN0_SHIFT           (6U)
/*! overrun0 - Interrupt status of overrun interrupt for FIFO. */
#define ADSS_DP_INTSTAT_OVERRUN0(x)              (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_OVERRUN0_SHIFT)) & ADSS_DP_INTSTAT_OVERRUN0_MASK)

#define ADSS_DP_INTSTAT_OVERRUN1_MASK            (0x80U)
#define ADSS_DP_INTSTAT_OVERRUN1_SHIFT           (7U)
/*! overrun1 - Interrupt status of overrun interrupt for FIFO. */
#define ADSS_DP_INTSTAT_OVERRUN1(x)              (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_OVERRUN1_SHIFT)) & ADSS_DP_INTSTAT_OVERRUN1_MASK)

#define ADSS_DP_INTSTAT_OVERRUN2_MASK            (0x100U)
#define ADSS_DP_INTSTAT_OVERRUN2_SHIFT           (8U)
/*! overrun2 - Interrupt status of overrun interrupt for FIFO. */
#define ADSS_DP_INTSTAT_OVERRUN2(x)              (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_OVERRUN2_SHIFT)) & ADSS_DP_INTSTAT_OVERRUN2_MASK)

#define ADSS_DP_INTSTAT_OVERRUN3_MASK            (0x200U)
#define ADSS_DP_INTSTAT_OVERRUN3_SHIFT           (9U)
/*! overrun3 - Interrupt status of overrun interrupt for FIFO. */
#define ADSS_DP_INTSTAT_OVERRUN3(x)              (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_OVERRUN3_SHIFT)) & ADSS_DP_INTSTAT_OVERRUN3_MASK)

#define ADSS_DP_INTSTAT_OVERRUN4_MASK            (0x400U)
#define ADSS_DP_INTSTAT_OVERRUN4_SHIFT           (10U)
/*! overrun4 - Interrupt status of overrun interrupt for FIFO. */
#define ADSS_DP_INTSTAT_OVERRUN4(x)              (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_OVERRUN4_SHIFT)) & ADSS_DP_INTSTAT_OVERRUN4_MASK)

#define ADSS_DP_INTSTAT_OVERRUN5_MASK            (0x800U)
#define ADSS_DP_INTSTAT_OVERRUN5_SHIFT           (11U)
/*! overrun5 - Interrupt status of overrun interrupt for FIFO. */
#define ADSS_DP_INTSTAT_OVERRUN5(x)              (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_OVERRUN5_SHIFT)) & ADSS_DP_INTSTAT_OVERRUN5_MASK)

#define ADSS_DP_INTSTAT_FR_ERR_MASK              (0x1000U)
#define ADSS_DP_INTSTAT_FR_ERR_SHIFT             (12U)
/*! fr_err - This bit is set when the frame period is changed when operating in immediate signaling mode. */
#define ADSS_DP_INTSTAT_FR_ERR(x)                (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_FR_ERR_SHIFT)) & ADSS_DP_INTSTAT_FR_ERR_MASK)

#define ADSS_DP_INTSTAT_FR_NEGEDGE_ERR_MASK      (0x2000U)
#define ADSS_DP_INTSTAT_FR_NEGEDGE_ERR_SHIFT     (13U)
/*! fr_negedge_err - This bit is set when the frame high period is changed when operating in immediate signaling mode. */
#define ADSS_DP_INTSTAT_FR_NEGEDGE_ERR(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_FR_NEGEDGE_ERR_SHIFT)) & ADSS_DP_INTSTAT_FR_NEGEDGE_ERR_MASK)

#define ADSS_DP_INTSTAT_FR_TRUNC_EVENT_MASK      (0x4000U)
#define ADSS_DP_INTSTAT_FR_TRUNC_EVENT_SHIFT     (14U)
/*! fr_trunc_event - This bit is set when the last word of the frame is shorter than indicated by the word length. */
#define ADSS_DP_INTSTAT_FR_TRUNC_EVENT(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_FR_TRUNC_EVENT_SHIFT)) & ADSS_DP_INTSTAT_FR_TRUNC_EVENT_MASK)

#define ADSS_DP_INTSTAT_FR_NEGEDGE_TRUNC_EVENT_MASK (0x8000U)
#define ADSS_DP_INTSTAT_FR_NEGEDGE_TRUNC_EVENT_SHIFT (15U)
/*! fr_negedge_trunc_event - This bit is set when the first word of the frame is shorter than
 *    indicated by the word length. This situation occurs when the falling edge of the framing signal
 *    truncates the first word.
 */
#define ADSS_DP_INTSTAT_FR_NEGEDGE_TRUNC_EVENT(x) (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_FR_NEGEDGE_TRUNC_EVENT_SHIFT)) & ADSS_DP_INTSTAT_FR_NEGEDGE_TRUNC_EVENT_MASK)

#define ADSS_DP_INTSTAT_SCNTR_CFG_ERR_MASK       (0x10000U)
#define ADSS_DP_INTSTAT_SCNTR_CFG_ERR_SHIFT      (16U)
/*! scntr_cfg_err - This bit is set when the SW controlled scntr configuration is faulty. */
#define ADSS_DP_INTSTAT_SCNTR_CFG_ERR(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_SCNTR_CFG_ERR_SHIFT)) & ADSS_DP_INTSTAT_SCNTR_CFG_ERR_MASK)

#define ADSS_DP_INTSTAT_SCK_DETECT_EVENT_MASK    (0x20000U)
#define ADSS_DP_INTSTAT_SCK_DETECT_EVENT_SHIFT   (17U)
/*! sck_detect_event - This bit is set when the sck detect event is enabled and triggered. */
#define ADSS_DP_INTSTAT_SCK_DETECT_EVENT(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTSTAT_SCK_DETECT_EVENT_SHIFT)) & ADSS_DP_INTSTAT_SCK_DETECT_EVENT_MASK)
/*! @} */

/*! @name INTEN - APB register for the interrupt enable configuration and for clearing interrupts (2 modes). */
/*! @{ */

#define ADSS_DP_INTEN_UNDERRUN0_MASK             (0x1U)
#define ADSS_DP_INTEN_UNDERRUN0_SHIFT            (0U)
/*! underrun0 - Interrupt enable for underrun interrupt of FIFO.
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_UNDERRUN0(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_UNDERRUN0_SHIFT)) & ADSS_DP_INTEN_UNDERRUN0_MASK)

#define ADSS_DP_INTEN_UNDERRUN1_MASK             (0x2U)
#define ADSS_DP_INTEN_UNDERRUN1_SHIFT            (1U)
/*! underrun1 - Interrupt enable for underrun interrupt of FIFO.
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_UNDERRUN1(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_UNDERRUN1_SHIFT)) & ADSS_DP_INTEN_UNDERRUN1_MASK)

#define ADSS_DP_INTEN_UNDERRUN2_MASK             (0x4U)
#define ADSS_DP_INTEN_UNDERRUN2_SHIFT            (2U)
/*! underrun2 - Interrupt enable for underrun interrupt of FIFO.
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_UNDERRUN2(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_UNDERRUN2_SHIFT)) & ADSS_DP_INTEN_UNDERRUN2_MASK)

#define ADSS_DP_INTEN_UNDERRUN3_MASK             (0x8U)
#define ADSS_DP_INTEN_UNDERRUN3_SHIFT            (3U)
/*! underrun3 - Interrupt enable for underrun interrupt of FIFO.
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_UNDERRUN3(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_UNDERRUN3_SHIFT)) & ADSS_DP_INTEN_UNDERRUN3_MASK)

#define ADSS_DP_INTEN_UNDERRUN4_MASK             (0x10U)
#define ADSS_DP_INTEN_UNDERRUN4_SHIFT            (4U)
/*! underrun4 - Interrupt enable for underrun interrupt of FIFO.
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_UNDERRUN4(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_UNDERRUN4_SHIFT)) & ADSS_DP_INTEN_UNDERRUN4_MASK)

#define ADSS_DP_INTEN_UNDERRUN5_MASK             (0x20U)
#define ADSS_DP_INTEN_UNDERRUN5_SHIFT            (5U)
/*! underrun5 - Interrupt enable for underrun interrupt of FIFO.
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_UNDERRUN5(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_UNDERRUN5_SHIFT)) & ADSS_DP_INTEN_UNDERRUN5_MASK)

#define ADSS_DP_INTEN_OVERRUN0_MASK              (0x40U)
#define ADSS_DP_INTEN_OVERRUN0_SHIFT             (6U)
/*! overrun0 - Interrupt enable for overrun interrupt of FIFO.
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_OVERRUN0(x)                (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_OVERRUN0_SHIFT)) & ADSS_DP_INTEN_OVERRUN0_MASK)

#define ADSS_DP_INTEN_OVERRUN1_MASK              (0x80U)
#define ADSS_DP_INTEN_OVERRUN1_SHIFT             (7U)
/*! overrun1 - Interrupt enable for overrun interrupt of FIFO.
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_OVERRUN1(x)                (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_OVERRUN1_SHIFT)) & ADSS_DP_INTEN_OVERRUN1_MASK)

#define ADSS_DP_INTEN_OVERRUN2_MASK              (0x100U)
#define ADSS_DP_INTEN_OVERRUN2_SHIFT             (8U)
/*! overrun2 - Interrupt enable for overrun interrupt of FIFO.
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_OVERRUN2(x)                (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_OVERRUN2_SHIFT)) & ADSS_DP_INTEN_OVERRUN2_MASK)

#define ADSS_DP_INTEN_OVERRUN3_MASK              (0x200U)
#define ADSS_DP_INTEN_OVERRUN3_SHIFT             (9U)
/*! overrun3 - Interrupt enable for overrun interrupt of FIFO.
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_OVERRUN3(x)                (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_OVERRUN3_SHIFT)) & ADSS_DP_INTEN_OVERRUN3_MASK)

#define ADSS_DP_INTEN_OVERRUN4_MASK              (0x400U)
#define ADSS_DP_INTEN_OVERRUN4_SHIFT             (10U)
/*! overrun4 - Interrupt enable for overrun interrupt of FIFO.
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_OVERRUN4(x)                (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_OVERRUN4_SHIFT)) & ADSS_DP_INTEN_OVERRUN4_MASK)

#define ADSS_DP_INTEN_OVERRUN5_MASK              (0x800U)
#define ADSS_DP_INTEN_OVERRUN5_SHIFT             (11U)
/*! overrun5 - Interrupt enable for overrun interrupt of FIFO.
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_OVERRUN5(x)                (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_OVERRUN5_SHIFT)) & ADSS_DP_INTEN_OVERRUN5_MASK)

#define ADSS_DP_INTEN_FR_ERR_MASK                (0x1000U)
#define ADSS_DP_INTEN_FR_ERR_SHIFT               (12U)
/*! fr_err - Interrupt enable for the fr_err
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_FR_ERR(x)                  (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_FR_ERR_SHIFT)) & ADSS_DP_INTEN_FR_ERR_MASK)

#define ADSS_DP_INTEN_FR_NEGEDGE_ERR_MASK        (0x2000U)
#define ADSS_DP_INTEN_FR_NEGEDGE_ERR_SHIFT       (13U)
/*! fr_negedge_err - Interrupt enable for the fr_negedge_err
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_FR_NEGEDGE_ERR(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_FR_NEGEDGE_ERR_SHIFT)) & ADSS_DP_INTEN_FR_NEGEDGE_ERR_MASK)

#define ADSS_DP_INTEN_FR_TRUNC_EVENT_MASK        (0x4000U)
#define ADSS_DP_INTEN_FR_TRUNC_EVENT_SHIFT       (14U)
/*! fr_trunc_event - Interrupt enable for the fr_trunc_event
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_FR_TRUNC_EVENT(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_FR_TRUNC_EVENT_SHIFT)) & ADSS_DP_INTEN_FR_TRUNC_EVENT_MASK)

#define ADSS_DP_INTEN_FR_NEGEDGE_TRUNC_EVENT_MASK (0x8000U)
#define ADSS_DP_INTEN_FR_NEGEDGE_TRUNC_EVENT_SHIFT (15U)
/*! fr_negedge_trunc_event - Interrupt enable for the fr_negedge_trunc_event
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_FR_NEGEDGE_TRUNC_EVENT(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_FR_NEGEDGE_TRUNC_EVENT_SHIFT)) & ADSS_DP_INTEN_FR_NEGEDGE_TRUNC_EVENT_MASK)

#define ADSS_DP_INTEN_SCNTR_CFG_ERR_MASK         (0x10000U)
#define ADSS_DP_INTEN_SCNTR_CFG_ERR_SHIFT        (16U)
/*! scntr_cfg_err - Interrupt enable for the scntr_cfg_err
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_SCNTR_CFG_ERR(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_SCNTR_CFG_ERR_SHIFT)) & ADSS_DP_INTEN_SCNTR_CFG_ERR_MASK)

#define ADSS_DP_INTEN_SCK_DETECT_EVENT_MASK      (0x20000U)
#define ADSS_DP_INTEN_SCK_DETECT_EVENT_SHIFT     (17U)
/*! sck_detect_event - Interrupt enable for the sck_detect_event
 *  0b0..interrupt disabled
 *  0b1..interrupt enabled
 */
#define ADSS_DP_INTEN_SCK_DETECT_EVENT(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_DP_INTEN_SCK_DETECT_EVENT_SHIFT)) & ADSS_DP_INTEN_SCK_DETECT_EVENT_MASK)
/*! @} */

/*! @name SCNTR_CFG - Parameters for fractional counters. No write operation should be done when the DT field is asserted. In order to deassert the DT bit, the Data Port must be disabled (enable register). */
/*! @{ */

#define ADSS_DP_SCNTR_CFG_LONG_CNT_MASK          (0xFU)
#define ADSS_DP_SCNTR_CFG_LONG_CNT_SHIFT         (0U)
/*! long_cnt - Number of times that (short_len+1) will be used to determine when to increment the fractional counter. */
#define ADSS_DP_SCNTR_CFG_LONG_CNT(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_DP_SCNTR_CFG_LONG_CNT_SHIFT)) & ADSS_DP_SCNTR_CFG_LONG_CNT_MASK)

#define ADSS_DP_SCNTR_CFG_SHORT_LEN_MASK         (0x3FF0U)
#define ADSS_DP_SCNTR_CFG_SHORT_LEN_SHIFT        (4U)
/*! short_len - specifies the number of clock cycle to wait before incrementing the fractional
 *    counter when the short_cnt is selected. When the long_cnt is selected, the number of clock cycle to
 *    wait before incrementing the fractional counter will be (short_len + 1).
 */
#define ADSS_DP_SCNTR_CFG_SHORT_LEN(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_DP_SCNTR_CFG_SHORT_LEN_SHIFT)) & ADSS_DP_SCNTR_CFG_SHORT_LEN_MASK)

#define ADSS_DP_SCNTR_CFG_HW_CONTROLLED_MASK     (0x4000U)
#define ADSS_DP_SCNTR_CFG_HW_CONTROLLED_SHIFT    (14U)
/*! hw_controlled - Specifies whether the scntr parameters are under SW or HW control.
 *  0b0..Scntr parameters are under SW control.
 *  0b1..Scntr parameters are under HW control.
 */
#define ADSS_DP_SCNTR_CFG_HW_CONTROLLED(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_DP_SCNTR_CFG_HW_CONTROLLED_SHIFT)) & ADSS_DP_SCNTR_CFG_HW_CONTROLLED_MASK)

#define ADSS_DP_SCNTR_CFG_DT_MASK                (0x80000000U)
#define ADSS_DP_SCNTR_CFG_DT_SHIFT               (31U)
/*! dt - Don't touch. When '1', the module is running and it is illegal to change the contents of
 *    this register. When '0', the module is not running and it is safe to change the contents of this
 *    register.
 *  0b0..It is allowed to change the contents of this register.
 *  0b1..It is forbidden to change the contents of this register.
 */
#define ADSS_DP_SCNTR_CFG_DT(x)                  (((uint32_t)(((uint32_t)(x)) << ADSS_DP_SCNTR_CFG_DT_SHIFT)) & ADSS_DP_SCNTR_CFG_DT_MASK)
/*! @} */

/*! @name SCNTR_MI - Sample counter used for latency control. */
/*! @{ */

#define ADSS_DP_SCNTR_MI_FRAC_MASK               (0xFU)
#define ADSS_DP_SCNTR_MI_FRAC_SHIFT              (0U)
/*! frac - Value of the fractional counter sampled when a SYNC event occurs on the event bus.
 *    WARNING: this field can change when a SYNC event is detected and there is NO clock-domain crossing
 *    foreseen! The time between the SYNC event and the reading of the register must remain small in
 *    order to avoid synchronization isssues!!!
 */
#define ADSS_DP_SCNTR_MI_FRAC(x)                 (((uint32_t)(((uint32_t)(x)) << ADSS_DP_SCNTR_MI_FRAC_SHIFT)) & ADSS_DP_SCNTR_MI_FRAC_MASK)

#define ADSS_DP_SCNTR_MI_CNT_MASK                (0x7F0U)
#define ADSS_DP_SCNTR_MI_CNT_SHIFT               (4U)
/*! cnt - Value of the frame counter (incremented when a new frame is detected) sampled when a SYNC
 *    event occurs on the event bus. WARNING: this field can change when a SYNC event is detected
 *    and there is NO clock-domain crossing foreseen! The time between the SYNC event and the reading
 *    of the register must remain small in order to avoid synchronization isssues!!!
 */
#define ADSS_DP_SCNTR_MI_CNT(x)                  (((uint32_t)(((uint32_t)(x)) << ADSS_DP_SCNTR_MI_CNT_SHIFT)) & ADSS_DP_SCNTR_MI_CNT_MASK)
/*! @} */

/*! @name SCK_DETECT_CFG - Configuration register for sck and frame detection. This allows the data port to detect whether the sck and the frame inputs are interrupted. When either of the signals is interrupted, an event is generated onto DSP event bus. Afterwards, the module detects whether the sck and the frame signals are back on again. When both the signals are back on, another event is generated onto DSP event bus. */
/*! @{ */

#define ADSS_DP_SCK_DETECT_CFG_EVENT_SEL_SCK_MASK (0x7FU)
#define ADSS_DP_SCK_DETECT_CFG_EVENT_SEL_SCK_SHIFT (0U)
/*! event_sel_sck - Event selection on which event is used to sample the sck counter. */
#define ADSS_DP_SCK_DETECT_CFG_EVENT_SEL_SCK(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_DP_SCK_DETECT_CFG_EVENT_SEL_SCK_SHIFT)) & ADSS_DP_SCK_DETECT_CFG_EVENT_SEL_SCK_MASK)

#define ADSS_DP_SCK_DETECT_CFG_EVENT_SEL_FR_MASK (0x3F80U)
#define ADSS_DP_SCK_DETECT_CFG_EVENT_SEL_FR_SHIFT (7U)
/*! event_sel_fr - Event selection on which event is used to sample the frame counter. */
#define ADSS_DP_SCK_DETECT_CFG_EVENT_SEL_FR(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_DP_SCK_DETECT_CFG_EVENT_SEL_FR_SHIFT)) & ADSS_DP_SCK_DETECT_CFG_EVENT_SEL_FR_MASK)

#define ADSS_DP_SCK_DETECT_CFG_ENABLE_MASK       (0x4000U)
#define ADSS_DP_SCK_DETECT_CFG_ENABLE_SHIFT      (14U)
/*! enable - Specifies whether the functionality of sck and frame detection is enabled.
 *  0b0..Sck and frame detection is disabled.
 *  0b1..Sck and frame detection is enabled.
 */
#define ADSS_DP_SCK_DETECT_CFG_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_DP_SCK_DETECT_CFG_ENABLE_SHIFT)) & ADSS_DP_SCK_DETECT_CFG_ENABLE_MASK)

#define ADSS_DP_SCK_DETECT_CFG_DT_MASK           (0x80000000U)
#define ADSS_DP_SCK_DETECT_CFG_DT_SHIFT          (31U)
/*! dt - Don't touch. When '1', the module is running and it is illegal to change the contents of
 *    this register. When '0', the module is not running and it is safe to change the contents of this
 *    register.
 *  0b0..It is allowed to change the contents of this register.
 *  0b1..It is forbidden to change the contents of this register.
 */
#define ADSS_DP_SCK_DETECT_CFG_DT(x)             (((uint32_t)(((uint32_t)(x)) << ADSS_DP_SCK_DETECT_CFG_DT_SHIFT)) & ADSS_DP_SCK_DETECT_CFG_DT_MASK)
/*! @} */

/*! @name FIFO_EN - Enable register of the FIFO. */
/*! @{ */

#define ADSS_DP_FIFO_EN_EN_MASK                  (0x1U)
#define ADSS_DP_FIFO_EN_EN_SHIFT                 (0U)
/*! en - When this field is set, the fifo will accept the read/write requests.
 *  0b0..fifo disabled
 *  0b1..fifo enabled
 */
#define ADSS_DP_FIFO_EN_EN(x)                    (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FIFO_EN_EN_SHIFT)) & ADSS_DP_FIFO_EN_EN_MASK)

#define ADSS_DP_FIFO_EN_ACTIVE_MASK              (0x80000000U)
#define ADSS_DP_FIFO_EN_ACTIVE_SHIFT             (31U)
/*! active - The active bit indicates if the fifo is enabled.
 *  0b0..fifo disabled
 *  0b1..fifo enabled
 */
#define ADSS_DP_FIFO_EN_ACTIVE(x)                (((uint32_t)(((uint32_t)(x)) << ADSS_DP_FIFO_EN_ACTIVE_SHIFT)) & ADSS_DP_FIFO_EN_ACTIVE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADSS_DP_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_DP_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_DP_H_ */

