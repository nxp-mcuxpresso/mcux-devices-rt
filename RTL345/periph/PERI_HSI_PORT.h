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
**         CMSIS Peripheral Access Layer for HSI_PORT
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
 * @file PERI_HSI_PORT.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for HSI_PORT
 *
 * CMSIS Peripheral Access Layer for HSI_PORT
 */

#if !defined(PERI_HSI_PORT_H_)
#define PERI_HSI_PORT_H_                         /**< Symbol preventing repeated inclusion */

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
   -- HSI_PORT Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup HSI_PORT_Peripheral_Access_Layer HSI_PORT Peripheral Access Layer
 * @{
 */

/** HSI_PORT - Register Layout Typedef */
typedef struct {
  __I  uint32_t INPUT_DATA;                        /**< HSI input port data, offset: 0x0 */
  __I  uint32_t INPUT_INFO;                        /**< HSI input port packet information, offset: 0x4 */
  __I  uint32_t INPUT_RDY;                         /**< HSI input port ready, offset: 0x8 */
  __O  uint32_t OUTPUT_DATA;                       /**< HSI output port data, offset: 0xC */
  __O  uint32_t OUTPUT_INFO;                       /**< HSI output port packet information, offset: 0x10 */
  __I  uint32_t OUTPUT_RDY;                        /**< HSI output port ready, offset: 0x14 */
  __IO uint32_t PORT_CFG;                          /**< HSI port configuration, offset: 0x18 */
} HSI_PORT_Type;

/* ----------------------------------------------------------------------------
   -- HSI_PORT Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup HSI_PORT_Register_Masks HSI_PORT Register Masks
 * @{
 */

/*! @name INPUT_DATA - HSI input port data */
/*! @{ */

#define HSI_PORT_INPUT_DATA_INPUT_DATA_MASK      (0xFFFFFFU)
#define HSI_PORT_INPUT_DATA_INPUT_DATA_SHIFT     (0U)
/*! input_data - HSI input port data. When read, input_rdy goes to not_ready */
#define HSI_PORT_INPUT_DATA_INPUT_DATA(x)        (((uint32_t)(((uint32_t)(x)) << HSI_PORT_INPUT_DATA_INPUT_DATA_SHIFT)) & HSI_PORT_INPUT_DATA_INPUT_DATA_MASK)
/*! @} */

/*! @name INPUT_INFO - HSI input port packet information */
/*! @{ */

#define HSI_PORT_INPUT_INFO_INPUT_SOP_MASK       (0x1U)
#define HSI_PORT_INPUT_INFO_INPUT_SOP_SHIFT      (0U)
/*! input_sop - HSI input port start of packet (SOP) */
#define HSI_PORT_INPUT_INFO_INPUT_SOP(x)         (((uint32_t)(((uint32_t)(x)) << HSI_PORT_INPUT_INFO_INPUT_SOP_SHIFT)) & HSI_PORT_INPUT_INFO_INPUT_SOP_MASK)

#define HSI_PORT_INPUT_INFO_INPUT_EOP_MASK       (0x2U)
#define HSI_PORT_INPUT_INFO_INPUT_EOP_SHIFT      (1U)
/*! input_eop - HSI input port end of packet (EOP) */
#define HSI_PORT_INPUT_INFO_INPUT_EOP(x)         (((uint32_t)(((uint32_t)(x)) << HSI_PORT_INPUT_INFO_INPUT_EOP_SHIFT)) & HSI_PORT_INPUT_INFO_INPUT_EOP_MASK)
/*! @} */

/*! @name INPUT_RDY - HSI input port ready */
/*! @{ */

#define HSI_PORT_INPUT_RDY_INPUT_RDY_MASK        (0x1U)
#define HSI_PORT_INPUT_RDY_INPUT_RDY_SHIFT       (0U)
/*! input_rdy - HSI input port ready
 *  0b0..input_data has data that has already been read
 *  0b1..New value can be read from input_data
 */
#define HSI_PORT_INPUT_RDY_INPUT_RDY(x)          (((uint32_t)(((uint32_t)(x)) << HSI_PORT_INPUT_RDY_INPUT_RDY_SHIFT)) & HSI_PORT_INPUT_RDY_INPUT_RDY_MASK)
/*! @} */

/*! @name OUTPUT_DATA - HSI output port data */
/*! @{ */

#define HSI_PORT_OUTPUT_DATA_OUTPUT_DATA_MASK    (0xFFFFFFU)
#define HSI_PORT_OUTPUT_DATA_OUTPUT_DATA_SHIFT   (0U)
/*! output_data - HSI output port data. When writen, output_rdy goes to not_ready */
#define HSI_PORT_OUTPUT_DATA_OUTPUT_DATA(x)      (((uint32_t)(((uint32_t)(x)) << HSI_PORT_OUTPUT_DATA_OUTPUT_DATA_SHIFT)) & HSI_PORT_OUTPUT_DATA_OUTPUT_DATA_MASK)
/*! @} */

/*! @name OUTPUT_INFO - HSI output port packet information */
/*! @{ */

#define HSI_PORT_OUTPUT_INFO_OUTPUT_SOP_MASK     (0x1U)
#define HSI_PORT_OUTPUT_INFO_OUTPUT_SOP_SHIFT    (0U)
/*! output_sop - HSI output port start of packet (SOP) */
#define HSI_PORT_OUTPUT_INFO_OUTPUT_SOP(x)       (((uint32_t)(((uint32_t)(x)) << HSI_PORT_OUTPUT_INFO_OUTPUT_SOP_SHIFT)) & HSI_PORT_OUTPUT_INFO_OUTPUT_SOP_MASK)

#define HSI_PORT_OUTPUT_INFO_OUTPUT_EOP_MASK     (0x2U)
#define HSI_PORT_OUTPUT_INFO_OUTPUT_EOP_SHIFT    (1U)
/*! output_eop - HSI output port end of packet (EOP) */
#define HSI_PORT_OUTPUT_INFO_OUTPUT_EOP(x)       (((uint32_t)(((uint32_t)(x)) << HSI_PORT_OUTPUT_INFO_OUTPUT_EOP_SHIFT)) & HSI_PORT_OUTPUT_INFO_OUTPUT_EOP_MASK)
/*! @} */

/*! @name OUTPUT_RDY - HSI output port ready */
/*! @{ */

#define HSI_PORT_OUTPUT_RDY_OUTPUT_RDY_MASK      (0x1U)
#define HSI_PORT_OUTPUT_RDY_OUTPUT_RDY_SHIFT     (0U)
/*! output_rdy - HSI output port ready
 *  0b0..output_data still has to be written to the HSI bus
 *  0b1..New value can be written to output_data
 */
#define HSI_PORT_OUTPUT_RDY_OUTPUT_RDY(x)        (((uint32_t)(((uint32_t)(x)) << HSI_PORT_OUTPUT_RDY_OUTPUT_RDY_SHIFT)) & HSI_PORT_OUTPUT_RDY_OUTPUT_RDY_MASK)
/*! @} */

/*! @name PORT_CFG - HSI port configuration */
/*! @{ */

#define HSI_PORT_PORT_CFG_EVENT_SEL_MASK         (0x1U)
#define HSI_PORT_PORT_CFG_EVENT_SEL_SHIFT        (0U)
/*! event_sel - Enable HSI port ready event
 *  0b0..Output port (write) generates the event
 *  0b1..Input port (read) generates the event
 */
#define HSI_PORT_PORT_CFG_EVENT_SEL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_PORT_PORT_CFG_EVENT_SEL_SHIFT)) & HSI_PORT_PORT_CFG_EVENT_SEL_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group HSI_PORT_Register_Masks */


/*!
 * @}
 */ /* end of group HSI_PORT_Peripheral_Access_Layer */


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


#endif  /* PERI_HSI_PORT_H_ */

