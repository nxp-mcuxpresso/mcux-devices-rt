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
**         CMSIS Peripheral Access Layer for NSS_DBG_SO
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
 * @file PERI_NSS_DBG_SO.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for NSS_DBG_SO
 *
 * CMSIS Peripheral Access Layer for NSS_DBG_SO
 */

#if !defined(PERI_NSS_DBG_SO_H_)
#define PERI_NSS_DBG_SO_H_                       /**< Symbol preventing repeated inclusion */

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
   -- NSS_DBG_SO Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_DBG_SO_Peripheral_Access_Layer NSS_DBG_SO Peripheral Access Layer
 * @{
 */

/** NSS_DBG_SO - Register Layout Typedef */
typedef struct {
  __IO uint32_t CFG;                               /**< Debug Serial Out configuration register, offset: 0x0 */
  __O  uint32_t TX_DATA_1B;                        /**< 1 byte TX data register, offset: 0x4 */
  __O  uint32_t TX_DATA_2B;                        /**< 2 bytes TX data register, offset: 0x8 */
  __O  uint32_t TX_DATA_3B;                        /**< 3 bytes TX data register, offset: 0xC */
  __O  uint32_t TX_DATA_4B;                        /**< 4 bytes TX data register, offset: 0x10 */
  __IO uint32_t INT_EN;                            /**< Debug SO Interrupt Enable register, offset: 0x14 */
  __I  uint32_t INT_STATUS;                        /**< Debug SO Interrupt Status register. All fields are cleared on read., offset: 0x18 */
  __O  uint32_t FIFO_RST;                          /**< Reset control for TX FIFO, offset: 0x1C */
  __I  uint32_t FIFO_LVL;                          /**< TX FIFO level readout, offset: 0x20 */
  __IO uint32_t ENABLE_CTRL;                       /**< Debug SO control register. Write to enable or disable the SO transmit core. Read returns the unsynchronized enable bit written by software., offset: 0x24 */
  __I  uint32_t ENABLE_STATUS;                     /**< Debug SO status register. Provides the synchronized view of the enable bit as seen by the dbg_so clock domain after the two-FF synchronizer., offset: 0x28 */
} NSS_DBG_SO_Type;

/* ----------------------------------------------------------------------------
   -- NSS_DBG_SO Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_DBG_SO_Register_Masks NSS_DBG_SO Register Masks
 * @{
 */

/*! @name CFG - Debug Serial Out configuration register */
/*! @{ */

#define NSS_DBG_SO_CFG_TXCORE_CLK_DIV_MASK       (0xFU)
#define NSS_DBG_SO_CFG_TXCORE_CLK_DIV_SHIFT      (0U)
/*! txcore_clk_div - Clock divider of the TX Core. This field can only be written while the dbg_so
 *    TX core is disabled (enable_status.enable = 0). Writes are silently ignored when the TX core is
 *    enabled. Configure this field before asserting enable_ctrl.enable.
 */
#define NSS_DBG_SO_CFG_TXCORE_CLK_DIV(x)         (((uint32_t)(((uint32_t)(x)) << NSS_DBG_SO_CFG_TXCORE_CLK_DIV_SHIFT)) & NSS_DBG_SO_CFG_TXCORE_CLK_DIV_MASK)
/*! @} */

/*! @name TX_DATA_1B - 1 byte TX data register */
/*! @{ */

#define NSS_DBG_SO_TX_DATA_1B_TX_DATA_1B_MASK    (0xFFU)
#define NSS_DBG_SO_TX_DATA_1B_TX_DATA_1B_SHIFT   (0U)
/*! tx_data_1b - Data to the TX FIFO */
#define NSS_DBG_SO_TX_DATA_1B_TX_DATA_1B(x)      (((uint32_t)(((uint32_t)(x)) << NSS_DBG_SO_TX_DATA_1B_TX_DATA_1B_SHIFT)) & NSS_DBG_SO_TX_DATA_1B_TX_DATA_1B_MASK)
/*! @} */

/*! @name TX_DATA_2B - 2 bytes TX data register */
/*! @{ */

#define NSS_DBG_SO_TX_DATA_2B_TX_DATA_2B_MASK    (0xFFFFU)
#define NSS_DBG_SO_TX_DATA_2B_TX_DATA_2B_SHIFT   (0U)
/*! tx_data_2b - Data to the TX FIFO */
#define NSS_DBG_SO_TX_DATA_2B_TX_DATA_2B(x)      (((uint32_t)(((uint32_t)(x)) << NSS_DBG_SO_TX_DATA_2B_TX_DATA_2B_SHIFT)) & NSS_DBG_SO_TX_DATA_2B_TX_DATA_2B_MASK)
/*! @} */

/*! @name TX_DATA_3B - 3 bytes TX data register */
/*! @{ */

#define NSS_DBG_SO_TX_DATA_3B_TX_DATA_3B_MASK    (0xFFFFFFU)
#define NSS_DBG_SO_TX_DATA_3B_TX_DATA_3B_SHIFT   (0U)
/*! tx_data_3b - Data to the TX FIFO */
#define NSS_DBG_SO_TX_DATA_3B_TX_DATA_3B(x)      (((uint32_t)(((uint32_t)(x)) << NSS_DBG_SO_TX_DATA_3B_TX_DATA_3B_SHIFT)) & NSS_DBG_SO_TX_DATA_3B_TX_DATA_3B_MASK)
/*! @} */

/*! @name TX_DATA_4B - 4 bytes TX data register */
/*! @{ */

#define NSS_DBG_SO_TX_DATA_4B_TX_DATA_4B_MASK    (0xFFFFFFFFU)
#define NSS_DBG_SO_TX_DATA_4B_TX_DATA_4B_SHIFT   (0U)
/*! tx_data_4b - Data to the TX FIFO */
#define NSS_DBG_SO_TX_DATA_4B_TX_DATA_4B(x)      (((uint32_t)(((uint32_t)(x)) << NSS_DBG_SO_TX_DATA_4B_TX_DATA_4B_SHIFT)) & NSS_DBG_SO_TX_DATA_4B_TX_DATA_4B_MASK)
/*! @} */

/*! @name INT_EN - Debug SO Interrupt Enable register */
/*! @{ */

#define NSS_DBG_SO_INT_EN_TX_BUFFER_EMPTY_MASK   (0x1U)
#define NSS_DBG_SO_INT_EN_TX_BUFFER_EMPTY_SHIFT  (0U)
/*! tx_buffer_empty - TX Buffer empty IRQ enable */
#define NSS_DBG_SO_INT_EN_TX_BUFFER_EMPTY(x)     (((uint32_t)(((uint32_t)(x)) << NSS_DBG_SO_INT_EN_TX_BUFFER_EMPTY_SHIFT)) & NSS_DBG_SO_INT_EN_TX_BUFFER_EMPTY_MASK)

#define NSS_DBG_SO_INT_EN_TX_BUFFER_HALF_MASK    (0x2U)
#define NSS_DBG_SO_INT_EN_TX_BUFFER_HALF_SHIFT   (1U)
/*! tx_buffer_half - TX Buffer half IRQ enable */
#define NSS_DBG_SO_INT_EN_TX_BUFFER_HALF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_DBG_SO_INT_EN_TX_BUFFER_HALF_SHIFT)) & NSS_DBG_SO_INT_EN_TX_BUFFER_HALF_MASK)
/*! @} */

/*! @name INT_STATUS - Debug SO Interrupt Status register. All fields are cleared on read. */
/*! @{ */

#define NSS_DBG_SO_INT_STATUS_TX_BUFFER_EMPTY_MASK (0x1U)
#define NSS_DBG_SO_INT_STATUS_TX_BUFFER_EMPTY_SHIFT (0U)
/*! tx_buffer_empty - TX Buffer empty IRQ. This interrupt is triggered whenever the TX buffer
 *    becomes empty, this includes after power-on-reset.
 */
#define NSS_DBG_SO_INT_STATUS_TX_BUFFER_EMPTY(x) (((uint32_t)(((uint32_t)(x)) << NSS_DBG_SO_INT_STATUS_TX_BUFFER_EMPTY_SHIFT)) & NSS_DBG_SO_INT_STATUS_TX_BUFFER_EMPTY_MASK)

#define NSS_DBG_SO_INT_STATUS_TX_BUFFER_HALF_MASK (0x2U)
#define NSS_DBG_SO_INT_STATUS_TX_BUFFER_HALF_SHIFT (1U)
/*! tx_buffer_half - TX Buffer half IRQ. This interrupt is triggered whenever the TX buffer level
 *    transitions from above half-full to half-full or less.
 */
#define NSS_DBG_SO_INT_STATUS_TX_BUFFER_HALF(x)  (((uint32_t)(((uint32_t)(x)) << NSS_DBG_SO_INT_STATUS_TX_BUFFER_HALF_SHIFT)) & NSS_DBG_SO_INT_STATUS_TX_BUFFER_HALF_MASK)
/*! @} */

/*! @name FIFO_RST - Reset control for TX FIFO */
/*! @{ */

#define NSS_DBG_SO_FIFO_RST_TX_MASK              (0x1U)
#define NSS_DBG_SO_FIFO_RST_TX_SHIFT             (0U)
/*! tx - Reset TX FIFO */
#define NSS_DBG_SO_FIFO_RST_TX(x)                (((uint32_t)(((uint32_t)(x)) << NSS_DBG_SO_FIFO_RST_TX_SHIFT)) & NSS_DBG_SO_FIFO_RST_TX_MASK)
/*! @} */

/*! @name FIFO_LVL - TX FIFO level readout */
/*! @{ */

#define NSS_DBG_SO_FIFO_LVL_TX_MASK              (0xFU)
#define NSS_DBG_SO_FIFO_LVL_TX_SHIFT             (0U)
/*! tx - TX FIFO level */
#define NSS_DBG_SO_FIFO_LVL_TX(x)                (((uint32_t)(((uint32_t)(x)) << NSS_DBG_SO_FIFO_LVL_TX_SHIFT)) & NSS_DBG_SO_FIFO_LVL_TX_MASK)
/*! @} */

/*! @name ENABLE_CTRL - Debug SO control register. Write to enable or disable the SO transmit core. Read returns the unsynchronized enable bit written by software. */
/*! @{ */

#define NSS_DBG_SO_ENABLE_CTRL_ENABLE_MASK       (0x1U)
#define NSS_DBG_SO_ENABLE_CTRL_ENABLE_SHIFT      (0U)
/*! enable - Active high SO enable. Read-back reflects the value last written by software (APB clock
 *    domain), not the synchronized status.
 */
#define NSS_DBG_SO_ENABLE_CTRL_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << NSS_DBG_SO_ENABLE_CTRL_ENABLE_SHIFT)) & NSS_DBG_SO_ENABLE_CTRL_ENABLE_MASK)
/*! @} */

/*! @name ENABLE_STATUS - Debug SO status register. Provides the synchronized view of the enable bit as seen by the dbg_so clock domain after the two-FF synchronizer. */
/*! @{ */

#define NSS_DBG_SO_ENABLE_STATUS_ENABLE_MASK     (0x1U)
#define NSS_DBG_SO_ENABLE_STATUS_ENABLE_SHIFT    (0U)
/*! enable - Synchronized enable status. Reflects the enable bit after synchronization into the
 *    dbg_so clock domain. Use this field to confirm that the dbg_so clock domain has accepted the
 *    enable written to the control register.
 */
#define NSS_DBG_SO_ENABLE_STATUS_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << NSS_DBG_SO_ENABLE_STATUS_ENABLE_SHIFT)) & NSS_DBG_SO_ENABLE_STATUS_ENABLE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group NSS_DBG_SO_Register_Masks */


/*!
 * @}
 */ /* end of group NSS_DBG_SO_Peripheral_Access_Layer */


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


#endif  /* PERI_NSS_DBG_SO_H_ */

