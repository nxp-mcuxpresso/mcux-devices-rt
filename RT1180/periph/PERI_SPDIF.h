/*
** ###################################################################
**     Processors:          MIMXRT1181CVP2B
**                          MIMXRT1181CVP2C
**                          MIMXRT1181XVP2B
**                          MIMXRT1181XVP2C
**                          MIMXRT1182CVP2B
**                          MIMXRT1182CVP2C
**                          MIMXRT1182XVP2B
**                          MIMXRT1182XVP2C
**                          MIMXRT1186CVJ8C_cm33
**                          MIMXRT1186CVJ8C_cm7
**                          MIMXRT1186XVJ8C_cm33
**                          MIMXRT1186XVJ8C_cm7
**                          MIMXRT1187AVM8B_cm33
**                          MIMXRT1187AVM8B_cm7
**                          MIMXRT1187AVM8C_cm33
**                          MIMXRT1187AVM8C_cm7
**                          MIMXRT1187CVM8B_cm33
**                          MIMXRT1187CVM8B_cm7
**                          MIMXRT1187CVM8C_cm33
**                          MIMXRT1187CVM8C_cm7
**                          MIMXRT1187XVM8B_cm33
**                          MIMXRT1187XVM8B_cm7
**                          MIMXRT1187XVM8C_cm33
**                          MIMXRT1187XVM8C_cm7
**                          MIMXRT1189CVM8B_cm33
**                          MIMXRT1189CVM8B_cm7
**                          MIMXRT1189CVM8C_cm33
**                          MIMXRT1189CVM8C_cm7
**                          MIMXRT1189XVM8B_cm33
**                          MIMXRT1189XVM8B_cm7
**                          MIMXRT1189XVM8C_cm33
**                          MIMXRT1189XVM8C_cm7
**
**     Version:             rev. 3.0, 2024-10-29
**     Build:               b250520
**
**     Abstract:
**         CMSIS Peripheral Access Layer for SPDIF
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2021-03-09)
**         Initial version.
**     - rev. 2.0 (2024-01-18)
**         Header RFP.
**     - rev. 3.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file PERI_SPDIF.h
 * @version 3.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for SPDIF
 *
 * CMSIS Peripheral Access Layer for SPDIF
 */

