/*
** ###################################################################
**     Processors:          MIMXRT533SFAWC
**                          MIMXRT533SFFOC
**                          MIMXRT555SFAWC
**                          MIMXRT555SFFOC
**                          MIMXRT595SFAWC_cm33
**                          MIMXRT595SFAWC_dsp
**                          MIMXRT595SFFOC_cm33
**                          MIMXRT595SFFOC_dsp
**
**     Version:             rev. 6.0, 2024-10-29
**     Build:               b250520
**
**     Abstract:
**         CMSIS Peripheral Access Layer for OTFAD
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2019-04-19)
**         Initial version.
**     - rev. 2.0 (2019-07-22)
**         Base on rev 0.7 RM.
**     - rev. 3.0 (2020-03-16)
**         Base on Rev.A RM.
**     - rev. 4.0 (2020-05-18)
**         Base on Rev.B RM.
**     - rev. 5.0 (2020-08-27)
**         Base on Rev.C RM.
**     - rev. 6.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file PERI_OTFAD.h
 * @version 6.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for OTFAD
 *
 * CMSIS Peripheral Access Layer for OTFAD
 */

#if !defined(PERI_OTFAD_H_)
#define PERI_OTFAD_H_                            /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MIMXRT533SFAWC) || defined(CPU_MIMXRT533SFFOC))
#include "MIMXRT533S_COMMON.h"
#elif (defined(CPU_MIMXRT555SFAWC) || defined(CPU_MIMXRT555SFFOC))
#include "MIMXRT555S_COMMON.h"
#elif (defined(CPU_MIMXRT595SFAWC_cm33) || defined(CPU_MIMXRT595SFFOC_cm33))
#include "MIMXRT595S_cm33_COMMON.h"
#elif (defined(CPU_MIMXRT595SFAWC_dsp) || defined(CPU_MIMXRT595SFFOC_dsp))
#include "MIMXRT595S_dsp_COMMON.h"
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
#elif defined(__XTENSA__)
  /* anonymous unions are enabled by default */
#else
  #error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- OTFAD Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup OTFAD_Peripheral_Access_Layer OTFAD Peripheral Access Layer
 * @{
 */

/** OTFAD - Size of Registers Arrays */
#define OTFAD_CTX_CTXN_KEYM_COUNT                 4u
#define OTFAD_CTX_CTXN_CTRM_COUNT                 2u
#define OTFAD_CTX_COUNT                           4u

/** OTFAD - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[3072];
  __IO uint32_t CR;                                /**< Control Register, offset: 0xC00 */
  __I  uint32_t SR;                                /**< Status Register, offset: 0xC04 */
       uint8_t RESERVED_1[248];
  struct {                                         /* offset: 0xD00, array step: 0x40 */
    __IO uint32_t KEY[OTFAD_CTX_CTXN_KEYM_COUNT];    /**< AES Key Word, array offset: 0xD00, array step: index*0x40, index2*0x4 */
    __IO uint32_t CTR[OTFAD_CTX_CTXN_CTRM_COUNT];    /**< AES Counter Word, array offset: 0xD10, array step: index*0x40, index2*0x4 */
    __IO uint32_t RGD_W0;                            /**< AES Region Descriptor Word0, array offset: 0xD18, array step: 0x40 */
    __IO uint32_t RGD_W1;                            /**< AES Region Descriptor Word1, array offset: 0xD1C, array step: 0x40 */
         uint8_t RESERVED_0[32];
  } CTX[OTFAD_CTX_COUNT];
} OTFAD_Type;

/* ----------------------------------------------------------------------------
   -- OTFAD Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup OTFAD_Register_Masks OTFAD Register Masks
 * @{
 */

/*! @name CR - Control Register */
/*! @{ */

#define OTFAD_CR_FLDM_MASK                       (0x8U)
#define OTFAD_CR_FLDM_SHIFT                      (3U)
/*! FLDM - Force Logically Disabled Mode
 *  0b0..No effect on the operating mode.
 *  0b1..Force entry into LDM after a write with this data bit set. SR[MODE] signals the operating mode.
 */
#define OTFAD_CR_FLDM(x)                         (((uint32_t)(((uint32_t)(x)) << OTFAD_CR_FLDM_SHIFT)) & OTFAD_CR_FLDM_MASK)

