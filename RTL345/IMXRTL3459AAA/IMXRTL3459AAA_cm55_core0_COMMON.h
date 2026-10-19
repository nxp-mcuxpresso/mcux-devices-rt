/*
** ###################################################################
**     Processors:          IMXRTL3459AAAFAWAR_cm55_core0
**                          IMXRTL3459AAAFBWAR_cm55_core0
**
**     Compilers:
**                          GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**                          Keil ARM C/C++ Compiler
**
**     Reference manual:    IMXRTL345_EAR
**     Version:             rev. 1.0, 2026-06-19
**     Build:               b261015
**
**     Abstract:
**         CMSIS Peripheral Access Layer for IMXRTL3459AAA_cm55_core0
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
 * @file IMXRTL3459AAA_cm55_core0_COMMON.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for IMXRTL3459AAA_cm55_core0
 *
 * CMSIS Peripheral Access Layer for IMXRTL3459AAA_cm55_core0
 */

#if !defined(IMXRTL3459AAA_CM55_CORE0_COMMON_H_)
#define IMXRTL3459AAA_CM55_CORE0_COMMON_H_       /**< Symbol preventing repeated inclusion */

/** Memory map major version (memory maps with equal major version number are
 * compatible) */
#define MCU_MEM_MAP_VERSION 0x0100U
/** Memory map minor version */
#define MCU_MEM_MAP_VERSION_MINOR 0x0000U


/* ----------------------------------------------------------------------------
   -- Interrupt vector numbers
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Interrupt_vector_numbers Interrupt vector numbers
 * @{
 */

/** Interrupt Number Definitions */
#define NUMBER_OF_INT_VECTORS 144                /**< Number of interrupts in the Vector table */

typedef enum IRQn {
  /* Auxiliary constants */
  NotAvail_IRQn                = -128,             /**< Not available device specific interrupt */

  /* Core interrupts */
  NonMaskableInt_IRQn          = -14,              /**< Non Maskable Interrupt */
  HardFault_IRQn               = -13,              /**< Cortex-M55 SV Hard Fault Interrupt */
  MemoryManagement_IRQn        = -12,              /**< Cortex-M55 Memory Management Interrupt */
  BusFault_IRQn                = -11,              /**< Cortex-M55 Bus Fault Interrupt */
  UsageFault_IRQn              = -10,              /**< Cortex-M55 Usage Fault Interrupt */
  SecureFault_IRQn             = -9,               /**< Cortex-M55 Secure Fault Interrupt */
  SVCall_IRQn                  = -5,               /**< Cortex-M55 SV Call Interrupt */
  DebugMonitor_IRQn            = -4,               /**< Cortex-M55 Debug Monitor Interrupt */
  PendSV_IRQn                  = -2,               /**< Cortex-M55 Pend SV Interrupt */
  SysTick_IRQn                 = -1,               /**< Cortex-M55 System Tick Interrupt */

  /* Device specific interrupts */
  DMA0_CH0_IRQn                = 0,                /**< DMA0_CH0 interrupt */
  DMA0_CH1_IRQn                = 1,                /**< DMA0_CH1 interrupt */
  DMA0_CH2_IRQn                = 2,                /**< DMA0_CH2 interrupt */
  DMA0_CH3_IRQn                = 3,                /**< DMA0_CH3 interrupt */
  DMA0_CH4_IRQn                = 4,                /**< DMA0_CH4 interrupt */
  DMA0_CH5_IRQn                = 5,                /**< DMA0_CH5 interrupt */
  DMA0_CH6_IRQn                = 6,                /**< DMA0_CH6 interrupt */
  DMA0_CH7_IRQn                = 7,                /**< DMA0_CH7 interrupt */
  DMA0_CH8_IRQn                = 8,                /**< DMA0_CH8 interrupt */
  DMA0_CH9_IRQn                = 9,                /**< DMA0_CH9 interrupt */
  DMA0_CH10_IRQn               = 10,               /**< DMA0_CH10 interrupt */
  DMA0_CH11_IRQn               = 11,               /**< DMA0_CH11 interrupt */
  DMA0_CH12_IRQn               = 12,               /**< DMA0_CH12 interrupt */
  DMA0_CH13_IRQn               = 13,               /**< DMA0_CH13 interrupt */
  DMA0_CH14_IRQn               = 14,               /**< DMA0_CH14 interrupt */
  DMA0_CH15_IRQn               = 15,               /**< DMA0_CH15 interrupt */
  DMA0_CH16_IRQn               = 16,               /**< DMA0_CH16 interrupt */
  DMA0_CH17_IRQn               = 17,               /**< DMA0_CH17 interrupt */
  DMA0_CH18_IRQn               = 18,               /**< DMA0_CH18 interrupt */
  DMA0_CH19_IRQn               = 19,               /**< DMA0_CH19 interrupt */
  DMA0_CH20_IRQn               = 20,               /**< DMA0_CH20 interrupt */
  DMA0_CH21_IRQn               = 21,               /**< DMA0_CH21 interrupt */
  DMA0_CH22_IRQn               = 22,               /**< DMA0_CH22 interrupt */
  DMA0_CH23_IRQn               = 23,               /**< DMA0_CH23 interrupt */
  DMA1_CH0_IRQn                = 24,               /**< DMA1_CH0 interrupt */
  DMA1_CH1_IRQn                = 25,               /**< DMA1_CH1 interrupt */
  DMA1_CH2_IRQn                = 26,               /**< DMA1_CH2 interrupt */
  DMA1_CH3_IRQn                = 27,               /**< DMA1_CH3 interrupt */
  DMA1_CH4_IRQn                = 28,               /**< DMA1_CH4 interrupt */
  DMA1_CH5_IRQn                = 29,               /**< DMA1_CH5 interrupt */
  DMA1_CH6_IRQn                = 30,               /**< DMA1_CH6 interrupt */
  DMA1_CH7_IRQn                = 31,               /**< DMA1_CH7 interrupt */
  DMA1_CH8_IRQn                = 32,               /**< DMA1_CH8 interrupt */
  DMA1_CH9_IRQn                = 33,               /**< DMA1_CH9 interrupt */
  DMA1_CH10_IRQn               = 34,               /**< DMA1_CH10 interrupt */
  DMA1_CH11_IRQn               = 35,               /**< DMA1_CH11 interrupt */
  DMA0_IRQn                    = 36,               /**< DMA0 ORed interrupt */
  DMA1_IRQn                    = 37,               /**< DMA1 ORed interrupt */
  CTI_INT0_IRQn                = 38,               /**< CTI_INT0 interrupt */
  CTI_INT1_IRQn                = 39,               /**< CTI_INT1 interrupt */
  UTICK_IRQn                   = 40,               /**< UTICK interrupt */
  MRT0_IRQn                    = 41,               /**< MRT0 interrupt */
  CTIMER0_IRQn                 = 42,               /**< CTIMER0 interrupt */
  CTIMER1_IRQn                 = 43,               /**< CTIMER1 interrupt */
  CTIMER2_IRQn                 = 44,               /**< CTIMER2 interrupt */
  CTIMER3_IRQn                 = 45,               /**< CTIMER3 interrupt */
  CTIMER4_IRQn                 = 46,               /**< CTIMER4 interrupt */
  SCT0_IRQn                    = 47,               /**< SCT0 interrupt */
  OS_EVENT_IRQn                = 48,               /**< OS timer event interrupt */
  WDT0_IRQn                    = 49,               /**< WDT0 interrupt */
  FLEXCOMM0_IRQn               = 50,               /**< FLEXCOMM0 interrupt */
  FLEXCOMM1_IRQn               = 51,               /**< FLEXCOMM1 interrupt */
  FLEXCOMM2_IRQn               = 52,               /**< FLEXCOMM2 interrupt */
  FLEXCOMM3_IRQn               = 53,               /**< FLEXCOMM3 interrupt */
  FLEXCOMM4_IRQn               = 54,               /**< FLEXCOMM4 interrupt */
  FLEXCOMM5_IRQn               = 55,               /**< FLEXCOMM5 interrupt */
  XSPI0_IRQn                   = 56,               /**< XSPI0 interrupt */
  I3C0_IRQn                    = 57,               /**< I3C0 interrupt */
  GINT0_IRQn                   = 58,               /**< GINT0 interrupt */
  PIN_INT0_IRQn                = 59,               /**< PIN_INT0 interrupt */
  PIN_INT1_IRQn                = 60,               /**< PIN_INT1 interrupt */
  PIN_INT2_IRQn                = 61,               /**< PIN_INT2 interrupt */
  PIN_INT3_IRQn                = 62,               /**< PIN_INT3 interrupt */
  PIN_INT4_IRQn                = 63,               /**< PIN_INT4 interrupt */
  PIN_INT5_IRQn                = 64,               /**< PIN_INT5 interrupt */
  PIN_INT6_IRQn                = 65,               /**< PIN_INT6 interrupt */
  PIN_INT7_IRQn                = 66,               /**< PIN_INT7 interrupt */
  GPIO_INTA_IRQn               = 67,               /**< GPIO interrupt A */
  GPIO_INTB_IRQn               = 68,               /**< GPIO interrupt B */
  SEC_GPIO_INTA_IRQn           = 69,               /**< Secure GPIO interrupt A */
  SEC_GPIO_INTB_IRQn           = 70,               /**< Secure GPIO interrupt B */
  SEC_GPIO_INT0_IRQ0_IRQn      = 71,               /**< GPIO SEC INT0 interrupt */
  SEC_GPIO_INT0_IRQ1_IRQn      = 72,               /**< GPIO SEC INT1 interrupt */
  FREQME_IRQn                  = 73,               /**< FREQME interrupt */
  CDOG_IRQn                    = 74,               /**< CDOG interrupt */
  AHB_MATRIX_IRQn              = 75,               /**< AHB_MATRIX interrupt */
  HYPERVISOR_IRQn              = 76,               /**< HYPERVISOR interrupt */
  SGI0_IRQn                    = 77,               /**< SGI0 interrupt */
  PKC_IRQn                     = 78,               /**< PKC interrupt */
  TRNG0_IRQn                   = 79,               /**< TRNG0 interrupt */
  ITRC_IRQn                    = 80,               /**< ITRC interrupt */
  GLIKEY0_IRQn                 = 81,               /**< GLIKEY0 interrupt */
  TDET_IRQn                    = 82,               /**< TDET interrupt */
  GDET_IRQn                    = 83,               /**< GDET interrupt */
  SECURE_ERR_IRQn              = 84,               /**< SECURE_ERR interrupt */
  OCOTP_IRQn                   = 85,               /**< OCOTP interrupt */
  DATAPORT_EVENT0_IRQn         = 86,               /**< DATAPORT_EVENT0 interrupt */
  DATAPORT_EVENT1_IRQn         = 87,               /**< DATAPORT_EVENT1 interrupt */
  DATAPORT_EVENT2_IRQn         = 88,               /**< DATAPORT_EVENT2 interrupt */
  DATAPORT_EVENT3_IRQn         = 89,               /**< DATAPORT_EVENT3 interrupt */
  VISION_IRQn                  = 90,               /**< VISION interrupt */
  PMRC_IRQn                    = 91,               /**< PMRC interrupt */
  Reserved108_IRQn             = 92,               /**< Reserved108 interrupt */
  NSS_CM_EVENT0_IRQn           = 93,               /**< NSS_CM_EVENT0 interrupt */
  NSS_CM_EVENT1_IRQn           = 94,               /**< NSS_CM_EVENT1 interrupt */
  NSS_CM_EVENT2_IRQn           = 95,               /**< NSS_CM_EVENT2 interrupt */
  NSS_CM_EVENT3_IRQn           = 96,               /**< NSS_CM_EVENT3 interrupt */
  NSS_CM_EVENT4_IRQn           = 97,               /**< NSS_CM_EVENT4 interrupt */
  NSS_CM_EVENT5_IRQn           = 98,               /**< NSS_CM_EVENT5 interrupt */
  NSS_CM_EVENT6_IRQn           = 99,               /**< NSS_CM_EVENT6 interrupt */
  NSS_CM_EVENT7_IRQn           = 100,              /**< NSS_CM_EVENT7 interrupt */
  NSS_XSP_EVENT0_IRQn          = 101,              /**< NSS_XSP_EVENT0 interrupt */
  NSS_XSP_EVENT1_IRQn          = 102,              /**< NSS_XSP_EVENT1 interrupt */
  NSS_XSP_EVENT2_IRQn          = 103,              /**< NSS_XSP_EVENT2 interrupt */
  NSS_XSP_EVENT3_IRQn          = 104,              /**< NSS_XSP_EVENT3 interrupt */
  NSS_XSP_EVENT4_IRQn          = 105,              /**< NSS_XSP_EVENT4 interrupt */
  NSS_XSP_EVENT5_IRQn          = 106,              /**< NSS_XSP_EVENT5 interrupt */
  NSS_XSP_EVENT6_IRQn          = 107,              /**< NSS_XSP_EVENT6 interrupt */
  NSS_XSP_EVENT7_IRQn          = 108,              /**< NSS_XSP_EVENT7 interrupt */
  NSS_DMA_EVENT0_IRQn          = 109,              /**< NSS_DMA_EVENT0 interrupt */
  NSS_DMA_EVENT1_IRQn          = 110,              /**< NSS_DMA_EVENT1 interrupt */
  NSS_DMA_EVENT2_IRQn          = 111,              /**< NSS_DMA_EVENT2 interrupt */
  NSS_DMA_EVENT3_IRQn          = 112,              /**< NSS_DMA_EVENT3 interrupt */
  NSS_DMA_EVENT4_IRQn          = 113,              /**< NSS_DMA_EVENT4 interrupt */
  NSS_DMA_EVENT5_IRQn          = 114,              /**< NSS_DMA_EVENT5 interrupt */
  NSS_DMA_EVENT6_IRQn          = 115,              /**< NSS_DMA_EVENT6 interrupt */
  NSS_DMA_EVENT7_IRQn          = 116,              /**< NSS_DMA_EVENT7 interrupt */
  NSS_U85_IRQn                 = 117,              /**< NSS_U85 interrupt */
  ADSS_PROG_EVENT0_IRQn        = 118,              /**< ADSS_PROG_EVENT0 interrupt */
  ADSS_PROG_EVENT1_IRQn        = 119,              /**< ADSS_PROG_EVENT1 interrupt */
  ADSS_PROG_EVENT2_IRQn        = 120,              /**< ADSS_PROG_EVENT2 interrupt */
  ADSS_PROG_EVENT3_IRQn        = 121,              /**< ADSS_PROG_EVENT3 interrupt */
  ADSS_PROG_EVENT4_IRQn        = 122,              /**< ADSS_PROG_EVENT4 interrupt */
  ADSS_PROG_EVENT5_IRQn        = 123,              /**< ADSS_PROG_EVENT5 interrupt */
  ADSS_PROG_EVENT6_IRQn        = 124,              /**< ADSS_PROG_EVENT6 interrupt */
  ADSS_PROG_EVENT7_IRQn        = 125,              /**< ADSS_PROG_EVENT7 interrupt */
  NSS_ERROR_IRQn               = 126,              /**< NSS_ERROR interrupt */
  ADSS_ERROR_IRQn              = 127               /**< ADSS_ERROR interrupt */
} IRQn_Type;

/*!
 * @}
 */ /* end of group Interrupt_vector_numbers */


/* ----------------------------------------------------------------------------
   -- Cortex M55 Core Configuration
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Cortex_Core_Configuration Cortex M55 Core Configuration
 * @{
 */

#define __MPU_PRESENT                  1         /**< Defines if an MPU is present or not */
#define __ICACHE_PRESENT               1         /**< Defines if an ICACHE is present or not */
#define __DCACHE_PRESENT               1         /**< Defines if an DCACHE is present or not */
#define __NVIC_PRIO_BITS               3         /**< Number of priority bits implemented in the NVIC */
#define __Vendor_SysTickConfig         0         /**< Vendor specific implementation of SysTickConfig is defined */
#define __FPU_PRESENT                  1         /**< Defines if an FPU is present or not */
#define __DSP_PRESENT                  1         /**< Defines if Armv8-M Mainline core supports DSP instructions */
#define __SAUREGION_PRESENT            1         /**< Defines if an SAU is present or not */

#include "core_cm55.h"                 /* Core Peripheral Access Layer */
#include "system_IMXRTL3459AAA_cm55_core0.h" /* Device specific configuration file */

/*!
 * @}
 */ /* end of group Cortex_Core_Configuration */


#ifndef IMXRTL3459AAA_cm55_core0_SERIES
#define IMXRTL3459AAA_cm55_core0_SERIES
#endif
/* CPU specific feature definitions */
#include "IMXRTL3459AAA_cm55_core0_features.h"

/* ADSS_ANCAHW - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__GIO__ANCAHW base address */
  #define ADSS__GIO__ANCAHW_BASE_NS                (0x40029100u)
  /** Peripheral ADSS__GIO__ANCAHW base pointer */
  #define ADSS__GIO__ANCAHW_NS                     ((ADSS_ANCAHW_Type *)ADSS__GIO__ANCAHW_BASE_NS)
  /** Peripheral ADSS__GIO__ANCAHW base address */
  #define ADSS__GIO__ANCAHW_BASE                   (0x50029100u)
  /** Peripheral ADSS__GIO__ANCAHW base pointer */
  #define ADSS__GIO__ANCAHW                        ((ADSS_ANCAHW_Type *)ADSS__GIO__ANCAHW_BASE)
  /** Array initializer of ADSS_ANCAHW peripheral base addresses */
  #define ADSS_ANCAHW_BASE_ADDRS_NS                { ADSS__GIO__ANCAHW_BASE_NS }
  /** Array initializer of ADSS_ANCAHW peripheral base pointers */
  #define ADSS_ANCAHW_BASE_PTRS_NS                 { ADSS__GIO__ANCAHW_NS }
  /** Array initializer of ADSS_ANCAHW peripheral base addresses */
  #define ADSS_ANCAHW_BASE_ADDRS                   { ADSS__GIO__ANCAHW_BASE }
  /** Array initializer of ADSS_ANCAHW peripheral base pointers */
  #define ADSS_ANCAHW_BASE_PTRS                    { ADSS__GIO__ANCAHW }
#else
  /** Peripheral ADSS__GIO__ANCAHW base address */
  #define ADSS__GIO__ANCAHW_BASE                   (0x40029100u)
  /** Peripheral ADSS__GIO__ANCAHW base pointer */
  #define ADSS__GIO__ANCAHW                        ((ADSS_ANCAHW_Type *)ADSS__GIO__ANCAHW_BASE)
  /** Array initializer of ADSS_ANCAHW peripheral base addresses */
  #define ADSS_ANCAHW_BASE_ADDRS                   { ADSS__GIO__ANCAHW_BASE }
  /** Array initializer of ADSS_ANCAHW peripheral base pointers */
  #define ADSS_ANCAHW_BASE_PTRS                    { ADSS__GIO__ANCAHW }
#endif

/* ADSS_ANCCODEC_SYSCON - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__ANCCODEC_SYSCON base address */
  #define ADSS__ANCCODEC_SYSCON_BASE_NS            (0x40028B00u)
  /** Peripheral ADSS__ANCCODEC_SYSCON base pointer */
  #define ADSS__ANCCODEC_SYSCON_NS                 ((ADSS_ANCCODEC_SYSCON_Type *)ADSS__ANCCODEC_SYSCON_BASE_NS)
  /** Peripheral ADSS__ANCCODEC_SYSCON base address */
  #define ADSS__ANCCODEC_SYSCON_BASE               (0x50028B00u)
  /** Peripheral ADSS__ANCCODEC_SYSCON base pointer */
  #define ADSS__ANCCODEC_SYSCON                    ((ADSS_ANCCODEC_SYSCON_Type *)ADSS__ANCCODEC_SYSCON_BASE)
  /** Array initializer of ADSS_ANCCODEC_SYSCON peripheral base addresses */
  #define ADSS_ANCCODEC_SYSCON_BASE_ADDRS_NS       { ADSS__ANCCODEC_SYSCON_BASE_NS }
  /** Array initializer of ADSS_ANCCODEC_SYSCON peripheral base pointers */
  #define ADSS_ANCCODEC_SYSCON_BASE_PTRS_NS        { ADSS__ANCCODEC_SYSCON_NS }
  /** Array initializer of ADSS_ANCCODEC_SYSCON peripheral base addresses */
  #define ADSS_ANCCODEC_SYSCON_BASE_ADDRS          { ADSS__ANCCODEC_SYSCON_BASE }
  /** Array initializer of ADSS_ANCCODEC_SYSCON peripheral base pointers */
  #define ADSS_ANCCODEC_SYSCON_BASE_PTRS           { ADSS__ANCCODEC_SYSCON }
#else
  /** Peripheral ADSS__ANCCODEC_SYSCON base address */
  #define ADSS__ANCCODEC_SYSCON_BASE               (0x40028B00u)
  /** Peripheral ADSS__ANCCODEC_SYSCON base pointer */
  #define ADSS__ANCCODEC_SYSCON                    ((ADSS_ANCCODEC_SYSCON_Type *)ADSS__ANCCODEC_SYSCON_BASE)
  /** Array initializer of ADSS_ANCCODEC_SYSCON peripheral base addresses */
  #define ADSS_ANCCODEC_SYSCON_BASE_ADDRS          { ADSS__ANCCODEC_SYSCON_BASE }
  /** Array initializer of ADSS_ANCCODEC_SYSCON peripheral base pointers */
  #define ADSS_ANCCODEC_SYSCON_BASE_PTRS           { ADSS__ANCCODEC_SYSCON }
#endif

/* ADSS_CGU_ADSS - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__GIO__CGU_ADSS base address */
  #define ADSS__GIO__CGU_ADSS_BASE_NS              (0x400291C0u)
  /** Peripheral ADSS__GIO__CGU_ADSS base pointer */
  #define ADSS__GIO__CGU_ADSS_NS                   ((ADSS_CGU_ADSS_Type *)ADSS__GIO__CGU_ADSS_BASE_NS)
  /** Peripheral ADSS__GIO__CGU_ADSS base address */
  #define ADSS__GIO__CGU_ADSS_BASE                 (0x500291C0u)
  /** Peripheral ADSS__GIO__CGU_ADSS base pointer */
  #define ADSS__GIO__CGU_ADSS                      ((ADSS_CGU_ADSS_Type *)ADSS__GIO__CGU_ADSS_BASE)
  /** Array initializer of ADSS_CGU_ADSS peripheral base addresses */
  #define ADSS_CGU_ADSS_BASE_ADDRS_NS              { ADSS__GIO__CGU_ADSS_BASE_NS }
  /** Array initializer of ADSS_CGU_ADSS peripheral base pointers */
  #define ADSS_CGU_ADSS_BASE_PTRS_NS               { ADSS__GIO__CGU_ADSS_NS }
  /** Array initializer of ADSS_CGU_ADSS peripheral base addresses */
  #define ADSS_CGU_ADSS_BASE_ADDRS                 { ADSS__GIO__CGU_ADSS_BASE }
  /** Array initializer of ADSS_CGU_ADSS peripheral base pointers */
  #define ADSS_CGU_ADSS_BASE_PTRS                  { ADSS__GIO__CGU_ADSS }
#else
  /** Peripheral ADSS__GIO__CGU_ADSS base address */
  #define ADSS__GIO__CGU_ADSS_BASE                 (0x400291C0u)
  /** Peripheral ADSS__GIO__CGU_ADSS base pointer */
  #define ADSS__GIO__CGU_ADSS                      ((ADSS_CGU_ADSS_Type *)ADSS__GIO__CGU_ADSS_BASE)
  /** Array initializer of ADSS_CGU_ADSS peripheral base addresses */
  #define ADSS_CGU_ADSS_BASE_ADDRS                 { ADSS__GIO__CGU_ADSS_BASE }
  /** Array initializer of ADSS_CGU_ADSS peripheral base pointers */
  #define ADSS_CGU_ADSS_BASE_PTRS                  { ADSS__GIO__CGU_ADSS }
#endif

/* ADSS_CONFIG - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__CONFIG base address */
  #define ADSS__CONFIG_BASE_NS                     (0x40028000u)
  /** Peripheral ADSS__CONFIG base pointer */
  #define ADSS__CONFIG_NS                          ((ADSS_CONFIG_Type *)ADSS__CONFIG_BASE_NS)
  /** Peripheral ADSS__CONFIG base address */
  #define ADSS__CONFIG_BASE                        (0x50028000u)
  /** Peripheral ADSS__CONFIG base pointer */
  #define ADSS__CONFIG                             ((ADSS_CONFIG_Type *)ADSS__CONFIG_BASE)
  /** Array initializer of ADSS_CONFIG peripheral base addresses */
  #define ADSS_CONFIG_BASE_ADDRS_NS                { ADSS__CONFIG_BASE_NS }
  /** Array initializer of ADSS_CONFIG peripheral base pointers */
  #define ADSS_CONFIG_BASE_PTRS_NS                 { ADSS__CONFIG_NS }
  /** Array initializer of ADSS_CONFIG peripheral base addresses */
  #define ADSS_CONFIG_BASE_ADDRS                   { ADSS__CONFIG_BASE }
  /** Array initializer of ADSS_CONFIG peripheral base pointers */
  #define ADSS_CONFIG_BASE_PTRS                    { ADSS__CONFIG }
#else
  /** Peripheral ADSS__CONFIG base address */
  #define ADSS__CONFIG_BASE                        (0x40028000u)
  /** Peripheral ADSS__CONFIG base pointer */
  #define ADSS__CONFIG                             ((ADSS_CONFIG_Type *)ADSS__CONFIG_BASE)
  /** Array initializer of ADSS_CONFIG peripheral base addresses */
  #define ADSS_CONFIG_BASE_ADDRS                   { ADSS__CONFIG_BASE }
  /** Array initializer of ADSS_CONFIG peripheral base pointers */
  #define ADSS_CONFIG_BASE_PTRS                    { ADSS__CONFIG }
#endif

/* ADSS_DEBUG_UART - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__GIO__DEBUG_UART_0 base address */
  #define ADSS__GIO__DEBUG_UART_0_BASE_NS          (0x40029940u)
  /** Peripheral ADSS__GIO__DEBUG_UART_0 base pointer */
  #define ADSS__GIO__DEBUG_UART_0_NS               ((ADSS_DEBUG_UART_Type *)ADSS__GIO__DEBUG_UART_0_BASE_NS)
  /** Peripheral ADSS__GIO__DEBUG_UART_0 base address */
  #define ADSS__GIO__DEBUG_UART_0_BASE             (0x50029940u)
  /** Peripheral ADSS__GIO__DEBUG_UART_0 base pointer */
  #define ADSS__GIO__DEBUG_UART_0                  ((ADSS_DEBUG_UART_Type *)ADSS__GIO__DEBUG_UART_0_BASE)
  /** Peripheral ADSS__GIO__DEBUG_UART_1 base address */
  #define ADSS__GIO__DEBUG_UART_1_BASE_NS          (0x40029958u)
  /** Peripheral ADSS__GIO__DEBUG_UART_1 base pointer */
  #define ADSS__GIO__DEBUG_UART_1_NS               ((ADSS_DEBUG_UART_Type *)ADSS__GIO__DEBUG_UART_1_BASE_NS)
  /** Peripheral ADSS__GIO__DEBUG_UART_1 base address */
  #define ADSS__GIO__DEBUG_UART_1_BASE             (0x50029958u)
  /** Peripheral ADSS__GIO__DEBUG_UART_1 base pointer */
  #define ADSS__GIO__DEBUG_UART_1                  ((ADSS_DEBUG_UART_Type *)ADSS__GIO__DEBUG_UART_1_BASE)
  /** Array initializer of ADSS_DEBUG_UART peripheral base addresses */
  #define ADSS_DEBUG_UART_BASE_ADDRS_NS            { ADSS__GIO__DEBUG_UART_0_BASE_NS, ADSS__GIO__DEBUG_UART_1_BASE_NS }
  /** Array initializer of ADSS_DEBUG_UART peripheral base pointers */
  #define ADSS_DEBUG_UART_BASE_PTRS_NS             { ADSS__GIO__DEBUG_UART_0_NS, ADSS__GIO__DEBUG_UART_1_NS }
  /** Array initializer of ADSS_DEBUG_UART peripheral base addresses */
  #define ADSS_DEBUG_UART_BASE_ADDRS               { ADSS__GIO__DEBUG_UART_0_BASE, ADSS__GIO__DEBUG_UART_1_BASE }
  /** Array initializer of ADSS_DEBUG_UART peripheral base pointers */
  #define ADSS_DEBUG_UART_BASE_PTRS                { ADSS__GIO__DEBUG_UART_0, ADSS__GIO__DEBUG_UART_1 }
#else
  /** Peripheral ADSS__GIO__DEBUG_UART_0 base address */
  #define ADSS__GIO__DEBUG_UART_0_BASE             (0x40029940u)
  /** Peripheral ADSS__GIO__DEBUG_UART_0 base pointer */
  #define ADSS__GIO__DEBUG_UART_0                  ((ADSS_DEBUG_UART_Type *)ADSS__GIO__DEBUG_UART_0_BASE)
  /** Peripheral ADSS__GIO__DEBUG_UART_1 base address */
  #define ADSS__GIO__DEBUG_UART_1_BASE             (0x40029958u)
  /** Peripheral ADSS__GIO__DEBUG_UART_1 base pointer */
  #define ADSS__GIO__DEBUG_UART_1                  ((ADSS_DEBUG_UART_Type *)ADSS__GIO__DEBUG_UART_1_BASE)
  /** Array initializer of ADSS_DEBUG_UART peripheral base addresses */
  #define ADSS_DEBUG_UART_BASE_ADDRS               { ADSS__GIO__DEBUG_UART_0_BASE, ADSS__GIO__DEBUG_UART_1_BASE }
  /** Array initializer of ADSS_DEBUG_UART peripheral base pointers */
  #define ADSS_DEBUG_UART_BASE_PTRS                { ADSS__GIO__DEBUG_UART_0, ADSS__GIO__DEBUG_UART_1 }
