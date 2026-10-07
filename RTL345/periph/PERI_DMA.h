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
**         CMSIS Peripheral Access Layer for DMA
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
 * @file PERI_DMA.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for DMA
 *
 * CMSIS Peripheral Access Layer for DMA
 */

#if !defined(PERI_DMA_H_)
#define PERI_DMA_H_                              /**< Symbol preventing repeated inclusion */

#if (defined(CPU_IMXRTL3459AAAFAWAR_cm55_core0) || defined(CPU_IMXRTL3459AAAFBWAR_cm55_core0))
#include "IMXRTL3459AAA_cm55_core0_COMMON.h"
#elif (defined(CPU_IMXRTL3459AAAFAWAR_cm55_core1) || defined(CPU_IMXRTL3459AAAFBWAR_cm55_core1))
#include "IMXRTL3459AAA_cm55_core1_COMMON.h"
#else
  #error "No valid CPU defined!"
#endif

/* ----------------------------------------------------------------------------
   -- Mapping Information
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Mapping_Information Mapping Information
 * @{
 */

/** Mapping Information */
#if !defined(DMA_REQUEST_SOURCE_T_)
#define DMA_REQUEST_SOURCE_T_
/*!
 * @addtogroup dma_request
 * @{
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*!
 * @brief Structure for the DMA hardware request
 *
 * Defines the structure for the DMA hardware request collections. The user can configure the
 * hardware request to trigger the DMA transfer accordingly. The index
 * of the hardware request varies according  to the to SoC.
 */
typedef enum _dma_request_source
{
    kDma0RequestFlexcomm0Rx         = 0U,          /**< Flexcomm0 RX request */
    kDma1RequestFlexcomm0Rx         = 0U,          /**< Flexcomm0 RX request */
    kDma0RequestFlexcomm0Tx         = 1U,          /**< Flexcomm0 TX request */
    kDma1RequestFlexcomm0Tx         = 1U,          /**< Flexcomm0 TX request */
    kDma0RequestFlexcomm1Rx         = 2U,          /**< Flexcomm1 RX request */
    kDma1RequestFlexcomm1Rx         = 2U,          /**< Flexcomm1 RX request */
    kDma0RequestFlexcomm1Tx         = 3U,          /**< Flexcomm1 TX request */
    kDma1RequestFlexcomm1Tx         = 3U,          /**< Flexcomm1 TX request */
    kDma0RequestFlexcomm2Rx         = 4U,          /**< Flexcomm2 RX request */
    kDma1RequestXSPI0_Rx            = 4U,          /**< XSPI0 RX request */
    kDma0RequestFlexcomm2Tx         = 5U,          /**< Flexcomm2 TX request */
    kDma1RequestXSPI0_Tx            = 5U,          /**< XSPI0 TX request */
    kDma0RequestFlexcomm3Rx         = 6U,          /**< Flexcomm3 RX request */
    kDma1RequestI3C0Tx              = 6U,          /**< I3C0 TX request */
    kDma0RequestFlexcomm3Tx         = 7U,          /**< Flexcomm3 TX request */
    kDma1RequestI3C0Rx              = 7U,          /**< I3C0 RX request */
    kDma0RequestFlexcomm4Rx         = 8U,          /**< Flexcomm4 RX request */
    kDma1RequestSGIRx               = 8U,          /**< SGI RX request */
    kDma0RequestFlexcomm4Tx         = 9U,          /**< Flexcomm4 TX request */
    kDma1RequestSGITx               = 9U,          /**< SGI TX request */
    kDma0RequestFlexcomm5Rx         = 10U,         /**< Flexcomm5 RX request */
    kDma1RequestMemToMemTrnsCh10    = 10U,         /**< Free for mem to mem transfers channel 10 request */
    kDma0RequestFlexcomm5Tx         = 11U,         /**< Flexcomm5 TX request */
    kDma1RequestMemToMemTrnsCh11    = 11U,         /**< Free for mem to mem transfers channel 11 request */
    kDma0RequestXSPI0_Rx            = 12U,         /**< XSPI0 RX request */
    kDma0RequestXSPI0_Tx            = 13U,         /**< XSPI0 TX request */
    kDma0RequestI3C0Tx              = 14U,         /**< I3C0 TX request */
    kDma0RequestI3C0Rx              = 15U,         /**< I3C0 RX request */
    kDma0RequestSGIRx               = 16U,         /**< SGI RX request */
    kDma0RequestSGITx               = 17U,         /**< SGI TX request */
    kDma0RequestExt0                = 18U,         /**< DMA0 external request 0 */
    kDma0RequestExt1                = 19U,         /**< DMA0 external request 1 */
    kDma0RequestExt2                = 20U,         /**< DMA0 external request 2 */
    kDma0RequestMemToMemTrnsCh21    = 21U,         /**< Free for mem to mem transfers channel 21 request */
    kDma0RequestMemToMemTrnsCh22    = 22U,         /**< Free for mem to mem transfers channel 22 request */
    kDma0RequestMemToMemTrnsCh23    = 23U,         /**< Free for mem to mem transfers channel 23 request */
} dma_request_source_t;

/* @} */
#endif /* DMA_REQUEST_SOURCE_T_ */


