/*
** ###################################################################
**     Processors:          MIMXRT633SFAWBR
**                          MIMXRT633SFFOB
**                          MIMXRT633SFVKB
**                          MIMXRT685SFAWBR_cm33
**                          MIMXRT685SFAWBR_dsp
**                          MIMXRT685SFFOB_cm33
**                          MIMXRT685SFFOB_dsp
**                          MIMXRT685SFVKB_cm33
**                          MIMXRT685SFVKB_dsp
**                          MIMXRT685SVFVKB_cm33
**                          MIMXRT685SVFVKB_dsp
**
**     Version:             rev. 3.0, 2024-10-29
**     Build:               b250520
**
**     Abstract:
**         CMSIS Peripheral Access Layer for ADC
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2018-06-19)
**         Initial version.
**     - rev. 2.0 (2019-11-12)
**         Base on rev 0.95 RM (B0 Header)
**     - rev. 3.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file PERI_ADC.h
 * @version 3.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for ADC
 *
 * CMSIS Peripheral Access Layer for ADC
 */

#if !defined(PERI_ADC_H_)
#define PERI_ADC_H_                              /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MIMXRT633SFAWBR) || defined(CPU_MIMXRT633SFFOB) || defined(CPU_MIMXRT633SFVKB))
#include "MIMXRT633S_COMMON.h"
#elif (defined(CPU_MIMXRT685SFAWBR_cm33) || defined(CPU_MIMXRT685SFFOB_cm33) || defined(CPU_MIMXRT685SFVKB_cm33) || defined(CPU_MIMXRT685SVFVKB_cm33))
#include "MIMXRT685S_cm33_COMMON.h"
#elif (defined(CPU_MIMXRT685SFAWBR_dsp) || defined(CPU_MIMXRT685SFFOB_dsp) || defined(CPU_MIMXRT685SFVKB_dsp) || defined(CPU_MIMXRT685SVFVKB_dsp))
#include "MIMXRT685S_dsp_COMMON.h"
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
   -- ADC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADC_Peripheral_Access_Layer ADC Peripheral Access Layer
 * @{
 */

/** ADC - Size of Registers Arrays */
#define ADC_TCTRL_COUNT                           16u
#define ADC_CMD_COUNT                             15u
#define ADC_CV_COUNT                              4u

/** ADC - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
       uint8_t RESERVED_0[8];
  __IO uint32_t CTRL;                              /**< ADC Control Register, offset: 0x10 */
  __IO uint32_t STAT;                              /**< ADC Status Register, offset: 0x14 */
  __IO uint32_t IE;                                /**< Interrupt Enable Register, offset: 0x18 */
  __IO uint32_t DE;                                /**< DMA Enable Register, offset: 0x1C */
  __IO uint32_t CFG;                               /**< ADC Configuration Register, offset: 0x20 */
  __IO uint32_t PAUSE;                             /**< ADC Pause Register, offset: 0x24 */
       uint8_t RESERVED_1[8];
  __IO uint32_t FCTRL;                             /**< ADC FIFO Control Register, offset: 0x30 */
  __IO uint32_t SWTRIG;                            /**< Software Trigger Register, offset: 0x34 */
       uint8_t RESERVED_2[136];
  __IO uint32_t TCTRL[ADC_TCTRL_COUNT];            /**< Trigger Control Register, array offset: 0xC0, array step: 0x4 */
  struct {                                         /* offset: 0x100, array step: 0x8 */
    __IO uint32_t CMDL;                              /**< ADC Command Low Buffer Register, array offset: 0x100, array step: 0x8 */
    __IO uint32_t CMDH;                              /**< ADC Command High Buffer Register, array offset: 0x104, array step: 0x8 */
  } CMD[ADC_CMD_COUNT];
       uint8_t RESERVED_3[136];
  __IO uint32_t CV[ADC_CV_COUNT];                  /**< Compare Value Register, array offset: 0x200, array step: 0x4 */
       uint8_t RESERVED_4[240];
  __I  uint32_t RESFIFO;                           /**< ADC Data Result FIFO Register, offset: 0x300 */
} ADC_Type;

/* ----------------------------------------------------------------------------
   -- ADC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADC_Register_Masks ADC Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
/*! @{ */

#define ADC_VERID_RES_MASK                       (0x1U)
#define ADC_VERID_RES_SHIFT                      (0U)
/*! RES - Resolution
 *  0b0..Up to 13-bit differential/12-bit single ended resolution supported.
 *  0b1..Up to 16-bit differential/15-bit single ended resolution supported.
 */
#define ADC_VERID_RES(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_VERID_RES_SHIFT)) & ADC_VERID_RES_MASK)

#define ADC_VERID_DIFFEN_MASK                    (0x2U)
#define ADC_VERID_DIFFEN_SHIFT                   (1U)
/*! DIFFEN - Differential Supported
 *  0b0..Differential operation not supported.
 *  0b1..Differential operation supported. CMDLa[DIFF] and CMDLa[ABSEL] control fields implemented.
 */
