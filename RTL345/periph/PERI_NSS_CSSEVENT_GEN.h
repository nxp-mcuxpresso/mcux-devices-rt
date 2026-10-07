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
**         CMSIS Peripheral Access Layer for NSS_CSSEVENT_GEN
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
 * @file PERI_NSS_CSSEVENT_GEN.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for NSS_CSSEVENT_GEN
 *
 * CMSIS Peripheral Access Layer for NSS_CSSEVENT_GEN
 */

#if !defined(PERI_NSS_CSSEVENT_GEN_H_)
#define PERI_NSS_CSSEVENT_GEN_H_                 /**< Symbol preventing repeated inclusion */

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
   -- NSS_CSSEVENT_GEN Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_CSSEVENT_GEN_Peripheral_Access_Layer NSS_CSSEVENT_GEN Peripheral Access Layer
 * @{
 */

/** NSS_CSSEVENT_GEN - Size of Registers Arrays */
#define NSS_CSSEVENT_GEN_DMAEVENT_SEL_COUNT       8u

/** NSS_CSSEVENT_GEN - Register Layout Typedef */
typedef struct {
  __O  uint32_t CM_SYNC;                           /**< Cortex-M55 sync event generation to the external SS CM55 event lines., offset: 0x0 */
  __I  uint32_t CM_SYNC_OVF;                       /**< Cortex-M55 sync event generation overflow status for CM55 events to the external SS., offset: 0x4 */
  __O  uint32_t XSP_SYNC;                          /**< XSP sync event generation to the external SS XSP event lines., offset: 0x8 */
  __I  uint32_t XSP_SYNC_OVF;                      /**< XSP sync event generation overflow status for XSP events to the external SS., offset: 0xC */
       uint8_t RESERVED_0[16];
  __IO uint32_t DMAEVENT_SEL[NSS_CSSEVENT_GEN_DMAEVENT_SEL_COUNT]; /**< Configure eDMA done event generation towards the external SS specific event bus. Register[i] configures generation of the eDMA channel done external event[i]., array offset: 0x20, array step: 0x4 */
} NSS_CSSEVENT_GEN_Type;

/* ----------------------------------------------------------------------------
   -- NSS_CSSEVENT_GEN Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_CSSEVENT_GEN_Register_Masks NSS_CSSEVENT_GEN Register Masks
 * @{
 */

/*! @name CM_SYNC - Cortex-M55 sync event generation to the external SS CM55 event lines. */
/*! @{ */

#define NSS_CSSEVENT_GEN_CM_SYNC_CM_SYNC_MASK    (0xFFU)
#define NSS_CSSEVENT_GEN_CM_SYNC_CM_SYNC_SHIFT   (0U)
/*! cm_sync - Write one to the bit(s) to trigger the corresponding Cortex-M55 sync event to the
 *    specific SS. Sync event triggers that cause an overflow are ignored.
 */
#define NSS_CSSEVENT_GEN_CM_SYNC_CM_SYNC(x)      (((uint32_t)(((uint32_t)(x)) << NSS_CSSEVENT_GEN_CM_SYNC_CM_SYNC_SHIFT)) & NSS_CSSEVENT_GEN_CM_SYNC_CM_SYNC_MASK)
/*! @} */

/*! @name CM_SYNC_OVF - Cortex-M55 sync event generation overflow status for CM55 events to the external SS. */
/*! @{ */

#define NSS_CSSEVENT_GEN_CM_SYNC_OVF_CM_SYNC_OVF_MASK (0xFFU)
#define NSS_CSSEVENT_GEN_CM_SYNC_OVF_CM_SYNC_OVF_SHIFT (0U)
/*! cm_sync_ovf - Indicates overflow status of the corresponding Cortex-M55 sync event generation
 *    towards the external interface. An overflow is indicated when an event is being triggered while
 *    the previous event generation has not yet finished. Overflow bits are cleared upon reading the
 *    register.
 */
#define NSS_CSSEVENT_GEN_CM_SYNC_OVF_CM_SYNC_OVF(x) (((uint32_t)(((uint32_t)(x)) << NSS_CSSEVENT_GEN_CM_SYNC_OVF_CM_SYNC_OVF_SHIFT)) & NSS_CSSEVENT_GEN_CM_SYNC_OVF_CM_SYNC_OVF_MASK)
/*! @} */

/*! @name XSP_SYNC - XSP sync event generation to the external SS XSP event lines. */
/*! @{ */

#define NSS_CSSEVENT_GEN_XSP_SYNC_XSP_SYNC_MASK  (0xFFU)
#define NSS_CSSEVENT_GEN_XSP_SYNC_XSP_SYNC_SHIFT (0U)
/*! xsp_sync - Write one to the bit(s) to trigger the corresponding XSP sync event to the specific
 *    SS. Sync event triggers that cause an overflow are ignored.
 */
#define NSS_CSSEVENT_GEN_XSP_SYNC_XSP_SYNC(x)    (((uint32_t)(((uint32_t)(x)) << NSS_CSSEVENT_GEN_XSP_SYNC_XSP_SYNC_SHIFT)) & NSS_CSSEVENT_GEN_XSP_SYNC_XSP_SYNC_MASK)
/*! @} */

/*! @name XSP_SYNC_OVF - XSP sync event generation overflow status for XSP events to the external SS. */
/*! @{ */

#define NSS_CSSEVENT_GEN_XSP_SYNC_OVF_XSP_SYNC_OVF_MASK (0xFFU)
#define NSS_CSSEVENT_GEN_XSP_SYNC_OVF_XSP_SYNC_OVF_SHIFT (0U)
/*! xsp_sync_ovf - Indicates overflow status of the corresponding XSP sync event generation towards
 *    the external interface. An overflow is indicated when an event is being triggered while the
 *    previous event generation has not yet finished. Overflow bits are cleared upon reading the
 *    register.
 */
#define NSS_CSSEVENT_GEN_XSP_SYNC_OVF_XSP_SYNC_OVF(x) (((uint32_t)(((uint32_t)(x)) << NSS_CSSEVENT_GEN_XSP_SYNC_OVF_XSP_SYNC_OVF_SHIFT)) & NSS_CSSEVENT_GEN_XSP_SYNC_OVF_XSP_SYNC_OVF_MASK)
/*! @} */

/*! @name DMAEVENT_SEL - Configure eDMA done event generation towards the external SS specific event bus. Register[i] configures generation of the eDMA channel done external event[i]. */
/*! @{ */

#define NSS_CSSEVENT_GEN_DMAEVENT_SEL_CHANNEL_MASK (0x1FU)
#define NSS_CSSEVENT_GEN_DMAEVENT_SEL_CHANNEL_SHIFT (0U)
/*! channel - Select the DMA channel for which the event is generated. */
#define NSS_CSSEVENT_GEN_DMAEVENT_SEL_CHANNEL(x) (((uint32_t)(((uint32_t)(x)) << NSS_CSSEVENT_GEN_DMAEVENT_SEL_CHANNEL_SHIFT)) & NSS_CSSEVENT_GEN_DMAEVENT_SEL_CHANNEL_MASK)

#define NSS_CSSEVENT_GEN_DMAEVENT_SEL_EVENT_TYPE_MASK (0x700U)
#define NSS_CSSEVENT_GEN_DMAEVENT_SEL_EVENT_TYPE_SHIFT (8U)
/*! event_type - Select the event type getting generated for the respective channel.
 *  0b000..Use the DMA HW request acknowledgement as event. This event is generated when the HW request is
 *         granted. This event is only generated when the channel is triggered through a HW request.
 *  0b001..Use the DMA HW request done as event. This event is generated when the DMA minor loop has executed its
 *         last read operation. This event is only generated when the channel is triggered through a HW request.
 *  0b010..Use the DMA HW request done_lw (last write) as event. This event is generated when the DMA minor loop
 *         has executed its last write operation, this signals the moment the DMA releases the AXI bus. This event
 *         is only generated when the channel is triggered through a HW request.
 *  0b011..Use the DMA HW request complete as event. This event is generated when the DMA major loop has executed
 *         its last write operation, this signals the completion of the full DMA channel operation. This event is
 *         only generated when the channel is triggered through a HW request.
 *  0b100..Use the DMA done IRQ as event. An event is generated on the asserting of the IRQ, SW must clear the IRQ
 *         in order to generate subsequent events.
 */
#define NSS_CSSEVENT_GEN_DMAEVENT_SEL_EVENT_TYPE(x) (((uint32_t)(((uint32_t)(x)) << NSS_CSSEVENT_GEN_DMAEVENT_SEL_EVENT_TYPE_SHIFT)) & NSS_CSSEVENT_GEN_DMAEVENT_SEL_EVENT_TYPE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group NSS_CSSEVENT_GEN_Register_Masks */


/*!
 * @}
 */ /* end of group NSS_CSSEVENT_GEN_Peripheral_Access_Layer */


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


#endif  /* PERI_NSS_CSSEVENT_GEN_H_ */