#endif

/* ADSS_DEC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__DEC base address */
  #define ADSS__DEC_BASE_NS                        (0x40028C00u)
  /** Peripheral ADSS__DEC base pointer */
  #define ADSS__DEC_NS                             ((ADSS_DEC_Type *)ADSS__DEC_BASE_NS)
  /** Peripheral ADSS__DEC base address */
  #define ADSS__DEC_BASE                           (0x50028C00u)
  /** Peripheral ADSS__DEC base pointer */
  #define ADSS__DEC                                ((ADSS_DEC_Type *)ADSS__DEC_BASE)
  /** Array initializer of ADSS_DEC peripheral base addresses */
  #define ADSS_DEC_BASE_ADDRS_NS                   { ADSS__DEC_BASE_NS }
  /** Array initializer of ADSS_DEC peripheral base pointers */
  #define ADSS_DEC_BASE_PTRS_NS                    { ADSS__DEC_NS }
  /** Array initializer of ADSS_DEC peripheral base addresses */
  #define ADSS_DEC_BASE_ADDRS                      { ADSS__DEC_BASE }
  /** Array initializer of ADSS_DEC peripheral base pointers */
  #define ADSS_DEC_BASE_PTRS                       { ADSS__DEC }
#else
  /** Peripheral ADSS__DEC base address */
  #define ADSS__DEC_BASE                           (0x40028C00u)
  /** Peripheral ADSS__DEC base pointer */
  #define ADSS__DEC                                ((ADSS_DEC_Type *)ADSS__DEC_BASE)
  /** Array initializer of ADSS_DEC peripheral base addresses */
  #define ADSS_DEC_BASE_ADDRS                      { ADSS__DEC_BASE }
  /** Array initializer of ADSS_DEC peripheral base pointers */
  #define ADSS_DEC_BASE_PTRS                       { ADSS__DEC }
#endif

/* ADSS_DP - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__DP_0 base address */
  #define ADSS__DP_0_BASE_NS                       (0x40028100u)
  /** Peripheral ADSS__DP_0 base pointer */
  #define ADSS__DP_0_NS                            ((ADSS_DP_Type *)ADSS__DP_0_BASE_NS)
  /** Peripheral ADSS__DP_0 base address */
  #define ADSS__DP_0_BASE                          (0x50028100u)
  /** Peripheral ADSS__DP_0 base pointer */
  #define ADSS__DP_0                               ((ADSS_DP_Type *)ADSS__DP_0_BASE)
  /** Peripheral ADSS__DP_1 base address */
  #define ADSS__DP_1_BASE_NS                       (0x40028200u)
  /** Peripheral ADSS__DP_1 base pointer */
  #define ADSS__DP_1_NS                            ((ADSS_DP_Type *)ADSS__DP_1_BASE_NS)
  /** Peripheral ADSS__DP_1 base address */
  #define ADSS__DP_1_BASE                          (0x50028200u)
  /** Peripheral ADSS__DP_1 base pointer */
  #define ADSS__DP_1                               ((ADSS_DP_Type *)ADSS__DP_1_BASE)
  /** Peripheral ADSS__DP_2 base address */
  #define ADSS__DP_2_BASE_NS                       (0x40028300u)
  /** Peripheral ADSS__DP_2 base pointer */
  #define ADSS__DP_2_NS                            ((ADSS_DP_Type *)ADSS__DP_2_BASE_NS)
  /** Peripheral ADSS__DP_2 base address */
  #define ADSS__DP_2_BASE                          (0x50028300u)
  /** Peripheral ADSS__DP_2 base pointer */
  #define ADSS__DP_2                               ((ADSS_DP_Type *)ADSS__DP_2_BASE)
  /** Peripheral ADSS__DP_3 base address */
  #define ADSS__DP_3_BASE_NS                       (0x40028400u)
  /** Peripheral ADSS__DP_3 base pointer */
  #define ADSS__DP_3_NS                            ((ADSS_DP_Type *)ADSS__DP_3_BASE_NS)
  /** Peripheral ADSS__DP_3 base address */
  #define ADSS__DP_3_BASE                          (0x50028400u)
  /** Peripheral ADSS__DP_3 base pointer */
  #define ADSS__DP_3                               ((ADSS_DP_Type *)ADSS__DP_3_BASE)
  /** Array initializer of ADSS_DP peripheral base addresses */
  #define ADSS_DP_BASE_ADDRS_NS                    { ADSS__DP_0_BASE_NS, ADSS__DP_1_BASE_NS, ADSS__DP_2_BASE_NS, ADSS__DP_3_BASE_NS }
  /** Array initializer of ADSS_DP peripheral base pointers */
  #define ADSS_DP_BASE_PTRS_NS                     { ADSS__DP_0_NS, ADSS__DP_1_NS, ADSS__DP_2_NS, ADSS__DP_3_NS }
  /** Array initializer of ADSS_DP peripheral base addresses */
  #define ADSS_DP_BASE_ADDRS                       { ADSS__DP_0_BASE, ADSS__DP_1_BASE, ADSS__DP_2_BASE, ADSS__DP_3_BASE }
  /** Array initializer of ADSS_DP peripheral base pointers */
  #define ADSS_DP_BASE_PTRS                        { ADSS__DP_0, ADSS__DP_1, ADSS__DP_2, ADSS__DP_3 }
#else
  /** Peripheral ADSS__DP_0 base address */
  #define ADSS__DP_0_BASE                          (0x40028100u)
  /** Peripheral ADSS__DP_0 base pointer */
  #define ADSS__DP_0                               ((ADSS_DP_Type *)ADSS__DP_0_BASE)
  /** Peripheral ADSS__DP_1 base address */
  #define ADSS__DP_1_BASE                          (0x40028200u)
  /** Peripheral ADSS__DP_1 base pointer */
  #define ADSS__DP_1                               ((ADSS_DP_Type *)ADSS__DP_1_BASE)
  /** Peripheral ADSS__DP_2 base address */
  #define ADSS__DP_2_BASE                          (0x40028300u)
  /** Peripheral ADSS__DP_2 base pointer */
  #define ADSS__DP_2                               ((ADSS_DP_Type *)ADSS__DP_2_BASE)
  /** Peripheral ADSS__DP_3 base address */
  #define ADSS__DP_3_BASE                          (0x40028400u)
  /** Peripheral ADSS__DP_3 base pointer */
  #define ADSS__DP_3                               ((ADSS_DP_Type *)ADSS__DP_3_BASE)
  /** Array initializer of ADSS_DP peripheral base addresses */
  #define ADSS_DP_BASE_ADDRS                       { ADSS__DP_0_BASE, ADSS__DP_1_BASE, ADSS__DP_2_BASE, ADSS__DP_3_BASE }
  /** Array initializer of ADSS_DP peripheral base pointers */
  #define ADSS_DP_BASE_PTRS                        { ADSS__DP_0, ADSS__DP_1, ADSS__DP_2, ADSS__DP_3 }
#endif

/* ADSS_DP_TIMER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__GIO__DP_TIMER base address */
  #define ADSS__GIO__DP_TIMER_BASE_NS              (0x40029500u)
  /** Peripheral ADSS__GIO__DP_TIMER base pointer */
  #define ADSS__GIO__DP_TIMER_NS                   ((ADSS_DP_TIMER_Type *)ADSS__GIO__DP_TIMER_BASE_NS)
  /** Peripheral ADSS__GIO__DP_TIMER base address */
  #define ADSS__GIO__DP_TIMER_BASE                 (0x50029500u)
  /** Peripheral ADSS__GIO__DP_TIMER base pointer */
  #define ADSS__GIO__DP_TIMER                      ((ADSS_DP_TIMER_Type *)ADSS__GIO__DP_TIMER_BASE)
  /** Array initializer of ADSS_DP_TIMER peripheral base addresses */
  #define ADSS_DP_TIMER_BASE_ADDRS_NS              { ADSS__GIO__DP_TIMER_BASE_NS }
  /** Array initializer of ADSS_DP_TIMER peripheral base pointers */
  #define ADSS_DP_TIMER_BASE_PTRS_NS               { ADSS__GIO__DP_TIMER_NS }
  /** Array initializer of ADSS_DP_TIMER peripheral base addresses */
  #define ADSS_DP_TIMER_BASE_ADDRS                 { ADSS__GIO__DP_TIMER_BASE }
  /** Array initializer of ADSS_DP_TIMER peripheral base pointers */
  #define ADSS_DP_TIMER_BASE_PTRS                  { ADSS__GIO__DP_TIMER }
#else
  /** Peripheral ADSS__GIO__DP_TIMER base address */
  #define ADSS__GIO__DP_TIMER_BASE                 (0x40029500u)
  /** Peripheral ADSS__GIO__DP_TIMER base pointer */
  #define ADSS__GIO__DP_TIMER                      ((ADSS_DP_TIMER_Type *)ADSS__GIO__DP_TIMER_BASE)
  /** Array initializer of ADSS_DP_TIMER peripheral base addresses */
  #define ADSS_DP_TIMER_BASE_ADDRS                 { ADSS__GIO__DP_TIMER_BASE }
  /** Array initializer of ADSS_DP_TIMER peripheral base pointers */
  #define ADSS_DP_TIMER_BASE_PTRS                  { ADSS__GIO__DP_TIMER }
#endif

/* ADSS_EB - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__GIO__EB base address */
  #define ADSS__GIO__EB_BASE_NS                    (0x40029200u)
  /** Peripheral ADSS__GIO__EB base pointer */
  #define ADSS__GIO__EB_NS                         ((ADSS_EB_Type *)ADSS__GIO__EB_BASE_NS)
  /** Peripheral ADSS__GIO__EB base address */
  #define ADSS__GIO__EB_BASE                       (0x50029200u)
  /** Peripheral ADSS__GIO__EB base pointer */
  #define ADSS__GIO__EB                            ((ADSS_EB_Type *)ADSS__GIO__EB_BASE)
  /** Array initializer of ADSS_EB peripheral base addresses */
  #define ADSS_EB_BASE_ADDRS_NS                    { ADSS__GIO__EB_BASE_NS }
  /** Array initializer of ADSS_EB peripheral base pointers */
  #define ADSS_EB_BASE_PTRS_NS                     { ADSS__GIO__EB_NS }
  /** Array initializer of ADSS_EB peripheral base addresses */
  #define ADSS_EB_BASE_ADDRS                       { ADSS__GIO__EB_BASE }
  /** Array initializer of ADSS_EB peripheral base pointers */
  #define ADSS_EB_BASE_PTRS                        { ADSS__GIO__EB }
#else
  /** Peripheral ADSS__GIO__EB base address */
  #define ADSS__GIO__EB_BASE                       (0x40029200u)
  /** Peripheral ADSS__GIO__EB base pointer */
  #define ADSS__GIO__EB                            ((ADSS_EB_Type *)ADSS__GIO__EB_BASE)
  /** Array initializer of ADSS_EB peripheral base addresses */
  #define ADSS_EB_BASE_ADDRS                       { ADSS__GIO__EB_BASE }
  /** Array initializer of ADSS_EB peripheral base pointers */
  #define ADSS_EB_BASE_PTRS                        { ADSS__GIO__EB }
#endif

/* ADSS_ERROR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__GIO__ERROR base address */
  #define ADSS__GIO__ERROR_BASE_NS                 (0x40029180u)
  /** Peripheral ADSS__GIO__ERROR base pointer */
  #define ADSS__GIO__ERROR_NS                      ((ADSS_ERROR_Type *)ADSS__GIO__ERROR_BASE_NS)
  /** Peripheral ADSS__GIO__ERROR base address */
  #define ADSS__GIO__ERROR_BASE                    (0x50029180u)
  /** Peripheral ADSS__GIO__ERROR base pointer */
  #define ADSS__GIO__ERROR                         ((ADSS_ERROR_Type *)ADSS__GIO__ERROR_BASE)
  /** Array initializer of ADSS_ERROR peripheral base addresses */
  #define ADSS_ERROR_BASE_ADDRS_NS                 { ADSS__GIO__ERROR_BASE_NS }
  /** Array initializer of ADSS_ERROR peripheral base pointers */
  #define ADSS_ERROR_BASE_PTRS_NS                  { ADSS__GIO__ERROR_NS }
  /** Array initializer of ADSS_ERROR peripheral base addresses */
  #define ADSS_ERROR_BASE_ADDRS                    { ADSS__GIO__ERROR_BASE }
  /** Array initializer of ADSS_ERROR peripheral base pointers */
  #define ADSS_ERROR_BASE_PTRS                     { ADSS__GIO__ERROR }
#else
  /** Peripheral ADSS__GIO__ERROR base address */
  #define ADSS__GIO__ERROR_BASE                    (0x40029180u)
  /** Peripheral ADSS__GIO__ERROR base pointer */
  #define ADSS__GIO__ERROR                         ((ADSS_ERROR_Type *)ADSS__GIO__ERROR_BASE)
  /** Array initializer of ADSS_ERROR peripheral base addresses */
  #define ADSS_ERROR_BASE_ADDRS                    { ADSS__GIO__ERROR_BASE }
  /** Array initializer of ADSS_ERROR peripheral base pointers */
  #define ADSS_ERROR_BASE_PTRS                     { ADSS__GIO__ERROR }
#endif

/* ADSS_GPIO - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__GIO__GPIO base address */
  #define ADSS__GIO__GPIO_BASE_NS                  (0x40029000u)
  /** Peripheral ADSS__GIO__GPIO base pointer */
  #define ADSS__GIO__GPIO_NS                       ((ADSS_GPIO_Type *)ADSS__GIO__GPIO_BASE_NS)
  /** Peripheral ADSS__GIO__GPIO base address */
  #define ADSS__GIO__GPIO_BASE                     (0x50029000u)
  /** Peripheral ADSS__GIO__GPIO base pointer */
  #define ADSS__GIO__GPIO                          ((ADSS_GPIO_Type *)ADSS__GIO__GPIO_BASE)
  /** Array initializer of ADSS_GPIO peripheral base addresses */
  #define ADSS_GPIO_BASE_ADDRS_NS                  { ADSS__GIO__GPIO_BASE_NS }
  /** Array initializer of ADSS_GPIO peripheral base pointers */
  #define ADSS_GPIO_BASE_PTRS_NS                   { ADSS__GIO__GPIO_NS }
  /** Array initializer of ADSS_GPIO peripheral base addresses */
  #define ADSS_GPIO_BASE_ADDRS                     { ADSS__GIO__GPIO_BASE }
  /** Array initializer of ADSS_GPIO peripheral base pointers */
  #define ADSS_GPIO_BASE_PTRS                      { ADSS__GIO__GPIO }
#else
  /** Peripheral ADSS__GIO__GPIO base address */
  #define ADSS__GIO__GPIO_BASE                     (0x40029000u)
  /** Peripheral ADSS__GIO__GPIO base pointer */
  #define ADSS__GIO__GPIO                          ((ADSS_GPIO_Type *)ADSS__GIO__GPIO_BASE)
  /** Array initializer of ADSS_GPIO peripheral base addresses */
  #define ADSS_GPIO_BASE_ADDRS                     { ADSS__GIO__GPIO_BASE }
  /** Array initializer of ADSS_GPIO peripheral base pointers */
  #define ADSS_GPIO_BASE_PTRS                      { ADSS__GIO__GPIO }
#endif

/* ADSS_INT - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__INT base address */
  #define ADSS__INT_BASE_NS                        (0x40028D00u)
  /** Peripheral ADSS__INT base pointer */
  #define ADSS__INT_NS                             ((ADSS_INT_Type *)ADSS__INT_BASE_NS)
  /** Peripheral ADSS__INT base address */
  #define ADSS__INT_BASE                           (0x50028D00u)
  /** Peripheral ADSS__INT base pointer */
  #define ADSS__INT                                ((ADSS_INT_Type *)ADSS__INT_BASE)
  /** Array initializer of ADSS_INT peripheral base addresses */
  #define ADSS_INT_BASE_ADDRS_NS                   { ADSS__INT_BASE_NS }
  /** Array initializer of ADSS_INT peripheral base pointers */
  #define ADSS_INT_BASE_PTRS_NS                    { ADSS__INT_NS }
  /** Array initializer of ADSS_INT peripheral base addresses */
  #define ADSS_INT_BASE_ADDRS                      { ADSS__INT_BASE }
  /** Array initializer of ADSS_INT peripheral base pointers */
  #define ADSS_INT_BASE_PTRS                       { ADSS__INT }
#else
  /** Peripheral ADSS__INT base address */
  #define ADSS__INT_BASE                           (0x40028D00u)
  /** Peripheral ADSS__INT base pointer */
  #define ADSS__INT                                ((ADSS_INT_Type *)ADSS__INT_BASE)
  /** Array initializer of ADSS_INT peripheral base addresses */
  #define ADSS_INT_BASE_ADDRS                      { ADSS__INT_BASE }
  /** Array initializer of ADSS_INT peripheral base pointers */
  #define ADSS_INT_BASE_PTRS                       { ADSS__INT }
#endif

/* ADSS_MC_TIMER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__GIO__MC_TIMER base address */
  #define ADSS__GIO__MC_TIMER_BASE_NS              (0x40029A00u)
  /** Peripheral ADSS__GIO__MC_TIMER base pointer */
  #define ADSS__GIO__MC_TIMER_NS                   ((ADSS_MC_TIMER_Type *)ADSS__GIO__MC_TIMER_BASE_NS)
  /** Peripheral ADSS__GIO__MC_TIMER base address */
  #define ADSS__GIO__MC_TIMER_BASE                 (0x50029A00u)
  /** Peripheral ADSS__GIO__MC_TIMER base pointer */
  #define ADSS__GIO__MC_TIMER                      ((ADSS_MC_TIMER_Type *)ADSS__GIO__MC_TIMER_BASE)
  /** Array initializer of ADSS_MC_TIMER peripheral base addresses */
  #define ADSS_MC_TIMER_BASE_ADDRS_NS              { ADSS__GIO__MC_TIMER_BASE_NS }
  /** Array initializer of ADSS_MC_TIMER peripheral base pointers */
  #define ADSS_MC_TIMER_BASE_PTRS_NS               { ADSS__GIO__MC_TIMER_NS }
  /** Array initializer of ADSS_MC_TIMER peripheral base addresses */
  #define ADSS_MC_TIMER_BASE_ADDRS                 { ADSS__GIO__MC_TIMER_BASE }
  /** Array initializer of ADSS_MC_TIMER peripheral base pointers */
  #define ADSS_MC_TIMER_BASE_PTRS                  { ADSS__GIO__MC_TIMER }
#else
  /** Peripheral ADSS__GIO__MC_TIMER base address */
  #define ADSS__GIO__MC_TIMER_BASE                 (0x40029A00u)
  /** Peripheral ADSS__GIO__MC_TIMER base pointer */
  #define ADSS__GIO__MC_TIMER                      ((ADSS_MC_TIMER_Type *)ADSS__GIO__MC_TIMER_BASE)
  /** Array initializer of ADSS_MC_TIMER peripheral base addresses */
  #define ADSS_MC_TIMER_BASE_ADDRS                 { ADSS__GIO__MC_TIMER_BASE }
  /** Array initializer of ADSS_MC_TIMER peripheral base pointers */
  #define ADSS_MC_TIMER_BASE_PTRS                  { ADSS__GIO__MC_TIMER }
#endif

/* ADSS_MUTEX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__GIO__MUTEX base address */
  #define ADSS__GIO__MUTEX_BASE_NS                 (0x40029900u)
  /** Peripheral ADSS__GIO__MUTEX base pointer */
  #define ADSS__GIO__MUTEX_NS                      ((ADSS_MUTEX_Type *)ADSS__GIO__MUTEX_BASE_NS)
  /** Peripheral ADSS__GIO__MUTEX base address */
  #define ADSS__GIO__MUTEX_BASE                    (0x50029900u)
  /** Peripheral ADSS__GIO__MUTEX base pointer */
  #define ADSS__GIO__MUTEX                         ((ADSS_MUTEX_Type *)ADSS__GIO__MUTEX_BASE)
  /** Array initializer of ADSS_MUTEX peripheral base addresses */
  #define ADSS_MUTEX_BASE_ADDRS_NS                 { ADSS__GIO__MUTEX_BASE_NS }
  /** Array initializer of ADSS_MUTEX peripheral base pointers */
  #define ADSS_MUTEX_BASE_PTRS_NS                  { ADSS__GIO__MUTEX_NS }
  /** Array initializer of ADSS_MUTEX peripheral base addresses */
  #define ADSS_MUTEX_BASE_ADDRS                    { ADSS__GIO__MUTEX_BASE }
  /** Array initializer of ADSS_MUTEX peripheral base pointers */
  #define ADSS_MUTEX_BASE_PTRS                     { ADSS__GIO__MUTEX }
#else
  /** Peripheral ADSS__GIO__MUTEX base address */
  #define ADSS__GIO__MUTEX_BASE                    (0x40029900u)
  /** Peripheral ADSS__GIO__MUTEX base pointer */
  #define ADSS__GIO__MUTEX                         ((ADSS_MUTEX_Type *)ADSS__GIO__MUTEX_BASE)
  /** Array initializer of ADSS_MUTEX peripheral base addresses */
  #define ADSS_MUTEX_BASE_ADDRS                    { ADSS__GIO__MUTEX_BASE }
  /** Array initializer of ADSS_MUTEX peripheral base pointers */
  #define ADSS_MUTEX_BASE_PTRS                     { ADSS__GIO__MUTEX }
#endif

/* ADSS_PMON - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__GIO__PM base address */
  #define ADSS__GIO__PM_BASE_NS                    (0x40029080u)
  /** Peripheral ADSS__GIO__PM base pointer */
  #define ADSS__GIO__PM_NS                         ((ADSS_PMON_Type *)ADSS__GIO__PM_BASE_NS)
  /** Peripheral ADSS__GIO__PM base address */
  #define ADSS__GIO__PM_BASE                       (0x50029080u)
  /** Peripheral ADSS__GIO__PM base pointer */
  #define ADSS__GIO__PM                            ((ADSS_PMON_Type *)ADSS__GIO__PM_BASE)
  /** Array initializer of ADSS_PMON peripheral base addresses */
  #define ADSS_PMON_BASE_ADDRS_NS                  { ADSS__GIO__PM_BASE_NS }
  /** Array initializer of ADSS_PMON peripheral base pointers */
  #define ADSS_PMON_BASE_PTRS_NS                   { ADSS__GIO__PM_NS }
  /** Array initializer of ADSS_PMON peripheral base addresses */
  #define ADSS_PMON_BASE_ADDRS                     { ADSS__GIO__PM_BASE }
  /** Array initializer of ADSS_PMON peripheral base pointers */
  #define ADSS_PMON_BASE_PTRS                      { ADSS__GIO__PM }
#else
  /** Peripheral ADSS__GIO__PM base address */
  #define ADSS__GIO__PM_BASE                       (0x40029080u)
  /** Peripheral ADSS__GIO__PM base pointer */
  #define ADSS__GIO__PM                            ((ADSS_PMON_Type *)ADSS__GIO__PM_BASE)
  /** Array initializer of ADSS_PMON peripheral base addresses */
  #define ADSS_PMON_BASE_ADDRS                     { ADSS__GIO__PM_BASE }
  /** Array initializer of ADSS_PMON peripheral base pointers */
  #define ADSS_PMON_BASE_PTRS                      { ADSS__GIO__PM }
#endif

/* ADSS_SDMA - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__GIO__SDMA base address */
  #define ADSS__GIO__SDMA_BASE_NS                  (0x4002A800u)
  /** Peripheral ADSS__GIO__SDMA base pointer */
  #define ADSS__GIO__SDMA_NS                       ((ADSS_SDMA_Type *)ADSS__GIO__SDMA_BASE_NS)
  /** Peripheral ADSS__GIO__SDMA base address */
  #define ADSS__GIO__SDMA_BASE                     (0x5002A800u)
  /** Peripheral ADSS__GIO__SDMA base pointer */
  #define ADSS__GIO__SDMA                          ((ADSS_SDMA_Type *)ADSS__GIO__SDMA_BASE)
  /** Array initializer of ADSS_SDMA peripheral base addresses */
  #define ADSS_SDMA_BASE_ADDRS_NS                  { ADSS__GIO__SDMA_BASE_NS }
  /** Array initializer of ADSS_SDMA peripheral base pointers */
  #define ADSS_SDMA_BASE_PTRS_NS                   { ADSS__GIO__SDMA_NS }
  /** Array initializer of ADSS_SDMA peripheral base addresses */
  #define ADSS_SDMA_BASE_ADDRS                     { ADSS__GIO__SDMA_BASE }
  /** Array initializer of ADSS_SDMA peripheral base pointers */
  #define ADSS_SDMA_BASE_PTRS                      { ADSS__GIO__SDMA }
#else
  /** Peripheral ADSS__GIO__SDMA base address */
  #define ADSS__GIO__SDMA_BASE                     (0x4002A800u)
  /** Peripheral ADSS__GIO__SDMA base pointer */
  #define ADSS__GIO__SDMA                          ((ADSS_SDMA_Type *)ADSS__GIO__SDMA_BASE)
  /** Array initializer of ADSS_SDMA peripheral base addresses */
  #define ADSS_SDMA_BASE_ADDRS                     { ADSS__GIO__SDMA_BASE }
  /** Array initializer of ADSS_SDMA peripheral base pointers */
  #define ADSS_SDMA_BASE_PTRS                      { ADSS__GIO__SDMA }
#endif

/* ADSS_SYNC_SOURCE - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__GIO__SYNC_SOURCE base address */
  #define ADSS__GIO__SYNC_SOURCE_BASE_NS           (0x40029980u)
  /** Peripheral ADSS__GIO__SYNC_SOURCE base pointer */
  #define ADSS__GIO__SYNC_SOURCE_NS                ((ADSS_SYNC_SOURCE_Type *)ADSS__GIO__SYNC_SOURCE_BASE_NS)
  /** Peripheral ADSS__GIO__SYNC_SOURCE base address */
  #define ADSS__GIO__SYNC_SOURCE_BASE              (0x50029980u)
  /** Peripheral ADSS__GIO__SYNC_SOURCE base pointer */
  #define ADSS__GIO__SYNC_SOURCE                   ((ADSS_SYNC_SOURCE_Type *)ADSS__GIO__SYNC_SOURCE_BASE)
  /** Array initializer of ADSS_SYNC_SOURCE peripheral base addresses */
  #define ADSS_SYNC_SOURCE_BASE_ADDRS_NS           { ADSS__GIO__SYNC_SOURCE_BASE_NS }
  /** Array initializer of ADSS_SYNC_SOURCE peripheral base pointers */
  #define ADSS_SYNC_SOURCE_BASE_PTRS_NS            { ADSS__GIO__SYNC_SOURCE_NS }
  /** Array initializer of ADSS_SYNC_SOURCE peripheral base addresses */
  #define ADSS_SYNC_SOURCE_BASE_ADDRS              { ADSS__GIO__SYNC_SOURCE_BASE }
  /** Array initializer of ADSS_SYNC_SOURCE peripheral base pointers */
  #define ADSS_SYNC_SOURCE_BASE_PTRS               { ADSS__GIO__SYNC_SOURCE }
#else
  /** Peripheral ADSS__GIO__SYNC_SOURCE base address */
  #define ADSS__GIO__SYNC_SOURCE_BASE              (0x40029980u)
  /** Peripheral ADSS__GIO__SYNC_SOURCE base pointer */
  #define ADSS__GIO__SYNC_SOURCE                   ((ADSS_SYNC_SOURCE_Type *)ADSS__GIO__SYNC_SOURCE_BASE)
  /** Array initializer of ADSS_SYNC_SOURCE peripheral base addresses */
  #define ADSS_SYNC_SOURCE_BASE_ADDRS              { ADSS__GIO__SYNC_SOURCE_BASE }
  /** Array initializer of ADSS_SYNC_SOURCE peripheral base pointers */
  #define ADSS_SYNC_SOURCE_BASE_PTRS               { ADSS__GIO__SYNC_SOURCE }
#endif

/* ADSS_TIMER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__GIO__TIMER base address */
  #define ADSS__GIO__TIMER_BASE_NS                 (0x40029400u)
  /** Peripheral ADSS__GIO__TIMER base pointer */
  #define ADSS__GIO__TIMER_NS                      ((ADSS_TIMER_Type *)ADSS__GIO__TIMER_BASE_NS)
  /** Peripheral ADSS__GIO__TIMER base address */
  #define ADSS__GIO__TIMER_BASE                    (0x50029400u)
  /** Peripheral ADSS__GIO__TIMER base pointer */
  #define ADSS__GIO__TIMER                         ((ADSS_TIMER_Type *)ADSS__GIO__TIMER_BASE)
  /** Array initializer of ADSS_TIMER peripheral base addresses */
  #define ADSS_TIMER_BASE_ADDRS_NS                 { ADSS__GIO__TIMER_BASE_NS }
  /** Array initializer of ADSS_TIMER peripheral base pointers */
  #define ADSS_TIMER_BASE_PTRS_NS                  { ADSS__GIO__TIMER_NS }
  /** Array initializer of ADSS_TIMER peripheral base addresses */
  #define ADSS_TIMER_BASE_ADDRS                    { ADSS__GIO__TIMER_BASE }
  /** Array initializer of ADSS_TIMER peripheral base pointers */
  #define ADSS_TIMER_BASE_PTRS                     { ADSS__GIO__TIMER }