#define ADC_VERID_DIFFEN(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_VERID_DIFFEN_SHIFT)) & ADC_VERID_DIFFEN_MASK)

#define ADC_VERID_MVI_MASK                       (0x8U)
#define ADC_VERID_MVI_SHIFT                      (3U)
/*! MVI - Multi Vref Implemented
 *  0b0..Single voltage reference high (VREFH) input supported.
 *  0b1..Multiple voltage reference high (VREFH) inputs supported.
 */
#define ADC_VERID_MVI(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_VERID_MVI_SHIFT)) & ADC_VERID_MVI_MASK)

#define ADC_VERID_CSW_MASK                       (0x70U)
#define ADC_VERID_CSW_SHIFT                      (4U)
/*! CSW - Channel Scale Width
 *  0b000..Channel scaling not supported.
 *  0b001..Channel scaling supported. 1-bit CSCALE control field.
 *  0b110..Channel scaling supported. 6-bit CSCALE control field.
 */
#define ADC_VERID_CSW(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_VERID_CSW_SHIFT)) & ADC_VERID_CSW_MASK)

#define ADC_VERID_VR1RNGI_MASK                   (0x100U)
#define ADC_VERID_VR1RNGI_SHIFT                  (8U)
/*! VR1RNGI - Voltage Reference 1 Range Control Bit Implemented
 *  0b0..Range control not required. CFG[VREF1RNG] is not implemented.
 *  0b1..Range control required. CFG[VREF1RNG] is implemented.
 */
#define ADC_VERID_VR1RNGI(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_VERID_VR1RNGI_SHIFT)) & ADC_VERID_VR1RNGI_MASK)

#define ADC_VERID_IADCKI_MASK                    (0x200U)
#define ADC_VERID_IADCKI_SHIFT                   (9U)
/*! IADCKI - Internal ADC Clock implemented
 *  0b0..Internal clock source not implemented.
 *  0b1..Internal clock source (and CFG[ADCKEN]) implemented.
 */
#define ADC_VERID_IADCKI(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_VERID_IADCKI_SHIFT)) & ADC_VERID_IADCKI_MASK)

#define ADC_VERID_CALOFSI_MASK                   (0x400U)
#define ADC_VERID_CALOFSI_SHIFT                  (10U)
/*! CALOFSI - Calibration Offset Function Implemented
 *  0b0..Offset calibration and offset trimming not implemented.
 *  0b1..Offset calibration and offset trimming implemented.
 */
#define ADC_VERID_CALOFSI(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_VERID_CALOFSI_SHIFT)) & ADC_VERID_CALOFSI_MASK)

#define ADC_VERID_MINOR_MASK                     (0xFF0000U)
#define ADC_VERID_MINOR_SHIFT                    (16U)
/*! MINOR - Minor Version Number */
#define ADC_VERID_MINOR(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_VERID_MINOR_SHIFT)) & ADC_VERID_MINOR_MASK)

#define ADC_VERID_MAJOR_MASK                     (0xFF000000U)
#define ADC_VERID_MAJOR_SHIFT                    (24U)
/*! MAJOR - Major Version Number */
#define ADC_VERID_MAJOR(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_VERID_MAJOR_SHIFT)) & ADC_VERID_MAJOR_MASK)
/*! @} */

/*! @name PARAM - Parameter Register */
/*! @{ */

#define ADC_PARAM_TRIG_NUM_MASK                  (0xFFU)
#define ADC_PARAM_TRIG_NUM_SHIFT                 (0U)
/*! TRIG_NUM - Trigger Number */
#define ADC_PARAM_TRIG_NUM(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_PARAM_TRIG_NUM_SHIFT)) & ADC_PARAM_TRIG_NUM_MASK)

#define ADC_PARAM_FIFOSIZE_MASK                  (0xFF00U)
#define ADC_PARAM_FIFOSIZE_SHIFT                 (8U)
/*! FIFOSIZE - Result FIFO Depth
 *  0b00000001..Result FIFO depth = 1 dataword.
 *  0b00000100..Result FIFO depth = 4 datawords.
 *  0b00001000..Result FIFO depth = 8 datawords.
 *  0b00010000..Result FIFO depth = 16 datawords.
 *  0b00100000..Result FIFO depth = 32 datawords.
 *  0b01000000..Result FIFO depth = 64 datawords.
 */
#define ADC_PARAM_FIFOSIZE(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_PARAM_FIFOSIZE_SHIFT)) & ADC_PARAM_FIFOSIZE_MASK)

#define ADC_PARAM_CV_NUM_MASK                    (0xFF0000U)
#define ADC_PARAM_CV_NUM_SHIFT                   (16U)
/*! CV_NUM - Compare Value Number */
#define ADC_PARAM_CV_NUM(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_PARAM_CV_NUM_SHIFT)) & ADC_PARAM_CV_NUM_MASK)

