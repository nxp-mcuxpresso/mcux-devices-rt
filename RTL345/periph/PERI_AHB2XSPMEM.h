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
**         CMSIS Peripheral Access Layer for AHB2XSPMEM
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
 * @file PERI_AHB2XSPMEM.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for AHB2XSPMEM
 *
 * CMSIS Peripheral Access Layer for AHB2XSPMEM
 */

#if !defined(PERI_AHB2XSPMEM_H_)
#define PERI_AHB2XSPMEM_H_                       /**< Symbol preventing repeated inclusion */

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
   -- AHB2XSPMEM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup AHB2XSPMEM_Peripheral_Access_Layer AHB2XSPMEM Peripheral Access Layer
 * @{
 */

/** AHB2XSPMEM - Register Layout Typedef */
typedef struct {
  __IO uint32_t PWRITEACCESS;                      /**< This register enables or disables write access to the protected PRAM, offset: 0x0 */
  __IO uint32_t MAX_MEM_LATENCY;                   /**< Maximum memory latency from the AHB, offset: 0x4 */
} AHB2XSPMEM_Type;

/* ----------------------------------------------------------------------------
   -- AHB2XSPMEM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup AHB2XSPMEM_Register_Masks AHB2XSPMEM Register Masks
 * @{
 */

/*! @name PWRITEACCESS - This register enables or disables write access to the protected PRAM */
/*! @{ */

#define AHB2XSPMEM_PWRITEACCESS_VALUE_MASK       (0xFFFFFFU)
#define AHB2XSPMEM_PWRITEACCESS_VALUE_SHIFT      (0U)
/*! value - Writing the magic word will enable write access to PRAM. Writing something else will
 *    disable write access to the PRAM. When the register is read, it returns the current state of the
 *    write protection.
 *  0b000000000000000000000000..When read, this register returns this value if writes are disabled
 *  0b000000000000000000000001..When read, this register returns this value if writes are enabled
 *  0b110101000011111010100101..This value will enable write accesses to PRAM
 */
#define AHB2XSPMEM_PWRITEACCESS_VALUE(x)         (((uint32_t)(((uint32_t)(x)) << AHB2XSPMEM_PWRITEACCESS_VALUE_SHIFT)) & AHB2XSPMEM_PWRITEACCESS_VALUE_MASK)
/*! @} */

/*! @name MAX_MEM_LATENCY - Maximum memory latency from the AHB */
/*! @{ */

#define AHB2XSPMEM_MAX_MEM_LATENCY_LATENCY_MASK  (0x3FU)
#define AHB2XSPMEM_MAX_MEM_LATENCY_LATENCY_SHIFT (0U)
/*! latency - Maximum latency of microcontroller accesses to the XSP memories, measured in memory clock cycles
 *  0b000000..Minimum latency
 *  0b111111..Maximum latency
 */
#define AHB2XSPMEM_MAX_MEM_LATENCY_LATENCY(x)    (((uint32_t)(((uint32_t)(x)) << AHB2XSPMEM_MAX_MEM_LATENCY_LATENCY_SHIFT)) & AHB2XSPMEM_MAX_MEM_LATENCY_LATENCY_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group AHB2XSPMEM_Register_Masks */


/*!
 * @}
 */ /* end of group AHB2XSPMEM_Peripheral_Access_Layer */


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


#endif  /* PERI_AHB2XSPMEM_H_ */