#define OTFAD_CR_RRAE_MASK                       (0x80U)
#define OTFAD_CR_RRAE_SHIFT                      (7U)
/*! RRAE - Restricted Register Access Enable
 *  0b0..Register access is fully enabled. The OTFAD programming model registers can be accessed "normally".
 *  0b1..Register access is restricted and only the CR, SR and optional MDPC registers can be accessed; others are treated as RAZ/WI.
 */
#define OTFAD_CR_RRAE(x)                         (((uint32_t)(((uint32_t)(x)) << OTFAD_CR_RRAE_SHIFT)) & OTFAD_CR_RRAE_MASK)

#define OTFAD_CR_GE_MASK                         (0x80000000U)
#define OTFAD_CR_GE_SHIFT                        (31U)
/*! GE - Global OTFAD Enable
 *  0b0..OTFAD has decryption disabled. All data fetched by the FlexSPI bypasses OTFAD processing.
 *  0b1..OTFAD has decryption enabled, and processes data fetched by the FlexSPI as defined by the hardware configuration.
 */
#define OTFAD_CR_GE(x)                           (((uint32_t)(((uint32_t)(x)) << OTFAD_CR_GE_SHIFT)) & OTFAD_CR_GE_MASK)
/*! @} */

/*! @name SR - Status Register */
/*! @{ */

#define OTFAD_SR_MDPCP_MASK                      (0x2U)
#define OTFAD_SR_MDPCP_SHIFT                     (1U)
/*! MDPCP - MDPC Present */
#define OTFAD_SR_MDPCP(x)                        (((uint32_t)(((uint32_t)(x)) << OTFAD_SR_MDPCP_SHIFT)) & OTFAD_SR_MDPCP_MASK)

#define OTFAD_SR_MODE_MASK                       (0xCU)
#define OTFAD_SR_MODE_SHIFT                      (2U)
/*! MODE - Operating Mode
 *  0b00..Operating in Normal mode (NRM)
 *  0b01..Unused (reserved)
 *  0b10..Unused (reserved)
 *  0b11..Operating in Logically Disabled Mode (LDM)
 */
#define OTFAD_SR_MODE(x)                         (((uint32_t)(((uint32_t)(x)) << OTFAD_SR_MODE_SHIFT)) & OTFAD_SR_MODE_MASK)

#define OTFAD_SR_NCTX_MASK                       (0xF0U)
#define OTFAD_SR_NCTX_SHIFT                      (4U)
/*! NCTX - Number of Contexts */
#define OTFAD_SR_NCTX(x)                         (((uint32_t)(((uint32_t)(x)) << OTFAD_SR_NCTX_SHIFT)) & OTFAD_SR_NCTX_MASK)

#define OTFAD_SR_HRL_MASK                        (0xF000000U)
#define OTFAD_SR_HRL_SHIFT                       (24U)
/*! HRL - Hardware Revision Level */
#define OTFAD_SR_HRL(x)                          (((uint32_t)(((uint32_t)(x)) << OTFAD_SR_HRL_SHIFT)) & OTFAD_SR_HRL_MASK)

#define OTFAD_SR_RRAM_MASK                       (0x10000000U)
#define OTFAD_SR_RRAM_SHIFT                      (28U)
/*! RRAM - Restricted Register Access Mode
 *  0b0..Register access is fully enabled. The OTFAD programming model registers can be accessed "normally".
 *  0b1..Register access is restricted and only the CR, SR and optional MDPC registers can be accessed; others are treated as RAZ/WI.
 */
#define OTFAD_SR_RRAM(x)                         (((uint32_t)(((uint32_t)(x)) << OTFAD_SR_RRAM_SHIFT)) & OTFAD_SR_RRAM_MASK)

#define OTFAD_SR_GEM_MASK                        (0x20000000U)
#define OTFAD_SR_GEM_SHIFT                       (29U)
/*! GEM - Global Enable Mode
 *  0b0..OTFAD is disabled. All data fetched by the FlexSPI bypasses OTFAD processing.
 *  0b1..OTFAD is enabled, and processes data fetched by the FlexSPI as defined by the hardware configuration.
 */
#define OTFAD_SR_GEM(x)                          (((uint32_t)(((uint32_t)(x)) << OTFAD_SR_GEM_SHIFT)) & OTFAD_SR_GEM_MASK)
/*! @} */

/*! @name KEY - AES Key Word */
/*! @{ */

#define OTFAD_KEY_KEY_MASK                       (0xFFFFFFFFU)
#define OTFAD_KEY_KEY_SHIFT                      (0U)
/*! KEY - AES Key */
#define OTFAD_KEY_KEY(x)                         (((uint32_t)(((uint32_t)(x)) << OTFAD_KEY_KEY_SHIFT)) & OTFAD_KEY_KEY_MASK)
/*! @} */

