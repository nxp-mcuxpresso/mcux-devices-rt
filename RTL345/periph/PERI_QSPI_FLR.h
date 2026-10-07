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
**         CMSIS Peripheral Access Layer for QSPI_FLR
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
 * @file PERI_QSPI_FLR.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for QSPI_FLR
 *
 * CMSIS Peripheral Access Layer for QSPI_FLR
 */

#if !defined(PERI_QSPI_FLR_H_)
#define PERI_QSPI_FLR_H_                         /**< Symbol preventing repeated inclusion */

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
   -- QSPI_FLR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup QSPI_FLR_Peripheral_Access_Layer QSPI_FLR Peripheral Access Layer
 * @{
 */

/** QSPI_FLR - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[768];
  __IO uint32_t CFG;                               /**< Configuration Register, offset: 0x300 */
  __IO uint32_t QSPI_CMD_ADDR_MODE_DUMMY_CYL;      /**< Command Address Mode and Dummy Cycle Register, offset: 0x304 */
  __I  uint32_t STAT;                              /**< Status Register, offset: 0x308 */
  __IO uint32_t INTENSET;                          /**< Interrupt Enable Register, offset: 0x30C */
  __O  uint32_t INTENCLR;                          /**< Interrupt Enable Clear Register, offset: 0x310 */
       uint8_t RESERVED_1[20];
  __I  uint32_t INTSTAT;                           /**< Interrupt Status Register, offset: 0x328 */
       uint8_t RESERVED_2[2772];
  __IO uint32_t FIFOCFG;                           /**< FIFO Configuration Register, offset: 0xE00 */
  __IO uint32_t FIFOSTAT;                          /**< FIFO Status Register, offset: 0xE04 */
  __IO uint32_t FIFOTRIG;                          /**< FIFO Trigger Register, offset: 0xE08 */
       uint8_t RESERVED_3[4];
  __IO uint32_t FIFOINTENSET;                      /**< FIFO Interrupt Enable Register, offset: 0xE10 */
  __IO uint32_t FIFOINTENCLR;                      /**< FIFO Interrupt Enable Clear Register, offset: 0xE14 */
  __I  uint32_t FIFOINTSTAT;                       /**< FIFO Interrupt Status Register, offset: 0xE18 */
       uint8_t RESERVED_4[4];
  __O  uint32_t FIFOWR;                            /**< FIFO Write Data Register, offset: 0xE20 */
       uint8_t RESERVED_5[12];
  __I  uint32_t FIFORD;                            /**< FIFO Read Data Register, offset: 0xE30 */
       uint8_t RESERVED_6[12];
  __I  uint32_t FIFORDNOPOP;                       /**< FIFO Data Read with no FIFO Pop Register, offset: 0xE40 */
       uint8_t RESERVED_7[4];
  __I  uint32_t FIFOSIZE;                          /**< FIFO Size Register, offset: 0xE48 */
       uint8_t RESERVED_8[432];
  __I  uint32_t ID;                                /**< Peripheral Identification Register, offset: 0xFFC */
} QSPI_FLR_Type;

/* ----------------------------------------------------------------------------
   -- QSPI_FLR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup QSPI_FLR_Register_Masks QSPI_FLR Register Masks
 * @{
 */

/*! @name CFG - Configuration Register */
/*! @{ */

#define QSPI_FLR_CFG_ENABLE_MASK                 (0x1U)
#define QSPI_FLR_CFG_ENABLE_SHIFT                (0U)
/*! ENABLE - SPI Enable
 *  0b0..Disabled. The QSPI_FLR is disabled and the internal state machine and counters are reset.
 *  0b1..Enabled. The QSPI_FLR is enabled for operation.
 */
#define QSPI_FLR_CFG_ENABLE(x)                   (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_CFG_ENABLE_SHIFT)) & QSPI_FLR_CFG_ENABLE_MASK)

#define QSPI_FLR_CFG_CPHA_MASK                   (0x10U)
#define QSPI_FLR_CFG_CPHA_SHIFT                  (4U)
/*! CPHA - Clock Phase Select
 *  0b0..Change
 *  0b1..Capture
 */
#define QSPI_FLR_CFG_CPHA(x)                     (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_CFG_CPHA_SHIFT)) & QSPI_FLR_CFG_CPHA_MASK)

#define QSPI_FLR_CFG_CPOL_MASK                   (0x20U)
#define QSPI_FLR_CFG_CPOL_SHIFT                  (5U)
/*! CPOL - Clock Polarity Select
 *  0b0..Low. The rest state of the clock (between transfers) is low.
 *  0b1..High. The rest state of the clock (between transfers) is high.
 */
#define QSPI_FLR_CFG_CPOL(x)                     (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_CFG_CPOL_SHIFT)) & QSPI_FLR_CFG_CPOL_MASK)
/*! @} */

/*! @name QSPI_CMD_ADDR_MODE_DUMMY_CYL - Command Address Mode and Dummy Cycle Register */
/*! @{ */

