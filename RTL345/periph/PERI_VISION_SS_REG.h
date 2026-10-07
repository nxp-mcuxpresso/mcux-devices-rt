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
**         CMSIS Peripheral Access Layer for VISION_SS_REG
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
 * @file PERI_VISION_SS_REG.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for VISION_SS_REG
 *
 * CMSIS Peripheral Access Layer for VISION_SS_REG
 */

#if !defined(PERI_VISION_SS_REG_H_)
#define PERI_VISION_SS_REG_H_                    /**< Symbol preventing repeated inclusion */

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
   -- VISION_SS_REG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VISION_SS_REG_Peripheral_Access_Layer VISION_SS_REG Peripheral Access Layer
 * @{
 */

/** VISION_SS_REG - Register Layout Typedef */
typedef struct {
  __I  uint32_t MISC_STATUS;                       /**< TBD, offset: 0x0 */
  __I  uint32_t CPHY_HEADER_CRC;                   /**< TBD, offset: 0x4 */
} VISION_SS_REG_Type;

/* ----------------------------------------------------------------------------
   -- VISION_SS_REG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VISION_SS_REG_Register_Masks VISION_SS_REG Register Masks
 * @{
 */

/*! @name MISC_STATUS - TBD */
/*! @{ */

#define VISION_SS_REG_MISC_STATUS_FIFO_OVERFLOW_ERROR_MASK (0x1U)
#define VISION_SS_REG_MISC_STATUS_FIFO_OVERFLOW_ERROR_SHIFT (0U)
/*! fifo_overflow_error - Asserted by RC Core if internal fifo overflows. Means data is corrupted and RX core should be reset. */
#define VISION_SS_REG_MISC_STATUS_FIFO_OVERFLOW_ERROR(x) (((uint32_t)(((uint32_t)(x)) << VISION_SS_REG_MISC_STATUS_FIFO_OVERFLOW_ERROR_SHIFT)) & VISION_SS_REG_MISC_STATUS_FIFO_OVERFLOW_ERROR_MASK)
/*! @} */

/*! @name CPHY_HEADER_CRC - TBD */
/*! @{ */

#define VISION_SS_REG_CPHY_HEADER_CRC_CMD_CRC_RECEIVED_MASK (0xFFFFU)
#define VISION_SS_REG_CPHY_HEADER_CRC_CMD_CRC_RECEIVED_SHIFT (0U)
/*! cmd_crc_received - Indicated the crc value received by the RX core over the header data in CPHY mode */
#define VISION_SS_REG_CPHY_HEADER_CRC_CMD_CRC_RECEIVED(x) (((uint32_t)(((uint32_t)(x)) << VISION_SS_REG_CPHY_HEADER_CRC_CMD_CRC_RECEIVED_SHIFT)) & VISION_SS_REG_CPHY_HEADER_CRC_CMD_CRC_RECEIVED_MASK)

#define VISION_SS_REG_CPHY_HEADER_CRC_DMD_CRC_CALCULATED_MASK (0xFFFF0000U)
#define VISION_SS_REG_CPHY_HEADER_CRC_DMD_CRC_CALCULATED_SHIFT (16U)
/*! dmd_crc_calculated - Indicates the crc value calculated by the RC core over the header data in CPHY mode */
#define VISION_SS_REG_CPHY_HEADER_CRC_DMD_CRC_CALCULATED(x) (((uint32_t)(((uint32_t)(x)) << VISION_SS_REG_CPHY_HEADER_CRC_DMD_CRC_CALCULATED_SHIFT)) & VISION_SS_REG_CPHY_HEADER_CRC_DMD_CRC_CALCULATED_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group VISION_SS_REG_Register_Masks */


/*!
 * @}
 */ /* end of group VISION_SS_REG_Peripheral_Access_Layer */


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


#endif  /* PERI_VISION_SS_REG_H_ */