#define ADC_PARAM_CMD_NUM_MASK                   (0xFF000000U)
#define ADC_PARAM_CMD_NUM_SHIFT                  (24U)
/*! CMD_NUM - Command Buffer Number */
#define ADC_PARAM_CMD_NUM(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_PARAM_CMD_NUM_SHIFT)) & ADC_PARAM_CMD_NUM_MASK)
/*! @} */

/*! @name CTRL - ADC Control Register */
/*! @{ */

#define ADC_CTRL_ADCEN_MASK                      (0x1U)
#define ADC_CTRL_ADCEN_SHIFT                     (0U)
/*! ADCEN - ADC Enable
 *  0b0..ADC is disabled.
 *  0b1..ADC is enabled.
 */
#define ADC_CTRL_ADCEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_ADCEN_SHIFT)) & ADC_CTRL_ADCEN_MASK)

#define ADC_CTRL_RST_MASK                        (0x2U)
#define ADC_CTRL_RST_SHIFT                       (1U)
/*! RST - Software Reset
 *  0b0..ADC logic is not reset.
 *  0b1..ADC logic is reset.
 */
#define ADC_CTRL_RST(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_RST_SHIFT)) & ADC_CTRL_RST_MASK)

#define ADC_CTRL_DOZEN_MASK                      (0x4U)
#define ADC_CTRL_DOZEN_SHIFT                     (2U)
/*! DOZEN - Doze Enable
 *  0b0..ADC is enabled in Doze mode.
 *  0b1..ADC is disabled in Doze mode.
 */
#define ADC_CTRL_DOZEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_DOZEN_SHIFT)) & ADC_CTRL_DOZEN_MASK)

#define ADC_CTRL_RSTFIFO_MASK                    (0x100U)
#define ADC_CTRL_RSTFIFO_SHIFT                   (8U)
/*! RSTFIFO - Reset FIFO
 *  0b0..No effect.
 *  0b1..FIFO is reset.
 */
#define ADC_CTRL_RSTFIFO(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_RSTFIFO_SHIFT)) & ADC_CTRL_RSTFIFO_MASK)
/*! @} */

/*! @name STAT - ADC Status Register */
/*! @{ */

#define ADC_STAT_RDY_MASK                        (0x1U)
#define ADC_STAT_RDY_SHIFT                       (0U)
/*! RDY - Result FIFO Ready Flag
 *  0b0..Result FIFO data level not above watermark level.
 *  0b1..Result FIFO holding data above watermark level.
 */
#define ADC_STAT_RDY(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_STAT_RDY_SHIFT)) & ADC_STAT_RDY_MASK)

#define ADC_STAT_FOF_MASK                        (0x2U)
#define ADC_STAT_FOF_SHIFT                       (1U)
/*! FOF - Result FIFO Overflow Flag
 *  0b0..No result FIFO overflow has occurred since the last time the flag was cleared.
 *  0b1..At least one result FIFO overflow has occurred since the last time the flag was cleared.
 */
#define ADC_STAT_FOF(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_STAT_FOF_SHIFT)) & ADC_STAT_FOF_MASK)

#define ADC_STAT_TRGACT_MASK                     (0xF0000U)
#define ADC_STAT_TRGACT_SHIFT                    (16U)
/*! TRGACT - Trigger Active
 *  0b0000..Command (sequence) associated with Trigger 0 currently being executed.
 *  0b0001..Command (sequence) associated with Trigger 1 currently being executed.
 *  0b1111..Command (sequence) associated with Trigger 15 currently being executed.
 */
#define ADC_STAT_TRGACT(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAT_TRGACT_SHIFT)) & ADC_STAT_TRGACT_MASK)

#define ADC_STAT_CMDACT_MASK                     (0xF000000U)
#define ADC_STAT_CMDACT_SHIFT                    (24U)
/*! CMDACT - Command Active
 *  0b0000..No command is currently in progress.
 *  0b0001..Command 1 currently being executed.
 *  0b0010..Command 2 currently being executed.
 *  0b1111..Command 15 currently being executed.
 */
#define ADC_STAT_CMDACT(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAT_CMDACT_SHIFT)) & ADC_STAT_CMDACT_MASK)
/*! @} */

/*! @name IE - Interrupt Enable Register */
/*! @{ */

#define ADC_IE_FWMIE_MASK                        (0x1U)
#define ADC_IE_FWMIE_SHIFT                       (0U)
/*! FWMIE - FIFO Watermark Interrupt Enable
 *  0b0..FIFO watermark interrupts are not enabled.
 *  0b1..FIFO watermark interrupts are enabled.
 */
#define ADC_IE_FWMIE(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_IE_FWMIE_SHIFT)) & ADC_IE_FWMIE_MASK)

#define ADC_IE_FOFIE_MASK                        (0x2U)
#define ADC_IE_FOFIE_SHIFT                       (1U)
/*! FOFIE - Result FIFO Overflow Interrupt Enable
 *  0b0..FIFO overflow interrupts are not enabled.
 *  0b1..FIFO overflow interrupts are enabled.
 */