#define QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_CMD_MASK (0xFU)
#define QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_CMD_SHIFT (0U)
/*! QSPI_CMD - QSPI_CMD
 *  0b0001..FASTREAD Mode selected
 *  0b0010..READ2O Mode selected
 *  0b0011..READ2IO Mode selected
 *  0b0100..READ4O Mode selected
 *  0b0101..READ4IO Mode selected
 *  0b0110..PP/Write Mode selected
 *  0b0111..PP2O/Write2O Mode selected
 *  0b1000..PP4O/Write4O Mode selected
 *  0b1001..PP4IO/Write4IO Mode selected
 */
#define QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_CMD(x) (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_CMD_SHIFT)) & QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_CMD_MASK)

#define QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_ADDR_MODE_MASK (0x10U)
#define QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_ADDR_MODE_SHIFT (4U)
/*! QSPI_ADDR_MODE - QSPI_ADDR_MODE
 *  0b0..24bit address mode
 *  0b1..32bit address mode
 */
#define QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_ADDR_MODE(x) (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_ADDR_MODE_SHIFT)) & QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_ADDR_MODE_MASK)

#define QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_DUMMY_CYL_MASK (0x60U)
#define QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_DUMMY_CYL_SHIFT (5U)
/*! QSPI_DUMMY_CYL - QSPI_DUMMY_CYL
 *  0b00..No Dummy cycles needed.
 *  0b01..8 Dummy cycles needed.
 *  0b10..6 Dummy cycles needed(4 dummy plus 2 zeros).
 *  0b11..4 Dummy cycles needed.
 */
#define QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_DUMMY_CYL(x) (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_DUMMY_CYL_SHIFT)) & QSPI_FLR_QSPI_CMD_ADDR_MODE_DUMMY_CYL_QSPI_DUMMY_CYL_MASK)
/*! @} */

/*! @name STAT - Status Register */
/*! @{ */

#define QSPI_FLR_STAT_TXUNKNOWN_CMD_MASK         (0x10U)
#define QSPI_FLR_STAT_TXUNKNOWN_CMD_SHIFT        (4U)
/*! TXUNKNOWN_CMD - TXUNKNOWN_CMD Assert */
#define QSPI_FLR_STAT_TXUNKNOWN_CMD(x)           (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_STAT_TXUNKNOWN_CMD_SHIFT)) & QSPI_FLR_STAT_TXUNKNOWN_CMD_MASK)

#define QSPI_FLR_STAT_RXUNKNOWN_CMD_MASK         (0x20U)
#define QSPI_FLR_STAT_RXUNKNOWN_CMD_SHIFT        (5U)
/*! RXUNKNOWN_CMD - RXUNKNOWN_CMD assert */
#define QSPI_FLR_STAT_RXUNKNOWN_CMD(x)           (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_STAT_RXUNKNOWN_CMD_SHIFT)) & QSPI_FLR_STAT_RXUNKNOWN_CMD_MASK)
/*! @} */

/*! @name INTENSET - Interrupt Enable Register */
/*! @{ */

#define QSPI_FLR_INTENSET_TXUNKNOWN_CMD_EN_MASK  (0x10U)
#define QSPI_FLR_INTENSET_TXUNKNOWN_CMD_EN_SHIFT (4U)
/*! TXUNKNOWN_CMD_EN - TX Unknown command Assert Interrupt Enable
 *  0b0..Disabled. No interrupt will be generated when any TXUNKNOWN_CMD transitions from deasserted to asserted.
 *  0b1..Enabled. An interrupt will be generated when any TXUNKNOWN_CMD transitions from deasserted to asserted.
 */
#define QSPI_FLR_INTENSET_TXUNKNOWN_CMD_EN(x)    (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_INTENSET_TXUNKNOWN_CMD_EN_SHIFT)) & QSPI_FLR_INTENSET_TXUNKNOWN_CMD_EN_MASK)

#define QSPI_FLR_INTENSET_RXUNKNOWN_CMD_EN_MASK  (0x20U)
#define QSPI_FLR_INTENSET_RXUNKNOWN_CMD_EN_SHIFT (5U)
/*! RXUNKNOWN_CMD_EN - RX Unknown command Interrupt Enable
 *  0b0..Disabled. No interrupt will be generated when RXUNKNOWN_CMD transitions from transition to deasserted.
 *  0b1..Enabled. An interrupt will be generated when RXUNKNOWN_CMD transitions from deasserted to asserted.
 */
#define QSPI_FLR_INTENSET_RXUNKNOWN_CMD_EN(x)    (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_INTENSET_RXUNKNOWN_CMD_EN_SHIFT)) & QSPI_FLR_INTENSET_RXUNKNOWN_CMD_EN_MASK)
/*! @} */

/*! @name INTENCLR - Interrupt Enable Clear Register */
/*! @{ */

