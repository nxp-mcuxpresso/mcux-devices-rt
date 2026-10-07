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
**         CMSIS Peripheral Access Layer for SYSCON
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
 * @file PERI_SYSCON.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for SYSCON
 *
 * CMSIS Peripheral Access Layer for SYSCON
 */

#if !defined(PERI_SYSCON_H_)
#define PERI_SYSCON_H_                           /**< Symbol preventing repeated inclusion */

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
   -- SYSCON Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SYSCON_Peripheral_Access_Layer SYSCON Peripheral Access Layer
 * @{
 */

/** SYSCON - Size of Registers Arrays */
#define SYSCON_PMRO_CONFIG_COUNT                  5u
#define SYSCON_PMRO_DGO_CONFIG_COUNT              5u

/** SYSCON - Register Layout Typedef */
typedef struct {
  __I  uint32_t CPU_STATUS;                        /**< Status information for the CPU, offset: 0x0 */
  __IO uint32_t NMISRC;                            /**< NMI Interrupt source control configuration, offset: 0x4 */
  __IO uint32_t CFGNSSTCALIB;                      /**< System tick calibration for non-secure part of the CPU, offset: 0x8 */
  __IO uint32_t WICSLEEP_CTRL;                     /**< Control the wicsleep of the cm55, offset: 0xC */
  __IO uint32_t ROMCR;                             /**< ROM wait state control, offset: 0x10 */
  __IO uint32_t PKC_RAM_CTRL;                      /**< RPKC RAM Control, offset: 0x14 */
  __IO uint32_t AHB_MATRIX_PRIO;                   /**< AHB Matrix Priority Control, offset: 0x18 */
  __IO uint32_t BUFFERAHB2VPB0;                    /**< Enables buffering of write accesses on APB interfaces, offset: 0x1C */
  __IO uint32_t BUFFERAHB2VPB1;                    /**< Enables buffering of write accesses on APB interfaces, offset: 0x20 */
  __IO uint32_t GPIO_INT_PSYNC;                    /**< GPIO INT synchronization Control, offset: 0x24 */
  __I  uint32_t TRNG_STATUS;                       /**< TRNG status registers, offset: 0x28 */
  __IO uint32_t Q_CHANNEL_CTRL_CM55;               /**< Q Channel Control Registers for CM55 Clock, offset: 0x2C */
  __IO uint32_t Q_CHANNEL_CTRL_DEBUG;              /**< Q Channel Control Registers for debug Clock, offset: 0x30 */
  __IO uint32_t Q_CHANNEL_CTRL_NIC;                /**< Q Channel Control Registers for NIC Clock, offset: 0x34 */
  __IO uint32_t Q_CHANNEL_CTRL_XSPI;               /**< Q Channel Control Registers for NIC XSPI Clock, offset: 0x38 */
  __IO uint32_t MEMAHBAPERTURE2;                   /**< memory AHB aperture, offset: 0x3C */
  __I  uint32_t CHIP_ID;                           /**< Contains the 31-bit chip JTAG ID, offset: 0x40 */
  __IO uint32_t XSPI_CFG;                          /**< CSS xSPI configuration register, offset: 0x44 */
  __I  uint32_t XSPI_STATUS;                       /**< CSS xSPI status register, offset: 0x48 */
  __IO uint32_t XSPI0;                             /**< Configure pull-control on XSPI0., offset: 0x4C */
  __IO uint32_t XSPI1;                             /**< Configure pull-control on XSPI1., offset: 0x50 */
  __IO uint32_t CTIMER_ENABLE;                     /**< CTimer enable register, offset: 0x54 */
  __IO uint32_t UTICK_CAP;                         /**< utick capture pad selection., offset: 0x58 */
  __IO uint32_t BOOT_CFG;                          /**< BOOT pin configuration., offset: 0x5C */
  __I  uint32_t BOOT_STATUS;                       /**< BOOT pin status., offset: 0x60 */
  __I  uint32_t DTB_STATUS;                        /**< DTB analog status., offset: 0x64 */
  __IO uint32_t DTB_CONFIG;                        /**< Configure dtb to analog, offset: 0x68 */
  __IO uint32_t ATB_CONFIG;                        /**< Configure atb to analog, offset: 0x6C */
  __IO uint32_t CRACKDET_CFG;                      /**< Write the functional input of the crack detect, offset: 0x70 */
  __I  uint32_t CRACKDET_STATUS;                   /**< This register stores the tap outputs from each corner of the crack detect., offset: 0x74 */
  __IO uint32_t REDUNDANCYPROTECTION;              /**< Cosmic Ray Protection Configuration, offset: 0x78 */
  __IO uint32_t ISOLATION_CONFIG;                  /**< Isolate bumps from test buffer, offset: 0x7C */
  __I  uint32_t EXT_PMIC_STATUS;                   /**< EXT_PMIC status register, offset: 0x80 */
  __IO uint32_t I2C_FILTER_SWM0;                   /**< Register to control the usage of the filter for i2c for swm bank 0, offset: 0x84 */
  __IO uint32_t I2C_FILTER_SWM1;                   /**< Register to control the usage of the filter for i2c for swm bank 1, offset: 0x88 */
  __IO uint32_t I2C_FILTER_SWM2;                   /**< Register to control the usage of the filter for i2c for swm bank 2, offset: 0x8C */
  __IO uint32_t I2C_FILTER_SWM3;                   /**< Register to control the usage of the filter for i2c for swm bank 3, offset: 0x90 */
  __IO uint32_t TCB;                               /**< TCB registers for OTP, offset: 0x94 */
       uint8_t RESERVED_0[3816];
  struct {                                         /* offset: 0xF80, array step: 0x8 */
    __IO uint32_t PMRO_CONFIG_1;                     /**< First part of configuration, array offset: 0xF80, array step: 0x8 */
    __IO uint32_t PMRO_CONFIG_2;                     /**< Second part of configuration., array offset: 0xF84, array step: 0x8 */
  } PMRO_CONFIG[SYSCON_PMRO_CONFIG_COUNT];
       uint8_t RESERVED_1[56];
  __IO uint32_t PMRO_DGO_CONFIG[SYSCON_PMRO_DGO_CONFIG_COUNT]; /**< Configuration register, array offset: 0xFE0, array step: 0x4 */
} SYSCON_Type;

/* ----------------------------------------------------------------------------
   -- SYSCON Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SYSCON_Register_Masks SYSCON Register Masks
 * @{
 */

/*! @name CPU_STATUS - Status information for the CPU */
/*! @{ */

#define SYSCON_CPU_STATUS_LOCKUP_MASK            (0x1U)
#define SYSCON_CPU_STATUS_LOCKUP_SHIFT           (0U)
/*! lockup - CPU lockup status
 *  0b0..CPU is not in lockup
 *  0b1..CPU is in lockup
 */
#define SYSCON_CPU_STATUS_LOCKUP(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_CPU_STATUS_LOCKUP_SHIFT)) & SYSCON_CPU_STATUS_LOCKUP_MASK)
/*! @} */

/*! @name NMISRC - NMI Interrupt source control configuration */
/*! @{ */

#define SYSCON_NMISRC_CTRL_MASK                  (0x7FU)
#define SYSCON_NMISRC_CTRL_SHIFT                 (0U)
/*! ctrl - The ctrl number of the interrupt that acts as the Non-Maskable Interrupt (NMI) for the CM55, if enabled */
#define SYSCON_NMISRC_CTRL(x)                    (((uint32_t)(((uint32_t)(x)) << SYSCON_NMISRC_CTRL_SHIFT)) & SYSCON_NMISRC_CTRL_MASK)

#define SYSCON_NMISRC_ENABLE_MASK                (0x80U)
#define SYSCON_NMISRC_ENABLE_SHIFT               (7U)
/*! enable - Write a 1 to this bit to enable the Non-Maskable Interrupt (NMI) sources elected by ctrl */
#define SYSCON_NMISRC_ENABLE(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_NMISRC_ENABLE_SHIFT)) & SYSCON_NMISRC_ENABLE_MASK)
/*! @} */

/*! @name CFGNSSTCALIB - System tick calibration for non-secure part of the CPU */
/*! @{ */

#define SYSCON_CFGNSSTCALIB_TENMS_MASK           (0xFFFFFFU)
#define SYSCON_CFGNSSTCALIB_TENMS_SHIFT          (0U)
/*! Tenms - Provides an integer value to compute a 10ms (100Hz) delay from either the external
 *    reference clock or CLKIN, if the reference clock is not implemented
 */
#define SYSCON_CFGNSSTCALIB_TENMS(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_CFGNSSTCALIB_TENMS_SHIFT)) & SYSCON_CFGNSSTCALIB_TENMS_MASK)

#define SYSCON_CFGNSSTCALIB_SKEW_MASK            (0x1000000U)
#define SYSCON_CFGNSSTCALIB_SKEW_SHIFT           (24U)
/*! Skew - Indicated whether the Tenms value is exact
 *  0b0..Value is exact
 *  0b1..Value is not exact or not given
 */
#define SYSCON_CFGNSSTCALIB_SKEW(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_CFGNSSTCALIB_SKEW_SHIFT)) & SYSCON_CFGNSSTCALIB_SKEW_MASK)

#define SYSCON_CFGNSSTCALIB_NOREF_MASK           (0x2000000U)
#define SYSCON_CFGNSSTCALIB_NOREF_SHIFT          (25U)
/*! Noref - Indicates whether the chip provides a reference clock to the processor
 *  0b0..Reference clock provided
 *  0b1..No reference clock provided
 */
#define SYSCON_CFGNSSTCALIB_NOREF(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_CFGNSSTCALIB_NOREF_SHIFT)) & SYSCON_CFGNSSTCALIB_NOREF_MASK)
/*! @} */

/*! @name WICSLEEP_CTRL - Control the wicsleep of the cm55 */
/*! @{ */

#define SYSCON_WICSLEEP_CTRL_DEEPISWIC_MASK      (0x1U)
#define SYSCON_WICSLEEP_CTRL_DEEPISWIC_SHIFT     (0U)
/*! deepiswic - Enables WIC SLEEP mode when the processor is in deep sleep */
#define SYSCON_WICSLEEP_CTRL_DEEPISWIC(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_WICSLEEP_CTRL_DEEPISWIC_SHIFT)) & SYSCON_WICSLEEP_CTRL_DEEPISWIC_MASK)
/*! @} */

/*! @name ROMCR - ROM wait state control */
/*! @{ */

#define SYSCON_ROMCR_ROM_WAIT_MASK               (0x1U)
#define SYSCON_ROMCR_ROM_WAIT_SHIFT              (0U)
/*! rom_wait - Enables an additional wait state on ROM accesses
 *  0b0..Wait state disabled
 *  0b1..Wait state enabled
 */
#define SYSCON_ROMCR_ROM_WAIT(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_ROMCR_ROM_WAIT_SHIFT)) & SYSCON_ROMCR_ROM_WAIT_MASK)
/*! @} */

/*! @name PKC_RAM_CTRL - RPKC RAM Control */
/*! @{ */

#define SYSCON_PKC_RAM_CTRL_INTERLEAVE_MASK      (0x1U)
#define SYSCON_PKC_RAM_CTRL_INTERLEAVE_SHIFT     (0U)
/*! interleave - Control ram access for PKC RAM0 and RAM1
 *  0b0..RAM access to RAM0 and RAM1 is consecutive
 *  0b1..RAM access to RAM0 and RAM1 is interleaved
 */
#define SYSCON_PKC_RAM_CTRL_INTERLEAVE(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_PKC_RAM_CTRL_INTERLEAVE_SHIFT)) & SYSCON_PKC_RAM_CTRL_INTERLEAVE_MASK)
/*! @} */

/*! @name AHB_MATRIX_PRIO - AHB Matrix Priority Control */
/*! @{ */

#define SYSCON_AHB_MATRIX_PRIO_PRIO_PAHB_MASK    (0x3U)
#define SYSCON_AHB_MATRIX_PRIO_PRIO_PAHB_SHIFT   (0U)
/*! prio_pahb - CN55 P-AHB Priority Level
 *  0b00..Level 0
 *  0b01..Level 1
 *  0b10..Level 2
 *  0b11..Level 3
 */
#define SYSCON_AHB_MATRIX_PRIO_PRIO_PAHB(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_AHB_MATRIX_PRIO_PRIO_PAHB_SHIFT)) & SYSCON_AHB_MATRIX_PRIO_PRIO_PAHB_MASK)

#define SYSCON_AHB_MATRIX_PRIO_PRIO_NIC2_MLM_MASK (0xCU)
#define SYSCON_AHB_MATRIX_PRIO_PRIO_NIC2_MLM_SHIFT (2U)
/*! prio_nic2_mlm - NIC to MLM bridge Priority level
 *  0b00..Level 0
 *  0b01..Level 1
 *  0b10..Level 2
 *  0b11..Level 3
 */
#define SYSCON_AHB_MATRIX_PRIO_PRIO_NIC2_MLM(x)  (((uint32_t)(((uint32_t)(x)) << SYSCON_AHB_MATRIX_PRIO_PRIO_NIC2_MLM_SHIFT)) & SYSCON_AHB_MATRIX_PRIO_PRIO_NIC2_MLM_MASK)

#define SYSCON_AHB_MATRIX_PRIO_PRIO_SDMA0_MASK   (0x30U)
#define SYSCON_AHB_MATRIX_PRIO_PRIO_SDMA0_SHIFT  (4U)
/*! prio_sdma0 - SDMA0 Priority level
 *  0b00..Level 0
 *  0b01..Level 1
 *  0b10..Level 2
 *  0b11..Level 3
 */
#define SYSCON_AHB_MATRIX_PRIO_PRIO_SDMA0(x)     (((uint32_t)(((uint32_t)(x)) << SYSCON_AHB_MATRIX_PRIO_PRIO_SDMA0_SHIFT)) & SYSCON_AHB_MATRIX_PRIO_PRIO_SDMA0_MASK)

#define SYSCON_AHB_MATRIX_PRIO_PRIO_SDMA1_MASK   (0xC0U)
#define SYSCON_AHB_MATRIX_PRIO_PRIO_SDMA1_SHIFT  (6U)
/*! prio_sdma1 - SDMA1 Priority level
 *  0b00..Level 0
 *  0b01..Level 1
 *  0b10..Level 2
 *  0b11..Level 3
 */
#define SYSCON_AHB_MATRIX_PRIO_PRIO_SDMA1(x)     (((uint32_t)(((uint32_t)(x)) << SYSCON_AHB_MATRIX_PRIO_PRIO_SDMA1_SHIFT)) & SYSCON_AHB_MATRIX_PRIO_PRIO_SDMA1_MASK)

#define SYSCON_AHB_MATRIX_PRIO_PRIO_PKC_MASK     (0x300U)
#define SYSCON_AHB_MATRIX_PRIO_PRIO_PKC_SHIFT    (8U)
/*! prio_pkc - PKC Priority level
 *  0b00..Level 0
 *  0b01..Level 1
 *  0b10..Level 2
 *  0b11..Level 3
 */
#define SYSCON_AHB_MATRIX_PRIO_PRIO_PKC(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_AHB_MATRIX_PRIO_PRIO_PKC_SHIFT)) & SYSCON_AHB_MATRIX_PRIO_PRIO_PKC_MASK)
/*! @} */

/*! @name BUFFERAHB2VPB0 - Enables buffering of write accesses on APB interfaces */
/*! @{ */

#define SYSCON_BUFFERAHB2VPB0_GINT_MASK          (0x1U)
#define SYSCON_BUFFERAHB2VPB0_GINT_SHIFT         (0U)
/*! GINT - Buffer control of GINT APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_GINT(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_GINT_SHIFT)) & SYSCON_BUFFERAHB2VPB0_GINT_MASK)

#define SYSCON_BUFFERAHB2VPB0_PINT_MASK          (0x2U)
#define SYSCON_BUFFERAHB2VPB0_PINT_SHIFT         (1U)
/*! PINT - Buffer control of PINT APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_PINT(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_PINT_SHIFT)) & SYSCON_BUFFERAHB2VPB0_PINT_MASK)

#define SYSCON_BUFFERAHB2VPB0_SEC_PINT_MASK      (0x4U)
#define SYSCON_BUFFERAHB2VPB0_SEC_PINT_SHIFT     (2U)
/*! sec_PINT - Buffer control of secure PINT APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_SEC_PINT(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_SEC_PINT_SHIFT)) & SYSCON_BUFFERAHB2VPB0_SEC_PINT_MASK)

#define SYSCON_BUFFERAHB2VPB0_FREQ_MEAS_MASK     (0x8U)
#define SYSCON_BUFFERAHB2VPB0_FREQ_MEAS_SHIFT    (3U)
/*! freq_meas - Buffer control of frequence measure APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_FREQ_MEAS(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_FREQ_MEAS_SHIFT)) & SYSCON_BUFFERAHB2VPB0_FREQ_MEAS_MASK)

#define SYSCON_BUFFERAHB2VPB0_ROM_MASK           (0x10U)
#define SYSCON_BUFFERAHB2VPB0_ROM_SHIFT          (4U)
/*! ROM - Buffer control of ROM Codepath APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_ROM(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_ROM_SHIFT)) & SYSCON_BUFFERAHB2VPB0_ROM_MASK)

#define SYSCON_BUFFERAHB2VPB0_INPUTMUX_MASK      (0x20U)
#define SYSCON_BUFFERAHB2VPB0_INPUTMUX_SHIFT     (5U)
/*! INPUTMUX - Buffer control of INPUTMUX APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_INPUTMUX(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_INPUTMUX_SHIFT)) & SYSCON_BUFFERAHB2VPB0_INPUTMUX_MASK)

#define SYSCON_BUFFERAHB2VPB0_CTIMER0_MASK       (0x80U)
#define SYSCON_BUFFERAHB2VPB0_CTIMER0_SHIFT      (7U)
/*! CTIMER0 - Buffer control of CTIMER0 APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_CTIMER0(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_CTIMER0_SHIFT)) & SYSCON_BUFFERAHB2VPB0_CTIMER0_MASK)

#define SYSCON_BUFFERAHB2VPB0_CTIMER1_MASK       (0x100U)
#define SYSCON_BUFFERAHB2VPB0_CTIMER1_SHIFT      (8U)
/*! CTIMER1 - Buffer control of CTIMER1 APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_CTIMER1(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_CTIMER1_SHIFT)) & SYSCON_BUFFERAHB2VPB0_CTIMER1_MASK)

#define SYSCON_BUFFERAHB2VPB0_CTIMER2_MASK       (0x200U)
#define SYSCON_BUFFERAHB2VPB0_CTIMER2_SHIFT      (9U)
/*! CTIMER2 - Buffer control of CTIMER2 APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_CTIMER2(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_CTIMER2_SHIFT)) & SYSCON_BUFFERAHB2VPB0_CTIMER2_MASK)

#define SYSCON_BUFFERAHB2VPB0_CTIMER3_MASK       (0x400U)
#define SYSCON_BUFFERAHB2VPB0_CTIMER3_SHIFT      (10U)
/*! CTIMER3 - Buffer control of CTIMER3 APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_CTIMER3(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_CTIMER3_SHIFT)) & SYSCON_BUFFERAHB2VPB0_CTIMER3_MASK)

#define SYSCON_BUFFERAHB2VPB0_CTIMER4_MASK       (0x800U)
#define SYSCON_BUFFERAHB2VPB0_CTIMER4_SHIFT      (11U)
/*! CTIMER4 - Buffer control of CTIMER4 APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_CTIMER4(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_CTIMER4_SHIFT)) & SYSCON_BUFFERAHB2VPB0_CTIMER4_MASK)

#define SYSCON_BUFFERAHB2VPB0_EVENT_CTRL_MASK    (0x1000U)
#define SYSCON_BUFFERAHB2VPB0_EVENT_CTRL_SHIFT   (12U)
/*! event_ctrl - Buffer control of event controller APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_EVENT_CTRL(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_EVENT_CTRL_SHIFT)) & SYSCON_BUFFERAHB2VPB0_EVENT_CTRL_MASK)

#define SYSCON_BUFFERAHB2VPB0_WWDT_MASK          (0x4000U)
#define SYSCON_BUFFERAHB2VPB0_WWDT_SHIFT         (14U)
/*! WWDT - Buffer control of WWDT APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_WWDT(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_WWDT_SHIFT)) & SYSCON_BUFFERAHB2VPB0_WWDT_MASK)

#define SYSCON_BUFFERAHB2VPB0_MRT_MASK           (0x8000U)
#define SYSCON_BUFFERAHB2VPB0_MRT_SHIFT          (15U)
/*! MRT - Buffer control of MRT APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_MRT(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_MRT_SHIFT)) & SYSCON_BUFFERAHB2VPB0_MRT_MASK)

#define SYSCON_BUFFERAHB2VPB0_UTICK_MASK         (0x20000U)
#define SYSCON_BUFFERAHB2VPB0_UTICK_SHIFT        (17U)
/*! utick - Buffer control of Utick APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_UTICK(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_UTICK_SHIFT)) & SYSCON_BUFFERAHB2VPB0_UTICK_MASK)

#define SYSCON_BUFFERAHB2VPB0_OSTIMER_MASK       (0x40000U)
#define SYSCON_BUFFERAHB2VPB0_OSTIMER_SHIFT      (18U)
/*! OSTimer - Buffer control of OSTimer APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_OSTIMER(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_OSTIMER_SHIFT)) & SYSCON_BUFFERAHB2VPB0_OSTIMER_MASK)

#define SYSCON_BUFFERAHB2VPB0_XSPI_MASK          (0x80000U)
#define SYSCON_BUFFERAHB2VPB0_XSPI_SHIFT         (19U)
/*! XSPI - Buffer control of XSPI APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_XSPI(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_XSPI_SHIFT)) & SYSCON_BUFFERAHB2VPB0_XSPI_MASK)

#define SYSCON_BUFFERAHB2VPB0_ITRC_MASK          (0x100000U)
#define SYSCON_BUFFERAHB2VPB0_ITRC_SHIFT         (20U)
/*! ITRC - Buffer control of ITRC APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_ITRC(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_ITRC_SHIFT)) & SYSCON_BUFFERAHB2VPB0_ITRC_MASK)

#define SYSCON_BUFFERAHB2VPB0_SECCON_MASK        (0x200000U)
#define SYSCON_BUFFERAHB2VPB0_SECCON_SHIFT       (21U)
/*! SECCON - Buffer control of SECCON APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_SECCON(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_SECCON_SHIFT)) & SYSCON_BUFFERAHB2VPB0_SECCON_MASK)

#define SYSCON_BUFFERAHB2VPB0_GLIKEY_MASK        (0x400000U)
#define SYSCON_BUFFERAHB2VPB0_GLIKEY_SHIFT       (22U)
/*! GLIKEY - Buffer control of GLIKEY APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_GLIKEY(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_GLIKEY_SHIFT)) & SYSCON_BUFFERAHB2VPB0_GLIKEY_MASK)

#define SYSCON_BUFFERAHB2VPB0_TRNG_MASK          (0x800000U)
#define SYSCON_BUFFERAHB2VPB0_TRNG_SHIFT         (23U)
/*! TRNG - Buffer control of TRNG APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_TRNG(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_TRNG_SHIFT)) & SYSCON_BUFFERAHB2VPB0_TRNG_MASK)

#define SYSCON_BUFFERAHB2VPB0_UDF_MASK           (0x1000000U)
#define SYSCON_BUFFERAHB2VPB0_UDF_SHIFT          (24U)
/*! UDF - Buffer control of UDF APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_UDF(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_UDF_SHIFT)) & SYSCON_BUFFERAHB2VPB0_UDF_MASK)

#define SYSCON_BUFFERAHB2VPB0_PKC_MASK           (0x2000000U)
#define SYSCON_BUFFERAHB2VPB0_PKC_SHIFT          (25U)
/*! PKC - Buffer control of PKC APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_PKC(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_PKC_SHIFT)) & SYSCON_BUFFERAHB2VPB0_PKC_MASK)

#define SYSCON_BUFFERAHB2VPB0_GDET_MASK          (0x4000000U)
#define SYSCON_BUFFERAHB2VPB0_GDET_SHIFT         (26U)
/*! GDET - Buffer control of GDET APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB0_GDET(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB0_GDET_SHIFT)) & SYSCON_BUFFERAHB2VPB0_GDET_MASK)
/*! @} */

/*! @name BUFFERAHB2VPB1 - Enables buffering of write accesses on APB interfaces */
/*! @{ */

#define SYSCON_BUFFERAHB2VPB1_SGI_MASK           (0x1U)
#define SYSCON_BUFFERAHB2VPB1_SGI_SHIFT          (0U)
/*! SGI - Buffer control of SGI APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB1_SGI(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB1_SGI_SHIFT)) & SYSCON_BUFFERAHB2VPB1_SGI_MASK)

#define SYSCON_BUFFERAHB2VPB1_CGU_MASK           (0x2U)
#define SYSCON_BUFFERAHB2VPB1_CGU_SHIFT          (1U)
/*! CGU - Buffer control of CGU APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB1_CGU(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB1_CGU_SHIFT)) & SYSCON_BUFFERAHB2VPB1_CGU_MASK)

#define SYSCON_BUFFERAHB2VPB1_DSWM_MASK          (0x4U)
#define SYSCON_BUFFERAHB2VPB1_DSWM_SHIFT         (2U)
/*! DSWM - Buffer control of DSWM APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB1_DSWM(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB1_DSWM_SHIFT)) & SYSCON_BUFFERAHB2VPB1_DSWM_MASK)

#define SYSCON_BUFFERAHB2VPB1_PMRC_MASK          (0x8U)
#define SYSCON_BUFFERAHB2VPB1_PMRC_SHIFT         (3U)
/*! PMRC - Buffer control of PMRC APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB1_PMRC(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB1_PMRC_SHIFT)) & SYSCON_BUFFERAHB2VPB1_PMRC_MASK)

#define SYSCON_BUFFERAHB2VPB1_OTPC_SSS_MASK      (0x10U)
#define SYSCON_BUFFERAHB2VPB1_OTPC_SSS_SHIFT     (4U)
/*! OTPC_SSS - Buffer control of OTPC_SSS APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB1_OTPC_SSS(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB1_OTPC_SSS_SHIFT)) & SYSCON_BUFFERAHB2VPB1_OTPC_SSS_MASK)

#define SYSCON_BUFFERAHB2VPB1_OTPC_FSB_MASK      (0x20U)
#define SYSCON_BUFFERAHB2VPB1_OTPC_FSB_SHIFT     (5U)
/*! OTPC_FSB - Buffer control of OTPC_FSB APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB1_OTPC_FSB(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB1_OTPC_FSB_SHIFT)) & SYSCON_BUFFERAHB2VPB1_OTPC_FSB_MASK)

#define SYSCON_BUFFERAHB2VPB1_GPADC_MASK         (0x40U)
#define SYSCON_BUFFERAHB2VPB1_GPADC_SHIFT        (6U)
/*! GPADC - Buffer control of GPADC APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB1_GPADC(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB1_GPADC_SHIFT)) & SYSCON_BUFFERAHB2VPB1_GPADC_MASK)

#define SYSCON_BUFFERAHB2VPB1_SYSCON_MASK        (0x80U)
#define SYSCON_BUFFERAHB2VPB1_SYSCON_SHIFT       (7U)
/*! SYSCON - Buffer control of SYSCON APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB1_SYSCON(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB1_SYSCON_SHIFT)) & SYSCON_BUFFERAHB2VPB1_SYSCON_MASK)

#define SYSCON_BUFFERAHB2VPB1_ADSS_MASK          (0x200U)
#define SYSCON_BUFFERAHB2VPB1_ADSS_SHIFT         (9U)
/*! ADSS - Buffer control of ADSS peripherals APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB1_ADSS(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB1_ADSS_SHIFT)) & SYSCON_BUFFERAHB2VPB1_ADSS_MASK)

#define SYSCON_BUFFERAHB2VPB1_ADSS_IO0_MASK      (0x400U)
#define SYSCON_BUFFERAHB2VPB1_ADSS_IO0_SHIFT     (10U)
/*! ADSS_IO0 - Buffer control of ADSS Global IO - 0 APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB1_ADSS_IO0(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB1_ADSS_IO0_SHIFT)) & SYSCON_BUFFERAHB2VPB1_ADSS_IO0_MASK)

#define SYSCON_BUFFERAHB2VPB1_ADSS_IO1_MASK      (0x800U)
#define SYSCON_BUFFERAHB2VPB1_ADSS_IO1_SHIFT     (11U)
/*! ADSS_IO1 - Buffer control of ADSS Global IO - 1 APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB1_ADSS_IO1(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB1_ADSS_IO1_SHIFT)) & SYSCON_BUFFERAHB2VPB1_ADSS_IO1_MASK)

#define SYSCON_BUFFERAHB2VPB1_CROSSBREAK_MASK    (0x1000U)
#define SYSCON_BUFFERAHB2VPB1_CROSSBREAK_SHIFT   (12U)
/*! crossbreak - Buffer control of Crossbreak APB interface
 *  0b0..Buffer disabled
 *  0b1..Buffer enabled
 */
#define SYSCON_BUFFERAHB2VPB1_CROSSBREAK(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_BUFFERAHB2VPB1_CROSSBREAK_SHIFT)) & SYSCON_BUFFERAHB2VPB1_CROSSBREAK_MASK)
/*! @} */

/*! @name GPIO_INT_PSYNC - GPIO INT synchronization Control */
/*! @{ */

#define SYSCON_GPIO_INT_PSYNC_PSYNC_MASK         (0x1U)
#define SYSCON_GPIO_INT_PSYNC_PSYNC_SHIFT        (0U)
/*! psync - Enable bypass of the first stage of synchronization inside the GPIO_INT modules
 *  0b0..Use the first stage of synchronization inside GPIO_INT modules
 *  0b1..Bypass of the first stage of synchronization inside GPIO_INT modules
 */
#define SYSCON_GPIO_INT_PSYNC_PSYNC(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_GPIO_INT_PSYNC_PSYNC_SHIFT)) & SYSCON_GPIO_INT_PSYNC_PSYNC_MASK)
/*! @} */

/*! @name TRNG_STATUS - TRNG status registers */
/*! @{ */

#define SYSCON_TRNG_STATUS_BUSY_MASK             (0x1U)
#define SYSCON_TRNG_STATUS_BUSY_SHIFT            (0U)
/*! busy - When 1 indicates that the random number generator is busy */
#define SYSCON_TRNG_STATUS_BUSY(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_TRNG_STATUS_BUSY_SHIFT)) & SYSCON_TRNG_STATUS_BUSY_MASK)

#define SYSCON_TRNG_STATUS_ERROR_MASK            (0x2U)
#define SYSCON_TRNG_STATUS_ERROR_SHIFT           (1U)
/*! error - When 1 indicates that the random number generator has detected an error */
#define SYSCON_TRNG_STATUS_ERROR(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_TRNG_STATUS_ERROR_SHIFT)) & SYSCON_TRNG_STATUS_ERROR_MASK)
/*! @} */

/*! @name Q_CHANNEL_CTRL_CM55 - Q Channel Control Registers for CM55 Clock */
/*! @{ */

#define SYSCON_Q_CHANNEL_CTRL_CM55_DRAIN_COUNTER_VALUE_MASK (0x1FU)
#define SYSCON_Q_CHANNEL_CTRL_CM55_DRAIN_COUNTER_VALUE_SHIFT (0U)
/*! drain_counter_value - Q Channel Control Drain Counter Value */
#define SYSCON_Q_CHANNEL_CTRL_CM55_DRAIN_COUNTER_VALUE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_Q_CHANNEL_CTRL_CM55_DRAIN_COUNTER_VALUE_SHIFT)) & SYSCON_Q_CHANNEL_CTRL_CM55_DRAIN_COUNTER_VALUE_MASK)

#define SYSCON_Q_CHANNEL_CTRL_CM55_COUNTER_VALID_MASK (0x20U)
#define SYSCON_Q_CHANNEL_CTRL_CM55_COUNTER_VALID_SHIFT (5U)
/*! counter_valid - When 1 indicates that the drain counter value is valid for synchronisation */
#define SYSCON_Q_CHANNEL_CTRL_CM55_COUNTER_VALID(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_Q_CHANNEL_CTRL_CM55_COUNTER_VALID_SHIFT)) & SYSCON_Q_CHANNEL_CTRL_CM55_COUNTER_VALID_MASK)

#define SYSCON_Q_CHANNEL_CTRL_CM55_HOLD_MASK     (0x40U)
#define SYSCON_Q_CHANNEL_CTRL_CM55_HOLD_SHIFT    (6U)
/*! hold - When 1 indicates that the q channel clock control should be hold */
#define SYSCON_Q_CHANNEL_CTRL_CM55_HOLD(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_Q_CHANNEL_CTRL_CM55_HOLD_SHIFT)) & SYSCON_Q_CHANNEL_CTRL_CM55_HOLD_MASK)

#define SYSCON_Q_CHANNEL_CTRL_CM55_OVERRIDE_MASK (0x80U)
#define SYSCON_Q_CHANNEL_CTRL_CM55_OVERRIDE_SHIFT (7U)
/*! override - When 1 indicates that the q channel control FSM should be overridden */
#define SYSCON_Q_CHANNEL_CTRL_CM55_OVERRIDE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_Q_CHANNEL_CTRL_CM55_OVERRIDE_SHIFT)) & SYSCON_Q_CHANNEL_CTRL_CM55_OVERRIDE_MASK)
/*! @} */

/*! @name Q_CHANNEL_CTRL_DEBUG - Q Channel Control Registers for debug Clock */
/*! @{ */

#define SYSCON_Q_CHANNEL_CTRL_DEBUG_DRAIN_COUNTER_VALUE_MASK (0x1FU)
#define SYSCON_Q_CHANNEL_CTRL_DEBUG_DRAIN_COUNTER_VALUE_SHIFT (0U)
/*! drain_counter_value - Q Channel Control Drain Counter Value */
#define SYSCON_Q_CHANNEL_CTRL_DEBUG_DRAIN_COUNTER_VALUE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_Q_CHANNEL_CTRL_DEBUG_DRAIN_COUNTER_VALUE_SHIFT)) & SYSCON_Q_CHANNEL_CTRL_DEBUG_DRAIN_COUNTER_VALUE_MASK)

#define SYSCON_Q_CHANNEL_CTRL_DEBUG_COUNTER_VALID_MASK (0x20U)
#define SYSCON_Q_CHANNEL_CTRL_DEBUG_COUNTER_VALID_SHIFT (5U)
/*! counter_valid - When 1 indicates that the drain counter value is valid for synchronisation */
#define SYSCON_Q_CHANNEL_CTRL_DEBUG_COUNTER_VALID(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_Q_CHANNEL_CTRL_DEBUG_COUNTER_VALID_SHIFT)) & SYSCON_Q_CHANNEL_CTRL_DEBUG_COUNTER_VALID_MASK)

#define SYSCON_Q_CHANNEL_CTRL_DEBUG_HOLD_MASK    (0x40U)
#define SYSCON_Q_CHANNEL_CTRL_DEBUG_HOLD_SHIFT   (6U)
/*! hold - When 1 indicates that the q channel clock control should be hold */
#define SYSCON_Q_CHANNEL_CTRL_DEBUG_HOLD(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_Q_CHANNEL_CTRL_DEBUG_HOLD_SHIFT)) & SYSCON_Q_CHANNEL_CTRL_DEBUG_HOLD_MASK)

#define SYSCON_Q_CHANNEL_CTRL_DEBUG_OVERRIDE_MASK (0x80U)
#define SYSCON_Q_CHANNEL_CTRL_DEBUG_OVERRIDE_SHIFT (7U)
/*! override - When 1 indicates that the q channel control FSM should be overridden */
#define SYSCON_Q_CHANNEL_CTRL_DEBUG_OVERRIDE(x)  (((uint32_t)(((uint32_t)(x)) << SYSCON_Q_CHANNEL_CTRL_DEBUG_OVERRIDE_SHIFT)) & SYSCON_Q_CHANNEL_CTRL_DEBUG_OVERRIDE_MASK)
/*! @} */

/*! @name Q_CHANNEL_CTRL_NIC - Q Channel Control Registers for NIC Clock */
/*! @{ */

#define SYSCON_Q_CHANNEL_CTRL_NIC_DRAIN_COUNTER_VALUE_MASK (0x1FU)
#define SYSCON_Q_CHANNEL_CTRL_NIC_DRAIN_COUNTER_VALUE_SHIFT (0U)
/*! drain_counter_value - Q Channel Control Drain Counter Value */
#define SYSCON_Q_CHANNEL_CTRL_NIC_DRAIN_COUNTER_VALUE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_Q_CHANNEL_CTRL_NIC_DRAIN_COUNTER_VALUE_SHIFT)) & SYSCON_Q_CHANNEL_CTRL_NIC_DRAIN_COUNTER_VALUE_MASK)

#define SYSCON_Q_CHANNEL_CTRL_NIC_COUNTER_VALID_MASK (0x20U)
#define SYSCON_Q_CHANNEL_CTRL_NIC_COUNTER_VALID_SHIFT (5U)
/*! counter_valid - When 1 indicates that the drain counter value is valid for synchronisation */
#define SYSCON_Q_CHANNEL_CTRL_NIC_COUNTER_VALID(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_Q_CHANNEL_CTRL_NIC_COUNTER_VALID_SHIFT)) & SYSCON_Q_CHANNEL_CTRL_NIC_COUNTER_VALID_MASK)

#define SYSCON_Q_CHANNEL_CTRL_NIC_HOLD_MASK      (0x40U)
#define SYSCON_Q_CHANNEL_CTRL_NIC_HOLD_SHIFT     (6U)
/*! hold - When 1 indicates that the q channel clock control should be hold */
#define SYSCON_Q_CHANNEL_CTRL_NIC_HOLD(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_Q_CHANNEL_CTRL_NIC_HOLD_SHIFT)) & SYSCON_Q_CHANNEL_CTRL_NIC_HOLD_MASK)

#define SYSCON_Q_CHANNEL_CTRL_NIC_OVERRIDE_MASK  (0x80U)
#define SYSCON_Q_CHANNEL_CTRL_NIC_OVERRIDE_SHIFT (7U)
/*! override - When 1 indicates that the q channel control FSM should be overridden */
#define SYSCON_Q_CHANNEL_CTRL_NIC_OVERRIDE(x)    (((uint32_t)(((uint32_t)(x)) << SYSCON_Q_CHANNEL_CTRL_NIC_OVERRIDE_SHIFT)) & SYSCON_Q_CHANNEL_CTRL_NIC_OVERRIDE_MASK)
/*! @} */

/*! @name Q_CHANNEL_CTRL_XSPI - Q Channel Control Registers for NIC XSPI Clock */
/*! @{ */

#define SYSCON_Q_CHANNEL_CTRL_XSPI_DRAIN_COUNTER_VALUE_MASK (0x1FU)
#define SYSCON_Q_CHANNEL_CTRL_XSPI_DRAIN_COUNTER_VALUE_SHIFT (0U)
/*! drain_counter_value - Q Channel Control Drain Counter Value */
#define SYSCON_Q_CHANNEL_CTRL_XSPI_DRAIN_COUNTER_VALUE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_Q_CHANNEL_CTRL_XSPI_DRAIN_COUNTER_VALUE_SHIFT)) & SYSCON_Q_CHANNEL_CTRL_XSPI_DRAIN_COUNTER_VALUE_MASK)

#define SYSCON_Q_CHANNEL_CTRL_XSPI_COUNTER_VALID_MASK (0x20U)
#define SYSCON_Q_CHANNEL_CTRL_XSPI_COUNTER_VALID_SHIFT (5U)
/*! counter_valid - When 1 indicates that the drain counter value is valid for synchronisation */
#define SYSCON_Q_CHANNEL_CTRL_XSPI_COUNTER_VALID(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_Q_CHANNEL_CTRL_XSPI_COUNTER_VALID_SHIFT)) & SYSCON_Q_CHANNEL_CTRL_XSPI_COUNTER_VALID_MASK)

#define SYSCON_Q_CHANNEL_CTRL_XSPI_HOLD_MASK     (0x40U)
#define SYSCON_Q_CHANNEL_CTRL_XSPI_HOLD_SHIFT    (6U)
/*! hold - When 1 indicates that the q channel clock control should be hold */
#define SYSCON_Q_CHANNEL_CTRL_XSPI_HOLD(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_Q_CHANNEL_CTRL_XSPI_HOLD_SHIFT)) & SYSCON_Q_CHANNEL_CTRL_XSPI_HOLD_MASK)

#define SYSCON_Q_CHANNEL_CTRL_XSPI_OVERRIDE_MASK (0x80U)
#define SYSCON_Q_CHANNEL_CTRL_XSPI_OVERRIDE_SHIFT (7U)
/*! override - When 1 indicates that the q channel control FSM should be overridden */
#define SYSCON_Q_CHANNEL_CTRL_XSPI_OVERRIDE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_Q_CHANNEL_CTRL_XSPI_OVERRIDE_SHIFT)) & SYSCON_Q_CHANNEL_CTRL_XSPI_OVERRIDE_MASK)
/*! @} */

/*! @name MEMAHBAPERTURE2 - memory AHB aperture */
/*! @{ */

#define SYSCON_MEMAHBAPERTURE2_APERTURE_MASK     (0xFFFFFU)
#define SYSCON_MEMAHBAPERTURE2_APERTURE_SHIFT    (0U)
/*! aperture - memory AHB aperture */
#define SYSCON_MEMAHBAPERTURE2_APERTURE(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_MEMAHBAPERTURE2_APERTURE_SHIFT)) & SYSCON_MEMAHBAPERTURE2_APERTURE_MASK)
/*! @} */

/*! @name CHIP_ID - Contains the 31-bit chip JTAG ID */
/*! @{ */

#define SYSCON_CHIP_ID_VERSION_MASK              (0xFU)
#define SYSCON_CHIP_ID_VERSION_SHIFT             (0U)
#define SYSCON_CHIP_ID_VERSION(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_CHIP_ID_VERSION_SHIFT)) & SYSCON_CHIP_ID_VERSION_MASK)

#define SYSCON_CHIP_ID_PROD_ID_MASK              (0xFFFF0U)
#define SYSCON_CHIP_ID_PROD_ID_SHIFT             (4U)
/*! prod_id - IMXRTL345 */
#define SYSCON_CHIP_ID_PROD_ID(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_CHIP_ID_PROD_ID_SHIFT)) & SYSCON_CHIP_ID_PROD_ID_MASK)

#define SYSCON_CHIP_ID_MAN_ID_MASK               (0x7FF00000U)
#define SYSCON_CHIP_ID_MAN_ID_SHIFT              (20U)
#define SYSCON_CHIP_ID_MAN_ID(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_CHIP_ID_MAN_ID_SHIFT)) & SYSCON_CHIP_ID_MAN_ID_MASK)
/*! @} */

/*! @name XSPI_CFG - CSS xSPI configuration register */
/*! @{ */

#define SYSCON_XSPI_CFG_DOZE_MASK                (0x1U)
#define SYSCON_XSPI_CFG_DOZE_SHIFT               (0U)
/*! doze - Request xSPI to enter doze mode */
#define SYSCON_XSPI_CFG_DOZE(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI_CFG_DOZE_SHIFT)) & SYSCON_XSPI_CFG_DOZE_MASK)

#define SYSCON_XSPI_CFG_STOP_MASK                (0x2U)
#define SYSCON_XSPI_CFG_STOP_SHIFT               (1U)
/*! stop - Request xSPI to enter stop mode. */
#define SYSCON_XSPI_CFG_STOP(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI_CFG_STOP_SHIFT)) & SYSCON_XSPI_CFG_STOP_MASK)

#define SYSCON_XSPI_CFG_TESTER_TRIGGER_MASK      (0x4U)
#define SYSCON_XSPI_CFG_TESTER_TRIGGER_SHIFT     (2U)
/*! tester_trigger - Not connected yet, waiting for release of CSS */
#define SYSCON_XSPI_CFG_TESTER_TRIGGER(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI_CFG_TESTER_TRIGGER_SHIFT)) & SYSCON_XSPI_CFG_TESTER_TRIGGER_MASK)
/*! @} */

/*! @name XSPI_STATUS - CSS xSPI status register */
/*! @{ */

#define SYSCON_XSPI_STATUS_STOP_ACK_MASK         (0x1U)
#define SYSCON_XSPI_STATUS_STOP_ACK_SHIFT        (0U)
/*! stop_ack - xSPI acknowledged stop mode request */
#define SYSCON_XSPI_STATUS_STOP_ACK(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI_STATUS_STOP_ACK_SHIFT)) & SYSCON_XSPI_STATUS_STOP_ACK_MASK)
/*! @} */

/*! @name XSPI0 - Configure pull-control on XSPI0. */
/*! @{ */

#define SYSCON_XSPI0_SPI0_IO0_PULL_OVERRULE_MASK (0x7U)
#define SYSCON_XSPI0_SPI0_IO0_PULL_OVERRULE_SHIFT (0U)
/*! SPI0_IO0_pull_overrule - Configure pull-control on the XSPI SPI0_IO0 function.
 *  0b000..statically enable a pull-up.
 *  0b001..statically enable a pull-down.
 *  0b010..dynamically enable a pull-up.
 *  0b011..dynamically enable a pull-down.
 *  0b100..No pull-up nor pull-down enabled.
 */
#define SYSCON_XSPI0_SPI0_IO0_PULL_OVERRULE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI0_SPI0_IO0_PULL_OVERRULE_SHIFT)) & SYSCON_XSPI0_SPI0_IO0_PULL_OVERRULE_MASK)

#define SYSCON_XSPI0_SPI0_IO1_PULL_OVERRULE_MASK (0x38U)
#define SYSCON_XSPI0_SPI0_IO1_PULL_OVERRULE_SHIFT (3U)
/*! SPI0_IO1_pull_overrule - Configure pull-control on the XSpi SPI0_IO1 function.
 *  0b000..statically enable a pull-up.
 *  0b001..statically enable a pull-down.
 *  0b010..dynamically enable a pull-up.
 *  0b011..dynamically enable a pull-down.
 *  0b100..No pull-up nor pull-down enabled.
 */
#define SYSCON_XSPI0_SPI0_IO1_PULL_OVERRULE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI0_SPI0_IO1_PULL_OVERRULE_SHIFT)) & SYSCON_XSPI0_SPI0_IO1_PULL_OVERRULE_MASK)

#define SYSCON_XSPI0_SPI0_IO2_PULL_OVERRULE_MASK (0x1C0U)
#define SYSCON_XSPI0_SPI0_IO2_PULL_OVERRULE_SHIFT (6U)
/*! SPI0_IO2_pull_overrule - Configure pull-control on the XSpi SPI0_IO2 function.
 *  0b000..statically enable a pull-up.
 *  0b001..statically enable a pull-down.
 *  0b010..dynamically enable a pull-up.
 *  0b011..dynamically enable a pull-down.
 *  0b100..No pull-up nor pull-down enabled.
 */
#define SYSCON_XSPI0_SPI0_IO2_PULL_OVERRULE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI0_SPI0_IO2_PULL_OVERRULE_SHIFT)) & SYSCON_XSPI0_SPI0_IO2_PULL_OVERRULE_MASK)

#define SYSCON_XSPI0_SPI0_IO3_PULL_OVERRULE_MASK (0xE00U)
#define SYSCON_XSPI0_SPI0_IO3_PULL_OVERRULE_SHIFT (9U)
/*! SPI0_IO3_pull_overrule - Configure pull-control on the XSpi SPI0_IO3 function.
 *  0b000..statically enable a pull-up.
 *  0b001..statically enable a pull-down.
 *  0b010..dynamically enable a pull-up.
 *  0b011..dynamically enable a pull-down.
 *  0b100..No pull-up nor pull-down enabled.
 */
#define SYSCON_XSPI0_SPI0_IO3_PULL_OVERRULE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI0_SPI0_IO3_PULL_OVERRULE_SHIFT)) & SYSCON_XSPI0_SPI0_IO3_PULL_OVERRULE_MASK)

#define SYSCON_XSPI0_SPI0_IO4_PULL_OVERRULE_MASK (0x7000U)
#define SYSCON_XSPI0_SPI0_IO4_PULL_OVERRULE_SHIFT (12U)
/*! SPI0_IO4_pull_overrule - Configure pull-control on the XSpi SPI0_IO4 function.
 *  0b000..statically enable a pull-up.
 *  0b001..statically enable a pull-down.
 *  0b010..dynamically enable a pull-up.
 *  0b011..dynamically enable a pull-down.
 *  0b100..No pull-up nor pull-down enabled.
 */
#define SYSCON_XSPI0_SPI0_IO4_PULL_OVERRULE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI0_SPI0_IO4_PULL_OVERRULE_SHIFT)) & SYSCON_XSPI0_SPI0_IO4_PULL_OVERRULE_MASK)

#define SYSCON_XSPI0_SPI0_IO5_PULL_OVERRULE_MASK (0x38000U)
#define SYSCON_XSPI0_SPI0_IO5_PULL_OVERRULE_SHIFT (15U)
/*! SPI0_IO5_pull_overrule - Configure pull-control on the XSpi SPI0_IO5 function.
 *  0b000..statically enable a pull-up.
 *  0b001..statically enable a pull-down.
 *  0b010..dynamically enable a pull-up.
 *  0b011..dynamically enable a pull-down.
 *  0b100..No pull-up nor pull-down enabled.
 */
#define SYSCON_XSPI0_SPI0_IO5_PULL_OVERRULE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI0_SPI0_IO5_PULL_OVERRULE_SHIFT)) & SYSCON_XSPI0_SPI0_IO5_PULL_OVERRULE_MASK)

#define SYSCON_XSPI0_SPI0_IO6_PULL_OVERRULE_MASK (0x1C0000U)
#define SYSCON_XSPI0_SPI0_IO6_PULL_OVERRULE_SHIFT (18U)
/*! SPI0_IO6_pull_overrule - Configure pull-control on the XSpi SPI0_IO6 function.
 *  0b000..statically enable a pull-up.
 *  0b001..statically enable a pull-down.
 *  0b010..dynamically enable a pull-up.
 *  0b011..dynamically enable a pull-down.
 *  0b100..No pull-up nor pull-down enabled.
 */
#define SYSCON_XSPI0_SPI0_IO6_PULL_OVERRULE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI0_SPI0_IO6_PULL_OVERRULE_SHIFT)) & SYSCON_XSPI0_SPI0_IO6_PULL_OVERRULE_MASK)

#define SYSCON_XSPI0_SPI0_IO7_PULL_OVERRULE_MASK (0xE00000U)
#define SYSCON_XSPI0_SPI0_IO7_PULL_OVERRULE_SHIFT (21U)
/*! SPI0_IO7_pull_overrule - Configure pull-control on the XSpi SPI0_IO7 function.
 *  0b000..statically enable a pull-up.
 *  0b001..statically enable a pull-down.
 *  0b010..dynamically enable a pull-up.
 *  0b011..dynamically enable a pull-down.
 *  0b100..No pull-up nor pull-down enabled.
 */
#define SYSCON_XSPI0_SPI0_IO7_PULL_OVERRULE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI0_SPI0_IO7_PULL_OVERRULE_SHIFT)) & SYSCON_XSPI0_SPI0_IO7_PULL_OVERRULE_MASK)
/*! @} */

/*! @name XSPI1 - Configure pull-control on XSPI1. */
/*! @{ */

#define SYSCON_XSPI1_SPI1_IO0_PULL_OVERRULE_MASK (0x7U)
#define SYSCON_XSPI1_SPI1_IO0_PULL_OVERRULE_SHIFT (0U)
/*! SPI1_IO0_pull_overrule - Configure pull-control on the XSpi SPI1_IO0 function.
 *  0b000..statically enable a pull-up.
 *  0b001..statically enable a pull-down.
 *  0b010..dynamically enable a pull-up.
 *  0b011..dynamically enable a pull-down.
 *  0b100..No pull-up nor pull-down enabled.
 */
#define SYSCON_XSPI1_SPI1_IO0_PULL_OVERRULE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI1_SPI1_IO0_PULL_OVERRULE_SHIFT)) & SYSCON_XSPI1_SPI1_IO0_PULL_OVERRULE_MASK)

#define SYSCON_XSPI1_SPI1_IO1_PULL_OVERRULE_MASK (0x38U)
#define SYSCON_XSPI1_SPI1_IO1_PULL_OVERRULE_SHIFT (3U)
/*! SPI1_IO1_pull_overrule - Configure pull-control on the XSpi SPI1_IO1 function.
 *  0b000..statically enable a pull-up.
 *  0b001..statically enable a pull-down.
 *  0b010..dynamically enable a pull-up.
 *  0b011..dynamically enable a pull-down.
 *  0b100..No pull-up nor pull-down enabled.
 */
#define SYSCON_XSPI1_SPI1_IO1_PULL_OVERRULE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI1_SPI1_IO1_PULL_OVERRULE_SHIFT)) & SYSCON_XSPI1_SPI1_IO1_PULL_OVERRULE_MASK)

#define SYSCON_XSPI1_SPI1_IO2_PULL_OVERRULE_MASK (0x1C0U)
#define SYSCON_XSPI1_SPI1_IO2_PULL_OVERRULE_SHIFT (6U)
/*! SPI1_IO2_pull_overrule - Configure pull-control on the XSpi SPI1_IO2 function.
 *  0b000..statically enable a pull-up.
 *  0b001..statically enable a pull-down.
 *  0b010..dynamically enable a pull-up.
 *  0b011..dynamically enable a pull-down.
 *  0b100..No pull-up nor pull-down enabled.
 */
#define SYSCON_XSPI1_SPI1_IO2_PULL_OVERRULE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI1_SPI1_IO2_PULL_OVERRULE_SHIFT)) & SYSCON_XSPI1_SPI1_IO2_PULL_OVERRULE_MASK)

#define SYSCON_XSPI1_SPI1_IO3_PULL_OVERRULE_MASK (0xE00U)
#define SYSCON_XSPI1_SPI1_IO3_PULL_OVERRULE_SHIFT (9U)
/*! SPI1_IO3_pull_overrule - Configure pull-control on the XSpi SPI1_IO3 function.
 *  0b000..statically enable a pull-up.
 *  0b001..statically enable a pull-down.
 *  0b010..dynamically enable a pull-up.
 *  0b011..dynamically enable a pull-down.
 *  0b100..No pull-up nor pull-down enabled.
 */
#define SYSCON_XSPI1_SPI1_IO3_PULL_OVERRULE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI1_SPI1_IO3_PULL_OVERRULE_SHIFT)) & SYSCON_XSPI1_SPI1_IO3_PULL_OVERRULE_MASK)

#define SYSCON_XSPI1_SPI1_IO4_PULL_OVERRULE_MASK (0x7000U)
#define SYSCON_XSPI1_SPI1_IO4_PULL_OVERRULE_SHIFT (12U)
/*! SPI1_IO4_pull_overrule - Configure pull-control on the XSpi SPI1_IO4 function.
 *  0b000..statically enable a pull-up.
 *  0b001..statically enable a pull-down.
 *  0b010..dynamically enable a pull-up.
 *  0b011..dynamically enable a pull-down.
 *  0b100..No pull-up nor pull-down enabled.
 */
#define SYSCON_XSPI1_SPI1_IO4_PULL_OVERRULE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI1_SPI1_IO4_PULL_OVERRULE_SHIFT)) & SYSCON_XSPI1_SPI1_IO4_PULL_OVERRULE_MASK)

#define SYSCON_XSPI1_SPI1_IO5_PULL_OVERRULE_MASK (0x38000U)
#define SYSCON_XSPI1_SPI1_IO5_PULL_OVERRULE_SHIFT (15U)
/*! SPI1_IO5_pull_overrule - Configure pull-control on the XSpi SPI1_IO5 function.
 *  0b000..statically enable a pull-up.
 *  0b001..statically enable a pull-down.
 *  0b010..dynamically enable a pull-up.
 *  0b011..dynamically enable a pull-down.
 *  0b100..No pull-up nor pull-down enabled.
 */
#define SYSCON_XSPI1_SPI1_IO5_PULL_OVERRULE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI1_SPI1_IO5_PULL_OVERRULE_SHIFT)) & SYSCON_XSPI1_SPI1_IO5_PULL_OVERRULE_MASK)

#define SYSCON_XSPI1_SPI1_IO6_PULL_OVERRULE_MASK (0x1C0000U)
#define SYSCON_XSPI1_SPI1_IO6_PULL_OVERRULE_SHIFT (18U)
/*! SPI1_IO6_pull_overrule - Configure pull-control on the XSpi SPI1_IO6 function.
 *  0b000..statically enable a pull-up.
 *  0b001..statically enable a pull-down.
 *  0b010..dynamically enable a pull-up.
 *  0b011..dynamically enable a pull-down.
 *  0b100..No pull-up nor pull-down enabled.
 */
#define SYSCON_XSPI1_SPI1_IO6_PULL_OVERRULE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI1_SPI1_IO6_PULL_OVERRULE_SHIFT)) & SYSCON_XSPI1_SPI1_IO6_PULL_OVERRULE_MASK)

#define SYSCON_XSPI1_SPI1_IO7_PULL_OVERRULE_MASK (0xE00000U)
#define SYSCON_XSPI1_SPI1_IO7_PULL_OVERRULE_SHIFT (21U)
/*! SPI1_IO7_pull_overrule - Configure pull-control on the XSpi SPI1_IO7 function.
 *  0b000..statically enable a pull-up.
 *  0b001..statically enable a pull-down.
 *  0b010..dynamically enable a pull-up.
 *  0b011..dynamically enable a pull-down.
 *  0b100..No pull-up nor pull-down enabled.
 */
#define SYSCON_XSPI1_SPI1_IO7_PULL_OVERRULE(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_XSPI1_SPI1_IO7_PULL_OVERRULE_SHIFT)) & SYSCON_XSPI1_SPI1_IO7_PULL_OVERRULE_MASK)
/*! @} */

/*! @name CTIMER_ENABLE - CTimer enable register */
/*! @{ */

#define SYSCON_CTIMER_ENABLE_CTIMER0_MASK        (0x1U)
#define SYSCON_CTIMER_ENABLE_CTIMER0_SHIFT       (0U)
/*! ctimer0 - ctimer0 enable
 *  0b0..Module disabled
 *  0b1..Module enabled
 */
#define SYSCON_CTIMER_ENABLE_CTIMER0(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_CTIMER_ENABLE_CTIMER0_SHIFT)) & SYSCON_CTIMER_ENABLE_CTIMER0_MASK)

#define SYSCON_CTIMER_ENABLE_CTIMER1_MASK        (0x2U)
#define SYSCON_CTIMER_ENABLE_CTIMER1_SHIFT       (1U)
/*! ctimer1 - ctimer1 enable
 *  0b0..Module disabled
 *  0b1..Module enabled
 */
#define SYSCON_CTIMER_ENABLE_CTIMER1(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_CTIMER_ENABLE_CTIMER1_SHIFT)) & SYSCON_CTIMER_ENABLE_CTIMER1_MASK)

#define SYSCON_CTIMER_ENABLE_CTIMER2_MASK        (0x4U)
#define SYSCON_CTIMER_ENABLE_CTIMER2_SHIFT       (2U)
/*! ctimer2 - ctimer2 enable
 *  0b0..Module disabled
 *  0b1..Module enabled
 */
#define SYSCON_CTIMER_ENABLE_CTIMER2(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_CTIMER_ENABLE_CTIMER2_SHIFT)) & SYSCON_CTIMER_ENABLE_CTIMER2_MASK)

#define SYSCON_CTIMER_ENABLE_CTIMER3_MASK        (0x8U)
#define SYSCON_CTIMER_ENABLE_CTIMER3_SHIFT       (3U)
/*! ctimer3 - ctimer3 enable
 *  0b0..Module disabled
 *  0b1..Module enabled
 */
#define SYSCON_CTIMER_ENABLE_CTIMER3(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_CTIMER_ENABLE_CTIMER3_SHIFT)) & SYSCON_CTIMER_ENABLE_CTIMER3_MASK)

#define SYSCON_CTIMER_ENABLE_CTIMER4_MASK        (0x10U)
#define SYSCON_CTIMER_ENABLE_CTIMER4_SHIFT       (4U)
/*! ctimer4 - ctimer4 enable
 *  0b0..Module disabled
 *  0b1..Module enabled
 */
#define SYSCON_CTIMER_ENABLE_CTIMER4(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_CTIMER_ENABLE_CTIMER4_SHIFT)) & SYSCON_CTIMER_ENABLE_CTIMER4_MASK)
/*! @} */

/*! @name UTICK_CAP - utick capture pad selection. */
/*! @{ */

#define SYSCON_UTICK_CAP_SWM_B0_MASK             (0xFU)
#define SYSCON_UTICK_CAP_SWM_B0_SHIFT            (0U)
/*! swm_b0 - utick cap0 selection - swm bank 0 */
#define SYSCON_UTICK_CAP_SWM_B0(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_UTICK_CAP_SWM_B0_SHIFT)) & SYSCON_UTICK_CAP_SWM_B0_MASK)

#define SYSCON_UTICK_CAP_SWM_B1_MASK             (0xF00U)
#define SYSCON_UTICK_CAP_SWM_B1_SHIFT            (8U)
/*! swm_b1 - utick cap1 selection - swm bank 1 */
#define SYSCON_UTICK_CAP_SWM_B1(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_UTICK_CAP_SWM_B1_SHIFT)) & SYSCON_UTICK_CAP_SWM_B1_MASK)

#define SYSCON_UTICK_CAP_SWM_B2_MASK             (0xF0000U)
#define SYSCON_UTICK_CAP_SWM_B2_SHIFT            (16U)
/*! swm_b2 - utick cap2 selection - swm bank 2 */
#define SYSCON_UTICK_CAP_SWM_B2(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_UTICK_CAP_SWM_B2_SHIFT)) & SYSCON_UTICK_CAP_SWM_B2_MASK)

#define SYSCON_UTICK_CAP_SWM_B3_MASK             (0xF000000U)
#define SYSCON_UTICK_CAP_SWM_B3_SHIFT            (24U)
/*! swm_b3 - utick cap3 selection - swm bank 3 */
#define SYSCON_UTICK_CAP_SWM_B3(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_UTICK_CAP_SWM_B3_SHIFT)) & SYSCON_UTICK_CAP_SWM_B3_MASK)
/*! @} */

/*! @name BOOT_CFG - BOOT pin configuration. */
/*! @{ */

#define SYSCON_BOOT_CFG_EPUN_MASK                (0x1U)
#define SYSCON_BOOT_CFG_EPUN_SHIFT               (0U)
/*! EPUN - Pull Up Not */
#define SYSCON_BOOT_CFG_EPUN(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_BOOT_CFG_EPUN_SHIFT)) & SYSCON_BOOT_CFG_EPUN_MASK)

#define SYSCON_BOOT_CFG_EPD_MASK                 (0x2U)
#define SYSCON_BOOT_CFG_EPD_SHIFT                (1U)
/*! EPD - Pull Down */
#define SYSCON_BOOT_CFG_EPD(x)                   (((uint32_t)(((uint32_t)(x)) << SYSCON_BOOT_CFG_EPD_SHIFT)) & SYSCON_BOOT_CFG_EPD_MASK)

#define SYSCON_BOOT_CFG_EN_MASK                  (0x4U)
#define SYSCON_BOOT_CFG_EN_SHIFT                 (2U)
/*! EN - enable */
#define SYSCON_BOOT_CFG_EN(x)                    (((uint32_t)(((uint32_t)(x)) << SYSCON_BOOT_CFG_EN_SHIFT)) & SYSCON_BOOT_CFG_EN_MASK)
/*! @} */

/*! @name BOOT_STATUS - BOOT pin status. */
/*! @{ */

#define SYSCON_BOOT_STATUS_ZI_MASK               (0x1U)
#define SYSCON_BOOT_STATUS_ZI_SHIFT              (0U)
/*! ZI - ZI */
#define SYSCON_BOOT_STATUS_ZI(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_BOOT_STATUS_ZI_SHIFT)) & SYSCON_BOOT_STATUS_ZI_MASK)
/*! @} */

/*! @name DTB_STATUS - DTB analog status. */
/*! @{ */

#define SYSCON_DTB_STATUS_PMUCGU_ANALOG_MASK     (0x1U)
#define SYSCON_DTB_STATUS_PMUCGU_ANALOG_SHIFT    (0U)
/*! pmucgu_analog - Output of the PMU Analog Dynamic Test Bus to the Digital Core */
#define SYSCON_DTB_STATUS_PMUCGU_ANALOG(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_DTB_STATUS_PMUCGU_ANALOG_SHIFT)) & SYSCON_DTB_STATUS_PMUCGU_ANALOG_MASK)

#define SYSCON_DTB_STATUS_SIG_ANALOG_MASK        (0x2U)
#define SYSCON_DTB_STATUS_SIG_ANALOG_SHIFT       (1U)
/*! sig_analog - Output of the SIG Analog Dynamic Test Bus to the Digital Core */
#define SYSCON_DTB_STATUS_SIG_ANALOG(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_DTB_STATUS_SIG_ANALOG_SHIFT)) & SYSCON_DTB_STATUS_SIG_ANALOG_MASK)
/*! @} */

/*! @name DTB_CONFIG - Configure dtb to analog */
/*! @{ */

#define SYSCON_DTB_CONFIG_PMUCGU_AO_LPO_ENABLE_MASK (0x1U)
#define SYSCON_DTB_CONFIG_PMUCGU_AO_LPO_ENABLE_SHIFT (0U)
/*! pmucgu_ao_lpo_enable - Selection of ao_clkout_lpo for the dtb bus */
#define SYSCON_DTB_CONFIG_PMUCGU_AO_LPO_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_DTB_CONFIG_PMUCGU_AO_LPO_ENABLE_SHIFT)) & SYSCON_DTB_CONFIG_PMUCGU_AO_LPO_ENABLE_MASK)

#define SYSCON_DTB_CONFIG_PMUCGU_DCDC_DIG_CLK_ENABLE_MASK (0x2U)
#define SYSCON_DTB_CONFIG_PMUCGU_DCDC_DIG_CLK_ENABLE_SHIFT (1U)
/*! pmucgu_dcdc_dig_clk_enable - Selection of dcdc_dig_clk for the dtb bus */
#define SYSCON_DTB_CONFIG_PMUCGU_DCDC_DIG_CLK_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_DTB_CONFIG_PMUCGU_DCDC_DIG_CLK_ENABLE_SHIFT)) & SYSCON_DTB_CONFIG_PMUCGU_DCDC_DIG_CLK_ENABLE_MASK)

#define SYSCON_DTB_CONFIG_PMUCGU_DCDC_DIG_CLK_PRESENT_ENABLE_MASK (0x4U)
#define SYSCON_DTB_CONFIG_PMUCGU_DCDC_DIG_CLK_PRESENT_ENABLE_SHIFT (2U)
/*! pmucgu_dcdc_dig_clk_present_enable - Selection of dcdc_dig_clk_present for the dtb bus */
#define SYSCON_DTB_CONFIG_PMUCGU_DCDC_DIG_CLK_PRESENT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_DTB_CONFIG_PMUCGU_DCDC_DIG_CLK_PRESENT_ENABLE_SHIFT)) & SYSCON_DTB_CONFIG_PMUCGU_DCDC_DIG_CLK_PRESENT_ENABLE_MASK)

#define SYSCON_DTB_CONFIG_PMUCGU_DCDC_MEM_CLK_ENABLE_MASK (0x8U)
#define SYSCON_DTB_CONFIG_PMUCGU_DCDC_MEM_CLK_ENABLE_SHIFT (3U)
/*! pmucgu_dcdc_mem_clk_enable - Selection of dcdc_mem_clk for the dtb bus */
#define SYSCON_DTB_CONFIG_PMUCGU_DCDC_MEM_CLK_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_DTB_CONFIG_PMUCGU_DCDC_MEM_CLK_ENABLE_SHIFT)) & SYSCON_DTB_CONFIG_PMUCGU_DCDC_MEM_CLK_ENABLE_MASK)

#define SYSCON_DTB_CONFIG_PMUCGU_DCDC_MEM_CLK_PRESENT_ENABLE_MASK (0x10U)
#define SYSCON_DTB_CONFIG_PMUCGU_DCDC_MEM_CLK_PRESENT_ENABLE_SHIFT (4U)
/*! pmucgu_dcdc_mem_clk_present_enable - Selection of dcdc_mem_clk_present for the dtb bus */
#define SYSCON_DTB_CONFIG_PMUCGU_DCDC_MEM_CLK_PRESENT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_DTB_CONFIG_PMUCGU_DCDC_MEM_CLK_PRESENT_ENABLE_SHIFT)) & SYSCON_DTB_CONFIG_PMUCGU_DCDC_MEM_CLK_PRESENT_ENABLE_MASK)

#define SYSCON_DTB_CONFIG_PMUCGU_CDU_SELECT_MASK (0x3E0U)
#define SYSCON_DTB_CONFIG_PMUCGU_CDU_SELECT_SHIFT (5U)
/*! pmucgu_cdu_select - Selection of cdu for the dtb bus */
#define SYSCON_DTB_CONFIG_PMUCGU_CDU_SELECT(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_DTB_CONFIG_PMUCGU_CDU_SELECT_SHIFT)) & SYSCON_DTB_CONFIG_PMUCGU_CDU_SELECT_MASK)

#define SYSCON_DTB_CONFIG_SIG_LSRADC_COMP_OUT_ENABLE_MASK (0x400U)
#define SYSCON_DTB_CONFIG_SIG_LSRADC_COMP_OUT_ENABLE_SHIFT (10U)
/*! sig_lsradc_comp_out_enable - Selection of lsradc_comp_out for the dtb bus */
#define SYSCON_DTB_CONFIG_SIG_LSRADC_COMP_OUT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_DTB_CONFIG_SIG_LSRADC_COMP_OUT_ENABLE_SHIFT)) & SYSCON_DTB_CONFIG_SIG_LSRADC_COMP_OUT_ENABLE_MASK)

#define SYSCON_DTB_CONFIG_PMUCGU_PLL_CLK_FB_ENABLE_MASK (0x800U)
#define SYSCON_DTB_CONFIG_PMUCGU_PLL_CLK_FB_ENABLE_SHIFT (11U)
/*! pmucgu_pll_clk_fb_enable - Selection of pll_clk_fb for the dtb bus */
#define SYSCON_DTB_CONFIG_PMUCGU_PLL_CLK_FB_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_DTB_CONFIG_PMUCGU_PLL_CLK_FB_ENABLE_SHIFT)) & SYSCON_DTB_CONFIG_PMUCGU_PLL_CLK_FB_ENABLE_MASK)

#define SYSCON_DTB_CONFIG_PMUCGU_PLL_CLK_FREF_ENABLE_MASK (0x1000U)
#define SYSCON_DTB_CONFIG_PMUCGU_PLL_CLK_FREF_ENABLE_SHIFT (12U)
/*! pmucgu_pll_clk_fref_enable - Selection of pll_clk_fref for the dtb bus */
#define SYSCON_DTB_CONFIG_PMUCGU_PLL_CLK_FREF_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_DTB_CONFIG_PMUCGU_PLL_CLK_FREF_ENABLE_SHIFT)) & SYSCON_DTB_CONFIG_PMUCGU_PLL_CLK_FREF_ENABLE_MASK)

#define SYSCON_DTB_CONFIG_PMUCGU_PLL_CLK_OUT_ENABLE_MASK (0x2000U)
#define SYSCON_DTB_CONFIG_PMUCGU_PLL_CLK_OUT_ENABLE_SHIFT (13U)
/*! pmucgu_pll_clk_out_enable - Selection of pll_clk_out for the dtb bus */
#define SYSCON_DTB_CONFIG_PMUCGU_PLL_CLK_OUT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_DTB_CONFIG_PMUCGU_PLL_CLK_OUT_ENABLE_SHIFT)) & SYSCON_DTB_CONFIG_PMUCGU_PLL_CLK_OUT_ENABLE_MASK)
/*! @} */

/*! @name ATB_CONFIG - Configure atb to analog */
/*! @{ */

#define SYSCON_ATB_CONFIG_PMUCGU_LOAD_SELECT_MASK (0x3U)
#define SYSCON_ATB_CONFIG_PMUCGU_LOAD_SELECT_SHIFT (0U)
/*! pmucgu_load_select - Selection of pmucgu_load_select for the atb bus */
#define SYSCON_ATB_CONFIG_PMUCGU_LOAD_SELECT(x)  (((uint32_t)(((uint32_t)(x)) << SYSCON_ATB_CONFIG_PMUCGU_LOAD_SELECT_SHIFT)) & SYSCON_ATB_CONFIG_PMUCGU_LOAD_SELECT_MASK)

#define SYSCON_ATB_CONFIG_PMUCGU_TEST_ATB12_SWAP_MASK (0x4U)
#define SYSCON_ATB_CONFIG_PMUCGU_TEST_ATB12_SWAP_SHIFT (2U)
/*! pmucgu_test_atb12_swap - Selection of pmucgu_test_atb12_swap for the atb12 bus */
#define SYSCON_ATB_CONFIG_PMUCGU_TEST_ATB12_SWAP(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_ATB_CONFIG_PMUCGU_TEST_ATB12_SWAP_SHIFT)) & SYSCON_ATB_CONFIG_PMUCGU_TEST_ATB12_SWAP_MASK)

#define SYSCON_ATB_CONFIG_MON_PMUCGU_DIG_SELECT_MASK (0x18U)
#define SYSCON_ATB_CONFIG_MON_PMUCGU_DIG_SELECT_SHIFT (3U)
/*! mon_pmucgu_dig_select - Selection of mon_pmucgu_dig_select for the atb bus */
#define SYSCON_ATB_CONFIG_MON_PMUCGU_DIG_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_ATB_CONFIG_MON_PMUCGU_DIG_SELECT_SHIFT)) & SYSCON_ATB_CONFIG_MON_PMUCGU_DIG_SELECT_MASK)

#define SYSCON_ATB_CONFIG_MON_PMUCGU_LDO_CGU_SELECT_MASK (0xE0U)
#define SYSCON_ATB_CONFIG_MON_PMUCGU_LDO_CGU_SELECT_SHIFT (5U)
/*! mon_pmucgu_ldo_cgu_select - Selection of mon_pmucgu_ldo_cgu_select for the atb bus */
#define SYSCON_ATB_CONFIG_MON_PMUCGU_LDO_CGU_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_ATB_CONFIG_MON_PMUCGU_LDO_CGU_SELECT_SHIFT)) & SYSCON_ATB_CONFIG_MON_PMUCGU_LDO_CGU_SELECT_MASK)

#define SYSCON_ATB_CONFIG_MON_PMUCGU_MEM_SELECT_MASK (0x700U)
#define SYSCON_ATB_CONFIG_MON_PMUCGU_MEM_SELECT_SHIFT (8U)
/*! mon_pmucgu_mem_select - Selection of mon_pmucgu_mem_select for the atb bus */
#define SYSCON_ATB_CONFIG_MON_PMUCGU_MEM_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_ATB_CONFIG_MON_PMUCGU_MEM_SELECT_SHIFT)) & SYSCON_ATB_CONFIG_MON_PMUCGU_MEM_SELECT_MASK)

#define SYSCON_ATB_CONFIG_MON_PMUCGU_SUP_MON_SELECT_MASK (0x1800U)
#define SYSCON_ATB_CONFIG_MON_PMUCGU_SUP_MON_SELECT_SHIFT (11U)
/*! mon_pmucgu_sup_mon_select - Selection of mon_pmucgu_sup_mon_select for the atb bus */
#define SYSCON_ATB_CONFIG_MON_PMUCGU_SUP_MON_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_ATB_CONFIG_MON_PMUCGU_SUP_MON_SELECT_SHIFT)) & SYSCON_ATB_CONFIG_MON_PMUCGU_SUP_MON_SELECT_MASK)

#define SYSCON_ATB_CONFIG_MON_PMUCGU_FRO_SELECT_MASK (0x6000U)
#define SYSCON_ATB_CONFIG_MON_PMUCGU_FRO_SELECT_SHIFT (13U)
/*! mon_pmucgu_fro_select - Selection of mon_pmucgu_fro_select for the atb bus */
#define SYSCON_ATB_CONFIG_MON_PMUCGU_FRO_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_ATB_CONFIG_MON_PMUCGU_FRO_SELECT_SHIFT)) & SYSCON_ATB_CONFIG_MON_PMUCGU_FRO_SELECT_MASK)

#define SYSCON_ATB_CONFIG_MON_PMUCGU_PLL_SELECT_MASK (0x38000U)
#define SYSCON_ATB_CONFIG_MON_PMUCGU_PLL_SELECT_SHIFT (15U)
/*! mon_pmucgu_pll_select - Selection of mon_pmucgu_pll_select for the atb bus */
#define SYSCON_ATB_CONFIG_MON_PMUCGU_PLL_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_ATB_CONFIG_MON_PMUCGU_PLL_SELECT_SHIFT)) & SYSCON_ATB_CONFIG_MON_PMUCGU_PLL_SELECT_MASK)

#define SYSCON_ATB_CONFIG_SIG_LDO_ANA_LOAD_SELECT_MASK (0xC0000U)
#define SYSCON_ATB_CONFIG_SIG_LDO_ANA_LOAD_SELECT_SHIFT (18U)
/*! sig_ldo_ana_load_select - Selection of sig_ldo_ana_load_select for the atb bus */
#define SYSCON_ATB_CONFIG_SIG_LDO_ANA_LOAD_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_ATB_CONFIG_SIG_LDO_ANA_LOAD_SELECT_SHIFT)) & SYSCON_ATB_CONFIG_SIG_LDO_ANA_LOAD_SELECT_MASK)

#define SYSCON_ATB_CONFIG_SIG_LDO_MIC_LOAD_SELECT_MASK (0x300000U)
#define SYSCON_ATB_CONFIG_SIG_LDO_MIC_LOAD_SELECT_SHIFT (20U)
/*! sig_ldo_mic_load_select - Selection of sig_ldo_mic_load_select for the atb bus */
#define SYSCON_ATB_CONFIG_SIG_LDO_MIC_LOAD_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_ATB_CONFIG_SIG_LDO_MIC_LOAD_SELECT_SHIFT)) & SYSCON_ATB_CONFIG_SIG_LDO_MIC_LOAD_SELECT_MASK)
/*! @} */

/*! @name CRACKDET_CFG - Write the functional input of the crack detect */
/*! @{ */

#define SYSCON_CRACKDET_CFG_INPUT_MASK           (0x1U)
#define SYSCON_CRACKDET_CFG_INPUT_SHIFT          (0U)
/*! input - Write the functional input of the crack detect */
#define SYSCON_CRACKDET_CFG_INPUT(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_CRACKDET_CFG_INPUT_SHIFT)) & SYSCON_CRACKDET_CFG_INPUT_MASK)
/*! @} */

/*! @name CRACKDET_STATUS - This register stores the tap outputs from each corner of the crack detect. */
/*! @{ */

#define SYSCON_CRACKDET_STATUS_UL_MASK           (0x1U)
#define SYSCON_CRACKDET_STATUS_UL_SHIFT          (0U)
/*! UL - Upper Left tap output */
#define SYSCON_CRACKDET_STATUS_UL(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_CRACKDET_STATUS_UL_SHIFT)) & SYSCON_CRACKDET_STATUS_UL_MASK)

#define SYSCON_CRACKDET_STATUS_UR_MASK           (0x2U)
#define SYSCON_CRACKDET_STATUS_UR_SHIFT          (1U)
/*! UR - Upper Right tap output */
#define SYSCON_CRACKDET_STATUS_UR(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_CRACKDET_STATUS_UR_SHIFT)) & SYSCON_CRACKDET_STATUS_UR_MASK)

#define SYSCON_CRACKDET_STATUS_LL_MASK           (0x4U)
#define SYSCON_CRACKDET_STATUS_LL_SHIFT          (2U)
/*! LL - Lower Left tap output */
#define SYSCON_CRACKDET_STATUS_LL(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_CRACKDET_STATUS_LL_SHIFT)) & SYSCON_CRACKDET_STATUS_LL_MASK)

#define SYSCON_CRACKDET_STATUS_LR_MASK           (0x8U)
#define SYSCON_CRACKDET_STATUS_LR_SHIFT          (3U)
/*! LR - Lower Right tap output */
#define SYSCON_CRACKDET_STATUS_LR(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_CRACKDET_STATUS_LR_SHIFT)) & SYSCON_CRACKDET_STATUS_LR_MASK)
/*! @} */

/*! @name REDUNDANCYPROTECTION - Cosmic Ray Protection Configuration */
/*! @{ */

#define SYSCON_REDUNDANCYPROTECTION_RESETEN_MASK (0x1U)
#define SYSCON_REDUNDANCYPROTECTION_RESETEN_SHIFT (0U)
/*! ResetEn - Configure effect of redundancy error
 *  0b0..Redundancy error will create an interrupt
 *  0b1..Redundancy error will create warm reset
 */
#define SYSCON_REDUNDANCYPROTECTION_RESETEN(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_REDUNDANCYPROTECTION_RESETEN_SHIFT)) & SYSCON_REDUNDANCYPROTECTION_RESETEN_MASK)
/*! @} */

/*! @name ISOLATION_CONFIG - Isolate bumps from test buffer */
/*! @{ */

#define SYSCON_ISOLATION_CONFIG_DBNC_MASK        (0x1U)
#define SYSCON_ISOLATION_CONFIG_DBNC_SHIFT       (0U)
/*! DBNC - Isolate DBNC pin from test buffer
 *  0b0..DBNC pin is isolated from test buffer
 *  0b1..DBNC pin is not isolated from test buffer
 */
#define SYSCON_ISOLATION_CONFIG_DBNC(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_ISOLATION_CONFIG_DBNC_SHIFT)) & SYSCON_ISOLATION_CONFIG_DBNC_MASK)

#define SYSCON_ISOLATION_CONFIG_EXT_PMIC_MASK    (0x2U)
#define SYSCON_ISOLATION_CONFIG_EXT_PMIC_SHIFT   (1U)
/*! EXT_PMIC - Isolate EXT_PMIC pin from test buffer
 *  0b0..EXT_PMIC pin is isolated from test buffer
 *  0b1..EXT_PMIC pin is not isolated from test buffer
 */
#define SYSCON_ISOLATION_CONFIG_EXT_PMIC(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_ISOLATION_CONFIG_EXT_PMIC_SHIFT)) & SYSCON_ISOLATION_CONFIG_EXT_PMIC_MASK)
/*! @} */

/*! @name EXT_PMIC_STATUS - EXT_PMIC status register */
/*! @{ */

#define SYSCON_EXT_PMIC_STATUS_PMRC_EXT_PMIC_MASK (0x1U)
#define SYSCON_EXT_PMIC_STATUS_PMRC_EXT_PMIC_SHIFT (0U)
/*! PMRC_EXT_PMIC - EXT_PMIC pmrc value */
#define SYSCON_EXT_PMIC_STATUS_PMRC_EXT_PMIC(x)  (((uint32_t)(((uint32_t)(x)) << SYSCON_EXT_PMIC_STATUS_PMRC_EXT_PMIC_SHIFT)) & SYSCON_EXT_PMIC_STATUS_PMRC_EXT_PMIC_MASK)
/*! @} */

/*! @name I2C_FILTER_SWM0 - Register to control the usage of the filter for i2c for swm bank 0 */
/*! @{ */

#define SYSCON_I2C_FILTER_SWM0_SWM_0_00_ENABLE_MASK (0x1U)
#define SYSCON_I2C_FILTER_SWM0_SWM_0_00_ENABLE_SHIFT (0U)
/*! swm_0_00_enable - Enables filter used for i2c for pad swm_0_00 */
#define SYSCON_I2C_FILTER_SWM0_SWM_0_00_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM0_SWM_0_00_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM0_SWM_0_00_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM0_SWM_0_00_CONFIG_MASK (0x2U)
#define SYSCON_I2C_FILTER_SWM0_SWM_0_00_CONFIG_SHIFT (1U)
/*! swm_0_00_config - Configure filter used for i2c for pad swm_0_00
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM0_SWM_0_00_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM0_SWM_0_00_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM0_SWM_0_00_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM0_SWM_0_01_ENABLE_MASK (0x4U)
#define SYSCON_I2C_FILTER_SWM0_SWM_0_01_ENABLE_SHIFT (2U)
/*! swm_0_01_enable - Enables filter used for i2c for pad swm_0_01 */
#define SYSCON_I2C_FILTER_SWM0_SWM_0_01_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM0_SWM_0_01_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM0_SWM_0_01_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM0_SWM_0_01_CONFIG_MASK (0x8U)
#define SYSCON_I2C_FILTER_SWM0_SWM_0_01_CONFIG_SHIFT (3U)
/*! swm_0_01_config - Configure filter used for i2c for pad swm_0_01
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM0_SWM_0_01_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM0_SWM_0_01_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM0_SWM_0_01_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM0_SWM_0_02_ENABLE_MASK (0x10U)
#define SYSCON_I2C_FILTER_SWM0_SWM_0_02_ENABLE_SHIFT (4U)
/*! swm_0_02_enable - Enables filter used for i2c for pad swm_0_02 */
#define SYSCON_I2C_FILTER_SWM0_SWM_0_02_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM0_SWM_0_02_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM0_SWM_0_02_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM0_SWM_0_02_CONFIG_MASK (0x20U)
#define SYSCON_I2C_FILTER_SWM0_SWM_0_02_CONFIG_SHIFT (5U)
/*! swm_0_02_config - Configure filter used for i2c for pad swm_0_02
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM0_SWM_0_02_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM0_SWM_0_02_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM0_SWM_0_02_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM0_SWM_0_03_ENABLE_MASK (0x40U)
#define SYSCON_I2C_FILTER_SWM0_SWM_0_03_ENABLE_SHIFT (6U)
/*! swm_0_03_enable - Enables filter used for i2c for pad swm_0_03 */
#define SYSCON_I2C_FILTER_SWM0_SWM_0_03_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM0_SWM_0_03_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM0_SWM_0_03_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM0_SWM_0_03_CONFIG_MASK (0x80U)
#define SYSCON_I2C_FILTER_SWM0_SWM_0_03_CONFIG_SHIFT (7U)
/*! swm_0_03_config - Configure filter used for i2c for pad swm_0_03
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM0_SWM_0_03_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM0_SWM_0_03_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM0_SWM_0_03_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM0_SWM_0_04_ENABLE_MASK (0x100U)
#define SYSCON_I2C_FILTER_SWM0_SWM_0_04_ENABLE_SHIFT (8U)
/*! swm_0_04_enable - Enables filter used for i2c for pad swm_0_04 */
#define SYSCON_I2C_FILTER_SWM0_SWM_0_04_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM0_SWM_0_04_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM0_SWM_0_04_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM0_SWM_0_04_CONFIG_MASK (0x200U)
#define SYSCON_I2C_FILTER_SWM0_SWM_0_04_CONFIG_SHIFT (9U)
/*! swm_0_04_config - Configure filter used for i2c for pad swm_0_04
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM0_SWM_0_04_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM0_SWM_0_04_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM0_SWM_0_04_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM0_SWM_0_05_ENABLE_MASK (0x400U)
#define SYSCON_I2C_FILTER_SWM0_SWM_0_05_ENABLE_SHIFT (10U)
/*! swm_0_05_enable - Enables filter used for i2c for pad swm_0_05 */
#define SYSCON_I2C_FILTER_SWM0_SWM_0_05_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM0_SWM_0_05_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM0_SWM_0_05_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM0_SWM_0_05_CONFIG_MASK (0x800U)
#define SYSCON_I2C_FILTER_SWM0_SWM_0_05_CONFIG_SHIFT (11U)
/*! swm_0_05_config - Configure filter used for i2c for pad swm_0_05
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM0_SWM_0_05_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM0_SWM_0_05_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM0_SWM_0_05_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM0_SWM_0_06_ENABLE_MASK (0x1000U)
#define SYSCON_I2C_FILTER_SWM0_SWM_0_06_ENABLE_SHIFT (12U)
/*! swm_0_06_enable - Enables filter used for i2c for pad swm_0_06 */
#define SYSCON_I2C_FILTER_SWM0_SWM_0_06_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM0_SWM_0_06_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM0_SWM_0_06_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM0_SWM_0_06_CONFIG_MASK (0x2000U)
#define SYSCON_I2C_FILTER_SWM0_SWM_0_06_CONFIG_SHIFT (13U)
/*! swm_0_06_config - Configure filter used for i2c for pad swm_0_06
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM0_SWM_0_06_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM0_SWM_0_06_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM0_SWM_0_06_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM0_SWM_0_07_ENABLE_MASK (0x4000U)
#define SYSCON_I2C_FILTER_SWM0_SWM_0_07_ENABLE_SHIFT (14U)
/*! swm_0_07_enable - Enables filter used for i2c for pad swm_0_07 */
#define SYSCON_I2C_FILTER_SWM0_SWM_0_07_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM0_SWM_0_07_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM0_SWM_0_07_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM0_SWM_0_07_CONFIG_MASK (0x8000U)
#define SYSCON_I2C_FILTER_SWM0_SWM_0_07_CONFIG_SHIFT (15U)
/*! swm_0_07_config - Configure filter used for i2c for pad swm_0_07
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM0_SWM_0_07_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM0_SWM_0_07_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM0_SWM_0_07_CONFIG_MASK)
/*! @} */

/*! @name I2C_FILTER_SWM1 - Register to control the usage of the filter for i2c for swm bank 1 */
/*! @{ */

#define SYSCON_I2C_FILTER_SWM1_SWM_1_00_ENABLE_MASK (0x1U)
#define SYSCON_I2C_FILTER_SWM1_SWM_1_00_ENABLE_SHIFT (0U)
/*! swm_1_00_enable - Enables filter used for i2c for pad swm_1_00 */
#define SYSCON_I2C_FILTER_SWM1_SWM_1_00_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM1_SWM_1_00_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM1_SWM_1_00_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM1_SWM_1_00_CONFIG_MASK (0x2U)
#define SYSCON_I2C_FILTER_SWM1_SWM_1_00_CONFIG_SHIFT (1U)
/*! swm_1_00_config - Configure filter used for i2c for pad swm_1_00
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM1_SWM_1_00_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM1_SWM_1_00_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM1_SWM_1_00_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM1_SWM_1_01_ENABLE_MASK (0x4U)
#define SYSCON_I2C_FILTER_SWM1_SWM_1_01_ENABLE_SHIFT (2U)
/*! swm_1_01_enable - Enables filter used for i2c for pad swm_1_01 */
#define SYSCON_I2C_FILTER_SWM1_SWM_1_01_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM1_SWM_1_01_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM1_SWM_1_01_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM1_SWM_1_01_CONFIG_MASK (0x8U)
#define SYSCON_I2C_FILTER_SWM1_SWM_1_01_CONFIG_SHIFT (3U)
/*! swm_1_01_config - Configure filter used for i2c for pad swm_1_01
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM1_SWM_1_01_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM1_SWM_1_01_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM1_SWM_1_01_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM1_SWM_1_02_ENABLE_MASK (0x10U)
#define SYSCON_I2C_FILTER_SWM1_SWM_1_02_ENABLE_SHIFT (4U)
/*! swm_1_02_enable - Enables filter used for i2c for pad swm_1_02 */
#define SYSCON_I2C_FILTER_SWM1_SWM_1_02_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM1_SWM_1_02_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM1_SWM_1_02_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM1_SWM_1_02_CONFIG_MASK (0x20U)
#define SYSCON_I2C_FILTER_SWM1_SWM_1_02_CONFIG_SHIFT (5U)
/*! swm_1_02_config - Configure filter used for i2c for pad swm_1_02
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM1_SWM_1_02_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM1_SWM_1_02_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM1_SWM_1_02_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM1_SWM_1_03_ENABLE_MASK (0x40U)
#define SYSCON_I2C_FILTER_SWM1_SWM_1_03_ENABLE_SHIFT (6U)
/*! swm_1_03_enable - Enables filter used for i2c for pad swm_1_03 */
#define SYSCON_I2C_FILTER_SWM1_SWM_1_03_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM1_SWM_1_03_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM1_SWM_1_03_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM1_SWM_1_03_CONFIG_MASK (0x80U)
#define SYSCON_I2C_FILTER_SWM1_SWM_1_03_CONFIG_SHIFT (7U)
/*! swm_1_03_config - Configure filter used for i2c for pad swm_1_03
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM1_SWM_1_03_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM1_SWM_1_03_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM1_SWM_1_03_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM1_SWM_1_04_ENABLE_MASK (0x100U)
#define SYSCON_I2C_FILTER_SWM1_SWM_1_04_ENABLE_SHIFT (8U)
/*! swm_1_04_enable - Enables filter used for i2c for pad swm_1_04 */
#define SYSCON_I2C_FILTER_SWM1_SWM_1_04_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM1_SWM_1_04_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM1_SWM_1_04_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM1_SWM_1_04_CONFIG_MASK (0x200U)
#define SYSCON_I2C_FILTER_SWM1_SWM_1_04_CONFIG_SHIFT (9U)
/*! swm_1_04_config - Configure filter used for i2c for pad swm_1_04
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM1_SWM_1_04_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM1_SWM_1_04_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM1_SWM_1_04_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM1_SWM_1_05_ENABLE_MASK (0x400U)
#define SYSCON_I2C_FILTER_SWM1_SWM_1_05_ENABLE_SHIFT (10U)
/*! swm_1_05_enable - Enables filter used for i2c for pad swm_1_05 */
#define SYSCON_I2C_FILTER_SWM1_SWM_1_05_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM1_SWM_1_05_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM1_SWM_1_05_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM1_SWM_1_05_CONFIG_MASK (0x800U)
#define SYSCON_I2C_FILTER_SWM1_SWM_1_05_CONFIG_SHIFT (11U)
/*! swm_1_05_config - Configure filter used for i2c for pad swm_1_05
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM1_SWM_1_05_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM1_SWM_1_05_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM1_SWM_1_05_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM1_SWM_1_06_ENABLE_MASK (0x1000U)
#define SYSCON_I2C_FILTER_SWM1_SWM_1_06_ENABLE_SHIFT (12U)
/*! swm_1_06_enable - Enables filter used for i2c for pad swm_1_06 */
#define SYSCON_I2C_FILTER_SWM1_SWM_1_06_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM1_SWM_1_06_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM1_SWM_1_06_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM1_SWM_1_06_CONFIG_MASK (0x2000U)
#define SYSCON_I2C_FILTER_SWM1_SWM_1_06_CONFIG_SHIFT (13U)
/*! swm_1_06_config - Configure filter used for i2c for pad swm_1_06
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM1_SWM_1_06_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM1_SWM_1_06_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM1_SWM_1_06_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM1_SWM_1_07_ENABLE_MASK (0x4000U)
#define SYSCON_I2C_FILTER_SWM1_SWM_1_07_ENABLE_SHIFT (14U)
/*! swm_1_07_enable - Enables filter used for i2c for pad swm_1_07 */
#define SYSCON_I2C_FILTER_SWM1_SWM_1_07_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM1_SWM_1_07_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM1_SWM_1_07_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM1_SWM_1_07_CONFIG_MASK (0x8000U)
#define SYSCON_I2C_FILTER_SWM1_SWM_1_07_CONFIG_SHIFT (15U)
/*! swm_1_07_config - Configure filter used for i2c for pad swm_1_07
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM1_SWM_1_07_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM1_SWM_1_07_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM1_SWM_1_07_CONFIG_MASK)
/*! @} */

/*! @name I2C_FILTER_SWM2 - Register to control the usage of the filter for i2c for swm bank 2 */
/*! @{ */

#define SYSCON_I2C_FILTER_SWM2_SWM_2_06_ENABLE_MASK (0x1U)
#define SYSCON_I2C_FILTER_SWM2_SWM_2_06_ENABLE_SHIFT (0U)
/*! swm_2_06_enable - Enables filter used for i2c for pad swm_2_06 */
#define SYSCON_I2C_FILTER_SWM2_SWM_2_06_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM2_SWM_2_06_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM2_SWM_2_06_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM2_SWM_2_06_CONFIG_MASK (0x2U)
#define SYSCON_I2C_FILTER_SWM2_SWM_2_06_CONFIG_SHIFT (1U)
/*! swm_2_06_config - Configure filter used for i2c for pad swm_2_06
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM2_SWM_2_06_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM2_SWM_2_06_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM2_SWM_2_06_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM2_SWM_2_07_ENABLE_MASK (0x4U)
#define SYSCON_I2C_FILTER_SWM2_SWM_2_07_ENABLE_SHIFT (2U)
/*! swm_2_07_enable - Enables filter used for i2c for pad swm_2_07 */
#define SYSCON_I2C_FILTER_SWM2_SWM_2_07_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM2_SWM_2_07_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM2_SWM_2_07_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM2_SWM_2_07_CONFIG_MASK (0x8U)
#define SYSCON_I2C_FILTER_SWM2_SWM_2_07_CONFIG_SHIFT (3U)
/*! swm_2_07_config - Configure filter used for i2c for pad swm_2_07
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM2_SWM_2_07_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM2_SWM_2_07_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM2_SWM_2_07_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM2_SWM_2_08_ENABLE_MASK (0x10U)
#define SYSCON_I2C_FILTER_SWM2_SWM_2_08_ENABLE_SHIFT (4U)
/*! swm_2_08_enable - Enables filter used for i2c for pad swm_2_08 */
#define SYSCON_I2C_FILTER_SWM2_SWM_2_08_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM2_SWM_2_08_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM2_SWM_2_08_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM2_SWM_2_08_CONFIG_MASK (0x20U)
#define SYSCON_I2C_FILTER_SWM2_SWM_2_08_CONFIG_SHIFT (5U)
/*! swm_2_08_config - Configure filter used for i2c for pad swm_2_08
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM2_SWM_2_08_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM2_SWM_2_08_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM2_SWM_2_08_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM2_SWM_2_09_ENABLE_MASK (0x40U)
#define SYSCON_I2C_FILTER_SWM2_SWM_2_09_ENABLE_SHIFT (6U)
/*! swm_2_09_enable - Enables filter used for i2c for pad swm_2_09 */
#define SYSCON_I2C_FILTER_SWM2_SWM_2_09_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM2_SWM_2_09_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM2_SWM_2_09_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM2_SWM_2_09_CONFIG_MASK (0x80U)
#define SYSCON_I2C_FILTER_SWM2_SWM_2_09_CONFIG_SHIFT (7U)
/*! swm_2_09_config - Configure filter used for i2c for pad swm_2_09
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM2_SWM_2_09_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM2_SWM_2_09_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM2_SWM_2_09_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM2_SWM_2_10_ENABLE_MASK (0x100U)
#define SYSCON_I2C_FILTER_SWM2_SWM_2_10_ENABLE_SHIFT (8U)
/*! swm_2_10_enable - Enables filter used for i2c for pad swm_2_10 */
#define SYSCON_I2C_FILTER_SWM2_SWM_2_10_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM2_SWM_2_10_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM2_SWM_2_10_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM2_SWM_2_10_CONFIG_MASK (0x200U)
#define SYSCON_I2C_FILTER_SWM2_SWM_2_10_CONFIG_SHIFT (9U)
/*! swm_2_10_config - Configure filter used for i2c for pad swm_2_10
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM2_SWM_2_10_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM2_SWM_2_10_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM2_SWM_2_10_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM2_SWM_2_11_ENABLE_MASK (0x400U)
#define SYSCON_I2C_FILTER_SWM2_SWM_2_11_ENABLE_SHIFT (10U)
/*! swm_2_11_enable - Enables filter used for i2c for pad swm_2_11 */
#define SYSCON_I2C_FILTER_SWM2_SWM_2_11_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM2_SWM_2_11_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM2_SWM_2_11_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM2_SWM_2_11_CONFIG_MASK (0x800U)
#define SYSCON_I2C_FILTER_SWM2_SWM_2_11_CONFIG_SHIFT (11U)
/*! swm_2_11_config - Configure filter used for i2c for pad swm_2_11
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM2_SWM_2_11_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM2_SWM_2_11_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM2_SWM_2_11_CONFIG_MASK)
/*! @} */

/*! @name I2C_FILTER_SWM3 - Register to control the usage of the filter for i2c for swm bank 3 */
/*! @{ */

#define SYSCON_I2C_FILTER_SWM3_SWM_3_00_ENABLE_MASK (0x1U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_00_ENABLE_SHIFT (0U)
/*! swm_3_00_enable - Enables filter used for i2c for pad swm_3_00 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_00_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_00_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_00_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_00_CONFIG_MASK (0x2U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_00_CONFIG_SHIFT (1U)
/*! swm_3_00_config - Configure filter used for i2c for pad swm_3_00
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_00_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_00_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_00_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_01_ENABLE_MASK (0x4U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_01_ENABLE_SHIFT (2U)
/*! swm_3_01_enable - Enables filter used for i2c for pad swm_3_01 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_01_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_01_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_01_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_01_CONFIG_MASK (0x8U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_01_CONFIG_SHIFT (3U)
/*! swm_3_01_config - Configure filter used for i2c for pad swm_3_01
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_01_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_01_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_01_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_02_ENABLE_MASK (0x10U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_02_ENABLE_SHIFT (4U)
/*! swm_3_02_enable - Enables filter used for i2c for pad swm_3_02 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_02_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_02_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_02_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_02_CONFIG_MASK (0x20U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_02_CONFIG_SHIFT (5U)
/*! swm_3_02_config - Configure filter used for i2c for pad swm_3_02
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_02_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_02_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_02_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_03_ENABLE_MASK (0x40U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_03_ENABLE_SHIFT (6U)
/*! swm_3_03_enable - Enables filter used for i2c for pad swm_3_03 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_03_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_03_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_03_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_03_CONFIG_MASK (0x80U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_03_CONFIG_SHIFT (7U)
/*! swm_3_03_config - Configure filter used for i2c for pad swm_3_03
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_03_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_03_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_03_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_04_ENABLE_MASK (0x100U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_04_ENABLE_SHIFT (8U)
/*! swm_3_04_enable - Enables filter used for i2c for pad swm_3_04 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_04_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_04_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_04_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_04_CONFIG_MASK (0x200U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_04_CONFIG_SHIFT (9U)
/*! swm_3_04_config - Configure filter used for i2c for pad swm_3_04
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_04_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_04_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_04_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_05_ENABLE_MASK (0x400U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_05_ENABLE_SHIFT (10U)
/*! swm_3_05_enable - Enables filter used for i2c for pad swm_3_05 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_05_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_05_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_05_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_05_CONFIG_MASK (0x800U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_05_CONFIG_SHIFT (11U)
/*! swm_3_05_config - Configure filter used for i2c for pad swm_3_05
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_05_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_05_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_05_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_06_ENABLE_MASK (0x1000U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_06_ENABLE_SHIFT (12U)
/*! swm_3_06_enable - Enables filter used for i2c for pad swm_3_06 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_06_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_06_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_06_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_06_CONFIG_MASK (0x2000U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_06_CONFIG_SHIFT (13U)
/*! swm_3_06_config - Configure filter used for i2c for pad swm_3_06
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_06_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_06_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_06_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_07_ENABLE_MASK (0x4000U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_07_ENABLE_SHIFT (14U)
/*! swm_3_07_enable - Enables filter used for i2c for pad swm_3_07 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_07_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_07_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_07_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_07_CONFIG_MASK (0x8000U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_07_CONFIG_SHIFT (15U)
/*! swm_3_07_config - Configure filter used for i2c for pad swm_3_07
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_07_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_07_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_07_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_08_ENABLE_MASK (0x10000U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_08_ENABLE_SHIFT (16U)
/*! swm_3_08_enable - Enables filter used for i2c for pad swm_3_08 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_08_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_08_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_08_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_08_CONFIG_MASK (0x20000U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_08_CONFIG_SHIFT (17U)
/*! swm_3_08_config - Configure filter used for i2c for pad swm_3_08
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_08_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_08_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_08_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_09_ENABLE_MASK (0x40000U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_09_ENABLE_SHIFT (18U)
/*! swm_3_09_enable - Enables filter used for i2c for pad swm_3_09 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_09_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_09_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_09_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_09_CONFIG_MASK (0x80000U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_09_CONFIG_SHIFT (19U)
/*! swm_3_09_config - Configure filter used for i2c for pad swm_3_09
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_09_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_09_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_09_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_10_ENABLE_MASK (0x100000U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_10_ENABLE_SHIFT (20U)
/*! swm_3_10_enable - Enables filter used for i2c for pad swm_3_10 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_10_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_10_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_10_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_10_CONFIG_MASK (0x200000U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_10_CONFIG_SHIFT (21U)
/*! swm_3_10_config - Configure filter used for i2c for pad swm_3_10
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_10_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_10_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_10_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_11_ENABLE_MASK (0x400000U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_11_ENABLE_SHIFT (22U)
/*! swm_3_11_enable - Enables filter used for i2c for pad swm_3_11 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_11_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_11_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_11_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_11_CONFIG_MASK (0x800000U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_11_CONFIG_SHIFT (23U)
/*! swm_3_11_config - Configure filter used for i2c for pad swm_3_11
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_11_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_11_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_11_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_14_ENABLE_MASK (0x1000000U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_14_ENABLE_SHIFT (24U)
/*! swm_3_14_enable - Enables filter used for i2c for pad swm_3_14 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_14_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_14_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_14_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_14_CONFIG_MASK (0x2000000U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_14_CONFIG_SHIFT (25U)
/*! swm_3_14_config - Configure filter used for i2c for pad swm_3_14
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_14_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_14_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_14_CONFIG_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_15_ENABLE_MASK (0x4000000U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_15_ENABLE_SHIFT (26U)
/*! swm_3_15_enable - Enables filter used for i2c for pad swm_3_15 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_15_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_15_ENABLE_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_15_ENABLE_MASK)

#define SYSCON_I2C_FILTER_SWM3_SWM_3_15_CONFIG_MASK (0x8000000U)
#define SYSCON_I2C_FILTER_SWM3_SWM_3_15_CONFIG_SHIFT (27U)
/*! swm_3_15_config - Configure filter used for i2c for pad swm_3_15
 *  0b0..50ns filter enabled
 *  0b1..10ns filter enabled
 */
#define SYSCON_I2C_FILTER_SWM3_SWM_3_15_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_I2C_FILTER_SWM3_SWM_3_15_CONFIG_SHIFT)) & SYSCON_I2C_FILTER_SWM3_SWM_3_15_CONFIG_MASK)
/*! @} */

/*! @name TCB - TCB registers for OTP */
/*! @{ */

#define SYSCON_TCB_INTEST_NVM_MASK               (0x1U)
#define SYSCON_TCB_INTEST_NVM_SHIFT              (0U)
/*! intest_nvm - Enables LNVM test functionality */
#define SYSCON_TCB_INTEST_NVM(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_TCB_INTEST_NVM_SHIFT)) & SYSCON_TCB_INTEST_NVM_MASK)
/*! @} */

/*! @name PMRO_CONFIG_1 - First part of configuration */
/*! @{ */

#define SYSCON_PMRO_CONFIG_1_PMRO_RO_EN_MASK     (0x1FFFFFFU)
#define SYSCON_PMRO_CONFIG_1_PMRO_RO_EN_SHIFT    (0U)
/*! pmro_ro_en - Individual DUT RO enable for 25 DUTS. Multiple ROs can be selected together.
 *  0b0000000000000000000000000..Disable RO
 *  0b0000000000000000000000001..Enable RO
 */
#define SYSCON_PMRO_CONFIG_1_PMRO_RO_EN(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_PMRO_CONFIG_1_PMRO_RO_EN_SHIFT)) & SYSCON_PMRO_CONFIG_1_PMRO_RO_EN_MASK)
/*! @} */

/* The count of SYSCON_PMRO_CONFIG_1 */
#define SYSCON_PMRO_CONFIG_1_COUNT               (5U)

/*! @name PMRO_CONFIG_2 - Second part of configuration. */
/*! @{ */

#define SYSCON_PMRO_CONFIG_2_PMRO_RO_OUT_EN_MASK (0x1FFFFFFU)
#define SYSCON_PMRO_CONFIG_2_PMRO_RO_OUT_EN_SHIFT (0U)
/*! pmro_ro_out_en - Individual DUT RO clock out enable for 25 DUTS. Only 1 RO can be selected and observed.
 *  0b0000000000000000000000000..Disable RO output
 *  0b0000000000000000000000001..Selected RO output enabled
 */
#define SYSCON_PMRO_CONFIG_2_PMRO_RO_OUT_EN(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_PMRO_CONFIG_2_PMRO_RO_OUT_EN_SHIFT)) & SYSCON_PMRO_CONFIG_2_PMRO_RO_OUT_EN_MASK)

#define SYSCON_PMRO_CONFIG_2_PMRO_DIV_MASK       (0xE000000U)
#define SYSCON_PMRO_CONFIG_2_PMRO_DIV_SHIFT      (25U)
/*! pmro_div - Programmable divider bits
 *  0b000..Division factor 16
 *  0b001..Division factor 32
 *  0b010..Division factor 64
 *  0b011..Division factor 128
 *  0b100..Division factor 256
 *  0b101..Division factor 512
 *  0b110..Division factor 1024
 *  0b111..Division factor 2048
 */
#define SYSCON_PMRO_CONFIG_2_PMRO_DIV(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_PMRO_CONFIG_2_PMRO_DIV_SHIFT)) & SYSCON_PMRO_CONFIG_2_PMRO_DIV_MASK)
/*! @} */

/* The count of SYSCON_PMRO_CONFIG_2 */
#define SYSCON_PMRO_CONFIG_2_COUNT               (5U)

/*! @name PMRO_DGO_CONFIG - Configuration register */
/*! @{ */

#define SYSCON_PMRO_DGO_CONFIG_PMRO_RO_EN_MASK   (0xFU)
#define SYSCON_PMRO_DGO_CONFIG_PMRO_RO_EN_SHIFT  (0U)
/*! pmro_ro_en - Individual DUT RO enable for 4 DUTS. Multiple ROs can be selected together.
 *  0b0000..Disable RO
 *  0b0001..Enable RO
 */
#define SYSCON_PMRO_DGO_CONFIG_PMRO_RO_EN(x)     (((uint32_t)(((uint32_t)(x)) << SYSCON_PMRO_DGO_CONFIG_PMRO_RO_EN_SHIFT)) & SYSCON_PMRO_DGO_CONFIG_PMRO_RO_EN_MASK)

#define SYSCON_PMRO_DGO_CONFIG_PMRO_RO_OUT_EN_MASK (0xF0U)
#define SYSCON_PMRO_DGO_CONFIG_PMRO_RO_OUT_EN_SHIFT (4U)
/*! pmro_ro_out_en - Individual DUT RO clock out enable for 4 DUTS. Only 1 RO can be selected and observed.
 *  0b0000..Disable RO output
 *  0b0001..Selected RO output enabled
 */
#define SYSCON_PMRO_DGO_CONFIG_PMRO_RO_OUT_EN(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_PMRO_DGO_CONFIG_PMRO_RO_OUT_EN_SHIFT)) & SYSCON_PMRO_DGO_CONFIG_PMRO_RO_OUT_EN_MASK)

#define SYSCON_PMRO_DGO_CONFIG_PMRO_DIV_MASK     (0x700U)
#define SYSCON_PMRO_DGO_CONFIG_PMRO_DIV_SHIFT    (8U)
/*! pmro_div - Programmable divider bits
 *  0b000..Division factor 16
 *  0b001..Division factor 32
 *  0b010..Division factor 64
 *  0b011..Division factor 128
 *  0b100..Division factor 256
 *  0b101..Division factor 512
 *  0b110..Division factor 1024
 *  0b111..Division factor 2048
 */
#define SYSCON_PMRO_DGO_CONFIG_PMRO_DIV(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_PMRO_DGO_CONFIG_PMRO_DIV_SHIFT)) & SYSCON_PMRO_DGO_CONFIG_PMRO_DIV_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group SYSCON_Register_Masks */


/*!
 * @}
 */ /* end of group SYSCON_Peripheral_Access_Layer */


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


#endif  /* PERI_SYSCON_H_ */

