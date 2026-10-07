/*
** ###################################################################
**     Processors:          IMXRTL3459AAAFAWAR_cm55_core1
**                          IMXRTL3459AAAFBWAR_cm55_core1
**
**     Compilers:
**                          GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**                          Keil ARM C/C++ Compiler
**
**     Reference manual:    IMXRTL345_EAR
**     Version:             rev. 1.0, 2026-06-19
**     Build:               b260924
**
**     Abstract:
**         CMSIS Peripheral Access Layer for IMXRTL3459AAA_cm55_core1
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
 * @file IMXRTL3459AAA_cm55_core1_COMMON.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for IMXRTL3459AAA_cm55_core1
 *
 * CMSIS Peripheral Access Layer for IMXRTL3459AAA_cm55_core1
 */

#if !defined(IMXRTL3459AAA_CM55_CORE1_COMMON_H_)
#define IMXRTL3459AAA_CM55_CORE1_COMMON_H_      /**< Symbol preventing repeated inclusion */

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
#define NUMBER_OF_INT_VECTORS 75                 /**< Number of interrupts in the Vector table */

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
  ERROR_EVENT_IRQn             = 0,                /**< Error event */
  EDMA_ERROR_IRQn              = 1,                /**< eDMA error irq */
  EDMA_CH0_IRQn                = 2,                /**< eDMA done channel 0 */
  EDMA_CH1_IRQn                = 3,                /**< eDMA done channel 1 */
  EDMA_CH2_IRQn                = 4,                /**< eDMA done channel 2 */
  EDMA_CH3_IRQn                = 5,                /**< eDMA done channel 3 */
  EDMA_CH4_IRQn                = 6,                /**< eDMA done channel 4 */
  EDMA_CH5_IRQn                = 7,                /**< eDMA done channel 5 */
  EDMA_CH6_IRQn                = 8,                /**< eDMA done channel 6 */
  EDMA_CH7_IRQn                = 9,                /**< eDMA done channel 7 */
  EDMA_CH8_IRQn                = 10,               /**< eDMA done channel 8 */
  EDMA_CH9_IRQn                = 11,               /**< eDMA done channel 9 */
  EDMA_CH10_IRQn               = 12,               /**< eDMA done channel 10 */
  EDMA_CH11_IRQn               = 13,               /**< eDMA done channel 11 */
  EDMA_CH12_IRQn               = 14,               /**< eDMA done channel 12 */
  EDMA_CH13_IRQn               = 15,               /**< eDMA done channel 13 */
  EDMA_CH14_IRQn               = 16,               /**< eDMA done channel 14 */
  EDMA_CH15_IRQn               = 17,               /**< eDMA done channel 15 */
  EDMA_CH16_IRQn               = 18,               /**< eDMA done channel 16 */
  EDMA_CH17_IRQn               = 19,               /**< eDMA done channel 17 */
  EDMA_CH18_IRQn               = 20,               /**< eDMA done channel 18 */
  EDMA_CH19_IRQn               = 21,               /**< eDMA done channel 19 */
  EDMA_CH20_IRQn               = 22,               /**< eDMA done channel 20 */
  EDMA_CH21_IRQn               = 23,               /**< eDMA done channel 21 */
  EDMA_CH22_IRQn               = 24,               /**< eDMA done channel 22 */
  EDMA_CH23_IRQn               = 25,               /**< eDMA done channel 23 */
  EDMA_CH24_IRQn               = 26,               /**< eDMA done channel 24 */
  EDMA_CH25_IRQn               = 27,               /**< eDMA done channel 25 */
  EDMA_CH26_IRQn               = 28,               /**< eDMA done channel 26 */
  EDMA_CH27_IRQn               = 29,               /**< eDMA done channel 27 */
  EDMA_CH28_IRQn               = 30,               /**< eDMA done channel 28 */
  EDMA_CH29_IRQn               = 31,               /**< eDMA done channel 29 */
  EDMA_CH30_IRQn               = 32,               /**< eDMA done channel 30 */
  EDMA_CH31_IRQn               = 33,               /**< eDMA done channel 31 */
  ETHOS_U85_IRQn               = 34,               /**< ETHOS_U85 interrupt */
  NSS_EVENT0_IRQn              = 35,               /**< NSS_EVENT0 interrupt */
  NSS_EVENT1_IRQn              = 36,               /**< NSS_EVENT1 interrupt */
  NSS_EVENT2_IRQn              = 37,               /**< NSS_EVENT2 interrupt */
  NSS_EVENT3_IRQn              = 38,               /**< NSS_EVENT3 interrupt */
  NSS_EVENT4_IRQn              = 39,               /**< NSS_EVENT4 interrupt */
  NSS_EVENT5_IRQn              = 40,               /**< NSS_EVENT5 interrupt */
  NSS_EVENT6_IRQn              = 41,               /**< NSS_EVENT6 interrupt */
  NSS_EVENT7_IRQn              = 42,               /**< NSS_EVENT7 interrupt */
  Reserved59_IRQn              = 43,               /**< Reserved59 interrupt */
  Reserved60_IRQn              = 44,               /**< Reserved60 interrupt */
  Reserved61_IRQn              = 45,               /**< Reserved61 interrupt */
  Reserved62_IRQn              = 46,               /**< Reserved62 interrupt */
  Reserved63_IRQn              = 47,               /**< Reserved63 interrupt */
  Reserved64_IRQn              = 48,               /**< Reserved64 interrupt */
  Reserved65_IRQn              = 49,               /**< Reserved65 interrupt */
  Reserved66_IRQn              = 50,               /**< Reserved66 interrupt */
  Reserved67_IRQn              = 51,               /**< Reserved67 interrupt */
  Reserved68_IRQn              = 52,               /**< Reserved68 interrupt */
  Reserved69_IRQn              = 53,               /**< Reserved69 interrupt */
  Reserved70_IRQn              = 54,               /**< Reserved70 interrupt */
  Reserved71_IRQn              = 55,               /**< Reserved71 interrupt */
  Reserved72_IRQn              = 56,               /**< Reserved72 interrupt */
  Reserved73_IRQn              = 57,               /**< Reserved73 interrupt */
  Reserved74_IRQn              = 58                /**< Reserved74 interrupt */
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
#define __SAUREGION_PRESENT            0         /**< Defines if an SAU is present or not */

