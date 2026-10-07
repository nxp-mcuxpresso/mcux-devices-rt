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
**         CMSIS Peripheral Access Layer for INPUTMUX
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
 * @file PERI_INPUTMUX.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for INPUTMUX
 *
 * CMSIS Peripheral Access Layer for INPUTMUX
 */

#if !defined(PERI_INPUTMUX_H_)
#define PERI_INPUTMUX_H_                         /**< Symbol preventing repeated inclusion */

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
   -- INPUTMUX Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup INPUTMUX_Peripheral_Access_Layer INPUTMUX Peripheral Access Layer
 * @{
 */

/** INPUTMUX - Size of Registers Arrays */
#define INPUTMUX_SCT0_INMUX_COUNT                 8u
#define INPUTMUX_TIMER0CAP_COUNT                  4u
#define INPUTMUX_TIMER1CAP_COUNT                  4u
#define INPUTMUX_TIMER2CAP_COUNT                  4u
#define INPUTMUX_TIMER3CAP_COUNT                  4u
#define INPUTMUX_TIMER4CAP_COUNT                  4u
#define INPUTMUX_PINTSEL_COUNT                    8u
#define INPUTMUX_DMA0_ITRIG_INMUX_COUNT           24u
#define INPUTMUX_DMA0_OTRIG_INMUX_COUNT           4u
#define INPUTMUX_PINTSECSEL_COUNT                 2u
#define INPUTMUX_DMA1_ITRIG_INMUX_COUNT           12u
#define INPUTMUX_DMA1_OTRIG_INMUX_COUNT           4u

/** INPUTMUX - Register Layout Typedef */
typedef struct {
  __IO uint32_t SCT0_INMUX[INPUTMUX_SCT0_INMUX_COUNT]; /**< Inputmux register for SCT0 input, array offset: 0x0, array step: 0x4 */
  __IO uint32_t TIMER0CAPTSEL[INPUTMUX_TIMER0CAP_COUNT]; /**< Capture select register for TIMER0 inputs, array offset: 0x20, array step: 0x4 */
  __IO uint32_t TIMER0TRIG;                        /**< Trigger register for TIMER0, offset: 0x30 */
       uint8_t RESERVED_0[12];
  __IO uint32_t TIMER1CAPTSEL[INPUTMUX_TIMER1CAP_COUNT]; /**< Capture select register for TIMER1 inputs, array offset: 0x40, array step: 0x4 */
  __IO uint32_t TIMER1TRIG;                        /**< Trigger register for TIMER1, offset: 0x50 */
       uint8_t RESERVED_1[12];
  __IO uint32_t TIMER2CAPTSEL[INPUTMUX_TIMER2CAP_COUNT]; /**< Capture select register for TIMER2 inputs, array offset: 0x60, array step: 0x4 */
  __IO uint32_t TIMER2TRIG;                        /**< Trigger register for TIMER2, offset: 0x70 */
       uint8_t RESERVED_2[12];
  __IO uint32_t TIMER3CAPTSEL[INPUTMUX_TIMER3CAP_COUNT]; /**< Capture select register for TIMER3 inputs, array offset: 0x80, array step: 0x4 */
  __IO uint32_t TIMER3TRIG;                        /**< Trigger register for TIMER3, offset: 0x90 */
       uint8_t RESERVED_3[12];
  __IO uint32_t TIMER4CAPTSEL[INPUTMUX_TIMER4CAP_COUNT]; /**< Capture select register for TIMER4 inputs, array offset: 0xA0, array step: 0x4 */
  __IO uint32_t TIMER4TRIG;                        /**< Trigger register for TIMER4, offset: 0xB0 */
       uint8_t RESERVED_4[76];
  __IO uint32_t PINTSEL[INPUTMUX_PINTSEL_COUNT];   /**< Pin interrupt select, array offset: 0x100, array step: 0x4 */
  __IO uint32_t DMA0_ITRIG_INMUX[INPUTMUX_DMA0_ITRIG_INMUX_COUNT]; /**< Trigger select for DMA0 channel, array offset: 0x120, array step: 0x4 */
       uint8_t RESERVED_5[32];
  __IO uint32_t DMA0_OTRIG_INMUX[INPUTMUX_DMA0_OTRIG_INMUX_COUNT]; /**< DMA0 output trigger selection for DMA0 input trigger, array offset: 0x1A0, array step: 0x4 */
       uint8_t RESERVED_6[48];
  __IO uint32_t PINTSECSEL[INPUTMUX_PINTSECSEL_COUNT]; /**< Pin interrupt secure select, array offset: 0x1E0, array step: 0x4 */
       uint8_t RESERVED_7[24];
  __IO uint32_t DMA1_ITRIG_INMUX[INPUTMUX_DMA1_ITRIG_INMUX_COUNT]; /**< Trigger select for DMA1 channel, array offset: 0x200, array step: 0x4 */
       uint8_t RESERVED_8[80];
  __IO uint32_t DMA1_OTRIG_INMUX[INPUTMUX_DMA1_OTRIG_INMUX_COUNT]; /**< DMA1 output trigger selection for DMA1 input trigger, array offset: 0x280, array step: 0x4 */
       uint8_t RESERVED_9[1200];
  __IO uint32_t DMA0_REQ_ENA;                      /**< Enable DMA0 requests, offset: 0x740 */
       uint8_t RESERVED_10[4];
  __O  uint32_t DMA0_REQ_ENA_SET;                  /**< Set one or several bits in DMA0_REQ_ENA register, offset: 0x748 */
       uint8_t RESERVED_11[4];
  __O  uint32_t DMA0_REQ_ENA_CLR;                  /**< Clear one or several bits in DMA0_REQ_ENA register, offset: 0x750 */
       uint8_t RESERVED_12[12];
  __IO uint32_t DMA1_REQ_ENA;                      /**< Enable DMA1 requests, offset: 0x760 */
       uint8_t RESERVED_13[4];
  __IO uint32_t DMA1_REQ_ENA_SET;                  /**< Set one or several bits in DMA1_REQ_ENA register, offset: 0x768 */
       uint8_t RESERVED_14[4];
  __IO uint32_t DMA1_REQ_ENA_CLR;                  /**< Clear one or several bits in DMA1_REQ_ENA register, offset: 0x770 */
       uint8_t RESERVED_15[12];
  __IO uint32_t DMA0_ITRIG_ENA;                    /**< Enable DMA0 triggers, offset: 0x780 */
       uint8_t RESERVED_16[4];
  __IO uint32_t DMA0_ITRIG_ENA_SET;                /**< Set one or several bits in DMA0_ITRIG_ENA register, offset: 0x788 */
       uint8_t RESERVED_17[4];
  __IO uint32_t DMA0_ITRIG_ENA_CLR;                /**< Clear one or several bits in DMA0_ITRIG_ENA register, offset: 0x790 */
       uint8_t RESERVED_18[12];
  __IO uint32_t DMA1_ITRIG_ENA;                    /**< Enable DMA1 triggers, offset: 0x7A0 */
       uint8_t RESERVED_19[4];
  __IO uint32_t DMA1_ITRIG_ENA_SET;                /**< Set one or several bits in DMA1_ITRIG_ENA register, offset: 0x7A8 */
       uint8_t RESERVED_20[4];
  __IO uint32_t DMA1_ITRIG_ENA_CLR;                /**< Clear one or several bits in DMA1_ITRIG_ENA register, offset: 0x7B0 */
} INPUTMUX_Type;

/* ----------------------------------------------------------------------------
   -- INPUTMUX Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup INPUTMUX_Register_Masks INPUTMUX Register Masks
 * @{
 */

/*! @name SCT0_INMUX - Inputmux register for SCT0 input */
/*! @{ */

#define INPUTMUX_SCT0_INMUX_INP_N_MASK           (0x1FU)
#define INPUTMUX_SCT0_INMUX_INP_N_SHIFT          (0U)
/*! INP_N - Input number to SCT0 inputs 0 to 7.
 *  0b00000..io_p_sct_gpi_in[0]
 *  0b00001..io_p_sct_gpi_in[1]
 *  0b00010..io_p_sct_gpi_in[2]
 *  0b00011..io_p_sct_gpi_in[3]
 *  0b00100..io_p_sct_gpi_in[4]
 *  0b00101..io_p_sct_gpi_in[5]
 *  0b00110..io_p_sct_gpi_in[6]
 *  0b00111..io_p_sct_gpi_in[7]
 *  0b01000..Input Events SCT MUX0 o/p
 *  0b01001..Input Events SCT MUX1 o/p
 *  0b01010..Input Events SCT MUX2 o/p
 *  0b01011..Input Events SCT MUX3 o/p
 *  0b01100..Input Events SCT MUX4 o/p
 *  0b01101..Input Events SCT MUX5 o/p
 *  0b01110..Input Events SCT MUX6 o/p
 *  0b01111..Input Events SCT MUX7 o/p
 *  0b10000..CTIMER0_MAT0
 *  0b10001..CTIMER1_MAT0
 *  0b10010..CTIMER2_MAT0
 *  0b10011..CTIMER3_MAT0
 *  0b10100..CTIMER4_MAT0
 *  0b10101..io_p_gpio_int_bmatch
 *  0b10110..intr_p_arm_txev
 *  0b10111..DEBUG_HALTED (CM55 HALTED or Crossbreak timer halt )
 *  0b11000-0b11111..Reserved. No inputs selected
 */
#define INPUTMUX_SCT0_INMUX_INP_N(x)             (((uint32_t)(((uint32_t)(x)) << INPUTMUX_SCT0_INMUX_INP_N_SHIFT)) & INPUTMUX_SCT0_INMUX_INP_N_MASK)
/*! @} */

/*! @name TIMER0CAPTSEL - Capture select register for TIMER0 inputs */
/*! @{ */

#define INPUTMUX_TIMER0CAPTSEL_CAPTSEL_MASK      (0x3FU)
#define INPUTMUX_TIMER0CAPTSEL_CAPTSEL_SHIFT     (0U)
/*! CAPTSEL - Input number to TIMER0 capture inputs 0 to 4.
 *  0b000000..io_p_ct_captures[0][0] from uhp_css_top
 *  0b000001..io_p_ct_captures[0][1] from uhp_css_top
 *  0b000010..io_p_ct_captures[0][2] from uhp_css_top
 *  0b000011..io_p_ct_captures[0][3] from uhp_css_top
 *  0b000100..io_p_ct_captures[0][4] from uhp_css_top
 *  0b000101..io_p_ct_captures[0][5] from uhp_css_top
 *  0b000110..io_p_ct_captures[0][6] from uhp_css_top
 *  0b000111..io_p_ct_captures[0][7] from uhp_css_top
 *  0b001000..io_p_ct_captures[0][8] from uhp_css_top
 *  0b001001..io_p_ct_captures[0][9] from uhp_css_top
 *  0b001010..io_p_ct_captures[0][10] from uhp_css_top
 *  0b001011..io_p_ct_captures[0][11] from uhp_css_top
 *  0b001100..io_p_ct_captures[0][12] from uhp_css_top
 *  0b001101..io_p_ct_captures[0][13] from uhp_css_top
 *  0b001110..io_p_ct_captures[0][14] from uhp_css_top
 *  0b001111..io_p_ct_captures[0][15] from uhp_css_top
 *  0b010000..Input Events Ctimer0 MUX0 output
 *  0b010001..Input Events Ctimer0 MUX1 output
 *  0b010010..Input Events Ctimer0 MUX2 output
 *  0b010011..Input Events Ctimer0 MUX3 output
 *  0b010100-0b111111..Reserved. No inputs selected
 */
#define INPUTMUX_TIMER0CAPTSEL_CAPTSEL(x)        (((uint32_t)(((uint32_t)(x)) << INPUTMUX_TIMER0CAPTSEL_CAPTSEL_SHIFT)) & INPUTMUX_TIMER0CAPTSEL_CAPTSEL_MASK)
/*! @} */

/* The count of INPUTMUX_TIMER0CAPTSEL */
#define INPUTMUX_TIMER0CAPTSEL_COUNT             (4U)

/*! @name TIMER0TRIG - Trigger register for TIMER0 */
/*! @{ */

#define INPUTMUX_TIMER0TRIG_TRIGIN_MASK          (0x3FU)
#define INPUTMUX_TIMER0TRIG_TRIGIN_SHIFT         (0U)
/*! TRIGIN - Input number to TIMER0 trigger inputs */
#define INPUTMUX_TIMER0TRIG_TRIGIN(x)            (((uint32_t)(((uint32_t)(x)) << INPUTMUX_TIMER0TRIG_TRIGIN_SHIFT)) & INPUTMUX_TIMER0TRIG_TRIGIN_MASK)
/*! @} */

/*! @name TIMER1CAPTSEL - Capture select register for TIMER1 inputs */
/*! @{ */

#define INPUTMUX_TIMER1CAPTSEL_CAPTSEL_MASK      (0x3FU)
#define INPUTMUX_TIMER1CAPTSEL_CAPTSEL_SHIFT     (0U)
/*! CAPTSEL - Input number to TIMER1 capture inputs 0 to 4.
 *  0b000000..io_p_ct_captures[1][0] from uhp_css_top
 *  0b000001..io_p_ct_captures[1][1] from uhp_css_top
 *  0b000010..io_p_ct_captures[1][2] from uhp_css_top
 *  0b000011..io_p_ct_captures[1][3] from uhp_css_top
 *  0b000100..io_p_ct_captures[1][4] from uhp_css_top
 *  0b000101..io_p_ct_captures[1][5] from uhp_css_top
 *  0b000110..io_p_ct_captures[1][6] from uhp_css_top
 *  0b000111..io_p_ct_captures[1][7] from uhp_css_top
 *  0b001000..io_p_ct_captures[1][8] from uhp_css_top
 *  0b001001..io_p_ct_captures[1][9] from uhp_css_top
 *  0b001010..io_p_ct_captures[1][10] from uhp_css_top
 *  0b001011..io_p_ct_captures[1][11] from uhp_css_top
 *  0b001100..io_p_ct_captures[1][12] from uhp_css_top
 *  0b001101..io_p_ct_captures[1][13] from uhp_css_top
 *  0b001110..io_p_ct_captures[1][14] from uhp_css_top
 *  0b001111..io_p_ct_captures[1][15] from uhp_css_top
 *  0b010000..Input Events Ctimer1 MUX0 output
 *  0b010001..Input Events Ctimer1 MUX1 output
 *  0b010010..Input Events Ctimer1 MUX2 output
 *  0b010011..Input Events Ctimer1 MUX3 output
 *  0b010100-0b111111..Reserved. No inputs selected
 */
#define INPUTMUX_TIMER1CAPTSEL_CAPTSEL(x)        (((uint32_t)(((uint32_t)(x)) << INPUTMUX_TIMER1CAPTSEL_CAPTSEL_SHIFT)) & INPUTMUX_TIMER1CAPTSEL_CAPTSEL_MASK)
/*! @} */

/* The count of INPUTMUX_TIMER1CAPTSEL */
#define INPUTMUX_TIMER1CAPTSEL_COUNT             (4U)

/*! @name TIMER1TRIG - Trigger register for TIMER1 */
/*! @{ */

#define INPUTMUX_TIMER1TRIG_TRIGIN_MASK          (0x3FU)
#define INPUTMUX_TIMER1TRIG_TRIGIN_SHIFT         (0U)
/*! TRIGIN - Input number to TIMER1 trigger inputs */
#define INPUTMUX_TIMER1TRIG_TRIGIN(x)            (((uint32_t)(((uint32_t)(x)) << INPUTMUX_TIMER1TRIG_TRIGIN_SHIFT)) & INPUTMUX_TIMER1TRIG_TRIGIN_MASK)
/*! @} */

/*! @name TIMER2CAPTSEL - Capture select register for TIMER2 inputs */
/*! @{ */

#define INPUTMUX_TIMER2CAPTSEL_CAPTSEL_MASK      (0x3FU)
#define INPUTMUX_TIMER2CAPTSEL_CAPTSEL_SHIFT     (0U)
/*! CAPTSEL - Input number to TIMER2 capture inputs 0 to 4.
 *  0b000000..io_p_ct_captures[2][0] from uhp_css_top
 *  0b000001..io_p_ct_captures[2][1] from uhp_css_top
 *  0b000010..io_p_ct_captures[2][2] from uhp_css_top
 *  0b000011..io_p_ct_captures[2][3] from uhp_css_top
 *  0b000100..io_p_ct_captures[2][4] from uhp_css_top
 *  0b000101..io_p_ct_captures[2][5] from uhp_css_top
 *  0b000110..io_p_ct_captures[2][6] from uhp_css_top
 *  0b000111..io_p_ct_captures[2][7] from uhp_css_top
 *  0b001000..io_p_ct_captures[2][8] from uhp_css_top
 *  0b001001..io_p_ct_captures[2][9] from uhp_css_top
 *  0b001010..io_p_ct_captures[2][10] from uhp_css_top
 *  0b001011..io_p_ct_captures[2][11] from uhp_css_top
 *  0b001100..io_p_ct_captures[2][12] from uhp_css_top
 *  0b001101..io_p_ct_captures[2][13] from uhp_css_top
 *  0b001110..io_p_ct_captures[2][14] from uhp_css_top
 *  0b001111..io_p_ct_captures[2][15] from uhp_css_top
 *  0b010000..Input Events Ctimer2 MUX0 output
 *  0b010001..Input Events Ctimer2 MUX1 output
 *  0b010010..Input Events Ctimer2 MUX2 output
 *  0b010011..Input Events Ctimer2 MUX3 output
 *  0b010100-0b111111..Reserved. No inputs selected
 */
#define INPUTMUX_TIMER2CAPTSEL_CAPTSEL(x)        (((uint32_t)(((uint32_t)(x)) << INPUTMUX_TIMER2CAPTSEL_CAPTSEL_SHIFT)) & INPUTMUX_TIMER2CAPTSEL_CAPTSEL_MASK)
/*! @} */

/* The count of INPUTMUX_TIMER2CAPTSEL */
#define INPUTMUX_TIMER2CAPTSEL_COUNT             (4U)

/*! @name TIMER2TRIG - Trigger register for TIMER2 */
/*! @{ */

#define INPUTMUX_TIMER2TRIG_TRIGIN_MASK          (0x3FU)
#define INPUTMUX_TIMER2TRIG_TRIGIN_SHIFT         (0U)
/*! TRIGIN - Input number to TIMER2 trigger inputs */
#define INPUTMUX_TIMER2TRIG_TRIGIN(x)            (((uint32_t)(((uint32_t)(x)) << INPUTMUX_TIMER2TRIG_TRIGIN_SHIFT)) & INPUTMUX_TIMER2TRIG_TRIGIN_MASK)
/*! @} */

/*! @name TIMER3CAPTSEL - Capture select register for TIMER3 inputs */
/*! @{ */

#define INPUTMUX_TIMER3CAPTSEL_CAPTSEL_MASK      (0x3FU)
#define INPUTMUX_TIMER3CAPTSEL_CAPTSEL_SHIFT     (0U)
/*! CAPTSEL - Input number to TIMER3 capture inputs 0 to 4.
 *  0b000000..io_p_ct_captures[3][0] from uhp_css_top
 *  0b000001..io_p_ct_captures[3][1] from uhp_css_top
 *  0b000010..io_p_ct_captures[3][2] from uhp_css_top
 *  0b000011..io_p_ct_captures[3][3] from uhp_css_top
 *  0b000100..io_p_ct_captures[3][4] from uhp_css_top
 *  0b000101..io_p_ct_captures[3][5] from uhp_css_top
 *  0b000110..io_p_ct_captures[3][6] from uhp_css_top
 *  0b000111..io_p_ct_captures[3][7] from uhp_css_top
 *  0b001000..io_p_ct_captures[3][8] from uhp_css_top
 *  0b001001..io_p_ct_captures[3][9] from uhp_css_top
 *  0b001010..io_p_ct_captures[3][10] from uhp_css_top
 *  0b001011..io_p_ct_captures[3][11] from uhp_css_top
 *  0b001100..io_p_ct_captures[3][12] from uhp_css_top
 *  0b001101..io_p_ct_captures[3][13] from uhp_css_top
 *  0b001110..io_p_ct_captures[3][14] from uhp_css_top
 *  0b001111..io_p_ct_captures[3][15] from uhp_css_top
 *  0b010000..Input Events Ctimer3 MUX0 output
 *  0b010001..Input Events Ctimer3 MUX1 output
 *  0b010010..Input Events Ctimer3 MUX2 output
 *  0b010011..Input Events Ctimer3 MUX3 output
 *  0b010100-0b111111..Reserved. No inputs selected
 */
#define INPUTMUX_TIMER3CAPTSEL_CAPTSEL(x)        (((uint32_t)(((uint32_t)(x)) << INPUTMUX_TIMER3CAPTSEL_CAPTSEL_SHIFT)) & INPUTMUX_TIMER3CAPTSEL_CAPTSEL_MASK)
/*! @} */

/* The count of INPUTMUX_TIMER3CAPTSEL */
#define INPUTMUX_TIMER3CAPTSEL_COUNT             (4U)

/*! @name TIMER3TRIG - Trigger register for TIMER3 */
/*! @{ */

#define INPUTMUX_TIMER3TRIG_TRIGIN_MASK          (0x3FU)
#define INPUTMUX_TIMER3TRIG_TRIGIN_SHIFT         (0U)
/*! TRIGIN - Input number to TIMER3 trigger inputs */
#define INPUTMUX_TIMER3TRIG_TRIGIN(x)            (((uint32_t)(((uint32_t)(x)) << INPUTMUX_TIMER3TRIG_TRIGIN_SHIFT)) & INPUTMUX_TIMER3TRIG_TRIGIN_MASK)
/*! @} */

/*! @name TIMER4CAPTSEL - Capture select register for TIMER4 inputs */
/*! @{ */

#define INPUTMUX_TIMER4CAPTSEL_CAPTSEL_MASK      (0x3FU)
#define INPUTMUX_TIMER4CAPTSEL_CAPTSEL_SHIFT     (0U)
/*! CAPTSEL - Input number to TIMER4 capture inputs 0 to 4.
 *  0b000000..io_p_ct_captures[4][0] from uhp_css_top
 *  0b000001..io_p_ct_captures[4][1] from uhp_css_top
 *  0b000010..io_p_ct_captures[4][2] from uhp_css_top
 *  0b000011..io_p_ct_captures[4][3] from uhp_css_top
 *  0b000100..io_p_ct_captures[4][4] from uhp_css_top
 *  0b000101..io_p_ct_captures[4][5] from uhp_css_top
 *  0b000110..io_p_ct_captures[4][6] from uhp_css_top
 *  0b000111..io_p_ct_captures[4][7] from uhp_css_top
 *  0b001000..io_p_ct_captures[4][8] from uhp_css_top
 *  0b001001..io_p_ct_captures[4][9] from uhp_css_top
 *  0b001010..io_p_ct_captures[4][10] from uhp_css_top
 *  0b001011..io_p_ct_captures[4][11] from uhp_css_top
 *  0b001100..io_p_ct_captures[4][12] from uhp_css_top
 *  0b001101..io_p_ct_captures[4][13] from uhp_css_top
 *  0b001110..io_p_ct_captures[4][14] from uhp_css_top
 *  0b001111..io_p_ct_captures[4][15] from uhp_css_top
 *  0b010000..Input Events Ctimer4 MUX0 output
 *  0b010001..Input Events Ctimer4 MUX1 output
 *  0b010010..Input Events Ctimer4 MUX2 output
 *  0b010011..Input Events Ctimer4 MUX3 output
 *  0b010100-0b111111..Reserved. No inputs selected
 */
#define INPUTMUX_TIMER4CAPTSEL_CAPTSEL(x)        (((uint32_t)(((uint32_t)(x)) << INPUTMUX_TIMER4CAPTSEL_CAPTSEL_SHIFT)) & INPUTMUX_TIMER4CAPTSEL_CAPTSEL_MASK)
/*! @} */

/* The count of INPUTMUX_TIMER4CAPTSEL */
#define INPUTMUX_TIMER4CAPTSEL_COUNT             (4U)

/*! @name TIMER4TRIG - Trigger register for TIMER4 */
/*! @{ */

#define INPUTMUX_TIMER4TRIG_TRIGIN_MASK          (0x3FU)
#define INPUTMUX_TIMER4TRIG_TRIGIN_SHIFT         (0U)
/*! TRIGIN - Input number to TIMER4 trigger inputs */
#define INPUTMUX_TIMER4TRIG_TRIGIN(x)            (((uint32_t)(((uint32_t)(x)) << INPUTMUX_TIMER4TRIG_TRIGIN_SHIFT)) & INPUTMUX_TIMER4TRIG_TRIGIN_MASK)
/*! @} */

/*! @name PINTSEL - Pin interrupt select */
/*! @{ */

#define INPUTMUX_PINTSEL_INTPIN_MASK             (0x7FU)
#define INPUTMUX_PINTSEL_INTPIN_SHIFT            (0U)
/*! INTPIN - Pin number select for pin interrupt or pattern match engine input. For PIOx_y: INTPIN =
 *    (x * 32) + y. PIO0_0 to PIO0_31 correspond to io_p_pad_in[0][31:0] where we are using only 26
 *    bits and PIO1_0 to PIO1_31 correspond to io_p_pad_in[1][31:0] where we are using only 26 bits.
 *  0b0000000..io_p_pad_in[0][0]
 *  0b0000001..io_p_pad_in[0][1]
 *  0b0000010..io_p_pad_in[0][2]
 *  0b0000011..io_p_pad_in[0][3]
 *  0b0000100..io_p_pad_in[0][4]
 *  0b0000101..io_p_pad_in[0][5]
 *  0b0000110..io_p_pad_in[0][6]
 *  0b0000111..io_p_pad_in[0][7]
 *  0b0001000..io_p_pad_in[0][8]
 *  0b0001001..io_p_pad_in[0][9]
 *  0b0001010..io_p_pad_in[0][10]
 *  0b0001011..io_p_pad_in[0][11]
 *  0b0001100..io_p_pad_in[0][12]
 *  0b0001101..io_p_pad_in[0][13]
 *  0b0001110..io_p_pad_in[0][14]
 *  0b0001111..io_p_pad_in[0][15]
 *  0b0010000..io_p_pad_in[0][16]
 *  0b0010001..io_p_pad_in[0][17]
 *  0b0010010..io_p_pad_in[0][18]
 *  0b0010011..io_p_pad_in[0][19]
 *  0b0010100..io_p_pad_in[0][20]
 *  0b0010101..io_p_pad_in[0][21]
 *  0b0010110..io_p_pad_in[0][22]
 *  0b0010111..io_p_pad_in[0][23]
 *  0b0011000..io_p_pad_in[0][24]
 *  0b0011001..io_p_pad_in[0][25]
 *  0b0011010..io_p_pad_in[0][26]-Unused
 *  0b0011011..io_p_pad_in[0][27]-Unused
 *  0b0011100..io_p_pad_in[0][28]-Unused
 *  0b0011101..io_p_pad_in[0][29]-Unused
 *  0b0011110..io_p_pad_in[0][30]-Unused
 *  0b0011111..io_p_pad_in[0][31]-Unused
 *  0b0100000..io_p_pad_in[1][0]
 *  0b0100001..io_p_pad_in[1][1]
 *  0b0100010..io_p_pad_in[1][2]
 *  0b0100011..io_p_pad_in[1][3]
 *  0b0100100..io_p_pad_in[1][4]
 *  0b0100101..io_p_pad_in[1][5]
 *  0b0100110..io_p_pad_in[1][6]
 *  0b0100111..io_p_pad_in[1][7]
 *  0b0101000..io_p_pad_in[1][8]
 *  0b0101001..io_p_pad_in[1][9]
 *  0b0101010..io_p_pad_in[1][10]
 *  0b0101011..io_p_pad_in[1][11]
 *  0b0101100..io_p_pad_in[1][12]
 *  0b0101101..io_p_pad_in[1][13]
 *  0b0101110..io_p_pad_in[1][14]
 *  0b0101111..io_p_pad_in[1][15]
 *  0b0110000..io_p_pad_in[1][16]
 *  0b0110001..io_p_pad_in[1][17]
 *  0b0110010..io_p_pad_in[1][18]
 *  0b0110011..io_p_pad_in[1][19]
 *  0b0110100..io_p_pad_in[1][20]
 *  0b0110101..io_p_pad_in[1][21]
 *  0b0110110..io_p_pad_in[1][22]
 *  0b0110111..io_p_pad_in[1][23]
 *  0b0111000..io_p_pad_in[1][24]
 *  0b0111001..io_p_pad_in[1][25]
 *  0b0111010..io_p_pad_in[1][26]-Unused
 *  0b0111011..io_p_pad_in[1][27]-Unused
 *  0b0111100..io_p_pad_in[1][28]-Unused
 *  0b0111101..io_p_pad_in[1][29]-Unused
 *  0b0111110..io_p_pad_in[1][30]-Unused
 *  0b0111111..io_p_pad_in[1][31]-Unused
 *  0b1000000-0b1111111..Reserved. No input selected
 */
#define INPUTMUX_PINTSEL_INTPIN(x)               (((uint32_t)(((uint32_t)(x)) << INPUTMUX_PINTSEL_INTPIN_SHIFT)) & INPUTMUX_PINTSEL_INTPIN_MASK)
/*! @} */

/*! @name DMA0_ITRIG_INMUX - Trigger select for DMA0 channel */
/*! @{ */

#define INPUTMUX_DMA0_ITRIG_INMUX_INP_MASK       (0x3FU)
#define INPUTMUX_DMA0_ITRIG_INMUX_INP_SHIFT      (0U)
/*! INP - Trigger input number (decimal value) for DMA channel n (n = 0 to 23).
 *  0b000000..intr_irq_pint[0] from A_gpio_int
 *  0b000001..intr_irq_pint[1] from A_gpio_int
 *  0b000010..intr_irq_pint[2] from A_gpio_int
 *  0b000011..intr_irq_pint[3] from A_gpio_int
 *  0b000100..dma_m0_p_breq from A_timer0
 *  0b000101..dma_m1_p_breq from A_timer0
 *  0b000110..dma_m0_p_breq from A_timer1
 *  0b000111..dma_m1_p_breq from A_timer1
 *  0b001000..dma_m0_p_breq from A_timer2
 *  0b001001..dma_m1_p_breq from A_timer2
 *  0b001010..dma_m0_p_breq from A_timer3
 *  0b001011..dma_m1_p_breq from A_timer3
 *  0b001100..dma_m0_p_breq from A_timer4
 *  0b001101..dma_m1_p_breq from A_timer4
 *  0b001110..dma_a_breq from A_sct0
 *  0b001111..dma_b_breq from A_sct0
 *  0b010000..periph_inputs_out[0] from A_dma_infrastructure.A_sdma0_otrigmux
 *  0b010001..periph_inputs_out[1] from A_dma_infrastructure.A_sdma0_otrigmux
 *  0b010010..periph_inputs_out[2] from A_dma_infrastructure.A_sdma0_otrigmux
 *  0b010011..periph_inputs_out[3] from A_dma_infrastructure.A_sdma0_otrigmux
 *  0b010100..Input Events DMA MUX0 o/p
 *  0b010101..Input Events DMA MUX1 o/p
 *  0b010110..Input Events DMA MUX2 o/p
 *  0b010111..Input Events DMA MUX3 o/p
 *  0b011000..Input Events DMA MUX4 o/p
 *  0b011001..Input Events DMA MUX5 o/p
 *  0b011010..Input Events DMA MUX6 o/p
 *  0b011011..Input Events DMA MUX7 o/p
 *  0b011100-0b111111..Reserved. No input selected
 */
#define INPUTMUX_DMA0_ITRIG_INMUX_INP(x)         (((uint32_t)(((uint32_t)(x)) << INPUTMUX_DMA0_ITRIG_INMUX_INP_SHIFT)) & INPUTMUX_DMA0_ITRIG_INMUX_INP_MASK)
/*! @} */

/*! @name DMA0_OTRIG_INMUX - DMA0 output trigger selection for DMA0 input trigger */
/*! @{ */

#define INPUTMUX_DMA0_OTRIG_INMUX_INP_MASK       (0x1FU)
#define INPUTMUX_DMA0_OTRIG_INMUX_INP_SHIFT      (0U)
/*! INP - DMA trigger output number (decimal value) for DMA channel n (n = 0 to 23). */
#define INPUTMUX_DMA0_OTRIG_INMUX_INP(x)         (((uint32_t)(((uint32_t)(x)) << INPUTMUX_DMA0_OTRIG_INMUX_INP_SHIFT)) & INPUTMUX_DMA0_OTRIG_INMUX_INP_MASK)
/*! @} */

/*! @name PINTSECSEL - Pin interrupt secure select */
/*! @{ */

#define INPUTMUX_PINTSECSEL_INTPIN_MASK          (0x7FU)
#define INPUTMUX_PINTSECSEL_INTPIN_SHIFT         (0U)
/*! INTPIN - Pin number select for pin interrupt or pattern match engine input. For PIOx_y: INTPIN =
 *    (x * 32) + y. PIO0_0 to PIO0_31 correspond to io_p_pad_in[0][31:0] where we are using only 26
 *    bits and PIO1_0 to PIO1_31 correspond to io_p_pad_in[1][31:0] where we are using only 26 bits.
 *  0b0000000..io_p_pad_in[0][0]
 *  0b0000001..io_p_pad_in[0][1]
 *  0b0000010..io_p_pad_in[0][2]
 *  0b0000011..io_p_pad_in[0][3]
 *  0b0000100..io_p_pad_in[0][4]
 *  0b0000101..io_p_pad_in[0][5]
 *  0b0000110..io_p_pad_in[0][6]
 *  0b0000111..io_p_pad_in[0][7]
 *  0b0001000..io_p_pad_in[0][8]
 *  0b0001001..io_p_pad_in[0][9]
 *  0b0001010..io_p_pad_in[0][10]
 *  0b0001011..io_p_pad_in[0][11]
 *  0b0001100..io_p_pad_in[0][12]
 *  0b0001101..io_p_pad_in[0][13]
 *  0b0001110..io_p_pad_in[0][14]
 *  0b0001111..io_p_pad_in[0][15]
 *  0b0010000..io_p_pad_in[0][16]
 *  0b0010001..io_p_pad_in[0][17]
 *  0b0010010..io_p_pad_in[0][18]
 *  0b0010011..io_p_pad_in[0][19]
 *  0b0010100..io_p_pad_in[0][20]
 *  0b0010101..io_p_pad_in[0][21]
 *  0b0010110..io_p_pad_in[0][22]
 *  0b0010111..io_p_pad_in[0][23]
 *  0b0011000..io_p_pad_in[0][24]
 *  0b0011001..io_p_pad_in[0][25]
 *  0b0011010..io_p_pad_in[0][26]-Unused
 *  0b0011011..io_p_pad_in[0][27]-Unused
 *  0b0011100..io_p_pad_in[0][28]-Unused
 *  0b0011101..io_p_pad_in[0][29]-Unused
 *  0b0011110..io_p_pad_in[0][30]-Unused
 *  0b0011111..io_p_pad_in[0][31]-Unused
 *  0b0100000..io_p_pad_in[1][0]
 *  0b0100001..io_p_pad_in[1][1]
 *  0b0100010..io_p_pad_in[1][2]
 *  0b0100011..io_p_pad_in[1][3]
 *  0b0100100..io_p_pad_in[1][4]
 *  0b0100101..io_p_pad_in[1][5]
 *  0b0100110..io_p_pad_in[1][6]
 *  0b0100111..io_p_pad_in[1][7]
 *  0b0101000..io_p_pad_in[1][8]
 *  0b0101001..io_p_pad_in[1][9]
 *  0b0101010..io_p_pad_in[1][10]
 *  0b0101011..io_p_pad_in[1][11]
 *  0b0101100..io_p_pad_in[1][12]
 *  0b0101101..io_p_pad_in[1][13]
 *  0b0101110..io_p_pad_in[1][14]
 *  0b0101111..io_p_pad_in[1][15]
 *  0b0110000..io_p_pad_in[1][16]
 *  0b0110001..io_p_pad_in[1][17]
 *  0b0110010..io_p_pad_in[1][18]
 *  0b0110011..io_p_pad_in[1][19]
 *  0b0110100..io_p_pad_in[1][20]
 *  0b0110101..io_p_pad_in[1][21]
 *  0b0110110..io_p_pad_in[1][22]
 *  0b0110111..io_p_pad_in[1][23]
 *  0b0111000..io_p_pad_in[1][24]
 *  0b0111001..io_p_pad_in[1][25]
 *  0b0111010..io_p_pad_in[1][26]-Unused
 *  0b0111011..io_p_pad_in[1][27]-Unused
 *  0b0111100..io_p_pad_in[1][28]-Unused
 *  0b0111101..io_p_pad_in[1][29]-Unused
 *  0b0111110..io_p_pad_in[1][30]-Unused
 *  0b0111111..io_p_pad_in[1][31]-Unused
 *  0b1000000-0b1111111..Reserved. No input selected
 */
#define INPUTMUX_PINTSECSEL_INTPIN(x)            (((uint32_t)(((uint32_t)(x)) << INPUTMUX_PINTSECSEL_INTPIN_SHIFT)) & INPUTMUX_PINTSECSEL_INTPIN_MASK)
/*! @} */

/*! @name DMA1_ITRIG_INMUX - Trigger select for DMA1 channel */
/*! @{ */

#define INPUTMUX_DMA1_ITRIG_INMUX_INP_MASK       (0x3FU)
#define INPUTMUX_DMA1_ITRIG_INMUX_INP_SHIFT      (0U)
/*! INP - Trigger input number (decimal value) for DMA channel n (n = 0 to 23).
 *  0b000000..intr_irq_pint[0] from A_gpio_int
 *  0b000001..intr_irq_pint[1] from A_gpio_int
 *  0b000010..intr_irq_pint[2] from A_gpio_int
 *  0b000011..intr_irq_pint[3] from A_gpio_int
 *  0b000100..dma_m0_p_breq from A_timer0
 *  0b000101..dma_m1_p_breq from A_timer0
 *  0b000110..dma_m0_p_breq from A_timer2
 *  0b000111..dma_m0_p_breq from A_timer4
 *  0b001000..periph_inputs_out[0] from A_dma_infrastructure.A_sdma1_otrigmux
 *  0b001001..periph_inputs_out[1] from A_dma_infrastructure.A_sdma1_otrigmux
 *  0b001010..periph_inputs_out[2] from A_dma_infrastructure.A_sdma1_otrigmux
 *  0b001011..periph_inputs_out[3] from A_dma_infrastructure.A_sdma1_otrigmux
 *  0b001100..dma_a_breq from A_sct0
 *  0b001101..dma_b_breq from A_sct0
 *  0b001110..Input Events DMA MUX0 o/p
 *  0b001111..Input Events DMA MUX1 o/p
 *  0b010000-0b111111..Reserved. No input selected
 */
#define INPUTMUX_DMA1_ITRIG_INMUX_INP(x)         (((uint32_t)(((uint32_t)(x)) << INPUTMUX_DMA1_ITRIG_INMUX_INP_SHIFT)) & INPUTMUX_DMA1_ITRIG_INMUX_INP_MASK)
/*! @} */

/*! @name DMA1_OTRIG_INMUX - DMA1 output trigger selection for DMA1 input trigger */
/*! @{ */

#define INPUTMUX_DMA1_OTRIG_INMUX_INP_MASK       (0x1FU)
#define INPUTMUX_DMA1_OTRIG_INMUX_INP_SHIFT      (0U)
/*! INP - DMA trigger output number (decimal value) for DMA channel n (n = 0 to 23). */
#define INPUTMUX_DMA1_OTRIG_INMUX_INP(x)         (((uint32_t)(((uint32_t)(x)) << INPUTMUX_DMA1_OTRIG_INMUX_INP_SHIFT)) & INPUTMUX_DMA1_OTRIG_INMUX_INP_MASK)
/*! @} */

/*! @name DMA0_REQ_ENA - Enable DMA0 requests */
/*! @{ */

#define INPUTMUX_DMA0_REQ_ENA_REQ_ENA_MASK       (0xFFFFFFU)
#define INPUTMUX_DMA0_REQ_ENA_REQ_ENA_SHIFT      (0U)
/*! REQ_ENA - Controls the 24 request inputs of DMA0. If bit i is '1' the DMA request input #i is enabled. */
#define INPUTMUX_DMA0_REQ_ENA_REQ_ENA(x)         (((uint32_t)(((uint32_t)(x)) << INPUTMUX_DMA0_REQ_ENA_REQ_ENA_SHIFT)) & INPUTMUX_DMA0_REQ_ENA_REQ_ENA_MASK)
/*! @} */

/*! @name DMA0_REQ_ENA_SET - Set one or several bits in DMA0_REQ_ENA register */
/*! @{ */

#define INPUTMUX_DMA0_REQ_ENA_SET_SET_MASK       (0xFFFFFFU)
#define INPUTMUX_DMA0_REQ_ENA_SET_SET_SHIFT      (0U)
/*! SET - Write : If bit #i = 1, bit #i in DMA0_REQ_ENA register is set to 1; if bit #i = 0 , no
 *    change in DMA0_REQ_ENA register Read : Will always return all zeros.
 */
#define INPUTMUX_DMA0_REQ_ENA_SET_SET(x)         (((uint32_t)(((uint32_t)(x)) << INPUTMUX_DMA0_REQ_ENA_SET_SET_SHIFT)) & INPUTMUX_DMA0_REQ_ENA_SET_SET_MASK)
/*! @} */

/*! @name DMA0_REQ_ENA_CLR - Clear one or several bits in DMA0_REQ_ENA register */
/*! @{ */

#define INPUTMUX_DMA0_REQ_ENA_CLR_CLR_MASK       (0xFFFFFFU)
#define INPUTMUX_DMA0_REQ_ENA_CLR_CLR_SHIFT      (0U)
/*! CLR - Write : If bit #i = 1, bit #i in DMA0_REQ_ENA register is reset to 0; if bit #i = 0 , no
 *    change in DMA0_REQ_ENA register Read : Will always return all zeros.
 */
#define INPUTMUX_DMA0_REQ_ENA_CLR_CLR(x)         (((uint32_t)(((uint32_t)(x)) << INPUTMUX_DMA0_REQ_ENA_CLR_CLR_SHIFT)) & INPUTMUX_DMA0_REQ_ENA_CLR_CLR_MASK)
/*! @} */

/*! @name DMA1_REQ_ENA - Enable DMA1 requests */
/*! @{ */

#define INPUTMUX_DMA1_REQ_ENA_REQ_ENA_MASK       (0xFFFU)
#define INPUTMUX_DMA1_REQ_ENA_REQ_ENA_SHIFT      (0U)
/*! REQ_ENA - Controls the 12 request inputs of DMA1. If bit i is '1' the DMA request input #i is enabled. */
#define INPUTMUX_DMA1_REQ_ENA_REQ_ENA(x)         (((uint32_t)(((uint32_t)(x)) << INPUTMUX_DMA1_REQ_ENA_REQ_ENA_SHIFT)) & INPUTMUX_DMA1_REQ_ENA_REQ_ENA_MASK)
/*! @} */

/*! @name DMA1_REQ_ENA_SET - Set one or several bits in DMA1_REQ_ENA register */
/*! @{ */

#define INPUTMUX_DMA1_REQ_ENA_SET_SET_MASK       (0xFFFU)
#define INPUTMUX_DMA1_REQ_ENA_SET_SET_SHIFT      (0U)
/*! SET - Write : If bit #i = 1, bit #i in DMA1_REQ_ENA register is set to 1; if bit #i = 0 , no
 *    change in DMA1_REQ_ENA register Read : Will always return all zeros.
 */
#define INPUTMUX_DMA1_REQ_ENA_SET_SET(x)         (((uint32_t)(((uint32_t)(x)) << INPUTMUX_DMA1_REQ_ENA_SET_SET_SHIFT)) & INPUTMUX_DMA1_REQ_ENA_SET_SET_MASK)
/*! @} */

/*! @name DMA1_REQ_ENA_CLR - Clear one or several bits in DMA1_REQ_ENA register */
/*! @{ */

#define INPUTMUX_DMA1_REQ_ENA_CLR_CLR_MASK       (0xFFFU)
#define INPUTMUX_DMA1_REQ_ENA_CLR_CLR_SHIFT      (0U)
/*! CLR - Write : If bit #i = 1, bit #i in DMA1_REQ_ENA register is reset to 0; if bit #i = 0 , no
 *    change in DMA1_REQ_ENA register Read : Will always return all zeros.
 */
#define INPUTMUX_DMA1_REQ_ENA_CLR_CLR(x)         (((uint32_t)(((uint32_t)(x)) << INPUTMUX_DMA1_REQ_ENA_CLR_CLR_SHIFT)) & INPUTMUX_DMA1_REQ_ENA_CLR_CLR_MASK)
/*! @} */

/*! @name DMA0_ITRIG_ENA - Enable DMA0 triggers */
/*! @{ */

#define INPUTMUX_DMA0_ITRIG_ENA_ITRIG_ENA_MASK   (0xFFFFFFFU)
#define INPUTMUX_DMA0_ITRIG_ENA_ITRIG_ENA_SHIFT  (0U)
/*! ITRIG_ENA - Controls the 28 trigger inputs of DMA0. If bit i is '1' the DMA trigger input #i is enabled. */
#define INPUTMUX_DMA0_ITRIG_ENA_ITRIG_ENA(x)     (((uint32_t)(((uint32_t)(x)) << INPUTMUX_DMA0_ITRIG_ENA_ITRIG_ENA_SHIFT)) & INPUTMUX_DMA0_ITRIG_ENA_ITRIG_ENA_MASK)
/*! @} */

/*! @name DMA0_ITRIG_ENA_SET - Set one or several bits in DMA0_ITRIG_ENA register */
/*! @{ */

#define INPUTMUX_DMA0_ITRIG_ENA_SET_SET_MASK     (0xFFFFFFFU)
#define INPUTMUX_DMA0_ITRIG_ENA_SET_SET_SHIFT    (0U)
/*! SET - Write : If bit #i = 1, bit #i in DMA0_ITRIG_ENA register is reset to 0; if bit #i = 0 , no
 *    change in DMA0_ITRIG_ENA register. Read : Will always return all zeros.
 */
#define INPUTMUX_DMA0_ITRIG_ENA_SET_SET(x)       (((uint32_t)(((uint32_t)(x)) << INPUTMUX_DMA0_ITRIG_ENA_SET_SET_SHIFT)) & INPUTMUX_DMA0_ITRIG_ENA_SET_SET_MASK)
/*! @} */

/*! @name DMA0_ITRIG_ENA_CLR - Clear one or several bits in DMA0_ITRIG_ENA register */
/*! @{ */

#define INPUTMUX_DMA0_ITRIG_ENA_CLR_CLR_MASK     (0xFFFFFFFU)
#define INPUTMUX_DMA0_ITRIG_ENA_CLR_CLR_SHIFT    (0U)
/*! CLR - Write : If bit #i = 1, bit #i in DMA0_ITRIG_ENA register is reset to 0; if bit #i = 0 , no
 *    change in DMA0_ITRIG_ENA register. Read : Will always return all zeros.
 */
#define INPUTMUX_DMA0_ITRIG_ENA_CLR_CLR(x)       (((uint32_t)(((uint32_t)(x)) << INPUTMUX_DMA0_ITRIG_ENA_CLR_CLR_SHIFT)) & INPUTMUX_DMA0_ITRIG_ENA_CLR_CLR_MASK)
/*! @} */

/*! @name DMA1_ITRIG_ENA - Enable DMA1 triggers */
/*! @{ */

#define INPUTMUX_DMA1_ITRIG_ENA_ITRIG_ENA_MASK   (0xFFFFU)
#define INPUTMUX_DMA1_ITRIG_ENA_ITRIG_ENA_SHIFT  (0U)
/*! ITRIG_ENA - Controls the 32 trigger inputs of DMA1. If bit i is '1' the DMA trigger input #i is enabled. */
#define INPUTMUX_DMA1_ITRIG_ENA_ITRIG_ENA(x)     (((uint32_t)(((uint32_t)(x)) << INPUTMUX_DMA1_ITRIG_ENA_ITRIG_ENA_SHIFT)) & INPUTMUX_DMA1_ITRIG_ENA_ITRIG_ENA_MASK)
/*! @} */

/*! @name DMA1_ITRIG_ENA_SET - Set one or several bits in DMA1_ITRIG_ENA register */
/*! @{ */

#define INPUTMUX_DMA1_ITRIG_ENA_SET_SET_MASK     (0xFFFFU)
#define INPUTMUX_DMA1_ITRIG_ENA_SET_SET_SHIFT    (0U)
/*! SET - Write : If bit #i = 1, bit #i in DMA1_ITRIG_ENA register is set to 1; if bit #i = 0 , no
 *    change in DMA1_ITRIG_ENA register Read : Will always return all zeros.
 */
#define INPUTMUX_DMA1_ITRIG_ENA_SET_SET(x)       (((uint32_t)(((uint32_t)(x)) << INPUTMUX_DMA1_ITRIG_ENA_SET_SET_SHIFT)) & INPUTMUX_DMA1_ITRIG_ENA_SET_SET_MASK)
/*! @} */

/*! @name DMA1_ITRIG_ENA_CLR - Clear one or several bits in DMA1_ITRIG_ENA register */
/*! @{ */

#define INPUTMUX_DMA1_ITRIG_ENA_CLR_CLR_MASK     (0xFFFFU)
#define INPUTMUX_DMA1_ITRIG_ENA_CLR_CLR_SHIFT    (0U)
/*! CLR - Write : If bit #i = 1, bit #i in DMA1_ITRIG_ENA register is reset to 0; if bit #i = 0 , no
 *    change in DMA1_ITRIG_ENA register Read : Will always return all zeros.
 */
#define INPUTMUX_DMA1_ITRIG_ENA_CLR_CLR(x)       (((uint32_t)(((uint32_t)(x)) << INPUTMUX_DMA1_ITRIG_ENA_CLR_CLR_SHIFT)) & INPUTMUX_DMA1_ITRIG_ENA_CLR_CLR_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group INPUTMUX_Register_Masks */


/*!
 * @}
 */ /* end of group INPUTMUX_Peripheral_Access_Layer */


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


#endif  /* PERI_INPUTMUX_H_ */