#define QSPI_FLR_INTENCLR_TXUNKNOWN_CMD_EN_MASK  (0x10U)
#define QSPI_FLR_INTENCLR_TXUNKNOWN_CMD_EN_SHIFT (4U)
/*! TXUNKNOWN_CMD_EN - TX Unknown command Assert Interrupt Enable
 *  0b0..No effect
 *  0b1..Clear the Slave Select Assert Interrupt Enable bit (INTENSET[TXUNKNOWN_CMD_EN])
 */
#define QSPI_FLR_INTENCLR_TXUNKNOWN_CMD_EN(x)    (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_INTENCLR_TXUNKNOWN_CMD_EN_SHIFT)) & QSPI_FLR_INTENCLR_TXUNKNOWN_CMD_EN_MASK)

#define QSPI_FLR_INTENCLR_RXUNKNOWN_CMD_EN_MASK  (0x20U)
#define QSPI_FLR_INTENCLR_RXUNKNOWN_CMD_EN_SHIFT (5U)
/*! RXUNKNOWN_CMD_EN - Slave Select Deassert Interrupt Enable
 *  0b0..No effect
 *  0b1..Clear the Slave Select Deassert Interrupt Enable bit (INTENSET[RXUNKNOWN_CMD_EN])
 */
#define QSPI_FLR_INTENCLR_RXUNKNOWN_CMD_EN(x)    (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_INTENCLR_RXUNKNOWN_CMD_EN_SHIFT)) & QSPI_FLR_INTENCLR_RXUNKNOWN_CMD_EN_MASK)
/*! @} */

/*! @name INTSTAT - Interrupt Status Register */
/*! @{ */

#define QSPI_FLR_INTSTAT_TXUNKNOWN_CMD_MASK      (0x10U)
#define QSPI_FLR_INTSTAT_TXUNKNOWN_CMD_SHIFT     (4U)
/*! TXUNKNOWN_CMD - TXUNKNOWN_CMD Assert Interrupt
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define QSPI_FLR_INTSTAT_TXUNKNOWN_CMD(x)        (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_INTSTAT_TXUNKNOWN_CMD_SHIFT)) & QSPI_FLR_INTSTAT_TXUNKNOWN_CMD_MASK)

#define QSPI_FLR_INTSTAT_RXUNKNOWN_CMD_MASK      (0x20U)
#define QSPI_FLR_INTSTAT_RXUNKNOWN_CMD_SHIFT     (5U)
/*! RXUNKNOWN_CMD - RXUNKNOWN_CMD assert Interrupt
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define QSPI_FLR_INTSTAT_RXUNKNOWN_CMD(x)        (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_INTSTAT_RXUNKNOWN_CMD_SHIFT)) & QSPI_FLR_INTSTAT_RXUNKNOWN_CMD_MASK)
/*! @} */

/*! @name FIFOCFG - FIFO Configuration Register */
/*! @{ */

#define QSPI_FLR_FIFOCFG_ENABLETX_MASK           (0x1U)
#define QSPI_FLR_FIFOCFG_ENABLETX_SHIFT          (0U)
/*! ENABLETX - Enable the Transmit FIFO
 *  0b0..The transmit FIFO is not enabled
 *  0b1..The transmit FIFO is enabled
 */
#define QSPI_FLR_FIFOCFG_ENABLETX(x)             (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOCFG_ENABLETX_SHIFT)) & QSPI_FLR_FIFOCFG_ENABLETX_MASK)

#define QSPI_FLR_FIFOCFG_ENABLERX_MASK           (0x2U)
#define QSPI_FLR_FIFOCFG_ENABLERX_SHIFT          (1U)
/*! ENABLERX - Enable the Receive FIFO
 *  0b0..The receive FIFO is not enabled
 *  0b1..The receive FIFO is enabled
 */
#define QSPI_FLR_FIFOCFG_ENABLERX(x)             (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOCFG_ENABLERX_SHIFT)) & QSPI_FLR_FIFOCFG_ENABLERX_MASK)

#define QSPI_FLR_FIFOCFG_SIZE_MASK               (0x30U)
#define QSPI_FLR_FIFOCFG_SIZE_SHIFT              (4U)
/*! SIZE - FIFO Size Configuration
 *  0b00..FIFO is configured as 16 entries of 8 bits.
 *  0b01..FIFO is configured as 8 entries of 16 bits.
 *  0b10..Not used
 *  0b11..FIFO is configured as 32 entries of 32 bits.
 */
#define QSPI_FLR_FIFOCFG_SIZE(x)                 (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOCFG_SIZE_SHIFT)) & QSPI_FLR_FIFOCFG_SIZE_MASK)

#define QSPI_FLR_FIFOCFG_DMATX_MASK              (0x1000U)
#define QSPI_FLR_FIFOCFG_DMATX_SHIFT             (12U)
/*! DMATX - DMA Configuration for Transmit
 *  0b0..DMA is not used for the transmit function
 *  0b1..Issues DMA request for the transmit function if the FIFO is not full. Generally, data interrupts would be disabled if DMA is enabled.
 */
