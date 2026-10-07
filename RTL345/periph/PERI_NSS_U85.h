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
**         CMSIS Peripheral Access Layer for NSS_U85
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
 * @file PERI_NSS_U85.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for NSS_U85
 *
 * CMSIS Peripheral Access Layer for NSS_U85
 */

#if !defined(PERI_NSS_U85_H_)
#define PERI_NSS_U85_H_                          /**< Symbol preventing repeated inclusion */

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
   -- NSS_U85 Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_U85_Peripheral_Access_Layer NSS_U85 Peripheral Access Layer
 * @{
 */

/** NSS_U85 - Register Layout Typedef */
typedef struct {
  __I  uint32_t ID;                                /**< ID register, offset: 0x0 */
  __I  uint32_t STATUS;                            /**< Register describes the current operating status of the NPU, offset: 0x4 */
  __IO uint32_t CMD;                               /**< The command register. This register reads as last written command, offset: 0x8 */
  __IO uint32_t RESET;                             /**< Request reset and new security mode, offset: 0xC */
  __IO uint32_t QBASE;                             /**< The base address of the command stream in bytes, offset: 0x10 */
  __IO uint32_t QBASE_HI;                          /**< The base address of the command stream in bytes (higher bits), offset: 0x14 */
  __I  uint32_t QREAD;                             /**< The read offset in the command stream in bytes. Multiple of four in the range 0-16MB, offset: 0x18 */
  __IO uint32_t QCONFIG;                           /**< The AXI configuration for the command stream in the range 0-3. Same encoding as for REGIONCFG, offset: 0x1C */
  __IO uint32_t QSIZE;                             /**< The size of the command stream in bytes. Multiple of four in the range 0-16MB, offset: 0x20 */
  __I  uint32_t PROT;                              /**< The protection level configured for the NPU when acting as an AXI Requester, offset: 0x24 */
  __I  uint32_t CONFIG;                            /**< RTL configuration, offset: 0x28 */
       uint8_t RESERVED_0[4];
  __I  uint32_t COND_STATUS;                       /**< Condition status of the NPU, offset: 0x30 */
       uint8_t RESERVED_1[4];
  __IO uint32_t POWER_CTRL;                        /**< Power control register, offset: 0x38 */
  __IO uint32_t REGIONCFG;                         /**< Specify which MEM_ATTR register applies to each region, offset: 0x3C */
  __IO uint32_t MEM_ATTR0;                         /**< Memory attributes 0, offset: 0x40 */
  __IO uint32_t MEM_ATTR1;                         /**< Memory attributes 1, offset: 0x44 */
  __IO uint32_t MEM_ATTR2;                         /**< Memory attributes 2, offset: 0x48 */
  __IO uint32_t MEM_ATTR3;                         /**< Memory attributes 3, offset: 0x4C */
  __IO uint32_t AXI_SRAM;                          /**< The AXI configuration for SRAM ports, offset: 0x50 */
  __IO uint32_t AXI_EXT;                           /**< The AXI configuration for EXT ports, offset: 0x54 */
       uint8_t RESERVED_2[8];
  __I  uint32_t CFG_SRAM_CAP;                      /**< The value of the CFGSRAMCAP pins, SRAM AXI ports cap, offset: 0x60 */
  __I  uint32_t CFG_EXT_CAP;                       /**< The value of the CFGEXTCAP pins, EXT AXI ports cap, offset: 0x64 */
  __I  uint32_t CFG_SRAM_HASH0;                    /**< The value of the CFGSRAMHASH0 pins, SRAM AXI port select bit 0 hash, offset: 0x68 */
  __I  uint32_t CFG_SRAM_HASH0_HI;                 /**< The value of the CFGSRAMHASH0 pins, SRAM AXI port select bit 0 hash (higher bits), offset: 0x6C */
  __I  uint32_t CFG_SRAM_HASH1;                    /**< The value of the CFGSRAMHASH1 pins, SRAM AXI port select bit 1 hash, offset: 0x70 */
  __I  uint32_t CFG_SRAM_HASH1_HI;                 /**< The value of the CFGSRAMHASH1 pins, SRAM AXI port select bit 1 hash (higher bits), offset: 0x74 */
  __I  uint32_t CFG_EXT_HASH0;                     /**< The value of the CFGEXTHASH0 pins, EXT AXI port select bit 0 hash, offset: 0x78 */
  __I  uint32_t CFG_EXT_HASH0_HI;                  /**< The value of the CFGEXTHASH0 pins, EXT AXI port select bit 0 hash (higher bits), offset: 0x7C */
  __IO uint32_t BASEP0;                            /**< AXI base address of the respective region number 0 - 7, offset: 0x80 */
  __IO uint32_t BASEP0_HI;                         /**< AXI base address of the respective region number 0 - 7 (higher bits), offset: 0x84 */
  __IO uint32_t BASEP1;                            /**< AXI base address of the respective region number 0 - 7, offset: 0x88 */
  __IO uint32_t BASEP1_HI;                         /**< AXI base address of the respective region number 0 - 7 (higher bits), offset: 0x8C */
  __IO uint32_t BASEP2;                            /**< AXI base address of the respective region number 0 - 7, offset: 0x90 */
  __IO uint32_t BASEP2_HI;                         /**< AXI base address of the respective region number 0 - 7 (higher bits), offset: 0x94 */
  __IO uint32_t BASEP3;                            /**< AXI base address of the respective region number 0 - 7, offset: 0x98 */
  __IO uint32_t BASEP3_HI;                         /**< AXI base address of the respective region number 0 - 7 (higher bits), offset: 0x9C */
  __IO uint32_t BASEP4;                            /**< AXI base address of the respective region number 0 - 7, offset: 0xA0 */
  __IO uint32_t BASEP4_HI;                         /**< AXI base address of the respective region number 0 - 7 (higher bits), offset: 0xA4 */
  __IO uint32_t BASEP5;                            /**< AXI base address of the respective region number 0 - 7, offset: 0xA8 */
  __IO uint32_t BASEP5_HI;                         /**< AXI base address of the respective region number 0 - 7 (higher bits), offset: 0xAC */
  __IO uint32_t BASEP6;                            /**< AXI base address of the respective region number 0 - 7, offset: 0xB0 */
  __IO uint32_t BASEP6_HI;                         /**< AXI base address of the respective region number 0 - 7 (higher bits), offset: 0xB4 */
  __IO uint32_t BASEP7;                            /**< AXI base address of the respective region number 0 - 7, offset: 0xB8 */
  __IO uint32_t BASEP7_HI;                         /**< AXI base address of the respective region number 0 - 7 (higher bits), offset: 0xBC */
       uint8_t RESERVED_3[3856];
  __I  uint32_t PID4;                              /**< Peripheral ID byte 4 (Arm=code 4), offset: 0xFD0 */
  __I  uint32_t PID5;                              /**< Peripheral ID byte 5 (reserved), offset: 0xFD4 */
  __I  uint32_t PID6;                              /**< Peripheral ID byte 6 (reserved), offset: 0xFD8 */
  __I  uint32_t PID7;                              /**< Peripheral ID byte 7 (reserved), offset: 0xFDC */
  __I  uint32_t PID0;                              /**< Peripheral ID byte 0. This is bits[7:0] of the part number, offset: 0xFE0 */
  __I  uint32_t PID1;                              /**< Peripheral ID byte 1. This is bits[11:8] of the part number in bits[3:0], and bits[3:0] of the Arm ID in bits[7:4], offset: 0xFE4 */
  __I  uint32_t PID2;                              /**< Peripheral ID byte 2. This is bits[6:4] of the Arm ID in bits[2:0], and bit 3 indicates format B, offset: 0xFE8 */
  __I  uint32_t PID3;                              /**< Peripheral ID byte 3, offset: 0xFEC */
  __I  uint32_t CID0;                              /**< Component ID byte 0, offset: 0xFF0 */
  __I  uint32_t CID1;                              /**< Component ID byte 1, offset: 0xFF4 */
  __I  uint32_t CID2;                              /**< Component ID byte 2, offset: 0xFF8 */
  __I  uint32_t CID3;                              /**< Component ID byte 3, offset: 0xFFC */
       uint8_t RESERVED_4[384];
  __IO uint32_t PMCR;                              /**< PMU register control, offset: 0x1180 */
  __IO uint32_t PMCNTENSET;                        /**< Count enable set register, offset: 0x1184 */
  __IO uint32_t PMCNTENCLR;                        /**< Count enable clear register, offset: 0x1188 */
  __IO uint32_t PMOVSSET;                          /**< Overflow flag status set register, offset: 0x118C */
  __IO uint32_t PMOVSCLR;                          /**< Overflow flag status clear register, offset: 0x1190 */
  __IO uint32_t PMINTSET;                          /**< Interrupt enable set register, offset: 0x1194 */
  __IO uint32_t PMINTCLR;                          /**< Interrupt enable clear register, offset: 0x1198 */
       uint8_t RESERVED_5[4];
  __IO uint32_t PMCCNTR;                           /**< Performance monitor cycle count register, offset: 0x11A0 */
  __IO uint32_t PMCCNTR_HI;                        /**< Performance monitor cycle count register (higher bits), offset: 0x11A4 */
       uint8_t RESERVED_6[4];
  __IO uint32_t PMCAXI_CHAN;                       /**< Set which AXI channel to monitor for latency measurements in PMU, offset: 0x11AC */
  __IO uint32_t PMCLUT;                            /**< Performance monitor control for lookup table, offset: 0x11B0 */
       uint8_t RESERVED_7[332];
  __IO uint32_t PMEVCNTR0;                         /**< Performance monitor event 0 count register, offset: 0x1300 */
  __IO uint32_t PMEVCNTR1;                         /**< Performance monitor event 1 count register, offset: 0x1304 */
  __IO uint32_t PMEVCNTR2;                         /**< Performance monitor event 2 count register, offset: 0x1308 */
  __IO uint32_t PMEVCNTR3;                         /**< Performance monitor event 3 count register, offset: 0x130C */
  __IO uint32_t PMEVCNTR4;                         /**< Performance monitor event 4 count register, offset: 0x1310 */
  __IO uint32_t PMEVCNTR5;                         /**< Performance monitor event 5 count register, offset: 0x1314 */
  __IO uint32_t PMEVCNTR6;                         /**< Performance monitor event 6 count register, offset: 0x1318 */
  __IO uint32_t PMEVCNTR7;                         /**< Performance monitor event 7 count register, offset: 0x131C */
       uint8_t RESERVED_8[96];
  __IO uint32_t PMEVTYPER0;                        /**< Performance monitor event type register 0, offset: 0x1380 */
  __IO uint32_t PMEVTYPER1;                        /**< Performance monitor event type register 1, offset: 0x1384 */
  __IO uint32_t PMEVTYPER2;                        /**< Performance monitor event type register 2, offset: 0x1388 */
  __IO uint32_t PMEVTYPER3;                        /**< Performance monitor event type register 3, offset: 0x138C */
  __IO uint32_t PMEVTYPER4;                        /**< Performance monitor event type register 4, offset: 0x1390 */
  __IO uint32_t PMEVTYPER5;                        /**< Performance monitor event type register 5, offset: 0x1394 */
  __IO uint32_t PMEVTYPER6;                        /**< Performance monitor event type register 6, offset: 0x1398 */
  __IO uint32_t PMEVTYPER7;                        /**< Performance monitor event type register 7, offset: 0x139C */
} NSS_U85_Type;

/* ----------------------------------------------------------------------------
   -- NSS_U85 Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_U85_Register_Masks NSS_U85 Register Masks
 * @{
 */

/*! @name ID - ID register */
/*! @{ */

#define NSS_U85_ID_VERSION_STATUS_MASK           (0xFU)
#define NSS_U85_ID_VERSION_STATUS_SHIFT          (0U)
/*! version_status - This value is the version of the product */
#define NSS_U85_ID_VERSION_STATUS(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_ID_VERSION_STATUS_SHIFT)) & NSS_U85_ID_VERSION_STATUS_MASK)

#define NSS_U85_ID_VERSION_MINOR_MASK            (0xF0U)
#define NSS_U85_ID_VERSION_MINOR_SHIFT           (4U)
/*! version_minor - This value is the n for the P part of an RnPn release number */
#define NSS_U85_ID_VERSION_MINOR(x)              (((uint32_t)(((uint32_t)(x)) << NSS_U85_ID_VERSION_MINOR_SHIFT)) & NSS_U85_ID_VERSION_MINOR_MASK)

#define NSS_U85_ID_VERSION_MAJOR_MASK            (0xF00U)
#define NSS_U85_ID_VERSION_MAJOR_SHIFT           (8U)
/*! version_major - This value is the n for the R part of an RnPn release number */
#define NSS_U85_ID_VERSION_MAJOR(x)              (((uint32_t)(((uint32_t)(x)) << NSS_U85_ID_VERSION_MAJOR_SHIFT)) & NSS_U85_ID_VERSION_MAJOR_MASK)

#define NSS_U85_ID_PRODUCT_MAJOR_MASK            (0xF000U)
#define NSS_U85_ID_PRODUCT_MAJOR_SHIFT           (12U)
/*! product_major - Product major ID number (unique per base product) */
#define NSS_U85_ID_PRODUCT_MAJOR(x)              (((uint32_t)(((uint32_t)(x)) << NSS_U85_ID_PRODUCT_MAJOR_SHIFT)) & NSS_U85_ID_PRODUCT_MAJOR_MASK)

#define NSS_U85_ID_ARCH_PATCH_REV_MASK           (0xF0000U)
#define NSS_U85_ID_ARCH_PATCH_REV_SHIFT          (16U)
/*! arch_patch_rev - This value is the patch number of the architecture version a.b */
#define NSS_U85_ID_ARCH_PATCH_REV(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_ID_ARCH_PATCH_REV_SHIFT)) & NSS_U85_ID_ARCH_PATCH_REV_MASK)

#define NSS_U85_ID_ARCH_MINOR_REV_MASK           (0xFF00000U)
#define NSS_U85_ID_ARCH_MINOR_REV_SHIFT          (20U)
/*! arch_minor_rev - This value is the minor architecture version number, b in the architecture version a.b */
#define NSS_U85_ID_ARCH_MINOR_REV(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_ID_ARCH_MINOR_REV_SHIFT)) & NSS_U85_ID_ARCH_MINOR_REV_MASK)

#define NSS_U85_ID_ARCH_MAJOR_REV_MASK           (0xF0000000U)
#define NSS_U85_ID_ARCH_MAJOR_REV_SHIFT          (28U)
/*! arch_major_rev - This value is the major architecture version number, a in the architecture version a.b */
#define NSS_U85_ID_ARCH_MAJOR_REV(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_ID_ARCH_MAJOR_REV_SHIFT)) & NSS_U85_ID_ARCH_MAJOR_REV_MASK)
/*! @} */

/*! @name STATUS - Register describes the current operating status of the NPU */
/*! @{ */

#define NSS_U85_STATUS_STATE_MASK                (0x1U)
#define NSS_U85_STATUS_STATE_SHIFT               (0U)
/*! state - 0 = NPU is in stopped state. 1 = NPU is in running state */
#define NSS_U85_STATUS_STATE(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_U85_STATUS_STATE_SHIFT)) & NSS_U85_STATUS_STATE_MASK)

#define NSS_U85_STATUS_IRQ_RAISED_MASK           (0x2U)
#define NSS_U85_STATUS_IRQ_RAISED_SHIFT          (1U)
/*! irq_raised - 0 = IRQ not raised. 1 = IRQ raised */
#define NSS_U85_STATUS_IRQ_RAISED(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_STATUS_IRQ_RAISED_SHIFT)) & NSS_U85_STATUS_IRQ_RAISED_MASK)

#define NSS_U85_STATUS_BUS_STATUS_MASK           (0x4U)
#define NSS_U85_STATUS_BUS_STATUS_SHIFT          (2U)
/*! bus_status - 0 = No bus fault. 1 = Bus abort detected and processing halted */
#define NSS_U85_STATUS_BUS_STATUS(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_STATUS_BUS_STATUS_SHIFT)) & NSS_U85_STATUS_BUS_STATUS_MASK)

#define NSS_U85_STATUS_RESET_STATUS_MASK         (0x8U)
#define NSS_U85_STATUS_RESET_STATUS_SHIFT        (3U)
/*! reset_status - 0 = No reset in progress. 1 = Reset in progress */
#define NSS_U85_STATUS_RESET_STATUS(x)           (((uint32_t)(((uint32_t)(x)) << NSS_U85_STATUS_RESET_STATUS_SHIFT)) & NSS_U85_STATUS_RESET_STATUS_MASK)

#define NSS_U85_STATUS_CMD_PARSE_ERROR_MASK      (0x10U)
#define NSS_U85_STATUS_CMD_PARSE_ERROR_SHIFT     (4U)
/*! cmd_parse_error - 0 = No parsing error. 1 = Command stream parsing error detected */
#define NSS_U85_STATUS_CMD_PARSE_ERROR(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_STATUS_CMD_PARSE_ERROR_SHIFT)) & NSS_U85_STATUS_CMD_PARSE_ERROR_MASK)

#define NSS_U85_STATUS_CMD_END_REACHED_MASK      (0x20U)
#define NSS_U85_STATUS_CMD_END_REACHED_SHIFT     (5U)
/*! cmd_end_reached - 0 = Command stream end is not reached. 1 = Command stream end is reached */
#define NSS_U85_STATUS_CMD_END_REACHED(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_STATUS_CMD_END_REACHED_SHIFT)) & NSS_U85_STATUS_CMD_END_REACHED_MASK)

#define NSS_U85_STATUS_PMU_IRQ_RAISED_MASK       (0x40U)
#define NSS_U85_STATUS_PMU_IRQ_RAISED_SHIFT      (6U)
/*! pmu_irq_raised - 0 = No PMU IRQ raised. 1 = PMU IRQ raised */
#define NSS_U85_STATUS_PMU_IRQ_RAISED(x)         (((uint32_t)(((uint32_t)(x)) << NSS_U85_STATUS_PMU_IRQ_RAISED_SHIFT)) & NSS_U85_STATUS_PMU_IRQ_RAISED_MASK)

#define NSS_U85_STATUS_ECC_FAULT_MASK            (0x100U)
#define NSS_U85_STATUS_ECC_FAULT_SHIFT           (8U)
/*! ecc_fault - 0 = No ECC fault detected. 1 = ECC fault detected */
#define NSS_U85_STATUS_ECC_FAULT(x)              (((uint32_t)(((uint32_t)(x)) << NSS_U85_STATUS_ECC_FAULT_SHIFT)) & NSS_U85_STATUS_ECC_FAULT_MASK)

#define NSS_U85_STATUS_BRANCH_FAULT_MASK         (0x200U)
#define NSS_U85_STATUS_BRANCH_FAULT_SHIFT        (9U)
/*! branch_fault - 0 = No branch fault. 1 = Branch fault detected */
#define NSS_U85_STATUS_BRANCH_FAULT(x)           (((uint32_t)(((uint32_t)(x)) << NSS_U85_STATUS_BRANCH_FAULT_SHIFT)) & NSS_U85_STATUS_BRANCH_FAULT_MASK)

#define NSS_U85_STATUS_FAULTING_INTERFACE_MASK   (0x800U)
#define NSS_U85_STATUS_FAULTING_INTERFACE_SHIFT  (11U)
/*! faulting_interface - The faulting interface on bus abort */
#define NSS_U85_STATUS_FAULTING_INTERFACE(x)     (((uint32_t)(((uint32_t)(x)) << NSS_U85_STATUS_FAULTING_INTERFACE_SHIFT)) & NSS_U85_STATUS_FAULTING_INTERFACE_MASK)

#define NSS_U85_STATUS_FAULTING_CHANNEL_MASK     (0xF000U)
#define NSS_U85_STATUS_FAULTING_CHANNEL_SHIFT    (12U)
/*! faulting_channel - The faulting channel on a bus abort */
#define NSS_U85_STATUS_FAULTING_CHANNEL(x)       (((uint32_t)(((uint32_t)(x)) << NSS_U85_STATUS_FAULTING_CHANNEL_SHIFT)) & NSS_U85_STATUS_FAULTING_CHANNEL_MASK)

#define NSS_U85_STATUS_IRQ_HISTORY_MASK_MASK     (0xFFFF0000U)
#define NSS_U85_STATUS_IRQ_HISTORY_MASK_SHIFT    (16U)
/*! irq_history_mask - The IRQ History mask */
#define NSS_U85_STATUS_IRQ_HISTORY_MASK(x)       (((uint32_t)(((uint32_t)(x)) << NSS_U85_STATUS_IRQ_HISTORY_MASK_SHIFT)) & NSS_U85_STATUS_IRQ_HISTORY_MASK_MASK)
/*! @} */

/*! @name CMD - The command register. This register reads as last written command */
/*! @{ */

#define NSS_U85_CMD_TRANSITION_TO_RUNNING_STATE_MASK (0x1U)
#define NSS_U85_CMD_TRANSITION_TO_RUNNING_STATE_SHIFT (0U)
/*! transition_to_running_state - Write 1 to transition the NPU to running state. Writing 0 has no effect */
#define NSS_U85_CMD_TRANSITION_TO_RUNNING_STATE(x) (((uint32_t)(((uint32_t)(x)) << NSS_U85_CMD_TRANSITION_TO_RUNNING_STATE_SHIFT)) & NSS_U85_CMD_TRANSITION_TO_RUNNING_STATE_MASK)

#define NSS_U85_CMD_CLEAR_IRQ_MASK               (0x2U)
#define NSS_U85_CMD_CLEAR_IRQ_SHIFT              (1U)
/*! clear_irq - Write 1 to clear the IRQ status in the STATUS register. Writing 0 has no effect */
#define NSS_U85_CMD_CLEAR_IRQ(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_CMD_CLEAR_IRQ_SHIFT)) & NSS_U85_CMD_CLEAR_IRQ_MASK)

#define NSS_U85_CMD_CLOCK_Q_ENABLE_MASK          (0x4U)
#define NSS_U85_CMD_CLOCK_Q_ENABLE_SHIFT         (2U)
/*! clock_q_enable - Write 1 to this bit to enable clock off using clock q-interface and enable the requester clock gate */
#define NSS_U85_CMD_CLOCK_Q_ENABLE(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_CMD_CLOCK_Q_ENABLE_SHIFT)) & NSS_U85_CMD_CLOCK_Q_ENABLE_MASK)

#define NSS_U85_CMD_POWER_Q_ENABLE_MASK          (0x8U)
#define NSS_U85_CMD_POWER_Q_ENABLE_SHIFT         (3U)
/*! power_q_enable - Write 1 to this bit to enable power off using power q-interface */
#define NSS_U85_CMD_POWER_Q_ENABLE(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_CMD_POWER_Q_ENABLE_SHIFT)) & NSS_U85_CMD_POWER_Q_ENABLE_MASK)

#define NSS_U85_CMD_STOP_REQUEST_MASK            (0x10U)
#define NSS_U85_CMD_STOP_REQUEST_SHIFT           (4U)
/*! stop_request - Write 1 to this bit to request STOP after completing any already-started commands */
#define NSS_U85_CMD_STOP_REQUEST(x)              (((uint32_t)(((uint32_t)(x)) << NSS_U85_CMD_STOP_REQUEST_SHIFT)) & NSS_U85_CMD_STOP_REQUEST_MASK)

#define NSS_U85_CMD_CLEAR_IRQ_HISTORY_MASK       (0xFFFF0000U)
#define NSS_U85_CMD_CLEAR_IRQ_HISTORY_SHIFT      (16U)
/*! clear_irq_history - Clears the IRQ history mask */
#define NSS_U85_CMD_CLEAR_IRQ_HISTORY(x)         (((uint32_t)(((uint32_t)(x)) << NSS_U85_CMD_CLEAR_IRQ_HISTORY_SHIFT)) & NSS_U85_CMD_CLEAR_IRQ_HISTORY_MASK)
/*! @} */

/*! @name RESET - Request reset and new security mode */
/*! @{ */

#define NSS_U85_RESET_PENDING_CPL_MASK           (0x1U)
#define NSS_U85_RESET_PENDING_CPL_SHIFT          (0U)
/*! pending_CPL - Current privilege level. 0 = User and 1 = Privileged */
#define NSS_U85_RESET_PENDING_CPL(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_RESET_PENDING_CPL_SHIFT)) & NSS_U85_RESET_PENDING_CPL_MASK)

#define NSS_U85_RESET_PENDING_CSL_MASK           (0x2U)
#define NSS_U85_RESET_PENDING_CSL_SHIFT          (1U)
/*! pending_CSL - Current security level. 0 = Secure and 1 = Non-secure */
#define NSS_U85_RESET_PENDING_CSL(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_RESET_PENDING_CSL_SHIFT)) & NSS_U85_RESET_PENDING_CSL_MASK)
/*! @} */

/*! @name QBASE - The base address of the command stream in bytes */
/*! @{ */

#define NSS_U85_QBASE_OFFSET_MASK                (0xFFFFFFFFU)
#define NSS_U85_QBASE_OFFSET_SHIFT               (0U)
/*! offset - Offset */
#define NSS_U85_QBASE_OFFSET(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_U85_QBASE_OFFSET_SHIFT)) & NSS_U85_QBASE_OFFSET_MASK)
/*! @} */

/*! @name QBASE_HI - The base address of the command stream in bytes (higher bits) */
/*! @{ */

#define NSS_U85_QBASE_HI_OFFSET_MASK             (0xFFU)
#define NSS_U85_QBASE_HI_OFFSET_SHIFT            (0U)
/*! offset - Offset */
#define NSS_U85_QBASE_HI_OFFSET(x)               (((uint32_t)(((uint32_t)(x)) << NSS_U85_QBASE_HI_OFFSET_SHIFT)) & NSS_U85_QBASE_HI_OFFSET_MASK)
/*! @} */

/*! @name QREAD - The read offset in the command stream in bytes. Multiple of four in the range 0-16MB */
/*! @{ */

#define NSS_U85_QREAD_QREAD_MASK                 (0xFFFFFFFFU)
#define NSS_U85_QREAD_QREAD_SHIFT                (0U)
/*! QREAD - The read offset of the current command under execution */
#define NSS_U85_QREAD_QREAD(x)                   (((uint32_t)(((uint32_t)(x)) << NSS_U85_QREAD_QREAD_SHIFT)) & NSS_U85_QREAD_QREAD_MASK)
/*! @} */

/*! @name QCONFIG - The AXI configuration for the command stream in the range 0-3. Same encoding as for REGIONCFG */
/*! @{ */

#define NSS_U85_QCONFIG_CMD_REGION0_MASK         (0x3U)
#define NSS_U85_QCONFIG_CMD_REGION0_SHIFT        (0U)
/*! cmd_region0 - The command region configuration number */
#define NSS_U85_QCONFIG_CMD_REGION0(x)           (((uint32_t)(((uint32_t)(x)) << NSS_U85_QCONFIG_CMD_REGION0_SHIFT)) & NSS_U85_QCONFIG_CMD_REGION0_MASK)
/*! @} */

/*! @name QSIZE - The size of the command stream in bytes. Multiple of four in the range 0-16MB */
/*! @{ */

#define NSS_U85_QSIZE_QSIZE_MASK                 (0xFFFFFFFFU)
#define NSS_U85_QSIZE_QSIZE_SHIFT                (0U)
/*! QSIZE - The size of the next command stream to be executed by the NPU */
#define NSS_U85_QSIZE_QSIZE(x)                   (((uint32_t)(((uint32_t)(x)) << NSS_U85_QSIZE_QSIZE_SHIFT)) & NSS_U85_QSIZE_QSIZE_MASK)
/*! @} */

/*! @name PROT - The protection level configured for the NPU when acting as an AXI Requester */
/*! @{ */

#define NSS_U85_PROT_ACTIVE_CPL_MASK             (0x1U)
#define NSS_U85_PROT_ACTIVE_CPL_SHIFT            (0U)
/*! active_CPL - The current privilege level. 0 = User and 1 = Privileged */
#define NSS_U85_PROT_ACTIVE_CPL(x)               (((uint32_t)(((uint32_t)(x)) << NSS_U85_PROT_ACTIVE_CPL_SHIFT)) & NSS_U85_PROT_ACTIVE_CPL_MASK)

#define NSS_U85_PROT_ACTIVE_CSL_MASK             (0x2U)
#define NSS_U85_PROT_ACTIVE_CSL_SHIFT            (1U)
/*! active_CSL - The current security level 0=Secure 1=Non secure */
#define NSS_U85_PROT_ACTIVE_CSL(x)               (((uint32_t)(((uint32_t)(x)) << NSS_U85_PROT_ACTIVE_CSL_SHIFT)) & NSS_U85_PROT_ACTIVE_CSL_MASK)
/*! @} */

/*! @name CONFIG - RTL configuration */
/*! @{ */

#define NSS_U85_CONFIG_MACS_PER_CC_MASK          (0xFU)
#define NSS_U85_CONFIG_MACS_PER_CC_SHIFT         (0U)
/*! macs_per_cc - The log2(macs/clock cycle) */
#define NSS_U85_CONFIG_MACS_PER_CC(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_CONFIG_MACS_PER_CC_SHIFT)) & NSS_U85_CONFIG_MACS_PER_CC_MASK)

#define NSS_U85_CONFIG_CMD_STREAM_VERSION_MASK   (0xF0U)
#define NSS_U85_CONFIG_CMD_STREAM_VERSION_SHIFT  (4U)
/*! cmd_stream_version - The command stream version accepted by this NPU */
#define NSS_U85_CONFIG_CMD_STREAM_VERSION(x)     (((uint32_t)(((uint32_t)(x)) << NSS_U85_CONFIG_CMD_STREAM_VERSION_SHIFT)) & NSS_U85_CONFIG_CMD_STREAM_VERSION_MASK)

#define NSS_U85_CONFIG_NUM_AXI_SRAM_MASK         (0x300U)
#define NSS_U85_CONFIG_NUM_AXI_SRAM_SHIFT        (8U)
/*! num_axi_sram - The log2 of the number of AXI SRAM interfaces */
#define NSS_U85_CONFIG_NUM_AXI_SRAM(x)           (((uint32_t)(((uint32_t)(x)) << NSS_U85_CONFIG_NUM_AXI_SRAM_SHIFT)) & NSS_U85_CONFIG_NUM_AXI_SRAM_MASK)

#define NSS_U85_CONFIG_NUM_AXI_EXT_MASK          (0x400U)
#define NSS_U85_CONFIG_NUM_AXI_EXT_SHIFT         (10U)
/*! num_axi_ext - The log2 of the number of AXI External memory interfaces */
#define NSS_U85_CONFIG_NUM_AXI_EXT(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_CONFIG_NUM_AXI_EXT_SHIFT)) & NSS_U85_CONFIG_NUM_AXI_EXT_MASK)

#define NSS_U85_CONFIG_NUM_WD_MASK               (0x3000U)
#define NSS_U85_CONFIG_NUM_WD_SHIFT              (12U)
/*! num_wd - The log2 of the number of standard weight decoders */
#define NSS_U85_CONFIG_NUM_WD(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_CONFIG_NUM_WD_SHIFT)) & NSS_U85_CONFIG_NUM_WD_MASK)

#define NSS_U85_CONFIG_CUSTOM_DMA_MASK           (0x8000000U)
#define NSS_U85_CONFIG_CUSTOM_DMA_SHIFT          (27U)
/*! custom_dma - The custom DMA configuration */
#define NSS_U85_CONFIG_CUSTOM_DMA(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_CONFIG_CUSTOM_DMA_SHIFT)) & NSS_U85_CONFIG_CUSTOM_DMA_MASK)

#define NSS_U85_CONFIG_PRODUCT_MASK              (0xF0000000U)
#define NSS_U85_CONFIG_PRODUCT_SHIFT             (28U)
/*! product - The product configuration */
#define NSS_U85_CONFIG_PRODUCT(x)                (((uint32_t)(((uint32_t)(x)) << NSS_U85_CONFIG_PRODUCT_SHIFT)) & NSS_U85_CONFIG_PRODUCT_MASK)
/*! @} */

/*! @name COND_STATUS - Condition status of the NPU */
/*! @{ */

#define NSS_U85_COND_STATUS_RESULT_FLAG_MASK     (0x1U)
#define NSS_U85_COND_STATUS_RESULT_FLAG_SHIFT    (0U)
/*! result_flag - The tensor result flag. For OFM with a single element, this is bit 0 of the value. Otherwise UNPREDICTABLE */
#define NSS_U85_COND_STATUS_RESULT_FLAG(x)       (((uint32_t)(((uint32_t)(x)) << NSS_U85_COND_STATUS_RESULT_FLAG_SHIFT)) & NSS_U85_COND_STATUS_RESULT_FLAG_MASK)
/*! @} */

/*! @name POWER_CTRL - Power control register */
/*! @{ */

#define NSS_U85_POWER_CTRL_MAC_STEP_CYCLES_MASK  (0x3FU)
#define NSS_U85_POWER_CTRL_MAC_STEP_CYCLES_SHIFT (0U)
/*! mac_step_cycles - MAC power ramping up/down control */
#define NSS_U85_POWER_CTRL_MAC_STEP_CYCLES(x)    (((uint32_t)(((uint32_t)(x)) << NSS_U85_POWER_CTRL_MAC_STEP_CYCLES_SHIFT)) & NSS_U85_POWER_CTRL_MAC_STEP_CYCLES_MASK)
/*! @} */

/*! @name REGIONCFG - Specify which MEM_ATTR register applies to each region */
/*! @{ */

#define NSS_U85_REGIONCFG_REGION0_MASK           (0x3U)
#define NSS_U85_REGIONCFG_REGION0_SHIFT          (0U)
/*! region0 - Bits for Region0 Configuration */
#define NSS_U85_REGIONCFG_REGION0(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_REGIONCFG_REGION0_SHIFT)) & NSS_U85_REGIONCFG_REGION0_MASK)

#define NSS_U85_REGIONCFG_REGION1_MASK           (0xCU)
#define NSS_U85_REGIONCFG_REGION1_SHIFT          (2U)
/*! region1 - Bits for Region1 Configuration */
#define NSS_U85_REGIONCFG_REGION1(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_REGIONCFG_REGION1_SHIFT)) & NSS_U85_REGIONCFG_REGION1_MASK)

#define NSS_U85_REGIONCFG_REGION2_MASK           (0x30U)
#define NSS_U85_REGIONCFG_REGION2_SHIFT          (4U)
/*! region2 - Bits for Region2 Configuration */
#define NSS_U85_REGIONCFG_REGION2(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_REGIONCFG_REGION2_SHIFT)) & NSS_U85_REGIONCFG_REGION2_MASK)

#define NSS_U85_REGIONCFG_REGION3_MASK           (0xC0U)
#define NSS_U85_REGIONCFG_REGION3_SHIFT          (6U)
/*! region3 - Bits for Region3 Configuration */
#define NSS_U85_REGIONCFG_REGION3(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_REGIONCFG_REGION3_SHIFT)) & NSS_U85_REGIONCFG_REGION3_MASK)

#define NSS_U85_REGIONCFG_REGION4_MASK           (0x300U)
#define NSS_U85_REGIONCFG_REGION4_SHIFT          (8U)
/*! region4 - Bits for Region4 Configuration */
#define NSS_U85_REGIONCFG_REGION4(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_REGIONCFG_REGION4_SHIFT)) & NSS_U85_REGIONCFG_REGION4_MASK)

#define NSS_U85_REGIONCFG_REGION5_MASK           (0xC00U)
#define NSS_U85_REGIONCFG_REGION5_SHIFT          (10U)
/*! region5 - Bits for Region5 Configuration */
#define NSS_U85_REGIONCFG_REGION5(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_REGIONCFG_REGION5_SHIFT)) & NSS_U85_REGIONCFG_REGION5_MASK)

#define NSS_U85_REGIONCFG_REGION6_MASK           (0x3000U)
#define NSS_U85_REGIONCFG_REGION6_SHIFT          (12U)
/*! region6 - Bits for Region6 Configuration */
#define NSS_U85_REGIONCFG_REGION6(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_REGIONCFG_REGION6_SHIFT)) & NSS_U85_REGIONCFG_REGION6_MASK)

#define NSS_U85_REGIONCFG_REGION7_MASK           (0xC000U)
#define NSS_U85_REGIONCFG_REGION7_SHIFT          (14U)
/*! region7 - Bits for Region7 Configuration */
#define NSS_U85_REGIONCFG_REGION7(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_REGIONCFG_REGION7_SHIFT)) & NSS_U85_REGIONCFG_REGION7_MASK)
/*! @} */

/*! @name MEM_ATTR0 - Memory attributes 0 */
/*! @{ */

#define NSS_U85_MEM_ATTR0_MEM_DOMAIN_MASK        (0x3U)
#define NSS_U85_MEM_ATTR0_MEM_DOMAIN_SHIFT       (0U)
/*! mem_domain - Memory domain */
#define NSS_U85_MEM_ATTR0_MEM_DOMAIN(x)          (((uint32_t)(((uint32_t)(x)) << NSS_U85_MEM_ATTR0_MEM_DOMAIN_SHIFT)) & NSS_U85_MEM_ATTR0_MEM_DOMAIN_MASK)

#define NSS_U85_MEM_ATTR0_AXI_PORT_MASK          (0x4U)
#define NSS_U85_MEM_ATTR0_AXI_PORT_SHIFT         (2U)
/*! axi_port - AXI port select */
#define NSS_U85_MEM_ATTR0_AXI_PORT(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_MEM_ATTR0_AXI_PORT_SHIFT)) & NSS_U85_MEM_ATTR0_AXI_PORT_MASK)

#define NSS_U85_MEM_ATTR0_MEMTYPE_MASK           (0xF0U)
#define NSS_U85_MEM_ATTR0_MEMTYPE_SHIFT          (4U)
/*! memtype - Memtype to be used to encode AxCACHE signals */
#define NSS_U85_MEM_ATTR0_MEMTYPE(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_MEM_ATTR0_MEMTYPE_SHIFT)) & NSS_U85_MEM_ATTR0_MEMTYPE_MASK)
/*! @} */

/*! @name MEM_ATTR1 - Memory attributes 1 */
/*! @{ */

#define NSS_U85_MEM_ATTR1_MEM_DOMAIN_MASK        (0x3U)
#define NSS_U85_MEM_ATTR1_MEM_DOMAIN_SHIFT       (0U)
/*! mem_domain - Memory domain */
#define NSS_U85_MEM_ATTR1_MEM_DOMAIN(x)          (((uint32_t)(((uint32_t)(x)) << NSS_U85_MEM_ATTR1_MEM_DOMAIN_SHIFT)) & NSS_U85_MEM_ATTR1_MEM_DOMAIN_MASK)

#define NSS_U85_MEM_ATTR1_AXI_PORT_MASK          (0x4U)
#define NSS_U85_MEM_ATTR1_AXI_PORT_SHIFT         (2U)
/*! axi_port - AXI port select */
#define NSS_U85_MEM_ATTR1_AXI_PORT(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_MEM_ATTR1_AXI_PORT_SHIFT)) & NSS_U85_MEM_ATTR1_AXI_PORT_MASK)

#define NSS_U85_MEM_ATTR1_MEMTYPE_MASK           (0xF0U)
#define NSS_U85_MEM_ATTR1_MEMTYPE_SHIFT          (4U)
/*! memtype - Memtype to be used to encode AxCACHE signals */
#define NSS_U85_MEM_ATTR1_MEMTYPE(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_MEM_ATTR1_MEMTYPE_SHIFT)) & NSS_U85_MEM_ATTR1_MEMTYPE_MASK)
/*! @} */

/*! @name MEM_ATTR2 - Memory attributes 2 */
/*! @{ */

#define NSS_U85_MEM_ATTR2_MEM_DOMAIN_MASK        (0x3U)
#define NSS_U85_MEM_ATTR2_MEM_DOMAIN_SHIFT       (0U)
/*! mem_domain - Memory domain */
#define NSS_U85_MEM_ATTR2_MEM_DOMAIN(x)          (((uint32_t)(((uint32_t)(x)) << NSS_U85_MEM_ATTR2_MEM_DOMAIN_SHIFT)) & NSS_U85_MEM_ATTR2_MEM_DOMAIN_MASK)

#define NSS_U85_MEM_ATTR2_AXI_PORT_MASK          (0x4U)
#define NSS_U85_MEM_ATTR2_AXI_PORT_SHIFT         (2U)
/*! axi_port - AXI port select */
#define NSS_U85_MEM_ATTR2_AXI_PORT(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_MEM_ATTR2_AXI_PORT_SHIFT)) & NSS_U85_MEM_ATTR2_AXI_PORT_MASK)

#define NSS_U85_MEM_ATTR2_MEMTYPE_MASK           (0xF0U)
#define NSS_U85_MEM_ATTR2_MEMTYPE_SHIFT          (4U)
/*! memtype - Memtype to be used to encode AxCACHE signals */
#define NSS_U85_MEM_ATTR2_MEMTYPE(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_MEM_ATTR2_MEMTYPE_SHIFT)) & NSS_U85_MEM_ATTR2_MEMTYPE_MASK)
/*! @} */

/*! @name MEM_ATTR3 - Memory attributes 3 */
/*! @{ */

#define NSS_U85_MEM_ATTR3_MEM_DOMAIN_MASK        (0x3U)
#define NSS_U85_MEM_ATTR3_MEM_DOMAIN_SHIFT       (0U)
/*! mem_domain - Memory domain */
#define NSS_U85_MEM_ATTR3_MEM_DOMAIN(x)          (((uint32_t)(((uint32_t)(x)) << NSS_U85_MEM_ATTR3_MEM_DOMAIN_SHIFT)) & NSS_U85_MEM_ATTR3_MEM_DOMAIN_MASK)

#define NSS_U85_MEM_ATTR3_AXI_PORT_MASK          (0x4U)
#define NSS_U85_MEM_ATTR3_AXI_PORT_SHIFT         (2U)
/*! axi_port - AXI port select */
#define NSS_U85_MEM_ATTR3_AXI_PORT(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_MEM_ATTR3_AXI_PORT_SHIFT)) & NSS_U85_MEM_ATTR3_AXI_PORT_MASK)

#define NSS_U85_MEM_ATTR3_MEMTYPE_MASK           (0xF0U)
#define NSS_U85_MEM_ATTR3_MEMTYPE_SHIFT          (4U)
/*! memtype - Memtype to be used to encode AxCACHE signals */
#define NSS_U85_MEM_ATTR3_MEMTYPE(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_MEM_ATTR3_MEMTYPE_SHIFT)) & NSS_U85_MEM_ATTR3_MEMTYPE_MASK)
/*! @} */

/*! @name AXI_SRAM - The AXI configuration for SRAM ports */
/*! @{ */

#define NSS_U85_AXI_SRAM_MAX_OUTSTANDING_READ_M1_MASK (0x3FU)
#define NSS_U85_AXI_SRAM_MAX_OUTSTANDING_READ_M1_SHIFT (0U)
/*! max_outstanding_read_m1 - Maximum number of outstanding AXI read transactions per port - 1 */
#define NSS_U85_AXI_SRAM_MAX_OUTSTANDING_READ_M1(x) (((uint32_t)(((uint32_t)(x)) << NSS_U85_AXI_SRAM_MAX_OUTSTANDING_READ_M1_SHIFT)) & NSS_U85_AXI_SRAM_MAX_OUTSTANDING_READ_M1_MASK)

#define NSS_U85_AXI_SRAM_MAX_OUTSTANDING_WRITE_M1_MASK (0x1F00U)
#define NSS_U85_AXI_SRAM_MAX_OUTSTANDING_WRITE_M1_SHIFT (8U)
/*! max_outstanding_write_m1 - Maximum number of outstanding AXI write transactions per port - 1 */
#define NSS_U85_AXI_SRAM_MAX_OUTSTANDING_WRITE_M1(x) (((uint32_t)(((uint32_t)(x)) << NSS_U85_AXI_SRAM_MAX_OUTSTANDING_WRITE_M1_SHIFT)) & NSS_U85_AXI_SRAM_MAX_OUTSTANDING_WRITE_M1_MASK)

#define NSS_U85_AXI_SRAM_MAX_BEATS_MASK          (0x30000U)
#define NSS_U85_AXI_SRAM_MAX_BEATS_SHIFT         (16U)
/*! max_beats - Burst split alignment */
#define NSS_U85_AXI_SRAM_MAX_BEATS(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_AXI_SRAM_MAX_BEATS_SHIFT)) & NSS_U85_AXI_SRAM_MAX_BEATS_MASK)
/*! @} */

/*! @name AXI_EXT - The AXI configuration for EXT ports */
/*! @{ */

#define NSS_U85_AXI_EXT_MAX_OUTSTANDING_READ_M1_MASK (0x3FU)
#define NSS_U85_AXI_EXT_MAX_OUTSTANDING_READ_M1_SHIFT (0U)
/*! max_outstanding_read_m1 - Maximum number of outstanding AXI read transactions per port - 1 */
#define NSS_U85_AXI_EXT_MAX_OUTSTANDING_READ_M1(x) (((uint32_t)(((uint32_t)(x)) << NSS_U85_AXI_EXT_MAX_OUTSTANDING_READ_M1_SHIFT)) & NSS_U85_AXI_EXT_MAX_OUTSTANDING_READ_M1_MASK)

#define NSS_U85_AXI_EXT_MAX_OUTSTANDING_WRITE_M1_MASK (0x1F00U)
#define NSS_U85_AXI_EXT_MAX_OUTSTANDING_WRITE_M1_SHIFT (8U)
/*! max_outstanding_write_m1 - Maximum number of outstanding AXI write transactions per port - 1 */
#define NSS_U85_AXI_EXT_MAX_OUTSTANDING_WRITE_M1(x) (((uint32_t)(((uint32_t)(x)) << NSS_U85_AXI_EXT_MAX_OUTSTANDING_WRITE_M1_SHIFT)) & NSS_U85_AXI_EXT_MAX_OUTSTANDING_WRITE_M1_MASK)

#define NSS_U85_AXI_EXT_MAX_BEATS_MASK           (0x30000U)
#define NSS_U85_AXI_EXT_MAX_BEATS_SHIFT          (16U)
/*! max_beats - Burst split alignment */
#define NSS_U85_AXI_EXT_MAX_BEATS(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_AXI_EXT_MAX_BEATS_SHIFT)) & NSS_U85_AXI_EXT_MAX_BEATS_MASK)
/*! @} */

/*! @name CFG_SRAM_CAP - The value of the CFGSRAMCAP pins, SRAM AXI ports cap */
/*! @{ */

#define NSS_U85_CFG_SRAM_CAP_MAX_OUTSTANDING_READ_M1_MASK (0x3FU)
#define NSS_U85_CFG_SRAM_CAP_MAX_OUTSTANDING_READ_M1_SHIFT (0U)
/*! max_outstanding_read_m1 - Maximum number of outstanding AXI read transactions per port - 1 */
#define NSS_U85_CFG_SRAM_CAP_MAX_OUTSTANDING_READ_M1(x) (((uint32_t)(((uint32_t)(x)) << NSS_U85_CFG_SRAM_CAP_MAX_OUTSTANDING_READ_M1_SHIFT)) & NSS_U85_CFG_SRAM_CAP_MAX_OUTSTANDING_READ_M1_MASK)

#define NSS_U85_CFG_SRAM_CAP_MAX_OUTSTANDING_WRITE_M1_MASK (0x1F00U)
#define NSS_U85_CFG_SRAM_CAP_MAX_OUTSTANDING_WRITE_M1_SHIFT (8U)
/*! max_outstanding_write_m1 - Maximum number of outstanding AXI write transactions per port - 1 */
#define NSS_U85_CFG_SRAM_CAP_MAX_OUTSTANDING_WRITE_M1(x) (((uint32_t)(((uint32_t)(x)) << NSS_U85_CFG_SRAM_CAP_MAX_OUTSTANDING_WRITE_M1_SHIFT)) & NSS_U85_CFG_SRAM_CAP_MAX_OUTSTANDING_WRITE_M1_MASK)

#define NSS_U85_CFG_SRAM_CAP_MAX_BEATS_MASK      (0x30000U)
#define NSS_U85_CFG_SRAM_CAP_MAX_BEATS_SHIFT     (16U)
/*! max_beats - Burst split alignment */
#define NSS_U85_CFG_SRAM_CAP_MAX_BEATS(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_CFG_SRAM_CAP_MAX_BEATS_SHIFT)) & NSS_U85_CFG_SRAM_CAP_MAX_BEATS_MASK)
/*! @} */

/*! @name CFG_EXT_CAP - The value of the CFGEXTCAP pins, EXT AXI ports cap */
/*! @{ */

#define NSS_U85_CFG_EXT_CAP_MAX_OUTSTANDING_READ_M1_MASK (0x3FU)
#define NSS_U85_CFG_EXT_CAP_MAX_OUTSTANDING_READ_M1_SHIFT (0U)
/*! max_outstanding_read_m1 - Maximum number of outstanding AXI read transactions per port - 1 */
#define NSS_U85_CFG_EXT_CAP_MAX_OUTSTANDING_READ_M1(x) (((uint32_t)(((uint32_t)(x)) << NSS_U85_CFG_EXT_CAP_MAX_OUTSTANDING_READ_M1_SHIFT)) & NSS_U85_CFG_EXT_CAP_MAX_OUTSTANDING_READ_M1_MASK)

#define NSS_U85_CFG_EXT_CAP_MAX_OUTSTANDING_WRITE_M1_MASK (0x1F00U)
#define NSS_U85_CFG_EXT_CAP_MAX_OUTSTANDING_WRITE_M1_SHIFT (8U)
/*! max_outstanding_write_m1 - Maximum number of outstanding AXI write transactions per port - 1 */
#define NSS_U85_CFG_EXT_CAP_MAX_OUTSTANDING_WRITE_M1(x) (((uint32_t)(((uint32_t)(x)) << NSS_U85_CFG_EXT_CAP_MAX_OUTSTANDING_WRITE_M1_SHIFT)) & NSS_U85_CFG_EXT_CAP_MAX_OUTSTANDING_WRITE_M1_MASK)

#define NSS_U85_CFG_EXT_CAP_MAX_BEATS_MASK       (0x30000U)
#define NSS_U85_CFG_EXT_CAP_MAX_BEATS_SHIFT      (16U)
/*! max_beats - Burst split alignment */
#define NSS_U85_CFG_EXT_CAP_MAX_BEATS(x)         (((uint32_t)(((uint32_t)(x)) << NSS_U85_CFG_EXT_CAP_MAX_BEATS_SHIFT)) & NSS_U85_CFG_EXT_CAP_MAX_BEATS_MASK)
/*! @} */

/*! @name CFG_SRAM_HASH0 - The value of the CFGSRAMHASH0 pins, SRAM AXI port select bit 0 hash */
/*! @{ */

#define NSS_U85_CFG_SRAM_HASH0_ZERO_MASK         (0x3FU)
#define NSS_U85_CFG_SRAM_HASH0_ZERO_SHIFT        (0U)
/*! zero - Must be zero */
#define NSS_U85_CFG_SRAM_HASH0_ZERO(x)           (((uint32_t)(((uint32_t)(x)) << NSS_U85_CFG_SRAM_HASH0_ZERO_SHIFT)) & NSS_U85_CFG_SRAM_HASH0_ZERO_MASK)

#define NSS_U85_CFG_SRAM_HASH0_HASH_MASK         (0xFFFFFFC0U)
#define NSS_U85_CFG_SRAM_HASH0_HASH_SHIFT        (6U)
/*! hash - Hash function */
#define NSS_U85_CFG_SRAM_HASH0_HASH(x)           (((uint32_t)(((uint32_t)(x)) << NSS_U85_CFG_SRAM_HASH0_HASH_SHIFT)) & NSS_U85_CFG_SRAM_HASH0_HASH_MASK)
/*! @} */

/*! @name CFG_SRAM_HASH0_HI - The value of the CFGSRAMHASH0 pins, SRAM AXI port select bit 0 hash (higher bits) */
/*! @{ */

#define NSS_U85_CFG_SRAM_HASH0_HI_HASH_MASK      (0xFFU)
#define NSS_U85_CFG_SRAM_HASH0_HI_HASH_SHIFT     (0U)
/*! hash - Hash function */
#define NSS_U85_CFG_SRAM_HASH0_HI_HASH(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_CFG_SRAM_HASH0_HI_HASH_SHIFT)) & NSS_U85_CFG_SRAM_HASH0_HI_HASH_MASK)
/*! @} */

/*! @name CFG_SRAM_HASH1 - The value of the CFGSRAMHASH1 pins, SRAM AXI port select bit 1 hash */
/*! @{ */

#define NSS_U85_CFG_SRAM_HASH1_ZERO_MASK         (0x3FU)
#define NSS_U85_CFG_SRAM_HASH1_ZERO_SHIFT        (0U)
/*! zero - Must be zero */
#define NSS_U85_CFG_SRAM_HASH1_ZERO(x)           (((uint32_t)(((uint32_t)(x)) << NSS_U85_CFG_SRAM_HASH1_ZERO_SHIFT)) & NSS_U85_CFG_SRAM_HASH1_ZERO_MASK)

#define NSS_U85_CFG_SRAM_HASH1_HASH_MASK         (0xFFFFFFC0U)
#define NSS_U85_CFG_SRAM_HASH1_HASH_SHIFT        (6U)
/*! hash - Hash function */
#define NSS_U85_CFG_SRAM_HASH1_HASH(x)           (((uint32_t)(((uint32_t)(x)) << NSS_U85_CFG_SRAM_HASH1_HASH_SHIFT)) & NSS_U85_CFG_SRAM_HASH1_HASH_MASK)
/*! @} */

/*! @name CFG_SRAM_HASH1_HI - The value of the CFGSRAMHASH1 pins, SRAM AXI port select bit 1 hash (higher bits) */
/*! @{ */

#define NSS_U85_CFG_SRAM_HASH1_HI_HASH_MASK      (0xFFU)
#define NSS_U85_CFG_SRAM_HASH1_HI_HASH_SHIFT     (0U)
/*! hash - Hash function */
#define NSS_U85_CFG_SRAM_HASH1_HI_HASH(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_CFG_SRAM_HASH1_HI_HASH_SHIFT)) & NSS_U85_CFG_SRAM_HASH1_HI_HASH_MASK)
/*! @} */

/*! @name CFG_EXT_HASH0 - The value of the CFGEXTHASH0 pins, EXT AXI port select bit 0 hash */
/*! @{ */

#define NSS_U85_CFG_EXT_HASH0_ZERO_MASK          (0x3FU)
#define NSS_U85_CFG_EXT_HASH0_ZERO_SHIFT         (0U)
/*! zero - Must be zero */
#define NSS_U85_CFG_EXT_HASH0_ZERO(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_CFG_EXT_HASH0_ZERO_SHIFT)) & NSS_U85_CFG_EXT_HASH0_ZERO_MASK)

#define NSS_U85_CFG_EXT_HASH0_HASH_MASK          (0xFFFFFFC0U)
#define NSS_U85_CFG_EXT_HASH0_HASH_SHIFT         (6U)
/*! hash - Hash function */
#define NSS_U85_CFG_EXT_HASH0_HASH(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_CFG_EXT_HASH0_HASH_SHIFT)) & NSS_U85_CFG_EXT_HASH0_HASH_MASK)
/*! @} */

/*! @name CFG_EXT_HASH0_HI - The value of the CFGEXTHASH0 pins, EXT AXI port select bit 0 hash (higher bits) */
/*! @{ */

#define NSS_U85_CFG_EXT_HASH0_HI_HASH_MASK       (0xFFU)
#define NSS_U85_CFG_EXT_HASH0_HI_HASH_SHIFT      (0U)
/*! hash - Hash function */
#define NSS_U85_CFG_EXT_HASH0_HI_HASH(x)         (((uint32_t)(((uint32_t)(x)) << NSS_U85_CFG_EXT_HASH0_HI_HASH_SHIFT)) & NSS_U85_CFG_EXT_HASH0_HI_HASH_MASK)
/*! @} */

/*! @name BASEP0 - AXI base address of the respective region number 0 - 7 */
/*! @{ */

#define NSS_U85_BASEP0_OFFSET_MASK               (0xFFFFFFFFU)
#define NSS_U85_BASEP0_OFFSET_SHIFT              (0U)
/*! offset - Offset */
#define NSS_U85_BASEP0_OFFSET(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_BASEP0_OFFSET_SHIFT)) & NSS_U85_BASEP0_OFFSET_MASK)
/*! @} */

/*! @name BASEP0_HI - AXI base address of the respective region number 0 - 7 (higher bits) */
/*! @{ */

#define NSS_U85_BASEP0_HI_OFFSET_MASK            (0xFFU)
#define NSS_U85_BASEP0_HI_OFFSET_SHIFT           (0U)
/*! offset - Offset */
#define NSS_U85_BASEP0_HI_OFFSET(x)              (((uint32_t)(((uint32_t)(x)) << NSS_U85_BASEP0_HI_OFFSET_SHIFT)) & NSS_U85_BASEP0_HI_OFFSET_MASK)
/*! @} */

/*! @name BASEP1 - AXI base address of the respective region number 0 - 7 */
/*! @{ */

#define NSS_U85_BASEP1_OFFSET_MASK               (0xFFFFFFFFU)
#define NSS_U85_BASEP1_OFFSET_SHIFT              (0U)
/*! offset - Offset */
#define NSS_U85_BASEP1_OFFSET(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_BASEP1_OFFSET_SHIFT)) & NSS_U85_BASEP1_OFFSET_MASK)
/*! @} */

/*! @name BASEP1_HI - AXI base address of the respective region number 0 - 7 (higher bits) */
/*! @{ */

#define NSS_U85_BASEP1_HI_OFFSET_MASK            (0xFFU)
#define NSS_U85_BASEP1_HI_OFFSET_SHIFT           (0U)
/*! offset - Offset */
#define NSS_U85_BASEP1_HI_OFFSET(x)              (((uint32_t)(((uint32_t)(x)) << NSS_U85_BASEP1_HI_OFFSET_SHIFT)) & NSS_U85_BASEP1_HI_OFFSET_MASK)
/*! @} */

/*! @name BASEP2 - AXI base address of the respective region number 0 - 7 */
/*! @{ */

#define NSS_U85_BASEP2_OFFSET_MASK               (0xFFFFFFFFU)
#define NSS_U85_BASEP2_OFFSET_SHIFT              (0U)
/*! offset - Offset */
#define NSS_U85_BASEP2_OFFSET(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_BASEP2_OFFSET_SHIFT)) & NSS_U85_BASEP2_OFFSET_MASK)
/*! @} */

/*! @name BASEP2_HI - AXI base address of the respective region number 0 - 7 (higher bits) */
/*! @{ */

#define NSS_U85_BASEP2_HI_OFFSET_MASK            (0xFFU)
#define NSS_U85_BASEP2_HI_OFFSET_SHIFT           (0U)
/*! offset - Offset */
#define NSS_U85_BASEP2_HI_OFFSET(x)              (((uint32_t)(((uint32_t)(x)) << NSS_U85_BASEP2_HI_OFFSET_SHIFT)) & NSS_U85_BASEP2_HI_OFFSET_MASK)
/*! @} */

/*! @name BASEP3 - AXI base address of the respective region number 0 - 7 */
/*! @{ */

#define NSS_U85_BASEP3_OFFSET_MASK               (0xFFFFFFFFU)
#define NSS_U85_BASEP3_OFFSET_SHIFT              (0U)
/*! offset - Offset */
#define NSS_U85_BASEP3_OFFSET(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_BASEP3_OFFSET_SHIFT)) & NSS_U85_BASEP3_OFFSET_MASK)
/*! @} */

/*! @name BASEP3_HI - AXI base address of the respective region number 0 - 7 (higher bits) */
/*! @{ */

#define NSS_U85_BASEP3_HI_OFFSET_MASK            (0xFFU)
#define NSS_U85_BASEP3_HI_OFFSET_SHIFT           (0U)
/*! offset - Offset */
#define NSS_U85_BASEP3_HI_OFFSET(x)              (((uint32_t)(((uint32_t)(x)) << NSS_U85_BASEP3_HI_OFFSET_SHIFT)) & NSS_U85_BASEP3_HI_OFFSET_MASK)
/*! @} */

/*! @name BASEP4 - AXI base address of the respective region number 0 - 7 */
/*! @{ */

#define NSS_U85_BASEP4_OFFSET_MASK               (0xFFFFFFFFU)
#define NSS_U85_BASEP4_OFFSET_SHIFT              (0U)
/*! offset - Offset */
#define NSS_U85_BASEP4_OFFSET(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_BASEP4_OFFSET_SHIFT)) & NSS_U85_BASEP4_OFFSET_MASK)
/*! @} */

/*! @name BASEP4_HI - AXI base address of the respective region number 0 - 7 (higher bits) */
/*! @{ */

#define NSS_U85_BASEP4_HI_OFFSET_MASK            (0xFFU)
#define NSS_U85_BASEP4_HI_OFFSET_SHIFT           (0U)
/*! offset - Offset */
#define NSS_U85_BASEP4_HI_OFFSET(x)              (((uint32_t)(((uint32_t)(x)) << NSS_U85_BASEP4_HI_OFFSET_SHIFT)) & NSS_U85_BASEP4_HI_OFFSET_MASK)
/*! @} */

/*! @name BASEP5 - AXI base address of the respective region number 0 - 7 */
/*! @{ */

#define NSS_U85_BASEP5_OFFSET_MASK               (0xFFFFFFFFU)
#define NSS_U85_BASEP5_OFFSET_SHIFT              (0U)
/*! offset - Offset */
#define NSS_U85_BASEP5_OFFSET(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_BASEP5_OFFSET_SHIFT)) & NSS_U85_BASEP5_OFFSET_MASK)
/*! @} */

/*! @name BASEP5_HI - AXI base address of the respective region number 0 - 7 (higher bits) */
/*! @{ */

#define NSS_U85_BASEP5_HI_OFFSET_MASK            (0xFFU)
#define NSS_U85_BASEP5_HI_OFFSET_SHIFT           (0U)
/*! offset - Offset */
#define NSS_U85_BASEP5_HI_OFFSET(x)              (((uint32_t)(((uint32_t)(x)) << NSS_U85_BASEP5_HI_OFFSET_SHIFT)) & NSS_U85_BASEP5_HI_OFFSET_MASK)
/*! @} */

/*! @name BASEP6 - AXI base address of the respective region number 0 - 7 */
/*! @{ */

#define NSS_U85_BASEP6_OFFSET_MASK               (0xFFFFFFFFU)
#define NSS_U85_BASEP6_OFFSET_SHIFT              (0U)
/*! offset - Offset */
#define NSS_U85_BASEP6_OFFSET(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_BASEP6_OFFSET_SHIFT)) & NSS_U85_BASEP6_OFFSET_MASK)
/*! @} */

/*! @name BASEP6_HI - AXI base address of the respective region number 0 - 7 (higher bits) */
/*! @{ */

#define NSS_U85_BASEP6_HI_OFFSET_MASK            (0xFFU)
#define NSS_U85_BASEP6_HI_OFFSET_SHIFT           (0U)
/*! offset - Offset */
#define NSS_U85_BASEP6_HI_OFFSET(x)              (((uint32_t)(((uint32_t)(x)) << NSS_U85_BASEP6_HI_OFFSET_SHIFT)) & NSS_U85_BASEP6_HI_OFFSET_MASK)
/*! @} */

/*! @name BASEP7 - AXI base address of the respective region number 0 - 7 */
/*! @{ */

#define NSS_U85_BASEP7_OFFSET_MASK               (0xFFFFFFFFU)
#define NSS_U85_BASEP7_OFFSET_SHIFT              (0U)
/*! offset - Offset */
#define NSS_U85_BASEP7_OFFSET(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_BASEP7_OFFSET_SHIFT)) & NSS_U85_BASEP7_OFFSET_MASK)
/*! @} */

/*! @name BASEP7_HI - AXI base address of the respective region number 0 - 7 (higher bits) */
/*! @{ */

#define NSS_U85_BASEP7_HI_OFFSET_MASK            (0xFFU)
#define NSS_U85_BASEP7_HI_OFFSET_SHIFT           (0U)
/*! offset - Offset */
#define NSS_U85_BASEP7_HI_OFFSET(x)              (((uint32_t)(((uint32_t)(x)) << NSS_U85_BASEP7_HI_OFFSET_SHIFT)) & NSS_U85_BASEP7_HI_OFFSET_MASK)
/*! @} */

/*! @name PID4 - Peripheral ID byte 4 (Arm=code 4) */
/*! @{ */

#define NSS_U85_PID4_PID4_MASK                   (0xFFFFFFFFU)
#define NSS_U85_PID4_PID4_SHIFT                  (0U)
/*! PID4 - Byte 4 of Peripheral ID (Lower 8 bits valid) */
#define NSS_U85_PID4_PID4(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_U85_PID4_PID4_SHIFT)) & NSS_U85_PID4_PID4_MASK)
/*! @} */

/*! @name PID5 - Peripheral ID byte 5 (reserved) */
/*! @{ */

#define NSS_U85_PID5_PID5_MASK                   (0xFFFFFFFFU)
#define NSS_U85_PID5_PID5_SHIFT                  (0U)
/*! PID5 - Byte 5 of Peripheral ID (Lower 8 bits valid) */
#define NSS_U85_PID5_PID5(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_U85_PID5_PID5_SHIFT)) & NSS_U85_PID5_PID5_MASK)
/*! @} */

/*! @name PID6 - Peripheral ID byte 6 (reserved) */
/*! @{ */

#define NSS_U85_PID6_PID6_MASK                   (0xFFFFFFFFU)
#define NSS_U85_PID6_PID6_SHIFT                  (0U)
/*! PID6 - Byte 6 of Peripheral ID (Lower 8 bits valid) */
#define NSS_U85_PID6_PID6(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_U85_PID6_PID6_SHIFT)) & NSS_U85_PID6_PID6_MASK)
/*! @} */

/*! @name PID7 - Peripheral ID byte 7 (reserved) */
/*! @{ */

#define NSS_U85_PID7_PID7_MASK                   (0xFFFFFFFFU)
#define NSS_U85_PID7_PID7_SHIFT                  (0U)
/*! PID7 - Byte 7 of Peripheral ID (Lower 8 bits valid) */
#define NSS_U85_PID7_PID7(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_U85_PID7_PID7_SHIFT)) & NSS_U85_PID7_PID7_MASK)
/*! @} */

/*! @name PID0 - Peripheral ID byte 0. This is bits[7:0] of the part number */
/*! @{ */

#define NSS_U85_PID0_PID0_MASK                   (0xFFFFFFFFU)
#define NSS_U85_PID0_PID0_SHIFT                  (0U)
/*! PID0 - Byte 0 of Peripheral ID (Lower 8 bits valid) */
#define NSS_U85_PID0_PID0(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_U85_PID0_PID0_SHIFT)) & NSS_U85_PID0_PID0_MASK)
/*! @} */

/*! @name PID1 - Peripheral ID byte 1. This is bits[11:8] of the part number in bits[3:0], and bits[3:0] of the Arm ID in bits[7:4] */
/*! @{ */

#define NSS_U85_PID1_PID1_MASK                   (0xFFFFFFFFU)
#define NSS_U85_PID1_PID1_SHIFT                  (0U)
/*! PID1 - Byte 1 of Peripheral ID (Lower 8 bits valid) */
#define NSS_U85_PID1_PID1(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_U85_PID1_PID1_SHIFT)) & NSS_U85_PID1_PID1_MASK)
/*! @} */

/*! @name PID2 - Peripheral ID byte 2. This is bits[6:4] of the Arm ID in bits[2:0], and bit 3 indicates format B */
/*! @{ */

#define NSS_U85_PID2_PID2_MASK                   (0xFFFFFFFFU)
#define NSS_U85_PID2_PID2_SHIFT                  (0U)
/*! PID2 - Byte 2 of Peripheral ID (Lower 8 bits valid) */
#define NSS_U85_PID2_PID2(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_U85_PID2_PID2_SHIFT)) & NSS_U85_PID2_PID2_MASK)
/*! @} */

/*! @name PID3 - Peripheral ID byte 3 */
/*! @{ */

#define NSS_U85_PID3_PID3_MASK                   (0xFFFFFFFFU)
#define NSS_U85_PID3_PID3_SHIFT                  (0U)
/*! PID3 - Byte 1 of Peripheral ID (Lower 8 bits valid) */
#define NSS_U85_PID3_PID3(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_U85_PID3_PID3_SHIFT)) & NSS_U85_PID3_PID3_MASK)
/*! @} */

/*! @name CID0 - Component ID byte 0 */
/*! @{ */

#define NSS_U85_CID0_CID0_MASK                   (0xFFFFFFFFU)
#define NSS_U85_CID0_CID0_SHIFT                  (0U)
/*! CID0 - Byte 0 of Component ID (Lower 8 bits valid) */
#define NSS_U85_CID0_CID0(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_U85_CID0_CID0_SHIFT)) & NSS_U85_CID0_CID0_MASK)
/*! @} */

/*! @name CID1 - Component ID byte 1 */
/*! @{ */

#define NSS_U85_CID1_CID1_MASK                   (0xFFFFFFFFU)
#define NSS_U85_CID1_CID1_SHIFT                  (0U)
/*! CID1 - Byte 1 of Component ID (Lower 8 bits valid) */
#define NSS_U85_CID1_CID1(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_U85_CID1_CID1_SHIFT)) & NSS_U85_CID1_CID1_MASK)
/*! @} */

/*! @name CID2 - Component ID byte 2 */
/*! @{ */

#define NSS_U85_CID2_CID2_MASK                   (0xFFFFFFFFU)
#define NSS_U85_CID2_CID2_SHIFT                  (0U)
/*! CID2 - Byte 2 of Component ID (Lower 8 bits valid) */
#define NSS_U85_CID2_CID2(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_U85_CID2_CID2_SHIFT)) & NSS_U85_CID2_CID2_MASK)
/*! @} */

/*! @name CID3 - Component ID byte 3 */
/*! @{ */

#define NSS_U85_CID3_CID3_MASK                   (0xFFFFFFFFU)
#define NSS_U85_CID3_CID3_SHIFT                  (0U)
/*! CID3 - Byte 3 of Component ID (Lower 8 bits valid) */
#define NSS_U85_CID3_CID3(x)                     (((uint32_t)(((uint32_t)(x)) << NSS_U85_CID3_CID3_SHIFT)) & NSS_U85_CID3_CID3_MASK)
/*! @} */

/*! @name PMCR - PMU register control */
/*! @{ */

#define NSS_U85_PMCR_CNT_EN_MASK                 (0x1U)
#define NSS_U85_PMCR_CNT_EN_SHIFT                (0U)
/*! cnt_en - Enable counter */
#define NSS_U85_PMCR_CNT_EN(x)                   (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCR_CNT_EN_SHIFT)) & NSS_U85_PMCR_CNT_EN_MASK)

#define NSS_U85_PMCR_EVENT_CNT_RST_MASK          (0x2U)
#define NSS_U85_PMCR_EVENT_CNT_RST_SHIFT         (1U)
/*! event_cnt_rst - Reset event counter */
#define NSS_U85_PMCR_EVENT_CNT_RST(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCR_EVENT_CNT_RST_SHIFT)) & NSS_U85_PMCR_EVENT_CNT_RST_MASK)

#define NSS_U85_PMCR_CYCLE_CNT_RST_MASK          (0x4U)
#define NSS_U85_PMCR_CYCLE_CNT_RST_SHIFT         (2U)
/*! cycle_cnt_rst - Reset cycle counter */
#define NSS_U85_PMCR_CYCLE_CNT_RST(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCR_CYCLE_CNT_RST_SHIFT)) & NSS_U85_PMCR_CYCLE_CNT_RST_MASK)

#define NSS_U85_PMCR_MASK_EN_MASK                (0x8U)
#define NSS_U85_PMCR_MASK_EN_SHIFT               (3U)
/*! mask_en - PMU can be enabled/disabled by command stream operation NPU_OP_PMU_MASK */
#define NSS_U85_PMCR_MASK_EN(x)                  (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCR_MASK_EN_SHIFT)) & NSS_U85_PMCR_MASK_EN_MASK)

#define NSS_U85_PMCR_NUM_EVENT_CNT_MASK          (0xF800U)
#define NSS_U85_PMCR_NUM_EVENT_CNT_SHIFT         (11U)
/*! num_event_cnt - Number of event counters */
#define NSS_U85_PMCR_NUM_EVENT_CNT(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCR_NUM_EVENT_CNT_SHIFT)) & NSS_U85_PMCR_NUM_EVENT_CNT_MASK)
/*! @} */

/*! @name PMCNTENSET - Count enable set register */
/*! @{ */

#define NSS_U85_PMCNTENSET_EVENT_CNT_0_MASK      (0x1U)
#define NSS_U85_PMCNTENSET_EVENT_CNT_0_SHIFT     (0U)
/*! EVENT_CNT_0 - Event counter enable bit for PMEVCNTR0 */
#define NSS_U85_PMCNTENSET_EVENT_CNT_0(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENSET_EVENT_CNT_0_SHIFT)) & NSS_U85_PMCNTENSET_EVENT_CNT_0_MASK)

#define NSS_U85_PMCNTENSET_EVENT_CNT_1_MASK      (0x2U)
#define NSS_U85_PMCNTENSET_EVENT_CNT_1_SHIFT     (1U)
/*! EVENT_CNT_1 - Event counter enable bit for PMEVCNTR1 */
#define NSS_U85_PMCNTENSET_EVENT_CNT_1(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENSET_EVENT_CNT_1_SHIFT)) & NSS_U85_PMCNTENSET_EVENT_CNT_1_MASK)

#define NSS_U85_PMCNTENSET_EVENT_CNT_2_MASK      (0x4U)
#define NSS_U85_PMCNTENSET_EVENT_CNT_2_SHIFT     (2U)
/*! EVENT_CNT_2 - Event counter enable bit for PMEVCNTR2 */
#define NSS_U85_PMCNTENSET_EVENT_CNT_2(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENSET_EVENT_CNT_2_SHIFT)) & NSS_U85_PMCNTENSET_EVENT_CNT_2_MASK)

#define NSS_U85_PMCNTENSET_EVENT_CNT_3_MASK      (0x8U)
#define NSS_U85_PMCNTENSET_EVENT_CNT_3_SHIFT     (3U)
/*! EVENT_CNT_3 - Event counter enable bit for PMEVCNTR3 */
#define NSS_U85_PMCNTENSET_EVENT_CNT_3(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENSET_EVENT_CNT_3_SHIFT)) & NSS_U85_PMCNTENSET_EVENT_CNT_3_MASK)

#define NSS_U85_PMCNTENSET_EVENT_CNT_4_MASK      (0x10U)
#define NSS_U85_PMCNTENSET_EVENT_CNT_4_SHIFT     (4U)
/*! EVENT_CNT_4 - Event counter enable bit for PMEVCNTR4 */
#define NSS_U85_PMCNTENSET_EVENT_CNT_4(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENSET_EVENT_CNT_4_SHIFT)) & NSS_U85_PMCNTENSET_EVENT_CNT_4_MASK)

#define NSS_U85_PMCNTENSET_EVENT_CNT_5_MASK      (0x20U)
#define NSS_U85_PMCNTENSET_EVENT_CNT_5_SHIFT     (5U)
/*! EVENT_CNT_5 - Event counter enable bit for PMEVCNTR5 */
#define NSS_U85_PMCNTENSET_EVENT_CNT_5(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENSET_EVENT_CNT_5_SHIFT)) & NSS_U85_PMCNTENSET_EVENT_CNT_5_MASK)

#define NSS_U85_PMCNTENSET_EVENT_CNT_6_MASK      (0x40U)
#define NSS_U85_PMCNTENSET_EVENT_CNT_6_SHIFT     (6U)
/*! EVENT_CNT_6 - Event counter enable bit for PMEVCNTR6 */
#define NSS_U85_PMCNTENSET_EVENT_CNT_6(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENSET_EVENT_CNT_6_SHIFT)) & NSS_U85_PMCNTENSET_EVENT_CNT_6_MASK)

#define NSS_U85_PMCNTENSET_EVENT_CNT_7_MASK      (0x80U)
#define NSS_U85_PMCNTENSET_EVENT_CNT_7_SHIFT     (7U)
/*! EVENT_CNT_7 - Event counter enable bit for PMEVCNTR7 */
#define NSS_U85_PMCNTENSET_EVENT_CNT_7(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENSET_EVENT_CNT_7_SHIFT)) & NSS_U85_PMCNTENSET_EVENT_CNT_7_MASK)

#define NSS_U85_PMCNTENSET_CYCLE_CNT_MASK        (0x80000000U)
#define NSS_U85_PMCNTENSET_CYCLE_CNT_SHIFT       (31U)
/*! CYCLE_CNT - PMCCNTR enable bit */
#define NSS_U85_PMCNTENSET_CYCLE_CNT(x)          (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENSET_CYCLE_CNT_SHIFT)) & NSS_U85_PMCNTENSET_CYCLE_CNT_MASK)
/*! @} */

/*! @name PMCNTENCLR - Count enable clear register */
/*! @{ */

#define NSS_U85_PMCNTENCLR_EVENT_CNT_0_MASK      (0x1U)
#define NSS_U85_PMCNTENCLR_EVENT_CNT_0_SHIFT     (0U)
/*! EVENT_CNT_0 - Event counter disable bit for PMEVCNTR0 */
#define NSS_U85_PMCNTENCLR_EVENT_CNT_0(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENCLR_EVENT_CNT_0_SHIFT)) & NSS_U85_PMCNTENCLR_EVENT_CNT_0_MASK)

#define NSS_U85_PMCNTENCLR_EVENT_CNT_1_MASK      (0x2U)
#define NSS_U85_PMCNTENCLR_EVENT_CNT_1_SHIFT     (1U)
/*! EVENT_CNT_1 - Event counter disable bit for PMEVCNTR1 */
#define NSS_U85_PMCNTENCLR_EVENT_CNT_1(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENCLR_EVENT_CNT_1_SHIFT)) & NSS_U85_PMCNTENCLR_EVENT_CNT_1_MASK)

#define NSS_U85_PMCNTENCLR_EVENT_CNT_2_MASK      (0x4U)
#define NSS_U85_PMCNTENCLR_EVENT_CNT_2_SHIFT     (2U)
/*! EVENT_CNT_2 - Event counter disable bit for PMEVCNTR2 */
#define NSS_U85_PMCNTENCLR_EVENT_CNT_2(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENCLR_EVENT_CNT_2_SHIFT)) & NSS_U85_PMCNTENCLR_EVENT_CNT_2_MASK)

#define NSS_U85_PMCNTENCLR_EVENT_CNT_3_MASK      (0x8U)
#define NSS_U85_PMCNTENCLR_EVENT_CNT_3_SHIFT     (3U)
/*! EVENT_CNT_3 - Event counter disable bit for PMEVCNTR3 */
#define NSS_U85_PMCNTENCLR_EVENT_CNT_3(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENCLR_EVENT_CNT_3_SHIFT)) & NSS_U85_PMCNTENCLR_EVENT_CNT_3_MASK)

#define NSS_U85_PMCNTENCLR_EVENT_CNT_4_MASK      (0x10U)
#define NSS_U85_PMCNTENCLR_EVENT_CNT_4_SHIFT     (4U)
/*! EVENT_CNT_4 - Event counter disable bit for PMEVCNTR4 */
#define NSS_U85_PMCNTENCLR_EVENT_CNT_4(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENCLR_EVENT_CNT_4_SHIFT)) & NSS_U85_PMCNTENCLR_EVENT_CNT_4_MASK)

#define NSS_U85_PMCNTENCLR_EVENT_CNT_5_MASK      (0x20U)
#define NSS_U85_PMCNTENCLR_EVENT_CNT_5_SHIFT     (5U)
/*! EVENT_CNT_5 - Event counter disable bit for PMEVCNTR5 */
#define NSS_U85_PMCNTENCLR_EVENT_CNT_5(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENCLR_EVENT_CNT_5_SHIFT)) & NSS_U85_PMCNTENCLR_EVENT_CNT_5_MASK)

#define NSS_U85_PMCNTENCLR_EVENT_CNT_6_MASK      (0x40U)
#define NSS_U85_PMCNTENCLR_EVENT_CNT_6_SHIFT     (6U)
/*! EVENT_CNT_6 - Event counter disable bit for PMEVCNTR6 */
#define NSS_U85_PMCNTENCLR_EVENT_CNT_6(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENCLR_EVENT_CNT_6_SHIFT)) & NSS_U85_PMCNTENCLR_EVENT_CNT_6_MASK)

#define NSS_U85_PMCNTENCLR_EVENT_CNT_7_MASK      (0x80U)
#define NSS_U85_PMCNTENCLR_EVENT_CNT_7_SHIFT     (7U)
/*! EVENT_CNT_7 - Event counter disable bit for PMEVCNTR7 */
#define NSS_U85_PMCNTENCLR_EVENT_CNT_7(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENCLR_EVENT_CNT_7_SHIFT)) & NSS_U85_PMCNTENCLR_EVENT_CNT_7_MASK)

#define NSS_U85_PMCNTENCLR_CYCLE_CNT_MASK        (0x80000000U)
#define NSS_U85_PMCNTENCLR_CYCLE_CNT_SHIFT       (31U)
/*! CYCLE_CNT - PMCCNTR disable bit */
#define NSS_U85_PMCNTENCLR_CYCLE_CNT(x)          (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCNTENCLR_CYCLE_CNT_SHIFT)) & NSS_U85_PMCNTENCLR_CYCLE_CNT_MASK)
/*! @} */

/*! @name PMOVSSET - Overflow flag status set register */
/*! @{ */

#define NSS_U85_PMOVSSET_EVENT_CNT_0_OVF_MASK    (0x1U)
#define NSS_U85_PMOVSSET_EVENT_CNT_0_OVF_SHIFT   (0U)
/*! EVENT_CNT_0_OVF - Event counter overflow set bit for PMEVCNTR0 */
#define NSS_U85_PMOVSSET_EVENT_CNT_0_OVF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSSET_EVENT_CNT_0_OVF_SHIFT)) & NSS_U85_PMOVSSET_EVENT_CNT_0_OVF_MASK)

#define NSS_U85_PMOVSSET_EVENT_CNT_1_OVF_MASK    (0x2U)
#define NSS_U85_PMOVSSET_EVENT_CNT_1_OVF_SHIFT   (1U)
/*! EVENT_CNT_1_OVF - Event counter overflow set bit for PMEVCNTR1 */
#define NSS_U85_PMOVSSET_EVENT_CNT_1_OVF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSSET_EVENT_CNT_1_OVF_SHIFT)) & NSS_U85_PMOVSSET_EVENT_CNT_1_OVF_MASK)

#define NSS_U85_PMOVSSET_EVENT_CNT_2_OVF_MASK    (0x4U)
#define NSS_U85_PMOVSSET_EVENT_CNT_2_OVF_SHIFT   (2U)
/*! EVENT_CNT_2_OVF - Event counter overflow set bit for PMEVCNTR2 */
#define NSS_U85_PMOVSSET_EVENT_CNT_2_OVF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSSET_EVENT_CNT_2_OVF_SHIFT)) & NSS_U85_PMOVSSET_EVENT_CNT_2_OVF_MASK)

#define NSS_U85_PMOVSSET_EVENT_CNT_3_OVF_MASK    (0x8U)
#define NSS_U85_PMOVSSET_EVENT_CNT_3_OVF_SHIFT   (3U)
/*! EVENT_CNT_3_OVF - Event counter overflow set bit for PMEVCNTR3 */
#define NSS_U85_PMOVSSET_EVENT_CNT_3_OVF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSSET_EVENT_CNT_3_OVF_SHIFT)) & NSS_U85_PMOVSSET_EVENT_CNT_3_OVF_MASK)

#define NSS_U85_PMOVSSET_EVENT_CNT_4_OVF_MASK    (0x10U)
#define NSS_U85_PMOVSSET_EVENT_CNT_4_OVF_SHIFT   (4U)
/*! EVENT_CNT_4_OVF - Event counter overflow set bit for PMEVCNTR4 */
#define NSS_U85_PMOVSSET_EVENT_CNT_4_OVF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSSET_EVENT_CNT_4_OVF_SHIFT)) & NSS_U85_PMOVSSET_EVENT_CNT_4_OVF_MASK)

#define NSS_U85_PMOVSSET_EVENT_CNT_5_OVF_MASK    (0x20U)
#define NSS_U85_PMOVSSET_EVENT_CNT_5_OVF_SHIFT   (5U)
/*! EVENT_CNT_5_OVF - Event counter overflow set bit for PMEVCNTR5 */
#define NSS_U85_PMOVSSET_EVENT_CNT_5_OVF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSSET_EVENT_CNT_5_OVF_SHIFT)) & NSS_U85_PMOVSSET_EVENT_CNT_5_OVF_MASK)

#define NSS_U85_PMOVSSET_EVENT_CNT_6_OVF_MASK    (0x40U)
#define NSS_U85_PMOVSSET_EVENT_CNT_6_OVF_SHIFT   (6U)
/*! EVENT_CNT_6_OVF - Event counter overflow set bit for PMEVCNTR6 */
#define NSS_U85_PMOVSSET_EVENT_CNT_6_OVF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSSET_EVENT_CNT_6_OVF_SHIFT)) & NSS_U85_PMOVSSET_EVENT_CNT_6_OVF_MASK)

#define NSS_U85_PMOVSSET_EVENT_CNT_7_OVF_MASK    (0x80U)
#define NSS_U85_PMOVSSET_EVENT_CNT_7_OVF_SHIFT   (7U)
/*! EVENT_CNT_7_OVF - Event counter overflow set bit for PMEVCNTR7 */
#define NSS_U85_PMOVSSET_EVENT_CNT_7_OVF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSSET_EVENT_CNT_7_OVF_SHIFT)) & NSS_U85_PMOVSSET_EVENT_CNT_7_OVF_MASK)

#define NSS_U85_PMOVSSET_CYCLE_CNT_OVF_MASK      (0x80000000U)
#define NSS_U85_PMOVSSET_CYCLE_CNT_OVF_SHIFT     (31U)
/*! CYCLE_CNT_OVF - PMCCNTR overflow set bit */
#define NSS_U85_PMOVSSET_CYCLE_CNT_OVF(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSSET_CYCLE_CNT_OVF_SHIFT)) & NSS_U85_PMOVSSET_CYCLE_CNT_OVF_MASK)
/*! @} */

/*! @name PMOVSCLR - Overflow flag status clear register */
/*! @{ */

#define NSS_U85_PMOVSCLR_EVENT_CNT_0_OVF_MASK    (0x1U)
#define NSS_U85_PMOVSCLR_EVENT_CNT_0_OVF_SHIFT   (0U)
/*! EVENT_CNT_0_OVF - Event counter overflow clear bit for PMEVCNTR0 */
#define NSS_U85_PMOVSCLR_EVENT_CNT_0_OVF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSCLR_EVENT_CNT_0_OVF_SHIFT)) & NSS_U85_PMOVSCLR_EVENT_CNT_0_OVF_MASK)

#define NSS_U85_PMOVSCLR_EVENT_CNT_1_OVF_MASK    (0x2U)
#define NSS_U85_PMOVSCLR_EVENT_CNT_1_OVF_SHIFT   (1U)
/*! EVENT_CNT_1_OVF - Event counter overflow clear bit for PMEVCNTR1 */
#define NSS_U85_PMOVSCLR_EVENT_CNT_1_OVF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSCLR_EVENT_CNT_1_OVF_SHIFT)) & NSS_U85_PMOVSCLR_EVENT_CNT_1_OVF_MASK)

#define NSS_U85_PMOVSCLR_EVENT_CNT_2_OVF_MASK    (0x4U)
#define NSS_U85_PMOVSCLR_EVENT_CNT_2_OVF_SHIFT   (2U)
/*! EVENT_CNT_2_OVF - Event counter overflow clear bit for PMEVCNTR2 */
#define NSS_U85_PMOVSCLR_EVENT_CNT_2_OVF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSCLR_EVENT_CNT_2_OVF_SHIFT)) & NSS_U85_PMOVSCLR_EVENT_CNT_2_OVF_MASK)

#define NSS_U85_PMOVSCLR_EVENT_CNT_3_OVF_MASK    (0x8U)
#define NSS_U85_PMOVSCLR_EVENT_CNT_3_OVF_SHIFT   (3U)
/*! EVENT_CNT_3_OVF - Event counter overflow clear bit for PMEVCNTR3 */
#define NSS_U85_PMOVSCLR_EVENT_CNT_3_OVF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSCLR_EVENT_CNT_3_OVF_SHIFT)) & NSS_U85_PMOVSCLR_EVENT_CNT_3_OVF_MASK)

#define NSS_U85_PMOVSCLR_EVENT_CNT_4_OVF_MASK    (0x10U)
#define NSS_U85_PMOVSCLR_EVENT_CNT_4_OVF_SHIFT   (4U)
/*! EVENT_CNT_4_OVF - Event counter overflow clear bit for PMEVCNTR4 */
#define NSS_U85_PMOVSCLR_EVENT_CNT_4_OVF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSCLR_EVENT_CNT_4_OVF_SHIFT)) & NSS_U85_PMOVSCLR_EVENT_CNT_4_OVF_MASK)

#define NSS_U85_PMOVSCLR_EVENT_CNT_5_OVF_MASK    (0x20U)
#define NSS_U85_PMOVSCLR_EVENT_CNT_5_OVF_SHIFT   (5U)
/*! EVENT_CNT_5_OVF - Event counter overflow clear bit for PMEVCNTR5 */
#define NSS_U85_PMOVSCLR_EVENT_CNT_5_OVF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSCLR_EVENT_CNT_5_OVF_SHIFT)) & NSS_U85_PMOVSCLR_EVENT_CNT_5_OVF_MASK)

#define NSS_U85_PMOVSCLR_EVENT_CNT_6_OVF_MASK    (0x40U)
#define NSS_U85_PMOVSCLR_EVENT_CNT_6_OVF_SHIFT   (6U)
/*! EVENT_CNT_6_OVF - Event counter overflow clear bit for PMEVCNTR6 */
#define NSS_U85_PMOVSCLR_EVENT_CNT_6_OVF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSCLR_EVENT_CNT_6_OVF_SHIFT)) & NSS_U85_PMOVSCLR_EVENT_CNT_6_OVF_MASK)

#define NSS_U85_PMOVSCLR_EVENT_CNT_7_OVF_MASK    (0x80U)
#define NSS_U85_PMOVSCLR_EVENT_CNT_7_OVF_SHIFT   (7U)
/*! EVENT_CNT_7_OVF - Event counter overflow clear bit for PMEVCNTR7 */
#define NSS_U85_PMOVSCLR_EVENT_CNT_7_OVF(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSCLR_EVENT_CNT_7_OVF_SHIFT)) & NSS_U85_PMOVSCLR_EVENT_CNT_7_OVF_MASK)

#define NSS_U85_PMOVSCLR_CYCLE_CNT_OVF_MASK      (0x80000000U)
#define NSS_U85_PMOVSCLR_CYCLE_CNT_OVF_SHIFT     (31U)
/*! CYCLE_CNT_OVF - PMCCNTR overflow clear bit */
#define NSS_U85_PMOVSCLR_CYCLE_CNT_OVF(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMOVSCLR_CYCLE_CNT_OVF_SHIFT)) & NSS_U85_PMOVSCLR_CYCLE_CNT_OVF_MASK)
/*! @} */

/*! @name PMINTSET - Interrupt enable set register */
/*! @{ */

#define NSS_U85_PMINTSET_EVENT_CNT_0_INT_MASK    (0x1U)
#define NSS_U85_PMINTSET_EVENT_CNT_0_INT_SHIFT   (0U)
/*! EVENT_CNT_0_INT - Event counter overflow interrupt request enable bit for PMEVCNTR0 */
#define NSS_U85_PMINTSET_EVENT_CNT_0_INT(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTSET_EVENT_CNT_0_INT_SHIFT)) & NSS_U85_PMINTSET_EVENT_CNT_0_INT_MASK)

#define NSS_U85_PMINTSET_EVENT_CNT_1_INT_MASK    (0x2U)
#define NSS_U85_PMINTSET_EVENT_CNT_1_INT_SHIFT   (1U)
/*! EVENT_CNT_1_INT - Event counter overflow interrupt request enable bit for PMEVCNTR1 */
#define NSS_U85_PMINTSET_EVENT_CNT_1_INT(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTSET_EVENT_CNT_1_INT_SHIFT)) & NSS_U85_PMINTSET_EVENT_CNT_1_INT_MASK)

#define NSS_U85_PMINTSET_EVENT_CNT_2_INT_MASK    (0x4U)
#define NSS_U85_PMINTSET_EVENT_CNT_2_INT_SHIFT   (2U)
/*! EVENT_CNT_2_INT - Event counter overflow interrupt request enable bit for PMEVCNTR2 */
#define NSS_U85_PMINTSET_EVENT_CNT_2_INT(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTSET_EVENT_CNT_2_INT_SHIFT)) & NSS_U85_PMINTSET_EVENT_CNT_2_INT_MASK)

#define NSS_U85_PMINTSET_EVENT_CNT_3_INT_MASK    (0x8U)
#define NSS_U85_PMINTSET_EVENT_CNT_3_INT_SHIFT   (3U)
/*! EVENT_CNT_3_INT - Event counter overflow interrupt request enable bit for PMEVCNTR3 */
#define NSS_U85_PMINTSET_EVENT_CNT_3_INT(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTSET_EVENT_CNT_3_INT_SHIFT)) & NSS_U85_PMINTSET_EVENT_CNT_3_INT_MASK)

#define NSS_U85_PMINTSET_EVENT_CNT_4_INT_MASK    (0x10U)
#define NSS_U85_PMINTSET_EVENT_CNT_4_INT_SHIFT   (4U)
/*! EVENT_CNT_4_INT - Event counter overflow interrupt request enable bit for PMEVCNTR4 */
#define NSS_U85_PMINTSET_EVENT_CNT_4_INT(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTSET_EVENT_CNT_4_INT_SHIFT)) & NSS_U85_PMINTSET_EVENT_CNT_4_INT_MASK)

#define NSS_U85_PMINTSET_EVENT_CNT_5_INT_MASK    (0x20U)
#define NSS_U85_PMINTSET_EVENT_CNT_5_INT_SHIFT   (5U)
/*! EVENT_CNT_5_INT - Event counter overflow interrupt request enable bit for PMEVCNTR5 */
#define NSS_U85_PMINTSET_EVENT_CNT_5_INT(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTSET_EVENT_CNT_5_INT_SHIFT)) & NSS_U85_PMINTSET_EVENT_CNT_5_INT_MASK)

#define NSS_U85_PMINTSET_EVENT_CNT_6_INT_MASK    (0x40U)
#define NSS_U85_PMINTSET_EVENT_CNT_6_INT_SHIFT   (6U)
/*! EVENT_CNT_6_INT - Event counter overflow interrupt request enable bit for PMEVCNTR6 */
#define NSS_U85_PMINTSET_EVENT_CNT_6_INT(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTSET_EVENT_CNT_6_INT_SHIFT)) & NSS_U85_PMINTSET_EVENT_CNT_6_INT_MASK)

#define NSS_U85_PMINTSET_EVENT_CNT_7_INT_MASK    (0x80U)
#define NSS_U85_PMINTSET_EVENT_CNT_7_INT_SHIFT   (7U)
/*! EVENT_CNT_7_INT - Event counter overflow interrupt request enable bit for PMEVCNTR7 */
#define NSS_U85_PMINTSET_EVENT_CNT_7_INT(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTSET_EVENT_CNT_7_INT_SHIFT)) & NSS_U85_PMINTSET_EVENT_CNT_7_INT_MASK)

#define NSS_U85_PMINTSET_CYCLE_CNT_INT_MASK      (0x80000000U)
#define NSS_U85_PMINTSET_CYCLE_CNT_INT_SHIFT     (31U)
/*! CYCLE_CNT_INT - PMCCNTR overflow interrupt request enable bit */
#define NSS_U85_PMINTSET_CYCLE_CNT_INT(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTSET_CYCLE_CNT_INT_SHIFT)) & NSS_U85_PMINTSET_CYCLE_CNT_INT_MASK)
/*! @} */

/*! @name PMINTCLR - Interrupt enable clear register */
/*! @{ */

#define NSS_U85_PMINTCLR_EVENT_CNT_0_INT_MASK    (0x1U)
#define NSS_U85_PMINTCLR_EVENT_CNT_0_INT_SHIFT   (0U)
/*! EVENT_CNT_0_INT - Event counter overflow interrupt request disable bit for PMEVCNTR0 */
#define NSS_U85_PMINTCLR_EVENT_CNT_0_INT(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTCLR_EVENT_CNT_0_INT_SHIFT)) & NSS_U85_PMINTCLR_EVENT_CNT_0_INT_MASK)

#define NSS_U85_PMINTCLR_EVENT_CNT_1_INT_MASK    (0x2U)
#define NSS_U85_PMINTCLR_EVENT_CNT_1_INT_SHIFT   (1U)
/*! EVENT_CNT_1_INT - Event counter overflow interrupt request disable bit for PMEVCNTR1 */
#define NSS_U85_PMINTCLR_EVENT_CNT_1_INT(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTCLR_EVENT_CNT_1_INT_SHIFT)) & NSS_U85_PMINTCLR_EVENT_CNT_1_INT_MASK)

#define NSS_U85_PMINTCLR_EVENT_CNT_2_INT_MASK    (0x4U)
#define NSS_U85_PMINTCLR_EVENT_CNT_2_INT_SHIFT   (2U)
/*! EVENT_CNT_2_INT - Event counter overflow interrupt request disable bit for PMEVCNTR2 */
#define NSS_U85_PMINTCLR_EVENT_CNT_2_INT(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTCLR_EVENT_CNT_2_INT_SHIFT)) & NSS_U85_PMINTCLR_EVENT_CNT_2_INT_MASK)

#define NSS_U85_PMINTCLR_EVENT_CNT_3_INT_MASK    (0x8U)
#define NSS_U85_PMINTCLR_EVENT_CNT_3_INT_SHIFT   (3U)
/*! EVENT_CNT_3_INT - Event counter overflow interrupt request disable bit for PMEVCNTR3 */
#define NSS_U85_PMINTCLR_EVENT_CNT_3_INT(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTCLR_EVENT_CNT_3_INT_SHIFT)) & NSS_U85_PMINTCLR_EVENT_CNT_3_INT_MASK)

#define NSS_U85_PMINTCLR_EVENT_CNT_4_INT_MASK    (0x10U)
#define NSS_U85_PMINTCLR_EVENT_CNT_4_INT_SHIFT   (4U)
/*! EVENT_CNT_4_INT - Event counter overflow interrupt request disable bit for PMEVCNTR4 */
#define NSS_U85_PMINTCLR_EVENT_CNT_4_INT(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTCLR_EVENT_CNT_4_INT_SHIFT)) & NSS_U85_PMINTCLR_EVENT_CNT_4_INT_MASK)

#define NSS_U85_PMINTCLR_EVENT_CNT_5_INT_MASK    (0x20U)
#define NSS_U85_PMINTCLR_EVENT_CNT_5_INT_SHIFT   (5U)
/*! EVENT_CNT_5_INT - Event counter overflow interrupt request disable bit for PMEVCNTR5 */
#define NSS_U85_PMINTCLR_EVENT_CNT_5_INT(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTCLR_EVENT_CNT_5_INT_SHIFT)) & NSS_U85_PMINTCLR_EVENT_CNT_5_INT_MASK)

#define NSS_U85_PMINTCLR_EVENT_CNT_6_INT_MASK    (0x40U)
#define NSS_U85_PMINTCLR_EVENT_CNT_6_INT_SHIFT   (6U)
/*! EVENT_CNT_6_INT - Event counter overflow interrupt request disable bit for PMEVCNTR6 */
#define NSS_U85_PMINTCLR_EVENT_CNT_6_INT(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTCLR_EVENT_CNT_6_INT_SHIFT)) & NSS_U85_PMINTCLR_EVENT_CNT_6_INT_MASK)

#define NSS_U85_PMINTCLR_EVENT_CNT_7_INT_MASK    (0x80U)
#define NSS_U85_PMINTCLR_EVENT_CNT_7_INT_SHIFT   (7U)
/*! EVENT_CNT_7_INT - Event counter overflow interrupt request disable bit for PMEVCNTR7 */
#define NSS_U85_PMINTCLR_EVENT_CNT_7_INT(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTCLR_EVENT_CNT_7_INT_SHIFT)) & NSS_U85_PMINTCLR_EVENT_CNT_7_INT_MASK)

#define NSS_U85_PMINTCLR_CYCLE_CNT_INT_MASK      (0x80000000U)
#define NSS_U85_PMINTCLR_CYCLE_CNT_INT_SHIFT     (31U)
/*! CYCLE_CNT_INT - PMCCNTR overflow interrupt request disable bit */
#define NSS_U85_PMINTCLR_CYCLE_CNT_INT(x)        (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMINTCLR_CYCLE_CNT_INT_SHIFT)) & NSS_U85_PMINTCLR_CYCLE_CNT_INT_MASK)
/*! @} */

/*! @name PMCCNTR - Performance monitor cycle count register */
/*! @{ */

#define NSS_U85_PMCCNTR_CYCLE_CNT_MASK           (0xFFFFFFFFU)
#define NSS_U85_PMCCNTR_CYCLE_CNT_SHIFT          (0U)
/*! CYCLE_CNT - Cycle count */
#define NSS_U85_PMCCNTR_CYCLE_CNT(x)             (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCCNTR_CYCLE_CNT_SHIFT)) & NSS_U85_PMCCNTR_CYCLE_CNT_MASK)
/*! @} */

/*! @name PMCCNTR_HI - Performance monitor cycle count register (higher bits) */
/*! @{ */

#define NSS_U85_PMCCNTR_HI_CYCLE_CNT_MASK        (0xFFFFU)
#define NSS_U85_PMCCNTR_HI_CYCLE_CNT_SHIFT       (0U)
/*! CYCLE_CNT - Cycle count */
#define NSS_U85_PMCCNTR_HI_CYCLE_CNT(x)          (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCCNTR_HI_CYCLE_CNT_SHIFT)) & NSS_U85_PMCCNTR_HI_CYCLE_CNT_MASK)
/*! @} */

/*! @name PMCAXI_CHAN - Set which AXI channel to monitor for latency measurements in PMU */
/*! @{ */

#define NSS_U85_PMCAXI_CHAN_CH_SEL_MASK          (0xFU)
#define NSS_U85_PMCAXI_CHAN_CH_SEL_SHIFT         (0U)
/*! CH_SEL - Channel select for latency measurements */
#define NSS_U85_PMCAXI_CHAN_CH_SEL(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCAXI_CHAN_CH_SEL_SHIFT)) & NSS_U85_PMCAXI_CHAN_CH_SEL_MASK)

#define NSS_U85_PMCAXI_CHAN_AXI_SEL_MASK         (0x100U)
#define NSS_U85_PMCAXI_CHAN_AXI_SEL_SHIFT        (8U)
/*! AXI_SEL - AXI port select for latency measurements */
#define NSS_U85_PMCAXI_CHAN_AXI_SEL(x)           (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCAXI_CHAN_AXI_SEL_SHIFT)) & NSS_U85_PMCAXI_CHAN_AXI_SEL_MASK)

#define NSS_U85_PMCAXI_CHAN_BW_CH_SEL_EN_MASK    (0x400U)
#define NSS_U85_PMCAXI_CHAN_BW_CH_SEL_EN_SHIFT   (10U)
/*! BW_CH_SEL_EN - Bandwidth channel selector */
#define NSS_U85_PMCAXI_CHAN_BW_CH_SEL_EN(x)      (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCAXI_CHAN_BW_CH_SEL_EN_SHIFT)) & NSS_U85_PMCAXI_CHAN_BW_CH_SEL_EN_MASK)
/*! @} */

/*! @name PMCLUT - Performance monitor control for lookup table */
/*! @{ */

#define NSS_U85_PMCLUT_PCM_LUT_EN_0_MASK         (0x1U)
#define NSS_U85_PMCLUT_PCM_LUT_EN_0_SHIFT        (0U)
/*! PCM_LUT_EN_0 - PMU lookup table enable for event counter 0 */
#define NSS_U85_PMCLUT_PCM_LUT_EN_0(x)           (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCLUT_PCM_LUT_EN_0_SHIFT)) & NSS_U85_PMCLUT_PCM_LUT_EN_0_MASK)

#define NSS_U85_PMCLUT_PMC_LUT_0_MASK            (0xFFFF0000U)
#define NSS_U85_PMCLUT_PMC_LUT_0_SHIFT           (16U)
/*! PMC_LUT_0 - PMU lookup table for event counter 0 */
#define NSS_U85_PMCLUT_PMC_LUT_0(x)              (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMCLUT_PMC_LUT_0_SHIFT)) & NSS_U85_PMCLUT_PMC_LUT_0_MASK)
/*! @} */

/*! @name PMEVCNTR0 - Performance monitor event 0 count register */
/*! @{ */

#define NSS_U85_PMEVCNTR0_COUNT_MASK             (0xFFFFFFFFU)
#define NSS_U85_PMEVCNTR0_COUNT_SHIFT            (0U)
/*! count - Count word */
#define NSS_U85_PMEVCNTR0_COUNT(x)               (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVCNTR0_COUNT_SHIFT)) & NSS_U85_PMEVCNTR0_COUNT_MASK)
/*! @} */

/*! @name PMEVCNTR1 - Performance monitor event 1 count register */
/*! @{ */

#define NSS_U85_PMEVCNTR1_COUNT_MASK             (0xFFFFFFFFU)
#define NSS_U85_PMEVCNTR1_COUNT_SHIFT            (0U)
/*! count - Count word */
#define NSS_U85_PMEVCNTR1_COUNT(x)               (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVCNTR1_COUNT_SHIFT)) & NSS_U85_PMEVCNTR1_COUNT_MASK)
/*! @} */

/*! @name PMEVCNTR2 - Performance monitor event 2 count register */
/*! @{ */

#define NSS_U85_PMEVCNTR2_COUNT_MASK             (0xFFFFFFFFU)
#define NSS_U85_PMEVCNTR2_COUNT_SHIFT            (0U)
/*! count - Count word */
#define NSS_U85_PMEVCNTR2_COUNT(x)               (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVCNTR2_COUNT_SHIFT)) & NSS_U85_PMEVCNTR2_COUNT_MASK)
/*! @} */

/*! @name PMEVCNTR3 - Performance monitor event 3 count register */
/*! @{ */

#define NSS_U85_PMEVCNTR3_COUNT_MASK             (0xFFFFFFFFU)
#define NSS_U85_PMEVCNTR3_COUNT_SHIFT            (0U)
/*! count - Count word */
#define NSS_U85_PMEVCNTR3_COUNT(x)               (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVCNTR3_COUNT_SHIFT)) & NSS_U85_PMEVCNTR3_COUNT_MASK)
/*! @} */

/*! @name PMEVCNTR4 - Performance monitor event 4 count register */
/*! @{ */

#define NSS_U85_PMEVCNTR4_COUNT_MASK             (0xFFFFFFFFU)
#define NSS_U85_PMEVCNTR4_COUNT_SHIFT            (0U)
/*! count - Count word */
#define NSS_U85_PMEVCNTR4_COUNT(x)               (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVCNTR4_COUNT_SHIFT)) & NSS_U85_PMEVCNTR4_COUNT_MASK)
/*! @} */

/*! @name PMEVCNTR5 - Performance monitor event 5 count register */
/*! @{ */

#define NSS_U85_PMEVCNTR5_COUNT_MASK             (0xFFFFFFFFU)
#define NSS_U85_PMEVCNTR5_COUNT_SHIFT            (0U)
/*! count - Count word */
#define NSS_U85_PMEVCNTR5_COUNT(x)               (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVCNTR5_COUNT_SHIFT)) & NSS_U85_PMEVCNTR5_COUNT_MASK)
/*! @} */

/*! @name PMEVCNTR6 - Performance monitor event 6 count register */
/*! @{ */

#define NSS_U85_PMEVCNTR6_COUNT_MASK             (0xFFFFFFFFU)
#define NSS_U85_PMEVCNTR6_COUNT_SHIFT            (0U)
/*! count - Count word */
#define NSS_U85_PMEVCNTR6_COUNT(x)               (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVCNTR6_COUNT_SHIFT)) & NSS_U85_PMEVCNTR6_COUNT_MASK)
/*! @} */

/*! @name PMEVCNTR7 - Performance monitor event 7 count register */
/*! @{ */

#define NSS_U85_PMEVCNTR7_COUNT_MASK             (0xFFFFFFFFU)
#define NSS_U85_PMEVCNTR7_COUNT_SHIFT            (0U)
/*! count - Count word */
#define NSS_U85_PMEVCNTR7_COUNT(x)               (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVCNTR7_COUNT_SHIFT)) & NSS_U85_PMEVCNTR7_COUNT_MASK)
/*! @} */

/*! @name PMEVTYPER0 - Performance monitor event type register 0 */
/*! @{ */

#define NSS_U85_PMEVTYPER0_EV_TYPE_MASK          (0x3FFU)
#define NSS_U85_PMEVTYPER0_EV_TYPE_SHIFT         (0U)
/*! EV_TYPE - Event Type */
#define NSS_U85_PMEVTYPER0_EV_TYPE(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER0_EV_TYPE_SHIFT)) & NSS_U85_PMEVTYPER0_EV_TYPE_MASK)

#define NSS_U85_PMEVTYPER0_D0_MASK               (0x1000U)
#define NSS_U85_PMEVTYPER0_D0_SHIFT              (12U)
/*! D0 - Counting disabled for AXI port 0 */
#define NSS_U85_PMEVTYPER0_D0(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER0_D0_SHIFT)) & NSS_U85_PMEVTYPER0_D0_MASK)

#define NSS_U85_PMEVTYPER0_D1_MASK               (0x2000U)
#define NSS_U85_PMEVTYPER0_D1_SHIFT              (13U)
/*! D1 - Counting disabled for AXI port 1 */
#define NSS_U85_PMEVTYPER0_D1(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER0_D1_SHIFT)) & NSS_U85_PMEVTYPER0_D1_MASK)

#define NSS_U85_PMEVTYPER0_D2_MASK               (0x4000U)
#define NSS_U85_PMEVTYPER0_D2_SHIFT              (14U)
/*! D2 - Counting disabled for AXI port 2 */
#define NSS_U85_PMEVTYPER0_D2(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER0_D2_SHIFT)) & NSS_U85_PMEVTYPER0_D2_MASK)

#define NSS_U85_PMEVTYPER0_D3_MASK               (0x8000U)
#define NSS_U85_PMEVTYPER0_D3_SHIFT              (15U)
/*! D3 - Counting disabled for AXI port 3 */
#define NSS_U85_PMEVTYPER0_D3(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER0_D3_SHIFT)) & NSS_U85_PMEVTYPER0_D3_MASK)
/*! @} */

/*! @name PMEVTYPER1 - Performance monitor event type register 1 */
/*! @{ */

#define NSS_U85_PMEVTYPER1_EV_TYPE_MASK          (0x3FFU)
#define NSS_U85_PMEVTYPER1_EV_TYPE_SHIFT         (0U)
/*! EV_TYPE - Event Type */
#define NSS_U85_PMEVTYPER1_EV_TYPE(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER1_EV_TYPE_SHIFT)) & NSS_U85_PMEVTYPER1_EV_TYPE_MASK)

#define NSS_U85_PMEVTYPER1_D0_MASK               (0x1000U)
#define NSS_U85_PMEVTYPER1_D0_SHIFT              (12U)
/*! D0 - Counting disabled for AXI port 0 */
#define NSS_U85_PMEVTYPER1_D0(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER1_D0_SHIFT)) & NSS_U85_PMEVTYPER1_D0_MASK)

#define NSS_U85_PMEVTYPER1_D1_MASK               (0x2000U)
#define NSS_U85_PMEVTYPER1_D1_SHIFT              (13U)
/*! D1 - Counting disabled for AXI port 1 */
#define NSS_U85_PMEVTYPER1_D1(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER1_D1_SHIFT)) & NSS_U85_PMEVTYPER1_D1_MASK)

#define NSS_U85_PMEVTYPER1_D2_MASK               (0x4000U)
#define NSS_U85_PMEVTYPER1_D2_SHIFT              (14U)
/*! D2 - Counting disabled for AXI port 2 */
#define NSS_U85_PMEVTYPER1_D2(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER1_D2_SHIFT)) & NSS_U85_PMEVTYPER1_D2_MASK)

#define NSS_U85_PMEVTYPER1_D3_MASK               (0x8000U)
#define NSS_U85_PMEVTYPER1_D3_SHIFT              (15U)
/*! D3 - Counting disabled for AXI port 3 */
#define NSS_U85_PMEVTYPER1_D3(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER1_D3_SHIFT)) & NSS_U85_PMEVTYPER1_D3_MASK)
/*! @} */

/*! @name PMEVTYPER2 - Performance monitor event type register 2 */
/*! @{ */

#define NSS_U85_PMEVTYPER2_EV_TYPE_MASK          (0x3FFU)
#define NSS_U85_PMEVTYPER2_EV_TYPE_SHIFT         (0U)
/*! EV_TYPE - Event Type */
#define NSS_U85_PMEVTYPER2_EV_TYPE(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER2_EV_TYPE_SHIFT)) & NSS_U85_PMEVTYPER2_EV_TYPE_MASK)

#define NSS_U85_PMEVTYPER2_D0_MASK               (0x1000U)
#define NSS_U85_PMEVTYPER2_D0_SHIFT              (12U)
/*! D0 - Counting disabled for AXI port 0 */
#define NSS_U85_PMEVTYPER2_D0(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER2_D0_SHIFT)) & NSS_U85_PMEVTYPER2_D0_MASK)

#define NSS_U85_PMEVTYPER2_D1_MASK               (0x2000U)
#define NSS_U85_PMEVTYPER2_D1_SHIFT              (13U)
/*! D1 - Counting disabled for AXI port 1 */
#define NSS_U85_PMEVTYPER2_D1(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER2_D1_SHIFT)) & NSS_U85_PMEVTYPER2_D1_MASK)

#define NSS_U85_PMEVTYPER2_D2_MASK               (0x4000U)
#define NSS_U85_PMEVTYPER2_D2_SHIFT              (14U)
/*! D2 - Counting disabled for AXI port 2 */
#define NSS_U85_PMEVTYPER2_D2(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER2_D2_SHIFT)) & NSS_U85_PMEVTYPER2_D2_MASK)

#define NSS_U85_PMEVTYPER2_D3_MASK               (0x8000U)
#define NSS_U85_PMEVTYPER2_D3_SHIFT              (15U)
/*! D3 - Counting disabled for AXI port 3 */
#define NSS_U85_PMEVTYPER2_D3(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER2_D3_SHIFT)) & NSS_U85_PMEVTYPER2_D3_MASK)
/*! @} */

/*! @name PMEVTYPER3 - Performance monitor event type register 3 */
/*! @{ */

#define NSS_U85_PMEVTYPER3_EV_TYPE_MASK          (0x3FFU)
#define NSS_U85_PMEVTYPER3_EV_TYPE_SHIFT         (0U)
/*! EV_TYPE - Event Type */
#define NSS_U85_PMEVTYPER3_EV_TYPE(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER3_EV_TYPE_SHIFT)) & NSS_U85_PMEVTYPER3_EV_TYPE_MASK)

#define NSS_U85_PMEVTYPER3_D0_MASK               (0x1000U)
#define NSS_U85_PMEVTYPER3_D0_SHIFT              (12U)
/*! D0 - Counting disabled for AXI port 0 */
#define NSS_U85_PMEVTYPER3_D0(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER3_D0_SHIFT)) & NSS_U85_PMEVTYPER3_D0_MASK)

#define NSS_U85_PMEVTYPER3_D1_MASK               (0x2000U)
#define NSS_U85_PMEVTYPER3_D1_SHIFT              (13U)
/*! D1 - Counting disabled for AXI port 1 */
#define NSS_U85_PMEVTYPER3_D1(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER3_D1_SHIFT)) & NSS_U85_PMEVTYPER3_D1_MASK)

#define NSS_U85_PMEVTYPER3_D2_MASK               (0x4000U)
#define NSS_U85_PMEVTYPER3_D2_SHIFT              (14U)
/*! D2 - Counting disabled for AXI port 2 */
#define NSS_U85_PMEVTYPER3_D2(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER3_D2_SHIFT)) & NSS_U85_PMEVTYPER3_D2_MASK)

#define NSS_U85_PMEVTYPER3_D3_MASK               (0x8000U)
#define NSS_U85_PMEVTYPER3_D3_SHIFT              (15U)
/*! D3 - Counting disabled for AXI port 3 */
#define NSS_U85_PMEVTYPER3_D3(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER3_D3_SHIFT)) & NSS_U85_PMEVTYPER3_D3_MASK)
/*! @} */

/*! @name PMEVTYPER4 - Performance monitor event type register 4 */
/*! @{ */

#define NSS_U85_PMEVTYPER4_EV_TYPE_MASK          (0x3FFU)
#define NSS_U85_PMEVTYPER4_EV_TYPE_SHIFT         (0U)
/*! EV_TYPE - Event Type */
#define NSS_U85_PMEVTYPER4_EV_TYPE(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER4_EV_TYPE_SHIFT)) & NSS_U85_PMEVTYPER4_EV_TYPE_MASK)

#define NSS_U85_PMEVTYPER4_D0_MASK               (0x1000U)
#define NSS_U85_PMEVTYPER4_D0_SHIFT              (12U)
/*! D0 - Counting disabled for AXI port 0 */
#define NSS_U85_PMEVTYPER4_D0(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER4_D0_SHIFT)) & NSS_U85_PMEVTYPER4_D0_MASK)

#define NSS_U85_PMEVTYPER4_D1_MASK               (0x2000U)
#define NSS_U85_PMEVTYPER4_D1_SHIFT              (13U)
/*! D1 - Counting disabled for AXI port 1 */
#define NSS_U85_PMEVTYPER4_D1(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER4_D1_SHIFT)) & NSS_U85_PMEVTYPER4_D1_MASK)

#define NSS_U85_PMEVTYPER4_D2_MASK               (0x4000U)
#define NSS_U85_PMEVTYPER4_D2_SHIFT              (14U)
/*! D2 - Counting disabled for AXI port 2 */
#define NSS_U85_PMEVTYPER4_D2(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER4_D2_SHIFT)) & NSS_U85_PMEVTYPER4_D2_MASK)

#define NSS_U85_PMEVTYPER4_D3_MASK               (0x8000U)
#define NSS_U85_PMEVTYPER4_D3_SHIFT              (15U)
/*! D3 - Counting disabled for AXI port 3 */
#define NSS_U85_PMEVTYPER4_D3(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER4_D3_SHIFT)) & NSS_U85_PMEVTYPER4_D3_MASK)
/*! @} */

/*! @name PMEVTYPER5 - Performance monitor event type register 5 */
/*! @{ */

#define NSS_U85_PMEVTYPER5_EV_TYPE_MASK          (0x3FFU)
#define NSS_U85_PMEVTYPER5_EV_TYPE_SHIFT         (0U)
/*! EV_TYPE - Event Type */
#define NSS_U85_PMEVTYPER5_EV_TYPE(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER5_EV_TYPE_SHIFT)) & NSS_U85_PMEVTYPER5_EV_TYPE_MASK)

#define NSS_U85_PMEVTYPER5_D0_MASK               (0x1000U)
#define NSS_U85_PMEVTYPER5_D0_SHIFT              (12U)
/*! D0 - Counting disabled for AXI port 0 */
#define NSS_U85_PMEVTYPER5_D0(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER5_D0_SHIFT)) & NSS_U85_PMEVTYPER5_D0_MASK)

#define NSS_U85_PMEVTYPER5_D1_MASK               (0x2000U)
#define NSS_U85_PMEVTYPER5_D1_SHIFT              (13U)
/*! D1 - Counting disabled for AXI port 1 */
#define NSS_U85_PMEVTYPER5_D1(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER5_D1_SHIFT)) & NSS_U85_PMEVTYPER5_D1_MASK)

#define NSS_U85_PMEVTYPER5_D2_MASK               (0x4000U)
#define NSS_U85_PMEVTYPER5_D2_SHIFT              (14U)
/*! D2 - Counting disabled for AXI port 2 */
#define NSS_U85_PMEVTYPER5_D2(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER5_D2_SHIFT)) & NSS_U85_PMEVTYPER5_D2_MASK)

#define NSS_U85_PMEVTYPER5_D3_MASK               (0x8000U)
#define NSS_U85_PMEVTYPER5_D3_SHIFT              (15U)
/*! D3 - Counting disabled for AXI port 3 */
#define NSS_U85_PMEVTYPER5_D3(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER5_D3_SHIFT)) & NSS_U85_PMEVTYPER5_D3_MASK)
/*! @} */

/*! @name PMEVTYPER6 - Performance monitor event type register 6 */
/*! @{ */

#define NSS_U85_PMEVTYPER6_EV_TYPE_MASK          (0x3FFU)
#define NSS_U85_PMEVTYPER6_EV_TYPE_SHIFT         (0U)
/*! EV_TYPE - Event Type */
#define NSS_U85_PMEVTYPER6_EV_TYPE(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER6_EV_TYPE_SHIFT)) & NSS_U85_PMEVTYPER6_EV_TYPE_MASK)

#define NSS_U85_PMEVTYPER6_D0_MASK               (0x1000U)
#define NSS_U85_PMEVTYPER6_D0_SHIFT              (12U)
/*! D0 - Counting disabled for AXI port 0 */
#define NSS_U85_PMEVTYPER6_D0(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER6_D0_SHIFT)) & NSS_U85_PMEVTYPER6_D0_MASK)

#define NSS_U85_PMEVTYPER6_D1_MASK               (0x2000U)
#define NSS_U85_PMEVTYPER6_D1_SHIFT              (13U)
/*! D1 - Counting disabled for AXI port 1 */
#define NSS_U85_PMEVTYPER6_D1(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER6_D1_SHIFT)) & NSS_U85_PMEVTYPER6_D1_MASK)

#define NSS_U85_PMEVTYPER6_D2_MASK               (0x4000U)
#define NSS_U85_PMEVTYPER6_D2_SHIFT              (14U)
/*! D2 - Counting disabled for AXI port 2 */
#define NSS_U85_PMEVTYPER6_D2(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER6_D2_SHIFT)) & NSS_U85_PMEVTYPER6_D2_MASK)

#define NSS_U85_PMEVTYPER6_D3_MASK               (0x8000U)
#define NSS_U85_PMEVTYPER6_D3_SHIFT              (15U)
/*! D3 - Counting disabled for AXI port 3 */
#define NSS_U85_PMEVTYPER6_D3(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER6_D3_SHIFT)) & NSS_U85_PMEVTYPER6_D3_MASK)
/*! @} */

/*! @name PMEVTYPER7 - Performance monitor event type register 7 */
/*! @{ */

#define NSS_U85_PMEVTYPER7_EV_TYPE_MASK          (0x3FFU)
#define NSS_U85_PMEVTYPER7_EV_TYPE_SHIFT         (0U)
/*! EV_TYPE - Event Type */
#define NSS_U85_PMEVTYPER7_EV_TYPE(x)            (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER7_EV_TYPE_SHIFT)) & NSS_U85_PMEVTYPER7_EV_TYPE_MASK)

#define NSS_U85_PMEVTYPER7_D0_MASK               (0x1000U)
#define NSS_U85_PMEVTYPER7_D0_SHIFT              (12U)
/*! D0 - Counting disabled for AXI port 0 */
#define NSS_U85_PMEVTYPER7_D0(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER7_D0_SHIFT)) & NSS_U85_PMEVTYPER7_D0_MASK)

#define NSS_U85_PMEVTYPER7_D1_MASK               (0x2000U)
#define NSS_U85_PMEVTYPER7_D1_SHIFT              (13U)
/*! D1 - Counting disabled for AXI port 1 */
#define NSS_U85_PMEVTYPER7_D1(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER7_D1_SHIFT)) & NSS_U85_PMEVTYPER7_D1_MASK)

#define NSS_U85_PMEVTYPER7_D2_MASK               (0x4000U)
#define NSS_U85_PMEVTYPER7_D2_SHIFT              (14U)
/*! D2 - Counting disabled for AXI port 2 */
#define NSS_U85_PMEVTYPER7_D2(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER7_D2_SHIFT)) & NSS_U85_PMEVTYPER7_D2_MASK)

#define NSS_U85_PMEVTYPER7_D3_MASK               (0x8000U)
#define NSS_U85_PMEVTYPER7_D3_SHIFT              (15U)
/*! D3 - Counting disabled for AXI port 3 */
#define NSS_U85_PMEVTYPER7_D3(x)                 (((uint32_t)(((uint32_t)(x)) << NSS_U85_PMEVTYPER7_D3_SHIFT)) & NSS_U85_PMEVTYPER7_D3_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group NSS_U85_Register_Masks */


/*!
 * @}
 */ /* end of group NSS_U85_Peripheral_Access_Layer */


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


#endif  /* PERI_NSS_U85_H_ */

