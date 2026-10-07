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
**         CMSIS Peripheral Access Layer for ADSS_GPIO
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
 * @file PERI_ADSS_GPIO.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_GPIO
 *
 * CMSIS Peripheral Access Layer for ADSS_GPIO
 */

#if !defined(PERI_ADSS_GPIO_H_)
#define PERI_ADSS_GPIO_H_                        /**< Symbol preventing repeated inclusion */

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
   -- ADSS_GPIO Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_GPIO_Peripheral_Access_Layer ADSS_GPIO Peripheral Access Layer
 * @{
 */

/** ADSS_GPIO - Size of Registers Arrays */
#define ADSS_GPIO_GPOEVENTCFG_COUNT               8u
#define ADSS_GPIO_GPIMODE_COUNT                   8u

/** ADSS_GPIO - Register Layout Typedef */
typedef struct {
  __IO uint32_t GPO_SET;                           /**< GPO set register. This register can be used to set the corresponding bits high. For the bits with a '1', the corresponding bit will be set high. The other bits stay untouched. When reading, the current register value is returned., offset: 0x0 */
  __IO uint32_t GPO_RESET;                         /**< GPO set register. This register can be used to reset the corresponding bits high. For the bits with a '1', the corresponding bit will be set low The other bits stay untouched. When reading, the current register value is returned., offset: 0x4 */
  __IO uint32_t GPO_TOGGLE;                        /**< GPO set register. This register can be used to toggle the corresponding bits. For the bits with a '1', the corresponding bit will toggle. The other bits stay untouched. When reading, the current register value is returned., offset: 0x8 */
  __I  uint32_t GPI;                               /**< GPI input register., offset: 0xC */
       uint8_t RESERVED_0[16];
  __IO uint32_t GPOEVENTCFG[ADSS_GPIO_GPOEVENTCFG_COUNT]; /**< Configuration of the GPIO output pins, array offset: 0x20, array step: 0x4 */
  __IO uint32_t GPIMODE[ADSS_GPIO_GPIMODE_COUNT];  /**< Configuration of the GPIO input pins, array offset: 0x40, array step: 0x4 */
} ADSS_GPIO_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_GPIO Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_GPIO_Register_Masks ADSS_GPIO Register Masks
 * @{
 */

/*! @name GPO_SET - GPO set register. This register can be used to set the corresponding bits high. For the bits with a '1', the corresponding bit will be set high. The other bits stay untouched. When reading, the current register value is returned. */
/*! @{ */

#define ADSS_GPIO_GPO_SET_VAL_MASK               (0xFFU)
#define ADSS_GPIO_GPO_SET_VAL_SHIFT              (0U)
/*! val - When written the SWMs corresponding to bits set to '1' are set high. The others are untouched. */
#define ADSS_GPIO_GPO_SET_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << ADSS_GPIO_GPO_SET_VAL_SHIFT)) & ADSS_GPIO_GPO_SET_VAL_MASK)
/*! @} */

/*! @name GPO_RESET - GPO set register. This register can be used to reset the corresponding bits high. For the bits with a '1', the corresponding bit will be set low The other bits stay untouched. When reading, the current register value is returned. */
/*! @{ */

#define ADSS_GPIO_GPO_RESET_VAL_MASK             (0xFFU)
#define ADSS_GPIO_GPO_RESET_VAL_SHIFT            (0U)
/*! val - When written the SWMs corresponding to bits set to '1' are set low. The others are untouched. */
#define ADSS_GPIO_GPO_RESET_VAL(x)               (((uint32_t)(((uint32_t)(x)) << ADSS_GPIO_GPO_RESET_VAL_SHIFT)) & ADSS_GPIO_GPO_RESET_VAL_MASK)
/*! @} */

/*! @name GPO_TOGGLE - GPO set register. This register can be used to toggle the corresponding bits. For the bits with a '1', the corresponding bit will toggle. The other bits stay untouched. When reading, the current register value is returned. */
/*! @{ */

#define ADSS_GPIO_GPO_TOGGLE_VAL_MASK            (0xFFU)
#define ADSS_GPIO_GPO_TOGGLE_VAL_SHIFT           (0U)
/*! val - When written the SWMs corresponding to bits set to '1' are toggled. The others are untouched. */
#define ADSS_GPIO_GPO_TOGGLE_VAL(x)              (((uint32_t)(((uint32_t)(x)) << ADSS_GPIO_GPO_TOGGLE_VAL_SHIFT)) & ADSS_GPIO_GPO_TOGGLE_VAL_MASK)
/*! @} */

/*! @name GPI - GPI input register. */
/*! @{ */

#define ADSS_GPIO_GPI_VAL_MASK                   (0xFFU)
#define ADSS_GPIO_GPI_VAL_SHIFT                  (0U)
/*! val - Reading the state of the GPIO input pins */
#define ADSS_GPIO_GPI_VAL(x)                     (((uint32_t)(((uint32_t)(x)) << ADSS_GPIO_GPI_VAL_SHIFT)) & ADSS_GPIO_GPI_VAL_MASK)
/*! @} */

/*! @name GPOEVENTCFG - Configuration of the GPIO output pins */
/*! @{ */

#define ADSS_GPIO_GPOEVENTCFG_EVENT_MASK         (0x7FU)
#define ADSS_GPIO_GPOEVENTCFG_EVENT_SHIFT        (0U)
/*! event - Selects the event on which the specific GPIO output pin will toggle. Disabled when set to 0. */
#define ADSS_GPIO_GPOEVENTCFG_EVENT(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_GPIO_GPOEVENTCFG_EVENT_SHIFT)) & ADSS_GPIO_GPOEVENTCFG_EVENT_MASK)
/*! @} */

/*! @name GPIMODE - Configuration of the GPIO input pins */
/*! @{ */

#define ADSS_GPIO_GPIMODE_GPI_MODE_MASK          (0x3U)
#define ADSS_GPIO_GPIMODE_GPI_MODE_SHIFT         (0U)
/*! gpi_mode - Selects when an event is generated for the specific GPIO input pin. 00=never
 *    01=rising edge 10=falling edge 11=both edges
 */
#define ADSS_GPIO_GPIMODE_GPI_MODE(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_GPIO_GPIMODE_GPI_MODE_SHIFT)) & ADSS_GPIO_GPIMODE_GPI_MODE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADSS_GPIO_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_GPIO_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_GPIO_H_ */