#define QSPI_FLR_FIFOCFG_DMATX(x)                (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOCFG_DMATX_SHIFT)) & QSPI_FLR_FIFOCFG_DMATX_MASK)

#define QSPI_FLR_FIFOCFG_DMARX_MASK              (0x2000U)
#define QSPI_FLR_FIFOCFG_DMARX_SHIFT             (13U)
/*! DMARX - DMA Configuration for Receive
 *  0b0..DMA is not used for the receive function.
 *  0b1..Issues a DMA request for the receive function if the FIFO is not empty. Generally, data interrupts would be disabled if DMA is enabled.
 */
#define QSPI_FLR_FIFOCFG_DMARX(x)                (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOCFG_DMARX_SHIFT)) & QSPI_FLR_FIFOCFG_DMARX_MASK)

#define QSPI_FLR_FIFOCFG_WAKETX_MASK             (0x4000U)
#define QSPI_FLR_FIFOCFG_WAKETX_SHIFT            (14U)
/*! WAKETX - Wake-up for Transmit FIFO Level
 *  0b0..Only enabled interrupts will wake up the device form reduced power modes
 *  0b1..A device wake-up for DMA will occur if the transmit FIFO level reaches the value specified by TXLVL in
 *       FIFOTRIG, even when the TXLVL interrupt is not enabled.
 */
#define QSPI_FLR_FIFOCFG_WAKETX(x)               (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOCFG_WAKETX_SHIFT)) & QSPI_FLR_FIFOCFG_WAKETX_MASK)

#define QSPI_FLR_FIFOCFG_WAKERX_MASK             (0x8000U)
#define QSPI_FLR_FIFOCFG_WAKERX_SHIFT            (15U)
/*! WAKERX - Wake-up for Receive FIFO Level
 *  0b0..Only enabled interrupts will wake up the device form reduced power modes.
 *  0b1..A device wake-up for DMA will occur if the receive FIFO level reaches the value specified by
 *       FIFOTRIG[RXLVL], even when the RXLVL interrupt is not enabled.
 */
#define QSPI_FLR_FIFOCFG_WAKERX(x)               (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOCFG_WAKERX_SHIFT)) & QSPI_FLR_FIFOCFG_WAKERX_MASK)

#define QSPI_FLR_FIFOCFG_EMPTYTX_MASK            (0x10000U)
#define QSPI_FLR_FIFOCFG_EMPTYTX_SHIFT           (16U)
/*! EMPTYTX - Empty Command for the Transmit FIFO
 *  0b0..No effect
 *  0b1..The TX FIFO is emptied
 */
#define QSPI_FLR_FIFOCFG_EMPTYTX(x)              (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOCFG_EMPTYTX_SHIFT)) & QSPI_FLR_FIFOCFG_EMPTYTX_MASK)

#define QSPI_FLR_FIFOCFG_EMPTYRX_MASK            (0x20000U)
#define QSPI_FLR_FIFOCFG_EMPTYRX_SHIFT           (17U)
/*! EMPTYRX - Empty Command for the Receive FIFO
 *  0b0..No effect
 *  0b1..The RX FIFO is emptied
 */
#define QSPI_FLR_FIFOCFG_EMPTYRX(x)              (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOCFG_EMPTYRX_SHIFT)) & QSPI_FLR_FIFOCFG_EMPTYRX_MASK)

#define QSPI_FLR_FIFOCFG_POPDBG_MASK             (0x40000U)
#define QSPI_FLR_FIFOCFG_POPDBG_SHIFT            (18U)
/*! POPDBG - Pop FIFO for Debug Reads
 *  0b0..Debug reads of the FIFO do not pop the FIFO
 *  0b1..A debug read will cause the FIFO to pop
 */
#define QSPI_FLR_FIFOCFG_POPDBG(x)               (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOCFG_POPDBG_SHIFT)) & QSPI_FLR_FIFOCFG_POPDBG_MASK)
/*! @} */

/*! @name FIFOSTAT - FIFO Status Register */
/*! @{ */

#define QSPI_FLR_FIFOSTAT_TXERR_MASK             (0x1U)
#define QSPI_FLR_FIFOSTAT_TXERR_SHIFT            (0U)
/*! TXERR - TX FIFO Error
 *  0b0..A transmit FIFO error has not occurred.
 *  0b1..A transmit FIFO error has occurred. This error could be an overflow caused by pushing data into a full
 *       FIFO, or by an underflow if the FIFO is empty when data is needed.
 */
#define QSPI_FLR_FIFOSTAT_TXERR(x)               (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOSTAT_TXERR_SHIFT)) & QSPI_FLR_FIFOSTAT_TXERR_MASK)

