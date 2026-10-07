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
**         CMSIS Peripheral Access Layer for EVENT_CTRL
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
 * @file PERI_EVENT_CTRL.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for EVENT_CTRL
 *
 * CMSIS Peripheral Access Layer for EVENT_CTRL
 */

#if !defined(PERI_EVENT_CTRL_H_)
#define PERI_EVENT_CTRL_H_                       /**< Symbol preventing repeated inclusion */

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
   -- EVENT_CTRL Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup EVENT_CTRL_Peripheral_Access_Layer EVENT_CTRL Peripheral Access Layer
 * @{
 */

/** EVENT_CTRL - Register Layout Typedef */
typedef struct {
  __I  uint32_t IRQ_STATUS0;                       /**< IRQ_STATUS0, offset: 0x0 */
  __I  uint32_t IRQ_STATUS1;                       /**< IRQ_STATUS1, offset: 0x4 */
  __IO uint32_t IRQ_ENABLE0;                       /**< IRQ_ENABLE0, offset: 0x8 */
  __IO uint32_t IRQ_ENABLE1;                       /**< IRQ_ENABLE1, offset: 0xC */
  __O  uint32_t IRQ_CLR0;                          /**< IRQ_CLR0, offset: 0x10 */
  __O  uint32_t IRQ_CLR1;                          /**< IRQ_CLR1, offset: 0x14 */
  __IO uint32_t EVENT_STATUS0;                     /**< EVENT_STATUS0, offset: 0x18 */
  __IO uint32_t EVENT_STATUS1;                     /**< EVENT_STATUS1, offset: 0x1C */
  __O  uint32_t EVENT_OUT_GEN;                     /**< EVENT_OUT_GEN, offset: 0x20 */
  __IO uint32_t DMA_EVTMUX_SEL;                    /**< DMA_EVTMUX_SEL, offset: 0x24 */
  __IO uint32_t SCT_EVTMUX_SEL;                    /**< SCT_EVTMUX_SEL, offset: 0x28 */
       uint8_t RESERVED_0[4];
  __IO uint32_t CTIMER0_EVTMUX_SEL;                /**< CTIMER0_EVTMUX_SEL, offset: 0x30 */
  __IO uint32_t CTIMER1_EVTMUX_SEL;                /**< CTIMER1_EVTMUX_SEL, offset: 0x34 */
  __IO uint32_t CTIMER2_EVTMUX_SEL;                /**< CTIMER2_EVTMUX_SEL, offset: 0x38 */
  __IO uint32_t CTIMER3_EVTMUX_SEL;                /**< CTIMER3_EVTMUX_SEL, offset: 0x3C */
  __IO uint32_t CTIMER4_EVTMUX_SEL;                /**< CTIMER4_EVTMUX_SEL, offset: 0x40 */
       uint8_t RESERVED_1[12];
  __IO uint32_t PERIPHEVT_DMA_INST_SEL;            /**< PERIPHEVT_DMA_INST_SEL, offset: 0x50 */
  __IO uint32_t DMA_PERIPHEVT_MUX_SS0_SEL;         /**< DMA_PERIPHEVT_MUX_SS0_SEL, offset: 0x54 */
  __IO uint32_t DMA_PERIPHEVT_MUX_SS1_SEL;         /**< DMA_PERIPHEVT_MUX_SS1_SEL, offset: 0x58 */
       uint8_t RESERVED_2[4];
  __IO uint32_t CTIMER_PERIPHEVT_SS0_MSEL;         /**< CTIMER_PERIPHEVT_SS0_MSEL, offset: 0x60 */
  __IO uint32_t CTIMER_PERIPHEVT_SS1_MSEL;         /**< CTIMER_PERIPHEVT_SS1_MSEL, offset: 0x64 */
} EVENT_CTRL_Type;

/* ----------------------------------------------------------------------------
   -- EVENT_CTRL Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup EVENT_CTRL_Register_Masks EVENT_CTRL Register Masks
 * @{
 */

/*! @name IRQ_STATUS0 - IRQ_STATUS0 */
/*! @{ */

#define EVENT_CTRL_IRQ_STATUS0_IRQ_STATUS0_MASK  (0xFFFFFFFFU)
#define EVENT_CTRL_IRQ_STATUS0_IRQ_STATUS0_SHIFT (0U)
/*! irq_status0 - IRQ status corresponding to CSS input eventbus [31:0]. */
#define EVENT_CTRL_IRQ_STATUS0_IRQ_STATUS0(x)    (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_IRQ_STATUS0_IRQ_STATUS0_SHIFT)) & EVENT_CTRL_IRQ_STATUS0_IRQ_STATUS0_MASK)
/*! @} */

/*! @name IRQ_STATUS1 - IRQ_STATUS1 */
/*! @{ */

#define EVENT_CTRL_IRQ_STATUS1_IRQ_STATUS1_MASK  (0x7FU)
#define EVENT_CTRL_IRQ_STATUS1_IRQ_STATUS1_SHIFT (0U)
/*! irq_status1 - Bits[4:0] : IRQ status corresponds to CSS input eventbus [36:32]. Bits[6:5] : IRQ
 *    status corresponds to extss_error event [1:0].
 */
#define EVENT_CTRL_IRQ_STATUS1_IRQ_STATUS1(x)    (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_IRQ_STATUS1_IRQ_STATUS1_SHIFT)) & EVENT_CTRL_IRQ_STATUS1_IRQ_STATUS1_MASK)
/*! @} */

/*! @name IRQ_ENABLE0 - IRQ_ENABLE0 */
/*! @{ */

#define EVENT_CTRL_IRQ_ENABLE0_IRQ_ENABLE0_MASK  (0xFFFFFFFFU)
#define EVENT_CTRL_IRQ_ENABLE0_IRQ_ENABLE0_SHIFT (0U)
/*! irq_enable0 - IRQ enable corresponding to CSS input eventbus [31:0]. */
#define EVENT_CTRL_IRQ_ENABLE0_IRQ_ENABLE0(x)    (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_IRQ_ENABLE0_IRQ_ENABLE0_SHIFT)) & EVENT_CTRL_IRQ_ENABLE0_IRQ_ENABLE0_MASK)
/*! @} */

/*! @name IRQ_ENABLE1 - IRQ_ENABLE1 */
/*! @{ */

#define EVENT_CTRL_IRQ_ENABLE1_IRQ_ENABLE1_MASK  (0x7FU)
#define EVENT_CTRL_IRQ_ENABLE1_IRQ_ENABLE1_SHIFT (0U)
/*! irq_enable1 - Bits[4:0] : IRQ enable corresponds to CSS input eventbus [36:32]. Bits[6:5] : IRQ
 *    enable corresponds to extss_error event [1:0].
 */
#define EVENT_CTRL_IRQ_ENABLE1_IRQ_ENABLE1(x)    (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_IRQ_ENABLE1_IRQ_ENABLE1_SHIFT)) & EVENT_CTRL_IRQ_ENABLE1_IRQ_ENABLE1_MASK)
/*! @} */

/*! @name IRQ_CLR0 - IRQ_CLR0 */
/*! @{ */

#define EVENT_CTRL_IRQ_CLR0_IRQ_CLR0_MASK        (0xFFFFFFFFU)
#define EVENT_CTRL_IRQ_CLR0_IRQ_CLR0_SHIFT       (0U)
/*! irq_clr0 - IRQ clear corresponding to CSS eventbus [31:0] interrupt. write 1: Event IRQ cleared.
 *    write 0: No effect. Read always returns zero
 */
#define EVENT_CTRL_IRQ_CLR0_IRQ_CLR0(x)          (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_IRQ_CLR0_IRQ_CLR0_SHIFT)) & EVENT_CTRL_IRQ_CLR0_IRQ_CLR0_MASK)
/*! @} */

/*! @name IRQ_CLR1 - IRQ_CLR1 */
/*! @{ */

#define EVENT_CTRL_IRQ_CLR1_IRQ_CLR1_MASK        (0x7FU)
#define EVENT_CTRL_IRQ_CLR1_IRQ_CLR1_SHIFT       (0U)
/*! irq_clr1 - Bits [4:0] : IRQ clear corresponding to CSS eventbus [36:32] interrupt. Bits [6:5] :
 *    IRQ clear corresponding to extss_error event [1:0]interrupts. write 1: Event IRQ cleared.
 *    write 0: No effect. Read always returns zero
 */
#define EVENT_CTRL_IRQ_CLR1_IRQ_CLR1(x)          (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_IRQ_CLR1_IRQ_CLR1_SHIFT)) & EVENT_CTRL_IRQ_CLR1_IRQ_CLR1_MASK)
/*! @} */

/*! @name EVENT_STATUS0 - EVENT_STATUS0 */
/*! @{ */

#define EVENT_CTRL_EVENT_STATUS0_EVT_STATUS0_MASK (0xFFFFFFFFU)
#define EVENT_CTRL_EVENT_STATUS0_EVT_STATUS0_SHIFT (0U)
/*! evt_status0 - Shows the latched event status for event lines 0 to 31. The status bit is set when
 *    a event is detected on the respective event line. The status bit is cleared by writing '1' to
 *    the respective bit.
 */
#define EVENT_CTRL_EVENT_STATUS0_EVT_STATUS0(x)  (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_EVENT_STATUS0_EVT_STATUS0_SHIFT)) & EVENT_CTRL_EVENT_STATUS0_EVT_STATUS0_MASK)
/*! @} */

/*! @name EVENT_STATUS1 - EVENT_STATUS1 */
/*! @{ */

#define EVENT_CTRL_EVENT_STATUS1_EVT_STATUS1_MASK (0x7FFFFU)
#define EVENT_CTRL_EVENT_STATUS1_EVT_STATUS1_SHIFT (0U)
/*! evt_status1 - Bits [15:0]: Shows the latched event status for event lines 48 to 32. Bits
 *    [17:16]:Shows the latched event status for extss_error[1:0] event inputs Bit[18]: Shows the latched
 *    event status for ext_arm_rxev event input. The status bit is set when a event is detected on
 *    the respective event line. The status bit is cleared by writing '1' to the respective bit.
 */
#define EVENT_CTRL_EVENT_STATUS1_EVT_STATUS1(x)  (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_EVENT_STATUS1_EVT_STATUS1_SHIFT)) & EVENT_CTRL_EVENT_STATUS1_EVT_STATUS1_MASK)
/*! @} */

/*! @name EVENT_OUT_GEN - EVENT_OUT_GEN */
/*! @{ */

#define EVENT_CTRL_EVENT_OUT_GEN_NSS_EVENTS_MASK (0xFFU)
#define EVENT_CTRL_EVENT_OUT_GEN_NSS_EVENTS_SHIFT (0U)
/*! nss_events - Generates programmable events out towards NSS. Write one to the bit(s) to trigger the corresponding NSS event out. */
#define EVENT_CTRL_EVENT_OUT_GEN_NSS_EVENTS(x)   (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_EVENT_OUT_GEN_NSS_EVENTS_SHIFT)) & EVENT_CTRL_EVENT_OUT_GEN_NSS_EVENTS_MASK)

#define EVENT_CTRL_EVENT_OUT_GEN_ADSS_EVENTS_MASK (0xFF00U)
#define EVENT_CTRL_EVENT_OUT_GEN_ADSS_EVENTS_SHIFT (8U)
/*! adss_events - Generates programmable events out towards ADSS. Write one to the bit(s) to trigger the corresponding ADSS event out. */
#define EVENT_CTRL_EVENT_OUT_GEN_ADSS_EVENTS(x)  (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_EVENT_OUT_GEN_ADSS_EVENTS_SHIFT)) & EVENT_CTRL_EVENT_OUT_GEN_ADSS_EVENTS_MASK)
/*! @} */

/*! @name DMA_EVTMUX_SEL - DMA_EVTMUX_SEL */
/*! @{ */

#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX0_SEL_MASK (0x7U)
#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX0_SEL_SHIFT (0U)
/*! dma_evtmux0_sel - Select for DMA Event Input Mux0.
 *  0b000..Select event_in[0]
 *  0b001..Select event_in[8]
 *  0b010..Select event_in[16]
 *  0b011..Select event_in[24]
 *  0b100..Select event_in[32]
 *  0b101..Select event_in[40]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX0_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX0_SEL_SHIFT)) & EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX0_SEL_MASK)

#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX1_SEL_MASK (0x70U)
#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX1_SEL_SHIFT (4U)
/*! dma_evtmux1_sel - Select for DMA Event Input Mux1.
 *  0b000..Select event_in[1]
 *  0b001..Select event_in[9]
 *  0b010..Select event_in[17]
 *  0b011..Select event_in[25]
 *  0b100..Select event_in[33]
 *  0b101..Select event_in[41]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX1_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX1_SEL_SHIFT)) & EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX1_SEL_MASK)

#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX2_SEL_MASK (0x700U)
#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX2_SEL_SHIFT (8U)
/*! dma_evtmux2_sel - Select for DMA Event Input Mux2.
 *  0b000..Select event_in[2]
 *  0b001..Select event_in[10]
 *  0b010..Select event_in[18]
 *  0b011..Select event_in[26]
 *  0b100..Select event_in[34]
 *  0b101..Select event_in[42]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX2_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX2_SEL_SHIFT)) & EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX2_SEL_MASK)

#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX3_SEL_MASK (0x7000U)
#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX3_SEL_SHIFT (12U)
/*! dma_evtmux3_sel - Select for DMA Event Input Mux3.
 *  0b000..Select event_in[3]
 *  0b001..Select event_in[11]
 *  0b010..Select event_in[19]
 *  0b011..Select event_in[27]
 *  0b100..Select event_in[35]
 *  0b101..Select event_in[43]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX3_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX3_SEL_SHIFT)) & EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX3_SEL_MASK)

#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX4_SEL_MASK (0x70000U)
#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX4_SEL_SHIFT (16U)
/*! dma_evtmux4_sel - Select for DMA Event Input Mux4.
 *  0b000..Select event_in[4]
 *  0b001..Select event_in[12]
 *  0b010..Select event_in[20]
 *  0b011..Select event_in[28]
 *  0b100..Select event_in[36]
 *  0b101..Select event_in[44]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX4_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX4_SEL_SHIFT)) & EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX4_SEL_MASK)

#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX5_SEL_MASK (0x700000U)
#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX5_SEL_SHIFT (20U)
/*! dma_evtmux5_sel - Select for DMA Event Input Mux5.
 *  0b000..Select event_in[5]
 *  0b001..Select event_in[13]
 *  0b010..Select event_in[21]
 *  0b011..Select event_in[29]
 *  0b100..Select event_in[37]
 *  0b101..Select event_in[45]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX5_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX5_SEL_SHIFT)) & EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX5_SEL_MASK)

#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX6_SEL_MASK (0x7000000U)
#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX6_SEL_SHIFT (24U)
/*! dma_evtmux6_sel - Select for DMA Event Input Mux6.
 *  0b000..Select event_in[6]
 *  0b001..Select event_in[14]
 *  0b010..Select event_in[22]
 *  0b011..Select event_in[30]
 *  0b100..Select event_in[38]
 *  0b101..Select event_in[46]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX6_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX6_SEL_SHIFT)) & EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX6_SEL_MASK)

#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX7_SEL_MASK (0x70000000U)
#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX7_SEL_SHIFT (28U)
/*! dma_evtmux7_sel - Select for DMA Event Input Mux7.
 *  0b000..Select event_in[7]
 *  0b001..Select event_in[15]
 *  0b010..Select event_in[23]
 *  0b011..Select event_in[31]
 *  0b100..Select event_in[39]
 *  0b101..Select event_in[47]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX7_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX7_SEL_SHIFT)) & EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX7_SEL_MASK)
/*! @} */

/*! @name SCT_EVTMUX_SEL - SCT_EVTMUX_SEL */
/*! @{ */

#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX0_SEL_MASK (0x7U)
#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX0_SEL_SHIFT (0U)
/*! sct_evtmux0_sel - Select for SCT Event Input Mux0.
 *  0b000..Select event_in[0]
 *  0b001..Select event_in[8]
 *  0b010..Select event_in[16]
 *  0b011..Select event_in[24]
 *  0b100..Select event_in[32]
 *  0b101..Select event_in[40]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX0_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX0_SEL_SHIFT)) & EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX0_SEL_MASK)

#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX1_SEL_MASK (0x70U)
#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX1_SEL_SHIFT (4U)
/*! sct_evtmux1_sel - Select for SCT Event Input Mux1.
 *  0b000..Select event_in[1]
 *  0b001..Select event_in[9]
 *  0b010..Select event_in[17]
 *  0b011..Select event_in[25]
 *  0b100..Select event_in[33]
 *  0b101..Select event_in[41]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX1_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX1_SEL_SHIFT)) & EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX1_SEL_MASK)

#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX2_SEL_MASK (0x700U)
#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX2_SEL_SHIFT (8U)
/*! sct_evtmux2_sel - Select for SCT Event Input Mux2.
 *  0b000..Select event_in[2]
 *  0b001..Select event_in[10]
 *  0b010..Select event_in[18]
 *  0b011..Select event_in[26]
 *  0b100..Select event_in[34]
 *  0b101..Select event_in[42]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX2_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX2_SEL_SHIFT)) & EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX2_SEL_MASK)

#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX3_SEL_MASK (0x7000U)
#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX3_SEL_SHIFT (12U)
/*! sct_evtmux3_sel - Select for SCT Event Input Mux3.
 *  0b000..Select event_in[3]
 *  0b001..Select event_in[11]
 *  0b010..Select event_in[19]
 *  0b011..Select event_in[27]
 *  0b100..Select event_in[35]
 *  0b101..Select event_in[43]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX3_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX3_SEL_SHIFT)) & EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX3_SEL_MASK)

#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX4_SEL_MASK (0x70000U)
#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX4_SEL_SHIFT (16U)
/*! sct_evtmux4_sel - Select for SCT Event Input Mux4.
 *  0b000..Select event_in[4]
 *  0b001..Select event_in[12]
 *  0b010..Select event_in[20]
 *  0b011..Select event_in[28]
 *  0b100..Select event_in[36]
 *  0b101..Select event_in[44]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX4_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX4_SEL_SHIFT)) & EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX4_SEL_MASK)

#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX5_SEL_MASK (0x700000U)
#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX5_SEL_SHIFT (20U)
/*! sct_evtmux5_sel - Select for SCT Event Input Mux5.
 *  0b000..Select event_in[5]
 *  0b001..Select event_in[13]
 *  0b010..Select event_in[21]
 *  0b011..Select event_in[29]
 *  0b100..Select event_in[37]
 *  0b101..Select event_in[45]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX5_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX5_SEL_SHIFT)) & EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX5_SEL_MASK)

#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX6_SEL_MASK (0x7000000U)
#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX6_SEL_SHIFT (24U)
/*! sct_evtmux6_sel - Select for SCT Event Input Mux6.
 *  0b000..Select event_in[6]
 *  0b001..Select event_in[14]
 *  0b010..Select event_in[22]
 *  0b011..Select event_in[30]
 *  0b100..Select event_in[38]
 *  0b101..Select event_in[46]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX6_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX6_SEL_SHIFT)) & EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX6_SEL_MASK)

#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX7_SEL_MASK (0x70000000U)
#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX7_SEL_SHIFT (28U)
/*! sct_evtmux7_sel - Select for SCT Event Input Mux7.
 *  0b000..Select event_in[7]
 *  0b001..Select event_in[15]
 *  0b010..Select event_in[23]
 *  0b011..Select event_in[31]
 *  0b100..Select event_in[39]
 *  0b101..Select event_in[47]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX7_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX7_SEL_SHIFT)) & EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX7_SEL_MASK)
/*! @} */

/*! @name CTIMER0_EVTMUX_SEL - CTIMER0_EVTMUX_SEL */
/*! @{ */

#define EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX0_SEL_MASK (0xFU)
#define EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX0_SEL_SHIFT (0U)
/*! ctimer0_evtmux0_sel - Select for CTIMER0 Event Input Mux.
 *  0b0000..Select event_in[0]
 *  0b0001..Select event_in[4]
 *  0b0010..Select event_in[8]
 *  0b0011..Select event_in[12]
 *  0b0100..Select event_in[16]
 *  0b0101..Select event_in[20]
 *  0b0110..Select event_in[24]
 *  0b0111..Select event_in[28]
 *  0b1000..Select event_in[32]
 *  0b1001..Select event_in[36]
 *  0b1010..Select event_in[40]
 *  0b1011..Select event_in[44]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX0_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX0_SEL_SHIFT)) & EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX0_SEL_MASK)

#define EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX1_SEL_MASK (0xF0U)
#define EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX1_SEL_SHIFT (4U)
/*! ctimer0_evtmux1_sel - Select for CTIMER0 Event Input Mux1.
 *  0b0000..Select event_in[1]
 *  0b0001..Select event_in[5]
 *  0b0010..Select event_in[9]
 *  0b0011..Select event_in[13]
 *  0b0100..Select event_in[17]
 *  0b0101..Select event_in[21]
 *  0b0110..Select event_in[25]
 *  0b0111..Select event_in[29]
 *  0b1000..Select event_in[33]
 *  0b1001..Select event_in[37]
 *  0b1010..Select event_in[41]
 *  0b1011..Select event_in[45]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX1_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX1_SEL_SHIFT)) & EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX1_SEL_MASK)

#define EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX2_SEL_MASK (0xF00U)
#define EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX2_SEL_SHIFT (8U)
/*! ctimer0_evtmux2_sel - Select for CTIMER0 Event Input Mux2.
 *  0b0000..Select event_in[2]
 *  0b0001..Select event_in[6]
 *  0b0010..Select event_in[10]
 *  0b0011..Select event_in[14]
 *  0b0100..Select event_in[18]
 *  0b0101..Select event_in[22]
 *  0b0110..Select event_in[26]
 *  0b0111..Select event_in[30]
 *  0b1000..Select event_in[34]
 *  0b1001..Select event_in[38]
 *  0b1010..Select event_in[42]
 *  0b1011..Select event_in[46]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX2_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX2_SEL_SHIFT)) & EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX2_SEL_MASK)

#define EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX3_SEL_MASK (0xF000U)
#define EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX3_SEL_SHIFT (12U)
/*! ctimer0_evtmux3_sel - Select for CTIMER0 Event Input Mux3.
 *  0b0000..Select event_in[3]
 *  0b0001..Select event_in[7]
 *  0b0010..Select event_in[11]
 *  0b0011..Select event_in[15]
 *  0b0100..Select event_in[19]
 *  0b0101..Select event_in[23]
 *  0b0110..Select event_in[27]
 *  0b0111..Select event_in[31]
 *  0b1000..Select event_in[35]
 *  0b1001..Select event_in[39]
 *  0b1010..Select event_in[43]
 *  0b1011..Select event_in[47]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX3_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX3_SEL_SHIFT)) & EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX3_SEL_MASK)
/*! @} */

/*! @name CTIMER1_EVTMUX_SEL - CTIMER1_EVTMUX_SEL */
/*! @{ */

#define EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX0_SEL_MASK (0xFU)
#define EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX0_SEL_SHIFT (0U)
/*! ctimer1_evtmux0_sel - Select for CTIMER1 Event Input Mux0.
 *  0b0000..Select event_in[0]
 *  0b0001..Select event_in[4]
 *  0b0010..Select event_in[8]
 *  0b0011..Select event_in[12]
 *  0b0100..Select event_in[16]
 *  0b0101..Select event_in[20]
 *  0b0110..Select event_in[24]
 *  0b0111..Select event_in[28]
 *  0b1000..Select event_in[32]
 *  0b1001..Select event_in[36]
 *  0b1010..Select event_in[40]
 *  0b1011..Select event_in[44]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX0_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX0_SEL_SHIFT)) & EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX0_SEL_MASK)

#define EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX1_SEL_MASK (0xF0U)
#define EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX1_SEL_SHIFT (4U)
/*! ctimer1_evtmux1_sel - Select for CTIMER1 Event Input Mux1.
 *  0b0000..Select event_in[1]
 *  0b0001..Select event_in[5]
 *  0b0010..Select event_in[9]
 *  0b0011..Select event_in[13]
 *  0b0100..Select event_in[17]
 *  0b0101..Select event_in[21]
 *  0b0110..Select event_in[25]
 *  0b0111..Select event_in[29]
 *  0b1000..Select event_in[33]
 *  0b1001..Select event_in[37]
 *  0b1010..Select event_in[41]
 *  0b1011..Select event_in[45]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX1_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX1_SEL_SHIFT)) & EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX1_SEL_MASK)

#define EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX2_SEL_MASK (0xF00U)
#define EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX2_SEL_SHIFT (8U)
/*! ctimer1_evtmux2_sel - Select for CTIMER1 Event Input Mux2.
 *  0b0000..Select event_in[2]
 *  0b0001..Select event_in[6]
 *  0b0010..Select event_in[10]
 *  0b0011..Select event_in[14]
 *  0b0100..Select event_in[18]
 *  0b0101..Select event_in[22]
 *  0b0110..Select event_in[26]
 *  0b0111..Select event_in[30]
 *  0b1000..Select event_in[34]
 *  0b1001..Select event_in[38]
 *  0b1010..Select event_in[42]
 *  0b1011..Select event_in[46]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX2_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX2_SEL_SHIFT)) & EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX2_SEL_MASK)

#define EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX3_SEL_MASK (0xF000U)
#define EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX3_SEL_SHIFT (12U)
/*! ctimer1_evtmux3_sel - Select for CTIMER1 Event Input Mux3.
 *  0b0000..Select event_in[3]
 *  0b0001..Select event_in[7]
 *  0b0010..Select event_in[11]
 *  0b0011..Select event_in[15]
 *  0b0100..Select event_in[19]
 *  0b0101..Select event_in[23]
 *  0b0110..Select event_in[27]
 *  0b0111..Select event_in[31]
 *  0b1000..Select event_in[35]
 *  0b1001..Select event_in[39]
 *  0b1010..Select event_in[43]
 *  0b1011..Select event_in[47]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX3_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX3_SEL_SHIFT)) & EVENT_CTRL_CTIMER1_EVTMUX_SEL_CTIMER1_EVTMUX3_SEL_MASK)
/*! @} */

/*! @name CTIMER2_EVTMUX_SEL - CTIMER2_EVTMUX_SEL */
/*! @{ */

#define EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX0_SEL_MASK (0xFU)
#define EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX0_SEL_SHIFT (0U)
/*! ctimer2_evtmux0_sel - Select for CTIMER2 Event Input Mux0.
 *  0b0000..Select event_in[0]
 *  0b0001..Select event_in[4]
 *  0b0010..Select event_in[8]
 *  0b0011..Select event_in[12]
 *  0b0100..Select event_in[16]
 *  0b0101..Select event_in[20]
 *  0b0110..Select event_in[24]
 *  0b0111..Select event_in[28]
 *  0b1000..Select event_in[32]
 *  0b1001..Select event_in[36]
 *  0b1010..Select event_in[40]
 *  0b1011..Select event_in[44]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX0_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX0_SEL_SHIFT)) & EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX0_SEL_MASK)

#define EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX1_SEL_MASK (0xF0U)
#define EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX1_SEL_SHIFT (4U)
/*! ctimer2_evtmux1_sel - Select for CTIMER2 Event Input Mux1.
 *  0b0000..Select event_in[1]
 *  0b0001..Select event_in[5]
 *  0b0010..Select event_in[9]
 *  0b0011..Select event_in[13]
 *  0b0100..Select event_in[17]
 *  0b0101..Select event_in[21]
 *  0b0110..Select event_in[25]
 *  0b0111..Select event_in[29]
 *  0b1000..Select event_in[33]
 *  0b1001..Select event_in[37]
 *  0b1010..Select event_in[41]
 *  0b1011..Select event_in[45]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX1_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX1_SEL_SHIFT)) & EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX1_SEL_MASK)

#define EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX2_SEL_MASK (0xF00U)
#define EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX2_SEL_SHIFT (8U)
/*! ctimer2_evtmux2_sel - Select for CTIMER2 Event Input Mux2.
 *  0b0000..Select event_in[2]
 *  0b0001..Select event_in[6]
 *  0b0010..Select event_in[10]
 *  0b0011..Select event_in[14]
 *  0b0100..Select event_in[18]
 *  0b0101..Select event_in[22]
 *  0b0110..Select event_in[26]
 *  0b0111..Select event_in[30]
 *  0b1000..Select event_in[34]
 *  0b1001..Select event_in[38]
 *  0b1010..Select event_in[42]
 *  0b1011..Select event_in[46]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX2_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX2_SEL_SHIFT)) & EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX2_SEL_MASK)

#define EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX3_SEL_MASK (0xF000U)
#define EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX3_SEL_SHIFT (12U)
/*! ctimer2_evtmux3_sel - Select for CTIMER2 Event Input Mux3.
 *  0b0000..Select event_in[3]
 *  0b0001..Select event_in[7]
 *  0b0010..Select event_in[11]
 *  0b0011..Select event_in[15]
 *  0b0100..Select event_in[19]
 *  0b0101..Select event_in[23]
 *  0b0110..Select event_in[27]
 *  0b0111..Select event_in[31]
 *  0b1000..Select event_in[35]
 *  0b1001..Select event_in[39]
 *  0b1010..Select event_in[43]
 *  0b1011..Select event_in[47]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX3_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX3_SEL_SHIFT)) & EVENT_CTRL_CTIMER2_EVTMUX_SEL_CTIMER2_EVTMUX3_SEL_MASK)
/*! @} */

/*! @name CTIMER3_EVTMUX_SEL - CTIMER3_EVTMUX_SEL */
/*! @{ */

#define EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX0_SEL_MASK (0xFU)
#define EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX0_SEL_SHIFT (0U)
/*! ctimer3_evtmux0_sel - Select for CTIMER3 Event Input Mux0.
 *  0b0000..Select event_in[0]
 *  0b0001..Select event_in[4]
 *  0b0010..Select event_in[8]
 *  0b0011..Select event_in[12]
 *  0b0100..Select event_in[16]
 *  0b0101..Select event_in[20]
 *  0b0110..Select event_in[24]
 *  0b0111..Select event_in[28]
 *  0b1000..Select event_in[32]
 *  0b1001..Select event_in[36]
 *  0b1010..Select event_in[40]
 *  0b1011..Select event_in[44]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX0_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX0_SEL_SHIFT)) & EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX0_SEL_MASK)

#define EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX1_SEL_MASK (0xF0U)
#define EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX1_SEL_SHIFT (4U)
/*! ctimer3_evtmux1_sel - Select for CTIMER3 Event Input Mux1.
 *  0b0000..Select event_in[1]
 *  0b0001..Select event_in[5]
 *  0b0010..Select event_in[9]
 *  0b0011..Select event_in[13]
 *  0b0100..Select event_in[17]
 *  0b0101..Select event_in[21]
 *  0b0110..Select event_in[25]
 *  0b0111..Select event_in[29]
 *  0b1000..Select event_in[33]
 *  0b1001..Select event_in[37]
 *  0b1010..Select event_in[41]
 *  0b1011..Select event_in[45]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX1_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX1_SEL_SHIFT)) & EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX1_SEL_MASK)

#define EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX2_SEL_MASK (0xF00U)
#define EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX2_SEL_SHIFT (8U)
/*! ctimer3_evtmux2_sel - Select for CTIMER3 Event Input Mux2.
 *  0b0000..Select event_in[2]
 *  0b0001..Select event_in[6]
 *  0b0010..Select event_in[10]
 *  0b0011..Select event_in[14]
 *  0b0100..Select event_in[18]
 *  0b0101..Select event_in[22]
 *  0b0110..Select event_in[26]
 *  0b0111..Select event_in[30]
 *  0b1000..Select event_in[34]
 *  0b1001..Select event_in[38]
 *  0b1010..Select event_in[42]
 *  0b1011..Select event_in[46]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX2_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX2_SEL_SHIFT)) & EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX2_SEL_MASK)

#define EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX3_SEL_MASK (0xF000U)
#define EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX3_SEL_SHIFT (12U)
/*! ctimer3_evtmux3_sel - Select for CTIMER3 Event Input Mux3.
 *  0b0000..Select event_in[3]
 *  0b0001..Select event_in[7]
 *  0b0010..Select event_in[11]
 *  0b0011..Select event_in[15]
 *  0b0100..Select event_in[19]
 *  0b0101..Select event_in[23]
 *  0b0110..Select event_in[27]
 *  0b0111..Select event_in[31]
 *  0b1000..Select event_in[35]
 *  0b1001..Select event_in[39]
 *  0b1010..Select event_in[43]
 *  0b1011..Select event_in[47]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX3_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX3_SEL_SHIFT)) & EVENT_CTRL_CTIMER3_EVTMUX_SEL_CTIMER3_EVTMUX3_SEL_MASK)
/*! @} */

/*! @name CTIMER4_EVTMUX_SEL - CTIMER4_EVTMUX_SEL */
/*! @{ */

#define EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX0_SEL_MASK (0xFU)
#define EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX0_SEL_SHIFT (0U)
/*! ctimer4_evtmux0_sel - Select for CTIMER4 Event Input Mux0.
 *  0b0000..Select event_in[0]
 *  0b0001..Select event_in[4]
 *  0b0010..Select event_in[8]
 *  0b0011..Select event_in[12]
 *  0b0100..Select event_in[16]
 *  0b0101..Select event_in[20]
 *  0b0110..Select event_in[24]
 *  0b0111..Select event_in[28]
 *  0b1000..Select event_in[32]
 *  0b1001..Select event_in[36]
 *  0b1010..Select event_in[40]
 *  0b1011..Select event_in[44]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX0_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX0_SEL_SHIFT)) & EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX0_SEL_MASK)

#define EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX1_SEL_MASK (0xF0U)
#define EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX1_SEL_SHIFT (4U)
/*! ctimer4_evtmux1_sel - Select for CTIMER4 Event Input Mux1.
 *  0b0000..Select event_in[1]
 *  0b0001..Select event_in[5]
 *  0b0010..Select event_in[9]
 *  0b0011..Select event_in[13]
 *  0b0100..Select event_in[17]
 *  0b0101..Select event_in[21]
 *  0b0110..Select event_in[25]
 *  0b0111..Select event_in[29]
 *  0b1000..Select event_in[33]
 *  0b1001..Select event_in[37]
 *  0b1010..Select event_in[41]
 *  0b1011..Select event_in[45]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX1_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX1_SEL_SHIFT)) & EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX1_SEL_MASK)

#define EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX2_SEL_MASK (0xF00U)
#define EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX2_SEL_SHIFT (8U)
/*! ctimer4_evtmux2_sel - Select for CTIMER4 Event Input Mux2.
 *  0b0000..Select event_in[2]
 *  0b0001..Select event_in[6]
 *  0b0010..Select event_in[10]
 *  0b0011..Select event_in[14]
 *  0b0100..Select event_in[18]
 *  0b0101..Select event_in[22]
 *  0b0110..Select event_in[26]
 *  0b0111..Select event_in[30]
 *  0b1000..Select event_in[34]
 *  0b1001..Select event_in[38]
 *  0b1010..Select event_in[42]
 *  0b1011..Select event_in[46]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX2_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX2_SEL_SHIFT)) & EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX2_SEL_MASK)

#define EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX3_SEL_MASK (0xF000U)
#define EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX3_SEL_SHIFT (12U)
/*! ctimer4_evtmux3_sel - Select for CTIMER4 Event Input Mux3.
 *  0b0000..Select event_in[3]
 *  0b0001..Select event_in[7]
 *  0b0010..Select event_in[11]
 *  0b0011..Select event_in[15]
 *  0b0100..Select event_in[19]
 *  0b0101..Select event_in[23]
 *  0b0110..Select event_in[27]
 *  0b0111..Select event_in[31]
 *  0b1000..Select event_in[35]
 *  0b1001..Select event_in[39]
 *  0b1010..Select event_in[43]
 *  0b1011..Select event_in[47]
 *  0b1100-0b1111..Reserved
 */
#define EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX3_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX3_SEL_SHIFT)) & EVENT_CTRL_CTIMER4_EVTMUX_SEL_CTIMER4_EVTMUX3_SEL_MASK)
/*! @} */

/*! @name PERIPHEVT_DMA_INST_SEL - PERIPHEVT_DMA_INST_SEL */
/*! @{ */

#define EVENT_CTRL_PERIPHEVT_DMA_INST_SEL_PERIPHEVT_DMAINST_SEL_MASK (0x1U)
#define EVENT_CTRL_PERIPHEVT_DMA_INST_SEL_PERIPHEVT_DMAINST_SEL_SHIFT (0U)
/*! periphevt_dmainst_sel - This register select between SDMA0 and SDMA1 complete_done outputs to be send to periheral event mux.
 *  0b0..SDMA0 complete_done used for peripheral eventout muxin
 *  0b1..SDMA1 complete_done used for peripheral eventout muxing
 */
#define EVENT_CTRL_PERIPHEVT_DMA_INST_SEL_PERIPHEVT_DMAINST_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_PERIPHEVT_DMA_INST_SEL_PERIPHEVT_DMAINST_SEL_SHIFT)) & EVENT_CTRL_PERIPHEVT_DMA_INST_SEL_PERIPHEVT_DMAINST_SEL_MASK)
/*! @} */

/*! @name DMA_PERIPHEVT_MUX_SS0_SEL - DMA_PERIPHEVT_MUX_SS0_SEL */
/*! @{ */

#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX0_SEL_MASK (0x7U)
#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX0_SEL_SHIFT (0U)
/*! dma_periphevt_ss0_mux0_sel - Select for DMA Peripheral Event out SS0 Mux0. Selected event will
 *    be driven on Event output : op_periph_events_out_req[0].
 *  0b000..Select dma_cmplt_done[0]
 *  0b001..Select dma_cmplt_done[1]
 *  0b010..Select dma_cmplt_done[2]
 *  0b011..Select dma_cmplt_done[3]
 *  0b100..Select dma_cmplt_done[4]
 *  0b101..Select dma_cmplt_done[5]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX0_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX0_SEL_SHIFT)) & EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX0_SEL_MASK)

#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX1_SEL_MASK (0x70U)
#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX1_SEL_SHIFT (4U)
/*! dma_periphevt_ss0_mux1_sel - Select for DMA Peripheral Event out SS0 Mux1. Selected event will
 *    be driven on Event output : op_periph_events_out_req[1]
 *  0b000..Select dma_cmplt_done[6]
 *  0b001..Select dma_cmplt_done[7]
 *  0b010..Select dma_cmplt_done[8]
 *  0b011..Select dma_cmplt_done[9]
 *  0b100..Select dma_cmplt_done[10]
 *  0b101..Select dma_cmplt_done[11]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX1_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX1_SEL_SHIFT)) & EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX1_SEL_MASK)

#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX2_SEL_MASK (0x700U)
#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX2_SEL_SHIFT (8U)
/*! dma_periphevt_ss0_mux2_sel - Select for DMA Peripheral Event out SS0 Mux2. Selected event will
 *    be driven on Event output : op_periph_events_out_req[2].
 *  0b000..Select dma_cmplt_done[12]
 *  0b001..Select dma_cmplt_done[13]
 *  0b010..Select dma_cmplt_done[14]
 *  0b011..Select dma_cmplt_done[15]
 *  0b100..Select dma_cmplt_done[16]
 *  0b101..Select dma_cmplt_done[17]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX2_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX2_SEL_SHIFT)) & EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX2_SEL_MASK)

#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX3_SEL_MASK (0x7000U)
#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX3_SEL_SHIFT (12U)
/*! dma_periphevt_ss0_mux3_sel - Select for DMA Peripheral Event out SS0 Mux3. Selected event will
 *    be driven on Event output : op_periph_events_out_req[3].
 *  0b000..Select dma_cmplt_done[18]
 *  0b001..Select dma_cmplt_done[19]
 *  0b010..Select dma_cmplt_done[20]
 *  0b011..Select dma_cmplt_done[21]
 *  0b100..Select dma_cmplt_done[22]
 *  0b101..Select dma_cmplt_done[23]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX3_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX3_SEL_SHIFT)) & EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX3_SEL_MASK)
/*! @} */

/*! @name DMA_PERIPHEVT_MUX_SS1_SEL - DMA_PERIPHEVT_MUX_SS1_SEL */
/*! @{ */

#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX0_SEL_MASK (0x7U)
#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX0_SEL_SHIFT (0U)
/*! dma_periphevt_ss1_mux0_sel - Select for DMA Peripheral Event out SS1 Mux0. Selected event will
 *    be driven on Event output : op_periph_events_out_req[4].
 *  0b000..Select dma_cmplt_done[0]
 *  0b001..Select dma_cmplt_done[1]
 *  0b010..Select dma_cmplt_done[2]
 *  0b011..Select dma_cmplt_done[3]
 *  0b100..Select dma_cmplt_done[4]
 *  0b101..Select dma_cmplt_done[5]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX0_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX0_SEL_SHIFT)) & EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX0_SEL_MASK)

#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX1_SEL_MASK (0x70U)
#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX1_SEL_SHIFT (4U)
/*! dma_periphevt_ss1_mux1_sel - Select for DMA Peripheral Event out SS1 Mux1. Selected event will
 *    be driven on Event output : op_periph_events_out_req[5].
 *  0b000..Select dma_cmplt_done[6]
 *  0b001..Select dma_cmplt_done[7]
 *  0b010..Select dma_cmplt_done[8]
 *  0b011..Select dma_cmplt_done[9]
 *  0b100..Select dma_cmplt_done[10]
 *  0b101..Select dma_cmplt_done[11]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX1_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX1_SEL_SHIFT)) & EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX1_SEL_MASK)

#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX2_SEL_MASK (0x700U)
#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX2_SEL_SHIFT (8U)
/*! dma_periphevt_ss1_mux2_sel - Select for DMA Peripheral Event out SS1 Mux2. Selected event will
 *    be driven on Event output : op_periph_events_out_req[6].
 *  0b000..Select dma_cmplt_done[12]
 *  0b001..Select dma_cmplt_done[13]
 *  0b010..Select dma_cmplt_done[14]
 *  0b011..Select dma_cmplt_done[15]
 *  0b100..Select dma_cmplt_done[16]
 *  0b101..Select dma_cmplt_done[17]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX2_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX2_SEL_SHIFT)) & EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX2_SEL_MASK)

#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX3_SEL_MASK (0x7000U)
#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX3_SEL_SHIFT (12U)
/*! dma_periphevt_ss1_mux3_sel - Select for DMA Peripheral Event out SS1 Mux3. Selected event will
 *    be driven on Event output : op_periph_events_out_req[7]
 *  0b000..Select dma_cmplt_done[18]
 *  0b001..Select dma_cmplt_done[19]
 *  0b010..Select dma_cmplt_done[20]
 *  0b011..Select dma_cmplt_done[21]
 *  0b100..Select dma_cmplt_done[22]
 *  0b101..Select dma_cmplt_done[23]
 *  0b110-0b111..Reserved
 */
#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX3_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX3_SEL_SHIFT)) & EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX3_SEL_MASK)
/*! @} */

/*! @name CTIMER_PERIPHEVT_SS0_MSEL - CTIMER_PERIPHEVT_SS0_MSEL */
/*! @{ */

#define EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX0_SEL_MASK (0x1FU)
#define EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX0_SEL_SHIFT (0U)
/*! ctimer_periphevet_ss0_mux0_sel - Select Ctimer Peripheral event out SS0 MUX0. Selected event
 *    will be driven on Event output : op_periph_events_out_req[8].
 *  0b00000..Select CTIMER0 Match0
 *  0b00001..Select CTIMER1 Match0
 *  0b00010..Select CTIMER2 Match0
 *  0b00011..Select CTIMER3 Match0
 *  0b00100..Select CTIMER4 Match0
 *  0b00101..Select CTIMER0 Match1
 *  0b00110..Select CTIMER1 Match1
 *  0b00111..Select CTIMER2 Match1
 *  0b01000..Select CTIMER3 Match1
 *  0b01001..Select CTIMER4 Match1
 *  0b01010..Select CTIMER0 Match2
 *  0b01011..Select CTIMER1 Match2
 *  0b01100..Select CTIMER2 Match2
 *  0b01101..Select CTIMER3 Match2
 *  0b01110..Select CTIMER4 Match2
 *  0b01111..Select CTIMER0 Match3
 *  0b10000..Select CTIMER1 Match3
 *  0b10001..Select CTIMER2 Match3
 *  0b10010..Select CTIMER3 Match3
 *  0b10011..Select CTIMER4 Match3
 *  0b10100-0b11111..Reserved
 */
#define EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX0_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX0_SEL_SHIFT)) & EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX0_SEL_MASK)

#define EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX1_SEL_MASK (0x1F00U)
#define EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX1_SEL_SHIFT (8U)
/*! ctimer_periphevet_ss0_mux1_sel - Select Ctimer Peripheral event out SS0 MUX1. Selected event
 *    will be driven on Event output : op_periph_events_out_req[9].
 *  0b00000..Select CTIMER0 Match0
 *  0b00001..Select CTIMER1 Match0
 *  0b00010..Select CTIMER2 Match0
 *  0b00011..Select CTIMER3 Match0
 *  0b00100..Select CTIMER4 Match0
 *  0b00101..Select CTIMER0 Match1
 *  0b00110..Select CTIMER1 Match1
 *  0b00111..Select CTIMER2 Match1
 *  0b01000..Select CTIMER3 Match1
 *  0b01001..Select CTIMER4 Match1
 *  0b01010..Select CTIMER0 Match2
 *  0b01011..Select CTIMER1 Match2
 *  0b01100..Select CTIMER2 Match2
 *  0b01101..Select CTIMER3 Match2
 *  0b01110..Select CTIMER4 Match2
 *  0b01111..Select CTIMER0 Match3
 *  0b10000..Select CTIMER1 Match3
 *  0b10001..Select CTIMER2 Match3
 *  0b10010..Select CTIMER3 Match3
 *  0b10011..Select CTIMER3 Match3
 *  0b10100-0b11111..Reserved
 */
#define EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX1_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX1_SEL_SHIFT)) & EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX1_SEL_MASK)

#define EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX2_SEL_MASK (0x1F0000U)
#define EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX2_SEL_SHIFT (16U)
/*! ctimer_periphevet_ss0_mux2_sel - Select Ctimer Peripheral event out SS0 MUX2. Selected event
 *    will be driven on Event output : op_periph_events_out_req[10].
 *  0b00000..Select CTIMER0 Match0
 *  0b00001..Select CTIMER1 Match0
 *  0b00010..Select CTIMER2 Match0
 *  0b00011..Select CTIMER3 Match0
 *  0b00100..Select CTIMER4 Match0
 *  0b00101..Select CTIMER0 Match1
 *  0b00110..Select CTIMER1 Match1
 *  0b00111..Select CTIMER2 Match1
 *  0b01000..Select CTIMER3 Match1
 *  0b01001..Select CTIMER4 Match1
 *  0b01010..Select CTIMER0 Match2
 *  0b01011..Select CTIMER1 Match2
 *  0b01100..Select CTIMER2 Match2
 *  0b01101..Select CTIMER3 Match2
 *  0b01110..Select CTIMER4 Match2
 *  0b01111..Select CTIMER0 Match3
 *  0b10000..Select CTIMER1 Match3
 *  0b10001..Select CTIMER2 Match3
 *  0b10010..Select CTIMER3 Match3
 *  0b10011..Select CTIMER3 Match3
 *  0b10100-0b11111..Reserved
 */
#define EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX2_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX2_SEL_SHIFT)) & EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX2_SEL_MASK)

#define EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX3_SEL_MASK (0x1F000000U)
#define EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX3_SEL_SHIFT (24U)
/*! ctimer_periphevet_ss0_mux3_sel - Select Ctimer Peripheral event out SS0 MUX3. Selected event
 *    will be driven on Event output : op_periph_events_out_req[11].
 *  0b00000..Select CTIMER0 Match0
 *  0b00001..Select CTIMER1 Match0
 *  0b00010..Select CTIMER2 Match0
 *  0b00011..Select CTIMER3 Match0
 *  0b00100..Select CTIMER4 Match0
 *  0b00101..Select CTIMER0 Match1
 *  0b00110..Select CTIMER1 Match1
 *  0b00111..Select CTIMER2 Match1
 *  0b01000..Select CTIMER3 Match1
 *  0b01001..Select CTIMER4 Match1
 *  0b01010..Select CTIMER0 Match2
 *  0b01011..Select CTIMER1 Match2
 *  0b01100..Select CTIMER2 Match2
 *  0b01101..Select CTIMER3 Match2
 *  0b01110..Select CTIMER4 Match2
 *  0b01111..Select CTIMER0 Match3
 *  0b10000..Select CTIMER1 Match3
 *  0b10001..Select CTIMER2 Match3
 *  0b10010..Select CTIMER3 Match3
 *  0b10011..Select CTIMER3 Match3
 *  0b10100-0b11111..Reserved
 */
#define EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX3_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX3_SEL_SHIFT)) & EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX3_SEL_MASK)
/*! @} */

/*! @name CTIMER_PERIPHEVT_SS1_MSEL - CTIMER_PERIPHEVT_SS1_MSEL */
/*! @{ */

#define EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX0_SEL_MASK (0x1FU)
#define EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX0_SEL_SHIFT (0U)
/*! ctimer_periphevet_ss1_mux0_sel - Select Ctimer Peripheral event out SS1 MUX0. Selected event
 *    will be driven on Event output : op_periph_events_out_req[12].
 *  0b00000..Select CTIMER0 Match0
 *  0b00001..Select CTIMER1 Match0
 *  0b00010..Select CTIMER2 Match0
 *  0b00011..Select CTIMER3 Match0
 *  0b00100..Select CTIMER4 Match0
 *  0b00101..Select CTIMER0 Match1
 *  0b00110..Select CTIMER1 Match1
 *  0b00111..Select CTIMER2 Match1
 *  0b01000..Select CTIMER3 Match1
 *  0b01001..Select CTIMER4 Match1
 *  0b01010..Select CTIMER0 Match2
 *  0b01011..Select CTIMER1 Match2
 *  0b01100..Select CTIMER2 Match2
 *  0b01101..Select CTIMER3 Match2
 *  0b01110..Select CTIMER4 Match2
 *  0b01111..Select CTIMER0 Match3
 *  0b10000..Select CTIMER1 Match3
 *  0b10001..Select CTIMER2 Match3
 *  0b10010..Select CTIMER3 Match3
 *  0b10011..Select CTIMER3 Match3
 *  0b10100-0b11111..Reserved
 */
#define EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX0_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX0_SEL_SHIFT)) & EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX0_SEL_MASK)

#define EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX1_SEL_MASK (0x1F00U)
#define EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX1_SEL_SHIFT (8U)
/*! ctimer_periphevet_ss1_mux1_sel - Select Ctimer Peripheral event out SS1 MUX1. Selected event
 *    will be driven on Event output : op_periph_events_out_req[13].
 *  0b00000..Select CTIMER0 Match0
 *  0b00001..Select CTIMER1 Match0
 *  0b00010..Select CTIMER2 Match0
 *  0b00011..Select CTIMER3 Match0
 *  0b00100..Select CTIMER4 Match0
 *  0b00101..Select CTIMER0 Match1
 *  0b00110..Select CTIMER1 Match1
 *  0b00111..Select CTIMER2 Match1
 *  0b01000..Select CTIMER3 Match1
 *  0b01001..Select CTIMER4 Match1
 *  0b01010..Select CTIMER0 Match2
 *  0b01011..Select CTIMER1 Match2
 *  0b01100..Select CTIMER2 Match2
 *  0b01101..Select CTIMER3 Match2
 *  0b01110..Select CTIMER4 Match2
 *  0b01111..Select CTIMER0 Match3
 *  0b10000..Select CTIMER1 Match3
 *  0b10001..Select CTIMER2 Match3
 *  0b10010..Select CTIMER3 Match3
 *  0b10011..Select CTIMER3 Match3
 *  0b10100-0b11111..Reserved
 */
#define EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX1_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX1_SEL_SHIFT)) & EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX1_SEL_MASK)

#define EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX2_SEL_MASK (0x1F0000U)
#define EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX2_SEL_SHIFT (16U)
/*! ctimer_periphevet_ss1_mux2_sel - Select Ctimer Peripheral event out SS1 MUX2. Selected event
 *    will be driven on Event output : op_periph_events_out_req[14].
 *  0b00000..Select CTIMER0 Match0
 *  0b00001..Select CTIMER1 Match0
 *  0b00010..Select CTIMER2 Match0
 *  0b00011..Select CTIMER3 Match0
 *  0b00100..Select CTIMER4 Match0
 *  0b00101..Select CTIMER0 Match1
 *  0b00110..Select CTIMER1 Match1
 *  0b00111..Select CTIMER2 Match1
 *  0b01000..Select CTIMER3 Match1
 *  0b01001..Select CTIMER4 Match1
 *  0b01010..Select CTIMER0 Match2
 *  0b01011..Select CTIMER1 Match2
 *  0b01100..Select CTIMER2 Match2
 *  0b01101..Select CTIMER3 Match2
 *  0b01110..Select CTIMER4 Match2
 *  0b01111..Select CTIMER0 Match3
 *  0b10000..Select CTIMER1 Match3
 *  0b10001..Select CTIMER2 Match3
 *  0b10010..Select CTIMER3 Match3
 *  0b10011..Select CTIMER3 Match3
 *  0b10100-0b11111..Reserved
 */
#define EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX2_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX2_SEL_SHIFT)) & EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX2_SEL_MASK)

#define EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX3_SEL_MASK (0x1F000000U)
#define EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX3_SEL_SHIFT (24U)
/*! ctimer_periphevet_ss1_mux3_sel - Select Ctimer Peripheral event out SS1 MUX3. Selected event
 *    will be driven on Event output : op_periph_events_out_req[15].
 *  0b00000..Select CTIMER0 Match0
 *  0b00001..Select CTIMER1 Match0
 *  0b00010..Select CTIMER2 Match0
 *  0b00011..Select CTIMER3 Match0
 *  0b00100..Select CTIMER4 Match0
 *  0b00101..Select CTIMER0 Match1
 *  0b00110..Select CTIMER1 Match1
 *  0b00111..Select CTIMER2 Match1
 *  0b01000..Select CTIMER3 Match1
 *  0b01001..Select CTIMER4 Match1
 *  0b01010..Select CTIMER0 Match2
 *  0b01011..Select CTIMER1 Match2
 *  0b01100..Select CTIMER2 Match2
 *  0b01101..Select CTIMER3 Match2
 *  0b01110..Select CTIMER4 Match2
 *  0b01111..Select CTIMER0 Match3
 *  0b10000..Select CTIMER1 Match3
 *  0b10001..Select CTIMER2 Match3
 *  0b10010..Select CTIMER3 Match3
 *  0b10011..Select CTIMER3 Match3
 *  0b10100-0b11111..Reserved
 */
#define EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX3_SEL(x) (((uint32_t)(((uint32_t)(x)) << EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX3_SEL_SHIFT)) & EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX3_SEL_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group EVENT_CTRL_Register_Masks */


/*!
 * @}
 */ /* end of group EVENT_CTRL_Peripheral_Access_Layer */


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


#endif  /* PERI_EVENT_CTRL_H_ */

