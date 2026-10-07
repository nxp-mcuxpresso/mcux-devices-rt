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
**         CMSIS Peripheral Access Layer for ADSS_DEBUG_UART
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
 * @file PERI_ADSS_DEBUG_UART.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_DEBUG_UART
 *
 * CMSIS Peripheral Access Layer for ADSS_DEBUG_UART
 */

#if !defined(PERI_ADSS_DEBUG_UART_H_)
#define PERI_ADSS_DEBUG_UART_H_                  /**< Symbol preventing repeated inclusion */

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
   -- ADSS_DEBUG_UART Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_DEBUG_UART_Peripheral_Access_Layer ADSS_DEBUG_UART Peripheral Access Layer
 * @{
 */

/** ADSS_DEBUG_UART - Register Layout Typedef */
typedef struct {
  __IO uint32_t CONFIG;                            /**< Set configuration of UART mode for each DSP core, offset: 0x0 */
  __I  uint32_t STATUS;                            /**< Debug UART status register for DSP3 0/1 or HiFi5s, offset: 0x4 */
  __O  uint32_t DEBUG_DATA;                        /**< Debug data register for DSP3 0/1 and HiFi5s. Any write to this register would be denied when UART Tx is busy, offset: 0x8 */
  __O  uint32_t GPOSET;                            /**< GPOset register for DS3 0/1 or HiFi5s. Writing to this address will pull the UART Tx line high if it is currently set low. Any write to this address will ignored by HW when UART Tx is busy, offset: 0xC */
  __O  uint32_t GPORESET;                          /**< Writing to this address will push the UART Tx line low if it is currently set high. Any write to this address will be ignored by HW when UART Tx is busy, offset: 0x10 */
  __O  uint32_t GPOTOGGLE;                         /**< Writing to this address will invert the level of UART Tx line from its current level. Any write to this address will be ignored by HW when UART Tx is busy, offset: 0x14 */
} ADSS_DEBUG_UART_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_DEBUG_UART Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_DEBUG_UART_Register_Masks ADSS_DEBUG_UART Register Masks
 * @{
 */

/*! @name CONFIG - Set configuration of UART mode for each DSP core */
/*! @{ */

#define ADSS_DEBUG_UART_CONFIG_MODE_MASK         (0x1U)
#define ADSS_DEBUG_UART_CONFIG_MODE_SHIFT        (0U)
/*! mode - Set the mode for DSP3 0/1 UART or HiFi5s, defult set to 24-bit
 *  0b0..24-bit mode for full DSP word
 *  0b1..8-bit data mode for the characters
 */
#define ADSS_DEBUG_UART_CONFIG_MODE(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_DEBUG_UART_CONFIG_MODE_SHIFT)) & ADSS_DEBUG_UART_CONFIG_MODE_MASK)
/*! @} */

/*! @name STATUS - Debug UART status register for DSP3 0/1 or HiFi5s */
/*! @{ */

#define ADSS_DEBUG_UART_STATUS_BUSY_MASK         (0x1U)
#define ADSS_DEBUG_UART_STATUS_BUSY_SHIFT        (0U)
/*! busy - Busy flag for UART core used for either DSP3 0/1 or HiFi5s. This bit is set to '1' by HW
 *    when UART Tx starts and cleared by HW when UART Tx is finished
 */
#define ADSS_DEBUG_UART_STATUS_BUSY(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_DEBUG_UART_STATUS_BUSY_SHIFT)) & ADSS_DEBUG_UART_STATUS_BUSY_MASK)
/*! @} */

/*! @name DEBUG_DATA - Debug data register for DSP3 0/1 and HiFi5s. Any write to this register would be denied when UART Tx is busy */
/*! @{ */

#define ADSS_DEBUG_UART_DEBUG_DATA_VAL_MASK      (0xFFFFFFU)
#define ADSS_DEBUG_UART_DEBUG_DATA_VAL_SHIFT     (0U)
/*! val - Register value. */
#define ADSS_DEBUG_UART_DEBUG_DATA_VAL(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_DEBUG_UART_DEBUG_DATA_VAL_SHIFT)) & ADSS_DEBUG_UART_DEBUG_DATA_VAL_MASK)
/*! @} */

/*! @name GPOSET - GPOset register for DS3 0/1 or HiFi5s. Writing to this address will pull the UART Tx line high if it is currently set low. Any write to this address will ignored by HW when UART Tx is busy */
/*! @{ */

#define ADSS_DEBUG_UART_GPOSET_VAL_MASK          (0xFFFFFFU)
#define ADSS_DEBUG_UART_GPOSET_VAL_SHIFT         (0U)
/*! val - Register value. */
#define ADSS_DEBUG_UART_GPOSET_VAL(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_DEBUG_UART_GPOSET_VAL_SHIFT)) & ADSS_DEBUG_UART_GPOSET_VAL_MASK)
/*! @} */

/*! @name GPORESET - Writing to this address will push the UART Tx line low if it is currently set high. Any write to this address will be ignored by HW when UART Tx is busy */
/*! @{ */

#define ADSS_DEBUG_UART_GPORESET_VAL_MASK        (0xFFFFFFU)
#define ADSS_DEBUG_UART_GPORESET_VAL_SHIFT       (0U)
/*! val - Register value. */
#define ADSS_DEBUG_UART_GPORESET_VAL(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_DEBUG_UART_GPORESET_VAL_SHIFT)) & ADSS_DEBUG_UART_GPORESET_VAL_MASK)
/*! @} */

/*! @name GPOTOGGLE - Writing to this address will invert the level of UART Tx line from its current level. Any write to this address will be ignored by HW when UART Tx is busy */
/*! @{ */

#define ADSS_DEBUG_UART_GPOTOGGLE_VAL_MASK       (0xFFFFFFU)
#define ADSS_DEBUG_UART_GPOTOGGLE_VAL_SHIFT      (0U)
/*! val - Register value. */
#define ADSS_DEBUG_UART_GPOTOGGLE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_DEBUG_UART_GPOTOGGLE_VAL_SHIFT)) & ADSS_DEBUG_UART_GPOTOGGLE_VAL_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADSS_DEBUG_UART_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_DEBUG_UART_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_DEBUG_UART_H_ */

