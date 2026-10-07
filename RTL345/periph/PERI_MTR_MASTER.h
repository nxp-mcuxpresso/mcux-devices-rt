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
**         CMSIS Peripheral Access Layer for MTR_MASTER
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
 * @file PERI_MTR_MASTER.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for MTR_MASTER
 *
 * CMSIS Peripheral Access Layer for MTR_MASTER
 */

#if !defined(PERI_MTR_MASTER_H_)
#define PERI_MTR_MASTER_H_                       /**< Symbol preventing repeated inclusion */

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
   -- MTR_MASTER Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MTR_MASTER_Peripheral_Access_Layer MTR_MASTER Peripheral Access Layer
 * @{
 */

/** MTR_MASTER - Size of Registers Arrays */
#define MTR_MASTER_ALGOSEL_COUNT                  2u
#define MTR_MASTER_ALGFAIL_COUNT                  2u
#define MTR_MASTER_BISTSEL_COUNT                  1u
#define MTR_MASTER_BISTSTAT_COUNT                 2u
#define MTR_MASTER_SSR_COUNT                      16u
#define MTR_MASTER_VALREG_COUNT                   4u

/** MTR_MASTER - Register Layout Typedef */
typedef struct {
  __IO uint32_t STAT;                              /**< offset: 0x0 */
  __IO uint32_t CMD;                               /**< offset: 0x4 */
  __IO uint32_t MCOFEV;                            /**< offset: 0x8 */
  __IO uint32_t LOOPCNT;                           /**< offset: 0xC */
  __IO uint32_t UDPR;                              /**< offset: 0x10 */
  __IO uint32_t DLY;                               /**< offset: 0x14 */
  __IO uint32_t CFG_CHKSUM;                        /**< offset: 0x18 */
  __IO uint32_t CTRL;                              /**< offset: 0x1C */
  __IO uint32_t ALGOSEL[MTR_MASTER_ALGOSEL_COUNT]; /**< array offset: 0x20, array step: 0x4 */
  __IO uint32_t ECCSTAT;                           /**< offset: 0x28 */
  __IO uint32_t ALGFAIL[MTR_MASTER_ALGFAIL_COUNT]; /**< array offset: 0x2C, array step: 0x4 */
       uint8_t RESERVED_0[12];
  __IO uint32_t BISTSEL[MTR_MASTER_BISTSEL_COUNT]; /**< array offset: 0x40, array step: 0x4 */
       uint8_t RESERVED_1[12];
  __IO uint32_t BISTSTAT[MTR_MASTER_BISTSTAT_COUNT]; /**< array offset: 0x50, array step: 0x4 */
       uint8_t RESERVED_2[8];
  __IO uint32_t SSR[MTR_MASTER_SSR_COUNT];         /**< array offset: 0x60, array step: 0x4 */
  __IO uint32_t VALREG[MTR_MASTER_VALREG_COUNT];   /**< array offset: 0xA0, array step: 0x4 */
} MTR_MASTER_Type;

/* ----------------------------------------------------------------------------
   -- MTR_MASTER Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MTR_MASTER_Register_Masks MTR_MASTER Register Masks
 * @{
 */

/*! @name STAT -  */
/*! @{ */

#define MTR_MASTER_STAT_SD_MASK                  (0x1U)
#define MTR_MASTER_STAT_SD_SHIFT                 (0U)
/*! SD
 *  0b0..
 *  0b1..
 */
#define MTR_MASTER_STAT_SD(x)                    (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_SD_SHIFT)) & MTR_MASTER_STAT_SD_MASK)

#define MTR_MASTER_STAT_SA_MASK                  (0x6U)
#define MTR_MASTER_STAT_SA_SHIFT                 (1U)
/*! SA
 *  0b00..
 *  0b01..
 *  0b10..
 *  0b11..
 */
#define MTR_MASTER_STAT_SA(x)                    (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_SA_SHIFT)) & MTR_MASTER_STAT_SA_MASK)

#define MTR_MASTER_STAT_BEND_MASK                (0x8U)
#define MTR_MASTER_STAT_BEND_SHIFT               (3U)
#define MTR_MASTER_STAT_BEND(x)                  (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_BEND_SHIFT)) & MTR_MASTER_STAT_BEND_MASK)

#define MTR_MASTER_STAT_BB_MASK                  (0x10U)
#define MTR_MASTER_STAT_BB_SHIFT                 (4U)
#define MTR_MASTER_STAT_BB(x)                    (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_BB_SHIFT)) & MTR_MASTER_STAT_BB_MASK)

#define MTR_MASTER_STAT_BUF_MASK                 (0x20U)
#define MTR_MASTER_STAT_BUF_SHIFT                (5U)
#define MTR_MASTER_STAT_BUF(x)                   (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_BUF_SHIFT)) & MTR_MASTER_STAT_BUF_MASK)

#define MTR_MASTER_STAT_ICE_MASK                 (0x40U)
#define MTR_MASTER_STAT_ICE_SHIFT                (6U)
#define MTR_MASTER_STAT_ICE(x)                   (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_ICE_SHIFT)) & MTR_MASTER_STAT_ICE_MASK)

#define MTR_MASTER_STAT_IAE_MASK                 (0x80U)
#define MTR_MASTER_STAT_IAE_SHIFT                (7U)
#define MTR_MASTER_STAT_IAE(x)                   (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_IAE_SHIFT)) & MTR_MASTER_STAT_IAE_MASK)

#define MTR_MASTER_STAT_ECCERR_MASK              (0x100U)
#define MTR_MASTER_STAT_ECCERR_SHIFT             (8U)
#define MTR_MASTER_STAT_ECCERR(x)                (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_ECCERR_SHIFT)) & MTR_MASTER_STAT_ECCERR_MASK)

#define MTR_MASTER_STAT_FE_MASK                  (0x200U)
#define MTR_MASTER_STAT_FE_SHIFT                 (9U)
#define MTR_MASTER_STAT_FE(x)                    (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_FE_SHIFT)) & MTR_MASTER_STAT_FE_MASK)

#define MTR_MASTER_STAT_LVE_MASK                 (0x400U)
#define MTR_MASTER_STAT_LVE_SHIFT                (10U)
#define MTR_MASTER_STAT_LVE(x)                   (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_LVE_SHIFT)) & MTR_MASTER_STAT_LVE_MASK)

#define MTR_MASTER_STAT_OE_MASK                  (0x800U)
#define MTR_MASTER_STAT_OE_SHIFT                 (11U)
#define MTR_MASTER_STAT_OE(x)                    (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_OE_SHIFT)) & MTR_MASTER_STAT_OE_MASK)

#define MTR_MASTER_STAT_ISE_MASK                 (0x1000U)
#define MTR_MASTER_STAT_ISE_SHIFT                (12U)
#define MTR_MASTER_STAT_ISE(x)                   (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_ISE_SHIFT)) & MTR_MASTER_STAT_ISE_MASK)

#define MTR_MASTER_STAT_CIE_MASK                 (0x2000U)
#define MTR_MASTER_STAT_CIE_SHIFT                (13U)
#define MTR_MASTER_STAT_CIE(x)                   (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_CIE_SHIFT)) & MTR_MASTER_STAT_CIE_MASK)

#define MTR_MASTER_STAT_BXE_MASK                 (0x4000U)
#define MTR_MASTER_STAT_BXE_SHIFT                (14U)
#define MTR_MASTER_STAT_BXE(x)                   (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_BXE_SHIFT)) & MTR_MASTER_STAT_BXE_MASK)

#define MTR_MASTER_STAT_RSD_MASK                 (0x8000U)
#define MTR_MASTER_STAT_RSD_SHIFT                (15U)
#define MTR_MASTER_STAT_RSD(x)                   (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_RSD_SHIFT)) & MTR_MASTER_STAT_RSD_MASK)

#define MTR_MASTER_STAT_LDD_MASK                 (0x10000U)
#define MTR_MASTER_STAT_LDD_SHIFT                (16U)
#define MTR_MASTER_STAT_LDD(x)                   (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_LDD_SHIFT)) & MTR_MASTER_STAT_LDD_MASK)

#define MTR_MASTER_STAT_UCF_MASK                 (0x20000U)
#define MTR_MASTER_STAT_UCF_SHIFT                (17U)
#define MTR_MASTER_STAT_UCF(x)                   (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_STAT_UCF_SHIFT)) & MTR_MASTER_STAT_UCF_MASK)
/*! @} */

/*! @name CMD -  */
/*! @{ */

#define MTR_MASTER_CMD_CMD_MASK                  (0x1FU)
#define MTR_MASTER_CMD_CMD_SHIFT                 (0U)
/*! CMD
 *  0b00000..
 *  0b00001..
 *  0b00010..
 *  0b00011..
 *  0b00100..
 *  0b00101..
 *  0b00110..
 *  0b10000..
 *  0b10001..
 *  0b10010..
 *  0b10011..
 *  0b10100..
 *  0b10101..
 *  0b10110..
 *  0b10111..
 */
#define MTR_MASTER_CMD_CMD(x)                    (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CMD_CMD_SHIFT)) & MTR_MASTER_CMD_CMD_MASK)
/*! @} */

/*! @name MCOFEV -  */
/*! @{ */

#define MTR_MASTER_MCOFEV_MCOFEV_MASK            (0xFFFFFFFFU)
#define MTR_MASTER_MCOFEV_MCOFEV_SHIFT           (0U)
#define MTR_MASTER_MCOFEV_MCOFEV(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_MCOFEV_MCOFEV_SHIFT)) & MTR_MASTER_MCOFEV_MCOFEV_MASK)
/*! @} */

/*! @name LOOPCNT -  */
/*! @{ */

#define MTR_MASTER_LOOPCNT_VALUE_MASK            (0xFFFFFFFFU)
#define MTR_MASTER_LOOPCNT_VALUE_SHIFT           (0U)
#define MTR_MASTER_LOOPCNT_VALUE(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_LOOPCNT_VALUE_SHIFT)) & MTR_MASTER_LOOPCNT_VALUE_MASK)
/*! @} */

/*! @name UDPR -  */
/*! @{ */

#define MTR_MASTER_UDPR_UDPR_MASK                (0xFFFFFFFFU)
#define MTR_MASTER_UDPR_UDPR_SHIFT               (0U)
#define MTR_MASTER_UDPR_UDPR(x)                  (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_UDPR_UDPR_SHIFT)) & MTR_MASTER_UDPR_UDPR_MASK)
/*! @} */

/*! @name DLY -  */
/*! @{ */

#define MTR_MASTER_DLY_DLY_MASK                  (0xFFFFFFFFU)
#define MTR_MASTER_DLY_DLY_SHIFT                 (0U)
#define MTR_MASTER_DLY_DLY(x)                    (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_DLY_DLY_SHIFT)) & MTR_MASTER_DLY_DLY_MASK)
/*! @} */

/*! @name CFG_CHKSUM -  */
/*! @{ */

#define MTR_MASTER_CFG_CHKSUM_CFG_CHKSUM_MASK    (0xFFFFFFFFU)
#define MTR_MASTER_CFG_CHKSUM_CFG_CHKSUM_SHIFT   (0U)
#define MTR_MASTER_CFG_CHKSUM_CFG_CHKSUM(x)      (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CFG_CHKSUM_CFG_CHKSUM_SHIFT)) & MTR_MASTER_CFG_CHKSUM_CFG_CHKSUM_MASK)
/*! @} */

/*! @name CTRL -  */
/*! @{ */

#define MTR_MASTER_CTRL_BRST_MASK                (0x1U)
#define MTR_MASTER_CTRL_BRST_SHIFT               (0U)
/*! BRST - Enable soft resetting the selected BISTs before programming them */
#define MTR_MASTER_CTRL_BRST(x)                  (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_BRST_SHIFT)) & MTR_MASTER_CTRL_BRST_MASK)

#define MTR_MASTER_CTRL_CREP_MASK                (0x2U)
#define MTR_MASTER_CTRL_CREP_SHIFT               (1U)
/*! CREP - Enable programming the BISTs such that they calculate memory repair at the end of the algorithms. */
#define MTR_MASTER_CTRL_CREP(x)                  (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_CREP_SHIFT)) & MTR_MASTER_CTRL_CREP_MASK)

#define MTR_MASTER_CTRL_CENAC_MASK               (0x4U)
#define MTR_MASTER_CTRL_CENAC_SHIFT              (2U)
/*! CENAC - Enable clearing of the GCR.CEN (continuous enable) field at the end of the BIST runs. */
#define MTR_MASTER_CTRL_CENAC(x)                 (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_CENAC_SHIFT)) & MTR_MASTER_CTRL_CENAC_MASK)

#define MTR_MASTER_CTRL_DRH_MASK                 (0x8U)
#define MTR_MASTER_CTRL_DRH_SHIFT                (3U)
/*! DRH - When set, the BIST's read hold test is disabled even if configured in the BIST run specification */
#define MTR_MASTER_CTRL_DRH(x)                   (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_DRH_SHIFT)) & MTR_MASTER_CTRL_DRH_MASK)

#define MTR_MASTER_CTRL_COF_MASK                 (0x10U)
#define MTR_MASTER_CTRL_COF_SHIFT                (4U)
/*! COF - Enable continue on fail (serial bitmap) mode */
#define MTR_MASTER_CTRL_COF(x)                   (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_COF_SHIFT)) & MTR_MASTER_CTRL_COF_MASK)

#define MTR_MASTER_CTRL_DBGNUM_MASK              (0x1E0U)
#define MTR_MASTER_CTRL_DBGNUM_SHIFT             (5U)
/*! DBGNUM - Specify the number of data packets to shift out in continue on fail mode */
#define MTR_MASTER_CTRL_DBGNUM(x)                (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_DBGNUM_SHIFT)) & MTR_MASTER_CTRL_DBGNUM_MASK)

#define MTR_MASTER_CTRL_DRST_MASK                (0x200U)
#define MTR_MASTER_CTRL_DRST_SHIFT               (9U)
/*! DRST - Reset FPM, BSM, BFPM and EFD registers. */
#define MTR_MASTER_CTRL_DRST(x)                  (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_DRST_SHIFT)) & MTR_MASTER_CTRL_DRST_MASK)

#define MTR_MASTER_CTRL_RRST_MASK                (0x400U)
#define MTR_MASTER_CTRL_RRST_SHIFT               (10U)
/*! RRST - Repair reset for DSM and BIRA/Internal registers. This reset clears accumulated data for fault calculation */
#define MTR_MASTER_CTRL_RRST(x)                  (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_RRST_SHIFT)) & MTR_MASTER_CTRL_RRST_MASK)

#define MTR_MASTER_CTRL_BISR_RST_MASK            (0x800U)
#define MTR_MASTER_CTRL_BISR_RST_SHIFT           (11U)
/*! BISR_RST - Reset only BISR registers */
#define MTR_MASTER_CTRL_BISR_RST(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_BISR_RST_SHIFT)) & MTR_MASTER_CTRL_BISR_RST_MASK)

#define MTR_MASTER_CTRL_VAL_RST_MASK             (0x1000U)
#define MTR_MASTER_CTRL_VAL_RST_SHIFT            (12U)
/*! VAL_RST - Reset only VAL registers */
#define MTR_MASTER_CTRL_VAL_RST(x)               (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_VAL_RST_SHIFT)) & MTR_MASTER_CTRL_VAL_RST_MASK)

#define MTR_MASTER_CTRL_LWS_MASK                 (0x10000U)
#define MTR_MASTER_CTRL_LWS_SHIFT                (16U)
/*! LWS - Load the entire SSR instead of stopping at the first non-zero entry */
#define MTR_MASTER_CTRL_LWS(x)                   (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_LWS_SHIFT)) & MTR_MASTER_CTRL_LWS_MASK)

#define MTR_MASTER_CTRL_BU_MASK                  (0x40000U)
#define MTR_MASTER_CTRL_BU_SHIFT                 (18U)
/*! BU - Pulse the bisr_update signal */
#define MTR_MASTER_CTRL_BU(x)                    (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_BU_SHIFT)) & MTR_MASTER_CTRL_BU_MASK)

#define MTR_MASTER_CTRL_BUW_MASK                 (0x180000U)
#define MTR_MASTER_CTRL_BUW_SHIFT                (19U)
/*! BUW - Specify the width of the bisr_update pulse
 *  0b00..
 *  0b01..
 *  0b10..
 *  0b11..
 */
#define MTR_MASTER_CTRL_BUW(x)                   (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_BUW_SHIFT)) & MTR_MASTER_CTRL_BUW_MASK)

#define MTR_MASTER_CTRL_ECCDIS_MASK              (0x200000U)
#define MTR_MASTER_CTRL_ECCDIS_SHIFT             (21U)
/*! ECCDIS - Disable generation and checking of ECC values transfered to the eFuse */
#define MTR_MASTER_CTRL_ECCDIS(x)                (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_ECCDIS_SHIFT)) & MTR_MASTER_CTRL_ECCDIS_MASK)

#define MTR_MASTER_CTRL_ECCSTATRST_MASK          (0x400000U)
#define MTR_MASTER_CTRL_ECCSTATRST_SHIFT         (22U)
/*! ECCSTATRST - Reset the ECC status register */
#define MTR_MASTER_CTRL_ECCSTATRST(x)            (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_ECCSTATRST_SHIFT)) & MTR_MASTER_CTRL_ECCSTATRST_MASK)

#define MTR_MASTER_CTRL_ALGFAIL_EN_MASK          (0x800000U)
#define MTR_MASTER_CTRL_ALGFAIL_EN_SHIFT         (23U)
/*! ALGFAIL_EN - Enables algo fail detection and BRST */
#define MTR_MASTER_CTRL_ALGFAIL_EN(x)            (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_ALGFAIL_EN_SHIFT)) & MTR_MASTER_CTRL_ALGFAIL_EN_MASK)

#define MTR_MASTER_CTRL_ROW_REPAIR_MASK          (0x1000000U)
#define MTR_MASTER_CTRL_ROW_REPAIR_SHIFT         (24U)
/*! ROW_REPAIR - row repair screening for mix memories */
#define MTR_MASTER_CTRL_ROW_REPAIR(x)            (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_ROW_REPAIR_SHIFT)) & MTR_MASTER_CTRL_ROW_REPAIR_MASK)

#define MTR_MASTER_CTRL_FIRST_FAULT_MASK         (0x2000000U)
#define MTR_MASTER_CTRL_FIRST_FAULT_SHIFT        (25U)
/*! FIRST_FAULT - col repair screening for mix memories */
#define MTR_MASTER_CTRL_FIRST_FAULT(x)           (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_FIRST_FAULT_SHIFT)) & MTR_MASTER_CTRL_FIRST_FAULT_MASK)

#define MTR_MASTER_CTRL_CLKEN_MASK               (0x80000000U)
#define MTR_MASTER_CTRL_CLKEN_SHIFT              (31U)
/*! CLKEN - Enable the bus clock for BIST partitions when using a private MTR bus. */
#define MTR_MASTER_CTRL_CLKEN(x)                 (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_CTRL_CLKEN_SHIFT)) & MTR_MASTER_CTRL_CLKEN_MASK)
/*! @} */

/*! @name ALGOSEL -  */
/*! @{ */

#define MTR_MASTER_ALGOSEL_ALGOSEL_MASK          (0xFFFFFFFFU)
#define MTR_MASTER_ALGOSEL_ALGOSEL_SHIFT         (0U)
#define MTR_MASTER_ALGOSEL_ALGOSEL(x)            (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_ALGOSEL_ALGOSEL_SHIFT)) & MTR_MASTER_ALGOSEL_ALGOSEL_MASK)
/*! @} */

/*! @name ECCSTAT -  */
/*! @{ */

#define MTR_MASTER_ECCSTAT_LESE_MASK             (0x1U)
#define MTR_MASTER_ECCSTAT_LESE_SHIFT            (0U)
#define MTR_MASTER_ECCSTAT_LESE(x)               (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_ECCSTAT_LESE_SHIFT)) & MTR_MASTER_ECCSTAT_LESE_MASK)

#define MTR_MASTER_ECCSTAT_LEME_MASK             (0x2U)
#define MTR_MASTER_ECCSTAT_LEME_SHIFT            (1U)
#define MTR_MASTER_ECCSTAT_LEME(x)               (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_ECCSTAT_LEME_SHIFT)) & MTR_MASTER_ECCSTAT_LEME_MASK)

#define MTR_MASTER_ECCSTAT_ESE_MASK              (0x4U)
#define MTR_MASTER_ECCSTAT_ESE_SHIFT             (2U)
#define MTR_MASTER_ECCSTAT_ESE(x)                (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_ECCSTAT_ESE_SHIFT)) & MTR_MASTER_ECCSTAT_ESE_MASK)

#define MTR_MASTER_ECCSTAT_EME_MASK              (0x8U)
#define MTR_MASTER_ECCSTAT_EME_SHIFT             (3U)
#define MTR_MASTER_ECCSTAT_EME(x)                (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_ECCSTAT_EME_SHIFT)) & MTR_MASTER_ECCSTAT_EME_MASK)

#define MTR_MASTER_ECCSTAT_SERRCNT_MASK          (0xFF0U)
#define MTR_MASTER_ECCSTAT_SERRCNT_SHIFT         (4U)
#define MTR_MASTER_ECCSTAT_SERRCNT(x)            (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_ECCSTAT_SERRCNT_SHIFT)) & MTR_MASTER_ECCSTAT_SERRCNT_MASK)

#define MTR_MASTER_ECCSTAT_MULTIERR_MASK         (0xFFF0000U)
#define MTR_MASTER_ECCSTAT_MULTIERR_SHIFT        (16U)
#define MTR_MASTER_ECCSTAT_MULTIERR(x)           (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_ECCSTAT_MULTIERR_SHIFT)) & MTR_MASTER_ECCSTAT_MULTIERR_MASK)
/*! @} */

/*! @name ALGFAIL -  */
/*! @{ */

#define MTR_MASTER_ALGFAIL_ALGFAIL_MASK          (0xFFFFFFFFU)
#define MTR_MASTER_ALGFAIL_ALGFAIL_SHIFT         (0U)
/*! ALGFAIL - A '1' means the corresponding algo failed */
#define MTR_MASTER_ALGFAIL_ALGFAIL(x)            (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_ALGFAIL_ALGFAIL_SHIFT)) & MTR_MASTER_ALGFAIL_ALGFAIL_MASK)
/*! @} */

/*! @name BISTSEL -  */
/*! @{ */

#define MTR_MASTER_BISTSEL_SEL0_MASK             (0x1U)
#define MTR_MASTER_BISTSEL_SEL0_SHIFT            (0U)
/*! SEL0 - When set, enables the corresponding BIST */
#define MTR_MASTER_BISTSEL_SEL0(x)               (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL0_SHIFT)) & MTR_MASTER_BISTSEL_SEL0_MASK)

#define MTR_MASTER_BISTSEL_SEL1_MASK             (0x2U)
#define MTR_MASTER_BISTSEL_SEL1_SHIFT            (1U)
#define MTR_MASTER_BISTSEL_SEL1(x)               (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL1_SHIFT)) & MTR_MASTER_BISTSEL_SEL1_MASK)

#define MTR_MASTER_BISTSEL_SEL2_MASK             (0x4U)
#define MTR_MASTER_BISTSEL_SEL2_SHIFT            (2U)
#define MTR_MASTER_BISTSEL_SEL2(x)               (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL2_SHIFT)) & MTR_MASTER_BISTSEL_SEL2_MASK)

#define MTR_MASTER_BISTSEL_SEL3_MASK             (0x8U)
#define MTR_MASTER_BISTSEL_SEL3_SHIFT            (3U)
#define MTR_MASTER_BISTSEL_SEL3(x)               (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL3_SHIFT)) & MTR_MASTER_BISTSEL_SEL3_MASK)

#define MTR_MASTER_BISTSEL_SEL4_MASK             (0x10U)
#define MTR_MASTER_BISTSEL_SEL4_SHIFT            (4U)
#define MTR_MASTER_BISTSEL_SEL4(x)               (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL4_SHIFT)) & MTR_MASTER_BISTSEL_SEL4_MASK)

#define MTR_MASTER_BISTSEL_SEL5_MASK             (0x20U)
#define MTR_MASTER_BISTSEL_SEL5_SHIFT            (5U)
#define MTR_MASTER_BISTSEL_SEL5(x)               (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL5_SHIFT)) & MTR_MASTER_BISTSEL_SEL5_MASK)

#define MTR_MASTER_BISTSEL_SEL6_MASK             (0x40U)
#define MTR_MASTER_BISTSEL_SEL6_SHIFT            (6U)
#define MTR_MASTER_BISTSEL_SEL6(x)               (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL6_SHIFT)) & MTR_MASTER_BISTSEL_SEL6_MASK)

#define MTR_MASTER_BISTSEL_SEL7_MASK             (0x80U)
#define MTR_MASTER_BISTSEL_SEL7_SHIFT            (7U)
#define MTR_MASTER_BISTSEL_SEL7(x)               (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL7_SHIFT)) & MTR_MASTER_BISTSEL_SEL7_MASK)

#define MTR_MASTER_BISTSEL_SEL8_MASK             (0x100U)
#define MTR_MASTER_BISTSEL_SEL8_SHIFT            (8U)
#define MTR_MASTER_BISTSEL_SEL8(x)               (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL8_SHIFT)) & MTR_MASTER_BISTSEL_SEL8_MASK)

#define MTR_MASTER_BISTSEL_SEL9_MASK             (0x200U)
#define MTR_MASTER_BISTSEL_SEL9_SHIFT            (9U)
#define MTR_MASTER_BISTSEL_SEL9(x)               (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL9_SHIFT)) & MTR_MASTER_BISTSEL_SEL9_MASK)

#define MTR_MASTER_BISTSEL_SEL10_MASK            (0x400U)
#define MTR_MASTER_BISTSEL_SEL10_SHIFT           (10U)
#define MTR_MASTER_BISTSEL_SEL10(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL10_SHIFT)) & MTR_MASTER_BISTSEL_SEL10_MASK)

#define MTR_MASTER_BISTSEL_SEL11_MASK            (0x800U)
#define MTR_MASTER_BISTSEL_SEL11_SHIFT           (11U)
#define MTR_MASTER_BISTSEL_SEL11(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL11_SHIFT)) & MTR_MASTER_BISTSEL_SEL11_MASK)

#define MTR_MASTER_BISTSEL_SEL12_MASK            (0x1000U)
#define MTR_MASTER_BISTSEL_SEL12_SHIFT           (12U)
#define MTR_MASTER_BISTSEL_SEL12(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL12_SHIFT)) & MTR_MASTER_BISTSEL_SEL12_MASK)

#define MTR_MASTER_BISTSEL_SEL13_MASK            (0x2000U)
#define MTR_MASTER_BISTSEL_SEL13_SHIFT           (13U)
#define MTR_MASTER_BISTSEL_SEL13(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL13_SHIFT)) & MTR_MASTER_BISTSEL_SEL13_MASK)

#define MTR_MASTER_BISTSEL_SEL14_MASK            (0x4000U)
#define MTR_MASTER_BISTSEL_SEL14_SHIFT           (14U)
#define MTR_MASTER_BISTSEL_SEL14(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL14_SHIFT)) & MTR_MASTER_BISTSEL_SEL14_MASK)

#define MTR_MASTER_BISTSEL_SEL15_MASK            (0x8000U)
#define MTR_MASTER_BISTSEL_SEL15_SHIFT           (15U)
#define MTR_MASTER_BISTSEL_SEL15(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL15_SHIFT)) & MTR_MASTER_BISTSEL_SEL15_MASK)

#define MTR_MASTER_BISTSEL_SEL16_MASK            (0x10000U)
#define MTR_MASTER_BISTSEL_SEL16_SHIFT           (16U)
#define MTR_MASTER_BISTSEL_SEL16(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL16_SHIFT)) & MTR_MASTER_BISTSEL_SEL16_MASK)

#define MTR_MASTER_BISTSEL_SEL17_MASK            (0x20000U)
#define MTR_MASTER_BISTSEL_SEL17_SHIFT           (17U)
#define MTR_MASTER_BISTSEL_SEL17(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL17_SHIFT)) & MTR_MASTER_BISTSEL_SEL17_MASK)

#define MTR_MASTER_BISTSEL_SEL18_MASK            (0x40000U)
#define MTR_MASTER_BISTSEL_SEL18_SHIFT           (18U)
#define MTR_MASTER_BISTSEL_SEL18(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL18_SHIFT)) & MTR_MASTER_BISTSEL_SEL18_MASK)

#define MTR_MASTER_BISTSEL_SEL19_MASK            (0x80000U)
#define MTR_MASTER_BISTSEL_SEL19_SHIFT           (19U)
#define MTR_MASTER_BISTSEL_SEL19(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL19_SHIFT)) & MTR_MASTER_BISTSEL_SEL19_MASK)

#define MTR_MASTER_BISTSEL_SEL20_MASK            (0x100000U)
#define MTR_MASTER_BISTSEL_SEL20_SHIFT           (20U)
#define MTR_MASTER_BISTSEL_SEL20(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL20_SHIFT)) & MTR_MASTER_BISTSEL_SEL20_MASK)

#define MTR_MASTER_BISTSEL_SEL21_MASK            (0x200000U)
#define MTR_MASTER_BISTSEL_SEL21_SHIFT           (21U)
#define MTR_MASTER_BISTSEL_SEL21(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL21_SHIFT)) & MTR_MASTER_BISTSEL_SEL21_MASK)

#define MTR_MASTER_BISTSEL_SEL22_MASK            (0x400000U)
#define MTR_MASTER_BISTSEL_SEL22_SHIFT           (22U)
#define MTR_MASTER_BISTSEL_SEL22(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL22_SHIFT)) & MTR_MASTER_BISTSEL_SEL22_MASK)

#define MTR_MASTER_BISTSEL_SEL23_MASK            (0x800000U)
#define MTR_MASTER_BISTSEL_SEL23_SHIFT           (23U)
#define MTR_MASTER_BISTSEL_SEL23(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL23_SHIFT)) & MTR_MASTER_BISTSEL_SEL23_MASK)

#define MTR_MASTER_BISTSEL_SEL24_MASK            (0x1000000U)
#define MTR_MASTER_BISTSEL_SEL24_SHIFT           (24U)
#define MTR_MASTER_BISTSEL_SEL24(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL24_SHIFT)) & MTR_MASTER_BISTSEL_SEL24_MASK)

#define MTR_MASTER_BISTSEL_SEL25_MASK            (0x2000000U)
#define MTR_MASTER_BISTSEL_SEL25_SHIFT           (25U)
#define MTR_MASTER_BISTSEL_SEL25(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL25_SHIFT)) & MTR_MASTER_BISTSEL_SEL25_MASK)

#define MTR_MASTER_BISTSEL_SEL26_MASK            (0x4000000U)
#define MTR_MASTER_BISTSEL_SEL26_SHIFT           (26U)
#define MTR_MASTER_BISTSEL_SEL26(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL26_SHIFT)) & MTR_MASTER_BISTSEL_SEL26_MASK)

#define MTR_MASTER_BISTSEL_SEL27_MASK            (0x8000000U)
#define MTR_MASTER_BISTSEL_SEL27_SHIFT           (27U)
#define MTR_MASTER_BISTSEL_SEL27(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL27_SHIFT)) & MTR_MASTER_BISTSEL_SEL27_MASK)

#define MTR_MASTER_BISTSEL_SEL28_MASK            (0x10000000U)
#define MTR_MASTER_BISTSEL_SEL28_SHIFT           (28U)
#define MTR_MASTER_BISTSEL_SEL28(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL28_SHIFT)) & MTR_MASTER_BISTSEL_SEL28_MASK)

#define MTR_MASTER_BISTSEL_SEL29_MASK            (0x20000000U)
#define MTR_MASTER_BISTSEL_SEL29_SHIFT           (29U)
#define MTR_MASTER_BISTSEL_SEL29(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL29_SHIFT)) & MTR_MASTER_BISTSEL_SEL29_MASK)

#define MTR_MASTER_BISTSEL_SEL30_MASK            (0x40000000U)
#define MTR_MASTER_BISTSEL_SEL30_SHIFT           (30U)
#define MTR_MASTER_BISTSEL_SEL30(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL30_SHIFT)) & MTR_MASTER_BISTSEL_SEL30_MASK)

#define MTR_MASTER_BISTSEL_SEL31_MASK            (0x80000000U)
#define MTR_MASTER_BISTSEL_SEL31_SHIFT           (31U)
#define MTR_MASTER_BISTSEL_SEL31(x)              (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSEL_SEL31_SHIFT)) & MTR_MASTER_BISTSEL_SEL31_MASK)
/*! @} */

/*! @name BISTSTAT -  */
/*! @{ */

#define MTR_MASTER_BISTSTAT_STAT0_MASK           (0xFU)
#define MTR_MASTER_BISTSTAT_STAT0_SHIFT          (0U)
/*! STAT0 - Reflects the 4-bit status code returned by the last interrupt from this BIST */
#define MTR_MASTER_BISTSTAT_STAT0(x)             (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSTAT_STAT0_SHIFT)) & MTR_MASTER_BISTSTAT_STAT0_MASK)

#define MTR_MASTER_BISTSTAT_STAT1_MASK           (0xF0U)
#define MTR_MASTER_BISTSTAT_STAT1_SHIFT          (4U)
#define MTR_MASTER_BISTSTAT_STAT1(x)             (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSTAT_STAT1_SHIFT)) & MTR_MASTER_BISTSTAT_STAT1_MASK)

#define MTR_MASTER_BISTSTAT_STAT2_MASK           (0xF00U)
#define MTR_MASTER_BISTSTAT_STAT2_SHIFT          (8U)
#define MTR_MASTER_BISTSTAT_STAT2(x)             (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSTAT_STAT2_SHIFT)) & MTR_MASTER_BISTSTAT_STAT2_MASK)

#define MTR_MASTER_BISTSTAT_STAT3_MASK           (0xF000U)
#define MTR_MASTER_BISTSTAT_STAT3_SHIFT          (12U)
#define MTR_MASTER_BISTSTAT_STAT3(x)             (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSTAT_STAT3_SHIFT)) & MTR_MASTER_BISTSTAT_STAT3_MASK)

#define MTR_MASTER_BISTSTAT_STAT4_MASK           (0xF0000U)
#define MTR_MASTER_BISTSTAT_STAT4_SHIFT          (16U)
#define MTR_MASTER_BISTSTAT_STAT4(x)             (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSTAT_STAT4_SHIFT)) & MTR_MASTER_BISTSTAT_STAT4_MASK)

#define MTR_MASTER_BISTSTAT_STAT5_MASK           (0xF00000U)
#define MTR_MASTER_BISTSTAT_STAT5_SHIFT          (20U)
#define MTR_MASTER_BISTSTAT_STAT5(x)             (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSTAT_STAT5_SHIFT)) & MTR_MASTER_BISTSTAT_STAT5_MASK)

#define MTR_MASTER_BISTSTAT_STAT6_MASK           (0xF000000U)
#define MTR_MASTER_BISTSTAT_STAT6_SHIFT          (24U)
#define MTR_MASTER_BISTSTAT_STAT6(x)             (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSTAT_STAT6_SHIFT)) & MTR_MASTER_BISTSTAT_STAT6_MASK)

#define MTR_MASTER_BISTSTAT_STAT7_MASK           (0xF0000000U)
#define MTR_MASTER_BISTSTAT_STAT7_SHIFT          (28U)
#define MTR_MASTER_BISTSTAT_STAT7(x)             (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_BISTSTAT_STAT7_SHIFT)) & MTR_MASTER_BISTSTAT_STAT7_MASK)
/*! @} */

/*! @name SSR -  */
/*! @{ */

#define MTR_MASTER_SSR_SSR_DATA_MASK             (0x1FFFU)
#define MTR_MASTER_SSR_SSR_DATA_SHIFT            (0U)
#define MTR_MASTER_SSR_SSR_DATA(x)               (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_SSR_SSR_DATA_SHIFT)) & MTR_MASTER_SSR_SSR_DATA_MASK)

#define MTR_MASTER_SSR_SSR_ADDR_MASK             (0xFE000U)
#define MTR_MASTER_SSR_SSR_ADDR_SHIFT            (13U)
#define MTR_MASTER_SSR_SSR_ADDR(x)               (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_SSR_SSR_ADDR_SHIFT)) & MTR_MASTER_SSR_SSR_ADDR_MASK)

#define MTR_MASTER_SSR_SSR_ECC_MASK              (0x7F00000U)
#define MTR_MASTER_SSR_SSR_ECC_SHIFT             (20U)
#define MTR_MASTER_SSR_SSR_ECC(x)                (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_SSR_SSR_ECC_SHIFT)) & MTR_MASTER_SSR_SSR_ECC_MASK)
/*! @} */

/*! @name VALREG -  */
/*! @{ */

#define MTR_MASTER_VALREG_VAL_MASK               (0xFFU)
#define MTR_MASTER_VALREG_VAL_SHIFT              (0U)
#define MTR_MASTER_VALREG_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << MTR_MASTER_VALREG_VAL_SHIFT)) & MTR_MASTER_VALREG_VAL_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group MTR_MASTER_Register_Masks */


/*!
 * @}
 */ /* end of group MTR_MASTER_Peripheral_Access_Layer */


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


#endif  /* PERI_MTR_MASTER_H_ */

