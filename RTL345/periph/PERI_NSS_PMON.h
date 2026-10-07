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
**         CMSIS Peripheral Access Layer for NSS_PMON
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
 * @file PERI_NSS_PMON.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for NSS_PMON
 *
 * CMSIS Peripheral Access Layer for NSS_PMON
 */

#if !defined(PERI_NSS_PMON_H_)
#define PERI_NSS_PMON_H_                         /**< Symbol preventing repeated inclusion */

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
   -- NSS_PMON Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_PMON_Peripheral_Access_Layer NSS_PMON Peripheral Access Layer
 * @{
 */

/** NSS_PMON - Size of Registers Arrays */
#define NSS_PMON_COUNTER_COUNT                    6u

/** NSS_PMON - Register Layout Typedef */
typedef struct {
  struct {                                         /* offset: 0x0, array step: 0x20 */
    __IO uint32_t LATCH_CFG;                         /**< Performance monitor counter latch configuration. A write to this register will invalidate the count_latch value and reset the counter., array offset: 0x0, array step: 0x20 */
    __IO uint32_t MONITOR0_CFG;                      /**< Configure monitor events which will increment the performance monitor counter. A write to this register will invalidate the count_latch value and reset the counter. Clearing all bits will also clear the counter., array offset: 0x4, array step: 0x20 */
    __IO uint32_t MONITOR1_CFG;                      /**< Configure monitor events which will increment the performance monitor counter. A write to this register will invalidate the count_latch value and reset the counter. Clearing all bits will also clear the counter., array offset: 0x8, array step: 0x20 */
    __I  uint32_t COUNT_CURR;                        /**< Current performance monitor counter value of the interval being counted at this time., array offset: 0xC, array step: 0x20 */
    __I  uint32_t COUNT_LATCH;                       /**< Latched performance monitor counter value of the previous interval., array offset: 0x10, array step: 0x20 */
         uint8_t RESERVED_0[12];
  } COUNTER[NSS_PMON_COUNTER_COUNT];
} NSS_PMON_Type;

/* ----------------------------------------------------------------------------
   -- NSS_PMON Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_PMON_Register_Masks NSS_PMON Register Masks
 * @{
 */

/*! @name LATCH_CFG - Performance monitor counter latch configuration. A write to this register will invalidate the count_latch value and reset the counter. */
/*! @{ */

#define NSS_PMON_LATCH_CFG_EVENT_MASK            (0x3FU)
#define NSS_PMON_LATCH_CFG_EVENT_SHIFT           (0U)
/*! event - Select event for latching of the performance monitor counter. Defines the timing
 *    interval at which the counter gets latched and reset. Programming an unlisted event will disable
 *    latching of the counter.
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
#define NSS_PMON_LATCH_CFG_EVENT(x)              (((uint32_t)(((uint32_t)(x)) << NSS_PMON_LATCH_CFG_EVENT_SHIFT)) & NSS_PMON_LATCH_CFG_EVENT_MASK)
/*! @} */

/* The count of NSS_PMON_LATCH_CFG */
#define NSS_PMON_LATCH_CFG_COUNT                 (6U)

/*! @name MONITOR0_CFG - Configure monitor events which will increment the performance monitor counter. A write to this register will invalidate the count_latch value and reset the counter. Clearing all bits will also clear the counter. */
/*! @{ */

#define NSS_PMON_MONITOR0_CFG_U85_TICK_MASK      (0x1U)
#define NSS_PMON_MONITOR0_CFG_U85_TICK_SHIFT     (0U)
/*! u85_tick - Increment counter every time Ethos-U85 has an active cycle
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_U85_TICK(x)        (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_U85_TICK_SHIFT)) & NSS_PMON_MONITOR0_CFG_U85_TICK_MASK)

#define NSS_PMON_MONITOR0_CFG_XSP_TICK_MASK      (0x2U)
#define NSS_PMON_MONITOR0_CFG_XSP_TICK_SHIFT     (1U)
/*! xsp_tick - Increment counter every time XSP has an active cycle
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_XSP_TICK(x)        (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_XSP_TICK_SHIFT)) & NSS_PMON_MONITOR0_CFG_XSP_TICK_MASK)

#define NSS_PMON_MONITOR0_CFG_CM55_TICK_MASK     (0x4U)
#define NSS_PMON_MONITOR0_CFG_CM55_TICK_SHIFT    (2U)
/*! cm55_tick - Increment counter every time Cortex-M55 is not sleeping.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_CM55_TICK(x)       (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_CM55_TICK_SHIFT)) & NSS_PMON_MONITOR0_CFG_CM55_TICK_MASK)

#define NSS_PMON_MONITOR0_CFG_CM55_L1I_CACHE_REFILL_MASK (0x20U)
#define NSS_PMON_MONITOR0_CFG_CM55_L1I_CACHE_REFILL_SHIFT (5U)
/*! cm55_l1i_cache_refill - When the CM55 cache module has been enabled, the counter is incremented
 *    each time the CM55 performs an instruction which is not cached and needs to be fetched from
 *    memory.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_CM55_L1I_CACHE_REFILL(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_CM55_L1I_CACHE_REFILL_SHIFT)) & NSS_PMON_MONITOR0_CFG_CM55_L1I_CACHE_REFILL_MASK)

#define NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_REFILL_MASK (0x40U)
#define NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_REFILL_SHIFT (6U)
/*! cm55_l1d_cache_refill - When the CM55 cache module has been enabled, the counter is incremented
 *    each time the CM55 performs a read or write operation which is not cached and needs to be
 *    fetched from memory.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_REFILL(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_REFILL_SHIFT)) & NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_REFILL_MASK)

#define NSS_PMON_MONITOR0_CFG_CM55_L1I_CACHE_MASK (0x80U)
#define NSS_PMON_MONITOR0_CFG_CM55_L1I_CACHE_SHIFT (7U)
/*! cm55_l1i_cache - When the CM55 cache module has been enabled, the counter is incremented each time the CM55 performs an instruction.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_CM55_L1I_CACHE(x)  (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_CM55_L1I_CACHE_SHIFT)) & NSS_PMON_MONITOR0_CFG_CM55_L1I_CACHE_MASK)

#define NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_MASK (0x100U)
#define NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_SHIFT (8U)
/*! cm55_l1d_cache - When the CM55 cache module has been enabled, the counter is incremented each
 *    time the CM55 performs a read or write operation.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE(x)  (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_SHIFT)) & NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_MASK)

#define NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_RD_MASK (0x200U)
#define NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_RD_SHIFT (9U)
/*! cm55_l1d_cache_rd - When the CM55 cache module has been enabled, the counter is incremented each time the CM55 performs a read operation.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_RD(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_RD_SHIFT)) & NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_RD_MASK)

#define NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_WB_MASK (0x400U)
#define NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_WB_SHIFT (10U)
/*! cm55_l1d_cache_wb - When the CM55 cache module has been enabled, the counter is incremented each
 *    time the CM55 performs a data cache write-back.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_WB(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_WB_SHIFT)) & NSS_PMON_MONITOR0_CFG_CM55_L1D_CACHE_WB_MASK)

#define NSS_PMON_MONITOR0_CFG_XSP_IO_HOLD_MASK   (0x800U)
#define NSS_PMON_MONITOR0_CFG_XSP_IO_HOLD_SHIFT  (11U)
/*! xsp_io_hold - The counter is incremented each time the XSP is stalled because the IO hold signal is asserted.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_XSP_IO_HOLD(x)     (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_XSP_IO_HOLD_SHIFT)) & NSS_PMON_MONITOR0_CFG_XSP_IO_HOLD_MASK)

#define NSS_PMON_MONITOR0_CFG_XSP_XMEMV_HOLD_MASK (0x1000U)
#define NSS_PMON_MONITOR0_CFG_XSP_XMEMV_HOLD_SHIFT (12U)
/*! xsp_xmemv_hold - The counter is incremented each time the XSP is stalled because the XMEMV hold
 *    signal is asserted. (DNN RAM access not ready.)
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_XSP_XMEMV_HOLD(x)  (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_XSP_XMEMV_HOLD_SHIFT)) & NSS_PMON_MONITOR0_CFG_XSP_XMEMV_HOLD_MASK)

#define NSS_PMON_MONITOR0_CFG_XSP_XMEMV_WR_MASK  (0x2000U)
#define NSS_PMON_MONITOR0_CFG_XSP_XMEMV_WR_SHIFT (13U)
/*! xsp_xmemv_wr - The counter is incremented each time the XSP performs a XMEMV (DNN RAM) write access.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_XSP_XMEMV_WR(x)    (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_XSP_XMEMV_WR_SHIFT)) & NSS_PMON_MONITOR0_CFG_XSP_XMEMV_WR_MASK)

#define NSS_PMON_MONITOR0_CFG_XSP_XMEMV_RD_MASK  (0x4000U)
#define NSS_PMON_MONITOR0_CFG_XSP_XMEMV_RD_SHIFT (14U)
/*! xsp_xmemv_rd - The counter is incremented each time the XSP performs a XMEMV (DNN RAM) read access.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_XSP_XMEMV_RD(x)    (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_XSP_XMEMV_RD_SHIFT)) & NSS_PMON_MONITOR0_CFG_XSP_XMEMV_RD_MASK)

#define NSS_PMON_MONITOR0_CFG_XSP_PMEM_HOLD_MASK (0x8000U)
#define NSS_PMON_MONITOR0_CFG_XSP_PMEM_HOLD_SHIFT (15U)
/*! xsp_pmem_hold - The counter is incremented each time the XSP is stalled because the PMEM hold
 *    signal is asserted. (PMEM access not ready.)
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_XSP_PMEM_HOLD(x)   (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_XSP_PMEM_HOLD_SHIFT)) & NSS_PMON_MONITOR0_CFG_XSP_PMEM_HOLD_MASK)

#define NSS_PMON_MONITOR0_CFG_XSP_PMEM_RD_MASK   (0x20000U)
#define NSS_PMON_MONITOR0_CFG_XSP_PMEM_RD_SHIFT  (17U)
/*! xsp_pmem_rd - The counter is incremented each time the XSP performs a PMEM read access.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_XSP_PMEM_RD(x)     (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_XSP_PMEM_RD_SHIFT)) & NSS_PMON_MONITOR0_CFG_XSP_PMEM_RD_MASK)

#define NSS_PMON_MONITOR0_CFG_XSP_YMEM_HOLD_MASK (0x40000U)
#define NSS_PMON_MONITOR0_CFG_XSP_YMEM_HOLD_SHIFT (18U)
/*! xsp_ymem_hold - The counter is incremented each time the XSP is stalled because the YMEM hold
 *    signal is asserted. (YMEM access not ready.)
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_XSP_YMEM_HOLD(x)   (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_XSP_YMEM_HOLD_SHIFT)) & NSS_PMON_MONITOR0_CFG_XSP_YMEM_HOLD_MASK)

#define NSS_PMON_MONITOR0_CFG_XSP_YMEM_WR_MASK   (0x80000U)
#define NSS_PMON_MONITOR0_CFG_XSP_YMEM_WR_SHIFT  (19U)
/*! xsp_ymem_wr - The counter is incremented each time the XSP performs a YMEM write access.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_XSP_YMEM_WR(x)     (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_XSP_YMEM_WR_SHIFT)) & NSS_PMON_MONITOR0_CFG_XSP_YMEM_WR_MASK)

#define NSS_PMON_MONITOR0_CFG_XSP_YMEM_RD_MASK   (0x100000U)
#define NSS_PMON_MONITOR0_CFG_XSP_YMEM_RD_SHIFT  (20U)
/*! xsp_ymem_rd - The counter is incremented each time the XSP performs a YMEM read access.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_XSP_YMEM_RD(x)     (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_XSP_YMEM_RD_SHIFT)) & NSS_PMON_MONITOR0_CFG_XSP_YMEM_RD_MASK)

#define NSS_PMON_MONITOR0_CFG_XSP_XMEM_HOLD_MASK (0x200000U)
#define NSS_PMON_MONITOR0_CFG_XSP_XMEM_HOLD_SHIFT (21U)
/*! xsp_xmem_hold - The counter is incremented each time the XSP is stalled because the XMEM hold
 *    signal is asserted. (XMEM access not ready.)
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_XSP_XMEM_HOLD(x)   (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_XSP_XMEM_HOLD_SHIFT)) & NSS_PMON_MONITOR0_CFG_XSP_XMEM_HOLD_MASK)

#define NSS_PMON_MONITOR0_CFG_XSP_XMEM_WR_MASK   (0x400000U)
#define NSS_PMON_MONITOR0_CFG_XSP_XMEM_WR_SHIFT  (22U)
/*! xsp_xmem_wr - The counter is incremented each time the XSP performs a XMEM write access.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_XSP_XMEM_WR(x)     (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_XSP_XMEM_WR_SHIFT)) & NSS_PMON_MONITOR0_CFG_XSP_XMEM_WR_MASK)

#define NSS_PMON_MONITOR0_CFG_XSP_XMEM_RD_MASK   (0x800000U)
#define NSS_PMON_MONITOR0_CFG_XSP_XMEM_RD_SHIFT  (23U)
/*! xsp_xmem_rd - The counter is incremented each time the XSP performs a XMEM read access.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_XSP_XMEM_RD(x)     (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_XSP_XMEM_RD_SHIFT)) & NSS_PMON_MONITOR0_CFG_XSP_XMEM_RD_MASK)

#define NSS_PMON_MONITOR0_CFG_XSP_LB_WR_MASK     (0x1000000U)
#define NSS_PMON_MONITOR0_CFG_XSP_LB_WR_SHIFT    (24U)
/*! xsp_lb_wr - The counter is incremented each time the XSP performs a loopbuffer write access.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_XSP_LB_WR(x)       (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_XSP_LB_WR_SHIFT)) & NSS_PMON_MONITOR0_CFG_XSP_LB_WR_MASK)

#define NSS_PMON_MONITOR0_CFG_XSP_LB_RD_MASK     (0x2000000U)
#define NSS_PMON_MONITOR0_CFG_XSP_LB_RD_SHIFT    (25U)
/*! xsp_lb_rd - The counter is incremented each time the XSP performs a loopbuffer read access.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR0_CFG_XSP_LB_RD(x)       (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR0_CFG_XSP_LB_RD_SHIFT)) & NSS_PMON_MONITOR0_CFG_XSP_LB_RD_MASK)
/*! @} */

/* The count of NSS_PMON_MONITOR0_CFG */
#define NSS_PMON_MONITOR0_CFG_COUNT              (6U)

/*! @name MONITOR1_CFG - Configure monitor events which will increment the performance monitor counter. A write to this register will invalidate the count_latch value and reset the counter. Clearing all bits will also clear the counter. */
/*! @{ */

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_ACCESS_MASK (0x1U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_ACCESS_SHIFT (0U)
/*! DNNram_seg0_access - Increment counter with amount of simultaneous accesses to DNN RAM segment 0.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_ACCESS(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_ACCESS_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_ACCESS_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_AXI_WR_STALLED_MASK (0x2U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_AXI_WR_STALLED_SHIFT (1U)
/*! DNNram_seg0_axi_wr_stalled - Increment counter each time an AXI write operation to DNN RAM segment 0 is stalled.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_AXI_WR_STALLED(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_AXI_WR_STALLED_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_AXI_WR_STALLED_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_AXI_RD_STALLED_MASK (0x4U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_AXI_RD_STALLED_SHIFT (2U)
/*! DNNram_seg0_axi_rd_stalled - Increment counter each time an AXI read operation to DNN RAM segment 0 is stalled.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_AXI_RD_STALLED(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_AXI_RD_STALLED_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_AXI_RD_STALLED_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_XSP_STALLED_MASK (0x8U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_XSP_STALLED_SHIFT (3U)
/*! DNNram_seg0_xsp_stalled - Increment counter each time an XSP access to DNN RAM segment 0 is stalled.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_XSP_STALLED(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_XSP_STALLED_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG0_XSP_STALLED_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_ACCESS_MASK (0x10U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_ACCESS_SHIFT (4U)
/*! DNNram_seg1_access - Increment counter with amount of simultaneous accesses to DNN RAM segment 1.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_ACCESS(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_ACCESS_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_ACCESS_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_AXI_WR_STALLED_MASK (0x20U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_AXI_WR_STALLED_SHIFT (5U)
/*! DNNram_seg1_axi_wr_stalled - Increment counter each time an AXI write operation to DNN RAM segment 1 is stalled.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_AXI_WR_STALLED(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_AXI_WR_STALLED_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_AXI_WR_STALLED_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_AXI_RD_STALLED_MASK (0x40U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_AXI_RD_STALLED_SHIFT (6U)
/*! DNNram_seg1_axi_rd_stalled - Increment counter each time an AXI read operation to DNN RAM segment 1 is stalled.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_AXI_RD_STALLED(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_AXI_RD_STALLED_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_AXI_RD_STALLED_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_XSP_STALLED_MASK (0x80U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_XSP_STALLED_SHIFT (7U)
/*! DNNram_seg1_xsp_stalled - Increment counter each time an XSP access to DNN RAM segment 1 is stalled.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_XSP_STALLED(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_XSP_STALLED_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG1_XSP_STALLED_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_ACCESS_MASK (0x100U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_ACCESS_SHIFT (8U)
/*! DNNram_seg2_access - Increment counter with amount of simultaneous accesses to DNN RAM segment 2.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_ACCESS(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_ACCESS_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_ACCESS_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_AXI_WR_STALLED_MASK (0x200U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_AXI_WR_STALLED_SHIFT (9U)
/*! DNNram_seg2_axi_wr_stalled - Increment counter each time an AXI write operation to DNN RAM segment 2 is stalled.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_AXI_WR_STALLED(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_AXI_WR_STALLED_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_AXI_WR_STALLED_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_AXI_RD_STALLED_MASK (0x400U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_AXI_RD_STALLED_SHIFT (10U)
/*! DNNram_seg2_axi_rd_stalled - Increment counter each time an AXI read operation to DNN RAM segment 2 is stalled.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_AXI_RD_STALLED(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_AXI_RD_STALLED_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_AXI_RD_STALLED_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_XSP_STALLED_MASK (0x800U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_XSP_STALLED_SHIFT (11U)
/*! DNNram_seg2_xsp_stalled - Increment counter each time an XSP access to DNN RAM segment 2 is stalled.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_XSP_STALLED(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_XSP_STALLED_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG2_XSP_STALLED_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_ACCESS_MASK (0x1000U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_ACCESS_SHIFT (12U)
/*! DNNram_seg3_access - Increment counter with amount of simultaneous accesses to DNN RAM segment 3.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_ACCESS(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_ACCESS_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_ACCESS_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_AXI_WR_STALLED_MASK (0x2000U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_AXI_WR_STALLED_SHIFT (13U)
/*! DNNram_seg3_axi_wr_stalled - Increment counter each time an AXI write operation to DNN RAM segment 3 is stalled.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_AXI_WR_STALLED(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_AXI_WR_STALLED_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_AXI_WR_STALLED_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_AXI_RD_STALLED_MASK (0x4000U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_AXI_RD_STALLED_SHIFT (14U)
/*! DNNram_seg3_axi_rd_stalled - Increment counter each time an AXI read operation to DNN RAM segment 3 is stalled.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_AXI_RD_STALLED(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_AXI_RD_STALLED_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_AXI_RD_STALLED_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_XSP_STALLED_MASK (0x8000U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_XSP_STALLED_SHIFT (15U)
/*! DNNram_seg3_xsp_stalled - Increment counter each time an XSP access to DNN RAM segment 3 is stalled.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_XSP_STALLED(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_XSP_STALLED_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG3_XSP_STALLED_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_ACCESS_MASK (0x10000U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_ACCESS_SHIFT (16U)
/*! DNNram_seg4_access - Increment counter with amount of simultaneous accesses to DNN RAM segment 4.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_ACCESS(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_ACCESS_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_ACCESS_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_AXI_WR_STALLED_MASK (0x20000U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_AXI_WR_STALLED_SHIFT (17U)
/*! DNNram_seg4_axi_wr_stalled - Increment counter each time an AXI write operation to DNN RAM segment 4 is stalled.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_AXI_WR_STALLED(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_AXI_WR_STALLED_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_AXI_WR_STALLED_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_AXI_RD_STALLED_MASK (0x40000U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_AXI_RD_STALLED_SHIFT (18U)
/*! DNNram_seg4_axi_rd_stalled - Increment counter each time an AXI read operation to DNN RAM segment 4 is stalled.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_AXI_RD_STALLED(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_AXI_RD_STALLED_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_AXI_RD_STALLED_MASK)

#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_XSP_STALLED_MASK (0x80000U)
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_XSP_STALLED_SHIFT (19U)
/*! DNNram_seg4_xsp_stalled - Increment counter each time an XSP access to DNN RAM segment 4 is stalled.
 *  0b0..Disable monitor event
 *  0b1..Enable monitor event
 */
#define NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_XSP_STALLED(x) (((uint32_t)(((uint32_t)(x)) << NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_XSP_STALLED_SHIFT)) & NSS_PMON_MONITOR1_CFG_DNNRAM_SEG4_XSP_STALLED_MASK)
/*! @} */

/* The count of NSS_PMON_MONITOR1_CFG */
#define NSS_PMON_MONITOR1_CFG_COUNT              (6U)

/*! @name COUNT_CURR - Current performance monitor counter value of the interval being counted at this time. */
/*! @{ */

#define NSS_PMON_COUNT_CURR_VALUE_MASK           (0x3FFFFFFFU)
#define NSS_PMON_COUNT_CURR_VALUE_SHIFT          (0U)
/*! value - Current performance monitor counter value of the interval being counted at this time. */
#define NSS_PMON_COUNT_CURR_VALUE(x)             (((uint32_t)(((uint32_t)(x)) << NSS_PMON_COUNT_CURR_VALUE_SHIFT)) & NSS_PMON_COUNT_CURR_VALUE_MASK)
/*! @} */

/* The count of NSS_PMON_COUNT_CURR */
#define NSS_PMON_COUNT_CURR_COUNT                (6U)

/*! @name COUNT_LATCH - Latched performance monitor counter value of the previous interval. */
/*! @{ */

#define NSS_PMON_COUNT_LATCH_VALUE_MASK          (0x3FFFFFFFU)
#define NSS_PMON_COUNT_LATCH_VALUE_SHIFT         (0U)
/*! value - Latched performance monitor counter value */
#define NSS_PMON_COUNT_LATCH_VALUE(x)            (((uint32_t)(((uint32_t)(x)) << NSS_PMON_COUNT_LATCH_VALUE_SHIFT)) & NSS_PMON_COUNT_LATCH_VALUE_MASK)

#define NSS_PMON_COUNT_LATCH_VALID_MASK          (0x40000000U)
#define NSS_PMON_COUNT_LATCH_VALID_SHIFT         (30U)
/*! valid - Latch counter value is valid */
#define NSS_PMON_COUNT_LATCH_VALID(x)            (((uint32_t)(((uint32_t)(x)) << NSS_PMON_COUNT_LATCH_VALID_SHIFT)) & NSS_PMON_COUNT_LATCH_VALID_MASK)

#define NSS_PMON_COUNT_LATCH_UPDATED_MASK        (0x80000000U)
#define NSS_PMON_COUNT_LATCH_UPDATED_SHIFT       (31U)
/*! updated - Indicates the latched counter value was updated. This bit is cleared when register is read. */
#define NSS_PMON_COUNT_LATCH_UPDATED(x)          (((uint32_t)(((uint32_t)(x)) << NSS_PMON_COUNT_LATCH_UPDATED_SHIFT)) & NSS_PMON_COUNT_LATCH_UPDATED_MASK)
/*! @} */

/* The count of NSS_PMON_COUNT_LATCH */
#define NSS_PMON_COUNT_LATCH_COUNT               (6U)


/*!
 * @}
 */ /* end of group NSS_PMON_Register_Masks */


/*!
 * @}
 */ /* end of group NSS_PMON_Peripheral_Access_Layer */


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


#endif  /* PERI_NSS_PMON_H_ */

