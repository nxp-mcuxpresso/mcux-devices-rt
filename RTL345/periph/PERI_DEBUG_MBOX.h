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
**         CMSIS Peripheral Access Layer for DEBUG_MBOX
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
 * @file PERI_DEBUG_MBOX.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for DEBUG_MBOX
 *
 * CMSIS Peripheral Access Layer for DEBUG_MBOX
 */

#if !defined(PERI_DEBUG_MBOX_H_)
#define PERI_DEBUG_MBOX_H_                       /**< Symbol preventing repeated inclusion */

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
   -- DEBUG_MBOX Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DEBUG_MBOX_Peripheral_Access_Layer DEBUG_MBOX Peripheral Access Layer
 * @{
 */

/** DEBUG_MBOX - Register Layout Typedef */
typedef struct {
  __IO uint32_t CSW;                               /**< Command and Status Word, offset: 0x0 */
  __IO uint32_t REQUEST;                           /**< Request Value, offset: 0x4 */
  __IO uint32_t RETURN;                            /**< Return Value, offset: 0x8 */
       uint8_t RESERVED_0[240];
  __I  uint32_t ID;                                /**< Identification, offset: 0xFC */
} DEBUG_MBOX_Type;

/* ----------------------------------------------------------------------------
   -- DEBUG_MBOX Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DEBUG_MBOX_Register_Masks DEBUG_MBOX Register Masks
 * @{
 */

/*! @name CSW - Command and Status Word */
/*! @{ */

#define DEBUG_MBOX_CSW_RESYNCH_REQ_MASK          (0x1U)
#define DEBUG_MBOX_CSW_RESYNCH_REQ_SHIFT         (0U)
/*! RESYNCH_REQ - Resynchronization Request
 *  0b0..No request
 *  0b1..Request for resynchronization
 */
#define DEBUG_MBOX_CSW_RESYNCH_REQ(x)            (((uint32_t)(((uint32_t)(x)) << DEBUG_MBOX_CSW_RESYNCH_REQ_SHIFT)) & DEBUG_MBOX_CSW_RESYNCH_REQ_MASK)

#define DEBUG_MBOX_CSW_REQ_PENDING_MASK          (0x2U)
#define DEBUG_MBOX_CSW_REQ_PENDING_SHIFT         (1U)
/*! REQ_PENDING - Request Pending
 *  0b0..No request pending
 *  0b1..Request for resynchronization pending
 */
#define DEBUG_MBOX_CSW_REQ_PENDING(x)            (((uint32_t)(((uint32_t)(x)) << DEBUG_MBOX_CSW_REQ_PENDING_SHIFT)) & DEBUG_MBOX_CSW_REQ_PENDING_MASK)

#define DEBUG_MBOX_CSW_DBG_OR_ERR_MASK           (0x4U)
#define DEBUG_MBOX_CSW_DBG_OR_ERR_SHIFT          (2U)
/*! DBG_OR_ERR - DBGMB Overrun Error
 *  0b0..No DBGMB Overrun error
 *  0b1..DBGMB overrun error. A DBGMB overrun occurred.
 */
#define DEBUG_MBOX_CSW_DBG_OR_ERR(x)             (((uint32_t)(((uint32_t)(x)) << DEBUG_MBOX_CSW_DBG_OR_ERR_SHIFT)) & DEBUG_MBOX_CSW_DBG_OR_ERR_MASK)

#define DEBUG_MBOX_CSW_AHB_OR_ERR_MASK           (0x8U)
#define DEBUG_MBOX_CSW_AHB_OR_ERR_SHIFT          (3U)
/*! AHB_OR_ERR - AHB Overrun Error
 *  0b0..No AHB Overrun Error
 *  0b1..AHB Overrun Error. An AHB overrun occurred.
 */
#define DEBUG_MBOX_CSW_AHB_OR_ERR(x)             (((uint32_t)(((uint32_t)(x)) << DEBUG_MBOX_CSW_AHB_OR_ERR_SHIFT)) & DEBUG_MBOX_CSW_AHB_OR_ERR_MASK)

#define DEBUG_MBOX_CSW_SOFT_RESET_MASK           (0x10U)
#define DEBUG_MBOX_CSW_SOFT_RESET_SHIFT          (4U)
/*! SOFT_RESET - Soft Reset */
#define DEBUG_MBOX_CSW_SOFT_RESET(x)             (((uint32_t)(((uint32_t)(x)) << DEBUG_MBOX_CSW_SOFT_RESET_SHIFT)) & DEBUG_MBOX_CSW_SOFT_RESET_MASK)

#define DEBUG_MBOX_CSW_CHIP_RESET_REQ_MASK       (0x20U)
#define DEBUG_MBOX_CSW_CHIP_RESET_REQ_SHIFT      (5U)
/*! CHIP_RESET_REQ - Chip Reset Request */
#define DEBUG_MBOX_CSW_CHIP_RESET_REQ(x)         (((uint32_t)(((uint32_t)(x)) << DEBUG_MBOX_CSW_CHIP_RESET_REQ_SHIFT)) & DEBUG_MBOX_CSW_CHIP_RESET_REQ_MASK)
/*! @} */

/*! @name REQUEST - Request Value */
/*! @{ */

#define DEBUG_MBOX_REQUEST_REQUEST_MASK          (0xFFFFFFFFU)
#define DEBUG_MBOX_REQUEST_REQUEST_SHIFT         (0U)
/*! REQUEST - Request Value */
#define DEBUG_MBOX_REQUEST_REQUEST(x)            (((uint32_t)(((uint32_t)(x)) << DEBUG_MBOX_REQUEST_REQUEST_SHIFT)) & DEBUG_MBOX_REQUEST_REQUEST_MASK)
/*! @} */

/*! @name RETURN - Return Value */
/*! @{ */

#define DEBUG_MBOX_RETURN_RET_MASK               (0xFFFFFFFFU)
#define DEBUG_MBOX_RETURN_RET_SHIFT              (0U)
/*! RET - Return Value */
#define DEBUG_MBOX_RETURN_RET(x)                 (((uint32_t)(((uint32_t)(x)) << DEBUG_MBOX_RETURN_RET_SHIFT)) & DEBUG_MBOX_RETURN_RET_MASK)
/*! @} */

/*! @name ID - Identification */
/*! @{ */

#define DEBUG_MBOX_ID_ID_MASK                    (0xFFFFFFFFU)
#define DEBUG_MBOX_ID_ID_SHIFT                   (0U)
/*! ID - Identification Value */
#define DEBUG_MBOX_ID_ID(x)                      (((uint32_t)(((uint32_t)(x)) << DEBUG_MBOX_ID_ID_SHIFT)) & DEBUG_MBOX_ID_ID_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group DEBUG_MBOX_Register_Masks */


/*!
 * @}
 */ /* end of group DEBUG_MBOX_Peripheral_Access_Layer */


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


#endif  /* PERI_DEBUG_MBOX_H_ */