#define ADC_IE_FOFIE(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_IE_FOFIE_SHIFT)) & ADC_IE_FOFIE_MASK)
/*! @} */

/*! @name DE - DMA Enable Register */
/*! @{ */

#define ADC_DE_FWMDE_MASK                        (0x1U)
#define ADC_DE_FWMDE_SHIFT                       (0U)
/*! FWMDE - FIFO Watermark DMA Enable
 *  0b0..DMA request disabled.
 *  0b1..DMA request enabled.
 */
#define ADC_DE_FWMDE(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_DE_FWMDE_SHIFT)) & ADC_DE_FWMDE_MASK)
/*! @} */

/*! @name CFG - ADC Configuration Register */
/*! @{ */

#define ADC_CFG_TPRICTRL_MASK                    (0x1U)
#define ADC_CFG_TPRICTRL_SHIFT                   (0U)
/*! TPRICTRL - ADC trigger priority control
 *  0b0..If a higher priority trigger is detected during command processing, the current conversion is aborted and
 *       the new command specified by the trigger is started.
 *  0b1..If a higher priority trigger is received during command processing, the current conversion is completed
 *       (including averaging iterations and compare function if enabled) and stored to the RESFIFO before the
 *       higher priority trigger/command is initiated.
 */
#define ADC_CFG_TPRICTRL(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CFG_TPRICTRL_SHIFT)) & ADC_CFG_TPRICTRL_MASK)

#define ADC_CFG_PWRSEL_MASK                      (0x30U)
#define ADC_CFG_PWRSEL_SHIFT                     (4U)
/*! PWRSEL - Power Configuration Select
 *  0b00..Lowest power setting.
 *  0b01..Next lowest power setting.
 *  0b10......
 *  0b11..Highest power setting.
 */
#define ADC_CFG_PWRSEL(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CFG_PWRSEL_SHIFT)) & ADC_CFG_PWRSEL_MASK)

#define ADC_CFG_REFSEL_MASK                      (0xC0U)
#define ADC_CFG_REFSEL_SHIFT                     (6U)
/*! REFSEL - Voltage Reference Selection
 *  0b00..(Default) Option 1 setting.
 *  0b01..Option 2 setting.
 *  0b10..Option 3 setting.
 *  0b11..Reserved
 */
#define ADC_CFG_REFSEL(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CFG_REFSEL_SHIFT)) & ADC_CFG_REFSEL_MASK)

#define ADC_CFG_PUDLY_MASK                       (0xFF0000U)
#define ADC_CFG_PUDLY_SHIFT                      (16U)
/*! PUDLY - Power Up Delay */
#define ADC_CFG_PUDLY(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CFG_PUDLY_SHIFT)) & ADC_CFG_PUDLY_MASK)

#define ADC_CFG_PWREN_MASK                       (0x10000000U)
#define ADC_CFG_PWREN_SHIFT                      (28U)
/*! PWREN - ADC Analog Pre-Enable
 *  0b0..ADC analog circuits are only enabled while conversions are active. Performance is affected due to analog startup delays.
 *  0b1..ADC analog circuits are pre-enabled and ready to execute conversions without startup delays (at the cost
 *       of higher DC current consumption). When PWREN is set, the power up delay is enforced such that any
 *       detected trigger does not begin ADC operation until the power up delay time has passed.
 */
#define ADC_CFG_PWREN(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CFG_PWREN_SHIFT)) & ADC_CFG_PWREN_MASK)
/*! @} */

/*! @name PAUSE - ADC Pause Register */
/*! @{ */

#define ADC_PAUSE_PAUSEDLY_MASK                  (0x1FFU)
#define ADC_PAUSE_PAUSEDLY_SHIFT                 (0U)
/*! PAUSEDLY - Pause Delay */
#define ADC_PAUSE_PAUSEDLY(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_PAUSE_PAUSEDLY_SHIFT)) & ADC_PAUSE_PAUSEDLY_MASK)

#define ADC_PAUSE_PAUSEEN_MASK                   (0x80000000U)
#define ADC_PAUSE_PAUSEEN_SHIFT                  (31U)
/*! PAUSEEN - PAUSE Option Enable
 *  0b0..Pause operation disabled
 *  0b1..Pause operation enabled
 */
#define ADC_PAUSE_PAUSEEN(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_PAUSE_PAUSEEN_SHIFT)) & ADC_PAUSE_PAUSEEN_MASK)
/*! @} */

/*! @name FCTRL - ADC FIFO Control Register */
/*! @{ */

#define ADC_FCTRL_FCOUNT_MASK                    (0x1FU)
#define ADC_FCTRL_FCOUNT_SHIFT                   (0U)
/*! FCOUNT - Result FIFO counter */
#define ADC_FCTRL_FCOUNT(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_FCTRL_FCOUNT_SHIFT)) & ADC_FCTRL_FCOUNT_MASK)