#else
  /** Peripheral ADSS__GIO__TIMER base address */
  #define ADSS__GIO__TIMER_BASE                    (0x40029400u)
  /** Peripheral ADSS__GIO__TIMER base pointer */
  #define ADSS__GIO__TIMER                         ((ADSS_TIMER_Type *)ADSS__GIO__TIMER_BASE)
  /** Array initializer of ADSS_TIMER peripheral base addresses */
  #define ADSS_TIMER_BASE_ADDRS                    { ADSS__GIO__TIMER_BASE }
  /** Array initializer of ADSS_TIMER peripheral base pointers */
  #define ADSS_TIMER_BASE_PTRS                     { ADSS__GIO__TIMER }
#endif

/* ADSS_TRACE - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__GIO__TRACE base address */
  #define ADSS__GIO__TRACE_BASE_NS                 (0x40029600u)
  /** Peripheral ADSS__GIO__TRACE base pointer */
  #define ADSS__GIO__TRACE_NS                      ((ADSS_TRACE_Type *)ADSS__GIO__TRACE_BASE_NS)
  /** Peripheral ADSS__GIO__TRACE base address */
  #define ADSS__GIO__TRACE_BASE                    (0x50029600u)
  /** Peripheral ADSS__GIO__TRACE base pointer */
  #define ADSS__GIO__TRACE                         ((ADSS_TRACE_Type *)ADSS__GIO__TRACE_BASE)
  /** Array initializer of ADSS_TRACE peripheral base addresses */
  #define ADSS_TRACE_BASE_ADDRS_NS                 { ADSS__GIO__TRACE_BASE_NS }
  /** Array initializer of ADSS_TRACE peripheral base pointers */
  #define ADSS_TRACE_BASE_PTRS_NS                  { ADSS__GIO__TRACE_NS }
  /** Array initializer of ADSS_TRACE peripheral base addresses */
  #define ADSS_TRACE_BASE_ADDRS                    { ADSS__GIO__TRACE_BASE }
  /** Array initializer of ADSS_TRACE peripheral base pointers */
  #define ADSS_TRACE_BASE_PTRS                     { ADSS__GIO__TRACE }
#else
  /** Peripheral ADSS__GIO__TRACE base address */
  #define ADSS__GIO__TRACE_BASE                    (0x40029600u)
  /** Peripheral ADSS__GIO__TRACE base pointer */
  #define ADSS__GIO__TRACE                         ((ADSS_TRACE_Type *)ADSS__GIO__TRACE_BASE)
  /** Array initializer of ADSS_TRACE peripheral base addresses */
  #define ADSS_TRACE_BASE_ADDRS                    { ADSS__GIO__TRACE_BASE }
  /** Array initializer of ADSS_TRACE peripheral base pointers */
  #define ADSS_TRACE_BASE_PTRS                     { ADSS__GIO__TRACE }
#endif

/* AHB2XSPMEM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__AHB2XSPMEM base address */
  #define NSS__AHB2XSPMEM_BASE_NS                  (0x4080C000u)
  /** Peripheral NSS__AHB2XSPMEM base pointer */
  #define NSS__AHB2XSPMEM_NS                       ((AHB2XSPMEM_Type *)NSS__AHB2XSPMEM_BASE_NS)
  /** Peripheral NSS__AHB2XSPMEM base address */
  #define NSS__AHB2XSPMEM_BASE                     (0x5080C000u)
  /** Peripheral NSS__AHB2XSPMEM base pointer */
  #define NSS__AHB2XSPMEM                          ((AHB2XSPMEM_Type *)NSS__AHB2XSPMEM_BASE)
  /** Array initializer of AHB2XSPMEM peripheral base addresses */
  #define AHB2XSPMEM_BASE_ADDRS_NS                 { NSS__AHB2XSPMEM_BASE_NS }
  /** Array initializer of AHB2XSPMEM peripheral base pointers */
  #define AHB2XSPMEM_BASE_PTRS_NS                  { NSS__AHB2XSPMEM_NS }
  /** Array initializer of AHB2XSPMEM peripheral base addresses */
  #define AHB2XSPMEM_BASE_ADDRS                    { NSS__AHB2XSPMEM_BASE }
  /** Array initializer of AHB2XSPMEM peripheral base pointers */
  #define AHB2XSPMEM_BASE_PTRS                     { NSS__AHB2XSPMEM }
#else
  /** Peripheral NSS__AHB2XSPMEM base address */
  #define NSS__AHB2XSPMEM_BASE                     (0x4080C000u)
  /** Peripheral NSS__AHB2XSPMEM base pointer */
  #define NSS__AHB2XSPMEM                          ((AHB2XSPMEM_Type *)NSS__AHB2XSPMEM_BASE)
  /** Array initializer of AHB2XSPMEM peripheral base addresses */
  #define AHB2XSPMEM_BASE_ADDRS                    { NSS__AHB2XSPMEM_BASE }
  /** Array initializer of AHB2XSPMEM peripheral base pointers */
  #define AHB2XSPMEM_BASE_PTRS                     { NSS__AHB2XSPMEM }
#endif

/* CBU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CBU base address */
  #define CBU_BASE_NS                              (0x4002D000u)
  /** Peripheral CBU base pointer */
  #define CBU_NS                                   ((CBU_Type *)CBU_BASE_NS)
  /** Peripheral CBU base address */
  #define CBU_BASE                                 (0x5002D000u)
  /** Peripheral CBU base pointer */
  #define CBU                                      ((CBU_Type *)CBU_BASE)
  /** Array initializer of CBU peripheral base addresses */
  #define CBU_BASE_ADDRS_NS                        { CBU_BASE_NS }
  /** Array initializer of CBU peripheral base pointers */
  #define CBU_BASE_PTRS_NS                         { CBU_NS }
  /** Array initializer of CBU peripheral base addresses */
  #define CBU_BASE_ADDRS                           { CBU_BASE }
  /** Array initializer of CBU peripheral base pointers */
  #define CBU_BASE_PTRS                            { CBU }
#else
  /** Peripheral CBU base address */
  #define CBU_BASE                                 (0x4002D000u)
  /** Peripheral CBU base pointer */
  #define CBU                                      ((CBU_Type *)CBU_BASE)
  /** Array initializer of CBU peripheral base addresses */
  #define CBU_BASE_ADDRS                           { CBU_BASE }
  /** Array initializer of CBU peripheral base pointers */
  #define CBU_BASE_PTRS                            { CBU }
#endif

/* CDOG - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__CDOG_0 base address */
  #define CTRLSS__CDOG_0_BASE_NS                   (0x400A1000u)
  /** Peripheral CTRLSS__CDOG_0 base pointer */
  #define CTRLSS__CDOG_0_NS                        ((CDOG_Type *)CTRLSS__CDOG_0_BASE_NS)
  /** Peripheral CTRLSS__CDOG_0 base address */
  #define CTRLSS__CDOG_0_BASE                      (0x500A1000u)
  /** Peripheral CTRLSS__CDOG_0 base pointer */
  #define CTRLSS__CDOG_0                           ((CDOG_Type *)CTRLSS__CDOG_0_BASE)
  /** Array initializer of CDOG peripheral base addresses */
  #define CDOG_BASE_ADDRS_NS                       { CTRLSS__CDOG_0_BASE_NS }
  /** Array initializer of CDOG peripheral base pointers */
  #define CDOG_BASE_PTRS_NS                        { CTRLSS__CDOG_0_NS }
  /** Array initializer of CDOG peripheral base addresses */
  #define CDOG_BASE_ADDRS                          { CTRLSS__CDOG_0_BASE }
  /** Array initializer of CDOG peripheral base pointers */
  #define CDOG_BASE_PTRS                           { CTRLSS__CDOG_0 }
#else
  /** Peripheral CTRLSS__CDOG_0 base address */
  #define CTRLSS__CDOG_0_BASE                      (0x400A1000u)
  /** Peripheral CTRLSS__CDOG_0 base pointer */
  #define CTRLSS__CDOG_0                           ((CDOG_Type *)CTRLSS__CDOG_0_BASE)
  /** Array initializer of CDOG peripheral base addresses */
  #define CDOG_BASE_ADDRS                          { CTRLSS__CDOG_0_BASE }
  /** Array initializer of CDOG peripheral base pointers */
  #define CDOG_BASE_PTRS                           { CTRLSS__CDOG_0 }
#endif
/** Interrupt vectors for the CDOG peripheral type */
#define CDOG_IRQS                                { CDOG_IRQn }

/* CGU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CGU base address */
  #define CGU_BASE_NS                              (0x40021000u)
  /** Peripheral CGU base pointer */
  #define CGU_NS                                   ((CGU_Type *)CGU_BASE_NS)
  /** Peripheral CGU base address */
  #define CGU_BASE                                 (0x50021000u)
  /** Peripheral CGU base pointer */
  #define CGU                                      ((CGU_Type *)CGU_BASE)
  /** Array initializer of CGU peripheral base addresses */
  #define CGU_BASE_ADDRS_NS                        { CGU_BASE_NS }
  /** Array initializer of CGU peripheral base pointers */
  #define CGU_BASE_PTRS_NS                         { CGU_NS }
  /** Array initializer of CGU peripheral base addresses */
  #define CGU_BASE_ADDRS                           { CGU_BASE }
  /** Array initializer of CGU peripheral base pointers */
  #define CGU_BASE_PTRS                            { CGU }
#else
  /** Peripheral CGU base address */
  #define CGU_BASE                                 (0x40021000u)
  /** Peripheral CGU base pointer */
  #define CGU                                      ((CGU_Type *)CGU_BASE)
  /** Array initializer of CGU peripheral base addresses */
  #define CGU_BASE_ADDRS                           { CGU_BASE }
  /** Array initializer of CGU peripheral base pointers */
  #define CGU_BASE_PTRS                            { CGU }
#endif

/* CRC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__CRC_0 base address */
  #define CTRLSS__CRC_0_BASE_NS                    (0x40095000u)
  /** Peripheral CTRLSS__CRC_0 base pointer */
  #define CRC_ENGINE_NS                            ((CRC_Type *)CTRLSS__CRC_0_BASE_NS)
  /** Peripheral CTRLSS__CRC_0 base address */
  #define CTRLSS__CRC_0_BASE                       (0x50095000u)
  /** Peripheral CTRLSS__CRC_0 base pointer */
  #define CRC_ENGINE                               ((CRC_Type *)CTRLSS__CRC_0_BASE)
  /** Array initializer of CRC peripheral base addresses */
  #define CRC_BASE_ADDRS_NS                        { CTRLSS__CRC_0_BASE_NS }
  /** Array initializer of CRC peripheral base pointers */
  #define CRC_BASE_PTRS_NS                         { CRC_ENGINE_NS }
  /** Array initializer of CRC peripheral base addresses */
  #define CRC_BASE_ADDRS                           { CTRLSS__CRC_0_BASE }
  /** Array initializer of CRC peripheral base pointers */
  #define CRC_BASE_PTRS                            { CRC_ENGINE }
#else
  /** Peripheral CTRLSS__CRC_0 base address */
  #define CTRLSS__CRC_0_BASE                       (0x40095000u)
  /** Peripheral CTRLSS__CRC_0 base pointer */
  #define CRC_ENGINE                               ((CRC_Type *)CTRLSS__CRC_0_BASE)
  /** Array initializer of CRC peripheral base addresses */
  #define CRC_BASE_ADDRS                           { CTRLSS__CRC_0_BASE }
  /** Array initializer of CRC peripheral base pointers */
  #define CRC_BASE_PTRS                            { CRC_ENGINE }
#endif

/* CSI2_MIXEL_NXP_RX_PHY_PN3598 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598 base address */
  #define VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598_BASE_NS (0x40026200u)
  /** Peripheral VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598 base pointer */
  #define VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598_NS ((CSI2_MIXEL_NXP_RX_PHY_PN3598_Type *)VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598_BASE_NS)
  /** Peripheral VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598 base address */
  #define VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598_BASE (0x50026200u)
  /** Peripheral VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598 base pointer */
  #define VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598  ((CSI2_MIXEL_NXP_RX_PHY_PN3598_Type *)VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598_BASE)
  /** Array initializer of CSI2_MIXEL_NXP_RX_PHY_PN3598 peripheral base addresses
   * */
  #define CSI2_MIXEL_NXP_RX_PHY_PN3598_BASE_ADDRS_NS { VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598_BASE_NS }
  /** Array initializer of CSI2_MIXEL_NXP_RX_PHY_PN3598 peripheral base pointers */
  #define CSI2_MIXEL_NXP_RX_PHY_PN3598_BASE_PTRS_NS { VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598_NS }
  /** Array initializer of CSI2_MIXEL_NXP_RX_PHY_PN3598 peripheral base addresses
   * */
  #define CSI2_MIXEL_NXP_RX_PHY_PN3598_BASE_ADDRS  { VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598_BASE }
  /** Array initializer of CSI2_MIXEL_NXP_RX_PHY_PN3598 peripheral base pointers */
  #define CSI2_MIXEL_NXP_RX_PHY_PN3598_BASE_PTRS   { VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598 }
#else
  /** Peripheral VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598 base address */
  #define VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598_BASE (0x40026200u)
  /** Peripheral VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598 base pointer */
  #define VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598  ((CSI2_MIXEL_NXP_RX_PHY_PN3598_Type *)VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598_BASE)
  /** Array initializer of CSI2_MIXEL_NXP_RX_PHY_PN3598 peripheral base addresses
   * */
  #define CSI2_MIXEL_NXP_RX_PHY_PN3598_BASE_ADDRS  { VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598_BASE }
  /** Array initializer of CSI2_MIXEL_NXP_RX_PHY_PN3598 peripheral base pointers */
  #define CSI2_MIXEL_NXP_RX_PHY_PN3598_BASE_PTRS   { VISION_SS__CSI2_MIXEL_NXP_RX_PHY_PN3598 }
#endif

/* CSI2_RX_AXI_MASTER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral VISION_SS__CSI2_RX_AXI_MASTER base address */
  #define VISION_SS__CSI2_RX_AXI_MASTER_BASE_NS    (0x40026300u)
  /** Peripheral VISION_SS__CSI2_RX_AXI_MASTER base pointer */
  #define VISION_SS__CSI2_RX_AXI_MASTER_NS         ((CSI2_RX_AXI_MASTER_Type *)VISION_SS__CSI2_RX_AXI_MASTER_BASE_NS)
  /** Peripheral VISION_SS__CSI2_RX_AXI_MASTER base address */
  #define VISION_SS__CSI2_RX_AXI_MASTER_BASE       (0x50026300u)
  /** Peripheral VISION_SS__CSI2_RX_AXI_MASTER base pointer */
  #define VISION_SS__CSI2_RX_AXI_MASTER            ((CSI2_RX_AXI_MASTER_Type *)VISION_SS__CSI2_RX_AXI_MASTER_BASE)
  /** Array initializer of CSI2_RX_AXI_MASTER peripheral base addresses */
  #define CSI2_RX_AXI_MASTER_BASE_ADDRS_NS         { VISION_SS__CSI2_RX_AXI_MASTER_BASE_NS }
  /** Array initializer of CSI2_RX_AXI_MASTER peripheral base pointers */
  #define CSI2_RX_AXI_MASTER_BASE_PTRS_NS          { VISION_SS__CSI2_RX_AXI_MASTER_NS }
  /** Array initializer of CSI2_RX_AXI_MASTER peripheral base addresses */
  #define CSI2_RX_AXI_MASTER_BASE_ADDRS            { VISION_SS__CSI2_RX_AXI_MASTER_BASE }
  /** Array initializer of CSI2_RX_AXI_MASTER peripheral base pointers */
  #define CSI2_RX_AXI_MASTER_BASE_PTRS             { VISION_SS__CSI2_RX_AXI_MASTER }
#else
  /** Peripheral VISION_SS__CSI2_RX_AXI_MASTER base address */
  #define VISION_SS__CSI2_RX_AXI_MASTER_BASE       (0x40026300u)
  /** Peripheral VISION_SS__CSI2_RX_AXI_MASTER base pointer */
  #define VISION_SS__CSI2_RX_AXI_MASTER            ((CSI2_RX_AXI_MASTER_Type *)VISION_SS__CSI2_RX_AXI_MASTER_BASE)
  /** Array initializer of CSI2_RX_AXI_MASTER peripheral base addresses */
  #define CSI2_RX_AXI_MASTER_BASE_ADDRS            { VISION_SS__CSI2_RX_AXI_MASTER_BASE }
  /** Array initializer of CSI2_RX_AXI_MASTER peripheral base pointers */
  #define CSI2_RX_AXI_MASTER_BASE_PTRS             { VISION_SS__CSI2_RX_AXI_MASTER }
#endif

/* CSI2_RX_BASE - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral VISION_SS__CSI2_RX_BASE base address */
  #define VISION_SS__CSI2_RX_BASE_BASE_NS          (0x40026000u)
  /** Peripheral VISION_SS__CSI2_RX_BASE base pointer */
  #define VISION_SS__CSI2_RX_BASE_NS               ((CSI2_RX_BASE_Type *)VISION_SS__CSI2_RX_BASE_BASE_NS)
  /** Peripheral VISION_SS__CSI2_RX_BASE base address */
  #define VISION_SS__CSI2_RX_BASE_BASE             (0x50026000u)
  /** Peripheral VISION_SS__CSI2_RX_BASE base pointer */
  #define VISION_SS__CSI2_RX_BASE                  ((CSI2_RX_BASE_Type *)VISION_SS__CSI2_RX_BASE_BASE)
  /** Array initializer of CSI2_RX_BASE peripheral base addresses */
  #define CSI2_RX_BASE_BASE_ADDRS_NS               { VISION_SS__CSI2_RX_BASE_BASE_NS }
  /** Array initializer of CSI2_RX_BASE peripheral base pointers */
  #define CSI2_RX_BASE_BASE_PTRS_NS                { VISION_SS__CSI2_RX_BASE_NS }
  /** Array initializer of CSI2_RX_BASE peripheral base addresses */
  #define CSI2_RX_BASE_BASE_ADDRS                  { VISION_SS__CSI2_RX_BASE_BASE }
  /** Array initializer of CSI2_RX_BASE peripheral base pointers */
  #define CSI2_RX_BASE_BASE_PTRS                   { VISION_SS__CSI2_RX_BASE }
#else
  /** Peripheral VISION_SS__CSI2_RX_BASE base address */
  #define VISION_SS__CSI2_RX_BASE_BASE             (0x40026000u)
  /** Peripheral VISION_SS__CSI2_RX_BASE base pointer */
  #define VISION_SS__CSI2_RX_BASE                  ((CSI2_RX_BASE_Type *)VISION_SS__CSI2_RX_BASE_BASE)
  /** Array initializer of CSI2_RX_BASE peripheral base addresses */
  #define CSI2_RX_BASE_BASE_ADDRS                  { VISION_SS__CSI2_RX_BASE_BASE }
  /** Array initializer of CSI2_RX_BASE peripheral base pointers */
  #define CSI2_RX_BASE_BASE_PTRS                   { VISION_SS__CSI2_RX_BASE }
#endif

/* CTIMER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__CTIMER_0 base address */
  #define CTRLSS__CTIMER_0_BASE_NS                 (0x40007000u)
  /** Peripheral CTRLSS__CTIMER_0 base pointer */
  #define CTRLSS__CTIMER_0_NS                      ((CTIMER_Type *)CTRLSS__CTIMER_0_BASE_NS)
  /** Peripheral CTRLSS__CTIMER_0 base address */
  #define CTRLSS__CTIMER_0_BASE                    (0x50007000u)
  /** Peripheral CTRLSS__CTIMER_0 base pointer */
  #define CTRLSS__CTIMER_0                         ((CTIMER_Type *)CTRLSS__CTIMER_0_BASE)
  /** Peripheral CTRLSS__CTIMER_1 base address */
  #define CTRLSS__CTIMER_1_BASE_NS                 (0x40008000u)
  /** Peripheral CTRLSS__CTIMER_1 base pointer */
  #define CTRLSS__CTIMER_1_NS                      ((CTIMER_Type *)CTRLSS__CTIMER_1_BASE_NS)
  /** Peripheral CTRLSS__CTIMER_1 base address */
  #define CTRLSS__CTIMER_1_BASE                    (0x50008000u)
  /** Peripheral CTRLSS__CTIMER_1 base pointer */
  #define CTRLSS__CTIMER_1                         ((CTIMER_Type *)CTRLSS__CTIMER_1_BASE)
  /** Peripheral CTRLSS__CTIMER_2 base address */
  #define CTRLSS__CTIMER_2_BASE_NS                 (0x40009000u)
  /** Peripheral CTRLSS__CTIMER_2 base pointer */
  #define CTRLSS__CTIMER_2_NS                      ((CTIMER_Type *)CTRLSS__CTIMER_2_BASE_NS)
  /** Peripheral CTRLSS__CTIMER_2 base address */
  #define CTRLSS__CTIMER_2_BASE                    (0x50009000u)
  /** Peripheral CTRLSS__CTIMER_2 base pointer */
  #define CTRLSS__CTIMER_2                         ((CTIMER_Type *)CTRLSS__CTIMER_2_BASE)
  /** Peripheral CTRLSS__CTIMER_3 base address */
  #define CTRLSS__CTIMER_3_BASE_NS                 (0x4000A000u)
  /** Peripheral CTRLSS__CTIMER_3 base pointer */
  #define CTRLSS__CTIMER_3_NS                      ((CTIMER_Type *)CTRLSS__CTIMER_3_BASE_NS)
  /** Peripheral CTRLSS__CTIMER_3 base address */
  #define CTRLSS__CTIMER_3_BASE                    (0x5000A000u)
  /** Peripheral CTRLSS__CTIMER_3 base pointer */
  #define CTRLSS__CTIMER_3                         ((CTIMER_Type *)CTRLSS__CTIMER_3_BASE)
  /** Peripheral CTRLSS__CTIMER_4 base address */
  #define CTRLSS__CTIMER_4_BASE_NS                 (0x4000B000u)
  /** Peripheral CTRLSS__CTIMER_4 base pointer */
  #define CTRLSS__CTIMER_4_NS                      ((CTIMER_Type *)CTRLSS__CTIMER_4_BASE_NS)
  /** Peripheral CTRLSS__CTIMER_4 base address */
  #define CTRLSS__CTIMER_4_BASE                    (0x5000B000u)
  /** Peripheral CTRLSS__CTIMER_4 base pointer */
  #define CTRLSS__CTIMER_4                         ((CTIMER_Type *)CTRLSS__CTIMER_4_BASE)
  /** Array initializer of CTIMER peripheral base addresses */
  #define CTIMER_BASE_ADDRS_NS                     { CTRLSS__CTIMER_0_BASE_NS, CTRLSS__CTIMER_1_BASE_NS, CTRLSS__CTIMER_2_BASE_NS, CTRLSS__CTIMER_3_BASE_NS, CTRLSS__CTIMER_4_BASE_NS }
  /** Array initializer of CTIMER peripheral base pointers */
  #define CTIMER_BASE_PTRS_NS                      { CTRLSS__CTIMER_0_NS, CTRLSS__CTIMER_1_NS, CTRLSS__CTIMER_2_NS, CTRLSS__CTIMER_3_NS, CTRLSS__CTIMER_4_NS }
  /** Array initializer of CTIMER peripheral base addresses */
  #define CTIMER_BASE_ADDRS                        { CTRLSS__CTIMER_0_BASE, CTRLSS__CTIMER_1_BASE, CTRLSS__CTIMER_2_BASE, CTRLSS__CTIMER_3_BASE, CTRLSS__CTIMER_4_BASE }
  /** Array initializer of CTIMER peripheral base pointers */
  #define CTIMER_BASE_PTRS                         { CTRLSS__CTIMER_0, CTRLSS__CTIMER_1, CTRLSS__CTIMER_2, CTRLSS__CTIMER_3, CTRLSS__CTIMER_4 }
#else
  /** Peripheral CTRLSS__CTIMER_0 base address */
  #define CTRLSS__CTIMER_0_BASE                    (0x40007000u)
  /** Peripheral CTRLSS__CTIMER_0 base pointer */
  #define CTRLSS__CTIMER_0                         ((CTIMER_Type *)CTRLSS__CTIMER_0_BASE)
  /** Peripheral CTRLSS__CTIMER_1 base address */
  #define CTRLSS__CTIMER_1_BASE                    (0x40008000u)
  /** Peripheral CTRLSS__CTIMER_1 base pointer */
  #define CTRLSS__CTIMER_1                         ((CTIMER_Type *)CTRLSS__CTIMER_1_BASE)
  /** Peripheral CTRLSS__CTIMER_2 base address */
  #define CTRLSS__CTIMER_2_BASE                    (0x40009000u)
  /** Peripheral CTRLSS__CTIMER_2 base pointer */
  #define CTRLSS__CTIMER_2                         ((CTIMER_Type *)CTRLSS__CTIMER_2_BASE)
  /** Peripheral CTRLSS__CTIMER_3 base address */
  #define CTRLSS__CTIMER_3_BASE                    (0x4000A000u)
  /** Peripheral CTRLSS__CTIMER_3 base pointer */
  #define CTRLSS__CTIMER_3                         ((CTIMER_Type *)CTRLSS__CTIMER_3_BASE)
  /** Peripheral CTRLSS__CTIMER_4 base address */
  #define CTRLSS__CTIMER_4_BASE                    (0x4000B000u)
  /** Peripheral CTRLSS__CTIMER_4 base pointer */
  #define CTRLSS__CTIMER_4                         ((CTIMER_Type *)CTRLSS__CTIMER_4_BASE)
  /** Array initializer of CTIMER peripheral base addresses */
  #define CTIMER_BASE_ADDRS                        { CTRLSS__CTIMER_0_BASE, CTRLSS__CTIMER_1_BASE, CTRLSS__CTIMER_2_BASE, CTRLSS__CTIMER_3_BASE, CTRLSS__CTIMER_4_BASE }
  /** Array initializer of CTIMER peripheral base pointers */
  #define CTIMER_BASE_PTRS                         { CTRLSS__CTIMER_0, CTRLSS__CTIMER_1, CTRLSS__CTIMER_2, CTRLSS__CTIMER_3, CTRLSS__CTIMER_4 }
#endif
/** Interrupt vectors for the CTIMER peripheral type */
#define CTIMER_IRQS                              { CTIMER0_IRQn, CTIMER1_IRQn, CTIMER2_IRQn, CTIMER3_IRQn, CTIMER4_IRQn }

/* DEBUG_MBOX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__DEBUG_MBOX_0 base address */
  #define CTRLSS__DEBUG_MBOX_0_BASE_NS             (0x40096000u)
  /** Peripheral CTRLSS__DEBUG_MBOX_0 base pointer */
  #define CTRLSS__DEBUG_MBOX_0_NS                  ((DEBUG_MBOX_Type *)CTRLSS__DEBUG_MBOX_0_BASE_NS)
  /** Peripheral CTRLSS__DEBUG_MBOX_0 base address */
  #define CTRLSS__DEBUG_MBOX_0_BASE                (0x50096000u)
  /** Peripheral CTRLSS__DEBUG_MBOX_0 base pointer */
  #define CTRLSS__DEBUG_MBOX_0                     ((DEBUG_MBOX_Type *)CTRLSS__DEBUG_MBOX_0_BASE)
  /** Array initializer of DEBUG_MBOX peripheral base addresses */
  #define DEBUG_MBOX_BASE_ADDRS_NS                 { CTRLSS__DEBUG_MBOX_0_BASE_NS }
  /** Array initializer of DEBUG_MBOX peripheral base pointers */
  #define DEBUG_MBOX_BASE_PTRS_NS                  { CTRLSS__DEBUG_MBOX_0_NS }
  /** Array initializer of DEBUG_MBOX peripheral base addresses */
  #define DEBUG_MBOX_BASE_ADDRS                    { CTRLSS__DEBUG_MBOX_0_BASE }
  /** Array initializer of DEBUG_MBOX peripheral base pointers */
  #define DEBUG_MBOX_BASE_PTRS                     { CTRLSS__DEBUG_MBOX_0 }
#else
  /** Peripheral CTRLSS__DEBUG_MBOX_0 base address */
  #define CTRLSS__DEBUG_MBOX_0_BASE                (0x40096000u)
  /** Peripheral CTRLSS__DEBUG_MBOX_0 base pointer */
  #define CTRLSS__DEBUG_MBOX_0                     ((DEBUG_MBOX_Type *)CTRLSS__DEBUG_MBOX_0_BASE)
  /** Array initializer of DEBUG_MBOX peripheral base addresses */
  #define DEBUG_MBOX_BASE_ADDRS                    { CTRLSS__DEBUG_MBOX_0_BASE }
  /** Array initializer of DEBUG_MBOX peripheral base pointers */
  #define DEBUG_MBOX_BASE_PTRS                     { CTRLSS__DEBUG_MBOX_0 }
#endif

/* DMA - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__DMA_0 base address */
  #define CTRLSS__DMA_0_BASE_NS                    (0x40082000u)
  /** Peripheral CTRLSS__DMA_0 base pointer */
  #define CTRLSS__DMA_0_NS                         ((DMA_Type *)CTRLSS__DMA_0_BASE_NS)
  /** Peripheral CTRLSS__DMA_0 base address */
  #define CTRLSS__DMA_0_BASE                       (0x50082000u)
  /** Peripheral CTRLSS__DMA_0 base pointer */
  #define CTRLSS__DMA_0                            ((DMA_Type *)CTRLSS__DMA_0_BASE)
  /** Peripheral CTRLSS__DMA_1 base address */
  #define CTRLSS__DMA_1_BASE_NS                    (0x400A7000u)
  /** Peripheral CTRLSS__DMA_1 base pointer */
  #define CTRLSS__DMA_1_NS                         ((DMA_Type *)CTRLSS__DMA_1_BASE_NS)
  /** Peripheral CTRLSS__DMA_1 base address */
  #define CTRLSS__DMA_1_BASE                       (0x500A7000u)
  /** Peripheral CTRLSS__DMA_1 base pointer */
  #define CTRLSS__DMA_1                            ((DMA_Type *)CTRLSS__DMA_1_BASE)
  /** Array initializer of DMA peripheral base addresses */
  #define DMA_BASE_ADDRS_NS                        { CTRLSS__DMA_0_BASE_NS, CTRLSS__DMA_1_BASE_NS }
  /** Array initializer of DMA peripheral base pointers */
  #define DMA_BASE_PTRS_NS                         { CTRLSS__DMA_0_NS, CTRLSS__DMA_1_NS }
  /** Array initializer of DMA peripheral base addresses */
  #define DMA_BASE_ADDRS                           { CTRLSS__DMA_0_BASE, CTRLSS__DMA_1_BASE }
  /** Array initializer of DMA peripheral base pointers */
  #define DMA_BASE_PTRS                            { CTRLSS__DMA_0, CTRLSS__DMA_1 }
