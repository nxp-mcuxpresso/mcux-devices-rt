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
**         CMSIS Peripheral Access Layer for RPU
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
 * @file PERI_RPU.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for RPU
 *
 * CMSIS Peripheral Access Layer for RPU
 */

#if !defined(PERI_RPU_H_)
#define PERI_RPU_H_                              /**< Symbol preventing repeated inclusion */

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
   -- RPU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup RPU_Peripheral_Access_Layer RPU Peripheral Access Layer
 * @{
 */

/** RPU - Register Layout Typedef */
typedef struct {
  __IO uint32_t UNLOCK_PMRC_REG_ACCESS;            /**< PMRC write-access unlock (single-register one-shot)., offset: 0x0 */
  __IO uint32_t UNLOCK_CGU_REG_ACCESS;             /**< CGU write-access unlock (single-register one-shot)., offset: 0x4 */
  __IO uint32_t UNLOCK_ADSS_REG_ACCESS;            /**< ADSS write-access unlock (single-register one-shot)., offset: 0x8 */
  __IO uint32_t UNLOCK_DSWM_MODULE_ACCESS;         /**< DSWM write-access unlock (range-based window)., offset: 0xC */
  __IO uint32_t UNLOCK_OCOTP_MODULE_ACCESS;        /**< OCOTP write-access unlock (range-based window)., offset: 0x10 */
  __IO uint32_t UNLOCK_MTR_MODULE_ACCESS;          /**< MTR write-access unlock (range-based window)., offset: 0x14 */
} RPU_Type;

/* ----------------------------------------------------------------------------
   -- RPU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup RPU_Register_Masks RPU Register Masks
 * @{
 */

/*! @name UNLOCK_PMRC_REG_ACCESS - PMRC write-access unlock (single-register one-shot). */
/*! @{ */

#define RPU_UNLOCK_PMRC_REG_ACCESS_pmrc_reg_addr_MASK (0xFFFFFFFFU)
#define RPU_UNLOCK_PMRC_REG_ACCESS_pmrc_reg_addr_SHIFT (0U)
/*! pmrc_reg_addr - Word address of the PMRC register for which write access is being unlocked.
 *    Write the word address of the PMRC register to be modified. A single write to that exact PMRC
 *    register address is then permitted on the next bus cycle. The unlock token is consumed after one
 *    use and must be written again for each subsequent protected write. Writes to PMRC registers
 *    without a preceding valid unlock cause an APB slave error response.
 */
#define RPU_UNLOCK_PMRC_REG_ACCESS_pmrc_reg_addr(x) (((uint32_t)(((uint32_t)(x)) << RPU_UNLOCK_PMRC_REG_ACCESS_pmrc_reg_addr_SHIFT)) & RPU_UNLOCK_PMRC_REG_ACCESS_pmrc_reg_addr_MASK)
/*! @} */

/*! @name UNLOCK_CGU_REG_ACCESS - CGU write-access unlock (single-register one-shot). */
/*! @{ */

#define RPU_UNLOCK_CGU_REG_ACCESS_cgu_reg_addr_MASK (0xFFFFFFFFU)
#define RPU_UNLOCK_CGU_REG_ACCESS_cgu_reg_addr_SHIFT (0U)
/*! cgu_reg_addr - Word address of the CGU register for which write access is being unlocked. Write
 *    the word address of the CGU register to be modified. A single write to that exact CGU register
 *    address is then permitted on the next bus cycle. The unlock token is consumed after one use
 *    and must be written again for each subsequent protected write. Writes to CGU registers without
 *    a preceding valid unlock cause an APB slave error response.
 */
#define RPU_UNLOCK_CGU_REG_ACCESS_cgu_reg_addr(x) (((uint32_t)(((uint32_t)(x)) << RPU_UNLOCK_CGU_REG_ACCESS_cgu_reg_addr_SHIFT)) & RPU_UNLOCK_CGU_REG_ACCESS_cgu_reg_addr_MASK)
/*! @} */

/*! @name UNLOCK_ADSS_REG_ACCESS - ADSS write-access unlock (single-register one-shot). */
/*! @{ */

#define RPU_UNLOCK_ADSS_REG_ACCESS_adss_reg_addr_MASK (0xFFFFFFFFU)
#define RPU_UNLOCK_ADSS_REG_ACCESS_adss_reg_addr_SHIFT (0U)
/*! adss_reg_addr - Word address of the ADSS register for which write access is being unlocked.
 *    Write the word address of the ADSS register to be modified. A single write to that exact ADSS
 *    register address is then permitted on the next bus cycle. The unlock token is consumed after one
 *    use and must be written again for each subsequent protected write. Writes to ADSS registers
 *    without a preceding valid unlock cause an APB slave error response.
 */
#define RPU_UNLOCK_ADSS_REG_ACCESS_adss_reg_addr(x) (((uint32_t)(((uint32_t)(x)) << RPU_UNLOCK_ADSS_REG_ACCESS_adss_reg_addr_SHIFT)) & RPU_UNLOCK_ADSS_REG_ACCESS_adss_reg_addr_MASK)
/*! @} */

/*! @name UNLOCK_DSWM_MODULE_ACCESS - DSWM write-access unlock (range-based window). */
/*! @{ */

#define RPU_UNLOCK_DSWM_MODULE_ACCESS_dswm_reg_addr_MASK (0xFFFFFFFFU)
#define RPU_UNLOCK_DSWM_MODULE_ACCESS_dswm_reg_addr_SHIFT (0U)
/*! dswm_reg_addr - Any valid word address within the DSWM APB address range. Writing this field
 *    opens write access to the entire DSWM address range. Write any valid address within the DSWM APB
 *    address range to open write access to the DSWM module. All subsequent APB writes within the
 *    DSWM address range are then permitted. Write access is automatically revoked when an APB write
 *    address falls outside the DSWM address range. Writes to DSWM registers while the module is
 *    locked cause an APB slave error response.
 */
#define RPU_UNLOCK_DSWM_MODULE_ACCESS_dswm_reg_addr(x) (((uint32_t)(((uint32_t)(x)) << RPU_UNLOCK_DSWM_MODULE_ACCESS_dswm_reg_addr_SHIFT)) & RPU_UNLOCK_DSWM_MODULE_ACCESS_dswm_reg_addr_MASK)
/*! @} */

/*! @name UNLOCK_OCOTP_MODULE_ACCESS - OCOTP write-access unlock (range-based window). */
/*! @{ */

#define RPU_UNLOCK_OCOTP_MODULE_ACCESS_ocotp_reg_addr_MASK (0xFFFFFFFFU)
#define RPU_UNLOCK_OCOTP_MODULE_ACCESS_ocotp_reg_addr_SHIFT (0U)
/*! ocotp_reg_addr - Any valid word address within the OCOTP APB address range. Writing this field
 *    opens write access to the entire OCOTP address range. Write any valid address within the OCOTP
 *    APB address range to open write access to the OCOTP module. All subsequent APB writes within
 *    the OCOTP address range are then permitted. Write access is automatically revoked when an APB
 *    write address falls outside the OCOTP address range. Writes to OCOTP registers while the module
 *    is locked cause an APB slave error response.
 */
#define RPU_UNLOCK_OCOTP_MODULE_ACCESS_ocotp_reg_addr(x) (((uint32_t)(((uint32_t)(x)) << RPU_UNLOCK_OCOTP_MODULE_ACCESS_ocotp_reg_addr_SHIFT)) & RPU_UNLOCK_OCOTP_MODULE_ACCESS_ocotp_reg_addr_MASK)
/*! @} */

/*! @name UNLOCK_MTR_MODULE_ACCESS - MTR write-access unlock (range-based window). */
/*! @{ */

#define RPU_UNLOCK_MTR_MODULE_ACCESS_mtr_reg_addr_MASK (0xFFFFFFFFU)
#define RPU_UNLOCK_MTR_MODULE_ACCESS_mtr_reg_addr_SHIFT (0U)
/*! mtr_reg_addr - Any valid word address within the MTR APB address range. Writing this field opens
 *    write access to the entire MTR address range. Write any valid address within the MTR APB
 *    address range to open write access to the MTR module. All subsequent APB writes within the MTR
 *    address range are then permitted. Write access is automatically revoked when an APB write address
 *    falls outside the MTR address range. Writes to MTR registers while the module is locked cause
 *    an APB slave error response.
 */
#define RPU_UNLOCK_MTR_MODULE_ACCESS_mtr_reg_addr(x) (((uint32_t)(((uint32_t)(x)) << RPU_UNLOCK_MTR_MODULE_ACCESS_mtr_reg_addr_SHIFT)) & RPU_UNLOCK_MTR_MODULE_ACCESS_mtr_reg_addr_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group RPU_Register_Masks */


/*!
 * @}
 */ /* end of group RPU_Peripheral_Access_Layer */


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


#endif  /* PERI_RPU_H_ */