#define ADC_FCTRL_FWMARK_MASK                    (0xF0000U)
#define ADC_FCTRL_FWMARK_SHIFT                   (16U)
/*! FWMARK - Watermark level selection */
#define ADC_FCTRL_FWMARK(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_FCTRL_FWMARK_SHIFT)) & ADC_FCTRL_FWMARK_MASK)
/*! @} */

/*! @name SWTRIG - Software Trigger Register */
/*! @{ */

#define ADC_SWTRIG_SWT0_MASK                     (0x1U)
#define ADC_SWTRIG_SWT0_SHIFT                    (0U)
/*! SWT0 - Software trigger 0 event
 *  0b0..No trigger 0 event generated.
 *  0b1..Trigger 0 event generated.
 */
#define ADC_SWTRIG_SWT0(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT0_SHIFT)) & ADC_SWTRIG_SWT0_MASK)

#define ADC_SWTRIG_SWT1_MASK                     (0x2U)
#define ADC_SWTRIG_SWT1_SHIFT                    (1U)
/*! SWT1 - Software trigger 1 event
 *  0b0..No trigger 1 event generated.
 *  0b1..Trigger 1 event generated.
 */
#define ADC_SWTRIG_SWT1(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT1_SHIFT)) & ADC_SWTRIG_SWT1_MASK)

#define ADC_SWTRIG_SWT2_MASK                     (0x4U)
#define ADC_SWTRIG_SWT2_SHIFT                    (2U)
/*! SWT2 - Software trigger 2 event
 *  0b0..No trigger 2 event generated.
 *  0b1..Trigger 2 event generated.
 */
#define ADC_SWTRIG_SWT2(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT2_SHIFT)) & ADC_SWTRIG_SWT2_MASK)

#define ADC_SWTRIG_SWT3_MASK                     (0x8U)
#define ADC_SWTRIG_SWT3_SHIFT                    (3U)
/*! SWT3 - Software trigger 3 event
 *  0b0..No trigger 3 event generated.
 *  0b1..Trigger 3 event generated.
 */
#define ADC_SWTRIG_SWT3(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT3_SHIFT)) & ADC_SWTRIG_SWT3_MASK)

#define ADC_SWTRIG_SWT4_MASK                     (0x10U)
#define ADC_SWTRIG_SWT4_SHIFT                    (4U)
/*! SWT4 - Software trigger 4 event
 *  0b0..No trigger 4 event generated.
 *  0b1..Trigger 4 event generated.
 */
#define ADC_SWTRIG_SWT4(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT4_SHIFT)) & ADC_SWTRIG_SWT4_MASK)

#define ADC_SWTRIG_SWT5_MASK                     (0x20U)
#define ADC_SWTRIG_SWT5_SHIFT                    (5U)
/*! SWT5 - Software trigger 5 event
 *  0b0..No trigger 5 event generated.
 *  0b1..Trigger 5 event generated.
 */
#define ADC_SWTRIG_SWT5(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT5_SHIFT)) & ADC_SWTRIG_SWT5_MASK)

#define ADC_SWTRIG_SWT6_MASK                     (0x40U)
#define ADC_SWTRIG_SWT6_SHIFT                    (6U)
/*! SWT6 - Software trigger 6 event
 *  0b0..No trigger 6 event generated.
 *  0b1..Trigger 6 event generated.
 */
#define ADC_SWTRIG_SWT6(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT6_SHIFT)) & ADC_SWTRIG_SWT6_MASK)

#define ADC_SWTRIG_SWT7_MASK                     (0x80U)
#define ADC_SWTRIG_SWT7_SHIFT                    (7U)
/*! SWT7 - Software trigger 7 event
 *  0b0..No trigger 7 event generated.
 *  0b1..Trigger 7 event generated.
 */
#define ADC_SWTRIG_SWT7(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT7_SHIFT)) & ADC_SWTRIG_SWT7_MASK)

#define ADC_SWTRIG_SWT8_MASK                     (0x100U)
#define ADC_SWTRIG_SWT8_SHIFT                    (8U)
/*! SWT8 - Software trigger 8 event
 *  0b0..No trigger 8 event generated.
 *  0b1..Trigger 8 event generated.
 */
#define ADC_SWTRIG_SWT8(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT8_SHIFT)) & ADC_SWTRIG_SWT8_MASK)

#define ADC_SWTRIG_SWT9_MASK                     (0x200U)
#define ADC_SWTRIG_SWT9_SHIFT                    (9U)
/*! SWT9 - Software trigger 9 event
 *  0b0..No trigger 9 event generated.
 *  0b1..Trigger 9 event generated.
 */
#define ADC_SWTRIG_SWT9(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT9_SHIFT)) & ADC_SWTRIG_SWT9_MASK)

#define ADC_SWTRIG_SWT10_MASK                    (0x400U)
#define ADC_SWTRIG_SWT10_SHIFT                   (10U)
/*! SWT10 - Software trigger 10 event
 *  0b0..No trigger 10 event generated.
 *  0b1..Trigger 10 event generated.
 */