#define QSPI_FLR_FIFOSTAT_RXERR_MASK             (0x2U)
#define QSPI_FLR_FIFOSTAT_RXERR_SHIFT            (1U)
/*! RXERR - RX FIFO Error
 *  0b0..A receive FIFO overflow has not occurred
 *  0b1..A receive FIFO overflow has occurred, caused by software or DMA not emptying the FIFO fast enough
 */
#define QSPI_FLR_FIFOSTAT_RXERR(x)               (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOSTAT_RXERR_SHIFT)) & QSPI_FLR_FIFOSTAT_RXERR_MASK)

#define QSPI_FLR_FIFOSTAT_PERINT_MASK            (0x8U)
#define QSPI_FLR_FIFOSTAT_PERINT_SHIFT           (3U)
/*! PERINT - Peripheral Interrupt
 *  0b0..The peripheral function has not asserted an interrupt
 *  0b1..Indicates that the peripheral function has asserted an interrupt. More information can be found by
 *       reading the peripheral's status register (STAT).
 */
#define QSPI_FLR_FIFOSTAT_PERINT(x)              (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOSTAT_PERINT_SHIFT)) & QSPI_FLR_FIFOSTAT_PERINT_MASK)

#define QSPI_FLR_FIFOSTAT_TXEMPTY_MASK           (0x10U)
#define QSPI_FLR_FIFOSTAT_TXEMPTY_SHIFT          (4U)
/*! TXEMPTY - Transmit FIFO Empty
 *  0b0..The transmit FIFO is not empty
 *  0b1..The transmit FIFO is empty, although the peripheral may still be processing the last piece of data.
 */
#define QSPI_FLR_FIFOSTAT_TXEMPTY(x)             (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOSTAT_TXEMPTY_SHIFT)) & QSPI_FLR_FIFOSTAT_TXEMPTY_MASK)

#define QSPI_FLR_FIFOSTAT_TXNOTFULL_MASK         (0x20U)
#define QSPI_FLR_FIFOSTAT_TXNOTFULL_SHIFT        (5U)
/*! TXNOTFULL - Transmit FIFO is Not Full
 *  0b0..The transmit FIFO is full and another write would cause it to overflow
 *  0b1..The transmit FIFO is not full, so more data can be written
 */
#define QSPI_FLR_FIFOSTAT_TXNOTFULL(x)           (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOSTAT_TXNOTFULL_SHIFT)) & QSPI_FLR_FIFOSTAT_TXNOTFULL_MASK)

#define QSPI_FLR_FIFOSTAT_RXNOTEMPTY_MASK        (0x40U)
#define QSPI_FLR_FIFOSTAT_RXNOTEMPTY_SHIFT       (6U)
/*! RXNOTEMPTY - Receive FIFO is Not Empty
 *  0b0..When 0, the receive FIFO is empty
 *  0b1..When 1, the receive FIFO is not empty, so data can be read
 */
#define QSPI_FLR_FIFOSTAT_RXNOTEMPTY(x)          (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOSTAT_RXNOTEMPTY_SHIFT)) & QSPI_FLR_FIFOSTAT_RXNOTEMPTY_MASK)

#define QSPI_FLR_FIFOSTAT_RXFULL_MASK            (0x80U)
#define QSPI_FLR_FIFOSTAT_RXFULL_SHIFT           (7U)
/*! RXFULL - Receive FIFO is Full
 *  0b0..The receive FIFO is not full
 *  0b1..The receive FIFO is full. To prevent the peripheral from causing an overflow, data should be read out.
 */
#define QSPI_FLR_FIFOSTAT_RXFULL(x)              (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOSTAT_RXFULL_SHIFT)) & QSPI_FLR_FIFOSTAT_RXFULL_MASK)

#define QSPI_FLR_FIFOSTAT_TXLVL_MASK             (0x3F00U)
#define QSPI_FLR_FIFOSTAT_TXLVL_SHIFT            (8U)
/*! TXLVL - Transmit FIFO Current Level */
#define QSPI_FLR_FIFOSTAT_TXLVL(x)               (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOSTAT_TXLVL_SHIFT)) & QSPI_FLR_FIFOSTAT_TXLVL_MASK)

#define QSPI_FLR_FIFOSTAT_RXLVL_MASK             (0x3F0000U)
#define QSPI_FLR_FIFOSTAT_RXLVL_SHIFT            (16U)
/*! RXLVL - Receive FIFO Current Level */
#define QSPI_FLR_FIFOSTAT_RXLVL(x)               (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOSTAT_RXLVL_SHIFT)) & QSPI_FLR_FIFOSTAT_RXLVL_MASK)
/*! @} */

/*! @name FIFOTRIG - FIFO Trigger Register */
/*! @{ */

#define QSPI_FLR_FIFOTRIG_TXLVLENA_MASK          (0x1U)
#define QSPI_FLR_FIFOTRIG_TXLVLENA_SHIFT         (0U)
/*! TXLVLENA - Transmit FIFO Level Trigger Enable
 *  0b0..Transmit FIFO level does not generate a FIFO level trigger
 *  0b1..An trigger will be generated if the transmit FIFO level reaches the value specified by the FIFOTRIG[TXLVL] field.
 */