#else
  /** Peripheral CTRLSS__DMA_0 base address */
  #define CTRLSS__DMA_0_BASE                       (0x40082000u)
  /** Peripheral CTRLSS__DMA_0 base pointer */
  #define CTRLSS__DMA_0                            ((DMA_Type *)CTRLSS__DMA_0_BASE)
  /** Peripheral CTRLSS__DMA_1 base address */
  #define CTRLSS__DMA_1_BASE                       (0x400A7000u)
  /** Peripheral CTRLSS__DMA_1 base pointer */
  #define CTRLSS__DMA_1                            ((DMA_Type *)CTRLSS__DMA_1_BASE)
  /** Array initializer of DMA peripheral base addresses */
  #define DMA_BASE_ADDRS                           { CTRLSS__DMA_0_BASE, CTRLSS__DMA_1_BASE }
  /** Array initializer of DMA peripheral base pointers */
  #define DMA_BASE_PTRS                            { CTRLSS__DMA_0, CTRLSS__DMA_1 }
#endif
/** Interrupt vectors for the DMA peripheral type */
#define DMA_IRQS                                 { DMA0_IRQn, DMA1_IRQn }
#define DMA_CHN_IRQS                             { { DMA0_CH0_IRQn, DMA0_CH1_IRQn, DMA0_CH2_IRQn, DMA0_CH3_IRQn, DMA0_CH4_IRQn, DMA0_CH5_IRQn, DMA0_CH6_IRQn, DMA0_CH7_IRQn, DMA0_CH8_IRQn, DMA0_CH9_IRQn, DMA0_CH10_IRQn, DMA0_CH11_IRQn, DMA0_CH12_IRQn, DMA0_CH13_IRQn, DMA0_CH14_IRQn, DMA0_CH15_IRQn, DMA0_CH16_IRQn, DMA0_CH17_IRQn, DMA0_CH18_IRQn, DMA0_CH19_IRQn, DMA0_CH20_IRQn, DMA0_CH21_IRQn, DMA0_CH22_IRQn, DMA0_CH23_IRQn }, \
                                                   { DMA1_CH0_IRQn, DMA1_CH1_IRQn, DMA1_CH2_IRQn, DMA1_CH3_IRQn, DMA1_CH4_IRQn, DMA1_CH5_IRQn, DMA1_CH6_IRQn, DMA1_CH7_IRQn, DMA1_CH8_IRQn, DMA1_CH9_IRQn, DMA1_CH10_IRQn, DMA1_CH11_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn } }

/* DMA_CRC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__DMA_CRC base address */
  #define NSS__DMA_CRC_BASE_NS                     (0x40806400u)
  /** Peripheral NSS__DMA_CRC base pointer */
  #define NSS__DMA_CRC_NS                          ((DMA_CRC_Type *)NSS__DMA_CRC_BASE_NS)
  /** Peripheral NSS__DMA_CRC base address */
  #define NSS__DMA_CRC_BASE                        (0x50806400u)
  /** Peripheral NSS__DMA_CRC base pointer */
  #define NSS__DMA_CRC                             ((DMA_CRC_Type *)NSS__DMA_CRC_BASE)
  /** Array initializer of DMA_CRC peripheral base addresses */
  #define DMA_CRC_BASE_ADDRS_NS                    { NSS__DMA_CRC_BASE_NS }
  /** Array initializer of DMA_CRC peripheral base pointers */
  #define DMA_CRC_BASE_PTRS_NS                     { NSS__DMA_CRC_NS }
  /** Array initializer of DMA_CRC peripheral base addresses */
  #define DMA_CRC_BASE_ADDRS                       { NSS__DMA_CRC_BASE }
  /** Array initializer of DMA_CRC peripheral base pointers */
  #define DMA_CRC_BASE_PTRS                        { NSS__DMA_CRC }
#else
  /** Peripheral NSS__DMA_CRC base address */
  #define NSS__DMA_CRC_BASE                        (0x40806400u)
  /** Peripheral NSS__DMA_CRC base pointer */
  #define NSS__DMA_CRC                             ((DMA_CRC_Type *)NSS__DMA_CRC_BASE)
  /** Array initializer of DMA_CRC peripheral base addresses */
  #define DMA_CRC_BASE_ADDRS                       { NSS__DMA_CRC_BASE }
  /** Array initializer of DMA_CRC peripheral base pointers */
  #define DMA_CRC_BASE_PTRS                        { NSS__DMA_CRC }
#endif

/* DSWM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral DSWM base address */
  #define DSWM_BASE_NS                             (0x40022000u)
  /** Peripheral DSWM base pointer */
  #define DSWM_NS                                  ((DSWM_Type *)DSWM_BASE_NS)
  /** Peripheral DSWM base address */
  #define DSWM_BASE                                (0x50022000u)
  /** Peripheral DSWM base pointer */
  #define DSWM                                     ((DSWM_Type *)DSWM_BASE)
  /** Array initializer of DSWM peripheral base addresses */
  #define DSWM_BASE_ADDRS_NS                       { DSWM_BASE_NS }
  /** Array initializer of DSWM peripheral base pointers */
  #define DSWM_BASE_PTRS_NS                        { DSWM_NS }
  /** Array initializer of DSWM peripheral base addresses */
  #define DSWM_BASE_ADDRS                          { DSWM_BASE }
  /** Array initializer of DSWM peripheral base pointers */
  #define DSWM_BASE_PTRS                           { DSWM }
#else
  /** Peripheral DSWM base address */
  #define DSWM_BASE                                (0x40022000u)
  /** Peripheral DSWM base pointer */
  #define DSWM                                     ((DSWM_Type *)DSWM_BASE)
  /** Array initializer of DSWM peripheral base addresses */
  #define DSWM_BASE_ADDRS                          { DSWM_BASE }
  /** Array initializer of DSWM peripheral base pointers */
  #define DSWM_BASE_PTRS                           { DSWM }
#endif

/* EVENT_CTRL - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__EVENT_CTRL_0 base address */
  #define CTRLSS__EVENT_CTRL_0_BASE_NS             (0x4000C000u)
  /** Peripheral CTRLSS__EVENT_CTRL_0 base pointer */
  #define CTRLSS__EVENT_CTRL_0_NS                  ((EVENT_CTRL_Type *)CTRLSS__EVENT_CTRL_0_BASE_NS)
  /** Peripheral CTRLSS__EVENT_CTRL_0 base address */
  #define CTRLSS__EVENT_CTRL_0_BASE                (0x5000C000u)
  /** Peripheral CTRLSS__EVENT_CTRL_0 base pointer */
  #define CTRLSS__EVENT_CTRL_0                     ((EVENT_CTRL_Type *)CTRLSS__EVENT_CTRL_0_BASE)
  /** Array initializer of EVENT_CTRL peripheral base addresses */
  #define EVENT_CTRL_BASE_ADDRS_NS                 { CTRLSS__EVENT_CTRL_0_BASE_NS }
  /** Array initializer of EVENT_CTRL peripheral base pointers */
  #define EVENT_CTRL_BASE_PTRS_NS                  { CTRLSS__EVENT_CTRL_0_NS }
  /** Array initializer of EVENT_CTRL peripheral base addresses */
  #define EVENT_CTRL_BASE_ADDRS                    { CTRLSS__EVENT_CTRL_0_BASE }
  /** Array initializer of EVENT_CTRL peripheral base pointers */
  #define EVENT_CTRL_BASE_PTRS                     { CTRLSS__EVENT_CTRL_0 }
#else
  /** Peripheral CTRLSS__EVENT_CTRL_0 base address */
  #define CTRLSS__EVENT_CTRL_0_BASE                (0x4000C000u)
  /** Peripheral CTRLSS__EVENT_CTRL_0 base pointer */
  #define CTRLSS__EVENT_CTRL_0                     ((EVENT_CTRL_Type *)CTRLSS__EVENT_CTRL_0_BASE)
  /** Array initializer of EVENT_CTRL peripheral base addresses */
  #define EVENT_CTRL_BASE_ADDRS                    { CTRLSS__EVENT_CTRL_0_BASE }
  /** Array initializer of EVENT_CTRL peripheral base pointers */
  #define EVENT_CTRL_BASE_PTRS                     { CTRLSS__EVENT_CTRL_0 }
#endif

/* FLEXCOMM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__FLEXCOMM_0 base address */
  #define CTRLSS__FLEXCOMM_0_BASE_NS               (0x40086000u)
  /** Peripheral CTRLSS__FLEXCOMM_0 base pointer */
  #define CTRLSS__FLEXCOMM_0_NS                    ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_0_BASE_NS)
  /** Peripheral CTRLSS__FLEXCOMM_0 base address */
  #define CTRLSS__FLEXCOMM_0_BASE                  (0x50086000u)
  /** Peripheral CTRLSS__FLEXCOMM_0 base pointer */
  #define CTRLSS__FLEXCOMM_0                       ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_0_BASE)
  /** Peripheral CTRLSS__FLEXCOMM_1 base address */
  #define CTRLSS__FLEXCOMM_1_BASE_NS               (0x40087000u)
  /** Peripheral CTRLSS__FLEXCOMM_1 base pointer */
  #define CTRLSS__FLEXCOMM_1_NS                    ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_1_BASE_NS)
  /** Peripheral CTRLSS__FLEXCOMM_1 base address */
  #define CTRLSS__FLEXCOMM_1_BASE                  (0x50087000u)
  /** Peripheral CTRLSS__FLEXCOMM_1 base pointer */
  #define CTRLSS__FLEXCOMM_1                       ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_1_BASE)
  /** Peripheral CTRLSS__FLEXCOMM_2 base address */
  #define CTRLSS__FLEXCOMM_2_BASE_NS               (0x40088000u)
  /** Peripheral CTRLSS__FLEXCOMM_2 base pointer */
  #define CTRLSS__FLEXCOMM_2_NS                    ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_2_BASE_NS)
  /** Peripheral CTRLSS__FLEXCOMM_2 base address */
  #define CTRLSS__FLEXCOMM_2_BASE                  (0x50088000u)
  /** Peripheral CTRLSS__FLEXCOMM_2 base pointer */
  #define CTRLSS__FLEXCOMM_2                       ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_2_BASE)
  /** Peripheral CTRLSS__FLEXCOMM_3 base address */
  #define CTRLSS__FLEXCOMM_3_BASE_NS               (0x40090000u)
  /** Peripheral CTRLSS__FLEXCOMM_3 base pointer */
  #define CTRLSS__FLEXCOMM_3_NS                    ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_3_BASE_NS)
  /** Peripheral CTRLSS__FLEXCOMM_3 base address */
  #define CTRLSS__FLEXCOMM_3_BASE                  (0x50090000u)
  /** Peripheral CTRLSS__FLEXCOMM_3 base pointer */
  #define CTRLSS__FLEXCOMM_3                       ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_3_BASE)
  /** Peripheral CTRLSS__FLEXCOMM_4 base address */
  #define CTRLSS__FLEXCOMM_4_BASE_NS               (0x40091000u)
  /** Peripheral CTRLSS__FLEXCOMM_4 base pointer */
  #define CTRLSS__FLEXCOMM_4_NS                    ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_4_BASE_NS)
  /** Peripheral CTRLSS__FLEXCOMM_4 base address */
  #define CTRLSS__FLEXCOMM_4_BASE                  (0x50091000u)
  /** Peripheral CTRLSS__FLEXCOMM_4 base pointer */
  #define CTRLSS__FLEXCOMM_4                       ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_4_BASE)
  /** Peripheral CTRLSS__FLEXCOMM_5 base address */
  #define CTRLSS__FLEXCOMM_5_BASE_NS               (0x40092000u)
  /** Peripheral CTRLSS__FLEXCOMM_5 base pointer */
  #define CTRLSS__FLEXCOMM_5_NS                    ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_5_BASE_NS)
  /** Peripheral CTRLSS__FLEXCOMM_5 base address */
  #define CTRLSS__FLEXCOMM_5_BASE                  (0x50092000u)
  /** Peripheral CTRLSS__FLEXCOMM_5 base pointer */
  #define CTRLSS__FLEXCOMM_5                       ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_5_BASE)
  /** Array initializer of FLEXCOMM peripheral base addresses */
  #define FLEXCOMM_BASE_ADDRS_NS                   { CTRLSS__FLEXCOMM_0_BASE_NS, CTRLSS__FLEXCOMM_1_BASE_NS, CTRLSS__FLEXCOMM_2_BASE_NS, CTRLSS__FLEXCOMM_3_BASE_NS, CTRLSS__FLEXCOMM_4_BASE_NS, CTRLSS__FLEXCOMM_5_BASE_NS }
  /** Array initializer of FLEXCOMM peripheral base pointers */
  #define FLEXCOMM_BASE_PTRS_NS                    { CTRLSS__FLEXCOMM_0_NS, CTRLSS__FLEXCOMM_1_NS, CTRLSS__FLEXCOMM_2_NS, CTRLSS__FLEXCOMM_3_NS, CTRLSS__FLEXCOMM_4_NS, CTRLSS__FLEXCOMM_5_NS }
  /** Array initializer of FLEXCOMM peripheral base addresses */
  #define FLEXCOMM_BASE_ADDRS                      { CTRLSS__FLEXCOMM_0_BASE, CTRLSS__FLEXCOMM_1_BASE, CTRLSS__FLEXCOMM_2_BASE, CTRLSS__FLEXCOMM_3_BASE, CTRLSS__FLEXCOMM_4_BASE, CTRLSS__FLEXCOMM_5_BASE }
  /** Array initializer of FLEXCOMM peripheral base pointers */
  #define FLEXCOMM_BASE_PTRS                       { CTRLSS__FLEXCOMM_0, CTRLSS__FLEXCOMM_1, CTRLSS__FLEXCOMM_2, CTRLSS__FLEXCOMM_3, CTRLSS__FLEXCOMM_4, CTRLSS__FLEXCOMM_5 }
#else
  /** Peripheral CTRLSS__FLEXCOMM_0 base address */
  #define CTRLSS__FLEXCOMM_0_BASE                  (0x40086000u)
  /** Peripheral CTRLSS__FLEXCOMM_0 base pointer */
  #define CTRLSS__FLEXCOMM_0                       ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_0_BASE)
  /** Peripheral CTRLSS__FLEXCOMM_1 base address */
  #define CTRLSS__FLEXCOMM_1_BASE                  (0x40087000u)
  /** Peripheral CTRLSS__FLEXCOMM_1 base pointer */
  #define CTRLSS__FLEXCOMM_1                       ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_1_BASE)
  /** Peripheral CTRLSS__FLEXCOMM_2 base address */
  #define CTRLSS__FLEXCOMM_2_BASE                  (0x40088000u)
  /** Peripheral CTRLSS__FLEXCOMM_2 base pointer */
  #define CTRLSS__FLEXCOMM_2                       ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_2_BASE)
  /** Peripheral CTRLSS__FLEXCOMM_3 base address */
  #define CTRLSS__FLEXCOMM_3_BASE                  (0x40090000u)
  /** Peripheral CTRLSS__FLEXCOMM_3 base pointer */
  #define CTRLSS__FLEXCOMM_3                       ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_3_BASE)
  /** Peripheral CTRLSS__FLEXCOMM_4 base address */
  #define CTRLSS__FLEXCOMM_4_BASE                  (0x40091000u)
  /** Peripheral CTRLSS__FLEXCOMM_4 base pointer */
  #define CTRLSS__FLEXCOMM_4                       ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_4_BASE)
  /** Peripheral CTRLSS__FLEXCOMM_5 base address */
  #define CTRLSS__FLEXCOMM_5_BASE                  (0x40092000u)
  /** Peripheral CTRLSS__FLEXCOMM_5 base pointer */
  #define CTRLSS__FLEXCOMM_5                       ((FLEXCOMM_Type *)CTRLSS__FLEXCOMM_5_BASE)
  /** Array initializer of FLEXCOMM peripheral base addresses */
  #define FLEXCOMM_BASE_ADDRS                      { CTRLSS__FLEXCOMM_0_BASE, CTRLSS__FLEXCOMM_1_BASE, CTRLSS__FLEXCOMM_2_BASE, CTRLSS__FLEXCOMM_3_BASE, CTRLSS__FLEXCOMM_4_BASE, CTRLSS__FLEXCOMM_5_BASE }
  /** Array initializer of FLEXCOMM peripheral base pointers */
  #define FLEXCOMM_BASE_PTRS                       { CTRLSS__FLEXCOMM_0, CTRLSS__FLEXCOMM_1, CTRLSS__FLEXCOMM_2, CTRLSS__FLEXCOMM_3, CTRLSS__FLEXCOMM_4, CTRLSS__FLEXCOMM_5 }
#endif
/** Interrupt vectors for the FLEXCOMM peripheral type */
#define FLEXCOMM_IRQS                            { FLEXCOMM0_IRQn, FLEXCOMM1_IRQn, FLEXCOMM2_IRQn, FLEXCOMM3_IRQn, FLEXCOMM4_IRQn, FLEXCOMM5_IRQn }

/* FREQME - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__FREQME_0 base address */
  #define CTRLSS__FREQME_0_BASE_NS                 (0x40003000u)
  /** Peripheral CTRLSS__FREQME_0 base pointer */
  #define CTRLSS__FREQME_0_NS                      ((FREQME_Type *)CTRLSS__FREQME_0_BASE_NS)
  /** Peripheral CTRLSS__FREQME_0 base address */
  #define CTRLSS__FREQME_0_BASE                    (0x50003000u)
  /** Peripheral CTRLSS__FREQME_0 base pointer */
  #define CTRLSS__FREQME_0                         ((FREQME_Type *)CTRLSS__FREQME_0_BASE)
  /** Array initializer of FREQME peripheral base addresses */
  #define FREQME_BASE_ADDRS_NS                     { CTRLSS__FREQME_0_BASE_NS }
  /** Array initializer of FREQME peripheral base pointers */
  #define FREQME_BASE_PTRS_NS                      { CTRLSS__FREQME_0_NS }
  /** Array initializer of FREQME peripheral base addresses */
  #define FREQME_BASE_ADDRS                        { CTRLSS__FREQME_0_BASE }
  /** Array initializer of FREQME peripheral base pointers */
  #define FREQME_BASE_PTRS                         { CTRLSS__FREQME_0 }
#else
  /** Peripheral CTRLSS__FREQME_0 base address */
  #define CTRLSS__FREQME_0_BASE                    (0x40003000u)
  /** Peripheral CTRLSS__FREQME_0 base pointer */
  #define CTRLSS__FREQME_0                         ((FREQME_Type *)CTRLSS__FREQME_0_BASE)
  /** Array initializer of FREQME peripheral base addresses */
  #define FREQME_BASE_ADDRS                        { CTRLSS__FREQME_0_BASE }
  /** Array initializer of FREQME peripheral base pointers */
  #define FREQME_BASE_PTRS                         { CTRLSS__FREQME_0 }
#endif

/* GINT - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__GINT_0 base address */
  #define CTRLSS__GINT_0_BASE_NS                   (0x40000000u)
  /** Peripheral CTRLSS__GINT_0 base pointer */
  #define CTRLSS__GINT_0_NS                        ((GINT_Type *)CTRLSS__GINT_0_BASE_NS)
  /** Peripheral CTRLSS__GINT_0 base address */
  #define CTRLSS__GINT_0_BASE                      (0x50000000u)
  /** Peripheral CTRLSS__GINT_0 base pointer */
  #define CTRLSS__GINT_0                           ((GINT_Type *)CTRLSS__GINT_0_BASE)
  /** Array initializer of GINT peripheral base addresses */
  #define GINT_BASE_ADDRS_NS                       { CTRLSS__GINT_0_BASE_NS }
  /** Array initializer of GINT peripheral base pointers */
  #define GINT_BASE_PTRS_NS                        { CTRLSS__GINT_0_NS }
  /** Array initializer of GINT peripheral base addresses */
  #define GINT_BASE_ADDRS                          { CTRLSS__GINT_0_BASE }
  /** Array initializer of GINT peripheral base pointers */
  #define GINT_BASE_PTRS                           { CTRLSS__GINT_0 }
#else
  /** Peripheral CTRLSS__GINT_0 base address */
  #define CTRLSS__GINT_0_BASE                      (0x40000000u)
  /** Peripheral CTRLSS__GINT_0 base pointer */
  #define CTRLSS__GINT_0                           ((GINT_Type *)CTRLSS__GINT_0_BASE)
  /** Array initializer of GINT peripheral base addresses */
  #define GINT_BASE_ADDRS                          { CTRLSS__GINT_0_BASE }
  /** Array initializer of GINT peripheral base pointers */
  #define GINT_BASE_PTRS                           { CTRLSS__GINT_0 }
#endif
/** Interrupt vectors for the GINT peripheral type */
#define GINT_IRQS                                { GINT0_IRQn }

/* GPIO - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__GPIO base address */
  #define CTRLSS__GPIO_BASE_NS                     (0x4008C000u)
  /** Peripheral CTRLSS__GPIO base pointer */
  #define CTRLSS__GPIO_NS                          ((GPIO_Type *)CTRLSS__GPIO_BASE_NS)
  /** Peripheral CTRLSS__GPIO base address */
  #define CTRLSS__GPIO_BASE                        (0x5008C000u)
  /** Peripheral CTRLSS__GPIO base pointer */
  #define CTRLSS__GPIO                             ((GPIO_Type *)CTRLSS__GPIO_BASE)
  /** Peripheral CTRLSS__SECGPIO base address */
  #define CTRLSS__SECGPIO_BASE_NS                  (0x400A8000u)
  /** Peripheral CTRLSS__SECGPIO base pointer */
  #define CTRLSS__SECGPIO_NS                       ((GPIO_Type *)CTRLSS__SECGPIO_BASE_NS)
  /** Peripheral CTRLSS__SECGPIO base address */
  #define CTRLSS__SECGPIO_BASE                     (0x500A8000u)
  /** Peripheral CTRLSS__SECGPIO base pointer */
  #define CTRLSS__SECGPIO                          ((GPIO_Type *)CTRLSS__SECGPIO_BASE)
  /** Array initializer of GPIO peripheral base addresses */
  #define GPIO_BASE_ADDRS_NS                       { CTRLSS__GPIO_BASE_NS, CTRLSS__SECGPIO_BASE_NS }
  /** Array initializer of GPIO peripheral base pointers */
  #define GPIO_BASE_PTRS_NS                        { CTRLSS__GPIO_NS, CTRLSS__SECGPIO_NS }
  /** Array initializer of GPIO peripheral base addresses */
  #define GPIO_BASE_ADDRS                          { CTRLSS__GPIO_BASE, CTRLSS__SECGPIO_BASE }
  /** Array initializer of GPIO peripheral base pointers */
  #define GPIO_BASE_PTRS                           { CTRLSS__GPIO, CTRLSS__SECGPIO }
#else
  /** Peripheral CTRLSS__GPIO base address */
  #define CTRLSS__GPIO_BASE                        (0x4008C000u)
  /** Peripheral CTRLSS__GPIO base pointer */
  #define CTRLSS__GPIO                             ((GPIO_Type *)CTRLSS__GPIO_BASE)
  /** Peripheral CTRLSS__SECGPIO base address */
  #define CTRLSS__SECGPIO_BASE                     (0x400A8000u)
  /** Peripheral CTRLSS__SECGPIO base pointer */
  #define CTRLSS__SECGPIO                          ((GPIO_Type *)CTRLSS__SECGPIO_BASE)
  /** Array initializer of GPIO peripheral base addresses */
  #define GPIO_BASE_ADDRS                          { CTRLSS__GPIO_BASE, CTRLSS__SECGPIO_BASE }
  /** Array initializer of GPIO peripheral base pointers */
  #define GPIO_BASE_PTRS                           { CTRLSS__GPIO, CTRLSS__SECGPIO }
#endif

/* HSI - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__GIO__HSI base address */
  #define ADSS__GIO__HSI_BASE_NS                   (0x4002A000u)
  /** Peripheral ADSS__GIO__HSI base pointer */
  #define ADSS__GIO__HSI_NS                        ((HSI_Type *)ADSS__GIO__HSI_BASE_NS)
  /** Peripheral ADSS__GIO__HSI base address */
  #define ADSS__GIO__HSI_BASE                      (0x5002A000u)
  /** Peripheral ADSS__GIO__HSI base pointer */
  #define ADSS__GIO__HSI                           ((HSI_Type *)ADSS__GIO__HSI_BASE)
  /** Array initializer of HSI peripheral base addresses */
  #define HSI_BASE_ADDRS_NS                        { ADSS__GIO__HSI_BASE_NS }
  /** Array initializer of HSI peripheral base pointers */
  #define HSI_BASE_PTRS_NS                         { ADSS__GIO__HSI_NS }
  /** Array initializer of HSI peripheral base addresses */
  #define HSI_BASE_ADDRS                           { ADSS__GIO__HSI_BASE }
  /** Array initializer of HSI peripheral base pointers */
  #define HSI_BASE_PTRS                            { ADSS__GIO__HSI }
#else
  /** Peripheral ADSS__GIO__HSI base address */
  #define ADSS__GIO__HSI_BASE                      (0x4002A000u)
  /** Peripheral ADSS__GIO__HSI base pointer */
  #define ADSS__GIO__HSI                           ((HSI_Type *)ADSS__GIO__HSI_BASE)
  /** Array initializer of HSI peripheral base addresses */
  #define HSI_BASE_ADDRS                           { ADSS__GIO__HSI_BASE }
  /** Array initializer of HSI peripheral base pointers */
  #define HSI_BASE_PTRS                            { ADSS__GIO__HSI }
#endif

/* HSI_PORT - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADSS__GIO__HSIP_0 base address */
  #define ADSS__GIO__HSIP_0_BASE_NS                (0x40029800u)
  /** Peripheral ADSS__GIO__HSIP_0 base pointer */
  #define ADSS__GIO__HSIP_0_NS                     ((HSI_PORT_Type *)ADSS__GIO__HSIP_0_BASE_NS)
  /** Peripheral ADSS__GIO__HSIP_0 base address */
  #define ADSS__GIO__HSIP_0_BASE                   (0x50029800u)
  /** Peripheral ADSS__GIO__HSIP_0 base pointer */
  #define ADSS__GIO__HSIP_0                        ((HSI_PORT_Type *)ADSS__GIO__HSIP_0_BASE)
  /** Peripheral ADSS__GIO__HSIP_1 base address */
  #define ADSS__GIO__HSIP_1_BASE_NS                (0x40029820u)
  /** Peripheral ADSS__GIO__HSIP_1 base pointer */
  #define ADSS__GIO__HSIP_1_NS                     ((HSI_PORT_Type *)ADSS__GIO__HSIP_1_BASE_NS)
  /** Peripheral ADSS__GIO__HSIP_1 base address */
  #define ADSS__GIO__HSIP_1_BASE                   (0x50029820u)
  /** Peripheral ADSS__GIO__HSIP_1 base pointer */
  #define ADSS__GIO__HSIP_1                        ((HSI_PORT_Type *)ADSS__GIO__HSIP_1_BASE)
  /** Peripheral ADSS__GIO__HSIP_2 base address */
  #define ADSS__GIO__HSIP_2_BASE_NS                (0x40029840u)
  /** Peripheral ADSS__GIO__HSIP_2 base pointer */
  #define ADSS__GIO__HSIP_2_NS                     ((HSI_PORT_Type *)ADSS__GIO__HSIP_2_BASE_NS)
  /** Peripheral ADSS__GIO__HSIP_2 base address */
  #define ADSS__GIO__HSIP_2_BASE                   (0x50029840u)
  /** Peripheral ADSS__GIO__HSIP_2 base pointer */
  #define ADSS__GIO__HSIP_2                        ((HSI_PORT_Type *)ADSS__GIO__HSIP_2_BASE)
  /** Peripheral ADSS__GIO__HSIP_3 base address */
  #define ADSS__GIO__HSIP_3_BASE_NS                (0x40029860u)
  /** Peripheral ADSS__GIO__HSIP_3 base pointer */
  #define ADSS__GIO__HSIP_3_NS                     ((HSI_PORT_Type *)ADSS__GIO__HSIP_3_BASE_NS)
  /** Peripheral ADSS__GIO__HSIP_3 base address */
  #define ADSS__GIO__HSIP_3_BASE                   (0x50029860u)
  /** Peripheral ADSS__GIO__HSIP_3 base pointer */
  #define ADSS__GIO__HSIP_3                        ((HSI_PORT_Type *)ADSS__GIO__HSIP_3_BASE)
  /** Array initializer of HSI_PORT peripheral base addresses */
  #define HSI_PORT_BASE_ADDRS_NS                   { ADSS__GIO__HSIP_0_BASE_NS, ADSS__GIO__HSIP_1_BASE_NS, ADSS__GIO__HSIP_2_BASE_NS, ADSS__GIO__HSIP_3_BASE_NS }
  /** Array initializer of HSI_PORT peripheral base pointers */
  #define HSI_PORT_BASE_PTRS_NS                    { ADSS__GIO__HSIP_0_NS, ADSS__GIO__HSIP_1_NS, ADSS__GIO__HSIP_2_NS, ADSS__GIO__HSIP_3_NS }
  /** Array initializer of HSI_PORT peripheral base addresses */
  #define HSI_PORT_BASE_ADDRS                      { ADSS__GIO__HSIP_0_BASE, ADSS__GIO__HSIP_1_BASE, ADSS__GIO__HSIP_2_BASE, ADSS__GIO__HSIP_3_BASE }
  /** Array initializer of HSI_PORT peripheral base pointers */
  #define HSI_PORT_BASE_PTRS                       { ADSS__GIO__HSIP_0, ADSS__GIO__HSIP_1, ADSS__GIO__HSIP_2, ADSS__GIO__HSIP_3 }
