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
**         CMSIS Peripheral Access Layer for PMRC
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
 * @file PERI_PMRC.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for PMRC
 *
 * CMSIS Peripheral Access Layer for PMRC
 */

#if !defined(PERI_PMRC_H_)
#define PERI_PMRC_H_                             /**< Symbol preventing repeated inclusion */

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
   -- PMRC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PMRC_Peripheral_Access_Layer PMRC Peripheral Access Layer
 * @{
 */

/** PMRC - Register Layout Typedef */
typedef struct {
  __IO uint32_t EXTRESETENABLE1;                   /**< Semi-Persistent register.<br>Enable external reset detection on IO pin(s).<br>Register is effectively written when corresponding bit in Transfer register is read low, offset: 0x0 */
  __IO uint32_t EXTRESETENABLE2;                   /**< Semi-Persistent register.<br>Enable external reset detection on IO pin(s).<br>Register is effectively written when corresponding bit in Transfer register is read low, offset: 0x4 */
  __IO uint32_t EXTRESETPOLARITY1;                 /**< Semi-Persistent register.<br>Select external reset polarity for IO pin(s).<br>Register is effectively written when corresponding bit in Transfer register is read low, offset: 0x8 */
  __IO uint32_t EXTRESETPOLARITY2;                 /**< Semi-Persistent register.<br>Select external reset polarity for IO pin(s).<br>Register is effectively written when corresponding bit in Transfer register is read low, offset: 0xC */
  __I  uint32_t RESETCAUSE1;                       /**< Persistent register. Read the first part of the reset causes, offset: 0x10 */
  __I  uint32_t RESETCAUSE2;                       /**< Persistent register.<br>Read the second part of the reset causes.<br>Note that a power failure during startup state read_otp will be logged in this register (bit 0 and/or bit 1) but will not trigger a chip reset, offset: 0x14 */
  __I  uint32_t RESETCAUSE3;                       /**< Persistent register.<br>Read the third part of the reset causes., offset: 0x18 */
  __O  uint32_t RESETCAUSECLEAR;                   /**< Command to clear both the entire ResetCause1, ResetCause2 and ResetCause3 register, offset: 0x1C */
  __IO uint32_t DCDCDIGCONTROL;                    /**< Configure the VDIG DCDC.<br>Register is effectively written when vdig_busy bit in Transfer register is read low.<br>Writing this register triggers an active to pmu_configure state transition., offset: 0x20 */
  __IO uint32_t DCDCDIGRATIO;                      /**< Ratio setting for DCDC DIG (VDD_DIG).<br>Register is effectively written when vdig_busy bit in Transfer register is read low, offset: 0x24 */
  __I  uint32_t DCDCDIGRATIOCOUNTER;               /**< Ratio Counter for DCDC DIG (VDD_DIG), offset: 0x28 */
  __IO uint32_t DCDCDIGRATIOTHRESHOLD;             /**< VDD Ratio Thresholds setting for DCDC DIG (VDD_DIG)., offset: 0x2C */
  __IO uint32_t DCDCDIGRATIOCONTROL1;              /**< Up and down ratio control register for DCDC DIG (VDD_DIG), offset: 0x30 */
  __IO uint32_t DCDCDIGRATIOCONTROL2;              /**< Control register for sampling windows of DCDC DIG (VDD_DIG).<br>Register is effectively written when vdig_busy bit in Transfer register is read low, offset: 0x34 */
  __IO uint32_t DCDCDIGRATIOCONTROL3;              /**< Up thresholds control register for DCDC DIG (VDD_DIG).<br>Register is effectively written when vdig_busy bit in Transfer register is read low, offset: 0x38 */
  __IO uint32_t DCDCDIGRATIOCONTROL4;              /**< Down thresholds control register for DCDC DIG (VDD_DIG).<br>Register is effectively written when vdig_busy bit in Transfer register is read low, offset: 0x3C */
  __IO uint32_t DCDCMEMCONTROL;                    /**< Configure the VMEM DCDC.<br>Register is effectively written when vdig_busy bit in Transfer register is read low.<br>Writing this register triggers an active to pmu_configure state transition., offset: 0x40 */
  __IO uint32_t DCDCMEMRATIO;                      /**< Ratio setting for DCDC MEM (VDD_MEM).<br>Register is effectively written when vdig_busy bit in Transfer register is read low, offset: 0x44 */
  __I  uint32_t DCDCMEMRATIOCOUNTER;               /**< Ratio Counter for DCDC MEM (VDD_MEM), offset: 0x48 */
  __IO uint32_t DCDCMEMRATIOTHRESHOLD;             /**< VDD Ratio Thresholds setting for DCDC MEM (VDD_MEM)., offset: 0x4C */
  __IO uint32_t DCDCMEMRATIOCONTROL1;              /**< Up and down ratio control register for DCDC MEM (VDD_MEM), offset: 0x50 */
  __IO uint32_t DCDCMEMRATIOCONTROL2;              /**< Control register for sampling windows of DCDC MEM (VDD_MEM).<br>Register is effectively written when vdig_busy bit in Transfer register is read low, offset: 0x54 */
  __IO uint32_t DCDCMEMRATIOCONTROL3;              /**< Up thresholds control register for DCDC MEM (VDD_MEM).<br>Register is effectively written when vdig_busy bit in Transfer register is read low, offset: 0x58 */
  __IO uint32_t DCDCMEMRATIOCONTROL4;              /**< Down thresholds control register for DCDC MEM (VDD_MEM).<br>Register is effectively written when vdig_busy bit in Transfer register is read low, offset: 0x5C */
  __IO uint32_t LDOCONTROL;                        /**< Configure the LDO ANA and CGU regulators, offset: 0x60 */
  __IO uint32_t LDOMEMCONTROL;                     /**< Persistent register.<br>Control for MEM LDO.<br>Register is effectively written when corresponding bit in Transfer register is read low, offset: 0x64 */
  __IO uint32_t CALIBRATIONCONTROL;                /**< Semi-Persistent register.<br>Control Calibration settings.<br>Register is effectively written when corresponding bit in Transfer register is read low, offset: 0x68 */
  __IO uint32_t VREFBIAS;                          /**< Control of LDO references and bias settings, offset: 0x6C */
  __IO uint32_t TIMERCONTROL;                      /**< Configure the LF-Timer & FSM-Timer for PMRC ACTIVE mode operation, offset: 0x70 */
  __IO uint32_t LFTIMERUSERDELAY;                  /**< Persistent register.<br>Define the LF-Timer period.<br>Register is effectively written when corresponding bit in Transfer register is read low, offset: 0x74 */
  __IO uint32_t FSMTIMERPMUDELAY;                  /**< Define the PMU configure settling time, offset: 0x78 */
  __IO uint32_t FSMTIMERRSTDELAY;                  /**< Define the warm reset settling time, offset: 0x7C */
  __I  uint32_t LFTIMERUSERVALUE;                  /**< Persistent register.<br> LF-Timer current value., offset: 0x80 */
  __IO uint32_t MODECONTROL;                       /**< Control of the PMRC FSM, offset: 0x84 */
  __I  uint32_t STATUS;                            /**< Read status of the PMRC FSM, offset: 0x88 */
  __I  uint32_t PMUSTATUS;                         /**< Read status of PMU (DCDC regulators, LDOs and supply monitors), offset: 0x8C */
  __IO uint32_t POWERDOWNSAFE1;                    /**< Persistent register.<br>PowerDown-safe register 1.<br>Register is effectively written when corresponding bit in Transfer register is read low, offset: 0x90 */
  __IO uint32_t POWERDOWNSAFE2;                    /**< Persistent register.<br>PowerDown-safe register 2.<br>Register is effectively written when corresponding bit in Transfer register is read low, offset: 0x94 */
  __IO uint32_t POWERFAILCONFIG;                   /**< Semi-Persistent register.<br>Control of the PMRC FSM behavior when a power failure is detected.<br>Register is effectively written when corresponding bit in Transfer register is read low, offset: 0x98 */
  __IO uint32_t SUPMON;                            /**< VDD and VDD_IOs value and Enables for Supply Monitors.<br>Enable control of DCDC ratio counter DMA, offset: 0x9C */
       uint8_t RESERVED_0[4];
  __IO uint32_t ROMCTRL;                           /**< Control of PowerDown mode and EMA of CTRLSS CM55 ROM, offset: 0xA4 */
  __IO uint32_t CTRLSSCM55RAMACTIVE;               /**< Non-Persistent register.<br> Control of CTRLSS CM55 RAM. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low., offset: 0xA8 */
  __IO uint32_t CTRLSSCM55CACHEACTIVE;             /**< Non-Persistent register.<br> Control of CTRLSS CM55 Cache. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low., offset: 0xAC */
  __IO uint32_t CTRLSSCM55PKCOTPACTIVE;            /**< Non-Persistent register.<br> Control of CTRLSS CM55 OTP and PKC ram. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low., offset: 0xB0 */
  __IO uint32_t NSSAXIXSPACTIVE;                   /**< Non-Persistent register.<br> Control of NSS RAM. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low., offset: 0xB4 */
  __IO uint32_t NSSCM55CACHEACTIVE;                /**< Non-Persistent register.<br> Control of NSS CM55 Cache. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low., offset: 0xB8 */
  __IO uint32_t NSSDNNRAM01ACTIVE;                 /**< Non-Persistent register.<br> Control of NSS DNN RAM 00-17. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low., offset: 0xBC */
  __IO uint32_t NSSDNNRAM23ACTIVE;                 /**< Non-Persistent register.<br> Control of NSS DNN RAM 20-37. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low., offset: 0xC0 */
  __IO uint32_t NSSDNNRAM4ACTIVE;                  /**< Non-Persistent register.<br> Control of NSS DNN RAM 40-47. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low., offset: 0xC4 */
  __IO uint32_t ADSSPRAM01ACTIVE;                  /**< Non-Persistent register.<br> Control of ADSS PRAM 00-15. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low., offset: 0xC8 */
  __IO uint32_t ADSSPRAM2ACTIVE;                   /**< Non-Persistent register.<br> Control of ADSS PRAM 20-27. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low., offset: 0xCC */
  __IO uint32_t ADSSXRAMACTIVE;                    /**< Non-Persistent register.<br> Control of ADSS XRAM 0-15. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low., offset: 0xD0 */
  __IO uint32_t ADSSYRAMMISCACTIVE;                /**< Non-Persistent register.<br> Control of ADSS XRAM 0-15. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low., offset: 0xD4 */
  __IO uint32_t CTRLSSCM55RAMLP;                   /**< Non-Persistent register.<br> Control of CTRLSS CM55 RAM, used when Pindus is in deep-sleep or power-down., offset: 0xD8 */
  __IO uint32_t CTRLSSCM55CACHELP;                 /**< Non-Persistent register.<br> Control of CTRLSS CM55 Cache, used when Pindus is in deep-sleep or power-down., offset: 0xDC */
  __IO uint32_t CTRLSSCM55PKCOTPLP;                /**< Non-Persistent register.<br> Control of CTRLSS CM55 OTP and PKC ram, used when Pindus is in deep-sleep or power-down., offset: 0xE0 */
  __IO uint32_t NSSAXIXSPLP;                       /**< Non-Persistent register.<br> Control of NSS RAM, used when Pindus is in deep-sleep or power-down., offset: 0xE4 */
  __IO uint32_t NSSCM55CACHELP;                    /**< Non-Persistent register.<br> Control of NSS CM55 Cache, used when Pindus is in deep-sleep or power-down., offset: 0xE8 */
  __IO uint32_t NSSDNNRAM01LP;                     /**< Non-Persistent register.<br> Control of NSS DNN RAM 00-17, used when Pindus is in deep-sleep or power-down., offset: 0xEC */
  __IO uint32_t NSSDNNRAM23LP;                     /**< Non-Persistent register.<br> Control of NSS DNN RAM 20-37, used when Pindus is in deep-sleep or power-down., offset: 0xF0 */
  __IO uint32_t NSSDNNRAM4LP;                      /**< Non-Persistent register.<br> Control of NSS DNN RAM 40-47, used when Pindus is in deep-sleep or power-down., offset: 0xF4 */
  __IO uint32_t ADSSPRAM01LP;                      /**< Non-Persistent register.<br> Control of ADSS PRAM 00-15, used when Pindus is in deep-sleep or power-down., offset: 0xF8 */
  __IO uint32_t ADSSPRAM2LP;                       /**< Non-Persistent register.<br> Control of ADSS PRAM 20-27, used when Pindus is in deep-sleep or power-down., offset: 0xFC */
  __IO uint32_t ADSSXRAMLP;                        /**< Non-Persistent register.<br> Control of ADSS XRAM 0-15, used when Pindus is in deep-sleep or power-down., offset: 0x100 */
  __IO uint32_t ADSSYRAMMISCLP;                    /**< Non-Persistent register.<br> Control of ADSS XRAM 0-15, used when Pindus is in deep-sleep or power-down., offset: 0x104 */
  __IO uint32_t MEMORYLPCONTROL;                   /**< Non-Persistent register.<br> Control of memory in active (static or dynamic)., offset: 0x108 */
  __IO uint32_t TAMPERCTRL;                        /**< Persistent register.<br> Control of tamper detection module., offset: 0x10C */
  __IO uint32_t SECUREKEY0;                        /**< Persistent register.<br> 4-bytes security key, offset: 0x110 */
  __IO uint32_t SECUREKEY1;                        /**< Persistent register.<br> 4-bytes security key, offset: 0x114 */
  __IO uint32_t SECUREKEY2;                        /**< Persistent register.<br> 4-bytes security key, offset: 0x118 */
  __IO uint32_t SECUREKEY3;                        /**< Persistent register.<br> 4-bytes security key, offset: 0x11C */
  __IO uint32_t SECUREKEY4;                        /**< Persistent register.<br> 4-bytes security key, offset: 0x120 */
  __IO uint32_t SECUREKEY5;                        /**< Persistent register.<br> 4-bytes security key, offset: 0x124 */
  __IO uint32_t SECUREKEY6;                        /**< Persistent register.<br> 4-bytes security key, offset: 0x128 */
  __IO uint32_t SECUREKEY7;                        /**< Persistent register.<br> 4-bytes security key, offset: 0x12C */
  __I  uint32_t TRANSFER;                          /**< Persistent register.<br>Busy indication for transfer between PMRC APB and LPO domains, offset: 0x130 */
  __IO uint32_t DCDCCONTROL;                       /**< DCDC low-power control register, used to store VDIG and MEM deep-sleep VDD levels.<br>The register also holds the current VDDValue., offset: 0x134 */
  __IO uint32_t WAKEUPSRC1;                        /**< Configuration of deep-sleep wake-up sources (part-1), offset: 0x138 */
  __IO uint32_t WAKEUPSRC2;                        /**< Configuration of deep-sleep wake-up sources (part-2), offset: 0x13C */
  __IO uint32_t PMICMODE;                          /**< Persistent register.<br>Configuration of external PMIC power saving modes.<br>Register is effectively written when corresponding bit in Transfer register is read low, offset: 0x140 */
  __IO uint32_t ANAGDETCONFIG1;                    /**< Persistent register.<br>Configuration of Analog Glitch Detector (part-1), offset: 0x144 */
  __IO uint32_t ANAGDETCONFIG2;                    /**< Non-persistent register. Configuration of Analog Glitch Detector (part-2), offset: 0x148 */
  __I  uint32_t WAKEUPCAUSE1;                      /**< Tracking of deep-sleep wake-up cause/source (part-1), offset: 0x14C */
  __I  uint32_t WAKEUPCAUSE2;                      /**< Tracking of deep-sleep wake-up cause/source (part-2), offset: 0x150 */
  __IO uint32_t SARADCCTRL;                        /**< Control register for SAR ADC, offset: 0x154 */
  __IO uint32_t SARADCCLOCKCTRL;                   /**< Control register for SAR ADC clock enable and selection, offset: 0x158 */
  __I  uint32_t ADCDATA;                           /**< ADC data output register, offset: 0x15C */
  __I  uint32_t ADCVDDDATA;                        /**< VDD measurement result, offset: 0x160 */
  __IO uint32_t CM55PCFGSTATUS;                    /**< Manage CM55 Power Modes, offset: 0x164 */
  __IO uint32_t DSWMCFGHOLD1;                      /**< Semi-Persistent register.<br>Enables/Disables holding configuration of switch matrix pins.<br>Register is effectively written when corresponding bit in Transfer register is read low., offset: 0x168 */
  __IO uint32_t DSWMCFGHOLD2;                      /**< Semi-Persistent register.<br>Enables/Disables holding configuration of switch matrix pins.<br>Register is effectively written when corresponding bit in Transfer register is read low., offset: 0x16C */
  __IO uint32_t SHORTCFG;                          /**< Persistent register.<br>ADSS short event configuration., offset: 0x170 */
  __IO uint32_t DCDCDIGCONTROL2;                   /**< Configure the VDIG DCDC., offset: 0x174 */
  __IO uint32_t DCDCMEMCONTROL2;                   /**< Configure the VMEM DCDC., offset: 0x178 */
  __IO uint32_t FSMTIMERDSDELAY;                   /**< Define the deep-sleep settling time, offset: 0x17C */
       uint8_t RESERVED_1[3672];
  __O  uint32_t INTCLRENABLE;                      /**< Interrupt clear enable command, offset: 0xFD8 */
  __O  uint32_t INTSETENABLE;                      /**< Interrupt set enable command, offset: 0xFDC */
  __I  uint32_t INTSTATUS;                         /**< Interrupt status register, offset: 0xFE0 */
  __I  uint32_t INTENABLE;                         /**< Interrupt enable register, offset: 0xFE4 */
  __O  uint32_t INTCLRSTATUS;                      /**< Interrupt clear status command, offset: 0xFE8 */
  __O  uint32_t INTSETSTATUS;                      /**< Interrupt set status command, offset: 0xFEC */
       uint8_t RESERVED_2[12];
  __I  uint32_t MODULEID;                          /**< Contains the ID number of the IP, offset: 0xFFC */
} PMRC_Type;

/* ----------------------------------------------------------------------------
   -- PMRC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PMRC_Register_Masks PMRC Register Masks
 * @{
 */

/*! @name EXTRESETENABLE1 - Semi-Persistent register.<br>Enable external reset detection on IO pin(s).<br>Register is effectively written when corresponding bit in Transfer register is read low */
/*! @{ */

#define PMRC_EXTRESETENABLE1_SWM0_00_MASK        (0x1U)
#define PMRC_EXTRESETENABLE1_SWM0_00_SHIFT       (0U)
/*! SWM0_00 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM0_00(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM0_00_SHIFT)) & PMRC_EXTRESETENABLE1_SWM0_00_MASK)

#define PMRC_EXTRESETENABLE1_SWM0_01_MASK        (0x2U)
#define PMRC_EXTRESETENABLE1_SWM0_01_SHIFT       (1U)
/*! SWM0_01 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM0_01(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM0_01_SHIFT)) & PMRC_EXTRESETENABLE1_SWM0_01_MASK)

#define PMRC_EXTRESETENABLE1_SWM0_02_MASK        (0x4U)
#define PMRC_EXTRESETENABLE1_SWM0_02_SHIFT       (2U)
/*! SWM0_02 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM0_02(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM0_02_SHIFT)) & PMRC_EXTRESETENABLE1_SWM0_02_MASK)

#define PMRC_EXTRESETENABLE1_SWM0_03_MASK        (0x8U)
#define PMRC_EXTRESETENABLE1_SWM0_03_SHIFT       (3U)
/*! SWM0_03 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM0_03(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM0_03_SHIFT)) & PMRC_EXTRESETENABLE1_SWM0_03_MASK)

#define PMRC_EXTRESETENABLE1_SWM0_04_MASK        (0x10U)
#define PMRC_EXTRESETENABLE1_SWM0_04_SHIFT       (4U)
/*! SWM0_04 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM0_04(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM0_04_SHIFT)) & PMRC_EXTRESETENABLE1_SWM0_04_MASK)

#define PMRC_EXTRESETENABLE1_SWM0_05_MASK        (0x20U)
#define PMRC_EXTRESETENABLE1_SWM0_05_SHIFT       (5U)
/*! SWM0_05 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM0_05(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM0_05_SHIFT)) & PMRC_EXTRESETENABLE1_SWM0_05_MASK)

#define PMRC_EXTRESETENABLE1_SWM0_06_MASK        (0x40U)
#define PMRC_EXTRESETENABLE1_SWM0_06_SHIFT       (6U)
/*! SWM0_06 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM0_06(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM0_06_SHIFT)) & PMRC_EXTRESETENABLE1_SWM0_06_MASK)

#define PMRC_EXTRESETENABLE1_SWM0_07_MASK        (0x80U)
#define PMRC_EXTRESETENABLE1_SWM0_07_SHIFT       (7U)
/*! SWM0_07 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM0_07(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM0_07_SHIFT)) & PMRC_EXTRESETENABLE1_SWM0_07_MASK)

#define PMRC_EXTRESETENABLE1_SWM0_08_MASK        (0x100U)
#define PMRC_EXTRESETENABLE1_SWM0_08_SHIFT       (8U)
/*! SWM0_08 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM0_08(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM0_08_SHIFT)) & PMRC_EXTRESETENABLE1_SWM0_08_MASK)

#define PMRC_EXTRESETENABLE1_SWM0_09_MASK        (0x200U)
#define PMRC_EXTRESETENABLE1_SWM0_09_SHIFT       (9U)
/*! SWM0_09 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM0_09(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM0_09_SHIFT)) & PMRC_EXTRESETENABLE1_SWM0_09_MASK)

#define PMRC_EXTRESETENABLE1_SWM0_10_MASK        (0x400U)
#define PMRC_EXTRESETENABLE1_SWM0_10_SHIFT       (10U)
/*! SWM0_10 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM0_10(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM0_10_SHIFT)) & PMRC_EXTRESETENABLE1_SWM0_10_MASK)

#define PMRC_EXTRESETENABLE1_SWM0_11_MASK        (0x800U)
#define PMRC_EXTRESETENABLE1_SWM0_11_SHIFT       (11U)
/*! SWM0_11 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM0_11(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM0_11_SHIFT)) & PMRC_EXTRESETENABLE1_SWM0_11_MASK)

#define PMRC_EXTRESETENABLE1_SWM1_00_MASK        (0x1000U)
#define PMRC_EXTRESETENABLE1_SWM1_00_SHIFT       (12U)
/*! SWM1_00 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM1_00(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM1_00_SHIFT)) & PMRC_EXTRESETENABLE1_SWM1_00_MASK)

#define PMRC_EXTRESETENABLE1_SWM1_01_MASK        (0x2000U)
#define PMRC_EXTRESETENABLE1_SWM1_01_SHIFT       (13U)
/*! SWM1_01 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM1_01(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM1_01_SHIFT)) & PMRC_EXTRESETENABLE1_SWM1_01_MASK)

#define PMRC_EXTRESETENABLE1_SWM1_02_MASK        (0x4000U)
#define PMRC_EXTRESETENABLE1_SWM1_02_SHIFT       (14U)
/*! SWM1_02 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM1_02(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM1_02_SHIFT)) & PMRC_EXTRESETENABLE1_SWM1_02_MASK)

#define PMRC_EXTRESETENABLE1_SWM1_03_MASK        (0x8000U)
#define PMRC_EXTRESETENABLE1_SWM1_03_SHIFT       (15U)
/*! SWM1_03 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM1_03(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM1_03_SHIFT)) & PMRC_EXTRESETENABLE1_SWM1_03_MASK)

#define PMRC_EXTRESETENABLE1_SWM1_04_MASK        (0x10000U)
#define PMRC_EXTRESETENABLE1_SWM1_04_SHIFT       (16U)
/*! SWM1_04 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM1_04(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM1_04_SHIFT)) & PMRC_EXTRESETENABLE1_SWM1_04_MASK)

#define PMRC_EXTRESETENABLE1_SWM1_05_MASK        (0x20000U)
#define PMRC_EXTRESETENABLE1_SWM1_05_SHIFT       (17U)
/*! SWM1_05 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM1_05(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM1_05_SHIFT)) & PMRC_EXTRESETENABLE1_SWM1_05_MASK)

#define PMRC_EXTRESETENABLE1_SWM1_06_MASK        (0x40000U)
#define PMRC_EXTRESETENABLE1_SWM1_06_SHIFT       (18U)
/*! SWM1_06 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM1_06(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM1_06_SHIFT)) & PMRC_EXTRESETENABLE1_SWM1_06_MASK)

#define PMRC_EXTRESETENABLE1_SWM1_07_MASK        (0x80000U)
#define PMRC_EXTRESETENABLE1_SWM1_07_SHIFT       (19U)
/*! SWM1_07 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM1_07(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM1_07_SHIFT)) & PMRC_EXTRESETENABLE1_SWM1_07_MASK)

#define PMRC_EXTRESETENABLE1_SWM1_08_MASK        (0x100000U)
#define PMRC_EXTRESETENABLE1_SWM1_08_SHIFT       (20U)
/*! SWM1_08 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM1_08(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM1_08_SHIFT)) & PMRC_EXTRESETENABLE1_SWM1_08_MASK)

#define PMRC_EXTRESETENABLE1_SWM1_09_MASK        (0x200000U)
#define PMRC_EXTRESETENABLE1_SWM1_09_SHIFT       (21U)
/*! SWM1_09 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM1_09(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM1_09_SHIFT)) & PMRC_EXTRESETENABLE1_SWM1_09_MASK)

#define PMRC_EXTRESETENABLE1_SWM1_10_MASK        (0x400000U)
#define PMRC_EXTRESETENABLE1_SWM1_10_SHIFT       (22U)
/*! SWM1_10 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM1_10(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM1_10_SHIFT)) & PMRC_EXTRESETENABLE1_SWM1_10_MASK)

#define PMRC_EXTRESETENABLE1_SWM1_11_MASK        (0x800000U)
#define PMRC_EXTRESETENABLE1_SWM1_11_SHIFT       (23U)
/*! SWM1_11 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE1_SWM1_11(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE1_SWM1_11_SHIFT)) & PMRC_EXTRESETENABLE1_SWM1_11_MASK)
/*! @} */

/*! @name EXTRESETENABLE2 - Semi-Persistent register.<br>Enable external reset detection on IO pin(s).<br>Register is effectively written when corresponding bit in Transfer register is read low */
/*! @{ */

#define PMRC_EXTRESETENABLE2_SWM2_00_MASK        (0x1U)
#define PMRC_EXTRESETENABLE2_SWM2_00_SHIFT       (0U)
/*! SWM2_00 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM2_00(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM2_00_SHIFT)) & PMRC_EXTRESETENABLE2_SWM2_00_MASK)

#define PMRC_EXTRESETENABLE2_SWM2_01_MASK        (0x2U)
#define PMRC_EXTRESETENABLE2_SWM2_01_SHIFT       (1U)
/*! SWM2_01 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM2_01(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM2_01_SHIFT)) & PMRC_EXTRESETENABLE2_SWM2_01_MASK)

#define PMRC_EXTRESETENABLE2_SWM2_02_MASK        (0x4U)
#define PMRC_EXTRESETENABLE2_SWM2_02_SHIFT       (2U)
/*! SWM2_02 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM2_02(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM2_02_SHIFT)) & PMRC_EXTRESETENABLE2_SWM2_02_MASK)

#define PMRC_EXTRESETENABLE2_SWM2_03_MASK        (0x8U)
#define PMRC_EXTRESETENABLE2_SWM2_03_SHIFT       (3U)
/*! SWM2_03 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM2_03(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM2_03_SHIFT)) & PMRC_EXTRESETENABLE2_SWM2_03_MASK)

#define PMRC_EXTRESETENABLE2_SWM2_04_MASK        (0x10U)
#define PMRC_EXTRESETENABLE2_SWM2_04_SHIFT       (4U)
/*! SWM2_04 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM2_04(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM2_04_SHIFT)) & PMRC_EXTRESETENABLE2_SWM2_04_MASK)

#define PMRC_EXTRESETENABLE2_SWM2_05_MASK        (0x20U)
#define PMRC_EXTRESETENABLE2_SWM2_05_SHIFT       (5U)
/*! SWM2_05 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM2_05(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM2_05_SHIFT)) & PMRC_EXTRESETENABLE2_SWM2_05_MASK)

#define PMRC_EXTRESETENABLE2_SWM2_06_MASK        (0x40U)
#define PMRC_EXTRESETENABLE2_SWM2_06_SHIFT       (6U)
/*! SWM2_06 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM2_06(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM2_06_SHIFT)) & PMRC_EXTRESETENABLE2_SWM2_06_MASK)

#define PMRC_EXTRESETENABLE2_SWM2_07_MASK        (0x80U)
#define PMRC_EXTRESETENABLE2_SWM2_07_SHIFT       (7U)
/*! SWM2_07 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM2_07(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM2_07_SHIFT)) & PMRC_EXTRESETENABLE2_SWM2_07_MASK)

#define PMRC_EXTRESETENABLE2_SWM2_08_MASK        (0x100U)
#define PMRC_EXTRESETENABLE2_SWM2_08_SHIFT       (8U)
/*! SWM2_08 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM2_08(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM2_08_SHIFT)) & PMRC_EXTRESETENABLE2_SWM2_08_MASK)

#define PMRC_EXTRESETENABLE2_SWM2_09_MASK        (0x200U)
#define PMRC_EXTRESETENABLE2_SWM2_09_SHIFT       (9U)
/*! SWM2_09 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM2_09(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM2_09_SHIFT)) & PMRC_EXTRESETENABLE2_SWM2_09_MASK)

#define PMRC_EXTRESETENABLE2_SWM2_10_MASK        (0x400U)
#define PMRC_EXTRESETENABLE2_SWM2_10_SHIFT       (10U)
/*! SWM2_10 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM2_10(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM2_10_SHIFT)) & PMRC_EXTRESETENABLE2_SWM2_10_MASK)

#define PMRC_EXTRESETENABLE2_SWM2_11_MASK        (0x800U)
#define PMRC_EXTRESETENABLE2_SWM2_11_SHIFT       (11U)
/*! SWM2_11 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM2_11(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM2_11_SHIFT)) & PMRC_EXTRESETENABLE2_SWM2_11_MASK)

#define PMRC_EXTRESETENABLE2_SWM3_00_MASK        (0x1000U)
#define PMRC_EXTRESETENABLE2_SWM3_00_SHIFT       (12U)
/*! SWM3_00 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM3_00(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM3_00_SHIFT)) & PMRC_EXTRESETENABLE2_SWM3_00_MASK)

#define PMRC_EXTRESETENABLE2_SWM3_01_MASK        (0x2000U)
#define PMRC_EXTRESETENABLE2_SWM3_01_SHIFT       (13U)
/*! SWM3_01 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM3_01(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM3_01_SHIFT)) & PMRC_EXTRESETENABLE2_SWM3_01_MASK)

#define PMRC_EXTRESETENABLE2_SWM3_02_MASK        (0x4000U)
#define PMRC_EXTRESETENABLE2_SWM3_02_SHIFT       (14U)
/*! SWM3_02 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM3_02(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM3_02_SHIFT)) & PMRC_EXTRESETENABLE2_SWM3_02_MASK)

#define PMRC_EXTRESETENABLE2_SWM3_03_MASK        (0x8000U)
#define PMRC_EXTRESETENABLE2_SWM3_03_SHIFT       (15U)
/*! SWM3_03 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM3_03(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM3_03_SHIFT)) & PMRC_EXTRESETENABLE2_SWM3_03_MASK)

#define PMRC_EXTRESETENABLE2_SWM3_04_MASK        (0x10000U)
#define PMRC_EXTRESETENABLE2_SWM3_04_SHIFT       (16U)
/*! SWM3_04 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM3_04(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM3_04_SHIFT)) & PMRC_EXTRESETENABLE2_SWM3_04_MASK)

#define PMRC_EXTRESETENABLE2_SWM3_05_MASK        (0x20000U)
#define PMRC_EXTRESETENABLE2_SWM3_05_SHIFT       (17U)
/*! SWM3_05 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM3_05(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM3_05_SHIFT)) & PMRC_EXTRESETENABLE2_SWM3_05_MASK)

#define PMRC_EXTRESETENABLE2_SWM3_06_MASK        (0x40000U)
#define PMRC_EXTRESETENABLE2_SWM3_06_SHIFT       (18U)
/*! SWM3_06 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM3_06(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM3_06_SHIFT)) & PMRC_EXTRESETENABLE2_SWM3_06_MASK)

#define PMRC_EXTRESETENABLE2_SWM3_07_MASK        (0x80000U)
#define PMRC_EXTRESETENABLE2_SWM3_07_SHIFT       (19U)
/*! SWM3_07 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM3_07(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM3_07_SHIFT)) & PMRC_EXTRESETENABLE2_SWM3_07_MASK)

#define PMRC_EXTRESETENABLE2_SWM3_08_MASK        (0x100000U)
#define PMRC_EXTRESETENABLE2_SWM3_08_SHIFT       (20U)
/*! SWM3_08 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM3_08(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM3_08_SHIFT)) & PMRC_EXTRESETENABLE2_SWM3_08_MASK)

#define PMRC_EXTRESETENABLE2_SWM3_09_MASK        (0x200000U)
#define PMRC_EXTRESETENABLE2_SWM3_09_SHIFT       (21U)
/*! SWM3_09 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM3_09(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM3_09_SHIFT)) & PMRC_EXTRESETENABLE2_SWM3_09_MASK)

#define PMRC_EXTRESETENABLE2_SWM3_10_MASK        (0x400000U)
#define PMRC_EXTRESETENABLE2_SWM3_10_SHIFT       (22U)
/*! SWM3_10 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM3_10(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM3_10_SHIFT)) & PMRC_EXTRESETENABLE2_SWM3_10_MASK)

#define PMRC_EXTRESETENABLE2_SWM3_11_MASK        (0x800000U)
#define PMRC_EXTRESETENABLE2_SWM3_11_SHIFT       (23U)
/*! SWM3_11 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM3_11(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM3_11_SHIFT)) & PMRC_EXTRESETENABLE2_SWM3_11_MASK)

#define PMRC_EXTRESETENABLE2_SWM3_12_MASK        (0x1000000U)
#define PMRC_EXTRESETENABLE2_SWM3_12_SHIFT       (24U)
/*! SWM3_12 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM3_12(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM3_12_SHIFT)) & PMRC_EXTRESETENABLE2_SWM3_12_MASK)

#define PMRC_EXTRESETENABLE2_SWM3_13_MASK        (0x2000000U)
#define PMRC_EXTRESETENABLE2_SWM3_13_SHIFT       (25U)
/*! SWM3_13 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM3_13(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM3_13_SHIFT)) & PMRC_EXTRESETENABLE2_SWM3_13_MASK)

#define PMRC_EXTRESETENABLE2_SWM3_14_MASK        (0x4000000U)
#define PMRC_EXTRESETENABLE2_SWM3_14_SHIFT       (26U)
/*! SWM3_14 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM3_14(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM3_14_SHIFT)) & PMRC_EXTRESETENABLE2_SWM3_14_MASK)

#define PMRC_EXTRESETENABLE2_SWM3_15_MASK        (0x8000000U)
#define PMRC_EXTRESETENABLE2_SWM3_15_SHIFT       (27U)
/*! SWM3_15 - Enable external reset from IO pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_EXTRESETENABLE2_SWM3_15(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETENABLE2_SWM3_15_SHIFT)) & PMRC_EXTRESETENABLE2_SWM3_15_MASK)
/*! @} */

/*! @name EXTRESETPOLARITY1 - Semi-Persistent register.<br>Select external reset polarity for IO pin(s).<br>Register is effectively written when corresponding bit in Transfer register is read low */
/*! @{ */

#define PMRC_EXTRESETPOLARITY1_SWM0_00_MASK      (0x1U)
#define PMRC_EXTRESETPOLARITY1_SWM0_00_SHIFT     (0U)
/*! SWM0_00 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM0_00(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM0_00_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM0_00_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM0_01_MASK      (0x2U)
#define PMRC_EXTRESETPOLARITY1_SWM0_01_SHIFT     (1U)
/*! SWM0_01 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM0_01(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM0_01_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM0_01_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM0_02_MASK      (0x4U)
#define PMRC_EXTRESETPOLARITY1_SWM0_02_SHIFT     (2U)
/*! SWM0_02 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM0_02(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM0_02_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM0_02_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM0_03_MASK      (0x8U)
#define PMRC_EXTRESETPOLARITY1_SWM0_03_SHIFT     (3U)
/*! SWM0_03 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM0_03(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM0_03_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM0_03_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM0_04_MASK      (0x10U)
#define PMRC_EXTRESETPOLARITY1_SWM0_04_SHIFT     (4U)
/*! SWM0_04 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM0_04(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM0_04_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM0_04_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM0_05_MASK      (0x20U)
#define PMRC_EXTRESETPOLARITY1_SWM0_05_SHIFT     (5U)
/*! SWM0_05 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM0_05(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM0_05_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM0_05_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM0_06_MASK      (0x40U)
#define PMRC_EXTRESETPOLARITY1_SWM0_06_SHIFT     (6U)
/*! SWM0_06 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM0_06(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM0_06_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM0_06_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM0_07_MASK      (0x80U)
#define PMRC_EXTRESETPOLARITY1_SWM0_07_SHIFT     (7U)
/*! SWM0_07 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM0_07(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM0_07_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM0_07_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM0_08_MASK      (0x100U)
#define PMRC_EXTRESETPOLARITY1_SWM0_08_SHIFT     (8U)
/*! SWM0_08 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM0_08(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM0_08_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM0_08_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM0_09_MASK      (0x200U)
#define PMRC_EXTRESETPOLARITY1_SWM0_09_SHIFT     (9U)
/*! SWM0_09 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM0_09(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM0_09_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM0_09_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM0_10_MASK      (0x400U)
#define PMRC_EXTRESETPOLARITY1_SWM0_10_SHIFT     (10U)
/*! SWM0_10 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM0_10(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM0_10_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM0_10_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM0_11_MASK      (0x800U)
#define PMRC_EXTRESETPOLARITY1_SWM0_11_SHIFT     (11U)
/*! SWM0_11 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM0_11(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM0_11_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM0_11_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM1_00_MASK      (0x1000U)
#define PMRC_EXTRESETPOLARITY1_SWM1_00_SHIFT     (12U)
/*! SWM1_00 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM1_00(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM1_00_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM1_00_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM1_01_MASK      (0x2000U)
#define PMRC_EXTRESETPOLARITY1_SWM1_01_SHIFT     (13U)
/*! SWM1_01 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM1_01(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM1_01_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM1_01_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM1_02_MASK      (0x4000U)
#define PMRC_EXTRESETPOLARITY1_SWM1_02_SHIFT     (14U)
/*! SWM1_02 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM1_02(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM1_02_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM1_02_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM1_03_MASK      (0x8000U)
#define PMRC_EXTRESETPOLARITY1_SWM1_03_SHIFT     (15U)
/*! SWM1_03 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM1_03(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM1_03_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM1_03_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM1_04_MASK      (0x10000U)
#define PMRC_EXTRESETPOLARITY1_SWM1_04_SHIFT     (16U)
/*! SWM1_04 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM1_04(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM1_04_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM1_04_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM1_05_MASK      (0x20000U)
#define PMRC_EXTRESETPOLARITY1_SWM1_05_SHIFT     (17U)
/*! SWM1_05 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM1_05(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM1_05_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM1_05_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM1_06_MASK      (0x40000U)
#define PMRC_EXTRESETPOLARITY1_SWM1_06_SHIFT     (18U)
/*! SWM1_06 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM1_06(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM1_06_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM1_06_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM1_07_MASK      (0x80000U)
#define PMRC_EXTRESETPOLARITY1_SWM1_07_SHIFT     (19U)
/*! SWM1_07 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM1_07(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM1_07_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM1_07_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM1_08_MASK      (0x100000U)
#define PMRC_EXTRESETPOLARITY1_SWM1_08_SHIFT     (20U)
/*! SWM1_08 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM1_08(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM1_08_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM1_08_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM1_09_MASK      (0x200000U)
#define PMRC_EXTRESETPOLARITY1_SWM1_09_SHIFT     (21U)
/*! SWM1_09 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM1_09(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM1_09_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM1_09_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM1_10_MASK      (0x400000U)
#define PMRC_EXTRESETPOLARITY1_SWM1_10_SHIFT     (22U)
/*! SWM1_10 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM1_10(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM1_10_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM1_10_MASK)

#define PMRC_EXTRESETPOLARITY1_SWM1_11_MASK      (0x800000U)
#define PMRC_EXTRESETPOLARITY1_SWM1_11_SHIFT     (23U)
/*! SWM1_11 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY1_SWM1_11(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY1_SWM1_11_SHIFT)) & PMRC_EXTRESETPOLARITY1_SWM1_11_MASK)
/*! @} */

/*! @name EXTRESETPOLARITY2 - Semi-Persistent register.<br>Select external reset polarity for IO pin(s).<br>Register is effectively written when corresponding bit in Transfer register is read low */
/*! @{ */

#define PMRC_EXTRESETPOLARITY2_SWM2_00_MASK      (0x1U)
#define PMRC_EXTRESETPOLARITY2_SWM2_00_SHIFT     (0U)
/*! SWM2_00 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM2_00(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM2_00_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM2_00_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM2_01_MASK      (0x2U)
#define PMRC_EXTRESETPOLARITY2_SWM2_01_SHIFT     (1U)
/*! SWM2_01 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM2_01(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM2_01_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM2_01_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM2_02_MASK      (0x4U)
#define PMRC_EXTRESETPOLARITY2_SWM2_02_SHIFT     (2U)
/*! SWM2_02 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM2_02(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM2_02_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM2_02_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM2_03_MASK      (0x8U)
#define PMRC_EXTRESETPOLARITY2_SWM2_03_SHIFT     (3U)
/*! SWM2_03 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM2_03(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM2_03_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM2_03_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM2_04_MASK      (0x10U)
#define PMRC_EXTRESETPOLARITY2_SWM2_04_SHIFT     (4U)
/*! SWM2_04 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM2_04(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM2_04_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM2_04_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM2_05_MASK      (0x20U)
#define PMRC_EXTRESETPOLARITY2_SWM2_05_SHIFT     (5U)
/*! SWM2_05 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM2_05(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM2_05_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM2_05_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM2_06_MASK      (0x40U)
#define PMRC_EXTRESETPOLARITY2_SWM2_06_SHIFT     (6U)
/*! SWM2_06 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM2_06(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM2_06_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM2_06_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM2_07_MASK      (0x80U)
#define PMRC_EXTRESETPOLARITY2_SWM2_07_SHIFT     (7U)
/*! SWM2_07 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM2_07(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM2_07_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM2_07_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM2_08_MASK      (0x100U)
#define PMRC_EXTRESETPOLARITY2_SWM2_08_SHIFT     (8U)
/*! SWM2_08 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM2_08(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM2_08_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM2_08_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM2_09_MASK      (0x200U)
#define PMRC_EXTRESETPOLARITY2_SWM2_09_SHIFT     (9U)
/*! SWM2_09 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM2_09(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM2_09_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM2_09_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM2_10_MASK      (0x400U)
#define PMRC_EXTRESETPOLARITY2_SWM2_10_SHIFT     (10U)
/*! SWM2_10 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM2_10(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM2_10_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM2_10_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM2_11_MASK      (0x800U)
#define PMRC_EXTRESETPOLARITY2_SWM2_11_SHIFT     (11U)
/*! SWM2_11 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM2_11(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM2_11_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM2_11_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM3_00_MASK      (0x1000U)
#define PMRC_EXTRESETPOLARITY2_SWM3_00_SHIFT     (12U)
/*! SWM3_00 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM3_00(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM3_00_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM3_00_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM3_01_MASK      (0x2000U)
#define PMRC_EXTRESETPOLARITY2_SWM3_01_SHIFT     (13U)
/*! SWM3_01 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM3_01(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM3_01_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM3_01_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM3_02_MASK      (0x4000U)
#define PMRC_EXTRESETPOLARITY2_SWM3_02_SHIFT     (14U)
/*! SWM3_02 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM3_02(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM3_02_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM3_02_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM3_03_MASK      (0x8000U)
#define PMRC_EXTRESETPOLARITY2_SWM3_03_SHIFT     (15U)
/*! SWM3_03 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM3_03(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM3_03_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM3_03_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM3_04_MASK      (0x10000U)
#define PMRC_EXTRESETPOLARITY2_SWM3_04_SHIFT     (16U)
/*! SWM3_04 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM3_04(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM3_04_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM3_04_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM3_05_MASK      (0x20000U)
#define PMRC_EXTRESETPOLARITY2_SWM3_05_SHIFT     (17U)
/*! SWM3_05 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM3_05(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM3_05_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM3_05_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM3_06_MASK      (0x40000U)
#define PMRC_EXTRESETPOLARITY2_SWM3_06_SHIFT     (18U)
/*! SWM3_06 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM3_06(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM3_06_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM3_06_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM3_07_MASK      (0x80000U)
#define PMRC_EXTRESETPOLARITY2_SWM3_07_SHIFT     (19U)
/*! SWM3_07 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM3_07(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM3_07_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM3_07_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM3_08_MASK      (0x100000U)
#define PMRC_EXTRESETPOLARITY2_SWM3_08_SHIFT     (20U)
/*! SWM3_08 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM3_08(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM3_08_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM3_08_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM3_09_MASK      (0x200000U)
#define PMRC_EXTRESETPOLARITY2_SWM3_09_SHIFT     (21U)
/*! SWM3_09 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM3_09(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM3_09_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM3_09_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM3_10_MASK      (0x400000U)
#define PMRC_EXTRESETPOLARITY2_SWM3_10_SHIFT     (22U)
/*! SWM3_10 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM3_10(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM3_10_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM3_10_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM3_11_MASK      (0x800000U)
#define PMRC_EXTRESETPOLARITY2_SWM3_11_SHIFT     (23U)
/*! SWM3_11 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM3_11(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM3_11_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM3_11_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM3_12_MASK      (0x1000000U)
#define PMRC_EXTRESETPOLARITY2_SWM3_12_SHIFT     (24U)
/*! SWM3_12 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM3_12(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM3_12_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM3_12_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM3_13_MASK      (0x2000000U)
#define PMRC_EXTRESETPOLARITY2_SWM3_13_SHIFT     (25U)
/*! SWM3_13 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM3_13(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM3_13_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM3_13_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM3_14_MASK      (0x4000000U)
#define PMRC_EXTRESETPOLARITY2_SWM3_14_SHIFT     (26U)
/*! SWM3_14 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM3_14(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM3_14_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM3_14_MASK)

#define PMRC_EXTRESETPOLARITY2_SWM3_15_MASK      (0x8000000U)
#define PMRC_EXTRESETPOLARITY2_SWM3_15_SHIFT     (27U)
/*! SWM3_15 - Select external reset polarity for IO pin
 *  0b0..Active low
 *  0b1..Active high
 */
#define PMRC_EXTRESETPOLARITY2_SWM3_15(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_EXTRESETPOLARITY2_SWM3_15_SHIFT)) & PMRC_EXTRESETPOLARITY2_SWM3_15_MASK)
/*! @} */

/*! @name RESETCAUSE1 - Persistent register. Read the first part of the reset causes */
/*! @{ */

#define PMRC_RESETCAUSE1_CTRLSS_COLD_MASK        (0x1U)
#define PMRC_RESETCAUSE1_CTRLSS_COLD_SHIFT       (0U)
/*! Ctrlss_cold - Control Processor has triggered a cold reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_CTRLSS_COLD(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_CTRLSS_COLD_SHIFT)) & PMRC_RESETCAUSE1_CTRLSS_COLD_MASK)

#define PMRC_RESETCAUSE1_DSS_MASK                (0x2U)
#define PMRC_RESETCAUSE1_DSS_SHIFT               (1U)
/*! Dss - DSP Subsystem Error Detection Unit has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_DSS(x)                  (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_DSS_SHIFT)) & PMRC_RESETCAUSE1_DSS_MASK)

#define PMRC_RESETCAUSE1_CTRLSS_WARM_MASK        (0x4U)
#define PMRC_RESETCAUSE1_CTRLSS_WARM_SHIFT       (2U)
/*! Ctrlss_warm - Control Processor has triggered a warm reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_CTRLSS_WARM(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_CTRLSS_WARM_SHIFT)) & PMRC_RESETCAUSE1_CTRLSS_WARM_MASK)

#define PMRC_RESETCAUSE1_NSS_MASK                (0x8U)
#define PMRC_RESETCAUSE1_NSS_SHIFT               (3U)
/*! Nss - NSS Error Detection Unit has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_NSS(x)                  (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_NSS_SHIFT)) & PMRC_RESETCAUSE1_NSS_MASK)

#define PMRC_RESETCAUSE1_LPWAKEUP_MASK           (0x10U)
#define PMRC_RESETCAUSE1_LPWAKEUP_SHIFT          (4U)
/*! LpWakeup - Wakeup from power-down or deep-powerdown has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_LPWAKEUP(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_LPWAKEUP_SHIFT)) & PMRC_RESETCAUSE1_LPWAKEUP_MASK)

#define PMRC_RESETCAUSE1_PMU_MASK                (0x20U)
#define PMRC_RESETCAUSE1_PMU_SHIFT               (5U)
/*! Pmu - PMU power failure on VDD_DIG or VDD_MEM or VDD_ANA or VDD_CGU has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_PMU(x)                  (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_PMU_SHIFT)) & PMRC_RESETCAUSE1_PMU_MASK)

#define PMRC_RESETCAUSE1_LDOMEM_MASK             (0x40U)
#define PMRC_RESETCAUSE1_LDOMEM_SHIFT            (6U)
/*! ldomem - PMU power failure on LDO MEM has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_LDOMEM(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_LDOMEM_SHIFT)) & PMRC_RESETCAUSE1_LDOMEM_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM0_00_MASK        (0x80U)
#define PMRC_RESETCAUSE1_EXT_SWM0_00_SHIFT       (7U)
/*! Ext_SWM0_00 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM0_00(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM0_00_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM0_00_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM0_01_MASK        (0x100U)
#define PMRC_RESETCAUSE1_EXT_SWM0_01_SHIFT       (8U)
/*! Ext_SWM0_01 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM0_01(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM0_01_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM0_01_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM0_02_MASK        (0x200U)
#define PMRC_RESETCAUSE1_EXT_SWM0_02_SHIFT       (9U)
/*! Ext_SWM0_02 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM0_02(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM0_02_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM0_02_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM0_03_MASK        (0x400U)
#define PMRC_RESETCAUSE1_EXT_SWM0_03_SHIFT       (10U)
/*! Ext_SWM0_03 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM0_03(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM0_03_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM0_03_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM0_04_MASK        (0x800U)
#define PMRC_RESETCAUSE1_EXT_SWM0_04_SHIFT       (11U)
/*! Ext_SWM0_04 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM0_04(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM0_04_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM0_04_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM0_05_MASK        (0x1000U)
#define PMRC_RESETCAUSE1_EXT_SWM0_05_SHIFT       (12U)
/*! Ext_SWM0_05 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM0_05(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM0_05_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM0_05_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM0_06_MASK        (0x2000U)
#define PMRC_RESETCAUSE1_EXT_SWM0_06_SHIFT       (13U)
/*! Ext_SWM0_06 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM0_06(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM0_06_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM0_06_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM0_07_MASK        (0x4000U)
#define PMRC_RESETCAUSE1_EXT_SWM0_07_SHIFT       (14U)
/*! Ext_SWM0_07 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM0_07(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM0_07_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM0_07_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM0_08_MASK        (0x8000U)
#define PMRC_RESETCAUSE1_EXT_SWM0_08_SHIFT       (15U)
/*! Ext_SWM0_08 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM0_08(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM0_08_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM0_08_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM0_09_MASK        (0x10000U)
#define PMRC_RESETCAUSE1_EXT_SWM0_09_SHIFT       (16U)
/*! Ext_SWM0_09 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM0_09(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM0_09_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM0_09_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM0_10_MASK        (0x20000U)
#define PMRC_RESETCAUSE1_EXT_SWM0_10_SHIFT       (17U)
/*! Ext_SWM0_10 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM0_10(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM0_10_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM0_10_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM0_11_MASK        (0x40000U)
#define PMRC_RESETCAUSE1_EXT_SWM0_11_SHIFT       (18U)
/*! Ext_SWM0_11 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM0_11(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM0_11_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM0_11_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM1_00_MASK        (0x80000U)
#define PMRC_RESETCAUSE1_EXT_SWM1_00_SHIFT       (19U)
/*! Ext_SWM1_00 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM1_00(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM1_00_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM1_00_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM1_01_MASK        (0x100000U)
#define PMRC_RESETCAUSE1_EXT_SWM1_01_SHIFT       (20U)
/*! Ext_SWM1_01 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM1_01(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM1_01_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM1_01_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM1_02_MASK        (0x200000U)
#define PMRC_RESETCAUSE1_EXT_SWM1_02_SHIFT       (21U)
/*! Ext_SWM1_02 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM1_02(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM1_02_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM1_02_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM1_03_MASK        (0x400000U)
#define PMRC_RESETCAUSE1_EXT_SWM1_03_SHIFT       (22U)
/*! Ext_SWM1_03 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM1_03(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM1_03_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM1_03_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM1_04_MASK        (0x800000U)
#define PMRC_RESETCAUSE1_EXT_SWM1_04_SHIFT       (23U)
/*! Ext_SWM1_04 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM1_04(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM1_04_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM1_04_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM1_05_MASK        (0x1000000U)
#define PMRC_RESETCAUSE1_EXT_SWM1_05_SHIFT       (24U)
/*! Ext_SWM1_05 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM1_05(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM1_05_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM1_05_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM1_06_MASK        (0x2000000U)
#define PMRC_RESETCAUSE1_EXT_SWM1_06_SHIFT       (25U)
/*! Ext_SWM1_06 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM1_06(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM1_06_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM1_06_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM1_07_MASK        (0x4000000U)
#define PMRC_RESETCAUSE1_EXT_SWM1_07_SHIFT       (26U)
/*! Ext_SWM1_07 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM1_07(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM1_07_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM1_07_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM1_08_MASK        (0x8000000U)
#define PMRC_RESETCAUSE1_EXT_SWM1_08_SHIFT       (27U)
/*! Ext_SWM1_08 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM1_08(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM1_08_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM1_08_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM1_09_MASK        (0x10000000U)
#define PMRC_RESETCAUSE1_EXT_SWM1_09_SHIFT       (28U)
/*! Ext_SWM1_09 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM1_09(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM1_09_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM1_09_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM1_10_MASK        (0x20000000U)
#define PMRC_RESETCAUSE1_EXT_SWM1_10_SHIFT       (29U)
/*! Ext_SWM1_10 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM1_10(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM1_10_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM1_10_MASK)

#define PMRC_RESETCAUSE1_EXT_SWM1_11_MASK        (0x40000000U)
#define PMRC_RESETCAUSE1_EXT_SWM1_11_SHIFT       (30U)
/*! Ext_SWM1_11 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_EXT_SWM1_11(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_EXT_SWM1_11_SHIFT)) & PMRC_RESETCAUSE1_EXT_SWM1_11_MASK)

#define PMRC_RESETCAUSE1_COSMIC_RAY_PROT_MASK    (0x80000000U)
#define PMRC_RESETCAUSE1_COSMIC_RAY_PROT_SHIFT   (31U)
/*! Cosmic_ray_prot - Cosmic ray protection has triggered warm reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE1_COSMIC_RAY_PROT(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE1_COSMIC_RAY_PROT_SHIFT)) & PMRC_RESETCAUSE1_COSMIC_RAY_PROT_MASK)
/*! @} */

/*! @name RESETCAUSE2 - Persistent register.<br>Read the second part of the reset causes.<br>Note that a power failure during startup state read_otp will be logged in this register (bit 0 and/or bit 1) but will not trigger a chip reset */
/*! @{ */

#define PMRC_RESETCAUSE2_VDD_MASK                (0x1U)
#define PMRC_RESETCAUSE2_VDD_SHIFT               (0U)
/*! Vdd - BOD VDD has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_VDD(x)                  (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_VDD_SHIFT)) & PMRC_RESETCAUSE2_VDD_MASK)

#define PMRC_RESETCAUSE2_VDIGSTD_MASK            (0x2U)
#define PMRC_RESETCAUSE2_VDIGSTD_SHIFT           (1U)
/*! vdigstd - PMU power failure on VDD_DIG has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_VDIGSTD(x)              (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_VDIGSTD_SHIFT)) & PMRC_RESETCAUSE2_VDIGSTD_MASK)

#define PMRC_RESETCAUSE2_VDIGMEM_MASK            (0x4U)
#define PMRC_RESETCAUSE2_VDIGMEM_SHIFT           (2U)
/*! vdigmem - PMU power failure on VDD_MEM has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_VDIGMEM(x)              (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_VDIGMEM_SHIFT)) & PMRC_RESETCAUSE2_VDIGMEM_MASK)

#define PMRC_RESETCAUSE2_VDDA_MASK               (0x8U)
#define PMRC_RESETCAUSE2_VDDA_SHIFT              (3U)
/*! vdda - PMU power failure on VDD_ANA or VDD_CGU has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_VDDA(x)                 (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_VDDA_SHIFT)) & PMRC_RESETCAUSE2_VDDA_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM2_00_MASK        (0x10U)
#define PMRC_RESETCAUSE2_EXT_SWM2_00_SHIFT       (4U)
/*! Ext_SWM2_00 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM2_00(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM2_00_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM2_00_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM2_01_MASK        (0x20U)
#define PMRC_RESETCAUSE2_EXT_SWM2_01_SHIFT       (5U)
/*! Ext_SWM2_01 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM2_01(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM2_01_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM2_01_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM2_02_MASK        (0x40U)
#define PMRC_RESETCAUSE2_EXT_SWM2_02_SHIFT       (6U)
/*! Ext_SWM2_02 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM2_02(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM2_02_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM2_02_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM2_03_MASK        (0x80U)
#define PMRC_RESETCAUSE2_EXT_SWM2_03_SHIFT       (7U)
/*! Ext_SWM2_03 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM2_03(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM2_03_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM2_03_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM2_04_MASK        (0x100U)
#define PMRC_RESETCAUSE2_EXT_SWM2_04_SHIFT       (8U)
/*! Ext_SWM2_04 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM2_04(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM2_04_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM2_04_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM2_05_MASK        (0x200U)
#define PMRC_RESETCAUSE2_EXT_SWM2_05_SHIFT       (9U)
/*! Ext_SWM2_05 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM2_05(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM2_05_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM2_05_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM2_06_MASK        (0x400U)
#define PMRC_RESETCAUSE2_EXT_SWM2_06_SHIFT       (10U)
/*! Ext_SWM2_06 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM2_06(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM2_06_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM2_06_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM2_07_MASK        (0x800U)
#define PMRC_RESETCAUSE2_EXT_SWM2_07_SHIFT       (11U)
/*! Ext_SWM2_07 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM2_07(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM2_07_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM2_07_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM2_08_MASK        (0x1000U)
#define PMRC_RESETCAUSE2_EXT_SWM2_08_SHIFT       (12U)
/*! Ext_SWM2_08 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM2_08(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM2_08_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM2_08_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM2_09_MASK        (0x2000U)
#define PMRC_RESETCAUSE2_EXT_SWM2_09_SHIFT       (13U)
/*! Ext_SWM2_09 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM2_09(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM2_09_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM2_09_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM2_10_MASK        (0x4000U)
#define PMRC_RESETCAUSE2_EXT_SWM2_10_SHIFT       (14U)
/*! Ext_SWM2_10 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM2_10(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM2_10_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM2_10_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM2_11_MASK        (0x8000U)
#define PMRC_RESETCAUSE2_EXT_SWM2_11_SHIFT       (15U)
/*! Ext_SWM2_11 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM2_11(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM2_11_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM2_11_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM3_00_MASK        (0x10000U)
#define PMRC_RESETCAUSE2_EXT_SWM3_00_SHIFT       (16U)
/*! Ext_SWM3_00 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM3_00(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM3_00_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM3_00_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM3_01_MASK        (0x20000U)
#define PMRC_RESETCAUSE2_EXT_SWM3_01_SHIFT       (17U)
/*! Ext_SWM3_01 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM3_01(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM3_01_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM3_01_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM3_02_MASK        (0x40000U)
#define PMRC_RESETCAUSE2_EXT_SWM3_02_SHIFT       (18U)
/*! Ext_SWM3_02 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM3_02(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM3_02_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM3_02_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM3_03_MASK        (0x80000U)
#define PMRC_RESETCAUSE2_EXT_SWM3_03_SHIFT       (19U)
/*! Ext_SWM3_03 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM3_03(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM3_03_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM3_03_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM3_04_MASK        (0x100000U)
#define PMRC_RESETCAUSE2_EXT_SWM3_04_SHIFT       (20U)
/*! Ext_SWM3_04 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM3_04(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM3_04_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM3_04_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM3_05_MASK        (0x200000U)
#define PMRC_RESETCAUSE2_EXT_SWM3_05_SHIFT       (21U)
/*! Ext_SWM3_05 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM3_05(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM3_05_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM3_05_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM3_06_MASK        (0x400000U)
#define PMRC_RESETCAUSE2_EXT_SWM3_06_SHIFT       (22U)
/*! Ext_SWM3_06 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM3_06(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM3_06_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM3_06_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM3_07_MASK        (0x800000U)
#define PMRC_RESETCAUSE2_EXT_SWM3_07_SHIFT       (23U)
/*! Ext_SWM3_07 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM3_07(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM3_07_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM3_07_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM3_08_MASK        (0x1000000U)
#define PMRC_RESETCAUSE2_EXT_SWM3_08_SHIFT       (24U)
/*! Ext_SWM3_08 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM3_08(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM3_08_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM3_08_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM3_09_MASK        (0x2000000U)
#define PMRC_RESETCAUSE2_EXT_SWM3_09_SHIFT       (25U)
/*! Ext_SWM3_09 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM3_09(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM3_09_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM3_09_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM3_10_MASK        (0x4000000U)
#define PMRC_RESETCAUSE2_EXT_SWM3_10_SHIFT       (26U)
/*! Ext_SWM3_10 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM3_10(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM3_10_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM3_10_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM3_11_MASK        (0x8000000U)
#define PMRC_RESETCAUSE2_EXT_SWM3_11_SHIFT       (27U)
/*! Ext_SWM3_11 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM3_11(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM3_11_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM3_11_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM3_12_MASK        (0x10000000U)
#define PMRC_RESETCAUSE2_EXT_SWM3_12_SHIFT       (28U)
/*! Ext_SWM3_12 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM3_12(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM3_12_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM3_12_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM3_13_MASK        (0x20000000U)
#define PMRC_RESETCAUSE2_EXT_SWM3_13_SHIFT       (29U)
/*! Ext_SWM3_13 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM3_13(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM3_13_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM3_13_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM3_14_MASK        (0x40000000U)
#define PMRC_RESETCAUSE2_EXT_SWM3_14_SHIFT       (30U)
/*! Ext_SWM3_14 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM3_14(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM3_14_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM3_14_MASK)

#define PMRC_RESETCAUSE2_EXT_SWM3_15_MASK        (0x80000000U)
#define PMRC_RESETCAUSE2_EXT_SWM3_15_SHIFT       (31U)
/*! Ext_SWM3_15 - IO pin has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE2_EXT_SWM3_15(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE2_EXT_SWM3_15_SHIFT)) & PMRC_RESETCAUSE2_EXT_SWM3_15_MASK)
/*! @} */

/*! @name RESETCAUSE3 - Persistent register.<br>Read the third part of the reset causes. */
/*! @{ */

#define PMRC_RESETCAUSE3_SW_POR_MASK             (0x1U)
#define PMRC_RESETCAUSE3_SW_POR_SHIFT            (0U)
/*! sw_por - Software has triggered the reset by writting to PMRC ModeControl register por field.
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE3_SW_POR(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE3_SW_POR_SHIFT)) & PMRC_RESETCAUSE3_SW_POR_MASK)

#define PMRC_RESETCAUSE3_RESET_N_MASK            (0x2U)
#define PMRC_RESETCAUSE3_RESET_N_SHIFT           (1U)
/*! reset_n - External Reset_n input has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE3_RESET_N(x)              (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE3_RESET_N_SHIFT)) & PMRC_RESETCAUSE3_RESET_N_MASK)

#define PMRC_RESETCAUSE3_RESET_ON_SHORT_MASK     (0x4U)
#define PMRC_RESETCAUSE3_RESET_ON_SHORT_SHIFT    (2U)
/*! reset_on_short - ADDS short event has triggered the reset
 *  0b0..False
 *  0b1..True
 */
#define PMRC_RESETCAUSE3_RESET_ON_SHORT(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSE3_RESET_ON_SHORT_SHIFT)) & PMRC_RESETCAUSE3_RESET_ON_SHORT_MASK)
/*! @} */

/*! @name RESETCAUSECLEAR - Command to clear both the entire ResetCause1, ResetCause2 and ResetCause3 register */
/*! @{ */

#define PMRC_RESETCAUSECLEAR_CLEAR_MASK          (0x1U)
#define PMRC_RESETCAUSECLEAR_CLEAR_SHIFT         (0U)
/*! Clear - Clear command
 *  0b0..No effect
 *  0b1..Clear the entire ResetCause1, ResetCause2 and ResetCause3 registers.<br>Self-clearing bit.
 */
#define PMRC_RESETCAUSECLEAR_CLEAR(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_RESETCAUSECLEAR_CLEAR_SHIFT)) & PMRC_RESETCAUSECLEAR_CLEAR_MASK)
/*! @} */

/*! @name DCDCDIGCONTROL - Configure the VDIG DCDC.<br>Register is effectively written when vdig_busy bit in Transfer register is read low.<br>Writing this register triggers an active to pmu_configure state transition. */
/*! @{ */

#define PMRC_DCDCDIGCONTROL_VSET_MASK            (0x3FU)
#define PMRC_DCDCDIGCONTROL_VSET_SHIFT           (0U)
/*! Vset - DC/DC Digital output voltage selection:<br>0-15 450mV+10mV*Vset,<br>16-37
 *    300mV+20mV*Vset,<br>38 1.05V,<br>others not to be used
 */
#define PMRC_DCDCDIGCONTROL_VSET(x)              (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGCONTROL_VSET_SHIFT)) & PMRC_DCDCDIGCONTROL_VSET_MASK)

#define PMRC_DCDCDIGCONTROL_BODSET_MASK          (0x1C0U)
#define PMRC_DCDCDIGCONTROL_BODSET_SHIFT         (6U)
/*! BodSet - DC/DC Digital Brown-Out Detector trip level setting:<br>77.5%+BodSet*2.5% */
#define PMRC_DCDCDIGCONTROL_BODSET(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGCONTROL_BODSET_SHIFT)) & PMRC_DCDCDIGCONTROL_BODSET_MASK)
/*! @} */

/*! @name DCDCDIGRATIO - Ratio setting for DCDC DIG (VDD_DIG).<br>Register is effectively written when vdig_busy bit in Transfer register is read low */
/*! @{ */

#define PMRC_DCDCDIGRATIO_VALUE_MASK             (0x3U)
#define PMRC_DCDCDIGRATIO_VALUE_SHIFT            (0U)
/*! Value - Ratio setting for DCDC DIG (VDD_DIG)
 *  0b00..1/2
 *  0b01..2/3
 *  0b10..3/4
 *  0b11..1
 */
#define PMRC_DCDCDIGRATIO_VALUE(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIO_VALUE_SHIFT)) & PMRC_DCDCDIGRATIO_VALUE_MASK)
/*! @} */

/*! @name DCDCDIGRATIOCOUNTER - Ratio Counter for DCDC DIG (VDD_DIG) */
/*! @{ */

#define PMRC_DCDCDIGRATIOCOUNTER_VALUE_MASK      (0xFFU)
#define PMRC_DCDCDIGRATIOCOUNTER_VALUE_SHIFT     (0U)
/*! Value - Counter value */
#define PMRC_DCDCDIGRATIOCOUNTER_VALUE(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOCOUNTER_VALUE_SHIFT)) & PMRC_DCDCDIGRATIOCOUNTER_VALUE_MASK)
/*! @} */

/*! @name DCDCDIGRATIOTHRESHOLD - VDD Ratio Thresholds setting for DCDC DIG (VDD_DIG). */
/*! @{ */

#define PMRC_DCDCDIGRATIOTHRESHOLD_VDD1TO34THR_MASK (0x7FCU)
#define PMRC_DCDCDIGRATIOTHRESHOLD_VDD1TO34THR_SHIFT (2U)
/*! Vdd1to34Thr - VDD Threshold for digital DCDC automatic down ratio for ratio 1 to 3/4. Value to
 *    be written is<br> max(0, min(511,((DCDC voltage in mV) * 4/3 - 950) * 1024/1000))
 */
#define PMRC_DCDCDIGRATIOTHRESHOLD_VDD1TO34THR(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOTHRESHOLD_VDD1TO34THR_SHIFT)) & PMRC_DCDCDIGRATIOTHRESHOLD_VDD1TO34THR_MASK)

#define PMRC_DCDCDIGRATIOTHRESHOLD_VDD34TO23THR_MASK (0xFF800U)
#define PMRC_DCDCDIGRATIOTHRESHOLD_VDD34TO23THR_SHIFT (11U)
/*! Vdd34to23Thr - VDD Threshold for digital DCDC automatic down ratio for ratio 3/4 to 2/3. Value
 *    to be written is<br> max(0, min(511,((DCDC voltage in mV) * 3/2 - 950) * 1024/1000))
 */
#define PMRC_DCDCDIGRATIOTHRESHOLD_VDD34TO23THR(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOTHRESHOLD_VDD34TO23THR_SHIFT)) & PMRC_DCDCDIGRATIOTHRESHOLD_VDD34TO23THR_MASK)

#define PMRC_DCDCDIGRATIOTHRESHOLD_VDD23TO12THR_MASK (0x1FF00000U)
#define PMRC_DCDCDIGRATIOTHRESHOLD_VDD23TO12THR_SHIFT (20U)
/*! Vdd23to12Thr - VDD Threshold for digital DCDC automatic down ratio for ratio 2/3 to 1/2. Value
 *    to be written is<br> max(0, min(511,((DCDC voltage in mV) * 2 - 950) * 1024/1000))
 */
#define PMRC_DCDCDIGRATIOTHRESHOLD_VDD23TO12THR(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOTHRESHOLD_VDD23TO12THR_SHIFT)) & PMRC_DCDCDIGRATIOTHRESHOLD_VDD23TO12THR_MASK)
/*! @} */

/*! @name DCDCDIGRATIOCONTROL1 - Up and down ratio control register for DCDC DIG (VDD_DIG) */
/*! @{ */

#define PMRC_DCDCDIGRATIOCONTROL1_MPOUPENABLE_MASK (0x1U)
#define PMRC_DCDCDIGRATIOCONTROL1_MPOUPENABLE_SHIFT (0U)
/*! MpoUpEnable - Enable MPO ratio up
 *  0b0..False
 *  0b1..True
 */
#define PMRC_DCDCDIGRATIOCONTROL1_MPOUPENABLE(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOCONTROL1_MPOUPENABLE_SHIFT)) & PMRC_DCDCDIGRATIOCONTROL1_MPOUPENABLE_MASK)

#define PMRC_DCDCDIGRATIOCONTROL1_AUTOUPENABLE_MASK (0x2U)
#define PMRC_DCDCDIGRATIOCONTROL1_AUTOUPENABLE_SHIFT (1U)
/*! AutoUpEnable - Enable automatic ratio up (disabled by default)
 *  0b0..False
 *  0b1..True
 */
#define PMRC_DCDCDIGRATIOCONTROL1_AUTOUPENABLE(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOCONTROL1_AUTOUPENABLE_SHIFT)) & PMRC_DCDCDIGRATIOCONTROL1_AUTOUPENABLE_MASK)

#define PMRC_DCDCDIGRATIOCONTROL1_AUTODWNENABLE_MASK (0x4U)
#define PMRC_DCDCDIGRATIOCONTROL1_AUTODWNENABLE_SHIFT (2U)
/*! AutoDwnEnable - Enable automatic ratio down (disabled by default)
 *  0b0..False
 *  0b1..True
 */
#define PMRC_DCDCDIGRATIOCONTROL1_AUTODWNENABLE(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOCONTROL1_AUTODWNENABLE_SHIFT)) & PMRC_DCDCDIGRATIOCONTROL1_AUTODWNENABLE_MASK)

#define PMRC_DCDCDIGRATIOCONTROL1_AUTOUPMASK_MASK (0x78U)
#define PMRC_DCDCDIGRATIOCONTROL1_AUTOUPMASK_SHIFT (3U)
/*! AutoUpMask - Mask (=skip) ratio on an auto ratio-up request.<br>If bit 1 is set, ratio 2/3 is
 *    skipped.<br>If bit 2 is set ratio 3/4 is skipped.<br>If bit 3 is set ratio 1 is skipped.
 *  0b0010..Skip ratio 2/3
 *  0b0100..Skip ratio 3/4
 *  0b1000..Skip ratio 1
 */
#define PMRC_DCDCDIGRATIOCONTROL1_AUTOUPMASK(x)  (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOCONTROL1_AUTOUPMASK_SHIFT)) & PMRC_DCDCDIGRATIOCONTROL1_AUTOUPMASK_MASK)

#define PMRC_DCDCDIGRATIOCONTROL1_MPOMASK_MASK   (0xF00U)
#define PMRC_DCDCDIGRATIOCONTROL1_MPOMASK_SHIFT  (8U)
/*! MpoMask - Mask (=skip) ratio on an MPO ratio-up request.<br>If bit 1 is set, ratio 2/3 is
 *    skipped.<br>If bit 2 is set ratio 3/4 is skipped.<br>If bit 3 is set ratio 1 is skipped.<br>This
 *    field must be lower than or equal to field AutoUpMask.
 *  0b0010..Skip ratio 2/3
 *  0b0100..Skip ratio 3/4
 *  0b1000..Skip ratio 1
 */
#define PMRC_DCDCDIGRATIOCONTROL1_MPOMASK(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOCONTROL1_MPOMASK_SHIFT)) & PMRC_DCDCDIGRATIOCONTROL1_MPOMASK_MASK)

#define PMRC_DCDCDIGRATIOCONTROL1_AUTODWNMASK_MASK (0x1E000U)
#define PMRC_DCDCDIGRATIOCONTROL1_AUTODWNMASK_SHIFT (13U)
/*! AutoDwnMask - Mask (=skip) ratio on an auto ratio-down request.<br>If bit 0 is set ratio 1/2 is
 *    skipped.<br>If bit 1 is set, ratio 2/3 is skipped.<br>If bit 2 is set ratio 3/4 is skipped.
 *  0b0001..Skip ratio 1/2
 *  0b0010..Skip ratio 2/3
 *  0b0100..Skip ratio 3/4
 */
#define PMRC_DCDCDIGRATIOCONTROL1_AUTODWNMASK(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOCONTROL1_AUTODWNMASK_SHIFT)) & PMRC_DCDCDIGRATIOCONTROL1_AUTODWNMASK_MASK)
/*! @} */

/*! @name DCDCDIGRATIOCONTROL2 - Control register for sampling windows of DCDC DIG (VDD_DIG).<br>Register is effectively written when vdig_busy bit in Transfer register is read low */
/*! @{ */

#define PMRC_DCDCDIGRATIOCONTROL2_COUNTPERIOD_MASK (0xFFU)
#define PMRC_DCDCDIGRATIOCONTROL2_COUNTPERIOD_SHIFT (0U)
/*! CountPeriod - Window size for digital DCDC counter. */
#define PMRC_DCDCDIGRATIOCONTROL2_COUNTPERIOD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOCONTROL2_COUNTPERIOD_SHIFT)) & PMRC_DCDCDIGRATIOCONTROL2_COUNTPERIOD_MASK)

#define PMRC_DCDCDIGRATIOCONTROL2_DOWNCOUNTPERIOD_MASK (0x1F00U)
#define PMRC_DCDCDIGRATIOCONTROL2_DOWNCOUNTPERIOD_SHIFT (8U)
/*! DownCountPeriod - Subsampling of 2^DownCountPeriod for DCDCdown ratio request. */
#define PMRC_DCDCDIGRATIOCONTROL2_DOWNCOUNTPERIOD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOCONTROL2_DOWNCOUNTPERIOD_SHIFT)) & PMRC_DCDCDIGRATIOCONTROL2_DOWNCOUNTPERIOD_MASK)

#define PMRC_DCDCDIGRATIOCONTROL2_DOWNCOUNTREQUEST_MASK (0x1FE000U)
#define PMRC_DCDCDIGRATIOCONTROL2_DOWNCOUNTREQUEST_SHIFT (13U)
/*! DownCountRequest - Threshold for number of down requests. */
#define PMRC_DCDCDIGRATIOCONTROL2_DOWNCOUNTREQUEST(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOCONTROL2_DOWNCOUNTREQUEST_SHIFT)) & PMRC_DCDCDIGRATIOCONTROL2_DOWNCOUNTREQUEST_MASK)
/*! @} */

/*! @name DCDCDIGRATIOCONTROL3 - Up thresholds control register for DCDC DIG (VDD_DIG).<br>Register is effectively written when vdig_busy bit in Transfer register is read low */
/*! @{ */

#define PMRC_DCDCDIGRATIOCONTROL3_UP12TO23THRESHOLD_MASK (0xFFU)
#define PMRC_DCDCDIGRATIOCONTROL3_UP12TO23THRESHOLD_SHIFT (0U)
/*! Up12to23Threshold - Threshold for ratio-up request from 1/2 to 2/3, ratio will be increased if RatioCounter higher than threshold */
#define PMRC_DCDCDIGRATIOCONTROL3_UP12TO23THRESHOLD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOCONTROL3_UP12TO23THRESHOLD_SHIFT)) & PMRC_DCDCDIGRATIOCONTROL3_UP12TO23THRESHOLD_MASK)

#define PMRC_DCDCDIGRATIOCONTROL3_UP23TO34THRESHOLD_MASK (0xFF0000U)
#define PMRC_DCDCDIGRATIOCONTROL3_UP23TO34THRESHOLD_SHIFT (16U)
/*! Up23to34Threshold - Threshold for ratio-up request from 2/3 to 3/4, ratio will be increased if RatioCounter higher than threshold */
#define PMRC_DCDCDIGRATIOCONTROL3_UP23TO34THRESHOLD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOCONTROL3_UP23TO34THRESHOLD_SHIFT)) & PMRC_DCDCDIGRATIOCONTROL3_UP23TO34THRESHOLD_MASK)

#define PMRC_DCDCDIGRATIOCONTROL3_UP34TO1THRESHOLD_MASK (0xFF000000U)
#define PMRC_DCDCDIGRATIOCONTROL3_UP34TO1THRESHOLD_SHIFT (24U)
/*! Up34to1Threshold - Threshold for ratio-up request from 3/4 to 1, ratio will be increased if RatioCounter higher than threshold */
#define PMRC_DCDCDIGRATIOCONTROL3_UP34TO1THRESHOLD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOCONTROL3_UP34TO1THRESHOLD_SHIFT)) & PMRC_DCDCDIGRATIOCONTROL3_UP34TO1THRESHOLD_MASK)
/*! @} */

/*! @name DCDCDIGRATIOCONTROL4 - Down thresholds control register for DCDC DIG (VDD_DIG).<br>Register is effectively written when vdig_busy bit in Transfer register is read low */
/*! @{ */

#define PMRC_DCDCDIGRATIOCONTROL4_DOWN23TO12THRESHOLD_MASK (0xFFU)
#define PMRC_DCDCDIGRATIOCONTROL4_DOWN23TO12THRESHOLD_SHIFT (0U)
/*! Down23to12Threshold - Threshold for ratio-down request from 2/3 to 1/2, ratio will be decreased if RatioCounter less than threshold */
#define PMRC_DCDCDIGRATIOCONTROL4_DOWN23TO12THRESHOLD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOCONTROL4_DOWN23TO12THRESHOLD_SHIFT)) & PMRC_DCDCDIGRATIOCONTROL4_DOWN23TO12THRESHOLD_MASK)

#define PMRC_DCDCDIGRATIOCONTROL4_DOWN34TO23THRESHOLD_MASK (0xFF0000U)
#define PMRC_DCDCDIGRATIOCONTROL4_DOWN34TO23THRESHOLD_SHIFT (16U)
/*! Down34to23Threshold - Threshold for ratio-down request from 3/4 to 2/3, ratio will be decreased if RatioCounter less than threshold */
#define PMRC_DCDCDIGRATIOCONTROL4_DOWN34TO23THRESHOLD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOCONTROL4_DOWN34TO23THRESHOLD_SHIFT)) & PMRC_DCDCDIGRATIOCONTROL4_DOWN34TO23THRESHOLD_MASK)

#define PMRC_DCDCDIGRATIOCONTROL4_DOWN1TO34THRESHOLD_MASK (0xFF000000U)
#define PMRC_DCDCDIGRATIOCONTROL4_DOWN1TO34THRESHOLD_SHIFT (24U)
/*! Down1to34Threshold - Threshold for ratio-down request from 1 to 3/4, ratio will be decreased if RatioCounter less than threshold */
#define PMRC_DCDCDIGRATIOCONTROL4_DOWN1TO34THRESHOLD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGRATIOCONTROL4_DOWN1TO34THRESHOLD_SHIFT)) & PMRC_DCDCDIGRATIOCONTROL4_DOWN1TO34THRESHOLD_MASK)
/*! @} */

/*! @name DCDCMEMCONTROL - Configure the VMEM DCDC.<br>Register is effectively written when vdig_busy bit in Transfer register is read low.<br>Writing this register triggers an active to pmu_configure state transition. */
/*! @{ */

#define PMRC_DCDCMEMCONTROL_VSET_MASK            (0x3FU)
#define PMRC_DCDCMEMCONTROL_VSET_SHIFT           (0U)
/*! Vset - DC/DC Memory output voltage selection:<br>0-50 500mV+10mV*Vset */
#define PMRC_DCDCMEMCONTROL_VSET(x)              (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMCONTROL_VSET_SHIFT)) & PMRC_DCDCMEMCONTROL_VSET_MASK)

#define PMRC_DCDCMEMCONTROL_BODSET_MASK          (0x1C0U)
#define PMRC_DCDCMEMCONTROL_BODSET_SHIFT         (6U)
/*! BodSet - DC/DC Memory Brown-Out Detector trip level setting:<br>77.5%+BodSet*2.5% */
#define PMRC_DCDCMEMCONTROL_BODSET(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMCONTROL_BODSET_SHIFT)) & PMRC_DCDCMEMCONTROL_BODSET_MASK)
/*! @} */

/*! @name DCDCMEMRATIO - Ratio setting for DCDC MEM (VDD_MEM).<br>Register is effectively written when vdig_busy bit in Transfer register is read low */
/*! @{ */

#define PMRC_DCDCMEMRATIO_VALUE_MASK             (0x3U)
#define PMRC_DCDCMEMRATIO_VALUE_SHIFT            (0U)
/*! Value - Ratio setting for DCDC MEM (VDD_MEM)
 *  0b00..1/2
 *  0b01..2/3
 *  0b10..3/4
 *  0b11..1
 */
#define PMRC_DCDCMEMRATIO_VALUE(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIO_VALUE_SHIFT)) & PMRC_DCDCMEMRATIO_VALUE_MASK)
/*! @} */

/*! @name DCDCMEMRATIOCOUNTER - Ratio Counter for DCDC MEM (VDD_MEM) */
/*! @{ */

#define PMRC_DCDCMEMRATIOCOUNTER_VALUE_MASK      (0xFFU)
#define PMRC_DCDCMEMRATIOCOUNTER_VALUE_SHIFT     (0U)
/*! Value - Counter value */
#define PMRC_DCDCMEMRATIOCOUNTER_VALUE(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOCOUNTER_VALUE_SHIFT)) & PMRC_DCDCMEMRATIOCOUNTER_VALUE_MASK)
/*! @} */

/*! @name DCDCMEMRATIOTHRESHOLD - VDD Ratio Thresholds setting for DCDC MEM (VDD_MEM). */
/*! @{ */

#define PMRC_DCDCMEMRATIOTHRESHOLD_VDD1TO34THR_MASK (0x7FCU)
#define PMRC_DCDCMEMRATIOTHRESHOLD_VDD1TO34THR_SHIFT (2U)
/*! Vdd1to34Thr - Threshold for memory DCDC automatic down ratio for ratio 1 to 3/4. Value to be
 *    written is<br> max(0, min(511,((DCDC voltage in mV) * 4/3 - 950) * 1024/1000))
 */
#define PMRC_DCDCMEMRATIOTHRESHOLD_VDD1TO34THR(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOTHRESHOLD_VDD1TO34THR_SHIFT)) & PMRC_DCDCMEMRATIOTHRESHOLD_VDD1TO34THR_MASK)

#define PMRC_DCDCMEMRATIOTHRESHOLD_VDD34TO23THR_MASK (0xFF800U)
#define PMRC_DCDCMEMRATIOTHRESHOLD_VDD34TO23THR_SHIFT (11U)
/*! Vdd34to23Thr - Threshold for memory DCDC automatic down ratio for ratio 3/4 to 2/3. Value to be
 *    written is<br> max(0, min(511,((DCDC voltage in mV) * 3/2 - 950) * 1024/1000))
 */
#define PMRC_DCDCMEMRATIOTHRESHOLD_VDD34TO23THR(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOTHRESHOLD_VDD34TO23THR_SHIFT)) & PMRC_DCDCMEMRATIOTHRESHOLD_VDD34TO23THR_MASK)

#define PMRC_DCDCMEMRATIOTHRESHOLD_VDD23TO12THR_MASK (0x1FF00000U)
#define PMRC_DCDCMEMRATIOTHRESHOLD_VDD23TO12THR_SHIFT (20U)
/*! Vdd23to12Thr - Threshold for memory DCDC automatic down ratio for ratio 2/3 to 1/2. Value to be
 *    written is<br> max(0, min(511,((DCDC voltage in mV) * 2 - 950) * 1024/1000))
 */
#define PMRC_DCDCMEMRATIOTHRESHOLD_VDD23TO12THR(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOTHRESHOLD_VDD23TO12THR_SHIFT)) & PMRC_DCDCMEMRATIOTHRESHOLD_VDD23TO12THR_MASK)
/*! @} */

/*! @name DCDCMEMRATIOCONTROL1 - Up and down ratio control register for DCDC MEM (VDD_MEM) */
/*! @{ */

#define PMRC_DCDCMEMRATIOCONTROL1_MPOUPENABLE_MASK (0x1U)
#define PMRC_DCDCMEMRATIOCONTROL1_MPOUPENABLE_SHIFT (0U)
/*! MpoUpEnable - Enable MPO ratio up
 *  0b0..False
 *  0b1..True
 */
#define PMRC_DCDCMEMRATIOCONTROL1_MPOUPENABLE(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOCONTROL1_MPOUPENABLE_SHIFT)) & PMRC_DCDCMEMRATIOCONTROL1_MPOUPENABLE_MASK)

#define PMRC_DCDCMEMRATIOCONTROL1_AUTOUPENABLE_MASK (0x2U)
#define PMRC_DCDCMEMRATIOCONTROL1_AUTOUPENABLE_SHIFT (1U)
/*! AutoUpEnable - Enable automatic ratio up
 *  0b0..False
 *  0b1..True
 */
#define PMRC_DCDCMEMRATIOCONTROL1_AUTOUPENABLE(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOCONTROL1_AUTOUPENABLE_SHIFT)) & PMRC_DCDCMEMRATIOCONTROL1_AUTOUPENABLE_MASK)

#define PMRC_DCDCMEMRATIOCONTROL1_AUTODWNENABLE_MASK (0x4U)
#define PMRC_DCDCMEMRATIOCONTROL1_AUTODWNENABLE_SHIFT (2U)
/*! AutoDwnEnable - Enable automatic ratio down
 *  0b0..False
 *  0b1..True
 */
#define PMRC_DCDCMEMRATIOCONTROL1_AUTODWNENABLE(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOCONTROL1_AUTODWNENABLE_SHIFT)) & PMRC_DCDCMEMRATIOCONTROL1_AUTODWNENABLE_MASK)

#define PMRC_DCDCMEMRATIOCONTROL1_AUTOUPMASK_MASK (0x78U)
#define PMRC_DCDCMEMRATIOCONTROL1_AUTOUPMASK_SHIFT (3U)
/*! AutoUpMask - Mask (=skip) ratio on an auto ratio-up request.<br>If bit 1 is set, ratio 2/3 is
 *    skipped.<br>If bit 2 is set ratio 3/4 is skipped.<br>If bit 3 is set ratio 1 is skipped.
 *  0b0010..Skip ratio 2/3
 *  0b0100..Skip ratio 3/4
 *  0b1000..Skip ratio 1
 */
#define PMRC_DCDCMEMRATIOCONTROL1_AUTOUPMASK(x)  (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOCONTROL1_AUTOUPMASK_SHIFT)) & PMRC_DCDCMEMRATIOCONTROL1_AUTOUPMASK_MASK)

#define PMRC_DCDCMEMRATIOCONTROL1_MPOMASK_MASK   (0xF00U)
#define PMRC_DCDCMEMRATIOCONTROL1_MPOMASK_SHIFT  (8U)
/*! MpoMask - Mask (=skip) ratio on an MPO ratio-up request.<br>If bit 1 is set, ratio 2/3 is
 *    skipped.<br>If bit 2 is set ratio 3/4 is skipped.<br>If bit 3 is set ratio 1 is skipped.<br>This
 *    field must be lower than or equal to field AutoUpMask.
 *  0b0010..Skip ratio 2/3
 *  0b0100..Skip ratio 3/4
 *  0b1000..Skip ratio 1
 */
#define PMRC_DCDCMEMRATIOCONTROL1_MPOMASK(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOCONTROL1_MPOMASK_SHIFT)) & PMRC_DCDCMEMRATIOCONTROL1_MPOMASK_MASK)

#define PMRC_DCDCMEMRATIOCONTROL1_AUTODWNMASK_MASK (0x1E000U)
#define PMRC_DCDCMEMRATIOCONTROL1_AUTODWNMASK_SHIFT (13U)
/*! AutoDwnMask - Mask (=skip) ratio on an auto ratio-down request.<br>If bit 0 is set ratio 1/2 is
 *    skipped.<br>If bit 1 is set, ratio 2/3 is skipped.<br>If bit 2 is set ratio 3/4 is skipped.
 *  0b0001..Skip ratio 1/2
 *  0b0010..Skip ratio 2/3
 *  0b0100..Skip ratio 3/4
 */
#define PMRC_DCDCMEMRATIOCONTROL1_AUTODWNMASK(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOCONTROL1_AUTODWNMASK_SHIFT)) & PMRC_DCDCMEMRATIOCONTROL1_AUTODWNMASK_MASK)
/*! @} */

/*! @name DCDCMEMRATIOCONTROL2 - Control register for sampling windows of DCDC MEM (VDD_MEM).<br>Register is effectively written when vdig_busy bit in Transfer register is read low */
/*! @{ */

#define PMRC_DCDCMEMRATIOCONTROL2_COUNTPERIOD_MASK (0xFFU)
#define PMRC_DCDCMEMRATIOCONTROL2_COUNTPERIOD_SHIFT (0U)
/*! CountPeriod - Window size for memory DCDC counter. */
#define PMRC_DCDCMEMRATIOCONTROL2_COUNTPERIOD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOCONTROL2_COUNTPERIOD_SHIFT)) & PMRC_DCDCMEMRATIOCONTROL2_COUNTPERIOD_MASK)

#define PMRC_DCDCMEMRATIOCONTROL2_DOWNCOUNTPERIOD_MASK (0x1F00U)
#define PMRC_DCDCMEMRATIOCONTROL2_DOWNCOUNTPERIOD_SHIFT (8U)
/*! DownCountPeriod - Subsampling of 2^DownCountPeriod for DCDCdown ratio request. */
#define PMRC_DCDCMEMRATIOCONTROL2_DOWNCOUNTPERIOD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOCONTROL2_DOWNCOUNTPERIOD_SHIFT)) & PMRC_DCDCMEMRATIOCONTROL2_DOWNCOUNTPERIOD_MASK)

#define PMRC_DCDCMEMRATIOCONTROL2_DOWNCOUNTREQUEST_MASK (0x1FE000U)
#define PMRC_DCDCMEMRATIOCONTROL2_DOWNCOUNTREQUEST_SHIFT (13U)
/*! DownCountRequest - Threshold for number of down requests. */
#define PMRC_DCDCMEMRATIOCONTROL2_DOWNCOUNTREQUEST(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOCONTROL2_DOWNCOUNTREQUEST_SHIFT)) & PMRC_DCDCMEMRATIOCONTROL2_DOWNCOUNTREQUEST_MASK)
/*! @} */

/*! @name DCDCMEMRATIOCONTROL3 - Up thresholds control register for DCDC MEM (VDD_MEM).<br>Register is effectively written when vdig_busy bit in Transfer register is read low */
/*! @{ */

#define PMRC_DCDCMEMRATIOCONTROL3_UP12TO23THRESHOLD_MASK (0xFFU)
#define PMRC_DCDCMEMRATIOCONTROL3_UP12TO23THRESHOLD_SHIFT (0U)
/*! Up12to23Threshold - Threshold for ratio-up request from 1/2 to 2/3, ratio will be increased if RatioCounter higher than threshold */
#define PMRC_DCDCMEMRATIOCONTROL3_UP12TO23THRESHOLD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOCONTROL3_UP12TO23THRESHOLD_SHIFT)) & PMRC_DCDCMEMRATIOCONTROL3_UP12TO23THRESHOLD_MASK)

#define PMRC_DCDCMEMRATIOCONTROL3_UP23TO34THRESHOLD_MASK (0xFF0000U)
#define PMRC_DCDCMEMRATIOCONTROL3_UP23TO34THRESHOLD_SHIFT (16U)
/*! Up23to34Threshold - Threshold for ratio-up request from 2/3 to 3/4, ratio will be increased if RatioCounter higher than threshold */
#define PMRC_DCDCMEMRATIOCONTROL3_UP23TO34THRESHOLD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOCONTROL3_UP23TO34THRESHOLD_SHIFT)) & PMRC_DCDCMEMRATIOCONTROL3_UP23TO34THRESHOLD_MASK)

#define PMRC_DCDCMEMRATIOCONTROL3_UP34TO1THRESHOLD_MASK (0xFF000000U)
#define PMRC_DCDCMEMRATIOCONTROL3_UP34TO1THRESHOLD_SHIFT (24U)
/*! Up34to1Threshold - Threshold for ratio-up request from 3/4 to 1, ratio will be increased if RatioCounter higher than threshold */
#define PMRC_DCDCMEMRATIOCONTROL3_UP34TO1THRESHOLD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOCONTROL3_UP34TO1THRESHOLD_SHIFT)) & PMRC_DCDCMEMRATIOCONTROL3_UP34TO1THRESHOLD_MASK)
/*! @} */

/*! @name DCDCMEMRATIOCONTROL4 - Down thresholds control register for DCDC MEM (VDD_MEM).<br>Register is effectively written when vdig_busy bit in Transfer register is read low */
/*! @{ */

#define PMRC_DCDCMEMRATIOCONTROL4_DOWN23TO12THRESHOLD_MASK (0xFFU)
#define PMRC_DCDCMEMRATIOCONTROL4_DOWN23TO12THRESHOLD_SHIFT (0U)
/*! Down23to12Threshold - Threshold for ratio-down request from 2/3 to 1/2, ratio will be decreased if RatioCounter less than threshold */
#define PMRC_DCDCMEMRATIOCONTROL4_DOWN23TO12THRESHOLD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOCONTROL4_DOWN23TO12THRESHOLD_SHIFT)) & PMRC_DCDCMEMRATIOCONTROL4_DOWN23TO12THRESHOLD_MASK)

#define PMRC_DCDCMEMRATIOCONTROL4_DOWN34TO23THRESHOLD_MASK (0xFF0000U)
#define PMRC_DCDCMEMRATIOCONTROL4_DOWN34TO23THRESHOLD_SHIFT (16U)
/*! Down34to23Threshold - Threshold for ratio-down request from 3/4 to 2/3, ratio will be decreased if RatioCounter less than threshold */
#define PMRC_DCDCMEMRATIOCONTROL4_DOWN34TO23THRESHOLD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOCONTROL4_DOWN34TO23THRESHOLD_SHIFT)) & PMRC_DCDCMEMRATIOCONTROL4_DOWN34TO23THRESHOLD_MASK)

#define PMRC_DCDCMEMRATIOCONTROL4_DOWN1TO34THRESHOLD_MASK (0xFF000000U)
#define PMRC_DCDCMEMRATIOCONTROL4_DOWN1TO34THRESHOLD_SHIFT (24U)
/*! Down1to34Threshold - Threshold for ratio-down request from 1 to 3/4, ratio will be decreased if RatioCounter less than threshold */
#define PMRC_DCDCMEMRATIOCONTROL4_DOWN1TO34THRESHOLD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMRATIOCONTROL4_DOWN1TO34THRESHOLD_SHIFT)) & PMRC_DCDCMEMRATIOCONTROL4_DOWN1TO34THRESHOLD_MASK)
/*! @} */

/*! @name LDOCONTROL - Configure the LDO ANA and CGU regulators */
/*! @{ */

#define PMRC_LDOCONTROL_ANAVSET_MASK             (0x3FU)
#define PMRC_LDOCONTROL_ANAVSET_SHIFT            (0U)
/*! AnaVset - LDO ANA vref:<br>0 461mV,<br>1-23 462mV+3mV*AnaVset,<br>24-50 463mV+3mV*AnaVset,<br>51-63 464mV+3mV*AnaVset */
#define PMRC_LDOCONTROL_ANAVSET(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_LDOCONTROL_ANAVSET_SHIFT)) & PMRC_LDOCONTROL_ANAVSET_MASK)

#define PMRC_LDOCONTROL_ANABODVSET_MASK          (0x1C0U)
#define PMRC_LDOCONTROL_ANABODVSET_SHIFT         (6U)
/*! AnaBodVset - LDO Ana Brown-Out Detector trip level setting:<br>77.5%+2.5%*AnaBodVset */
#define PMRC_LDOCONTROL_ANABODVSET(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_LDOCONTROL_ANABODVSET_SHIFT)) & PMRC_LDOCONTROL_ANABODVSET_MASK)

#define PMRC_LDOCONTROL_ANAFBSEL1H_MASK          (0x3E00U)
#define PMRC_LDOCONTROL_ANAFBSEL1H_SHIFT         (9U)
/*! AnaFbSel1h - LDO Ana feedback ladder selection : 1 - internal diode ladder, 2 - external ADC
 *    ladder, 4 - external ADC ladder 2, 8 - external ADC ladder 3, 16 - internal resistive ladder
 */
#define PMRC_LDOCONTROL_ANAFBSEL1H(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_LDOCONTROL_ANAFBSEL1H_SHIFT)) & PMRC_LDOCONTROL_ANAFBSEL1H_MASK)

#define PMRC_LDOCONTROL_DIODESET_MASK            (0x7C000U)
#define PMRC_LDOCONTROL_DIODESET_SHIFT           (14U)
/*! DiodeSet - VDD_ANA output when using diode ladder */
#define PMRC_LDOCONTROL_DIODESET(x)              (((uint32_t)(((uint32_t)(x)) << PMRC_LDOCONTROL_DIODESET_SHIFT)) & PMRC_LDOCONTROL_DIODESET_MASK)

#define PMRC_LDOCONTROL_RESSET_MASK              (0xF80000U)
#define PMRC_LDOCONTROL_RESSET_SHIFT             (19U)
/*! ResSet - VDD_ANA output when using resistive ladder */
#define PMRC_LDOCONTROL_RESSET(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_LDOCONTROL_RESSET_SHIFT)) & PMRC_LDOCONTROL_RESSET_MASK)

#define PMRC_LDOCONTROL_CGUVSET_MASK             (0xF000000U)
#define PMRC_LDOCONTROL_CGUVSET_SHIFT            (24U)
/*! CguVset - LDO CGU output voltage selection:<br>0-15 500mV+22mV*CguVset */
#define PMRC_LDOCONTROL_CGUVSET(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_LDOCONTROL_CGUVSET_SHIFT)) & PMRC_LDOCONTROL_CGUVSET_MASK)

#define PMRC_LDOCONTROL_CGUBODVSET_MASK          (0x70000000U)
#define PMRC_LDOCONTROL_CGUBODVSET_SHIFT         (28U)
/*! CguBodVset - LDO CGU Brown-Out Detector level setting:<br>0-7 (22.5-2.5*CguBodVset)% below the setpoint */
#define PMRC_LDOCONTROL_CGUBODVSET(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_LDOCONTROL_CGUBODVSET_SHIFT)) & PMRC_LDOCONTROL_CGUBODVSET_MASK)
/*! @} */

/*! @name LDOMEMCONTROL - Persistent register.<br>Control for MEM LDO.<br>Register is effectively written when corresponding bit in Transfer register is read low */
/*! @{ */

#define PMRC_LDOMEMCONTROL_SET_MASK              (0x3FU)
#define PMRC_LDOMEMCONTROL_SET_SHIFT             (0U)
/*! set - set memory LDO output:<br>VDD_MEM = 0.50V+0.01\*set for set<50 */
#define PMRC_LDOMEMCONTROL_SET(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_LDOMEMCONTROL_SET_SHIFT)) & PMRC_LDOMEMCONTROL_SET_MASK)

#define PMRC_LDOMEMCONTROL_SET_VREF_MASK         (0x1FC0U)
#define PMRC_LDOMEMCONTROL_SET_VREF_SHIFT        (6U)
/*! set_vref - Set reference voltage of 500mV: 0.3645+set_vref*0.0042 */
#define PMRC_LDOMEMCONTROL_SET_VREF(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_LDOMEMCONTROL_SET_VREF_SHIFT)) & PMRC_LDOMEMCONTROL_SET_VREF_MASK)

#define PMRC_LDOMEMCONTROL_BODVSET_MASK          (0xE000U)
#define PMRC_LDOMEMCONTROL_BODVSET_SHIFT         (13U)
/*! BodVset - memory LDO BOD level setting:<br>77.5%+2.5%*MemBodVset */
#define PMRC_LDOMEMCONTROL_BODVSET(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_LDOMEMCONTROL_BODVSET_SHIFT)) & PMRC_LDOMEMCONTROL_BODVSET_MASK)
/*! @} */

/*! @name CALIBRATIONCONTROL - Semi-Persistent register.<br>Control Calibration settings.<br>Register is effectively written when corresponding bit in Transfer register is read low */
/*! @{ */

#define PMRC_CALIBRATIONCONTROL_CALREFSETTC_MASK (0x7U)
#define PMRC_CALIBRATIONCONTROL_CALREFSETTC_SHIFT (0U)
/*! CalRefSetTC - Trim bandgap temperature behavior:
 *  0b000..+3% to -3%
 *  0b001..+1.9% to -1.9%
 *  0b010..+1.3% to -1.3%
 *  0b011..+0.7% to -0.7%
 *  0b100..+0% to -0%
 *  0b101..-0.6% to +0.6%
 *  0b110..-1.5% to +15%
 *  0b111..-3% to +3%
 */
#define PMRC_CALIBRATIONCONTROL_CALREFSETTC(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_CALIBRATIONCONTROL_CALREFSETTC_SHIFT)) & PMRC_CALIBRATIONCONTROL_CALREFSETTC_MASK)
/*! @} */

/*! @name VREFBIAS - Control of LDO references and bias settings */
/*! @{ */

#define PMRC_VREFBIAS_BIASANA_MASK               (0xFU)
#define PMRC_VREFBIAS_BIASANA_SHIFT              (0U)
/*! BiasAna - LDO Ana / FROs internal biasing setting<br>range 100nA ~ 300nA */
#define PMRC_VREFBIAS_BIASANA(x)                 (((uint32_t)(((uint32_t)(x)) << PMRC_VREFBIAS_BIASANA_SHIFT)) & PMRC_VREFBIAS_BIASANA_MASK)

#define PMRC_VREFBIAS_BIASMEM_MASK               (0xF0U)
#define PMRC_VREFBIAS_BIASMEM_SHIFT              (4U)
/*! BiasMem - LDO Memory internal biasing setting<br>range 100nA ~ 300nA */
#define PMRC_VREFBIAS_BIASMEM(x)                 (((uint32_t)(((uint32_t)(x)) << PMRC_VREFBIAS_BIASMEM_SHIFT)) & PMRC_VREFBIAS_BIASMEM_MASK)

#define PMRC_VREFBIAS_BIASMON_MASK               (0xF00U)
#define PMRC_VREFBIAS_BIASMON_SHIFT              (8U)
/*! BiasMon - Supply Monitor internal biasing setting<br>range 100nA ~ 300nA */
#define PMRC_VREFBIAS_BIASMON(x)                 (((uint32_t)(((uint32_t)(x)) << PMRC_VREFBIAS_BIASMON_SHIFT)) & PMRC_VREFBIAS_BIASMON_MASK)

#define PMRC_VREFBIAS_VREFANA_MASK               (0x7F000U)
#define PMRC_VREFBIAS_VREFANA_SHIFT              (12U)
/*! VrefAna - Set reference voltage for 500mV: 0.3645V+VrefAna*0.0042V */
#define PMRC_VREFBIAS_VREFANA(x)                 (((uint32_t)(((uint32_t)(x)) << PMRC_VREFBIAS_VREFANA_SHIFT)) & PMRC_VREFBIAS_VREFANA_MASK)

#define PMRC_VREFBIAS_VREFMON_MASK               (0x3F80000U)
#define PMRC_VREFBIAS_VREFMON_SHIFT              (19U)
/*! VrefMon - Set reference voltage for 600mV: 0.4372V+VrefMon*0.0051V */
#define PMRC_VREFBIAS_VREFMON(x)                 (((uint32_t)(((uint32_t)(x)) << PMRC_VREFBIAS_VREFMON_SHIFT)) & PMRC_VREFBIAS_VREFMON_MASK)

#define PMRC_VREFBIAS_EAIBIASSET_MASK            (0xC000000U)
#define PMRC_VREFBIAS_EAIBIASSET_SHIFT           (26U)
/*! EaIbiasSet - LDO Ana bias current EA : 0 - 10uA, 1 - 15uA, 2 -20uA */
#define PMRC_VREFBIAS_EAIBIASSET(x)              (((uint32_t)(((uint32_t)(x)) << PMRC_VREFBIAS_EAIBIASSET_SHIFT)) & PMRC_VREFBIAS_EAIBIASSET_MASK)

#define PMRC_VREFBIAS_EARCSET_MASK               (0x30000000U)
#define PMRC_VREFBIAS_EARCSET_SHIFT              (28U)
/*! EaRcSet - set RC at the output of the EA: 0 - no RC at EA output, 1 - 3MOhm+50pF at the output
 *    ofthe EA, 2 - 2MOhm+50pF at the output of the EA
 */
#define PMRC_VREFBIAS_EARCSET(x)                 (((uint32_t)(((uint32_t)(x)) << PMRC_VREFBIAS_EARCSET_SHIFT)) & PMRC_VREFBIAS_EARCSET_MASK)
/*! @} */

/*! @name TIMERCONTROL - Configure the LF-Timer & FSM-Timer for PMRC ACTIVE mode operation */
/*! @{ */

#define PMRC_TIMERCONTROL_MODE_MASK              (0x1U)
#define PMRC_TIMERCONTROL_MODE_SHIFT             (0U)
/*! Mode - Mode configuration (LF-Timer)
 *  0b0..Continuous, in this mode the value of LfTimerUserDelay can be changed if the timer is running.
 *  0b1..OneShot
 */
#define PMRC_TIMERCONTROL_MODE(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_TIMERCONTROL_MODE_SHIFT)) & PMRC_TIMERCONTROL_MODE_MASK)

#define PMRC_TIMERCONTROL_ENABLE_MASK            (0x2U)
#define PMRC_TIMERCONTROL_ENABLE_SHIFT           (1U)
/*! Enable - Enable the timer (LF-Timer)
 *  0b0..False
 *  0b1..True
 */
#define PMRC_TIMERCONTROL_ENABLE(x)              (((uint32_t)(((uint32_t)(x)) << PMRC_TIMERCONTROL_ENABLE_SHIFT)) & PMRC_TIMERCONTROL_ENABLE_MASK)

#define PMRC_TIMERCONTROL_START_MASK             (0x4U)
#define PMRC_TIMERCONTROL_START_SHIFT            (2U)
/*! Start - Load and (re-)start the timer (LF-Timer) / timer started.<br>Register bit is effectively
 *    written when vdig_busy bit in Transfer register is read low.
 *  0b0..No action / False
 *  0b1..Start timer / True
 */
#define PMRC_TIMERCONTROL_START(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_TIMERCONTROL_START_SHIFT)) & PMRC_TIMERCONTROL_START_MASK)

#define PMRC_TIMERCONTROL_ENABLEPAUSE_MASK       (0x8U)
#define PMRC_TIMERCONTROL_ENABLEPAUSE_SHIFT      (3U)
/*! EnablePause - Enable pausing the timer (LF-Timer & FSM-Timer) during Control processor debug break
 *  0b0..False
 *  0b1..True
 */
#define PMRC_TIMERCONTROL_ENABLEPAUSE(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_TIMERCONTROL_ENABLEPAUSE_SHIFT)) & PMRC_TIMERCONTROL_ENABLEPAUSE_MASK)
/*! @} */

/*! @name LFTIMERUSERDELAY - Persistent register.<br>Define the LF-Timer period.<br>Register is effectively written when corresponding bit in Transfer register is read low */
/*! @{ */

#define PMRC_LFTIMERUSERDELAY_VALUE_MASK         (0xFFFFFFFFU)
#define PMRC_LFTIMERUSERDELAY_VALUE_SHIFT        (0U)
/*! Value - Value given as number of LF-oscillator clock periods (an extra 2 clock cycles is added
 *    to the total count).<br>When used for low power states a value of 0 disables the timer.
 */
#define PMRC_LFTIMERUSERDELAY_VALUE(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_LFTIMERUSERDELAY_VALUE_SHIFT)) & PMRC_LFTIMERUSERDELAY_VALUE_MASK)
/*! @} */

/*! @name FSMTIMERPMUDELAY - Define the PMU configure settling time */
/*! @{ */

#define PMRC_FSMTIMERPMUDELAY_VALUE_MASK         (0x1FFFU)
#define PMRC_FSMTIMERPMUDELAY_VALUE_SHIFT        (0U)
/*! Value - Tpmu (PMU settling time) in LF-oscillator clock periods, pessimistic 1 ms default,
 *    reduce this to actual settling time (an extra 2 clock cycles is added to the total count)
 */
#define PMRC_FSMTIMERPMUDELAY_VALUE(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_FSMTIMERPMUDELAY_VALUE_SHIFT)) & PMRC_FSMTIMERPMUDELAY_VALUE_MASK)
/*! @} */

/*! @name FSMTIMERRSTDELAY - Define the warm reset settling time */
/*! @{ */

#define PMRC_FSMTIMERRSTDELAY_VALUE_MASK         (0x1FFFU)
#define PMRC_FSMTIMERRSTDELAY_VALUE_SHIFT        (0U)
/*! Value - Trst (Warm reset settling time) in LF-oscillator clock periods, approximatively 1 ms
 *    default (an extra 2 clock cycles is added to the total count)
 */
#define PMRC_FSMTIMERRSTDELAY_VALUE(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_FSMTIMERRSTDELAY_VALUE_SHIFT)) & PMRC_FSMTIMERRSTDELAY_VALUE_MASK)
/*! @} */

/*! @name LFTIMERUSERVALUE - Persistent register.<br> LF-Timer current value. */
/*! @{ */

#define PMRC_LFTIMERUSERVALUE_VALUE_MASK         (0xFFFFFFFFU)
#define PMRC_LFTIMERUSERVALUE_VALUE_SHIFT        (0U)
/*! Value - Snapshot of the current timer value given as number of LF-oscillator clock periods. */
#define PMRC_LFTIMERUSERVALUE_VALUE(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_LFTIMERUSERVALUE_VALUE_SHIFT)) & PMRC_LFTIMERUSERVALUE_VALUE_MASK)
/*! @} */

/*! @name MODECONTROL - Control of the PMRC FSM */
/*! @{ */

#define PMRC_MODECONTROL_LPENABLE_MASK           (0x1U)
#define PMRC_MODECONTROL_LPENABLE_SHIFT          (0U)
/*! LpEnable - Enable Low Power mode on Cortex WFI
 *  0b0..Low Power mode is disabled
 *  0b1..Low Power mode is enabled
 */
#define PMRC_MODECONTROL_LPENABLE(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_MODECONTROL_LPENABLE_SHIFT)) & PMRC_MODECONTROL_LPENABLE_MASK)

#define PMRC_MODECONTROL_LPMODE_MASK             (0x6U)
#define PMRC_MODECONTROL_LPMODE_SHIFT            (1U)
/*! LpMode - Select Low Power mode when Cortex is in WFI/WFE
 *  0b00..DeepSleep mode is entered on WFI/WFE
 *  0b01..Powerdown mode is entered on WFI/WFE
 *  0b10..DeepPowerdown mode is entered on WFI/WFE
 *  0b11..DeepSleep mode is entered on WFI/WFE
 */
#define PMRC_MODECONTROL_LPMODE(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_MODECONTROL_LPMODE_SHIFT)) & PMRC_MODECONTROL_LPMODE_MASK)

#define PMRC_MODECONTROL_POR_MASK                (0x8U)
#define PMRC_MODECONTROL_POR_SHIFT               (3U)
/*! Por - Emulate VDD power-on reset by software
 *  0b0..No effect
 *  0b1..Trigger por
 */
#define PMRC_MODECONTROL_POR(x)                  (((uint32_t)(((uint32_t)(x)) << PMRC_MODECONTROL_POR_SHIFT)) & PMRC_MODECONTROL_POR_MASK)

#define PMRC_MODECONTROL_SHUTDOWN_MASK           (0x10U)
#define PMRC_MODECONTROL_SHUTDOWN_SHIFT          (4U)
/*! Shutdown - Force entry to Shutdown mode.<br>Register bit is effectively written when vdig_busy
 *    bit in Transfer register is read low.
 *  0b0..No effect
 *  0b1..Trigger shutdown
 */
#define PMRC_MODECONTROL_SHUTDOWN(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_MODECONTROL_SHUTDOWN_SHIFT)) & PMRC_MODECONTROL_SHUTDOWN_MASK)

#define PMRC_MODECONTROL_LP_MASK                 (0x20U)
#define PMRC_MODECONTROL_LP_SHIFT                (5U)
/*! Lp - Force entry to Low Power Mode.<br>Register bit is effectively written when vdig_busy bit in
 *    Transfer register is read low.
 *  0b0..No effect
 *  0b1..Trigger entry to low power mode (deepsleep if LpMode is set to 00, Powerdown if LpMode is set to 01, Deep Powerdown is LpMode is set to 10)
 */
#define PMRC_MODECONTROL_LP(x)                   (((uint32_t)(((uint32_t)(x)) << PMRC_MODECONTROL_LP_SHIFT)) & PMRC_MODECONTROL_LP_MASK)

#define PMRC_MODECONTROL_CSI2DIGISOENABLE_MASK   (0x40U)
#define PMRC_MODECONTROL_CSI2DIGISOENABLE_SHIFT  (6U)
/*! csi2digisoenable - Control of the isolation enable for cells between VDD_DIG and VDD_CSI_A. */
#define PMRC_MODECONTROL_CSI2DIGISOENABLE(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_MODECONTROL_CSI2DIGISOENABLE_SHIFT)) & PMRC_MODECONTROL_CSI2DIGISOENABLE_MASK)
/*! @} */

/*! @name STATUS - Read status of the PMRC FSM */
/*! @{ */

#define PMRC_STATUS_FSMSTATE_MASK                (0x3FU)
#define PMRC_STATUS_FSMSTATE_SHIFT               (0U)
/*! FsmState - Binary converted value of FSM state, to be used only for debug (not during state transition)
 *  0b000000..e_por
 *  0b000001..e_debounce_test
 *  0b000010..e_debounce
 *  0b000011..e_startup
 *  0b000100..e_startup_ldoana
 *  0b000101..e_startup_fro1
 *  0b000110..e_startup_fro2
 *  0b000111..e_startup_dcdc_mem
 *  0b001000..e_startup_dcdc_dig
 *  0b001001..e_startup_analog_reset
 *  0b001010..e_read_otp
 *  0b001011..e_active
 *  0b001100..e_pmu_configure
 *  0b001101..e_powerdown_entry_state
 *  0b001110..e_powerdown_entry_state_ldo_mem
 *  0b001111..e_powerdown_entry_state_ldo_dcdc
 *  0b010000..e_powerdown_entry_state_ldo_mem_bod
 *  0b010001..e_powerdown_entry_state_ready
 *  0b010010..e_powerdown
 *  0b010011..e_powerdown_exit
 *  0b010100..e_deeppowerdown_entry_state
 *  0b010101..e_deeppowerdown
 *  0b010110..e_deeppowerdown_exit
 *  0b010111..e_rst_prepare
 *  0b011000..e_rst
 *  0b011001..e_shutdown
 *  0b011010..e_test
 *  0b011011..e_memory_cfg
 *  0b011100..e_deepsleep_entry_state
 *  0b011101..e_deepsleep_entry_state_dcdc
 *  0b011110..e_deepsleep
 *  0b011111..e_deepsleep_exit
 *  0b100000..e_test_entry
 *  0b100001..e_tbd
 *  0b100010..e_tbd
 *  0b100011..e_tbd
 *  0b100100..e_tbd
 *  0b100101..e_tbd
 */
#define PMRC_STATUS_FSMSTATE(x)                  (((uint32_t)(((uint32_t)(x)) << PMRC_STATUS_FSMSTATE_SHIFT)) & PMRC_STATUS_FSMSTATE_MASK)

#define PMRC_STATUS_STARTUPATTEMPT_MASK          (0xC0U)
#define PMRC_STATUS_STARTUPATTEMPT_SHIFT         (6U)
/*! StartupAttempt - Number of failed startup attempts. Note that if value is 2, either 2 or 3
 *    attempts were made (on third one, no new attempt is made and PMRC continue the startup sequence)
 */
#define PMRC_STATUS_STARTUPATTEMPT(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_STATUS_STARTUPATTEMPT_SHIFT)) & PMRC_STATUS_STARTUPATTEMPT_MASK)

#define PMRC_STATUS_TIMEOUT_MASK                 (0x100U)
#define PMRC_STATUS_TIMEOUT_SHIFT                (8U)
/*! Timeout - Unexpected timeout occured during startup */
#define PMRC_STATUS_TIMEOUT(x)                   (((uint32_t)(((uint32_t)(x)) << PMRC_STATUS_TIMEOUT_SHIFT)) & PMRC_STATUS_TIMEOUT_MASK)
/*! @} */

/*! @name PMUSTATUS - Read status of PMU (DCDC regulators, LDOs and supply monitors) */
/*! @{ */

#define PMRC_PMUSTATUS_VDDDIGOK_MASK             (0x1U)
#define PMRC_PMUSTATUS_VDDDIGOK_SHIFT            (0U)
/*! VddDigOk - VDD_DIG ok
 *  0b0..False
 *  0b1..True
 */
#define PMRC_PMUSTATUS_VDDDIGOK(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_PMUSTATUS_VDDDIGOK_SHIFT)) & PMRC_PMUSTATUS_VDDDIGOK_MASK)

#define PMRC_PMUSTATUS_VDDMEMOK_MASK             (0x2U)
#define PMRC_PMUSTATUS_VDDMEMOK_SHIFT            (1U)
/*! VddMemOk - VDD_MEM ok
 *  0b0..False
 *  0b1..True
 */
#define PMRC_PMUSTATUS_VDDMEMOK(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_PMUSTATUS_VDDMEMOK_SHIFT)) & PMRC_PMUSTATUS_VDDMEMOK_MASK)

#define PMRC_PMUSTATUS_VDDANAOK_MASK             (0x4U)
#define PMRC_PMUSTATUS_VDDANAOK_SHIFT            (2U)
/*! VddAnaOk - Analog LDO ok
 *  0b0..False
 *  0b1..True
 */
#define PMRC_PMUSTATUS_VDDANAOK(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_PMUSTATUS_VDDANAOK_SHIFT)) & PMRC_PMUSTATUS_VDDANAOK_MASK)

#define PMRC_PMUSTATUS_VDDCGUOK_MASK             (0x8U)
#define PMRC_PMUSTATUS_VDDCGUOK_SHIFT            (3U)
/*! VddCguOk - CGU LDO ok
 *  0b0..False
 *  0b1..True
 */
#define PMRC_PMUSTATUS_VDDCGUOK(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_PMUSTATUS_VDDCGUOK_SHIFT)) & PMRC_PMUSTATUS_VDDCGUOK_MASK)

#define PMRC_PMUSTATUS_VDDMEMLDOOK_MASK          (0x10U)
#define PMRC_PMUSTATUS_VDDMEMLDOOK_SHIFT         (4U)
/*! VddMemLdoOk - memory LDO ok, this bit is only for validation and test purposes.
 *  0b0..False
 *  0b1..True
 */
#define PMRC_PMUSTATUS_VDDMEMLDOOK(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_PMUSTATUS_VDDMEMLDOOK_SHIFT)) & PMRC_PMUSTATUS_VDDMEMLDOOK_MASK)

#define PMRC_PMUSTATUS_VDDOK_MASK                (0x20U)
#define PMRC_PMUSTATUS_VDDOK_SHIFT               (5U)
/*! VddOk - VDD ok
 *  0b0..False
 *  0b1..True
 */
#define PMRC_PMUSTATUS_VDDOK(x)                  (((uint32_t)(((uint32_t)(x)) << PMRC_PMUSTATUS_VDDOK_SHIFT)) & PMRC_PMUSTATUS_VDDOK_MASK)

#define PMRC_PMUSTATUS_VDDIO0OK_MASK             (0x40U)
#define PMRC_PMUSTATUS_VDDIO0OK_SHIFT            (6U)
/*! VddIo0Ok - VDDIO0 ok
 *  0b0..False
 *  0b1..True
 */
#define PMRC_PMUSTATUS_VDDIO0OK(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_PMUSTATUS_VDDIO0OK_SHIFT)) & PMRC_PMUSTATUS_VDDIO0OK_MASK)

#define PMRC_PMUSTATUS_VDDIO1OK_MASK             (0x80U)
#define PMRC_PMUSTATUS_VDDIO1OK_SHIFT            (7U)
/*! VddIo1Ok - VDDIO1 ok
 *  0b0..False
 *  0b1..True
 */
#define PMRC_PMUSTATUS_VDDIO1OK(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_PMUSTATUS_VDDIO1OK_SHIFT)) & PMRC_PMUSTATUS_VDDIO1OK_MASK)

#define PMRC_PMUSTATUS_VDDIO2OK_MASK             (0x100U)
#define PMRC_PMUSTATUS_VDDIO2OK_SHIFT            (8U)
/*! VddIo2Ok - VDDIO2 ok
 *  0b0..False
 *  0b1..True
 */
#define PMRC_PMUSTATUS_VDDIO2OK(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_PMUSTATUS_VDDIO2OK_SHIFT)) & PMRC_PMUSTATUS_VDDIO2OK_MASK)

#define PMRC_PMUSTATUS_VDDIO3OK_MASK             (0x200U)
#define PMRC_PMUSTATUS_VDDIO3OK_SHIFT            (9U)
/*! VddIo3Ok - VDDIO3 ok
 *  0b0..False
 *  0b1..True
 */
#define PMRC_PMUSTATUS_VDDIO3OK(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_PMUSTATUS_VDDIO3OK_SHIFT)) & PMRC_PMUSTATUS_VDDIO3OK_MASK)
/*! @} */

/*! @name POWERDOWNSAFE1 - Persistent register.<br>PowerDown-safe register 1.<br>Register is effectively written when corresponding bit in Transfer register is read low */
/*! @{ */

#define PMRC_POWERDOWNSAFE1_VALUE_MASK           (0xFFFFFFFFU)
#define PMRC_POWERDOWNSAFE1_VALUE_SHIFT          (0U)
/*! Value - Value */
#define PMRC_POWERDOWNSAFE1_VALUE(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_POWERDOWNSAFE1_VALUE_SHIFT)) & PMRC_POWERDOWNSAFE1_VALUE_MASK)
/*! @} */

/*! @name POWERDOWNSAFE2 - Persistent register.<br>PowerDown-safe register 2.<br>Register is effectively written when corresponding bit in Transfer register is read low */
/*! @{ */

#define PMRC_POWERDOWNSAFE2_VALUE_MASK           (0xFFFFFFFFU)
#define PMRC_POWERDOWNSAFE2_VALUE_SHIFT          (0U)
/*! Value - Value */
#define PMRC_POWERDOWNSAFE2_VALUE(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_POWERDOWNSAFE2_VALUE_SHIFT)) & PMRC_POWERDOWNSAFE2_VALUE_MASK)
/*! @} */

/*! @name POWERFAILCONFIG - Semi-Persistent register.<br>Control of the PMRC FSM behavior when a power failure is detected.<br>Register is effectively written when corresponding bit in Transfer register is read low */
/*! @{ */

#define PMRC_POWERFAILCONFIG_DISABLEVDIGSTDOK_MASK (0x1U)
#define PMRC_POWERFAILCONFIG_DISABLEVDIGSTDOK_SHIFT (0U)
/*! DisableVdigStdOk - If set to 1, prevents the PMRC FSM to POR the chip if the VDD_DIG voltage is below DcdcDigControl.BodSet threshold
 *  0b0..Por on VDD_DIG not OK
 *  0b1..Don't Por on VDD_DIG not OK
 */
#define PMRC_POWERFAILCONFIG_DISABLEVDIGSTDOK(x) (((uint32_t)(((uint32_t)(x)) << PMRC_POWERFAILCONFIG_DISABLEVDIGSTDOK_SHIFT)) & PMRC_POWERFAILCONFIG_DISABLEVDIGSTDOK_MASK)

#define PMRC_POWERFAILCONFIG_DISABLEVDIGMEMOK_MASK (0x2U)
#define PMRC_POWERFAILCONFIG_DISABLEVDIGMEMOK_SHIFT (1U)
/*! DisableVdigMemOk - If set to 1, prevents the PMRC FSM to POR the chip if the VDD_MEM voltage is below DcdcMemControl.BodSet threshold
 *  0b0..Por on VDD_MEM not OK
 *  0b1..Don't Por on VDD_MEM not OK
 */
#define PMRC_POWERFAILCONFIG_DISABLEVDIGMEMOK(x) (((uint32_t)(((uint32_t)(x)) << PMRC_POWERFAILCONFIG_DISABLEVDIGMEMOK_SHIFT)) & PMRC_POWERFAILCONFIG_DISABLEVDIGMEMOK_MASK)

#define PMRC_POWERFAILCONFIG_DISABLEVDDAOK_MASK  (0x4U)
#define PMRC_POWERFAILCONFIG_DISABLEVDDAOK_SHIFT (2U)
/*! DisableVddaOk - If set to 1, prevents the PMRC FSM to POR the chip if the VDD_ANA or VDD_CGU
 *    voltage is below LdoControl.AnaBodVset or LdoControl.CguVset threshold
 *  0b0..Por on VDD_ANA or VDD_CGU not OK
 *  0b1..Don't por on VDD_ANA or VDD_CGU not OK
 */
#define PMRC_POWERFAILCONFIG_DISABLEVDDAOK(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_POWERFAILCONFIG_DISABLEVDDAOK_SHIFT)) & PMRC_POWERFAILCONFIG_DISABLEVDDAOK_MASK)

#define PMRC_POWERFAILCONFIG_ENABLELDOMEMOK_MASK (0x8U)
#define PMRC_POWERFAILCONFIG_ENABLELDOMEMOK_SHIFT (3U)
/*! EnableLdoMemOk - If set to 1, allows the PMRC FSM to POR the chip if the LDO MEM voltage is below the LdoMemControl.set_vref threshold
 *  0b0..Don't por on LDO MEM not OK
 *  0b1..Por on LDO MEM not OK
 */
#define PMRC_POWERFAILCONFIG_ENABLELDOMEMOK(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_POWERFAILCONFIG_ENABLELDOMEMOK_SHIFT)) & PMRC_POWERFAILCONFIG_ENABLELDOMEMOK_MASK)

#define PMRC_POWERFAILCONFIG_ENABLEVDDOK_MASK    (0x10U)
#define PMRC_POWERFAILCONFIG_ENABLEVDDOK_SHIFT   (4U)
/*! EnableVddOk - If set to 1, allows the PMRC FSM to either reset the digital core or go to
 *    shutdown if VDD voltage is below SupMon.VddBodSet and if SupMon.VddBodEnable is set.
 *  0b0..Don't reset or go to shutdown on VDD not OK
 *  0b1..Reset or go to shutdown on VDD not OK
 */
#define PMRC_POWERFAILCONFIG_ENABLEVDDOK(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_POWERFAILCONFIG_ENABLEVDDOK_SHIFT)) & PMRC_POWERFAILCONFIG_ENABLEVDDOK_MASK)
/*! @} */

/*! @name SUPMON - VDD and VDD_IOs value and Enables for Supply Monitors.<br>Enable control of DCDC ratio counter DMA */
/*! @{ */

#define PMRC_SUPMON_VDDIO0BODENABLE_MASK         (0x1U)
#define PMRC_SUPMON_VDDIO0BODENABLE_SHIFT        (0U)
/*! Vddio0BodEnable - Enable the VDD_IO0 Brown-Out Detector. */
#define PMRC_SUPMON_VDDIO0BODENABLE(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_SUPMON_VDDIO0BODENABLE_SHIFT)) & PMRC_SUPMON_VDDIO0BODENABLE_MASK)

#define PMRC_SUPMON_VDDIO0BODSET_MASK            (0x6U)
#define PMRC_SUPMON_VDDIO0BODSET_SHIFT           (1U)
/*! Vddio0BodSet - VDD_IO0 Brown-Out Detector trip level setting:<br>0 0.95V,<br>1 1.05V,<br>2 1.55V,<br>3 1.65V */
#define PMRC_SUPMON_VDDIO0BODSET(x)              (((uint32_t)(((uint32_t)(x)) << PMRC_SUPMON_VDDIO0BODSET_SHIFT)) & PMRC_SUPMON_VDDIO0BODSET_MASK)

#define PMRC_SUPMON_VDDIO1BODENABLE_MASK         (0x8U)
#define PMRC_SUPMON_VDDIO1BODENABLE_SHIFT        (3U)
/*! Vddio1BodEnable - Enable the VDD_IO1 Brown-Out Detector. */
#define PMRC_SUPMON_VDDIO1BODENABLE(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_SUPMON_VDDIO1BODENABLE_SHIFT)) & PMRC_SUPMON_VDDIO1BODENABLE_MASK)

#define PMRC_SUPMON_VDDIO1BODSET_MASK            (0x30U)
#define PMRC_SUPMON_VDDIO1BODSET_SHIFT           (4U)
/*! Vddio1BodSet - VDD_IO1 Brown-Out Detector trip level setting:<br>0 0.95V,<br>1 1.05V,<br>2 1.55V,<br>3 1.65V */
#define PMRC_SUPMON_VDDIO1BODSET(x)              (((uint32_t)(((uint32_t)(x)) << PMRC_SUPMON_VDDIO1BODSET_SHIFT)) & PMRC_SUPMON_VDDIO1BODSET_MASK)

#define PMRC_SUPMON_VDDIO2BODENABLE_MASK         (0x40U)
#define PMRC_SUPMON_VDDIO2BODENABLE_SHIFT        (6U)
/*! Vddio2BodEnable - Enable the VDD_IO2 Brown-Out Detector. */
#define PMRC_SUPMON_VDDIO2BODENABLE(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_SUPMON_VDDIO2BODENABLE_SHIFT)) & PMRC_SUPMON_VDDIO2BODENABLE_MASK)

#define PMRC_SUPMON_VDDIO2BODSET_MASK            (0x180U)
#define PMRC_SUPMON_VDDIO2BODSET_SHIFT           (7U)
/*! Vddio2BodSet - VDD_IO2 Brown-Out Detector trip level setting:<br>0 0.95V,<br>1 1.05V,<br>2 1.55V,<br>3 1.65V */
#define PMRC_SUPMON_VDDIO2BODSET(x)              (((uint32_t)(((uint32_t)(x)) << PMRC_SUPMON_VDDIO2BODSET_SHIFT)) & PMRC_SUPMON_VDDIO2BODSET_MASK)

#define PMRC_SUPMON_VDDIO3BODENABLE_MASK         (0x200U)
#define PMRC_SUPMON_VDDIO3BODENABLE_SHIFT        (9U)
/*! Vddio3BodEnable - Enable the VDD_IO3 Brown-Out Detector. */
#define PMRC_SUPMON_VDDIO3BODENABLE(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_SUPMON_VDDIO3BODENABLE_SHIFT)) & PMRC_SUPMON_VDDIO3BODENABLE_MASK)

#define PMRC_SUPMON_VDDIO3BODSET_MASK            (0xC00U)
#define PMRC_SUPMON_VDDIO3BODSET_SHIFT           (10U)
/*! Vddio3BodSet - VDD_IO3 Brown-Out Detector trip level setting:<br>0 0.95V,<br>1 1.05V,<br>2 1.55V,<br>3 1.65V */
#define PMRC_SUPMON_VDDIO3BODSET(x)              (((uint32_t)(((uint32_t)(x)) << PMRC_SUPMON_VDDIO3BODSET_SHIFT)) & PMRC_SUPMON_VDDIO3BODSET_MASK)

#define PMRC_SUPMON_VDDBODENABLE_MASK            (0x1000U)
#define PMRC_SUPMON_VDDBODENABLE_SHIFT           (12U)
/*! VddBodEnable - Enable the VDD Main Brown-Out Detector. */
#define PMRC_SUPMON_VDDBODENABLE(x)              (((uint32_t)(((uint32_t)(x)) << PMRC_SUPMON_VDDBODENABLE_SHIFT)) & PMRC_SUPMON_VDDBODENABLE_MASK)

#define PMRC_SUPMON_VDDBODSET_MASK               (0xE000U)
#define PMRC_SUPMON_VDDBODSET_SHIFT              (13U)
/*! VddBodSet - VDD Main Brown-Out Detector trip level setting:<br>0-7 0.9V+0.064V*VddBodSet */
#define PMRC_SUPMON_VDDBODSET(x)                 (((uint32_t)(((uint32_t)(x)) << PMRC_SUPMON_VDDBODSET_SHIFT)) & PMRC_SUPMON_VDDBODSET_MASK)

#define PMRC_SUPMON_REFSUPMONENABLE_MASK         (0x10000U)
#define PMRC_SUPMON_REFSUPMONENABLE_SHIFT        (16U)
/*! RefSupMonEnable - Enable the Reference for the Supply Monitor system. */
#define PMRC_SUPMON_REFSUPMONENABLE(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_SUPMON_REFSUPMONENABLE_SHIFT)) & PMRC_SUPMON_REFSUPMONENABLE_MASK)

#define PMRC_SUPMON_DIGRATIOCNTDMAENABLE_MASK    (0x20000U)
#define PMRC_SUPMON_DIGRATIOCNTDMAENABLE_SHIFT   (17U)
/*! DigRatioCntDmaEnable - Enable the DMA access for DcdcDigRatioCounter
 *  0b0..DMA access is disabled
 *  0b1..DMA access is enabled
 */
#define PMRC_SUPMON_DIGRATIOCNTDMAENABLE(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_SUPMON_DIGRATIOCNTDMAENABLE_SHIFT)) & PMRC_SUPMON_DIGRATIOCNTDMAENABLE_MASK)

#define PMRC_SUPMON_MEMRATIOCNTDMAENABLE_MASK    (0x40000U)
#define PMRC_SUPMON_MEMRATIOCNTDMAENABLE_SHIFT   (18U)
/*! MemRatioCntDmaEnable - Enable the DMA access for DcdcMemRatioCounter
 *  0b0..DMA access is disabled
 *  0b1..DMA access is enabled
 */
#define PMRC_SUPMON_MEMRATIOCNTDMAENABLE(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_SUPMON_MEMRATIOCNTDMAENABLE_SHIFT)) & PMRC_SUPMON_MEMRATIOCNTDMAENABLE_MASK)

#define PMRC_SUPMON_VDDBODENSELECT_MASK          (0x100000U)
#define PMRC_SUPMON_VDDBODENSELECT_SHIFT         (20U)
/*! VddBodEnSelect - Select how to control the enabling (by HW or SW) of VDD BOD Detector
 *  0b0..Enabling is done by HW
 *  0b1..Enabling is done by SW
 */
#define PMRC_SUPMON_VDDBODENSELECT(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_SUPMON_VDDBODENSELECT_SHIFT)) & PMRC_SUPMON_VDDBODENSELECT_MASK)

#define PMRC_SUPMON_VDDBODRSTCNTSTEP_MASK        (0xFFE00000U)
#define PMRC_SUPMON_VDDBODRSTCNTSTEP_SHIFT       (21U)
/*! VddBodRstCntStep - Step of the reset counters for:<br>Vdd_main, Vdd_dig, Vdd_ana and
 *    Vdd_mem(dcdc) BOD detectors.<br>It is function of APB clock frequency.<br>The reset counter must produce
 *    a pulse of 100us.
 *  0b00000000000..Reset counter is disabled
 *  0b00000000011..APB clock is set to 400 MHz
 *  0b00000001101..APB clock is set to 100 MHz (the default frequency)
 *  0b00000011010..APB clock is set to 50 MHz
 *  0b00000110100..APB clock is set to 25 MHz
 *  0b00010000010..APB clock is set to 10 MHz
 *  0b00100000100..APB clock is set to 5 MHz
 *  0b10100010100..APB clock is set to 1 MHz
 */
#define PMRC_SUPMON_VDDBODRSTCNTSTEP(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_SUPMON_VDDBODRSTCNTSTEP_SHIFT)) & PMRC_SUPMON_VDDBODRSTCNTSTEP_MASK)
/*! @} */

/*! @name ROMCTRL - Control of PowerDown mode and EMA of CTRLSS CM55 ROM */
/*! @{ */

#define PMRC_ROMCTRL_CTRLSSCM55_ROM_0_PGEN_MASK  (0x1U)
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_0_PGEN_SHIFT (0U)
/*! CtrlSSCm55_Rom_0_Pgen - Power gate control CM55 ROM in active mode. */
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_0_PGEN(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_ROMCTRL_CTRLSSCM55_ROM_0_PGEN_SHIFT)) & PMRC_ROMCTRL_CTRLSSCM55_ROM_0_PGEN_MASK)

#define PMRC_ROMCTRL_CTRLSSCM55_ROM_0_DS_PGEN_MASK (0x2U)
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_0_DS_PGEN_SHIFT (1U)
/*! CtrlSSCm55_Rom_0_Ds_Pgen - Power gate control CM55 ROM in deep-sleep mode. */
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_0_DS_PGEN(x) (((uint32_t)(((uint32_t)(x)) << PMRC_ROMCTRL_CTRLSSCM55_ROM_0_DS_PGEN_SHIFT)) & PMRC_ROMCTRL_CTRLSSCM55_ROM_0_DS_PGEN_MASK)

#define PMRC_ROMCTRL_CTRLSSCM55_ROM_1_PGEN_MASK  (0x4U)
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_1_PGEN_SHIFT (2U)
/*! CtrlSSCm55_Rom_1_Pgen - Power gate control CM55 ROM in active mode. */
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_1_PGEN(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_ROMCTRL_CTRLSSCM55_ROM_1_PGEN_SHIFT)) & PMRC_ROMCTRL_CTRLSSCM55_ROM_1_PGEN_MASK)

#define PMRC_ROMCTRL_CTRLSSCM55_ROM_1_DS_PGEN_MASK (0x8U)
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_1_DS_PGEN_SHIFT (3U)
/*! CtrlSSCm55_Rom_1_Ds_Pgen - Power gate control CM55 ROM in deep-sleep mode. */
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_1_DS_PGEN(x) (((uint32_t)(((uint32_t)(x)) << PMRC_ROMCTRL_CTRLSSCM55_ROM_1_DS_PGEN_SHIFT)) & PMRC_ROMCTRL_CTRLSSCM55_ROM_1_DS_PGEN_MASK)

#define PMRC_ROMCTRL_CTRLSSCM55_ROM_2_PGEN_MASK  (0x10U)
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_2_PGEN_SHIFT (4U)
/*! CtrlSSCm55_Rom_2_Pgen - Power gate control CM55 ROM in active state. */
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_2_PGEN(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_ROMCTRL_CTRLSSCM55_ROM_2_PGEN_SHIFT)) & PMRC_ROMCTRL_CTRLSSCM55_ROM_2_PGEN_MASK)

#define PMRC_ROMCTRL_CTRLSSCM55_ROM_2_DS_PGEN_MASK (0x20U)
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_2_DS_PGEN_SHIFT (5U)
/*! CtrlSSCm55_Rom_2_Ds_Pgen - Power gate control CM55 ROM in deep-sleep state. */
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_2_DS_PGEN(x) (((uint32_t)(((uint32_t)(x)) << PMRC_ROMCTRL_CTRLSSCM55_ROM_2_DS_PGEN_SHIFT)) & PMRC_ROMCTRL_CTRLSSCM55_ROM_2_DS_PGEN_MASK)

#define PMRC_ROMCTRL_CTRLSSCM55_ROM_3_PGEN_MASK  (0x40U)
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_3_PGEN_SHIFT (6U)
/*! CtrlSSCm55_Rom_3_Pgen - Power gate control CM55 ROM in active state. */
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_3_PGEN(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_ROMCTRL_CTRLSSCM55_ROM_3_PGEN_SHIFT)) & PMRC_ROMCTRL_CTRLSSCM55_ROM_3_PGEN_MASK)

#define PMRC_ROMCTRL_CTRLSSCM55_ROM_3_DS_PGEN_MASK (0x80U)
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_3_DS_PGEN_SHIFT (7U)
/*! CtrlSSCm55_Rom_3_Ds_Pgen - Power gate control CM55 ROM in deep-sleep state. */
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_3_DS_PGEN(x) (((uint32_t)(((uint32_t)(x)) << PMRC_ROMCTRL_CTRLSSCM55_ROM_3_DS_PGEN_SHIFT)) & PMRC_ROMCTRL_CTRLSSCM55_ROM_3_DS_PGEN_MASK)

#define PMRC_ROMCTRL_CTRLSSCM55_ROM_4_PGEN_MASK  (0x100U)
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_4_PGEN_SHIFT (8U)
/*! CtrlSSCm55_Rom_4_Pgen - Power gate control CM55 ROM in active state. */
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_4_PGEN(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_ROMCTRL_CTRLSSCM55_ROM_4_PGEN_SHIFT)) & PMRC_ROMCTRL_CTRLSSCM55_ROM_4_PGEN_MASK)

#define PMRC_ROMCTRL_CTRLSSCM55_ROM_4_DS_PGEN_MASK (0x200U)
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_4_DS_PGEN_SHIFT (9U)
/*! CtrlSSCm55_Rom_4_Ds_Pgen - Power gate control CM55 ROM in deep-sleep state. */
#define PMRC_ROMCTRL_CTRLSSCM55_ROM_4_DS_PGEN(x) (((uint32_t)(((uint32_t)(x)) << PMRC_ROMCTRL_CTRLSSCM55_ROM_4_DS_PGEN_SHIFT)) & PMRC_ROMCTRL_CTRLSSCM55_ROM_4_DS_PGEN_MASK)
/*! @} */

/*! @name CTRLSSCM55RAMACTIVE - Non-Persistent register.<br> Control of CTRLSS CM55 RAM. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low. */
/*! @{ */

#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_0_MASK     (0x3U)
#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_0_SHIFT    (0U)
/*! ram0_0 - ITCM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_0(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMACTIVE_RAM0_0_SHIFT)) & PMRC_CTRLSSCM55RAMACTIVE_RAM0_0_MASK)

#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_1_MASK     (0xCU)
#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_1_SHIFT    (2U)
/*! ram0_1 - ITCM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_1(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMACTIVE_RAM0_1_SHIFT)) & PMRC_CTRLSSCM55RAMACTIVE_RAM0_1_MASK)

#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_2_MASK     (0x30U)
#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_2_SHIFT    (4U)
/*! ram0_2 - ITCM2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_2(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMACTIVE_RAM0_2_SHIFT)) & PMRC_CTRLSSCM55RAMACTIVE_RAM0_2_MASK)

#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_3_MASK     (0xC0U)
#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_3_SHIFT    (6U)
/*! ram0_3 - ITCM3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_3(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMACTIVE_RAM0_3_SHIFT)) & PMRC_CTRLSSCM55RAMACTIVE_RAM0_3_MASK)

#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_4_MASK     (0x300U)
#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_4_SHIFT    (8U)
/*! ram0_4 - ITCM4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_4(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMACTIVE_RAM0_4_SHIFT)) & PMRC_CTRLSSCM55RAMACTIVE_RAM0_4_MASK)

#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_5_MASK     (0xC00U)
#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_5_SHIFT    (10U)
/*! ram0_5 - ITCM5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_5(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMACTIVE_RAM0_5_SHIFT)) & PMRC_CTRLSSCM55RAMACTIVE_RAM0_5_MASK)

#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_6_MASK     (0x3000U)
#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_6_SHIFT    (12U)
/*! ram0_6 - ITCM6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_6(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMACTIVE_RAM0_6_SHIFT)) & PMRC_CTRLSSCM55RAMACTIVE_RAM0_6_MASK)

#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_7_MASK     (0xC000U)
#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_7_SHIFT    (14U)
/*! ram0_7 - ITCM7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMACTIVE_RAM0_7(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMACTIVE_RAM0_7_SHIFT)) & PMRC_CTRLSSCM55RAMACTIVE_RAM0_7_MASK)

#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_0_MASK     (0x30000U)
#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_0_SHIFT    (16U)
/*! ram1_0 - DTCM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_0(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMACTIVE_RAM1_0_SHIFT)) & PMRC_CTRLSSCM55RAMACTIVE_RAM1_0_MASK)

#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_1_MASK     (0xC0000U)
#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_1_SHIFT    (18U)
/*! ram1_1 - DTCM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_1(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMACTIVE_RAM1_1_SHIFT)) & PMRC_CTRLSSCM55RAMACTIVE_RAM1_1_MASK)

#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_2_MASK     (0x300000U)
#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_2_SHIFT    (20U)
/*! ram1_2 - DTCM2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_2(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMACTIVE_RAM1_2_SHIFT)) & PMRC_CTRLSSCM55RAMACTIVE_RAM1_2_MASK)

#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_3_MASK     (0xC00000U)
#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_3_SHIFT    (22U)
/*! ram1_3 - DTCM3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_3(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMACTIVE_RAM1_3_SHIFT)) & PMRC_CTRLSSCM55RAMACTIVE_RAM1_3_MASK)

#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_4_MASK     (0x3000000U)
#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_4_SHIFT    (24U)
/*! ram1_4 - DTCM4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_4(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMACTIVE_RAM1_4_SHIFT)) & PMRC_CTRLSSCM55RAMACTIVE_RAM1_4_MASK)

#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_5_MASK     (0xC000000U)
#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_5_SHIFT    (26U)
/*! ram1_5 - DTCM5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_5(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMACTIVE_RAM1_5_SHIFT)) & PMRC_CTRLSSCM55RAMACTIVE_RAM1_5_MASK)

#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_6_MASK     (0x30000000U)
#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_6_SHIFT    (28U)
/*! ram1_6 - DTCM6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_6(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMACTIVE_RAM1_6_SHIFT)) & PMRC_CTRLSSCM55RAMACTIVE_RAM1_6_MASK)

#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_7_MASK     (0xC0000000U)
#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_7_SHIFT    (30U)
/*! ram1_7 - DTCM7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMACTIVE_RAM1_7(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMACTIVE_RAM1_7_SHIFT)) & PMRC_CTRLSSCM55RAMACTIVE_RAM1_7_MASK)
/*! @} */

/*! @name CTRLSSCM55CACHEACTIVE - Non-Persistent register.<br> Control of CTRLSS CM55 Cache. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low. */
/*! @{ */

#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_0_MASK   (0x3U)
#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_0_SHIFT  (0U)
/*! dram_0 - DRAM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_0(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHEACTIVE_DRAM_0_SHIFT)) & PMRC_CTRLSSCM55CACHEACTIVE_DRAM_0_MASK)

#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_1_MASK   (0xCU)
#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_1_SHIFT  (2U)
/*! dram_1 - DRAM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_1(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHEACTIVE_DRAM_1_SHIFT)) & PMRC_CTRLSSCM55CACHEACTIVE_DRAM_1_MASK)

#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_2_MASK   (0x30U)
#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_2_SHIFT  (4U)
/*! dram_2 - DRAM2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_2(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHEACTIVE_DRAM_2_SHIFT)) & PMRC_CTRLSSCM55CACHEACTIVE_DRAM_2_MASK)

#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_3_MASK   (0xC0U)
#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_3_SHIFT  (6U)
/*! dram_3 - DRAM3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_3(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHEACTIVE_DRAM_3_SHIFT)) & PMRC_CTRLSSCM55CACHEACTIVE_DRAM_3_MASK)

#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_4_MASK   (0x300U)
#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_4_SHIFT  (8U)
/*! dram_4 - DRAM4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_4(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHEACTIVE_DRAM_4_SHIFT)) & PMRC_CTRLSSCM55CACHEACTIVE_DRAM_4_MASK)

#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_5_MASK   (0xC00U)
#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_5_SHIFT  (10U)
/*! dram_5 - DRAM5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_5(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHEACTIVE_DRAM_5_SHIFT)) & PMRC_CTRLSSCM55CACHEACTIVE_DRAM_5_MASK)

#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_6_MASK   (0x3000U)
#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_6_SHIFT  (12U)
/*! dram_6 - DRAM6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_6(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHEACTIVE_DRAM_6_SHIFT)) & PMRC_CTRLSSCM55CACHEACTIVE_DRAM_6_MASK)

#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_7_MASK   (0xC000U)
#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_7_SHIFT  (14U)
/*! dram_7 - DRAM7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHEACTIVE_DRAM_7(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHEACTIVE_DRAM_7_SHIFT)) & PMRC_CTRLSSCM55CACHEACTIVE_DRAM_7_MASK)

#define PMRC_CTRLSSCM55CACHEACTIVE_IRAM_0_MASK   (0x30000U)
#define PMRC_CTRLSSCM55CACHEACTIVE_IRAM_0_SHIFT  (16U)
/*! iram_0 - IRAM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHEACTIVE_IRAM_0(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHEACTIVE_IRAM_0_SHIFT)) & PMRC_CTRLSSCM55CACHEACTIVE_IRAM_0_MASK)

#define PMRC_CTRLSSCM55CACHEACTIVE_IRAM_1_MASK   (0xC0000U)
#define PMRC_CTRLSSCM55CACHEACTIVE_IRAM_1_SHIFT  (18U)
/*! iram_1 - IRAM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHEACTIVE_IRAM_1(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHEACTIVE_IRAM_1_SHIFT)) & PMRC_CTRLSSCM55CACHEACTIVE_IRAM_1_MASK)

#define PMRC_CTRLSSCM55CACHEACTIVE_ITRAM_0_MASK  (0x300000U)
#define PMRC_CTRLSSCM55CACHEACTIVE_ITRAM_0_SHIFT (20U)
/*! itram_0 - ITRAM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHEACTIVE_ITRAM_0(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHEACTIVE_ITRAM_0_SHIFT)) & PMRC_CTRLSSCM55CACHEACTIVE_ITRAM_0_MASK)

#define PMRC_CTRLSSCM55CACHEACTIVE_ITRAM_1_MASK  (0xC00000U)
#define PMRC_CTRLSSCM55CACHEACTIVE_ITRAM_1_SHIFT (22U)
/*! itram_1 - ITRAM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHEACTIVE_ITRAM_1(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHEACTIVE_ITRAM_1_SHIFT)) & PMRC_CTRLSSCM55CACHEACTIVE_ITRAM_1_MASK)

#define PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_0_MASK  (0x3000000U)
#define PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_0_SHIFT (24U)
/*! dtram_0 - DTRAM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_0(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_0_SHIFT)) & PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_0_MASK)

#define PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_1_MASK  (0xC000000U)
#define PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_1_SHIFT (26U)
/*! dtram_1 - DTRAM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_1(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_1_SHIFT)) & PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_1_MASK)

#define PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_2_MASK  (0x30000000U)
#define PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_2_SHIFT (28U)
/*! dtram_2 - DTRAM2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_2(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_2_SHIFT)) & PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_2_MASK)

#define PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_3_MASK  (0xC0000000U)
#define PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_3_SHIFT (30U)
/*! dtram_3 - DTRAM3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_3(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_3_SHIFT)) & PMRC_CTRLSSCM55CACHEACTIVE_DTRAM_3_MASK)
/*! @} */

/*! @name CTRLSSCM55PKCOTPACTIVE - Non-Persistent register.<br> Control of CTRLSS CM55 OTP and PKC ram. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low. */
/*! @{ */

#define PMRC_CTRLSSCM55PKCOTPACTIVE_OTP_RAM_0_MASK (0x3U)
#define PMRC_CTRLSSCM55PKCOTPACTIVE_OTP_RAM_0_SHIFT (0U)
/*! otp_ram_0 - ram_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55PKCOTPACTIVE_OTP_RAM_0(x) (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55PKCOTPACTIVE_OTP_RAM_0_SHIFT)) & PMRC_CTRLSSCM55PKCOTPACTIVE_OTP_RAM_0_MASK)

#define PMRC_CTRLSSCM55PKCOTPACTIVE_PKC_RAM_0_MASK (0xCU)
#define PMRC_CTRLSSCM55PKCOTPACTIVE_PKC_RAM_0_SHIFT (2U)
/*! pkc_ram_0 - ram_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55PKCOTPACTIVE_PKC_RAM_0(x) (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55PKCOTPACTIVE_PKC_RAM_0_SHIFT)) & PMRC_CTRLSSCM55PKCOTPACTIVE_PKC_RAM_0_MASK)

#define PMRC_CTRLSSCM55PKCOTPACTIVE_PKC_RAM_1_MASK (0x30U)
#define PMRC_CTRLSSCM55PKCOTPACTIVE_PKC_RAM_1_SHIFT (4U)
/*! pkc_ram_1 - ram_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55PKCOTPACTIVE_PKC_RAM_1(x) (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55PKCOTPACTIVE_PKC_RAM_1_SHIFT)) & PMRC_CTRLSSCM55PKCOTPACTIVE_PKC_RAM_1_MASK)
/*! @} */

/*! @name NSSAXIXSPACTIVE - Non-Persistent register.<br> Control of NSS RAM. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low. */
/*! @{ */

#define PMRC_NSSAXIXSPACTIVE_DMA_RAM_0_MASK      (0x3U)
#define PMRC_NSSAXIXSPACTIVE_DMA_RAM_0_SHIFT     (0U)
/*! dma_ram_0 - ram_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSAXIXSPACTIVE_DMA_RAM_0(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSAXIXSPACTIVE_DMA_RAM_0_SHIFT)) & PMRC_NSSAXIXSPACTIVE_DMA_RAM_0_MASK)

#define PMRC_NSSAXIXSPACTIVE_XSP_XRAM_0_MASK     (0xCU)
#define PMRC_NSSAXIXSPACTIVE_XSP_XRAM_0_SHIFT    (2U)
/*! xsp_xram_0 - xsp_xram_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSAXIXSPACTIVE_XSP_XRAM_0(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_NSSAXIXSPACTIVE_XSP_XRAM_0_SHIFT)) & PMRC_NSSAXIXSPACTIVE_XSP_XRAM_0_MASK)

#define PMRC_NSSAXIXSPACTIVE_XSP_YRAM_0_MASK     (0x30U)
#define PMRC_NSSAXIXSPACTIVE_XSP_YRAM_0_SHIFT    (4U)
/*! xsp_yram_0 - xsp_yram_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSAXIXSPACTIVE_XSP_YRAM_0(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_NSSAXIXSPACTIVE_XSP_YRAM_0_SHIFT)) & PMRC_NSSAXIXSPACTIVE_XSP_YRAM_0_MASK)

#define PMRC_NSSAXIXSPACTIVE_XSP_PRAM_0_MASK     (0xC0U)
#define PMRC_NSSAXIXSPACTIVE_XSP_PRAM_0_SHIFT    (6U)
/*! xsp_pram_0 - xsp_pram_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSAXIXSPACTIVE_XSP_PRAM_0(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_NSSAXIXSPACTIVE_XSP_PRAM_0_SHIFT)) & PMRC_NSSAXIXSPACTIVE_XSP_PRAM_0_MASK)

#define PMRC_NSSAXIXSPACTIVE_XSP_PRAM_1_MASK     (0x300U)
#define PMRC_NSSAXIXSPACTIVE_XSP_PRAM_1_SHIFT    (8U)
/*! xsp_pram_1 - xsp_pram_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSAXIXSPACTIVE_XSP_PRAM_1(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_NSSAXIXSPACTIVE_XSP_PRAM_1_SHIFT)) & PMRC_NSSAXIXSPACTIVE_XSP_PRAM_1_MASK)

#define PMRC_NSSAXIXSPACTIVE_XSP_PRAM_2_MASK     (0xC00U)
#define PMRC_NSSAXIXSPACTIVE_XSP_PRAM_2_SHIFT    (10U)
/*! xsp_pram_2 - xsp_pram_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSAXIXSPACTIVE_XSP_PRAM_2(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_NSSAXIXSPACTIVE_XSP_PRAM_2_SHIFT)) & PMRC_NSSAXIXSPACTIVE_XSP_PRAM_2_MASK)

#define PMRC_NSSAXIXSPACTIVE_XSP_PRAM_3_MASK     (0x3000U)
#define PMRC_NSSAXIXSPACTIVE_XSP_PRAM_3_SHIFT    (12U)
/*! xsp_pram_3 - xsp_pram_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSAXIXSPACTIVE_XSP_PRAM_3(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_NSSAXIXSPACTIVE_XSP_PRAM_3_SHIFT)) & PMRC_NSSAXIXSPACTIVE_XSP_PRAM_3_MASK)
/*! @} */

/*! @name NSSCM55CACHEACTIVE - Non-Persistent register.<br> Control of NSS CM55 Cache. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low. */
/*! @{ */

#define PMRC_NSSCM55CACHEACTIVE_DRAM_0_MASK      (0x3U)
#define PMRC_NSSCM55CACHEACTIVE_DRAM_0_SHIFT     (0U)
/*! dram_0 - DRAM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHEACTIVE_DRAM_0(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHEACTIVE_DRAM_0_SHIFT)) & PMRC_NSSCM55CACHEACTIVE_DRAM_0_MASK)

#define PMRC_NSSCM55CACHEACTIVE_DRAM_1_MASK      (0xCU)
#define PMRC_NSSCM55CACHEACTIVE_DRAM_1_SHIFT     (2U)
/*! dram_1 - DRAM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHEACTIVE_DRAM_1(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHEACTIVE_DRAM_1_SHIFT)) & PMRC_NSSCM55CACHEACTIVE_DRAM_1_MASK)

#define PMRC_NSSCM55CACHEACTIVE_DRAM_2_MASK      (0x30U)
#define PMRC_NSSCM55CACHEACTIVE_DRAM_2_SHIFT     (4U)
/*! dram_2 - DRAM2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHEACTIVE_DRAM_2(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHEACTIVE_DRAM_2_SHIFT)) & PMRC_NSSCM55CACHEACTIVE_DRAM_2_MASK)

#define PMRC_NSSCM55CACHEACTIVE_DRAM_3_MASK      (0xC0U)
#define PMRC_NSSCM55CACHEACTIVE_DRAM_3_SHIFT     (6U)
/*! dram_3 - DRAM3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHEACTIVE_DRAM_3(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHEACTIVE_DRAM_3_SHIFT)) & PMRC_NSSCM55CACHEACTIVE_DRAM_3_MASK)

#define PMRC_NSSCM55CACHEACTIVE_DRAM_4_MASK      (0x300U)
#define PMRC_NSSCM55CACHEACTIVE_DRAM_4_SHIFT     (8U)
/*! dram_4 - DRAM4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHEACTIVE_DRAM_4(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHEACTIVE_DRAM_4_SHIFT)) & PMRC_NSSCM55CACHEACTIVE_DRAM_4_MASK)

#define PMRC_NSSCM55CACHEACTIVE_DRAM_5_MASK      (0xC00U)
#define PMRC_NSSCM55CACHEACTIVE_DRAM_5_SHIFT     (10U)
/*! dram_5 - DRAM5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHEACTIVE_DRAM_5(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHEACTIVE_DRAM_5_SHIFT)) & PMRC_NSSCM55CACHEACTIVE_DRAM_5_MASK)

#define PMRC_NSSCM55CACHEACTIVE_DRAM_6_MASK      (0x3000U)
#define PMRC_NSSCM55CACHEACTIVE_DRAM_6_SHIFT     (12U)
/*! dram_6 - DRAM6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHEACTIVE_DRAM_6(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHEACTIVE_DRAM_6_SHIFT)) & PMRC_NSSCM55CACHEACTIVE_DRAM_6_MASK)

#define PMRC_NSSCM55CACHEACTIVE_DRAM_7_MASK      (0xC000U)
#define PMRC_NSSCM55CACHEACTIVE_DRAM_7_SHIFT     (14U)
/*! dram_7 - DRAM7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHEACTIVE_DRAM_7(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHEACTIVE_DRAM_7_SHIFT)) & PMRC_NSSCM55CACHEACTIVE_DRAM_7_MASK)

#define PMRC_NSSCM55CACHEACTIVE_IRAM_0_MASK      (0x30000U)
#define PMRC_NSSCM55CACHEACTIVE_IRAM_0_SHIFT     (16U)
/*! iram_0 - IRAM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHEACTIVE_IRAM_0(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHEACTIVE_IRAM_0_SHIFT)) & PMRC_NSSCM55CACHEACTIVE_IRAM_0_MASK)

#define PMRC_NSSCM55CACHEACTIVE_IRAM_1_MASK      (0xC0000U)
#define PMRC_NSSCM55CACHEACTIVE_IRAM_1_SHIFT     (18U)
/*! iram_1 - IRAM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHEACTIVE_IRAM_1(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHEACTIVE_IRAM_1_SHIFT)) & PMRC_NSSCM55CACHEACTIVE_IRAM_1_MASK)

#define PMRC_NSSCM55CACHEACTIVE_ITRAM_0_MASK     (0x300000U)
#define PMRC_NSSCM55CACHEACTIVE_ITRAM_0_SHIFT    (20U)
/*! itram_0 - ITRAM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHEACTIVE_ITRAM_0(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHEACTIVE_ITRAM_0_SHIFT)) & PMRC_NSSCM55CACHEACTIVE_ITRAM_0_MASK)

#define PMRC_NSSCM55CACHEACTIVE_ITRAM_1_MASK     (0xC00000U)
#define PMRC_NSSCM55CACHEACTIVE_ITRAM_1_SHIFT    (22U)
/*! itram_1 - ITRAM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHEACTIVE_ITRAM_1(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHEACTIVE_ITRAM_1_SHIFT)) & PMRC_NSSCM55CACHEACTIVE_ITRAM_1_MASK)

#define PMRC_NSSCM55CACHEACTIVE_DTRAM_0_MASK     (0x3000000U)
#define PMRC_NSSCM55CACHEACTIVE_DTRAM_0_SHIFT    (24U)
/*! dtram_0 - DTRAM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHEACTIVE_DTRAM_0(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHEACTIVE_DTRAM_0_SHIFT)) & PMRC_NSSCM55CACHEACTIVE_DTRAM_0_MASK)

#define PMRC_NSSCM55CACHEACTIVE_DTRAM_1_MASK     (0xC000000U)
#define PMRC_NSSCM55CACHEACTIVE_DTRAM_1_SHIFT    (26U)
/*! dtram_1 - DTRAM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHEACTIVE_DTRAM_1(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHEACTIVE_DTRAM_1_SHIFT)) & PMRC_NSSCM55CACHEACTIVE_DTRAM_1_MASK)

#define PMRC_NSSCM55CACHEACTIVE_DTRAM_2_MASK     (0x30000000U)
#define PMRC_NSSCM55CACHEACTIVE_DTRAM_2_SHIFT    (28U)
/*! dtram_2 - DTRAM2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHEACTIVE_DTRAM_2(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHEACTIVE_DTRAM_2_SHIFT)) & PMRC_NSSCM55CACHEACTIVE_DTRAM_2_MASK)

#define PMRC_NSSCM55CACHEACTIVE_DTRAM_3_MASK     (0xC0000000U)
#define PMRC_NSSCM55CACHEACTIVE_DTRAM_3_SHIFT    (30U)
/*! dtram_3 - DTRAM3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHEACTIVE_DTRAM_3(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHEACTIVE_DTRAM_3_SHIFT)) & PMRC_NSSCM55CACHEACTIVE_DTRAM_3_MASK)
/*! @} */

/*! @name NSSDNNRAM01ACTIVE - Non-Persistent register.<br> Control of NSS DNN RAM 00-17. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low. */
/*! @{ */

#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_0_MASK      (0x3U)
#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_0_SHIFT     (0U)
/*! ram_0_0 - ram_0_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_0(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01ACTIVE_RAM_0_0_SHIFT)) & PMRC_NSSDNNRAM01ACTIVE_RAM_0_0_MASK)

#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_1_MASK      (0xCU)
#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_1_SHIFT     (2U)
/*! ram_0_1 - ram_0_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_1(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01ACTIVE_RAM_0_1_SHIFT)) & PMRC_NSSDNNRAM01ACTIVE_RAM_0_1_MASK)

#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_2_MASK      (0x30U)
#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_2_SHIFT     (4U)
/*! ram_0_2 - ram_0_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_2(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01ACTIVE_RAM_0_2_SHIFT)) & PMRC_NSSDNNRAM01ACTIVE_RAM_0_2_MASK)

#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_3_MASK      (0xC0U)
#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_3_SHIFT     (6U)
/*! ram_0_3 - ram_0_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_3(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01ACTIVE_RAM_0_3_SHIFT)) & PMRC_NSSDNNRAM01ACTIVE_RAM_0_3_MASK)

#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_4_MASK      (0x300U)
#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_4_SHIFT     (8U)
/*! ram_0_4 - ram_0_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_4(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01ACTIVE_RAM_0_4_SHIFT)) & PMRC_NSSDNNRAM01ACTIVE_RAM_0_4_MASK)

#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_5_MASK      (0xC00U)
#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_5_SHIFT     (10U)
/*! ram_0_5 - ram_0_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_5(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01ACTIVE_RAM_0_5_SHIFT)) & PMRC_NSSDNNRAM01ACTIVE_RAM_0_5_MASK)

#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_6_MASK      (0x3000U)
#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_6_SHIFT     (12U)
/*! ram_0_6 - ram_0_6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_6(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01ACTIVE_RAM_0_6_SHIFT)) & PMRC_NSSDNNRAM01ACTIVE_RAM_0_6_MASK)

#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_7_MASK      (0xC000U)
#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_7_SHIFT     (14U)
/*! ram_0_7 - ram_0_7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01ACTIVE_RAM_0_7(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01ACTIVE_RAM_0_7_SHIFT)) & PMRC_NSSDNNRAM01ACTIVE_RAM_0_7_MASK)

#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_0_MASK      (0x30000U)
#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_0_SHIFT     (16U)
/*! ram_1_0 - ram_1_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_0(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01ACTIVE_RAM_1_0_SHIFT)) & PMRC_NSSDNNRAM01ACTIVE_RAM_1_0_MASK)

#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_1_MASK      (0xC0000U)
#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_1_SHIFT     (18U)
/*! ram_1_1 - ram_1_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_1(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01ACTIVE_RAM_1_1_SHIFT)) & PMRC_NSSDNNRAM01ACTIVE_RAM_1_1_MASK)

#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_2_MASK      (0x300000U)
#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_2_SHIFT     (20U)
/*! ram_1_2 - ram_1_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_2(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01ACTIVE_RAM_1_2_SHIFT)) & PMRC_NSSDNNRAM01ACTIVE_RAM_1_2_MASK)

#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_3_MASK      (0xC00000U)
#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_3_SHIFT     (22U)
/*! ram_1_3 - ram_1_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_3(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01ACTIVE_RAM_1_3_SHIFT)) & PMRC_NSSDNNRAM01ACTIVE_RAM_1_3_MASK)

#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_4_MASK      (0x3000000U)
#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_4_SHIFT     (24U)
/*! ram_1_4 - ram_1_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_4(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01ACTIVE_RAM_1_4_SHIFT)) & PMRC_NSSDNNRAM01ACTIVE_RAM_1_4_MASK)

#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_5_MASK      (0xC000000U)
#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_5_SHIFT     (26U)
/*! ram_1_5 - ram_1_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_5(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01ACTIVE_RAM_1_5_SHIFT)) & PMRC_NSSDNNRAM01ACTIVE_RAM_1_5_MASK)

#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_6_MASK      (0x30000000U)
#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_6_SHIFT     (28U)
/*! ram_1_6 - ram_1_6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_6(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01ACTIVE_RAM_1_6_SHIFT)) & PMRC_NSSDNNRAM01ACTIVE_RAM_1_6_MASK)

#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_7_MASK      (0xC0000000U)
#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_7_SHIFT     (30U)
/*! ram_1_7 - ram_1_7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01ACTIVE_RAM_1_7(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01ACTIVE_RAM_1_7_SHIFT)) & PMRC_NSSDNNRAM01ACTIVE_RAM_1_7_MASK)
/*! @} */

/*! @name NSSDNNRAM23ACTIVE - Non-Persistent register.<br> Control of NSS DNN RAM 20-37. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low. */
/*! @{ */

#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_0_MASK      (0x3U)
#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_0_SHIFT     (0U)
/*! ram_2_0 - ram_2_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_0(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23ACTIVE_RAM_2_0_SHIFT)) & PMRC_NSSDNNRAM23ACTIVE_RAM_2_0_MASK)

#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_1_MASK      (0xCU)
#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_1_SHIFT     (2U)
/*! ram_2_1 - ram_2_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_1(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23ACTIVE_RAM_2_1_SHIFT)) & PMRC_NSSDNNRAM23ACTIVE_RAM_2_1_MASK)

#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_2_MASK      (0x30U)
#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_2_SHIFT     (4U)
/*! ram_2_2 - ram_2_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_2(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23ACTIVE_RAM_2_2_SHIFT)) & PMRC_NSSDNNRAM23ACTIVE_RAM_2_2_MASK)

#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_3_MASK      (0xC0U)
#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_3_SHIFT     (6U)
/*! ram_2_3 - ram_2_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_3(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23ACTIVE_RAM_2_3_SHIFT)) & PMRC_NSSDNNRAM23ACTIVE_RAM_2_3_MASK)

#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_4_MASK      (0x300U)
#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_4_SHIFT     (8U)
/*! ram_2_4 - ram_2_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_4(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23ACTIVE_RAM_2_4_SHIFT)) & PMRC_NSSDNNRAM23ACTIVE_RAM_2_4_MASK)

#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_5_MASK      (0xC00U)
#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_5_SHIFT     (10U)
/*! ram_2_5 - ram_2_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_5(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23ACTIVE_RAM_2_5_SHIFT)) & PMRC_NSSDNNRAM23ACTIVE_RAM_2_5_MASK)

#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_6_MASK      (0x3000U)
#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_6_SHIFT     (12U)
/*! ram_2_6 - ram_2_6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_6(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23ACTIVE_RAM_2_6_SHIFT)) & PMRC_NSSDNNRAM23ACTIVE_RAM_2_6_MASK)

#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_7_MASK      (0xC000U)
#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_7_SHIFT     (14U)
/*! ram_2_7 - ram_2_7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23ACTIVE_RAM_2_7(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23ACTIVE_RAM_2_7_SHIFT)) & PMRC_NSSDNNRAM23ACTIVE_RAM_2_7_MASK)

#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_0_MASK      (0x30000U)
#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_0_SHIFT     (16U)
/*! ram_3_0 - ram_3_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_0(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23ACTIVE_RAM_3_0_SHIFT)) & PMRC_NSSDNNRAM23ACTIVE_RAM_3_0_MASK)

#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_1_MASK      (0xC0000U)
#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_1_SHIFT     (18U)
/*! ram_3_1 - ram_3_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_1(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23ACTIVE_RAM_3_1_SHIFT)) & PMRC_NSSDNNRAM23ACTIVE_RAM_3_1_MASK)

#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_2_MASK      (0x300000U)
#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_2_SHIFT     (20U)
/*! ram_3_2 - ram_3_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_2(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23ACTIVE_RAM_3_2_SHIFT)) & PMRC_NSSDNNRAM23ACTIVE_RAM_3_2_MASK)

#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_3_MASK      (0xC00000U)
#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_3_SHIFT     (22U)
/*! ram_3_3 - ram_3_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_3(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23ACTIVE_RAM_3_3_SHIFT)) & PMRC_NSSDNNRAM23ACTIVE_RAM_3_3_MASK)

#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_4_MASK      (0x3000000U)
#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_4_SHIFT     (24U)
/*! ram_3_4 - ram_3_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_4(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23ACTIVE_RAM_3_4_SHIFT)) & PMRC_NSSDNNRAM23ACTIVE_RAM_3_4_MASK)

#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_5_MASK      (0xC000000U)
#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_5_SHIFT     (26U)
/*! ram_3_5 - ram_3_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_5(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23ACTIVE_RAM_3_5_SHIFT)) & PMRC_NSSDNNRAM23ACTIVE_RAM_3_5_MASK)

#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_6_MASK      (0x30000000U)
#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_6_SHIFT     (28U)
/*! ram_3_6 - ram_3_6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_6(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23ACTIVE_RAM_3_6_SHIFT)) & PMRC_NSSDNNRAM23ACTIVE_RAM_3_6_MASK)

#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_7_MASK      (0xC0000000U)
#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_7_SHIFT     (30U)
/*! ram_3_7 - ram_3_7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23ACTIVE_RAM_3_7(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23ACTIVE_RAM_3_7_SHIFT)) & PMRC_NSSDNNRAM23ACTIVE_RAM_3_7_MASK)
/*! @} */

/*! @name NSSDNNRAM4ACTIVE - Non-Persistent register.<br> Control of NSS DNN RAM 40-47. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low. */
/*! @{ */

#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_0_MASK       (0x3U)
#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_0_SHIFT      (0U)
/*! ram_4_0 - ram_4_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_0(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM4ACTIVE_RAM_4_0_SHIFT)) & PMRC_NSSDNNRAM4ACTIVE_RAM_4_0_MASK)

#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_1_MASK       (0xCU)
#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_1_SHIFT      (2U)
/*! ram_4_1 - ram_4_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_1(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM4ACTIVE_RAM_4_1_SHIFT)) & PMRC_NSSDNNRAM4ACTIVE_RAM_4_1_MASK)

#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_2_MASK       (0x30U)
#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_2_SHIFT      (4U)
/*! ram_4_2 - ram_4_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_2(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM4ACTIVE_RAM_4_2_SHIFT)) & PMRC_NSSDNNRAM4ACTIVE_RAM_4_2_MASK)

#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_3_MASK       (0xC0U)
#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_3_SHIFT      (6U)
/*! ram_4_3 - ram_4_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_3(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM4ACTIVE_RAM_4_3_SHIFT)) & PMRC_NSSDNNRAM4ACTIVE_RAM_4_3_MASK)

#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_4_MASK       (0x300U)
#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_4_SHIFT      (8U)
/*! ram_4_4 - ram_4_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_4(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM4ACTIVE_RAM_4_4_SHIFT)) & PMRC_NSSDNNRAM4ACTIVE_RAM_4_4_MASK)

#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_5_MASK       (0xC00U)
#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_5_SHIFT      (10U)
/*! ram_4_5 - ram_4_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_5(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM4ACTIVE_RAM_4_5_SHIFT)) & PMRC_NSSDNNRAM4ACTIVE_RAM_4_5_MASK)

#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_6_MASK       (0x3000U)
#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_6_SHIFT      (12U)
/*! ram_4_6 - ram_4_6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_6(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM4ACTIVE_RAM_4_6_SHIFT)) & PMRC_NSSDNNRAM4ACTIVE_RAM_4_6_MASK)

#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_7_MASK       (0xC000U)
#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_7_SHIFT      (14U)
/*! ram_4_7 - ram_4_7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM4ACTIVE_RAM_4_7(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM4ACTIVE_RAM_4_7_SHIFT)) & PMRC_NSSDNNRAM4ACTIVE_RAM_4_7_MASK)
/*! @} */

/*! @name ADSSPRAM01ACTIVE - Non-Persistent register.<br> Control of ADSS PRAM 00-15. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low. */
/*! @{ */

#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_0_MASK      (0x3U)
#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_0_SHIFT     (0U)
/*! pram_0_0 - pram_0_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_0(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01ACTIVE_PRAM_0_0_SHIFT)) & PMRC_ADSSPRAM01ACTIVE_PRAM_0_0_MASK)

#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_1_MASK      (0xCU)
#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_1_SHIFT     (2U)
/*! pram_0_1 - pram_0_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_1(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01ACTIVE_PRAM_0_1_SHIFT)) & PMRC_ADSSPRAM01ACTIVE_PRAM_0_1_MASK)

#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_2_MASK      (0x30U)
#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_2_SHIFT     (4U)
/*! pram_0_2 - pram_0_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_2(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01ACTIVE_PRAM_0_2_SHIFT)) & PMRC_ADSSPRAM01ACTIVE_PRAM_0_2_MASK)

#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_3_MASK      (0xC0U)
#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_3_SHIFT     (6U)
/*! pram_0_3 - pram_0_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_3(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01ACTIVE_PRAM_0_3_SHIFT)) & PMRC_ADSSPRAM01ACTIVE_PRAM_0_3_MASK)

#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_4_MASK      (0x300U)
#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_4_SHIFT     (8U)
/*! pram_0_4 - pram_0_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_4(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01ACTIVE_PRAM_0_4_SHIFT)) & PMRC_ADSSPRAM01ACTIVE_PRAM_0_4_MASK)

#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_5_MASK      (0xC00U)
#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_5_SHIFT     (10U)
/*! pram_0_5 - pram_0_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01ACTIVE_PRAM_0_5(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01ACTIVE_PRAM_0_5_SHIFT)) & PMRC_ADSSPRAM01ACTIVE_PRAM_0_5_MASK)

#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_0_MASK      (0x3000U)
#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_0_SHIFT     (12U)
/*! pram_1_0 - pram_1_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_0(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01ACTIVE_PRAM_1_0_SHIFT)) & PMRC_ADSSPRAM01ACTIVE_PRAM_1_0_MASK)

#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_1_MASK      (0xC000U)
#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_1_SHIFT     (14U)
/*! pram_1_1 - pram_1_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_1(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01ACTIVE_PRAM_1_1_SHIFT)) & PMRC_ADSSPRAM01ACTIVE_PRAM_1_1_MASK)

#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_2_MASK      (0x30000U)
#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_2_SHIFT     (16U)
/*! pram_1_2 - pram_1_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_2(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01ACTIVE_PRAM_1_2_SHIFT)) & PMRC_ADSSPRAM01ACTIVE_PRAM_1_2_MASK)

#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_3_MASK      (0xC0000U)
#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_3_SHIFT     (18U)
/*! pram_1_3 - pram_1_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_3(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01ACTIVE_PRAM_1_3_SHIFT)) & PMRC_ADSSPRAM01ACTIVE_PRAM_1_3_MASK)

#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_4_MASK      (0x300000U)
#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_4_SHIFT     (20U)
/*! pram_1_4 - pram_1_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_4(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01ACTIVE_PRAM_1_4_SHIFT)) & PMRC_ADSSPRAM01ACTIVE_PRAM_1_4_MASK)

#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_5_MASK      (0xC00000U)
#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_5_SHIFT     (22U)
/*! pram_1_5 - pram_1_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01ACTIVE_PRAM_1_5(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01ACTIVE_PRAM_1_5_SHIFT)) & PMRC_ADSSPRAM01ACTIVE_PRAM_1_5_MASK)
/*! @} */

/*! @name ADSSPRAM2ACTIVE - Non-Persistent register.<br> Control of ADSS PRAM 20-27. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low. */
/*! @{ */

#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_0_MASK       (0x3U)
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_0_SHIFT      (0U)
/*! pram_2_0 - pram_2_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_0(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2ACTIVE_PRAM_2_0_SHIFT)) & PMRC_ADSSPRAM2ACTIVE_PRAM_2_0_MASK)

#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_1_MASK       (0xCU)
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_1_SHIFT      (2U)
/*! pram_2_1 - pram_2_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_1(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2ACTIVE_PRAM_2_1_SHIFT)) & PMRC_ADSSPRAM2ACTIVE_PRAM_2_1_MASK)

#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_2_MASK       (0x30U)
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_2_SHIFT      (4U)
/*! pram_2_2 - pram_2_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_2(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2ACTIVE_PRAM_2_2_SHIFT)) & PMRC_ADSSPRAM2ACTIVE_PRAM_2_2_MASK)

#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_3_MASK       (0xC0U)
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_3_SHIFT      (6U)
/*! pram_2_3 - pram_2_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_3(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2ACTIVE_PRAM_2_3_SHIFT)) & PMRC_ADSSPRAM2ACTIVE_PRAM_2_3_MASK)

#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_4_MASK       (0x300U)
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_4_SHIFT      (8U)
/*! pram_2_4 - pram_2_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_4(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2ACTIVE_PRAM_2_4_SHIFT)) & PMRC_ADSSPRAM2ACTIVE_PRAM_2_4_MASK)

#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_5_MASK       (0xC00U)
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_5_SHIFT      (10U)
/*! pram_2_5 - pram_2_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_5(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2ACTIVE_PRAM_2_5_SHIFT)) & PMRC_ADSSPRAM2ACTIVE_PRAM_2_5_MASK)

#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_6_MASK       (0x3000U)
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_6_SHIFT      (12U)
/*! pram_2_6 - pram_2_6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_6(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2ACTIVE_PRAM_2_6_SHIFT)) & PMRC_ADSSPRAM2ACTIVE_PRAM_2_6_MASK)

#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_7_MASK       (0xC000U)
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_7_SHIFT      (14U)
/*! pram_2_7 - pram_2_7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_7(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2ACTIVE_PRAM_2_7_SHIFT)) & PMRC_ADSSPRAM2ACTIVE_PRAM_2_7_MASK)

#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_8_MASK       (0x30000U)
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_8_SHIFT      (16U)
/*! pram_2_8 - pram_2_8
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_8(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2ACTIVE_PRAM_2_8_SHIFT)) & PMRC_ADSSPRAM2ACTIVE_PRAM_2_8_MASK)

#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_9_MASK       (0xC0000U)
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_9_SHIFT      (18U)
/*! pram_2_9 - pram_2_9
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2ACTIVE_PRAM_2_9(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2ACTIVE_PRAM_2_9_SHIFT)) & PMRC_ADSSPRAM2ACTIVE_PRAM_2_9_MASK)
/*! @} */

/*! @name ADSSXRAMACTIVE - Non-Persistent register.<br> Control of ADSS XRAM 0-15. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low. */
/*! @{ */

#define PMRC_ADSSXRAMACTIVE_XRAM_0_MASK          (0x3U)
#define PMRC_ADSSXRAMACTIVE_XRAM_0_SHIFT         (0U)
/*! xram_0 - xram_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMACTIVE_XRAM_0(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMACTIVE_XRAM_0_SHIFT)) & PMRC_ADSSXRAMACTIVE_XRAM_0_MASK)

#define PMRC_ADSSXRAMACTIVE_XRAM_1_MASK          (0xCU)
#define PMRC_ADSSXRAMACTIVE_XRAM_1_SHIFT         (2U)
/*! xram_1 - xram_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMACTIVE_XRAM_1(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMACTIVE_XRAM_1_SHIFT)) & PMRC_ADSSXRAMACTIVE_XRAM_1_MASK)

#define PMRC_ADSSXRAMACTIVE_XRAM_2_MASK          (0x30U)
#define PMRC_ADSSXRAMACTIVE_XRAM_2_SHIFT         (4U)
/*! xram_2 - xram_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMACTIVE_XRAM_2(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMACTIVE_XRAM_2_SHIFT)) & PMRC_ADSSXRAMACTIVE_XRAM_2_MASK)

#define PMRC_ADSSXRAMACTIVE_XRAM_3_MASK          (0xC0U)
#define PMRC_ADSSXRAMACTIVE_XRAM_3_SHIFT         (6U)
/*! xram_3 - xram_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMACTIVE_XRAM_3(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMACTIVE_XRAM_3_SHIFT)) & PMRC_ADSSXRAMACTIVE_XRAM_3_MASK)

#define PMRC_ADSSXRAMACTIVE_XRAM_4_MASK          (0x300U)
#define PMRC_ADSSXRAMACTIVE_XRAM_4_SHIFT         (8U)
/*! xram_4 - xram_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMACTIVE_XRAM_4(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMACTIVE_XRAM_4_SHIFT)) & PMRC_ADSSXRAMACTIVE_XRAM_4_MASK)

#define PMRC_ADSSXRAMACTIVE_XRAM_5_MASK          (0xC00U)
#define PMRC_ADSSXRAMACTIVE_XRAM_5_SHIFT         (10U)
/*! xram_5 - xram_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMACTIVE_XRAM_5(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMACTIVE_XRAM_5_SHIFT)) & PMRC_ADSSXRAMACTIVE_XRAM_5_MASK)

#define PMRC_ADSSXRAMACTIVE_XRAM_6_MASK          (0x3000U)
#define PMRC_ADSSXRAMACTIVE_XRAM_6_SHIFT         (12U)
/*! xram_6 - xram_6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMACTIVE_XRAM_6(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMACTIVE_XRAM_6_SHIFT)) & PMRC_ADSSXRAMACTIVE_XRAM_6_MASK)

#define PMRC_ADSSXRAMACTIVE_XRAM_7_MASK          (0xC000U)
#define PMRC_ADSSXRAMACTIVE_XRAM_7_SHIFT         (14U)
/*! xram_7 - xram_7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMACTIVE_XRAM_7(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMACTIVE_XRAM_7_SHIFT)) & PMRC_ADSSXRAMACTIVE_XRAM_7_MASK)

#define PMRC_ADSSXRAMACTIVE_XRAM_8_MASK          (0x30000U)
#define PMRC_ADSSXRAMACTIVE_XRAM_8_SHIFT         (16U)
/*! xram_8 - xram_8
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMACTIVE_XRAM_8(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMACTIVE_XRAM_8_SHIFT)) & PMRC_ADSSXRAMACTIVE_XRAM_8_MASK)

#define PMRC_ADSSXRAMACTIVE_XRAM_9_MASK          (0xC0000U)
#define PMRC_ADSSXRAMACTIVE_XRAM_9_SHIFT         (18U)
/*! xram_9 - xram_9
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMACTIVE_XRAM_9(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMACTIVE_XRAM_9_SHIFT)) & PMRC_ADSSXRAMACTIVE_XRAM_9_MASK)

#define PMRC_ADSSXRAMACTIVE_XRAM_10_MASK         (0x300000U)
#define PMRC_ADSSXRAMACTIVE_XRAM_10_SHIFT        (20U)
/*! xram_10 - xram_10
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMACTIVE_XRAM_10(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMACTIVE_XRAM_10_SHIFT)) & PMRC_ADSSXRAMACTIVE_XRAM_10_MASK)

#define PMRC_ADSSXRAMACTIVE_XRAM_11_MASK         (0xC00000U)
#define PMRC_ADSSXRAMACTIVE_XRAM_11_SHIFT        (22U)
/*! xram_11 - xram_11
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMACTIVE_XRAM_11(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMACTIVE_XRAM_11_SHIFT)) & PMRC_ADSSXRAMACTIVE_XRAM_11_MASK)

#define PMRC_ADSSXRAMACTIVE_XRAM_12_MASK         (0x3000000U)
#define PMRC_ADSSXRAMACTIVE_XRAM_12_SHIFT        (24U)
/*! xram_12 - xram_12
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMACTIVE_XRAM_12(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMACTIVE_XRAM_12_SHIFT)) & PMRC_ADSSXRAMACTIVE_XRAM_12_MASK)

#define PMRC_ADSSXRAMACTIVE_XRAM_13_MASK         (0xC000000U)
#define PMRC_ADSSXRAMACTIVE_XRAM_13_SHIFT        (26U)
/*! xram_13 - xram_13
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMACTIVE_XRAM_13(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMACTIVE_XRAM_13_SHIFT)) & PMRC_ADSSXRAMACTIVE_XRAM_13_MASK)

#define PMRC_ADSSXRAMACTIVE_XRAM_14_MASK         (0x30000000U)
#define PMRC_ADSSXRAMACTIVE_XRAM_14_SHIFT        (28U)
/*! xram_14 - xram_14
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMACTIVE_XRAM_14(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMACTIVE_XRAM_14_SHIFT)) & PMRC_ADSSXRAMACTIVE_XRAM_14_MASK)

#define PMRC_ADSSXRAMACTIVE_XRAM_15_MASK         (0xC0000000U)
#define PMRC_ADSSXRAMACTIVE_XRAM_15_SHIFT        (30U)
/*! xram_15 - xram_15
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMACTIVE_XRAM_15(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMACTIVE_XRAM_15_SHIFT)) & PMRC_ADSSXRAMACTIVE_XRAM_15_MASK)
/*! @} */

/*! @name ADSSYRAMMISCACTIVE - Non-Persistent register.<br> Control of ADSS XRAM 0-15. <br> Writing this register must be done only if the memories are not being accessed and if vdig_busy bit in register Tranfer is read low. */
/*! @{ */

#define PMRC_ADSSYRAMMISCACTIVE_YRAM_0_MASK      (0x3U)
#define PMRC_ADSSYRAMMISCACTIVE_YRAM_0_SHIFT     (0U)
/*! yram_0 - yram_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSYRAMMISCACTIVE_YRAM_0(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSYRAMMISCACTIVE_YRAM_0_SHIFT)) & PMRC_ADSSYRAMMISCACTIVE_YRAM_0_MASK)

#define PMRC_ADSSYRAMMISCACTIVE_YRAM_1_MASK      (0xCU)
#define PMRC_ADSSYRAMMISCACTIVE_YRAM_1_SHIFT     (2U)
/*! yram_1 - yram_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSYRAMMISCACTIVE_YRAM_1(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSYRAMMISCACTIVE_YRAM_1_SHIFT)) & PMRC_ADSSYRAMMISCACTIVE_YRAM_1_MASK)

#define PMRC_ADSSYRAMMISCACTIVE_YRAM_2_MASK      (0x30U)
#define PMRC_ADSSYRAMMISCACTIVE_YRAM_2_SHIFT     (4U)
/*! yram_2 - yram_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSYRAMMISCACTIVE_YRAM_2(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSYRAMMISCACTIVE_YRAM_2_SHIFT)) & PMRC_ADSSYRAMMISCACTIVE_YRAM_2_MASK)

#define PMRC_ADSSYRAMMISCACTIVE_YRAM_3_MASK      (0xC0U)
#define PMRC_ADSSYRAMMISCACTIVE_YRAM_3_SHIFT     (6U)
/*! yram_3 - yram_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSYRAMMISCACTIVE_YRAM_3(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSYRAMMISCACTIVE_YRAM_3_SHIFT)) & PMRC_ADSSYRAMMISCACTIVE_YRAM_3_MASK)

#define PMRC_ADSSYRAMMISCACTIVE_YRAM_4_MASK      (0x300U)
#define PMRC_ADSSYRAMMISCACTIVE_YRAM_4_SHIFT     (8U)
/*! yram_4 - yram_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSYRAMMISCACTIVE_YRAM_4(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSYRAMMISCACTIVE_YRAM_4_SHIFT)) & PMRC_ADSSYRAMMISCACTIVE_YRAM_4_MASK)

#define PMRC_ADSSYRAMMISCACTIVE_YRAM_5_MASK      (0xC00U)
#define PMRC_ADSSYRAMMISCACTIVE_YRAM_5_SHIFT     (10U)
/*! yram_5 - yram_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSYRAMMISCACTIVE_YRAM_5(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSYRAMMISCACTIVE_YRAM_5_SHIFT)) & PMRC_ADSSYRAMMISCACTIVE_YRAM_5_MASK)

#define PMRC_ADSSYRAMMISCACTIVE_YRAM_6_MASK      (0x3000U)
#define PMRC_ADSSYRAMMISCACTIVE_YRAM_6_SHIFT     (12U)
/*! yram_6 - yram_6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSYRAMMISCACTIVE_YRAM_6(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSYRAMMISCACTIVE_YRAM_6_SHIFT)) & PMRC_ADSSYRAMMISCACTIVE_YRAM_6_MASK)

#define PMRC_ADSSYRAMMISCACTIVE_YRAM_7_MASK      (0xC000U)
#define PMRC_ADSSYRAMMISCACTIVE_YRAM_7_SHIFT     (14U)
/*! yram_7 - yram_7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSYRAMMISCACTIVE_YRAM_7(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSYRAMMISCACTIVE_YRAM_7_SHIFT)) & PMRC_ADSSYRAMMISCACTIVE_YRAM_7_MASK)
/*! @} */

/*! @name CTRLSSCM55RAMLP - Non-Persistent register.<br> Control of CTRLSS CM55 RAM, used when Pindus is in deep-sleep or power-down. */
/*! @{ */

#define PMRC_CTRLSSCM55RAMLP_RAM0_0_MASK         (0x3U)
#define PMRC_CTRLSSCM55RAMLP_RAM0_0_SHIFT        (0U)
/*! ram0_0 - ITCM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMLP_RAM0_0(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMLP_RAM0_0_SHIFT)) & PMRC_CTRLSSCM55RAMLP_RAM0_0_MASK)

#define PMRC_CTRLSSCM55RAMLP_RAM0_1_MASK         (0xCU)
#define PMRC_CTRLSSCM55RAMLP_RAM0_1_SHIFT        (2U)
/*! ram0_1 - ITCM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMLP_RAM0_1(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMLP_RAM0_1_SHIFT)) & PMRC_CTRLSSCM55RAMLP_RAM0_1_MASK)

#define PMRC_CTRLSSCM55RAMLP_RAM0_2_MASK         (0x30U)
#define PMRC_CTRLSSCM55RAMLP_RAM0_2_SHIFT        (4U)
/*! ram0_2 - ITCM2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMLP_RAM0_2(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMLP_RAM0_2_SHIFT)) & PMRC_CTRLSSCM55RAMLP_RAM0_2_MASK)

#define PMRC_CTRLSSCM55RAMLP_RAM0_3_MASK         (0xC0U)
#define PMRC_CTRLSSCM55RAMLP_RAM0_3_SHIFT        (6U)
/*! ram0_3 - ITCM3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMLP_RAM0_3(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMLP_RAM0_3_SHIFT)) & PMRC_CTRLSSCM55RAMLP_RAM0_3_MASK)

#define PMRC_CTRLSSCM55RAMLP_RAM0_4_MASK         (0x300U)
#define PMRC_CTRLSSCM55RAMLP_RAM0_4_SHIFT        (8U)
/*! ram0_4 - ITCM4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMLP_RAM0_4(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMLP_RAM0_4_SHIFT)) & PMRC_CTRLSSCM55RAMLP_RAM0_4_MASK)

#define PMRC_CTRLSSCM55RAMLP_RAM0_5_MASK         (0xC00U)
#define PMRC_CTRLSSCM55RAMLP_RAM0_5_SHIFT        (10U)
/*! ram0_5 - ITCM5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMLP_RAM0_5(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMLP_RAM0_5_SHIFT)) & PMRC_CTRLSSCM55RAMLP_RAM0_5_MASK)

#define PMRC_CTRLSSCM55RAMLP_RAM0_6_MASK         (0x3000U)
#define PMRC_CTRLSSCM55RAMLP_RAM0_6_SHIFT        (12U)
/*! ram0_6 - ITCM6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMLP_RAM0_6(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMLP_RAM0_6_SHIFT)) & PMRC_CTRLSSCM55RAMLP_RAM0_6_MASK)

#define PMRC_CTRLSSCM55RAMLP_RAM0_7_MASK         (0xC000U)
#define PMRC_CTRLSSCM55RAMLP_RAM0_7_SHIFT        (14U)
/*! ram0_7 - ITCM7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMLP_RAM0_7(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMLP_RAM0_7_SHIFT)) & PMRC_CTRLSSCM55RAMLP_RAM0_7_MASK)

#define PMRC_CTRLSSCM55RAMLP_RAM1_0_MASK         (0x30000U)
#define PMRC_CTRLSSCM55RAMLP_RAM1_0_SHIFT        (16U)
/*! ram1_0 - DTCM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMLP_RAM1_0(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMLP_RAM1_0_SHIFT)) & PMRC_CTRLSSCM55RAMLP_RAM1_0_MASK)

#define PMRC_CTRLSSCM55RAMLP_RAM1_1_MASK         (0xC0000U)
#define PMRC_CTRLSSCM55RAMLP_RAM1_1_SHIFT        (18U)
/*! ram1_1 - DTCM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMLP_RAM1_1(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMLP_RAM1_1_SHIFT)) & PMRC_CTRLSSCM55RAMLP_RAM1_1_MASK)

#define PMRC_CTRLSSCM55RAMLP_RAM1_2_MASK         (0x300000U)
#define PMRC_CTRLSSCM55RAMLP_RAM1_2_SHIFT        (20U)
/*! ram1_2 - DTCM2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMLP_RAM1_2(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMLP_RAM1_2_SHIFT)) & PMRC_CTRLSSCM55RAMLP_RAM1_2_MASK)

#define PMRC_CTRLSSCM55RAMLP_RAM1_3_MASK         (0xC00000U)
#define PMRC_CTRLSSCM55RAMLP_RAM1_3_SHIFT        (22U)
/*! ram1_3 - DTCM3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMLP_RAM1_3(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMLP_RAM1_3_SHIFT)) & PMRC_CTRLSSCM55RAMLP_RAM1_3_MASK)

#define PMRC_CTRLSSCM55RAMLP_RAM1_4_MASK         (0x3000000U)
#define PMRC_CTRLSSCM55RAMLP_RAM1_4_SHIFT        (24U)
/*! ram1_4 - DTCM4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMLP_RAM1_4(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMLP_RAM1_4_SHIFT)) & PMRC_CTRLSSCM55RAMLP_RAM1_4_MASK)

#define PMRC_CTRLSSCM55RAMLP_RAM1_5_MASK         (0xC000000U)
#define PMRC_CTRLSSCM55RAMLP_RAM1_5_SHIFT        (26U)
/*! ram1_5 - DTCM5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMLP_RAM1_5(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMLP_RAM1_5_SHIFT)) & PMRC_CTRLSSCM55RAMLP_RAM1_5_MASK)

#define PMRC_CTRLSSCM55RAMLP_RAM1_6_MASK         (0x30000000U)
#define PMRC_CTRLSSCM55RAMLP_RAM1_6_SHIFT        (28U)
/*! ram1_6 - DTCM6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMLP_RAM1_6(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMLP_RAM1_6_SHIFT)) & PMRC_CTRLSSCM55RAMLP_RAM1_6_MASK)

#define PMRC_CTRLSSCM55RAMLP_RAM1_7_MASK         (0xC0000000U)
#define PMRC_CTRLSSCM55RAMLP_RAM1_7_SHIFT        (30U)
/*! ram1_7 - DTCM7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55RAMLP_RAM1_7(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55RAMLP_RAM1_7_SHIFT)) & PMRC_CTRLSSCM55RAMLP_RAM1_7_MASK)
/*! @} */

/*! @name CTRLSSCM55CACHELP - Non-Persistent register.<br> Control of CTRLSS CM55 Cache, used when Pindus is in deep-sleep or power-down. */
/*! @{ */

#define PMRC_CTRLSSCM55CACHELP_DRAM_0_MASK       (0x3U)
#define PMRC_CTRLSSCM55CACHELP_DRAM_0_SHIFT      (0U)
/*! dram_0 - DRAM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHELP_DRAM_0(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHELP_DRAM_0_SHIFT)) & PMRC_CTRLSSCM55CACHELP_DRAM_0_MASK)

#define PMRC_CTRLSSCM55CACHELP_DRAM_1_MASK       (0xCU)
#define PMRC_CTRLSSCM55CACHELP_DRAM_1_SHIFT      (2U)
/*! dram_1 - DRAM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHELP_DRAM_1(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHELP_DRAM_1_SHIFT)) & PMRC_CTRLSSCM55CACHELP_DRAM_1_MASK)

#define PMRC_CTRLSSCM55CACHELP_DRAM_2_MASK       (0x30U)
#define PMRC_CTRLSSCM55CACHELP_DRAM_2_SHIFT      (4U)
/*! dram_2 - DRAM2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHELP_DRAM_2(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHELP_DRAM_2_SHIFT)) & PMRC_CTRLSSCM55CACHELP_DRAM_2_MASK)

#define PMRC_CTRLSSCM55CACHELP_DRAM_3_MASK       (0xC0U)
#define PMRC_CTRLSSCM55CACHELP_DRAM_3_SHIFT      (6U)
/*! dram_3 - DRAM3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHELP_DRAM_3(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHELP_DRAM_3_SHIFT)) & PMRC_CTRLSSCM55CACHELP_DRAM_3_MASK)

#define PMRC_CTRLSSCM55CACHELP_DRAM_4_MASK       (0x300U)
#define PMRC_CTRLSSCM55CACHELP_DRAM_4_SHIFT      (8U)
/*! dram_4 - DRAM4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHELP_DRAM_4(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHELP_DRAM_4_SHIFT)) & PMRC_CTRLSSCM55CACHELP_DRAM_4_MASK)

#define PMRC_CTRLSSCM55CACHELP_DRAM_5_MASK       (0xC00U)
#define PMRC_CTRLSSCM55CACHELP_DRAM_5_SHIFT      (10U)
/*! dram_5 - DRAM5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHELP_DRAM_5(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHELP_DRAM_5_SHIFT)) & PMRC_CTRLSSCM55CACHELP_DRAM_5_MASK)

#define PMRC_CTRLSSCM55CACHELP_DRAM_6_MASK       (0x3000U)
#define PMRC_CTRLSSCM55CACHELP_DRAM_6_SHIFT      (12U)
/*! dram_6 - DRAM6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHELP_DRAM_6(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHELP_DRAM_6_SHIFT)) & PMRC_CTRLSSCM55CACHELP_DRAM_6_MASK)

#define PMRC_CTRLSSCM55CACHELP_DRAM_7_MASK       (0xC000U)
#define PMRC_CTRLSSCM55CACHELP_DRAM_7_SHIFT      (14U)
/*! dram_7 - DRAM7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHELP_DRAM_7(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHELP_DRAM_7_SHIFT)) & PMRC_CTRLSSCM55CACHELP_DRAM_7_MASK)

#define PMRC_CTRLSSCM55CACHELP_IRAM_0_MASK       (0x30000U)
#define PMRC_CTRLSSCM55CACHELP_IRAM_0_SHIFT      (16U)
/*! iram_0 - IRAM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHELP_IRAM_0(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHELP_IRAM_0_SHIFT)) & PMRC_CTRLSSCM55CACHELP_IRAM_0_MASK)

#define PMRC_CTRLSSCM55CACHELP_IRAM_1_MASK       (0xC0000U)
#define PMRC_CTRLSSCM55CACHELP_IRAM_1_SHIFT      (18U)
/*! iram_1 - IRAM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHELP_IRAM_1(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHELP_IRAM_1_SHIFT)) & PMRC_CTRLSSCM55CACHELP_IRAM_1_MASK)

#define PMRC_CTRLSSCM55CACHELP_ITRAM_0_MASK      (0x300000U)
#define PMRC_CTRLSSCM55CACHELP_ITRAM_0_SHIFT     (20U)
/*! itram_0 - ITRAM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHELP_ITRAM_0(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHELP_ITRAM_0_SHIFT)) & PMRC_CTRLSSCM55CACHELP_ITRAM_0_MASK)

#define PMRC_CTRLSSCM55CACHELP_ITRAM_1_MASK      (0xC00000U)
#define PMRC_CTRLSSCM55CACHELP_ITRAM_1_SHIFT     (22U)
/*! itram_1 - ITRAM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHELP_ITRAM_1(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHELP_ITRAM_1_SHIFT)) & PMRC_CTRLSSCM55CACHELP_ITRAM_1_MASK)

#define PMRC_CTRLSSCM55CACHELP_DTRAM_0_MASK      (0x3000000U)
#define PMRC_CTRLSSCM55CACHELP_DTRAM_0_SHIFT     (24U)
/*! dtram_0 - DTRAM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHELP_DTRAM_0(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHELP_DTRAM_0_SHIFT)) & PMRC_CTRLSSCM55CACHELP_DTRAM_0_MASK)

#define PMRC_CTRLSSCM55CACHELP_DTRAM_1_MASK      (0xC000000U)
#define PMRC_CTRLSSCM55CACHELP_DTRAM_1_SHIFT     (26U)
/*! dtram_1 - DTRAM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHELP_DTRAM_1(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHELP_DTRAM_1_SHIFT)) & PMRC_CTRLSSCM55CACHELP_DTRAM_1_MASK)

#define PMRC_CTRLSSCM55CACHELP_DTRAM_2_MASK      (0x30000000U)
#define PMRC_CTRLSSCM55CACHELP_DTRAM_2_SHIFT     (28U)
/*! dtram_2 - DTRAM2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHELP_DTRAM_2(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHELP_DTRAM_2_SHIFT)) & PMRC_CTRLSSCM55CACHELP_DTRAM_2_MASK)

#define PMRC_CTRLSSCM55CACHELP_DTRAM_3_MASK      (0xC0000000U)
#define PMRC_CTRLSSCM55CACHELP_DTRAM_3_SHIFT     (30U)
/*! dtram_3 - DTRAM3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55CACHELP_DTRAM_3(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55CACHELP_DTRAM_3_SHIFT)) & PMRC_CTRLSSCM55CACHELP_DTRAM_3_MASK)
/*! @} */

/*! @name CTRLSSCM55PKCOTPLP - Non-Persistent register.<br> Control of CTRLSS CM55 OTP and PKC ram, used when Pindus is in deep-sleep or power-down. */
/*! @{ */

#define PMRC_CTRLSSCM55PKCOTPLP_OTP_RAM_0_MASK   (0x3U)
#define PMRC_CTRLSSCM55PKCOTPLP_OTP_RAM_0_SHIFT  (0U)
/*! otp_ram_0 - ram_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55PKCOTPLP_OTP_RAM_0(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55PKCOTPLP_OTP_RAM_0_SHIFT)) & PMRC_CTRLSSCM55PKCOTPLP_OTP_RAM_0_MASK)

#define PMRC_CTRLSSCM55PKCOTPLP_PKC_RAM_0_MASK   (0xCU)
#define PMRC_CTRLSSCM55PKCOTPLP_PKC_RAM_0_SHIFT  (2U)
/*! pkc_ram_0 - ram_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55PKCOTPLP_PKC_RAM_0(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55PKCOTPLP_PKC_RAM_0_SHIFT)) & PMRC_CTRLSSCM55PKCOTPLP_PKC_RAM_0_MASK)

#define PMRC_CTRLSSCM55PKCOTPLP_PKC_RAM_1_MASK   (0x30U)
#define PMRC_CTRLSSCM55PKCOTPLP_PKC_RAM_1_SHIFT  (4U)
/*! pkc_ram_1 - ram_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_CTRLSSCM55PKCOTPLP_PKC_RAM_1(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_CTRLSSCM55PKCOTPLP_PKC_RAM_1_SHIFT)) & PMRC_CTRLSSCM55PKCOTPLP_PKC_RAM_1_MASK)
/*! @} */

/*! @name NSSAXIXSPLP - Non-Persistent register.<br> Control of NSS RAM, used when Pindus is in deep-sleep or power-down. */
/*! @{ */

#define PMRC_NSSAXIXSPLP_DMA_RAM_0_MASK          (0x3U)
#define PMRC_NSSAXIXSPLP_DMA_RAM_0_SHIFT         (0U)
/*! dma_ram_0 - ram_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSAXIXSPLP_DMA_RAM_0(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSAXIXSPLP_DMA_RAM_0_SHIFT)) & PMRC_NSSAXIXSPLP_DMA_RAM_0_MASK)

#define PMRC_NSSAXIXSPLP_XSP_XRAM_0_MASK         (0xCU)
#define PMRC_NSSAXIXSPLP_XSP_XRAM_0_SHIFT        (2U)
/*! xsp_xram_0 - xsp_xram_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSAXIXSPLP_XSP_XRAM_0(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_NSSAXIXSPLP_XSP_XRAM_0_SHIFT)) & PMRC_NSSAXIXSPLP_XSP_XRAM_0_MASK)

#define PMRC_NSSAXIXSPLP_XSP_YRAM_0_MASK         (0x30U)
#define PMRC_NSSAXIXSPLP_XSP_YRAM_0_SHIFT        (4U)
/*! xsp_yram_0 - xsp_yram_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSAXIXSPLP_XSP_YRAM_0(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_NSSAXIXSPLP_XSP_YRAM_0_SHIFT)) & PMRC_NSSAXIXSPLP_XSP_YRAM_0_MASK)

#define PMRC_NSSAXIXSPLP_XSP_PRAM_0_MASK         (0xC0U)
#define PMRC_NSSAXIXSPLP_XSP_PRAM_0_SHIFT        (6U)
/*! xsp_pram_0 - xsp_pram_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSAXIXSPLP_XSP_PRAM_0(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_NSSAXIXSPLP_XSP_PRAM_0_SHIFT)) & PMRC_NSSAXIXSPLP_XSP_PRAM_0_MASK)

#define PMRC_NSSAXIXSPLP_XSP_PRAM_1_MASK         (0x300U)
#define PMRC_NSSAXIXSPLP_XSP_PRAM_1_SHIFT        (8U)
/*! xsp_pram_1 - xsp_pram_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSAXIXSPLP_XSP_PRAM_1(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_NSSAXIXSPLP_XSP_PRAM_1_SHIFT)) & PMRC_NSSAXIXSPLP_XSP_PRAM_1_MASK)

#define PMRC_NSSAXIXSPLP_XSP_PRAM_2_MASK         (0xC00U)
#define PMRC_NSSAXIXSPLP_XSP_PRAM_2_SHIFT        (10U)
/*! xsp_pram_2 - xsp_pram_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSAXIXSPLP_XSP_PRAM_2(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_NSSAXIXSPLP_XSP_PRAM_2_SHIFT)) & PMRC_NSSAXIXSPLP_XSP_PRAM_2_MASK)

#define PMRC_NSSAXIXSPLP_XSP_PRAM_3_MASK         (0x3000U)
#define PMRC_NSSAXIXSPLP_XSP_PRAM_3_SHIFT        (12U)
/*! xsp_pram_3 - xsp_pram_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSAXIXSPLP_XSP_PRAM_3(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_NSSAXIXSPLP_XSP_PRAM_3_SHIFT)) & PMRC_NSSAXIXSPLP_XSP_PRAM_3_MASK)
/*! @} */

/*! @name NSSCM55CACHELP - Non-Persistent register.<br> Control of NSS CM55 Cache, used when Pindus is in deep-sleep or power-down. */
/*! @{ */

#define PMRC_NSSCM55CACHELP_DRAM_0_MASK          (0x3U)
#define PMRC_NSSCM55CACHELP_DRAM_0_SHIFT         (0U)
/*! dram_0 - DRAM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHELP_DRAM_0(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHELP_DRAM_0_SHIFT)) & PMRC_NSSCM55CACHELP_DRAM_0_MASK)

#define PMRC_NSSCM55CACHELP_DRAM_1_MASK          (0xCU)
#define PMRC_NSSCM55CACHELP_DRAM_1_SHIFT         (2U)
/*! dram_1 - DRAM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHELP_DRAM_1(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHELP_DRAM_1_SHIFT)) & PMRC_NSSCM55CACHELP_DRAM_1_MASK)

#define PMRC_NSSCM55CACHELP_DRAM_2_MASK          (0x30U)
#define PMRC_NSSCM55CACHELP_DRAM_2_SHIFT         (4U)
/*! dram_2 - DRAM2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHELP_DRAM_2(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHELP_DRAM_2_SHIFT)) & PMRC_NSSCM55CACHELP_DRAM_2_MASK)

#define PMRC_NSSCM55CACHELP_DRAM_3_MASK          (0xC0U)
#define PMRC_NSSCM55CACHELP_DRAM_3_SHIFT         (6U)
/*! dram_3 - DRAM3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHELP_DRAM_3(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHELP_DRAM_3_SHIFT)) & PMRC_NSSCM55CACHELP_DRAM_3_MASK)

#define PMRC_NSSCM55CACHELP_DRAM_4_MASK          (0x300U)
#define PMRC_NSSCM55CACHELP_DRAM_4_SHIFT         (8U)
/*! dram_4 - DRAM4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHELP_DRAM_4(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHELP_DRAM_4_SHIFT)) & PMRC_NSSCM55CACHELP_DRAM_4_MASK)

#define PMRC_NSSCM55CACHELP_DRAM_5_MASK          (0xC00U)
#define PMRC_NSSCM55CACHELP_DRAM_5_SHIFT         (10U)
/*! dram_5 - DRAM5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHELP_DRAM_5(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHELP_DRAM_5_SHIFT)) & PMRC_NSSCM55CACHELP_DRAM_5_MASK)

#define PMRC_NSSCM55CACHELP_DRAM_6_MASK          (0x3000U)
#define PMRC_NSSCM55CACHELP_DRAM_6_SHIFT         (12U)
/*! dram_6 - DRAM6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHELP_DRAM_6(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHELP_DRAM_6_SHIFT)) & PMRC_NSSCM55CACHELP_DRAM_6_MASK)

#define PMRC_NSSCM55CACHELP_DRAM_7_MASK          (0xC000U)
#define PMRC_NSSCM55CACHELP_DRAM_7_SHIFT         (14U)
/*! dram_7 - DRAM7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHELP_DRAM_7(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHELP_DRAM_7_SHIFT)) & PMRC_NSSCM55CACHELP_DRAM_7_MASK)

#define PMRC_NSSCM55CACHELP_IRAM_0_MASK          (0x30000U)
#define PMRC_NSSCM55CACHELP_IRAM_0_SHIFT         (16U)
/*! iram_0 - IRAM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHELP_IRAM_0(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHELP_IRAM_0_SHIFT)) & PMRC_NSSCM55CACHELP_IRAM_0_MASK)

#define PMRC_NSSCM55CACHELP_IRAM_1_MASK          (0xC0000U)
#define PMRC_NSSCM55CACHELP_IRAM_1_SHIFT         (18U)
/*! iram_1 - IRAM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHELP_IRAM_1(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHELP_IRAM_1_SHIFT)) & PMRC_NSSCM55CACHELP_IRAM_1_MASK)

#define PMRC_NSSCM55CACHELP_ITRAM_0_MASK         (0x300000U)
#define PMRC_NSSCM55CACHELP_ITRAM_0_SHIFT        (20U)
/*! itram_0 - ITRAM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHELP_ITRAM_0(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHELP_ITRAM_0_SHIFT)) & PMRC_NSSCM55CACHELP_ITRAM_0_MASK)

#define PMRC_NSSCM55CACHELP_ITRAM_1_MASK         (0xC00000U)
#define PMRC_NSSCM55CACHELP_ITRAM_1_SHIFT        (22U)
/*! itram_1 - ITRAM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHELP_ITRAM_1(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHELP_ITRAM_1_SHIFT)) & PMRC_NSSCM55CACHELP_ITRAM_1_MASK)

#define PMRC_NSSCM55CACHELP_DTRAM_0_MASK         (0x3000000U)
#define PMRC_NSSCM55CACHELP_DTRAM_0_SHIFT        (24U)
/*! dtram_0 - DTRAM0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHELP_DTRAM_0(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHELP_DTRAM_0_SHIFT)) & PMRC_NSSCM55CACHELP_DTRAM_0_MASK)

#define PMRC_NSSCM55CACHELP_DTRAM_1_MASK         (0xC000000U)
#define PMRC_NSSCM55CACHELP_DTRAM_1_SHIFT        (26U)
/*! dtram_1 - DTRAM1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHELP_DTRAM_1(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHELP_DTRAM_1_SHIFT)) & PMRC_NSSCM55CACHELP_DTRAM_1_MASK)

#define PMRC_NSSCM55CACHELP_DTRAM_2_MASK         (0x30000000U)
#define PMRC_NSSCM55CACHELP_DTRAM_2_SHIFT        (28U)
/*! dtram_2 - DTRAM2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHELP_DTRAM_2(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHELP_DTRAM_2_SHIFT)) & PMRC_NSSCM55CACHELP_DTRAM_2_MASK)

#define PMRC_NSSCM55CACHELP_DTRAM_3_MASK         (0xC0000000U)
#define PMRC_NSSCM55CACHELP_DTRAM_3_SHIFT        (30U)
/*! dtram_3 - DTRAM3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSCM55CACHELP_DTRAM_3(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_NSSCM55CACHELP_DTRAM_3_SHIFT)) & PMRC_NSSCM55CACHELP_DTRAM_3_MASK)
/*! @} */

/*! @name NSSDNNRAM01LP - Non-Persistent register.<br> Control of NSS DNN RAM 00-17, used when Pindus is in deep-sleep or power-down. */
/*! @{ */

#define PMRC_NSSDNNRAM01LP_RAM_0_0_MASK          (0x3U)
#define PMRC_NSSDNNRAM01LP_RAM_0_0_SHIFT         (0U)
/*! ram_0_0 - ram_0_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01LP_RAM_0_0(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01LP_RAM_0_0_SHIFT)) & PMRC_NSSDNNRAM01LP_RAM_0_0_MASK)

#define PMRC_NSSDNNRAM01LP_RAM_0_1_MASK          (0xCU)
#define PMRC_NSSDNNRAM01LP_RAM_0_1_SHIFT         (2U)
/*! ram_0_1 - ram_0_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01LP_RAM_0_1(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01LP_RAM_0_1_SHIFT)) & PMRC_NSSDNNRAM01LP_RAM_0_1_MASK)

#define PMRC_NSSDNNRAM01LP_RAM_0_2_MASK          (0x30U)
#define PMRC_NSSDNNRAM01LP_RAM_0_2_SHIFT         (4U)
/*! ram_0_2 - ram_0_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01LP_RAM_0_2(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01LP_RAM_0_2_SHIFT)) & PMRC_NSSDNNRAM01LP_RAM_0_2_MASK)

#define PMRC_NSSDNNRAM01LP_RAM_0_3_MASK          (0xC0U)
#define PMRC_NSSDNNRAM01LP_RAM_0_3_SHIFT         (6U)
/*! ram_0_3 - ram_0_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01LP_RAM_0_3(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01LP_RAM_0_3_SHIFT)) & PMRC_NSSDNNRAM01LP_RAM_0_3_MASK)

#define PMRC_NSSDNNRAM01LP_RAM_0_4_MASK          (0x300U)
#define PMRC_NSSDNNRAM01LP_RAM_0_4_SHIFT         (8U)
/*! ram_0_4 - ram_0_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01LP_RAM_0_4(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01LP_RAM_0_4_SHIFT)) & PMRC_NSSDNNRAM01LP_RAM_0_4_MASK)

#define PMRC_NSSDNNRAM01LP_RAM_0_5_MASK          (0xC00U)
#define PMRC_NSSDNNRAM01LP_RAM_0_5_SHIFT         (10U)
/*! ram_0_5 - ram_0_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01LP_RAM_0_5(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01LP_RAM_0_5_SHIFT)) & PMRC_NSSDNNRAM01LP_RAM_0_5_MASK)

#define PMRC_NSSDNNRAM01LP_RAM_0_6_MASK          (0x3000U)
#define PMRC_NSSDNNRAM01LP_RAM_0_6_SHIFT         (12U)
/*! ram_0_6 - ram_0_6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01LP_RAM_0_6(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01LP_RAM_0_6_SHIFT)) & PMRC_NSSDNNRAM01LP_RAM_0_6_MASK)

#define PMRC_NSSDNNRAM01LP_RAM_0_7_MASK          (0xC000U)
#define PMRC_NSSDNNRAM01LP_RAM_0_7_SHIFT         (14U)
/*! ram_0_7 - ram_0_7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01LP_RAM_0_7(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01LP_RAM_0_7_SHIFT)) & PMRC_NSSDNNRAM01LP_RAM_0_7_MASK)

#define PMRC_NSSDNNRAM01LP_RAM_1_0_MASK          (0x30000U)
#define PMRC_NSSDNNRAM01LP_RAM_1_0_SHIFT         (16U)
/*! ram_1_0 - ram_1_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01LP_RAM_1_0(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01LP_RAM_1_0_SHIFT)) & PMRC_NSSDNNRAM01LP_RAM_1_0_MASK)

#define PMRC_NSSDNNRAM01LP_RAM_1_1_MASK          (0xC0000U)
#define PMRC_NSSDNNRAM01LP_RAM_1_1_SHIFT         (18U)
/*! ram_1_1 - ram_1_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01LP_RAM_1_1(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01LP_RAM_1_1_SHIFT)) & PMRC_NSSDNNRAM01LP_RAM_1_1_MASK)

#define PMRC_NSSDNNRAM01LP_RAM_1_2_MASK          (0x300000U)
#define PMRC_NSSDNNRAM01LP_RAM_1_2_SHIFT         (20U)
/*! ram_1_2 - ram_1_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01LP_RAM_1_2(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01LP_RAM_1_2_SHIFT)) & PMRC_NSSDNNRAM01LP_RAM_1_2_MASK)

#define PMRC_NSSDNNRAM01LP_RAM_1_3_MASK          (0xC00000U)
#define PMRC_NSSDNNRAM01LP_RAM_1_3_SHIFT         (22U)
/*! ram_1_3 - ram_1_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01LP_RAM_1_3(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01LP_RAM_1_3_SHIFT)) & PMRC_NSSDNNRAM01LP_RAM_1_3_MASK)

#define PMRC_NSSDNNRAM01LP_RAM_1_4_MASK          (0x3000000U)
#define PMRC_NSSDNNRAM01LP_RAM_1_4_SHIFT         (24U)
/*! ram_1_4 - ram_1_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01LP_RAM_1_4(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01LP_RAM_1_4_SHIFT)) & PMRC_NSSDNNRAM01LP_RAM_1_4_MASK)

#define PMRC_NSSDNNRAM01LP_RAM_1_5_MASK          (0xC000000U)
#define PMRC_NSSDNNRAM01LP_RAM_1_5_SHIFT         (26U)
/*! ram_1_5 - ram_1_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01LP_RAM_1_5(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01LP_RAM_1_5_SHIFT)) & PMRC_NSSDNNRAM01LP_RAM_1_5_MASK)

#define PMRC_NSSDNNRAM01LP_RAM_1_6_MASK          (0x30000000U)
#define PMRC_NSSDNNRAM01LP_RAM_1_6_SHIFT         (28U)
/*! ram_1_6 - ram_1_6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01LP_RAM_1_6(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01LP_RAM_1_6_SHIFT)) & PMRC_NSSDNNRAM01LP_RAM_1_6_MASK)

#define PMRC_NSSDNNRAM01LP_RAM_1_7_MASK          (0xC0000000U)
#define PMRC_NSSDNNRAM01LP_RAM_1_7_SHIFT         (30U)
/*! ram_1_7 - ram_1_7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM01LP_RAM_1_7(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM01LP_RAM_1_7_SHIFT)) & PMRC_NSSDNNRAM01LP_RAM_1_7_MASK)
/*! @} */

/*! @name NSSDNNRAM23LP - Non-Persistent register.<br> Control of NSS DNN RAM 20-37, used when Pindus is in deep-sleep or power-down. */
/*! @{ */

#define PMRC_NSSDNNRAM23LP_RAM_2_0_MASK          (0x3U)
#define PMRC_NSSDNNRAM23LP_RAM_2_0_SHIFT         (0U)
/*! ram_2_0 - ram_2_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23LP_RAM_2_0(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23LP_RAM_2_0_SHIFT)) & PMRC_NSSDNNRAM23LP_RAM_2_0_MASK)

#define PMRC_NSSDNNRAM23LP_RAM_2_1_MASK          (0xCU)
#define PMRC_NSSDNNRAM23LP_RAM_2_1_SHIFT         (2U)
/*! ram_2_1 - ram_2_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23LP_RAM_2_1(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23LP_RAM_2_1_SHIFT)) & PMRC_NSSDNNRAM23LP_RAM_2_1_MASK)

#define PMRC_NSSDNNRAM23LP_RAM_2_2_MASK          (0x30U)
#define PMRC_NSSDNNRAM23LP_RAM_2_2_SHIFT         (4U)
/*! ram_2_2 - ram_2_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23LP_RAM_2_2(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23LP_RAM_2_2_SHIFT)) & PMRC_NSSDNNRAM23LP_RAM_2_2_MASK)

#define PMRC_NSSDNNRAM23LP_RAM_2_3_MASK          (0xC0U)
#define PMRC_NSSDNNRAM23LP_RAM_2_3_SHIFT         (6U)
/*! ram_2_3 - ram_2_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23LP_RAM_2_3(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23LP_RAM_2_3_SHIFT)) & PMRC_NSSDNNRAM23LP_RAM_2_3_MASK)

#define PMRC_NSSDNNRAM23LP_RAM_2_4_MASK          (0x300U)
#define PMRC_NSSDNNRAM23LP_RAM_2_4_SHIFT         (8U)
/*! ram_2_4 - ram_2_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23LP_RAM_2_4(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23LP_RAM_2_4_SHIFT)) & PMRC_NSSDNNRAM23LP_RAM_2_4_MASK)

#define PMRC_NSSDNNRAM23LP_RAM_2_5_MASK          (0xC00U)
#define PMRC_NSSDNNRAM23LP_RAM_2_5_SHIFT         (10U)
/*! ram_2_5 - ram_2_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23LP_RAM_2_5(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23LP_RAM_2_5_SHIFT)) & PMRC_NSSDNNRAM23LP_RAM_2_5_MASK)

#define PMRC_NSSDNNRAM23LP_RAM_2_6_MASK          (0x3000U)
#define PMRC_NSSDNNRAM23LP_RAM_2_6_SHIFT         (12U)
/*! ram_2_6 - ram_2_6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23LP_RAM_2_6(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23LP_RAM_2_6_SHIFT)) & PMRC_NSSDNNRAM23LP_RAM_2_6_MASK)

#define PMRC_NSSDNNRAM23LP_RAM_2_7_MASK          (0xC000U)
#define PMRC_NSSDNNRAM23LP_RAM_2_7_SHIFT         (14U)
/*! ram_2_7 - ram_2_7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23LP_RAM_2_7(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23LP_RAM_2_7_SHIFT)) & PMRC_NSSDNNRAM23LP_RAM_2_7_MASK)

#define PMRC_NSSDNNRAM23LP_RAM_3_0_MASK          (0x30000U)
#define PMRC_NSSDNNRAM23LP_RAM_3_0_SHIFT         (16U)
/*! ram_3_0 - ram_3_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23LP_RAM_3_0(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23LP_RAM_3_0_SHIFT)) & PMRC_NSSDNNRAM23LP_RAM_3_0_MASK)

#define PMRC_NSSDNNRAM23LP_RAM_3_1_MASK          (0xC0000U)
#define PMRC_NSSDNNRAM23LP_RAM_3_1_SHIFT         (18U)
/*! ram_3_1 - ram_3_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23LP_RAM_3_1(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23LP_RAM_3_1_SHIFT)) & PMRC_NSSDNNRAM23LP_RAM_3_1_MASK)

#define PMRC_NSSDNNRAM23LP_RAM_3_2_MASK          (0x300000U)
#define PMRC_NSSDNNRAM23LP_RAM_3_2_SHIFT         (20U)
/*! ram_3_2 - ram_3_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23LP_RAM_3_2(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23LP_RAM_3_2_SHIFT)) & PMRC_NSSDNNRAM23LP_RAM_3_2_MASK)

#define PMRC_NSSDNNRAM23LP_RAM_3_3_MASK          (0xC00000U)
#define PMRC_NSSDNNRAM23LP_RAM_3_3_SHIFT         (22U)
/*! ram_3_3 - ram_3_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23LP_RAM_3_3(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23LP_RAM_3_3_SHIFT)) & PMRC_NSSDNNRAM23LP_RAM_3_3_MASK)

#define PMRC_NSSDNNRAM23LP_RAM_3_4_MASK          (0x3000000U)
#define PMRC_NSSDNNRAM23LP_RAM_3_4_SHIFT         (24U)
/*! ram_3_4 - ram_3_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23LP_RAM_3_4(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23LP_RAM_3_4_SHIFT)) & PMRC_NSSDNNRAM23LP_RAM_3_4_MASK)

#define PMRC_NSSDNNRAM23LP_RAM_3_5_MASK          (0xC000000U)
#define PMRC_NSSDNNRAM23LP_RAM_3_5_SHIFT         (26U)
/*! ram_3_5 - ram_3_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23LP_RAM_3_5(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23LP_RAM_3_5_SHIFT)) & PMRC_NSSDNNRAM23LP_RAM_3_5_MASK)

#define PMRC_NSSDNNRAM23LP_RAM_3_6_MASK          (0x30000000U)
#define PMRC_NSSDNNRAM23LP_RAM_3_6_SHIFT         (28U)
/*! ram_3_6 - ram_3_6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23LP_RAM_3_6(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23LP_RAM_3_6_SHIFT)) & PMRC_NSSDNNRAM23LP_RAM_3_6_MASK)

#define PMRC_NSSDNNRAM23LP_RAM_3_7_MASK          (0xC0000000U)
#define PMRC_NSSDNNRAM23LP_RAM_3_7_SHIFT         (30U)
/*! ram_3_7 - ram_3_7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM23LP_RAM_3_7(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM23LP_RAM_3_7_SHIFT)) & PMRC_NSSDNNRAM23LP_RAM_3_7_MASK)
/*! @} */

/*! @name NSSDNNRAM4LP - Non-Persistent register.<br> Control of NSS DNN RAM 40-47, used when Pindus is in deep-sleep or power-down. */
/*! @{ */

#define PMRC_NSSDNNRAM4LP_RAM_4_0_MASK           (0x3U)
#define PMRC_NSSDNNRAM4LP_RAM_4_0_SHIFT          (0U)
/*! ram_4_0 - ram_4_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM4LP_RAM_4_0(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM4LP_RAM_4_0_SHIFT)) & PMRC_NSSDNNRAM4LP_RAM_4_0_MASK)

#define PMRC_NSSDNNRAM4LP_RAM_4_1_MASK           (0xCU)
#define PMRC_NSSDNNRAM4LP_RAM_4_1_SHIFT          (2U)
/*! ram_4_1 - ram_4_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM4LP_RAM_4_1(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM4LP_RAM_4_1_SHIFT)) & PMRC_NSSDNNRAM4LP_RAM_4_1_MASK)

#define PMRC_NSSDNNRAM4LP_RAM_4_2_MASK           (0x30U)
#define PMRC_NSSDNNRAM4LP_RAM_4_2_SHIFT          (4U)
/*! ram_4_2 - ram_4_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM4LP_RAM_4_2(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM4LP_RAM_4_2_SHIFT)) & PMRC_NSSDNNRAM4LP_RAM_4_2_MASK)

#define PMRC_NSSDNNRAM4LP_RAM_4_3_MASK           (0xC0U)
#define PMRC_NSSDNNRAM4LP_RAM_4_3_SHIFT          (6U)
/*! ram_4_3 - ram_4_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM4LP_RAM_4_3(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM4LP_RAM_4_3_SHIFT)) & PMRC_NSSDNNRAM4LP_RAM_4_3_MASK)

#define PMRC_NSSDNNRAM4LP_RAM_4_4_MASK           (0x300U)
#define PMRC_NSSDNNRAM4LP_RAM_4_4_SHIFT          (8U)
/*! ram_4_4 - ram_4_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM4LP_RAM_4_4(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM4LP_RAM_4_4_SHIFT)) & PMRC_NSSDNNRAM4LP_RAM_4_4_MASK)

#define PMRC_NSSDNNRAM4LP_RAM_4_5_MASK           (0xC00U)
#define PMRC_NSSDNNRAM4LP_RAM_4_5_SHIFT          (10U)
/*! ram_4_5 - ram_4_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM4LP_RAM_4_5(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM4LP_RAM_4_5_SHIFT)) & PMRC_NSSDNNRAM4LP_RAM_4_5_MASK)

#define PMRC_NSSDNNRAM4LP_RAM_4_6_MASK           (0x3000U)
#define PMRC_NSSDNNRAM4LP_RAM_4_6_SHIFT          (12U)
/*! ram_4_6 - ram_4_6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM4LP_RAM_4_6(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM4LP_RAM_4_6_SHIFT)) & PMRC_NSSDNNRAM4LP_RAM_4_6_MASK)

#define PMRC_NSSDNNRAM4LP_RAM_4_7_MASK           (0xC000U)
#define PMRC_NSSDNNRAM4LP_RAM_4_7_SHIFT          (14U)
/*! ram_4_7 - ram_4_7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_NSSDNNRAM4LP_RAM_4_7(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_NSSDNNRAM4LP_RAM_4_7_SHIFT)) & PMRC_NSSDNNRAM4LP_RAM_4_7_MASK)
/*! @} */

/*! @name ADSSPRAM01LP - Non-Persistent register.<br> Control of ADSS PRAM 00-15, used when Pindus is in deep-sleep or power-down. */
/*! @{ */

#define PMRC_ADSSPRAM01LP_PRAM_0_0_MASK          (0x3U)
#define PMRC_ADSSPRAM01LP_PRAM_0_0_SHIFT         (0U)
/*! pram_0_0 - pram_0_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01LP_PRAM_0_0(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01LP_PRAM_0_0_SHIFT)) & PMRC_ADSSPRAM01LP_PRAM_0_0_MASK)

#define PMRC_ADSSPRAM01LP_PRAM_0_1_MASK          (0xCU)
#define PMRC_ADSSPRAM01LP_PRAM_0_1_SHIFT         (2U)
/*! pram_0_1 - pram_0_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01LP_PRAM_0_1(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01LP_PRAM_0_1_SHIFT)) & PMRC_ADSSPRAM01LP_PRAM_0_1_MASK)

#define PMRC_ADSSPRAM01LP_PRAM_0_2_MASK          (0x30U)
#define PMRC_ADSSPRAM01LP_PRAM_0_2_SHIFT         (4U)
/*! pram_0_2 - pram_0_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01LP_PRAM_0_2(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01LP_PRAM_0_2_SHIFT)) & PMRC_ADSSPRAM01LP_PRAM_0_2_MASK)

#define PMRC_ADSSPRAM01LP_PRAM_0_3_MASK          (0xC0U)
#define PMRC_ADSSPRAM01LP_PRAM_0_3_SHIFT         (6U)
/*! pram_0_3 - pram_0_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01LP_PRAM_0_3(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01LP_PRAM_0_3_SHIFT)) & PMRC_ADSSPRAM01LP_PRAM_0_3_MASK)

#define PMRC_ADSSPRAM01LP_PRAM_0_4_MASK          (0x300U)
#define PMRC_ADSSPRAM01LP_PRAM_0_4_SHIFT         (8U)
/*! pram_0_4 - pram_0_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01LP_PRAM_0_4(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01LP_PRAM_0_4_SHIFT)) & PMRC_ADSSPRAM01LP_PRAM_0_4_MASK)

#define PMRC_ADSSPRAM01LP_PRAM_0_5_MASK          (0xC00U)
#define PMRC_ADSSPRAM01LP_PRAM_0_5_SHIFT         (10U)
/*! pram_0_5 - pram_0_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01LP_PRAM_0_5(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01LP_PRAM_0_5_SHIFT)) & PMRC_ADSSPRAM01LP_PRAM_0_5_MASK)

#define PMRC_ADSSPRAM01LP_PRAM_1_0_MASK          (0x3000U)
#define PMRC_ADSSPRAM01LP_PRAM_1_0_SHIFT         (12U)
/*! pram_1_0 - pram_1_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01LP_PRAM_1_0(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01LP_PRAM_1_0_SHIFT)) & PMRC_ADSSPRAM01LP_PRAM_1_0_MASK)

#define PMRC_ADSSPRAM01LP_PRAM_1_1_MASK          (0xC000U)
#define PMRC_ADSSPRAM01LP_PRAM_1_1_SHIFT         (14U)
/*! pram_1_1 - pram_1_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01LP_PRAM_1_1(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01LP_PRAM_1_1_SHIFT)) & PMRC_ADSSPRAM01LP_PRAM_1_1_MASK)

#define PMRC_ADSSPRAM01LP_PRAM_1_2_MASK          (0x30000U)
#define PMRC_ADSSPRAM01LP_PRAM_1_2_SHIFT         (16U)
/*! pram_1_2 - pram_1_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01LP_PRAM_1_2(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01LP_PRAM_1_2_SHIFT)) & PMRC_ADSSPRAM01LP_PRAM_1_2_MASK)

#define PMRC_ADSSPRAM01LP_PRAM_1_3_MASK          (0xC0000U)
#define PMRC_ADSSPRAM01LP_PRAM_1_3_SHIFT         (18U)
/*! pram_1_3 - pram_1_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01LP_PRAM_1_3(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01LP_PRAM_1_3_SHIFT)) & PMRC_ADSSPRAM01LP_PRAM_1_3_MASK)

#define PMRC_ADSSPRAM01LP_PRAM_1_4_MASK          (0x300000U)
#define PMRC_ADSSPRAM01LP_PRAM_1_4_SHIFT         (20U)
/*! pram_1_4 - pram_1_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01LP_PRAM_1_4(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01LP_PRAM_1_4_SHIFT)) & PMRC_ADSSPRAM01LP_PRAM_1_4_MASK)

#define PMRC_ADSSPRAM01LP_PRAM_1_5_MASK          (0xC00000U)
#define PMRC_ADSSPRAM01LP_PRAM_1_5_SHIFT         (22U)
/*! pram_1_5 - pram_1_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM01LP_PRAM_1_5(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM01LP_PRAM_1_5_SHIFT)) & PMRC_ADSSPRAM01LP_PRAM_1_5_MASK)
/*! @} */

/*! @name ADSSPRAM2LP - Non-Persistent register.<br> Control of ADSS PRAM 20-27, used when Pindus is in deep-sleep or power-down. */
/*! @{ */

#define PMRC_ADSSPRAM2LP_PRAM_2_0_MASK           (0x3U)
#define PMRC_ADSSPRAM2LP_PRAM_2_0_SHIFT          (0U)
/*! pram_2_0 - pram_2_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2LP_PRAM_2_0(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2LP_PRAM_2_0_SHIFT)) & PMRC_ADSSPRAM2LP_PRAM_2_0_MASK)

#define PMRC_ADSSPRAM2LP_PRAM_2_1_MASK           (0xCU)
#define PMRC_ADSSPRAM2LP_PRAM_2_1_SHIFT          (2U)
/*! pram_2_1 - pram_2_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2LP_PRAM_2_1(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2LP_PRAM_2_1_SHIFT)) & PMRC_ADSSPRAM2LP_PRAM_2_1_MASK)

#define PMRC_ADSSPRAM2LP_PRAM_2_2_MASK           (0x30U)
#define PMRC_ADSSPRAM2LP_PRAM_2_2_SHIFT          (4U)
/*! pram_2_2 - pram_2_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2LP_PRAM_2_2(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2LP_PRAM_2_2_SHIFT)) & PMRC_ADSSPRAM2LP_PRAM_2_2_MASK)

#define PMRC_ADSSPRAM2LP_PRAM_2_3_MASK           (0xC0U)
#define PMRC_ADSSPRAM2LP_PRAM_2_3_SHIFT          (6U)
/*! pram_2_3 - pram_2_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2LP_PRAM_2_3(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2LP_PRAM_2_3_SHIFT)) & PMRC_ADSSPRAM2LP_PRAM_2_3_MASK)

#define PMRC_ADSSPRAM2LP_PRAM_2_4_MASK           (0x300U)
#define PMRC_ADSSPRAM2LP_PRAM_2_4_SHIFT          (8U)
/*! pram_2_4 - pram_2_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2LP_PRAM_2_4(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2LP_PRAM_2_4_SHIFT)) & PMRC_ADSSPRAM2LP_PRAM_2_4_MASK)

#define PMRC_ADSSPRAM2LP_PRAM_2_5_MASK           (0xC00U)
#define PMRC_ADSSPRAM2LP_PRAM_2_5_SHIFT          (10U)
/*! pram_2_5 - pram_2_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2LP_PRAM_2_5(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2LP_PRAM_2_5_SHIFT)) & PMRC_ADSSPRAM2LP_PRAM_2_5_MASK)

#define PMRC_ADSSPRAM2LP_PRAM_2_6_MASK           (0x3000U)
#define PMRC_ADSSPRAM2LP_PRAM_2_6_SHIFT          (12U)
/*! pram_2_6 - pram_2_6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2LP_PRAM_2_6(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2LP_PRAM_2_6_SHIFT)) & PMRC_ADSSPRAM2LP_PRAM_2_6_MASK)

#define PMRC_ADSSPRAM2LP_PRAM_2_7_MASK           (0xC000U)
#define PMRC_ADSSPRAM2LP_PRAM_2_7_SHIFT          (14U)
/*! pram_2_7 - pram_2_7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2LP_PRAM_2_7(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2LP_PRAM_2_7_SHIFT)) & PMRC_ADSSPRAM2LP_PRAM_2_7_MASK)

#define PMRC_ADSSPRAM2LP_PRAM_2_8_MASK           (0x30000U)
#define PMRC_ADSSPRAM2LP_PRAM_2_8_SHIFT          (16U)
/*! pram_2_8 - pram_2_8
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2LP_PRAM_2_8(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2LP_PRAM_2_8_SHIFT)) & PMRC_ADSSPRAM2LP_PRAM_2_8_MASK)

#define PMRC_ADSSPRAM2LP_PRAM_2_9_MASK           (0xC0000U)
#define PMRC_ADSSPRAM2LP_PRAM_2_9_SHIFT          (18U)
/*! pram_2_9 - pram_2_9
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSPRAM2LP_PRAM_2_9(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSPRAM2LP_PRAM_2_9_SHIFT)) & PMRC_ADSSPRAM2LP_PRAM_2_9_MASK)
/*! @} */

/*! @name ADSSXRAMLP - Non-Persistent register.<br> Control of ADSS XRAM 0-15, used when Pindus is in deep-sleep or power-down. */
/*! @{ */

#define PMRC_ADSSXRAMLP_XRAM_0_MASK              (0x3U)
#define PMRC_ADSSXRAMLP_XRAM_0_SHIFT             (0U)
/*! xram_0 - xram_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMLP_XRAM_0(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMLP_XRAM_0_SHIFT)) & PMRC_ADSSXRAMLP_XRAM_0_MASK)

#define PMRC_ADSSXRAMLP_XRAM_1_MASK              (0xCU)
#define PMRC_ADSSXRAMLP_XRAM_1_SHIFT             (2U)
/*! xram_1 - xram_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMLP_XRAM_1(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMLP_XRAM_1_SHIFT)) & PMRC_ADSSXRAMLP_XRAM_1_MASK)

#define PMRC_ADSSXRAMLP_XRAM_2_MASK              (0x30U)
#define PMRC_ADSSXRAMLP_XRAM_2_SHIFT             (4U)
/*! xram_2 - xram_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMLP_XRAM_2(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMLP_XRAM_2_SHIFT)) & PMRC_ADSSXRAMLP_XRAM_2_MASK)

#define PMRC_ADSSXRAMLP_XRAM_3_MASK              (0xC0U)
#define PMRC_ADSSXRAMLP_XRAM_3_SHIFT             (6U)
/*! xram_3 - xram_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMLP_XRAM_3(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMLP_XRAM_3_SHIFT)) & PMRC_ADSSXRAMLP_XRAM_3_MASK)

#define PMRC_ADSSXRAMLP_XRAM_4_MASK              (0x300U)
#define PMRC_ADSSXRAMLP_XRAM_4_SHIFT             (8U)
/*! xram_4 - xram_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMLP_XRAM_4(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMLP_XRAM_4_SHIFT)) & PMRC_ADSSXRAMLP_XRAM_4_MASK)

#define PMRC_ADSSXRAMLP_XRAM_5_MASK              (0xC00U)
#define PMRC_ADSSXRAMLP_XRAM_5_SHIFT             (10U)
/*! xram_5 - xram_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMLP_XRAM_5(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMLP_XRAM_5_SHIFT)) & PMRC_ADSSXRAMLP_XRAM_5_MASK)

#define PMRC_ADSSXRAMLP_XRAM_6_MASK              (0x3000U)
#define PMRC_ADSSXRAMLP_XRAM_6_SHIFT             (12U)
/*! xram_6 - xram_6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMLP_XRAM_6(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMLP_XRAM_6_SHIFT)) & PMRC_ADSSXRAMLP_XRAM_6_MASK)

#define PMRC_ADSSXRAMLP_XRAM_7_MASK              (0xC000U)
#define PMRC_ADSSXRAMLP_XRAM_7_SHIFT             (14U)
/*! xram_7 - xram_7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMLP_XRAM_7(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMLP_XRAM_7_SHIFT)) & PMRC_ADSSXRAMLP_XRAM_7_MASK)

#define PMRC_ADSSXRAMLP_XRAM_8_MASK              (0x30000U)
#define PMRC_ADSSXRAMLP_XRAM_8_SHIFT             (16U)
/*! xram_8 - xram_8
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMLP_XRAM_8(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMLP_XRAM_8_SHIFT)) & PMRC_ADSSXRAMLP_XRAM_8_MASK)

#define PMRC_ADSSXRAMLP_XRAM_9_MASK              (0xC0000U)
#define PMRC_ADSSXRAMLP_XRAM_9_SHIFT             (18U)
/*! xram_9 - xram_9
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMLP_XRAM_9(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMLP_XRAM_9_SHIFT)) & PMRC_ADSSXRAMLP_XRAM_9_MASK)

#define PMRC_ADSSXRAMLP_XRAM_10_MASK             (0x300000U)
#define PMRC_ADSSXRAMLP_XRAM_10_SHIFT            (20U)
/*! xram_10 - xram_10
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMLP_XRAM_10(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMLP_XRAM_10_SHIFT)) & PMRC_ADSSXRAMLP_XRAM_10_MASK)

#define PMRC_ADSSXRAMLP_XRAM_11_MASK             (0xC00000U)
#define PMRC_ADSSXRAMLP_XRAM_11_SHIFT            (22U)
/*! xram_11 - xram_11
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMLP_XRAM_11(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMLP_XRAM_11_SHIFT)) & PMRC_ADSSXRAMLP_XRAM_11_MASK)

#define PMRC_ADSSXRAMLP_XRAM_12_MASK             (0x3000000U)
#define PMRC_ADSSXRAMLP_XRAM_12_SHIFT            (24U)
/*! xram_12 - xram_12
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMLP_XRAM_12(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMLP_XRAM_12_SHIFT)) & PMRC_ADSSXRAMLP_XRAM_12_MASK)

#define PMRC_ADSSXRAMLP_XRAM_13_MASK             (0xC000000U)
#define PMRC_ADSSXRAMLP_XRAM_13_SHIFT            (26U)
/*! xram_13 - xram_13
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMLP_XRAM_13(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMLP_XRAM_13_SHIFT)) & PMRC_ADSSXRAMLP_XRAM_13_MASK)

#define PMRC_ADSSXRAMLP_XRAM_14_MASK             (0x30000000U)
#define PMRC_ADSSXRAMLP_XRAM_14_SHIFT            (28U)
/*! xram_14 - xram_14
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMLP_XRAM_14(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMLP_XRAM_14_SHIFT)) & PMRC_ADSSXRAMLP_XRAM_14_MASK)

#define PMRC_ADSSXRAMLP_XRAM_15_MASK             (0xC0000000U)
#define PMRC_ADSSXRAMLP_XRAM_15_SHIFT            (30U)
/*! xram_15 - xram_15
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSXRAMLP_XRAM_15(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSXRAMLP_XRAM_15_SHIFT)) & PMRC_ADSSXRAMLP_XRAM_15_MASK)
/*! @} */

/*! @name ADSSYRAMMISCLP - Non-Persistent register.<br> Control of ADSS XRAM 0-15, used when Pindus is in deep-sleep or power-down. */
/*! @{ */

#define PMRC_ADSSYRAMMISCLP_YRAM_0_MASK          (0x3U)
#define PMRC_ADSSYRAMMISCLP_YRAM_0_SHIFT         (0U)
/*! yram_0 - yram_0
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSYRAMMISCLP_YRAM_0(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSYRAMMISCLP_YRAM_0_SHIFT)) & PMRC_ADSSYRAMMISCLP_YRAM_0_MASK)

#define PMRC_ADSSYRAMMISCLP_YRAM_1_MASK          (0xCU)
#define PMRC_ADSSYRAMMISCLP_YRAM_1_SHIFT         (2U)
/*! yram_1 - yram_1
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSYRAMMISCLP_YRAM_1(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSYRAMMISCLP_YRAM_1_SHIFT)) & PMRC_ADSSYRAMMISCLP_YRAM_1_MASK)

#define PMRC_ADSSYRAMMISCLP_YRAM_2_MASK          (0x30U)
#define PMRC_ADSSYRAMMISCLP_YRAM_2_SHIFT         (4U)
/*! yram_2 - yram_2
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSYRAMMISCLP_YRAM_2(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSYRAMMISCLP_YRAM_2_SHIFT)) & PMRC_ADSSYRAMMISCLP_YRAM_2_MASK)

#define PMRC_ADSSYRAMMISCLP_YRAM_3_MASK          (0xC0U)
#define PMRC_ADSSYRAMMISCLP_YRAM_3_SHIFT         (6U)
/*! yram_3 - yram_3
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSYRAMMISCLP_YRAM_3(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSYRAMMISCLP_YRAM_3_SHIFT)) & PMRC_ADSSYRAMMISCLP_YRAM_3_MASK)

#define PMRC_ADSSYRAMMISCLP_YRAM_4_MASK          (0x300U)
#define PMRC_ADSSYRAMMISCLP_YRAM_4_SHIFT         (8U)
/*! yram_4 - yram_4
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSYRAMMISCLP_YRAM_4(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSYRAMMISCLP_YRAM_4_SHIFT)) & PMRC_ADSSYRAMMISCLP_YRAM_4_MASK)

#define PMRC_ADSSYRAMMISCLP_YRAM_5_MASK          (0xC00U)
#define PMRC_ADSSYRAMMISCLP_YRAM_5_SHIFT         (10U)
/*! yram_5 - yram_5
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSYRAMMISCLP_YRAM_5(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSYRAMMISCLP_YRAM_5_SHIFT)) & PMRC_ADSSYRAMMISCLP_YRAM_5_MASK)

#define PMRC_ADSSYRAMMISCLP_YRAM_6_MASK          (0x3000U)
#define PMRC_ADSSYRAMMISCLP_YRAM_6_SHIFT         (12U)
/*! yram_6 - yram_6
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSYRAMMISCLP_YRAM_6(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSYRAMMISCLP_YRAM_6_SHIFT)) & PMRC_ADSSYRAMMISCLP_YRAM_6_MASK)

#define PMRC_ADSSYRAMMISCLP_YRAM_7_MASK          (0xC000U)
#define PMRC_ADSSYRAMMISCLP_YRAM_7_SHIFT         (14U)
/*! yram_7 - yram_7
 *  0b00..Active
 *  0b01..Deepsleep
 *  0b10..Shutdown
 */
#define PMRC_ADSSYRAMMISCLP_YRAM_7(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ADSSYRAMMISCLP_YRAM_7_SHIFT)) & PMRC_ADSSYRAMMISCLP_YRAM_7_MASK)
/*! @} */

/*! @name MEMORYLPCONTROL - Non-Persistent register.<br> Control of memory in active (static or dynamic). */
/*! @{ */

#define PMRC_MEMORYLPCONTROL_ACT_SD_BYPASS_MASK  (0x1U)
#define PMRC_MEMORYLPCONTROL_ACT_SD_BYPASS_SHIFT (0U)
/*! ACT_SD_Bypass - Controls transition between active and shutdown memory power states
 *  0b0..Mem ctrl fsm transitions from active to shutdown through intermediate states
 *  0b1..Mem ctrl fsm transitions from active to shutdown directly
 */
#define PMRC_MEMORYLPCONTROL_ACT_SD_BYPASS(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_MEMORYLPCONTROL_ACT_SD_BYPASS_SHIFT)) & PMRC_MEMORYLPCONTROL_ACT_SD_BYPASS_MASK)

#define PMRC_MEMORYLPCONTROL_WAIT_TIME_OVERRIDE_MASK (0x3EU)
#define PMRC_MEMORYLPCONTROL_WAIT_TIME_OVERRIDE_SHIFT (1U)
/*! wait_time_override - Register to override wait times of VDD MEM mem ctrl FSM */
#define PMRC_MEMORYLPCONTROL_WAIT_TIME_OVERRIDE(x) (((uint32_t)(((uint32_t)(x)) << PMRC_MEMORYLPCONTROL_WAIT_TIME_OVERRIDE_SHIFT)) & PMRC_MEMORYLPCONTROL_WAIT_TIME_OVERRIDE_MASK)

#define PMRC_MEMORYLPCONTROL_MEMORY_SOURCE_BIAS_MASK (0x40U)
#define PMRC_MEMORYLPCONTROL_MEMORY_SOURCE_BIAS_SHIFT (6U)
/*! memory_source_bias - Register to set the bias setting for memories in deepsleep<br>Writing this
 *    register must be done only if no memory is in DeepSleep configuration and if vdig_busy bit in
 *    register Tranfer is read low
 *  0b0..memories sm are all set to 0xx - bypass switch
 *  0b1..memories sm are all set to 1xx - diode switch
 */
#define PMRC_MEMORYLPCONTROL_MEMORY_SOURCE_BIAS(x) (((uint32_t)(((uint32_t)(x)) << PMRC_MEMORYLPCONTROL_MEMORY_SOURCE_BIAS_SHIFT)) & PMRC_MEMORYLPCONTROL_MEMORY_SOURCE_BIAS_MASK)
/*! @} */

/*! @name TAMPERCTRL - Persistent register.<br> Control of tamper detection module. */
/*! @{ */

#define PMRC_TAMPERCTRL_BOOTPOL_MASK             (0x1U)
#define PMRC_TAMPERCTRL_BOOTPOL_SHIFT            (0U)
/*! BootPol - cfg of BOOT tamper detection polarity
 *  0b0..BOOT tamper detection polarity is neg. edge
 *  0b1..BOOT tamper detection polarity is pos. edge
 */
#define PMRC_TAMPERCTRL_BOOTPOL(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_TAMPERCTRL_BOOTPOL_SHIFT)) & PMRC_TAMPERCTRL_BOOTPOL_MASK)

#define PMRC_TAMPERCTRL_BOOTEN_MASK              (0x2U)
#define PMRC_TAMPERCTRL_BOOTEN_SHIFT             (1U)
/*! BootEn - cfg of BOOT tamper detection enable
 *  0b0..BOOT tamper detection is disabled
 *  0b1..BOOT tamper detection is enabled
 */
#define PMRC_TAMPERCTRL_BOOTEN(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_TAMPERCTRL_BOOTEN_SHIFT)) & PMRC_TAMPERCTRL_BOOTEN_MASK)

#define PMRC_TAMPERCTRL_TESTPOL_MASK             (0x10U)
#define PMRC_TAMPERCTRL_TESTPOL_SHIFT            (4U)
/*! TestPol - cfg of TEST tamper detection polarity
 *  0b0..TEST tamper detection polarity is neg. edge
 *  0b1..TEST tamper detection polarity is pos. edge
 */
#define PMRC_TAMPERCTRL_TESTPOL(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_TAMPERCTRL_TESTPOL_SHIFT)) & PMRC_TAMPERCTRL_TESTPOL_MASK)

#define PMRC_TAMPERCTRL_TESTEN_MASK              (0x20U)
#define PMRC_TAMPERCTRL_TESTEN_SHIFT             (5U)
/*! TestEn - cfg of TEST tamper detection enable
 *  0b0..TEST tamper detection is disabled
 *  0b1..TEST tamper detection is enabled
 */
#define PMRC_TAMPERCTRL_TESTEN(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_TAMPERCTRL_TESTEN_SHIFT)) & PMRC_TAMPERCTRL_TESTEN_MASK)

#define PMRC_TAMPERCTRL_GLOBALEN_MASK            (0x100U)
#define PMRC_TAMPERCTRL_GLOBALEN_SHIFT           (8U)
/*! GlobalEn - cfg of Global tamper detection enable
 *  0b0..Tamper detection is disabled
 *  0b1..Tamper detection is enabled
 */
#define PMRC_TAMPERCTRL_GLOBALEN(x)              (((uint32_t)(((uint32_t)(x)) << PMRC_TAMPERCTRL_GLOBALEN_SHIFT)) & PMRC_TAMPERCTRL_GLOBALEN_MASK)
/*! @} */

/*! @name SECUREKEY0 - Persistent register.<br> 4-bytes security key */
/*! @{ */

#define PMRC_SECUREKEY0_VAL_MASK                 (0xFFFFFFFFU)
#define PMRC_SECUREKEY0_VAL_SHIFT                (0U)
/*! Val - the value of security key */
#define PMRC_SECUREKEY0_VAL(x)                   (((uint32_t)(((uint32_t)(x)) << PMRC_SECUREKEY0_VAL_SHIFT)) & PMRC_SECUREKEY0_VAL_MASK)
/*! @} */

/*! @name SECUREKEY1 - Persistent register.<br> 4-bytes security key */
/*! @{ */

#define PMRC_SECUREKEY1_VAL_MASK                 (0xFFFFFFFFU)
#define PMRC_SECUREKEY1_VAL_SHIFT                (0U)
/*! Val - the value of security key */
#define PMRC_SECUREKEY1_VAL(x)                   (((uint32_t)(((uint32_t)(x)) << PMRC_SECUREKEY1_VAL_SHIFT)) & PMRC_SECUREKEY1_VAL_MASK)
/*! @} */

/*! @name SECUREKEY2 - Persistent register.<br> 4-bytes security key */
/*! @{ */

#define PMRC_SECUREKEY2_VAL_MASK                 (0xFFFFFFFFU)
#define PMRC_SECUREKEY2_VAL_SHIFT                (0U)
/*! Val - the value of security key */
#define PMRC_SECUREKEY2_VAL(x)                   (((uint32_t)(((uint32_t)(x)) << PMRC_SECUREKEY2_VAL_SHIFT)) & PMRC_SECUREKEY2_VAL_MASK)
/*! @} */

/*! @name SECUREKEY3 - Persistent register.<br> 4-bytes security key */
/*! @{ */

#define PMRC_SECUREKEY3_VAL_MASK                 (0xFFFFFFFFU)
#define PMRC_SECUREKEY3_VAL_SHIFT                (0U)
/*! Val - the value of security key */
#define PMRC_SECUREKEY3_VAL(x)                   (((uint32_t)(((uint32_t)(x)) << PMRC_SECUREKEY3_VAL_SHIFT)) & PMRC_SECUREKEY3_VAL_MASK)
/*! @} */

/*! @name SECUREKEY4 - Persistent register.<br> 4-bytes security key */
/*! @{ */

#define PMRC_SECUREKEY4_VAL_MASK                 (0xFFFFFFFFU)
#define PMRC_SECUREKEY4_VAL_SHIFT                (0U)
/*! Val - the value of security key */
#define PMRC_SECUREKEY4_VAL(x)                   (((uint32_t)(((uint32_t)(x)) << PMRC_SECUREKEY4_VAL_SHIFT)) & PMRC_SECUREKEY4_VAL_MASK)
/*! @} */

/*! @name SECUREKEY5 - Persistent register.<br> 4-bytes security key */
/*! @{ */

#define PMRC_SECUREKEY5_VAL_MASK                 (0xFFFFFFFFU)
#define PMRC_SECUREKEY5_VAL_SHIFT                (0U)
/*! Val - the value of security key */
#define PMRC_SECUREKEY5_VAL(x)                   (((uint32_t)(((uint32_t)(x)) << PMRC_SECUREKEY5_VAL_SHIFT)) & PMRC_SECUREKEY5_VAL_MASK)
/*! @} */

/*! @name SECUREKEY6 - Persistent register.<br> 4-bytes security key */
/*! @{ */

#define PMRC_SECUREKEY6_VAL_MASK                 (0xFFFFFFFFU)
#define PMRC_SECUREKEY6_VAL_SHIFT                (0U)
/*! Val - the value of security key */
#define PMRC_SECUREKEY6_VAL(x)                   (((uint32_t)(((uint32_t)(x)) << PMRC_SECUREKEY6_VAL_SHIFT)) & PMRC_SECUREKEY6_VAL_MASK)
/*! @} */

/*! @name SECUREKEY7 - Persistent register.<br> 4-bytes security key */
/*! @{ */

#define PMRC_SECUREKEY7_VAL_MASK                 (0xFFFFFFFFU)
#define PMRC_SECUREKEY7_VAL_SHIFT                (0U)
/*! Val - the value of security key */
#define PMRC_SECUREKEY7_VAL(x)                   (((uint32_t)(((uint32_t)(x)) << PMRC_SECUREKEY7_VAL_SHIFT)) & PMRC_SECUREKEY7_VAL_MASK)
/*! @} */

/*! @name TRANSFER - Persistent register.<br>Busy indication for transfer between PMRC APB and LPO domains */
/*! @{ */

#define PMRC_TRANSFER_BUSY_MASK                  (0xFFFFFFFFU)
#define PMRC_TRANSFER_BUSY_SHIFT                 (0U)
/*! Busy - If non zero a transfer is active between the PMRC APB domain and the PMRC LPO domain,<br>
 *    it is not safe to write to the register which is being transfered.
 *  0b00000000000000000000000000000010..
 *  0b00000000000000000000000000000100..
 *  0b00000000000000000000000000001000..
 *  0b00000000000000000000000000010000..
 *  0b00000000000000000000000000100000..
 *  0b00000000000000000000000001000000..
 *  0b00000000000000000000000010000000..
 *  0b00000000000000000000000100000000..
 *  0b00000000000000000000001000000000..
 *  0b00000000000000000000010000000000..
 *  0b00000000000000000000100000000000..
 *  0b00000000000000000001000000000000..
 *  0b00000000000000000010000000000000..
 *  0b00000000000000000100000000000000..
 *  0b00000000000000001000000000000000..
 *  0b00000001000000000000000000000000..
 *  0b10000000000000000000000000000000..Access to
 *                                      registers<br>Dcdc{Dig/Mem}Ratio,<br>Dcdc{Dig/Mem}Control,<br>Dcdc{Dig/Mem}RatioControl{2/3/4},<br>or field Start of register LfTimerControl
 *                                      or fields Shutdown/Lp/LpEnable/Lpmode of register ModeControl<br>or field
 *                                      memory_source_bias of register MemoryLpControl<br>or any memory *Active
 *                                      registers.
 */
#define PMRC_TRANSFER_BUSY(x)                    (((uint32_t)(((uint32_t)(x)) << PMRC_TRANSFER_BUSY_SHIFT)) & PMRC_TRANSFER_BUSY_MASK)
/*! @} */

/*! @name DCDCCONTROL - DCDC low-power control register, used to store VDIG and MEM deep-sleep VDD levels.<br>The register also holds the current VDDValue. */
/*! @{ */

#define PMRC_DCDCCONTROL_VSETDIGDEEPSLEEP_MASK   (0x3FU)
#define PMRC_DCDCCONTROL_VSETDIGDEEPSLEEP_SHIFT  (0U)
/*! VsetDigDeepSleep - The value of VDD_DIG in deppsleep state:<br>0-15 450mV+10mV*Vset,<br>16-37
 *    300mV+20mV*Vset,<br>38 1.05V,<br>others not to be used
 */
#define PMRC_DCDCCONTROL_VSETDIGDEEPSLEEP(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCCONTROL_VSETDIGDEEPSLEEP_SHIFT)) & PMRC_DCDCCONTROL_VSETDIGDEEPSLEEP_MASK)

#define PMRC_DCDCCONTROL_VSETMEMDEEPSLEEP_MASK   (0xFC0U)
#define PMRC_DCDCCONTROL_VSETMEMDEEPSLEEP_SHIFT  (6U)
/*! VsetMemDeepSleep - The value of VDD_MEM in deepsleep state:<br>0-50 500mV+10mV*Vset */
#define PMRC_DCDCCONTROL_VSETMEMDEEPSLEEP(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCCONTROL_VSETMEMDEEPSLEEP_SHIFT)) & PMRC_DCDCCONTROL_VSETMEMDEEPSLEEP_MASK)

#define PMRC_DCDCCONTROL_VDDVALUE_MASK           (0x1FF000U)
#define PMRC_DCDCCONTROL_VDDVALUE_SHIFT          (12U)
/*! VddValue - Programmed VDD value, used for DCDCs automatic ratio loop:<br>950mV + VddValue * 1000/1024 */
#define PMRC_DCDCCONTROL_VDDVALUE(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCCONTROL_VDDVALUE_SHIFT)) & PMRC_DCDCCONTROL_VDDVALUE_MASK)

#define PMRC_DCDCCONTROL_VDDSRC_MASK             (0x200000U)
#define PMRC_DCDCCONTROL_VDDSRC_SHIFT            (21U)
/*! VddSrc - Select VDD value for Ratio loop VDD input.
 *  0b0..Use programmed VddValue in DcdcControl register
 *  0b1..Use measured VDD value from AdcVddData register
 */
#define PMRC_DCDCCONTROL_VDDSRC(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCCONTROL_VDDSRC_SHIFT)) & PMRC_DCDCCONTROL_VDDSRC_MASK)

#define PMRC_DCDCCONTROL_AUTORATIOSKIP_MASK      (0x400000U)
#define PMRC_DCDCCONTROL_AUTORATIOSKIP_SHIFT     (22U)
/*! AutoRatioSkip - Enable/Disable automatic ratio 3/4 skipping if VDD excceeds the threshold in AutoRatioSkipThreshold.
 *  0b0..Do not automatic skip ratio 3/4 when the measured VDD exceeds the threshold value AutoRatioSkipThreshold
 *  0b1..Skip ratio 3/4 when the measured VDD exceeds the threshold value AutoRatioSkipThreshold
 */
#define PMRC_DCDCCONTROL_AUTORATIOSKIP(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCCONTROL_AUTORATIOSKIP_SHIFT)) & PMRC_DCDCCONTROL_AUTORATIOSKIP_MASK)

#define PMRC_DCDCCONTROL_AUTORATIOSKIPTHRESHOLD_MASK (0xFF800000U)
#define PMRC_DCDCCONTROL_AUTORATIOSKIPTHRESHOLD_SHIFT (23U)
/*! AutoRatioSkipThreshold - Threshold for skipping ratio 3/4 when the measured VDD is equal or
 *    exceeds this value <br> VDD theshold value is 950mV + AutoRatioSkipThreshold * 1000/1024
 */
#define PMRC_DCDCCONTROL_AUTORATIOSKIPTHRESHOLD(x) (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCCONTROL_AUTORATIOSKIPTHRESHOLD_SHIFT)) & PMRC_DCDCCONTROL_AUTORATIOSKIPTHRESHOLD_MASK)
/*! @} */

/*! @name WAKEUPSRC1 - Configuration of deep-sleep wake-up sources (part-1) */
/*! @{ */

#define PMRC_WAKEUPSRC1_WWDT_MASK                (0x1U)
#define PMRC_WAKEUPSRC1_WWDT_SHIFT               (0U)
/*! WWDT - WWDT wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_WWDT(x)                  (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_WWDT_SHIFT)) & PMRC_WAKEUPSRC1_WWDT_MASK)

#define PMRC_WAKEUPSRC1_GINT0_MASK               (0x2U)
#define PMRC_WAKEUPSRC1_GINT0_SHIFT              (1U)
/*! GINT0 - GINT0 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_GINT0(x)                 (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_GINT0_SHIFT)) & PMRC_WAKEUPSRC1_GINT0_MASK)

#define PMRC_WAKEUPSRC1_GPIO_INTA_MASK           (0x4U)
#define PMRC_WAKEUPSRC1_GPIO_INTA_SHIFT          (2U)
/*! GPIO_INTA - GPIO_INTA wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_GPIO_INTA(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_GPIO_INTA_SHIFT)) & PMRC_WAKEUPSRC1_GPIO_INTA_MASK)

#define PMRC_WAKEUPSRC1_GPIO_INTB_MASK           (0x8U)
#define PMRC_WAKEUPSRC1_GPIO_INTB_SHIFT          (3U)
/*! GPIO_INTB - GPIO_INTB wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_GPIO_INTB(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_GPIO_INTB_SHIFT)) & PMRC_WAKEUPSRC1_GPIO_INTB_MASK)

#define PMRC_WAKEUPSRC1_GPIO_PINT0_MASK          (0x10U)
#define PMRC_WAKEUPSRC1_GPIO_PINT0_SHIFT         (4U)
/*! GPIO_PINT0 - GPIO_PINT0 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_GPIO_PINT0(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_GPIO_PINT0_SHIFT)) & PMRC_WAKEUPSRC1_GPIO_PINT0_MASK)

#define PMRC_WAKEUPSRC1_GPIO_PINT1_MASK          (0x20U)
#define PMRC_WAKEUPSRC1_GPIO_PINT1_SHIFT         (5U)
/*! GPIO_PINT1 - GPIO_PINT1 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_GPIO_PINT1(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_GPIO_PINT1_SHIFT)) & PMRC_WAKEUPSRC1_GPIO_PINT1_MASK)

#define PMRC_WAKEUPSRC1_GPIO_PINT2_MASK          (0x40U)
#define PMRC_WAKEUPSRC1_GPIO_PINT2_SHIFT         (6U)
/*! GPIO_PINT2 - GPIO_PINT2 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_GPIO_PINT2(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_GPIO_PINT2_SHIFT)) & PMRC_WAKEUPSRC1_GPIO_PINT2_MASK)

#define PMRC_WAKEUPSRC1_GPIO_PINT3_MASK          (0x80U)
#define PMRC_WAKEUPSRC1_GPIO_PINT3_SHIFT         (7U)
/*! GPIO_PINT3 - GPIO_PINT3 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_GPIO_PINT3(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_GPIO_PINT3_SHIFT)) & PMRC_WAKEUPSRC1_GPIO_PINT3_MASK)

#define PMRC_WAKEUPSRC1_GPIO_PINT4_MASK          (0x100U)
#define PMRC_WAKEUPSRC1_GPIO_PINT4_SHIFT         (8U)
/*! GPIO_PINT4 - GPIO_PINT4 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_GPIO_PINT4(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_GPIO_PINT4_SHIFT)) & PMRC_WAKEUPSRC1_GPIO_PINT4_MASK)

#define PMRC_WAKEUPSRC1_GPIO_PINT5_MASK          (0x200U)
#define PMRC_WAKEUPSRC1_GPIO_PINT5_SHIFT         (9U)
/*! GPIO_PINT5 - GPIO_PINT5 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_GPIO_PINT5(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_GPIO_PINT5_SHIFT)) & PMRC_WAKEUPSRC1_GPIO_PINT5_MASK)

#define PMRC_WAKEUPSRC1_GPIO_PINT6_MASK          (0x400U)
#define PMRC_WAKEUPSRC1_GPIO_PINT6_SHIFT         (10U)
/*! GPIO_PINT6 - GPIO_PINT6 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_GPIO_PINT6(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_GPIO_PINT6_SHIFT)) & PMRC_WAKEUPSRC1_GPIO_PINT6_MASK)

#define PMRC_WAKEUPSRC1_GPIO_PINT7_MASK          (0x800U)
#define PMRC_WAKEUPSRC1_GPIO_PINT7_SHIFT         (11U)
/*! GPIO_PINT7 - GPIO_PINT7 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_GPIO_PINT7(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_GPIO_PINT7_SHIFT)) & PMRC_WAKEUPSRC1_GPIO_PINT7_MASK)

#define PMRC_WAKEUPSRC1_SEC_GPIO_INTA_MASK       (0x1000U)
#define PMRC_WAKEUPSRC1_SEC_GPIO_INTA_SHIFT      (12U)
/*! SEC_GPIO_INTA - SEC_GPIO_INTA wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_SEC_GPIO_INTA(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_SEC_GPIO_INTA_SHIFT)) & PMRC_WAKEUPSRC1_SEC_GPIO_INTA_MASK)

#define PMRC_WAKEUPSRC1_SEC_GPIO_INTB_MASK       (0x2000U)
#define PMRC_WAKEUPSRC1_SEC_GPIO_INTB_SHIFT      (13U)
/*! SEC_GPIO_INTB - SEC_GPIO_INTB wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_SEC_GPIO_INTB(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_SEC_GPIO_INTB_SHIFT)) & PMRC_WAKEUPSRC1_SEC_GPIO_INTB_MASK)

#define PMRC_WAKEUPSRC1_SEC_GPIO_PINT0_MASK      (0x4000U)
#define PMRC_WAKEUPSRC1_SEC_GPIO_PINT0_SHIFT     (14U)
/*! SEC_GPIO_PINT0 - SEC_GPIO_PINT0 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_SEC_GPIO_PINT0(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_SEC_GPIO_PINT0_SHIFT)) & PMRC_WAKEUPSRC1_SEC_GPIO_PINT0_MASK)

#define PMRC_WAKEUPSRC1_SEC_GPIO_PINT1_MASK      (0x8000U)
#define PMRC_WAKEUPSRC1_SEC_GPIO_PINT1_SHIFT     (15U)
/*! SEC_GPIO_PINT1 - SEC_GPIO_PINT1 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_SEC_GPIO_PINT1(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_SEC_GPIO_PINT1_SHIFT)) & PMRC_WAKEUPSRC1_SEC_GPIO_PINT1_MASK)

#define PMRC_WAKEUPSRC1_CTIMER0_MASK             (0x10000U)
#define PMRC_WAKEUPSRC1_CTIMER0_SHIFT            (16U)
/*! CTIMER0 - CTIMER0 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_CTIMER0(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_CTIMER0_SHIFT)) & PMRC_WAKEUPSRC1_CTIMER0_MASK)

#define PMRC_WAKEUPSRC1_CTIMER1_MASK             (0x20000U)
#define PMRC_WAKEUPSRC1_CTIMER1_SHIFT            (17U)
/*! CTIMER1 - CTIMER1 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_CTIMER1(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_CTIMER1_SHIFT)) & PMRC_WAKEUPSRC1_CTIMER1_MASK)

#define PMRC_WAKEUPSRC1_CTIMER2_MASK             (0x40000U)
#define PMRC_WAKEUPSRC1_CTIMER2_SHIFT            (18U)
/*! CTIMER2 - CTIMER2 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_CTIMER2(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_CTIMER2_SHIFT)) & PMRC_WAKEUPSRC1_CTIMER2_MASK)

#define PMRC_WAKEUPSRC1_CTIMER3_MASK             (0x80000U)
#define PMRC_WAKEUPSRC1_CTIMER3_SHIFT            (19U)
/*! CTIMER3 - CTIMER3 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_CTIMER3(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_CTIMER3_SHIFT)) & PMRC_WAKEUPSRC1_CTIMER3_MASK)

#define PMRC_WAKEUPSRC1_CTIMER4_MASK             (0x100000U)
#define PMRC_WAKEUPSRC1_CTIMER4_SHIFT            (20U)
/*! CTIMER4 - CTIMER4 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_CTIMER4(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_CTIMER4_SHIFT)) & PMRC_WAKEUPSRC1_CTIMER4_MASK)

#define PMRC_WAKEUPSRC1_UTICK_MASK               (0x200000U)
#define PMRC_WAKEUPSRC1_UTICK_SHIFT              (21U)
/*! UTICK - UTICK wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_UTICK(x)                 (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_UTICK_SHIFT)) & PMRC_WAKEUPSRC1_UTICK_MASK)

#define PMRC_WAKEUPSRC1_OSTIMER_MASK             (0x400000U)
#define PMRC_WAKEUPSRC1_OSTIMER_SHIFT            (22U)
/*! OSTIMER - OSTIMER wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_OSTIMER(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_OSTIMER_SHIFT)) & PMRC_WAKEUPSRC1_OSTIMER_MASK)

#define PMRC_WAKEUPSRC1_I3C_MASK                 (0x800000U)
#define PMRC_WAKEUPSRC1_I3C_SHIFT                (23U)
/*! I3C - I3C wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC1_I3C(x)                   (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC1_I3C_SHIFT)) & PMRC_WAKEUPSRC1_I3C_MASK)
/*! @} */

/*! @name WAKEUPSRC2 - Configuration of deep-sleep wake-up sources (part-2) */
/*! @{ */

#define PMRC_WAKEUPSRC2_FLEXCOMM0_FIFO_MASK      (0x1U)
#define PMRC_WAKEUPSRC2_FLEXCOMM0_FIFO_SHIFT     (0U)
/*! FLEXCOMM0_FIFO - FLEXCOMM0_FIFO wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC2_FLEXCOMM0_FIFO(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC2_FLEXCOMM0_FIFO_SHIFT)) & PMRC_WAKEUPSRC2_FLEXCOMM0_FIFO_MASK)

#define PMRC_WAKEUPSRC2_FLEXCOMM1_FIFO_MASK      (0x2U)
#define PMRC_WAKEUPSRC2_FLEXCOMM1_FIFO_SHIFT     (1U)
/*! FLEXCOMM1_FIFO - FLEXCOMM1_FIFO wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC2_FLEXCOMM1_FIFO(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC2_FLEXCOMM1_FIFO_SHIFT)) & PMRC_WAKEUPSRC2_FLEXCOMM1_FIFO_MASK)

#define PMRC_WAKEUPSRC2_FLEXCOMM2_FIFO_MASK      (0x4U)
#define PMRC_WAKEUPSRC2_FLEXCOMM2_FIFO_SHIFT     (2U)
/*! FLEXCOMM2_FIFO - FLEXCOMM2_FIFO wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC2_FLEXCOMM2_FIFO(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC2_FLEXCOMM2_FIFO_SHIFT)) & PMRC_WAKEUPSRC2_FLEXCOMM2_FIFO_MASK)

#define PMRC_WAKEUPSRC2_FLEXCOMM3_FIFO_MASK      (0x8U)
#define PMRC_WAKEUPSRC2_FLEXCOMM3_FIFO_SHIFT     (3U)
/*! FLEXCOMM3_FIFO - FLEXCOMM3_FIFO wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC2_FLEXCOMM3_FIFO(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC2_FLEXCOMM3_FIFO_SHIFT)) & PMRC_WAKEUPSRC2_FLEXCOMM3_FIFO_MASK)

#define PMRC_WAKEUPSRC2_FLEXCOMM4_FIFO_MASK      (0x10U)
#define PMRC_WAKEUPSRC2_FLEXCOMM4_FIFO_SHIFT     (4U)
/*! FLEXCOMM4_FIFO - FLEXCOMM4_FIFO wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC2_FLEXCOMM4_FIFO(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC2_FLEXCOMM4_FIFO_SHIFT)) & PMRC_WAKEUPSRC2_FLEXCOMM4_FIFO_MASK)

#define PMRC_WAKEUPSRC2_FLEXCOMM5_FIFO_MASK      (0x20U)
#define PMRC_WAKEUPSRC2_FLEXCOMM5_FIFO_SHIFT     (5U)
/*! FLEXCOMM5_FIFO - FLEXCOMM5_FIFO wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC2_FLEXCOMM5_FIFO(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC2_FLEXCOMM5_FIFO_SHIFT)) & PMRC_WAKEUPSRC2_FLEXCOMM5_FIFO_MASK)

#define PMRC_WAKEUPSRC2_FLEXCOMM0_MASK           (0x40U)
#define PMRC_WAKEUPSRC2_FLEXCOMM0_SHIFT          (6U)
/*! FLEXCOMM0 - FLEXCOMM0 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC2_FLEXCOMM0(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC2_FLEXCOMM0_SHIFT)) & PMRC_WAKEUPSRC2_FLEXCOMM0_MASK)

#define PMRC_WAKEUPSRC2_FLEXCOMM1_MASK           (0x80U)
#define PMRC_WAKEUPSRC2_FLEXCOMM1_SHIFT          (7U)
/*! FLEXCOMM1 - FLEXCOMM1 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC2_FLEXCOMM1(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC2_FLEXCOMM1_SHIFT)) & PMRC_WAKEUPSRC2_FLEXCOMM1_MASK)

#define PMRC_WAKEUPSRC2_FLEXCOMM2_MASK           (0x100U)
#define PMRC_WAKEUPSRC2_FLEXCOMM2_SHIFT          (8U)
/*! FLEXCOMM2 - FLEXCOMM2 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC2_FLEXCOMM2(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC2_FLEXCOMM2_SHIFT)) & PMRC_WAKEUPSRC2_FLEXCOMM2_MASK)

#define PMRC_WAKEUPSRC2_FLEXCOMM3_MASK           (0x200U)
#define PMRC_WAKEUPSRC2_FLEXCOMM3_SHIFT          (9U)
/*! FLEXCOMM3 - FLEXCOMM3 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC2_FLEXCOMM3(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC2_FLEXCOMM3_SHIFT)) & PMRC_WAKEUPSRC2_FLEXCOMM3_MASK)

#define PMRC_WAKEUPSRC2_FLEXCOMM4_MASK           (0x400U)
#define PMRC_WAKEUPSRC2_FLEXCOMM4_SHIFT          (10U)
/*! FLEXCOMM4 - FLEXCOMM4 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC2_FLEXCOMM4(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC2_FLEXCOMM4_SHIFT)) & PMRC_WAKEUPSRC2_FLEXCOMM4_MASK)

#define PMRC_WAKEUPSRC2_FLEXCOMM5_MASK           (0x800U)
#define PMRC_WAKEUPSRC2_FLEXCOMM5_SHIFT          (11U)
/*! FLEXCOMM5 - FLEXCOMM5 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC2_FLEXCOMM5(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC2_FLEXCOMM5_SHIFT)) & PMRC_WAKEUPSRC2_FLEXCOMM5_MASK)

#define PMRC_WAKEUPSRC2_SDMA0_MASK               (0x1000U)
#define PMRC_WAKEUPSRC2_SDMA0_SHIFT              (12U)
/*! SDMA0 - SDMA0 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC2_SDMA0(x)                 (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC2_SDMA0_SHIFT)) & PMRC_WAKEUPSRC2_SDMA0_MASK)

#define PMRC_WAKEUPSRC2_SDMA1_MASK               (0x2000U)
#define PMRC_WAKEUPSRC2_SDMA1_SHIFT              (13U)
/*! SDMA1 - SDMA1 wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC2_SDMA1(x)                 (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC2_SDMA1_SHIFT)) & PMRC_WAKEUPSRC2_SDMA1_MASK)

#define PMRC_WAKEUPSRC2_IWAKEUP_MASK             (0x4000U)
#define PMRC_WAKEUPSRC2_IWAKEUP_SHIFT            (14U)
/*! IWAKEUP - IWAKEUP wake-up source
 *  0b0..wake-up source disabled
 *  0b1..wake-up source enabled
 */
#define PMRC_WAKEUPSRC2_IWAKEUP(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC2_IWAKEUP_SHIFT)) & PMRC_WAKEUPSRC2_IWAKEUP_MASK)

#define PMRC_WAKEUPSRC2_NMI_WAKEUP_MASK          (0x8000U)
#define PMRC_WAKEUPSRC2_NMI_WAKEUP_SHIFT         (15U)
/*! NMI_WAKEUP - NMI_WAKEUP wake-up source.<br>It is always enabled.
 *  0b0..invalid value, it can't be disabled
 *  0b1..wake-up source enabled, always true
 */
#define PMRC_WAKEUPSRC2_NMI_WAKEUP(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPSRC2_NMI_WAKEUP_SHIFT)) & PMRC_WAKEUPSRC2_NMI_WAKEUP_MASK)
/*! @} */

/*! @name PMICMODE - Persistent register.<br>Configuration of external PMIC power saving modes.<br>Register is effectively written when corresponding bit in Transfer register is read low */
/*! @{ */

#define PMRC_PMICMODE_ACTIVE_MODE_MASK           (0xFU)
#define PMRC_PMICMODE_ACTIVE_MODE_SHIFT          (0U)
/*! ACTIVE_MODE - ACTIVE_MODE setup */
#define PMRC_PMICMODE_ACTIVE_MODE(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_PMICMODE_ACTIVE_MODE_SHIFT)) & PMRC_PMICMODE_ACTIVE_MODE_MASK)

#define PMRC_PMICMODE_DEEPSLEEP_MODE_MASK        (0xF0U)
#define PMRC_PMICMODE_DEEPSLEEP_MODE_SHIFT       (4U)
/*! DEEPSLEEP_MODE - DEEPSLEEP_MODE setup */
#define PMRC_PMICMODE_DEEPSLEEP_MODE(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_PMICMODE_DEEPSLEEP_MODE_SHIFT)) & PMRC_PMICMODE_DEEPSLEEP_MODE_MASK)

#define PMRC_PMICMODE_POWERDOWN_MODE_MASK        (0xF00U)
#define PMRC_PMICMODE_POWERDOWN_MODE_SHIFT       (8U)
/*! POWERDOWN_MODE - POWERDOWN_MODE setup */
#define PMRC_PMICMODE_POWERDOWN_MODE(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_PMICMODE_POWERDOWN_MODE_SHIFT)) & PMRC_PMICMODE_POWERDOWN_MODE_MASK)

#define PMRC_PMICMODE_DEEPPOWERDOWN_MODE_MASK    (0xF000U)
#define PMRC_PMICMODE_DEEPPOWERDOWN_MODE_SHIFT   (12U)
/*! DEEPPOWERDOWN_MODE - DEEPPOWERDOWN_MODE setup */
#define PMRC_PMICMODE_DEEPPOWERDOWN_MODE(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_PMICMODE_DEEPPOWERDOWN_MODE_SHIFT)) & PMRC_PMICMODE_DEEPPOWERDOWN_MODE_MASK)
/*! @} */

/*! @name ANAGDETCONFIG1 - Persistent register.<br>Configuration of Analog Glitch Detector (part-1) */
/*! @{ */

#define PMRC_ANAGDETCONFIG1_VDDMEMSET_MASK       (0x7U)
#define PMRC_ANAGDETCONFIG1_VDDMEMSET_SHIFT      (0U)
/*! VddMemSet - VDD_MEM BOD level:<br>25mV+25mV*VddMemSet */
#define PMRC_ANAGDETCONFIG1_VDDMEMSET(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_ANAGDETCONFIG1_VDDMEMSET_SHIFT)) & PMRC_ANAGDETCONFIG1_VDDMEMSET_MASK)

#define PMRC_ANAGDETCONFIG1_VDDMEMEN_MASK        (0x8U)
#define PMRC_ANAGDETCONFIG1_VDDMEMEN_SHIFT       (3U)
/*! VddMemEn - VDD_MEM glitch detector enable
 *  0b0..disabled
 *  0b1..enabled
 */
#define PMRC_ANAGDETCONFIG1_VDDMEMEN(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_ANAGDETCONFIG1_VDDMEMEN_SHIFT)) & PMRC_ANAGDETCONFIG1_VDDMEMEN_MASK)

#define PMRC_ANAGDETCONFIG1_GDETEN_MASK          (0x10U)
#define PMRC_ANAGDETCONFIG1_GDETEN_SHIFT         (4U)
/*! GdetEn - analog glitch detect enable
 *  0b0..disabled
 *  0b1..enabled
 */
#define PMRC_ANAGDETCONFIG1_GDETEN(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ANAGDETCONFIG1_GDETEN_SHIFT)) & PMRC_ANAGDETCONFIG1_GDETEN_MASK)

#define PMRC_ANAGDETCONFIG1_VDDDIGEN_MASK        (0x20U)
#define PMRC_ANAGDETCONFIG1_VDDDIGEN_SHIFT       (5U)
/*! VddDigEn - VDD_DIG glitch detector enable
 *  0b0..disabled
 *  0b1..enabled
 */
#define PMRC_ANAGDETCONFIG1_VDDDIGEN(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_ANAGDETCONFIG1_VDDDIGEN_SHIFT)) & PMRC_ANAGDETCONFIG1_VDDDIGEN_MASK)

#define PMRC_ANAGDETCONFIG1_VDDEN_MASK           (0x40U)
#define PMRC_ANAGDETCONFIG1_VDDEN_SHIFT          (6U)
/*! VddEn - VDD glitch detector enable
 *  0b0..disabled
 *  0b1..enabled
 */
#define PMRC_ANAGDETCONFIG1_VDDEN(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_ANAGDETCONFIG1_VDDEN_SHIFT)) & PMRC_ANAGDETCONFIG1_VDDEN_MASK)
/*! @} */

/*! @name ANAGDETCONFIG2 - Non-persistent register. Configuration of Analog Glitch Detector (part-2) */
/*! @{ */

#define PMRC_ANAGDETCONFIG2_VDDDIGSET_MASK       (0x7U)
#define PMRC_ANAGDETCONFIG2_VDDDIGSET_SHIFT      (0U)
/*! VddDigSet - VDD_DIG BOD level:<br>25mV+25mV*VddDigSet */
#define PMRC_ANAGDETCONFIG2_VDDDIGSET(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_ANAGDETCONFIG2_VDDDIGSET_SHIFT)) & PMRC_ANAGDETCONFIG2_VDDDIGSET_MASK)

#define PMRC_ANAGDETCONFIG2_VDDSET_MASK          (0x38U)
#define PMRC_ANAGDETCONFIG2_VDDSET_SHIFT         (3U)
/*! VddSet - VDD BOD level:<br>25mV+25mV*VddSet */
#define PMRC_ANAGDETCONFIG2_VDDSET(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_ANAGDETCONFIG2_VDDSET_SHIFT)) & PMRC_ANAGDETCONFIG2_VDDSET_MASK)
/*! @} */

/*! @name WAKEUPCAUSE1 - Tracking of deep-sleep wake-up cause/source (part-1) */
/*! @{ */

#define PMRC_WAKEUPCAUSE1_WWDT_MASK              (0x1U)
#define PMRC_WAKEUPCAUSE1_WWDT_SHIFT             (0U)
/*! WWDT - WWDT wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_WWDT(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_WWDT_SHIFT)) & PMRC_WAKEUPCAUSE1_WWDT_MASK)

#define PMRC_WAKEUPCAUSE1_GINT0_MASK             (0x2U)
#define PMRC_WAKEUPCAUSE1_GINT0_SHIFT            (1U)
/*! GINT0 - GINT0 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_GINT0(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_GINT0_SHIFT)) & PMRC_WAKEUPCAUSE1_GINT0_MASK)

#define PMRC_WAKEUPCAUSE1_GPIO_INTA_MASK         (0x4U)
#define PMRC_WAKEUPCAUSE1_GPIO_INTA_SHIFT        (2U)
/*! GPIO_INTA - GPIO_INTA wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_GPIO_INTA(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_GPIO_INTA_SHIFT)) & PMRC_WAKEUPCAUSE1_GPIO_INTA_MASK)

#define PMRC_WAKEUPCAUSE1_GPIO_INTB_MASK         (0x8U)
#define PMRC_WAKEUPCAUSE1_GPIO_INTB_SHIFT        (3U)
/*! GPIO_INTB - GPIO_INTB wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_GPIO_INTB(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_GPIO_INTB_SHIFT)) & PMRC_WAKEUPCAUSE1_GPIO_INTB_MASK)

#define PMRC_WAKEUPCAUSE1_GPIO_PINT0_MASK        (0x10U)
#define PMRC_WAKEUPCAUSE1_GPIO_PINT0_SHIFT       (4U)
/*! GPIO_PINT0 - GPIO_PINT0 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_GPIO_PINT0(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_GPIO_PINT0_SHIFT)) & PMRC_WAKEUPCAUSE1_GPIO_PINT0_MASK)

#define PMRC_WAKEUPCAUSE1_GPIO_PINT1_MASK        (0x20U)
#define PMRC_WAKEUPCAUSE1_GPIO_PINT1_SHIFT       (5U)
/*! GPIO_PINT1 - GPIO_PINT1 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_GPIO_PINT1(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_GPIO_PINT1_SHIFT)) & PMRC_WAKEUPCAUSE1_GPIO_PINT1_MASK)

#define PMRC_WAKEUPCAUSE1_GPIO_PINT2_MASK        (0x40U)
#define PMRC_WAKEUPCAUSE1_GPIO_PINT2_SHIFT       (6U)
/*! GPIO_PINT2 - GPIO_PINT2 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_GPIO_PINT2(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_GPIO_PINT2_SHIFT)) & PMRC_WAKEUPCAUSE1_GPIO_PINT2_MASK)

#define PMRC_WAKEUPCAUSE1_GPIO_PINT3_MASK        (0x80U)
#define PMRC_WAKEUPCAUSE1_GPIO_PINT3_SHIFT       (7U)
/*! GPIO_PINT3 - GPIO_PINT3 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_GPIO_PINT3(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_GPIO_PINT3_SHIFT)) & PMRC_WAKEUPCAUSE1_GPIO_PINT3_MASK)

#define PMRC_WAKEUPCAUSE1_GPIO_PINT4_MASK        (0x100U)
#define PMRC_WAKEUPCAUSE1_GPIO_PINT4_SHIFT       (8U)
/*! GPIO_PINT4 - GPIO_PINT4 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_GPIO_PINT4(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_GPIO_PINT4_SHIFT)) & PMRC_WAKEUPCAUSE1_GPIO_PINT4_MASK)

#define PMRC_WAKEUPCAUSE1_GPIO_PINT5_MASK        (0x200U)
#define PMRC_WAKEUPCAUSE1_GPIO_PINT5_SHIFT       (9U)
/*! GPIO_PINT5 - GPIO_PINT5 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_GPIO_PINT5(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_GPIO_PINT5_SHIFT)) & PMRC_WAKEUPCAUSE1_GPIO_PINT5_MASK)

#define PMRC_WAKEUPCAUSE1_GPIO_PINT6_MASK        (0x400U)
#define PMRC_WAKEUPCAUSE1_GPIO_PINT6_SHIFT       (10U)
/*! GPIO_PINT6 - GPIO_PINT6 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_GPIO_PINT6(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_GPIO_PINT6_SHIFT)) & PMRC_WAKEUPCAUSE1_GPIO_PINT6_MASK)

#define PMRC_WAKEUPCAUSE1_GPIO_PINT7_MASK        (0x800U)
#define PMRC_WAKEUPCAUSE1_GPIO_PINT7_SHIFT       (11U)
/*! GPIO_PINT7 - GPIO_PINT7 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_GPIO_PINT7(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_GPIO_PINT7_SHIFT)) & PMRC_WAKEUPCAUSE1_GPIO_PINT7_MASK)

#define PMRC_WAKEUPCAUSE1_SEC_GPIO_INTA_MASK     (0x1000U)
#define PMRC_WAKEUPCAUSE1_SEC_GPIO_INTA_SHIFT    (12U)
/*! SEC_GPIO_INTA - SEC_GPIO_INTA wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_SEC_GPIO_INTA(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_SEC_GPIO_INTA_SHIFT)) & PMRC_WAKEUPCAUSE1_SEC_GPIO_INTA_MASK)

#define PMRC_WAKEUPCAUSE1_SEC_GPIO_INTB_MASK     (0x2000U)
#define PMRC_WAKEUPCAUSE1_SEC_GPIO_INTB_SHIFT    (13U)
/*! SEC_GPIO_INTB - SEC_GPIO_INTB wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_SEC_GPIO_INTB(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_SEC_GPIO_INTB_SHIFT)) & PMRC_WAKEUPCAUSE1_SEC_GPIO_INTB_MASK)

#define PMRC_WAKEUPCAUSE1_SEC_GPIO_PINT0_MASK    (0x4000U)
#define PMRC_WAKEUPCAUSE1_SEC_GPIO_PINT0_SHIFT   (14U)
/*! SEC_GPIO_PINT0 - SEC_GPIO_PINT0 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_SEC_GPIO_PINT0(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_SEC_GPIO_PINT0_SHIFT)) & PMRC_WAKEUPCAUSE1_SEC_GPIO_PINT0_MASK)

#define PMRC_WAKEUPCAUSE1_SEC_GPIO_PINT1_MASK    (0x8000U)
#define PMRC_WAKEUPCAUSE1_SEC_GPIO_PINT1_SHIFT   (15U)
/*! SEC_GPIO_PINT1 - SEC_GPIO_PINT1 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_SEC_GPIO_PINT1(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_SEC_GPIO_PINT1_SHIFT)) & PMRC_WAKEUPCAUSE1_SEC_GPIO_PINT1_MASK)

#define PMRC_WAKEUPCAUSE1_CTIMER0_MASK           (0x10000U)
#define PMRC_WAKEUPCAUSE1_CTIMER0_SHIFT          (16U)
/*! CTIMER0 - CTIMER0 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_CTIMER0(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_CTIMER0_SHIFT)) & PMRC_WAKEUPCAUSE1_CTIMER0_MASK)

#define PMRC_WAKEUPCAUSE1_CTIMER1_MASK           (0x20000U)
#define PMRC_WAKEUPCAUSE1_CTIMER1_SHIFT          (17U)
/*! CTIMER1 - CTIMER1 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_CTIMER1(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_CTIMER1_SHIFT)) & PMRC_WAKEUPCAUSE1_CTIMER1_MASK)

#define PMRC_WAKEUPCAUSE1_CTIMER2_MASK           (0x40000U)
#define PMRC_WAKEUPCAUSE1_CTIMER2_SHIFT          (18U)
/*! CTIMER2 - CTIMER2 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_CTIMER2(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_CTIMER2_SHIFT)) & PMRC_WAKEUPCAUSE1_CTIMER2_MASK)

#define PMRC_WAKEUPCAUSE1_CTIMER3_MASK           (0x80000U)
#define PMRC_WAKEUPCAUSE1_CTIMER3_SHIFT          (19U)
/*! CTIMER3 - CTIMER3 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_CTIMER3(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_CTIMER3_SHIFT)) & PMRC_WAKEUPCAUSE1_CTIMER3_MASK)

#define PMRC_WAKEUPCAUSE1_CTIMER4_MASK           (0x100000U)
#define PMRC_WAKEUPCAUSE1_CTIMER4_SHIFT          (20U)
/*! CTIMER4 - CTIMER4 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_CTIMER4(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_CTIMER4_SHIFT)) & PMRC_WAKEUPCAUSE1_CTIMER4_MASK)

#define PMRC_WAKEUPCAUSE1_UTICK_MASK             (0x200000U)
#define PMRC_WAKEUPCAUSE1_UTICK_SHIFT            (21U)
/*! UTICK - UTICK wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_UTICK(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_UTICK_SHIFT)) & PMRC_WAKEUPCAUSE1_UTICK_MASK)

#define PMRC_WAKEUPCAUSE1_OSTIMER_MASK           (0x400000U)
#define PMRC_WAKEUPCAUSE1_OSTIMER_SHIFT          (22U)
/*! OSTIMER - OSTIMER wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_OSTIMER(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_OSTIMER_SHIFT)) & PMRC_WAKEUPCAUSE1_OSTIMER_MASK)

#define PMRC_WAKEUPCAUSE1_I3C_MASK               (0x800000U)
#define PMRC_WAKEUPCAUSE1_I3C_SHIFT              (23U)
/*! I3C - I3C wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE1_I3C(x)                 (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE1_I3C_SHIFT)) & PMRC_WAKEUPCAUSE1_I3C_MASK)
/*! @} */

/*! @name WAKEUPCAUSE2 - Tracking of deep-sleep wake-up cause/source (part-2) */
/*! @{ */

#define PMRC_WAKEUPCAUSE2_FLEXCOMM0_FIFO_MASK    (0x1U)
#define PMRC_WAKEUPCAUSE2_FLEXCOMM0_FIFO_SHIFT   (0U)
/*! FLEXCOMM0_FIFO - FLEXCOMM0_FIFO wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE2_FLEXCOMM0_FIFO(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE2_FLEXCOMM0_FIFO_SHIFT)) & PMRC_WAKEUPCAUSE2_FLEXCOMM0_FIFO_MASK)

#define PMRC_WAKEUPCAUSE2_FLEXCOMM1_FIFO_MASK    (0x2U)
#define PMRC_WAKEUPCAUSE2_FLEXCOMM1_FIFO_SHIFT   (1U)
/*! FLEXCOMM1_FIFO - FLEXCOMM1_FIFO wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE2_FLEXCOMM1_FIFO(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE2_FLEXCOMM1_FIFO_SHIFT)) & PMRC_WAKEUPCAUSE2_FLEXCOMM1_FIFO_MASK)

#define PMRC_WAKEUPCAUSE2_FLEXCOMM2_FIFO_MASK    (0x4U)
#define PMRC_WAKEUPCAUSE2_FLEXCOMM2_FIFO_SHIFT   (2U)
/*! FLEXCOMM2_FIFO - FLEXCOMM2_FIFO wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE2_FLEXCOMM2_FIFO(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE2_FLEXCOMM2_FIFO_SHIFT)) & PMRC_WAKEUPCAUSE2_FLEXCOMM2_FIFO_MASK)

#define PMRC_WAKEUPCAUSE2_FLEXCOMM3_FIFO_MASK    (0x8U)
#define PMRC_WAKEUPCAUSE2_FLEXCOMM3_FIFO_SHIFT   (3U)
/*! FLEXCOMM3_FIFO - FLEXCOMM3_FIFO wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE2_FLEXCOMM3_FIFO(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE2_FLEXCOMM3_FIFO_SHIFT)) & PMRC_WAKEUPCAUSE2_FLEXCOMM3_FIFO_MASK)

#define PMRC_WAKEUPCAUSE2_FLEXCOMM4_FIFO_MASK    (0x10U)
#define PMRC_WAKEUPCAUSE2_FLEXCOMM4_FIFO_SHIFT   (4U)
/*! FLEXCOMM4_FIFO - FLEXCOMM4_FIFO wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE2_FLEXCOMM4_FIFO(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE2_FLEXCOMM4_FIFO_SHIFT)) & PMRC_WAKEUPCAUSE2_FLEXCOMM4_FIFO_MASK)

#define PMRC_WAKEUPCAUSE2_FLEXCOMM5_FIFO_MASK    (0x20U)
#define PMRC_WAKEUPCAUSE2_FLEXCOMM5_FIFO_SHIFT   (5U)
/*! FLEXCOMM5_FIFO - FLEXCOMM5_FIFO wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE2_FLEXCOMM5_FIFO(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE2_FLEXCOMM5_FIFO_SHIFT)) & PMRC_WAKEUPCAUSE2_FLEXCOMM5_FIFO_MASK)

#define PMRC_WAKEUPCAUSE2_FLEXCOMM0_MASK         (0x40U)
#define PMRC_WAKEUPCAUSE2_FLEXCOMM0_SHIFT        (6U)
/*! FLEXCOMM0 - FLEXCOMM0 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE2_FLEXCOMM0(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE2_FLEXCOMM0_SHIFT)) & PMRC_WAKEUPCAUSE2_FLEXCOMM0_MASK)

#define PMRC_WAKEUPCAUSE2_FLEXCOMM1_MASK         (0x80U)
#define PMRC_WAKEUPCAUSE2_FLEXCOMM1_SHIFT        (7U)
/*! FLEXCOMM1 - FLEXCOMM1 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE2_FLEXCOMM1(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE2_FLEXCOMM1_SHIFT)) & PMRC_WAKEUPCAUSE2_FLEXCOMM1_MASK)

#define PMRC_WAKEUPCAUSE2_FLEXCOMM2_MASK         (0x100U)
#define PMRC_WAKEUPCAUSE2_FLEXCOMM2_SHIFT        (8U)
/*! FLEXCOMM2 - FLEXCOMM2 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE2_FLEXCOMM2(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE2_FLEXCOMM2_SHIFT)) & PMRC_WAKEUPCAUSE2_FLEXCOMM2_MASK)

#define PMRC_WAKEUPCAUSE2_FLEXCOMM3_MASK         (0x200U)
#define PMRC_WAKEUPCAUSE2_FLEXCOMM3_SHIFT        (9U)
/*! FLEXCOMM3 - FLEXCOMM3 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE2_FLEXCOMM3(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE2_FLEXCOMM3_SHIFT)) & PMRC_WAKEUPCAUSE2_FLEXCOMM3_MASK)

#define PMRC_WAKEUPCAUSE2_FLEXCOMM4_MASK         (0x400U)
#define PMRC_WAKEUPCAUSE2_FLEXCOMM4_SHIFT        (10U)
/*! FLEXCOMM4 - FLEXCOMM4 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE2_FLEXCOMM4(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE2_FLEXCOMM4_SHIFT)) & PMRC_WAKEUPCAUSE2_FLEXCOMM4_MASK)

#define PMRC_WAKEUPCAUSE2_FLEXCOMM5_MASK         (0x800U)
#define PMRC_WAKEUPCAUSE2_FLEXCOMM5_SHIFT        (11U)
/*! FLEXCOMM5 - FLEXCOMM5 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE2_FLEXCOMM5(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE2_FLEXCOMM5_SHIFT)) & PMRC_WAKEUPCAUSE2_FLEXCOMM5_MASK)

#define PMRC_WAKEUPCAUSE2_SDMA0_MASK             (0x1000U)
#define PMRC_WAKEUPCAUSE2_SDMA0_SHIFT            (12U)
/*! SDMA0 - SDMA0 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE2_SDMA0(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE2_SDMA0_SHIFT)) & PMRC_WAKEUPCAUSE2_SDMA0_MASK)

#define PMRC_WAKEUPCAUSE2_SDMA1_MASK             (0x2000U)
#define PMRC_WAKEUPCAUSE2_SDMA1_SHIFT            (13U)
/*! SDMA1 - SDMA1 wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE2_SDMA1(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE2_SDMA1_SHIFT)) & PMRC_WAKEUPCAUSE2_SDMA1_MASK)

#define PMRC_WAKEUPCAUSE2_IWAKEUP_MASK           (0x4000U)
#define PMRC_WAKEUPCAUSE2_IWAKEUP_SHIFT          (14U)
/*! IWAKEUP - IWAKEUP wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE2_IWAKEUP(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE2_IWAKEUP_SHIFT)) & PMRC_WAKEUPCAUSE2_IWAKEUP_MASK)

#define PMRC_WAKEUPCAUSE2_NMI_WAKEUP_MASK        (0x8000U)
#define PMRC_WAKEUPCAUSE2_NMI_WAKEUP_SHIFT       (15U)
/*! NMI_WAKEUP - NMI_WAKEUP wake-up source
 *  0b0..False
 *  0b1..True
 */
#define PMRC_WAKEUPCAUSE2_NMI_WAKEUP(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_WAKEUPCAUSE2_NMI_WAKEUP_SHIFT)) & PMRC_WAKEUPCAUSE2_NMI_WAKEUP_MASK)
/*! @} */

/*! @name SARADCCTRL - Control register for SAR ADC */
/*! @{ */

#define PMRC_SARADCCTRL_ADC_ENABLE_MASK          (0x1U)
#define PMRC_SARADCCTRL_ADC_ENABLE_SHIFT         (0U)
/*! adc_enable - Enable of the LSR ADC
 *  0b0..LSR ADC disabled
 *  0b1..LSR ADC enabled
 */
#define PMRC_SARADCCTRL_ADC_ENABLE(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCTRL_ADC_ENABLE_SHIFT)) & PMRC_SARADCCTRL_ADC_ENABLE_MASK)

#define PMRC_SARADCCTRL_TIME_EXTEND_MASK         (0x3EU)
#define PMRC_SARADCCTRL_TIME_EXTEND_SHIFT        (1U)
/*! time_extend - Add extra cycles to the sampling phase (default is 1 sampling cycle), Value is number of added sampling cycles */
#define PMRC_SARADCCTRL_TIME_EXTEND(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCTRL_TIME_EXTEND_SHIFT)) & PMRC_SARADCCTRL_TIME_EXTEND_MASK)

#define PMRC_SARADCCTRL_SEL_RESOLUTION_MASK      (0xC0U)
#define PMRC_SARADCCTRL_SEL_RESOLUTION_SHIFT     (6U)
/*! sel_resolution - Change the accuracy of the LSR ADC by removing LSBs
 *  0b00..Full resolution - No LSBs removed
 *  0b01..One LSB removed
 *  0b10..Two LSB removed
 *  0b11..Three LSB removed
 */
#define PMRC_SARADCCTRL_SEL_RESOLUTION(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCTRL_SEL_RESOLUTION_SHIFT)) & PMRC_SARADCCTRL_SEL_RESOLUTION_MASK)

#define PMRC_SARADCCTRL_MUX_SELECT_MASK          (0xF00U)
#define PMRC_SARADCCTRL_MUX_SELECT_SHIFT         (8U)
/*! mux_select - Select LSR ADC low voltage input signal
 *  0b0000..Select vss ANA
 *  0b0001..VDD spdr divided, depending on "d2a_sig_lsradc_spdr_rdiv_enable" and "d2a_sig_lsradc_spdr_rdiv_ratio_select<1:0>
 *  0b0010..vdd_spdr_reg_div, depending on "d2a_sig_lsradc_spdr_reg_rdiv_enable", (LDO SPDR)
 *  0b0011..Depending on "d2a_sig_lsradc_ac_1v2_rdiv_enable" (Audio codec)
 *  0b0100..Depending on "d2a_sig_lsradc_mic_1v8_rdiv_enable" (Microphone)
 *  0b0101..Depending on "d2a_sig_lsradc_atb_rdiv_enable & "d2a_sig_lsradc_atb_select<1:0>" (ATB)
 *  0b0110..Depending on "d2a_sig_lsradc_main_rdiv_enable" (PMU)
 *  0b0111..Depending on "d2a_sig_lsradc_mux_swm_select<2:0>" and "d2a_sig_lsradc_swm_rdiv_select" (SWM)
 *  0b1000..vdd_ana (LSR-ADC)
 *  0b1001..vdd_dig (Digital)
 *  0b1010..Supply for memories
 *  0b1011..Tcoil Amp out
 *  0b1100..Spare
 *  0b1101..Spare
 *  0b1110..Spare
 *  0b1111..Spare
 */
#define PMRC_SARADCCTRL_MUX_SELECT(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCTRL_MUX_SELECT_SHIFT)) & PMRC_SARADCCTRL_MUX_SELECT_MASK)

#define PMRC_SARADCCTRL_RDIV_ADC_ENABLE_MASK     (0x1000U)
#define PMRC_SARADCCTRL_RDIV_ADC_ENABLE_SHIFT    (12U)
/*! rdiv_adc_enable - Divide low voltage input chosen with "d2a_sig_lsradc_mux_select<3:0>"
 *  0b0..Disabled - no division or load on the input signal
 *  0b1..Enable 660kOhm x0.5 divider on the input signal
 */
#define PMRC_SARADCCTRL_RDIV_ADC_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCTRL_RDIV_ADC_ENABLE_SHIFT)) & PMRC_SARADCCTRL_RDIV_ADC_ENABLE_MASK)

#define PMRC_SARADCCTRL_SPDR_RDIV_SELECT_MASK    (0x6000U)
#define PMRC_SARADCCTRL_SPDR_RDIV_SELECT_SHIFT   (13U)
/*! spdr_rdiv_select - Choose & divide VDD_SP voltage at "d2a_sig_lsradc_mux_select<3:0>" == 1
 *  0b00..VDD_SP disabled
 *  0b01..VDD_SP enabled & divider ratio x0.5; 660kOhm
 *  0b10..VDD_SP enabled & divider ratio x0.3333; 500kOhm
 *  0b11..VDD_SP enabled & divider ratio x0.25; 440kOhm
 */
#define PMRC_SARADCCTRL_SPDR_RDIV_SELECT(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCTRL_SPDR_RDIV_SELECT_SHIFT)) & PMRC_SARADCCTRL_SPDR_RDIV_SELECT_MASK)

#define PMRC_SARADCCTRL_SPDR_REG_RDIV_SELECT_MASK (0x18000U)
#define PMRC_SARADCCTRL_SPDR_REG_RDIV_SELECT_SHIFT (15U)
/*! spdr_reg_rdiv_select - Choose & divide VDD_LDO_SP voltage at "d2a_sig_lsradc_mux_select<3:0>" == 2
 *  0b00..VDD_LDO_SP disabled
 *  0b01..VDD_LDO_SP enabled & divider ratio x0.5; 660kOhm
 *  0b10..VDD_LDO_SP enabled & divider ratio x0.3333; 500kOhm
 *  0b11..VDD_LDO_SP enabled & divider ratio x0.25; 440kOhm
 */
#define PMRC_SARADCCTRL_SPDR_REG_RDIV_SELECT(x)  (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCTRL_SPDR_REG_RDIV_SELECT_SHIFT)) & PMRC_SARADCCTRL_SPDR_REG_RDIV_SELECT_MASK)

#define PMRC_SARADCCTRL_AC_1V2_RDIV_ENABLE_MASK  (0x20000U)
#define PMRC_SARADCCTRL_AC_1V2_RDIV_ENABLE_SHIFT (17U)
/*! ac_1v2_rdiv_enable - Choose & divide VDD_AC1V2 (Audio codec supply) voltage at "d2a_sig_lsradc_mux_select<3:0>" == 3
 *  0b0..Disabled
 *  0b1..Enable 330kOhm x0.5 divider on VDD_AC1V2 - output vdd_ac_1v2_div
 */
#define PMRC_SARADCCTRL_AC_1V2_RDIV_ENABLE(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCTRL_AC_1V2_RDIV_ENABLE_SHIFT)) & PMRC_SARADCCTRL_AC_1V2_RDIV_ENABLE_MASK)

#define PMRC_SARADCCTRL_MIC_1V8_RDIV_ENABLE_MASK (0x40000U)
#define PMRC_SARADCCTRL_MIC_1V8_RDIV_ENABLE_SHIFT (18U)
/*! mic_1v8_rdiv_enable - Choose & divide VDD_MIC1 V8 voltage at "d2a_sig_lsradc_mux_select<3:0>" == 4
 *  0b0..Disabled
 *  0b1..Enable 248kOhm x0.3333 divider on VDD_MIC1V8 - output vdd_mic_1v8_div
 */
#define PMRC_SARADCCTRL_MIC_1V8_RDIV_ENABLE(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCTRL_MIC_1V8_RDIV_ENABLE_SHIFT)) & PMRC_SARADCCTRL_MIC_1V8_RDIV_ENABLE_MASK)

#define PMRC_SARADCCTRL_ATB_SELECT_MASK          (0x180000U)
#define PMRC_SARADCCTRL_ATB_SELECT_SHIFT         (19U)
/*! atb_select - Choose ATB voltage at "d2a_sig_lsradc_mux_select<3:0>" == 5
 *  0b00..ATB input disabled
 *  0b01..ATB1 enabled
 *  0b10..ATB2 enabled
 *  0b11..Spare
 */
#define PMRC_SARADCCTRL_ATB_SELECT(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCTRL_ATB_SELECT_SHIFT)) & PMRC_SARADCCTRL_ATB_SELECT_MASK)

#define PMRC_SARADCCTRL_ATB_RDIV_ENABLE_MASK     (0x200000U)
#define PMRC_SARADCCTRL_ATB_RDIV_ENABLE_SHIFT    (21U)
/*! atb_rdiv_enable - Divide ATB2 voltage at "d2a_sig_lsradc_mux_select<3:0>" == 5
 *  0b0..Disabled, No division
 *  0b1..Enable 660kOhm x0.5 divider on ATB - output ana_atb_div
 */
#define PMRC_SARADCCTRL_ATB_RDIV_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCTRL_ATB_RDIV_ENABLE_SHIFT)) & PMRC_SARADCCTRL_ATB_RDIV_ENABLE_MASK)

#define PMRC_SARADCCTRL_MAIN_RDIV_ENABLE_MASK    (0x400000U)
#define PMRC_SARADCCTRL_MAIN_RDIV_ENABLE_SHIFT   (22U)
/*! main_rdiv_enable - Choose & divide VDD (PMU supply) voltage at "d2a_sig_lsradc_mux_select<3:0>" == 6
 *  0b0..Disabled, No division
 *  0b1..Enable 330kOhm x0.5 divider on VDD - output vdd_main_div
 */
#define PMRC_SARADCCTRL_MAIN_RDIV_ENABLE(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCTRL_MAIN_RDIV_ENABLE_SHIFT)) & PMRC_SARADCCTRL_MAIN_RDIV_ENABLE_MASK)

#define PMRC_SARADCCTRL_SWM_RDIV_SELECT_MASK     (0x1800000U)
#define PMRC_SARADCCTRL_SWM_RDIV_SELECT_SHIFT    (23U)
/*! swm_rdiv_select - Choose & divide SWM voltage at "d2a_sig_lsradc_mux_select<3:0>" == 7
 *  0b00..Disabled, No division
 *  0b01..Bypass divider. Note ADC input shall be below 1V otherwise it will damage the ADC
 *  0b10..Enable 330kOhm x0.5 divider on SWM chosen with "d2a_sig_lsradc_mux_swm_select<2:0>" - output ana_swm_div
 *  0b11..Enable 330kOhm x0.33 divider on SWM chosen with "d2a_sig_lsradc_mux_swm_select<2:0>" - output ana_swm_div
 */
#define PMRC_SARADCCTRL_SWM_RDIV_SELECT(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCTRL_SWM_RDIV_SELECT_SHIFT)) & PMRC_SARADCCTRL_SWM_RDIV_SELECT_MASK)

#define PMRC_SARADCCTRL_MUX_SWM_SELECT_MASK      (0x1E000000U)
#define PMRC_SARADCCTRL_MUX_SWM_SELECT_SHIFT     (25U)
/*! mux_swm_select - Select HV SWM pin(x) for "d2a_sig_lsradc_mux_select<3:0>"==7. "d2a_sig_lsradc_swm_rdiv_enable" must be High
 *  0b0000..VSS ana
 *  0b0001..SWM3_00
 *  0b0010..SWM3_01
 *  0b0011..SWM3_02
 *  0b0100..SWM3_03
 *  0b0101..SWM3_08
 *  0b0110..SWM3_09
 *  0b0111..SWM3_10
 *  0b1000..SWM3_11
 *  0b1001..vdd_io3
 */
#define PMRC_SARADCCTRL_MUX_SWM_SELECT(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCTRL_MUX_SWM_SELECT_SHIFT)) & PMRC_SARADCCTRL_MUX_SWM_SELECT_MASK)

#define PMRC_SARADCCTRL_MODE_MASK                (0x60000000U)
#define PMRC_SARADCCTRL_MODE_SHIFT               (29U)
/*! mode - Setup the mode for an ADC measurement
 *  0b00..ADC conversion is disabled, no measurements are performed
 *  0b01..ADC is enabled, constantly measuring the selected voltage
 *  0b10..ADC conversion is enabled, a measurement is made and the ADC conversion is disabled
 *  0b11..A trigger from CTRLSS is sent, the ADC conversion is enabled, a measurement is made and the ADC conversion is disabled
 */
#define PMRC_SARADCCTRL_MODE(x)                  (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCTRL_MODE_SHIFT)) & PMRC_SARADCCTRL_MODE_MASK)

#define PMRC_SARADCCTRL_SARADCDMAENABLE_MASK     (0x80000000U)
#define PMRC_SARADCCTRL_SARADCDMAENABLE_SHIFT    (31U)
/*! SarAdcDmaEnable - Enable the DMA access for Sar ADC
 *  0b0..DMA access is disabled
 *  0b1..DMA access is enabled
 */
#define PMRC_SARADCCTRL_SARADCDMAENABLE(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCTRL_SARADCDMAENABLE_SHIFT)) & PMRC_SARADCCTRL_SARADCDMAENABLE_MASK)
/*! @} */

/*! @name SARADCCLOCKCTRL - Control register for SAR ADC clock enable and selection */
/*! @{ */

#define PMRC_SARADCCLOCKCTRL_CLK_ENABLE_MASK     (0x1U)
#define PMRC_SARADCCLOCKCTRL_CLK_ENABLE_SHIFT    (0U)
/*! clk_enable - Enable SAR ADC clock
 *  0b0..ADC clock disabled
 *  0b1..ADC clock enabled
 */
#define PMRC_SARADCCLOCKCTRL_CLK_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCLOCKCTRL_CLK_ENABLE_SHIFT)) & PMRC_SARADCCLOCKCTRL_CLK_ENABLE_MASK)

#define PMRC_SARADCCLOCKCTRL_FRO_SEL_MASK        (0x2U)
#define PMRC_SARADCCLOCKCTRL_FRO_SEL_SHIFT       (1U)
/*! fro_sel - ADC clock selection between frol and 2048fs
 *  0b0..Select frol for ADC clock
 *  0b1..Select 2048fs for ADC clock
 */
#define PMRC_SARADCCLOCKCTRL_FRO_SEL(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCLOCKCTRL_FRO_SEL_SHIFT)) & PMRC_SARADCCLOCKCTRL_FRO_SEL_MASK)

#define PMRC_SARADCCLOCKCTRL_CLOCK_DIVIDER_MASK  (0x3CU)
#define PMRC_SARADCCLOCKCTRL_CLOCK_DIVIDER_SHIFT (2U)
/*! clock_divider - ADC input clock divider
 *  0b0000..Divide input clock by 2
 *  0b0001..Divide input clock by 4
 *  0b0010..Divide input clock by 8
 *  0b0011..Divide input clock by 16
 *  0b0100..Divide input clock by 32
 *  0b0101..Divide input clock by 64
 *  0b0110..Divide input clock by 128
 *  0b0111..Divide input clock by 256
 *  0b1000..Divide input clock by 512
 *  0b1001..Divide input clock by 1024
 */
#define PMRC_SARADCCLOCKCTRL_CLOCK_DIVIDER(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCLOCKCTRL_CLOCK_DIVIDER_SHIFT)) & PMRC_SARADCCLOCKCTRL_CLOCK_DIVIDER_MASK)

#define PMRC_SARADCCLOCKCTRL_START_UP_CNT_STEP_MASK (0x1FFC0U)
#define PMRC_SARADCCLOCKCTRL_START_UP_CNT_STEP_SHIFT (6U)
/*! start_up_cnt_step - Step of the start-up counter for an ADC measurement.<br>The start-up counter must produce a time-out > 120us.
 *  0b00000000000..Start-up counter is disabled
 *  0b00000000010..APB clock is set to 400 MHz
 *  0b00000001010..APB clock is set to 100 MHz (the default frequency)
 *  0b00000010100..APB clock is set to 50 MHz
 *  0b00000101000..APB clock is set to 25 MHz
 *  0b00001100100..APB clock is set to 10 MHz
 *  0b00011001000..APB clock is set to 5 MHz
 *  0b01111101000..APB clock is set to 1 MHz
 */
#define PMRC_SARADCCLOCKCTRL_START_UP_CNT_STEP(x) (((uint32_t)(((uint32_t)(x)) << PMRC_SARADCCLOCKCTRL_START_UP_CNT_STEP_SHIFT)) & PMRC_SARADCCLOCKCTRL_START_UP_CNT_STEP_MASK)
/*! @} */

/*! @name ADCDATA - ADC data output register */
/*! @{ */

#define PMRC_ADCDATA_SAMPLE_MASK                 (0x7FFU)
#define PMRC_ADCDATA_SAMPLE_SHIFT                (0U)
/*! sample - ADC measurement value of selected measurement input */
#define PMRC_ADCDATA_SAMPLE(x)                   (((uint32_t)(((uint32_t)(x)) << PMRC_ADCDATA_SAMPLE_SHIFT)) & PMRC_ADCDATA_SAMPLE_MASK)

#define PMRC_ADCDATA_MUX_SELECT_MASK             (0xF000000U)
#define PMRC_ADCDATA_MUX_SELECT_SHIFT            (24U)
/*! mux_select - Select LSR ADC low voltage input signal */
#define PMRC_ADCDATA_MUX_SELECT(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_ADCDATA_MUX_SELECT_SHIFT)) & PMRC_ADCDATA_MUX_SELECT_MASK)

#define PMRC_ADCDATA_MUX_SWM_SELECT_MASK         (0xF0000000U)
#define PMRC_ADCDATA_MUX_SWM_SELECT_SHIFT        (28U)
/*! mux_swm_select - Select HV SWM pin(x) for "d2a_sig_lsradc_mux_select<3:0>" */
#define PMRC_ADCDATA_MUX_SWM_SELECT(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_ADCDATA_MUX_SWM_SELECT_SHIFT)) & PMRC_ADCDATA_MUX_SWM_SELECT_MASK)
/*! @} */

/*! @name ADCVDDDATA - VDD measurement result */
/*! @{ */

#define PMRC_ADCVDDDATA_SAMPLE_MASK              (0x7FFU)
#define PMRC_ADCVDDDATA_SAMPLE_SHIFT             (0U)
/*! sample - ADC output value from last VDD measurement. <br>VDD is meassured at vdd_rdiv output which is VDD/2 */
#define PMRC_ADCVDDDATA_SAMPLE(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_ADCVDDDATA_SAMPLE_SHIFT)) & PMRC_ADCVDDDATA_SAMPLE_MASK)
/*! @} */

/*! @name CM55PCFGSTATUS - Manage CM55 Power Modes */
/*! @{ */

#define PMRC_CM55PCFGSTATUS_COREPACTIVE_MASK     (0x1FFFFFU)
#define PMRC_CM55PCFGSTATUS_COREPACTIVE_SHIFT    (0U)
/*! Corepactive - Indication of the minimum power mode required by CM55 */
#define PMRC_CM55PCFGSTATUS_COREPACTIVE(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_CM55PCFGSTATUS_COREPACTIVE_SHIFT)) & PMRC_CM55PCFGSTATUS_COREPACTIVE_MASK)

#define PMRC_CM55PCFGSTATUS_CM55CACHECTRL_MASK   (0x200000U)
#define PMRC_CM55PCFGSTATUS_CM55CACHECTRL_SHIFT  (21U)
/*! Cm55CacheCtrl - Enable/Disable of the Cache memomry of CM55.
 *  0b0..The cache is disabled
 *  0b1..The cache is enabled
 */
#define PMRC_CM55PCFGSTATUS_CM55CACHECTRL(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_CM55PCFGSTATUS_CM55CACHECTRL_SHIFT)) & PMRC_CM55PCFGSTATUS_CM55CACHECTRL_MASK)

#define PMRC_CM55PCFGSTATUS_CM55CACHESTATUS_MASK (0x400000U)
#define PMRC_CM55PCFGSTATUS_CM55CACHESTATUS_SHIFT (22U)
/*! Cm55CacheStatus - Flag indicating if the cache on/off state has been set properly.
 *  0b0..No error has occurred when setting up a new cache state
 *  0b1..An error has occurred when setting up a new cache state
 */
#define PMRC_CM55PCFGSTATUS_CM55CACHESTATUS(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_CM55PCFGSTATUS_CM55CACHESTATUS_SHIFT)) & PMRC_CM55PCFGSTATUS_CM55CACHESTATUS_MASK)

#define PMRC_CM55PCFGSTATUS_PCHANNELSTATUS_MASK  (0x800000U)
#define PMRC_CM55PCFGSTATUS_PCHANNELSTATUS_SHIFT (23U)
/*! PchannelStatus - Flag indicating if the p-channel is busy with an ongoing transaction
 *  0b0..p-channel is free
 *  0b1..p-channel is busy
 */
#define PMRC_CM55PCFGSTATUS_PCHANNELSTATUS(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_CM55PCFGSTATUS_PCHANNELSTATUS_SHIFT)) & PMRC_CM55PCFGSTATUS_PCHANNELSTATUS_MASK)

#define PMRC_CM55PCFGSTATUS_PCHANNELENABLE_MASK  (0x1000000U)
#define PMRC_CM55PCFGSTATUS_PCHANNELENABLE_SHIFT (24U)
/*! PchannelEnable - Enable/Disable of the p-channel.<br>If there is an ongoing transaction on the
 *    p-channel and it gets disabled then the transaction will be canceled.
 *  0b0..p-channel is disabled
 *  0b1..p-channel is enabled
 */
#define PMRC_CM55PCFGSTATUS_PCHANNELENABLE(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_CM55PCFGSTATUS_PCHANNELENABLE_SHIFT)) & PMRC_CM55PCFGSTATUS_PCHANNELENABLE_MASK)
/*! @} */

/*! @name DSWMCFGHOLD1 - Semi-Persistent register.<br>Enables/Disables holding configuration of switch matrix pins.<br>Register is effectively written when corresponding bit in Transfer register is read low. */
/*! @{ */

#define PMRC_DSWMCFGHOLD1_SWM0_00_MASK           (0x1U)
#define PMRC_DSWMCFGHOLD1_SWM0_00_SHIFT          (0U)
/*! SWM0_00 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM0_00(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM0_00_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM0_00_MASK)

#define PMRC_DSWMCFGHOLD1_SWM0_01_MASK           (0x2U)
#define PMRC_DSWMCFGHOLD1_SWM0_01_SHIFT          (1U)
/*! SWM0_01 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM0_01(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM0_01_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM0_01_MASK)

#define PMRC_DSWMCFGHOLD1_SWM0_02_MASK           (0x4U)
#define PMRC_DSWMCFGHOLD1_SWM0_02_SHIFT          (2U)
/*! SWM0_02 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM0_02(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM0_02_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM0_02_MASK)

#define PMRC_DSWMCFGHOLD1_SWM0_03_MASK           (0x8U)
#define PMRC_DSWMCFGHOLD1_SWM0_03_SHIFT          (3U)
/*! SWM0_03 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM0_03(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM0_03_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM0_03_MASK)

#define PMRC_DSWMCFGHOLD1_SWM0_04_MASK           (0x10U)
#define PMRC_DSWMCFGHOLD1_SWM0_04_SHIFT          (4U)
/*! SWM0_04 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM0_04(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM0_04_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM0_04_MASK)

#define PMRC_DSWMCFGHOLD1_SWM0_05_MASK           (0x20U)
#define PMRC_DSWMCFGHOLD1_SWM0_05_SHIFT          (5U)
/*! SWM0_05 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM0_05(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM0_05_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM0_05_MASK)

#define PMRC_DSWMCFGHOLD1_SWM0_06_MASK           (0x40U)
#define PMRC_DSWMCFGHOLD1_SWM0_06_SHIFT          (6U)
/*! SWM0_06 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM0_06(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM0_06_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM0_06_MASK)

#define PMRC_DSWMCFGHOLD1_SWM0_07_MASK           (0x80U)
#define PMRC_DSWMCFGHOLD1_SWM0_07_SHIFT          (7U)
/*! SWM0_07 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM0_07(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM0_07_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM0_07_MASK)

#define PMRC_DSWMCFGHOLD1_SWM0_08_MASK           (0x100U)
#define PMRC_DSWMCFGHOLD1_SWM0_08_SHIFT          (8U)
/*! SWM0_08 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM0_08(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM0_08_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM0_08_MASK)

#define PMRC_DSWMCFGHOLD1_SWM0_09_MASK           (0x200U)
#define PMRC_DSWMCFGHOLD1_SWM0_09_SHIFT          (9U)
/*! SWM0_09 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM0_09(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM0_09_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM0_09_MASK)

#define PMRC_DSWMCFGHOLD1_SWM0_10_MASK           (0x400U)
#define PMRC_DSWMCFGHOLD1_SWM0_10_SHIFT          (10U)
/*! SWM0_10 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM0_10(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM0_10_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM0_10_MASK)

#define PMRC_DSWMCFGHOLD1_SWM0_11_MASK           (0x800U)
#define PMRC_DSWMCFGHOLD1_SWM0_11_SHIFT          (11U)
/*! SWM0_11 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM0_11(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM0_11_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM0_11_MASK)

#define PMRC_DSWMCFGHOLD1_SWM1_00_MASK           (0x1000U)
#define PMRC_DSWMCFGHOLD1_SWM1_00_SHIFT          (12U)
/*! SWM1_00 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM1_00(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM1_00_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM1_00_MASK)

#define PMRC_DSWMCFGHOLD1_SWM1_01_MASK           (0x2000U)
#define PMRC_DSWMCFGHOLD1_SWM1_01_SHIFT          (13U)
/*! SWM1_01 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM1_01(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM1_01_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM1_01_MASK)

#define PMRC_DSWMCFGHOLD1_SWM1_02_MASK           (0x4000U)
#define PMRC_DSWMCFGHOLD1_SWM1_02_SHIFT          (14U)
/*! SWM1_02 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM1_02(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM1_02_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM1_02_MASK)

#define PMRC_DSWMCFGHOLD1_SWM1_03_MASK           (0x8000U)
#define PMRC_DSWMCFGHOLD1_SWM1_03_SHIFT          (15U)
/*! SWM1_03 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM1_03(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM1_03_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM1_03_MASK)

#define PMRC_DSWMCFGHOLD1_SWM1_04_MASK           (0x10000U)
#define PMRC_DSWMCFGHOLD1_SWM1_04_SHIFT          (16U)
/*! SWM1_04 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM1_04(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM1_04_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM1_04_MASK)

#define PMRC_DSWMCFGHOLD1_SWM1_05_MASK           (0x20000U)
#define PMRC_DSWMCFGHOLD1_SWM1_05_SHIFT          (17U)
/*! SWM1_05 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM1_05(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM1_05_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM1_05_MASK)

#define PMRC_DSWMCFGHOLD1_SWM1_06_MASK           (0x40000U)
#define PMRC_DSWMCFGHOLD1_SWM1_06_SHIFT          (18U)
/*! SWM1_06 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM1_06(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM1_06_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM1_06_MASK)

#define PMRC_DSWMCFGHOLD1_SWM1_07_MASK           (0x80000U)
#define PMRC_DSWMCFGHOLD1_SWM1_07_SHIFT          (19U)
/*! SWM1_07 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM1_07(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM1_07_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM1_07_MASK)

#define PMRC_DSWMCFGHOLD1_SWM1_08_MASK           (0x100000U)
#define PMRC_DSWMCFGHOLD1_SWM1_08_SHIFT          (20U)
/*! SWM1_08 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM1_08(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM1_08_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM1_08_MASK)

#define PMRC_DSWMCFGHOLD1_SWM1_09_MASK           (0x200000U)
#define PMRC_DSWMCFGHOLD1_SWM1_09_SHIFT          (21U)
/*! SWM1_09 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM1_09(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM1_09_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM1_09_MASK)

#define PMRC_DSWMCFGHOLD1_SWM1_10_MASK           (0x400000U)
#define PMRC_DSWMCFGHOLD1_SWM1_10_SHIFT          (22U)
/*! SWM1_10 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM1_10(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM1_10_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM1_10_MASK)

#define PMRC_DSWMCFGHOLD1_SWM1_11_MASK           (0x800000U)
#define PMRC_DSWMCFGHOLD1_SWM1_11_SHIFT          (23U)
/*! SWM1_11 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD1_SWM1_11(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD1_SWM1_11_SHIFT)) & PMRC_DSWMCFGHOLD1_SWM1_11_MASK)
/*! @} */

/*! @name DSWMCFGHOLD2 - Semi-Persistent register.<br>Enables/Disables holding configuration of switch matrix pins.<br>Register is effectively written when corresponding bit in Transfer register is read low. */
/*! @{ */

#define PMRC_DSWMCFGHOLD2_SWM2_00_MASK           (0x1U)
#define PMRC_DSWMCFGHOLD2_SWM2_00_SHIFT          (0U)
/*! SWM2_00 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM2_00(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM2_00_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM2_00_MASK)

#define PMRC_DSWMCFGHOLD2_SWM2_01_MASK           (0x2U)
#define PMRC_DSWMCFGHOLD2_SWM2_01_SHIFT          (1U)
/*! SWM2_01 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM2_01(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM2_01_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM2_01_MASK)

#define PMRC_DSWMCFGHOLD2_SWM2_02_MASK           (0x4U)
#define PMRC_DSWMCFGHOLD2_SWM2_02_SHIFT          (2U)
/*! SWM2_02 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM2_02(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM2_02_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM2_02_MASK)

#define PMRC_DSWMCFGHOLD2_SWM2_03_MASK           (0x8U)
#define PMRC_DSWMCFGHOLD2_SWM2_03_SHIFT          (3U)
/*! SWM2_03 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM2_03(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM2_03_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM2_03_MASK)

#define PMRC_DSWMCFGHOLD2_SWM2_04_MASK           (0x10U)
#define PMRC_DSWMCFGHOLD2_SWM2_04_SHIFT          (4U)
/*! SWM2_04 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM2_04(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM2_04_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM2_04_MASK)

#define PMRC_DSWMCFGHOLD2_SWM2_05_MASK           (0x20U)
#define PMRC_DSWMCFGHOLD2_SWM2_05_SHIFT          (5U)
/*! SWM2_05 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM2_05(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM2_05_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM2_05_MASK)

#define PMRC_DSWMCFGHOLD2_SWM2_06_MASK           (0x40U)
#define PMRC_DSWMCFGHOLD2_SWM2_06_SHIFT          (6U)
/*! SWM2_06 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM2_06(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM2_06_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM2_06_MASK)

#define PMRC_DSWMCFGHOLD2_SWM2_07_MASK           (0x80U)
#define PMRC_DSWMCFGHOLD2_SWM2_07_SHIFT          (7U)
/*! SWM2_07 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM2_07(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM2_07_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM2_07_MASK)

#define PMRC_DSWMCFGHOLD2_SWM2_08_MASK           (0x100U)
#define PMRC_DSWMCFGHOLD2_SWM2_08_SHIFT          (8U)
/*! SWM2_08 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM2_08(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM2_08_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM2_08_MASK)

#define PMRC_DSWMCFGHOLD2_SWM2_09_MASK           (0x200U)
#define PMRC_DSWMCFGHOLD2_SWM2_09_SHIFT          (9U)
/*! SWM2_09 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM2_09(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM2_09_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM2_09_MASK)

#define PMRC_DSWMCFGHOLD2_SWM2_10_MASK           (0x400U)
#define PMRC_DSWMCFGHOLD2_SWM2_10_SHIFT          (10U)
/*! SWM2_10 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM2_10(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM2_10_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM2_10_MASK)

#define PMRC_DSWMCFGHOLD2_SWM2_11_MASK           (0x800U)
#define PMRC_DSWMCFGHOLD2_SWM2_11_SHIFT          (11U)
/*! SWM2_11 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM2_11(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM2_11_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM2_11_MASK)

#define PMRC_DSWMCFGHOLD2_SWM3_00_MASK           (0x1000U)
#define PMRC_DSWMCFGHOLD2_SWM3_00_SHIFT          (12U)
/*! SWM3_00 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM3_00(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM3_00_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM3_00_MASK)

#define PMRC_DSWMCFGHOLD2_SWM3_01_MASK           (0x2000U)
#define PMRC_DSWMCFGHOLD2_SWM3_01_SHIFT          (13U)
/*! SWM3_01 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM3_01(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM3_01_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM3_01_MASK)

#define PMRC_DSWMCFGHOLD2_SWM3_02_MASK           (0x4000U)
#define PMRC_DSWMCFGHOLD2_SWM3_02_SHIFT          (14U)
/*! SWM3_02 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM3_02(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM3_02_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM3_02_MASK)

#define PMRC_DSWMCFGHOLD2_SWM3_03_MASK           (0x8000U)
#define PMRC_DSWMCFGHOLD2_SWM3_03_SHIFT          (15U)
/*! SWM3_03 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM3_03(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM3_03_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM3_03_MASK)

#define PMRC_DSWMCFGHOLD2_SWM3_04_MASK           (0x10000U)
#define PMRC_DSWMCFGHOLD2_SWM3_04_SHIFT          (16U)
/*! SWM3_04 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM3_04(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM3_04_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM3_04_MASK)

#define PMRC_DSWMCFGHOLD2_SWM3_05_MASK           (0x20000U)
#define PMRC_DSWMCFGHOLD2_SWM3_05_SHIFT          (17U)
/*! SWM3_05 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM3_05(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM3_05_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM3_05_MASK)

#define PMRC_DSWMCFGHOLD2_SWM3_06_MASK           (0x40000U)
#define PMRC_DSWMCFGHOLD2_SWM3_06_SHIFT          (18U)
/*! SWM3_06 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM3_06(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM3_06_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM3_06_MASK)

#define PMRC_DSWMCFGHOLD2_SWM3_07_MASK           (0x80000U)
#define PMRC_DSWMCFGHOLD2_SWM3_07_SHIFT          (19U)
/*! SWM3_07 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM3_07(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM3_07_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM3_07_MASK)

#define PMRC_DSWMCFGHOLD2_SWM3_08_MASK           (0x100000U)
#define PMRC_DSWMCFGHOLD2_SWM3_08_SHIFT          (20U)
/*! SWM3_08 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM3_08(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM3_08_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM3_08_MASK)

#define PMRC_DSWMCFGHOLD2_SWM3_09_MASK           (0x200000U)
#define PMRC_DSWMCFGHOLD2_SWM3_09_SHIFT          (21U)
/*! SWM3_09 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM3_09(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM3_09_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM3_09_MASK)

#define PMRC_DSWMCFGHOLD2_SWM3_10_MASK           (0x400000U)
#define PMRC_DSWMCFGHOLD2_SWM3_10_SHIFT          (22U)
/*! SWM3_10 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM3_10(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM3_10_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM3_10_MASK)

#define PMRC_DSWMCFGHOLD2_SWM3_11_MASK           (0x800000U)
#define PMRC_DSWMCFGHOLD2_SWM3_11_SHIFT          (23U)
/*! SWM3_11 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM3_11(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM3_11_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM3_11_MASK)

#define PMRC_DSWMCFGHOLD2_SWM3_12_MASK           (0x1000000U)
#define PMRC_DSWMCFGHOLD2_SWM3_12_SHIFT          (24U)
/*! SWM3_12 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM3_12(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM3_12_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM3_12_MASK)

#define PMRC_DSWMCFGHOLD2_SWM3_13_MASK           (0x2000000U)
#define PMRC_DSWMCFGHOLD2_SWM3_13_SHIFT          (25U)
/*! SWM3_13 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM3_13(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM3_13_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM3_13_MASK)

#define PMRC_DSWMCFGHOLD2_SWM3_14_MASK           (0x4000000U)
#define PMRC_DSWMCFGHOLD2_SWM3_14_SHIFT          (26U)
/*! SWM3_14 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM3_14(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM3_14_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM3_14_MASK)

#define PMRC_DSWMCFGHOLD2_SWM3_15_MASK           (0x8000000U)
#define PMRC_DSWMCFGHOLD2_SWM3_15_SHIFT          (27U)
/*! SWM3_15 - Enable/Disable configuration hold for dswm pin
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define PMRC_DSWMCFGHOLD2_SWM3_15(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_DSWMCFGHOLD2_SWM3_15_SHIFT)) & PMRC_DSWMCFGHOLD2_SWM3_15_MASK)
/*! @} */

/*! @name SHORTCFG - Persistent register.<br>ADSS short event configuration. */
/*! @{ */

#define PMRC_SHORTCFG_ENABLERSTONSHORT_MASK      (0x1U)
#define PMRC_SHORTCFG_ENABLERSTONSHORT_SHIFT     (0U)
/*! EnableRstOnShort - Enable cold reset generation in case of short event.
 *  0b0..No cold reset will be generated in case of short event
 *  0b1..Cold reset will be generated in case of short event
 */
#define PMRC_SHORTCFG_ENABLERSTONSHORT(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_SHORTCFG_ENABLERSTONSHORT_SHIFT)) & PMRC_SHORTCFG_ENABLERSTONSHORT_MASK)

#define PMRC_SHORTCFG_ENABLEHARDMUTE_MASK        (0x2U)
#define PMRC_SHORTCFG_ENABLEHARDMUTE_SHIFT       (1U)
/*! EnableHardMute - Enable generation of hard mute request toward the ADSS
 *  0b0..Generation of hard mute request is disabled
 *  0b1..Generation of hard mute request is enabled
 */
#define PMRC_SHORTCFG_ENABLEHARDMUTE(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_SHORTCFG_ENABLEHARDMUTE_SHIFT)) & PMRC_SHORTCFG_ENABLEHARDMUTE_MASK)
/*! @} */

/*! @name DCDCDIGCONTROL2 - Configure the VDIG DCDC. */
/*! @{ */

#define PMRC_DCDCDIGCONTROL2_CAPSEL_MASK         (0x3FU)
#define PMRC_DCDCDIGCONTROL2_CAPSEL_SHIFT        (0U)
/*! CapSel - Set the number of drive cap sections. Each bit controls 1 cap sections. Maximum 32 cap sections available. */
#define PMRC_DCDCDIGCONTROL2_CAPSEL(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGCONTROL2_CAPSEL_SHIFT)) & PMRC_DCDCDIGCONTROL2_CAPSEL_MASK)

#define PMRC_DCDCDIGCONTROL2_SETIBIAS_MASK       (0x3C0U)
#define PMRC_DCDCDIGCONTROL2_SETIBIAS_SHIFT      (6U)
/*! SetIbias - DC/DC Digital internal biasing setting:<br>0 : 76nA<br>8 : 227nA<br>15 : 360nA */
#define PMRC_DCDCDIGCONTROL2_SETIBIAS(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGCONTROL2_SETIBIAS_SHIFT)) & PMRC_DCDCDIGCONTROL2_SETIBIAS_MASK)

#define PMRC_DCDCDIGCONTROL2_SETVREF_MASK        (0x1FC00U)
#define PMRC_DCDCDIGCONTROL2_SETVREF_SHIFT       (10U)
/*! SetVref - Set reference voltage of 400mV: 0.2914V+SetVref*0.003328V */
#define PMRC_DCDCDIGCONTROL2_SETVREF(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGCONTROL2_SETVREF_SHIFT)) & PMRC_DCDCDIGCONTROL2_SETVREF_MASK)

#define PMRC_DCDCDIGCONTROL2_DELAYSEL_MASK       (0x60000U)
#define PMRC_DCDCDIGCONTROL2_DELAYSEL_SHIFT      (17U)
/*! DelaySel - Programmable delay between the 16 cap sections.<br>0 142ps, 1 173 ps, 2 222 ps, 3 324 ps */
#define PMRC_DCDCDIGCONTROL2_DELAYSEL(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCDIGCONTROL2_DELAYSEL_SHIFT)) & PMRC_DCDCDIGCONTROL2_DELAYSEL_MASK)
/*! @} */

/*! @name DCDCMEMCONTROL2 - Configure the VMEM DCDC. */
/*! @{ */

#define PMRC_DCDCMEMCONTROL2_CAPSEL_MASK         (0x3FU)
#define PMRC_DCDCMEMCONTROL2_CAPSEL_SHIFT        (0U)
/*! CapSel - Set the number of drive cap sections. Each bit controls 1 cap sections. Maximum 20 cap sections available. */
#define PMRC_DCDCMEMCONTROL2_CAPSEL(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMCONTROL2_CAPSEL_SHIFT)) & PMRC_DCDCMEMCONTROL2_CAPSEL_MASK)

#define PMRC_DCDCMEMCONTROL2_SETIBIAS_MASK       (0x3C0U)
#define PMRC_DCDCMEMCONTROL2_SETIBIAS_SHIFT      (6U)
/*! SetIbias - DC/DC Memory internal biasing setting:<br>0 : 76nA<br>8 : 227nA<br>15 : 360nA */
#define PMRC_DCDCMEMCONTROL2_SETIBIAS(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMCONTROL2_SETIBIAS_SHIFT)) & PMRC_DCDCMEMCONTROL2_SETIBIAS_MASK)

#define PMRC_DCDCMEMCONTROL2_SETVREF_MASK        (0x1FC00U)
#define PMRC_DCDCMEMCONTROL2_SETVREF_SHIFT       (10U)
/*! SetVref - Set reference voltage of 400mV: 0.2914V+SetVref*0.003328V */
#define PMRC_DCDCMEMCONTROL2_SETVREF(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMCONTROL2_SETVREF_SHIFT)) & PMRC_DCDCMEMCONTROL2_SETVREF_MASK)

#define PMRC_DCDCMEMCONTROL2_DELAYSEL_MASK       (0x60000U)
#define PMRC_DCDCMEMCONTROL2_DELAYSEL_SHIFT      (17U)
/*! DelaySel - Programmable delay between the 16 cap sections.<br>0 142ps, 1 173 ps, 2 222 ps, 3 324 ps */
#define PMRC_DCDCMEMCONTROL2_DELAYSEL(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMCONTROL2_DELAYSEL_SHIFT)) & PMRC_DCDCMEMCONTROL2_DELAYSEL_MASK)

#define PMRC_DCDCMEMCONTROL2_DEEPSLEEPONLDO_MASK (0x80000U)
#define PMRC_DCDCMEMCONTROL2_DEEPSLEEPONLDO_SHIFT (19U)
/*! DeepsleepOnLdo - Use memory LDO instead of memory DCDC during deep-sleep.
 *  0b0..Use memory DCDC
 *  0b1..Use memory LDO
 */
#define PMRC_DCDCMEMCONTROL2_DEEPSLEEPONLDO(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_DCDCMEMCONTROL2_DEEPSLEEPONLDO_SHIFT)) & PMRC_DCDCMEMCONTROL2_DEEPSLEEPONLDO_MASK)
/*! @} */

/*! @name FSMTIMERDSDELAY - Define the deep-sleep settling time */
/*! @{ */

#define PMRC_FSMTIMERDSDELAY_VALUE_MASK          (0x1FFFU)
#define PMRC_FSMTIMERDSDELAY_VALUE_SHIFT         (0U)
/*! Value - Tds (Deep-sleep settling time) in LF-oscillator clock periods (an extra 2 clock cycles is added to the total count) */
#define PMRC_FSMTIMERDSDELAY_VALUE(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_FSMTIMERDSDELAY_VALUE_SHIFT)) & PMRC_FSMTIMERDSDELAY_VALUE_MASK)
/*! @} */

/*! @name INTCLRENABLE - Interrupt clear enable command */
/*! @{ */

#define PMRC_INTCLRENABLE_LFTIMERIRQ_MASK        (0x1U)
#define PMRC_INTCLRENABLE_LFTIMERIRQ_SHIFT       (0U)
/*! LfTimerIrq - LF-Timer irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_LFTIMERIRQ(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_LFTIMERIRQ_SHIFT)) & PMRC_INTCLRENABLE_LFTIMERIRQ_MASK)

#define PMRC_INTCLRENABLE_SHUTDOWNIRQ_MASK       (0x2U)
#define PMRC_INTCLRENABLE_SHUTDOWNIRQ_SHIFT      (1U)
/*! ShutdownIrq - Shutdown irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_SHUTDOWNIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_SHUTDOWNIRQ_SHIFT)) & PMRC_INTCLRENABLE_SHUTDOWNIRQ_MASK)

#define PMRC_INTCLRENABLE_CONFIGUREIRQ_MASK      (0x4U)
#define PMRC_INTCLRENABLE_CONFIGUREIRQ_SHIFT     (2U)
/*! ConfigureIrq - Configure irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_CONFIGUREIRQ(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_CONFIGUREIRQ_SHIFT)) & PMRC_INTCLRENABLE_CONFIGUREIRQ_MASK)

#define PMRC_INTCLRENABLE_DCDCDIGRATIOUPIRQ_MASK (0x8U)
#define PMRC_INTCLRENABLE_DCDCDIGRATIOUPIRQ_SHIFT (3U)
/*! DcdcDigRatioUpIrq - DcdcDigRatioUp irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_DCDCDIGRATIOUPIRQ(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_DCDCDIGRATIOUPIRQ_SHIFT)) & PMRC_INTCLRENABLE_DCDCDIGRATIOUPIRQ_MASK)

#define PMRC_INTCLRENABLE_DCDCMEMRATIOUPIRQ_MASK (0x10U)
#define PMRC_INTCLRENABLE_DCDCMEMRATIOUPIRQ_SHIFT (4U)
/*! DcdcMemRatioUpIrq - DcdcMemRatioUp irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_DCDCMEMRATIOUPIRQ(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_DCDCMEMRATIOUPIRQ_SHIFT)) & PMRC_INTCLRENABLE_DCDCMEMRATIOUPIRQ_MASK)

#define PMRC_INTCLRENABLE_DCDCDIGRATIODOWNIRQ_MASK (0x20U)
#define PMRC_INTCLRENABLE_DCDCDIGRATIODOWNIRQ_SHIFT (5U)
/*! DcdcDigRatioDownIrq - DcdcDigRatioDown irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_DCDCDIGRATIODOWNIRQ(x) (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_DCDCDIGRATIODOWNIRQ_SHIFT)) & PMRC_INTCLRENABLE_DCDCDIGRATIODOWNIRQ_MASK)

#define PMRC_INTCLRENABLE_DCDCMEMRATIODOWNIRQ_MASK (0x40U)
#define PMRC_INTCLRENABLE_DCDCMEMRATIODOWNIRQ_SHIFT (6U)
/*! DcdcMemRatioDownIrq - DcdcMemRatioDown irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_DCDCMEMRATIODOWNIRQ(x) (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_DCDCMEMRATIODOWNIRQ_SHIFT)) & PMRC_INTCLRENABLE_DCDCMEMRATIODOWNIRQ_MASK)

#define PMRC_INTCLRENABLE_DCDCDIGMPORATIOUPIRQ_MASK (0x80U)
#define PMRC_INTCLRENABLE_DCDCDIGMPORATIOUPIRQ_SHIFT (7U)
/*! DcdcDigMpoRatioUpIrq - DcdcDigMpoRatioUp irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_DCDCDIGMPORATIOUPIRQ(x) (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_DCDCDIGMPORATIOUPIRQ_SHIFT)) & PMRC_INTCLRENABLE_DCDCDIGMPORATIOUPIRQ_MASK)

#define PMRC_INTCLRENABLE_DCDCMEMMPORATIOUPIRQ_MASK (0x100U)
#define PMRC_INTCLRENABLE_DCDCMEMMPORATIOUPIRQ_SHIFT (8U)
/*! DcdcMemMpoRatioUpIrq - DcdcMemMpoRatioUp irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_DCDCMEMMPORATIOUPIRQ(x) (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_DCDCMEMMPORATIOUPIRQ_SHIFT)) & PMRC_INTCLRENABLE_DCDCMEMMPORATIOUPIRQ_MASK)

#define PMRC_INTCLRENABLE_VDDDIGNOTOKIRQ_MASK    (0x200U)
#define PMRC_INTCLRENABLE_VDDDIGNOTOKIRQ_SHIFT   (9U)
/*! VddDigNotOkIrq - VddDigNotOk irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_VDDDIGNOTOKIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_VDDDIGNOTOKIRQ_SHIFT)) & PMRC_INTCLRENABLE_VDDDIGNOTOKIRQ_MASK)

#define PMRC_INTCLRENABLE_VDDMEMLDONOTOKIRQ_MASK (0x400U)
#define PMRC_INTCLRENABLE_VDDMEMLDONOTOKIRQ_SHIFT (10U)
/*! VddMemLdoNotOkIrq - VddMemLdoNotOk irq
 *  0b0..No effect
 *  0b1..Clear enable variableadc_enable
 */
#define PMRC_INTCLRENABLE_VDDMEMLDONOTOKIRQ(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_VDDMEMLDONOTOKIRQ_SHIFT)) & PMRC_INTCLRENABLE_VDDMEMLDONOTOKIRQ_MASK)

#define PMRC_INTCLRENABLE_VDDNOTOKIRQ_MASK       (0x800U)
#define PMRC_INTCLRENABLE_VDDNOTOKIRQ_SHIFT      (11U)
/*! VddNotOkIrq - VddNotOk irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_VDDNOTOKIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_VDDNOTOKIRQ_SHIFT)) & PMRC_INTCLRENABLE_VDDNOTOKIRQ_MASK)

#define PMRC_INTCLRENABLE_ANAGDETVMAINIRQ_MASK   (0x1000U)
#define PMRC_INTCLRENABLE_ANAGDETVMAINIRQ_SHIFT  (12U)
/*! AnaGdetVmainIrq - AnaGdetVmain irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_ANAGDETVMAINIRQ(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_ANAGDETVMAINIRQ_SHIFT)) & PMRC_INTCLRENABLE_ANAGDETVMAINIRQ_MASK)

#define PMRC_INTCLRENABLE_VDDANANOTOKIRQ_MASK    (0x2000U)
#define PMRC_INTCLRENABLE_VDDANANOTOKIRQ_SHIFT   (13U)
/*! VddAnaNotOkIrq - VddAnaNotOk irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_VDDANANOTOKIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_VDDANANOTOKIRQ_SHIFT)) & PMRC_INTCLRENABLE_VDDANANOTOKIRQ_MASK)

#define PMRC_INTCLRENABLE_VDDCGUNOTOKIRQ_MASK    (0x4000U)
#define PMRC_INTCLRENABLE_VDDCGUNOTOKIRQ_SHIFT   (14U)
/*! VddCguNotOkIrq - VddCguNotOk irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_VDDCGUNOTOKIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_VDDCGUNOTOKIRQ_SHIFT)) & PMRC_INTCLRENABLE_VDDCGUNOTOKIRQ_MASK)

#define PMRC_INTCLRENABLE_FSMTIMERIRQ_MASK       (0x8000U)
#define PMRC_INTCLRENABLE_FSMTIMERIRQ_SHIFT      (15U)
/*! FsmTimerIrq - FSM-Timer irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_FSMTIMERIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_FSMTIMERIRQ_SHIFT)) & PMRC_INTCLRENABLE_FSMTIMERIRQ_MASK)

#define PMRC_INTCLRENABLE_ZEROIZATIONIRQ_MASK    (0x10000U)
#define PMRC_INTCLRENABLE_ZEROIZATIONIRQ_SHIFT   (16U)
/*! ZeroizationIrq - Zeroization irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_ZEROIZATIONIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_ZEROIZATIONIRQ_SHIFT)) & PMRC_INTCLRENABLE_ZEROIZATIONIRQ_MASK)

#define PMRC_INTCLRENABLE_TAMPEREVENTIRQ_MASK    (0x20000U)
#define PMRC_INTCLRENABLE_TAMPEREVENTIRQ_SHIFT   (17U)
/*! TamperEventIrq - TamperEvent irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_TAMPEREVENTIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_TAMPEREVENTIRQ_SHIFT)) & PMRC_INTCLRENABLE_TAMPEREVENTIRQ_MASK)

#define PMRC_INTCLRENABLE_DSWAKEUPIRQ_MASK       (0x40000U)
#define PMRC_INTCLRENABLE_DSWAKEUPIRQ_SHIFT      (18U)
/*! DsWakeupIrq - DsWakeup irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_DSWAKEUPIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_DSWAKEUPIRQ_SHIFT)) & PMRC_INTCLRENABLE_DSWAKEUPIRQ_MASK)

#define PMRC_INTCLRENABLE_COSMICPROTIRQ_MASK     (0x80000U)
#define PMRC_INTCLRENABLE_COSMICPROTIRQ_SHIFT    (19U)
/*! CosmicProtIrq - Cosmic ray protection irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_COSMICPROTIRQ(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_COSMICPROTIRQ_SHIFT)) & PMRC_INTCLRENABLE_COSMICPROTIRQ_MASK)

#define PMRC_INTCLRENABLE_VDDMEMDCDCNOTOKIRQ_MASK (0x100000U)
#define PMRC_INTCLRENABLE_VDDMEMDCDCNOTOKIRQ_SHIFT (20U)
/*! VddMemDcdcNotOkIrq - VddMemDcdcNotOk irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_VDDMEMDCDCNOTOKIRQ(x)  (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_VDDMEMDCDCNOTOKIRQ_SHIFT)) & PMRC_INTCLRENABLE_VDDMEMDCDCNOTOKIRQ_MASK)

#define PMRC_INTCLRENABLE_ANAGDETVDIGIRQ_MASK    (0x200000U)
#define PMRC_INTCLRENABLE_ANAGDETVDIGIRQ_SHIFT   (21U)
/*! AnaGdetVdigIrq - AnaGdetVdig irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_ANAGDETVDIGIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_ANAGDETVDIGIRQ_SHIFT)) & PMRC_INTCLRENABLE_ANAGDETVDIGIRQ_MASK)

#define PMRC_INTCLRENABLE_ANAGDETVMEMIRQ_MASK    (0x400000U)
#define PMRC_INTCLRENABLE_ANAGDETVMEMIRQ_SHIFT   (22U)
/*! AnaGdetVmemIrq - AnaGdetVmem irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_ANAGDETVMEMIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_ANAGDETVMEMIRQ_SHIFT)) & PMRC_INTCLRENABLE_ANAGDETVMEMIRQ_MASK)

#define PMRC_INTCLRENABLE_SARADCIRQ_MASK         (0x800000U)
#define PMRC_INTCLRENABLE_SARADCIRQ_SHIFT        (23U)
/*! SarAdcIrq - SarAdc irq
 *  0b0..No effect
 *  0b1..Clear enable variable
 */
#define PMRC_INTCLRENABLE_SARADCIRQ(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRENABLE_SARADCIRQ_SHIFT)) & PMRC_INTCLRENABLE_SARADCIRQ_MASK)
/*! @} */

/*! @name INTSETENABLE - Interrupt set enable command */
/*! @{ */

#define PMRC_INTSETENABLE_LFTIMERIRQ_MASK        (0x1U)
#define PMRC_INTSETENABLE_LFTIMERIRQ_SHIFT       (0U)
/*! LfTimerIrq - LF-Timer irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_LFTIMERIRQ(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_LFTIMERIRQ_SHIFT)) & PMRC_INTSETENABLE_LFTIMERIRQ_MASK)

#define PMRC_INTSETENABLE_SHUTDOWNIRQ_MASK       (0x2U)
#define PMRC_INTSETENABLE_SHUTDOWNIRQ_SHIFT      (1U)
/*! ShutdownIrq - Shutdown irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_SHUTDOWNIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_SHUTDOWNIRQ_SHIFT)) & PMRC_INTSETENABLE_SHUTDOWNIRQ_MASK)

#define PMRC_INTSETENABLE_CONFIGUREIRQ_MASK      (0x4U)
#define PMRC_INTSETENABLE_CONFIGUREIRQ_SHIFT     (2U)
/*! ConfigureIrq - Configure irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_CONFIGUREIRQ(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_CONFIGUREIRQ_SHIFT)) & PMRC_INTSETENABLE_CONFIGUREIRQ_MASK)

#define PMRC_INTSETENABLE_DCDCDIGRATIOUPIRQ_MASK (0x8U)
#define PMRC_INTSETENABLE_DCDCDIGRATIOUPIRQ_SHIFT (3U)
/*! DcdcDigRatioUpIrq - DcdcDigRatioUp irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_DCDCDIGRATIOUPIRQ(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_DCDCDIGRATIOUPIRQ_SHIFT)) & PMRC_INTSETENABLE_DCDCDIGRATIOUPIRQ_MASK)

#define PMRC_INTSETENABLE_DCDCMEMRATIOUPIRQ_MASK (0x10U)
#define PMRC_INTSETENABLE_DCDCMEMRATIOUPIRQ_SHIFT (4U)
/*! DcdcMemRatioUpIrq - DcdcMemRatioUp irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_DCDCMEMRATIOUPIRQ(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_DCDCMEMRATIOUPIRQ_SHIFT)) & PMRC_INTSETENABLE_DCDCMEMRATIOUPIRQ_MASK)

#define PMRC_INTSETENABLE_DCDCDIGRATIODOWNIRQ_MASK (0x20U)
#define PMRC_INTSETENABLE_DCDCDIGRATIODOWNIRQ_SHIFT (5U)
/*! DcdcDigRatioDownIrq - DcdcDigRatioDown irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_DCDCDIGRATIODOWNIRQ(x) (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_DCDCDIGRATIODOWNIRQ_SHIFT)) & PMRC_INTSETENABLE_DCDCDIGRATIODOWNIRQ_MASK)

#define PMRC_INTSETENABLE_DCDCMEMRATIODOWNIRQ_MASK (0x40U)
#define PMRC_INTSETENABLE_DCDCMEMRATIODOWNIRQ_SHIFT (6U)
/*! DcdcMemRatioDownIrq - DcdcMemRatioDown irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_DCDCMEMRATIODOWNIRQ(x) (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_DCDCMEMRATIODOWNIRQ_SHIFT)) & PMRC_INTSETENABLE_DCDCMEMRATIODOWNIRQ_MASK)

#define PMRC_INTSETENABLE_DCDCDIGMPORATIOUPIRQ_MASK (0x80U)
#define PMRC_INTSETENABLE_DCDCDIGMPORATIOUPIRQ_SHIFT (7U)
/*! DcdcDigMpoRatioUpIrq - DcdcDigMpoRatioUp irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_DCDCDIGMPORATIOUPIRQ(x) (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_DCDCDIGMPORATIOUPIRQ_SHIFT)) & PMRC_INTSETENABLE_DCDCDIGMPORATIOUPIRQ_MASK)

#define PMRC_INTSETENABLE_DCDCMEMMPORATIOUPIRQ_MASK (0x100U)
#define PMRC_INTSETENABLE_DCDCMEMMPORATIOUPIRQ_SHIFT (8U)
/*! DcdcMemMpoRatioUpIrq - DcdcMemMpoRatioUp irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_DCDCMEMMPORATIOUPIRQ(x) (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_DCDCMEMMPORATIOUPIRQ_SHIFT)) & PMRC_INTSETENABLE_DCDCMEMMPORATIOUPIRQ_MASK)

#define PMRC_INTSETENABLE_VDDDIGNOTOKIRQ_MASK    (0x200U)
#define PMRC_INTSETENABLE_VDDDIGNOTOKIRQ_SHIFT   (9U)
/*! VddDigNotOkIrq - VddDigNotOk irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_VDDDIGNOTOKIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_VDDDIGNOTOKIRQ_SHIFT)) & PMRC_INTSETENABLE_VDDDIGNOTOKIRQ_MASK)

#define PMRC_INTSETENABLE_VDDMEMLDONOTOKIRQ_MASK (0x400U)
#define PMRC_INTSETENABLE_VDDMEMLDONOTOKIRQ_SHIFT (10U)
/*! VddMemLdoNotOkIrq - VddMemLdoNotOk irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_VDDMEMLDONOTOKIRQ(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_VDDMEMLDONOTOKIRQ_SHIFT)) & PMRC_INTSETENABLE_VDDMEMLDONOTOKIRQ_MASK)

#define PMRC_INTSETENABLE_VDDNOTOKIRQ_MASK       (0x800U)
#define PMRC_INTSETENABLE_VDDNOTOKIRQ_SHIFT      (11U)
/*! VddNotOkIrq - VddNotOk irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_VDDNOTOKIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_VDDNOTOKIRQ_SHIFT)) & PMRC_INTSETENABLE_VDDNOTOKIRQ_MASK)

#define PMRC_INTSETENABLE_ANAGDETVMAINIRQ_MASK   (0x1000U)
#define PMRC_INTSETENABLE_ANAGDETVMAINIRQ_SHIFT  (12U)
/*! AnaGdetVmainIrq - AnaGdetVmain irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_ANAGDETVMAINIRQ(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_ANAGDETVMAINIRQ_SHIFT)) & PMRC_INTSETENABLE_ANAGDETVMAINIRQ_MASK)

#define PMRC_INTSETENABLE_VDDANANOTOKIRQ_MASK    (0x2000U)
#define PMRC_INTSETENABLE_VDDANANOTOKIRQ_SHIFT   (13U)
/*! VddAnaNotOkIrq - VddAnaNotOk irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_VDDANANOTOKIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_VDDANANOTOKIRQ_SHIFT)) & PMRC_INTSETENABLE_VDDANANOTOKIRQ_MASK)

#define PMRC_INTSETENABLE_VDDCGUNOTOKIRQ_MASK    (0x4000U)
#define PMRC_INTSETENABLE_VDDCGUNOTOKIRQ_SHIFT   (14U)
/*! VddCguNotOkIrq - VddCguNotOk irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_VDDCGUNOTOKIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_VDDCGUNOTOKIRQ_SHIFT)) & PMRC_INTSETENABLE_VDDCGUNOTOKIRQ_MASK)

#define PMRC_INTSETENABLE_FSMTIMERIRQ_MASK       (0x8000U)
#define PMRC_INTSETENABLE_FSMTIMERIRQ_SHIFT      (15U)
/*! FsmTimerIrq - FSM-Timer irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_FSMTIMERIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_FSMTIMERIRQ_SHIFT)) & PMRC_INTSETENABLE_FSMTIMERIRQ_MASK)

#define PMRC_INTSETENABLE_ZEROIZATIONIRQ_MASK    (0x10000U)
#define PMRC_INTSETENABLE_ZEROIZATIONIRQ_SHIFT   (16U)
/*! ZeroizationIrq - Zeroization irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_ZEROIZATIONIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_ZEROIZATIONIRQ_SHIFT)) & PMRC_INTSETENABLE_ZEROIZATIONIRQ_MASK)

#define PMRC_INTSETENABLE_TAMPEREVENTIRQ_MASK    (0x20000U)
#define PMRC_INTSETENABLE_TAMPEREVENTIRQ_SHIFT   (17U)
/*! TamperEventIrq - TamperEvent irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_TAMPEREVENTIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_TAMPEREVENTIRQ_SHIFT)) & PMRC_INTSETENABLE_TAMPEREVENTIRQ_MASK)

#define PMRC_INTSETENABLE_DSWAKEUPIRQ_MASK       (0x40000U)
#define PMRC_INTSETENABLE_DSWAKEUPIRQ_SHIFT      (18U)
/*! DsWakeupIrq - DsWakeup irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_DSWAKEUPIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_DSWAKEUPIRQ_SHIFT)) & PMRC_INTSETENABLE_DSWAKEUPIRQ_MASK)

#define PMRC_INTSETENABLE_COSMICPROTIRQ_MASK     (0x80000U)
#define PMRC_INTSETENABLE_COSMICPROTIRQ_SHIFT    (19U)
/*! CosmicProtIrq - Cosmic ray protection irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_COSMICPROTIRQ(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_COSMICPROTIRQ_SHIFT)) & PMRC_INTSETENABLE_COSMICPROTIRQ_MASK)

#define PMRC_INTSETENABLE_VDDMEMDCDCNOTOKIRQ_MASK (0x100000U)
#define PMRC_INTSETENABLE_VDDMEMDCDCNOTOKIRQ_SHIFT (20U)
/*! VddMemDcdcNotOkIrq - VddMemDcdcNotOk irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_VDDMEMDCDCNOTOKIRQ(x)  (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_VDDMEMDCDCNOTOKIRQ_SHIFT)) & PMRC_INTSETENABLE_VDDMEMDCDCNOTOKIRQ_MASK)

#define PMRC_INTSETENABLE_ANAGDETVDIGIRQ_MASK    (0x200000U)
#define PMRC_INTSETENABLE_ANAGDETVDIGIRQ_SHIFT   (21U)
/*! AnaGdetVdigIrq - AnaGdetVdig irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_ANAGDETVDIGIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_ANAGDETVDIGIRQ_SHIFT)) & PMRC_INTSETENABLE_ANAGDETVDIGIRQ_MASK)

#define PMRC_INTSETENABLE_ANAGDETVMEMIRQ_MASK    (0x400000U)
#define PMRC_INTSETENABLE_ANAGDETVMEMIRQ_SHIFT   (22U)
/*! AnaGdetVmemIrq - AnaGdetVmem irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_ANAGDETVMEMIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_ANAGDETVMEMIRQ_SHIFT)) & PMRC_INTSETENABLE_ANAGDETVMEMIRQ_MASK)

#define PMRC_INTSETENABLE_SARADCIRQ_MASK         (0x800000U)
#define PMRC_INTSETENABLE_SARADCIRQ_SHIFT        (23U)
/*! SarAdcIrq - SarAdc irq
 *  0b0..No effect
 *  0b1..set enable variable
 */
#define PMRC_INTSETENABLE_SARADCIRQ(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETENABLE_SARADCIRQ_SHIFT)) & PMRC_INTSETENABLE_SARADCIRQ_MASK)
/*! @} */

/*! @name INTSTATUS - Interrupt status register */
/*! @{ */

#define PMRC_INTSTATUS_LFTIMERIRQ_MASK           (0x1U)
#define PMRC_INTSTATUS_LFTIMERIRQ_SHIFT          (0U)
/*! LfTimerIrq - LF-Timer interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_LFTIMERIRQ(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_LFTIMERIRQ_SHIFT)) & PMRC_INTSTATUS_LFTIMERIRQ_MASK)

#define PMRC_INTSTATUS_SHUTDOWNIRQ_MASK          (0x2U)
#define PMRC_INTSTATUS_SHUTDOWNIRQ_SHIFT         (1U)
/*! ShutdownIrq - Shutdown interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_SHUTDOWNIRQ(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_SHUTDOWNIRQ_SHIFT)) & PMRC_INTSTATUS_SHUTDOWNIRQ_MASK)

#define PMRC_INTSTATUS_CONFIGUREIRQ_MASK         (0x4U)
#define PMRC_INTSTATUS_CONFIGUREIRQ_SHIFT        (2U)
/*! ConfigureIrq - Configure interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_CONFIGUREIRQ(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_CONFIGUREIRQ_SHIFT)) & PMRC_INTSTATUS_CONFIGUREIRQ_MASK)

#define PMRC_INTSTATUS_DCDCDIGRATIOUPIRQ_MASK    (0x8U)
#define PMRC_INTSTATUS_DCDCDIGRATIOUPIRQ_SHIFT   (3U)
/*! DcdcDigRatioUpIrq - DcdcDigRatioUp interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_DCDCDIGRATIOUPIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_DCDCDIGRATIOUPIRQ_SHIFT)) & PMRC_INTSTATUS_DCDCDIGRATIOUPIRQ_MASK)

#define PMRC_INTSTATUS_DCDCMEMRATIOUPIRQ_MASK    (0x10U)
#define PMRC_INTSTATUS_DCDCMEMRATIOUPIRQ_SHIFT   (4U)
/*! DcdcMemRatioUpIrq - DcdcMemRatioUp interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_DCDCMEMRATIOUPIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_DCDCMEMRATIOUPIRQ_SHIFT)) & PMRC_INTSTATUS_DCDCMEMRATIOUPIRQ_MASK)

#define PMRC_INTSTATUS_DCDCDIGRATIODOWNIRQ_MASK  (0x20U)
#define PMRC_INTSTATUS_DCDCDIGRATIODOWNIRQ_SHIFT (5U)
/*! DcdcDigRatioDownIrq - DcdcDigRatioDown interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_DCDCDIGRATIODOWNIRQ(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_DCDCDIGRATIODOWNIRQ_SHIFT)) & PMRC_INTSTATUS_DCDCDIGRATIODOWNIRQ_MASK)

#define PMRC_INTSTATUS_DCDCMEMRATIODOWNIRQ_MASK  (0x40U)
#define PMRC_INTSTATUS_DCDCMEMRATIODOWNIRQ_SHIFT (6U)
/*! DcdcMemRatioDownIrq - DcdcMemRatioDown interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_DCDCMEMRATIODOWNIRQ(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_DCDCMEMRATIODOWNIRQ_SHIFT)) & PMRC_INTSTATUS_DCDCMEMRATIODOWNIRQ_MASK)

#define PMRC_INTSTATUS_DCDCDIGMPORATIOUPIRQ_MASK (0x80U)
#define PMRC_INTSTATUS_DCDCDIGMPORATIOUPIRQ_SHIFT (7U)
/*! DcdcDigMpoRatioUpIrq - DcdcDigMpoRatioUp interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_DCDCDIGMPORATIOUPIRQ(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_DCDCDIGMPORATIOUPIRQ_SHIFT)) & PMRC_INTSTATUS_DCDCDIGMPORATIOUPIRQ_MASK)

#define PMRC_INTSTATUS_DCDCMEMMPORATIOUPIRQ_MASK (0x100U)
#define PMRC_INTSTATUS_DCDCMEMMPORATIOUPIRQ_SHIFT (8U)
/*! DcdcMemMpoRatioUpIrq - DcdcMemMpoRatioUp interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_DCDCMEMMPORATIOUPIRQ(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_DCDCMEMMPORATIOUPIRQ_SHIFT)) & PMRC_INTSTATUS_DCDCMEMMPORATIOUPIRQ_MASK)

#define PMRC_INTSTATUS_VDDDIGNOTOKIRQ_MASK       (0x200U)
#define PMRC_INTSTATUS_VDDDIGNOTOKIRQ_SHIFT      (9U)
/*! VddDigNotOkIrq - VddDigNotOk interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_VDDDIGNOTOKIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_VDDDIGNOTOKIRQ_SHIFT)) & PMRC_INTSTATUS_VDDDIGNOTOKIRQ_MASK)

#define PMRC_INTSTATUS_VDDMEMLDONOTOKIRQ_MASK    (0x400U)
#define PMRC_INTSTATUS_VDDMEMLDONOTOKIRQ_SHIFT   (10U)
/*! VddMemLdoNotOkIrq - VddMemLdoNotOk interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_VDDMEMLDONOTOKIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_VDDMEMLDONOTOKIRQ_SHIFT)) & PMRC_INTSTATUS_VDDMEMLDONOTOKIRQ_MASK)

#define PMRC_INTSTATUS_VDDNOTOKIRQ_MASK          (0x800U)
#define PMRC_INTSTATUS_VDDNOTOKIRQ_SHIFT         (11U)
/*! VddNotOkIrq - VddNotOk interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_VDDNOTOKIRQ(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_VDDNOTOKIRQ_SHIFT)) & PMRC_INTSTATUS_VDDNOTOKIRQ_MASK)

#define PMRC_INTSTATUS_ANAGDETVMAINIRQ_MASK      (0x1000U)
#define PMRC_INTSTATUS_ANAGDETVMAINIRQ_SHIFT     (12U)
/*! AnaGdetVmainIrq - AnaGdetVmain interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_ANAGDETVMAINIRQ(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_ANAGDETVMAINIRQ_SHIFT)) & PMRC_INTSTATUS_ANAGDETVMAINIRQ_MASK)

#define PMRC_INTSTATUS_VDDANANOTOKIRQ_MASK       (0x2000U)
#define PMRC_INTSTATUS_VDDANANOTOKIRQ_SHIFT      (13U)
/*! VddAnaNotOkIrq - VddAnaNotOk interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_VDDANANOTOKIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_VDDANANOTOKIRQ_SHIFT)) & PMRC_INTSTATUS_VDDANANOTOKIRQ_MASK)

#define PMRC_INTSTATUS_VDDCGUNOTOKIRQ_MASK       (0x4000U)
#define PMRC_INTSTATUS_VDDCGUNOTOKIRQ_SHIFT      (14U)
/*! VddCguNotOkIrq - VddCguNotOk interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_VDDCGUNOTOKIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_VDDCGUNOTOKIRQ_SHIFT)) & PMRC_INTSTATUS_VDDCGUNOTOKIRQ_MASK)

#define PMRC_INTSTATUS_FSMTIMERIRQ_MASK          (0x8000U)
#define PMRC_INTSTATUS_FSMTIMERIRQ_SHIFT         (15U)
/*! FsmTimerIrq - FSM-Timer interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_FSMTIMERIRQ(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_FSMTIMERIRQ_SHIFT)) & PMRC_INTSTATUS_FSMTIMERIRQ_MASK)

#define PMRC_INTSTATUS_ZEROIZATIONIRQ_MASK       (0x10000U)
#define PMRC_INTSTATUS_ZEROIZATIONIRQ_SHIFT      (16U)
/*! ZeroizationIrq - Zeroization interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_ZEROIZATIONIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_ZEROIZATIONIRQ_SHIFT)) & PMRC_INTSTATUS_ZEROIZATIONIRQ_MASK)

#define PMRC_INTSTATUS_TAMPEREVENTIRQ_MASK       (0x20000U)
#define PMRC_INTSTATUS_TAMPEREVENTIRQ_SHIFT      (17U)
/*! TamperEventIrq - TamperEvent interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_TAMPEREVENTIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_TAMPEREVENTIRQ_SHIFT)) & PMRC_INTSTATUS_TAMPEREVENTIRQ_MASK)

#define PMRC_INTSTATUS_DSWAKEUPIRQ_MASK          (0x40000U)
#define PMRC_INTSTATUS_DSWAKEUPIRQ_SHIFT         (18U)
/*! DsWakeupIrq - DsWakeup interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_DSWAKEUPIRQ(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_DSWAKEUPIRQ_SHIFT)) & PMRC_INTSTATUS_DSWAKEUPIRQ_MASK)

#define PMRC_INTSTATUS_COSMICPROTIRQ_MASK        (0x80000U)
#define PMRC_INTSTATUS_COSMICPROTIRQ_SHIFT       (19U)
/*! CosmicProtIrq - Cosmic ray protection interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_COSMICPROTIRQ(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_COSMICPROTIRQ_SHIFT)) & PMRC_INTSTATUS_COSMICPROTIRQ_MASK)

#define PMRC_INTSTATUS_VDDMEMDCDCNOTOKIRQ_MASK   (0x100000U)
#define PMRC_INTSTATUS_VDDMEMDCDCNOTOKIRQ_SHIFT  (20U)
/*! VddMemDcdcNotOkIrq - VddMemDcdcNotOk interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_VDDMEMDCDCNOTOKIRQ(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_VDDMEMDCDCNOTOKIRQ_SHIFT)) & PMRC_INTSTATUS_VDDMEMDCDCNOTOKIRQ_MASK)

#define PMRC_INTSTATUS_ANAGDETVDIGIRQ_MASK       (0x200000U)
#define PMRC_INTSTATUS_ANAGDETVDIGIRQ_SHIFT      (21U)
/*! AnaGdetVdigIrq - AnaGdetVdig interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_ANAGDETVDIGIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_ANAGDETVDIGIRQ_SHIFT)) & PMRC_INTSTATUS_ANAGDETVDIGIRQ_MASK)

#define PMRC_INTSTATUS_ANAGDETVMEMIRQ_MASK       (0x400000U)
#define PMRC_INTSTATUS_ANAGDETVMEMIRQ_SHIFT      (22U)
/*! AnaGdetVmemIrq - AnaGdetVmem interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_ANAGDETVMEMIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_ANAGDETVMEMIRQ_SHIFT)) & PMRC_INTSTATUS_ANAGDETVMEMIRQ_MASK)

#define PMRC_INTSTATUS_SARADCIRQ_MASK            (0x800000U)
#define PMRC_INTSTATUS_SARADCIRQ_SHIFT           (23U)
/*! SarAdcIrq - SarAdc interrupt request
 *  0b0..no request for interrupt
 *  0b1..request for interrupt service
 */
#define PMRC_INTSTATUS_SARADCIRQ(x)              (((uint32_t)(((uint32_t)(x)) << PMRC_INTSTATUS_SARADCIRQ_SHIFT)) & PMRC_INTSTATUS_SARADCIRQ_MASK)
/*! @} */

/*! @name INTENABLE - Interrupt enable register */
/*! @{ */

#define PMRC_INTENABLE_LFTIMERIRQ_MASK           (0x1U)
#define PMRC_INTENABLE_LFTIMERIRQ_SHIFT          (0U)
/*! LfTimerIrq - LF-Timer interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_LFTIMERIRQ(x)             (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_LFTIMERIRQ_SHIFT)) & PMRC_INTENABLE_LFTIMERIRQ_MASK)

#define PMRC_INTENABLE_SHUTDOWNIRQ_MASK          (0x2U)
#define PMRC_INTENABLE_SHUTDOWNIRQ_SHIFT         (1U)
/*! ShutdownIrq - Shutdown interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_SHUTDOWNIRQ(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_SHUTDOWNIRQ_SHIFT)) & PMRC_INTENABLE_SHUTDOWNIRQ_MASK)

#define PMRC_INTENABLE_CONFIGUREIRQ_MASK         (0x4U)
#define PMRC_INTENABLE_CONFIGUREIRQ_SHIFT        (2U)
/*! ConfigureIrq - Configure interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_CONFIGUREIRQ(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_CONFIGUREIRQ_SHIFT)) & PMRC_INTENABLE_CONFIGUREIRQ_MASK)

#define PMRC_INTENABLE_DCDCDIGRATIOUPIRQ_MASK    (0x8U)
#define PMRC_INTENABLE_DCDCDIGRATIOUPIRQ_SHIFT   (3U)
/*! DcdcDigRatioUpIrq - DcdcDigRatioUp interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_DCDCDIGRATIOUPIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_DCDCDIGRATIOUPIRQ_SHIFT)) & PMRC_INTENABLE_DCDCDIGRATIOUPIRQ_MASK)

#define PMRC_INTENABLE_DCDCMEMRATIOUPIRQ_MASK    (0x10U)
#define PMRC_INTENABLE_DCDCMEMRATIOUPIRQ_SHIFT   (4U)
/*! DcdcMemRatioUpIrq - DcdcMemRatioUp interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_DCDCMEMRATIOUPIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_DCDCMEMRATIOUPIRQ_SHIFT)) & PMRC_INTENABLE_DCDCMEMRATIOUPIRQ_MASK)

#define PMRC_INTENABLE_DCDCDIGRATIODOWNIRQ_MASK  (0x20U)
#define PMRC_INTENABLE_DCDCDIGRATIODOWNIRQ_SHIFT (5U)
/*! DcdcDigRatioDownIrq - DcdcDigRatioDown interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_DCDCDIGRATIODOWNIRQ(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_DCDCDIGRATIODOWNIRQ_SHIFT)) & PMRC_INTENABLE_DCDCDIGRATIODOWNIRQ_MASK)

#define PMRC_INTENABLE_DCDCMEMRATIODOWNIRQ_MASK  (0x40U)
#define PMRC_INTENABLE_DCDCMEMRATIODOWNIRQ_SHIFT (6U)
/*! DcdcMemRatioDownIrq - DcdcMemRatioDown interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_DCDCMEMRATIODOWNIRQ(x)    (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_DCDCMEMRATIODOWNIRQ_SHIFT)) & PMRC_INTENABLE_DCDCMEMRATIODOWNIRQ_MASK)

#define PMRC_INTENABLE_DCDCDIGMPORATIOUPIRQ_MASK (0x80U)
#define PMRC_INTENABLE_DCDCDIGMPORATIOUPIRQ_SHIFT (7U)
/*! DcdcDigMpoRatioUpIrq - DcdcDigMpoRatioUp interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_DCDCDIGMPORATIOUPIRQ(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_DCDCDIGMPORATIOUPIRQ_SHIFT)) & PMRC_INTENABLE_DCDCDIGMPORATIOUPIRQ_MASK)

#define PMRC_INTENABLE_DCDCMEMMPORATIOUPIRQ_MASK (0x100U)
#define PMRC_INTENABLE_DCDCMEMMPORATIOUPIRQ_SHIFT (8U)
/*! DcdcMemMpoRatioUpIrq - DcdcMemMpoRatioUp interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_DCDCMEMMPORATIOUPIRQ(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_DCDCMEMMPORATIOUPIRQ_SHIFT)) & PMRC_INTENABLE_DCDCMEMMPORATIOUPIRQ_MASK)

#define PMRC_INTENABLE_VDDDIGNOTOKIRQ_MASK       (0x200U)
#define PMRC_INTENABLE_VDDDIGNOTOKIRQ_SHIFT      (9U)
/*! VddDigNotOkIrq - VddDigNotOk interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_VDDDIGNOTOKIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_VDDDIGNOTOKIRQ_SHIFT)) & PMRC_INTENABLE_VDDDIGNOTOKIRQ_MASK)

#define PMRC_INTENABLE_VDDMEMLDONOTOKIRQ_MASK    (0x400U)
#define PMRC_INTENABLE_VDDMEMLDONOTOKIRQ_SHIFT   (10U)
/*! VddMemLdoNotOkIrq - VddMemLdoNotOk interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_VDDMEMLDONOTOKIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_VDDMEMLDONOTOKIRQ_SHIFT)) & PMRC_INTENABLE_VDDMEMLDONOTOKIRQ_MASK)

#define PMRC_INTENABLE_VDDNOTOKIRQ_MASK          (0x800U)
#define PMRC_INTENABLE_VDDNOTOKIRQ_SHIFT         (11U)
/*! VddNotOkIrq - VddNotOk interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_VDDNOTOKIRQ(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_VDDNOTOKIRQ_SHIFT)) & PMRC_INTENABLE_VDDNOTOKIRQ_MASK)

#define PMRC_INTENABLE_ANAGDETVMAINIRQ_MASK      (0x1000U)
#define PMRC_INTENABLE_ANAGDETVMAINIRQ_SHIFT     (12U)
/*! AnaGdetVmainIrq - AnaGdetVmain interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_ANAGDETVMAINIRQ(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_ANAGDETVMAINIRQ_SHIFT)) & PMRC_INTENABLE_ANAGDETVMAINIRQ_MASK)

#define PMRC_INTENABLE_VDDANANOTOKIRQ_MASK       (0x2000U)
#define PMRC_INTENABLE_VDDANANOTOKIRQ_SHIFT      (13U)
/*! VddAnaNotOkIrq - VddAnaNotOk interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_VDDANANOTOKIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_VDDANANOTOKIRQ_SHIFT)) & PMRC_INTENABLE_VDDANANOTOKIRQ_MASK)

#define PMRC_INTENABLE_VDDCGUNOTOKIRQ_MASK       (0x4000U)
#define PMRC_INTENABLE_VDDCGUNOTOKIRQ_SHIFT      (14U)
/*! VddCguNotOkIrq - VddCguNotOk interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_VDDCGUNOTOKIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_VDDCGUNOTOKIRQ_SHIFT)) & PMRC_INTENABLE_VDDCGUNOTOKIRQ_MASK)

#define PMRC_INTENABLE_FSMTIMERIRQ_MASK          (0x8000U)
#define PMRC_INTENABLE_FSMTIMERIRQ_SHIFT         (15U)
/*! FsmTimerIrq - FSM-Timer interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_FSMTIMERIRQ(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_FSMTIMERIRQ_SHIFT)) & PMRC_INTENABLE_FSMTIMERIRQ_MASK)

#define PMRC_INTENABLE_ZEROIZATIONIRQ_MASK       (0x10000U)
#define PMRC_INTENABLE_ZEROIZATIONIRQ_SHIFT      (16U)
/*! ZeroizationIrq - Zeroization interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_ZEROIZATIONIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_ZEROIZATIONIRQ_SHIFT)) & PMRC_INTENABLE_ZEROIZATIONIRQ_MASK)

#define PMRC_INTENABLE_TAMPEREVENTIRQ_MASK       (0x20000U)
#define PMRC_INTENABLE_TAMPEREVENTIRQ_SHIFT      (17U)
/*! TamperEventIrq - TamperEvent interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_TAMPEREVENTIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_TAMPEREVENTIRQ_SHIFT)) & PMRC_INTENABLE_TAMPEREVENTIRQ_MASK)

#define PMRC_INTENABLE_DSWAKEUPIRQ_MASK          (0x40000U)
#define PMRC_INTENABLE_DSWAKEUPIRQ_SHIFT         (18U)
/*! DsWakeupIrq - DsWakeup interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_DSWAKEUPIRQ(x)            (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_DSWAKEUPIRQ_SHIFT)) & PMRC_INTENABLE_DSWAKEUPIRQ_MASK)

#define PMRC_INTENABLE_COSMICPROTIRQ_MASK        (0x80000U)
#define PMRC_INTENABLE_COSMICPROTIRQ_SHIFT       (19U)
/*! CosmicProtIrq - Cosmic ray protection interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_COSMICPROTIRQ(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_COSMICPROTIRQ_SHIFT)) & PMRC_INTENABLE_COSMICPROTIRQ_MASK)

#define PMRC_INTENABLE_VDDMEMDCDCNOTOKIRQ_MASK   (0x100000U)
#define PMRC_INTENABLE_VDDMEMDCDCNOTOKIRQ_SHIFT  (20U)
/*! VddMemDcdcNotOkIrq - VddMemDcdcNotOk interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_VDDMEMDCDCNOTOKIRQ(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_VDDMEMDCDCNOTOKIRQ_SHIFT)) & PMRC_INTENABLE_VDDMEMDCDCNOTOKIRQ_MASK)

#define PMRC_INTENABLE_ANAGDETVDIGIRQ_MASK       (0x200000U)
#define PMRC_INTENABLE_ANAGDETVDIGIRQ_SHIFT      (21U)
/*! AnaGdetVdigIrq - AnaGdetVdig interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_ANAGDETVDIGIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_ANAGDETVDIGIRQ_SHIFT)) & PMRC_INTENABLE_ANAGDETVDIGIRQ_MASK)

#define PMRC_INTENABLE_ANAGDETVMEMIRQ_MASK       (0x400000U)
#define PMRC_INTENABLE_ANAGDETVMEMIRQ_SHIFT      (22U)
/*! AnaGdetVmemIrq - AnaGdetVmem interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_ANAGDETVMEMIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_ANAGDETVMEMIRQ_SHIFT)) & PMRC_INTENABLE_ANAGDETVMEMIRQ_MASK)

#define PMRC_INTENABLE_SARADCIRQ_MASK            (0x800000U)
#define PMRC_INTENABLE_SARADCIRQ_SHIFT           (23U)
/*! SarAdcIrq - SarAdc interrupt request
 *  0b0..disable interrupt request generation
 *  0b1..enable interrupt request generation
 */
#define PMRC_INTENABLE_SARADCIRQ(x)              (((uint32_t)(((uint32_t)(x)) << PMRC_INTENABLE_SARADCIRQ_SHIFT)) & PMRC_INTENABLE_SARADCIRQ_MASK)
/*! @} */

/*! @name INTCLRSTATUS - Interrupt clear status command */
/*! @{ */

#define PMRC_INTCLRSTATUS_LFTIMERIRQ_MASK        (0x1U)
#define PMRC_INTCLRSTATUS_LFTIMERIRQ_SHIFT       (0U)
/*! LfTimerIrq - LF-Timer interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_LFTIMERIRQ(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_LFTIMERIRQ_SHIFT)) & PMRC_INTCLRSTATUS_LFTIMERIRQ_MASK)

#define PMRC_INTCLRSTATUS_SHUTDOWNIRQ_MASK       (0x2U)
#define PMRC_INTCLRSTATUS_SHUTDOWNIRQ_SHIFT      (1U)
/*! ShutdownIrq - Shutdown interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_SHUTDOWNIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_SHUTDOWNIRQ_SHIFT)) & PMRC_INTCLRSTATUS_SHUTDOWNIRQ_MASK)

#define PMRC_INTCLRSTATUS_CONFIGUREIRQ_MASK      (0x4U)
#define PMRC_INTCLRSTATUS_CONFIGUREIRQ_SHIFT     (2U)
/*! ConfigureIrq - Configure interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_CONFIGUREIRQ(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_CONFIGUREIRQ_SHIFT)) & PMRC_INTCLRSTATUS_CONFIGUREIRQ_MASK)

#define PMRC_INTCLRSTATUS_DCDCDIGRATIOUPIRQ_MASK (0x8U)
#define PMRC_INTCLRSTATUS_DCDCDIGRATIOUPIRQ_SHIFT (3U)
/*! DcdcDigRatioUpIrq - DcdcDigRatioUp interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_DCDCDIGRATIOUPIRQ(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_DCDCDIGRATIOUPIRQ_SHIFT)) & PMRC_INTCLRSTATUS_DCDCDIGRATIOUPIRQ_MASK)

#define PMRC_INTCLRSTATUS_DCDCMEMRATIOUPIRQ_MASK (0x10U)
#define PMRC_INTCLRSTATUS_DCDCMEMRATIOUPIRQ_SHIFT (4U)
/*! DcdcMemRatioUpIrq - DcdcMemRatioUp interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_DCDCMEMRATIOUPIRQ(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_DCDCMEMRATIOUPIRQ_SHIFT)) & PMRC_INTCLRSTATUS_DCDCMEMRATIOUPIRQ_MASK)

#define PMRC_INTCLRSTATUS_DCDCDIGRATIODOWNIRQ_MASK (0x20U)
#define PMRC_INTCLRSTATUS_DCDCDIGRATIODOWNIRQ_SHIFT (5U)
/*! DcdcDigRatioDownIrq - DcdcDigRatioDown interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_DCDCDIGRATIODOWNIRQ(x) (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_DCDCDIGRATIODOWNIRQ_SHIFT)) & PMRC_INTCLRSTATUS_DCDCDIGRATIODOWNIRQ_MASK)

#define PMRC_INTCLRSTATUS_DCDCMEMRATIODOWNIRQ_MASK (0x40U)
#define PMRC_INTCLRSTATUS_DCDCMEMRATIODOWNIRQ_SHIFT (6U)
/*! DcdcMemRatioDownIrq - DcdcMemRatioDown interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_DCDCMEMRATIODOWNIRQ(x) (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_DCDCMEMRATIODOWNIRQ_SHIFT)) & PMRC_INTCLRSTATUS_DCDCMEMRATIODOWNIRQ_MASK)

#define PMRC_INTCLRSTATUS_DCDCDIGMPORATIOUPIRQ_MASK (0x80U)
#define PMRC_INTCLRSTATUS_DCDCDIGMPORATIOUPIRQ_SHIFT (7U)
/*! DcdcDigMpoRatioUpIrq - DcdcDigMpoRatioUp interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_DCDCDIGMPORATIOUPIRQ(x) (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_DCDCDIGMPORATIOUPIRQ_SHIFT)) & PMRC_INTCLRSTATUS_DCDCDIGMPORATIOUPIRQ_MASK)

#define PMRC_INTCLRSTATUS_DCDCMEMMPORATIOUPIRQ_MASK (0x100U)
#define PMRC_INTCLRSTATUS_DCDCMEMMPORATIOUPIRQ_SHIFT (8U)
/*! DcdcMemMpoRatioUpIrq - DcdcMemMpoRatioUp interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_DCDCMEMMPORATIOUPIRQ(x) (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_DCDCMEMMPORATIOUPIRQ_SHIFT)) & PMRC_INTCLRSTATUS_DCDCMEMMPORATIOUPIRQ_MASK)

#define PMRC_INTCLRSTATUS_VDDDIGNOTOKIRQ_MASK    (0x200U)
#define PMRC_INTCLRSTATUS_VDDDIGNOTOKIRQ_SHIFT   (9U)
/*! VddDigNotOkIrq - VddDigNotOk interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_VDDDIGNOTOKIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_VDDDIGNOTOKIRQ_SHIFT)) & PMRC_INTCLRSTATUS_VDDDIGNOTOKIRQ_MASK)

#define PMRC_INTCLRSTATUS_VDDMEMLDONOTOKIRQ_MASK (0x400U)
#define PMRC_INTCLRSTATUS_VDDMEMLDONOTOKIRQ_SHIFT (10U)
/*! VddMemLdoNotOkIrq - VddMemLdoNotOk interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_VDDMEMLDONOTOKIRQ(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_VDDMEMLDONOTOKIRQ_SHIFT)) & PMRC_INTCLRSTATUS_VDDMEMLDONOTOKIRQ_MASK)

#define PMRC_INTCLRSTATUS_VDDNOTOKIRQ_MASK       (0x800U)
#define PMRC_INTCLRSTATUS_VDDNOTOKIRQ_SHIFT      (11U)
/*! VddNotOkIrq - VddNotOk interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_VDDNOTOKIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_VDDNOTOKIRQ_SHIFT)) & PMRC_INTCLRSTATUS_VDDNOTOKIRQ_MASK)

#define PMRC_INTCLRSTATUS_ANAGDETVMAINIRQ_MASK   (0x1000U)
#define PMRC_INTCLRSTATUS_ANAGDETVMAINIRQ_SHIFT  (12U)
/*! AnaGdetVmainIrq - AnaGdetVmain interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_ANAGDETVMAINIRQ(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_ANAGDETVMAINIRQ_SHIFT)) & PMRC_INTCLRSTATUS_ANAGDETVMAINIRQ_MASK)

#define PMRC_INTCLRSTATUS_VDDANANOTOKIRQ_MASK    (0x2000U)
#define PMRC_INTCLRSTATUS_VDDANANOTOKIRQ_SHIFT   (13U)
/*! VddAnaNotOkIrq - VddAnaNotOk interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_VDDANANOTOKIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_VDDANANOTOKIRQ_SHIFT)) & PMRC_INTCLRSTATUS_VDDANANOTOKIRQ_MASK)

#define PMRC_INTCLRSTATUS_VDDCGUNOTOKIRQ_MASK    (0x4000U)
#define PMRC_INTCLRSTATUS_VDDCGUNOTOKIRQ_SHIFT   (14U)
/*! VddCguNotOkIrq - VddCguNotOk interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_VDDCGUNOTOKIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_VDDCGUNOTOKIRQ_SHIFT)) & PMRC_INTCLRSTATUS_VDDCGUNOTOKIRQ_MASK)

#define PMRC_INTCLRSTATUS_FSMTIMERIRQ_MASK       (0x8000U)
#define PMRC_INTCLRSTATUS_FSMTIMERIRQ_SHIFT      (15U)
/*! FsmTimerIrq - FSM-Timer interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_FSMTIMERIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_FSMTIMERIRQ_SHIFT)) & PMRC_INTCLRSTATUS_FSMTIMERIRQ_MASK)

#define PMRC_INTCLRSTATUS_ZEROIZATIONIRQ_MASK    (0x10000U)
#define PMRC_INTCLRSTATUS_ZEROIZATIONIRQ_SHIFT   (16U)
/*! ZeroizationIrq - Zeroization interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_ZEROIZATIONIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_ZEROIZATIONIRQ_SHIFT)) & PMRC_INTCLRSTATUS_ZEROIZATIONIRQ_MASK)

#define PMRC_INTCLRSTATUS_TAMPEREVENTIRQ_MASK    (0x20000U)
#define PMRC_INTCLRSTATUS_TAMPEREVENTIRQ_SHIFT   (17U)
/*! TamperEventIrq - TamperEvent interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_TAMPEREVENTIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_TAMPEREVENTIRQ_SHIFT)) & PMRC_INTCLRSTATUS_TAMPEREVENTIRQ_MASK)

#define PMRC_INTCLRSTATUS_DSWAKEUPIRQ_MASK       (0x40000U)
#define PMRC_INTCLRSTATUS_DSWAKEUPIRQ_SHIFT      (18U)
/*! DsWakeupIrq - DsWakeup interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_DSWAKEUPIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_DSWAKEUPIRQ_SHIFT)) & PMRC_INTCLRSTATUS_DSWAKEUPIRQ_MASK)

#define PMRC_INTCLRSTATUS_COSMICPROTIRQ_MASK     (0x80000U)
#define PMRC_INTCLRSTATUS_COSMICPROTIRQ_SHIFT    (19U)
/*! CosmicProtIrq - Cosmic ray protection interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_COSMICPROTIRQ(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_COSMICPROTIRQ_SHIFT)) & PMRC_INTCLRSTATUS_COSMICPROTIRQ_MASK)

#define PMRC_INTCLRSTATUS_VDDMEMDCDCNOTOKIRQ_MASK (0x100000U)
#define PMRC_INTCLRSTATUS_VDDMEMDCDCNOTOKIRQ_SHIFT (20U)
/*! VddMemDcdcNotOkIrq - VddMemDcdcNotOk interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_VDDMEMDCDCNOTOKIRQ(x)  (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_VDDMEMDCDCNOTOKIRQ_SHIFT)) & PMRC_INTCLRSTATUS_VDDMEMDCDCNOTOKIRQ_MASK)

#define PMRC_INTCLRSTATUS_ANAGDETVDIGIRQ_MASK    (0x200000U)
#define PMRC_INTCLRSTATUS_ANAGDETVDIGIRQ_SHIFT   (21U)
/*! AnaGdetVdigIrq - AnaGdetVdig interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_ANAGDETVDIGIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_ANAGDETVDIGIRQ_SHIFT)) & PMRC_INTCLRSTATUS_ANAGDETVDIGIRQ_MASK)

#define PMRC_INTCLRSTATUS_ANAGDETVMEMIRQ_MASK    (0x400000U)
#define PMRC_INTCLRSTATUS_ANAGDETVMEMIRQ_SHIFT   (22U)
/*! AnaGdetVmemIrq - AnaGdetVmem interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_ANAGDETVMEMIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_ANAGDETVMEMIRQ_SHIFT)) & PMRC_INTCLRSTATUS_ANAGDETVMEMIRQ_MASK)

#define PMRC_INTCLRSTATUS_SARADCIRQ_MASK         (0x800000U)
#define PMRC_INTCLRSTATUS_SARADCIRQ_SHIFT        (23U)
/*! SarAdcIrq - SarAdc interrupt request
 *  0b0..No effect
 *  0b1..Clear status variable
 */
#define PMRC_INTCLRSTATUS_SARADCIRQ(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_INTCLRSTATUS_SARADCIRQ_SHIFT)) & PMRC_INTCLRSTATUS_SARADCIRQ_MASK)
/*! @} */

/*! @name INTSETSTATUS - Interrupt set status command */
/*! @{ */

#define PMRC_INTSETSTATUS_LFTIMERIRQ_MASK        (0x1U)
#define PMRC_INTSETSTATUS_LFTIMERIRQ_SHIFT       (0U)
/*! LfTimerIrq - LF-Timer interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_LFTIMERIRQ(x)          (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_LFTIMERIRQ_SHIFT)) & PMRC_INTSETSTATUS_LFTIMERIRQ_MASK)

#define PMRC_INTSETSTATUS_SHUTDOWNIRQ_MASK       (0x2U)
#define PMRC_INTSETSTATUS_SHUTDOWNIRQ_SHIFT      (1U)
/*! ShutdownIrq - Shutdown interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_SHUTDOWNIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_SHUTDOWNIRQ_SHIFT)) & PMRC_INTSETSTATUS_SHUTDOWNIRQ_MASK)

#define PMRC_INTSETSTATUS_CONFIGUREIRQ_MASK      (0x4U)
#define PMRC_INTSETSTATUS_CONFIGUREIRQ_SHIFT     (2U)
/*! ConfigureIrq - Configure interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_CONFIGUREIRQ(x)        (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_CONFIGUREIRQ_SHIFT)) & PMRC_INTSETSTATUS_CONFIGUREIRQ_MASK)

#define PMRC_INTSETSTATUS_DCDCDIGRATIOUPIRQ_MASK (0x8U)
#define PMRC_INTSETSTATUS_DCDCDIGRATIOUPIRQ_SHIFT (3U)
/*! DcdcDigRatioUpIrq - DcdcDigRatioUp interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_DCDCDIGRATIOUPIRQ(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_DCDCDIGRATIOUPIRQ_SHIFT)) & PMRC_INTSETSTATUS_DCDCDIGRATIOUPIRQ_MASK)

#define PMRC_INTSETSTATUS_DCDCMEMRATIOUPIRQ_MASK (0x10U)
#define PMRC_INTSETSTATUS_DCDCMEMRATIOUPIRQ_SHIFT (4U)
/*! DcdcMemRatioUpIrq - DcdcMemRatioUp interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_DCDCMEMRATIOUPIRQ(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_DCDCMEMRATIOUPIRQ_SHIFT)) & PMRC_INTSETSTATUS_DCDCMEMRATIOUPIRQ_MASK)

#define PMRC_INTSETSTATUS_DCDCDIGRATIODOWNIRQ_MASK (0x20U)
#define PMRC_INTSETSTATUS_DCDCDIGRATIODOWNIRQ_SHIFT (5U)
/*! DcdcDigRatioDownIrq - DcdcDigRatioDown interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_DCDCDIGRATIODOWNIRQ(x) (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_DCDCDIGRATIODOWNIRQ_SHIFT)) & PMRC_INTSETSTATUS_DCDCDIGRATIODOWNIRQ_MASK)

#define PMRC_INTSETSTATUS_DCDCMEMRATIODOWNIRQ_MASK (0x40U)
#define PMRC_INTSETSTATUS_DCDCMEMRATIODOWNIRQ_SHIFT (6U)
/*! DcdcMemRatioDownIrq - DcdcMemRatioDown interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_DCDCMEMRATIODOWNIRQ(x) (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_DCDCMEMRATIODOWNIRQ_SHIFT)) & PMRC_INTSETSTATUS_DCDCMEMRATIODOWNIRQ_MASK)

#define PMRC_INTSETSTATUS_DCDCDIGMPORATIOUPIRQ_MASK (0x80U)
#define PMRC_INTSETSTATUS_DCDCDIGMPORATIOUPIRQ_SHIFT (7U)
/*! DcdcDigMpoRatioUpIrq - DcdcDigMpoRatioUp interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_DCDCDIGMPORATIOUPIRQ(x) (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_DCDCDIGMPORATIOUPIRQ_SHIFT)) & PMRC_INTSETSTATUS_DCDCDIGMPORATIOUPIRQ_MASK)

#define PMRC_INTSETSTATUS_DCDCMEMMPORATIOUPIRQ_MASK (0x100U)
#define PMRC_INTSETSTATUS_DCDCMEMMPORATIOUPIRQ_SHIFT (8U)
/*! DcdcMemMpoRatioUpIrq - DcdcMemMpoRatioUp interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_DCDCMEMMPORATIOUPIRQ(x) (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_DCDCMEMMPORATIOUPIRQ_SHIFT)) & PMRC_INTSETSTATUS_DCDCMEMMPORATIOUPIRQ_MASK)

#define PMRC_INTSETSTATUS_VDDDIGNOTOKIRQ_MASK    (0x200U)
#define PMRC_INTSETSTATUS_VDDDIGNOTOKIRQ_SHIFT   (9U)
/*! VddDigNotOkIrq - VddDigNotOk interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_VDDDIGNOTOKIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_VDDDIGNOTOKIRQ_SHIFT)) & PMRC_INTSETSTATUS_VDDDIGNOTOKIRQ_MASK)

#define PMRC_INTSETSTATUS_VDDMEMLDONOTOKIRQ_MASK (0x400U)
#define PMRC_INTSETSTATUS_VDDMEMLDONOTOKIRQ_SHIFT (10U)
/*! VddMemLdoNotOkIrq - VddMemLdoNotOk interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_VDDMEMLDONOTOKIRQ(x)   (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_VDDMEMLDONOTOKIRQ_SHIFT)) & PMRC_INTSETSTATUS_VDDMEMLDONOTOKIRQ_MASK)

#define PMRC_INTSETSTATUS_VDDNOTOKIRQ_MASK       (0x800U)
#define PMRC_INTSETSTATUS_VDDNOTOKIRQ_SHIFT      (11U)
/*! VddNotOkIrq - VddNotOk interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_VDDNOTOKIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_VDDNOTOKIRQ_SHIFT)) & PMRC_INTSETSTATUS_VDDNOTOKIRQ_MASK)

#define PMRC_INTSETSTATUS_ANAGDETVMAINIRQ_MASK   (0x1000U)
#define PMRC_INTSETSTATUS_ANAGDETVMAINIRQ_SHIFT  (12U)
/*! AnaGdetVmainIrq - AnaGdetVmain interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_ANAGDETVMAINIRQ(x)     (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_ANAGDETVMAINIRQ_SHIFT)) & PMRC_INTSETSTATUS_ANAGDETVMAINIRQ_MASK)

#define PMRC_INTSETSTATUS_VDDANANOTOKIRQ_MASK    (0x2000U)
#define PMRC_INTSETSTATUS_VDDANANOTOKIRQ_SHIFT   (13U)
/*! VddAnaNotOkIrq - VddAnaNotOk interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_VDDANANOTOKIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_VDDANANOTOKIRQ_SHIFT)) & PMRC_INTSETSTATUS_VDDANANOTOKIRQ_MASK)

#define PMRC_INTSETSTATUS_VDDCGUNOTOKIRQ_MASK    (0x4000U)
#define PMRC_INTSETSTATUS_VDDCGUNOTOKIRQ_SHIFT   (14U)
/*! VddCguNotOkIrq - VddCguNotOk interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_VDDCGUNOTOKIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_VDDCGUNOTOKIRQ_SHIFT)) & PMRC_INTSETSTATUS_VDDCGUNOTOKIRQ_MASK)

#define PMRC_INTSETSTATUS_FSMTIMERIRQ_MASK       (0x8000U)
#define PMRC_INTSETSTATUS_FSMTIMERIRQ_SHIFT      (15U)
/*! FsmTimerIrq - FSM-Timer interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_FSMTIMERIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_FSMTIMERIRQ_SHIFT)) & PMRC_INTSETSTATUS_FSMTIMERIRQ_MASK)

#define PMRC_INTSETSTATUS_ZEROIZATIONIRQ_MASK    (0x10000U)
#define PMRC_INTSETSTATUS_ZEROIZATIONIRQ_SHIFT   (16U)
/*! ZeroizationIrq - Zeroization interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_ZEROIZATIONIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_ZEROIZATIONIRQ_SHIFT)) & PMRC_INTSETSTATUS_ZEROIZATIONIRQ_MASK)

#define PMRC_INTSETSTATUS_TAMPEREVENTIRQ_MASK    (0x20000U)
#define PMRC_INTSETSTATUS_TAMPEREVENTIRQ_SHIFT   (17U)
/*! TamperEventIrq - TamperEvent interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_TAMPEREVENTIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_TAMPEREVENTIRQ_SHIFT)) & PMRC_INTSETSTATUS_TAMPEREVENTIRQ_MASK)

#define PMRC_INTSETSTATUS_DSWAKEUPIRQ_MASK       (0x40000U)
#define PMRC_INTSETSTATUS_DSWAKEUPIRQ_SHIFT      (18U)
/*! DsWakeupIrq - DsWakeup interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_DSWAKEUPIRQ(x)         (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_DSWAKEUPIRQ_SHIFT)) & PMRC_INTSETSTATUS_DSWAKEUPIRQ_MASK)

#define PMRC_INTSETSTATUS_COSMICPROTIRQ_MASK     (0x80000U)
#define PMRC_INTSETSTATUS_COSMICPROTIRQ_SHIFT    (19U)
/*! CosmicProtIrq - Cosmic ray protection interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_COSMICPROTIRQ(x)       (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_COSMICPROTIRQ_SHIFT)) & PMRC_INTSETSTATUS_COSMICPROTIRQ_MASK)

#define PMRC_INTSETSTATUS_VDDMEMDCDCNOTOKIRQ_MASK (0x100000U)
#define PMRC_INTSETSTATUS_VDDMEMDCDCNOTOKIRQ_SHIFT (20U)
/*! VddMemDcdcNotOkIrq - VddMemDcdcNotOk interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_VDDMEMDCDCNOTOKIRQ(x)  (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_VDDMEMDCDCNOTOKIRQ_SHIFT)) & PMRC_INTSETSTATUS_VDDMEMDCDCNOTOKIRQ_MASK)

#define PMRC_INTSETSTATUS_ANAGDETVDIGIRQ_MASK    (0x200000U)
#define PMRC_INTSETSTATUS_ANAGDETVDIGIRQ_SHIFT   (21U)
/*! AnaGdetVdigIrq - AnaGdetVdig interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_ANAGDETVDIGIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_ANAGDETVDIGIRQ_SHIFT)) & PMRC_INTSETSTATUS_ANAGDETVDIGIRQ_MASK)

#define PMRC_INTSETSTATUS_ANAGDETVMEMIRQ_MASK    (0x400000U)
#define PMRC_INTSETSTATUS_ANAGDETVMEMIRQ_SHIFT   (22U)
/*! AnaGdetVmemIrq - AnaGdetVmem interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_ANAGDETVMEMIRQ(x)      (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_ANAGDETVMEMIRQ_SHIFT)) & PMRC_INTSETSTATUS_ANAGDETVMEMIRQ_MASK)

#define PMRC_INTSETSTATUS_SARADCIRQ_MASK         (0x800000U)
#define PMRC_INTSETSTATUS_SARADCIRQ_SHIFT        (23U)
/*! SarAdcIrq - SarAdc interrupt request
 *  0b0..No effect
 *  0b1..set status variable
 */
#define PMRC_INTSETSTATUS_SARADCIRQ(x)           (((uint32_t)(((uint32_t)(x)) << PMRC_INTSETSTATUS_SARADCIRQ_SHIFT)) & PMRC_INTSETSTATUS_SARADCIRQ_MASK)
/*! @} */

/*! @name MODULEID - Contains the ID number of the IP */
/*! @{ */

#define PMRC_MODULEID_APERTURE_MASK              (0xFFU)
#define PMRC_MODULEID_APERTURE_SHIFT             (0U)
/*! aperture - Contains the aperture size of the IP */
#define PMRC_MODULEID_APERTURE(x)                (((uint32_t)(((uint32_t)(x)) << PMRC_MODULEID_APERTURE_SHIFT)) & PMRC_MODULEID_APERTURE_MASK)

#define PMRC_MODULEID_MINOR_REV_MASK             (0xF00U)
#define PMRC_MODULEID_MINOR_REV_SHIFT            (8U)
/*! minor_rev - Minor revision, guaranteed software compatibility between minor revisions */
#define PMRC_MODULEID_MINOR_REV(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_MODULEID_MINOR_REV_SHIFT)) & PMRC_MODULEID_MINOR_REV_MASK)

#define PMRC_MODULEID_MAJOR_REV_MASK             (0xF000U)
#define PMRC_MODULEID_MAJOR_REV_SHIFT            (12U)
/*! major_rev - Major revision, guaranteed software compatibility between major revisions */
#define PMRC_MODULEID_MAJOR_REV(x)               (((uint32_t)(((uint32_t)(x)) << PMRC_MODULEID_MAJOR_REV_SHIFT)) & PMRC_MODULEID_MAJOR_REV_MASK)

#define PMRC_MODULEID_ID_MASK                    (0xFFFF0000U)
#define PMRC_MODULEID_ID_SHIFT                   (16U)
/*! id - Unique identification number, assigned by CoReUse */
#define PMRC_MODULEID_ID(x)                      (((uint32_t)(((uint32_t)(x)) << PMRC_MODULEID_ID_SHIFT)) & PMRC_MODULEID_ID_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group PMRC_Register_Masks */


/*!
 * @}
 */ /* end of group PMRC_Peripheral_Access_Layer */


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


#endif  /* PERI_PMRC_H_ */