#define QSPI_FLR_FIFOTRIG_TXLVLENA(x)            (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOTRIG_TXLVLENA_SHIFT)) & QSPI_FLR_FIFOTRIG_TXLVLENA_MASK)

#define QSPI_FLR_FIFOTRIG_RXLVLENA_MASK          (0x2U)
#define QSPI_FLR_FIFOTRIG_RXLVLENA_SHIFT         (1U)
/*! RXLVLENA - Receive FIFO Level Trigger Enable
 *  0b0..Receive FIFO level does not generate a FIFO level trigger
 *  0b1..An trigger will be generated if the receive FIFO level reaches the value specified by the FIFOTRIG[RXLVL] field.
 */
#define QSPI_FLR_FIFOTRIG_RXLVLENA(x)            (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOTRIG_RXLVLENA_SHIFT)) & QSPI_FLR_FIFOTRIG_RXLVLENA_MASK)

#define QSPI_FLR_FIFOTRIG_TXLVL_MASK             (0x3F00U)
#define QSPI_FLR_FIFOTRIG_TXLVL_SHIFT            (8U)
/*! TXLVL - Transmit FIFO Level Trigger Point
 *  0b000000..Trigger when the TX FIFO becomes empty
 *  0b000001..Trigger when the TX FIFO level decreases to 1 entry
 *  0b011111..Trigger when the TX FIFO level decreases to 31 entries (is no longer full)
 */
#define QSPI_FLR_FIFOTRIG_TXLVL(x)               (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOTRIG_TXLVL_SHIFT)) & QSPI_FLR_FIFOTRIG_TXLVL_MASK)

#define QSPI_FLR_FIFOTRIG_RXLVL_MASK             (0x7E0000U)
#define QSPI_FLR_FIFOTRIG_RXLVL_SHIFT            (17U)
/*! RXLVL - Receive FIFO Level Trigger Point
 *  0b000000..Trigger when the RX FIFO has received 1 entry (is no longer empty)
 *  0b000001..Trigger when the RX FIFO has received 2 entries
 *  0b011111..Trigger when the RX FIFO has received 32 entries (has become full)
 */
#define QSPI_FLR_FIFOTRIG_RXLVL(x)               (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOTRIG_RXLVL_SHIFT)) & QSPI_FLR_FIFOTRIG_RXLVL_MASK)
/*! @} */

/*! @name FIFOINTENSET - FIFO Interrupt Enable Register */
/*! @{ */

#define QSPI_FLR_FIFOINTENSET_TXERR_MASK         (0x1U)
#define QSPI_FLR_FIFOINTENSET_TXERR_SHIFT        (0U)
/*! TXERR - TX Error Interrupt Enable
 *  0b0..No interrupt will be generated for a transmit error
 *  0b1..An interrupt will be generated when a transmit error occurs
 */
#define QSPI_FLR_FIFOINTENSET_TXERR(x)           (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOINTENSET_TXERR_SHIFT)) & QSPI_FLR_FIFOINTENSET_TXERR_MASK)

#define QSPI_FLR_FIFOINTENSET_RXERR_MASK         (0x2U)
#define QSPI_FLR_FIFOINTENSET_RXERR_SHIFT        (1U)
/*! RXERR - Receive Error Interrupt Enable
 *  0b0..No interrupt will be generated for a receive error
 *  0b1..An interrupt will be generated when a receive error occurs
 */
#define QSPI_FLR_FIFOINTENSET_RXERR(x)           (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOINTENSET_RXERR_SHIFT)) & QSPI_FLR_FIFOINTENSET_RXERR_MASK)

#define QSPI_FLR_FIFOINTENSET_TXLVL_MASK         (0x4U)
#define QSPI_FLR_FIFOINTENSET_TXLVL_SHIFT        (2U)
/*! TXLVL - Transmit FIFO Level Interrupt Enable
 *  0b0..No interrupt will be generated based on the TX FIFO level
 *  0b1..If FIFOTRIG[TXLVLENA]=1, then an interrupt will be generated when the TX FIFO level decreases to the level specified by FIFOTRIG[TXLVL]
 */
#define QSPI_FLR_FIFOINTENSET_TXLVL(x)           (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOINTENSET_TXLVL_SHIFT)) & QSPI_FLR_FIFOINTENSET_TXLVL_MASK)

#define QSPI_FLR_FIFOINTENSET_RXLVL_MASK         (0x8U)
#define QSPI_FLR_FIFOINTENSET_RXLVL_SHIFT        (3U)
/*! RXLVL - Receive FIFO Level Interrupt Enable
 *  0b0..No interrupt will be generated based on the RX FIFO level
 *  0b1..If FIFOTRIG[RXLVLENA]=1, then an interrupt will be generated when the RX FIFO level increases to the level specified by FIFOTRIG[RXLVL]
 */
