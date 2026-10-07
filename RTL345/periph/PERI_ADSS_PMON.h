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
**         CMSIS Peripheral Access Layer for ADSS_PMON
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
 * @file PERI_ADSS_PMON.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_PMON
 *
 * CMSIS Peripheral Access Layer for ADSS_PMON
 */

#if !defined(PERI_ADSS_PMON_H_)
#define PERI_ADSS_PMON_H_                        /**< Symbol preventing repeated inclusion */

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
   -- ADSS_PMON Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_PMON_Peripheral_Access_Layer ADSS_PMON Peripheral Access Layer
 * @{
 */

/** ADSS_PMON - Size of Registers Arrays */
#define ADSS_PMON_PM_DSP_COUNT                    2u
#define ADSS_PMON_PM_HIFI5S_COUNT                 1u
#define ADSS_PMON_PM_SYNC_COUNT                   4u

/** ADSS_PMON - Register Layout Typedef */
typedef struct {
  struct {                                         /* offset: 0x0, array step: 0x10 */
    __IO uint32_t MONITOR_CFG;                       /**< Configuration for the performance monitor of one DSP, array offset: 0x0, array step: 0x10 */
    __I  uint32_t COUNT;                             /**< This register contains the number of monitor events that were received since the counter was last reset., array offset: 0x4, array step: 0x10 */
    __I  uint32_t PREV_COUNT;                        /**< This register contains the value of the counter when it was last reset, array offset: 0x8, array step: 0x10 */
         uint8_t RESERVED_0[4];
  } PM_DSP[ADSS_PMON_PM_DSP_COUNT];
  struct {                                         /* offset: 0x20, array step: 0xC */
    __IO uint32_t MONITOR_CFG;                       /**< Configuration for the performance monitor of HiFi5s, array offset: 0x20, array step: 0xC */
    __I  uint32_t COUNT;                             /**< This register contains the number of monitor events that were received since the counter was last reset., array offset: 0x24, array step: 0xC */
    __I  uint32_t PREV_COUNT;                        /**< This register contains the value of the counter when it was last reset, array offset: 0x28, array step: 0xC */
  } PM_HIFI5S[ADSS_PMON_PM_HIFI5S_COUNT];
       uint8_t RESERVED_0[4];
  struct {                                         /* offset: 0x30, array step: 0x10 */
    __IO uint32_t MONITOR_CFG;                       /**< Configuration for the performance monitor, array offset: 0x30, array step: 0x10 */
    __I  uint32_t COUNT;                             /**< This register contains the number of monitor events that were received since the counter was last reset., array offset: 0x34, array step: 0x10 */
    __I  uint32_t PREV_COUNT;                        /**< This register contains the value of the counter when it was last reset, array offset: 0x38, array step: 0x10 */
    __IO uint32_t CNTR_CFG;                          /**< This register sets the count mode and number of start-end event pairs to process before the counter automatically halts and resets at the beginning of a new series., array offset: 0x3C, array step: 0x10 */
  } PM_SYNC[ADSS_PMON_PM_SYNC_COUNT];
} ADSS_PMON_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_PMON Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_PMON_Register_Masks ADSS_PMON Register Masks
 * @{
 */

/*! @name MONITOR_CFG - Configuration for the performance monitor of one DSP */
/*! @{ */

#define ADSS_PMON_MONITOR_CFG_EVENT_MASK         (0x7FU)
#define ADSS_PMON_MONITOR_CFG_EVENT_SHIFT        (0U)
/*! event - Selects the event that defines the period over which the clocks will be counted, as
 *    defined in section "Event lines" in the Audio subsystem specification. Whenever the event is
 *    received, the counter is copied to the last_value register and additionally it is cleared.
 */
#define ADSS_PMON_MONITOR_CFG_EVENT(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_EVENT_SHIFT)) & ADSS_PMON_MONITOR_CFG_EVENT_MASK)

#define ADSS_PMON_MONITOR_CFG_LB_READ_MASK       (0x80U)
#define ADSS_PMON_MONITOR_CFG_LB_READ_SHIFT      (7U)
/*! lb_read - The DSP read from the loop buffer. */
#define ADSS_PMON_MONITOR_CFG_LB_READ(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_LB_READ_SHIFT)) & ADSS_PMON_MONITOR_CFG_LB_READ_MASK)

#define ADSS_PMON_MONITOR_CFG_PMEM_READ_MASK     (0x100U)
#define ADSS_PMON_MONITOR_CFG_PMEM_READ_SHIFT    (8U)
/*! pmem_read - The DSP read from PMEM. Includes accesses via the loop buffer. */
#define ADSS_PMON_MONITOR_CFG_PMEM_READ(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_PMEM_READ_SHIFT)) & ADSS_PMON_MONITOR_CFG_PMEM_READ_MASK)

#define ADSS_PMON_MONITOR_CFG_PMEM_HOLD_MASK     (0x200U)
#define ADSS_PMON_MONITOR_CFG_PMEM_HOLD_SHIFT    (9U)
/*! pmem_hold - The DSP was held due to an access to PMEM. */
#define ADSS_PMON_MONITOR_CFG_PMEM_HOLD(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_PMEM_HOLD_SHIFT)) & ADSS_PMON_MONITOR_CFG_PMEM_HOLD_MASK)

#define ADSS_PMON_MONITOR_CFG_XMEM_EVEN_WRITE_MASK (0x400U)
#define ADSS_PMON_MONITOR_CFG_XMEM_EVEN_WRITE_SHIFT (10U)
/*! xmem_even_write - The DSP wrote to the even XMEM bank. */
#define ADSS_PMON_MONITOR_CFG_XMEM_EVEN_WRITE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_XMEM_EVEN_WRITE_SHIFT)) & ADSS_PMON_MONITOR_CFG_XMEM_EVEN_WRITE_MASK)

#define ADSS_PMON_MONITOR_CFG_XMEM_EVEN_READ_MASK (0x800U)
#define ADSS_PMON_MONITOR_CFG_XMEM_EVEN_READ_SHIFT (11U)
/*! xmem_even_read - The DSP read from the even XMEM bank. */
#define ADSS_PMON_MONITOR_CFG_XMEM_EVEN_READ(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_XMEM_EVEN_READ_SHIFT)) & ADSS_PMON_MONITOR_CFG_XMEM_EVEN_READ_MASK)

#define ADSS_PMON_MONITOR_CFG_XMEM_EVEN_HOLD_MASK (0x1000U)
#define ADSS_PMON_MONITOR_CFG_XMEM_EVEN_HOLD_SHIFT (12U)
/*! xmem_even_hold - The DSP was held due to an access to the even XMEM bank. */
#define ADSS_PMON_MONITOR_CFG_XMEM_EVEN_HOLD(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_XMEM_EVEN_HOLD_SHIFT)) & ADSS_PMON_MONITOR_CFG_XMEM_EVEN_HOLD_MASK)

#define ADSS_PMON_MONITOR_CFG_XMEM_ODD_WRITE_MASK (0x2000U)
#define ADSS_PMON_MONITOR_CFG_XMEM_ODD_WRITE_SHIFT (13U)
/*! xmem_odd_write - The DSP wrote to the odd XMEM bank. */
#define ADSS_PMON_MONITOR_CFG_XMEM_ODD_WRITE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_XMEM_ODD_WRITE_SHIFT)) & ADSS_PMON_MONITOR_CFG_XMEM_ODD_WRITE_MASK)

#define ADSS_PMON_MONITOR_CFG_XMEM_ODD_READ_MASK (0x4000U)
#define ADSS_PMON_MONITOR_CFG_XMEM_ODD_READ_SHIFT (14U)
/*! xmem_odd_read - The DSP read from the odd XMEM bank. */
#define ADSS_PMON_MONITOR_CFG_XMEM_ODD_READ(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_XMEM_ODD_READ_SHIFT)) & ADSS_PMON_MONITOR_CFG_XMEM_ODD_READ_MASK)

#define ADSS_PMON_MONITOR_CFG_XMEM_ODD_HOLD_MASK (0x8000U)
#define ADSS_PMON_MONITOR_CFG_XMEM_ODD_HOLD_SHIFT (15U)
/*! xmem_odd_hold - The DSP was held due to an access to the odd XMEM bank. */
#define ADSS_PMON_MONITOR_CFG_XMEM_ODD_HOLD(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_XMEM_ODD_HOLD_SHIFT)) & ADSS_PMON_MONITOR_CFG_XMEM_ODD_HOLD_MASK)

#define ADSS_PMON_MONITOR_CFG_YMEM_EVEN_WRITE_MASK (0x10000U)
#define ADSS_PMON_MONITOR_CFG_YMEM_EVEN_WRITE_SHIFT (16U)
/*! ymem_even_write - The DSP wrote to the even ymem bank. */
#define ADSS_PMON_MONITOR_CFG_YMEM_EVEN_WRITE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_YMEM_EVEN_WRITE_SHIFT)) & ADSS_PMON_MONITOR_CFG_YMEM_EVEN_WRITE_MASK)

#define ADSS_PMON_MONITOR_CFG_YMEM_EVEN_READ_MASK (0x20000U)
#define ADSS_PMON_MONITOR_CFG_YMEM_EVEN_READ_SHIFT (17U)
/*! ymem_even_read - The DSP read from the even ymem bank. */
#define ADSS_PMON_MONITOR_CFG_YMEM_EVEN_READ(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_YMEM_EVEN_READ_SHIFT)) & ADSS_PMON_MONITOR_CFG_YMEM_EVEN_READ_MASK)

#define ADSS_PMON_MONITOR_CFG_YMEM_EVEN_HOLD_MASK (0x40000U)
#define ADSS_PMON_MONITOR_CFG_YMEM_EVEN_HOLD_SHIFT (18U)
/*! ymem_even_hold - The DSP was held due to an access to the even ymem bank. */
#define ADSS_PMON_MONITOR_CFG_YMEM_EVEN_HOLD(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_YMEM_EVEN_HOLD_SHIFT)) & ADSS_PMON_MONITOR_CFG_YMEM_EVEN_HOLD_MASK)

#define ADSS_PMON_MONITOR_CFG_YMEM_ODD_WRITE_MASK (0x80000U)
#define ADSS_PMON_MONITOR_CFG_YMEM_ODD_WRITE_SHIFT (19U)
/*! ymem_odd_write - The DSP wrote to the odd ymem bank. */
#define ADSS_PMON_MONITOR_CFG_YMEM_ODD_WRITE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_YMEM_ODD_WRITE_SHIFT)) & ADSS_PMON_MONITOR_CFG_YMEM_ODD_WRITE_MASK)

#define ADSS_PMON_MONITOR_CFG_YMEM_ODD_READ_MASK (0x100000U)
#define ADSS_PMON_MONITOR_CFG_YMEM_ODD_READ_SHIFT (20U)
/*! ymem_odd_read - The DSP read from the odd ymem bank. */
#define ADSS_PMON_MONITOR_CFG_YMEM_ODD_READ(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_YMEM_ODD_READ_SHIFT)) & ADSS_PMON_MONITOR_CFG_YMEM_ODD_READ_MASK)

#define ADSS_PMON_MONITOR_CFG_YMEM_ODD_HOLD_MASK (0x200000U)
#define ADSS_PMON_MONITOR_CFG_YMEM_ODD_HOLD_SHIFT (21U)
/*! ymem_odd_hold - The DSP was held due to an access to the odd ymem bank. */
#define ADSS_PMON_MONITOR_CFG_YMEM_ODD_HOLD(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_YMEM_ODD_HOLD_SHIFT)) & ADSS_PMON_MONITOR_CFG_YMEM_ODD_HOLD_MASK)

#define ADSS_PMON_MONITOR_CFG_CLOCK_STEAL_MASK   (0x400000U)
#define ADSS_PMON_MONITOR_CFG_CLOCK_STEAL_SHIFT  (22U)
/*! clock_steal - A cycle was stolen from the DSP. */
#define ADSS_PMON_MONITOR_CFG_CLOCK_STEAL(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_CLOCK_STEAL_SHIFT)) & ADSS_PMON_MONITOR_CFG_CLOCK_STEAL_MASK)

#define ADSS_PMON_MONITOR_CFG_IO_HOLD_MASK       (0x800000U)
#define ADSS_PMON_MONITOR_CFG_IO_HOLD_SHIFT      (23U)
/*! io_hold - The DSP was held due to an access to the IO bus. */
#define ADSS_PMON_MONITOR_CFG_IO_HOLD(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_IO_HOLD_SHIFT)) & ADSS_PMON_MONITOR_CFG_IO_HOLD_MASK)
/*! @} */

/* The count of ADSS_PMON_MONITOR_CFG */
#define ADSS_PMON_MONITOR_CFG_COUNT              (2U)

/*! @name COUNT - This register contains the number of monitor events that were received since the counter was last reset. */
/*! @{ */

#define ADSS_PMON_COUNT_VALUE_MASK               (0xFFFFFFU)
#define ADSS_PMON_COUNT_VALUE_SHIFT              (0U)
/*! value - This register contains the number of monitor events that were received since the counter was last reset. */
#define ADSS_PMON_COUNT_VALUE(x)                 (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_COUNT_VALUE_SHIFT)) & ADSS_PMON_COUNT_VALUE_MASK)
/*! @} */

/* The count of ADSS_PMON_COUNT */
#define ADSS_PMON_COUNT_COUNT                    (2U)

/*! @name PREV_COUNT - This register contains the value of the counter when it was last reset */
/*! @{ */

#define ADSS_PMON_PREV_COUNT_VALUE_MASK          (0xFFFFFFU)
#define ADSS_PMON_PREV_COUNT_VALUE_SHIFT         (0U)
/*! value - This register contains the value of the counter when it was last reset */
#define ADSS_PMON_PREV_COUNT_VALUE(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_PREV_COUNT_VALUE_SHIFT)) & ADSS_PMON_PREV_COUNT_VALUE_MASK)
/*! @} */

/* The count of ADSS_PMON_PREV_COUNT */
#define ADSS_PMON_PREV_COUNT_COUNT               (2U)

/*! @name MONITOR_CFG - Configuration for the performance monitor of HiFi5s */
/*! @{ */

#define ADSS_PMON_MONITOR_CFG_EVENT_MASK         (0x7FU)
#define ADSS_PMON_MONITOR_CFG_EVENT_SHIFT        (0U)
/*! event - Selects the event that defines the period over which the clocks will be counted, as
 *    defined in section "Event lines" in the Audio subsystem specification. Whenever the event is
 *    received, the counter is copied to the last_value register and additionally it is cleared.
 */
#define ADSS_PMON_MONITOR_CFG_EVENT(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_EVENT_SHIFT)) & ADSS_PMON_MONITOR_CFG_EVENT_MASK)

#define ADSS_PMON_MONITOR_CFG_IRAM_READ_MASK     (0x100U)
#define ADSS_PMON_MONITOR_CFG_IRAM_READ_SHIFT    (8U)
/*! iram_read - The HiFi5s read from IRAM. Includes accesses via the loop buffer. */
#define ADSS_PMON_MONITOR_CFG_IRAM_READ(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_IRAM_READ_SHIFT)) & ADSS_PMON_MONITOR_CFG_IRAM_READ_MASK)

#define ADSS_PMON_MONITOR_CFG_IRAM_BUSY_MASK     (0x200U)
#define ADSS_PMON_MONITOR_CFG_IRAM_BUSY_SHIFT    (9U)
/*! iram_busy - The HiFi5s was held due to an access to IRAM. */
#define ADSS_PMON_MONITOR_CFG_IRAM_BUSY(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_IRAM_BUSY_SHIFT)) & ADSS_PMON_MONITOR_CFG_IRAM_BUSY_MASK)

#define ADSS_PMON_MONITOR_CFG_DRAM0_B0_WRITE_MASK (0x400U)
#define ADSS_PMON_MONITOR_CFG_DRAM0_B0_WRITE_SHIFT (10U)
/*! dram0_b0_write - The HiFi5s wrote to the DRAM0_b0. */
#define ADSS_PMON_MONITOR_CFG_DRAM0_B0_WRITE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_DRAM0_B0_WRITE_SHIFT)) & ADSS_PMON_MONITOR_CFG_DRAM0_B0_WRITE_MASK)

#define ADSS_PMON_MONITOR_CFG_DRAM0_B0_READ_MASK (0x800U)
#define ADSS_PMON_MONITOR_CFG_DRAM0_B0_READ_SHIFT (11U)
/*! dram0_b0_read - The HiFi5s read from the DRAM0_b0. */
#define ADSS_PMON_MONITOR_CFG_DRAM0_B0_READ(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_DRAM0_B0_READ_SHIFT)) & ADSS_PMON_MONITOR_CFG_DRAM0_B0_READ_MASK)

#define ADSS_PMON_MONITOR_CFG_DRAM0_B0_BUSY_MASK (0x1000U)
#define ADSS_PMON_MONITOR_CFG_DRAM0_B0_BUSY_SHIFT (12U)
/*! dram0_b0_busy - The HiFi5s was held due to an access to the DRAM0_b0. */
#define ADSS_PMON_MONITOR_CFG_DRAM0_B0_BUSY(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_DRAM0_B0_BUSY_SHIFT)) & ADSS_PMON_MONITOR_CFG_DRAM0_B0_BUSY_MASK)

#define ADSS_PMON_MONITOR_CFG_DRAM0_B1_WRITE_MASK (0x2000U)
#define ADSS_PMON_MONITOR_CFG_DRAM0_B1_WRITE_SHIFT (13U)
/*! dram0_b1_write - The HiFi5s wrote to the DRAM0_b1. */
#define ADSS_PMON_MONITOR_CFG_DRAM0_B1_WRITE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_DRAM0_B1_WRITE_SHIFT)) & ADSS_PMON_MONITOR_CFG_DRAM0_B1_WRITE_MASK)

#define ADSS_PMON_MONITOR_CFG_DRAM0_B1_READ_MASK (0x4000U)
#define ADSS_PMON_MONITOR_CFG_DRAM0_B1_READ_SHIFT (14U)
/*! dram0_b1_read - The HiFi5s read from the DRAM0_b1. */
#define ADSS_PMON_MONITOR_CFG_DRAM0_B1_READ(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_DRAM0_B1_READ_SHIFT)) & ADSS_PMON_MONITOR_CFG_DRAM0_B1_READ_MASK)

#define ADSS_PMON_MONITOR_CFG_DRAM0_B1_BUSY_MASK (0x8000U)
#define ADSS_PMON_MONITOR_CFG_DRAM0_B1_BUSY_SHIFT (15U)
/*! dram0_b1_busy - The HiFi5s was held due to an access to the DRAM0_b1. */
#define ADSS_PMON_MONITOR_CFG_DRAM0_B1_BUSY(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_DRAM0_B1_BUSY_SHIFT)) & ADSS_PMON_MONITOR_CFG_DRAM0_B1_BUSY_MASK)

#define ADSS_PMON_MONITOR_CFG_DRAM1_B0_WRITE_MASK (0x10000U)
#define ADSS_PMON_MONITOR_CFG_DRAM1_B0_WRITE_SHIFT (16U)
/*! dram1_b0_write - The HiFi5s wrote to the DRAM1_b0. */
#define ADSS_PMON_MONITOR_CFG_DRAM1_B0_WRITE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_DRAM1_B0_WRITE_SHIFT)) & ADSS_PMON_MONITOR_CFG_DRAM1_B0_WRITE_MASK)

#define ADSS_PMON_MONITOR_CFG_DRAM1_B0_READ_MASK (0x20000U)
#define ADSS_PMON_MONITOR_CFG_DRAM1_B0_READ_SHIFT (17U)
/*! dram1_b0_read - The HiFi5s read from the DRAM1_b0. */
#define ADSS_PMON_MONITOR_CFG_DRAM1_B0_READ(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_DRAM1_B0_READ_SHIFT)) & ADSS_PMON_MONITOR_CFG_DRAM1_B0_READ_MASK)

#define ADSS_PMON_MONITOR_CFG_DRAM1_B0_BUSY_MASK (0x40000U)
#define ADSS_PMON_MONITOR_CFG_DRAM1_B0_BUSY_SHIFT (18U)
/*! dram1_b0_busy - The HiFi5s was held due to an access to the DRAM1_b0. */
#define ADSS_PMON_MONITOR_CFG_DRAM1_B0_BUSY(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_DRAM1_B0_BUSY_SHIFT)) & ADSS_PMON_MONITOR_CFG_DRAM1_B0_BUSY_MASK)

#define ADSS_PMON_MONITOR_CFG_DRAM1_B1_WRITE_MASK (0x80000U)
#define ADSS_PMON_MONITOR_CFG_DRAM1_B1_WRITE_SHIFT (19U)
/*! dram1_b1_write - The HiFi5s wrote to the DRAM1_b1. */
#define ADSS_PMON_MONITOR_CFG_DRAM1_B1_WRITE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_DRAM1_B1_WRITE_SHIFT)) & ADSS_PMON_MONITOR_CFG_DRAM1_B1_WRITE_MASK)

#define ADSS_PMON_MONITOR_CFG_DRAM1_B1_READ_MASK (0x100000U)
#define ADSS_PMON_MONITOR_CFG_DRAM1_B1_READ_SHIFT (20U)
/*! dram1_b1_read - The HiFi5s read from the DRAM1_b1. */
#define ADSS_PMON_MONITOR_CFG_DRAM1_B1_READ(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_DRAM1_B1_READ_SHIFT)) & ADSS_PMON_MONITOR_CFG_DRAM1_B1_READ_MASK)

#define ADSS_PMON_MONITOR_CFG_DRAM1_B1_BUSY_MASK (0x200000U)
#define ADSS_PMON_MONITOR_CFG_DRAM1_B1_BUSY_SHIFT (21U)
/*! dram1_b1_busy - The HiFi5s was held due to an access to the DRAM1_b1. */
#define ADSS_PMON_MONITOR_CFG_DRAM1_B1_BUSY(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_DRAM1_B1_BUSY_SHIFT)) & ADSS_PMON_MONITOR_CFG_DRAM1_B1_BUSY_MASK)

#define ADSS_PMON_MONITOR_CFG_RUN_STALL_MASK     (0x800000U)
#define ADSS_PMON_MONITOR_CFG_RUN_STALL_SHIFT    (23U)
/*! run_stall - The HiFi5s was held by run_stall. */
#define ADSS_PMON_MONITOR_CFG_RUN_STALL(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_RUN_STALL_SHIFT)) & ADSS_PMON_MONITOR_CFG_RUN_STALL_MASK)
/*! @} */

/* The count of ADSS_PMON_MONITOR_CFG */
#define ADSS_PMON_PM_HIFI5S_MONITOR_CFG_COUNT    (1U)

/*! @name COUNT - This register contains the number of monitor events that were received since the counter was last reset. */
/*! @{ */

#define ADSS_PMON_COUNT_VALUE_MASK               (0xFFFFFFU)
#define ADSS_PMON_COUNT_VALUE_SHIFT              (0U)
/*! value - This register contains the number of monitor events that were received since the counter was last reset. */
#define ADSS_PMON_COUNT_VALUE(x)                 (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_COUNT_VALUE_SHIFT)) & ADSS_PMON_COUNT_VALUE_MASK)
/*! @} */

/* The count of ADSS_PMON_COUNT */
#define ADSS_PMON_PM_HIFI5S_COUNT_COUNT          (1U)

/*! @name PREV_COUNT - This register contains the value of the counter when it was last reset */
/*! @{ */

#define ADSS_PMON_PREV_COUNT_VALUE_MASK          (0xFFFFFFU)
#define ADSS_PMON_PREV_COUNT_VALUE_SHIFT         (0U)
/*! value - This register contains the value of the counter when it was last reset */
#define ADSS_PMON_PREV_COUNT_VALUE(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_PREV_COUNT_VALUE_SHIFT)) & ADSS_PMON_PREV_COUNT_VALUE_MASK)
/*! @} */

/* The count of ADSS_PMON_PREV_COUNT */
#define ADSS_PMON_PM_HIFI5S_PREV_COUNT_COUNT     (1U)

/*! @name MONITOR_CFG - Configuration for the performance monitor */
/*! @{ */

#define ADSS_PMON_MONITOR_CFG_START_EVENT_MASK   (0x7FU)
#define ADSS_PMON_MONITOR_CFG_START_EVENT_SHIFT  (0U)
/*! start_event - Selects the event that defines the start of the period over which the clocks will
 *    be counted, as defined in section "Event lines" in the Audio subsystem specification. Whenever
 *    the event is received, the counter is cleared (before counting starts).
 */
#define ADSS_PMON_MONITOR_CFG_START_EVENT(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_START_EVENT_SHIFT)) & ADSS_PMON_MONITOR_CFG_START_EVENT_MASK)

#define ADSS_PMON_MONITOR_CFG_END_EVENT_MASK     (0x7F00U)
#define ADSS_PMON_MONITOR_CFG_END_EVENT_SHIFT    (8U)
/*! end_event - Selects the event that defines the end of the period over which the clocks will be
 *    counted, as defined in section "Event lines" in the Audio subsystem specification. Whenever the
 *    event is received, the counter is copied to the last_value register and additionally it is
 *    cleared.
 */
#define ADSS_PMON_MONITOR_CFG_END_EVENT(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_END_EVENT_SHIFT)) & ADSS_PMON_MONITOR_CFG_END_EVENT_MASK)

#define ADSS_PMON_MONITOR_CFG_REF_EVENT_MASK     (0x7F0000U)
#define ADSS_PMON_MONITOR_CFG_REF_EVENT_SHIFT    (16U)
/*! ref_event - Selects the event that defines the reference period over which the clocks will be
 *    counted, as defined in section "Event lines" in the Audio subsystem specification. Whenever the
 *    event is received, the next event to be expected it the start event, otherwise an error will
 *    be generated.
 */
#define ADSS_PMON_MONITOR_CFG_REF_EVENT(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_MONITOR_CFG_REF_EVENT_SHIFT)) & ADSS_PMON_MONITOR_CFG_REF_EVENT_MASK)
/*! @} */

/* The count of ADSS_PMON_MONITOR_CFG */
#define ADSS_PMON_PM_SYNC_MONITOR_CFG_COUNT      (4U)

/*! @name COUNT - This register contains the number of monitor events that were received since the counter was last reset. */
/*! @{ */

#define ADSS_PMON_COUNT_VALUE_MASK               (0xFFFFFFU)
#define ADSS_PMON_COUNT_VALUE_SHIFT              (0U)
/*! value - This register contains the number of monitor events that were received since the counter was last reset. */
#define ADSS_PMON_COUNT_VALUE(x)                 (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_COUNT_VALUE_SHIFT)) & ADSS_PMON_COUNT_VALUE_MASK)
/*! @} */

/* The count of ADSS_PMON_COUNT */
#define ADSS_PMON_PM_SYNC_COUNT_COUNT            (4U)

/*! @name PREV_COUNT - This register contains the value of the counter when it was last reset */
/*! @{ */

#define ADSS_PMON_PREV_COUNT_VALUE_MASK          (0xFFFFFFU)
#define ADSS_PMON_PREV_COUNT_VALUE_SHIFT         (0U)
/*! value - This register contains the value of the counter when it was last reset */
#define ADSS_PMON_PREV_COUNT_VALUE(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_PREV_COUNT_VALUE_SHIFT)) & ADSS_PMON_PREV_COUNT_VALUE_MASK)
/*! @} */

/* The count of ADSS_PMON_PREV_COUNT */
#define ADSS_PMON_PM_SYNC_PREV_COUNT_COUNT       (4U)

/*! @name CNTR_CFG - This register sets the count mode and number of start-end event pairs to process before the counter automatically halts and resets at the beginning of a new series. */
/*! @{ */

#define ADSS_PMON_CNTR_CFG_CNTR_CONT_MODE_MASK   (0x1U)
#define ADSS_PMON_CNTR_CFG_CNTR_CONT_MODE_SHIFT  (0U)
/*! cntr_cont_mode - A single count cycle is active if this field sets to 0, otherwise the continuous mode is active. */
#define ADSS_PMON_CNTR_CFG_CNTR_CONT_MODE(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_CNTR_CFG_CNTR_CONT_MODE_SHIFT)) & ADSS_PMON_CNTR_CFG_CNTR_CONT_MODE_MASK)

#define ADSS_PMON_CNTR_CFG_CNTR_TARGET_MASK      (0x7EU)
#define ADSS_PMON_CNTR_CFG_CNTR_TARGET_SHIFT     (1U)
/*! cntr_target - For the continuous mode, this register defines the number of start-stop event
 *    pairs to process before the counter automatically halts and resets at the beginning of a new
 *    series.
 */
#define ADSS_PMON_CNTR_CFG_CNTR_TARGET(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_PMON_CNTR_CFG_CNTR_TARGET_SHIFT)) & ADSS_PMON_CNTR_CFG_CNTR_TARGET_MASK)
/*! @} */

/* The count of ADSS_PMON_CNTR_CFG */
#define ADSS_PMON_CNTR_CFG_COUNT                 (4U)


/*!
 * @}
 */ /* end of group ADSS_PMON_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_PMON_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_PMON_H_ */

