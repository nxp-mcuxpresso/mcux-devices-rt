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
**         CMSIS Peripheral Access Layer for ADSS_CONFIG
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
 * @file PERI_ADSS_CONFIG.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_CONFIG
 *
 * CMSIS Peripheral Access Layer for ADSS_CONFIG
 */

#if !defined(PERI_ADSS_CONFIG_H_)
#define PERI_ADSS_CONFIG_H_                      /**< Symbol preventing repeated inclusion */

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
   -- ADSS_CONFIG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_CONFIG_Peripheral_Access_Layer ADSS_CONFIG Peripheral Access Layer
 * @{
 */

/** ADSS_CONFIG - Register Layout Typedef */
typedef struct {
  __IO uint32_t DSP3NHIFI5S;                       /**< Selection whether to use a CoolFlux DSP3 based subsystem or a Cadence HiFi5s based subsystem, offset: 0x0 */
  __IO uint32_t TRACENCACHE;                       /**< Selection between cache memory or trace memory within a CoolFlux DSP3 based subsystem, offset: 0x4 */
  __IO uint32_t IVT0_OFFSET;                       /**< Interrupt vector table offset for DSP3 instance 0, offset: 0x8 */
  __IO uint32_t IVT1_OFFSET;                       /**< Interrupt vector table offset for DSP3 instance 1, offset: 0xC */
  __IO uint32_t AHB_MAX_LATENCY;                   /**< Maximum memory latency from the AHB interface, offset: 0x10 */
  __IO uint32_t DMA_MAX_LATENCY;                   /**< Maximum memory latency from the DMA interface, offset: 0x14 */
  __IO uint32_t LP_MAX_LATENCY;                    /**< Maximum memory latency from the lower-priority DSP3 interface, offset: 0x18 */
  __IO uint32_t GATING_OVERRIDE;                   /**< Gating override signal, offset: 0x1C */
  __O  uint32_t WATCHDOG_0_CLEAR;                  /**< Clear expiration bit of watchdog CoolFlux DSP3 instance 0, offset: 0x20 */
  __O  uint32_t WATCHDOG_1_CLEAR;                  /**< Clear expiration bit of watchdog CoolFlux DSP3 instance 1, offset: 0x24 */
  __IO uint32_t WATCHDOG_2_CLEAR;                  /**< Clear expiration bit of watchdog Cadence HiFi5s, offset: 0x28 */
  __I  uint32_t PFAULTINFO;                        /**< Fault information for Cadence HiFi5s, offset: 0x2C */
  __IO uint32_t ALTRESETVEC;                       /**< Alternate reset vector address for Cadence HiFi5s, offset: 0x30 */
} ADSS_CONFIG_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_CONFIG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_CONFIG_Register_Masks ADSS_CONFIG Register Masks
 * @{
 */

/*! @name DSP3NHIFI5S - Selection whether to use a CoolFlux DSP3 based subsystem or a Cadence HiFi5s based subsystem */
/*! @{ */

#define ADSS_CONFIG_DSP3NHIFI5S_ADDRESS_MASK     (0x1U)
#define ADSS_CONFIG_DSP3NHIFI5S_ADDRESS_SHIFT    (0U)
/*! address - When set to 1 (default), the audio subsystem is CoolFlux DSP3 based. When set to 0,
 *    the audio subsystem is Cadence HiFi5s based.
 */
#define ADSS_CONFIG_DSP3NHIFI5S_ADDRESS(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_CONFIG_DSP3NHIFI5S_ADDRESS_SHIFT)) & ADSS_CONFIG_DSP3NHIFI5S_ADDRESS_MASK)
/*! @} */

/*! @name TRACENCACHE - Selection between cache memory or trace memory within a CoolFlux DSP3 based subsystem */
/*! @{ */

#define ADSS_CONFIG_TRACENCACHE_SEL_MASK         (0x1U)
#define ADSS_CONFIG_TRACENCACHE_SEL_SHIFT        (0U)
/*! sel - When set to 0, there is a memory segment used as program cache memory for CoolFlux DSP3
 *    instance 1. When set to 1 (default), this memory segment is used as trace memory. This bit is
 *    only used for a CoolFlux DSP3 based subsystem. In case of a Cadence HiFi5s based subsystem, the
 *    memory is always trace memory.
 */
#define ADSS_CONFIG_TRACENCACHE_SEL(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_CONFIG_TRACENCACHE_SEL_SHIFT)) & ADSS_CONFIG_TRACENCACHE_SEL_MASK)
/*! @} */

/*! @name IVT0_OFFSET - Interrupt vector table offset for DSP3 instance 0 */
/*! @{ */

#define ADSS_CONFIG_IVT0_OFFSET_ADDRESS_MASK     (0x1FFFE0U)
#define ADSS_CONFIG_IVT0_OFFSET_ADDRESS_SHIFT    (5U)
/*! address - Bits [20:5] of the address of the interrupt vector table (IVT) for DSP3 0. The five
 *    least significant bits of the address must be zero.
 */
#define ADSS_CONFIG_IVT0_OFFSET_ADDRESS(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_CONFIG_IVT0_OFFSET_ADDRESS_SHIFT)) & ADSS_CONFIG_IVT0_OFFSET_ADDRESS_MASK)
/*! @} */

/*! @name IVT1_OFFSET - Interrupt vector table offset for DSP3 instance 1 */
/*! @{ */

#define ADSS_CONFIG_IVT1_OFFSET_ADDRESS_MASK     (0x1FFFE0U)
#define ADSS_CONFIG_IVT1_OFFSET_ADDRESS_SHIFT    (5U)
/*! address - Bits [20:5] of the address of the interrupt vector table (IVT) for DSP3 1. The five
 *    least significant bits of the address must be zero.
 */
#define ADSS_CONFIG_IVT1_OFFSET_ADDRESS(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_CONFIG_IVT1_OFFSET_ADDRESS_SHIFT)) & ADSS_CONFIG_IVT1_OFFSET_ADDRESS_MASK)
/*! @} */

/*! @name AHB_MAX_LATENCY - Maximum memory latency from the AHB interface */
/*! @{ */

#define ADSS_CONFIG_AHB_MAX_LATENCY_LATENCY_MASK (0x3FU)
#define ADSS_CONFIG_AHB_MAX_LATENCY_LATENCY_SHIFT (0U)
/*! latency - Maximum latency of AHB/AXI to the DSP memories, measured in memory clock cycles. */
#define ADSS_CONFIG_AHB_MAX_LATENCY_LATENCY(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_CONFIG_AHB_MAX_LATENCY_LATENCY_SHIFT)) & ADSS_CONFIG_AHB_MAX_LATENCY_LATENCY_MASK)
/*! @} */

/*! @name DMA_MAX_LATENCY - Maximum memory latency from the DMA interface */
/*! @{ */

#define ADSS_CONFIG_DMA_MAX_LATENCY_LATENCY_MASK (0x3FU)
#define ADSS_CONFIG_DMA_MAX_LATENCY_LATENCY_SHIFT (0U)
/*! latency - Maximum latency of DMA accesses to the DSP memories, measured in memory clock cycles. */
#define ADSS_CONFIG_DMA_MAX_LATENCY_LATENCY(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_CONFIG_DMA_MAX_LATENCY_LATENCY_SHIFT)) & ADSS_CONFIG_DMA_MAX_LATENCY_LATENCY_MASK)
/*! @} */

/*! @name LP_MAX_LATENCY - Maximum memory latency from the lower-priority DSP3 interface */
/*! @{ */

#define ADSS_CONFIG_LP_MAX_LATENCY_LATENCY_MASK  (0x3FU)
#define ADSS_CONFIG_LP_MAX_LATENCY_LATENCY_SHIFT (0U)
/*! latency - Maximum latency of lower-priority DSP3 to the DSP memories, measured in memory clock cycles. */
#define ADSS_CONFIG_LP_MAX_LATENCY_LATENCY(x)    (((uint32_t)(((uint32_t)(x)) << ADSS_CONFIG_LP_MAX_LATENCY_LATENCY_SHIFT)) & ADSS_CONFIG_LP_MAX_LATENCY_LATENCY_MASK)
/*! @} */

/*! @name GATING_OVERRIDE - Gating override signal */
/*! @{ */

#define ADSS_CONFIG_GATING_OVERRIDE_LATENCY_MASK (0x1U)
#define ADSS_CONFIG_GATING_OVERRIDE_LATENCY_SHIFT (0U)
/*! latency - Override signal for the automatic clock gating of the CoolFlux DSP3 processors */
#define ADSS_CONFIG_GATING_OVERRIDE_LATENCY(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_CONFIG_GATING_OVERRIDE_LATENCY_SHIFT)) & ADSS_CONFIG_GATING_OVERRIDE_LATENCY_MASK)
/*! @} */

/*! @name WATCHDOG_0_CLEAR - Clear expiration bit of watchdog CoolFlux DSP3 instance 0 */
/*! @{ */

#define ADSS_CONFIG_WATCHDOG_0_CLEAR_LATENCY_MASK (0x1U)
#define ADSS_CONFIG_WATCHDOG_0_CLEAR_LATENCY_SHIFT (0U)
/*! latency - Writing a '1' to this bit clears the expiration bit of the CoolFlux DSP3 instance 0 watchdog */
#define ADSS_CONFIG_WATCHDOG_0_CLEAR_LATENCY(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_CONFIG_WATCHDOG_0_CLEAR_LATENCY_SHIFT)) & ADSS_CONFIG_WATCHDOG_0_CLEAR_LATENCY_MASK)
/*! @} */

/*! @name WATCHDOG_1_CLEAR - Clear expiration bit of watchdog CoolFlux DSP3 instance 1 */
/*! @{ */

#define ADSS_CONFIG_WATCHDOG_1_CLEAR_LATENCY_MASK (0x1U)
#define ADSS_CONFIG_WATCHDOG_1_CLEAR_LATENCY_SHIFT (0U)
/*! latency - Writing a '1' to this bit clears the expiration bit of the CoolFlux DSP3 instance 1 watchdog */
#define ADSS_CONFIG_WATCHDOG_1_CLEAR_LATENCY(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_CONFIG_WATCHDOG_1_CLEAR_LATENCY_SHIFT)) & ADSS_CONFIG_WATCHDOG_1_CLEAR_LATENCY_MASK)
/*! @} */

/*! @name WATCHDOG_2_CLEAR - Clear expiration bit of watchdog Cadence HiFi5s */
/*! @{ */

#define ADSS_CONFIG_WATCHDOG_2_CLEAR_LATENCY_MASK (0x1U)
#define ADSS_CONFIG_WATCHDOG_2_CLEAR_LATENCY_SHIFT (0U)
/*! latency - Writing a '1' to this bit clears the expiration bit of the Cadence HiFi5s watchdog,
 *    reading will indicate if the early reset request has been asserted
 */
#define ADSS_CONFIG_WATCHDOG_2_CLEAR_LATENCY(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_CONFIG_WATCHDOG_2_CLEAR_LATENCY_SHIFT)) & ADSS_CONFIG_WATCHDOG_2_CLEAR_LATENCY_MASK)
/*! @} */

/*! @name PFAULTINFO - Fault information for Cadence HiFi5s */
/*! @{ */

#define ADSS_CONFIG_PFAULTINFO_FAULT_MASK        (0xFFFFFFFFU)
#define ADSS_CONFIG_PFAULTINFO_FAULT_SHIFT       (0U)
/*! fault - The fault information for Cadence HiFi5s. For more information on the content of this
 *    register, please refer to Cadence information
 */
#define ADSS_CONFIG_PFAULTINFO_FAULT(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_CONFIG_PFAULTINFO_FAULT_SHIFT)) & ADSS_CONFIG_PFAULTINFO_FAULT_MASK)
/*! @} */

/*! @name ALTRESETVEC - Alternate reset vector address for Cadence HiFi5s */
/*! @{ */

#define ADSS_CONFIG_ALTRESETVEC_VECTOR_MASK      (0xFFFFFFFFU)
#define ADSS_CONFIG_ALTRESETVEC_VECTOR_SHIFT     (0U)
/*! vector - When set to a non-zero value, this alternate reset vector address will be used instead of the default one */
#define ADSS_CONFIG_ALTRESETVEC_VECTOR(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_CONFIG_ALTRESETVEC_VECTOR_SHIFT)) & ADSS_CONFIG_ALTRESETVEC_VECTOR_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADSS_CONFIG_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_CONFIG_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_CONFIG_H_ */