#define QSPI_FLR_FIFOINTENSET_RXLVL(x)           (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOINTENSET_RXLVL_SHIFT)) & QSPI_FLR_FIFOINTENSET_RXLVL_MASK)
/*! @} */

/*! @name FIFOINTENCLR - FIFO Interrupt Enable Clear Register */
/*! @{ */

#define QSPI_FLR_FIFOINTENCLR_TXERR_MASK         (0x1U)
#define QSPI_FLR_FIFOINTENCLR_TXERR_SHIFT        (0U)
/*! TXERR - TX Error Interrupt Enable
 *  0b0..No effect
 *  0b1..Clear the TX Error Interrupt Enable bit FIFOINTENSET[TXERR]
 */
#define QSPI_FLR_FIFOINTENCLR_TXERR(x)           (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOINTENCLR_TXERR_SHIFT)) & QSPI_FLR_FIFOINTENCLR_TXERR_MASK)

#define QSPI_FLR_FIFOINTENCLR_RXERR_MASK         (0x2U)
#define QSPI_FLR_FIFOINTENCLR_RXERR_SHIFT        (1U)
/*! RXERR - Receive Error Interrupt Enable
 *  0b0..No effect
 *  0b1..Clear the Receive Error Interrupt Enable bit FIFOINTENSET[RXERR]
 */
#define QSPI_FLR_FIFOINTENCLR_RXERR(x)           (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOINTENCLR_RXERR_SHIFT)) & QSPI_FLR_FIFOINTENCLR_RXERR_MASK)

#define QSPI_FLR_FIFOINTENCLR_TXLVL_MASK         (0x4U)
#define QSPI_FLR_FIFOINTENCLR_TXLVL_SHIFT        (2U)
/*! TXLVL - Transmit FIFO Level Interrupt Enable
 *  0b0..No effect
 *  0b1..Clear the Transmit FIFO Level Interrupt Enable bit FIFOINTENSET[TXLVL]
 */
#define QSPI_FLR_FIFOINTENCLR_TXLVL(x)           (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOINTENCLR_TXLVL_SHIFT)) & QSPI_FLR_FIFOINTENCLR_TXLVL_MASK)

#define QSPI_FLR_FIFOINTENCLR_RXLVL_MASK         (0x8U)
#define QSPI_FLR_FIFOINTENCLR_RXLVL_SHIFT        (3U)
/*! RXLVL - Receive FIFO Level Interrupt Enable
 *  0b0..No effect
 *  0b1..Clear the Receive FIFO Level Interrupt Enable bit FIFOINTENSET[RXLVL]
 */
#define QSPI_FLR_FIFOINTENCLR_RXLVL(x)           (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOINTENCLR_RXLVL_SHIFT)) & QSPI_FLR_FIFOINTENCLR_RXLVL_MASK)
/*! @} */

/*! @name FIFOINTSTAT - FIFO Interrupt Status Register */
/*! @{ */

#define QSPI_FLR_FIFOINTSTAT_TXERR_MASK          (0x1U)
#define QSPI_FLR_FIFOINTSTAT_TXERR_SHIFT         (0U)
/*! TXERR - TX FIFO Error Interrupt Status
 *  0b0..Not pending
 *  0b1..Pending
 */
#define QSPI_FLR_FIFOINTSTAT_TXERR(x)            (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOINTSTAT_TXERR_SHIFT)) & QSPI_FLR_FIFOINTSTAT_TXERR_MASK)

#define QSPI_FLR_FIFOINTSTAT_RXERR_MASK          (0x2U)
#define QSPI_FLR_FIFOINTSTAT_RXERR_SHIFT         (1U)
/*! RXERR - RX FIFO Error Interrupt Status
 *  0b0..Not pending
 *  0b1..Pending
 */
#define QSPI_FLR_FIFOINTSTAT_RXERR(x)            (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOINTSTAT_RXERR_SHIFT)) & QSPI_FLR_FIFOINTSTAT_RXERR_MASK)

#define QSPI_FLR_FIFOINTSTAT_TXLVL_MASK          (0x4U)
#define QSPI_FLR_FIFOINTSTAT_TXLVL_SHIFT         (2U)
/*! TXLVL - Transmit FIFO Level Interrupt Status
 *  0b0..Not pending
 *  0b1..Pending
 */
#define QSPI_FLR_FIFOINTSTAT_TXLVL(x)            (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOINTSTAT_TXLVL_SHIFT)) & QSPI_FLR_FIFOINTSTAT_TXLVL_MASK)

#define QSPI_FLR_FIFOINTSTAT_RXLVL_MASK          (0x8U)
#define QSPI_FLR_FIFOINTSTAT_RXLVL_SHIFT         (3U)
/*! RXLVL - Receive FIFO Level Interrupt Status
 *  0b0..Not pending
 *  0b1..Pending
 */