#include "core_cm55.h"                 /* Core Peripheral Access Layer */
#include "system_IMXRTL3459AAA_cm55_core1.h" /* Device specific configuration file */

/*!
 * @}
 */ /* end of group Cortex_Core_Configuration */


#ifndef IMXRTL3459AAA_cm55_core1_SERIES
#define IMXRTL3459AAA_cm55_core1_SERIES
#endif
/* CPU specific feature definitions */
#include "IMXRTL3459AAA_cm55_core1_features.h"

/* AHB2XSPMEM - Peripheral instance base addresses */
/** Peripheral NSS__AHB2XSPMEM base address */
#define NSS__AHB2XSPMEM_BASE                     (0x4000C000u)
/** Peripheral NSS__AHB2XSPMEM base pointer */
#define NSS__AHB2XSPMEM                          ((AHB2XSPMEM_Type *)NSS__AHB2XSPMEM_BASE)
/** Array initializer of AHB2XSPMEM peripheral base addresses */
#define AHB2XSPMEM_BASE_ADDRS                    { NSS__AHB2XSPMEM_BASE }
/** Array initializer of AHB2XSPMEM peripheral base pointers */
#define AHB2XSPMEM_BASE_PTRS                     { NSS__AHB2XSPMEM }

/* DMA5 - Peripheral instance base addresses */
/** Peripheral NSS__EDMA5 base address */
#define NSS__EDMA5_BASE                          (0x40004000u)
/** Peripheral NSS__EDMA5 base pointer */
#define NSS__EDMA5                               ((DMA5_Type *)NSS__EDMA5_BASE)
/** Array initializer of DMA5 peripheral base addresses */
#define DMA5_BASE_ADDRS                          { NSS__EDMA5_BASE }
/** Array initializer of DMA5 peripheral base pointers */
#define DMA5_BASE_PTRS                           { NSS__EDMA5 }

/* DMA_CRC - Peripheral instance base addresses */
/** Peripheral NSS__DMA_CRC base address */
#define NSS__DMA_CRC_BASE                        (0x40006400u)
/** Peripheral NSS__DMA_CRC base pointer */
#define NSS__DMA_CRC                             ((DMA_CRC_Type *)NSS__DMA_CRC_BASE)
/** Array initializer of DMA_CRC peripheral base addresses */
#define DMA_CRC_BASE_ADDRS                       { NSS__DMA_CRC_BASE }
/** Array initializer of DMA_CRC peripheral base pointers */
#define DMA_CRC_BASE_PTRS                        { NSS__DMA_CRC }