#else
  /** Peripheral ADSS__GIO__HSIP_0 base address */
  #define ADSS__GIO__HSIP_0_BASE                   (0x40029800u)
  /** Peripheral ADSS__GIO__HSIP_0 base pointer */
  #define ADSS__GIO__HSIP_0                        ((HSI_PORT_Type *)ADSS__GIO__HSIP_0_BASE)
  /** Peripheral ADSS__GIO__HSIP_1 base address */
  #define ADSS__GIO__HSIP_1_BASE                   (0x40029820u)
  /** Peripheral ADSS__GIO__HSIP_1 base pointer */
  #define ADSS__GIO__HSIP_1                        ((HSI_PORT_Type *)ADSS__GIO__HSIP_1_BASE)
  /** Peripheral ADSS__GIO__HSIP_2 base address */
  #define ADSS__GIO__HSIP_2_BASE                   (0x40029840u)
  /** Peripheral ADSS__GIO__HSIP_2 base pointer */
  #define ADSS__GIO__HSIP_2                        ((HSI_PORT_Type *)ADSS__GIO__HSIP_2_BASE)
  /** Peripheral ADSS__GIO__HSIP_3 base address */
  #define ADSS__GIO__HSIP_3_BASE                   (0x40029860u)
  /** Peripheral ADSS__GIO__HSIP_3 base pointer */
  #define ADSS__GIO__HSIP_3                        ((HSI_PORT_Type *)ADSS__GIO__HSIP_3_BASE)
  /** Array initializer of HSI_PORT peripheral base addresses */
  #define HSI_PORT_BASE_ADDRS                      { ADSS__GIO__HSIP_0_BASE, ADSS__GIO__HSIP_1_BASE, ADSS__GIO__HSIP_2_BASE, ADSS__GIO__HSIP_3_BASE }
  /** Array initializer of HSI_PORT peripheral base pointers */
  #define HSI_PORT_BASE_PTRS                       { ADSS__GIO__HSIP_0, ADSS__GIO__HSIP_1, ADSS__GIO__HSIP_2, ADSS__GIO__HSIP_3 }
#endif

/* I2C - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__I2C_0 base address */
  #define CTRLSS__I2C_0_BASE_NS                    (0x40086000u)
  /** Peripheral CTRLSS__I2C_0 base pointer */
  #define CTRLSS__I2C_0_NS                         ((I2C_Type *)CTRLSS__I2C_0_BASE_NS)
  /** Peripheral CTRLSS__I2C_0 base address */
  #define CTRLSS__I2C_0_BASE                       (0x50086000u)
  /** Peripheral CTRLSS__I2C_0 base pointer */
  #define CTRLSS__I2C_0                            ((I2C_Type *)CTRLSS__I2C_0_BASE)
  /** Peripheral CTRLSS__I2C_1 base address */
  #define CTRLSS__I2C_1_BASE_NS                    (0x40087000u)
  /** Peripheral CTRLSS__I2C_1 base pointer */
  #define CTRLSS__I2C_1_NS                         ((I2C_Type *)CTRLSS__I2C_1_BASE_NS)
  /** Peripheral CTRLSS__I2C_1 base address */
  #define CTRLSS__I2C_1_BASE                       (0x50087000u)
  /** Peripheral CTRLSS__I2C_1 base pointer */
  #define CTRLSS__I2C_1                            ((I2C_Type *)CTRLSS__I2C_1_BASE)
  /** Peripheral CTRLSS__I2C_2 base address */
  #define CTRLSS__I2C_2_BASE_NS                    (0x40088000u)
  /** Peripheral CTRLSS__I2C_2 base pointer */
  #define CTRLSS__I2C_2_NS                         ((I2C_Type *)CTRLSS__I2C_2_BASE_NS)
  /** Peripheral CTRLSS__I2C_2 base address */
  #define CTRLSS__I2C_2_BASE                       (0x50088000u)
  /** Peripheral CTRLSS__I2C_2 base pointer */
  #define CTRLSS__I2C_2                            ((I2C_Type *)CTRLSS__I2C_2_BASE)
  /** Peripheral CTRLSS__I2C_3 base address */
  #define CTRLSS__I2C_3_BASE_NS                    (0x40090000u)
  /** Peripheral CTRLSS__I2C_3 base pointer */
  #define CTRLSS__I2C_3_NS                         ((I2C_Type *)CTRLSS__I2C_3_BASE_NS)
  /** Peripheral CTRLSS__I2C_3 base address */
  #define CTRLSS__I2C_3_BASE                       (0x50090000u)
  /** Peripheral CTRLSS__I2C_3 base pointer */
  #define CTRLSS__I2C_3                            ((I2C_Type *)CTRLSS__I2C_3_BASE)
  /** Peripheral CTRLSS__I2C_4 base address */
  #define CTRLSS__I2C_4_BASE_NS                    (0x40091000u)
  /** Peripheral CTRLSS__I2C_4 base pointer */
  #define CTRLSS__I2C_4_NS                         ((I2C_Type *)CTRLSS__I2C_4_BASE_NS)
  /** Peripheral CTRLSS__I2C_4 base address */
  #define CTRLSS__I2C_4_BASE                       (0x50091000u)
  /** Peripheral CTRLSS__I2C_4 base pointer */
  #define CTRLSS__I2C_4                            ((I2C_Type *)CTRLSS__I2C_4_BASE)
  /** Peripheral CTRLSS__I2C_5 base address */
  #define CTRLSS__I2C_5_BASE_NS                    (0x40092000u)
  /** Peripheral CTRLSS__I2C_5 base pointer */
  #define CTRLSS__I2C_5_NS                         ((I2C_Type *)CTRLSS__I2C_5_BASE_NS)
  /** Peripheral CTRLSS__I2C_5 base address */
  #define CTRLSS__I2C_5_BASE                       (0x50092000u)
  /** Peripheral CTRLSS__I2C_5 base pointer */
  #define CTRLSS__I2C_5                            ((I2C_Type *)CTRLSS__I2C_5_BASE)
  /** Array initializer of I2C peripheral base addresses */
  #define I2C_BASE_ADDRS_NS                        { CTRLSS__I2C_0_BASE_NS, CTRLSS__I2C_1_BASE_NS, CTRLSS__I2C_2_BASE_NS, CTRLSS__I2C_3_BASE_NS, CTRLSS__I2C_4_BASE_NS, CTRLSS__I2C_5_BASE_NS }
  /** Array initializer of I2C peripheral base pointers */
  #define I2C_BASE_PTRS_NS                         { CTRLSS__I2C_0_NS, CTRLSS__I2C_1_NS, CTRLSS__I2C_2_NS, CTRLSS__I2C_3_NS, CTRLSS__I2C_4_NS, CTRLSS__I2C_5_NS }
  /** Array initializer of I2C peripheral base addresses */
  #define I2C_BASE_ADDRS                           { CTRLSS__I2C_0_BASE, CTRLSS__I2C_1_BASE, CTRLSS__I2C_2_BASE, CTRLSS__I2C_3_BASE, CTRLSS__I2C_4_BASE, CTRLSS__I2C_5_BASE }
  /** Array initializer of I2C peripheral base pointers */
  #define I2C_BASE_PTRS                            { CTRLSS__I2C_0, CTRLSS__I2C_1, CTRLSS__I2C_2, CTRLSS__I2C_3, CTRLSS__I2C_4, CTRLSS__I2C_5 }
#else
  /** Peripheral CTRLSS__I2C_0 base address */
  #define CTRLSS__I2C_0_BASE                       (0x40086000u)
  /** Peripheral CTRLSS__I2C_0 base pointer */
  #define CTRLSS__I2C_0                            ((I2C_Type *)CTRLSS__I2C_0_BASE)
  /** Peripheral CTRLSS__I2C_1 base address */
  #define CTRLSS__I2C_1_BASE                       (0x40087000u)
  /** Peripheral CTRLSS__I2C_1 base pointer */
  #define CTRLSS__I2C_1                            ((I2C_Type *)CTRLSS__I2C_1_BASE)
  /** Peripheral CTRLSS__I2C_2 base address */
  #define CTRLSS__I2C_2_BASE                       (0x40088000u)
  /** Peripheral CTRLSS__I2C_2 base pointer */
  #define CTRLSS__I2C_2                            ((I2C_Type *)CTRLSS__I2C_2_BASE)
  /** Peripheral CTRLSS__I2C_3 base address */
  #define CTRLSS__I2C_3_BASE                       (0x40090000u)
  /** Peripheral CTRLSS__I2C_3 base pointer */
  #define CTRLSS__I2C_3                            ((I2C_Type *)CTRLSS__I2C_3_BASE)
  /** Peripheral CTRLSS__I2C_4 base address */
  #define CTRLSS__I2C_4_BASE                       (0x40091000u)
  /** Peripheral CTRLSS__I2C_4 base pointer */
  #define CTRLSS__I2C_4                            ((I2C_Type *)CTRLSS__I2C_4_BASE)
  /** Peripheral CTRLSS__I2C_5 base address */
  #define CTRLSS__I2C_5_BASE                       (0x40092000u)
  /** Peripheral CTRLSS__I2C_5 base pointer */
  #define CTRLSS__I2C_5                            ((I2C_Type *)CTRLSS__I2C_5_BASE)
  /** Array initializer of I2C peripheral base addresses */
  #define I2C_BASE_ADDRS                           { CTRLSS__I2C_0_BASE, CTRLSS__I2C_1_BASE, CTRLSS__I2C_2_BASE, CTRLSS__I2C_3_BASE, CTRLSS__I2C_4_BASE, CTRLSS__I2C_5_BASE }
  /** Array initializer of I2C peripheral base pointers */
  #define I2C_BASE_PTRS                            { CTRLSS__I2C_0, CTRLSS__I2C_1, CTRLSS__I2C_2, CTRLSS__I2C_3, CTRLSS__I2C_4, CTRLSS__I2C_5 }
#endif
/** Interrupt vectors for the I2C peripheral type */
#define I2C_IRQS                                 { FLEXCOMM0_IRQn, FLEXCOMM1_IRQn, FLEXCOMM2_IRQn, FLEXCOMM3_IRQn, FLEXCOMM4_IRQn, FLEXCOMM5_IRQn }

/* I3C - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__I3C_0 base address */
  #define CTRLSS__I3C_0_BASE_NS                    (0x40097000u)
  /** Peripheral CTRLSS__I3C_0 base pointer */
  #define CTRLSS__I3C_0_NS                         ((I3C_Type *)CTRLSS__I3C_0_BASE_NS)
  /** Peripheral CTRLSS__I3C_0 base address */
  #define CTRLSS__I3C_0_BASE                       (0x50097000u)
  /** Peripheral CTRLSS__I3C_0 base pointer */
  #define CTRLSS__I3C_0                            ((I3C_Type *)CTRLSS__I3C_0_BASE)
  /** Array initializer of I3C peripheral base addresses */
  #define I3C_BASE_ADDRS_NS                        { CTRLSS__I3C_0_BASE_NS }
  /** Array initializer of I3C peripheral base pointers */
  #define I3C_BASE_PTRS_NS                         { CTRLSS__I3C_0_NS }
  /** Array initializer of I3C peripheral base addresses */
  #define I3C_BASE_ADDRS                           { CTRLSS__I3C_0_BASE }
  /** Array initializer of I3C peripheral base pointers */
  #define I3C_BASE_PTRS                            { CTRLSS__I3C_0 }
#else
  /** Peripheral CTRLSS__I3C_0 base address */
  #define CTRLSS__I3C_0_BASE                       (0x40097000u)
  /** Peripheral CTRLSS__I3C_0 base pointer */
  #define CTRLSS__I3C_0                            ((I3C_Type *)CTRLSS__I3C_0_BASE)
  /** Array initializer of I3C peripheral base addresses */
  #define I3C_BASE_ADDRS                           { CTRLSS__I3C_0_BASE }
  /** Array initializer of I3C peripheral base pointers */
  #define I3C_BASE_PTRS                            { CTRLSS__I3C_0 }
#endif
/** Interrupt vectors for the I3C peripheral type */
#define I3C_IRQS                                 { I3C0_IRQn }

/* INPUTMUX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__INPUTMUX_0 base address */
  #define CTRLSS__INPUTMUX_0_BASE_NS               (0x40005000u)
  /** Peripheral CTRLSS__INPUTMUX_0 base pointer */
  #define CTRLSS__INPUTMUX_0_NS                    ((INPUTMUX_Type *)CTRLSS__INPUTMUX_0_BASE_NS)
  /** Peripheral CTRLSS__INPUTMUX_0 base address */
  #define CTRLSS__INPUTMUX_0_BASE                  (0x50005000u)
  /** Peripheral CTRLSS__INPUTMUX_0 base pointer */
  #define CTRLSS__INPUTMUX_0                       ((INPUTMUX_Type *)CTRLSS__INPUTMUX_0_BASE)
  /** Array initializer of INPUTMUX peripheral base addresses */
  #define INPUTMUX_BASE_ADDRS_NS                   { CTRLSS__INPUTMUX_0_BASE_NS }
  /** Array initializer of INPUTMUX peripheral base pointers */
  #define INPUTMUX_BASE_PTRS_NS                    { CTRLSS__INPUTMUX_0_NS }
  /** Array initializer of INPUTMUX peripheral base addresses */
  #define INPUTMUX_BASE_ADDRS                      { CTRLSS__INPUTMUX_0_BASE }
  /** Array initializer of INPUTMUX peripheral base pointers */
  #define INPUTMUX_BASE_PTRS                       { CTRLSS__INPUTMUX_0 }
#else
  /** Peripheral CTRLSS__INPUTMUX_0 base address */
  #define CTRLSS__INPUTMUX_0_BASE                  (0x40005000u)
  /** Peripheral CTRLSS__INPUTMUX_0 base pointer */
  #define CTRLSS__INPUTMUX_0                       ((INPUTMUX_Type *)CTRLSS__INPUTMUX_0_BASE)
  /** Array initializer of INPUTMUX peripheral base addresses */
  #define INPUTMUX_BASE_ADDRS                      { CTRLSS__INPUTMUX_0_BASE }
  /** Array initializer of INPUTMUX peripheral base pointers */
  #define INPUTMUX_BASE_PTRS                       { CTRLSS__INPUTMUX_0 }
#endif

/* MRT - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__MRT_0 base address */
  #define CTRLSS__MRT_0_BASE_NS                    (0x4000F000u)
  /** Peripheral CTRLSS__MRT_0 base pointer */
  #define CTRLSS__MRT_0_NS                         ((MRT_Type *)CTRLSS__MRT_0_BASE_NS)
  /** Peripheral CTRLSS__MRT_0 base address */
  #define CTRLSS__MRT_0_BASE                       (0x5000F000u)
  /** Peripheral CTRLSS__MRT_0 base pointer */
  #define CTRLSS__MRT_0                            ((MRT_Type *)CTRLSS__MRT_0_BASE)
  /** Array initializer of MRT peripheral base addresses */
  #define MRT_BASE_ADDRS_NS                        { CTRLSS__MRT_0_BASE_NS }
  /** Array initializer of MRT peripheral base pointers */
  #define MRT_BASE_PTRS_NS                         { CTRLSS__MRT_0_NS }
  /** Array initializer of MRT peripheral base addresses */
  #define MRT_BASE_ADDRS                           { CTRLSS__MRT_0_BASE }
  /** Array initializer of MRT peripheral base pointers */
  #define MRT_BASE_PTRS                            { CTRLSS__MRT_0 }
#else
  /** Peripheral CTRLSS__MRT_0 base address */
  #define CTRLSS__MRT_0_BASE                       (0x4000F000u)
  /** Peripheral CTRLSS__MRT_0 base pointer */
  #define CTRLSS__MRT_0                            ((MRT_Type *)CTRLSS__MRT_0_BASE)
  /** Array initializer of MRT peripheral base addresses */
  #define MRT_BASE_ADDRS                           { CTRLSS__MRT_0_BASE }
  /** Array initializer of MRT peripheral base pointers */
  #define MRT_BASE_PTRS                            { CTRLSS__MRT_0 }
#endif
/** Interrupt vectors for the MRT peripheral type */
#define MRT_IRQS                                 { MRT0_IRQn }

/* MTR_BIST - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral MTR__U_ADSS_RAM_0 base address */
  #define MTR__U_ADSS_RAM_0_BASE_NS                (0x4002BC00u)
  /** Peripheral MTR__U_ADSS_RAM_0 base pointer */
  #define MTR__U_ADSS_RAM_0_NS                     ((MTR_BIST_Type *)MTR__U_ADSS_RAM_0_BASE_NS)
  /** Peripheral MTR__U_ADSS_RAM_0 base address */
  #define MTR__U_ADSS_RAM_0_BASE                   (0x5002BC00u)
  /** Peripheral MTR__U_ADSS_RAM_0 base pointer */
  #define MTR__U_ADSS_RAM_0                        ((MTR_BIST_Type *)MTR__U_ADSS_RAM_0_BASE)
  /** Peripheral MTR__U_ADSS_RAM_1 base address */
  #define MTR__U_ADSS_RAM_1_BASE_NS                (0x4002BC10u)
  /** Peripheral MTR__U_ADSS_RAM_1 base pointer */
  #define MTR__U_ADSS_RAM_1_NS                     ((MTR_BIST_Type *)MTR__U_ADSS_RAM_1_BASE_NS)
  /** Peripheral MTR__U_ADSS_RAM_1 base address */
  #define MTR__U_ADSS_RAM_1_BASE                   (0x5002BC10u)
  /** Peripheral MTR__U_ADSS_RAM_1 base pointer */
  #define MTR__U_ADSS_RAM_1                        ((MTR_BIST_Type *)MTR__U_ADSS_RAM_1_BASE)
  /** Peripheral MTR__U_CTRLSS_CM55_RAM_0 base address */
  #define MTR__U_CTRLSS_CM55_RAM_0_BASE_NS         (0x4002B810u)
  /** Peripheral MTR__U_CTRLSS_CM55_RAM_0 base pointer */
  #define MTR__U_CTRLSS_CM55_RAM_0_NS              ((MTR_BIST_Type *)MTR__U_CTRLSS_CM55_RAM_0_BASE_NS)
  /** Peripheral MTR__U_CTRLSS_CM55_RAM_0 base address */
  #define MTR__U_CTRLSS_CM55_RAM_0_BASE            (0x5002B810u)
  /** Peripheral MTR__U_CTRLSS_CM55_RAM_0 base pointer */
  #define MTR__U_CTRLSS_CM55_RAM_0                 ((MTR_BIST_Type *)MTR__U_CTRLSS_CM55_RAM_0_BASE)
  /** Peripheral MTR__U_CTRLSS_CM55_RAM_1 base address */
  #define MTR__U_CTRLSS_CM55_RAM_1_BASE_NS         (0x4002B820u)
  /** Peripheral MTR__U_CTRLSS_CM55_RAM_1 base pointer */
  #define MTR__U_CTRLSS_CM55_RAM_1_NS              ((MTR_BIST_Type *)MTR__U_CTRLSS_CM55_RAM_1_BASE_NS)
  /** Peripheral MTR__U_CTRLSS_CM55_RAM_1 base address */
  #define MTR__U_CTRLSS_CM55_RAM_1_BASE            (0x5002B820u)
  /** Peripheral MTR__U_CTRLSS_CM55_RAM_1 base pointer */
  #define MTR__U_CTRLSS_CM55_RAM_1                 ((MTR_BIST_Type *)MTR__U_CTRLSS_CM55_RAM_1_BASE)
  /** Peripheral MTR__U_CTRLSS_CM55_ROM base address */
  #define MTR__U_CTRLSS_CM55_ROM_BASE_NS           (0x4002B800u)
  /** Peripheral MTR__U_CTRLSS_CM55_ROM base pointer */
  #define MTR__U_CTRLSS_CM55_ROM_NS                ((MTR_BIST_Type *)MTR__U_CTRLSS_CM55_ROM_BASE_NS)
  /** Peripheral MTR__U_CTRLSS_CM55_ROM base address */
  #define MTR__U_CTRLSS_CM55_ROM_BASE              (0x5002B800u)
  /** Peripheral MTR__U_CTRLSS_CM55_ROM base pointer */
  #define MTR__U_CTRLSS_CM55_ROM                   ((MTR_BIST_Type *)MTR__U_CTRLSS_CM55_ROM_BASE)
  /** Peripheral MTR__U_NSS_CM55_RAM base address */
  #define MTR__U_NSS_CM55_RAM_BASE_NS              (0x4002B410u)
  /** Peripheral MTR__U_NSS_CM55_RAM base pointer */
  #define MTR__U_NSS_CM55_RAM_NS                   ((MTR_BIST_Type *)MTR__U_NSS_CM55_RAM_BASE_NS)
  /** Peripheral MTR__U_NSS_CM55_RAM base address */
  #define MTR__U_NSS_CM55_RAM_BASE                 (0x5002B410u)
  /** Peripheral MTR__U_NSS_CM55_RAM base pointer */
  #define MTR__U_NSS_CM55_RAM                      ((MTR_BIST_Type *)MTR__U_NSS_CM55_RAM_BASE)
  /** Peripheral MTR__U_NSS_DNN_RAM_0 base address */
  #define MTR__U_NSS_DNN_RAM_0_BASE_NS             (0x4002B420u)
  /** Peripheral MTR__U_NSS_DNN_RAM_0 base pointer */
  #define MTR__U_NSS_DNN_RAM_0_NS                  ((MTR_BIST_Type *)MTR__U_NSS_DNN_RAM_0_BASE_NS)
  /** Peripheral MTR__U_NSS_DNN_RAM_0 base address */
  #define MTR__U_NSS_DNN_RAM_0_BASE                (0x5002B420u)
  /** Peripheral MTR__U_NSS_DNN_RAM_0 base pointer */
  #define MTR__U_NSS_DNN_RAM_0                     ((MTR_BIST_Type *)MTR__U_NSS_DNN_RAM_0_BASE)
  /** Peripheral MTR__U_NSS_DNN_RAM_1 base address */
  #define MTR__U_NSS_DNN_RAM_1_BASE_NS             (0x4002B430u)
  /** Peripheral MTR__U_NSS_DNN_RAM_1 base pointer */
  #define MTR__U_NSS_DNN_RAM_1_NS                  ((MTR_BIST_Type *)MTR__U_NSS_DNN_RAM_1_BASE_NS)
  /** Peripheral MTR__U_NSS_DNN_RAM_1 base address */
  #define MTR__U_NSS_DNN_RAM_1_BASE                (0x5002B430u)
  /** Peripheral MTR__U_NSS_DNN_RAM_1 base pointer */
  #define MTR__U_NSS_DNN_RAM_1                     ((MTR_BIST_Type *)MTR__U_NSS_DNN_RAM_1_BASE)
  /** Peripheral MTR__U_NSS_DNN_RAM_2 base address */
  #define MTR__U_NSS_DNN_RAM_2_BASE_NS             (0x4002C010u)
  /** Peripheral MTR__U_NSS_DNN_RAM_2 base pointer */
  #define MTR__U_NSS_DNN_RAM_2_NS                  ((MTR_BIST_Type *)MTR__U_NSS_DNN_RAM_2_BASE_NS)
  /** Peripheral MTR__U_NSS_DNN_RAM_2 base address */
  #define MTR__U_NSS_DNN_RAM_2_BASE                (0x5002C010u)
  /** Peripheral MTR__U_NSS_DNN_RAM_2 base pointer */
  #define MTR__U_NSS_DNN_RAM_2                     ((MTR_BIST_Type *)MTR__U_NSS_DNN_RAM_2_BASE)
  /** Peripheral MTR__U_NSS_DNN_RAM_3 base address */
  #define MTR__U_NSS_DNN_RAM_3_BASE_NS             (0x4002C020u)
  /** Peripheral MTR__U_NSS_DNN_RAM_3 base pointer */
  #define MTR__U_NSS_DNN_RAM_3_NS                  ((MTR_BIST_Type *)MTR__U_NSS_DNN_RAM_3_BASE_NS)
  /** Peripheral MTR__U_NSS_DNN_RAM_3 base address */
  #define MTR__U_NSS_DNN_RAM_3_BASE                (0x5002C020u)
  /** Peripheral MTR__U_NSS_DNN_RAM_3 base pointer */
  #define MTR__U_NSS_DNN_RAM_3                     ((MTR_BIST_Type *)MTR__U_NSS_DNN_RAM_3_BASE)
  /** Peripheral MTR__U_NSS_DNN_RAM_4 base address */
  #define MTR__U_NSS_DNN_RAM_4_BASE_NS             (0x4002C030u)
  /** Peripheral MTR__U_NSS_DNN_RAM_4 base pointer */
  #define MTR__U_NSS_DNN_RAM_4_NS                  ((MTR_BIST_Type *)MTR__U_NSS_DNN_RAM_4_BASE_NS)
  /** Peripheral MTR__U_NSS_DNN_RAM_4 base address */
  #define MTR__U_NSS_DNN_RAM_4_BASE                (0x5002C030u)
  /** Peripheral MTR__U_NSS_DNN_RAM_4 base pointer */
  #define MTR__U_NSS_DNN_RAM_4                     ((MTR_BIST_Type *)MTR__U_NSS_DNN_RAM_4_BASE)
  /** Peripheral MTR__U_NSS_ETHOSU85_RAM base address */
  #define MTR__U_NSS_ETHOSU85_RAM_BASE_NS          (0x4002C000u)
  /** Peripheral MTR__U_NSS_ETHOSU85_RAM base pointer */
  #define MTR__U_NSS_ETHOSU85_RAM_NS               ((MTR_BIST_Type *)MTR__U_NSS_ETHOSU85_RAM_BASE_NS)
  /** Peripheral MTR__U_NSS_ETHOSU85_RAM base address */
  #define MTR__U_NSS_ETHOSU85_RAM_BASE             (0x5002C000u)
  /** Peripheral MTR__U_NSS_ETHOSU85_RAM base pointer */
  #define MTR__U_NSS_ETHOSU85_RAM                  ((MTR_BIST_Type *)MTR__U_NSS_ETHOSU85_RAM_BASE)
  /** Peripheral MTR__U_NSS_XSP_RAM base address */
  #define MTR__U_NSS_XSP_RAM_BASE_NS               (0x4002B400u)
  /** Peripheral MTR__U_NSS_XSP_RAM base pointer */
  #define MTR__U_NSS_XSP_RAM_NS                    ((MTR_BIST_Type *)MTR__U_NSS_XSP_RAM_BASE_NS)
  /** Peripheral MTR__U_NSS_XSP_RAM base address */
  #define MTR__U_NSS_XSP_RAM_BASE                  (0x5002B400u)
  /** Peripheral MTR__U_NSS_XSP_RAM base pointer */
  #define MTR__U_NSS_XSP_RAM                       ((MTR_BIST_Type *)MTR__U_NSS_XSP_RAM_BASE)
  /** Array initializer of MTR_BIST peripheral base addresses */
  #define MTR_BIST_BASE_ADDRS_NS                   { MTR__U_ADSS_RAM_0_BASE_NS, MTR__U_ADSS_RAM_1_BASE_NS, MTR__U_CTRLSS_CM55_RAM_0_BASE_NS, MTR__U_CTRLSS_CM55_RAM_1_BASE_NS, MTR__U_CTRLSS_CM55_ROM_BASE_NS, MTR__U_NSS_CM55_RAM_BASE_NS, MTR__U_NSS_DNN_RAM_0_BASE_NS, MTR__U_NSS_DNN_RAM_1_BASE_NS, MTR__U_NSS_DNN_RAM_2_BASE_NS, MTR__U_NSS_DNN_RAM_3_BASE_NS, MTR__U_NSS_DNN_RAM_4_BASE_NS, MTR__U_NSS_ETHOSU85_RAM_BASE_NS, MTR__U_NSS_XSP_RAM_BASE_NS }
  /** Array initializer of MTR_BIST peripheral base pointers */
  #define MTR_BIST_BASE_PTRS_NS                    { MTR__U_ADSS_RAM_0_NS, MTR__U_ADSS_RAM_1_NS, MTR__U_CTRLSS_CM55_RAM_0_NS, MTR__U_CTRLSS_CM55_RAM_1_NS, MTR__U_CTRLSS_CM55_ROM_NS, MTR__U_NSS_CM55_RAM_NS, MTR__U_NSS_DNN_RAM_0_NS, MTR__U_NSS_DNN_RAM_1_NS, MTR__U_NSS_DNN_RAM_2_NS, MTR__U_NSS_DNN_RAM_3_NS, MTR__U_NSS_DNN_RAM_4_NS, MTR__U_NSS_ETHOSU85_RAM_NS, MTR__U_NSS_XSP_RAM_NS }
  /** Array initializer of MTR_BIST peripheral base addresses */
  #define MTR_BIST_BASE_ADDRS                      { MTR__U_ADSS_RAM_0_BASE, MTR__U_ADSS_RAM_1_BASE, MTR__U_CTRLSS_CM55_RAM_0_BASE, MTR__U_CTRLSS_CM55_RAM_1_BASE, MTR__U_CTRLSS_CM55_ROM_BASE, MTR__U_NSS_CM55_RAM_BASE, MTR__U_NSS_DNN_RAM_0_BASE, MTR__U_NSS_DNN_RAM_1_BASE, MTR__U_NSS_DNN_RAM_2_BASE, MTR__U_NSS_DNN_RAM_3_BASE, MTR__U_NSS_DNN_RAM_4_BASE, MTR__U_NSS_ETHOSU85_RAM_BASE, MTR__U_NSS_XSP_RAM_BASE }
  /** Array initializer of MTR_BIST peripheral base pointers */
  #define MTR_BIST_BASE_PTRS                       { MTR__U_ADSS_RAM_0, MTR__U_ADSS_RAM_1, MTR__U_CTRLSS_CM55_RAM_0, MTR__U_CTRLSS_CM55_RAM_1, MTR__U_CTRLSS_CM55_ROM, MTR__U_NSS_CM55_RAM, MTR__U_NSS_DNN_RAM_0, MTR__U_NSS_DNN_RAM_1, MTR__U_NSS_DNN_RAM_2, MTR__U_NSS_DNN_RAM_3, MTR__U_NSS_DNN_RAM_4, MTR__U_NSS_ETHOSU85_RAM, MTR__U_NSS_XSP_RAM }