/* The count of OTFAD_KEY */
#define OTFAD_KEY_COUNT                          (4U)

/* The count of OTFAD_KEY */
#define OTFAD_KEY_COUNT2                         (4U)

/*! @name CTR - AES Counter Word */
/*! @{ */

#define OTFAD_CTR_CTR_MASK                       (0xFFFFFFFFU)
#define OTFAD_CTR_CTR_SHIFT                      (0U)
/*! CTR - AES Counter */
#define OTFAD_CTR_CTR(x)                         (((uint32_t)(((uint32_t)(x)) << OTFAD_CTR_CTR_SHIFT)) & OTFAD_CTR_CTR_MASK)
/*! @} */

/* The count of OTFAD_CTR */
#define OTFAD_CTR_COUNT                          (4U)

/* The count of OTFAD_CTR */
#define OTFAD_CTR_COUNT2                         (2U)

/*! @name RGD_W0 - AES Region Descriptor Word0 */
/*! @{ */

#define OTFAD_RGD_W0_SRTADDR_MASK                (0xFFFFFC00U)
#define OTFAD_RGD_W0_SRTADDR_SHIFT               (10U)
/*! SRTADDR - Start Address */
#define OTFAD_RGD_W0_SRTADDR(x)                  (((uint32_t)(((uint32_t)(x)) << OTFAD_RGD_W0_SRTADDR_SHIFT)) & OTFAD_RGD_W0_SRTADDR_MASK)
/*! @} */

/* The count of OTFAD_RGD_W0 */
#define OTFAD_RGD_W0_COUNT                       (4U)

/*! @name RGD_W1 - AES Region Descriptor Word1 */
/*! @{ */

#define OTFAD_RGD_W1_VLD_MASK                    (0x1U)
#define OTFAD_RGD_W1_VLD_SHIFT                   (0U)
/*! VLD - Valid
 *  0b0..Context is invalid.
 *  0b1..Context is valid.
 */
#define OTFAD_RGD_W1_VLD(x)                      (((uint32_t)(((uint32_t)(x)) << OTFAD_RGD_W1_VLD_SHIFT)) & OTFAD_RGD_W1_VLD_MASK)

#define OTFAD_RGD_W1_ADE_MASK                    (0x2U)
#define OTFAD_RGD_W1_ADE_SHIFT                   (1U)
/*! ADE - AES Decryption Enable.
 *  0b0..Bypass the fetched data.
 *  0b1..Perform the CTR-AES128 mode decryption on the fetched data.
 */
#define OTFAD_RGD_W1_ADE(x)                      (((uint32_t)(((uint32_t)(x)) << OTFAD_RGD_W1_ADE_SHIFT)) & OTFAD_RGD_W1_ADE_MASK)

#define OTFAD_RGD_W1_RO_MASK                     (0x4U)
#define OTFAD_RGD_W1_RO_SHIFT                    (2U)
/*! RO - Read-Only
 *  0b0..The context registers can be accessed normally (as defined by SR[RRAM]).
 *  0b1..The context registers are read-only and accesses may be further restricted based on SR[RRAM].
 */
#define OTFAD_RGD_W1_RO(x)                       (((uint32_t)(((uint32_t)(x)) << OTFAD_RGD_W1_RO_SHIFT)) & OTFAD_RGD_W1_RO_MASK)

#define OTFAD_RGD_W1_ENDADDR_MASK                (0xFFFFFC00U)
#define OTFAD_RGD_W1_ENDADDR_SHIFT               (10U)
/*! ENDADDR - End Address */
#define OTFAD_RGD_W1_ENDADDR(x)                  (((uint32_t)(((uint32_t)(x)) << OTFAD_RGD_W1_ENDADDR_SHIFT)) & OTFAD_RGD_W1_ENDADDR_MASK)
/*! @} */

/* The count of OTFAD_RGD_W1 */
#define OTFAD_RGD_W1_COUNT                       (4U)


/*!
 * @}
 */ /* end of group OTFAD_Register_Masks */


/*!
 * @}
 */ /* end of group OTFAD_Peripheral_Access_Layer */


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
#elif defined(__XTENSA__)
  /* leave anonymous unions enabled */
#else
  #error Not supported compiler type
#endif

/*!
 * @}
 */ /* end of group Peripheral_access_layer */


#endif  /* PERI_OTFAD_H_ */

