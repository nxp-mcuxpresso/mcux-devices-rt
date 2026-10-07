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
**         CMSIS Peripheral Access Layer for ADSS_ERROR
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
 * @file PERI_ADSS_ERROR.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_ERROR
 *
 * CMSIS Peripheral Access Layer for ADSS_ERROR
 */

#if !defined(PERI_ADSS_ERROR_H_)
#define PERI_ADSS_ERROR_H_                       /**< Symbol preventing repeated inclusion */

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
   -- ADSS_ERROR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_ERROR_Peripheral_Access_Layer ADSS_ERROR Peripheral Access Layer
 * @{
 */

/** ADSS_ERROR - Register Layout Typedef */
typedef struct {
  __IO uint32_t ERROR_STATUS_0;                    /**< Error status register (part 0). This register can be written in software when not protected., offset: 0x0 */
  __IO uint32_t ERROR_STATUS_1;                    /**< Error status register (part 1). This register can be written in software when not protected., offset: 0x4 */
  __IO uint32_t ERROR_EVENT_ENABLE_0;              /**< Error event enable register (part 0), offset: 0x8 */
  __IO uint32_t ERROR_EVENT_ENABLE_1;              /**< Error event enable register (part 1), offset: 0xC */
  __IO uint32_t ERROR_RESET_ENABLE_0;              /**< Error reset enable register (part 0), offset: 0x10 */
  __IO uint32_t ERROR_RESET_ENABLE_1;              /**< Error reset enable register (part 1), offset: 0x14 */
  __IO uint32_t ERROR_BREAK_ENABLE_0;              /**< Error break enable register (part 0), offset: 0x18 */
  __IO uint32_t ERROR_BREAK_ENABLE_1;              /**< Error break enable register (part 1), offset: 0x1C */
  __IO uint32_t ERROR_WRITE_ENABLE;                /**< When the magic word is written to this field, write access is allowed to the error detection unit configuration registers. When another value is written, write access to the error detection unit configuration registers is forbidden and will rise an access error. When the register is read, it returns the state of the write protection., offset: 0x20 */
  __I  uint32_t ERROR_PROT_COUNTER;                /**< Error protection counter value, offset: 0x24 */
  __IO uint32_t PREVIOUS_ERROR_STATUS_0;           /**< Part 0 of the error status before last soft reset register. This register can be written in software when not protected., offset: 0x28 */
  __IO uint32_t PREVIOUS_ERROR_STATUS_1;           /**< Part 1 of the error status before last soft reset register. This register can be written in software when not protected., offset: 0x2C */
  __IO uint32_t ERROR_ADDRESS;                     /**< The address that was tried to be accessed for the first error. Any write to this register clears the register, offset: 0x30 */
  __IO uint32_t ERROR_CODE;                        /**< The error code for address that was tried to be accessed for the first error. Any write to this register clears the register, offset: 0x34 */
  __IO uint32_t DSP3_0_PC;                         /**< The DSP3 instance 0 program counter value when the first memory error occured. Any write to this register clears the register, offset: 0x38 */
  __IO uint32_t DSP3_1_PC;                         /**< The DSP3 instance 1 program counter value when the first memory error occured. Any write to this register clears the register, offset: 0x3C */
} ADSS_ERROR_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_ERROR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_ERROR_Register_Masks ADSS_ERROR Register Masks
 * @{
 */

/*! @name ERROR_STATUS_0 - Error status register (part 0). This register can be written in software when not protected. */
/*! @{ */

#define ADSS_ERROR_ERROR_STATUS_0_WD_DSP3_0_MASK (0x1U)
#define ADSS_ERROR_ERROR_STATUS_0_WD_DSP3_0_SHIFT (0U)
/*! wd_dsp3_0 - DSP3_0 watchdog error */
#define ADSS_ERROR_ERROR_STATUS_0_WD_DSP3_0(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_WD_DSP3_0_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_WD_DSP3_0_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_WD_DSP3_1_MASK (0x2U)
#define ADSS_ERROR_ERROR_STATUS_0_WD_DSP3_1_SHIFT (1U)
/*! wd_dsp3_1 - DSP3_1 watchdog error */
#define ADSS_ERROR_ERROR_STATUS_0_WD_DSP3_1(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_WD_DSP3_1_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_WD_DSP3_1_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_WD_HIFI5S_MASK (0x4U)
#define ADSS_ERROR_ERROR_STATUS_0_WD_HIFI5S_SHIFT (2U)
/*! wd_hifi5s - HiFi5s watchdog error */
#define ADSS_ERROR_ERROR_STATUS_0_WD_HIFI5S(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_WD_HIFI5S_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_WD_HIFI5S_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_0_MASK (0x8U)
#define ADSS_ERROR_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_0_SHIFT (3U)
/*! stack_overflow_dsp3_0 - DSP3_0 stack overflow error */
#define ADSS_ERROR_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_0_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_0_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_0_MASK (0x10U)
#define ADSS_ERROR_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_0_SHIFT (4U)
/*! shift_overflow_dsp3_0 - DSP3_0 shift overflow error */
#define ADSS_ERROR_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_0_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_0_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_0_MASK (0x20U)
#define ADSS_ERROR_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_0_SHIFT (5U)
/*! loop_overflow_dsp3_0 - DSP3_0 loop overflow error */
#define ADSS_ERROR_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_0_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_0_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_1_MASK (0x40U)
#define ADSS_ERROR_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_1_SHIFT (6U)
/*! stack_overflow_dsp3_1 - DSP3_1 stack overflow error */
#define ADSS_ERROR_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_1_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_1_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_1_MASK (0x80U)
#define ADSS_ERROR_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_1_SHIFT (7U)
/*! shift_overflow_dsp3_1 - DSP3_1 shift overflow error */
#define ADSS_ERROR_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_1_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_1_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_1_MASK (0x100U)
#define ADSS_ERROR_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_1_SHIFT (8U)
/*! loop_overflow_dsp3_1 - DSP3_1 loop overflow error */
#define ADSS_ERROR_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_1_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_1_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_HSI_OVERFLOW_MASK (0x200U)
#define ADSS_ERROR_ERROR_STATUS_0_HSI_OVERFLOW_SHIFT (9U)
/*! hsi_overflow - HSI channel overflow */
#define ADSS_ERROR_ERROR_STATUS_0_HSI_OVERFLOW(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_HSI_OVERFLOW_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_HSI_OVERFLOW_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_SDMA_MASK      (0x400U)
#define ADSS_ERROR_ERROR_STATUS_0_SDMA_SHIFT     (10U)
/*! sdma - SDMA error */
#define ADSS_ERROR_ERROR_STATUS_0_SDMA(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_SDMA_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_SDMA_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC0_MASK (0x800U)
#define ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC0_SHIFT (11U)
/*! pmon_sync0 - Performance monitor sync0 error */
#define ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC0(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC0_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC0_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC1_MASK (0x1000U)
#define ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC1_SHIFT (12U)
/*! pmon_sync1 - Performance monitor sync1 error */
#define ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC1(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC1_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC1_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC2_MASK (0x2000U)
#define ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC2_SHIFT (13U)
/*! pmon_sync2 - Performance monitor sync2 error */
#define ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC2(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC2_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC2_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC3_MASK (0x4000U)
#define ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC3_SHIFT (14U)
/*! pmon_sync3 - Performance monitor sync3 error */
#define ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC3(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC3_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_PMON_SYNC3_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_SHORT_CIRCUIT_EVENT_MASK (0x8000U)
#define ADSS_ERROR_ERROR_STATUS_0_SHORT_CIRCUIT_EVENT_SHIFT (15U)
/*! short_circuit_event - LDO speaker driver short circuit event */
#define ADSS_ERROR_ERROR_STATUS_0_SHORT_CIRCUIT_EVENT(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_SHORT_CIRCUIT_EVENT_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_SHORT_CIRCUIT_EVENT_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_0_RD_MASK (0x10000U)
#define ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_0_RD_SHIFT (16U)
/*! xmem_dsp3_0_rd - DSP3_0 XMEM read error */
#define ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_0_WR_MASK (0x20000U)
#define ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_0_WR_SHIFT (17U)
/*! xmem_dsp3_0_wr - DSP3_0 XMEM write error */
#define ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_0_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_0_WR_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_0_WR_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_1_RD_MASK (0x40000U)
#define ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_1_RD_SHIFT (18U)
/*! xmem_dsp3_1_rd - DSP3_1 XMEM read error */
#define ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_1_WR_MASK (0x80000U)
#define ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_1_WR_SHIFT (19U)
/*! xmem_dsp3_1_wr - DSP3_1 XMEM write error */
#define ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_1_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_1_WR_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_XMEM_DSP3_1_WR_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_XMEM_AXI_RD_MASK (0x100000U)
#define ADSS_ERROR_ERROR_STATUS_0_XMEM_AXI_RD_SHIFT (20U)
/*! xmem_axi_rd - Microcontroller XMEM read error */
#define ADSS_ERROR_ERROR_STATUS_0_XMEM_AXI_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_XMEM_AXI_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_XMEM_AXI_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_XMEM_AXI_WR_MASK (0x200000U)
#define ADSS_ERROR_ERROR_STATUS_0_XMEM_AXI_WR_SHIFT (21U)
/*! xmem_axi_wr - Microcontroller XMEM write error */
#define ADSS_ERROR_ERROR_STATUS_0_XMEM_AXI_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_XMEM_AXI_WR_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_XMEM_AXI_WR_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_XMEM_SDMA_RD_MASK (0x400000U)
#define ADSS_ERROR_ERROR_STATUS_0_XMEM_SDMA_RD_SHIFT (22U)
/*! xmem_sdma_rd - SDMA XMEM read error */
#define ADSS_ERROR_ERROR_STATUS_0_XMEM_SDMA_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_XMEM_SDMA_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_XMEM_SDMA_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_0_XMEM_SDMA_WR_MASK (0x800000U)
#define ADSS_ERROR_ERROR_STATUS_0_XMEM_SDMA_WR_SHIFT (23U)
/*! xmem_sdma_wr - SDMA XMEM write error */
#define ADSS_ERROR_ERROR_STATUS_0_XMEM_SDMA_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_0_XMEM_SDMA_WR_SHIFT)) & ADSS_ERROR_ERROR_STATUS_0_XMEM_SDMA_WR_MASK)
/*! @} */

/*! @name ERROR_STATUS_1 - Error status register (part 1). This register can be written in software when not protected. */
/*! @{ */

#define ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_0_RD_MASK (0x1U)
#define ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_0_RD_SHIFT (0U)
/*! ymem_dsp3_0_rd - DSP3_0 YMEM read error */
#define ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_0_WR_MASK (0x2U)
#define ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_0_WR_SHIFT (1U)
/*! ymem_dsp3_0_wr - DSP3_0 YMEM write error */
#define ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_0_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_0_WR_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_0_WR_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_1_RD_MASK (0x4U)
#define ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_1_RD_SHIFT (2U)
/*! ymem_dsp3_1_rd - DSP3_1 YMEM read error */
#define ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_1_WR_MASK (0x8U)
#define ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_1_WR_SHIFT (3U)
/*! ymem_dsp3_1_wr - DSP3_1 YMEM write error */
#define ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_1_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_1_WR_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_YMEM_DSP3_1_WR_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_YMEM_AXI_RD_MASK (0x10U)
#define ADSS_ERROR_ERROR_STATUS_1_YMEM_AXI_RD_SHIFT (4U)
/*! ymem_axi_rd - Microcontroller YMEM read error */
#define ADSS_ERROR_ERROR_STATUS_1_YMEM_AXI_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_YMEM_AXI_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_YMEM_AXI_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_YMEM_AXI_WR_MASK (0x20U)
#define ADSS_ERROR_ERROR_STATUS_1_YMEM_AXI_WR_SHIFT (5U)
/*! ymem_axi_wr - Microcontroller YMEM write error */
#define ADSS_ERROR_ERROR_STATUS_1_YMEM_AXI_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_YMEM_AXI_WR_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_YMEM_AXI_WR_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_YMEM_SDMA_RD_MASK (0x40U)
#define ADSS_ERROR_ERROR_STATUS_1_YMEM_SDMA_RD_SHIFT (6U)
/*! ymem_sdma_rd - SDMA YMEM read error */
#define ADSS_ERROR_ERROR_STATUS_1_YMEM_SDMA_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_YMEM_SDMA_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_YMEM_SDMA_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_YMEM_SDMA_WR_MASK (0x80U)
#define ADSS_ERROR_ERROR_STATUS_1_YMEM_SDMA_WR_SHIFT (7U)
/*! ymem_sdma_wr - SDMA YMEM write error */
#define ADSS_ERROR_ERROR_STATUS_1_YMEM_SDMA_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_YMEM_SDMA_WR_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_YMEM_SDMA_WR_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_DRAM0_HIFI5S_RD_MASK (0x100U)
#define ADSS_ERROR_ERROR_STATUS_1_DRAM0_HIFI5S_RD_SHIFT (8U)
/*! dram0_hifi5s_rd - HiFi5s DRAM0 read error */
#define ADSS_ERROR_ERROR_STATUS_1_DRAM0_HIFI5S_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_DRAM0_HIFI5S_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_DRAM0_HIFI5S_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_DRAM0_HIFI5S_WR_MASK (0x200U)
#define ADSS_ERROR_ERROR_STATUS_1_DRAM0_HIFI5S_WR_SHIFT (9U)
/*! dram0_hifi5s_wr - HiFi5s DRAM0 write error */
#define ADSS_ERROR_ERROR_STATUS_1_DRAM0_HIFI5S_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_DRAM0_HIFI5S_WR_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_DRAM0_HIFI5S_WR_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_DRAM1_HIFI5S_RD_MASK (0x400U)
#define ADSS_ERROR_ERROR_STATUS_1_DRAM1_HIFI5S_RD_SHIFT (10U)
/*! dram1_hifi5s_rd - HiFi5s DRAM1 read error */
#define ADSS_ERROR_ERROR_STATUS_1_DRAM1_HIFI5S_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_DRAM1_HIFI5S_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_DRAM1_HIFI5S_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_DRAM1_HIFI5S_WR_MASK (0x800U)
#define ADSS_ERROR_ERROR_STATUS_1_DRAM1_HIFI5S_WR_SHIFT (11U)
/*! dram1_hifi5s_wr - HiFi5s DRAM1 write error */
#define ADSS_ERROR_ERROR_STATUS_1_DRAM1_HIFI5S_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_DRAM1_HIFI5S_WR_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_DRAM1_HIFI5S_WR_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_PMEM_DSP3_0_RD_MASK (0x1000U)
#define ADSS_ERROR_ERROR_STATUS_1_PMEM_DSP3_0_RD_SHIFT (12U)
/*! pmem_dsp3_0_rd - DSP3_0 PMEM read error */
#define ADSS_ERROR_ERROR_STATUS_1_PMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_PMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_PMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_PMEM_DSP3_1_RD_MASK (0x2000U)
#define ADSS_ERROR_ERROR_STATUS_1_PMEM_DSP3_1_RD_SHIFT (13U)
/*! pmem_dsp3_1_rd - DSP3_1 PMEM read error */
#define ADSS_ERROR_ERROR_STATUS_1_PMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_PMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_PMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_PMEM_AXI_RD_MASK (0x4000U)
#define ADSS_ERROR_ERROR_STATUS_1_PMEM_AXI_RD_SHIFT (14U)
/*! pmem_axi_rd - Microcontroller PMEM read error */
#define ADSS_ERROR_ERROR_STATUS_1_PMEM_AXI_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_PMEM_AXI_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_PMEM_AXI_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_PMEM_AXI_WR_MASK (0x8000U)
#define ADSS_ERROR_ERROR_STATUS_1_PMEM_AXI_WR_SHIFT (15U)
/*! pmem_axi_wr - Microcontroller PMEM write error */
#define ADSS_ERROR_ERROR_STATUS_1_PMEM_AXI_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_PMEM_AXI_WR_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_PMEM_AXI_WR_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_0_RD_MASK (0x10000U)
#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_0_RD_SHIFT (16U)
/*! iomem_dsp3_0_rd - DSP3_0 IOMEM read error */
#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_0_WR_MASK (0x20000U)
#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_0_WR_SHIFT (17U)
/*! iomem_dsp3_0_wr - DSP3_0 IOMEM write error */
#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_0_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_0_WR_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_0_WR_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_1_RD_MASK (0x40000U)
#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_1_RD_SHIFT (18U)
/*! iomem_dsp3_1_rd - DSP3_1 IOMEM read error */
#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_1_WR_MASK (0x80000U)
#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_1_WR_SHIFT (19U)
/*! iomem_dsp3_1_wr - DSP3_1 IOMEM write error */
#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_1_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_1_WR_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_IOMEM_DSP3_1_WR_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_APB_RD_MASK (0x100000U)
#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_APB_RD_SHIFT (20U)
/*! iomem_apb_rd - Microcontroller IOMEM read error */
#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_APB_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_IOMEM_APB_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_IOMEM_APB_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_APB_WR_MASK (0x200000U)
#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_APB_WR_SHIFT (21U)
/*! iomem_apb_wr - Microcontroller IOMEM write error */
#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_APB_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_IOMEM_APB_WR_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_IOMEM_APB_WR_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_HIFI5S_RD_MASK (0x400000U)
#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_HIFI5S_RD_SHIFT (22U)
/*! iomem_hifi5s_rd - HiFi5s IOMEM read error */
#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_HIFI5S_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_IOMEM_HIFI5S_RD_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_IOMEM_HIFI5S_RD_MASK)

#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_HIFI5S_WR_MASK (0x800000U)
#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_HIFI5S_WR_SHIFT (23U)
/*! iomem_hifi5s_wr - HiFi5s IOMEM write error */
#define ADSS_ERROR_ERROR_STATUS_1_IOMEM_HIFI5S_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_STATUS_1_IOMEM_HIFI5S_WR_SHIFT)) & ADSS_ERROR_ERROR_STATUS_1_IOMEM_HIFI5S_WR_MASK)
/*! @} */

/*! @name ERROR_EVENT_ENABLE_0 - Error event enable register (part 0) */
/*! @{ */

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_WD_DSP3_0_MASK (0x1U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_WD_DSP3_0_SHIFT (0U)
/*! wd_dsp3_0 - Enable error event on DSP3_0 watchdog error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_WD_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_WD_DSP3_0_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_WD_DSP3_0_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_WD_DSP3_1_MASK (0x2U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_WD_DSP3_1_SHIFT (1U)
/*! wd_dsp3_1 - Enable error event on DSP3_1 watchdog error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_WD_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_WD_DSP3_1_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_WD_DSP3_1_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_WD_HIFI5S_MASK (0x4U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_WD_HIFI5S_SHIFT (2U)
/*! wd_hifi5s - Error event enable on HiFi5s watchdog error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_WD_HIFI5S(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_WD_HIFI5S_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_WD_HIFI5S_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_STACK_OVERFLOW_DSP3_0_MASK (0x8U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_STACK_OVERFLOW_DSP3_0_SHIFT (3U)
/*! stack_overflow_dsp3_0 - Error event enable on DSP3_0 stack overflow error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_STACK_OVERFLOW_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_STACK_OVERFLOW_DSP3_0_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_STACK_OVERFLOW_DSP3_0_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_SHIFT_OVERFLOW_DSP3_0_MASK (0x10U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_SHIFT_OVERFLOW_DSP3_0_SHIFT (4U)
/*! shift_overflow_dsp3_0 - Error event enable on DSP3_0 shift overflow error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_SHIFT_OVERFLOW_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_SHIFT_OVERFLOW_DSP3_0_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_SHIFT_OVERFLOW_DSP3_0_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_LOOP_OVERFLOW_DSP3_0_MASK (0x20U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_LOOP_OVERFLOW_DSP3_0_SHIFT (5U)
/*! loop_overflow_dsp3_0 - Error event enable on DSP3_0 loop overflow error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_LOOP_OVERFLOW_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_LOOP_OVERFLOW_DSP3_0_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_LOOP_OVERFLOW_DSP3_0_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_STACK_OVERFLOW_DSP3_1_MASK (0x40U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_STACK_OVERFLOW_DSP3_1_SHIFT (6U)
/*! stack_overflow_dsp3_1 - Error event enable on DSP3_1 stack overflow error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_STACK_OVERFLOW_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_STACK_OVERFLOW_DSP3_1_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_STACK_OVERFLOW_DSP3_1_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_SHIFT_OVERFLOW_DSP3_1_MASK (0x80U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_SHIFT_OVERFLOW_DSP3_1_SHIFT (7U)
/*! shift_overflow_dsp3_1 - Error event enable on DSP3_1 shift overflow error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_SHIFT_OVERFLOW_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_SHIFT_OVERFLOW_DSP3_1_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_SHIFT_OVERFLOW_DSP3_1_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_LOOP_OVERFLOW_DSP3_1_MASK (0x100U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_LOOP_OVERFLOW_DSP3_1_SHIFT (8U)
/*! loop_overflow_dsp3_1 - Error event enable on DSP3_1 loop overflow error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_LOOP_OVERFLOW_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_LOOP_OVERFLOW_DSP3_1_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_LOOP_OVERFLOW_DSP3_1_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_HSI_OVERFLOW_MASK (0x200U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_HSI_OVERFLOW_SHIFT (9U)
/*! hsi_overflow - Error event enable on HSI channel overflow */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_HSI_OVERFLOW(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_HSI_OVERFLOW_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_HSI_OVERFLOW_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_SDMA_MASK (0x400U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_SDMA_SHIFT (10U)
/*! sdma - Error event enable on SDMA error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_SDMA(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_SDMA_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_SDMA_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC0_MASK (0x800U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC0_SHIFT (11U)
/*! pmon_sync0 - Error event enable on Performance monitor sync0 error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC0_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC0_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC1_MASK (0x1000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC1_SHIFT (12U)
/*! pmon_sync1 - Error event enable on Performance monitor sync1 error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC1_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC1_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC2_MASK (0x2000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC2_SHIFT (13U)
/*! pmon_sync2 - Error event enable on Performance monitor sync2 error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC2(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC2_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC2_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC3_MASK (0x4000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC3_SHIFT (14U)
/*! pmon_sync3 - Error event enable on Performance monitor sync3 error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC3(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC3_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_PMON_SYNC3_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_SHORT_CIRCUIT_EVENT_MASK (0x8000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_SHORT_CIRCUIT_EVENT_SHIFT (15U)
/*! short_circuit_event - Error event enable on LDO speaker driver short circuit */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_SHORT_CIRCUIT_EVENT(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_SHORT_CIRCUIT_EVENT_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_SHORT_CIRCUIT_EVENT_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_0_RD_MASK (0x10000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_0_RD_SHIFT (16U)
/*! xmem_dsp3_0_rd - Error event enable on DSP3_0 XMEM read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_0_WR_MASK (0x20000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_0_WR_SHIFT (17U)
/*! xmem_dsp3_0_wr - Error event enable on DSP3_0 XMEM write error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_0_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_0_WR_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_0_WR_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_1_RD_MASK (0x40000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_1_RD_SHIFT (18U)
/*! xmem_dsp3_1_rd - Error event enable on DSP3_1 XMEM read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_1_WR_MASK (0x80000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_1_WR_SHIFT (19U)
/*! xmem_dsp3_1_wr - Error event enable on DSP3_1 XMEM write error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_1_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_1_WR_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_DSP3_1_WR_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_AXI_RD_MASK (0x100000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_AXI_RD_SHIFT (20U)
/*! xmem_axi_rd - Error event enable on Microcontroller XMEM read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_AXI_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_AXI_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_AXI_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_AXI_WR_MASK (0x200000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_AXI_WR_SHIFT (21U)
/*! xmem_axi_wr - Error event enable on Microcontroller XMEM write error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_AXI_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_AXI_WR_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_AXI_WR_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_SDMA_RD_MASK (0x400000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_SDMA_RD_SHIFT (22U)
/*! xmem_sdma_rd - Error event enable on SDMA XMEM read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_SDMA_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_SDMA_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_SDMA_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_SDMA_WR_MASK (0x800000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_SDMA_WR_SHIFT (23U)
/*! xmem_sdma_wr - Error event enable on SDMA XMEM write error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_SDMA_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_SDMA_WR_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_0_XMEM_SDMA_WR_MASK)
/*! @} */

/*! @name ERROR_EVENT_ENABLE_1 - Error event enable register (part 1) */
/*! @{ */

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_0_RD_MASK (0x1U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_0_RD_SHIFT (0U)
/*! ymem_dsp3_0_rd - Error event enable on DSP3_0 YMEM read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_0_WR_MASK (0x2U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_0_WR_SHIFT (1U)
/*! ymem_dsp3_0_wr - Error event enable on DSP3_0 YMEM write error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_0_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_0_WR_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_0_WR_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_1_RD_MASK (0x4U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_1_RD_SHIFT (2U)
/*! ymem_dsp3_1_rd - Error event enable on DSP3_1 YMEM read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_1_WR_MASK (0x8U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_1_WR_SHIFT (3U)
/*! ymem_dsp3_1_wr - Error event enable on DSP3_1 YMEM write error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_1_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_1_WR_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_DSP3_1_WR_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_AXI_RD_MASK (0x10U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_AXI_RD_SHIFT (4U)
/*! ymem_axi_rd - Error event enable on Microcontroller YMEM read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_AXI_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_AXI_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_AXI_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_AXI_WR_MASK (0x20U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_AXI_WR_SHIFT (5U)
/*! ymem_axi_wr - Error event enable on Microcontroller YMEM write error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_AXI_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_AXI_WR_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_AXI_WR_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_SDMA_RD_MASK (0x40U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_SDMA_RD_SHIFT (6U)
/*! ymem_sdma_rd - Error event enable on SDMA YMEM read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_SDMA_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_SDMA_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_SDMA_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_SDMA_WR_MASK (0x80U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_SDMA_WR_SHIFT (7U)
/*! ymem_sdma_wr - Error event enable on SDMA YMEM write error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_SDMA_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_SDMA_WR_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_YMEM_SDMA_WR_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM0_HIFI5S_RD_MASK (0x100U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM0_HIFI5S_RD_SHIFT (8U)
/*! dram0_hifi5s_rd - Error event enable on HiFi5s DRAM0 read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM0_HIFI5S_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM0_HIFI5S_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM0_HIFI5S_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM0_HIFI5S_WR_MASK (0x200U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM0_HIFI5S_WR_SHIFT (9U)
/*! dram0_hifi5s_wr - Error event enable on HiFi5s DRAM0 write error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM0_HIFI5S_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM0_HIFI5S_WR_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM0_HIFI5S_WR_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM1_HIFI5S_RD_MASK (0x400U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM1_HIFI5S_RD_SHIFT (10U)
/*! dram1_hifi5s_rd - Error event enable on HiFi5s DRAM1 read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM1_HIFI5S_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM1_HIFI5S_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM1_HIFI5S_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM1_HIFI5S_WR_MASK (0x800U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM1_HIFI5S_WR_SHIFT (11U)
/*! dram1_hifi5s_wr - Error event enable on HiFi5s DRAM1 write error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM1_HIFI5S_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM1_HIFI5S_WR_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_DRAM1_HIFI5S_WR_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_DSP3_0_RD_MASK (0x1000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_DSP3_0_RD_SHIFT (12U)
/*! pmem_dsp3_0_rd - Error event enable on DSP3_0 PMEM read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_DSP3_1_RD_MASK (0x2000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_DSP3_1_RD_SHIFT (13U)
/*! pmem_dsp3_1_rd - Error event enable on DSP3_1 PMEM read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_AXI_RD_MASK (0x4000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_AXI_RD_SHIFT (14U)
/*! pmem_axi_rd - Error event enable on Microcontroller PMEM read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_AXI_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_AXI_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_AXI_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_AXI_WR_MASK (0x8000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_AXI_WR_SHIFT (15U)
/*! pmem_axi_wr - Error event enable on Microcontroller PMEM write error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_AXI_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_AXI_WR_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_PMEM_AXI_WR_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_0_RD_MASK (0x10000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_0_RD_SHIFT (16U)
/*! iomem_dsp3_0_rd - Error event enable on DSP3_0 IOMEM read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_0_WR_MASK (0x20000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_0_WR_SHIFT (17U)
/*! iomem_dsp3_0_wr - Error event enable on DSP3_0 IOMEM write error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_0_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_0_WR_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_0_WR_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_1_RD_MASK (0x40000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_1_RD_SHIFT (18U)
/*! iomem_dsp3_1_rd - Error event enable on DSP3_1 IOMEM read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_1_WR_MASK (0x80000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_1_WR_SHIFT (19U)
/*! iomem_dsp3_1_wr - Error event enable on DSP3_1 IOMEM write error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_1_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_1_WR_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_DSP3_1_WR_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_APB_RD_MASK (0x100000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_APB_RD_SHIFT (20U)
/*! iomem_apb_rd - Error event enable on Microcontroller IOMEM read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_APB_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_APB_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_APB_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_APB_WR_MASK (0x200000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_APB_WR_SHIFT (21U)
/*! iomem_apb_wr - Error event enable on Microcontroller IOMEM write error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_APB_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_APB_WR_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_APB_WR_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_HIFI5S_RD_MASK (0x400000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_HIFI5S_RD_SHIFT (22U)
/*! iomem_hifi5s_rd - Error event enable on HiFi5s IOMEM read error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_HIFI5S_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_HIFI5S_RD_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_HIFI5S_RD_MASK)

#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_HIFI5S_WR_MASK (0x800000U)
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_HIFI5S_WR_SHIFT (23U)
/*! iomem_hifi5s_wr - Error event enable on HiFi5s IOMEM write error */
#define ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_HIFI5S_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_HIFI5S_WR_SHIFT)) & ADSS_ERROR_ERROR_EVENT_ENABLE_1_IOMEM_HIFI5S_WR_MASK)
/*! @} */

/*! @name ERROR_RESET_ENABLE_0 - Error reset enable register (part 0) */
/*! @{ */

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_WD_DSP3_0_MASK (0x1U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_WD_DSP3_0_SHIFT (0U)
/*! wd_dsp3_0 - Reset on DSP3_0 watchdog error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_WD_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_WD_DSP3_0_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_WD_DSP3_0_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_WD_DSP3_1_MASK (0x2U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_WD_DSP3_1_SHIFT (1U)
/*! wd_dsp3_1 - Reset on DSP3_1 watchdog error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_WD_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_WD_DSP3_1_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_WD_DSP3_1_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_WD_HIFI5S_MASK (0x4U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_WD_HIFI5S_SHIFT (2U)
/*! wd_hifi5s - Reset on HiFi5s watchdog error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_WD_HIFI5S(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_WD_HIFI5S_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_WD_HIFI5S_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_STACK_OVERFLOW_DSP_0_MASK (0x8U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_STACK_OVERFLOW_DSP_0_SHIFT (3U)
/*! stack_overflow_dsp_0 - Reset on DSP3_0 stack overflow error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_STACK_OVERFLOW_DSP_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_STACK_OVERFLOW_DSP_0_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_STACK_OVERFLOW_DSP_0_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_SHIFT_OVERFLOW_DSP3_0_MASK (0x10U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_SHIFT_OVERFLOW_DSP3_0_SHIFT (4U)
/*! shift_overflow_dsp3_0 - Reset on DSP3_0 shift overflow error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_SHIFT_OVERFLOW_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_SHIFT_OVERFLOW_DSP3_0_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_SHIFT_OVERFLOW_DSP3_0_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_LOOP_OVERFLOW_DSP3_0_MASK (0x20U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_LOOP_OVERFLOW_DSP3_0_SHIFT (5U)
/*! loop_overflow_dsp3_0 - Reset on DSP3_0 loop overflow error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_LOOP_OVERFLOW_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_LOOP_OVERFLOW_DSP3_0_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_LOOP_OVERFLOW_DSP3_0_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_STACK_OVERFLOW_DSP3_1_MASK (0x40U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_STACK_OVERFLOW_DSP3_1_SHIFT (6U)
/*! stack_overflow_dsp3_1 - Reset on DSP3_1 stack overflow error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_STACK_OVERFLOW_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_STACK_OVERFLOW_DSP3_1_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_STACK_OVERFLOW_DSP3_1_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_SHIFT_OVERFLOW_DSP3_1_MASK (0x80U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_SHIFT_OVERFLOW_DSP3_1_SHIFT (7U)
/*! shift_overflow_dsp3_1 - Reset on DSP3_1 shift overflow error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_SHIFT_OVERFLOW_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_SHIFT_OVERFLOW_DSP3_1_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_SHIFT_OVERFLOW_DSP3_1_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_LOOP_OVERFLOW_DSP3_1_MASK (0x100U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_LOOP_OVERFLOW_DSP3_1_SHIFT (8U)
/*! loop_overflow_dsp3_1 - Reset on DSP3_1 loop overflow error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_LOOP_OVERFLOW_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_LOOP_OVERFLOW_DSP3_1_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_LOOP_OVERFLOW_DSP3_1_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_HSI_OVERFLOW_MASK (0x200U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_HSI_OVERFLOW_SHIFT (9U)
/*! hsi_overflow - Reset on HSI channel overflow */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_HSI_OVERFLOW(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_HSI_OVERFLOW_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_HSI_OVERFLOW_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_SDMA_MASK (0x400U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_SDMA_SHIFT (10U)
/*! sdma - Reset on SDMA error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_SDMA(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_SDMA_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_SDMA_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC0_MASK (0x800U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC0_SHIFT (11U)
/*! pmon_sync0 - Reset on Performance monitor sync0 error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC0_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC0_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC1_MASK (0x1000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC1_SHIFT (12U)
/*! pmon_sync1 - Reset on Performance monitor sync1 error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC1_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC1_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC2_MASK (0x2000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC2_SHIFT (13U)
/*! pmon_sync2 - Reset on Performance monitor sync2 error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC2(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC2_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC2_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC3_MASK (0x4000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC3_SHIFT (14U)
/*! pmon_sync3 - Reset on Performance monitor sync3 error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC3(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC3_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_PMON_SYNC3_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_SHORT_CIRCUIT_EVENT_MASK (0x8000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_SHORT_CIRCUIT_EVENT_SHIFT (15U)
/*! short_circuit_event - Reset on LDO speaker driver short circuit event */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_SHORT_CIRCUIT_EVENT(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_SHORT_CIRCUIT_EVENT_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_SHORT_CIRCUIT_EVENT_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_0_RD_MASK (0x10000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_0_RD_SHIFT (16U)
/*! xmem_dsp3_0_rd - Reset on DSP3_0 XMEM read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_0_WR_MASK (0x20000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_0_WR_SHIFT (17U)
/*! xmem_dsp3_0_wr - Reset on DSP3_0 XMEM write error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_0_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_0_WR_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_0_WR_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_1_RD_MASK (0x40000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_1_RD_SHIFT (18U)
/*! xmem_dsp3_1_rd - Reset on DSP3_1 XMEM read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_1_WR_MASK (0x80000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_1_WR_SHIFT (19U)
/*! xmem_dsp3_1_wr - Reset on DSP3_1 XMEM write error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_1_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_1_WR_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_DSP3_1_WR_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_AXI_RD_MASK (0x100000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_AXI_RD_SHIFT (20U)
/*! xmem_axi_rd - Reset on Microcontroller XMEM read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_AXI_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_AXI_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_AXI_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_AXI_WR_MASK (0x200000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_AXI_WR_SHIFT (21U)
/*! xmem_axi_wr - Reset on Microcontroller XMEM write error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_AXI_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_AXI_WR_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_AXI_WR_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_SDMA_RD_MASK (0x400000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_SDMA_RD_SHIFT (22U)
/*! xmem_sdma_rd - Reset on SDMA XMEM read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_SDMA_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_SDMA_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_SDMA_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_SDMA_WR_MASK (0x800000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_SDMA_WR_SHIFT (23U)
/*! xmem_sdma_wr - Reset on SDMA XMEM write error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_SDMA_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_SDMA_WR_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_0_XMEM_SDMA_WR_MASK)
/*! @} */

/*! @name ERROR_RESET_ENABLE_1 - Error reset enable register (part 1) */
/*! @{ */

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_0_RD_MASK (0x1U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_0_RD_SHIFT (0U)
/*! ymem_dsp3_0_rd - Reset on DSP3_0 YMEM read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_0_WR_MASK (0x2U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_0_WR_SHIFT (1U)
/*! ymem_dsp3_0_wr - Reset on DSP3_0 YMEM write error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_0_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_0_WR_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_0_WR_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_1_RD_MASK (0x4U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_1_RD_SHIFT (2U)
/*! ymem_dsp3_1_rd - Reset on DSP3_1 YMEM read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_1_WR_MASK (0x8U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_1_WR_SHIFT (3U)
/*! ymem_dsp3_1_wr - Reset on DSP3_1 YMEM write error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_1_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_1_WR_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_DSP3_1_WR_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_AXI_RD_MASK (0x10U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_AXI_RD_SHIFT (4U)
/*! ymem_axi_rd - Reset on Microcontroller YMEM read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_AXI_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_AXI_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_AXI_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_AXI_WR_MASK (0x20U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_AXI_WR_SHIFT (5U)
/*! ymem_axi_wr - Reset on Microcontroller YMEM write error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_AXI_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_AXI_WR_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_AXI_WR_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_SDMA_RD_MASK (0x40U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_SDMA_RD_SHIFT (6U)
/*! ymem_sdma_rd - Reset on SDMA YMEM read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_SDMA_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_SDMA_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_SDMA_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_SDMA_WR_MASK (0x80U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_SDMA_WR_SHIFT (7U)
/*! ymem_sdma_wr - Reset on SDMA YMEM write error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_SDMA_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_SDMA_WR_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_YMEM_SDMA_WR_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM0_HIFI5S_RD_MASK (0x100U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM0_HIFI5S_RD_SHIFT (8U)
/*! dram0_hifi5s_rd - Reset on HiFi5s DRAM0 read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM0_HIFI5S_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM0_HIFI5S_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM0_HIFI5S_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM0_HIFI5S_WR_MASK (0x200U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM0_HIFI5S_WR_SHIFT (9U)
/*! dram0_hifi5s_wr - Reset on HiFi5s DRAM0 write error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM0_HIFI5S_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM0_HIFI5S_WR_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM0_HIFI5S_WR_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM1_HIFI5S_RD_MASK (0x400U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM1_HIFI5S_RD_SHIFT (10U)
/*! dram1_hifi5s_rd - Reset on HiFi5s DRAM1 read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM1_HIFI5S_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM1_HIFI5S_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM1_HIFI5S_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM1_HIFI5S_WR_MASK (0x800U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM1_HIFI5S_WR_SHIFT (11U)
/*! dram1_hifi5s_wr - Reset on HiFi5s DRAM1 write error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM1_HIFI5S_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM1_HIFI5S_WR_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_DRAM1_HIFI5S_WR_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_DSP3_0_RD_MASK (0x1000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_DSP3_0_RD_SHIFT (12U)
/*! pmem_dsp3_0_rd - Reset on DSP3_0 PMEM read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_DSP3_1_RD_MASK (0x2000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_DSP3_1_RD_SHIFT (13U)
/*! pmem_dsp3_1_rd - Reset on DSP3_1 PMEM read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_AXI_RD_MASK (0x4000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_AXI_RD_SHIFT (14U)
/*! pmem_axi_rd - Reset on Microcontroller PMEM read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_AXI_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_AXI_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_AXI_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_AXI_WR_MASK (0x8000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_AXI_WR_SHIFT (15U)
/*! pmem_axi_wr - Reset on Microcontroller PMEM write error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_AXI_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_AXI_WR_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_PMEM_AXI_WR_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_0_RD_MASK (0x10000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_0_RD_SHIFT (16U)
/*! iomem_dsp3_0_rd - Reset on DSP3_0 IOMEM read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_0_WR_MASK (0x20000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_0_WR_SHIFT (17U)
/*! iomem_dsp3_0_wr - Reset on DSP3_0 IOMEM write error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_0_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_0_WR_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_0_WR_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_1_RD_MASK (0x40000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_1_RD_SHIFT (18U)
/*! iomem_dsp3_1_rd - Reset on DSP3_1 IOMEM read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_1_WR_MASK (0x80000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_1_WR_SHIFT (19U)
/*! iomem_dsp3_1_wr - Reset on DSP3_1 IOMEM write error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_1_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_1_WR_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_DSP3_1_WR_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_APB_RD_MASK (0x100000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_APB_RD_SHIFT (20U)
/*! iomem_apb_rd - Reset on Microcontroller IOMEM read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_APB_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_APB_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_APB_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_APB_WR_MASK (0x200000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_APB_WR_SHIFT (21U)
/*! iomem_apb_wr - Reset on Microcontroller IOMEM write error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_APB_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_APB_WR_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_APB_WR_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_HIFI5S_RD_MASK (0x400000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_HIFI5S_RD_SHIFT (22U)
/*! iomem_hifi5s_rd - Reset on HiFi5s IOMEM read error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_HIFI5S_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_HIFI5S_RD_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_HIFI5S_RD_MASK)

#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_HIFI5S_WR_MASK (0x800000U)
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_HIFI5S_WR_SHIFT (23U)
/*! iomem_hifi5s_wr - Reset on HiFi5s IOMEM write error */
#define ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_HIFI5S_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_HIFI5S_WR_SHIFT)) & ADSS_ERROR_ERROR_RESET_ENABLE_1_IOMEM_HIFI5S_WR_MASK)
/*! @} */

/*! @name ERROR_BREAK_ENABLE_0 - Error break enable register (part 0) */
/*! @{ */

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_WD_DSP3_0_MASK (0x1U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_WD_DSP3_0_SHIFT (0U)
/*! wd_dsp3_0 - Break on DSP3_0 watchdog error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_WD_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_WD_DSP3_0_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_WD_DSP3_0_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_WD_DSP3_1_MASK (0x2U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_WD_DSP3_1_SHIFT (1U)
/*! wd_dsp3_1 - Break on DSP3_1 watchdog error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_WD_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_WD_DSP3_1_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_WD_DSP3_1_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_WD_HIFI5S_MASK (0x4U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_WD_HIFI5S_SHIFT (2U)
/*! wd_hifi5s - Break on HiFi5s watchdog error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_WD_HIFI5S(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_WD_HIFI5S_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_WD_HIFI5S_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_STACK_OVERFLOW_DSP3_0_MASK (0x8U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_STACK_OVERFLOW_DSP3_0_SHIFT (3U)
/*! stack_overflow_dsp3_0 - Break on DSP3_0 stack overflow error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_STACK_OVERFLOW_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_STACK_OVERFLOW_DSP3_0_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_STACK_OVERFLOW_DSP3_0_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_SHIFT_OVERFLOW_DSP3_0_MASK (0x10U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_SHIFT_OVERFLOW_DSP3_0_SHIFT (4U)
/*! shift_overflow_dsp3_0 - Break on DSP3_0 shift overflow error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_SHIFT_OVERFLOW_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_SHIFT_OVERFLOW_DSP3_0_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_SHIFT_OVERFLOW_DSP3_0_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_LOOP_OVERFLOW_DSP3_0_MASK (0x20U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_LOOP_OVERFLOW_DSP3_0_SHIFT (5U)
/*! loop_overflow_dsp3_0 - Break on DSP3_0 loop overflow error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_LOOP_OVERFLOW_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_LOOP_OVERFLOW_DSP3_0_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_LOOP_OVERFLOW_DSP3_0_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_STACK_OVERFLOW_DSP3_1_MASK (0x40U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_STACK_OVERFLOW_DSP3_1_SHIFT (6U)
/*! stack_overflow_dsp3_1 - Break on DSP3_1 stack overflow error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_STACK_OVERFLOW_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_STACK_OVERFLOW_DSP3_1_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_STACK_OVERFLOW_DSP3_1_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_SHIFT_OVERFLOW_DSP3_1_MASK (0x80U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_SHIFT_OVERFLOW_DSP3_1_SHIFT (7U)
/*! shift_overflow_dsp3_1 - Break on DSP3_1 shift overflow error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_SHIFT_OVERFLOW_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_SHIFT_OVERFLOW_DSP3_1_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_SHIFT_OVERFLOW_DSP3_1_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_LOOP_OVERFLOW_DSP3_1_MASK (0x100U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_LOOP_OVERFLOW_DSP3_1_SHIFT (8U)
/*! loop_overflow_dsp3_1 - Break on DSP3_1 loop overflow error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_LOOP_OVERFLOW_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_LOOP_OVERFLOW_DSP3_1_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_LOOP_OVERFLOW_DSP3_1_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_HSI_OVERFLOW_MASK (0x200U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_HSI_OVERFLOW_SHIFT (9U)
/*! hsi_overflow - Break on HSI channel overflow */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_HSI_OVERFLOW(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_HSI_OVERFLOW_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_HSI_OVERFLOW_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_SDMA_MASK (0x400U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_SDMA_SHIFT (10U)
/*! sdma - Break on SDMA error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_SDMA(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_SDMA_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_SDMA_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC0_MASK (0x800U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC0_SHIFT (11U)
/*! pmon_sync0 - Break on Performance monitor sync0 error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC0_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC0_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC1_MASK (0x1000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC1_SHIFT (12U)
/*! pmon_sync1 - Break on Performance monitor sync1 error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC1_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC1_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC2_MASK (0x2000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC2_SHIFT (13U)
/*! pmon_sync2 - Break on Performance monitor sync2 error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC2(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC2_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC2_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC3_MASK (0x4000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC3_SHIFT (14U)
/*! pmon_sync3 - Break on Performance monitor sync3 error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC3(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC3_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_PMON_SYNC3_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_SHORT_CIRCUIT_EVENT_MASK (0x8000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_SHORT_CIRCUIT_EVENT_SHIFT (15U)
/*! short_circuit_event - Break on LDO speaker driver short circuit event */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_SHORT_CIRCUIT_EVENT(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_SHORT_CIRCUIT_EVENT_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_SHORT_CIRCUIT_EVENT_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_0_RD_MASK (0x10000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_0_RD_SHIFT (16U)
/*! xmem_dsp3_0_rd - Break on DSP3_0 XMEM read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_0_WR_MASK (0x20000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_0_WR_SHIFT (17U)
/*! xmem_dsp3_0_wr - Break on DSP3_0 XMEM write error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_0_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_0_WR_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_0_WR_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_1_RD_MASK (0x40000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_1_RD_SHIFT (18U)
/*! xmem_dsp3_1_rd - Break on DSP3_1 XMEM read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_1_WR_MASK (0x80000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_1_WR_SHIFT (19U)
/*! xmem_dsp3_1_wr - Break on DSP3_1 XMEM write error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_1_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_1_WR_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_DSP3_1_WR_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_AXI_RD_MASK (0x100000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_AXI_RD_SHIFT (20U)
/*! xmem_axi_rd - Break on Microcontroller XMEM read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_AXI_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_AXI_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_AXI_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_AXI_WR_MASK (0x200000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_AXI_WR_SHIFT (21U)
/*! xmem_axi_wr - Break on Microcontroller XMEM write error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_AXI_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_AXI_WR_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_AXI_WR_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_SDMA_RD_MASK (0x400000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_SDMA_RD_SHIFT (22U)
/*! xmem_sdma_rd - Break on SDMA XMEM read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_SDMA_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_SDMA_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_SDMA_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_SDMA_WR_MASK (0x800000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_SDMA_WR_SHIFT (23U)
/*! xmem_sdma_wr - Break on SDMA XMEM write error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_SDMA_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_SDMA_WR_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_0_XMEM_SDMA_WR_MASK)
/*! @} */

/*! @name ERROR_BREAK_ENABLE_1 - Error break enable register (part 1) */
/*! @{ */

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_0_RD_MASK (0x1U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_0_RD_SHIFT (0U)
/*! ymem_dsp3_0_rd - Break on DSP3_0 YMEM read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_0_WR_MASK (0x2U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_0_WR_SHIFT (1U)
/*! ymem_dsp3_0_wr - Break on DSP3_0 YMEM write error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_0_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_0_WR_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_0_WR_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_1_RD_MASK (0x4U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_1_RD_SHIFT (2U)
/*! ymem_dsp3_1_rd - Break on DSP3_1 YMEM read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_1_WR_MASK (0x8U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_1_WR_SHIFT (3U)
/*! ymem_dsp3_1_wr - Break on DSP3_1 YMEM write error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_1_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_1_WR_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_DSP3_1_WR_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_AXI_RD_MASK (0x10U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_AXI_RD_SHIFT (4U)
/*! ymem_axi_rd - Break on Microcontroller YMEM read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_AXI_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_AXI_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_AXI_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_AXI_WR_MASK (0x20U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_AXI_WR_SHIFT (5U)
/*! ymem_axi_wr - Break on Microcontroller YMEM write error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_AXI_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_AXI_WR_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_AXI_WR_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_SDMA_RD_MASK (0x40U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_SDMA_RD_SHIFT (6U)
/*! ymem_sdma_rd - Break on SDMA YMEM read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_SDMA_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_SDMA_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_SDMA_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_SDMA_WR_MASK (0x80U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_SDMA_WR_SHIFT (7U)
/*! ymem_sdma_wr - Break on SDMA YMEM write error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_SDMA_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_SDMA_WR_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_YMEM_SDMA_WR_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM0_HIFI5S_RD_MASK (0x100U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM0_HIFI5S_RD_SHIFT (8U)
/*! dram0_hifi5s_rd - Break on HiFi5s DRAM0 read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM0_HIFI5S_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM0_HIFI5S_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM0_HIFI5S_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM0_HIFI5S_WR_MASK (0x200U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM0_HIFI5S_WR_SHIFT (9U)
/*! dram0_hifi5s_wr - Break on HiFi5s DRAM0 write error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM0_HIFI5S_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM0_HIFI5S_WR_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM0_HIFI5S_WR_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM1_HIFI5S_RD_MASK (0x400U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM1_HIFI5S_RD_SHIFT (10U)
/*! dram1_hifi5s_rd - Break on HiFi5s DRAM1 read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM1_HIFI5S_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM1_HIFI5S_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM1_HIFI5S_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM1_HIFI5S_WR_MASK (0x800U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM1_HIFI5S_WR_SHIFT (11U)
/*! dram1_hifi5s_wr - Break on HiFi5s DRAM1 write error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM1_HIFI5S_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM1_HIFI5S_WR_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_DRAM1_HIFI5S_WR_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_DSP3_0_RD_MASK (0x1000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_DSP3_0_RD_SHIFT (12U)
/*! pmem_dsp3_0_rd - Break on DSP3_0 PMEM read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_DSP3_1_RD_MASK (0x2000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_DSP3_1_RD_SHIFT (13U)
/*! pmem_dsp3_1_rd - Break on DSP3_1 PMEM read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_AXI_RD_MASK (0x4000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_AXI_RD_SHIFT (14U)
/*! pmem_axi_rd - Break on Microcontroller PMEM read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_AXI_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_AXI_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_AXI_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_AXI_WR_MASK (0x8000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_AXI_WR_SHIFT (15U)
/*! pmem_axi_wr - Break on Microcontroller PMEM write error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_AXI_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_AXI_WR_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_PMEM_AXI_WR_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_0_RD_MASK (0x10000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_0_RD_SHIFT (16U)
/*! iomem_dsp3_0_rd - Break on DSP3_0 IOMEM read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_0_WR_MASK (0x20000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_0_WR_SHIFT (17U)
/*! iomem_dsp3_0_wr - Break on DSP3_0 IOMEM write error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_0_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_0_WR_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_0_WR_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_1_RD_MASK (0x40000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_1_RD_SHIFT (18U)
/*! iomem_dsp3_1_rd - Break on DSP3_1 IOMEM read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_1_WR_MASK (0x80000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_1_WR_SHIFT (19U)
/*! iomem_dsp3_1_wr - Break on DSP3_1 IOMEM write error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_1_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_1_WR_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_DSP3_1_WR_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_APB_RD_MASK (0x100000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_APB_RD_SHIFT (20U)
/*! iomem_apb_rd - Break on Microcontroller IOMEM read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_APB_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_APB_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_APB_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_APB_WR_MASK (0x200000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_APB_WR_SHIFT (21U)
/*! iomem_apb_wr - Break on Microcontroller IOMEM write error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_APB_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_APB_WR_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_APB_WR_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_HIFI5S_RD_MASK (0x400000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_HIFI5S_RD_SHIFT (22U)
/*! iomem_hifi5s_rd - Break on HiFi5s IOMEM read error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_HIFI5S_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_HIFI5S_RD_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_HIFI5S_RD_MASK)

#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_HIFI5S_WR_MASK (0x800000U)
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_HIFI5S_WR_SHIFT (23U)
/*! iomem_hifi5s_wr - Break on HiFi5s IOMEM write error */
#define ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_HIFI5S_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_HIFI5S_WR_SHIFT)) & ADSS_ERROR_ERROR_BREAK_ENABLE_1_IOMEM_HIFI5S_WR_MASK)
/*! @} */

/*! @name ERROR_WRITE_ENABLE - When the magic word is written to this field, write access is allowed to the error detection unit configuration registers. When another value is written, write access to the error detection unit configuration registers is forbidden and will rise an access error. When the register is read, it returns the state of the write protection. */
/*! @{ */

#define ADSS_ERROR_ERROR_WRITE_ENABLE_ENABLE_MASK (0xFFFFFFU)
#define ADSS_ERROR_ERROR_WRITE_ENABLE_ENABLE_SHIFT (0U)
/*! enable - Magic word to enable modifications
 *  0b000000000000000000000000..Protection is disabled
 *  0b000000000000000000000001..Protection is enabled
 *  0b100001101011001110000111..Value to be written to enable changes
 */
#define ADSS_ERROR_ERROR_WRITE_ENABLE_ENABLE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_WRITE_ENABLE_ENABLE_SHIFT)) & ADSS_ERROR_ERROR_WRITE_ENABLE_ENABLE_MASK)
/*! @} */

/*! @name ERROR_PROT_COUNTER - Error protection counter value */
/*! @{ */

#define ADSS_ERROR_ERROR_PROT_COUNTER_VALUE_MASK (0x7U)
#define ADSS_ERROR_ERROR_PROT_COUNTER_VALUE_SHIFT (0U)
/*! value - Error protection counter value */
#define ADSS_ERROR_ERROR_PROT_COUNTER_VALUE(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_PROT_COUNTER_VALUE_SHIFT)) & ADSS_ERROR_ERROR_PROT_COUNTER_VALUE_MASK)
/*! @} */

/*! @name PREVIOUS_ERROR_STATUS_0 - Part 0 of the error status before last soft reset register. This register can be written in software when not protected. */
/*! @{ */

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_WD_DSP3_0_MASK (0x1U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_WD_DSP3_0_SHIFT (0U)
/*! wd_dsp3_0 - DSP3_0 watchdog error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_WD_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_WD_DSP3_0_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_WD_DSP3_0_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_WD_DSP3_1_MASK (0x2U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_WD_DSP3_1_SHIFT (1U)
/*! wd_dsp3_1 - DSP3_1 watchdog error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_WD_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_WD_DSP3_1_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_WD_DSP3_1_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_WD_HIFI5S_MASK (0x4U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_WD_HIFI5S_SHIFT (2U)
/*! wd_hifi5s - HiFi5s watchdog error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_WD_HIFI5S(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_WD_HIFI5S_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_WD_HIFI5S_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_0_MASK (0x8U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_0_SHIFT (3U)
/*! stack_overflow_dsp3_0 - DSP3_0 stack overflow error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_0_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_0_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_0_MASK (0x10U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_0_SHIFT (4U)
/*! shift_overflow_dsp3_0 - DSP3_0 shift overflow error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_0_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_0_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_0_MASK (0x20U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_0_SHIFT (5U)
/*! loop_overflow_dsp3_0 - DSP3_0 loop overflow error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_0_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_0_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_1_MASK (0x40U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_1_SHIFT (6U)
/*! stack_overflow_dsp3_1 - DSP3_1 stack overflow error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_1_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_STACK_OVERFLOW_DSP3_1_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_1_MASK (0x80U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_1_SHIFT (7U)
/*! shift_overflow_dsp3_1 - DSP3_1 shift overflow error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_1_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SHIFT_OVERFLOW_DSP3_1_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_1_MASK (0x100U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_1_SHIFT (8U)
/*! loop_overflow_dsp3_1 - DSP3_1 loop overflow error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_1_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_LOOP_OVERFLOW_DSP3_1_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_HSI_OVERFLOW_MASK (0x200U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_HSI_OVERFLOW_SHIFT (9U)
/*! hsi_overflow - HSI channel overflow */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_HSI_OVERFLOW(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_HSI_OVERFLOW_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_HSI_OVERFLOW_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SDMA_MASK (0x400U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SDMA_SHIFT (10U)
/*! sdma - SDMA error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SDMA(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SDMA_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SDMA_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC0_MASK (0x800U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC0_SHIFT (11U)
/*! pmon_sync0 - Performance monitor sync0 error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC0_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC0_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC1_MASK (0x1000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC1_SHIFT (12U)
/*! pmon_sync1 - Performance monitor sync1 error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC1_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC1_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC2_MASK (0x2000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC2_SHIFT (13U)
/*! pmon_sync2 - Performance monitor sync2 error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC2(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC2_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC2_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC3_MASK (0x4000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC3_SHIFT (14U)
/*! pmon_sync3 - Performance monitor sync3 error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC3(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC3_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_PMON_SYNC3_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SHORT_CIRCUIT_EVENT_MASK (0x8000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SHORT_CIRCUIT_EVENT_SHIFT (15U)
/*! short_circuit_event - LDO speaker driver short circuit error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SHORT_CIRCUIT_EVENT(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SHORT_CIRCUIT_EVENT_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_SHORT_CIRCUIT_EVENT_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_0_RD_MASK (0x10000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_0_RD_SHIFT (16U)
/*! xmem_dsp3_0_rd - DSP3_0 XMEM read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_0_WR_MASK (0x20000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_0_WR_SHIFT (17U)
/*! xmem_dsp3_0_wr - DSP3_0 XMEM write error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_0_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_0_WR_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_0_WR_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_1_RD_MASK (0x40000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_1_RD_SHIFT (18U)
/*! xmem_dsp3_1_rd - DSP3_1 XMEM read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_1_WR_MASK (0x80000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_1_WR_SHIFT (19U)
/*! xmem_dsp3_1_wr - DSP3_1 XMEM write error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_1_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_1_WR_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_DSP3_1_WR_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_AXI_RD_MASK (0x100000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_AXI_RD_SHIFT (20U)
/*! xmem_axi_rd - Microcontroller XMEM read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_AXI_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_AXI_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_AXI_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_AXI_WR_MASK (0x200000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_AXI_WR_SHIFT (21U)
/*! xmem_axi_wr - Microcontroller XMEM write error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_AXI_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_AXI_WR_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_AXI_WR_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_SDMA_RD_MASK (0x400000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_SDMA_RD_SHIFT (22U)
/*! xmem_sdma_rd - SDMA XMEM read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_SDMA_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_SDMA_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_SDMA_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_SDMA_WR_MASK (0x800000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_SDMA_WR_SHIFT (23U)
/*! xmem_sdma_wr - SDMA XMEM write error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_SDMA_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_SDMA_WR_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_0_XMEM_SDMA_WR_MASK)
/*! @} */

/*! @name PREVIOUS_ERROR_STATUS_1 - Part 1 of the error status before last soft reset register. This register can be written in software when not protected. */
/*! @{ */

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_0_RD_MASK (0x1U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_0_RD_SHIFT (0U)
/*! ymem_dsp3_0_rd - DSP3_0 YMEM read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_0_WR_MASK (0x2U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_0_WR_SHIFT (1U)
/*! ymem_dsp3_0_wr - DSP3_0 YMEM write error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_0_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_0_WR_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_0_WR_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_1_RD_MASK (0x4U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_1_RD_SHIFT (2U)
/*! ymem_dsp3_1_rd - DSP3_1 YMEM read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_1_WR_MASK (0x8U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_1_WR_SHIFT (3U)
/*! ymem_dsp3_1_wr - DSP3_1 YMEM write error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_1_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_1_WR_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_DSP3_1_WR_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_AXI_RD_MASK (0x10U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_AXI_RD_SHIFT (4U)
/*! ymem_axi_rd - Microcontroller YMEM read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_AXI_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_AXI_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_AXI_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_AXI_WR_MASK (0x20U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_AXI_WR_SHIFT (5U)
/*! ymem_axi_wr - Microcontroller YMEM write error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_AXI_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_AXI_WR_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_AXI_WR_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_SDMA_RD_MASK (0x40U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_SDMA_RD_SHIFT (6U)
/*! ymem_sdma_rd - SDMA YMEM read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_SDMA_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_SDMA_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_SDMA_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_SDMA_WR_MASK (0x80U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_SDMA_WR_SHIFT (7U)
/*! ymem_sdma_wr - SDMA YMEM write error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_SDMA_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_SDMA_WR_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_YMEM_SDMA_WR_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM0_HIFI5S_RD_MASK (0x100U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM0_HIFI5S_RD_SHIFT (8U)
/*! dram0_hifi5s_rd - HiFi5s DRAM0 read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM0_HIFI5S_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM0_HIFI5S_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM0_HIFI5S_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM0_HIFI5S_WR_MASK (0x200U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM0_HIFI5S_WR_SHIFT (9U)
/*! dram0_hifi5s_wr - HiFi5s DRAM0 write error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM0_HIFI5S_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM0_HIFI5S_WR_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM0_HIFI5S_WR_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM1_HIFI5S_RD_MASK (0x400U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM1_HIFI5S_RD_SHIFT (10U)
/*! dram1_hifi5s_rd - HiFi5s DRAM1 read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM1_HIFI5S_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM1_HIFI5S_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM1_HIFI5S_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM1_HIFI5S_WR_MASK (0x800U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM1_HIFI5S_WR_SHIFT (11U)
/*! dram1_hifi5s_wr - HiFi5s DRAM1 write error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM1_HIFI5S_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM1_HIFI5S_WR_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_DRAM1_HIFI5S_WR_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_DSP3_0_RD_MASK (0x1000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_DSP3_0_RD_SHIFT (12U)
/*! pmem_dsp3_0_rd - DSP3_0 PMEM read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_DSP3_1_RD_MASK (0x2000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_DSP3_1_RD_SHIFT (13U)
/*! pmem_dsp3_1_rd - DSP3_1 PMEM read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_AXI_RD_MASK (0x4000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_AXI_RD_SHIFT (14U)
/*! pmem_axi_rd - Microcontroller PMEM read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_AXI_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_AXI_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_AXI_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_AXI_WR_MASK (0x8000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_AXI_WR_SHIFT (15U)
/*! pmem_axi_wr - Microcontroller PMEM write error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_AXI_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_AXI_WR_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_PMEM_AXI_WR_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_0_RD_MASK (0x10000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_0_RD_SHIFT (16U)
/*! iomem_dsp3_0_rd - DSP3_0 IOMEM read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_0_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_0_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_0_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_0_WR_MASK (0x20000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_0_WR_SHIFT (17U)
/*! iomem_dsp3_0_wr - DSP3_0 IOMEM write error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_0_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_0_WR_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_0_WR_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_1_RD_MASK (0x40000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_1_RD_SHIFT (18U)
/*! iomem_dsp3_1_rd - DSP3_1 IOMEM read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_1_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_1_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_1_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_1_WR_MASK (0x80000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_1_WR_SHIFT (19U)
/*! iomem_dsp3_1_wr - DSP3_1 IOMEM write error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_1_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_1_WR_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_DSP3_1_WR_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_APB_RD_MASK (0x100000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_APB_RD_SHIFT (20U)
/*! iomem_apb_rd - Microcontroller IOMEM read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_APB_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_APB_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_APB_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_APB_WR_MASK (0x200000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_APB_WR_SHIFT (21U)
/*! iomem_apb_wr - Microcontroller IOMEM write error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_APB_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_APB_WR_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_APB_WR_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_HIFI5S_RD_MASK (0x400000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_HIFI5S_RD_SHIFT (22U)
/*! iomem_hifi5s_rd - HiFi5s IOMEM read error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_HIFI5S_RD(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_HIFI5S_RD_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_HIFI5S_RD_MASK)

#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_HIFI5S_WR_MASK (0x800000U)
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_HIFI5S_WR_SHIFT (23U)
/*! iomem_hifi5s_wr - HiFi5s IOMEM write error */
#define ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_HIFI5S_WR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_HIFI5S_WR_SHIFT)) & ADSS_ERROR_PREVIOUS_ERROR_STATUS_1_IOMEM_HIFI5S_WR_MASK)
/*! @} */

/*! @name ERROR_ADDRESS - The address that was tried to be accessed for the first error. Any write to this register clears the register */
/*! @{ */

#define ADSS_ERROR_ERROR_ADDRESS_ADDRESS_MASK    (0xFFFFFFU)
#define ADSS_ERROR_ERROR_ADDRESS_ADDRESS_SHIFT   (0U)
/*! address - The address */
#define ADSS_ERROR_ERROR_ADDRESS_ADDRESS(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_ADDRESS_ADDRESS_SHIFT)) & ADSS_ERROR_ERROR_ADDRESS_ADDRESS_MASK)
/*! @} */

/*! @name ERROR_CODE - The error code for address that was tried to be accessed for the first error. Any write to this register clears the register */
/*! @{ */

#define ADSS_ERROR_ERROR_CODE_VALUE_MASK         (0x3FU)
#define ADSS_ERROR_ERROR_CODE_VALUE_SHIFT        (0U)
/*! value - The error code */
#define ADSS_ERROR_ERROR_CODE_VALUE(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_ERROR_CODE_VALUE_SHIFT)) & ADSS_ERROR_ERROR_CODE_VALUE_MASK)
/*! @} */

/*! @name DSP3_0_PC - The DSP3 instance 0 program counter value when the first memory error occured. Any write to this register clears the register */
/*! @{ */

#define ADSS_ERROR_DSP3_0_PC_VALUE_MASK          (0x1FFFFFU)
#define ADSS_ERROR_DSP3_0_PC_VALUE_SHIFT         (0U)
/*! value - The program memory address */
#define ADSS_ERROR_DSP3_0_PC_VALUE(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_DSP3_0_PC_VALUE_SHIFT)) & ADSS_ERROR_DSP3_0_PC_VALUE_MASK)
/*! @} */

/*! @name DSP3_1_PC - The DSP3 instance 1 program counter value when the first memory error occured. Any write to this register clears the register */
/*! @{ */

#define ADSS_ERROR_DSP3_1_PC_VALUE_MASK          (0x1FFFFFU)
#define ADSS_ERROR_DSP3_1_PC_VALUE_SHIFT         (0U)
/*! value - The program memory address */
#define ADSS_ERROR_DSP3_1_PC_VALUE(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_ERROR_DSP3_1_PC_VALUE_SHIFT)) & ADSS_ERROR_DSP3_1_PC_VALUE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADSS_ERROR_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_ERROR_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_ERROR_H_ */