#else
  /** Peripheral MTR__U_ADSS_RAM_0 base address */
  #define MTR__U_ADSS_RAM_0_BASE                   (0x4002BC00u)
  /** Peripheral MTR__U_ADSS_RAM_0 base pointer */
  #define MTR__U_ADSS_RAM_0                        ((MTR_BIST_Type *)MTR__U_ADSS_RAM_0_BASE)
  /** Peripheral MTR__U_ADSS_RAM_1 base address */
  #define MTR__U_ADSS_RAM_1_BASE                   (0x4002BC10u)
  /** Peripheral MTR__U_ADSS_RAM_1 base pointer */
  #define MTR__U_ADSS_RAM_1                        ((MTR_BIST_Type *)MTR__U_ADSS_RAM_1_BASE)
  /** Peripheral MTR__U_CTRLSS_CM55_RAM_0 base address */
  #define MTR__U_CTRLSS_CM55_RAM_0_BASE            (0x4002B810u)
  /** Peripheral MTR__U_CTRLSS_CM55_RAM_0 base pointer */
  #define MTR__U_CTRLSS_CM55_RAM_0                 ((MTR_BIST_Type *)MTR__U_CTRLSS_CM55_RAM_0_BASE)
  /** Peripheral MTR__U_CTRLSS_CM55_RAM_1 base address */
  #define MTR__U_CTRLSS_CM55_RAM_1_BASE            (0x4002B820u)
  /** Peripheral MTR__U_CTRLSS_CM55_RAM_1 base pointer */
  #define MTR__U_CTRLSS_CM55_RAM_1                 ((MTR_BIST_Type *)MTR__U_CTRLSS_CM55_RAM_1_BASE)
  /** Peripheral MTR__U_CTRLSS_CM55_ROM base address */
  #define MTR__U_CTRLSS_CM55_ROM_BASE              (0x4002B800u)
  /** Peripheral MTR__U_CTRLSS_CM55_ROM base pointer */
  #define MTR__U_CTRLSS_CM55_ROM                   ((MTR_BIST_Type *)MTR__U_CTRLSS_CM55_ROM_BASE)
  /** Peripheral MTR__U_NSS_CM55_RAM base address */
  #define MTR__U_NSS_CM55_RAM_BASE                 (0x4002B410u)
  /** Peripheral MTR__U_NSS_CM55_RAM base pointer */
  #define MTR__U_NSS_CM55_RAM                      ((MTR_BIST_Type *)MTR__U_NSS_CM55_RAM_BASE)
  /** Peripheral MTR__U_NSS_DNN_RAM_0 base address */
  #define MTR__U_NSS_DNN_RAM_0_BASE                (0x4002B420u)
  /** Peripheral MTR__U_NSS_DNN_RAM_0 base pointer */
  #define MTR__U_NSS_DNN_RAM_0                     ((MTR_BIST_Type *)MTR__U_NSS_DNN_RAM_0_BASE)
  /** Peripheral MTR__U_NSS_DNN_RAM_1 base address */
  #define MTR__U_NSS_DNN_RAM_1_BASE                (0x4002B430u)
  /** Peripheral MTR__U_NSS_DNN_RAM_1 base pointer */
  #define MTR__U_NSS_DNN_RAM_1                     ((MTR_BIST_Type *)MTR__U_NSS_DNN_RAM_1_BASE)
  /** Peripheral MTR__U_NSS_DNN_RAM_2 base address */
  #define MTR__U_NSS_DNN_RAM_2_BASE                (0x4002C010u)
  /** Peripheral MTR__U_NSS_DNN_RAM_2 base pointer */
  #define MTR__U_NSS_DNN_RAM_2                     ((MTR_BIST_Type *)MTR__U_NSS_DNN_RAM_2_BASE)
  /** Peripheral MTR__U_NSS_DNN_RAM_3 base address */
  #define MTR__U_NSS_DNN_RAM_3_BASE                (0x4002C020u)
  /** Peripheral MTR__U_NSS_DNN_RAM_3 base pointer */
  #define MTR__U_NSS_DNN_RAM_3                     ((MTR_BIST_Type *)MTR__U_NSS_DNN_RAM_3_BASE)
  /** Peripheral MTR__U_NSS_DNN_RAM_4 base address */
  #define MTR__U_NSS_DNN_RAM_4_BASE                (0x4002C030u)
  /** Peripheral MTR__U_NSS_DNN_RAM_4 base pointer */
  #define MTR__U_NSS_DNN_RAM_4                     ((MTR_BIST_Type *)MTR__U_NSS_DNN_RAM_4_BASE)
  /** Peripheral MTR__U_NSS_ETHOSU85_RAM base address */
  #define MTR__U_NSS_ETHOSU85_RAM_BASE             (0x4002C000u)
  /** Peripheral MTR__U_NSS_ETHOSU85_RAM base pointer */
  #define MTR__U_NSS_ETHOSU85_RAM                  ((MTR_BIST_Type *)MTR__U_NSS_ETHOSU85_RAM_BASE)
  /** Peripheral MTR__U_NSS_XSP_RAM base address */
  #define MTR__U_NSS_XSP_RAM_BASE                  (0x4002B400u)
  /** Peripheral MTR__U_NSS_XSP_RAM base pointer */
  #define MTR__U_NSS_XSP_RAM                       ((MTR_BIST_Type *)MTR__U_NSS_XSP_RAM_BASE)
  /** Array initializer of MTR_BIST peripheral base addresses */
  #define MTR_BIST_BASE_ADDRS                      { MTR__U_ADSS_RAM_0_BASE, MTR__U_ADSS_RAM_1_BASE, MTR__U_CTRLSS_CM55_RAM_0_BASE, MTR__U_CTRLSS_CM55_RAM_1_BASE, MTR__U_CTRLSS_CM55_ROM_BASE, MTR__U_NSS_CM55_RAM_BASE, MTR__U_NSS_DNN_RAM_0_BASE, MTR__U_NSS_DNN_RAM_1_BASE, MTR__U_NSS_DNN_RAM_2_BASE, MTR__U_NSS_DNN_RAM_3_BASE, MTR__U_NSS_DNN_RAM_4_BASE, MTR__U_NSS_ETHOSU85_RAM_BASE, MTR__U_NSS_XSP_RAM_BASE }
  /** Array initializer of MTR_BIST peripheral base pointers */
  #define MTR_BIST_BASE_PTRS                       { MTR__U_ADSS_RAM_0, MTR__U_ADSS_RAM_1, MTR__U_CTRLSS_CM55_RAM_0, MTR__U_CTRLSS_CM55_RAM_1, MTR__U_CTRLSS_CM55_ROM, MTR__U_NSS_CM55_RAM, MTR__U_NSS_DNN_RAM_0, MTR__U_NSS_DNN_RAM_1, MTR__U_NSS_DNN_RAM_2, MTR__U_NSS_DNN_RAM_3, MTR__U_NSS_DNN_RAM_4, MTR__U_NSS_ETHOSU85_RAM, MTR__U_NSS_XSP_RAM }
#endif

/* MTR_MASTER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral MTR__MTR_MASTER base address */
  #define MTR__MTR_MASTER_BASE_NS                  (0x4002B000u)
  /** Peripheral MTR__MTR_MASTER base pointer */
  #define MTR__MTR_MASTER_NS                       ((MTR_MASTER_Type *)MTR__MTR_MASTER_BASE_NS)
  /** Peripheral MTR__MTR_MASTER base address */
  #define MTR__MTR_MASTER_BASE                     (0x5002B000u)
  /** Peripheral MTR__MTR_MASTER base pointer */
  #define MTR__MTR_MASTER                          ((MTR_MASTER_Type *)MTR__MTR_MASTER_BASE)
  /** Array initializer of MTR_MASTER peripheral base addresses */
  #define MTR_MASTER_BASE_ADDRS_NS                 { MTR__MTR_MASTER_BASE_NS }
  /** Array initializer of MTR_MASTER peripheral base pointers */
  #define MTR_MASTER_BASE_PTRS_NS                  { MTR__MTR_MASTER_NS }
  /** Array initializer of MTR_MASTER peripheral base addresses */
  #define MTR_MASTER_BASE_ADDRS                    { MTR__MTR_MASTER_BASE }
  /** Array initializer of MTR_MASTER peripheral base pointers */
  #define MTR_MASTER_BASE_PTRS                     { MTR__MTR_MASTER }
#else
  /** Peripheral MTR__MTR_MASTER base address */
  #define MTR__MTR_MASTER_BASE                     (0x4002B000u)
  /** Peripheral MTR__MTR_MASTER base pointer */
  #define MTR__MTR_MASTER                          ((MTR_MASTER_Type *)MTR__MTR_MASTER_BASE)
  /** Array initializer of MTR_MASTER peripheral base addresses */
  #define MTR_MASTER_BASE_ADDRS                    { MTR__MTR_MASTER_BASE }
  /** Array initializer of MTR_MASTER peripheral base pointers */
  #define MTR_MASTER_BASE_PTRS                     { MTR__MTR_MASTER }
#endif

/* MTR_PBC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral MTR__PARTITION1_NSS base address */
  #define MTR__PARTITION1_NSS_BASE_NS              (0x4002B7F0u)
  /** Peripheral MTR__PARTITION1_NSS base pointer */
  #define MTR__PARTITION1_NSS_NS                   ((MTR_PBC_Type *)MTR__PARTITION1_NSS_BASE_NS)
  /** Peripheral MTR__PARTITION1_NSS base address */
  #define MTR__PARTITION1_NSS_BASE                 (0x5002B7F0u)
  /** Peripheral MTR__PARTITION1_NSS base pointer */
  #define MTR__PARTITION1_NSS                      ((MTR_PBC_Type *)MTR__PARTITION1_NSS_BASE)
  /** Peripheral MTR__PARTITION2_CTRLSS base address */
  #define MTR__PARTITION2_CTRLSS_BASE_NS           (0x4002BBF0u)
  /** Peripheral MTR__PARTITION2_CTRLSS base pointer */
  #define MTR__PARTITION2_CTRLSS_NS                ((MTR_PBC_Type *)MTR__PARTITION2_CTRLSS_BASE_NS)
  /** Peripheral MTR__PARTITION2_CTRLSS base address */
  #define MTR__PARTITION2_CTRLSS_BASE              (0x5002BBF0u)
  /** Peripheral MTR__PARTITION2_CTRLSS base pointer */
  #define MTR__PARTITION2_CTRLSS                   ((MTR_PBC_Type *)MTR__PARTITION2_CTRLSS_BASE)
  /** Peripheral MTR__PARTITION3_ADSS base address */
  #define MTR__PARTITION3_ADSS_BASE_NS             (0x4002BFF0u)
  /** Peripheral MTR__PARTITION3_ADSS base pointer */
  #define MTR__PARTITION3_ADSS_NS                  ((MTR_PBC_Type *)MTR__PARTITION3_ADSS_BASE_NS)
  /** Peripheral MTR__PARTITION3_ADSS base address */
  #define MTR__PARTITION3_ADSS_BASE                (0x5002BFF0u)
  /** Peripheral MTR__PARTITION3_ADSS base pointer */
  #define MTR__PARTITION3_ADSS                     ((MTR_PBC_Type *)MTR__PARTITION3_ADSS_BASE)
  /** Peripheral MTR__PARTITION4_DNN_RAM base address */
  #define MTR__PARTITION4_DNN_RAM_BASE_NS          (0x4002C3F0u)
  /** Peripheral MTR__PARTITION4_DNN_RAM base pointer */
  #define MTR__PARTITION4_DNN_RAM_NS               ((MTR_PBC_Type *)MTR__PARTITION4_DNN_RAM_BASE_NS)
  /** Peripheral MTR__PARTITION4_DNN_RAM base address */
  #define MTR__PARTITION4_DNN_RAM_BASE             (0x5002C3F0u)
  /** Peripheral MTR__PARTITION4_DNN_RAM base pointer */
  #define MTR__PARTITION4_DNN_RAM                  ((MTR_PBC_Type *)MTR__PARTITION4_DNN_RAM_BASE)
  /** Array initializer of MTR_PBC peripheral base addresses */
  #define MTR_PBC_BASE_ADDRS_NS                    { MTR__PARTITION1_NSS_BASE_NS, MTR__PARTITION2_CTRLSS_BASE_NS, MTR__PARTITION3_ADSS_BASE_NS, MTR__PARTITION4_DNN_RAM_BASE_NS }
  /** Array initializer of MTR_PBC peripheral base pointers */
  #define MTR_PBC_BASE_PTRS_NS                     { MTR__PARTITION1_NSS_NS, MTR__PARTITION2_CTRLSS_NS, MTR__PARTITION3_ADSS_NS, MTR__PARTITION4_DNN_RAM_NS }
  /** Array initializer of MTR_PBC peripheral base addresses */
  #define MTR_PBC_BASE_ADDRS                       { MTR__PARTITION1_NSS_BASE, MTR__PARTITION2_CTRLSS_BASE, MTR__PARTITION3_ADSS_BASE, MTR__PARTITION4_DNN_RAM_BASE }
  /** Array initializer of MTR_PBC peripheral base pointers */
  #define MTR_PBC_BASE_PTRS                        { MTR__PARTITION1_NSS, MTR__PARTITION2_CTRLSS, MTR__PARTITION3_ADSS, MTR__PARTITION4_DNN_RAM }
#else
  /** Peripheral MTR__PARTITION1_NSS base address */
  #define MTR__PARTITION1_NSS_BASE                 (0x4002B7F0u)
  /** Peripheral MTR__PARTITION1_NSS base pointer */
  #define MTR__PARTITION1_NSS                      ((MTR_PBC_Type *)MTR__PARTITION1_NSS_BASE)
  /** Peripheral MTR__PARTITION2_CTRLSS base address */
  #define MTR__PARTITION2_CTRLSS_BASE              (0x4002BBF0u)
  /** Peripheral MTR__PARTITION2_CTRLSS base pointer */
  #define MTR__PARTITION2_CTRLSS                   ((MTR_PBC_Type *)MTR__PARTITION2_CTRLSS_BASE)
  /** Peripheral MTR__PARTITION3_ADSS base address */
  #define MTR__PARTITION3_ADSS_BASE                (0x4002BFF0u)
  /** Peripheral MTR__PARTITION3_ADSS base pointer */
  #define MTR__PARTITION3_ADSS                     ((MTR_PBC_Type *)MTR__PARTITION3_ADSS_BASE)
  /** Peripheral MTR__PARTITION4_DNN_RAM base address */
  #define MTR__PARTITION4_DNN_RAM_BASE             (0x4002C3F0u)
  /** Peripheral MTR__PARTITION4_DNN_RAM base pointer */
  #define MTR__PARTITION4_DNN_RAM                  ((MTR_PBC_Type *)MTR__PARTITION4_DNN_RAM_BASE)
  /** Array initializer of MTR_PBC peripheral base addresses */
  #define MTR_PBC_BASE_ADDRS                       { MTR__PARTITION1_NSS_BASE, MTR__PARTITION2_CTRLSS_BASE, MTR__PARTITION3_ADSS_BASE, MTR__PARTITION4_DNN_RAM_BASE }
  /** Array initializer of MTR_PBC peripheral base pointers */
  #define MTR_PBC_BASE_PTRS                        { MTR__PARTITION1_NSS, MTR__PARTITION2_CTRLSS, MTR__PARTITION3_ADSS, MTR__PARTITION4_DNN_RAM }
#endif

/* NIC400 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__NIC400_0 base address */
  #define CTRLSS__NIC400_0_BASE_NS                 (0x40100000u)
  /** Peripheral CTRLSS__NIC400_0 base pointer */
  #define CTRLSS__NIC400_0_NS                      ((NIC400_Type *)CTRLSS__NIC400_0_BASE_NS)
  /** Peripheral CTRLSS__NIC400_0 base address */
  #define CTRLSS__NIC400_0_BASE                    (0x50100000u)
  /** Peripheral CTRLSS__NIC400_0 base pointer */
  #define CTRLSS__NIC400_0                         ((NIC400_Type *)CTRLSS__NIC400_0_BASE)
  /** Array initializer of NIC400 peripheral base addresses */
  #define NIC400_BASE_ADDRS_NS                     { CTRLSS__NIC400_0_BASE_NS }
  /** Array initializer of NIC400 peripheral base pointers */
  #define NIC400_BASE_PTRS_NS                      { CTRLSS__NIC400_0_NS }
  /** Array initializer of NIC400 peripheral base addresses */
  #define NIC400_BASE_ADDRS                        { CTRLSS__NIC400_0_BASE }
  /** Array initializer of NIC400 peripheral base pointers */
  #define NIC400_BASE_PTRS                         { CTRLSS__NIC400_0 }
#else
  /** Peripheral CTRLSS__NIC400_0 base address */
  #define CTRLSS__NIC400_0_BASE                    (0x40100000u)
  /** Peripheral CTRLSS__NIC400_0 base pointer */
  #define CTRLSS__NIC400_0                         ((NIC400_Type *)CTRLSS__NIC400_0_BASE)
  /** Array initializer of NIC400 peripheral base addresses */
  #define NIC400_BASE_ADDRS                        { CTRLSS__NIC400_0_BASE }
  /** Array initializer of NIC400 peripheral base pointers */
  #define NIC400_BASE_PTRS                         { CTRLSS__NIC400_0 }
#endif

/* NSS_CGU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__CGU base address */
  #define NSS__CGU_BASE_NS                         (0x40800000u)
  /** Peripheral NSS__CGU base pointer */
  #define NSS__CGU_NS                              ((NSS_CGU_Type *)NSS__CGU_BASE_NS)
  /** Peripheral NSS__CGU base address */
  #define NSS__CGU_BASE                            (0x50800000u)
  /** Peripheral NSS__CGU base pointer */
  #define NSS__CGU                                 ((NSS_CGU_Type *)NSS__CGU_BASE)
  /** Array initializer of NSS_CGU peripheral base addresses */
  #define NSS_CGU_BASE_ADDRS_NS                    { NSS__CGU_BASE_NS }
  /** Array initializer of NSS_CGU peripheral base pointers */
  #define NSS_CGU_BASE_PTRS_NS                     { NSS__CGU_NS }
  /** Array initializer of NSS_CGU peripheral base addresses */
  #define NSS_CGU_BASE_ADDRS                       { NSS__CGU_BASE }
  /** Array initializer of NSS_CGU peripheral base pointers */
  #define NSS_CGU_BASE_PTRS                        { NSS__CGU }
#else
  /** Peripheral NSS__CGU base address */
  #define NSS__CGU_BASE                            (0x40800000u)
  /** Peripheral NSS__CGU base pointer */
  #define NSS__CGU                                 ((NSS_CGU_Type *)NSS__CGU_BASE)
  /** Array initializer of NSS_CGU peripheral base addresses */
  #define NSS_CGU_BASE_ADDRS                       { NSS__CGU_BASE }
  /** Array initializer of NSS_CGU peripheral base pointers */
  #define NSS_CGU_BASE_PTRS                        { NSS__CGU }
#endif

/* NSS_CSSEVENT_GEN - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__CSSEVENT_GEN base address */
  #define NSS__CSSEVENT_GEN_BASE_NS                (0x40803400u)
  /** Peripheral NSS__CSSEVENT_GEN base pointer */
  #define NSS__CSSEVENT_GEN_NS                     ((NSS_CSSEVENT_GEN_Type *)NSS__CSSEVENT_GEN_BASE_NS)
  /** Peripheral NSS__CSSEVENT_GEN base address */
  #define NSS__CSSEVENT_GEN_BASE                   (0x50803400u)
  /** Peripheral NSS__CSSEVENT_GEN base pointer */
  #define NSS__CSSEVENT_GEN                        ((NSS_CSSEVENT_GEN_Type *)NSS__CSSEVENT_GEN_BASE)
  /** Array initializer of NSS_CSSEVENT_GEN peripheral base addresses */
  #define NSS_CSSEVENT_GEN_BASE_ADDRS_NS           { NSS__CSSEVENT_GEN_BASE_NS }
  /** Array initializer of NSS_CSSEVENT_GEN peripheral base pointers */
  #define NSS_CSSEVENT_GEN_BASE_PTRS_NS            { NSS__CSSEVENT_GEN_NS }
  /** Array initializer of NSS_CSSEVENT_GEN peripheral base addresses */
  #define NSS_CSSEVENT_GEN_BASE_ADDRS              { NSS__CSSEVENT_GEN_BASE }
  /** Array initializer of NSS_CSSEVENT_GEN peripheral base pointers */
  #define NSS_CSSEVENT_GEN_BASE_PTRS               { NSS__CSSEVENT_GEN }
#else
  /** Peripheral NSS__CSSEVENT_GEN base address */
  #define NSS__CSSEVENT_GEN_BASE                   (0x40803400u)
  /** Peripheral NSS__CSSEVENT_GEN base pointer */
  #define NSS__CSSEVENT_GEN                        ((NSS_CSSEVENT_GEN_Type *)NSS__CSSEVENT_GEN_BASE)
  /** Array initializer of NSS_CSSEVENT_GEN peripheral base addresses */
  #define NSS_CSSEVENT_GEN_BASE_ADDRS              { NSS__CSSEVENT_GEN_BASE }
  /** Array initializer of NSS_CSSEVENT_GEN peripheral base pointers */
  #define NSS_CSSEVENT_GEN_BASE_PTRS               { NSS__CSSEVENT_GEN }
#endif

/* NSS_DBG_GPO - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__DBG_GPO base address */
  #define NSS__DBG_GPO_BASE_NS                     (0x40802000u)
  /** Peripheral NSS__DBG_GPO base pointer */
  #define NSS__DBG_GPO_NS                          ((NSS_DBG_GPO_Type *)NSS__DBG_GPO_BASE_NS)
  /** Peripheral NSS__DBG_GPO base address */
  #define NSS__DBG_GPO_BASE                        (0x50802000u)
  /** Peripheral NSS__DBG_GPO base pointer */
  #define NSS__DBG_GPO                             ((NSS_DBG_GPO_Type *)NSS__DBG_GPO_BASE)
  /** Array initializer of NSS_DBG_GPO peripheral base addresses */
  #define NSS_DBG_GPO_BASE_ADDRS_NS                { NSS__DBG_GPO_BASE_NS }
  /** Array initializer of NSS_DBG_GPO peripheral base pointers */
  #define NSS_DBG_GPO_BASE_PTRS_NS                 { NSS__DBG_GPO_NS }
  /** Array initializer of NSS_DBG_GPO peripheral base addresses */
  #define NSS_DBG_GPO_BASE_ADDRS                   { NSS__DBG_GPO_BASE }
  /** Array initializer of NSS_DBG_GPO peripheral base pointers */
  #define NSS_DBG_GPO_BASE_PTRS                    { NSS__DBG_GPO }
#else
  /** Peripheral NSS__DBG_GPO base address */
  #define NSS__DBG_GPO_BASE                        (0x40802000u)
  /** Peripheral NSS__DBG_GPO base pointer */
  #define NSS__DBG_GPO                             ((NSS_DBG_GPO_Type *)NSS__DBG_GPO_BASE)
  /** Array initializer of NSS_DBG_GPO peripheral base addresses */
  #define NSS_DBG_GPO_BASE_ADDRS                   { NSS__DBG_GPO_BASE }
  /** Array initializer of NSS_DBG_GPO peripheral base pointers */
  #define NSS_DBG_GPO_BASE_PTRS                    { NSS__DBG_GPO }
#endif

/* NSS_DBG_SO - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__DBG_SO base address */
  #define NSS__DBG_SO_BASE_NS                      (0x40801C00u)
  /** Peripheral NSS__DBG_SO base pointer */
  #define NSS__DBG_SO_NS                           ((NSS_DBG_SO_Type *)NSS__DBG_SO_BASE_NS)
  /** Peripheral NSS__DBG_SO base address */
  #define NSS__DBG_SO_BASE                         (0x50801C00u)
  /** Peripheral NSS__DBG_SO base pointer */
  #define NSS__DBG_SO                              ((NSS_DBG_SO_Type *)NSS__DBG_SO_BASE)
  /** Array initializer of NSS_DBG_SO peripheral base addresses */
  #define NSS_DBG_SO_BASE_ADDRS_NS                 { NSS__DBG_SO_BASE_NS }
  /** Array initializer of NSS_DBG_SO peripheral base pointers */
  #define NSS_DBG_SO_BASE_PTRS_NS                  { NSS__DBG_SO_NS }
  /** Array initializer of NSS_DBG_SO peripheral base addresses */
  #define NSS_DBG_SO_BASE_ADDRS                    { NSS__DBG_SO_BASE }
  /** Array initializer of NSS_DBG_SO peripheral base pointers */
  #define NSS_DBG_SO_BASE_PTRS                     { NSS__DBG_SO }
#else
  /** Peripheral NSS__DBG_SO base address */
  #define NSS__DBG_SO_BASE                         (0x40801C00u)
  /** Peripheral NSS__DBG_SO base pointer */
  #define NSS__DBG_SO                              ((NSS_DBG_SO_Type *)NSS__DBG_SO_BASE)
  /** Array initializer of NSS_DBG_SO peripheral base addresses */
  #define NSS_DBG_SO_BASE_ADDRS                    { NSS__DBG_SO_BASE }
  /** Array initializer of NSS_DBG_SO peripheral base pointers */
  #define NSS_DBG_SO_BASE_PTRS                     { NSS__DBG_SO }
#endif

/* NSS_DMA_HWREQ - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__DMA_HWREQ base address */
  #define NSS__DMA_HWREQ_BASE_NS                   (0x40806000u)
  /** Peripheral NSS__DMA_HWREQ base pointer */
  #define NSS__DMA_HWREQ_NS                        ((NSS_DMA_HWREQ_Type *)NSS__DMA_HWREQ_BASE_NS)
  /** Peripheral NSS__DMA_HWREQ base address */
  #define NSS__DMA_HWREQ_BASE                      (0x50806000u)
  /** Peripheral NSS__DMA_HWREQ base pointer */
  #define NSS__DMA_HWREQ                           ((NSS_DMA_HWREQ_Type *)NSS__DMA_HWREQ_BASE)
  /** Array initializer of NSS_DMA_HWREQ peripheral base addresses */
  #define NSS_DMA_HWREQ_BASE_ADDRS_NS              { NSS__DMA_HWREQ_BASE_NS }
  /** Array initializer of NSS_DMA_HWREQ peripheral base pointers */
  #define NSS_DMA_HWREQ_BASE_PTRS_NS               { NSS__DMA_HWREQ_NS }
  /** Array initializer of NSS_DMA_HWREQ peripheral base addresses */
  #define NSS_DMA_HWREQ_BASE_ADDRS                 { NSS__DMA_HWREQ_BASE }
  /** Array initializer of NSS_DMA_HWREQ peripheral base pointers */
  #define NSS_DMA_HWREQ_BASE_PTRS                  { NSS__DMA_HWREQ }
#else
  /** Peripheral NSS__DMA_HWREQ base address */
  #define NSS__DMA_HWREQ_BASE                      (0x40806000u)
  /** Peripheral NSS__DMA_HWREQ base pointer */
  #define NSS__DMA_HWREQ                           ((NSS_DMA_HWREQ_Type *)NSS__DMA_HWREQ_BASE)
  /** Array initializer of NSS_DMA_HWREQ peripheral base addresses */
  #define NSS_DMA_HWREQ_BASE_ADDRS                 { NSS__DMA_HWREQ_BASE }
  /** Array initializer of NSS_DMA_HWREQ peripheral base pointers */
  #define NSS_DMA_HWREQ_BASE_PTRS                  { NSS__DMA_HWREQ }
#endif