#define ADC_SWTRIG_SWT10(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT10_SHIFT)) & ADC_SWTRIG_SWT10_MASK)

#define ADC_SWTRIG_SWT11_MASK                    (0x800U)
#define ADC_SWTRIG_SWT11_SHIFT                   (11U)
/*! SWT11 - Software trigger 11 event
 *  0b0..No trigger 11 event generated.
 *  0b1..Trigger 11 event generated.
 */
#define ADC_SWTRIG_SWT11(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT11_SHIFT)) & ADC_SWTRIG_SWT11_MASK)

#define ADC_SWTRIG_SWT12_MASK                    (0x1000U)
#define ADC_SWTRIG_SWT12_SHIFT                   (12U)
/*! SWT12 - Software trigger 12 event
 *  0b0..No trigger 12 event generated.
 *  0b1..Trigger 12 event generated.
 */
#define ADC_SWTRIG_SWT12(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT12_SHIFT)) & ADC_SWTRIG_SWT12_MASK)

#define ADC_SWTRIG_SWT13_MASK                    (0x2000U)
#define ADC_SWTRIG_SWT13_SHIFT                   (13U)
/*! SWT13 - Software trigger 13 event
 *  0b0..No trigger 13 event generated.
 *  0b1..Trigger 13 event generated.
 */
#define ADC_SWTRIG_SWT13(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT13_SHIFT)) & ADC_SWTRIG_SWT13_MASK)

#define ADC_SWTRIG_SWT14_MASK                    (0x4000U)
#define ADC_SWTRIG_SWT14_SHIFT                   (14U)
/*! SWT14 - Software trigger 14 event
 *  0b0..No trigger 14 event generated.
 *  0b1..Trigger 14 event generated.
 */
#define ADC_SWTRIG_SWT14(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT14_SHIFT)) & ADC_SWTRIG_SWT14_MASK)

#define ADC_SWTRIG_SWT15_MASK                    (0x8000U)
#define ADC_SWTRIG_SWT15_SHIFT                   (15U)
/*! SWT15 - Software trigger 15 event
 *  0b0..No trigger 15 event generated.
 *  0b1..Trigger 15 event generated.
 */
#define ADC_SWTRIG_SWT15(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT15_SHIFT)) & ADC_SWTRIG_SWT15_MASK)
/*! @} */

/*! @name TCTRL - Trigger Control Register */
/*! @{ */

#define ADC_TCTRL_HTEN_MASK                      (0x1U)
#define ADC_TCTRL_HTEN_SHIFT                     (0U)
/*! HTEN - Trigger enable
 *  0b0..Hardware trigger source disabled
 *  0b1..Hardware trigger source enabled
 */
#define ADC_TCTRL_HTEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_TCTRL_HTEN_SHIFT)) & ADC_TCTRL_HTEN_MASK)

#define ADC_TCTRL_TPRI_MASK                      (0xF00U)
#define ADC_TCTRL_TPRI_SHIFT                     (8U)
/*! TPRI - Trigger priority setting
 *  0b0000..Set to highest priority, Level 1
 *  0b0001-0b1110..Set to corresponding priority level
 *  0b1111..Set to lowest priority, Level 16
 */
#define ADC_TCTRL_TPRI(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_TCTRL_TPRI_SHIFT)) & ADC_TCTRL_TPRI_MASK)

#define ADC_TCTRL_TDLY_MASK                      (0xF0000U)
#define ADC_TCTRL_TDLY_SHIFT                     (16U)
/*! TDLY - Trigger delay select */
#define ADC_TCTRL_TDLY(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_TCTRL_TDLY_SHIFT)) & ADC_TCTRL_TDLY_MASK)

#define ADC_TCTRL_TCMD_MASK                      (0xF000000U)
#define ADC_TCTRL_TCMD_SHIFT                     (24U)
/*! TCMD - Trigger command select
 *  0b0000..Not a valid selection from the command buffer. Trigger event is ignored.
 *  0b0001..CMD1 is executed
 *  0b0010-0b1110..Corresponding CMD is executed
 *  0b1111..CMD15 is executed
 */
#define ADC_TCTRL_TCMD(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_TCTRL_TCMD_SHIFT)) & ADC_TCTRL_TCMD_MASK)
/*! @} */

/*! @name CMDL - ADC Command Low Buffer Register */
/*! @{ */

#define ADC_CMDL_ADCH_MASK                       (0x1FU)
#define ADC_CMDL_ADCH_SHIFT                      (0U)
/*! ADCH - Input channel select
 *  0b00000..Select CH0A or CH0B or CH0A/CH0B pair.
 *  0b00001..Select CH1A or CH1B or CH1A/CH1B pair.
 *  0b00010..Select CH2A or CH2B or CH2A/CH2B pair.
 *  0b00011..Select CH3A or CH3B or CH3A/CH3B pair.
 *  0b00100-0b11101..Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
 *  0b11110..Select CH30A or CH30B or CH30A/CH30B pair.
 *  0b11111..Select CH31A or CH31B or CH31A/CH31B pair.
 */
