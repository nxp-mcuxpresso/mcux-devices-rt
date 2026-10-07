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
**         CMSIS Peripheral Access Layer for NSS_EDU
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
 * @file PERI_NSS_EDU.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for NSS_EDU
 *
 * CMSIS Peripheral Access Layer for NSS_EDU
 */

#if !defined(PERI_NSS_EDU_H_)
#define PERI_NSS_EDU_H_                          /**< Symbol preventing repeated inclusion */

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
   -- NSS_EDU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_EDU_Peripheral_Access_Layer NSS_EDU Peripheral Access Layer
 * @{
 */

/** NSS_EDU - Register Layout Typedef */
typedef struct {
  __I  uint32_t ERROR_STATUS;                      /**< Error status register. Indicates which error source occured since last reset. Can only be cleared by a reset (POR or soft)., offset: 0x0 */
  __IO uint32_t ERROR_EVENT_ENABLE;                /**< Event-on-error enable register. Selects which error sources trigger an error event on the NSS Event Bus., offset: 0x4 */
       uint8_t RESERVED_0[4];
  __IO uint32_t ERROR_RESET_ENABLE;                /**< Reset-on-error enable register. Select which error sources trigger a soft reset., offset: 0xC */
  __IO uint32_t ERROR_BREAK_ENABLE;                /**< Break-on-error enable register. Select which error sources trigger a break to the crossbreak module., offset: 0x10 */
       uint8_t RESERVED_1[8];
  __IO uint32_t PREVIOUS_ERROR_STATUS;             /**< Error status register. This is a soft-reset-safe register. Can be cleared by write operations or POR. This register can be used to figure out which error event trigger a soft reset., offset: 0x1C */
       uint8_t RESERVED_2[32];
  __I  uint32_t APB_AHB_ERROR_INFO;                /**< Error info for the NSS APB error triggered by the CM55. This information relates to the last NSS APB error triggered by the CM55., offset: 0x40 */
  __I  uint32_t APB_XSP_ERROR_INFO;                /**< Error info for the NSS APB error triggered by the XSP. This information relates to the last NSS APB error triggered by the XSP., offset: 0x44 */
  __I  uint32_t APB_CSS_APB_ERROR_INFO;            /**< Error info for the NSS APB error triggered by a CSS APB access. This information relates to the last NSS APB error triggered by a CSS APB access., offset: 0x48 */
  __I  uint32_t APB_XSPI_ERROR_INFO;               /**< Error info for the NSS APB error triggered by an access to the xSPI. The information relates to the last xSPI APB access that triggered an error. The error can have been triggered by any manager interface to the APB bus of the xSPI (NSS CM55, NSS XSP or CSS AHB32-P bus)., offset: 0x4C */
       uint8_t RESERVED_3[44];
  __IO uint32_t UNLOCK;                            /**< Register to unlock write access to the write proteced EDU registers. (One-shot), offset: 0x7C */
} NSS_EDU_Type;

/* ----------------------------------------------------------------------------
   -- NSS_EDU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_EDU_Register_Masks NSS_EDU Register Masks
 * @{
 */

/*! @name ERROR_STATUS - Error status register. Indicates which error source occured since last reset. Can only be cleared by a reset (POR or soft). */
/*! @{ */

#define NSS_EDU_ERROR_STATUS_XSP_XMEM_MASK       (0x1U)
#define NSS_EDU_ERROR_STATUS_XSP_XMEM_SHIFT      (0U)
/*! xsp_xmem - XSP core access to scalar X memory */
#define NSS_EDU_ERROR_STATUS_XSP_XMEM(x)         (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_XSP_XMEM_SHIFT)) & NSS_EDU_ERROR_STATUS_XSP_XMEM_MASK)

#define NSS_EDU_ERROR_STATUS_AXI_XMEM_MASK       (0x2U)
#define NSS_EDU_ERROR_STATUS_AXI_XMEM_SHIFT      (1U)
/*! axi_xmem - AXI access to scalar X memory */
#define NSS_EDU_ERROR_STATUS_AXI_XMEM(x)         (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_AXI_XMEM_SHIFT)) & NSS_EDU_ERROR_STATUS_AXI_XMEM_MASK)

#define NSS_EDU_ERROR_STATUS_XSP_YMEM_MASK       (0x8U)
#define NSS_EDU_ERROR_STATUS_XSP_YMEM_SHIFT      (3U)
/*! xsp_ymem - XSP core access to scalar Y memory */
#define NSS_EDU_ERROR_STATUS_XSP_YMEM(x)         (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_XSP_YMEM_SHIFT)) & NSS_EDU_ERROR_STATUS_XSP_YMEM_MASK)

#define NSS_EDU_ERROR_STATUS_AXI_YMEM_MASK       (0x10U)
#define NSS_EDU_ERROR_STATUS_AXI_YMEM_SHIFT      (4U)
/*! axi_ymem - AXI access to scalar Y memory */
#define NSS_EDU_ERROR_STATUS_AXI_YMEM(x)         (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_AXI_YMEM_SHIFT)) & NSS_EDU_ERROR_STATUS_AXI_YMEM_MASK)

#define NSS_EDU_ERROR_STATUS_XSP_PMEM_MASK       (0x40U)
#define NSS_EDU_ERROR_STATUS_XSP_PMEM_SHIFT      (6U)
/*! xsp_pmem - XSP core access to P memory */
#define NSS_EDU_ERROR_STATUS_XSP_PMEM(x)         (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_XSP_PMEM_SHIFT)) & NSS_EDU_ERROR_STATUS_XSP_PMEM_MASK)

#define NSS_EDU_ERROR_STATUS_AXI_PMEM_MASK       (0x80U)
#define NSS_EDU_ERROR_STATUS_AXI_PMEM_SHIFT      (7U)
/*! axi_pmem - AXI access to P memory */
#define NSS_EDU_ERROR_STATUS_AXI_PMEM(x)         (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_AXI_PMEM_SHIFT)) & NSS_EDU_ERROR_STATUS_AXI_PMEM_MASK)

#define NSS_EDU_ERROR_STATUS_XMEMV_MASK          (0x100U)
#define NSS_EDU_ERROR_STATUS_XMEMV_SHIFT         (8U)
/*! xmemv - Access to Vector memory (DNN RAM) through the XSP SS */
#define NSS_EDU_ERROR_STATUS_XMEMV(x)            (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_XMEMV_SHIFT)) & NSS_EDU_ERROR_STATUS_XMEMV_MASK)

#define NSS_EDU_ERROR_STATUS_XSP_IO_MASK         (0x200U)
#define NSS_EDU_ERROR_STATUS_XSP_IO_SHIFT        (9U)
/*! xsp_io - XSP core access to an IO register */
#define NSS_EDU_ERROR_STATUS_XSP_IO(x)           (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_XSP_IO_SHIFT)) & NSS_EDU_ERROR_STATUS_XSP_IO_MASK)

#define NSS_EDU_ERROR_STATUS_XSP_WATCHDOG_MASK   (0x400U)
#define NSS_EDU_ERROR_STATUS_XSP_WATCHDOG_SHIFT  (10U)
/*! xsp_watchdog - XSP SS Watchdog event */
#define NSS_EDU_ERROR_STATUS_XSP_WATCHDOG(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_XSP_WATCHDOG_SHIFT)) & NSS_EDU_ERROR_STATUS_XSP_WATCHDOG_MASK)

#define NSS_EDU_ERROR_STATUS_XSP_EVENTS_OVF_MASK (0x800U)
#define NSS_EDU_ERROR_STATUS_XSP_EVENTS_OVF_SHIFT (11U)
/*! xsp_events_ovf - NSS events to XSP overflow error detected */
#define NSS_EDU_ERROR_STATUS_XSP_EVENTS_OVF(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_XSP_EVENTS_OVF_SHIFT)) & NSS_EDU_ERROR_STATUS_XSP_EVENTS_OVF_MASK)

#define NSS_EDU_ERROR_STATUS_XSP_LOV_MASK        (0x1000U)
#define NSS_EDU_ERROR_STATUS_XSP_LOV_SHIFT       (12U)
/*! xsp_lov - XSP Loopbuffer overflow error detected */
#define NSS_EDU_ERROR_STATUS_XSP_LOV(x)          (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_XSP_LOV_SHIFT)) & NSS_EDU_ERROR_STATUS_XSP_LOV_MASK)

#define NSS_EDU_ERROR_STATUS_DMA_MASK            (0x2000U)
#define NSS_EDU_ERROR_STATUS_DMA_SHIFT           (13U)
/*! dma - DMA error detected */
#define NSS_EDU_ERROR_STATUS_DMA(x)              (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_DMA_SHIFT)) & NSS_EDU_ERROR_STATUS_DMA_MASK)

#define NSS_EDU_ERROR_STATUS_APB_AHB_MASK        (0x10000U)
#define NSS_EDU_ERROR_STATUS_APB_AHB_SHIFT       (16U)
/*! apb_ahb - NSS APB error caused by CM55 AHB manager I/F */
#define NSS_EDU_ERROR_STATUS_APB_AHB(x)          (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_APB_AHB_SHIFT)) & NSS_EDU_ERROR_STATUS_APB_AHB_MASK)

#define NSS_EDU_ERROR_STATUS_APB_XSP_MASK        (0x20000U)
#define NSS_EDU_ERROR_STATUS_APB_XSP_SHIFT       (17U)
/*! apb_xsp - NSS APB error caused by XSP IO manager I/F */
#define NSS_EDU_ERROR_STATUS_APB_XSP(x)          (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_APB_XSP_SHIFT)) & NSS_EDU_ERROR_STATUS_APB_XSP_MASK)

#define NSS_EDU_ERROR_STATUS_APB_CSS_APB_MASK    (0x40000U)
#define NSS_EDU_ERROR_STATUS_APB_CSS_APB_SHIFT   (18U)
/*! apb_css_apb - NSS APB error caused by a CSS APB access */
#define NSS_EDU_ERROR_STATUS_APB_CSS_APB(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_APB_CSS_APB_SHIFT)) & NSS_EDU_ERROR_STATUS_APB_CSS_APB_MASK)

#define NSS_EDU_ERROR_STATUS_APB_XSPI_MASK       (0x80000U)
#define NSS_EDU_ERROR_STATUS_APB_XSPI_SHIFT      (19U)
/*! apb_xspi - NSS APB error caused by an access to the xSPI (either manager I/F) */
#define NSS_EDU_ERROR_STATUS_APB_XSPI(x)         (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_APB_XSPI_SHIFT)) & NSS_EDU_ERROR_STATUS_APB_XSPI_MASK)

#define NSS_EDU_ERROR_STATUS_DSSEVENT_GEN_MASK   (0x10000000U)
#define NSS_EDU_ERROR_STATUS_DSSEVENT_GEN_SHIFT  (28U)
/*! dssevent_gen - DSS Event generator (overflow) */
#define NSS_EDU_ERROR_STATUS_DSSEVENT_GEN(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_DSSEVENT_GEN_SHIFT)) & NSS_EDU_ERROR_STATUS_DSSEVENT_GEN_MASK)

#define NSS_EDU_ERROR_STATUS_CSSEVENT_GEN_MASK   (0x20000000U)
#define NSS_EDU_ERROR_STATUS_CSSEVENT_GEN_SHIFT  (29U)
/*! cssevent_gen - CSS Event generator (overflow) */
#define NSS_EDU_ERROR_STATUS_CSSEVENT_GEN(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_CSSEVENT_GEN_SHIFT)) & NSS_EDU_ERROR_STATUS_CSSEVENT_GEN_MASK)

#define NSS_EDU_ERROR_STATUS_WATCHDOG_MASK       (0x40000000U)
#define NSS_EDU_ERROR_STATUS_WATCHDOG_SHIFT      (30U)
/*! watchdog - NSS Watchdog Event */
#define NSS_EDU_ERROR_STATUS_WATCHDOG(x)         (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_STATUS_WATCHDOG_SHIFT)) & NSS_EDU_ERROR_STATUS_WATCHDOG_MASK)
/*! @} */

/*! @name ERROR_EVENT_ENABLE - Event-on-error enable register. Selects which error sources trigger an error event on the NSS Event Bus. */
/*! @{ */

#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_XMEM_MASK (0x1U)
#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_XMEM_SHIFT (0U)
/*! xsp_xmem - XSP core access to scalar X memory */
#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_XMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_XSP_XMEM_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_XSP_XMEM_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_AXI_XMEM_MASK (0x2U)
#define NSS_EDU_ERROR_EVENT_ENABLE_AXI_XMEM_SHIFT (1U)
/*! axi_xmem - AXI access to scalar X memory */
#define NSS_EDU_ERROR_EVENT_ENABLE_AXI_XMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_AXI_XMEM_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_AXI_XMEM_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_YMEM_MASK (0x8U)
#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_YMEM_SHIFT (3U)
/*! xsp_ymem - XSP core access to scalar Y memory */
#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_YMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_XSP_YMEM_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_XSP_YMEM_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_AXI_YMEM_MASK (0x10U)
#define NSS_EDU_ERROR_EVENT_ENABLE_AXI_YMEM_SHIFT (4U)
/*! axi_ymem - AXI access to scalar Y memory */
#define NSS_EDU_ERROR_EVENT_ENABLE_AXI_YMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_AXI_YMEM_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_AXI_YMEM_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_PMEM_MASK (0x40U)
#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_PMEM_SHIFT (6U)
/*! xsp_pmem - XSP core access to P memory */
#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_PMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_XSP_PMEM_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_XSP_PMEM_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_AXI_PMEM_MASK (0x80U)
#define NSS_EDU_ERROR_EVENT_ENABLE_AXI_PMEM_SHIFT (7U)
/*! axi_pmem - AXI access to P memory */
#define NSS_EDU_ERROR_EVENT_ENABLE_AXI_PMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_AXI_PMEM_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_AXI_PMEM_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_XMEMV_MASK    (0x100U)
#define NSS_EDU_ERROR_EVENT_ENABLE_XMEMV_SHIFT   (8U)
/*! xmemv - Access to Vector memory (DNN RAM) through the XSP SS */
#define NSS_EDU_ERROR_EVENT_ENABLE_XMEMV(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_XMEMV_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_XMEMV_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_IO_MASK   (0x200U)
#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_IO_SHIFT  (9U)
/*! xsp_io - XSP core access to an IO register */
#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_IO(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_XSP_IO_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_XSP_IO_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_WATCHDOG_MASK (0x400U)
#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_WATCHDOG_SHIFT (10U)
/*! xsp_watchdog - XSP SS Watchdog event */
#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_WATCHDOG(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_XSP_WATCHDOG_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_XSP_WATCHDOG_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_EVENTS_OVF_MASK (0x800U)
#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_EVENTS_OVF_SHIFT (11U)
/*! xsp_events_ovf - NSS events to XSP overflow error detected */
#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_EVENTS_OVF(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_XSP_EVENTS_OVF_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_XSP_EVENTS_OVF_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_LOV_MASK  (0x1000U)
#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_LOV_SHIFT (12U)
/*! xsp_lov - XSP Loopbuffer overflow error detected */
#define NSS_EDU_ERROR_EVENT_ENABLE_XSP_LOV(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_XSP_LOV_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_XSP_LOV_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_DMA_MASK      (0x2000U)
#define NSS_EDU_ERROR_EVENT_ENABLE_DMA_SHIFT     (13U)
/*! dma - DMA error detected */
#define NSS_EDU_ERROR_EVENT_ENABLE_DMA(x)        (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_DMA_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_DMA_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_APB_AHB_MASK  (0x10000U)
#define NSS_EDU_ERROR_EVENT_ENABLE_APB_AHB_SHIFT (16U)
/*! apb_ahb - NSS APB error caused by CM55 AHB manager I/F */
#define NSS_EDU_ERROR_EVENT_ENABLE_APB_AHB(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_APB_AHB_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_APB_AHB_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_APB_XSP_MASK  (0x20000U)
#define NSS_EDU_ERROR_EVENT_ENABLE_APB_XSP_SHIFT (17U)
/*! apb_xsp - NSS APB error caused by XSP IO manager I/F */
#define NSS_EDU_ERROR_EVENT_ENABLE_APB_XSP(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_APB_XSP_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_APB_XSP_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_APB_CSS_APB_MASK (0x40000U)
#define NSS_EDU_ERROR_EVENT_ENABLE_APB_CSS_APB_SHIFT (18U)
/*! apb_css_apb - NSS APB error caused by a CSS APB access */
#define NSS_EDU_ERROR_EVENT_ENABLE_APB_CSS_APB(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_APB_CSS_APB_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_APB_CSS_APB_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_APB_XSPI_MASK (0x80000U)
#define NSS_EDU_ERROR_EVENT_ENABLE_APB_XSPI_SHIFT (19U)
/*! apb_xspi - NSS APB error caused by an access to the xSPI (either manager I/F) */
#define NSS_EDU_ERROR_EVENT_ENABLE_APB_XSPI(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_APB_XSPI_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_APB_XSPI_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_DSSEVENT_GEN_MASK (0x10000000U)
#define NSS_EDU_ERROR_EVENT_ENABLE_DSSEVENT_GEN_SHIFT (28U)
/*! dssevent_gen - DSS Event generator (overflow) */
#define NSS_EDU_ERROR_EVENT_ENABLE_DSSEVENT_GEN(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_DSSEVENT_GEN_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_DSSEVENT_GEN_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_CSSEVENT_GEN_MASK (0x20000000U)
#define NSS_EDU_ERROR_EVENT_ENABLE_CSSEVENT_GEN_SHIFT (29U)
/*! cssevent_gen - CSS Event generator (overflow) */
#define NSS_EDU_ERROR_EVENT_ENABLE_CSSEVENT_GEN(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_CSSEVENT_GEN_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_CSSEVENT_GEN_MASK)

#define NSS_EDU_ERROR_EVENT_ENABLE_WATCHDOG_MASK (0x40000000U)
#define NSS_EDU_ERROR_EVENT_ENABLE_WATCHDOG_SHIFT (30U)
/*! watchdog - NSS Watchdog Event */
#define NSS_EDU_ERROR_EVENT_ENABLE_WATCHDOG(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_EVENT_ENABLE_WATCHDOG_SHIFT)) & NSS_EDU_ERROR_EVENT_ENABLE_WATCHDOG_MASK)
/*! @} */

/*! @name ERROR_RESET_ENABLE - Reset-on-error enable register. Select which error sources trigger a soft reset. */
/*! @{ */

#define NSS_EDU_ERROR_RESET_ENABLE_XSP_XMEM_MASK (0x1U)
#define NSS_EDU_ERROR_RESET_ENABLE_XSP_XMEM_SHIFT (0U)
/*! xsp_xmem - XSP core access to scalar X memory */
#define NSS_EDU_ERROR_RESET_ENABLE_XSP_XMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_XSP_XMEM_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_XSP_XMEM_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_AXI_XMEM_MASK (0x2U)
#define NSS_EDU_ERROR_RESET_ENABLE_AXI_XMEM_SHIFT (1U)
/*! axi_xmem - AXI access to scalar X memory */
#define NSS_EDU_ERROR_RESET_ENABLE_AXI_XMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_AXI_XMEM_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_AXI_XMEM_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_XSP_YMEM_MASK (0x8U)
#define NSS_EDU_ERROR_RESET_ENABLE_XSP_YMEM_SHIFT (3U)
/*! xsp_ymem - XSP core access to scalar Y memory */
#define NSS_EDU_ERROR_RESET_ENABLE_XSP_YMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_XSP_YMEM_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_XSP_YMEM_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_AXI_YMEM_MASK (0x10U)
#define NSS_EDU_ERROR_RESET_ENABLE_AXI_YMEM_SHIFT (4U)
/*! axi_ymem - AXI access to scalar Y memory */
#define NSS_EDU_ERROR_RESET_ENABLE_AXI_YMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_AXI_YMEM_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_AXI_YMEM_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_XSP_PMEM_MASK (0x40U)
#define NSS_EDU_ERROR_RESET_ENABLE_XSP_PMEM_SHIFT (6U)
/*! xsp_pmem - XSP core access to P memory */
#define NSS_EDU_ERROR_RESET_ENABLE_XSP_PMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_XSP_PMEM_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_XSP_PMEM_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_AXI_PMEM_MASK (0x80U)
#define NSS_EDU_ERROR_RESET_ENABLE_AXI_PMEM_SHIFT (7U)
/*! axi_pmem - AXI access to P memory */
#define NSS_EDU_ERROR_RESET_ENABLE_AXI_PMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_AXI_PMEM_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_AXI_PMEM_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_XMEMV_MASK    (0x100U)
#define NSS_EDU_ERROR_RESET_ENABLE_XMEMV_SHIFT   (8U)
/*! xmemv - Access to Vector memory (DNN RAM) through the XSP SS */
#define NSS_EDU_ERROR_RESET_ENABLE_XMEMV(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_XMEMV_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_XMEMV_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_XSP_IO_MASK   (0x200U)
#define NSS_EDU_ERROR_RESET_ENABLE_XSP_IO_SHIFT  (9U)
/*! xsp_io - XSP core access to an IO register */
#define NSS_EDU_ERROR_RESET_ENABLE_XSP_IO(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_XSP_IO_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_XSP_IO_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_XSP_WATCHDOG_MASK (0x400U)
#define NSS_EDU_ERROR_RESET_ENABLE_XSP_WATCHDOG_SHIFT (10U)
/*! xsp_watchdog - XSP SS Watchdog event */
#define NSS_EDU_ERROR_RESET_ENABLE_XSP_WATCHDOG(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_XSP_WATCHDOG_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_XSP_WATCHDOG_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_XSP_EVENTS_OVF_MASK (0x800U)
#define NSS_EDU_ERROR_RESET_ENABLE_XSP_EVENTS_OVF_SHIFT (11U)
/*! xsp_events_ovf - NSS events to XSP overflow error detected */
#define NSS_EDU_ERROR_RESET_ENABLE_XSP_EVENTS_OVF(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_XSP_EVENTS_OVF_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_XSP_EVENTS_OVF_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_XSP_LOV_MASK  (0x1000U)
#define NSS_EDU_ERROR_RESET_ENABLE_XSP_LOV_SHIFT (12U)
/*! xsp_lov - XSP Loopbuffer overflow error detected */
#define NSS_EDU_ERROR_RESET_ENABLE_XSP_LOV(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_XSP_LOV_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_XSP_LOV_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_DMA_MASK      (0x2000U)
#define NSS_EDU_ERROR_RESET_ENABLE_DMA_SHIFT     (13U)
/*! dma - DMA error detected */
#define NSS_EDU_ERROR_RESET_ENABLE_DMA(x)        (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_DMA_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_DMA_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_APB_AHB_MASK  (0x10000U)
#define NSS_EDU_ERROR_RESET_ENABLE_APB_AHB_SHIFT (16U)
/*! apb_ahb - NSS APB error caused by CM55 AHB manager I/F */
#define NSS_EDU_ERROR_RESET_ENABLE_APB_AHB(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_APB_AHB_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_APB_AHB_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_APB_XSP_MASK  (0x20000U)
#define NSS_EDU_ERROR_RESET_ENABLE_APB_XSP_SHIFT (17U)
/*! apb_xsp - NSS APB error caused by XSP IO manager I/F */
#define NSS_EDU_ERROR_RESET_ENABLE_APB_XSP(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_APB_XSP_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_APB_XSP_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_APB_CSS_APB_MASK (0x40000U)
#define NSS_EDU_ERROR_RESET_ENABLE_APB_CSS_APB_SHIFT (18U)
/*! apb_css_apb - NSS APB error caused by a CSS APB access */
#define NSS_EDU_ERROR_RESET_ENABLE_APB_CSS_APB(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_APB_CSS_APB_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_APB_CSS_APB_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_APB_XSPI_MASK (0x80000U)
#define NSS_EDU_ERROR_RESET_ENABLE_APB_XSPI_SHIFT (19U)
/*! apb_xspi - NSS APB error caused by an access to the xSPI (either manager I/F) */
#define NSS_EDU_ERROR_RESET_ENABLE_APB_XSPI(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_APB_XSPI_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_APB_XSPI_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_DSSEVENT_GEN_MASK (0x10000000U)
#define NSS_EDU_ERROR_RESET_ENABLE_DSSEVENT_GEN_SHIFT (28U)
/*! dssevent_gen - DSS Event generator (overflow) */
#define NSS_EDU_ERROR_RESET_ENABLE_DSSEVENT_GEN(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_DSSEVENT_GEN_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_DSSEVENT_GEN_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_CSSEVENT_GEN_MASK (0x20000000U)
#define NSS_EDU_ERROR_RESET_ENABLE_CSSEVENT_GEN_SHIFT (29U)
/*! cssevent_gen - CSS Event generator (overflow) */
#define NSS_EDU_ERROR_RESET_ENABLE_CSSEVENT_GEN(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_CSSEVENT_GEN_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_CSSEVENT_GEN_MASK)

#define NSS_EDU_ERROR_RESET_ENABLE_WATCHDOG_MASK (0x40000000U)
#define NSS_EDU_ERROR_RESET_ENABLE_WATCHDOG_SHIFT (30U)
/*! watchdog - NSS Watchdog Event */
#define NSS_EDU_ERROR_RESET_ENABLE_WATCHDOG(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_RESET_ENABLE_WATCHDOG_SHIFT)) & NSS_EDU_ERROR_RESET_ENABLE_WATCHDOG_MASK)
/*! @} */

/*! @name ERROR_BREAK_ENABLE - Break-on-error enable register. Select which error sources trigger a break to the crossbreak module. */
/*! @{ */

#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_XMEM_MASK (0x1U)
#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_XMEM_SHIFT (0U)
/*! xsp_xmem - XSP core access to scalar X memory */
#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_XMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_XSP_XMEM_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_XSP_XMEM_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_AXI_XMEM_MASK (0x2U)
#define NSS_EDU_ERROR_BREAK_ENABLE_AXI_XMEM_SHIFT (1U)
/*! axi_xmem - AXI access to scalar X memory */
#define NSS_EDU_ERROR_BREAK_ENABLE_AXI_XMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_AXI_XMEM_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_AXI_XMEM_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_YMEM_MASK (0x8U)
#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_YMEM_SHIFT (3U)
/*! xsp_ymem - XSP core access to scalar Y memory */
#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_YMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_XSP_YMEM_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_XSP_YMEM_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_AXI_YMEM_MASK (0x10U)
#define NSS_EDU_ERROR_BREAK_ENABLE_AXI_YMEM_SHIFT (4U)
/*! axi_ymem - AXI access to scalar Y memory */
#define NSS_EDU_ERROR_BREAK_ENABLE_AXI_YMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_AXI_YMEM_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_AXI_YMEM_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_PMEM_MASK (0x40U)
#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_PMEM_SHIFT (6U)
/*! xsp_pmem - XSP core access to P memory */
#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_PMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_XSP_PMEM_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_XSP_PMEM_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_AXI_PMEM_MASK (0x80U)
#define NSS_EDU_ERROR_BREAK_ENABLE_AXI_PMEM_SHIFT (7U)
/*! axi_pmem - AXI access to P memory */
#define NSS_EDU_ERROR_BREAK_ENABLE_AXI_PMEM(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_AXI_PMEM_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_AXI_PMEM_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_XMEMV_MASK    (0x100U)
#define NSS_EDU_ERROR_BREAK_ENABLE_XMEMV_SHIFT   (8U)
/*! xmemv - Access to Vector memory (DNN RAM) through the XSP SS */
#define NSS_EDU_ERROR_BREAK_ENABLE_XMEMV(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_XMEMV_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_XMEMV_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_IO_MASK   (0x200U)
#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_IO_SHIFT  (9U)
/*! xsp_io - XSP core access to an IO register */
#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_IO(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_XSP_IO_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_XSP_IO_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_WATCHDOG_MASK (0x400U)
#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_WATCHDOG_SHIFT (10U)
/*! xsp_watchdog - XSP SS Watchdog event */
#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_WATCHDOG(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_XSP_WATCHDOG_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_XSP_WATCHDOG_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_EVENTS_OVF_MASK (0x800U)
#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_EVENTS_OVF_SHIFT (11U)
/*! xsp_events_ovf - NSS events to XSP overflow error detected */
#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_EVENTS_OVF(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_XSP_EVENTS_OVF_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_XSP_EVENTS_OVF_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_LOV_MASK  (0x1000U)
#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_LOV_SHIFT (12U)
/*! xsp_lov - XSP Loopbuffer overflow error detected */
#define NSS_EDU_ERROR_BREAK_ENABLE_XSP_LOV(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_XSP_LOV_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_XSP_LOV_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_DMA_MASK      (0x2000U)
#define NSS_EDU_ERROR_BREAK_ENABLE_DMA_SHIFT     (13U)
/*! dma - DMA error detected */
#define NSS_EDU_ERROR_BREAK_ENABLE_DMA(x)        (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_DMA_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_DMA_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_APB_AHB_MASK  (0x10000U)
#define NSS_EDU_ERROR_BREAK_ENABLE_APB_AHB_SHIFT (16U)
/*! apb_ahb - NSS APB error caused by CM55 AHB manager I/F */
#define NSS_EDU_ERROR_BREAK_ENABLE_APB_AHB(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_APB_AHB_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_APB_AHB_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_APB_XSP_MASK  (0x20000U)
#define NSS_EDU_ERROR_BREAK_ENABLE_APB_XSP_SHIFT (17U)
/*! apb_xsp - NSS APB error caused by XSP IO manager I/F */
#define NSS_EDU_ERROR_BREAK_ENABLE_APB_XSP(x)    (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_APB_XSP_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_APB_XSP_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_APB_CSS_APB_MASK (0x40000U)
#define NSS_EDU_ERROR_BREAK_ENABLE_APB_CSS_APB_SHIFT (18U)
/*! apb_css_apb - NSS APB error caused by a CSS APB access */
#define NSS_EDU_ERROR_BREAK_ENABLE_APB_CSS_APB(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_APB_CSS_APB_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_APB_CSS_APB_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_APB_XSPI_MASK (0x80000U)
#define NSS_EDU_ERROR_BREAK_ENABLE_APB_XSPI_SHIFT (19U)
/*! apb_xspi - NSS APB error caused by an access to the xSPI (either manager I/F) */
#define NSS_EDU_ERROR_BREAK_ENABLE_APB_XSPI(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_APB_XSPI_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_APB_XSPI_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_DSSEVENT_GEN_MASK (0x10000000U)
#define NSS_EDU_ERROR_BREAK_ENABLE_DSSEVENT_GEN_SHIFT (28U)
/*! dssevent_gen - DSS Event generator (overflow) */
#define NSS_EDU_ERROR_BREAK_ENABLE_DSSEVENT_GEN(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_DSSEVENT_GEN_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_DSSEVENT_GEN_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_CSSEVENT_GEN_MASK (0x20000000U)
#define NSS_EDU_ERROR_BREAK_ENABLE_CSSEVENT_GEN_SHIFT (29U)
/*! cssevent_gen - CSS Event generator (overflow) */
#define NSS_EDU_ERROR_BREAK_ENABLE_CSSEVENT_GEN(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_CSSEVENT_GEN_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_CSSEVENT_GEN_MASK)

#define NSS_EDU_ERROR_BREAK_ENABLE_WATCHDOG_MASK (0x40000000U)
#define NSS_EDU_ERROR_BREAK_ENABLE_WATCHDOG_SHIFT (30U)
/*! watchdog - NSS Watchdog Event */
#define NSS_EDU_ERROR_BREAK_ENABLE_WATCHDOG(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_ERROR_BREAK_ENABLE_WATCHDOG_SHIFT)) & NSS_EDU_ERROR_BREAK_ENABLE_WATCHDOG_MASK)
/*! @} */

/*! @name PREVIOUS_ERROR_STATUS - Error status register. This is a soft-reset-safe register. Can be cleared by write operations or POR. This register can be used to figure out which error event trigger a soft reset. */
/*! @{ */

#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_XMEM_MASK (0x1U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_XMEM_SHIFT (0U)
/*! xsp_xmem - XSP core access to scalar X memory */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_XMEM(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_XMEM_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_XMEM_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_AXI_XMEM_MASK (0x2U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_AXI_XMEM_SHIFT (1U)
/*! axi_xmem - AXI access to scalar X memory */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_AXI_XMEM(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_AXI_XMEM_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_AXI_XMEM_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_YMEM_MASK (0x8U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_YMEM_SHIFT (3U)
/*! xsp_ymem - XSP core access to scalar Y memory */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_YMEM(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_YMEM_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_YMEM_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_AXI_YMEM_MASK (0x10U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_AXI_YMEM_SHIFT (4U)
/*! axi_ymem - AXI access to scalar Y memory */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_AXI_YMEM(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_AXI_YMEM_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_AXI_YMEM_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_PMEM_MASK (0x40U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_PMEM_SHIFT (6U)
/*! xsp_pmem - XSP core access to P memory */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_PMEM(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_PMEM_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_PMEM_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_AXI_PMEM_MASK (0x80U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_AXI_PMEM_SHIFT (7U)
/*! axi_pmem - AXI access to P memory */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_AXI_PMEM(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_AXI_PMEM_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_AXI_PMEM_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_XMEMV_MASK (0x100U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_XMEMV_SHIFT (8U)
/*! xmemv - Access to Vector memory (DNN RAM) through the XSP SS */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_XMEMV(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_XMEMV_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_XMEMV_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_IO_MASK (0x200U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_IO_SHIFT (9U)
/*! xsp_io - XSP core access to an IO register */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_IO(x)  (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_IO_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_IO_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_WATCHDOG_MASK (0x400U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_WATCHDOG_SHIFT (10U)
/*! xsp_watchdog - XSP SS Watchdog event */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_WATCHDOG(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_WATCHDOG_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_WATCHDOG_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_EVENTS_OVF_MASK (0x800U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_EVENTS_OVF_SHIFT (11U)
/*! xsp_events_ovf - NSS events to XSP overflow error detected */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_EVENTS_OVF(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_EVENTS_OVF_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_EVENTS_OVF_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_LOV_MASK (0x1000U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_LOV_SHIFT (12U)
/*! xsp_lov - XSP Loopbuffer overflow error detected */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_LOV(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_LOV_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_XSP_LOV_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_DMA_MASK   (0x2000U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_DMA_SHIFT  (13U)
/*! dma - DMA error detected */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_DMA(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_DMA_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_DMA_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_APB_AHB_MASK (0x10000U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_APB_AHB_SHIFT (16U)
/*! apb_ahb - NSS APB error caused by CM55 AHB manager I/F */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_APB_AHB(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_APB_AHB_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_APB_AHB_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_APB_XSP_MASK (0x20000U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_APB_XSP_SHIFT (17U)
/*! apb_xsp - NSS APB error caused by XSP IO manager I/F */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_APB_XSP(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_APB_XSP_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_APB_XSP_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_APB_CSS_APB_MASK (0x40000U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_APB_CSS_APB_SHIFT (18U)
/*! apb_css_apb - NSS APB error caused by a CSS APB access */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_APB_CSS_APB(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_APB_CSS_APB_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_APB_CSS_APB_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_APB_XSPI_MASK (0x80000U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_APB_XSPI_SHIFT (19U)
/*! apb_xspi - NSS APB error caused by an access to the xSPI (either manager I/F) */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_APB_XSPI(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_APB_XSPI_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_APB_XSPI_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_DSSEVENT_GEN_MASK (0x10000000U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_DSSEVENT_GEN_SHIFT (28U)
/*! dssevent_gen - DSS Event generator (overflow) */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_DSSEVENT_GEN(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_DSSEVENT_GEN_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_DSSEVENT_GEN_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_CSSEVENT_GEN_MASK (0x20000000U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_CSSEVENT_GEN_SHIFT (29U)
/*! cssevent_gen - CSS Event generator (overflow) */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_CSSEVENT_GEN(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_CSSEVENT_GEN_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_CSSEVENT_GEN_MASK)

#define NSS_EDU_PREVIOUS_ERROR_STATUS_WATCHDOG_MASK (0x40000000U)
#define NSS_EDU_PREVIOUS_ERROR_STATUS_WATCHDOG_SHIFT (30U)
/*! watchdog - NSS Watchdog Event */
#define NSS_EDU_PREVIOUS_ERROR_STATUS_WATCHDOG(x) (((uint32_t)(((uint32_t)(x)) << NSS_EDU_PREVIOUS_ERROR_STATUS_WATCHDOG_SHIFT)) & NSS_EDU_PREVIOUS_ERROR_STATUS_WATCHDOG_MASK)
/*! @} */

/*! @name APB_AHB_ERROR_INFO - Error info for the NSS APB error triggered by the CM55. This information relates to the last NSS APB error triggered by the CM55. */
/*! @{ */

#define NSS_EDU_APB_AHB_ERROR_INFO_ADDR_MASK     (0x1FFFFU)
#define NSS_EDU_APB_AHB_ERROR_INFO_ADDR_SHIFT    (0U)
/*! addr - NSS APB byte address offset (from XSP APB base 0x40000000) of the last access triggering an error. */
#define NSS_EDU_APB_AHB_ERROR_INFO_ADDR(x)       (((uint32_t)(((uint32_t)(x)) << NSS_EDU_APB_AHB_ERROR_INFO_ADDR_SHIFT)) & NSS_EDU_APB_AHB_ERROR_INFO_ADDR_MASK)

#define NSS_EDU_APB_AHB_ERROR_INFO_WRNRD_MASK    (0x100000U)
#define NSS_EDU_APB_AHB_ERROR_INFO_WRNRD_SHIFT   (20U)
/*! wrnrd - NSS APB transaction type of last access triggering an error
 *  0b0..APB read transaction
 *  0b1..APB read transaction
 */
#define NSS_EDU_APB_AHB_ERROR_INFO_WRNRD(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EDU_APB_AHB_ERROR_INFO_WRNRD_SHIFT)) & NSS_EDU_APB_AHB_ERROR_INFO_WRNRD_MASK)
/*! @} */

/*! @name APB_XSP_ERROR_INFO - Error info for the NSS APB error triggered by the XSP. This information relates to the last NSS APB error triggered by the XSP. */
/*! @{ */

#define NSS_EDU_APB_XSP_ERROR_INFO_ADDR_MASK     (0x1FFFFU)
#define NSS_EDU_APB_XSP_ERROR_INFO_ADDR_SHIFT    (0U)
/*! addr - NSS APB byte address offset (from NSS APB base 0x40000000) of the last access triggering
 *    an error. addr[16:2] bits correspond to the XSP I/O word address offset (from base 0x8000,
 *    bits 14:0).
 */
#define NSS_EDU_APB_XSP_ERROR_INFO_ADDR(x)       (((uint32_t)(((uint32_t)(x)) << NSS_EDU_APB_XSP_ERROR_INFO_ADDR_SHIFT)) & NSS_EDU_APB_XSP_ERROR_INFO_ADDR_MASK)

#define NSS_EDU_APB_XSP_ERROR_INFO_WRNRD_MASK    (0x100000U)
#define NSS_EDU_APB_XSP_ERROR_INFO_WRNRD_SHIFT   (20U)
/*! wrnrd - NSS APB transaction type of last access triggering an error
 *  0b0..APB read transaction
 *  0b1..APB read transaction
 */
#define NSS_EDU_APB_XSP_ERROR_INFO_WRNRD(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EDU_APB_XSP_ERROR_INFO_WRNRD_SHIFT)) & NSS_EDU_APB_XSP_ERROR_INFO_WRNRD_MASK)
/*! @} */

/*! @name APB_CSS_APB_ERROR_INFO - Error info for the NSS APB error triggered by a CSS APB access. This information relates to the last NSS APB error triggered by a CSS APB access. */
/*! @{ */

#define NSS_EDU_APB_CSS_APB_ERROR_INFO_ADDR_MASK (0x1FFFFU)
#define NSS_EDU_APB_CSS_APB_ERROR_INFO_ADDR_SHIFT (0U)
/*! addr - NSS APB byte address offset (from CSS APB base 0x40800000) of the last access triggering an error. */
#define NSS_EDU_APB_CSS_APB_ERROR_INFO_ADDR(x)   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_APB_CSS_APB_ERROR_INFO_ADDR_SHIFT)) & NSS_EDU_APB_CSS_APB_ERROR_INFO_ADDR_MASK)

#define NSS_EDU_APB_CSS_APB_ERROR_INFO_WRNRD_MASK (0x100000U)
#define NSS_EDU_APB_CSS_APB_ERROR_INFO_WRNRD_SHIFT (20U)
/*! wrnrd - NSS APB transaction type of last access triggering an error
 *  0b0..APB read transaction
 *  0b1..APB read transaction
 */
#define NSS_EDU_APB_CSS_APB_ERROR_INFO_WRNRD(x)  (((uint32_t)(((uint32_t)(x)) << NSS_EDU_APB_CSS_APB_ERROR_INFO_WRNRD_SHIFT)) & NSS_EDU_APB_CSS_APB_ERROR_INFO_WRNRD_MASK)
/*! @} */

/*! @name APB_XSPI_ERROR_INFO - Error info for the NSS APB error triggered by an access to the xSPI. The information relates to the last xSPI APB access that triggered an error. The error can have been triggered by any manager interface to the APB bus of the xSPI (NSS CM55, NSS XSP or CSS AHB32-P bus). */
/*! @{ */

#define NSS_EDU_APB_XSPI_ERROR_INFO_ADDR_MASK    (0xFFFU)
#define NSS_EDU_APB_XSPI_ERROR_INFO_ADDR_SHIFT   (0U)
/*! addr - NSS xSPI APB byte address offset of the last access triggering an error. (NSS APB base 0x40012000) */
#define NSS_EDU_APB_XSPI_ERROR_INFO_ADDR(x)      (((uint32_t)(((uint32_t)(x)) << NSS_EDU_APB_XSPI_ERROR_INFO_ADDR_SHIFT)) & NSS_EDU_APB_XSPI_ERROR_INFO_ADDR_MASK)

#define NSS_EDU_APB_XSPI_ERROR_INFO_WRNRD_MASK   (0x100000U)
#define NSS_EDU_APB_XSPI_ERROR_INFO_WRNRD_SHIFT  (20U)
/*! wrnrd - NSS xSPI APB transaction type of last access triggering an error
 *  0b0..APB read transaction
 *  0b1..APB read transaction
 */
#define NSS_EDU_APB_XSPI_ERROR_INFO_WRNRD(x)     (((uint32_t)(((uint32_t)(x)) << NSS_EDU_APB_XSPI_ERROR_INFO_WRNRD_SHIFT)) & NSS_EDU_APB_XSPI_ERROR_INFO_WRNRD_MASK)
/*! @} */

/*! @name UNLOCK - Register to unlock write access to the write proteced EDU registers. (One-shot) */
/*! @{ */

#define NSS_EDU_UNLOCK_ADDR_MASK                 (0x7CU)
#define NSS_EDU_UNLOCK_ADDR_SHIFT                (2U)
/*! addr - Word address of the EDU register for which write access is being unlocked. Write the word
 *    address of the EDU register to be modified. A single write to that exact EDU register address
 *    is then permitted on the bus write cycle. The unlock token is consumed after one use and must
 *    be written again for each subsequent protected write. Writes to EDU registers without a
 *    preceding valid unlock cause an APB slave error response. When the token is consumed the register
 *    falls back to the invalid token.
 *  0b11111..Invalid address. Protected registers are locked. Writing to a write protected register will cause an APB error.
 */
#define NSS_EDU_UNLOCK_ADDR(x)                   (((uint32_t)(((uint32_t)(x)) << NSS_EDU_UNLOCK_ADDR_SHIFT)) & NSS_EDU_UNLOCK_ADDR_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group NSS_EDU_Register_Masks */


/*!
 * @}
 */ /* end of group NSS_EDU_Peripheral_Access_Layer */


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


#endif  /* PERI_NSS_EDU_H_ */