/* NSS_DNN_RAM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__DNN_RAM_0 base address */
  #define NSS__DNN_RAM_0_BASE_NS                   (0x40810000u)
  /** Peripheral NSS__DNN_RAM_0 base pointer */
  #define NSS__DNN_RAM_0_NS                        ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_0_BASE_NS)
  /** Peripheral NSS__DNN_RAM_0 base address */
  #define NSS__DNN_RAM_0_BASE                      (0x50810000u)
  /** Peripheral NSS__DNN_RAM_0 base pointer */
  #define NSS__DNN_RAM_0                           ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_0_BASE)
  /** Peripheral NSS__DNN_RAM_1 base address */
  #define NSS__DNN_RAM_1_BASE_NS                   (0x40810400u)
  /** Peripheral NSS__DNN_RAM_1 base pointer */
  #define NSS__DNN_RAM_1_NS                        ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_1_BASE_NS)
  /** Peripheral NSS__DNN_RAM_1 base address */
  #define NSS__DNN_RAM_1_BASE                      (0x50810400u)
  /** Peripheral NSS__DNN_RAM_1 base pointer */
  #define NSS__DNN_RAM_1                           ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_1_BASE)
  /** Peripheral NSS__DNN_RAM_2 base address */
  #define NSS__DNN_RAM_2_BASE_NS                   (0x40810800u)
  /** Peripheral NSS__DNN_RAM_2 base pointer */
  #define NSS__DNN_RAM_2_NS                        ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_2_BASE_NS)
  /** Peripheral NSS__DNN_RAM_2 base address */
  #define NSS__DNN_RAM_2_BASE                      (0x50810800u)
  /** Peripheral NSS__DNN_RAM_2 base pointer */
  #define NSS__DNN_RAM_2                           ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_2_BASE)
  /** Peripheral NSS__DNN_RAM_3 base address */
  #define NSS__DNN_RAM_3_BASE_NS                   (0x40810C00u)
  /** Peripheral NSS__DNN_RAM_3 base pointer */
  #define NSS__DNN_RAM_3_NS                        ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_3_BASE_NS)
  /** Peripheral NSS__DNN_RAM_3 base address */
  #define NSS__DNN_RAM_3_BASE                      (0x50810C00u)
  /** Peripheral NSS__DNN_RAM_3 base pointer */
  #define NSS__DNN_RAM_3                           ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_3_BASE)
  /** Peripheral NSS__DNN_RAM_4 base address */
  #define NSS__DNN_RAM_4_BASE_NS                   (0x40811000u)
  /** Peripheral NSS__DNN_RAM_4 base pointer */
  #define NSS__DNN_RAM_4_NS                        ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_4_BASE_NS)
  /** Peripheral NSS__DNN_RAM_4 base address */
  #define NSS__DNN_RAM_4_BASE                      (0x50811000u)
  /** Peripheral NSS__DNN_RAM_4 base pointer */
  #define NSS__DNN_RAM_4                           ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_4_BASE)
  /** Array initializer of NSS_DNN_RAM peripheral base addresses */
  #define NSS_DNN_RAM_BASE_ADDRS_NS                { NSS__DNN_RAM_0_BASE_NS, NSS__DNN_RAM_1_BASE_NS, NSS__DNN_RAM_2_BASE_NS, NSS__DNN_RAM_3_BASE_NS, NSS__DNN_RAM_4_BASE_NS }
  /** Array initializer of NSS_DNN_RAM peripheral base pointers */
  #define NSS_DNN_RAM_BASE_PTRS_NS                 { NSS__DNN_RAM_0_NS, NSS__DNN_RAM_1_NS, NSS__DNN_RAM_2_NS, NSS__DNN_RAM_3_NS, NSS__DNN_RAM_4_NS }
  /** Array initializer of NSS_DNN_RAM peripheral base addresses */
  #define NSS_DNN_RAM_BASE_ADDRS                   { NSS__DNN_RAM_0_BASE, NSS__DNN_RAM_1_BASE, NSS__DNN_RAM_2_BASE, NSS__DNN_RAM_3_BASE, NSS__DNN_RAM_4_BASE }
  /** Array initializer of NSS_DNN_RAM peripheral base pointers */
  #define NSS_DNN_RAM_BASE_PTRS                    { NSS__DNN_RAM_0, NSS__DNN_RAM_1, NSS__DNN_RAM_2, NSS__DNN_RAM_3, NSS__DNN_RAM_4 }
#else
  /** Peripheral NSS__DNN_RAM_0 base address */
  #define NSS__DNN_RAM_0_BASE                      (0x40810000u)
  /** Peripheral NSS__DNN_RAM_0 base pointer */
  #define NSS__DNN_RAM_0                           ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_0_BASE)
  /** Peripheral NSS__DNN_RAM_1 base address */
  #define NSS__DNN_RAM_1_BASE                      (0x40810400u)
  /** Peripheral NSS__DNN_RAM_1 base pointer */
  #define NSS__DNN_RAM_1                           ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_1_BASE)
  /** Peripheral NSS__DNN_RAM_2 base address */
  #define NSS__DNN_RAM_2_BASE                      (0x40810800u)
  /** Peripheral NSS__DNN_RAM_2 base pointer */
  #define NSS__DNN_RAM_2                           ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_2_BASE)
  /** Peripheral NSS__DNN_RAM_3 base address */
  #define NSS__DNN_RAM_3_BASE                      (0x40810C00u)
  /** Peripheral NSS__DNN_RAM_3 base pointer */
  #define NSS__DNN_RAM_3                           ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_3_BASE)
  /** Peripheral NSS__DNN_RAM_4 base address */
  #define NSS__DNN_RAM_4_BASE                      (0x40811000u)
  /** Peripheral NSS__DNN_RAM_4 base pointer */
  #define NSS__DNN_RAM_4                           ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_4_BASE)
  /** Array initializer of NSS_DNN_RAM peripheral base addresses */
  #define NSS_DNN_RAM_BASE_ADDRS                   { NSS__DNN_RAM_0_BASE, NSS__DNN_RAM_1_BASE, NSS__DNN_RAM_2_BASE, NSS__DNN_RAM_3_BASE, NSS__DNN_RAM_4_BASE }
  /** Array initializer of NSS_DNN_RAM peripheral base pointers */
  #define NSS_DNN_RAM_BASE_PTRS                    { NSS__DNN_RAM_0, NSS__DNN_RAM_1, NSS__DNN_RAM_2, NSS__DNN_RAM_3, NSS__DNN_RAM_4 }
#endif

/* NSS_DSSEVENT_GEN - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__DSSEVENT_GEN base address */
  #define NSS__DSSEVENT_GEN_BASE_NS                (0x40803000u)
  /** Peripheral NSS__DSSEVENT_GEN base pointer */
  #define NSS__DSSEVENT_GEN_NS                     ((NSS_DSSEVENT_GEN_Type *)NSS__DSSEVENT_GEN_BASE_NS)
  /** Peripheral NSS__DSSEVENT_GEN base address */
  #define NSS__DSSEVENT_GEN_BASE                   (0x50803000u)
  /** Peripheral NSS__DSSEVENT_GEN base pointer */
  #define NSS__DSSEVENT_GEN                        ((NSS_DSSEVENT_GEN_Type *)NSS__DSSEVENT_GEN_BASE)
  /** Array initializer of NSS_DSSEVENT_GEN peripheral base addresses */
  #define NSS_DSSEVENT_GEN_BASE_ADDRS_NS           { NSS__DSSEVENT_GEN_BASE_NS }
  /** Array initializer of NSS_DSSEVENT_GEN peripheral base pointers */
  #define NSS_DSSEVENT_GEN_BASE_PTRS_NS            { NSS__DSSEVENT_GEN_NS }
  /** Array initializer of NSS_DSSEVENT_GEN peripheral base addresses */
  #define NSS_DSSEVENT_GEN_BASE_ADDRS              { NSS__DSSEVENT_GEN_BASE }
  /** Array initializer of NSS_DSSEVENT_GEN peripheral base pointers */
  #define NSS_DSSEVENT_GEN_BASE_PTRS               { NSS__DSSEVENT_GEN }
#else
  /** Peripheral NSS__DSSEVENT_GEN base address */
  #define NSS__DSSEVENT_GEN_BASE                   (0x40803000u)
  /** Peripheral NSS__DSSEVENT_GEN base pointer */
  #define NSS__DSSEVENT_GEN                        ((NSS_DSSEVENT_GEN_Type *)NSS__DSSEVENT_GEN_BASE)
  /** Array initializer of NSS_DSSEVENT_GEN peripheral base addresses */
  #define NSS_DSSEVENT_GEN_BASE_ADDRS              { NSS__DSSEVENT_GEN_BASE }
  /** Array initializer of NSS_DSSEVENT_GEN peripheral base pointers */
  #define NSS_DSSEVENT_GEN_BASE_PTRS               { NSS__DSSEVENT_GEN }
#endif

/* NSS_EDU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__EDU base address */
  #define NSS__EDU_BASE_NS                         (0x40803800u)
  /** Peripheral NSS__EDU base pointer */
  #define NSS__EDU_NS                              ((NSS_EDU_Type *)NSS__EDU_BASE_NS)
  /** Peripheral NSS__EDU base address */
  #define NSS__EDU_BASE                            (0x50803800u)
  /** Peripheral NSS__EDU base pointer */
  #define NSS__EDU                                 ((NSS_EDU_Type *)NSS__EDU_BASE)
  /** Array initializer of NSS_EDU peripheral base addresses */
  #define NSS_EDU_BASE_ADDRS_NS                    { NSS__EDU_BASE_NS }
  /** Array initializer of NSS_EDU peripheral base pointers */
  #define NSS_EDU_BASE_PTRS_NS                     { NSS__EDU_NS }
  /** Array initializer of NSS_EDU peripheral base addresses */
  #define NSS_EDU_BASE_ADDRS                       { NSS__EDU_BASE }
  /** Array initializer of NSS_EDU peripheral base pointers */
  #define NSS_EDU_BASE_PTRS                        { NSS__EDU }
#else
  /** Peripheral NSS__EDU base address */
  #define NSS__EDU_BASE                            (0x40803800u)
  /** Peripheral NSS__EDU base pointer */
  #define NSS__EDU                                 ((NSS_EDU_Type *)NSS__EDU_BASE)
  /** Array initializer of NSS_EDU peripheral base addresses */
  #define NSS_EDU_BASE_ADDRS                       { NSS__EDU_BASE }
  /** Array initializer of NSS_EDU peripheral base pointers */
  #define NSS_EDU_BASE_PTRS                        { NSS__EDU }
#endif

/* NSS_EVENT_BUS - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__EVENT_BUS base address */
  #define NSS__EVENT_BUS_BASE_NS                   (0x40802C00u)
  /** Peripheral NSS__EVENT_BUS base pointer */
  #define NSS__EVENT_BUS_NS                        ((NSS_EVENT_BUS_Type *)NSS__EVENT_BUS_BASE_NS)
  /** Peripheral NSS__EVENT_BUS base address */
  #define NSS__EVENT_BUS_BASE                      (0x50802C00u)
  /** Peripheral NSS__EVENT_BUS base pointer */
  #define NSS__EVENT_BUS                           ((NSS_EVENT_BUS_Type *)NSS__EVENT_BUS_BASE)
  /** Array initializer of NSS_EVENT_BUS peripheral base addresses */
  #define NSS_EVENT_BUS_BASE_ADDRS_NS              { NSS__EVENT_BUS_BASE_NS }
  /** Array initializer of NSS_EVENT_BUS peripheral base pointers */
  #define NSS_EVENT_BUS_BASE_PTRS_NS               { NSS__EVENT_BUS_NS }
  /** Array initializer of NSS_EVENT_BUS peripheral base addresses */
  #define NSS_EVENT_BUS_BASE_ADDRS                 { NSS__EVENT_BUS_BASE }
  /** Array initializer of NSS_EVENT_BUS peripheral base pointers */
  #define NSS_EVENT_BUS_BASE_PTRS                  { NSS__EVENT_BUS }
#else
  /** Peripheral NSS__EVENT_BUS base address */
  #define NSS__EVENT_BUS_BASE                      (0x40802C00u)
  /** Peripheral NSS__EVENT_BUS base pointer */
  #define NSS__EVENT_BUS                           ((NSS_EVENT_BUS_Type *)NSS__EVENT_BUS_BASE)
  /** Array initializer of NSS_EVENT_BUS peripheral base addresses */
  #define NSS_EVENT_BUS_BASE_ADDRS                 { NSS__EVENT_BUS_BASE }
  /** Array initializer of NSS_EVENT_BUS peripheral base pointers */
  #define NSS_EVENT_BUS_BASE_PTRS                  { NSS__EVENT_BUS }
#endif

/* NSS_PMON - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__PMON base address */
  #define NSS__PMON_BASE_NS                        (0x40803C00u)
  /** Peripheral NSS__PMON base pointer */
  #define NSS__PMON_NS                             ((NSS_PMON_Type *)NSS__PMON_BASE_NS)
  /** Peripheral NSS__PMON base address */
  #define NSS__PMON_BASE                           (0x50803C00u)
  /** Peripheral NSS__PMON base pointer */
  #define NSS__PMON                                ((NSS_PMON_Type *)NSS__PMON_BASE)
  /** Array initializer of NSS_PMON peripheral base addresses */
  #define NSS_PMON_BASE_ADDRS_NS                   { NSS__PMON_BASE_NS }
  /** Array initializer of NSS_PMON peripheral base pointers */
  #define NSS_PMON_BASE_PTRS_NS                    { NSS__PMON_NS }
  /** Array initializer of NSS_PMON peripheral base addresses */
  #define NSS_PMON_BASE_ADDRS                      { NSS__PMON_BASE }
  /** Array initializer of NSS_PMON peripheral base pointers */
  #define NSS_PMON_BASE_PTRS                       { NSS__PMON }
#else
  /** Peripheral NSS__PMON base address */
  #define NSS__PMON_BASE                           (0x40803C00u)
  /** Peripheral NSS__PMON base pointer */
  #define NSS__PMON                                ((NSS_PMON_Type *)NSS__PMON_BASE)
  /** Array initializer of NSS_PMON peripheral base addresses */
  #define NSS_PMON_BASE_ADDRS                      { NSS__PMON_BASE }
  /** Array initializer of NSS_PMON peripheral base pointers */
  #define NSS_PMON_BASE_PTRS                       { NSS__PMON }
#endif

/* NSS_SYSCFG - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__SYSCFG base address */
  #define NSS__SYSCFG_BASE_NS                      (0x40800400u)
  /** Peripheral NSS__SYSCFG base pointer */
  #define NSS__SYSCFG_NS                           ((NSS_SYSCFG_Type *)NSS__SYSCFG_BASE_NS)
  /** Peripheral NSS__SYSCFG base address */
  #define NSS__SYSCFG_BASE                         (0x50800400u)
  /** Peripheral NSS__SYSCFG base pointer */
  #define NSS__SYSCFG                              ((NSS_SYSCFG_Type *)NSS__SYSCFG_BASE)
  /** Array initializer of NSS_SYSCFG peripheral base addresses */
  #define NSS_SYSCFG_BASE_ADDRS_NS                 { NSS__SYSCFG_BASE_NS }
  /** Array initializer of NSS_SYSCFG peripheral base pointers */
  #define NSS_SYSCFG_BASE_PTRS_NS                  { NSS__SYSCFG_NS }
  /** Array initializer of NSS_SYSCFG peripheral base addresses */
  #define NSS_SYSCFG_BASE_ADDRS                    { NSS__SYSCFG_BASE }
  /** Array initializer of NSS_SYSCFG peripheral base pointers */
  #define NSS_SYSCFG_BASE_PTRS                     { NSS__SYSCFG }
#else
  /** Peripheral NSS__SYSCFG base address */
  #define NSS__SYSCFG_BASE                         (0x40800400u)
  /** Peripheral NSS__SYSCFG base pointer */
  #define NSS__SYSCFG                              ((NSS_SYSCFG_Type *)NSS__SYSCFG_BASE)
  /** Array initializer of NSS_SYSCFG peripheral base addresses */
  #define NSS_SYSCFG_BASE_ADDRS                    { NSS__SYSCFG_BASE }
  /** Array initializer of NSS_SYSCFG peripheral base pointers */
  #define NSS_SYSCFG_BASE_PTRS                     { NSS__SYSCFG }
#endif

/* NSS_TIMER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__TIMER base address */
  #define NSS__TIMER_BASE_NS                       (0x40802800u)
  /** Peripheral NSS__TIMER base pointer */
  #define NSS__TIMER_NS                            ((NSS_TIMER_Type *)NSS__TIMER_BASE_NS)
  /** Peripheral NSS__TIMER base address */
  #define NSS__TIMER_BASE                          (0x50802800u)
  /** Peripheral NSS__TIMER base pointer */
  #define NSS__TIMER                               ((NSS_TIMER_Type *)NSS__TIMER_BASE)
  /** Array initializer of NSS_TIMER peripheral base addresses */
  #define NSS_TIMER_BASE_ADDRS_NS                  { NSS__TIMER_BASE_NS }
  /** Array initializer of NSS_TIMER peripheral base pointers */
  #define NSS_TIMER_BASE_PTRS_NS                   { NSS__TIMER_NS }
  /** Array initializer of NSS_TIMER peripheral base addresses */
  #define NSS_TIMER_BASE_ADDRS                     { NSS__TIMER_BASE }
  /** Array initializer of NSS_TIMER peripheral base pointers */
  #define NSS_TIMER_BASE_PTRS                      { NSS__TIMER }
#else
  /** Peripheral NSS__TIMER base address */
  #define NSS__TIMER_BASE                          (0x40802800u)
  /** Peripheral NSS__TIMER base pointer */
  #define NSS__TIMER                               ((NSS_TIMER_Type *)NSS__TIMER_BASE)
  /** Array initializer of NSS_TIMER peripheral base addresses */
  #define NSS_TIMER_BASE_ADDRS                     { NSS__TIMER_BASE }
  /** Array initializer of NSS_TIMER peripheral base pointers */
  #define NSS_TIMER_BASE_PTRS                      { NSS__TIMER }
#endif

/* NSS_U85 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__U85 base address */
  #define NSS__U85_BASE_NS                         (0x40808000u)
  /** Peripheral NSS__U85 base pointer */
  #define NSS__U85_NS                              ((NSS_U85_Type *)NSS__U85_BASE_NS)
  /** Peripheral NSS__U85 base address */
  #define NSS__U85_BASE                            (0x50808000u)
  /** Peripheral NSS__U85 base pointer */
  #define NSS__U85                                 ((NSS_U85_Type *)NSS__U85_BASE)
  /** Array initializer of NSS_U85 peripheral base addresses */
  #define NSS_U85_BASE_ADDRS_NS                    { NSS__U85_BASE_NS }
  /** Array initializer of NSS_U85 peripheral base pointers */
  #define NSS_U85_BASE_PTRS_NS                     { NSS__U85_NS }
  /** Array initializer of NSS_U85 peripheral base addresses */
  #define NSS_U85_BASE_ADDRS                       { NSS__U85_BASE }
  /** Array initializer of NSS_U85 peripheral base pointers */
  #define NSS_U85_BASE_PTRS                        { NSS__U85 }
#else
  /** Peripheral NSS__U85 base address */
  #define NSS__U85_BASE                            (0x40808000u)
  /** Peripheral NSS__U85 base pointer */
  #define NSS__U85                                 ((NSS_U85_Type *)NSS__U85_BASE)
  /** Array initializer of NSS_U85 peripheral base addresses */
  #define NSS_U85_BASE_ADDRS                       { NSS__U85_BASE }
  /** Array initializer of NSS_U85 peripheral base pointers */
  #define NSS_U85_BASE_PTRS                        { NSS__U85 }
#endif

/* NSS_WATCHDOG - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__WATCHDOG base address */
  #define NSS__WATCHDOG_BASE_NS                    (0x40802400u)
  /** Peripheral NSS__WATCHDOG base pointer */
  #define NSS__WATCHDOG_NS                         ((NSS_WATCHDOG_Type *)NSS__WATCHDOG_BASE_NS)
  /** Peripheral NSS__WATCHDOG base address */
  #define NSS__WATCHDOG_BASE                       (0x50802400u)
  /** Peripheral NSS__WATCHDOG base pointer */
  #define NSS__WATCHDOG                            ((NSS_WATCHDOG_Type *)NSS__WATCHDOG_BASE)
  /** Array initializer of NSS_WATCHDOG peripheral base addresses */
  #define NSS_WATCHDOG_BASE_ADDRS_NS               { NSS__WATCHDOG_BASE_NS }
  /** Array initializer of NSS_WATCHDOG peripheral base pointers */
  #define NSS_WATCHDOG_BASE_PTRS_NS                { NSS__WATCHDOG_NS }
  /** Array initializer of NSS_WATCHDOG peripheral base addresses */
  #define NSS_WATCHDOG_BASE_ADDRS                  { NSS__WATCHDOG_BASE }
  /** Array initializer of NSS_WATCHDOG peripheral base pointers */
  #define NSS_WATCHDOG_BASE_PTRS                   { NSS__WATCHDOG }
#else
  /** Peripheral NSS__WATCHDOG base address */
  #define NSS__WATCHDOG_BASE                       (0x40802400u)
  /** Peripheral NSS__WATCHDOG base pointer */
  #define NSS__WATCHDOG                            ((NSS_WATCHDOG_Type *)NSS__WATCHDOG_BASE)
  /** Array initializer of NSS_WATCHDOG peripheral base addresses */
  #define NSS_WATCHDOG_BASE_ADDRS                  { NSS__WATCHDOG_BASE }
  /** Array initializer of NSS_WATCHDOG peripheral base pointers */
  #define NSS_WATCHDOG_BASE_PTRS                   { NSS__WATCHDOG }
#endif

/* OSTIMER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__OSTIMER_0 base address */
  #define CTRLSS__OSTIMER_0_BASE_NS                (0x40012000u)
  /** Peripheral CTRLSS__OSTIMER_0 base pointer */
  #define CTRLSS__OSTIMER_0_NS                     ((OSTIMER_Type *)CTRLSS__OSTIMER_0_BASE_NS)
  /** Peripheral CTRLSS__OSTIMER_0 base address */
  #define CTRLSS__OSTIMER_0_BASE                   (0x50012000u)
  /** Peripheral CTRLSS__OSTIMER_0 base pointer */
  #define CTRLSS__OSTIMER_0                        ((OSTIMER_Type *)CTRLSS__OSTIMER_0_BASE)
  /** Array initializer of OSTIMER peripheral base addresses */
  #define OSTIMER_BASE_ADDRS_NS                    { CTRLSS__OSTIMER_0_BASE_NS }
  /** Array initializer of OSTIMER peripheral base pointers */
  #define OSTIMER_BASE_PTRS_NS                     { CTRLSS__OSTIMER_0_NS }
  /** Array initializer of OSTIMER peripheral base addresses */
  #define OSTIMER_BASE_ADDRS                       { CTRLSS__OSTIMER_0_BASE }
  /** Array initializer of OSTIMER peripheral base pointers */
  #define OSTIMER_BASE_PTRS                        { CTRLSS__OSTIMER_0 }
#else
  /** Peripheral CTRLSS__OSTIMER_0 base address */
  #define CTRLSS__OSTIMER_0_BASE                   (0x40012000u)
  /** Peripheral CTRLSS__OSTIMER_0 base pointer */
  #define CTRLSS__OSTIMER_0                        ((OSTIMER_Type *)CTRLSS__OSTIMER_0_BASE)
  /** Array initializer of OSTIMER peripheral base addresses */
  #define OSTIMER_BASE_ADDRS                       { CTRLSS__OSTIMER_0_BASE }
  /** Array initializer of OSTIMER peripheral base pointers */
  #define OSTIMER_BASE_PTRS                        { CTRLSS__OSTIMER_0 }
#endif
/** Interrupt vectors for the OSTIMER peripheral type */
#define OSTIMER_IRQS                             { OS_EVENT_IRQn }

/* PINT - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__PINT base address */
  #define CTRLSS__PINT_BASE_NS                     (0x40001000u)
  /** Peripheral CTRLSS__PINT base pointer */
  #define CTRLSS__PINT_NS                          ((PINT_Type *)CTRLSS__PINT_BASE_NS)
  /** Peripheral CTRLSS__PINT base address */
  #define CTRLSS__PINT_BASE                        (0x50001000u)
  /** Peripheral CTRLSS__PINT base pointer */
  #define CTRLSS__PINT                             ((PINT_Type *)CTRLSS__PINT_BASE)
  /** Peripheral CTRLSS__SECPINT base address */
  #define CTRLSS__SECPINT_BASE_NS                  (0x40002000u)
  /** Peripheral CTRLSS__SECPINT base pointer */
  #define CTRLSS__SECPINT_NS                       ((PINT_Type *)CTRLSS__SECPINT_BASE_NS)
  /** Peripheral CTRLSS__SECPINT base address */
  #define CTRLSS__SECPINT_BASE                     (0x50002000u)
  /** Peripheral CTRLSS__SECPINT base pointer */
  #define CTRLSS__SECPINT                          ((PINT_Type *)CTRLSS__SECPINT_BASE)
  /** Array initializer of PINT peripheral base addresses */
  #define PINT_BASE_ADDRS_NS                       { CTRLSS__PINT_BASE_NS, CTRLSS__SECPINT_BASE_NS }
  /** Array initializer of PINT peripheral base pointers */
  #define PINT_BASE_PTRS_NS                        { CTRLSS__PINT_NS, CTRLSS__SECPINT_NS }
  /** Array initializer of PINT peripheral base addresses */
  #define PINT_BASE_ADDRS                          { CTRLSS__PINT_BASE, CTRLSS__SECPINT_BASE }
  /** Array initializer of PINT peripheral base pointers */
  #define PINT_BASE_PTRS                           { CTRLSS__PINT, CTRLSS__SECPINT }
#else
  /** Peripheral CTRLSS__PINT base address */
  #define CTRLSS__PINT_BASE                        (0x40001000u)
  /** Peripheral CTRLSS__PINT base pointer */
  #define CTRLSS__PINT                             ((PINT_Type *)CTRLSS__PINT_BASE)
  /** Peripheral CTRLSS__SECPINT base address */
  #define CTRLSS__SECPINT_BASE                     (0x40002000u)
  /** Peripheral CTRLSS__SECPINT base pointer */
  #define CTRLSS__SECPINT                          ((PINT_Type *)CTRLSS__SECPINT_BASE)
  /** Array initializer of PINT peripheral base addresses */
  #define PINT_BASE_ADDRS                          { CTRLSS__PINT_BASE, CTRLSS__SECPINT_BASE }
  /** Array initializer of PINT peripheral base pointers */
  #define PINT_BASE_PTRS                           { CTRLSS__PINT, CTRLSS__SECPINT }
#endif
/** Interrupt vectors for the PINT peripheral type */
#define PINT_IRQS                                { PIN_INT0_IRQn, PIN_INT1_IRQn, PIN_INT2_IRQn, PIN_INT3_IRQn, PIN_INT4_IRQn, PIN_INT5_IRQn, PIN_INT6_IRQn, PIN_INT7_IRQn, SEC_GPIO_INT0_IRQ0_IRQn, SEC_GPIO_INT0_IRQ1_IRQn }

/* PMRC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral PMRC base address */
  #define PMRC_BASE_NS                             (0x40023000u)
  /** Peripheral PMRC base pointer */
  #define PMRC_NS                                  ((PMRC_Type *)PMRC_BASE_NS)
  /** Peripheral PMRC base address */
  #define PMRC_BASE                                (0x50023000u)
  /** Peripheral PMRC base pointer */
  #define PMRC                                     ((PMRC_Type *)PMRC_BASE)
  /** Array initializer of PMRC peripheral base addresses */
  #define PMRC_BASE_ADDRS_NS                       { PMRC_BASE_NS }
  /** Array initializer of PMRC peripheral base pointers */
  #define PMRC_BASE_PTRS_NS                        { PMRC_NS }
  /** Array initializer of PMRC peripheral base addresses */
  #define PMRC_BASE_ADDRS                          { PMRC_BASE }
  /** Array initializer of PMRC peripheral base pointers */
  #define PMRC_BASE_PTRS                           { PMRC }
#else
  /** Peripheral PMRC base address */
  #define PMRC_BASE                                (0x40023000u)
  /** Peripheral PMRC base pointer */
  #define PMRC                                     ((PMRC_Type *)PMRC_BASE)
  /** Array initializer of PMRC peripheral base addresses */
  #define PMRC_BASE_ADDRS                          { PMRC_BASE }
  /** Array initializer of PMRC peripheral base pointers */
  #define PMRC_BASE_PTRS                           { PMRC }
#endif

/* QSPI_FLR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__QSPI_FLR_0 base address */
  #define CTRLSS__QSPI_FLR_0_BASE_NS               (0x40086000u)
  /** Peripheral CTRLSS__QSPI_FLR_0 base pointer */
  #define CTRLSS__QSPI_FLR_0_NS                    ((QSPI_FLR_Type *)CTRLSS__QSPI_FLR_0_BASE_NS)
  /** Peripheral CTRLSS__QSPI_FLR_0 base address */
  #define CTRLSS__QSPI_FLR_0_BASE                  (0x50086000u)
  /** Peripheral CTRLSS__QSPI_FLR_0 base pointer */
  #define CTRLSS__QSPI_FLR_0                       ((QSPI_FLR_Type *)CTRLSS__QSPI_FLR_0_BASE)
  /** Array initializer of QSPI_FLR peripheral base addresses */
  #define QSPI_FLR_BASE_ADDRS_NS                   { CTRLSS__QSPI_FLR_0_BASE_NS }
  /** Array initializer of QSPI_FLR peripheral base pointers */
  #define QSPI_FLR_BASE_PTRS_NS                    { CTRLSS__QSPI_FLR_0_NS }
  /** Array initializer of QSPI_FLR peripheral base addresses */
  #define QSPI_FLR_BASE_ADDRS                      { CTRLSS__QSPI_FLR_0_BASE }
  /** Array initializer of QSPI_FLR peripheral base pointers */
  #define QSPI_FLR_BASE_PTRS                       { CTRLSS__QSPI_FLR_0 }
#else
  /** Peripheral CTRLSS__QSPI_FLR_0 base address */
  #define CTRLSS__QSPI_FLR_0_BASE                  (0x40086000u)
  /** Peripheral CTRLSS__QSPI_FLR_0 base pointer */
  #define CTRLSS__QSPI_FLR_0                       ((QSPI_FLR_Type *)CTRLSS__QSPI_FLR_0_BASE)
  /** Array initializer of QSPI_FLR peripheral base addresses */
  #define QSPI_FLR_BASE_ADDRS                      { CTRLSS__QSPI_FLR_0_BASE }
  /** Array initializer of QSPI_FLR peripheral base pointers */
  #define QSPI_FLR_BASE_PTRS                       { CTRLSS__QSPI_FLR_0 }
#endif
/** Interrupt vectors for the QSPI_FLR peripheral type */
#define QSPI_FLR_IRQS                            { FLEXCOMM0_IRQn }