/* NSS_CGU - Peripheral instance base addresses */
/** Peripheral NSS__CGU base address */
#define NSS__CGU_BASE                            (0x40000000u)
/** Peripheral NSS__CGU base pointer */
#define NSS__CGU                                 ((NSS_CGU_Type *)NSS__CGU_BASE)
/** Array initializer of NSS_CGU peripheral base addresses */
#define NSS_CGU_BASE_ADDRS                       { NSS__CGU_BASE }
/** Array initializer of NSS_CGU peripheral base pointers */
#define NSS_CGU_BASE_PTRS                        { NSS__CGU }

/* NSS_CSSEVENT_GEN - Peripheral instance base addresses */
/** Peripheral NSS__CSSEVENT_GEN base address */
#define NSS__CSSEVENT_GEN_BASE                   (0x40003400u)
/** Peripheral NSS__CSSEVENT_GEN base pointer */
#define NSS__CSSEVENT_GEN                        ((NSS_CSSEVENT_GEN_Type *)NSS__CSSEVENT_GEN_BASE)
/** Array initializer of NSS_CSSEVENT_GEN peripheral base addresses */
#define NSS_CSSEVENT_GEN_BASE_ADDRS              { NSS__CSSEVENT_GEN_BASE }
/** Array initializer of NSS_CSSEVENT_GEN peripheral base pointers */
#define NSS_CSSEVENT_GEN_BASE_PTRS               { NSS__CSSEVENT_GEN }

/* NSS_DBG_GPO - Peripheral instance base addresses */
/** Peripheral NSS__DBG_GPO base address */
#define NSS__DBG_GPO_BASE                        (0x40002000u)
/** Peripheral NSS__DBG_GPO base pointer */
#define NSS__DBG_GPO                             ((NSS_DBG_GPO_Type *)NSS__DBG_GPO_BASE)
/** Array initializer of NSS_DBG_GPO peripheral base addresses */
#define NSS_DBG_GPO_BASE_ADDRS                   { NSS__DBG_GPO_BASE }
/** Array initializer of NSS_DBG_GPO peripheral base pointers */
#define NSS_DBG_GPO_BASE_PTRS                    { NSS__DBG_GPO }

/* NSS_DBG_SO - Peripheral instance base addresses */
/** Peripheral NSS__DBG_SO base address */
#define NSS__DBG_SO_BASE                         (0x40001C00u)
/** Peripheral NSS__DBG_SO base pointer */
#define NSS__DBG_SO                              ((NSS_DBG_SO_Type *)NSS__DBG_SO_BASE)
/** Array initializer of NSS_DBG_SO peripheral base addresses */
#define NSS_DBG_SO_BASE_ADDRS                    { NSS__DBG_SO_BASE }
/** Array initializer of NSS_DBG_SO peripheral base pointers */
#define NSS_DBG_SO_BASE_PTRS                     { NSS__DBG_SO }

/* NSS_DMA_HWREQ - Peripheral instance base addresses */
/** Peripheral NSS__DMA_HWREQ base address */
#define NSS__DMA_HWREQ_BASE                      (0x40006000u)
/** Peripheral NSS__DMA_HWREQ base pointer */
#define NSS__DMA_HWREQ                           ((NSS_DMA_HWREQ_Type *)NSS__DMA_HWREQ_BASE)
/** Array initializer of NSS_DMA_HWREQ peripheral base addresses */
#define NSS_DMA_HWREQ_BASE_ADDRS                 { NSS__DMA_HWREQ_BASE }
/** Array initializer of NSS_DMA_HWREQ peripheral base pointers */
#define NSS_DMA_HWREQ_BASE_PTRS                  { NSS__DMA_HWREQ }

/* NSS_DNN_RAM - Peripheral instance base addresses */
/** Peripheral NSS__DNN_RAM_0 base address */
#define NSS__DNN_RAM_0_BASE                      (0x40010000u)
/** Peripheral NSS__DNN_RAM_0 base pointer */
#define NSS__DNN_RAM_0                           ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_0_BASE)
/** Peripheral NSS__DNN_RAM_1 base address */
#define NSS__DNN_RAM_1_BASE                      (0x40010400u)
/** Peripheral NSS__DNN_RAM_1 base pointer */
#define NSS__DNN_RAM_1                           ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_1_BASE)
/** Peripheral NSS__DNN_RAM_2 base address */
#define NSS__DNN_RAM_2_BASE                      (0x40010800u)
/** Peripheral NSS__DNN_RAM_2 base pointer */
#define NSS__DNN_RAM_2                           ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_2_BASE)
/** Peripheral NSS__DNN_RAM_3 base address */
#define NSS__DNN_RAM_3_BASE                      (0x40010C00u)
/** Peripheral NSS__DNN_RAM_3 base pointer */
#define NSS__DNN_RAM_3                           ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_3_BASE)
/** Peripheral NSS__DNN_RAM_4 base address */
#define NSS__DNN_RAM_4_BASE                      (0x40011000u)
/** Peripheral NSS__DNN_RAM_4 base pointer */
#define NSS__DNN_RAM_4                           ((NSS_DNN_RAM_Type *)NSS__DNN_RAM_4_BASE)
/** Array initializer of NSS_DNN_RAM peripheral base addresses */
#define NSS_DNN_RAM_BASE_ADDRS                   { NSS__DNN_RAM_0_BASE, NSS__DNN_RAM_1_BASE, NSS__DNN_RAM_2_BASE, NSS__DNN_RAM_3_BASE, NSS__DNN_RAM_4_BASE }
/** Array initializer of NSS_DNN_RAM peripheral base pointers */
#define NSS_DNN_RAM_BASE_PTRS                    { NSS__DNN_RAM_0, NSS__DNN_RAM_1, NSS__DNN_RAM_2, NSS__DNN_RAM_3, NSS__DNN_RAM_4 }