#if !defined(PERI_SPDIF_H_)
#define PERI_SPDIF_H_                            /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MIMXRT1181CVP2B) || defined(CPU_MIMXRT1181CVP2C) || defined(CPU_MIMXRT1181XVP2B) || defined(CPU_MIMXRT1181XVP2C))
#include "MIMXRT1181_COMMON.h"
#elif (defined(CPU_MIMXRT1182CVP2B) || defined(CPU_MIMXRT1182CVP2C) || defined(CPU_MIMXRT1182XVP2B) || defined(CPU_MIMXRT1182XVP2C))
#include "MIMXRT1182_COMMON.h"
#elif (defined(CPU_MIMXRT1186CVJ8C_cm33) || defined(CPU_MIMXRT1186XVJ8C_cm33))
#include "MIMXRT1186_cm33_COMMON.h"
#elif (defined(CPU_MIMXRT1186CVJ8C_cm7) || defined(CPU_MIMXRT1186XVJ8C_cm7))
#include "MIMXRT1186_cm7_COMMON.h"
#elif (defined(CPU_MIMXRT1187AVM8B_cm33) || defined(CPU_MIMXRT1187AVM8C_cm33) || defined(CPU_MIMXRT1187CVM8B_cm33) || defined(CPU_MIMXRT1187CVM8C_cm33) || defined(CPU_MIMXRT1187XVM8B_cm33) || defined(CPU_MIMXRT1187XVM8C_cm33))
#include "MIMXRT1187_cm33_COMMON.h"
#elif (defined(CPU_MIMXRT1187AVM8B_cm7) || defined(CPU_MIMXRT1187AVM8C_cm7) || defined(CPU_MIMXRT1187CVM8B_cm7) || defined(CPU_MIMXRT1187CVM8C_cm7) || defined(CPU_MIMXRT1187XVM8B_cm7) || defined(CPU_MIMXRT1187XVM8C_cm7))
#include "MIMXRT1187_cm7_COMMON.h"
#elif (defined(CPU_MIMXRT1189CVM8B_cm33) || defined(CPU_MIMXRT1189CVM8C_cm33) || defined(CPU_MIMXRT1189XVM8B_cm33) || defined(CPU_MIMXRT1189XVM8C_cm33))
#include "MIMXRT1189_cm33_COMMON.h"
#elif (defined(CPU_MIMXRT1189CVM8B_cm7) || defined(CPU_MIMXRT1189CVM8C_cm7) || defined(CPU_MIMXRT1189XVM8B_cm7) || defined(CPU_MIMXRT1189XVM8C_cm7))
#include "MIMXRT1189_cm7_COMMON.h"
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
   -- SPDIF Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SPDIF_Peripheral_Access_Layer SPDIF Peripheral Access Layer
 * @{
 */

/** SPDIF - Register Layout Typedef */
typedef struct {
  __IO uint32_t SCR;                               /**< SPDIF Configuration Register, offset: 0x0 */
  __IO uint32_t SRCD;                              /**< CDText Control Register, offset: 0x4 */
  __IO uint32_t SRPC;                              /**< PhaseConfig Register, offset: 0x8 */
  __IO uint32_t SIE;                               /**< InterruptEn Register, offset: 0xC */
  __IO uint32_t SIS;                               /**< InterruptStat Register, offset: 0x10 */
  __I  uint32_t SRL;                               /**< SPDIFRxLeft Register, offset: 0x14 */
  __I  uint32_t SRR;                               /**< SPDIFRxRight Register, offset: 0x18 */
  __I  uint32_t SRCSH;                             /**< SPDIFRxCChannel_h Register, offset: 0x1C */
  __I  uint32_t SRCSL;                             /**< SPDIFRxCChannel_l Register, offset: 0x20 */
  __I  uint32_t SRU;                               /**< UchannelRx Register, offset: 0x24 */
  __I  uint32_t SRQ;                               /**< QchannelRx Register, offset: 0x28 */
  __O  uint32_t STL;                               /**< SPDIFTxLeft Register, offset: 0x2C */
  __O  uint32_t STR;                               /**< SPDIFTxRight Register, offset: 0x30 */
  __IO uint32_t STCSCH;                            /**< SPDIFTxCChannelCons_h Register, offset: 0x34 */
  __IO uint32_t STCSCL;                            /**< SPDIFTxCChannelCons_l Register, offset: 0x38 */
       uint8_t RESERVED_0[8];
  __I  uint32_t SRFM;                              /**< FreqMeas Register, offset: 0x44 */
       uint8_t RESERVED_1[8];
  __IO uint32_t STC;                               /**< SPDIFTxClk Register, offset: 0x50 */
       uint8_t RESERVED_2[12];
  __I  uint32_t SPDIFRXCCHANNEL_ADDR_31_0;         /**< SPDIF receive C channel register, bits 31-0, offset: 0x60 */
  __I  uint32_t SPDIFRXCCHANNEL_ADDR_63_32;        /**< SPDIF receive C channel register, bits 63-32, offset: 0x64 */
  __I  uint32_t SPDIFRXCCHANNEL_ADDR_95_64;        /**< SPDIF receive C channel register, bits 95-64, offset: 0x68 */
  __I  uint32_t SPDIFRXCCHANNEL_ADDR_127_96;       /**< SPDIF receive C channel register, bits 127-96, offset: 0x6C */
  __I  uint32_t SPDIFRXCCHANNEL_ADDR_159_128;      /**< SPDIF receive C channel register, bits 159-128, offset: 0x70 */
  __I  uint32_t SPDIFRXCCHANNEL_ADDR_191_160;      /**< SPDIF receive C channel register, bits 191-160, offset: 0x74 */
  __IO uint32_t SPDIFTXCCHANNEL_ADDR_31_0;         /**< SPDIF transmit C channel register, bits 31-0, offset: 0x78 */
  __IO uint32_t SPDIFTXCCHANNEL_ADDR_63_32;        /**< SPDIF transmit C channel register, bits 63-32, offset: 0x7C */
  __IO uint32_t SPDIFTXCCHANNEL_ADDR_95_64;        /**< SPDIF transmit C channel register, bits 95-64, offset: 0x80 */
  __IO uint32_t SPDIFTXCCHANNEL_ADDR_127_96;       /**< SPDIF transmit C channel register, bits 127-96, offset: 0x84 */
  __IO uint32_t SPDIFTXCCHANNEL_ADDR_159_128;      /**< SPDIF transmit C channel register, bits 159-128, offset: 0x88 */
  __IO uint32_t SPDIFTXCCHANNEL_ADDR_191_160;      /**< SPDIF transmit C channel register, bits 191-160, offset: 0x8C */
} SPDIF_Type;

/* ----------------------------------------------------------------------------
   -- SPDIF Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SPDIF_Register_Masks SPDIF Register Masks
 * @{
 */

/*! @name SCR - SPDIF Configuration Register */
/*! @{ */

#define SPDIF_SCR_USRC_SEL_MASK                  (0x3U)
#define SPDIF_SCR_USRC_SEL_SHIFT                 (0U)
/*! USrc_Sel - USrc_Sel
 *  0b00..No embedded U channel
 *  0b01..U channel from SPDIF receive block (CD mode)
 *  0b10..Reserved
 *  0b11..U channel from on chip transmitter
 */
#define SPDIF_SCR_USRC_SEL(x)                    (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_USRC_SEL_SHIFT)) & SPDIF_SCR_USRC_SEL_MASK)

#define SPDIF_SCR_TXSEL_MASK                     (0x1CU)
#define SPDIF_SCR_TXSEL_SHIFT                    (2U)
/*! TxSel - TxSel
 *  0b000..Off and output 0
 *  0b001..Feed-through SPDIF_IN
 *  0b010-0b100..Reserved
 *  0b101..Tx Normal operation - From SPDIF Tx Block
 *  0b110, 0b111..Reserved
 */
#define SPDIF_SCR_TXSEL(x)                       (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_TXSEL_SHIFT)) & SPDIF_SCR_TXSEL_MASK)

#define SPDIF_SCR_VALCTRL_MASK                   (0x20U)
#define SPDIF_SCR_VALCTRL_SHIFT                  (5U)
/*! ValCtrl - ValCtrl
 *  0b0..Outgoing Validity always set
 *  0b1..Outgoing Validity always clear
 */
#define SPDIF_SCR_VALCTRL(x)                     (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_VALCTRL_SHIFT)) & SPDIF_SCR_VALCTRL_MASK)

#define SPDIF_SCR_INPUTSRCSEL_MASK               (0xC0U)
#define SPDIF_SCR_INPUTSRCSEL_SHIFT              (6U)
/*! InputSrcSel - InputSrcSel
 *  0b00..SPDIF_IN
 *  0b01-0b11..None
 */
#define SPDIF_SCR_INPUTSRCSEL(x)                 (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_INPUTSRCSEL_SHIFT)) & SPDIF_SCR_INPUTSRCSEL_MASK)

#define SPDIF_SCR_DMA_TX_EN_MASK                 (0x100U)
#define SPDIF_SCR_DMA_TX_EN_SHIFT                (8U)
/*! DMA_TX_En - DMA_TX_En */
#define SPDIF_SCR_DMA_TX_EN(x)                   (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_DMA_TX_EN_SHIFT)) & SPDIF_SCR_DMA_TX_EN_MASK)

#define SPDIF_SCR_DMA_RX_EN_MASK                 (0x200U)
#define SPDIF_SCR_DMA_RX_EN_SHIFT                (9U)
/*! DMA_Rx_En - DMA_Rx_En */
#define SPDIF_SCR_DMA_RX_EN(x)                   (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_DMA_RX_EN_SHIFT)) & SPDIF_SCR_DMA_RX_EN_MASK)

#define SPDIF_SCR_TXFIFO_CTRL_MASK               (0xC00U)
#define SPDIF_SCR_TXFIFO_CTRL_SHIFT              (10U)
/*! TxFIFO_Ctrl - TxFIFO_Ctrl
 *  0b00..Send out digital zero on SPDIF Tx
 *  0b01..Tx Normal operation
 *  0b10..Reset to 1 sample remaining
 *  0b11..Reserved
 */
#define SPDIF_SCR_TXFIFO_CTRL(x)                 (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_TXFIFO_CTRL_SHIFT)) & SPDIF_SCR_TXFIFO_CTRL_MASK)

#define SPDIF_SCR_SOFT_RESET_MASK                (0x1000U)
#define SPDIF_SCR_SOFT_RESET_SHIFT               (12U)
/*! soft_reset - soft_reset */
#define SPDIF_SCR_SOFT_RESET(x)                  (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_SOFT_RESET_SHIFT)) & SPDIF_SCR_SOFT_RESET_MASK)

#define SPDIF_SCR_LOW_POWER_MASK                 (0x2000U)
#define SPDIF_SCR_LOW_POWER_SHIFT                (13U)
/*! LOW_POWER - LOW_POWER */
#define SPDIF_SCR_LOW_POWER(x)                   (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_LOW_POWER_SHIFT)) & SPDIF_SCR_LOW_POWER_MASK)

#define SPDIF_SCR_TXFIFOEMPTY_SEL_MASK           (0x18000U)
#define SPDIF_SCR_TXFIFOEMPTY_SEL_SHIFT          (15U)
/*! TxFIFOEmpty_Sel - TxFIFOEmpty_Sel
 *  0b00..Empty interrupt if 0 sample in Tx left and right FIFOs
 *  0b01..Empty interrupt if at most 4 sample in Tx left and right FIFOs
 *  0b10..Empty interrupt if at most 8 sample in Tx left and right FIFOs
 *  0b11..Empty interrupt if at most 12 sample in Tx left and right FIFOs
 */
#define SPDIF_SCR_TXFIFOEMPTY_SEL(x)             (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_TXFIFOEMPTY_SEL_SHIFT)) & SPDIF_SCR_TXFIFOEMPTY_SEL_MASK)

#define SPDIF_SCR_TXAUTOSYNC_MASK                (0x20000U)
#define SPDIF_SCR_TXAUTOSYNC_SHIFT               (17U)
/*! TxAutoSync - TxAutoSync
 *  0b0..Tx FIFO auto sync off
 *  0b1..Tx FIFO auto sync on
 */
#define SPDIF_SCR_TXAUTOSYNC(x)                  (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_TXAUTOSYNC_SHIFT)) & SPDIF_SCR_TXAUTOSYNC_MASK)

#define SPDIF_SCR_RXAUTOSYNC_MASK                (0x40000U)
#define SPDIF_SCR_RXAUTOSYNC_SHIFT               (18U)
/*! RxAutoSync - RxAutoSync
 *  0b0..Rx FIFO auto sync off
 *  0b1..RxFIFO auto sync on
 */
#define SPDIF_SCR_RXAUTOSYNC(x)                  (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_RXAUTOSYNC_SHIFT)) & SPDIF_SCR_RXAUTOSYNC_MASK)

#define SPDIF_SCR_RXFIFOFULL_SEL_MASK            (0x180000U)
#define SPDIF_SCR_RXFIFOFULL_SEL_SHIFT           (19U)
/*! RxFIFOFull_Sel - RxFIFOFull_Sel
 *  0b00..Full interrupt if at least 1 sample in Rx left and right FIFOs
 *  0b01..Full interrupt if at least 4 sample in Rx left and right FIFOs
 *  0b10..Full interrupt if at least 8 sample in Rx left and right FIFOs
 *  0b11..Full interrupt if at least 16 sample in Rx left and right FIFO
 */
#define SPDIF_SCR_RXFIFOFULL_SEL(x)              (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_RXFIFOFULL_SEL_SHIFT)) & SPDIF_SCR_RXFIFOFULL_SEL_MASK)

#define SPDIF_SCR_RXFIFO_RST_MASK                (0x200000U)
#define SPDIF_SCR_RXFIFO_RST_SHIFT               (21U)
/*! RxFIFO_Rst - RxFIFO_Rst
 *  0b0..Normal operation
 *  0b1..Reset register to 1 sample remaining
 */
#define SPDIF_SCR_RXFIFO_RST(x)                  (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_RXFIFO_RST_SHIFT)) & SPDIF_SCR_RXFIFO_RST_MASK)

#define SPDIF_SCR_RXFIFO_OFF_ON_MASK             (0x400000U)
#define SPDIF_SCR_RXFIFO_OFF_ON_SHIFT            (22U)
/*! RxFIFO_Off_On - RxFIFO_Off_On
 *  0b0..SPDIF Rx FIFO is on
 *  0b1..SPDIF Rx FIFO is off. Does not accept data from interface
 */
#define SPDIF_SCR_RXFIFO_OFF_ON(x)               (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_RXFIFO_OFF_ON_SHIFT)) & SPDIF_SCR_RXFIFO_OFF_ON_MASK)

#define SPDIF_SCR_RXFIFO_CTRL_MASK               (0x800000U)
#define SPDIF_SCR_RXFIFO_CTRL_SHIFT              (23U)
/*! RxFIFO_Ctrl - RxFIFO_Ctrl
 *  0b0..Normal operation
 *  0b1..Always read zero from Rx data register
 */
#define SPDIF_SCR_RXFIFO_CTRL(x)                 (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_RXFIFO_CTRL_SHIFT)) & SPDIF_SCR_RXFIFO_CTRL_MASK)

#define SPDIF_SCR_TXCCHANNEL_192B_EN_MASK        (0x1000000U)
#define SPDIF_SCR_TXCCHANNEL_192B_EN_SHIFT       (24U)
/*! TXCChannel_192b_en - TXCChannel_192b_en
 *  0b0..SPDIF transmits 48 bits of C in audio stream. Other C bits in 49 to 192 frames are 0
 *  0b1..SPDIF transmits 192 bits of C in audio stream
 */
#define SPDIF_SCR_TXCCHANNEL_192B_EN(x)          (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_TXCCHANNEL_192B_EN_SHIFT)) & SPDIF_SCR_TXCCHANNEL_192B_EN_MASK)

#define SPDIF_SCR_RXCCHANNEL_192B_EN_MASK        (0x2000000U)
#define SPDIF_SCR_RXCCHANNEL_192B_EN_SHIFT       (25U)
/*! RXCChannel_192b_en - RXCChannel_192b_en
 *  0b0..SPDIF receives only 48 bits of 192 C bits from input audio stream
 *  0b1..SPDIF receives 192 bits of C in audio stream
 */
#define SPDIF_SCR_RXCCHANNEL_192B_EN(x)          (((uint32_t)(((uint32_t)(x)) << SPDIF_SCR_RXCCHANNEL_192B_EN_SHIFT)) & SPDIF_SCR_RXCCHANNEL_192B_EN_MASK)
/*! @} */

/*! @name SRCD - CDText Control Register */
/*! @{ */

#define SPDIF_SRCD_USYNCMODE_MASK                (0x2U)
#define SPDIF_SRCD_USYNCMODE_SHIFT               (1U)
/*! USyncMode - USyncMode
 *  0b0..Non-CD data
 *  0b1..CD user channel subcode
 */
#define SPDIF_SRCD_USYNCMODE(x)                  (((uint32_t)(((uint32_t)(x)) << SPDIF_SRCD_USYNCMODE_SHIFT)) & SPDIF_SRCD_USYNCMODE_MASK)
/*! @} */

/*! @name SRPC - PhaseConfig Register */
/*! @{ */

#define SPDIF_SRPC_GAINSEL_MASK                  (0x38U)
#define SPDIF_SRPC_GAINSEL_SHIFT                 (3U)
/*! GainSel - GainSel
 *  0b000..24*(2**10)
 *  0b001..16*(2**10)
 *  0b010..12*(2**10)
 *  0b011..8*(2**10)
 *  0b100..6*(2**10)
 *  0b101..4*(2**10)
 *  0b110..3*(2**10)
 *  0b111..Reserved
 */
#define SPDIF_SRPC_GAINSEL(x)                    (((uint32_t)(((uint32_t)(x)) << SPDIF_SRPC_GAINSEL_SHIFT)) & SPDIF_SRPC_GAINSEL_MASK)

#define SPDIF_SRPC_LOCK_MASK                     (0x40U)
#define SPDIF_SRPC_LOCK_SHIFT                    (6U)
/*! LOCK - LOCK */
#define SPDIF_SRPC_LOCK(x)                       (((uint32_t)(((uint32_t)(x)) << SPDIF_SRPC_LOCK_SHIFT)) & SPDIF_SRPC_LOCK_MASK)

#define SPDIF_SRPC_CLKSRC_SEL_MASK               (0x780U)
#define SPDIF_SRPC_CLKSRC_SEL_SHIFT              (7U)
/*! ClkSrc_Sel - ClkSrc_Sel
 *  0b0000..if (DPLL Locked) SPDIF_RxClk else REF_CLK_32K (XTALOSC)
 *  0b0001..if (DPLL Locked) SPDIF_RxClk else tx_clk (SPDIF0_CLK_ROOT)
 *  0b0011..if (DPLL Locked) SPDIF_RxClk else SPDIF_EXT_CLK
 *  0b0101..REF_CLK_32K (XTALOSC)
 *  0b0110..tx_clk (SPDIF0_CLK_ROOT)
 *  0b1000..SPDIF_EXT_CLK
 */
#define SPDIF_SRPC_CLKSRC_SEL(x)                 (((uint32_t)(((uint32_t)(x)) << SPDIF_SRPC_CLKSRC_SEL_SHIFT)) & SPDIF_SRPC_CLKSRC_SEL_MASK)
/*! @} */

/*! @name SIE - InterruptEn Register */
/*! @{ */

#define SPDIF_SIE_RXFIFOFUL_MASK                 (0x1U)
#define SPDIF_SIE_RXFIFOFUL_SHIFT                (0U)
/*! RxFIFOFul - RxFIFOFul */
#define SPDIF_SIE_RXFIFOFUL(x)                   (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_RXFIFOFUL_SHIFT)) & SPDIF_SIE_RXFIFOFUL_MASK)

#define SPDIF_SIE_TXEM_MASK                      (0x2U)
#define SPDIF_SIE_TXEM_SHIFT                     (1U)
/*! TxEm - TxEm */
#define SPDIF_SIE_TXEM(x)                        (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_TXEM_SHIFT)) & SPDIF_SIE_TXEM_MASK)

#define SPDIF_SIE_LOCKLOSS_MASK                  (0x4U)
#define SPDIF_SIE_LOCKLOSS_SHIFT                 (2U)
/*! LockLoss - LockLoss */
#define SPDIF_SIE_LOCKLOSS(x)                    (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_LOCKLOSS_SHIFT)) & SPDIF_SIE_LOCKLOSS_MASK)

#define SPDIF_SIE_RXFIFORESYN_MASK               (0x8U)
#define SPDIF_SIE_RXFIFORESYN_SHIFT              (3U)
/*! RxFIFOResyn - RxFIFOResyn */
#define SPDIF_SIE_RXFIFORESYN(x)                 (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_RXFIFORESYN_SHIFT)) & SPDIF_SIE_RXFIFORESYN_MASK)

#define SPDIF_SIE_RXFIFOUNOV_MASK                (0x10U)
#define SPDIF_SIE_RXFIFOUNOV_SHIFT               (4U)
/*! RxFIFOUnOv - RxFIFOUnOv */
#define SPDIF_SIE_RXFIFOUNOV(x)                  (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_RXFIFOUNOV_SHIFT)) & SPDIF_SIE_RXFIFOUNOV_MASK)

#define SPDIF_SIE_UQERR_MASK                     (0x20U)
#define SPDIF_SIE_UQERR_SHIFT                    (5U)
/*! UQErr - UQErr */
#define SPDIF_SIE_UQERR(x)                       (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_UQERR_SHIFT)) & SPDIF_SIE_UQERR_MASK)

#define SPDIF_SIE_UQSYNC_MASK                    (0x40U)
#define SPDIF_SIE_UQSYNC_SHIFT                   (6U)
/*! UQSync - UQSync */
#define SPDIF_SIE_UQSYNC(x)                      (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_UQSYNC_SHIFT)) & SPDIF_SIE_UQSYNC_MASK)

#define SPDIF_SIE_QRXOV_MASK                     (0x80U)
#define SPDIF_SIE_QRXOV_SHIFT                    (7U)
/*! QRxOv - QRxOv */
#define SPDIF_SIE_QRXOV(x)                       (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_QRXOV_SHIFT)) & SPDIF_SIE_QRXOV_MASK)

#define SPDIF_SIE_QRXFUL_MASK                    (0x100U)
#define SPDIF_SIE_QRXFUL_SHIFT                   (8U)
/*! QRxFul - QRxFul */
#define SPDIF_SIE_QRXFUL(x)                      (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_QRXFUL_SHIFT)) & SPDIF_SIE_QRXFUL_MASK)

#define SPDIF_SIE_URXOV_MASK                     (0x200U)
#define SPDIF_SIE_URXOV_SHIFT                    (9U)
/*! URxOv - URxOv */
#define SPDIF_SIE_URXOV(x)                       (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_URXOV_SHIFT)) & SPDIF_SIE_URXOV_MASK)

#define SPDIF_SIE_URXFUL_MASK                    (0x400U)
#define SPDIF_SIE_URXFUL_SHIFT                   (10U)
/*! URxFul - URxFul */
#define SPDIF_SIE_URXFUL(x)                      (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_URXFUL_SHIFT)) & SPDIF_SIE_URXFUL_MASK)

#define SPDIF_SIE_BITERR_MASK                    (0x4000U)
#define SPDIF_SIE_BITERR_SHIFT                   (14U)
/*! BitErr - BitErr */
#define SPDIF_SIE_BITERR(x)                      (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_BITERR_SHIFT)) & SPDIF_SIE_BITERR_MASK)

#define SPDIF_SIE_SYMERR_MASK                    (0x8000U)
#define SPDIF_SIE_SYMERR_SHIFT                   (15U)
/*! SymErr - SymErr */
#define SPDIF_SIE_SYMERR(x)                      (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_SYMERR_SHIFT)) & SPDIF_SIE_SYMERR_MASK)

#define SPDIF_SIE_VALNOGOOD_MASK                 (0x10000U)
#define SPDIF_SIE_VALNOGOOD_SHIFT                (16U)
/*! ValNoGood - ValNoGood */
#define SPDIF_SIE_VALNOGOOD(x)                   (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_VALNOGOOD_SHIFT)) & SPDIF_SIE_VALNOGOOD_MASK)

#define SPDIF_SIE_CNEW_MASK                      (0x20000U)
#define SPDIF_SIE_CNEW_SHIFT                     (17U)
/*! CNew - CNew */
#define SPDIF_SIE_CNEW(x)                        (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_CNEW_SHIFT)) & SPDIF_SIE_CNEW_MASK)

#define SPDIF_SIE_TXRESYN_MASK                   (0x40000U)
#define SPDIF_SIE_TXRESYN_SHIFT                  (18U)
/*! TxResyn - TxResyn */
#define SPDIF_SIE_TXRESYN(x)                     (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_TXRESYN_SHIFT)) & SPDIF_SIE_TXRESYN_MASK)

#define SPDIF_SIE_TXUNOV_MASK                    (0x80000U)
#define SPDIF_SIE_TXUNOV_SHIFT                   (19U)
/*! TxUnOv - TxUnOv */
#define SPDIF_SIE_TXUNOV(x)                      (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_TXUNOV_SHIFT)) & SPDIF_SIE_TXUNOV_MASK)

#define SPDIF_SIE_LOCK_MASK                      (0x100000U)
#define SPDIF_SIE_LOCK_SHIFT                     (20U)
/*! Lock - Lock */
#define SPDIF_SIE_LOCK(x)                        (((uint32_t)(((uint32_t)(x)) << SPDIF_SIE_LOCK_SHIFT)) & SPDIF_SIE_LOCK_MASK)
/*! @} */

/*! @name SIS - InterruptStat Register */
/*! @{ */

#define SPDIF_SIS_RXFIFOFUL_MASK                 (0x1U)
#define SPDIF_SIS_RXFIFOFUL_SHIFT                (0U)
/*! RxFIFOFul - RxFIFOFul */
#define SPDIF_SIS_RXFIFOFUL(x)                   (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_RXFIFOFUL_SHIFT)) & SPDIF_SIS_RXFIFOFUL_MASK)

#define SPDIF_SIS_TXEM_MASK                      (0x2U)
#define SPDIF_SIS_TXEM_SHIFT                     (1U)
/*! TxEm - TxEm */
#define SPDIF_SIS_TXEM(x)                        (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_TXEM_SHIFT)) & SPDIF_SIS_TXEM_MASK)

#define SPDIF_SIS_LOCKLOSS_MASK                  (0x4U)
#define SPDIF_SIS_LOCKLOSS_SHIFT                 (2U)
/*! LockLoss - LockLoss */
#define SPDIF_SIS_LOCKLOSS(x)                    (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_LOCKLOSS_SHIFT)) & SPDIF_SIS_LOCKLOSS_MASK)

#define SPDIF_SIS_RXFIFORESYN_MASK               (0x8U)
#define SPDIF_SIS_RXFIFORESYN_SHIFT              (3U)
/*! RxFIFOResyn - RxFIFOResyn */
#define SPDIF_SIS_RXFIFORESYN(x)                 (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_RXFIFORESYN_SHIFT)) & SPDIF_SIS_RXFIFORESYN_MASK)

#define SPDIF_SIS_RXFIFOUNOV_MASK                (0x10U)
#define SPDIF_SIS_RXFIFOUNOV_SHIFT               (4U)
/*! RxFIFOUnOv - RxFIFOUnOv */
#define SPDIF_SIS_RXFIFOUNOV(x)                  (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_RXFIFOUNOV_SHIFT)) & SPDIF_SIS_RXFIFOUNOV_MASK)

#define SPDIF_SIS_UQERR_MASK                     (0x20U)
#define SPDIF_SIS_UQERR_SHIFT                    (5U)
/*! UQErr - UQErr */
#define SPDIF_SIS_UQERR(x)                       (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_UQERR_SHIFT)) & SPDIF_SIS_UQERR_MASK)

#define SPDIF_SIS_UQSYNC_MASK                    (0x40U)
#define SPDIF_SIS_UQSYNC_SHIFT                   (6U)
/*! UQSync - UQSync */
#define SPDIF_SIS_UQSYNC(x)                      (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_UQSYNC_SHIFT)) & SPDIF_SIS_UQSYNC_MASK)

#define SPDIF_SIS_QRXOV_MASK                     (0x80U)
#define SPDIF_SIS_QRXOV_SHIFT                    (7U)
/*! QRxOv - QRxOv */
#define SPDIF_SIS_QRXOV(x)                       (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_QRXOV_SHIFT)) & SPDIF_SIS_QRXOV_MASK)

#define SPDIF_SIS_QRXFUL_MASK                    (0x100U)
#define SPDIF_SIS_QRXFUL_SHIFT                   (8U)
/*! QRxFul - QRxFul */
#define SPDIF_SIS_QRXFUL(x)                      (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_QRXFUL_SHIFT)) & SPDIF_SIS_QRXFUL_MASK)

#define SPDIF_SIS_URXOV_MASK                     (0x200U)
#define SPDIF_SIS_URXOV_SHIFT                    (9U)
/*! URxOv - URxOv */
#define SPDIF_SIS_URXOV(x)                       (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_URXOV_SHIFT)) & SPDIF_SIS_URXOV_MASK)

#define SPDIF_SIS_URXFUL_MASK                    (0x400U)
#define SPDIF_SIS_URXFUL_SHIFT                   (10U)
/*! URxFul - URxFul */
#define SPDIF_SIS_URXFUL(x)                      (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_URXFUL_SHIFT)) & SPDIF_SIS_URXFUL_MASK)

#define SPDIF_SIS_BITERR_MASK                    (0x4000U)
#define SPDIF_SIS_BITERR_SHIFT                   (14U)
/*! BitErr - BitErr */
#define SPDIF_SIS_BITERR(x)                      (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_BITERR_SHIFT)) & SPDIF_SIS_BITERR_MASK)

#define SPDIF_SIS_SYMERR_MASK                    (0x8000U)
#define SPDIF_SIS_SYMERR_SHIFT                   (15U)
/*! SymErr - SymErr */
#define SPDIF_SIS_SYMERR(x)                      (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_SYMERR_SHIFT)) & SPDIF_SIS_SYMERR_MASK)

#define SPDIF_SIS_VALNOGOOD_MASK                 (0x10000U)
#define SPDIF_SIS_VALNOGOOD_SHIFT                (16U)
/*! ValNoGood - ValNoGood */
#define SPDIF_SIS_VALNOGOOD(x)                   (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_VALNOGOOD_SHIFT)) & SPDIF_SIS_VALNOGOOD_MASK)

#define SPDIF_SIS_CNEW_MASK                      (0x20000U)
#define SPDIF_SIS_CNEW_SHIFT                     (17U)
/*! CNew - CNew */
#define SPDIF_SIS_CNEW(x)                        (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_CNEW_SHIFT)) & SPDIF_SIS_CNEW_MASK)

#define SPDIF_SIS_TXRESYN_MASK                   (0x40000U)
#define SPDIF_SIS_TXRESYN_SHIFT                  (18U)
/*! TxResyn - TxResyn */
#define SPDIF_SIS_TXRESYN(x)                     (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_TXRESYN_SHIFT)) & SPDIF_SIS_TXRESYN_MASK)

#define SPDIF_SIS_TXUNOV_MASK                    (0x80000U)
#define SPDIF_SIS_TXUNOV_SHIFT                   (19U)
/*! TxUnOv - TxUnOv */
#define SPDIF_SIS_TXUNOV(x)                      (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_TXUNOV_SHIFT)) & SPDIF_SIS_TXUNOV_MASK)

#define SPDIF_SIS_LOCK_MASK                      (0x100000U)
#define SPDIF_SIS_LOCK_SHIFT                     (20U)
/*! Lock - Lock */
#define SPDIF_SIS_LOCK(x)                        (((uint32_t)(((uint32_t)(x)) << SPDIF_SIS_LOCK_SHIFT)) & SPDIF_SIS_LOCK_MASK)
/*! @} */

/*! @name SRL - SPDIFRxLeft Register */
/*! @{ */

#define SPDIF_SRL_RXDATALEFT_MASK                (0xFFFFFFU)
#define SPDIF_SRL_RXDATALEFT_SHIFT               (0U)
/*! RxDataLeft - RxDataLeft */
#define SPDIF_SRL_RXDATALEFT(x)                  (((uint32_t)(((uint32_t)(x)) << SPDIF_SRL_RXDATALEFT_SHIFT)) & SPDIF_SRL_RXDATALEFT_MASK)
/*! @} */

/*! @name SRR - SPDIFRxRight Register */
/*! @{ */

#define SPDIF_SRR_RXDATARIGHT_MASK               (0xFFFFFFU)
#define SPDIF_SRR_RXDATARIGHT_SHIFT              (0U)
/*! RxDataRight - RxDataRight */
#define SPDIF_SRR_RXDATARIGHT(x)                 (((uint32_t)(((uint32_t)(x)) << SPDIF_SRR_RXDATARIGHT_SHIFT)) & SPDIF_SRR_RXDATARIGHT_MASK)
/*! @} */

/*! @name SRCSH - SPDIFRxCChannel_h Register */
/*! @{ */

#define SPDIF_SRCSH_RXCCHANNEL_H_MASK            (0xFFFFFFU)
#define SPDIF_SRCSH_RXCCHANNEL_H_SHIFT           (0U)
/*! RxCChannel_h - RxCChannel_h */
#define SPDIF_SRCSH_RXCCHANNEL_H(x)              (((uint32_t)(((uint32_t)(x)) << SPDIF_SRCSH_RXCCHANNEL_H_SHIFT)) & SPDIF_SRCSH_RXCCHANNEL_H_MASK)
/*! @} */

/*! @name SRCSL - SPDIFRxCChannel_l Register */
/*! @{ */

#define SPDIF_SRCSL_RXCCHANNEL_L_MASK            (0xFFFFFFU)
#define SPDIF_SRCSL_RXCCHANNEL_L_SHIFT           (0U)
/*! RxCChannel_l - RxCChannel_l */
#define SPDIF_SRCSL_RXCCHANNEL_L(x)              (((uint32_t)(((uint32_t)(x)) << SPDIF_SRCSL_RXCCHANNEL_L_SHIFT)) & SPDIF_SRCSL_RXCCHANNEL_L_MASK)
/*! @} */

/*! @name SRU - UchannelRx Register */
/*! @{ */

#define SPDIF_SRU_RXUCHANNEL_MASK                (0xFFFFFFU)
#define SPDIF_SRU_RXUCHANNEL_SHIFT               (0U)
/*! RxUChannel - RxUChannel */
#define SPDIF_SRU_RXUCHANNEL(x)                  (((uint32_t)(((uint32_t)(x)) << SPDIF_SRU_RXUCHANNEL_SHIFT)) & SPDIF_SRU_RXUCHANNEL_MASK)
/*! @} */

/*! @name SRQ - QchannelRx Register */
/*! @{ */

#define SPDIF_SRQ_RXQCHANNEL_MASK                (0xFFFFFFU)
#define SPDIF_SRQ_RXQCHANNEL_SHIFT               (0U)
/*! RxQChannel - RxQChannel */
#define SPDIF_SRQ_RXQCHANNEL(x)                  (((uint32_t)(((uint32_t)(x)) << SPDIF_SRQ_RXQCHANNEL_SHIFT)) & SPDIF_SRQ_RXQCHANNEL_MASK)
/*! @} */

/*! @name STL - SPDIFTxLeft Register */
/*! @{ */

#define SPDIF_STL_TXDATALEFT_MASK                (0xFFFFFFU)
#define SPDIF_STL_TXDATALEFT_SHIFT               (0U)
/*! TxDataLeft - TxDataLeft */
#define SPDIF_STL_TXDATALEFT(x)                  (((uint32_t)(((uint32_t)(x)) << SPDIF_STL_TXDATALEFT_SHIFT)) & SPDIF_STL_TXDATALEFT_MASK)
/*! @} */

/*! @name STR - SPDIFTxRight Register */
/*! @{ */

#define SPDIF_STR_TXDATARIGHT_MASK               (0xFFFFFFU)
#define SPDIF_STR_TXDATARIGHT_SHIFT              (0U)
/*! TxDataRight - TxDataRight */
#define SPDIF_STR_TXDATARIGHT(x)                 (((uint32_t)(((uint32_t)(x)) << SPDIF_STR_TXDATARIGHT_SHIFT)) & SPDIF_STR_TXDATARIGHT_MASK)
/*! @} */

/*! @name STCSCH - SPDIFTxCChannelCons_h Register */
/*! @{ */

#define SPDIF_STCSCH_TXCCHANNELCONS_H_MASK       (0xFFFFFFU)
#define SPDIF_STCSCH_TXCCHANNELCONS_H_SHIFT      (0U)
/*! TxCChannelCons_h - TxCChannelCons_h */
#define SPDIF_STCSCH_TXCCHANNELCONS_H(x)         (((uint32_t)(((uint32_t)(x)) << SPDIF_STCSCH_TXCCHANNELCONS_H_SHIFT)) & SPDIF_STCSCH_TXCCHANNELCONS_H_MASK)
/*! @} */

/*! @name STCSCL - SPDIFTxCChannelCons_l Register */
/*! @{ */

#define SPDIF_STCSCL_TXCCHANNELCONS_L_MASK       (0xFFFFFFU)
#define SPDIF_STCSCL_TXCCHANNELCONS_L_SHIFT      (0U)
/*! TxCChannelCons_l - TxCChannelCons_l */
#define SPDIF_STCSCL_TXCCHANNELCONS_L(x)         (((uint32_t)(((uint32_t)(x)) << SPDIF_STCSCL_TXCCHANNELCONS_L_SHIFT)) & SPDIF_STCSCL_TXCCHANNELCONS_L_MASK)
/*! @} */

/*! @name SRFM - FreqMeas Register */
/*! @{ */

#define SPDIF_SRFM_FREQMEAS_MASK                 (0xFFFFFFU)
#define SPDIF_SRFM_FREQMEAS_SHIFT                (0U)
/*! FreqMeas - FreqMeas */
#define SPDIF_SRFM_FREQMEAS(x)                   (((uint32_t)(((uint32_t)(x)) << SPDIF_SRFM_FREQMEAS_SHIFT)) & SPDIF_SRFM_FREQMEAS_MASK)
/*! @} */

/*! @name STC - SPDIFTxClk Register */
/*! @{ */

#define SPDIF_STC_TXCLK_DF_MASK                  (0x7FU)
#define SPDIF_STC_TXCLK_DF_SHIFT                 (0U)
/*! TxClk_DF - TxClk_DF
 *  0b0000000..divider factor is 1
 *  0b0000001..divider factor is 2
 *  0b1111111..divider factor is 128
 */
#define SPDIF_STC_TXCLK_DF(x)                    (((uint32_t)(((uint32_t)(x)) << SPDIF_STC_TXCLK_DF_SHIFT)) & SPDIF_STC_TXCLK_DF_MASK)

#define SPDIF_STC_TX_ALL_CLK_EN_MASK             (0x80U)
#define SPDIF_STC_TX_ALL_CLK_EN_SHIFT            (7U)
/*! tx_all_clk_en - tx_all_clk_en
 *  0b0..disable transfer clock.
 *  0b1..enable transfer clock.
 */
#define SPDIF_STC_TX_ALL_CLK_EN(x)               (((uint32_t)(((uint32_t)(x)) << SPDIF_STC_TX_ALL_CLK_EN_SHIFT)) & SPDIF_STC_TX_ALL_CLK_EN_MASK)

#define SPDIF_STC_TXCLK_SOURCE_MASK              (0x700U)
#define SPDIF_STC_TXCLK_SOURCE_SHIFT             (8U)
/*! TxClk_Source - TxClk_Source */
#define SPDIF_STC_TXCLK_SOURCE(x)                (((uint32_t)(((uint32_t)(x)) << SPDIF_STC_TXCLK_SOURCE_SHIFT)) & SPDIF_STC_TXCLK_SOURCE_MASK)

#define SPDIF_STC_SYSCLK_DF_MASK                 (0xFF800U)
#define SPDIF_STC_SYSCLK_DF_SHIFT                (11U)
/*! SYSCLK_DF - SYSCLK_DF
 *  0b000000000..no clock signal
 *  0b000000001..divider factor is 2
 *  0b111111111..divider factor is 512
 */
#define SPDIF_STC_SYSCLK_DF(x)                   (((uint32_t)(((uint32_t)(x)) << SPDIF_STC_SYSCLK_DF_SHIFT)) & SPDIF_STC_SYSCLK_DF_MASK)
/*! @} */

/*! @name SPDIFRXCCHANNEL_ADDR_31_0 - SPDIF receive C channel register, bits 31-0 */
/*! @{ */

#define SPDIF_SPDIFRXCCHANNEL_ADDR_31_0_RXCCHANNEL_ADDR_31_0_MASK (0xFFFFFFFFU)
#define SPDIF_SPDIFRXCCHANNEL_ADDR_31_0_RXCCHANNEL_ADDR_31_0_SHIFT (0U)
/*! RxCChannel_Addr_31_0 - RxCChannel_Addr_31_0 */
#define SPDIF_SPDIFRXCCHANNEL_ADDR_31_0_RXCCHANNEL_ADDR_31_0(x) (((uint32_t)(((uint32_t)(x)) << SPDIF_SPDIFRXCCHANNEL_ADDR_31_0_RXCCHANNEL_ADDR_31_0_SHIFT)) & SPDIF_SPDIFRXCCHANNEL_ADDR_31_0_RXCCHANNEL_ADDR_31_0_MASK)
/*! @} */

/*! @name SPDIFRXCCHANNEL_ADDR_63_32 - SPDIF receive C channel register, bits 63-32 */
/*! @{ */

#define SPDIF_SPDIFRXCCHANNEL_ADDR_63_32_RXCCHANNEL_ADDR_63_32_MASK (0xFFFFFFFFU)
#define SPDIF_SPDIFRXCCHANNEL_ADDR_63_32_RXCCHANNEL_ADDR_63_32_SHIFT (0U)
/*! RxCChannel_Addr_63_32 - RxCChannel_Addr_63_32 */
#define SPDIF_SPDIFRXCCHANNEL_ADDR_63_32_RXCCHANNEL_ADDR_63_32(x) (((uint32_t)(((uint32_t)(x)) << SPDIF_SPDIFRXCCHANNEL_ADDR_63_32_RXCCHANNEL_ADDR_63_32_SHIFT)) & SPDIF_SPDIFRXCCHANNEL_ADDR_63_32_RXCCHANNEL_ADDR_63_32_MASK)
/*! @} */

/*! @name SPDIFRXCCHANNEL_ADDR_95_64 - SPDIF receive C channel register, bits 95-64 */
/*! @{ */

#define SPDIF_SPDIFRXCCHANNEL_ADDR_95_64_RXCCHANNEL_ADDR_95_64_MASK (0xFFFFFFFFU)
#define SPDIF_SPDIFRXCCHANNEL_ADDR_95_64_RXCCHANNEL_ADDR_95_64_SHIFT (0U)
/*! RxCChannel_Addr_95_64 - RxCChannel_Addr_95_64 */
#define SPDIF_SPDIFRXCCHANNEL_ADDR_95_64_RXCCHANNEL_ADDR_95_64(x) (((uint32_t)(((uint32_t)(x)) << SPDIF_SPDIFRXCCHANNEL_ADDR_95_64_RXCCHANNEL_ADDR_95_64_SHIFT)) & SPDIF_SPDIFRXCCHANNEL_ADDR_95_64_RXCCHANNEL_ADDR_95_64_MASK)
/*! @} */

/*! @name SPDIFRXCCHANNEL_ADDR_127_96 - SPDIF receive C channel register, bits 127-96 */
/*! @{ */

#define SPDIF_SPDIFRXCCHANNEL_ADDR_127_96_RXCCHANNEL_ADDR_127_96_MASK (0xFFFFFFFFU)
#define SPDIF_SPDIFRXCCHANNEL_ADDR_127_96_RXCCHANNEL_ADDR_127_96_SHIFT (0U)
/*! RxCChannel_Addr_127_96 - RxCChannel_Addr_127_96 */
#define SPDIF_SPDIFRXCCHANNEL_ADDR_127_96_RXCCHANNEL_ADDR_127_96(x) (((uint32_t)(((uint32_t)(x)) << SPDIF_SPDIFRXCCHANNEL_ADDR_127_96_RXCCHANNEL_ADDR_127_96_SHIFT)) & SPDIF_SPDIFRXCCHANNEL_ADDR_127_96_RXCCHANNEL_ADDR_127_96_MASK)
/*! @} */

/*! @name SPDIFRXCCHANNEL_ADDR_159_128 - SPDIF receive C channel register, bits 159-128 */
/*! @{ */

#define SPDIF_SPDIFRXCCHANNEL_ADDR_159_128_RXCCHANNEL_ADDR_159_128_MASK (0xFFFFFFFFU)
#define SPDIF_SPDIFRXCCHANNEL_ADDR_159_128_RXCCHANNEL_ADDR_159_128_SHIFT (0U)
/*! RxCChannel_Addr_159_128 - RxCChannel_Addr_159_128 */
#define SPDIF_SPDIFRXCCHANNEL_ADDR_159_128_RXCCHANNEL_ADDR_159_128(x) (((uint32_t)(((uint32_t)(x)) << SPDIF_SPDIFRXCCHANNEL_ADDR_159_128_RXCCHANNEL_ADDR_159_128_SHIFT)) & SPDIF_SPDIFRXCCHANNEL_ADDR_159_128_RXCCHANNEL_ADDR_159_128_MASK)
/*! @} */

/*! @name SPDIFRXCCHANNEL_ADDR_191_160 - SPDIF receive C channel register, bits 191-160 */
/*! @{ */

#define SPDIF_SPDIFRXCCHANNEL_ADDR_191_160_RXCCHANNEL_ADDR_191_160_MASK (0xFFFFFFFFU)
#define SPDIF_SPDIFRXCCHANNEL_ADDR_191_160_RXCCHANNEL_ADDR_191_160_SHIFT (0U)
/*! RxCChannel_Addr_191_160 - RxCChannel_Addr_191_160 */
#define SPDIF_SPDIFRXCCHANNEL_ADDR_191_160_RXCCHANNEL_ADDR_191_160(x) (((uint32_t)(((uint32_t)(x)) << SPDIF_SPDIFRXCCHANNEL_ADDR_191_160_RXCCHANNEL_ADDR_191_160_SHIFT)) & SPDIF_SPDIFRXCCHANNEL_ADDR_191_160_RXCCHANNEL_ADDR_191_160_MASK)
/*! @} */

/*! @name SPDIFTXCCHANNEL_ADDR_31_0 - SPDIF transmit C channel register, bits 31-0 */
/*! @{ */

#define SPDIF_SPDIFTXCCHANNEL_ADDR_31_0_TXCCHANNEL_ADDR_31_0_MASK (0xFFFFFFFFU)
#define SPDIF_SPDIFTXCCHANNEL_ADDR_31_0_TXCCHANNEL_ADDR_31_0_SHIFT (0U)
/*! TxCChannel_Addr_31_0 - TxCChannel_Addr_31_0 */
#define SPDIF_SPDIFTXCCHANNEL_ADDR_31_0_TXCCHANNEL_ADDR_31_0(x) (((uint32_t)(((uint32_t)(x)) << SPDIF_SPDIFTXCCHANNEL_ADDR_31_0_TXCCHANNEL_ADDR_31_0_SHIFT)) & SPDIF_SPDIFTXCCHANNEL_ADDR_31_0_TXCCHANNEL_ADDR_31_0_MASK)
/*! @} */

/*! @name SPDIFTXCCHANNEL_ADDR_63_32 - SPDIF transmit C channel register, bits 63-32 */
/*! @{ */

#define SPDIF_SPDIFTXCCHANNEL_ADDR_63_32_TXCCHANNEL_ADDR_63_32_MASK (0xFFFFFFFFU)
#define SPDIF_SPDIFTXCCHANNEL_ADDR_63_32_TXCCHANNEL_ADDR_63_32_SHIFT (0U)
/*! TxCChannel_Addr_63_32 - TxCChannel_Addr_63_32 */
#define SPDIF_SPDIFTXCCHANNEL_ADDR_63_32_TXCCHANNEL_ADDR_63_32(x) (((uint32_t)(((uint32_t)(x)) << SPDIF_SPDIFTXCCHANNEL_ADDR_63_32_TXCCHANNEL_ADDR_63_32_SHIFT)) & SPDIF_SPDIFTXCCHANNEL_ADDR_63_32_TXCCHANNEL_ADDR_63_32_MASK)
/*! @} */

/*! @name SPDIFTXCCHANNEL_ADDR_95_64 - SPDIF transmit C channel register, bits 95-64 */
/*! @{ */

#define SPDIF_SPDIFTXCCHANNEL_ADDR_95_64_TXCCHANNEL_ADDR_95_64_MASK (0xFFFFFFFFU)
#define SPDIF_SPDIFTXCCHANNEL_ADDR_95_64_TXCCHANNEL_ADDR_95_64_SHIFT (0U)
/*! TxCChannel_Addr_95_64 - TxCChannel_Addr_95_64 */
#define SPDIF_SPDIFTXCCHANNEL_ADDR_95_64_TXCCHANNEL_ADDR_95_64(x) (((uint32_t)(((uint32_t)(x)) << SPDIF_SPDIFTXCCHANNEL_ADDR_95_64_TXCCHANNEL_ADDR_95_64_SHIFT)) & SPDIF_SPDIFTXCCHANNEL_ADDR_95_64_TXCCHANNEL_ADDR_95_64_MASK)
/*! @} */

/*! @name SPDIFTXCCHANNEL_ADDR_127_96 - SPDIF transmit C channel register, bits 127-96 */
/*! @{ */

#define SPDIF_SPDIFTXCCHANNEL_ADDR_127_96_TXCCHANNEL_ADDR_127_96_MASK (0xFFFFFFFFU)
#define SPDIF_SPDIFTXCCHANNEL_ADDR_127_96_TXCCHANNEL_ADDR_127_96_SHIFT (0U)
/*! TxCChannel_Addr_127_96 - TxCChannel_Addr_127_96 */
#define SPDIF_SPDIFTXCCHANNEL_ADDR_127_96_TXCCHANNEL_ADDR_127_96(x) (((uint32_t)(((uint32_t)(x)) << SPDIF_SPDIFTXCCHANNEL_ADDR_127_96_TXCCHANNEL_ADDR_127_96_SHIFT)) & SPDIF_SPDIFTXCCHANNEL_ADDR_127_96_TXCCHANNEL_ADDR_127_96_MASK)
/*! @} */

/*! @name SPDIFTXCCHANNEL_ADDR_159_128 - SPDIF transmit C channel register, bits 159-128 */
/*! @{ */

#define SPDIF_SPDIFTXCCHANNEL_ADDR_159_128_TXCCHANNEL_ADDR_159_128_MASK (0xFFFFFFFFU)
#define SPDIF_SPDIFTXCCHANNEL_ADDR_159_128_TXCCHANNEL_ADDR_159_128_SHIFT (0U)
/*! TxCChannel_Addr_159_128 - TxCChannel_Addr_159_128 */
#define SPDIF_SPDIFTXCCHANNEL_ADDR_159_128_TXCCHANNEL_ADDR_159_128(x) (((uint32_t)(((uint32_t)(x)) << SPDIF_SPDIFTXCCHANNEL_ADDR_159_128_TXCCHANNEL_ADDR_159_128_SHIFT)) & SPDIF_SPDIFTXCCHANNEL_ADDR_159_128_TXCCHANNEL_ADDR_159_128_MASK)
/*! @} */

/*! @name SPDIFTXCCHANNEL_ADDR_191_160 - SPDIF transmit C channel register, bits 191-160 */
/*! @{ */

#define SPDIF_SPDIFTXCCHANNEL_ADDR_191_160_TXCCHANNEL_ADDR_191_160_MASK (0xFFFFFFFFU)
#define SPDIF_SPDIFTXCCHANNEL_ADDR_191_160_TXCCHANNEL_ADDR_191_160_SHIFT (0U)
/*! TxCChannel_Addr_191_160 - TxCChannel_Addr_191_160 */
#define SPDIF_SPDIFTXCCHANNEL_ADDR_191_160_TXCCHANNEL_ADDR_191_160(x) (((uint32_t)(((uint32_t)(x)) << SPDIF_SPDIFTXCCHANNEL_ADDR_191_160_TXCCHANNEL_ADDR_191_160_SHIFT)) & SPDIF_SPDIFTXCCHANNEL_ADDR_191_160_TXCCHANNEL_ADDR_191_160_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group SPDIF_Register_Masks */


/*!
 * @}
 */ /* end of group SPDIF_Peripheral_Access_Layer */


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


#endif  /* PERI_SPDIF_H_ */