#define ADC_CMDL_ADCH(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CMDL_ADCH_SHIFT)) & ADC_CMDL_ADCH_MASK)

#define ADC_CMDL_ABSEL_MASK                      (0x20U)
#define ADC_CMDL_ABSEL_SHIFT                     (5U)
/*! ABSEL - A-side vs. B-side Select
 *  0b0..When DIFF=0b0, the associated A-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnA-CHnB).
 *  0b1..When DIFF=0b0, the associated B-side channel is converted as single-ended. When DIFF=0b1, the ADC result is (CHnB-CHnA).
 */
#define ADC_CMDL_ABSEL(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CMDL_ABSEL_SHIFT)) & ADC_CMDL_ABSEL_MASK)

#define ADC_CMDL_DIFF_MASK                       (0x40U)
#define ADC_CMDL_DIFF_SHIFT                      (6U)
/*! DIFF - Differential Mode Enable
 *  0b0..Single-ended mode.
 *  0b1..Differential mode.
 */
#define ADC_CMDL_DIFF(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CMDL_DIFF_SHIFT)) & ADC_CMDL_DIFF_MASK)

#define ADC_CMDL_CSCALE_MASK                     (0x2000U)
#define ADC_CMDL_CSCALE_SHIFT                    (13U)
/*! CSCALE - Channel Scale
 *  0b0..Scale selected analog channel (Factor of 30/64)
 *  0b1..(Default) Full scale (Factor of 1)
 */
#define ADC_CMDL_CSCALE(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CMDL_CSCALE_SHIFT)) & ADC_CMDL_CSCALE_MASK)
/*! @} */

/* The count of ADC_CMDL */
#define ADC_CMDL_COUNT                           (15U)

/*! @name CMDH - ADC Command High Buffer Register */
/*! @{ */

#define ADC_CMDH_CMPEN_MASK                      (0x3U)
#define ADC_CMDH_CMPEN_SHIFT                     (0U)
/*! CMPEN - Compare Function Enable
 *  0b00..Compare disabled.
 *  0b01..Reserved
 *  0b10..Compare enabled. Store on true.
 *  0b11..Compare enabled. Repeat channel acquisition (sample/convert/compare) until true.
 */
#define ADC_CMDH_CMPEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_CMPEN_SHIFT)) & ADC_CMDH_CMPEN_MASK)

#define ADC_CMDH_LWI_MASK                        (0x80U)
#define ADC_CMDH_LWI_SHIFT                       (7U)
/*! LWI - Loop with Increment
 *  0b0..Auto channel increment disabled
 *  0b1..Auto channel increment enabled
 */
#define ADC_CMDH_LWI(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_LWI_SHIFT)) & ADC_CMDH_LWI_MASK)

#define ADC_CMDH_STS_MASK                        (0x700U)
#define ADC_CMDH_STS_SHIFT                       (8U)
/*! STS - Sample Time Select
 *  0b000..Minimum sample time of 3 ADCK cycles.
 *  0b001..3 + 2^1 ADCK cycles; 5 ADCK cycles total sample time.
 *  0b010..3 + 2^2 ADCK cycles; 7 ADCK cycles total sample time.
 *  0b011..3 + 2^3 ADCK cycles; 11 ADCK cycles total sample time.
 *  0b100..3 + 2^4 ADCK cycles; 19 ADCK cycles total sample time.
 *  0b101..3 + 2^5 ADCK cycles; 35 ADCK cycles total sample time.
 *  0b110..3 + 2^6 ADCK cycles; 67 ADCK cycles total sample time.
 *  0b111..3 + 2^7 ADCK cycles; 131 ADCK cycles total sample time.
 */
#define ADC_CMDH_STS(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_STS_SHIFT)) & ADC_CMDH_STS_MASK)

#define ADC_CMDH_AVGS_MASK                       (0x7000U)
#define ADC_CMDH_AVGS_SHIFT                      (12U)
/*! AVGS - Hardware Average Select
 *  0b000..Single conversion.
 *  0b001..2 conversions averaged.
 *  0b010..4 conversions averaged.
 *  0b011..8 conversions averaged.
 *  0b100..16 conversions averaged.
 *  0b101..32 conversions averaged.
 *  0b110..64 conversions averaged.
 *  0b111..128 conversions averaged.
 */
#define ADC_CMDH_AVGS(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_AVGS_SHIFT)) & ADC_CMDH_AVGS_MASK)

#define ADC_CMDH_LOOP_MASK                       (0xF0000U)
#define ADC_CMDH_LOOP_SHIFT                      (16U)
/*! LOOP - Loop Count Select
 *  0b0000..Looping not enabled. Command executes 1 time.
 *  0b0001..Loop 1 time. Command executes 2 times.
 *  0b0010..Loop 2 times. Command executes 3 times.
 *  0b0011-0b1110..Loop corresponding number of times. Command executes LOOP+1 times.
 *  0b1111..Loop 15 times. Command executes 16 times.
 */