#define QSPI_FLR_FIFOINTSTAT_RXLVL(x)            (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOINTSTAT_RXLVL_SHIFT)) & QSPI_FLR_FIFOINTSTAT_RXLVL_MASK)

#define QSPI_FLR_FIFOINTSTAT_PERINT_MASK         (0x10U)
#define QSPI_FLR_FIFOINTSTAT_PERINT_SHIFT        (4U)
/*! PERINT - Peripheral Interrupt Status
 *  0b0..Not pending
 *  0b1..Pending
 */
#define QSPI_FLR_FIFOINTSTAT_PERINT(x)           (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOINTSTAT_PERINT_SHIFT)) & QSPI_FLR_FIFOINTSTAT_PERINT_MASK)
/*! @} */

/*! @name FIFOWR - FIFO Write Data Register */
/*! @{ */

#define QSPI_FLR_FIFOWR_TXDATA_MASK              (0xFFFFFFFFU)
#define QSPI_FLR_FIFOWR_TXDATA_SHIFT             (0U)
/*! TXDATA - Transmit Data to the FIFO */
#define QSPI_FLR_FIFOWR_TXDATA(x)                (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOWR_TXDATA_SHIFT)) & QSPI_FLR_FIFOWR_TXDATA_MASK)
/*! @} */

/*! @name FIFORD - FIFO Read Data Register */
/*! @{ */

#define QSPI_FLR_FIFORD_RXDATA_MASK              (0xFFFFFFFFU)
#define QSPI_FLR_FIFORD_RXDATA_SHIFT             (0U)
/*! RXDATA - Received Data from the FIFO */
#define QSPI_FLR_FIFORD_RXDATA(x)                (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFORD_RXDATA_SHIFT)) & QSPI_FLR_FIFORD_RXDATA_MASK)
/*! @} */

/*! @name FIFORDNOPOP - FIFO Data Read with no FIFO Pop Register */
/*! @{ */

#define QSPI_FLR_FIFORDNOPOP_RXDATA_MASK         (0xFFFFFFFFU)
#define QSPI_FLR_FIFORDNOPOP_RXDATA_SHIFT        (0U)
/*! RXDATA - Received Data from the FIFO */
#define QSPI_FLR_FIFORDNOPOP_RXDATA(x)           (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFORDNOPOP_RXDATA_SHIFT)) & QSPI_FLR_FIFORDNOPOP_RXDATA_MASK)
/*! @} */

/*! @name FIFOSIZE - FIFO Size Register */
/*! @{ */

#define QSPI_FLR_FIFOSIZE_FIFOSIZE_MASK          (0x1FU)
#define QSPI_FLR_FIFOSIZE_FIFOSIZE_SHIFT         (0U)
/*! FIFOSIZE - FIFO Size */
#define QSPI_FLR_FIFOSIZE_FIFOSIZE(x)            (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_FIFOSIZE_FIFOSIZE_SHIFT)) & QSPI_FLR_FIFOSIZE_FIFOSIZE_MASK)
/*! @} */

/*! @name ID - Peripheral Identification Register */
/*! @{ */

#define QSPI_FLR_ID_APERTURE_MASK                (0xFFU)
#define QSPI_FLR_ID_APERTURE_SHIFT               (0U)
/*! APERTURE - Aperture */
#define QSPI_FLR_ID_APERTURE(x)                  (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_ID_APERTURE_SHIFT)) & QSPI_FLR_ID_APERTURE_MASK)

#define QSPI_FLR_ID_MINOR_REV_MASK               (0xF00U)
#define QSPI_FLR_ID_MINOR_REV_SHIFT              (8U)
/*! MINOR_REV - Minor revision of module implementation */
#define QSPI_FLR_ID_MINOR_REV(x)                 (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_ID_MINOR_REV_SHIFT)) & QSPI_FLR_ID_MINOR_REV_MASK)

#define QSPI_FLR_ID_MAJOR_REV_MASK               (0xF000U)
#define QSPI_FLR_ID_MAJOR_REV_SHIFT              (12U)
/*! MAJOR_REV - Major revision of module implementation */
#define QSPI_FLR_ID_MAJOR_REV(x)                 (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_ID_MAJOR_REV_SHIFT)) & QSPI_FLR_ID_MAJOR_REV_MASK)

#define QSPI_FLR_ID_ID_MASK                      (0xFFFF0000U)
#define QSPI_FLR_ID_ID_SHIFT                     (16U)
/*! ID - Module identifier for the selected function */
#define QSPI_FLR_ID_ID(x)                        (((uint32_t)(((uint32_t)(x)) << QSPI_FLR_ID_ID_SHIFT)) & QSPI_FLR_ID_ID_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group QSPI_FLR_Register_Masks */


/*!
 * @}
 */ /* end of group QSPI_FLR_Peripheral_Access_Layer */


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


#endif  /* PERI_QSPI_FLR_H_ */