/*!
 * @}
 */ /* end of group Mapping_Information */


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
   -- DMA Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DMA_Peripheral_Access_Layer DMA Peripheral Access Layer
 * @{
 */

/** DMA - Size of Registers Arrays */
#define DMA_COMMON_COUNT                          1u
#define DMA_CHANNEL_COUNT                         24u

/** DMA - Register Layout Typedef */
typedef struct {
  __IO uint32_t CTRL;                              /**< DMA control, offset: 0x0 */
  __I  uint32_t INTSTAT;                           /**< Interrupt status, offset: 0x4 */
  __IO uint32_t SRAMBASE;                          /**< SRAM address of the channel configuration table, offset: 0x8 */
       uint8_t RESERVED_0[20];
  struct {                                         /* offset: 0x20, array step: 0x5C */
    __IO uint32_t ENABLESET;                         /**< Channel Enable read and set for all DMA channels, array offset: 0x20, array step: 0x5C */
         uint8_t RESERVED_0[4];
    __IO uint32_t ENABLECLR;                         /**< Channel Enable Clear for all DMA channels, array offset: 0x28, array step: 0x5C */
         uint8_t RESERVED_1[4];
    __I  uint32_t ACTIVE;                            /**< Channel Active status for all DMA channels, array offset: 0x30, array step: 0x5C */
         uint8_t RESERVED_2[4];
    __I  uint32_t BUSY;                              /**< Channel Busy status for all DMA channels, array offset: 0x38, array step: 0x5C */
         uint8_t RESERVED_3[4];
    __IO uint32_t ERRINT;                            /**< Error Interrupt status for all DMA channels, array offset: 0x40, array step: 0x5C */
         uint8_t RESERVED_4[4];
    __IO uint32_t INTENSET;                          /**< Interrupt Enable read and Set for all DMA channels, array offset: 0x48, array step: 0x5C */
         uint8_t RESERVED_5[4];
    __O  uint32_t INTENCLR;                          /**< Interrupt Enable Clear for all DMA channels, array offset: 0x50, array step: 0x5C */
         uint8_t RESERVED_6[4];
    __IO uint32_t INTA;                              /**< Interrupt A status for all DMA channels, array offset: 0x58, array step: 0x5C */
         uint8_t RESERVED_7[4];
    __IO uint32_t INTB;                              /**< Interrupt B status for all DMA channels, array offset: 0x60, array step: 0x5C */
         uint8_t RESERVED_8[4];
    __O  uint32_t SETVALID;                          /**< Set ValidPending control bits for all DMA channels, array offset: 0x68, array step: 0x5C */
         uint8_t RESERVED_9[4];
    __O  uint32_t SETTRIG;                           /**< Set Trigger control bits for all DMA channels, array offset: 0x70, array step: 0x5C */
         uint8_t RESERVED_10[4];
    __O  uint32_t ABORT;                             /**< Channel Abort control for all DMA channels, array offset: 0x78, array step: 0x5C */
  } COMMON[DMA_COMMON_COUNT];
       uint8_t RESERVED_1[900];
  struct {                                         /* offset: 0x400, array step: 0x10 */
    __IO uint32_t CFG;                               /**< Configuration register for DMA channel, array offset: 0x400, array step: 0x10, irregular array, not all indices are valid */
    __I  uint32_t CTLSTAT;                           /**< Control and status register for DMA channel, array offset: 0x404, array step: 0x10, irregular array, not all indices are valid */
    __IO uint32_t XFERCFG;                           /**< Transfer configuration register for DMA channel, array offset: 0x408, array step: 0x10, irregular array, not all indices are valid */
         uint8_t RESERVED_0[4];
  } CHANNEL[DMA_CHANNEL_COUNT];
} DMA_Type;

/* ----------------------------------------------------------------------------
   -- DMA Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DMA_Register_Masks DMA Register Masks
 * @{
 */

/*! @name CTRL - DMA control */
/*! @{ */

#define DMA_CTRL_ENABLE_MASK                     (0x1U)
#define DMA_CTRL_ENABLE_SHIFT                    (0U)
/*! ENABLE - DMA controller master enable.
 *  0b0..DMA controller is disabled.
 *  0b1..Enabled.
 */
#define DMA_CTRL_ENABLE(x)                       (((uint32_t)(((uint32_t)(x)) << DMA_CTRL_ENABLE_SHIFT)) & DMA_CTRL_ENABLE_MASK)
/*! @} */

/*! @name INTSTAT - Interrupt status */
/*! @{ */

#define DMA_INTSTAT_ACTIVEINT_MASK               (0x2U)
#define DMA_INTSTAT_ACTIVEINT_SHIFT              (1U)
/*! ACTIVEINT - Summarizes whether any enabled interrupts (other than error interrupts) are pending.
 *  0b0..No enabled interrupts are pending.
 *  0b1..At least one enabled interrupt is pending.
 */
#define DMA_INTSTAT_ACTIVEINT(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_INTSTAT_ACTIVEINT_SHIFT)) & DMA_INTSTAT_ACTIVEINT_MASK)

#define DMA_INTSTAT_ACTIVEERRINT_MASK            (0x4U)
#define DMA_INTSTAT_ACTIVEERRINT_SHIFT           (2U)
/*! ACTIVEERRINT - Summarizes whether any error interrupts are pending.
 *  0b0..No error interrupts are pending.
 *  0b1..At least one error interrupt is pending.
 */
#define DMA_INTSTAT_ACTIVEERRINT(x)              (((uint32_t)(((uint32_t)(x)) << DMA_INTSTAT_ACTIVEERRINT_SHIFT)) & DMA_INTSTAT_ACTIVEERRINT_MASK)
/*! @} */

/*! @name SRAMBASE - SRAM address of the channel configuration table */
/*! @{ */

#define DMA_SRAMBASE_OFFSET_MASK                 (0xFFFFFE00U)
#define DMA_SRAMBASE_OFFSET_SHIFT                (9U)
/*! OFFSET - Offset */
#define DMA_SRAMBASE_OFFSET(x)                   (((uint32_t)(((uint32_t)(x)) << DMA_SRAMBASE_OFFSET_SHIFT)) & DMA_SRAMBASE_OFFSET_MASK)
/*! @} */

/*! @name COMMON_ENABLESET - Channel Enable read and set for all DMA channels */
/*! @{ */

#define DMA_COMMON_ENABLESET_ENABLE0_MASK        (0x1U)
#define DMA_COMMON_ENABLESET_ENABLE0_SHIFT       (0U)
/*! ENABLE0 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE0(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE0_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE0_MASK)

#define DMA_COMMON_ENABLESET_ENABLE1_MASK        (0x2U)
#define DMA_COMMON_ENABLESET_ENABLE1_SHIFT       (1U)
/*! ENABLE1 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE1(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE1_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE1_MASK)

#define DMA_COMMON_ENABLESET_ENABLE2_MASK        (0x4U)
#define DMA_COMMON_ENABLESET_ENABLE2_SHIFT       (2U)
/*! ENABLE2 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE2(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE2_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE2_MASK)

#define DMA_COMMON_ENABLESET_ENABLE3_MASK        (0x8U)
#define DMA_COMMON_ENABLESET_ENABLE3_SHIFT       (3U)
/*! ENABLE3 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE3(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE3_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE3_MASK)

#define DMA_COMMON_ENABLESET_ENABLE4_MASK        (0x10U)
#define DMA_COMMON_ENABLESET_ENABLE4_SHIFT       (4U)
/*! ENABLE4 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE4(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE4_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE4_MASK)

#define DMA_COMMON_ENABLESET_ENABLE5_MASK        (0x20U)
#define DMA_COMMON_ENABLESET_ENABLE5_SHIFT       (5U)
/*! ENABLE5 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE5(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE5_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE5_MASK)

#define DMA_COMMON_ENABLESET_ENABLE6_MASK        (0x40U)
#define DMA_COMMON_ENABLESET_ENABLE6_SHIFT       (6U)
/*! ENABLE6 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE6(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE6_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE6_MASK)

#define DMA_COMMON_ENABLESET_ENABLE7_MASK        (0x80U)
#define DMA_COMMON_ENABLESET_ENABLE7_SHIFT       (7U)
/*! ENABLE7 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE7(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE7_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE7_MASK)

#define DMA_COMMON_ENABLESET_ENABLE8_MASK        (0x100U)
#define DMA_COMMON_ENABLESET_ENABLE8_SHIFT       (8U)
/*! ENABLE8 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE8(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE8_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE8_MASK)

#define DMA_COMMON_ENABLESET_ENABLE9_MASK        (0x200U)
#define DMA_COMMON_ENABLESET_ENABLE9_SHIFT       (9U)
/*! ENABLE9 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE9(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE9_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE9_MASK)

#define DMA_COMMON_ENABLESET_ENABLE10_MASK       (0x400U)
#define DMA_COMMON_ENABLESET_ENABLE10_SHIFT      (10U)
/*! ENABLE10 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE10(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE10_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE10_MASK)

#define DMA_COMMON_ENABLESET_ENABLE11_MASK       (0x800U)
#define DMA_COMMON_ENABLESET_ENABLE11_SHIFT      (11U)
/*! ENABLE11 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE11(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE11_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE11_MASK)

#define DMA_COMMON_ENABLESET_ENABLE12_MASK       (0x1000U)
#define DMA_COMMON_ENABLESET_ENABLE12_SHIFT      (12U)
/*! ENABLE12 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE12(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE12_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE12_MASK)

#define DMA_COMMON_ENABLESET_ENABLE13_MASK       (0x2000U)
#define DMA_COMMON_ENABLESET_ENABLE13_SHIFT      (13U)
/*! ENABLE13 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE13(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE13_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE13_MASK)

#define DMA_COMMON_ENABLESET_ENABLE14_MASK       (0x4000U)
#define DMA_COMMON_ENABLESET_ENABLE14_SHIFT      (14U)
/*! ENABLE14 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE14(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE14_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE14_MASK)

#define DMA_COMMON_ENABLESET_ENABLE15_MASK       (0x8000U)
#define DMA_COMMON_ENABLESET_ENABLE15_SHIFT      (15U)
/*! ENABLE15 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE15(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE15_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE15_MASK)

#define DMA_COMMON_ENABLESET_ENABLE16_MASK       (0x10000U)
#define DMA_COMMON_ENABLESET_ENABLE16_SHIFT      (16U)
/*! ENABLE16 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE16(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE16_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE16_MASK)

#define DMA_COMMON_ENABLESET_ENABLE17_MASK       (0x20000U)
#define DMA_COMMON_ENABLESET_ENABLE17_SHIFT      (17U)
/*! ENABLE17 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE17(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE17_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE17_MASK)

#define DMA_COMMON_ENABLESET_ENABLE18_MASK       (0x40000U)
#define DMA_COMMON_ENABLESET_ENABLE18_SHIFT      (18U)
/*! ENABLE18 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE18(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE18_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE18_MASK)

#define DMA_COMMON_ENABLESET_ENABLE19_MASK       (0x80000U)
#define DMA_COMMON_ENABLESET_ENABLE19_SHIFT      (19U)
/*! ENABLE19 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE19(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE19_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE19_MASK)

#define DMA_COMMON_ENABLESET_ENABLE20_MASK       (0x100000U)
#define DMA_COMMON_ENABLESET_ENABLE20_SHIFT      (20U)
/*! ENABLE20 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE20(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE20_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE20_MASK)

#define DMA_COMMON_ENABLESET_ENABLE21_MASK       (0x200000U)
#define DMA_COMMON_ENABLESET_ENABLE21_SHIFT      (21U)
/*! ENABLE21 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE21(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE21_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE21_MASK)

#define DMA_COMMON_ENABLESET_ENABLE22_MASK       (0x400000U)
#define DMA_COMMON_ENABLESET_ENABLE22_SHIFT      (22U)
/*! ENABLE22 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE22(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE22_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE22_MASK)

#define DMA_COMMON_ENABLESET_ENABLE23_MASK       (0x800000U)
#define DMA_COMMON_ENABLESET_ENABLE23_SHIFT      (23U)
/*! ENABLE23 - Enable for DMA channel
 *  0b0..DMA channel is disabled.
 *  0b1..DMA channel is enabled.
 */
#define DMA_COMMON_ENABLESET_ENABLE23(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENABLE23_SHIFT)) & DMA_COMMON_ENABLESET_ENABLE23_MASK)
/*! @} */

/* The count of DMA_COMMON_ENABLESET */
#define DMA_COMMON_ENABLESET_COUNT               (1U)

/*! @name COMMON_ENABLECLR - Channel Enable Clear for all DMA channels */
/*! @{ */

#define DMA_COMMON_ENABLECLR_CLR0_MASK           (0x1U)
#define DMA_COMMON_ENABLECLR_CLR0_SHIFT          (0U)
/*! CLR0 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR0(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR0_SHIFT)) & DMA_COMMON_ENABLECLR_CLR0_MASK)

#define DMA_COMMON_ENABLECLR_CLR1_MASK           (0x2U)
#define DMA_COMMON_ENABLECLR_CLR1_SHIFT          (1U)
/*! CLR1 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR1(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR1_SHIFT)) & DMA_COMMON_ENABLECLR_CLR1_MASK)

#define DMA_COMMON_ENABLECLR_CLR2_MASK           (0x4U)
#define DMA_COMMON_ENABLECLR_CLR2_SHIFT          (2U)
/*! CLR2 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR2(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR2_SHIFT)) & DMA_COMMON_ENABLECLR_CLR2_MASK)

#define DMA_COMMON_ENABLECLR_CLR3_MASK           (0x8U)
#define DMA_COMMON_ENABLECLR_CLR3_SHIFT          (3U)
/*! CLR3 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR3(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR3_SHIFT)) & DMA_COMMON_ENABLECLR_CLR3_MASK)

#define DMA_COMMON_ENABLECLR_CLR4_MASK           (0x10U)
#define DMA_COMMON_ENABLECLR_CLR4_SHIFT          (4U)
/*! CLR4 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR4(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR4_SHIFT)) & DMA_COMMON_ENABLECLR_CLR4_MASK)

#define DMA_COMMON_ENABLECLR_CLR5_MASK           (0x20U)
#define DMA_COMMON_ENABLECLR_CLR5_SHIFT          (5U)
/*! CLR5 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR5(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR5_SHIFT)) & DMA_COMMON_ENABLECLR_CLR5_MASK)

#define DMA_COMMON_ENABLECLR_CLR6_MASK           (0x40U)
#define DMA_COMMON_ENABLECLR_CLR6_SHIFT          (6U)
/*! CLR6 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR6(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR6_SHIFT)) & DMA_COMMON_ENABLECLR_CLR6_MASK)

#define DMA_COMMON_ENABLECLR_CLR7_MASK           (0x80U)
#define DMA_COMMON_ENABLECLR_CLR7_SHIFT          (7U)
/*! CLR7 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR7(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR7_SHIFT)) & DMA_COMMON_ENABLECLR_CLR7_MASK)

#define DMA_COMMON_ENABLECLR_CLR8_MASK           (0x100U)
#define DMA_COMMON_ENABLECLR_CLR8_SHIFT          (8U)
/*! CLR8 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR8(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR8_SHIFT)) & DMA_COMMON_ENABLECLR_CLR8_MASK)

#define DMA_COMMON_ENABLECLR_CLR9_MASK           (0x200U)
#define DMA_COMMON_ENABLECLR_CLR9_SHIFT          (9U)
/*! CLR9 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR9(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR9_SHIFT)) & DMA_COMMON_ENABLECLR_CLR9_MASK)

#define DMA_COMMON_ENABLECLR_CLR10_MASK          (0x400U)
#define DMA_COMMON_ENABLECLR_CLR10_SHIFT         (10U)
/*! CLR10 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR10(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR10_SHIFT)) & DMA_COMMON_ENABLECLR_CLR10_MASK)

#define DMA_COMMON_ENABLECLR_CLR11_MASK          (0x800U)
#define DMA_COMMON_ENABLECLR_CLR11_SHIFT         (11U)
/*! CLR11 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR11(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR11_SHIFT)) & DMA_COMMON_ENABLECLR_CLR11_MASK)

#define DMA_COMMON_ENABLECLR_CLR12_MASK          (0x1000U)
#define DMA_COMMON_ENABLECLR_CLR12_SHIFT         (12U)
/*! CLR12 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR12(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR12_SHIFT)) & DMA_COMMON_ENABLECLR_CLR12_MASK)

#define DMA_COMMON_ENABLECLR_CLR13_MASK          (0x2000U)
#define DMA_COMMON_ENABLECLR_CLR13_SHIFT         (13U)
/*! CLR13 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR13(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR13_SHIFT)) & DMA_COMMON_ENABLECLR_CLR13_MASK)

#define DMA_COMMON_ENABLECLR_CLR14_MASK          (0x4000U)
#define DMA_COMMON_ENABLECLR_CLR14_SHIFT         (14U)
/*! CLR14 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR14(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR14_SHIFT)) & DMA_COMMON_ENABLECLR_CLR14_MASK)

#define DMA_COMMON_ENABLECLR_CLR15_MASK          (0x8000U)
#define DMA_COMMON_ENABLECLR_CLR15_SHIFT         (15U)
/*! CLR15 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR15(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR15_SHIFT)) & DMA_COMMON_ENABLECLR_CLR15_MASK)

#define DMA_COMMON_ENABLECLR_CLR16_MASK          (0x10000U)
#define DMA_COMMON_ENABLECLR_CLR16_SHIFT         (16U)
/*! CLR16 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR16(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR16_SHIFT)) & DMA_COMMON_ENABLECLR_CLR16_MASK)

#define DMA_COMMON_ENABLECLR_CLR17_MASK          (0x20000U)
#define DMA_COMMON_ENABLECLR_CLR17_SHIFT         (17U)
/*! CLR17 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR17(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR17_SHIFT)) & DMA_COMMON_ENABLECLR_CLR17_MASK)

#define DMA_COMMON_ENABLECLR_CLR18_MASK          (0x40000U)
#define DMA_COMMON_ENABLECLR_CLR18_SHIFT         (18U)
/*! CLR18 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR18(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR18_SHIFT)) & DMA_COMMON_ENABLECLR_CLR18_MASK)

#define DMA_COMMON_ENABLECLR_CLR19_MASK          (0x80000U)
#define DMA_COMMON_ENABLECLR_CLR19_SHIFT         (19U)
/*! CLR19 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR19(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR19_SHIFT)) & DMA_COMMON_ENABLECLR_CLR19_MASK)

#define DMA_COMMON_ENABLECLR_CLR20_MASK          (0x100000U)
#define DMA_COMMON_ENABLECLR_CLR20_SHIFT         (20U)
/*! CLR20 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR20(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR20_SHIFT)) & DMA_COMMON_ENABLECLR_CLR20_MASK)

#define DMA_COMMON_ENABLECLR_CLR21_MASK          (0x200000U)
#define DMA_COMMON_ENABLECLR_CLR21_SHIFT         (21U)
/*! CLR21 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR21(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR21_SHIFT)) & DMA_COMMON_ENABLECLR_CLR21_MASK)

#define DMA_COMMON_ENABLECLR_CLR22_MASK          (0x400000U)
#define DMA_COMMON_ENABLECLR_CLR22_SHIFT         (22U)
/*! CLR22 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR22(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR22_SHIFT)) & DMA_COMMON_ENABLECLR_CLR22_MASK)

#define DMA_COMMON_ENABLECLR_CLR23_MASK          (0x800000U)
#define DMA_COMMON_ENABLECLR_CLR23_SHIFT         (23U)
/*! CLR23 - Writing ones to this register clears the corresponding bits in ENABLESET0.
 *  0b0..No effect.
 *  0b1..DMA channel is cleared.
 */
#define DMA_COMMON_ENABLECLR_CLR23(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR23_SHIFT)) & DMA_COMMON_ENABLECLR_CLR23_MASK)
/*! @} */

/* The count of DMA_COMMON_ENABLECLR */
#define DMA_COMMON_ENABLECLR_COUNT               (1U)

/*! @name COMMON_ACTIVE - Channel Active status for all DMA channels */
/*! @{ */

#define DMA_COMMON_ACTIVE_ACTIVE0_MASK           (0x1U)
#define DMA_COMMON_ACTIVE_ACTIVE0_SHIFT          (0U)
/*! ACTIVE0 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE0(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE0_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE0_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE1_MASK           (0x2U)
#define DMA_COMMON_ACTIVE_ACTIVE1_SHIFT          (1U)
/*! ACTIVE1 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE1(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE1_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE1_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE2_MASK           (0x4U)
#define DMA_COMMON_ACTIVE_ACTIVE2_SHIFT          (2U)
/*! ACTIVE2 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE2(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE2_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE2_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE3_MASK           (0x8U)
#define DMA_COMMON_ACTIVE_ACTIVE3_SHIFT          (3U)
/*! ACTIVE3 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE3(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE3_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE3_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE4_MASK           (0x10U)
#define DMA_COMMON_ACTIVE_ACTIVE4_SHIFT          (4U)
/*! ACTIVE4 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE4(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE4_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE4_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE5_MASK           (0x20U)
#define DMA_COMMON_ACTIVE_ACTIVE5_SHIFT          (5U)
/*! ACTIVE5 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE5(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE5_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE5_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE6_MASK           (0x40U)
#define DMA_COMMON_ACTIVE_ACTIVE6_SHIFT          (6U)
/*! ACTIVE6 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE6(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE6_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE6_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE7_MASK           (0x80U)
#define DMA_COMMON_ACTIVE_ACTIVE7_SHIFT          (7U)
/*! ACTIVE7 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE7(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE7_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE7_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE8_MASK           (0x100U)
#define DMA_COMMON_ACTIVE_ACTIVE8_SHIFT          (8U)
/*! ACTIVE8 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE8(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE8_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE8_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE9_MASK           (0x200U)
#define DMA_COMMON_ACTIVE_ACTIVE9_SHIFT          (9U)
/*! ACTIVE9 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE9(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE9_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE9_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE10_MASK          (0x400U)
#define DMA_COMMON_ACTIVE_ACTIVE10_SHIFT         (10U)
/*! ACTIVE10 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE10(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE10_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE10_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE11_MASK          (0x800U)
#define DMA_COMMON_ACTIVE_ACTIVE11_SHIFT         (11U)
/*! ACTIVE11 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE11(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE11_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE11_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE12_MASK          (0x1000U)
#define DMA_COMMON_ACTIVE_ACTIVE12_SHIFT         (12U)
/*! ACTIVE12 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE12(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE12_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE12_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE13_MASK          (0x2000U)
#define DMA_COMMON_ACTIVE_ACTIVE13_SHIFT         (13U)
/*! ACTIVE13 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE13(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE13_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE13_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE14_MASK          (0x4000U)
#define DMA_COMMON_ACTIVE_ACTIVE14_SHIFT         (14U)
/*! ACTIVE14 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE14(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE14_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE14_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE15_MASK          (0x8000U)
#define DMA_COMMON_ACTIVE_ACTIVE15_SHIFT         (15U)
/*! ACTIVE15 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE15(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE15_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE15_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE16_MASK          (0x10000U)
#define DMA_COMMON_ACTIVE_ACTIVE16_SHIFT         (16U)
/*! ACTIVE16 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE16(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE16_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE16_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE17_MASK          (0x20000U)
#define DMA_COMMON_ACTIVE_ACTIVE17_SHIFT         (17U)
/*! ACTIVE17 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE17(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE17_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE17_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE18_MASK          (0x40000U)
#define DMA_COMMON_ACTIVE_ACTIVE18_SHIFT         (18U)
/*! ACTIVE18 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE18(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE18_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE18_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE19_MASK          (0x80000U)
#define DMA_COMMON_ACTIVE_ACTIVE19_SHIFT         (19U)
/*! ACTIVE19 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE19(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE19_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE19_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE20_MASK          (0x100000U)
#define DMA_COMMON_ACTIVE_ACTIVE20_SHIFT         (20U)
/*! ACTIVE20 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE20(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE20_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE20_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE21_MASK          (0x200000U)
#define DMA_COMMON_ACTIVE_ACTIVE21_SHIFT         (21U)
/*! ACTIVE21 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE21(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE21_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE21_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE22_MASK          (0x400000U)
#define DMA_COMMON_ACTIVE_ACTIVE22_SHIFT         (22U)
/*! ACTIVE22 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE22(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE22_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE22_MASK)

#define DMA_COMMON_ACTIVE_ACTIVE23_MASK          (0x800000U)
#define DMA_COMMON_ACTIVE_ACTIVE23_SHIFT         (23U)
/*! ACTIVE23 - Active flag for DMA channel.
 *  0b0..DMA channel is not active.
 *  0b1..DMA channel is active.
 */
#define DMA_COMMON_ACTIVE_ACTIVE23(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACTIVE23_SHIFT)) & DMA_COMMON_ACTIVE_ACTIVE23_MASK)
/*! @} */

/* The count of DMA_COMMON_ACTIVE */
#define DMA_COMMON_ACTIVE_COUNT                  (1U)

/*! @name COMMON_BUSY - Channel Busy status for all DMA channels */
/*! @{ */

#define DMA_COMMON_BUSY_BUSY0_MASK               (0x1U)
#define DMA_COMMON_BUSY_BUSY0_SHIFT              (0U)
/*! BUSY0 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY0(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY0_SHIFT)) & DMA_COMMON_BUSY_BUSY0_MASK)

#define DMA_COMMON_BUSY_BUSY1_MASK               (0x2U)
#define DMA_COMMON_BUSY_BUSY1_SHIFT              (1U)
/*! BUSY1 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY1(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY1_SHIFT)) & DMA_COMMON_BUSY_BUSY1_MASK)

#define DMA_COMMON_BUSY_BUSY2_MASK               (0x4U)
#define DMA_COMMON_BUSY_BUSY2_SHIFT              (2U)
/*! BUSY2 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY2(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY2_SHIFT)) & DMA_COMMON_BUSY_BUSY2_MASK)

#define DMA_COMMON_BUSY_BUSY3_MASK               (0x8U)
#define DMA_COMMON_BUSY_BUSY3_SHIFT              (3U)
/*! BUSY3 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY3(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY3_SHIFT)) & DMA_COMMON_BUSY_BUSY3_MASK)

#define DMA_COMMON_BUSY_BUSY4_MASK               (0x10U)
#define DMA_COMMON_BUSY_BUSY4_SHIFT              (4U)
/*! BUSY4 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY4(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY4_SHIFT)) & DMA_COMMON_BUSY_BUSY4_MASK)

#define DMA_COMMON_BUSY_BUSY5_MASK               (0x20U)
#define DMA_COMMON_BUSY_BUSY5_SHIFT              (5U)
/*! BUSY5 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY5(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY5_SHIFT)) & DMA_COMMON_BUSY_BUSY5_MASK)

#define DMA_COMMON_BUSY_BUSY6_MASK               (0x40U)
#define DMA_COMMON_BUSY_BUSY6_SHIFT              (6U)
/*! BUSY6 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY6(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY6_SHIFT)) & DMA_COMMON_BUSY_BUSY6_MASK)

#define DMA_COMMON_BUSY_BUSY7_MASK               (0x80U)
#define DMA_COMMON_BUSY_BUSY7_SHIFT              (7U)
/*! BUSY7 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY7(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY7_SHIFT)) & DMA_COMMON_BUSY_BUSY7_MASK)

#define DMA_COMMON_BUSY_BUSY8_MASK               (0x100U)
#define DMA_COMMON_BUSY_BUSY8_SHIFT              (8U)
/*! BUSY8 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY8(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY8_SHIFT)) & DMA_COMMON_BUSY_BUSY8_MASK)

#define DMA_COMMON_BUSY_BUSY9_MASK               (0x200U)
#define DMA_COMMON_BUSY_BUSY9_SHIFT              (9U)
/*! BUSY9 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY9(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY9_SHIFT)) & DMA_COMMON_BUSY_BUSY9_MASK)

#define DMA_COMMON_BUSY_BUSY10_MASK              (0x400U)
#define DMA_COMMON_BUSY_BUSY10_SHIFT             (10U)
/*! BUSY10 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY10(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY10_SHIFT)) & DMA_COMMON_BUSY_BUSY10_MASK)

#define DMA_COMMON_BUSY_BUSY11_MASK              (0x800U)
#define DMA_COMMON_BUSY_BUSY11_SHIFT             (11U)
/*! BUSY11 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY11(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY11_SHIFT)) & DMA_COMMON_BUSY_BUSY11_MASK)

#define DMA_COMMON_BUSY_BUSY12_MASK              (0x1000U)
#define DMA_COMMON_BUSY_BUSY12_SHIFT             (12U)
/*! BUSY12 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY12(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY12_SHIFT)) & DMA_COMMON_BUSY_BUSY12_MASK)

#define DMA_COMMON_BUSY_BUSY13_MASK              (0x2000U)
#define DMA_COMMON_BUSY_BUSY13_SHIFT             (13U)
/*! BUSY13 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY13(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY13_SHIFT)) & DMA_COMMON_BUSY_BUSY13_MASK)

#define DMA_COMMON_BUSY_BUSY14_MASK              (0x4000U)
#define DMA_COMMON_BUSY_BUSY14_SHIFT             (14U)
/*! BUSY14 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY14(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY14_SHIFT)) & DMA_COMMON_BUSY_BUSY14_MASK)

#define DMA_COMMON_BUSY_BUSY15_MASK              (0x8000U)
#define DMA_COMMON_BUSY_BUSY15_SHIFT             (15U)
/*! BUSY15 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY15(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY15_SHIFT)) & DMA_COMMON_BUSY_BUSY15_MASK)

#define DMA_COMMON_BUSY_BUSY16_MASK              (0x10000U)
#define DMA_COMMON_BUSY_BUSY16_SHIFT             (16U)
/*! BUSY16 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY16(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY16_SHIFT)) & DMA_COMMON_BUSY_BUSY16_MASK)

#define DMA_COMMON_BUSY_BUSY17_MASK              (0x20000U)
#define DMA_COMMON_BUSY_BUSY17_SHIFT             (17U)
/*! BUSY17 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY17(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY17_SHIFT)) & DMA_COMMON_BUSY_BUSY17_MASK)

#define DMA_COMMON_BUSY_BUSY18_MASK              (0x40000U)
#define DMA_COMMON_BUSY_BUSY18_SHIFT             (18U)
/*! BUSY18 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY18(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY18_SHIFT)) & DMA_COMMON_BUSY_BUSY18_MASK)

#define DMA_COMMON_BUSY_BUSY19_MASK              (0x80000U)
#define DMA_COMMON_BUSY_BUSY19_SHIFT             (19U)
/*! BUSY19 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY19(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY19_SHIFT)) & DMA_COMMON_BUSY_BUSY19_MASK)

#define DMA_COMMON_BUSY_BUSY20_MASK              (0x100000U)
#define DMA_COMMON_BUSY_BUSY20_SHIFT             (20U)
/*! BUSY20 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY20(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY20_SHIFT)) & DMA_COMMON_BUSY_BUSY20_MASK)

#define DMA_COMMON_BUSY_BUSY21_MASK              (0x200000U)
#define DMA_COMMON_BUSY_BUSY21_SHIFT             (21U)
/*! BUSY21 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY21(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY21_SHIFT)) & DMA_COMMON_BUSY_BUSY21_MASK)

#define DMA_COMMON_BUSY_BUSY22_MASK              (0x400000U)
#define DMA_COMMON_BUSY_BUSY22_SHIFT             (22U)
/*! BUSY22 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY22(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY22_SHIFT)) & DMA_COMMON_BUSY_BUSY22_MASK)

#define DMA_COMMON_BUSY_BUSY23_MASK              (0x800000U)
#define DMA_COMMON_BUSY_BUSY23_SHIFT             (23U)
/*! BUSY23 - Busy flag for DMA channel.
 *  0b0..DMA channel is not busy.
 *  0b1..DMA channel is busy.
 */
#define DMA_COMMON_BUSY_BUSY23(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BUSY23_SHIFT)) & DMA_COMMON_BUSY_BUSY23_MASK)
/*! @} */

/* The count of DMA_COMMON_BUSY */
#define DMA_COMMON_BUSY_COUNT                    (1U)

/*! @name COMMON_ERRINT - Error Interrupt status for all DMA channels */
/*! @{ */

#define DMA_COMMON_ERRINT_ERR0_MASK              (0x1U)
#define DMA_COMMON_ERRINT_ERR0_SHIFT             (0U)
/*! ERR0 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR0(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR0_SHIFT)) & DMA_COMMON_ERRINT_ERR0_MASK)

#define DMA_COMMON_ERRINT_ERR1_MASK              (0x2U)
#define DMA_COMMON_ERRINT_ERR1_SHIFT             (1U)
/*! ERR1 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR1(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR1_SHIFT)) & DMA_COMMON_ERRINT_ERR1_MASK)

#define DMA_COMMON_ERRINT_ERR2_MASK              (0x4U)
#define DMA_COMMON_ERRINT_ERR2_SHIFT             (2U)
/*! ERR2 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR2(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR2_SHIFT)) & DMA_COMMON_ERRINT_ERR2_MASK)

#define DMA_COMMON_ERRINT_ERR3_MASK              (0x8U)
#define DMA_COMMON_ERRINT_ERR3_SHIFT             (3U)
/*! ERR3 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR3(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR3_SHIFT)) & DMA_COMMON_ERRINT_ERR3_MASK)

#define DMA_COMMON_ERRINT_ERR4_MASK              (0x10U)
#define DMA_COMMON_ERRINT_ERR4_SHIFT             (4U)
/*! ERR4 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR4(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR4_SHIFT)) & DMA_COMMON_ERRINT_ERR4_MASK)

#define DMA_COMMON_ERRINT_ERR5_MASK              (0x20U)
#define DMA_COMMON_ERRINT_ERR5_SHIFT             (5U)
/*! ERR5 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR5(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR5_SHIFT)) & DMA_COMMON_ERRINT_ERR5_MASK)

#define DMA_COMMON_ERRINT_ERR6_MASK              (0x40U)
#define DMA_COMMON_ERRINT_ERR6_SHIFT             (6U)
/*! ERR6 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR6(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR6_SHIFT)) & DMA_COMMON_ERRINT_ERR6_MASK)

#define DMA_COMMON_ERRINT_ERR7_MASK              (0x80U)
#define DMA_COMMON_ERRINT_ERR7_SHIFT             (7U)
/*! ERR7 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR7(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR7_SHIFT)) & DMA_COMMON_ERRINT_ERR7_MASK)

#define DMA_COMMON_ERRINT_ERR8_MASK              (0x100U)
#define DMA_COMMON_ERRINT_ERR8_SHIFT             (8U)
/*! ERR8 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR8(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR8_SHIFT)) & DMA_COMMON_ERRINT_ERR8_MASK)

#define DMA_COMMON_ERRINT_ERR9_MASK              (0x200U)
#define DMA_COMMON_ERRINT_ERR9_SHIFT             (9U)
/*! ERR9 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR9(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR9_SHIFT)) & DMA_COMMON_ERRINT_ERR9_MASK)

#define DMA_COMMON_ERRINT_ERR10_MASK             (0x400U)
#define DMA_COMMON_ERRINT_ERR10_SHIFT            (10U)
/*! ERR10 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR10(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR10_SHIFT)) & DMA_COMMON_ERRINT_ERR10_MASK)

#define DMA_COMMON_ERRINT_ERR11_MASK             (0x800U)
#define DMA_COMMON_ERRINT_ERR11_SHIFT            (11U)
/*! ERR11 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR11(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR11_SHIFT)) & DMA_COMMON_ERRINT_ERR11_MASK)

#define DMA_COMMON_ERRINT_ERR12_MASK             (0x1000U)
#define DMA_COMMON_ERRINT_ERR12_SHIFT            (12U)
/*! ERR12 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR12(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR12_SHIFT)) & DMA_COMMON_ERRINT_ERR12_MASK)

#define DMA_COMMON_ERRINT_ERR13_MASK             (0x2000U)
#define DMA_COMMON_ERRINT_ERR13_SHIFT            (13U)
/*! ERR13 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR13(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR13_SHIFT)) & DMA_COMMON_ERRINT_ERR13_MASK)

#define DMA_COMMON_ERRINT_ERR14_MASK             (0x4000U)
#define DMA_COMMON_ERRINT_ERR14_SHIFT            (14U)
/*! ERR14 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR14(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR14_SHIFT)) & DMA_COMMON_ERRINT_ERR14_MASK)

#define DMA_COMMON_ERRINT_ERR15_MASK             (0x8000U)
#define DMA_COMMON_ERRINT_ERR15_SHIFT            (15U)
/*! ERR15 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR15(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR15_SHIFT)) & DMA_COMMON_ERRINT_ERR15_MASK)

#define DMA_COMMON_ERRINT_ERR16_MASK             (0x10000U)
#define DMA_COMMON_ERRINT_ERR16_SHIFT            (16U)
/*! ERR16 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR16(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR16_SHIFT)) & DMA_COMMON_ERRINT_ERR16_MASK)

#define DMA_COMMON_ERRINT_ERR17_MASK             (0x20000U)
#define DMA_COMMON_ERRINT_ERR17_SHIFT            (17U)
/*! ERR17 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR17(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR17_SHIFT)) & DMA_COMMON_ERRINT_ERR17_MASK)

#define DMA_COMMON_ERRINT_ERR18_MASK             (0x40000U)
#define DMA_COMMON_ERRINT_ERR18_SHIFT            (18U)
/*! ERR18 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR18(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR18_SHIFT)) & DMA_COMMON_ERRINT_ERR18_MASK)

#define DMA_COMMON_ERRINT_ERR19_MASK             (0x80000U)
#define DMA_COMMON_ERRINT_ERR19_SHIFT            (19U)
/*! ERR19 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR19(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR19_SHIFT)) & DMA_COMMON_ERRINT_ERR19_MASK)

#define DMA_COMMON_ERRINT_ERR20_MASK             (0x100000U)
#define DMA_COMMON_ERRINT_ERR20_SHIFT            (20U)
/*! ERR20 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR20(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR20_SHIFT)) & DMA_COMMON_ERRINT_ERR20_MASK)

#define DMA_COMMON_ERRINT_ERR21_MASK             (0x200000U)
#define DMA_COMMON_ERRINT_ERR21_SHIFT            (21U)
/*! ERR21 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR21(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR21_SHIFT)) & DMA_COMMON_ERRINT_ERR21_MASK)

#define DMA_COMMON_ERRINT_ERR22_MASK             (0x400000U)
#define DMA_COMMON_ERRINT_ERR22_SHIFT            (22U)
/*! ERR22 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR22(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR22_SHIFT)) & DMA_COMMON_ERRINT_ERR22_MASK)

#define DMA_COMMON_ERRINT_ERR23_MASK             (0x800000U)
#define DMA_COMMON_ERRINT_ERR23_SHIFT            (23U)
/*! ERR23 - Error Interrupt flag for DMA channel.
 *  0b0..The Error Interrupt is not active for DMA channel.
 *  0b1..The Error Interrupt is pending for DMA channel.
 */
#define DMA_COMMON_ERRINT_ERR23(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR23_SHIFT)) & DMA_COMMON_ERRINT_ERR23_MASK)
/*! @} */

/* The count of DMA_COMMON_ERRINT */
#define DMA_COMMON_ERRINT_COUNT                  (1U)

/*! @name COMMON_INTENSET - Interrupt Enable read and Set for all DMA channels */
/*! @{ */

#define DMA_COMMON_INTENSET_INTEN0_MASK          (0x1U)
#define DMA_COMMON_INTENSET_INTEN0_SHIFT         (0U)
/*! INTEN0 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN0(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN0_SHIFT)) & DMA_COMMON_INTENSET_INTEN0_MASK)

#define DMA_COMMON_INTENSET_INTEN1_MASK          (0x2U)
#define DMA_COMMON_INTENSET_INTEN1_SHIFT         (1U)
/*! INTEN1 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN1(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN1_SHIFT)) & DMA_COMMON_INTENSET_INTEN1_MASK)

#define DMA_COMMON_INTENSET_INTEN2_MASK          (0x4U)
#define DMA_COMMON_INTENSET_INTEN2_SHIFT         (2U)
/*! INTEN2 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN2(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN2_SHIFT)) & DMA_COMMON_INTENSET_INTEN2_MASK)

#define DMA_COMMON_INTENSET_INTEN3_MASK          (0x8U)
#define DMA_COMMON_INTENSET_INTEN3_SHIFT         (3U)
/*! INTEN3 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN3(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN3_SHIFT)) & DMA_COMMON_INTENSET_INTEN3_MASK)

#define DMA_COMMON_INTENSET_INTEN4_MASK          (0x10U)
#define DMA_COMMON_INTENSET_INTEN4_SHIFT         (4U)
/*! INTEN4 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN4(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN4_SHIFT)) & DMA_COMMON_INTENSET_INTEN4_MASK)

#define DMA_COMMON_INTENSET_INTEN5_MASK          (0x20U)
#define DMA_COMMON_INTENSET_INTEN5_SHIFT         (5U)
/*! INTEN5 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN5(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN5_SHIFT)) & DMA_COMMON_INTENSET_INTEN5_MASK)

#define DMA_COMMON_INTENSET_INTEN6_MASK          (0x40U)
#define DMA_COMMON_INTENSET_INTEN6_SHIFT         (6U)
/*! INTEN6 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN6(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN6_SHIFT)) & DMA_COMMON_INTENSET_INTEN6_MASK)

#define DMA_COMMON_INTENSET_INTEN7_MASK          (0x80U)
#define DMA_COMMON_INTENSET_INTEN7_SHIFT         (7U)
/*! INTEN7 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN7(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN7_SHIFT)) & DMA_COMMON_INTENSET_INTEN7_MASK)

#define DMA_COMMON_INTENSET_INTEN8_MASK          (0x100U)
#define DMA_COMMON_INTENSET_INTEN8_SHIFT         (8U)
/*! INTEN8 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN8(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN8_SHIFT)) & DMA_COMMON_INTENSET_INTEN8_MASK)

#define DMA_COMMON_INTENSET_INTEN9_MASK          (0x200U)
#define DMA_COMMON_INTENSET_INTEN9_SHIFT         (9U)
/*! INTEN9 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN9(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN9_SHIFT)) & DMA_COMMON_INTENSET_INTEN9_MASK)

#define DMA_COMMON_INTENSET_INTEN10_MASK         (0x400U)
#define DMA_COMMON_INTENSET_INTEN10_SHIFT        (10U)
/*! INTEN10 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN10(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN10_SHIFT)) & DMA_COMMON_INTENSET_INTEN10_MASK)

#define DMA_COMMON_INTENSET_INTEN11_MASK         (0x800U)
#define DMA_COMMON_INTENSET_INTEN11_SHIFT        (11U)
/*! INTEN11 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN11(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN11_SHIFT)) & DMA_COMMON_INTENSET_INTEN11_MASK)

#define DMA_COMMON_INTENSET_INTEN12_MASK         (0x1000U)
#define DMA_COMMON_INTENSET_INTEN12_SHIFT        (12U)
/*! INTEN12 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN12(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN12_SHIFT)) & DMA_COMMON_INTENSET_INTEN12_MASK)

#define DMA_COMMON_INTENSET_INTEN13_MASK         (0x2000U)
#define DMA_COMMON_INTENSET_INTEN13_SHIFT        (13U)
/*! INTEN13 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN13(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN13_SHIFT)) & DMA_COMMON_INTENSET_INTEN13_MASK)

#define DMA_COMMON_INTENSET_INTEN14_MASK         (0x4000U)
#define DMA_COMMON_INTENSET_INTEN14_SHIFT        (14U)
/*! INTEN14 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN14(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN14_SHIFT)) & DMA_COMMON_INTENSET_INTEN14_MASK)

#define DMA_COMMON_INTENSET_INTEN15_MASK         (0x8000U)
#define DMA_COMMON_INTENSET_INTEN15_SHIFT        (15U)
/*! INTEN15 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN15(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN15_SHIFT)) & DMA_COMMON_INTENSET_INTEN15_MASK)

#define DMA_COMMON_INTENSET_INTEN16_MASK         (0x10000U)
#define DMA_COMMON_INTENSET_INTEN16_SHIFT        (16U)
/*! INTEN16 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN16(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN16_SHIFT)) & DMA_COMMON_INTENSET_INTEN16_MASK)

#define DMA_COMMON_INTENSET_INTEN17_MASK         (0x20000U)
#define DMA_COMMON_INTENSET_INTEN17_SHIFT        (17U)
/*! INTEN17 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN17(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN17_SHIFT)) & DMA_COMMON_INTENSET_INTEN17_MASK)

#define DMA_COMMON_INTENSET_INTEN18_MASK         (0x40000U)
#define DMA_COMMON_INTENSET_INTEN18_SHIFT        (18U)
/*! INTEN18 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN18(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN18_SHIFT)) & DMA_COMMON_INTENSET_INTEN18_MASK)

#define DMA_COMMON_INTENSET_INTEN19_MASK         (0x80000U)
#define DMA_COMMON_INTENSET_INTEN19_SHIFT        (19U)
/*! INTEN19 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN19(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN19_SHIFT)) & DMA_COMMON_INTENSET_INTEN19_MASK)

#define DMA_COMMON_INTENSET_INTEN20_MASK         (0x100000U)
#define DMA_COMMON_INTENSET_INTEN20_SHIFT        (20U)
/*! INTEN20 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN20(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN20_SHIFT)) & DMA_COMMON_INTENSET_INTEN20_MASK)

#define DMA_COMMON_INTENSET_INTEN21_MASK         (0x200000U)
#define DMA_COMMON_INTENSET_INTEN21_SHIFT        (21U)
/*! INTEN21 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN21(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN21_SHIFT)) & DMA_COMMON_INTENSET_INTEN21_MASK)

#define DMA_COMMON_INTENSET_INTEN22_MASK         (0x400000U)
#define DMA_COMMON_INTENSET_INTEN22_SHIFT        (22U)
/*! INTEN22 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN22(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN22_SHIFT)) & DMA_COMMON_INTENSET_INTEN22_MASK)

#define DMA_COMMON_INTENSET_INTEN23_MASK         (0x800000U)
#define DMA_COMMON_INTENSET_INTEN23_SHIFT        (23U)
/*! INTEN23 - Interrupt Enable read and set for DMA channel.
 *  0b0..The Interrupt for DMA channel is disabled.
 *  0b1..The Interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN23(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN23_SHIFT)) & DMA_COMMON_INTENSET_INTEN23_MASK)
/*! @} */

/* The count of DMA_COMMON_INTENSET */
#define DMA_COMMON_INTENSET_COUNT                (1U)

/*! @name COMMON_INTENCLR - Interrupt Enable Clear for all DMA channels */
/*! @{ */

#define DMA_COMMON_INTENCLR_CLR0_MASK            (0x1U)
#define DMA_COMMON_INTENCLR_CLR0_SHIFT           (0U)
/*! CLR0 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR0(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR0_SHIFT)) & DMA_COMMON_INTENCLR_CLR0_MASK)

#define DMA_COMMON_INTENCLR_CLR1_MASK            (0x2U)
#define DMA_COMMON_INTENCLR_CLR1_SHIFT           (1U)
/*! CLR1 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR1(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR1_SHIFT)) & DMA_COMMON_INTENCLR_CLR1_MASK)

#define DMA_COMMON_INTENCLR_CLR2_MASK            (0x4U)
#define DMA_COMMON_INTENCLR_CLR2_SHIFT           (2U)
/*! CLR2 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR2(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR2_SHIFT)) & DMA_COMMON_INTENCLR_CLR2_MASK)

#define DMA_COMMON_INTENCLR_CLR3_MASK            (0x8U)
#define DMA_COMMON_INTENCLR_CLR3_SHIFT           (3U)
/*! CLR3 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR3(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR3_SHIFT)) & DMA_COMMON_INTENCLR_CLR3_MASK)

#define DMA_COMMON_INTENCLR_CLR4_MASK            (0x10U)
#define DMA_COMMON_INTENCLR_CLR4_SHIFT           (4U)
/*! CLR4 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR4(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR4_SHIFT)) & DMA_COMMON_INTENCLR_CLR4_MASK)

#define DMA_COMMON_INTENCLR_CLR5_MASK            (0x20U)
#define DMA_COMMON_INTENCLR_CLR5_SHIFT           (5U)
/*! CLR5 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR5(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR5_SHIFT)) & DMA_COMMON_INTENCLR_CLR5_MASK)

#define DMA_COMMON_INTENCLR_CLR6_MASK            (0x40U)
#define DMA_COMMON_INTENCLR_CLR6_SHIFT           (6U)
/*! CLR6 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR6(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR6_SHIFT)) & DMA_COMMON_INTENCLR_CLR6_MASK)

#define DMA_COMMON_INTENCLR_CLR7_MASK            (0x80U)
#define DMA_COMMON_INTENCLR_CLR7_SHIFT           (7U)
/*! CLR7 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR7(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR7_SHIFT)) & DMA_COMMON_INTENCLR_CLR7_MASK)

#define DMA_COMMON_INTENCLR_CLR8_MASK            (0x100U)
#define DMA_COMMON_INTENCLR_CLR8_SHIFT           (8U)
/*! CLR8 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR8(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR8_SHIFT)) & DMA_COMMON_INTENCLR_CLR8_MASK)

#define DMA_COMMON_INTENCLR_CLR9_MASK            (0x200U)
#define DMA_COMMON_INTENCLR_CLR9_SHIFT           (9U)
/*! CLR9 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR9(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR9_SHIFT)) & DMA_COMMON_INTENCLR_CLR9_MASK)

#define DMA_COMMON_INTENCLR_CLR10_MASK           (0x400U)
#define DMA_COMMON_INTENCLR_CLR10_SHIFT          (10U)
/*! CLR10 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR10(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR10_SHIFT)) & DMA_COMMON_INTENCLR_CLR10_MASK)

#define DMA_COMMON_INTENCLR_CLR11_MASK           (0x800U)
#define DMA_COMMON_INTENCLR_CLR11_SHIFT          (11U)
/*! CLR11 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR11(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR11_SHIFT)) & DMA_COMMON_INTENCLR_CLR11_MASK)

#define DMA_COMMON_INTENCLR_CLR12_MASK           (0x1000U)
#define DMA_COMMON_INTENCLR_CLR12_SHIFT          (12U)
/*! CLR12 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR12(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR12_SHIFT)) & DMA_COMMON_INTENCLR_CLR12_MASK)

#define DMA_COMMON_INTENCLR_CLR13_MASK           (0x2000U)
#define DMA_COMMON_INTENCLR_CLR13_SHIFT          (13U)
/*! CLR13 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR13(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR13_SHIFT)) & DMA_COMMON_INTENCLR_CLR13_MASK)

#define DMA_COMMON_INTENCLR_CLR14_MASK           (0x4000U)
#define DMA_COMMON_INTENCLR_CLR14_SHIFT          (14U)
/*! CLR14 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR14(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR14_SHIFT)) & DMA_COMMON_INTENCLR_CLR14_MASK)

#define DMA_COMMON_INTENCLR_CLR15_MASK           (0x8000U)
#define DMA_COMMON_INTENCLR_CLR15_SHIFT          (15U)
/*! CLR15 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR15(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR15_SHIFT)) & DMA_COMMON_INTENCLR_CLR15_MASK)

#define DMA_COMMON_INTENCLR_CLR16_MASK           (0x10000U)
#define DMA_COMMON_INTENCLR_CLR16_SHIFT          (16U)
/*! CLR16 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR16(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR16_SHIFT)) & DMA_COMMON_INTENCLR_CLR16_MASK)

#define DMA_COMMON_INTENCLR_CLR17_MASK           (0x20000U)
#define DMA_COMMON_INTENCLR_CLR17_SHIFT          (17U)
/*! CLR17 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR17(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR17_SHIFT)) & DMA_COMMON_INTENCLR_CLR17_MASK)

#define DMA_COMMON_INTENCLR_CLR18_MASK           (0x40000U)
#define DMA_COMMON_INTENCLR_CLR18_SHIFT          (18U)
/*! CLR18 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR18(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR18_SHIFT)) & DMA_COMMON_INTENCLR_CLR18_MASK)

#define DMA_COMMON_INTENCLR_CLR19_MASK           (0x80000U)
#define DMA_COMMON_INTENCLR_CLR19_SHIFT          (19U)
/*! CLR19 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR19(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR19_SHIFT)) & DMA_COMMON_INTENCLR_CLR19_MASK)

#define DMA_COMMON_INTENCLR_CLR20_MASK           (0x100000U)
#define DMA_COMMON_INTENCLR_CLR20_SHIFT          (20U)
/*! CLR20 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR20(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR20_SHIFT)) & DMA_COMMON_INTENCLR_CLR20_MASK)

#define DMA_COMMON_INTENCLR_CLR21_MASK           (0x200000U)
#define DMA_COMMON_INTENCLR_CLR21_SHIFT          (21U)
/*! CLR21 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR21(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR21_SHIFT)) & DMA_COMMON_INTENCLR_CLR21_MASK)

#define DMA_COMMON_INTENCLR_CLR22_MASK           (0x400000U)
#define DMA_COMMON_INTENCLR_CLR22_SHIFT          (22U)
/*! CLR22 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR22(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR22_SHIFT)) & DMA_COMMON_INTENCLR_CLR22_MASK)

#define DMA_COMMON_INTENCLR_CLR23_MASK           (0x800000U)
#define DMA_COMMON_INTENCLR_CLR23_SHIFT          (23U)
/*! CLR23 - Writing ones to this register clears corresponding bits in the DMAIntEnSet0. */
#define DMA_COMMON_INTENCLR_CLR23(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR23_SHIFT)) & DMA_COMMON_INTENCLR_CLR23_MASK)
/*! @} */

/* The count of DMA_COMMON_INTENCLR */
#define DMA_COMMON_INTENCLR_COUNT                (1U)

/*! @name COMMON_INTA - Interrupt A status for all DMA channels */
/*! @{ */

#define DMA_COMMON_INTA_INTA0_MASK               (0x1U)
#define DMA_COMMON_INTA_INTA0_SHIFT              (0U)
/*! INTA0 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA0(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA0_SHIFT)) & DMA_COMMON_INTA_INTA0_MASK)

#define DMA_COMMON_INTA_INTA1_MASK               (0x2U)
#define DMA_COMMON_INTA_INTA1_SHIFT              (1U)
/*! INTA1 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA1(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA1_SHIFT)) & DMA_COMMON_INTA_INTA1_MASK)

#define DMA_COMMON_INTA_INTA2_MASK               (0x4U)
#define DMA_COMMON_INTA_INTA2_SHIFT              (2U)
/*! INTA2 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA2(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA2_SHIFT)) & DMA_COMMON_INTA_INTA2_MASK)

#define DMA_COMMON_INTA_INTA3_MASK               (0x8U)
#define DMA_COMMON_INTA_INTA3_SHIFT              (3U)
/*! INTA3 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA3(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA3_SHIFT)) & DMA_COMMON_INTA_INTA3_MASK)

#define DMA_COMMON_INTA_INTA4_MASK               (0x10U)
#define DMA_COMMON_INTA_INTA4_SHIFT              (4U)
/*! INTA4 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA4(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA4_SHIFT)) & DMA_COMMON_INTA_INTA4_MASK)

#define DMA_COMMON_INTA_INTA5_MASK               (0x20U)
#define DMA_COMMON_INTA_INTA5_SHIFT              (5U)
/*! INTA5 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA5(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA5_SHIFT)) & DMA_COMMON_INTA_INTA5_MASK)

#define DMA_COMMON_INTA_INTA6_MASK               (0x40U)
#define DMA_COMMON_INTA_INTA6_SHIFT              (6U)
/*! INTA6 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA6(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA6_SHIFT)) & DMA_COMMON_INTA_INTA6_MASK)

#define DMA_COMMON_INTA_INTA7_MASK               (0x80U)
#define DMA_COMMON_INTA_INTA7_SHIFT              (7U)
/*! INTA7 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA7(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA7_SHIFT)) & DMA_COMMON_INTA_INTA7_MASK)

#define DMA_COMMON_INTA_INTA8_MASK               (0x100U)
#define DMA_COMMON_INTA_INTA8_SHIFT              (8U)
/*! INTA8 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA8(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA8_SHIFT)) & DMA_COMMON_INTA_INTA8_MASK)

#define DMA_COMMON_INTA_INTA9_MASK               (0x200U)
#define DMA_COMMON_INTA_INTA9_SHIFT              (9U)
/*! INTA9 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA9(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA9_SHIFT)) & DMA_COMMON_INTA_INTA9_MASK)

#define DMA_COMMON_INTA_INTA10_MASK              (0x400U)
#define DMA_COMMON_INTA_INTA10_SHIFT             (10U)
/*! INTA10 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA10(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA10_SHIFT)) & DMA_COMMON_INTA_INTA10_MASK)

#define DMA_COMMON_INTA_INTA11_MASK              (0x800U)
#define DMA_COMMON_INTA_INTA11_SHIFT             (11U)
/*! INTA11 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA11(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA11_SHIFT)) & DMA_COMMON_INTA_INTA11_MASK)

#define DMA_COMMON_INTA_INTA12_MASK              (0x1000U)
#define DMA_COMMON_INTA_INTA12_SHIFT             (12U)
/*! INTA12 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA12(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA12_SHIFT)) & DMA_COMMON_INTA_INTA12_MASK)

#define DMA_COMMON_INTA_INTA13_MASK              (0x2000U)
#define DMA_COMMON_INTA_INTA13_SHIFT             (13U)
/*! INTA13 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA13(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA13_SHIFT)) & DMA_COMMON_INTA_INTA13_MASK)

#define DMA_COMMON_INTA_INTA14_MASK              (0x4000U)
#define DMA_COMMON_INTA_INTA14_SHIFT             (14U)
/*! INTA14 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA14(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA14_SHIFT)) & DMA_COMMON_INTA_INTA14_MASK)

#define DMA_COMMON_INTA_INTA15_MASK              (0x8000U)
#define DMA_COMMON_INTA_INTA15_SHIFT             (15U)
/*! INTA15 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA15(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA15_SHIFT)) & DMA_COMMON_INTA_INTA15_MASK)

#define DMA_COMMON_INTA_INTA16_MASK              (0x10000U)
#define DMA_COMMON_INTA_INTA16_SHIFT             (16U)
/*! INTA16 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA16(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA16_SHIFT)) & DMA_COMMON_INTA_INTA16_MASK)

#define DMA_COMMON_INTA_INTA17_MASK              (0x20000U)
#define DMA_COMMON_INTA_INTA17_SHIFT             (17U)
/*! INTA17 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA17(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA17_SHIFT)) & DMA_COMMON_INTA_INTA17_MASK)

#define DMA_COMMON_INTA_INTA18_MASK              (0x40000U)
#define DMA_COMMON_INTA_INTA18_SHIFT             (18U)
/*! INTA18 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA18(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA18_SHIFT)) & DMA_COMMON_INTA_INTA18_MASK)

#define DMA_COMMON_INTA_INTA19_MASK              (0x80000U)
#define DMA_COMMON_INTA_INTA19_SHIFT             (19U)
/*! INTA19 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA19(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA19_SHIFT)) & DMA_COMMON_INTA_INTA19_MASK)

#define DMA_COMMON_INTA_INTA20_MASK              (0x100000U)
#define DMA_COMMON_INTA_INTA20_SHIFT             (20U)
/*! INTA20 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA20(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA20_SHIFT)) & DMA_COMMON_INTA_INTA20_MASK)

#define DMA_COMMON_INTA_INTA21_MASK              (0x200000U)
#define DMA_COMMON_INTA_INTA21_SHIFT             (21U)
/*! INTA21 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA21(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA21_SHIFT)) & DMA_COMMON_INTA_INTA21_MASK)

#define DMA_COMMON_INTA_INTA22_MASK              (0x400000U)
#define DMA_COMMON_INTA_INTA22_SHIFT             (22U)
/*! INTA22 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA22(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA22_SHIFT)) & DMA_COMMON_INTA_INTA22_MASK)

#define DMA_COMMON_INTA_INTA23_MASK              (0x800000U)
#define DMA_COMMON_INTA_INTA23_SHIFT             (23U)
/*! INTA23 - Interrupt A status for DMA channel.
 *  0b0..The DMA channel interrupt A is not active.
 *  0b1..The DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_INTA23(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_INTA23_SHIFT)) & DMA_COMMON_INTA_INTA23_MASK)
/*! @} */

/* The count of DMA_COMMON_INTA */
#define DMA_COMMON_INTA_COUNT                    (1U)

/*! @name COMMON_INTB - Interrupt B status for all DMA channels */
/*! @{ */

#define DMA_COMMON_INTB_INTB0_MASK               (0x1U)
#define DMA_COMMON_INTB_INTB0_SHIFT              (0U)
/*! INTB0 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB0(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB0_SHIFT)) & DMA_COMMON_INTB_INTB0_MASK)

#define DMA_COMMON_INTB_INTB1_MASK               (0x2U)
#define DMA_COMMON_INTB_INTB1_SHIFT              (1U)
/*! INTB1 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB1(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB1_SHIFT)) & DMA_COMMON_INTB_INTB1_MASK)

#define DMA_COMMON_INTB_INTB2_MASK               (0x4U)
#define DMA_COMMON_INTB_INTB2_SHIFT              (2U)
/*! INTB2 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB2(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB2_SHIFT)) & DMA_COMMON_INTB_INTB2_MASK)

#define DMA_COMMON_INTB_INTB3_MASK               (0x8U)
#define DMA_COMMON_INTB_INTB3_SHIFT              (3U)
/*! INTB3 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB3(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB3_SHIFT)) & DMA_COMMON_INTB_INTB3_MASK)

#define DMA_COMMON_INTB_INTB4_MASK               (0x10U)
#define DMA_COMMON_INTB_INTB4_SHIFT              (4U)
/*! INTB4 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB4(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB4_SHIFT)) & DMA_COMMON_INTB_INTB4_MASK)

#define DMA_COMMON_INTB_INTB5_MASK               (0x20U)
#define DMA_COMMON_INTB_INTB5_SHIFT              (5U)
/*! INTB5 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB5(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB5_SHIFT)) & DMA_COMMON_INTB_INTB5_MASK)

#define DMA_COMMON_INTB_INTB6_MASK               (0x40U)
#define DMA_COMMON_INTB_INTB6_SHIFT              (6U)
/*! INTB6 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB6(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB6_SHIFT)) & DMA_COMMON_INTB_INTB6_MASK)

#define DMA_COMMON_INTB_INTB7_MASK               (0x80U)
#define DMA_COMMON_INTB_INTB7_SHIFT              (7U)
/*! INTB7 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB7(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB7_SHIFT)) & DMA_COMMON_INTB_INTB7_MASK)

#define DMA_COMMON_INTB_INTB8_MASK               (0x100U)
#define DMA_COMMON_INTB_INTB8_SHIFT              (8U)
/*! INTB8 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB8(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB8_SHIFT)) & DMA_COMMON_INTB_INTB8_MASK)

#define DMA_COMMON_INTB_INTB9_MASK               (0x200U)
#define DMA_COMMON_INTB_INTB9_SHIFT              (9U)
/*! INTB9 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB9(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB9_SHIFT)) & DMA_COMMON_INTB_INTB9_MASK)

#define DMA_COMMON_INTB_INTB10_MASK              (0x400U)
#define DMA_COMMON_INTB_INTB10_SHIFT             (10U)
/*! INTB10 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB10(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB10_SHIFT)) & DMA_COMMON_INTB_INTB10_MASK)

#define DMA_COMMON_INTB_INTB11_MASK              (0x800U)
#define DMA_COMMON_INTB_INTB11_SHIFT             (11U)
/*! INTB11 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB11(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB11_SHIFT)) & DMA_COMMON_INTB_INTB11_MASK)

#define DMA_COMMON_INTB_INTB12_MASK              (0x1000U)
#define DMA_COMMON_INTB_INTB12_SHIFT             (12U)
/*! INTB12 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB12(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB12_SHIFT)) & DMA_COMMON_INTB_INTB12_MASK)

#define DMA_COMMON_INTB_INTB13_MASK              (0x2000U)
#define DMA_COMMON_INTB_INTB13_SHIFT             (13U)
/*! INTB13 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB13(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB13_SHIFT)) & DMA_COMMON_INTB_INTB13_MASK)

#define DMA_COMMON_INTB_INTB14_MASK              (0x4000U)
#define DMA_COMMON_INTB_INTB14_SHIFT             (14U)
/*! INTB14 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB14(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB14_SHIFT)) & DMA_COMMON_INTB_INTB14_MASK)

#define DMA_COMMON_INTB_INTB15_MASK              (0x8000U)
#define DMA_COMMON_INTB_INTB15_SHIFT             (15U)
/*! INTB15 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB15(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB15_SHIFT)) & DMA_COMMON_INTB_INTB15_MASK)

#define DMA_COMMON_INTB_INTB16_MASK              (0x10000U)
#define DMA_COMMON_INTB_INTB16_SHIFT             (16U)
/*! INTB16 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB16(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB16_SHIFT)) & DMA_COMMON_INTB_INTB16_MASK)

#define DMA_COMMON_INTB_INTB17_MASK              (0x20000U)
#define DMA_COMMON_INTB_INTB17_SHIFT             (17U)
/*! INTB17 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB17(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB17_SHIFT)) & DMA_COMMON_INTB_INTB17_MASK)

#define DMA_COMMON_INTB_INTB18_MASK              (0x40000U)
#define DMA_COMMON_INTB_INTB18_SHIFT             (18U)
/*! INTB18 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB18(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB18_SHIFT)) & DMA_COMMON_INTB_INTB18_MASK)

#define DMA_COMMON_INTB_INTB19_MASK              (0x80000U)
#define DMA_COMMON_INTB_INTB19_SHIFT             (19U)
/*! INTB19 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB19(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB19_SHIFT)) & DMA_COMMON_INTB_INTB19_MASK)

#define DMA_COMMON_INTB_INTB20_MASK              (0x100000U)
#define DMA_COMMON_INTB_INTB20_SHIFT             (20U)
/*! INTB20 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB20(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB20_SHIFT)) & DMA_COMMON_INTB_INTB20_MASK)

#define DMA_COMMON_INTB_INTB21_MASK              (0x200000U)
#define DMA_COMMON_INTB_INTB21_SHIFT             (21U)
/*! INTB21 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB21(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB21_SHIFT)) & DMA_COMMON_INTB_INTB21_MASK)

#define DMA_COMMON_INTB_INTB22_MASK              (0x400000U)
#define DMA_COMMON_INTB_INTB22_SHIFT             (22U)
/*! INTB22 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB22(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB22_SHIFT)) & DMA_COMMON_INTB_INTB22_MASK)

#define DMA_COMMON_INTB_INTB23_MASK              (0x800000U)
#define DMA_COMMON_INTB_INTB23_SHIFT             (23U)
/*! INTB23 - Interrupt B status for DMA channel.
 *  0b0..The DMA channel interrupt B is not active.
 *  0b1..The DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_INTB23(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_INTB23_SHIFT)) & DMA_COMMON_INTB_INTB23_MASK)
/*! @} */

/* The count of DMA_COMMON_INTB */
#define DMA_COMMON_INTB_COUNT                    (1U)

/*! @name COMMON_SETVALID - Set ValidPending control bits for all DMA channels */
/*! @{ */

#define DMA_COMMON_SETVALID_SETVALID0_MASK       (0x1U)
#define DMA_COMMON_SETVALID_SETVALID0_SHIFT      (0U)
/*! SETVALID0 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID0(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID0_SHIFT)) & DMA_COMMON_SETVALID_SETVALID0_MASK)

#define DMA_COMMON_SETVALID_SETVALID1_MASK       (0x2U)
#define DMA_COMMON_SETVALID_SETVALID1_SHIFT      (1U)
/*! SETVALID1 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID1(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID1_SHIFT)) & DMA_COMMON_SETVALID_SETVALID1_MASK)

#define DMA_COMMON_SETVALID_SETVALID2_MASK       (0x4U)
#define DMA_COMMON_SETVALID_SETVALID2_SHIFT      (2U)
/*! SETVALID2 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID2(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID2_SHIFT)) & DMA_COMMON_SETVALID_SETVALID2_MASK)

#define DMA_COMMON_SETVALID_SETVALID3_MASK       (0x8U)
#define DMA_COMMON_SETVALID_SETVALID3_SHIFT      (3U)
/*! SETVALID3 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID3(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID3_SHIFT)) & DMA_COMMON_SETVALID_SETVALID3_MASK)

#define DMA_COMMON_SETVALID_SETVALID4_MASK       (0x10U)
#define DMA_COMMON_SETVALID_SETVALID4_SHIFT      (4U)
/*! SETVALID4 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID4(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID4_SHIFT)) & DMA_COMMON_SETVALID_SETVALID4_MASK)

#define DMA_COMMON_SETVALID_SETVALID5_MASK       (0x20U)
#define DMA_COMMON_SETVALID_SETVALID5_SHIFT      (5U)
/*! SETVALID5 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID5(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID5_SHIFT)) & DMA_COMMON_SETVALID_SETVALID5_MASK)

#define DMA_COMMON_SETVALID_SETVALID6_MASK       (0x40U)
#define DMA_COMMON_SETVALID_SETVALID6_SHIFT      (6U)
/*! SETVALID6 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID6(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID6_SHIFT)) & DMA_COMMON_SETVALID_SETVALID6_MASK)

#define DMA_COMMON_SETVALID_SETVALID7_MASK       (0x80U)
#define DMA_COMMON_SETVALID_SETVALID7_SHIFT      (7U)
/*! SETVALID7 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID7(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID7_SHIFT)) & DMA_COMMON_SETVALID_SETVALID7_MASK)

#define DMA_COMMON_SETVALID_SETVALID8_MASK       (0x100U)
#define DMA_COMMON_SETVALID_SETVALID8_SHIFT      (8U)
/*! SETVALID8 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID8(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID8_SHIFT)) & DMA_COMMON_SETVALID_SETVALID8_MASK)

#define DMA_COMMON_SETVALID_SETVALID9_MASK       (0x200U)
#define DMA_COMMON_SETVALID_SETVALID9_SHIFT      (9U)
/*! SETVALID9 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID9(x)         (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID9_SHIFT)) & DMA_COMMON_SETVALID_SETVALID9_MASK)

#define DMA_COMMON_SETVALID_SETVALID10_MASK      (0x400U)
#define DMA_COMMON_SETVALID_SETVALID10_SHIFT     (10U)
/*! SETVALID10 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID10(x)        (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID10_SHIFT)) & DMA_COMMON_SETVALID_SETVALID10_MASK)

#define DMA_COMMON_SETVALID_SETVALID11_MASK      (0x800U)
#define DMA_COMMON_SETVALID_SETVALID11_SHIFT     (11U)
/*! SETVALID11 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID11(x)        (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID11_SHIFT)) & DMA_COMMON_SETVALID_SETVALID11_MASK)

#define DMA_COMMON_SETVALID_SETVALID12_MASK      (0x1000U)
#define DMA_COMMON_SETVALID_SETVALID12_SHIFT     (12U)
/*! SETVALID12 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID12(x)        (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID12_SHIFT)) & DMA_COMMON_SETVALID_SETVALID12_MASK)

#define DMA_COMMON_SETVALID_SETVALID13_MASK      (0x2000U)
#define DMA_COMMON_SETVALID_SETVALID13_SHIFT     (13U)
/*! SETVALID13 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID13(x)        (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID13_SHIFT)) & DMA_COMMON_SETVALID_SETVALID13_MASK)

#define DMA_COMMON_SETVALID_SETVALID14_MASK      (0x4000U)
#define DMA_COMMON_SETVALID_SETVALID14_SHIFT     (14U)
/*! SETVALID14 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID14(x)        (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID14_SHIFT)) & DMA_COMMON_SETVALID_SETVALID14_MASK)

#define DMA_COMMON_SETVALID_SETVALID15_MASK      (0x8000U)
#define DMA_COMMON_SETVALID_SETVALID15_SHIFT     (15U)
/*! SETVALID15 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID15(x)        (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID15_SHIFT)) & DMA_COMMON_SETVALID_SETVALID15_MASK)

#define DMA_COMMON_SETVALID_SETVALID16_MASK      (0x10000U)
#define DMA_COMMON_SETVALID_SETVALID16_SHIFT     (16U)
/*! SETVALID16 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID16(x)        (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID16_SHIFT)) & DMA_COMMON_SETVALID_SETVALID16_MASK)

#define DMA_COMMON_SETVALID_SETVALID17_MASK      (0x20000U)
#define DMA_COMMON_SETVALID_SETVALID17_SHIFT     (17U)
/*! SETVALID17 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID17(x)        (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID17_SHIFT)) & DMA_COMMON_SETVALID_SETVALID17_MASK)

#define DMA_COMMON_SETVALID_SETVALID18_MASK      (0x40000U)
#define DMA_COMMON_SETVALID_SETVALID18_SHIFT     (18U)
/*! SETVALID18 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID18(x)        (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID18_SHIFT)) & DMA_COMMON_SETVALID_SETVALID18_MASK)

#define DMA_COMMON_SETVALID_SETVALID19_MASK      (0x80000U)
#define DMA_COMMON_SETVALID_SETVALID19_SHIFT     (19U)
/*! SETVALID19 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID19(x)        (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID19_SHIFT)) & DMA_COMMON_SETVALID_SETVALID19_MASK)

#define DMA_COMMON_SETVALID_SETVALID20_MASK      (0x100000U)
#define DMA_COMMON_SETVALID_SETVALID20_SHIFT     (20U)
/*! SETVALID20 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID20(x)        (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID20_SHIFT)) & DMA_COMMON_SETVALID_SETVALID20_MASK)

#define DMA_COMMON_SETVALID_SETVALID21_MASK      (0x200000U)
#define DMA_COMMON_SETVALID_SETVALID21_SHIFT     (21U)
/*! SETVALID21 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID21(x)        (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID21_SHIFT)) & DMA_COMMON_SETVALID_SETVALID21_MASK)

#define DMA_COMMON_SETVALID_SETVALID22_MASK      (0x400000U)
#define DMA_COMMON_SETVALID_SETVALID22_SHIFT     (22U)
/*! SETVALID22 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID22(x)        (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID22_SHIFT)) & DMA_COMMON_SETVALID_SETVALID22_MASK)

#define DMA_COMMON_SETVALID_SETVALID23_MASK      (0x800000U)
#define DMA_COMMON_SETVALID_SETVALID23_SHIFT     (23U)
/*! SETVALID23 - SetValid control for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the ValidPending control bit for DMA channel.
 */
#define DMA_COMMON_SETVALID_SETVALID23(x)        (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SETVALID23_SHIFT)) & DMA_COMMON_SETVALID_SETVALID23_MASK)
/*! @} */

/* The count of DMA_COMMON_SETVALID */
#define DMA_COMMON_SETVALID_COUNT                (1U)

/*! @name COMMON_SETTRIG - Set Trigger control bits for all DMA channels */
/*! @{ */

#define DMA_COMMON_SETTRIG_SETTRIG0_MASK         (0x1U)
#define DMA_COMMON_SETTRIG_SETTRIG0_SHIFT        (0U)
/*! SETTRIG0 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG0(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG0_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG0_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG1_MASK         (0x2U)
#define DMA_COMMON_SETTRIG_SETTRIG1_SHIFT        (1U)
/*! SETTRIG1 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG1(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG1_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG1_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG2_MASK         (0x4U)
#define DMA_COMMON_SETTRIG_SETTRIG2_SHIFT        (2U)
/*! SETTRIG2 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG2(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG2_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG2_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG3_MASK         (0x8U)
#define DMA_COMMON_SETTRIG_SETTRIG3_SHIFT        (3U)
/*! SETTRIG3 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG3(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG3_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG3_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG4_MASK         (0x10U)
#define DMA_COMMON_SETTRIG_SETTRIG4_SHIFT        (4U)
/*! SETTRIG4 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG4(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG4_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG4_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG5_MASK         (0x20U)
#define DMA_COMMON_SETTRIG_SETTRIG5_SHIFT        (5U)
/*! SETTRIG5 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG5(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG5_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG5_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG6_MASK         (0x40U)
#define DMA_COMMON_SETTRIG_SETTRIG6_SHIFT        (6U)
/*! SETTRIG6 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG6(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG6_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG6_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG7_MASK         (0x80U)
#define DMA_COMMON_SETTRIG_SETTRIG7_SHIFT        (7U)
/*! SETTRIG7 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG7(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG7_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG7_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG8_MASK         (0x100U)
#define DMA_COMMON_SETTRIG_SETTRIG8_SHIFT        (8U)
/*! SETTRIG8 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG8(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG8_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG8_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG9_MASK         (0x200U)
#define DMA_COMMON_SETTRIG_SETTRIG9_SHIFT        (9U)
/*! SETTRIG9 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG9(x)           (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG9_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG9_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG10_MASK        (0x400U)
#define DMA_COMMON_SETTRIG_SETTRIG10_SHIFT       (10U)
/*! SETTRIG10 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG10(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG10_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG10_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG11_MASK        (0x800U)
#define DMA_COMMON_SETTRIG_SETTRIG11_SHIFT       (11U)
/*! SETTRIG11 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG11(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG11_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG11_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG12_MASK        (0x1000U)
#define DMA_COMMON_SETTRIG_SETTRIG12_SHIFT       (12U)
/*! SETTRIG12 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG12(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG12_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG12_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG13_MASK        (0x2000U)
#define DMA_COMMON_SETTRIG_SETTRIG13_SHIFT       (13U)
/*! SETTRIG13 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG13(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG13_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG13_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG14_MASK        (0x4000U)
#define DMA_COMMON_SETTRIG_SETTRIG14_SHIFT       (14U)
/*! SETTRIG14 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG14(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG14_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG14_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG15_MASK        (0x8000U)
#define DMA_COMMON_SETTRIG_SETTRIG15_SHIFT       (15U)
/*! SETTRIG15 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG15(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG15_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG15_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG16_MASK        (0x10000U)
#define DMA_COMMON_SETTRIG_SETTRIG16_SHIFT       (16U)
/*! SETTRIG16 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG16(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG16_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG16_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG17_MASK        (0x20000U)
#define DMA_COMMON_SETTRIG_SETTRIG17_SHIFT       (17U)
/*! SETTRIG17 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG17(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG17_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG17_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG18_MASK        (0x40000U)
#define DMA_COMMON_SETTRIG_SETTRIG18_SHIFT       (18U)
/*! SETTRIG18 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG18(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG18_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG18_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG19_MASK        (0x80000U)
#define DMA_COMMON_SETTRIG_SETTRIG19_SHIFT       (19U)
/*! SETTRIG19 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG19(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG19_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG19_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG20_MASK        (0x100000U)
#define DMA_COMMON_SETTRIG_SETTRIG20_SHIFT       (20U)
/*! SETTRIG20 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG20(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG20_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG20_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG21_MASK        (0x200000U)
#define DMA_COMMON_SETTRIG_SETTRIG21_SHIFT       (21U)
/*! SETTRIG21 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG21(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG21_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG21_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG22_MASK        (0x400000U)
#define DMA_COMMON_SETTRIG_SETTRIG22_SHIFT       (22U)
/*! SETTRIG22 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG22(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG22_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG22_MASK)

#define DMA_COMMON_SETTRIG_SETTRIG23_MASK        (0x800000U)
#define DMA_COMMON_SETTRIG_SETTRIG23_SHIFT       (23U)
/*! SETTRIG23 - Set Trigger control bit for DMA channel.
 *  0b0..No effect.
 *  0b1..Sets the Trig bit for DMA channel.
 */
#define DMA_COMMON_SETTRIG_SETTRIG23(x)          (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_SETTRIG23_SHIFT)) & DMA_COMMON_SETTRIG_SETTRIG23_MASK)
/*! @} */

/* The count of DMA_COMMON_SETTRIG */
#define DMA_COMMON_SETTRIG_COUNT                 (1U)

/*! @name COMMON_ABORT - Channel Abort control for all DMA channels */
/*! @{ */

#define DMA_COMMON_ABORT_ABORT0_MASK             (0x1U)
#define DMA_COMMON_ABORT_ABORT0_SHIFT            (0U)
/*! ABORT0 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT0(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT0_SHIFT)) & DMA_COMMON_ABORT_ABORT0_MASK)

#define DMA_COMMON_ABORT_ABORT1_MASK             (0x2U)
#define DMA_COMMON_ABORT_ABORT1_SHIFT            (1U)
/*! ABORT1 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT1(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT1_SHIFT)) & DMA_COMMON_ABORT_ABORT1_MASK)

#define DMA_COMMON_ABORT_ABORT2_MASK             (0x4U)
#define DMA_COMMON_ABORT_ABORT2_SHIFT            (2U)
/*! ABORT2 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT2(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT2_SHIFT)) & DMA_COMMON_ABORT_ABORT2_MASK)

#define DMA_COMMON_ABORT_ABORT3_MASK             (0x8U)
#define DMA_COMMON_ABORT_ABORT3_SHIFT            (3U)
/*! ABORT3 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT3(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT3_SHIFT)) & DMA_COMMON_ABORT_ABORT3_MASK)

#define DMA_COMMON_ABORT_ABORT4_MASK             (0x10U)
#define DMA_COMMON_ABORT_ABORT4_SHIFT            (4U)
/*! ABORT4 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT4(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT4_SHIFT)) & DMA_COMMON_ABORT_ABORT4_MASK)

#define DMA_COMMON_ABORT_ABORT5_MASK             (0x20U)
#define DMA_COMMON_ABORT_ABORT5_SHIFT            (5U)
/*! ABORT5 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT5(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT5_SHIFT)) & DMA_COMMON_ABORT_ABORT5_MASK)

#define DMA_COMMON_ABORT_ABORT6_MASK             (0x40U)
#define DMA_COMMON_ABORT_ABORT6_SHIFT            (6U)
/*! ABORT6 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT6(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT6_SHIFT)) & DMA_COMMON_ABORT_ABORT6_MASK)

#define DMA_COMMON_ABORT_ABORT7_MASK             (0x80U)
#define DMA_COMMON_ABORT_ABORT7_SHIFT            (7U)
/*! ABORT7 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT7(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT7_SHIFT)) & DMA_COMMON_ABORT_ABORT7_MASK)

#define DMA_COMMON_ABORT_ABORT8_MASK             (0x100U)
#define DMA_COMMON_ABORT_ABORT8_SHIFT            (8U)
/*! ABORT8 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT8(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT8_SHIFT)) & DMA_COMMON_ABORT_ABORT8_MASK)

#define DMA_COMMON_ABORT_ABORT9_MASK             (0x200U)
#define DMA_COMMON_ABORT_ABORT9_SHIFT            (9U)
/*! ABORT9 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT9(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT9_SHIFT)) & DMA_COMMON_ABORT_ABORT9_MASK)

#define DMA_COMMON_ABORT_ABORT10_MASK            (0x400U)
#define DMA_COMMON_ABORT_ABORT10_SHIFT           (10U)
/*! ABORT10 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT10(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT10_SHIFT)) & DMA_COMMON_ABORT_ABORT10_MASK)

#define DMA_COMMON_ABORT_ABORT11_MASK            (0x800U)
#define DMA_COMMON_ABORT_ABORT11_SHIFT           (11U)
/*! ABORT11 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT11(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT11_SHIFT)) & DMA_COMMON_ABORT_ABORT11_MASK)

#define DMA_COMMON_ABORT_ABORT12_MASK            (0x1000U)
#define DMA_COMMON_ABORT_ABORT12_SHIFT           (12U)
/*! ABORT12 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT12(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT12_SHIFT)) & DMA_COMMON_ABORT_ABORT12_MASK)

#define DMA_COMMON_ABORT_ABORT13_MASK            (0x2000U)
#define DMA_COMMON_ABORT_ABORT13_SHIFT           (13U)
/*! ABORT13 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT13(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT13_SHIFT)) & DMA_COMMON_ABORT_ABORT13_MASK)

#define DMA_COMMON_ABORT_ABORT14_MASK            (0x4000U)
#define DMA_COMMON_ABORT_ABORT14_SHIFT           (14U)
/*! ABORT14 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT14(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT14_SHIFT)) & DMA_COMMON_ABORT_ABORT14_MASK)

#define DMA_COMMON_ABORT_ABORT15_MASK            (0x8000U)
#define DMA_COMMON_ABORT_ABORT15_SHIFT           (15U)
/*! ABORT15 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT15(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT15_SHIFT)) & DMA_COMMON_ABORT_ABORT15_MASK)

#define DMA_COMMON_ABORT_ABORT16_MASK            (0x10000U)
#define DMA_COMMON_ABORT_ABORT16_SHIFT           (16U)
/*! ABORT16 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT16(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT16_SHIFT)) & DMA_COMMON_ABORT_ABORT16_MASK)

#define DMA_COMMON_ABORT_ABORT17_MASK            (0x20000U)
#define DMA_COMMON_ABORT_ABORT17_SHIFT           (17U)
/*! ABORT17 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT17(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT17_SHIFT)) & DMA_COMMON_ABORT_ABORT17_MASK)

#define DMA_COMMON_ABORT_ABORT18_MASK            (0x40000U)
#define DMA_COMMON_ABORT_ABORT18_SHIFT           (18U)
/*! ABORT18 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT18(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT18_SHIFT)) & DMA_COMMON_ABORT_ABORT18_MASK)

#define DMA_COMMON_ABORT_ABORT19_MASK            (0x80000U)
#define DMA_COMMON_ABORT_ABORT19_SHIFT           (19U)
/*! ABORT19 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT19(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT19_SHIFT)) & DMA_COMMON_ABORT_ABORT19_MASK)

#define DMA_COMMON_ABORT_ABORT20_MASK            (0x100000U)
#define DMA_COMMON_ABORT_ABORT20_SHIFT           (20U)
/*! ABORT20 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT20(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT20_SHIFT)) & DMA_COMMON_ABORT_ABORT20_MASK)

#define DMA_COMMON_ABORT_ABORT21_MASK            (0x200000U)
#define DMA_COMMON_ABORT_ABORT21_SHIFT           (21U)
/*! ABORT21 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT21(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT21_SHIFT)) & DMA_COMMON_ABORT_ABORT21_MASK)

#define DMA_COMMON_ABORT_ABORT22_MASK            (0x400000U)
#define DMA_COMMON_ABORT_ABORT22_SHIFT           (22U)
/*! ABORT22 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT22(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT22_SHIFT)) & DMA_COMMON_ABORT_ABORT22_MASK)

#define DMA_COMMON_ABORT_ABORT23_MASK            (0x800000U)
#define DMA_COMMON_ABORT_ABORT23_SHIFT           (23U)
/*! ABORT23 - Abort control for DMA channel.
 *  0b0..No effect.
 *  0b1..Aborts DMA operations on channel.
 */
#define DMA_COMMON_ABORT_ABORT23(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORT23_SHIFT)) & DMA_COMMON_ABORT_ABORT23_MASK)
/*! @} */

/* The count of DMA_COMMON_ABORT */
#define DMA_COMMON_ABORT_COUNT                   (1U)

/*! @name CHANNEL_CFG - Configuration register for DMA channel */
/*! @{ */

#define DMA_CHANNEL_CFG_PERIPHREQEN_MASK         (0x1U)
#define DMA_CHANNEL_CFG_PERIPHREQEN_SHIFT        (0U)
/*! PERIPHREQEN - Peripheral request Enable.
 *  0b0..Peripheral DMA requests disabled.
 *  0b1..Peripheral DMA requests enabled.
 */
#define DMA_CHANNEL_CFG_PERIPHREQEN(x)           (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_CFG_PERIPHREQEN_SHIFT)) & DMA_CHANNEL_CFG_PERIPHREQEN_MASK)

#define DMA_CHANNEL_CFG_HWTRIGEN_MASK            (0x2U)
#define DMA_CHANNEL_CFG_HWTRIGEN_SHIFT           (1U)
/*! HWTRIGEN - Hardware Triggering Enable for channel.
 *  0b0..Hardware triggering not used for channel.
 *  0b1..Hardware triggering used for channel.
 */
#define DMA_CHANNEL_CFG_HWTRIGEN(x)              (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_CFG_HWTRIGEN_SHIFT)) & DMA_CHANNEL_CFG_HWTRIGEN_MASK)

#define DMA_CHANNEL_CFG_TRIGPOL_MASK             (0x10U)
#define DMA_CHANNEL_CFG_TRIGPOL_SHIFT            (4U)
/*! TRIGPOL - Trigger Polarity.
 *  0b0..Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
 *  0b1..Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
 */
#define DMA_CHANNEL_CFG_TRIGPOL(x)               (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_CFG_TRIGPOL_SHIFT)) & DMA_CHANNEL_CFG_TRIGPOL_MASK)

#define DMA_CHANNEL_CFG_TRIGTYPE_MASK            (0x20U)
#define DMA_CHANNEL_CFG_TRIGTYPE_SHIFT           (5U)
/*! TRIGTYPE - Trigger Type.
 *  0b0..Edge. Hardware trigger is edge triggered. Transfers will be initiated and completed, as specified for a single trigger.
 *  0b1..Level.
 */
#define DMA_CHANNEL_CFG_TRIGTYPE(x)              (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_CFG_TRIGTYPE_SHIFT)) & DMA_CHANNEL_CFG_TRIGTYPE_MASK)

#define DMA_CHANNEL_CFG_TRIGBURST_MASK           (0x40U)
#define DMA_CHANNEL_CFG_TRIGBURST_SHIFT          (6U)
/*! TRIGBURST - Trigger Burst.
 *  0b0..Single transfer.
 *  0b1..Burst transfer.
 */
#define DMA_CHANNEL_CFG_TRIGBURST(x)             (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_CFG_TRIGBURST_SHIFT)) & DMA_CHANNEL_CFG_TRIGBURST_MASK)

#define DMA_CHANNEL_CFG_BURSTPOWER_MASK          (0xF00U)
#define DMA_CHANNEL_CFG_BURSTPOWER_SHIFT         (8U)
/*! BURSTPOWER - Burst Power. */
#define DMA_CHANNEL_CFG_BURSTPOWER(x)            (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_CFG_BURSTPOWER_SHIFT)) & DMA_CHANNEL_CFG_BURSTPOWER_MASK)

#define DMA_CHANNEL_CFG_SRCBURSTWRAP_MASK        (0x4000U)
#define DMA_CHANNEL_CFG_SRCBURSTWRAP_SHIFT       (14U)
/*! SRCBURSTWRAP - Source Burst Wrap.
 *  0b0..Disabled.
 *  0b1..Enabled.
 */
#define DMA_CHANNEL_CFG_SRCBURSTWRAP(x)          (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_CFG_SRCBURSTWRAP_SHIFT)) & DMA_CHANNEL_CFG_SRCBURSTWRAP_MASK)

#define DMA_CHANNEL_CFG_DSTBURSTWRAP_MASK        (0x8000U)
#define DMA_CHANNEL_CFG_DSTBURSTWRAP_SHIFT       (15U)
/*! DSTBURSTWRAP - Destination Burst Wrap.
 *  0b0..Disabled. Destination burst wrapping is not enabled for this DMA channel.
 *  0b1..Enabled. Destination burst wrapping is enabled for this DMA channel.
 */
#define DMA_CHANNEL_CFG_DSTBURSTWRAP(x)          (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_CFG_DSTBURSTWRAP_SHIFT)) & DMA_CHANNEL_CFG_DSTBURSTWRAP_MASK)

#define DMA_CHANNEL_CFG_CHPRIORITY_MASK          (0x70000U)
#define DMA_CHANNEL_CFG_CHPRIORITY_SHIFT         (16U)
/*! CHPRIORITY - Priority of channel when multiple DMA requests are pending. */
#define DMA_CHANNEL_CFG_CHPRIORITY(x)            (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_CFG_CHPRIORITY_SHIFT)) & DMA_CHANNEL_CFG_CHPRIORITY_MASK)
/*! @} */

/* The count of DMA_CHANNEL_CFG */
#define DMA_CHANNEL_CFG_COUNT                    (24U)

/*! @name CHANNEL_CTLSTAT - Control and status register for DMA channel */
/*! @{ */

#define DMA_CHANNEL_CTLSTAT_VALIDPENDING_MASK    (0x1U)
#define DMA_CHANNEL_CTLSTAT_VALIDPENDING_SHIFT   (0U)
/*! VALIDPENDING - Valid pending flag for this channel.
 *  0b0..No effect on DMA operation.
 *  0b1..Valid pending.
 */
#define DMA_CHANNEL_CTLSTAT_VALIDPENDING(x)      (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_CTLSTAT_VALIDPENDING_SHIFT)) & DMA_CHANNEL_CTLSTAT_VALIDPENDING_MASK)

#define DMA_CHANNEL_CTLSTAT_TRIG_MASK            (0x4U)
#define DMA_CHANNEL_CTLSTAT_TRIG_SHIFT           (2U)
/*! TRIG - Trigger flag.
 *  0b0..Not triggered. The trigger for this DMA channel is not set. DMA operations will not be carried out.
 *  0b1..Triggered. The trigger for this DMA channel is set. DMA operations will be carried out.
 */
#define DMA_CHANNEL_CTLSTAT_TRIG(x)              (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_CTLSTAT_TRIG_SHIFT)) & DMA_CHANNEL_CTLSTAT_TRIG_MASK)
/*! @} */

/* The count of DMA_CHANNEL_CTLSTAT */
#define DMA_CHANNEL_CTLSTAT_COUNT                (24U)

/*! @name CHANNEL_XFERCFG - Transfer configuration register for DMA channel */
/*! @{ */

#define DMA_CHANNEL_XFERCFG_CFGVALID_MASK        (0x1U)
#define DMA_CHANNEL_XFERCFG_CFGVALID_SHIFT       (0U)
/*! CFGVALID - Configuration Valid flag.
 *  0b0..Not valid.
 *  0b1..Valid.
 */
#define DMA_CHANNEL_XFERCFG_CFGVALID(x)          (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_XFERCFG_CFGVALID_SHIFT)) & DMA_CHANNEL_XFERCFG_CFGVALID_MASK)

#define DMA_CHANNEL_XFERCFG_RELOAD_MASK          (0x2U)
#define DMA_CHANNEL_XFERCFG_RELOAD_SHIFT         (1U)
/*! RELOAD - Reload.
 *  0b0..Disabled. The channels' control structure should not be reloaded when the current descriptor is exhausted.
 *  0b1..Enabled. The channels' control structure should be reloaded when the current descriptor is exhausted.
 */
#define DMA_CHANNEL_XFERCFG_RELOAD(x)            (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_XFERCFG_RELOAD_SHIFT)) & DMA_CHANNEL_XFERCFG_RELOAD_MASK)

#define DMA_CHANNEL_XFERCFG_SWTRIG_MASK          (0x4U)
#define DMA_CHANNEL_XFERCFG_SWTRIG_SHIFT         (2U)
/*! SWTRIG - Software Trigger.
 *  0b0..Not set.
 *  0b1..Set.
 */
#define DMA_CHANNEL_XFERCFG_SWTRIG(x)            (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_XFERCFG_SWTRIG_SHIFT)) & DMA_CHANNEL_XFERCFG_SWTRIG_MASK)

#define DMA_CHANNEL_XFERCFG_CLRTRIG_MASK         (0x8U)
#define DMA_CHANNEL_XFERCFG_CLRTRIG_SHIFT        (3U)
/*! CLRTRIG - Clear Trigger.
 *  0b0..Not cleared.
 *  0b1..Cleared.
 */
#define DMA_CHANNEL_XFERCFG_CLRTRIG(x)           (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_XFERCFG_CLRTRIG_SHIFT)) & DMA_CHANNEL_XFERCFG_CLRTRIG_MASK)

#define DMA_CHANNEL_XFERCFG_SETINTA_MASK         (0x10U)
#define DMA_CHANNEL_XFERCFG_SETINTA_SHIFT        (4U)
/*! SETINTA - Set Interrupt flag A for channel.
 *  0b0..No effect.
 *  0b1..Set. The INTA flag for this channel will be set when the current descriptor is exhausted.
 */
#define DMA_CHANNEL_XFERCFG_SETINTA(x)           (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_XFERCFG_SETINTA_SHIFT)) & DMA_CHANNEL_XFERCFG_SETINTA_MASK)

#define DMA_CHANNEL_XFERCFG_SETINTB_MASK         (0x20U)
#define DMA_CHANNEL_XFERCFG_SETINTB_SHIFT        (5U)
/*! SETINTB - Set Interrupt flag B for channel.
 *  0b0..No effect.
 *  0b1..Set. The INTB flag for this channel will be set when the current descriptor is exhausted.
 */
#define DMA_CHANNEL_XFERCFG_SETINTB(x)           (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_XFERCFG_SETINTB_SHIFT)) & DMA_CHANNEL_XFERCFG_SETINTB_MASK)

#define DMA_CHANNEL_XFERCFG_WIDTH_MASK           (0x300U)
#define DMA_CHANNEL_XFERCFG_WIDTH_SHIFT          (8U)
/*! WIDTH - Transfer width used for this DMA channel.
 *  0b00..8-bit.
 *  0b01..16-bit.
 *  0b10..32-bit.
 *  0b11..Reserved.
 */
#define DMA_CHANNEL_XFERCFG_WIDTH(x)             (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_XFERCFG_WIDTH_SHIFT)) & DMA_CHANNEL_XFERCFG_WIDTH_MASK)

#define DMA_CHANNEL_XFERCFG_SRCINC_MASK          (0x3000U)
#define DMA_CHANNEL_XFERCFG_SRCINC_SHIFT         (12U)
/*! SRCINC - Source address increment
 *  0b00..No increment.
 *  0b01..1 x width.
 *  0b10..2 x width.
 *  0b11..4 x width.
 */
#define DMA_CHANNEL_XFERCFG_SRCINC(x)            (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_XFERCFG_SRCINC_SHIFT)) & DMA_CHANNEL_XFERCFG_SRCINC_MASK)

#define DMA_CHANNEL_XFERCFG_DSTINC_MASK          (0xC000U)
#define DMA_CHANNEL_XFERCFG_DSTINC_SHIFT         (14U)
/*! DSTINC - Destination address increment
 *  0b00..No increment.
 *  0b01..1 x width.
 *  0b10..2 x width.
 *  0b11..4 x width.
 */
#define DMA_CHANNEL_XFERCFG_DSTINC(x)            (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_XFERCFG_DSTINC_SHIFT)) & DMA_CHANNEL_XFERCFG_DSTINC_MASK)

#define DMA_CHANNEL_XFERCFG_XFERCOUNT_MASK       (0x3FF0000U)
#define DMA_CHANNEL_XFERCFG_XFERCOUNT_SHIFT      (16U)
/*! XFERCOUNT - Total number of transfers to be performed, minus 1 encoded. */
#define DMA_CHANNEL_XFERCFG_XFERCOUNT(x)         (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_XFERCFG_XFERCOUNT_SHIFT)) & DMA_CHANNEL_XFERCFG_XFERCOUNT_MASK)
/*! @} */

/* The count of DMA_CHANNEL_XFERCFG */
#define DMA_CHANNEL_XFERCFG_COUNT                (24U)


/*!
 * @}
 */ /* end of group DMA_Register_Masks */


/*!
 * @}
 */ /* end of group DMA_Peripheral_Access_Layer */


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


#endif  /* PERI_DMA_H_ */