/* NSS_DSSEVENT_GEN - Peripheral instance base addresses */
/** Peripheral NSS__DSSEVENT_GEN base address */
#define NSS__DSSEVENT_GEN_BASE                   (0x40003000u)
/** Peripheral NSS__DSSEVENT_GEN base pointer */
#define NSS__DSSEVENT_GEN                        ((NSS_DSSEVENT_GEN_Type *)NSS__DSSEVENT_GEN_BASE)
/** Array initializer of NSS_DSSEVENT_GEN peripheral base addresses */
#define NSS_DSSEVENT_GEN_BASE_ADDRS              { NSS__DSSEVENT_GEN_BASE }
/** Array initializer of NSS_DSSEVENT_GEN peripheral base pointers */
#define NSS_DSSEVENT_GEN_BASE_PTRS               { NSS__DSSEVENT_GEN }

/* NSS_EDU - Peripheral instance base addresses */
/** Peripheral NSS__EDU base address */
#define NSS__EDU_BASE                            (0x40003800u)
/** Peripheral NSS__EDU base pointer */
#define NSS__EDU                                 ((NSS_EDU_Type *)NSS__EDU_BASE)
/** Array initializer of NSS_EDU peripheral base addresses */
#define NSS_EDU_BASE_ADDRS                       { NSS__EDU_BASE }
/** Array initializer of NSS_EDU peripheral base pointers */
#define NSS_EDU_BASE_PTRS                        { NSS__EDU }

/* NSS_EVENT_BUS - Peripheral instance base addresses */
/** Peripheral NSS__EVENT_BUS base address */
#define NSS__EVENT_BUS_BASE                      (0x40002C00u)
/** Peripheral NSS__EVENT_BUS base pointer */
#define NSS__EVENT_BUS                           ((NSS_EVENT_BUS_Type *)NSS__EVENT_BUS_BASE)
/** Array initializer of NSS_EVENT_BUS peripheral base addresses */
#define NSS_EVENT_BUS_BASE_ADDRS                 { NSS__EVENT_BUS_BASE }
/** Array initializer of NSS_EVENT_BUS peripheral base pointers */
#define NSS_EVENT_BUS_BASE_PTRS                  { NSS__EVENT_BUS }

/* NSS_NIC - Peripheral instance base addresses */
/** Peripheral NSS__NIC base address */
#define NSS__NIC_BASE                            (0x50000000u)
/** Peripheral NSS__NIC base pointer */
#define NSS__NIC                                 ((NSS_NIC_Type *)NSS__NIC_BASE)
/** Array initializer of NSS_NIC peripheral base addresses */
#define NSS_NIC_BASE_ADDRS                       { NSS__NIC_BASE }
/** Array initializer of NSS_NIC peripheral base pointers */
#define NSS_NIC_BASE_PTRS                        { NSS__NIC }

/* NSS_PMON - Peripheral instance base addresses */
/** Peripheral NSS__PMON base address */
#define NSS__PMON_BASE                           (0x40003C00u)
/** Peripheral NSS__PMON base pointer */
#define NSS__PMON                                ((NSS_PMON_Type *)NSS__PMON_BASE)
/** Array initializer of NSS_PMON peripheral base addresses */
#define NSS_PMON_BASE_ADDRS                      { NSS__PMON_BASE }
/** Array initializer of NSS_PMON peripheral base pointers */
#define NSS_PMON_BASE_PTRS                       { NSS__PMON }

