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
**         CMSIS Peripheral Access Layer for NSS_EVENT_BUS
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
 * @file PERI_NSS_EVENT_BUS.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for NSS_EVENT_BUS
 *
 * CMSIS Peripheral Access Layer for NSS_EVENT_BUS
 */

#if !defined(PERI_NSS_EVENT_BUS_H_)
#define PERI_NSS_EVENT_BUS_H_                    /**< Symbol preventing repeated inclusion */

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
   -- NSS_EVENT_BUS Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_EVENT_BUS_Peripheral_Access_Layer NSS_EVENT_BUS Peripheral Access Layer
 * @{
 */

/** NSS_EVENT_BUS - Size of Registers Arrays */
#define NSS_EVENT_BUS_RAMEVENT_SEL_COUNT          8u
#define NSS_EVENT_BUS_PROGEVENT_SEL_COUNT         16u
#define NSS_EVENT_BUS_DMAEVENT_SEL_COUNT          16u
#define NSS_EVENT_BUS_PROGIRQ_SEL_COUNT           8u

/** NSS_EVENT_BUS - Register Layout Typedef */
typedef struct {
  __O  uint32_t CM_SYNC;                           /**< NSS Cortex-M55 sync event generation to the NSS programmable event lines (40-56). The corresponding programmable event must be set to CM55., offset: 0x0 */
       uint8_t RESERVED_0[28];
  __IO uint32_t RAMEVENT_SEL[NSS_EVENT_BUS_RAMEVENT_SEL_COUNT]; /**< Programmable DNN RAM event selection. Select which DNN RAM slice gets selected for event lines 8-15 of the NSS event bus. Register with index i selects the event for event line 8 + i., array offset: 0x20, array step: 0x4 */
  __IO uint32_t PROGEVENT_SEL[NSS_EVENT_BUS_PROGEVENT_SEL_COUNT]; /**< Programmable event selection. Select which event gets selected for event lines 40 - 55 of the NSS event bus. Register with index i selects the event for event line 40 + i., array offset: 0x40, array step: 0x4 */
       uint8_t RESERVED_1[64];
  __IO uint32_t DMAEVENT_SEL[NSS_EVENT_BUS_DMAEVENT_SEL_COUNT]; /**< Configure the DMA done event generation for the NSS programmable events., array offset: 0xC0, array step: 0x4 */
  __I  uint32_t IRQ_STATUS;                        /**< Cortex-M55 NSS event IRQ status register, offset: 0x100 */
  __IO uint32_t IRQ_ENABLE;                        /**< Cortex-M55 NSS event IRQ enable register, offset: 0x104 */
  __O  uint32_t IRQ_CLEAR;                         /**< Cortex-M55 NSS event IRQ status clear register, offset: 0x108 */
  __IO uint32_t EVENT_STATUS0;                     /**< Shows the latched event status for event lines 0 to 31. The status bit is set when a event is detected on the respective event line. The status bit is cleared by writing '1' to the respective bit., offset: 0x10C */
  __IO uint32_t EVENT_STATUS1;                     /**< Shows the latched event status for event lines 32 to 56. The status bit is set when a event is detected on the respective event line. The status bit is cleared by writing '1' to the respective bit., offset: 0x110 */
       uint8_t RESERVED_2[12];
  __IO uint32_t PROGIRQ_SEL[NSS_EVENT_BUS_PROGIRQ_SEL_COUNT]; /**< Select the NSS event bus line to trigger IRQ 35-42 of the Cortex-M55. Register with index i selects the event for Cortex-M55 irq 35 + i., array offset: 0x120, array step: 0x4 */
  __IO uint32_t U85_MODULO_SEL;                    /**< Configure and enable the Ethos U85 modulo event generation. When this register is written, the modulo counter is reset to 0., offset: 0x140 */
  __I  uint32_t U85_MODULO_CNTR;                   /**< Actual value of the Ethos U85 module event counter., offset: 0x144 */
  __IO uint32_t XSP_EVENT_OVERFLOW_STATUS0;        /**< Indicates which events experienced overflow due to one or more missed pulses during synchronization to XSP clock domain., offset: 0x148 */
  __IO uint32_t XSP_EVENT_OVERFLOW_STATUS1;        /**< Indicates which events experienced overflow due to one or more missed pulses during synchronization to XSP clock domain., offset: 0x14C */
} NSS_EVENT_BUS_Type;

/* ----------------------------------------------------------------------------
   -- NSS_EVENT_BUS Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_EVENT_BUS_Register_Masks NSS_EVENT_BUS Register Masks
 * @{
 */

/*! @name CM_SYNC - NSS Cortex-M55 sync event generation to the NSS programmable event lines (40-56). The corresponding programmable event must be set to CM55. */
/*! @{ */

#define NSS_EVENT_BUS_CM_SYNC_CM_SYNC_MASK       (0xFFFFU)
#define NSS_EVENT_BUS_CM_SYNC_CM_SYNC_SHIFT      (0U)
/*! cm_sync - Write one to the bit(s) to generate the corresponding NSS Cortex-M55 sync event. */
#define NSS_EVENT_BUS_CM_SYNC_CM_SYNC(x)         (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_CM_SYNC_CM_SYNC_SHIFT)) & NSS_EVENT_BUS_CM_SYNC_CM_SYNC_MASK)
/*! @} */

/*! @name RAMEVENT_SEL - Programmable DNN RAM event selection. Select which DNN RAM slice gets selected for event lines 8-15 of the NSS event bus. Register with index i selects the event for event line 8 + i. */
/*! @{ */

#define NSS_EVENT_BUS_RAMEVENT_SEL_RAMEVENT_SEL_MASK (0x7U)
#define NSS_EVENT_BUS_RAMEVENT_SEL_RAMEVENT_SEL_SHIFT (0U)
/*! ramevent_sel - Select DNN RAM slice as source for the programmable DNN RAM event
 *  0b000..DNN RAM segment 0
 *  0b001..DNN RAM segment 1
 *  0b010..DNN RAM segment 2
 *  0b011..DNN RAM segment 3
 *  0b100..DNN RAM segment 4
 */
#define NSS_EVENT_BUS_RAMEVENT_SEL_RAMEVENT_SEL(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_RAMEVENT_SEL_RAMEVENT_SEL_SHIFT)) & NSS_EVENT_BUS_RAMEVENT_SEL_RAMEVENT_SEL_MASK)
/*! @} */

/*! @name PROGEVENT_SEL - Programmable event selection. Select which event gets selected for event lines 40 - 55 of the NSS event bus. Register with index i selects the event for event line 40 + i. */
/*! @{ */

#define NSS_EVENT_BUS_PROGEVENT_SEL_PROGEVENT_SEL_MASK (0x3U)
#define NSS_EVENT_BUS_PROGEVENT_SEL_PROGEVENT_SEL_SHIFT (0U)
/*! progevent_sel - Select the source for the programmable NSS events
 *  0b00..Cortex-M55 sync event
 *  0b01..XSP sync event
 *  0b10..DMA done event
 *  0b11..No event is forwarded to Programmable events
 */
#define NSS_EVENT_BUS_PROGEVENT_SEL_PROGEVENT_SEL(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_PROGEVENT_SEL_PROGEVENT_SEL_SHIFT)) & NSS_EVENT_BUS_PROGEVENT_SEL_PROGEVENT_SEL_MASK)
/*! @} */

/*! @name DMAEVENT_SEL - Configure the DMA done event generation for the NSS programmable events. */
/*! @{ */

#define NSS_EVENT_BUS_DMAEVENT_SEL_CHANNEL_MASK  (0x1FU)
#define NSS_EVENT_BUS_DMAEVENT_SEL_CHANNEL_SHIFT (0U)
/*! channel - Select the DMA channel for which the event is generated. */
#define NSS_EVENT_BUS_DMAEVENT_SEL_CHANNEL(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_DMAEVENT_SEL_CHANNEL_SHIFT)) & NSS_EVENT_BUS_DMAEVENT_SEL_CHANNEL_MASK)

#define NSS_EVENT_BUS_DMAEVENT_SEL_EVENT_TYPE_MASK (0x700U)
#define NSS_EVENT_BUS_DMAEVENT_SEL_EVENT_TYPE_SHIFT (8U)
/*! event_type - Select the event type getting generated for the respective channel.
 *  0b000..Use the DMA HW request acknowledgement as event. This event is generated when the HW request is
 *         granted. This event is only generated when the channel is triggered through a HW request.
 *  0b001..Use the DMA HW request done as event. This event is generated when the DMA minor loop has executed its
 *         last read operation. This event is only generated when the channel is triggered through a HW request.
 *  0b010..Use the DMA HW request done_lw (last write) as event. This event is generated when the DMA minor loop
 *         has executed its last write operation, this signals the moment the DMA releases the AXI bus. This event
 *         is only generated when the channel is triggered through a HW request.
 *  0b011..Use the DMA HW request complete as event. This event is generated when the DMA major loop has executed
 *         its last write operation, this signals the completion of the full DMA channel operation. This event is
 *         only generated when the channel is triggered through a HW request.
 *  0b100..Use the DMA done IRQ as event. An event is generated on the asserting of the IRQ, SW must clear the IRQ
 *         in order to generate subsequent events.
 */
#define NSS_EVENT_BUS_DMAEVENT_SEL_EVENT_TYPE(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_DMAEVENT_SEL_EVENT_TYPE_SHIFT)) & NSS_EVENT_BUS_DMAEVENT_SEL_EVENT_TYPE_MASK)
/*! @} */

/*! @name IRQ_STATUS - Cortex-M55 NSS event IRQ status register */
/*! @{ */

#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ0_MASK  (0x1U)
#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ0_SHIFT (0U)
/*! prog_irq0 - IRQ status of the programmable NSS event bus IRQ
 *  0b0..IRQ is inactive
 *  0b1..IRQ is active
 */
#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ0(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ0_SHIFT)) & NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ0_MASK)

#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ1_MASK  (0x2U)
#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ1_SHIFT (1U)
/*! prog_irq1 - IRQ status of the programmable NSS event bus IRQ
 *  0b0..IRQ is inactive
 *  0b1..IRQ is active
 */
#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ1(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ1_SHIFT)) & NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ1_MASK)

#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ2_MASK  (0x4U)
#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ2_SHIFT (2U)
/*! prog_irq2 - IRQ status of the programmable NSS event bus IRQ
 *  0b0..IRQ is inactive
 *  0b1..IRQ is active
 */
#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ2(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ2_SHIFT)) & NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ2_MASK)

#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ3_MASK  (0x8U)
#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ3_SHIFT (3U)
/*! prog_irq3 - IRQ status of the programmable NSS event bus IRQ
 *  0b0..IRQ is inactive
 *  0b1..IRQ is active
 */
#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ3(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ3_SHIFT)) & NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ3_MASK)

#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ4_MASK  (0x10U)
#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ4_SHIFT (4U)
/*! prog_irq4 - IRQ status of the programmable NSS event bus IRQ
 *  0b0..IRQ is inactive
 *  0b1..IRQ is active
 */
#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ4(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ4_SHIFT)) & NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ4_MASK)

#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ5_MASK  (0x20U)
#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ5_SHIFT (5U)
/*! prog_irq5 - IRQ status of the programmable NSS event bus IRQ
 *  0b0..IRQ is inactive
 *  0b1..IRQ is active
 */
#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ5(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ5_SHIFT)) & NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ5_MASK)

#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ6_MASK  (0x40U)
#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ6_SHIFT (6U)
/*! prog_irq6 - IRQ status of the programmable NSS event bus IRQ
 *  0b0..IRQ is inactive
 *  0b1..IRQ is active
 */
#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ6(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ6_SHIFT)) & NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ6_MASK)

#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ7_MASK  (0x80U)
#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ7_SHIFT (7U)
/*! prog_irq7 - IRQ status of the programmable NSS event bus IRQ
 *  0b0..IRQ is inactive
 *  0b1..IRQ is active
 */
#define NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ7(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ7_SHIFT)) & NSS_EVENT_BUS_IRQ_STATUS_PROG_IRQ7_MASK)

#define NSS_EVENT_BUS_IRQ_STATUS_ERROR_IRQ_MASK  (0x100U)
#define NSS_EVENT_BUS_IRQ_STATUS_ERROR_IRQ_SHIFT (8U)
/*! error_irq - IRQ status of the NSS error event IRQ
 *  0b0..IRQ is inactive
 *  0b1..IRQ is active
 */
#define NSS_EVENT_BUS_IRQ_STATUS_ERROR_IRQ(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_STATUS_ERROR_IRQ_SHIFT)) & NSS_EVENT_BUS_IRQ_STATUS_ERROR_IRQ_MASK)
/*! @} */

/*! @name IRQ_ENABLE - Cortex-M55 NSS event IRQ enable register */
/*! @{ */

#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ0_MASK  (0x1U)
#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ0_SHIFT (0U)
/*! prog_irq0 - IRQ enable of the programmable NSS event bus IRQ
 *  0b0..Disable the NSS event bus IRQ
 *  0b1..Enable the NSS event bus IRQ
 */
#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ0(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ0_SHIFT)) & NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ0_MASK)

#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ1_MASK  (0x2U)
#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ1_SHIFT (1U)
/*! prog_irq1 - IRQ enable of the programmable NSS event bus IRQ
 *  0b0..Disable the NSS event bus IRQ
 *  0b1..Enable the NSS event bus IRQ
 */
#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ1(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ1_SHIFT)) & NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ1_MASK)

#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ2_MASK  (0x4U)
#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ2_SHIFT (2U)
/*! prog_irq2 - IRQ enable of the programmable NSS event bus IRQ
 *  0b0..Disable the NSS event bus IRQ
 *  0b1..Enable the NSS event bus IRQ
 */
#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ2(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ2_SHIFT)) & NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ2_MASK)

#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ3_MASK  (0x8U)
#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ3_SHIFT (3U)
/*! prog_irq3 - IRQ enable of the programmable NSS event bus IRQ
 *  0b0..Disable the NSS event bus IRQ
 *  0b1..Enable the NSS event bus IRQ
 */
#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ3(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ3_SHIFT)) & NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ3_MASK)

#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ4_MASK  (0x10U)
#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ4_SHIFT (4U)
/*! prog_irq4 - IRQ enable of the programmable NSS event bus IRQ
 *  0b0..Disable the NSS event bus IRQ
 *  0b1..Enable the NSS event bus IRQ
 */
#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ4(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ4_SHIFT)) & NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ4_MASK)

#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ5_MASK  (0x20U)
#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ5_SHIFT (5U)
/*! prog_irq5 - IRQ enable of the programmable NSS event bus IRQ
 *  0b0..Disable the NSS event bus IRQ
 *  0b1..Enable the NSS event bus IRQ
 */
#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ5(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ5_SHIFT)) & NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ5_MASK)

#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ6_MASK  (0x40U)
#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ6_SHIFT (6U)
/*! prog_irq6 - IRQ enable of the programmable NSS event bus IRQ
 *  0b0..Disable the NSS event bus IRQ
 *  0b1..Enable the NSS event bus IRQ
 */
#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ6(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ6_SHIFT)) & NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ6_MASK)

#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ7_MASK  (0x80U)
#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ7_SHIFT (7U)
/*! prog_irq7 - IRQ enable of the programmable NSS event bus IRQ
 *  0b0..Disable the NSS event bus IRQ
 *  0b1..Enable the NSS event bus IRQ
 */
#define NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ7(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ7_SHIFT)) & NSS_EVENT_BUS_IRQ_ENABLE_PROG_IRQ7_MASK)

#define NSS_EVENT_BUS_IRQ_ENABLE_ERROR_IRQ_MASK  (0x100U)
#define NSS_EVENT_BUS_IRQ_ENABLE_ERROR_IRQ_SHIFT (8U)
/*! error_irq - IRQ enable of the NSS error event IRQ
 *  0b0..Disable the NSS event bus IRQ
 *  0b1..Enable the NSS event bus IRQ
 */
#define NSS_EVENT_BUS_IRQ_ENABLE_ERROR_IRQ(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_ENABLE_ERROR_IRQ_SHIFT)) & NSS_EVENT_BUS_IRQ_ENABLE_ERROR_IRQ_MASK)
/*! @} */

/*! @name IRQ_CLEAR - Cortex-M55 NSS event IRQ status clear register */
/*! @{ */

#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ0_MASK   (0x1U)
#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ0_SHIFT  (0U)
/*! prog_irq0 - IRQ status clear of the programmable NSS event bus IRQ. Write one to clear.
 *  0b1..Clear NSS event bus IRQ status
 */
#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ0(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ0_SHIFT)) & NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ0_MASK)

#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ1_MASK   (0x2U)
#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ1_SHIFT  (1U)
/*! prog_irq1 - IRQ status clear of the programmable NSS event bus IRQ. Write one to clear.
 *  0b1..Clear NSS event bus IRQ status
 */
#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ1(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ1_SHIFT)) & NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ1_MASK)

#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ2_MASK   (0x4U)
#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ2_SHIFT  (2U)
/*! prog_irq2 - IRQ status clear of the programmable NSS event bus IRQ. Write one to clear.
 *  0b1..Clear NSS event bus IRQ status
 */
#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ2(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ2_SHIFT)) & NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ2_MASK)

#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ3_MASK   (0x8U)
#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ3_SHIFT  (3U)
/*! prog_irq3 - IRQ status clear of the programmable NSS event bus IRQ. Write one to clear.
 *  0b1..Clear NSS event bus IRQ status
 */
#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ3(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ3_SHIFT)) & NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ3_MASK)

#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ4_MASK   (0x10U)
#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ4_SHIFT  (4U)
/*! prog_irq4 - IRQ status clear of the programmable NSS event bus IRQ. Write one to clear.
 *  0b1..Clear NSS event bus IRQ status
 */
#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ4(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ4_SHIFT)) & NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ4_MASK)

#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ5_MASK   (0x20U)
#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ5_SHIFT  (5U)
/*! prog_irq5 - IRQ status clear of the programmable NSS event bus IRQ. Write one to clear.
 *  0b1..Clear NSS event bus IRQ status
 */
#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ5(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ5_SHIFT)) & NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ5_MASK)

#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ6_MASK   (0x40U)
#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ6_SHIFT  (6U)
/*! prog_irq6 - IRQ status clear of the programmable NSS event bus IRQ. Write one to clear.
 *  0b1..Clear NSS event bus IRQ status
 */
#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ6(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ6_SHIFT)) & NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ6_MASK)

#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ7_MASK   (0x80U)
#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ7_SHIFT  (7U)
/*! prog_irq7 - IRQ status clear of the programmable NSS event bus IRQ. Write one to clear.
 *  0b1..Clear NSS event bus IRQ status
 */
#define NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ7(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ7_SHIFT)) & NSS_EVENT_BUS_IRQ_CLEAR_PROG_IRQ7_MASK)

#define NSS_EVENT_BUS_IRQ_CLEAR_ERROR_IRQ_MASK   (0x100U)
#define NSS_EVENT_BUS_IRQ_CLEAR_ERROR_IRQ_SHIFT  (8U)
/*! error_irq - IRQ status clear of the NSS error event IRQ . Write one to clear.
 *  0b1..Clear NSS event bus IRQ status
 */
#define NSS_EVENT_BUS_IRQ_CLEAR_ERROR_IRQ(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_IRQ_CLEAR_ERROR_IRQ_SHIFT)) & NSS_EVENT_BUS_IRQ_CLEAR_ERROR_IRQ_MASK)
/*! @} */

/*! @name EVENT_STATUS0 - Shows the latched event status for event lines 0 to 31. The status bit is set when a event is detected on the respective event line. The status bit is cleared by writing '1' to the respective bit. */
/*! @{ */

#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER0_MASK  (0x1U)
#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER0_SHIFT (0U)
/*! timer0 - NSS timer0 event */
#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER0(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_TIMER0_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_TIMER0_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER1_MASK  (0x2U)
#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER1_SHIFT (1U)
/*! timer1 - NSS timer1 event */
#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER1(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_TIMER1_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_TIMER1_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER2_MASK  (0x4U)
#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER2_SHIFT (2U)
/*! timer2 - NSS timer2 event */
#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER2(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_TIMER2_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_TIMER2_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER3_MASK  (0x8U)
#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER3_SHIFT (3U)
/*! timer3 - NSS timer3 event */
#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER3(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_TIMER3_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_TIMER3_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER4_MASK  (0x10U)
#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER4_SHIFT (4U)
/*! timer4 - NSS timer4 event */
#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER4(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_TIMER4_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_TIMER4_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER5_MASK  (0x20U)
#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER5_SHIFT (5U)
/*! timer5 - NSS timer5 event */
#define NSS_EVENT_BUS_EVENT_STATUS0_TIMER5(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_TIMER5_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_TIMER5_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_U85_MASK     (0x40U)
#define NSS_EVENT_BUS_EVENT_STATUS0_U85_SHIFT    (6U)
/*! u85 - Ethos U85 IRQ event */
#define NSS_EVENT_BUS_EVENT_STATUS0_U85(x)       (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_U85_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_U85_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_U85_MOD_N_MASK (0x80U)
#define NSS_EVENT_BUS_EVENT_STATUS0_U85_MOD_N_SHIFT (7U)
/*! u85_mod_n - Ethos U85 IRQ modulo N event */
#define NSS_EVENT_BUS_EVENT_STATUS0_U85_MOD_N(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_U85_MOD_N_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_U85_MOD_N_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM0_MASK (0x100U)
#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM0_SHIFT (8U)
/*! dnn_ram0 - DNN RAM event 0 of a programmable DNN RAM slice */
#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM0(x)  (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM0_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM0_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM1_MASK (0x200U)
#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM1_SHIFT (9U)
/*! dnn_ram1 - DNN RAM event 1 of a programmable DNN RAM slice */
#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM1(x)  (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM1_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM1_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM2_MASK (0x400U)
#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM2_SHIFT (10U)
/*! dnn_ram2 - DNN RAM event 2 of a programmable DNN RAM slice */
#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM2(x)  (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM2_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM2_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM3_MASK (0x800U)
#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM3_SHIFT (11U)
/*! dnn_ram3 - DNN RAM event 3 of a programmable DNN RAM slice */
#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM3(x)  (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM3_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM3_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM4_MASK (0x1000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM4_SHIFT (12U)
/*! dnn_ram4 - DNN RAM event 4 of a programmable DNN RAM slice */
#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM4(x)  (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM4_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM4_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM5_MASK (0x2000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM5_SHIFT (13U)
/*! dnn_ram5 - DNN RAM event 5 of a programmable DNN RAM slice */
#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM5(x)  (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM5_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM5_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM6_MASK (0x4000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM6_SHIFT (14U)
/*! dnn_ram6 - DNN RAM event 6 of a programmable DNN RAM slice */
#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM6(x)  (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM6_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM6_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM7_MASK (0x8000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM7_SHIFT (15U)
/*! dnn_ram7 - DNN RAM event 7 of a programmable DNN RAM slice */
#define NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM7(x)  (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM7_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_DNN_RAM7_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_DSS0_MASK    (0x10000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_DSS0_SHIFT   (16U)
/*! dss0 - External DSS event 0 to NSS. Programmable DSS event source in the ADSS. */
#define NSS_EVENT_BUS_EVENT_STATUS0_DSS0(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_DSS0_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_DSS0_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_DSS1_MASK    (0x20000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_DSS1_SHIFT   (17U)
/*! dss1 - External DSS event 1 to NSS. Programmable DSS event source in the ADSS. */
#define NSS_EVENT_BUS_EVENT_STATUS0_DSS1(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_DSS1_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_DSS1_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_DSS2_MASK    (0x40000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_DSS2_SHIFT   (18U)
/*! dss2 - External DSS event 2 to NSS. Programmable DSS event source in the ADSS. */
#define NSS_EVENT_BUS_EVENT_STATUS0_DSS2(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_DSS2_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_DSS2_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_DSS3_MASK    (0x80000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_DSS3_SHIFT   (19U)
/*! dss3 - External DSS event 3 to NSS. Programmable DSS event source in the ADSS. */
#define NSS_EVENT_BUS_EVENT_STATUS0_DSS3(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_DSS3_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_DSS3_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_DSS4_MASK    (0x100000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_DSS4_SHIFT   (20U)
/*! dss4 - External DSS event 4 to NSS. Programmable DSS event source in the ADSS. */
#define NSS_EVENT_BUS_EVENT_STATUS0_DSS4(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_DSS4_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_DSS4_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_DSS5_MASK    (0x200000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_DSS5_SHIFT   (21U)
/*! dss5 - External DSS event 5 to NSS. Programmable DSS event source in the ADSS. */
#define NSS_EVENT_BUS_EVENT_STATUS0_DSS5(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_DSS5_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_DSS5_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_DSS6_MASK    (0x400000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_DSS6_SHIFT   (22U)
/*! dss6 - External DSS event 6 to NSS. Programmable DSS event source in the ADSS. */
#define NSS_EVENT_BUS_EVENT_STATUS0_DSS6(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_DSS6_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_DSS6_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_DSS7_MASK    (0x800000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_DSS7_SHIFT   (23U)
/*! dss7 - External DSS event 7 to NSS. Programmable DSS event source in the ADSS. */
#define NSS_EVENT_BUS_EVENT_STATUS0_DSS7(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_DSS7_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_DSS7_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_CSS0_MASK    (0x1000000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_CSS0_SHIFT   (24U)
/*! css0 - External CSS event 0 to NSS. Programmable CSS event source in the CtrlSS. */
#define NSS_EVENT_BUS_EVENT_STATUS0_CSS0(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_CSS0_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_CSS0_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_CSS1_MASK    (0x2000000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_CSS1_SHIFT   (25U)
/*! css1 - External CSS event 1 to NSS. Programmable CSS event source in the CtrlSS. */
#define NSS_EVENT_BUS_EVENT_STATUS0_CSS1(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_CSS1_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_CSS1_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_CSS2_MASK    (0x4000000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_CSS2_SHIFT   (26U)
/*! css2 - External CSS event 2 to NSS. Programmable CSS event source in the CtrlSS. */
#define NSS_EVENT_BUS_EVENT_STATUS0_CSS2(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_CSS2_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_CSS2_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_CSS3_MASK    (0x8000000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_CSS3_SHIFT   (27U)
/*! css3 - External CSS event 3 to NSS. Programmable CSS event source in the CtrlSS. */
#define NSS_EVENT_BUS_EVENT_STATUS0_CSS3(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_CSS3_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_CSS3_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_CSS4_MASK    (0x10000000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_CSS4_SHIFT   (28U)
/*! css4 - External CSS event 4 to NSS. Programmable CSS event source in the CtrlSS. */
#define NSS_EVENT_BUS_EVENT_STATUS0_CSS4(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_CSS4_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_CSS4_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_CSS5_MASK    (0x20000000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_CSS5_SHIFT   (29U)
/*! css5 - External CSS event 5 to NSS. Programmable CSS event source in the CtrlSS. */
#define NSS_EVENT_BUS_EVENT_STATUS0_CSS5(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_CSS5_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_CSS5_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_CSS6_MASK    (0x40000000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_CSS6_SHIFT   (30U)
/*! css6 - External CSS event 6 to NSS. Programmable CSS event source in the CtrlSS. */
#define NSS_EVENT_BUS_EVENT_STATUS0_CSS6(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_CSS6_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_CSS6_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS0_CSS7_MASK    (0x80000000U)
#define NSS_EVENT_BUS_EVENT_STATUS0_CSS7_SHIFT   (31U)
/*! css7 - External CSS event 7 to NSS. Programmable CSS event source in the CtrlSS. */
#define NSS_EVENT_BUS_EVENT_STATUS0_CSS7(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS0_CSS7_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS0_CSS7_MASK)
/*! @} */

/*! @name EVENT_STATUS1 - Shows the latched event status for event lines 32 to 56. The status bit is set when a event is detected on the respective event line. The status bit is cleared by writing '1' to the respective bit. */
/*! @{ */

#define NSS_EVENT_BUS_EVENT_STATUS1_CSS8_MASK    (0x1U)
#define NSS_EVENT_BUS_EVENT_STATUS1_CSS8_SHIFT   (0U)
/*! css8 - External CSS event 8 to NSS. Programmable at CSS to the CSS DMA[0|1] Ch[0-5] complete event. */
#define NSS_EVENT_BUS_EVENT_STATUS1_CSS8(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_CSS8_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_CSS8_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_CSS9_MASK    (0x2U)
#define NSS_EVENT_BUS_EVENT_STATUS1_CSS9_SHIFT   (1U)
/*! css9 - External CSS event 9 to NSS. Programmable at CSS to the CSS DMA[0|1] Ch[6-11] complete event. */
#define NSS_EVENT_BUS_EVENT_STATUS1_CSS9(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_CSS9_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_CSS9_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_CSS10_MASK   (0x4U)
#define NSS_EVENT_BUS_EVENT_STATUS1_CSS10_SHIFT  (2U)
/*! css10 - External CSS event 10 to NSS. Programmable at CSS to the CSS DMA[0] Ch[12-17] complete event. */
#define NSS_EVENT_BUS_EVENT_STATUS1_CSS10(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_CSS10_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_CSS10_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_CSS11_MASK   (0x8U)
#define NSS_EVENT_BUS_EVENT_STATUS1_CSS11_SHIFT  (3U)
/*! css11 - External CSS event 11 to NSS. Programmable at CSS to the CSS DMA[0] Ch[18-23] complete event. */
#define NSS_EVENT_BUS_EVENT_STATUS1_CSS11(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_CSS11_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_CSS11_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_CSS12_MASK   (0x10U)
#define NSS_EVENT_BUS_EVENT_STATUS1_CSS12_SHIFT  (4U)
/*! css12 - External CSS event 12 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event. */
#define NSS_EVENT_BUS_EVENT_STATUS1_CSS12(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_CSS12_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_CSS12_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_CSS13_MASK   (0x20U)
#define NSS_EVENT_BUS_EVENT_STATUS1_CSS13_SHIFT  (5U)
/*! css13 - External CSS event 13 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event. */
#define NSS_EVENT_BUS_EVENT_STATUS1_CSS13(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_CSS13_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_CSS13_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_CSS14_MASK   (0x40U)
#define NSS_EVENT_BUS_EVENT_STATUS1_CSS14_SHIFT  (6U)
/*! css14 - External CSS event 14 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event. */
#define NSS_EVENT_BUS_EVENT_STATUS1_CSS14(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_CSS14_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_CSS14_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_CSS15_MASK   (0x80U)
#define NSS_EVENT_BUS_EVENT_STATUS1_CSS15_SHIFT  (7U)
/*! css15 - External CSS event 15 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event. */
#define NSS_EVENT_BUS_EVENT_STATUS1_CSS15(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_CSS15_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_CSS15_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_PROG0_MASK   (0x100U)
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG0_SHIFT  (8U)
/*! prog0 - Programmable NSS event source 0 */
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG0(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_PROG0_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_PROG0_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_PROG1_MASK   (0x200U)
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG1_SHIFT  (9U)
/*! prog1 - Programmable NSS event source 1 */
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG1(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_PROG1_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_PROG1_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_PROG2_MASK   (0x400U)
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG2_SHIFT  (10U)
/*! prog2 - Programmable NSS event source 2 */
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG2(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_PROG2_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_PROG2_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_PROG3_MASK   (0x800U)
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG3_SHIFT  (11U)
/*! prog3 - Programmable NSS event source 3 */
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG3(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_PROG3_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_PROG3_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_PROG4_MASK   (0x1000U)
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG4_SHIFT  (12U)
/*! prog4 - Programmable NSS event source 4 */
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG4(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_PROG4_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_PROG4_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_PROG5_MASK   (0x2000U)
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG5_SHIFT  (13U)
/*! prog5 - Programmable NSS event source 5 */
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG5(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_PROG5_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_PROG5_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_PROG6_MASK   (0x4000U)
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG6_SHIFT  (14U)
/*! prog6 - Programmable NSS event source 6 */
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG6(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_PROG6_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_PROG6_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_PROG7_MASK   (0x8000U)
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG7_SHIFT  (15U)
/*! prog7 - Programmable NSS event source 7 */
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG7(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_PROG7_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_PROG7_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_PROG8_MASK   (0x10000U)
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG8_SHIFT  (16U)
/*! prog8 - Programmable NSS event source 8 */
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG8(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_PROG8_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_PROG8_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_PROG9_MASK   (0x20000U)
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG9_SHIFT  (17U)
/*! prog9 - Programmable NSS event source 9 */
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG9(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_PROG9_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_PROG9_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_PROG10_MASK  (0x40000U)
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG10_SHIFT (18U)
/*! prog10 - Programmable NSS event source 10 */
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG10(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_PROG10_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_PROG10_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_PROG11_MASK  (0x80000U)
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG11_SHIFT (19U)
/*! prog11 - Programmable NSS event source 11 */
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG11(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_PROG11_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_PROG11_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_PROG12_MASK  (0x100000U)
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG12_SHIFT (20U)
/*! prog12 - Programmable NSS event source 12 */
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG12(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_PROG12_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_PROG12_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_PROG13_MASK  (0x200000U)
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG13_SHIFT (21U)
/*! prog13 - Programmable NSS event source 13 */
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG13(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_PROG13_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_PROG13_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_PROG14_MASK  (0x400000U)
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG14_SHIFT (22U)
/*! prog14 - Programmable NSS event source 14 */
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG14(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_PROG14_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_PROG14_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_PROG15_MASK  (0x800000U)
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG15_SHIFT (23U)
/*! prog15 - Programmable NSS event source 15 */
#define NSS_EVENT_BUS_EVENT_STATUS1_PROG15(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_PROG15_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_PROG15_MASK)

#define NSS_EVENT_BUS_EVENT_STATUS1_ERROR_MASK   (0x1000000U)
#define NSS_EVENT_BUS_EVENT_STATUS1_ERROR_SHIFT  (24U)
/*! error - NSS EDU error event */
#define NSS_EVENT_BUS_EVENT_STATUS1_ERROR(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_EVENT_STATUS1_ERROR_SHIFT)) & NSS_EVENT_BUS_EVENT_STATUS1_ERROR_MASK)
/*! @} */

/*! @name PROGIRQ_SEL - Select the NSS event bus line to trigger IRQ 35-42 of the Cortex-M55. Register with index i selects the event for Cortex-M55 irq 35 + i. */
/*! @{ */

#define NSS_EVENT_BUS_PROGIRQ_SEL_PROGIRQ_SEL_MASK (0x3FU)
#define NSS_EVENT_BUS_PROGIRQ_SEL_PROGIRQ_SEL_SHIFT (0U)
/*! progirq_sel - Select the NSS event line used as trigger for the programmable event IRQ of the
 *    NSS Cortex-M55, values 0-56 will select the respective NSS event bus line. Values above 56 will
 *    disable the IRQ trigger.
 *  0b000000..NSS timer0 event
 *  0b000001..NSS timer1 event
 *  0b000010..NSS timer2 event
 *  0b000011..NSS timer3 event
 *  0b000100..NSS timer4 event
 *  0b000101..NSS timer5 event
 *  0b000110..Ethos U85 IRQ event
 *  0b000111..Ethos U85 IRQ modulo n event
 *  0b001000..Event 0 of a programmable DNN RAM slice
 *  0b001001..Event 1 of a programmable DNN RAM slice
 *  0b001010..Event 2 of a programmable DNN RAM slice
 *  0b001011..Event 3 of a programmable DNN RAM slice
 *  0b001100..Event 4 of a programmable DNN RAM slice
 *  0b001101..Event 5 of a programmable DNN RAM slice
 *  0b001110..Event 6 of a programmable DNN RAM slice
 *  0b001111..Event 7 of a programmable DNN RAM slice
 *  0b010000..External DSS event 0 to NSS. Programmable DSS event source in the ADSS.
 *  0b010001..External DSS event 1 to NSS. Programmable DSS event source in the ADSS.
 *  0b010010..External DSS event 2 to NSS. Programmable DSS event source in the ADSS.
 *  0b010011..External DSS event 3 to NSS. Programmable DSS event source in the ADSS.
 *  0b010100..External DSS event 4 to NSS. Programmable DSS event source in the ADSS.
 *  0b010101..External DSS event 5 to NSS. Programmable DSS event source in the ADSS.
 *  0b010110..External DSS event 6 to NSS. Programmable DSS event source in the ADSS.
 *  0b010111..External DSS event 7 to NSS. Programmable DSS event source in the ADSS.
 *  0b011000..External CSS event 0 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011001..External CSS event 1 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011010..External CSS event 2 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011011..External CSS event 3 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011100..External CSS event 4 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011101..External CSS event 5 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011110..External CSS event 6 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b011111..External CSS event 7 to NSS. Programmable CSS event source in the CtrlSS.
 *  0b100000..External CSS event 8 to NSS. Programmable at CSS to the CSS DMA[0|1] Ch[0-5] complete event.
 *  0b100001..External CSS event 9 to NSS. Programmable at CSS to the CSS DMA[0|1] Ch[6-11] complete event.
 *  0b100010..External CSS event 10 to NSS. Programmable at CSS to the CSS DMA[0] Ch[12-17] complete event.
 *  0b100011..External CSS event 11 to NSS. Programmable at CSS to the CSS DMA[0] Ch[18-23] complete event.
 *  0b100100..External CSS event 12 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event.
 *  0b100101..External CSS event 13 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event.
 *  0b100110..External CSS event 14 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event.
 *  0b100111..External CSS event 15 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event.
 *  0b101000..Programmable NSS event source 0
 *  0b101001..Programmable NSS event source 1
 *  0b101010..Programmable NSS event source 2
 *  0b101011..Programmable NSS event source 3
 *  0b101100..Programmable NSS event source 4
 *  0b101101..Programmable NSS event source 5
 *  0b101110..Programmable NSS event source 6
 *  0b101111..Programmable NSS event source 7
 *  0b110000..Programmable NSS event source 8
 *  0b110001..Programmable NSS event source 9
 *  0b110010..Programmable NSS event source 10
 *  0b110011..Programmable NSS event source 11
 *  0b110100..Programmable NSS event source 12
 *  0b110101..Programmable NSS event source 13
 *  0b110110..Programmable NSS event source 14
 *  0b110111..Programmable NSS event source 15
 *  0b111000..NSS EDU error event
 */
#define NSS_EVENT_BUS_PROGIRQ_SEL_PROGIRQ_SEL(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_PROGIRQ_SEL_PROGIRQ_SEL_SHIFT)) & NSS_EVENT_BUS_PROGIRQ_SEL_PROGIRQ_SEL_MASK)
/*! @} */

/*! @name U85_MODULO_SEL - Configure and enable the Ethos U85 modulo event generation. When this register is written, the modulo counter is reset to 0. */
/*! @{ */

#define NSS_EVENT_BUS_U85_MODULO_SEL_MODULO_CFG_MASK (0xFU)
#define NSS_EVENT_BUS_U85_MODULO_SEL_MODULO_CFG_SHIFT (0U)
/*! modulo_cfg - Modulus minus one. Each time a U85 IRQ event is received, the modulo event counter
 *    is incremented. When the counter reaches this modulo_cfg value, the counter is reset and the
 *    U85 IRQ Modulo n event is generated. Program this registerfield with the actual modulus to be
 *    used - 1. I.e. modulo_cfg = 0 generates the U85 IRQ Modulo n event for every U85 IRQ (like the
 *    U85 IRQ event), modulo_cfg = 1 generates the U85 IRQ Modulo n event every 2 U85 IRQs.
 */
#define NSS_EVENT_BUS_U85_MODULO_SEL_MODULO_CFG(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_U85_MODULO_SEL_MODULO_CFG_SHIFT)) & NSS_EVENT_BUS_U85_MODULO_SEL_MODULO_CFG_MASK)

#define NSS_EVENT_BUS_U85_MODULO_SEL_EN_MASK     (0x10U)
#define NSS_EVENT_BUS_U85_MODULO_SEL_EN_SHIFT    (4U)
/*! en - Enable U85 IRQ event modulo counter. */
#define NSS_EVENT_BUS_U85_MODULO_SEL_EN(x)       (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_U85_MODULO_SEL_EN_SHIFT)) & NSS_EVENT_BUS_U85_MODULO_SEL_EN_MASK)
/*! @} */

/*! @name U85_MODULO_CNTR - Actual value of the Ethos U85 module event counter. */
/*! @{ */

#define NSS_EVENT_BUS_U85_MODULO_CNTR_VALUE_MASK (0xFU)
#define NSS_EVENT_BUS_U85_MODULO_CNTR_VALUE_SHIFT (0U)
/*! value - Modulo counter actual value. */
#define NSS_EVENT_BUS_U85_MODULO_CNTR_VALUE(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_U85_MODULO_CNTR_VALUE_SHIFT)) & NSS_EVENT_BUS_U85_MODULO_CNTR_VALUE_MASK)
/*! @} */

/*! @name XSP_EVENT_OVERFLOW_STATUS0 - Indicates which events experienced overflow due to one or more missed pulses during synchronization to XSP clock domain. */
/*! @{ */

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER0_MASK (0x1U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER0_SHIFT (0U)
/*! timer0 - NSS timer0 event */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER0(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER0_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER0_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER1_MASK (0x2U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER1_SHIFT (1U)
/*! timer1 - NSS timer1 event */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER1(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER1_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER1_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER2_MASK (0x4U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER2_SHIFT (2U)
/*! timer2 - NSS timer2 event */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER2(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER2_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER2_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER3_MASK (0x8U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER3_SHIFT (3U)
/*! timer3 - NSS timer3 event */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER3(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER3_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER3_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER4_MASK (0x10U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER4_SHIFT (4U)
/*! timer4 - NSS timer4 event */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER4(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER4_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER4_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER5_MASK (0x20U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER5_SHIFT (5U)
/*! timer5 - NSS timer5 event */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER5(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER5_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_TIMER5_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_U85_MASK (0x40U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_U85_SHIFT (6U)
/*! u85 - Ethos U85 IRQ event */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_U85(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_U85_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_U85_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_U85_MOD_N_MASK (0x80U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_U85_MOD_N_SHIFT (7U)
/*! u85_mod_n - Ethos U85 IRQ modulo N event */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_U85_MOD_N(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_U85_MOD_N_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_U85_MOD_N_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM0_MASK (0x100U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM0_SHIFT (8U)
/*! dnn_ram0 - DNN RAM event 0 of a programmable DNN RAM slice */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM0(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM0_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM0_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM1_MASK (0x200U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM1_SHIFT (9U)
/*! dnn_ram1 - DNN RAM event 1 of a programmable DNN RAM slice */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM1(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM1_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM1_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM2_MASK (0x400U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM2_SHIFT (10U)
/*! dnn_ram2 - DNN RAM event 2 of a programmable DNN RAM slice */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM2(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM2_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM2_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM3_MASK (0x800U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM3_SHIFT (11U)
/*! dnn_ram3 - DNN RAM event 3 of a programmable DNN RAM slice */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM3(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM3_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM3_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM4_MASK (0x1000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM4_SHIFT (12U)
/*! dnn_ram4 - DNN RAM event 4 of a programmable DNN RAM slice */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM4(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM4_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM4_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM5_MASK (0x2000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM5_SHIFT (13U)
/*! dnn_ram5 - DNN RAM event 5 of a programmable DNN RAM slice */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM5(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM5_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM5_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM6_MASK (0x4000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM6_SHIFT (14U)
/*! dnn_ram6 - DNN RAM event 6 of a programmable DNN RAM slice */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM6(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM6_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM6_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM7_MASK (0x8000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM7_SHIFT (15U)
/*! dnn_ram7 - DNN RAM event 7 of a programmable DNN RAM slice */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM7(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM7_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DNN_RAM7_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS0_MASK (0x10000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS0_SHIFT (16U)
/*! dss0 - External DSS event 0 to NSS. Programmable DSS event source in the ADSS. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS0(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS0_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS0_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS1_MASK (0x20000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS1_SHIFT (17U)
/*! dss1 - External DSS event 1 to NSS. Programmable DSS event source in the ADSS. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS1(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS1_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS1_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS2_MASK (0x40000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS2_SHIFT (18U)
/*! dss2 - External DSS event 2 to NSS. Programmable DSS event source in the ADSS. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS2(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS2_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS2_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS3_MASK (0x80000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS3_SHIFT (19U)
/*! dss3 - External DSS event 3 to NSS. Programmable DSS event source in the ADSS. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS3(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS3_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS3_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS4_MASK (0x100000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS4_SHIFT (20U)
/*! dss4 - External DSS event 4 to NSS. Programmable DSS event source in the ADSS. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS4(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS4_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS4_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS5_MASK (0x200000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS5_SHIFT (21U)
/*! dss5 - External DSS event 5 to NSS. Programmable DSS event source in the ADSS. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS5(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS5_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS5_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS6_MASK (0x400000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS6_SHIFT (22U)
/*! dss6 - External DSS event 6 to NSS. Programmable DSS event source in the ADSS. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS6(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS6_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS6_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS7_MASK (0x800000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS7_SHIFT (23U)
/*! dss7 - External DSS event 7 to NSS. Programmable DSS event source in the ADSS. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS7(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS7_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_DSS7_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS0_MASK (0x1000000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS0_SHIFT (24U)
/*! css0 - External CSS event 0 to NSS. Programmable CSS event source in the CtrlSS. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS0(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS0_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS0_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS1_MASK (0x2000000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS1_SHIFT (25U)
/*! css1 - External CSS event 1 to NSS. Programmable CSS event source in the CtrlSS. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS1(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS1_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS1_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS2_MASK (0x4000000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS2_SHIFT (26U)
/*! css2 - External CSS event 2 to NSS. Programmable CSS event source in the CtrlSS. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS2(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS2_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS2_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS3_MASK (0x8000000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS3_SHIFT (27U)
/*! css3 - External CSS event 3 to NSS. Programmable CSS event source in the CtrlSS. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS3(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS3_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS3_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS4_MASK (0x10000000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS4_SHIFT (28U)
/*! css4 - External CSS event 4 to NSS. Programmable CSS event source in the CtrlSS. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS4(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS4_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS4_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS5_MASK (0x20000000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS5_SHIFT (29U)
/*! css5 - External CSS event 5 to NSS. Programmable CSS event source in the CtrlSS. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS5(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS5_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS5_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS6_MASK (0x40000000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS6_SHIFT (30U)
/*! css6 - External CSS event 6 to NSS. Programmable CSS event source in the CtrlSS. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS6(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS6_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS6_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS7_MASK (0x80000000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS7_SHIFT (31U)
/*! css7 - External CSS event 7 to NSS. Programmable CSS event source in the CtrlSS. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS7(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS7_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS0_CSS7_MASK)
/*! @} */

/*! @name XSP_EVENT_OVERFLOW_STATUS1 - Indicates which events experienced overflow due to one or more missed pulses during synchronization to XSP clock domain. */
/*! @{ */

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS8_MASK (0x1U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS8_SHIFT (0U)
/*! css8 - External CSS event 8 to NSS. Programmable at CSS to the CSS DMA[0|1] Ch[0-5] complete event. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS8(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS8_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS8_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS9_MASK (0x2U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS9_SHIFT (1U)
/*! css9 - External CSS event 9 to NSS. Programmable at CSS to the CSS DMA[0|1] Ch[6-11] complete event. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS9(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS9_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS9_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS10_MASK (0x4U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS10_SHIFT (2U)
/*! css10 - External CSS event 10 to NSS. Programmable at CSS to the CSS DMA[0] Ch[12-17] complete event. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS10(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS10_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS10_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS11_MASK (0x8U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS11_SHIFT (3U)
/*! css11 - External CSS event 11 to NSS. Programmable at CSS to the CSS DMA[0] Ch[18-23] complete event. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS11(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS11_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS11_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS12_MASK (0x10U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS12_SHIFT (4U)
/*! css12 - External CSS event 12 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS12(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS12_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS12_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS13_MASK (0x20U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS13_SHIFT (5U)
/*! css13 - External CSS event 13 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS13(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS13_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS13_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS14_MASK (0x40U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS14_SHIFT (6U)
/*! css14 - External CSS event 14 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS14(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS14_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS14_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS15_MASK (0x80U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS15_SHIFT (7U)
/*! css15 - External CSS event 15 to NSS. Programmable at CSS to the CSS CTimer[0-4] Match[0-3] event. */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS15(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS15_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_CSS15_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG0_MASK (0x100U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG0_SHIFT (8U)
/*! prog0 - Programmable NSS event source 0 */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG0(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG0_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG0_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG1_MASK (0x200U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG1_SHIFT (9U)
/*! prog1 - Programmable NSS event source 1 */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG1(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG1_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG1_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG2_MASK (0x400U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG2_SHIFT (10U)
/*! prog2 - Programmable NSS event source 2 */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG2(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG2_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG2_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG3_MASK (0x800U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG3_SHIFT (11U)
/*! prog3 - Programmable NSS event source 3 */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG3(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG3_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG3_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG4_MASK (0x1000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG4_SHIFT (12U)
/*! prog4 - Programmable NSS event source 4 */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG4(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG4_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG4_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG5_MASK (0x2000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG5_SHIFT (13U)
/*! prog5 - Programmable NSS event source 5 */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG5(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG5_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG5_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG6_MASK (0x4000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG6_SHIFT (14U)
/*! prog6 - Programmable NSS event source 6 */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG6(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG6_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG6_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG7_MASK (0x8000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG7_SHIFT (15U)
/*! prog7 - Programmable NSS event source 7 */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG7(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG7_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG7_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG8_MASK (0x10000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG8_SHIFT (16U)
/*! prog8 - Programmable NSS event source 8 */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG8(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG8_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG8_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG9_MASK (0x20000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG9_SHIFT (17U)
/*! prog9 - Programmable NSS event source 9 */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG9(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG9_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG9_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG10_MASK (0x40000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG10_SHIFT (18U)
/*! prog10 - Programmable NSS event source 10 */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG10(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG10_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG10_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG11_MASK (0x80000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG11_SHIFT (19U)
/*! prog11 - Programmable NSS event source 11 */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG11(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG11_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG11_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG12_MASK (0x100000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG12_SHIFT (20U)
/*! prog12 - Programmable NSS event source 12 */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG12(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG12_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG12_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG13_MASK (0x200000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG13_SHIFT (21U)
/*! prog13 - Programmable NSS event source 13 */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG13(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG13_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG13_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG14_MASK (0x400000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG14_SHIFT (22U)
/*! prog14 - Programmable NSS event source 14 */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG14(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG14_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG14_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG15_MASK (0x800000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG15_SHIFT (23U)
/*! prog15 - Programmable NSS event source 15 */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG15(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG15_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_PROG15_MASK)

#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_ERROR_MASK (0x1000000U)
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_ERROR_SHIFT (24U)
/*! error - NSS EDU error event */
#define NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_ERROR(x) (((uint32_t)(((uint32_t)(x)) << NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_ERROR_SHIFT)) & NSS_EVENT_BUS_XSP_EVENT_OVERFLOW_STATUS1_ERROR_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group NSS_EVENT_BUS_Register_Masks */


/*!
 * @}
 */ /* end of group NSS_EVENT_BUS_Peripheral_Access_Layer */


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


#endif  /* PERI_NSS_EVENT_BUS_H_ */