#define ADC_CMDH_LOOP(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_LOOP_SHIFT)) & ADC_CMDH_LOOP_MASK)

#define ADC_CMDH_NEXT_MASK                       (0xF000000U)
#define ADC_CMDH_NEXT_SHIFT                      (24U)
/*! NEXT - Next Command Select
 *  0b0000..No next command defined. Terminate conversions at completion of current command. If lower priority
 *          trigger pending, begin command associated with lower priority trigger.
 *  0b0001..Select CMD1 command buffer register as next command.
 *  0b0010-0b1110..Select corresponding CMD command buffer register as next command
 *  0b1111..Select CMD15 command buffer register as next command.
 */
#define ADC_CMDH_NEXT(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_NEXT_SHIFT)) & ADC_CMDH_NEXT_MASK)
/*! @} */

/* The count of ADC_CMDH */
#define ADC_CMDH_COUNT                           (15U)

/*! @name CV - Compare Value Register */
/*! @{ */

#define ADC_CV_CVL_MASK                          (0xFFFFU)
#define ADC_CV_CVL_SHIFT                         (0U)
/*! CVL - Compare Value Low. */
#define ADC_CV_CVL(x)                            (((uint32_t)(((uint32_t)(x)) << ADC_CV_CVL_SHIFT)) & ADC_CV_CVL_MASK)

#define ADC_CV_CVH_MASK                          (0xFFFF0000U)
#define ADC_CV_CVH_SHIFT                         (16U)
/*! CVH - Compare Value High. */
#define ADC_CV_CVH(x)                            (((uint32_t)(((uint32_t)(x)) << ADC_CV_CVH_SHIFT)) & ADC_CV_CVH_MASK)
/*! @} */

/*! @name RESFIFO - ADC Data Result FIFO Register */
/*! @{ */

#define ADC_RESFIFO_D_MASK                       (0xFFFFU)
#define ADC_RESFIFO_D_SHIFT                      (0U)
/*! D - Data result */
#define ADC_RESFIFO_D(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_RESFIFO_D_SHIFT)) & ADC_RESFIFO_D_MASK)

#define ADC_RESFIFO_TSRC_MASK                    (0xF0000U)
#define ADC_RESFIFO_TSRC_SHIFT                   (16U)
/*! TSRC - Trigger Source
 *  0b0000..Trigger source 0 initiated this conversion.
 *  0b0001..Trigger source 1 initiated this conversion.
 *  0b0010-0b1110..Corresponding trigger source initiated this conversion.
 *  0b1111..Trigger source 15 initiated this conversion.
 */
#define ADC_RESFIFO_TSRC(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_RESFIFO_TSRC_SHIFT)) & ADC_RESFIFO_TSRC_MASK)

#define ADC_RESFIFO_LOOPCNT_MASK                 (0xF00000U)
#define ADC_RESFIFO_LOOPCNT_SHIFT                (20U)
/*! LOOPCNT - Loop count value
 *  0b0000..Result is from initial conversion in command.
 *  0b0001..Result is from second conversion in command.
 *  0b0010-0b1110..Result is from LOOPCNT+1 conversion in command.
 *  0b1111..Result is from 16th conversion in command.
 */
#define ADC_RESFIFO_LOOPCNT(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_RESFIFO_LOOPCNT_SHIFT)) & ADC_RESFIFO_LOOPCNT_MASK)

#define ADC_RESFIFO_CMDSRC_MASK                  (0xF000000U)
#define ADC_RESFIFO_CMDSRC_SHIFT                 (24U)
/*! CMDSRC - Command Buffer Source
 *  0b0000..Not a valid value CMDSRC value for a dataword in RESFIFO. 0x0 is only found in initial FIFO state
 *          prior to an ADC conversion result dataword being stored to a RESFIFO buffer.
 *  0b0001..CMD1 buffer used as control settings for this conversion.
 *  0b0010-0b1110..Corresponding command buffer used as control settings for this conversion.
 *  0b1111..CMD15 buffer used as control settings for this conversion.
 */
#define ADC_RESFIFO_CMDSRC(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_RESFIFO_CMDSRC_SHIFT)) & ADC_RESFIFO_CMDSRC_MASK)

#define ADC_RESFIFO_VALID_MASK                   (0x80000000U)
#define ADC_RESFIFO_VALID_SHIFT                  (31U)
/*! VALID - FIFO entry is valid
 *  0b0..FIFO is empty. Discard any read from RESFIFO.
 *  0b1..FIFO record read from RESFIFO is valid.
 */
#define ADC_RESFIFO_VALID(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_RESFIFO_VALID_SHIFT)) & ADC_RESFIFO_VALID_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADC_Register_Masks */


/*!
 * @}
 */ /* end of group ADC_Peripheral_Access_Layer */


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


#endif  /* PERI_ADC_H_ */