/* NSS_SYSCFG - Peripheral instance base addresses */
/** Peripheral NSS__SYSCFG base address */
#define NSS__SYSCFG_BASE                         (0x40000400u)
/** Peripheral NSS__SYSCFG base pointer */
#define NSS__SYSCFG                              ((NSS_SYSCFG_Type *)NSS__SYSCFG_BASE)
/** Array initializer of NSS_SYSCFG peripheral base addresses */
#define NSS_SYSCFG_BASE_ADDRS                    { NSS__SYSCFG_BASE }
/** Array initializer of NSS_SYSCFG peripheral base pointers */
#define NSS_SYSCFG_BASE_PTRS                     { NSS__SYSCFG }

/* NSS_TIMER - Peripheral instance base addresses */
/** Peripheral NSS__TIMER base address */
#define NSS__TIMER_BASE                          (0x40002800u)
/** Peripheral NSS__TIMER base pointer */
#define NSS__TIMER                               ((NSS_TIMER_Type *)NSS__TIMER_BASE)
/** Array initializer of NSS_TIMER peripheral base addresses */
#define NSS_TIMER_BASE_ADDRS                     { NSS__TIMER_BASE }
/** Array initializer of NSS_TIMER peripheral base pointers */
#define NSS_TIMER_BASE_PTRS                      { NSS__TIMER }

/* NSS_U85 - Peripheral instance base addresses */
/** Peripheral NSS__U85 base address */
#define NSS__U85_BASE                            (0x40008000u)
/** Peripheral NSS__U85 base pointer */
#define NSS__U85                                 ((NSS_U85_Type *)NSS__U85_BASE)
/** Array initializer of NSS_U85 peripheral base addresses */
#define NSS_U85_BASE_ADDRS                       { NSS__U85_BASE }
/** Array initializer of NSS_U85 peripheral base pointers */
#define NSS_U85_BASE_PTRS                        { NSS__U85 }

/* NSS_WATCHDOG - Peripheral instance base addresses */
/** Peripheral NSS__WATCHDOG base address */
#define NSS__WATCHDOG_BASE                       (0x40002400u)
/** Peripheral NSS__WATCHDOG base pointer */
#define NSS__WATCHDOG                            ((NSS_WATCHDOG_Type *)NSS__WATCHDOG_BASE)
/** Array initializer of NSS_WATCHDOG peripheral base addresses */
#define NSS_WATCHDOG_BASE_ADDRS                  { NSS__WATCHDOG_BASE }
/** Array initializer of NSS_WATCHDOG peripheral base pointers */
#define NSS_WATCHDOG_BASE_PTRS                   { NSS__WATCHDOG }

/* NSS_XSPI - Peripheral instance base addresses */
/** Peripheral NSS__XSPI base address */
#define NSS__XSPI_BASE                           (0x40012000u)
/** Peripheral NSS__XSPI base pointer */
#define NSS__XSPI                                ((NSS_XSPI_Type *)NSS__XSPI_BASE)
/** Array initializer of NSS_XSPI peripheral base addresses */
#define NSS_XSPI_BASE_ADDRS                      { NSS__XSPI_BASE }
/** Array initializer of NSS_XSPI peripheral base pointers */
#define NSS_XSPI_BASE_PTRS                       { NSS__XSPI }
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NSS__XSPI_1_AMBA base address */
  #define NSS__XSPI_1_AMBA_BASE_NS           (0x80000000u)
  /** Peripheral NSS__XSPI_1_AMBA base address */
  #define NSS__XSPI_1_AMBA_BASE              (0x90000000u)
  /** Array initializer of XSPI_AMBA peripheral base addresses */
  #define NSS_XSPI_AMBA_BASE_ADDRS_NS        { NSS__XSPI_1_AMBA_BASE_NS }
  /** Array initializer of NSS__XSPI_AMBA peripheral base addresses */
  #define NSS_XSPI_AMBA_BASE_ADDRS           { NSS__XSPI_1_AMBA_BASE }
  #define NSS_XSPI_AMBA_BASES                {0x90000000u}
  #define NSS_XSPI_AMBA_BASES_NS             {0x80000000u}
#else
  /** Peripheral NSS__XSPI_1_AMBA base address */
  #define NSS__XSPI_1_AMBA_BASE              (0x80000000u)
  /** Array initializer of NSS__XSPI_AMBA peripheral base addresses */
  #define NSS_XSPI_AMBA_BASE_ADDRS           { NSS__XSPI_1_AMBA_BASE }
  #define NSS_XSPI_AMBA_BASES                {0x80000000u}
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

/*!
 * @}
 */ /* end of group SDK_Compatibility_Symbols */


#endif  /* IMXRTL3459AAA_CM55_CORE1_COMMON_H_ */

