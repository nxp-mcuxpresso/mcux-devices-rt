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
**         CMSIS Peripheral Access Layer for NSS_DNN_RAM
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
 * @file PERI_NSS_DNN_RAM.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for NSS_DNN_RAM
 *
 * CMSIS Peripheral Access Layer for NSS_DNN_RAM
 */

#if !defined(PERI_NSS_DNN_RAM_H_)
#define PERI_NSS_DNN_RAM_H_                      /**< Symbol preventing repeated inclusion */

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
   -- NSS_DNN_RAM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_DNN_RAM_Peripheral_Access_Layer NSS_DNN_RAM Peripheral Access Layer
 * @{
 */

/** NSS_DNN_RAM - Size of Registers Arrays */
#define NSS_DNN_RAM_EVENT_TRIGGER_COUNT           8u

/** NSS_DNN_RAM - Register Layout Typedef */
typedef struct {
  __IO uint32_t AXI_WR_MAX_MEM_LATENCY;            /**< Maximum memory latency from the AXI Write Interface, offset: 0x0 */
  __IO uint32_t AXI_RD_MAX_MEM_LATENCY;            /**< Maximum memory latency from the AXI Read Interface, offset: 0x4 */
  __IO uint32_t XSP_MAX_MEM_LATENCY;               /**< Maximum memory latency from the XSP Interface, offset: 0x8 */
  __IO uint32_t EVENT_TRIGGER[NSS_DNN_RAM_EVENT_TRIGGER_COUNT]; /**< Address and access type configuration to trigger events, array offset: 0xC, array step: 0x4 */
  __IO uint32_t PMON_CFG;                          /**< Configuration settings for DNN RAM access counts towards NSS PMON., offset: 0x2C */
} NSS_DNN_RAM_Type;

/* ----------------------------------------------------------------------------
   -- NSS_DNN_RAM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_DNN_RAM_Register_Masks NSS_DNN_RAM Register Masks
 * @{
 */

/*! @name AXI_WR_MAX_MEM_LATENCY - Maximum memory latency from the AXI Write Interface */
/*! @{ */

#define NSS_DNN_RAM_AXI_WR_MAX_MEM_LATENCY_LATENCY_MASK (0x3FU)
#define NSS_DNN_RAM_AXI_WR_MAX_MEM_LATENCY_LATENCY_SHIFT (0U)
/*! latency - Maximum latency of AXI Write accesses to the DNN RAM, measured in memory clock cycles
 *  0b000000..Minimum latency
 *  0b111111..Maximum latency
 */
#define NSS_DNN_RAM_AXI_WR_MAX_MEM_LATENCY_LATENCY(x) (((uint32_t)(((uint32_t)(x)) << NSS_DNN_RAM_AXI_WR_MAX_MEM_LATENCY_LATENCY_SHIFT)) & NSS_DNN_RAM_AXI_WR_MAX_MEM_LATENCY_LATENCY_MASK)
/*! @} */

/*! @name AXI_RD_MAX_MEM_LATENCY - Maximum memory latency from the AXI Read Interface */
/*! @{ */

#define NSS_DNN_RAM_AXI_RD_MAX_MEM_LATENCY_LATENCY_MASK (0x3FU)
#define NSS_DNN_RAM_AXI_RD_MAX_MEM_LATENCY_LATENCY_SHIFT (0U)
/*! latency - Maximum latency of AXI Read accesses to the DNN RAM, measured in memory clock cycles
 *  0b000000..Minimum latency
 *  0b111111..Maximum latency
 */
#define NSS_DNN_RAM_AXI_RD_MAX_MEM_LATENCY_LATENCY(x) (((uint32_t)(((uint32_t)(x)) << NSS_DNN_RAM_AXI_RD_MAX_MEM_LATENCY_LATENCY_SHIFT)) & NSS_DNN_RAM_AXI_RD_MAX_MEM_LATENCY_LATENCY_MASK)
/*! @} */

/*! @name XSP_MAX_MEM_LATENCY - Maximum memory latency from the XSP Interface */
/*! @{ */

#define NSS_DNN_RAM_XSP_MAX_MEM_LATENCY_LATENCY_MASK (0x3FU)
#define NSS_DNN_RAM_XSP_MAX_MEM_LATENCY_LATENCY_SHIFT (0U)
/*! latency - Maximum latency of XSP accesses to the DNN RAM, measured in memory clock cycles
 *  0b000000..Minimum latency
 *  0b111111..Maximum latency
 */
#define NSS_DNN_RAM_XSP_MAX_MEM_LATENCY_LATENCY(x) (((uint32_t)(((uint32_t)(x)) << NSS_DNN_RAM_XSP_MAX_MEM_LATENCY_LATENCY_SHIFT)) & NSS_DNN_RAM_XSP_MAX_MEM_LATENCY_LATENCY_MASK)
/*! @} */

/*! @name EVENT_TRIGGER - Address and access type configuration to trigger events */
/*! @{ */

#define NSS_DNN_RAM_EVENT_TRIGGER_ADDRESS_MASK   (0x1FFFFU)
#define NSS_DNN_RAM_EVENT_TRIGGER_ADDRESS_SHIFT  (0U)
/*! address - DNN RAM Address triggering the event */
#define NSS_DNN_RAM_EVENT_TRIGGER_ADDRESS(x)     (((uint32_t)(((uint32_t)(x)) << NSS_DNN_RAM_EVENT_TRIGGER_ADDRESS_SHIFT)) & NSS_DNN_RAM_EVENT_TRIGGER_ADDRESS_MASK)

#define NSS_DNN_RAM_EVENT_TRIGGER_ACCESS_TYPE_MASK (0x100000U)
#define NSS_DNN_RAM_EVENT_TRIGGER_ACCESS_TYPE_SHIFT (20U)
/*! access_type - DNN RAM Access type triggering the event
 *  0b0..Write access
 *  0b1..Read access
 */
#define NSS_DNN_RAM_EVENT_TRIGGER_ACCESS_TYPE(x) (((uint32_t)(((uint32_t)(x)) << NSS_DNN_RAM_EVENT_TRIGGER_ACCESS_TYPE_SHIFT)) & NSS_DNN_RAM_EVENT_TRIGGER_ACCESS_TYPE_MASK)

#define NSS_DNN_RAM_EVENT_TRIGGER_EN_MASK        (0x200000U)
#define NSS_DNN_RAM_EVENT_TRIGGER_EN_SHIFT       (21U)
/*! en - Enable */
#define NSS_DNN_RAM_EVENT_TRIGGER_EN(x)          (((uint32_t)(((uint32_t)(x)) << NSS_DNN_RAM_EVENT_TRIGGER_EN_SHIFT)) & NSS_DNN_RAM_EVENT_TRIGGER_EN_MASK)
/*! @} */

/*! @name PMON_CFG - Configuration settings for DNN RAM access counts towards NSS PMON. */
/*! @{ */

#define NSS_DNN_RAM_PMON_CFG_ACCESS_CNT_EN_MASK  (0x1U)
#define NSS_DNN_RAM_PMON_CFG_ACCESS_CNT_EN_SHIFT (0U)
/*! access_cnt_en - Enable count of DNN RAM accesses to PMON. Disabled for power savings.
 *  0b0..Disable
 *  0b1..Enable
 */
#define NSS_DNN_RAM_PMON_CFG_ACCESS_CNT_EN(x)    (((uint32_t)(((uint32_t)(x)) << NSS_DNN_RAM_PMON_CFG_ACCESS_CNT_EN_SHIFT)) & NSS_DNN_RAM_PMON_CFG_ACCESS_CNT_EN_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group NSS_DNN_RAM_Register_Masks */


/*!
 * @}
 */ /* end of group NSS_DNN_RAM_Peripheral_Access_Layer */


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


#endif  /* PERI_NSS_DNN_RAM_H_ */