/* RPU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral RPU base address */
  #define RPU_BASE_NS                              (0x40021C00u)
  /** Peripheral RPU base pointer */
  #define RPU_NS                                   ((RPU_Type *)RPU_BASE_NS)
  /** Peripheral RPU base address */
  #define RPU_BASE                                 (0x50021C00u)
  /** Peripheral RPU base pointer */
  #define RPU                                      ((RPU_Type *)RPU_BASE)
  /** Array initializer of RPU peripheral base addresses */
  #define RPU_BASE_ADDRS_NS                        { RPU_BASE_NS }
  /** Array initializer of RPU peripheral base pointers */
  #define RPU_BASE_PTRS_NS                         { RPU_NS }
  /** Array initializer of RPU peripheral base addresses */
  #define RPU_BASE_ADDRS                           { RPU_BASE }
  /** Array initializer of RPU peripheral base pointers */
  #define RPU_BASE_PTRS                            { RPU }
#else
  /** Peripheral RPU base address */
  #define RPU_BASE                                 (0x40021C00u)
  /** Peripheral RPU base pointer */
  #define RPU                                      ((RPU_Type *)RPU_BASE)
  /** Array initializer of RPU peripheral base addresses */
  #define RPU_BASE_ADDRS                           { RPU_BASE }
  /** Array initializer of RPU peripheral base pointers */
  #define RPU_BASE_PTRS                            { RPU }
#endif

/* SCT - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__SCT_0 base address */
  #define CTRLSS__SCT_0_BASE_NS                    (0x40085000u)
  /** Peripheral CTRLSS__SCT_0 base pointer */
  #define CTRLSS__SCT_0_NS                         ((SCT_Type *)CTRLSS__SCT_0_BASE_NS)
  /** Peripheral CTRLSS__SCT_0 base address */
  #define CTRLSS__SCT_0_BASE                       (0x50085000u)
  /** Peripheral CTRLSS__SCT_0 base pointer */
  #define CTRLSS__SCT_0                            ((SCT_Type *)CTRLSS__SCT_0_BASE)
  /** Array initializer of SCT peripheral base addresses */
  #define SCT_BASE_ADDRS_NS                        { CTRLSS__SCT_0_BASE_NS }
  /** Array initializer of SCT peripheral base pointers */
  #define SCT_BASE_PTRS_NS                         { CTRLSS__SCT_0_NS }
  /** Array initializer of SCT peripheral base addresses */
  #define SCT_BASE_ADDRS                           { CTRLSS__SCT_0_BASE }
  /** Array initializer of SCT peripheral base pointers */
  #define SCT_BASE_PTRS                            { CTRLSS__SCT_0 }
#else
  /** Peripheral CTRLSS__SCT_0 base address */
  #define CTRLSS__SCT_0_BASE                       (0x40085000u)
  /** Peripheral CTRLSS__SCT_0 base pointer */
  #define CTRLSS__SCT_0                            ((SCT_Type *)CTRLSS__SCT_0_BASE)
  /** Array initializer of SCT peripheral base addresses */
  #define SCT_BASE_ADDRS                           { CTRLSS__SCT_0_BASE }
  /** Array initializer of SCT peripheral base pointers */
  #define SCT_BASE_PTRS                            { CTRLSS__SCT_0 }
#endif
/** Interrupt vectors for the SCT peripheral type */
#define SCT_IRQS                                 { SCT0_IRQn }

/* SECCON - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__SECCON_0 base address */
  #define CTRLSS__SECCON_0_BASE_NS                 (0x40015000u)
  /** Peripheral CTRLSS__SECCON_0 base pointer */
  #define CTRLSS__SECCON_0_NS                      ((SECCON_Type *)CTRLSS__SECCON_0_BASE_NS)
  /** Peripheral CTRLSS__SECCON_0 base address */
  #define CTRLSS__SECCON_0_BASE                    (0x50015000u)
  /** Peripheral CTRLSS__SECCON_0 base pointer */
  #define CTRLSS__SECCON_0                         ((SECCON_Type *)CTRLSS__SECCON_0_BASE)
  /** Array initializer of SECCON peripheral base addresses */
  #define SECCON_BASE_ADDRS_NS                     { CTRLSS__SECCON_0_BASE_NS }
  /** Array initializer of SECCON peripheral base pointers */
  #define SECCON_BASE_PTRS_NS                      { CTRLSS__SECCON_0_NS }
  /** Array initializer of SECCON peripheral base addresses */
  #define SECCON_BASE_ADDRS                        { CTRLSS__SECCON_0_BASE }
  /** Array initializer of SECCON peripheral base pointers */
  #define SECCON_BASE_PTRS                         { CTRLSS__SECCON_0 }
#else
  /** Peripheral CTRLSS__SECCON_0 base address */
  #define CTRLSS__SECCON_0_BASE                    (0x40015000u)
  /** Peripheral CTRLSS__SECCON_0 base pointer */
  #define CTRLSS__SECCON_0                         ((SECCON_Type *)CTRLSS__SECCON_0_BASE)
  /** Array initializer of SECCON peripheral base addresses */
  #define SECCON_BASE_ADDRS                        { CTRLSS__SECCON_0_BASE }
  /** Array initializer of SECCON peripheral base pointers */
  #define SECCON_BASE_PTRS                         { CTRLSS__SECCON_0 }
#endif

/* SPI - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__SPI_0 base address */
  #define CTRLSS__SPI_0_BASE_NS                    (0x40086000u)
  /** Peripheral CTRLSS__SPI_0 base pointer */
  #define CTRLSS__SPI_0_NS                         ((SPI_Type *)CTRLSS__SPI_0_BASE_NS)
  /** Peripheral CTRLSS__SPI_0 base address */
  #define CTRLSS__SPI_0_BASE                       (0x50086000u)
  /** Peripheral CTRLSS__SPI_0 base pointer */
  #define CTRLSS__SPI_0                            ((SPI_Type *)CTRLSS__SPI_0_BASE)
  /** Peripheral CTRLSS__SPI_1 base address */
  #define CTRLSS__SPI_1_BASE_NS                    (0x40087000u)
  /** Peripheral CTRLSS__SPI_1 base pointer */
  #define CTRLSS__SPI_1_NS                         ((SPI_Type *)CTRLSS__SPI_1_BASE_NS)
  /** Peripheral CTRLSS__SPI_1 base address */
  #define CTRLSS__SPI_1_BASE                       (0x50087000u)
  /** Peripheral CTRLSS__SPI_1 base pointer */
  #define CTRLSS__SPI_1                            ((SPI_Type *)CTRLSS__SPI_1_BASE)
  /** Peripheral CTRLSS__SPI_2 base address */
  #define CTRLSS__SPI_2_BASE_NS                    (0x40088000u)
  /** Peripheral CTRLSS__SPI_2 base pointer */
  #define CTRLSS__SPI_2_NS                         ((SPI_Type *)CTRLSS__SPI_2_BASE_NS)
  /** Peripheral CTRLSS__SPI_2 base address */
  #define CTRLSS__SPI_2_BASE                       (0x50088000u)
  /** Peripheral CTRLSS__SPI_2 base pointer */
  #define CTRLSS__SPI_2                            ((SPI_Type *)CTRLSS__SPI_2_BASE)
  /** Array initializer of SPI peripheral base addresses */
  #define SPI_BASE_ADDRS_NS                        { CTRLSS__SPI_0_BASE_NS, CTRLSS__SPI_1_BASE_NS, CTRLSS__SPI_2_BASE_NS }
  /** Array initializer of SPI peripheral base pointers */
  #define SPI_BASE_PTRS_NS                         { CTRLSS__SPI_0_NS, CTRLSS__SPI_1_NS, CTRLSS__SPI_2_NS }
  /** Array initializer of SPI peripheral base addresses */
  #define SPI_BASE_ADDRS                           { CTRLSS__SPI_0_BASE, CTRLSS__SPI_1_BASE, CTRLSS__SPI_2_BASE }
  /** Array initializer of SPI peripheral base pointers */
  #define SPI_BASE_PTRS                            { CTRLSS__SPI_0, CTRLSS__SPI_1, CTRLSS__SPI_2 }
#else
  /** Peripheral CTRLSS__SPI_0 base address */
  #define CTRLSS__SPI_0_BASE                       (0x40086000u)
  /** Peripheral CTRLSS__SPI_0 base pointer */
  #define CTRLSS__SPI_0                            ((SPI_Type *)CTRLSS__SPI_0_BASE)
  /** Peripheral CTRLSS__SPI_1 base address */
  #define CTRLSS__SPI_1_BASE                       (0x40087000u)
  /** Peripheral CTRLSS__SPI_1 base pointer */
  #define CTRLSS__SPI_1                            ((SPI_Type *)CTRLSS__SPI_1_BASE)
  /** Peripheral CTRLSS__SPI_2 base address */
  #define CTRLSS__SPI_2_BASE                       (0x40088000u)
  /** Peripheral CTRLSS__SPI_2 base pointer */
  #define CTRLSS__SPI_2                            ((SPI_Type *)CTRLSS__SPI_2_BASE)
  /** Array initializer of SPI peripheral base addresses */
  #define SPI_BASE_ADDRS                           { CTRLSS__SPI_0_BASE, CTRLSS__SPI_1_BASE, CTRLSS__SPI_2_BASE }
  /** Array initializer of SPI peripheral base pointers */
  #define SPI_BASE_PTRS                            { CTRLSS__SPI_0, CTRLSS__SPI_1, CTRLSS__SPI_2 }
#endif
/** Interrupt vectors for the SPI peripheral type */
#define SPI_IRQS                                 { FLEXCOMM0_IRQn, FLEXCOMM1_IRQn, FLEXCOMM2_IRQn }

/* SYSCON - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral SYSCON base address */
  #define SYSCON_BASE_NS                           (0x40027000u)
  /** Peripheral SYSCON base pointer */
  #define SYSCON_NS                                ((SYSCON_Type *)SYSCON_BASE_NS)
  /** Peripheral SYSCON base address */
  #define SYSCON_BASE                              (0x50027000u)
  /** Peripheral SYSCON base pointer */
  #define SYSCON                                   ((SYSCON_Type *)SYSCON_BASE)
  /** Array initializer of SYSCON peripheral base addresses */
  #define SYSCON_BASE_ADDRS_NS                     { SYSCON_BASE_NS }
  /** Array initializer of SYSCON peripheral base pointers */
  #define SYSCON_BASE_PTRS_NS                      { SYSCON_NS }
  /** Array initializer of SYSCON peripheral base addresses */
  #define SYSCON_BASE_ADDRS                        { SYSCON_BASE }
  /** Array initializer of SYSCON peripheral base pointers */
  #define SYSCON_BASE_PTRS                         { SYSCON }
#else
  /** Peripheral SYSCON base address */
  #define SYSCON_BASE                              (0x40027000u)
  /** Peripheral SYSCON base pointer */
  #define SYSCON                                   ((SYSCON_Type *)SYSCON_BASE)
  /** Array initializer of SYSCON peripheral base addresses */
  #define SYSCON_BASE_ADDRS                        { SYSCON_BASE }
  /** Array initializer of SYSCON peripheral base pointers */
  #define SYSCON_BASE_PTRS                         { SYSCON }
#endif

/* USART - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__USART_0 base address */
  #define CTRLSS__USART_0_BASE_NS                  (0x40086000u)
  /** Peripheral CTRLSS__USART_0 base pointer */
  #define CTRLSS__USART_0_NS                       ((USART_Type *)CTRLSS__USART_0_BASE_NS)
  /** Peripheral CTRLSS__USART_0 base address */
  #define CTRLSS__USART_0_BASE                     (0x50086000u)
  /** Peripheral CTRLSS__USART_0 base pointer */
  #define CTRLSS__USART_0                          ((USART_Type *)CTRLSS__USART_0_BASE)
  /** Peripheral CTRLSS__USART_1 base address */
  #define CTRLSS__USART_1_BASE_NS                  (0x40087000u)
  /** Peripheral CTRLSS__USART_1 base pointer */
  #define CTRLSS__USART_1_NS                       ((USART_Type *)CTRLSS__USART_1_BASE_NS)
  /** Peripheral CTRLSS__USART_1 base address */
  #define CTRLSS__USART_1_BASE                     (0x50087000u)
  /** Peripheral CTRLSS__USART_1 base pointer */
  #define CTRLSS__USART_1                          ((USART_Type *)CTRLSS__USART_1_BASE)
  /** Peripheral CTRLSS__USART_2 base address */
  #define CTRLSS__USART_2_BASE_NS                  (0x40088000u)
  /** Peripheral CTRLSS__USART_2 base pointer */
  #define CTRLSS__USART_2_NS                       ((USART_Type *)CTRLSS__USART_2_BASE_NS)
  /** Peripheral CTRLSS__USART_2 base address */
  #define CTRLSS__USART_2_BASE                     (0x50088000u)
  /** Peripheral CTRLSS__USART_2 base pointer */
  #define CTRLSS__USART_2                          ((USART_Type *)CTRLSS__USART_2_BASE)
  /** Peripheral CTRLSS__USART_3 base address */
  #define CTRLSS__USART_3_BASE_NS                  (0x40090000u)
  /** Peripheral CTRLSS__USART_3 base pointer */
  #define CTRLSS__USART_3_NS                       ((USART_Type *)CTRLSS__USART_3_BASE_NS)
  /** Peripheral CTRLSS__USART_3 base address */
  #define CTRLSS__USART_3_BASE                     (0x50090000u)
  /** Peripheral CTRLSS__USART_3 base pointer */
  #define CTRLSS__USART_3                          ((USART_Type *)CTRLSS__USART_3_BASE)
  /** Peripheral CTRLSS__USART_4 base address */
  #define CTRLSS__USART_4_BASE_NS                  (0x40091000u)
  /** Peripheral CTRLSS__USART_4 base pointer */
  #define CTRLSS__USART_4_NS                       ((USART_Type *)CTRLSS__USART_4_BASE_NS)
  /** Peripheral CTRLSS__USART_4 base address */
  #define CTRLSS__USART_4_BASE                     (0x50091000u)
  /** Peripheral CTRLSS__USART_4 base pointer */
  #define CTRLSS__USART_4                          ((USART_Type *)CTRLSS__USART_4_BASE)
  /** Peripheral CTRLSS__USART_5 base address */
  #define CTRLSS__USART_5_BASE_NS                  (0x40092000u)
  /** Peripheral CTRLSS__USART_5 base pointer */
  #define CTRLSS__USART_5_NS                       ((USART_Type *)CTRLSS__USART_5_BASE_NS)
  /** Peripheral CTRLSS__USART_5 base address */
  #define CTRLSS__USART_5_BASE                     (0x50092000u)
  /** Peripheral CTRLSS__USART_5 base pointer */
  #define CTRLSS__USART_5                          ((USART_Type *)CTRLSS__USART_5_BASE)
  /** Array initializer of USART peripheral base addresses */
  #define USART_BASE_ADDRS_NS                      { CTRLSS__USART_0_BASE_NS, CTRLSS__USART_1_BASE_NS, CTRLSS__USART_2_BASE_NS, CTRLSS__USART_3_BASE_NS, CTRLSS__USART_4_BASE_NS, CTRLSS__USART_5_BASE_NS }
  /** Array initializer of USART peripheral base pointers */
  #define USART_BASE_PTRS_NS                       { CTRLSS__USART_0_NS, CTRLSS__USART_1_NS, CTRLSS__USART_2_NS, CTRLSS__USART_3_NS, CTRLSS__USART_4_NS, CTRLSS__USART_5_NS }
  /** Array initializer of USART peripheral base addresses */
  #define USART_BASE_ADDRS                         { CTRLSS__USART_0_BASE, CTRLSS__USART_1_BASE, CTRLSS__USART_2_BASE, CTRLSS__USART_3_BASE, CTRLSS__USART_4_BASE, CTRLSS__USART_5_BASE }
  /** Array initializer of USART peripheral base pointers */
  #define USART_BASE_PTRS                          { CTRLSS__USART_0, CTRLSS__USART_1, CTRLSS__USART_2, CTRLSS__USART_3, CTRLSS__USART_4, CTRLSS__USART_5 }
#else
  /** Peripheral CTRLSS__USART_0 base address */
  #define CTRLSS__USART_0_BASE                     (0x40086000u)
  /** Peripheral CTRLSS__USART_0 base pointer */
  #define CTRLSS__USART_0                          ((USART_Type *)CTRLSS__USART_0_BASE)
  /** Peripheral CTRLSS__USART_1 base address */
  #define CTRLSS__USART_1_BASE                     (0x40087000u)
  /** Peripheral CTRLSS__USART_1 base pointer */
  #define CTRLSS__USART_1                          ((USART_Type *)CTRLSS__USART_1_BASE)
  /** Peripheral CTRLSS__USART_2 base address */
  #define CTRLSS__USART_2_BASE                     (0x40088000u)
  /** Peripheral CTRLSS__USART_2 base pointer */
  #define CTRLSS__USART_2                          ((USART_Type *)CTRLSS__USART_2_BASE)
  /** Peripheral CTRLSS__USART_3 base address */
  #define CTRLSS__USART_3_BASE                     (0x40090000u)
  /** Peripheral CTRLSS__USART_3 base pointer */
  #define CTRLSS__USART_3                          ((USART_Type *)CTRLSS__USART_3_BASE)
  /** Peripheral CTRLSS__USART_4 base address */
  #define CTRLSS__USART_4_BASE                     (0x40091000u)
  /** Peripheral CTRLSS__USART_4 base pointer */
  #define CTRLSS__USART_4                          ((USART_Type *)CTRLSS__USART_4_BASE)
  /** Peripheral CTRLSS__USART_5 base address */
  #define CTRLSS__USART_5_BASE                     (0x40092000u)
  /** Peripheral CTRLSS__USART_5 base pointer */
  #define CTRLSS__USART_5                          ((USART_Type *)CTRLSS__USART_5_BASE)
  /** Array initializer of USART peripheral base addresses */
  #define USART_BASE_ADDRS                         { CTRLSS__USART_0_BASE, CTRLSS__USART_1_BASE, CTRLSS__USART_2_BASE, CTRLSS__USART_3_BASE, CTRLSS__USART_4_BASE, CTRLSS__USART_5_BASE }
  /** Array initializer of USART peripheral base pointers */
  #define USART_BASE_PTRS                          { CTRLSS__USART_0, CTRLSS__USART_1, CTRLSS__USART_2, CTRLSS__USART_3, CTRLSS__USART_4, CTRLSS__USART_5 }
#endif
/** Interrupt vectors for the USART peripheral type */
#define USART_IRQS                               { FLEXCOMM0_IRQn, FLEXCOMM1_IRQn, FLEXCOMM2_IRQn, FLEXCOMM3_IRQn, FLEXCOMM4_IRQn, FLEXCOMM5_IRQn }

/* UTICK - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__UTICK_0 base address */
  #define CTRLSS__UTICK_0_BASE_NS                  (0x40010000u)
  /** Peripheral CTRLSS__UTICK_0 base pointer */
  #define CTRLSS__UTICK_0_NS                       ((UTICK_Type *)CTRLSS__UTICK_0_BASE_NS)
  /** Peripheral CTRLSS__UTICK_0 base address */
  #define CTRLSS__UTICK_0_BASE                     (0x50010000u)
  /** Peripheral CTRLSS__UTICK_0 base pointer */
  #define CTRLSS__UTICK_0                          ((UTICK_Type *)CTRLSS__UTICK_0_BASE)
  /** Array initializer of UTICK peripheral base addresses */
  #define UTICK_BASE_ADDRS_NS                      { CTRLSS__UTICK_0_BASE_NS }
  /** Array initializer of UTICK peripheral base pointers */
  #define UTICK_BASE_PTRS_NS                       { CTRLSS__UTICK_0_NS }
  /** Array initializer of UTICK peripheral base addresses */
  #define UTICK_BASE_ADDRS                         { CTRLSS__UTICK_0_BASE }
  /** Array initializer of UTICK peripheral base pointers */
  #define UTICK_BASE_PTRS                          { CTRLSS__UTICK_0 }
#else
  /** Peripheral CTRLSS__UTICK_0 base address */
  #define CTRLSS__UTICK_0_BASE                     (0x40010000u)
  /** Peripheral CTRLSS__UTICK_0 base pointer */
  #define CTRLSS__UTICK_0                          ((UTICK_Type *)CTRLSS__UTICK_0_BASE)
  /** Array initializer of UTICK peripheral base addresses */
  #define UTICK_BASE_ADDRS                         { CTRLSS__UTICK_0_BASE }
  /** Array initializer of UTICK peripheral base pointers */
  #define UTICK_BASE_PTRS                          { CTRLSS__UTICK_0 }
#endif
/** Interrupt vectors for the UTICK peripheral type */
#define UTICK_IRQS                               { UTICK_IRQn }

/* VISION_SS_REG - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral VISION_SS__VISION_SS_REG base address */
  #define VISION_SS__VISION_SS_REG_BASE_NS         (0x40026F00u)
  /** Peripheral VISION_SS__VISION_SS_REG base pointer */
  #define VISION_SS__VISION_SS_REG_NS              ((VISION_SS_REG_Type *)VISION_SS__VISION_SS_REG_BASE_NS)
  /** Peripheral VISION_SS__VISION_SS_REG base address */
  #define VISION_SS__VISION_SS_REG_BASE            (0x50026F00u)
  /** Peripheral VISION_SS__VISION_SS_REG base pointer */
  #define VISION_SS__VISION_SS_REG                 ((VISION_SS_REG_Type *)VISION_SS__VISION_SS_REG_BASE)
  /** Array initializer of VISION_SS_REG peripheral base addresses */
  #define VISION_SS_REG_BASE_ADDRS_NS              { VISION_SS__VISION_SS_REG_BASE_NS }
  /** Array initializer of VISION_SS_REG peripheral base pointers */
  #define VISION_SS_REG_BASE_PTRS_NS               { VISION_SS__VISION_SS_REG_NS }
  /** Array initializer of VISION_SS_REG peripheral base addresses */
  #define VISION_SS_REG_BASE_ADDRS                 { VISION_SS__VISION_SS_REG_BASE }
  /** Array initializer of VISION_SS_REG peripheral base pointers */
  #define VISION_SS_REG_BASE_PTRS                  { VISION_SS__VISION_SS_REG }
#else
  /** Peripheral VISION_SS__VISION_SS_REG base address */
  #define VISION_SS__VISION_SS_REG_BASE            (0x40026F00u)
  /** Peripheral VISION_SS__VISION_SS_REG base pointer */
  #define VISION_SS__VISION_SS_REG                 ((VISION_SS_REG_Type *)VISION_SS__VISION_SS_REG_BASE)
  /** Array initializer of VISION_SS_REG peripheral base addresses */
  #define VISION_SS_REG_BASE_ADDRS                 { VISION_SS__VISION_SS_REG_BASE }
  /** Array initializer of VISION_SS_REG peripheral base pointers */
  #define VISION_SS_REG_BASE_PTRS                  { VISION_SS__VISION_SS_REG }
#endif

/* WWDT - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__WWDT_0 base address */
  #define CTRLSS__WWDT_0_BASE_NS                   (0x4000E000u)
  /** Peripheral CTRLSS__WWDT_0 base pointer */
  #define CTRLSS__WWDT_0_NS                        ((WWDT_Type *)CTRLSS__WWDT_0_BASE_NS)
  /** Peripheral CTRLSS__WWDT_0 base address */
  #define CTRLSS__WWDT_0_BASE                      (0x5000E000u)
  /** Peripheral CTRLSS__WWDT_0 base pointer */
  #define CTRLSS__WWDT_0                           ((WWDT_Type *)CTRLSS__WWDT_0_BASE)
  /** Array initializer of WWDT peripheral base addresses */
  #define WWDT_BASE_ADDRS_NS                       { CTRLSS__WWDT_0_BASE_NS }
  /** Array initializer of WWDT peripheral base pointers */
  #define WWDT_BASE_PTRS_NS                        { CTRLSS__WWDT_0_NS }
  /** Array initializer of WWDT peripheral base addresses */
  #define WWDT_BASE_ADDRS                          { CTRLSS__WWDT_0_BASE }
  /** Array initializer of WWDT peripheral base pointers */
  #define WWDT_BASE_PTRS                           { CTRLSS__WWDT_0 }
#else
  /** Peripheral CTRLSS__WWDT_0 base address */
  #define CTRLSS__WWDT_0_BASE                      (0x4000E000u)
  /** Peripheral CTRLSS__WWDT_0 base pointer */
  #define CTRLSS__WWDT_0                           ((WWDT_Type *)CTRLSS__WWDT_0_BASE)
  /** Array initializer of WWDT peripheral base addresses */
  #define WWDT_BASE_ADDRS                          { CTRLSS__WWDT_0_BASE }
  /** Array initializer of WWDT peripheral base pointers */
  #define WWDT_BASE_PTRS                           { CTRLSS__WWDT_0 }
#endif
/** Interrupt vectors for the WWDT peripheral type */
#define WWDT_IRQS                                { WDT0_IRQn }

/* XSPI - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__XSPI base address */
  #define CTRLSS__XSPI_BASE_NS                     (0x40013000u)
  /** Peripheral CTRLSS__XSPI base pointer */
  #define CTRLSS__XSPI_NS                          ((XSPI_Type *)CTRLSS__XSPI_BASE_NS)
  /** Peripheral CTRLSS__XSPI base address */
  #define CTRLSS__XSPI_BASE                        (0x50013000u)
  /** Peripheral CTRLSS__XSPI base pointer */
  #define CTRLSS__XSPI                             ((XSPI_Type *)CTRLSS__XSPI_BASE)
  /** Array initializer of XSPI peripheral base addresses */
  #define XSPI_BASE_ADDRS_NS                       { CTRLSS__XSPI_BASE_NS }
  /** Array initializer of XSPI peripheral base pointers */
  #define XSPI_BASE_PTRS_NS                        { CTRLSS__XSPI_NS }
  /** Array initializer of XSPI peripheral base addresses */
  #define XSPI_BASE_ADDRS                          { CTRLSS__XSPI_BASE }
  /** Array initializer of XSPI peripheral base pointers */
  #define XSPI_BASE_PTRS                           { CTRLSS__XSPI }
#else
  /** Peripheral CTRLSS__XSPI base address */
  #define CTRLSS__XSPI_BASE                        (0x40013000u)
  /** Peripheral CTRLSS__XSPI base pointer */
  #define CTRLSS__XSPI                             ((XSPI_Type *)CTRLSS__XSPI_BASE)
  /** Array initializer of XSPI peripheral base addresses */
  #define XSPI_BASE_ADDRS                          { CTRLSS__XSPI_BASE }
  /** Array initializer of XSPI peripheral base pointers */
  #define XSPI_BASE_PTRS                           { CTRLSS__XSPI }
#endif
/** Interrupt vectors for the XSPI peripheral type */
#define XSPI_IRQS                                { XSPI0_IRQn }
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTRLSS__XSPI_0_AMBA base address */
  #define CTRLSS__XSPI_0_AMBA_BASE_NS              (0x60000000u)
  /** Peripheral CTRLSS__XSPI_0_AMBA base address */
  #define CTRLSS__XSPI_0_AMBA_BASE                 (0x70000000u)
  /** Array initializer of XSPI_AMBA peripheral base addresses */
  #define XSPI_AMBA_BASE_ADDRS_NS                  { CTRLSS__XSPI_0_AMBA_BASE_NS }
  /** Array initializer of XSPI_AMBA peripheral base addresses */
  #define XSPI_AMBA_BASE_ADDRS                     { CTRLSS__XSPI_0_AMBA_BASE }
  /* XSPI AMBA address */
  #define XSPI_AMBA_BASES                          {0x70000000u}
  #define XSPI_AMBA_BASES_NS                       {0x60000000u}
#else
  /** Peripheral CTRLSS__XSPI_0_AMBA base address */
  #define CTRLSS__XSPI_0_AMBA_BASE                 (0x60000000u)
  /** Array initializer of XSPI_AMBA peripheral base addresses */
  #define XSPI_AMBA_BASE_ADDRS                     { CTRLSS__XSPI_0_AMBA_BASE }
  #define XSPI_AMBA_BASES                          {0x60000000u}
#endif


/* ----------------------------------------------------------------------------
   -- Macros for use with bit field definitions (xxx_SHIFT, xxx_MASK).
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Bit_Field_Generic_Macros Macros for use with bit field definitions (xxx_SHIFT, xxx_MASK).
 * @{
 */

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang system_header
  #endif
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma system_include
#endif

/**
 * @brief Mask and left-shift a bit field value for use in a register bit range.
 * @param field Name of the register bit field.
 * @param value Value of the bit field.
 * @return Masked and shifted value.
 */
#define NXP_VAL2FLD(field, value)    (((value) << (field ## _SHIFT)) & (field ## _MASK))
/**
 * @brief Mask and right-shift a register value to extract a bit field value.
 * @param field Name of the register bit field.
 * @param value Value of the register.
 * @return Masked and shifted bit field value.
 */
#define NXP_FLD2VAL(field, value)    (((value) & (field ## _MASK)) >> (field ## _SHIFT))

/*!
 * @}
 */ /* end of group Bit_Field_Generic_Macros */


/* ----------------------------------------------------------------------------
   -- SDK Compatibility
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SDK_Compatibility_Symbols SDK Compatibility
 * @{
 */

/** Interrupt vectors for the GPIO peripheral type */
#define GPIO_IRQS  {GPIO0_IRQn, GPIO1_IRQn}
/** Peripherals name compatibility */
#define DMA0            CTRLSS__DMA_0
#define DMA1            CTRLSS__DMA_1
#define PINT            CTRLSS__PINT
#define SECPINT         CTRLSS__SECPINT
#define UTICK0          CTRLSS__UTICK_0

/*!
 * @}
 */ /* end of group SDK_Compatibility_Symbols */


#endif  /* IMXRTL3459AAA_CM55_CORE0_COMMON_H_ */

