/*
 * Copyright 2026 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _FSL_INPUTMUX_CONNECTIONS_
#define _FSL_INPUTMUX_CONNECTIONS_

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.inputmux_connections"
#endif

/*! @name Driver version */
/*@{*/
/*! @brief INPUTMUX_CONNECTION driver version 2.0.0. */
#define FSL_INPUTMUX_CONNECTION_DRIVER_VERSION (MAKE_VERSION(2, 0, 0))
/*@}*/

/*!
 * @addtogroup inputmux_driver
 * @{
 */

/*!
 * @name Input multiplexing connections
 * @{
 */

/*! @brief Periphinmux IDs */
#define SCT0_INMUXn_REG  0x0U
#define TIMER0CAPTSELn_REG 0x20U
#define TIMER1CAPTSELn_REG 0x40U
#define TIMER2CAPTSELn_REG 0x60U
#define TIMER3CAPTSELn_REG 0x80U
#define TIMER4CAPTSELn_REG 0xA0U
#define PINTSELn_REG     0x100U
#define DMA0_ITRIG_INMUXn_REG 0x120U
#define DMA0_OTRIG_INMUXn_REG 0x1A0U
#define DMA1_ITRIG_INMUXn_REG 0x200U
#define PINTSECSELn_REG  0x1E0U
#define DMA1_OTRIG_INMUXn_REG 0x280U
#define DMA0_REQ_ENA_REG 0x740U
#define DMA1_REQ_ENA_REG 0x760U
#define DMA0_ITRIG_ENA_REG 0x780U
#define DMA1_ITRIG_ENA_REG 0x7A0U
#define TIMER0TRIG_REG   0x30U
#define TIMER1TRIG_REG   0x50U
#define TIMER2TRIG_REG   0x70U
#define TIMER3TRIG_REG   0x90U
#define TIMER4TRIG_REG   0xB0U


#define ENA_SHIFT 8U
#define PMUX_SHIFT 20U

typedef enum _inputmux_index_t
{
    kINPUTMUX_INDEX_SCT0_INMUX0      = 0U,
    kINPUTMUX_INDEX_SCT0_INMUX1      = 1U,
    kINPUTMUX_INDEX_SCT0_INMUX2      = 2U,
    kINPUTMUX_INDEX_SCT0_INMUX3      = 3U,
    kINPUTMUX_INDEX_SCT0_INMUX4      = 4U,
    kINPUTMUX_INDEX_SCT0_INMUX5      = 5U,
    kINPUTMUX_INDEX_SCT0_INMUX6      = 6U,
    kINPUTMUX_INDEX_SCT0_INMUX7      = 7U,
    kINPUTMUX_INDEX_TIMER0CAPTSEL0   = 0U,
    kINPUTMUX_INDEX_TIMER0CAPTSEL1   = 1U,
    kINPUTMUX_INDEX_TIMER0CAPTSEL2   = 2U,
    kINPUTMUX_INDEX_TIMER0CAPTSEL3   = 3U,
    kINPUTMUX_INDEX_TIMER1CAPTSEL0   = 0U,
    kINPUTMUX_INDEX_TIMER1CAPTSEL1   = 1U,
    kINPUTMUX_INDEX_TIMER1CAPTSEL2   = 2U,
    kINPUTMUX_INDEX_TIMER1CAPTSEL3   = 3U,
    kINPUTMUX_INDEX_TIMER2CAPTSEL0   = 0U,
    kINPUTMUX_INDEX_TIMER2CAPTSEL1   = 1U,
    kINPUTMUX_INDEX_TIMER2CAPTSEL2   = 2U,
    kINPUTMUX_INDEX_TIMER2CAPTSEL3   = 3U,
    kINPUTMUX_INDEX_TIMER3CAPTSEL0   = 0U,
    kINPUTMUX_INDEX_TIMER3CAPTSEL1   = 1U,
    kINPUTMUX_INDEX_TIMER3CAPTSEL2   = 2U,
    kINPUTMUX_INDEX_TIMER3CAPTSEL3   = 3U,
    kINPUTMUX_INDEX_TIMER4CAPTSEL0   = 0U,
    kINPUTMUX_INDEX_TIMER4CAPTSEL1   = 1U,
    kINPUTMUX_INDEX_TIMER4CAPTSEL2   = 2U,
    kINPUTMUX_INDEX_TIMER4CAPTSEL3   = 3U,
    kINPUTMUX_INDEX_PINTSEL0         = 0U,
    kINPUTMUX_INDEX_PINTSEL1         = 1U,
    kINPUTMUX_INDEX_PINTSEL2         = 2U,
    kINPUTMUX_INDEX_PINTSEL3         = 3U,
    kINPUTMUX_INDEX_PINTSEL4         = 4U,
    kINPUTMUX_INDEX_PINTSEL5         = 5U,
    kINPUTMUX_INDEX_PINTSEL6         = 6U,
    kINPUTMUX_INDEX_PINTSEL7         = 7U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX0 = 0U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX1 = 1U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX2 = 2U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX3 = 3U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX4 = 4U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX5 = 5U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX6 = 6U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX7 = 7U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX8 = 8U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX9 = 9U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX10 = 10U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX11 = 11U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX12 = 12U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX13 = 13U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX14 = 14U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX15 = 15U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX16 = 16U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX17 = 17U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX18 = 18U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX19 = 19U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX20 = 20U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX21 = 21U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX22 = 22U,
    kINPUTMUX_INDEX_DMA0_ITRIG_INMUX23 = 23U,
    kINPUTMUX_INDEX_DMA0_OTRIG_INMUX0 = 0U,
    kINPUTMUX_INDEX_DMA0_OTRIG_INMUX1 = 1U,
    kINPUTMUX_INDEX_DMA0_OTRIG_INMUX2 = 2U,
    kINPUTMUX_INDEX_DMA0_OTRIG_INMUX3 = 3U,
    kINPUTMUX_INDEX_DMA1_ITRIG_INMUX0 = 0U,
    kINPUTMUX_INDEX_DMA1_ITRIG_INMUX1 = 1U,
    kINPUTMUX_INDEX_DMA1_ITRIG_INMUX2 = 2U,
    kINPUTMUX_INDEX_DMA1_ITRIG_INMUX3 = 3U,
    kINPUTMUX_INDEX_DMA1_ITRIG_INMUX4 = 4U,
    kINPUTMUX_INDEX_DMA1_ITRIG_INMUX5 = 5U,
    kINPUTMUX_INDEX_DMA1_ITRIG_INMUX6 = 6U,
    kINPUTMUX_INDEX_DMA1_ITRIG_INMUX7 = 7U,
    kINPUTMUX_INDEX_DMA1_ITRIG_INMUX8 = 8U,
    kINPUTMUX_INDEX_DMA1_ITRIG_INMUX9 = 9U,
    kINPUTMUX_INDEX_DMA1_ITRIG_INMUX10 = 10U,
    kINPUTMUX_INDEX_DMA1_ITRIG_INMUX11 = 11U,
    kINPUTMUX_INDEX_PINTSECSEL0      = 0U,
    kINPUTMUX_INDEX_PINTSECSEL1      = 1U,
    kINPUTMUX_INDEX_DMA1_OTRIG_INMUX0 = 0U,
    kINPUTMUX_INDEX_DMA1_OTRIG_INMUX1 = 1U,
    kINPUTMUX_INDEX_DMA1_OTRIG_INMUX2 = 2U,
    kINPUTMUX_INDEX_DMA1_OTRIG_INMUX3 = 3U,
    kINPUTMUX_INDEX_DMA0_REQ_ENA     = 0U,
    kINPUTMUX_INDEX_DMA1_REQ_ENA     = 0U,
    kINPUTMUX_INDEX_DMA0_ITRIG_ENA   = 0U,
    kINPUTMUX_INDEX_DMA1_ITRIG_ENA   = 0U,
    kINPUTMUX_INDEX_TIMER0TRIG       = 0U,
    kINPUTMUX_INDEX_TIMER1TRIG       = 0U,
    kINPUTMUX_INDEX_TIMER2TRIG       = 0U,
    kINPUTMUX_INDEX_TIMER3TRIG       = 0U,
    kINPUTMUX_INDEX_TIMER4TRIG       = 0U,

} inputmux_index_t;

/*! @brief INPUTMUX connections type */
typedef enum _inputmux_connection_t
{
    /*!< SCT0_INMUXn: Inputmux register for SCT0 input */
    kINPUTMUX_IoPSctGpiIn0ToSct0Inmuxn             = 0U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< io_p_sct_gpi_in[0] */
    kINPUTMUX_IoPSctGpiIn1ToSct0Inmuxn             = 1U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< io_p_sct_gpi_in[1] */
    kINPUTMUX_IoPSctGpiIn2ToSct0Inmuxn             = 2U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< io_p_sct_gpi_in[2] */
    kINPUTMUX_IoPSctGpiIn3ToSct0Inmuxn             = 3U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< io_p_sct_gpi_in[3] */
    kINPUTMUX_IoPSctGpiIn4ToSct0Inmuxn             = 4U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< io_p_sct_gpi_in[4] */
    kINPUTMUX_IoPSctGpiIn5ToSct0Inmuxn             = 5U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< io_p_sct_gpi_in[5] */
    kINPUTMUX_IoPSctGpiIn6ToSct0Inmuxn             = 6U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< io_p_sct_gpi_in[6] */
    kINPUTMUX_IoPSctGpiIn7ToSct0Inmuxn             = 7U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< io_p_sct_gpi_in[7] */
    kINPUTMUX_InEvnsctmux0ToSct0Inmuxn             = 8U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< input events sct mux0 o/p */
    kINPUTMUX_InEvnsctmux1ToSct0Inmuxn             = 9U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< input events sct mux1 o/p */
    kINPUTMUX_InEvnsctmux2ToSct0Inmuxn             = 10U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< input events sct mux2 o/p */
    kINPUTMUX_InEvnsctmux3ToSct0Inmuxn             = 11U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< input events sct mux3 o/p */
    kINPUTMUX_InEvnsctmux4ToSct0Inmuxn             = 12U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< input events sct mux4 o/p */
    kINPUTMUX_InEvnsctmux5ToSct0Inmuxn             = 13U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< input events sct mux5 o/p */
    kINPUTMUX_InEvnsctmux6ToSct0Inmuxn             = 14U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< input events sct mux6 o/p */
    kINPUTMUX_InEvnsctmux7ToSct0Inmuxn             = 15U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< input events sct mux7 o/p */
    kINPUTMUX_Ctimer0Mat0ToSct0Inmuxn              = 16U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< ctimer0_mat0 */
    kINPUTMUX_Ctimer1Mat0ToSct0Inmuxn              = 17U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< ctimer1_mat0 */
    kINPUTMUX_Ctimer2Mat0ToSct0Inmuxn              = 18U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< ctimer2_mat0 */
    kINPUTMUX_Ctimer3Mat0ToSct0Inmuxn              = 19U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< ctimer3_mat0 */
    kINPUTMUX_Ctimer4Mat0ToSct0Inmuxn              = 20U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< ctimer4_mat0 */
    kINPUTMUX_IoPGpioIntBmatchToSct0Inmuxn         = 21U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< io_p_gpio_int_bmatch */
    kINPUTMUX_IntrPArmTxevToSct0Inmuxn             = 22U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< intr_p_arm_txev */
    kINPUTMUX_DebugHaltedToSct0Inmuxn              = 23U + (SCT0_INMUXn_REG << PMUX_SHIFT),  /*!< debug_halted (cm55 halted or crossbreak timer halt ) */

    /*!< TIMER0CAPTSELn: Capture select register for TIMER0 inputs */
    kINPUTMUX_IoPCtCapt0_0ToTIMER0CAPTSELn         = 0U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][0] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_1ToTIMER0CAPTSELn         = 1U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][1] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_2ToTIMER0CAPTSELn         = 2U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][2] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_3ToTIMER0CAPTSELn         = 3U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][3] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_4ToTIMER0CAPTSELn         = 4U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][4] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_5ToTIMER0CAPTSELn         = 5U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][5] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_6ToTIMER0CAPTSELn         = 6U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][6] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_7ToTIMER0CAPTSELn         = 7U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][7] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_8ToTIMER0CAPTSELn         = 8U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][8] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_9ToTIMER0CAPTSELn         = 9U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][9] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_10ToTIMER0CAPTSELn        = 10U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][10] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_11ToTIMER0CAPTSELn        = 11U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][11] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_12ToTIMER0CAPTSELn        = 12U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][12] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_13ToTIMER0CAPTSELn        = 13U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][13] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_14ToTIMER0CAPTSELn        = 14U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][14] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_15ToTIMER0CAPTSELn        = 15U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][15] from uhp_css_top */
    kINPUTMUX_InEvnctimer0mux0outToTIMER0CAPTSELn  = 16U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer0 mux0 output */
    kINPUTMUX_InEvnctimer0mux1outToTIMER0CAPTSELn  = 17U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer0 mux1 output */
    kINPUTMUX_InEvnctimer0mux2outToTIMER0CAPTSELn  = 18U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer0 mux2 output */
    kINPUTMUX_InEvnctimer0mux3outToTIMER0CAPTSELn  = 19U + (TIMER0CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer0 mux3 output */

    /*!< TIMER1CAPTSELn: Capture select register for TIMER1 inputs */
    kINPUTMUX_IoPCtCapt1_0ToTIMER1CAPTSELn         = 0U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][0] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_1ToTIMER1CAPTSELn         = 1U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][1] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_2ToTIMER1CAPTSELn         = 2U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][2] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_3ToTIMER1CAPTSELn         = 3U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][3] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_4ToTIMER1CAPTSELn         = 4U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][4] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_5ToTIMER1CAPTSELn         = 5U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][5] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_6ToTIMER1CAPTSELn         = 6U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][6] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_7ToTIMER1CAPTSELn         = 7U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][7] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_8ToTIMER1CAPTSELn         = 8U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][8] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_9ToTIMER1CAPTSELn         = 9U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][9] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_10ToTIMER1CAPTSELn        = 10U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][10] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_11ToTIMER1CAPTSELn        = 11U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][11] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_12ToTIMER1CAPTSELn        = 12U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][12] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_13ToTIMER1CAPTSELn        = 13U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][13] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_14ToTIMER1CAPTSELn        = 14U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][14] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_15ToTIMER1CAPTSELn        = 15U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][15] from uhp_css_top */
    kINPUTMUX_InEvnctimer1mux0outToTIMER1CAPTSELn  = 16U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer1 mux0 output */
    kINPUTMUX_InEvnctimer1mux1outToTIMER1CAPTSELn  = 17U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer1 mux1 output */
    kINPUTMUX_InEvnctimer1mux2outToTIMER1CAPTSELn  = 18U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer1 mux2 output */
    kINPUTMUX_InEvnctimer1mux3outToTIMER1CAPTSELn  = 19U + (TIMER1CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer1 mux3 output */

    /*!< TIMER2CAPTSELn: Capture select register for TIMER2 inputs */
    kINPUTMUX_IoPCtCapt2_0ToTIMER2CAPTSELn         = 0U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][0] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_1ToTIMER2CAPTSELn         = 1U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][1] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_2ToTIMER2CAPTSELn         = 2U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][2] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_3ToTIMER2CAPTSELn         = 3U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][3] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_4ToTIMER2CAPTSELn         = 4U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][4] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_5ToTIMER2CAPTSELn         = 5U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][5] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_6ToTIMER2CAPTSELn         = 6U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][6] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_7ToTIMER2CAPTSELn         = 7U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][7] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_8ToTIMER2CAPTSELn         = 8U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][8] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_9ToTIMER2CAPTSELn         = 9U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][9] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_10ToTIMER2CAPTSELn        = 10U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][10] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_11ToTIMER2CAPTSELn        = 11U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][11] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_12ToTIMER2CAPTSELn        = 12U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][12] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_13ToTIMER2CAPTSELn        = 13U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][13] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_14ToTIMER2CAPTSELn        = 14U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][14] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_15ToTIMER2CAPTSELn        = 15U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][15] from uhp_css_top */
    kINPUTMUX_InEvnctimer2mux0outToTIMER2CAPTSELn  = 16U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer2 mux0 output */
    kINPUTMUX_InEvnctimer2mux1outToTIMER2CAPTSELn  = 17U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer2 mux1 output */
    kINPUTMUX_InEvnctimer2mux2outToTIMER2CAPTSELn  = 18U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer2 mux2 output */
    kINPUTMUX_InEvnctimer2mux3outToTIMER2CAPTSELn  = 19U + (TIMER2CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer2 mux3 output */

    /*!< TIMER3CAPTSELn: Capture select register for TIMER3 inputs */
    kINPUTMUX_IoPCtCapt3_0ToTIMER3CAPTSELn         = 0U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][0] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_1ToTIMER3CAPTSELn         = 1U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][1] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_2ToTIMER3CAPTSELn         = 2U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][2] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_3ToTIMER3CAPTSELn         = 3U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][3] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_4ToTIMER3CAPTSELn         = 4U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][4] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_5ToTIMER3CAPTSELn         = 5U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][5] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_6ToTIMER3CAPTSELn         = 6U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][6] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_7ToTIMER3CAPTSELn         = 7U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][7] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_8ToTIMER3CAPTSELn         = 8U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][8] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_9ToTIMER3CAPTSELn         = 9U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][9] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_10ToTIMER3CAPTSELn        = 10U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][10] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_11ToTIMER3CAPTSELn        = 11U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][11] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_12ToTIMER3CAPTSELn        = 12U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][12] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_13ToTIMER3CAPTSELn        = 13U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][13] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_14ToTIMER3CAPTSELn        = 14U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][14] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_15ToTIMER3CAPTSELn        = 15U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][15] from uhp_css_top */
    kINPUTMUX_InEvnctimer3mux0outToTIMER3CAPTSELn  = 16U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer3 mux0 output */
    kINPUTMUX_InEvnctimer3mux1outToTIMER3CAPTSELn  = 17U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer3 mux1 output */
    kINPUTMUX_InEvnctimer3mux2outToTIMER3CAPTSELn  = 18U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer3 mux2 output */
    kINPUTMUX_InEvnctimer3mux3outToTIMER3CAPTSELn  = 19U + (TIMER3CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer3 mux3 output */

    /*!< TIMER4CAPTSELn: Capture select register for TIMER4 inputs */
    kINPUTMUX_IoPCtCapt4_0ToTIMER4CAPTSELn         = 0U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][0] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_1ToTIMER4CAPTSELn         = 1U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][1] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_2ToTIMER4CAPTSELn         = 2U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][2] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_3ToTIMER4CAPTSELn         = 3U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][3] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_4ToTIMER4CAPTSELn         = 4U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][4] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_5ToTIMER4CAPTSELn         = 5U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][5] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_6ToTIMER4CAPTSELn         = 6U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][6] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_7ToTIMER4CAPTSELn         = 7U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][7] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_8ToTIMER4CAPTSELn         = 8U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][8] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_9ToTIMER4CAPTSELn         = 9U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][9] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_10ToTIMER4CAPTSELn        = 10U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][10] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_11ToTIMER4CAPTSELn        = 11U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][11] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_12ToTIMER4CAPTSELn        = 12U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][12] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_13ToTIMER4CAPTSELn        = 13U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][13] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_14ToTIMER4CAPTSELn        = 14U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][14] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_15ToTIMER4CAPTSELn        = 15U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][15] from uhp_css_top */
    kINPUTMUX_InEvnctimer4mux0outToTIMER4CAPTSELn  = 16U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer4 mux0 output */
    kINPUTMUX_InEvnctimer4mux1outToTIMER4CAPTSELn  = 17U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer4 mux1 output */
    kINPUTMUX_InEvnctimer4mux2outToTIMER4CAPTSELn  = 18U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer4 mux2 output */
    kINPUTMUX_InEvnctimer4mux3outToTIMER4CAPTSELn  = 19U + (TIMER4CAPTSELn_REG << PMUX_SHIFT),  /*!< input events ctimer4 mux3 output */

    /*!< PINTSELn: Pin interrupt select */
    kINPUTMUX_IoPPadIn0_0ToPINTSELn                = 0U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][0] */
    kINPUTMUX_IoPPadIn0_1ToPINTSELn                = 1U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][1] */
    kINPUTMUX_IoPPadIn0_2ToPINTSELn                = 2U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][2] */
    kINPUTMUX_IoPPadIn0_3ToPINTSELn                = 3U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][3] */
    kINPUTMUX_IoPPadIn0_4ToPINTSELn                = 4U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][4] */
    kINPUTMUX_IoPPadIn0_5ToPINTSELn                = 5U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][5] */
    kINPUTMUX_IoPPadIn0_6ToPINTSELn                = 6U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][6] */
    kINPUTMUX_IoPPadIn0_7ToPINTSELn                = 7U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][7] */
    kINPUTMUX_IoPPadIn0_8ToPINTSELn                = 8U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][8] */
    kINPUTMUX_IoPPadIn0_9ToPINTSELn                = 9U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][9] */
    kINPUTMUX_IoPPadIn0_10ToPINTSELn               = 10U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][10] */
    kINPUTMUX_IoPPadIn0_11ToPINTSELn               = 11U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][11] */
    kINPUTMUX_IoPPadIn0_12ToPINTSELn               = 12U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][12] */
    kINPUTMUX_IoPPadIn0_13ToPINTSELn               = 13U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][13] */
    kINPUTMUX_IoPPadIn0_14ToPINTSELn               = 14U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][14] */
    kINPUTMUX_IoPPadIn0_15ToPINTSELn               = 15U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][15] */
    kINPUTMUX_IoPPadIn0_16ToPINTSELn               = 16U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][16] */
    kINPUTMUX_IoPPadIn0_17ToPINTSELn               = 17U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][17] */
    kINPUTMUX_IoPPadIn0_18ToPINTSELn               = 18U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][18] */
    kINPUTMUX_IoPPadIn0_19ToPINTSELn               = 19U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][19] */
    kINPUTMUX_IoPPadIn0_20ToPINTSELn               = 20U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][20] */
    kINPUTMUX_IoPPadIn0_21ToPINTSELn               = 21U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][21] */
    kINPUTMUX_IoPPadIn0_22ToPINTSELn               = 22U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][22] */
    kINPUTMUX_IoPPadIn0_23ToPINTSELn               = 23U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][23] */
    kINPUTMUX_IoPPadIn0_24ToPINTSELn               = 24U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][24] */
    kINPUTMUX_IoPPadIn0_25ToPINTSELn               = 25U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][25] */
    kINPUTMUX_IoPPadIn1_0ToPINTSELn                = 32U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][0] */
    kINPUTMUX_IoPPadIn1_1ToPINTSELn                = 33U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][1] */
    kINPUTMUX_IoPPadIn1_2ToPINTSELn                = 34U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][2] */
    kINPUTMUX_IoPPadIn1_3ToPINTSELn                = 35U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][3] */
    kINPUTMUX_IoPPadIn1_4ToPINTSELn                = 36U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][4] */
    kINPUTMUX_IoPPadIn1_5ToPINTSELn                = 37U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][5] */
    kINPUTMUX_IoPPadIn1_6ToPINTSELn                = 38U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][6] */
    kINPUTMUX_IoPPadIn1_7ToPINTSELn                = 39U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][7] */
    kINPUTMUX_IoPPadIn1_8ToPINTSELn                = 40U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][8] */
    kINPUTMUX_IoPPadIn1_9ToPINTSELn                = 41U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][9] */
    kINPUTMUX_IoPPadIn1_10ToPINTSELn               = 42U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][10] */
    kINPUTMUX_IoPPadIn1_11ToPINTSELn               = 43U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][11] */
    kINPUTMUX_IoPPadIn1_12ToPINTSELn               = 44U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][12] */
    kINPUTMUX_IoPPadIn1_13ToPINTSELn               = 45U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][13] */
    kINPUTMUX_IoPPadIn1_14ToPINTSELn               = 46U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][14] */
    kINPUTMUX_IoPPadIn1_15ToPINTSELn               = 47U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][15] */
    kINPUTMUX_IoPPadIn1_16ToPINTSELn               = 48U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][16] */
    kINPUTMUX_IoPPadIn1_17ToPINTSELn               = 49U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][17] */
    kINPUTMUX_IoPPadIn1_18ToPINTSELn               = 50U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][18] */
    kINPUTMUX_IoPPadIn1_19ToPINTSELn               = 51U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][19] */
    kINPUTMUX_IoPPadIn1_20ToPINTSELn               = 52U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][20] */
    kINPUTMUX_IoPPadIn1_21ToPINTSELn               = 53U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][21] */
    kINPUTMUX_IoPPadIn1_22ToPINTSELn               = 54U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][22] */
    kINPUTMUX_IoPPadIn1_23ToPINTSELn               = 55U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][23] */
    kINPUTMUX_IoPPadIn1_24ToPINTSELn               = 56U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][24] */
    kINPUTMUX_IoPPadIn1_25ToPINTSELn               = 57U + (PINTSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][25] */

    /*!< DMA0_ITRIG_INMUXn: Trigger select for DMA0 channel */
    kINPUTMUX_IntrIrqPint0AGpioIntToDma0ItrigInmuxn = 0U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< intr_irq_pint[0] from a_gpio_int */
    kINPUTMUX_IntrIrqPint1AGpioIntToDma0ItrigInmuxn = 1U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< intr_irq_pint[1] from a_gpio_int */
    kINPUTMUX_IntrIrqPint2AGpioIntToDma0ItrigInmuxn = 2U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< intr_irq_pint[2] from a_gpio_int */
    kINPUTMUX_IntrIrqPint3AGpioIntToDma0ItrigInmuxn = 3U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< intr_irq_pint[3] from a_gpio_int */
    kINPUTMUX_DmaM0PBreqATimer0ToDma0ItrigInmuxn   = 4U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_m0_p_breq from a_timer0 */
    kINPUTMUX_DmaM1PBreqATimer0ToDma0ItrigInmuxn   = 5U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_m1_p_breq from a_timer0 */
    kINPUTMUX_DmaM0PBreqATimer1ToDma0ItrigInmuxn   = 6U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_m0_p_breq from a_timer1 */
    kINPUTMUX_DmaM1PBreqATimer1ToDma0ItrigInmuxn   = 7U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_m1_p_breq from a_timer1 */
    kINPUTMUX_DmaM0PBreqATimer2ToDma0ItrigInmuxn   = 8U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_m0_p_breq from a_timer2 */
    kINPUTMUX_DmaM1PBreqATimer2ToDma0ItrigInmuxn   = 9U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_m1_p_breq from a_timer2 */
    kINPUTMUX_DmaM0PBreqATimer3ToDma0ItrigInmuxn   = 10U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_m0_p_breq from a_timer3 */
    kINPUTMUX_DmaM1PBreqATimer3ToDma0ItrigInmuxn   = 11U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_m1_p_breq from a_timer3 */
    kINPUTMUX_DmaM0PBreqATimer4ToDma0ItrigInmuxn   = 12U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_m0_p_breq from a_timer4 */
    kINPUTMUX_DmaM1PBreqATimer4ToDma0ItrigInmuxn   = 13U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_m1_p_breq from a_timer4 */
    kINPUTMUX_DmaABreqASct0ToDma0ItrigInmuxn       = 14U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_a_breq from a_sct0 */
    kINPUTMUX_DmaBBreqASct0ToDma0ItrigInmuxn       = 15U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_b_breq from a_sct0 */
    kINPUTMUX_PeriphInsOut0ASdma0OtrigmuxToDma0ItrigInmuxn = 16U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< periph_inputs_out[0] from a_dma_infrastructure.a_sdma0_otrigmux */
    kINPUTMUX_PeriphInsOut1ASdma0OtrigmuxToDma0ItrigInmuxn = 17U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< periph_inputs_out[1] from a_dma_infrastructure.a_sdma0_otrigmux */
    kINPUTMUX_PeriphInsOut2ASdma0OtrigmuxToDma0ItrigInmuxn = 18U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< periph_inputs_out[2] from a_dma_infrastructure.a_sdma0_otrigmux */
    kINPUTMUX_PeriphInsOut3ASdma0OtrigmuxToDma0ItrigInmuxn = 19U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< periph_inputs_out[3] from a_dma_infrastructure.a_sdma0_otrigmux */
    kINPUTMUX_InEvndmamux0ToDma0ItrigInmuxn        = 20U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< input events dma mux0 o/p */
    kINPUTMUX_InEvndmamux1ToDma0ItrigInmuxn        = 21U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< input events dma mux1 o/p */
    kINPUTMUX_InEvndmamux2ToDma0ItrigInmuxn        = 22U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< input events dma mux2 o/p */
    kINPUTMUX_InEvndmamux3ToDma0ItrigInmuxn        = 23U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< input events dma mux3 o/p */
    kINPUTMUX_InEvndmamux4ToDma0ItrigInmuxn        = 24U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< input events dma mux4 o/p */
    kINPUTMUX_InEvndmamux5ToDma0ItrigInmuxn        = 25U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< input events dma mux5 o/p */
    kINPUTMUX_InEvndmamux6ToDma0ItrigInmuxn        = 26U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< input events dma mux6 o/p */
    kINPUTMUX_InEvndmamux7ToDma0ItrigInmuxn        = 27U + (DMA0_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< input events dma mux7 o/p */

    /*!< DMA0_OTRIG_INMUXn: DMA0 output trigger selection for DMA0 input trigger */
    kINPUTMUX_Dma0OtriginmuxCh0ToDma0OtrigInmuxn   = 0U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel0 */
    kINPUTMUX_Dma0OtriginmuxCh1ToDma0OtrigInmuxn   = 1U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel1 */
    kINPUTMUX_Dma0OtriginmuxCh2ToDma0OtrigInmuxn   = 2U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel2 */
    kINPUTMUX_Dma0OtriginmuxCh3ToDma0OtrigInmuxn   = 3U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel3 */
    kINPUTMUX_Dma0OtriginmuxCh4ToDma0OtrigInmuxn   = 4U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel4 */
    kINPUTMUX_Dma0OtriginmuxCh5ToDma0OtrigInmuxn   = 5U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel5 */
    kINPUTMUX_Dma0OtriginmuxCh6ToDma0OtrigInmuxn   = 6U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel6 */
    kINPUTMUX_Dma0OtriginmuxCh7ToDma0OtrigInmuxn   = 7U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel7 */
    kINPUTMUX_Dma0OtriginmuxCh8ToDma0OtrigInmuxn   = 8U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel8 */
    kINPUTMUX_Dma0OtriginmuxCh9ToDma0OtrigInmuxn   = 9U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel9 */
    kINPUTMUX_Dma0OtriginmuxCh10ToDma0OtrigInmuxn  = 10U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel10 */
    kINPUTMUX_Dma0OtriginmuxCh11ToDma0OtrigInmuxn  = 11U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel11 */
    kINPUTMUX_Dma0OtriginmuxCh12ToDma0OtrigInmuxn  = 12U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel12 */
    kINPUTMUX_Dma0OtriginmuxCh13ToDma0OtrigInmuxn  = 13U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel13 */
    kINPUTMUX_Dma0OtriginmuxCh14ToDma0OtrigInmuxn  = 14U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel14 */
    kINPUTMUX_Dma0OtriginmuxCh15ToDma0OtrigInmuxn  = 15U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel15 */
    kINPUTMUX_Dma0OtriginmuxCh16ToDma0OtrigInmuxn  = 16U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel16 */
    kINPUTMUX_Dma0OtriginmuxCh17ToDma0OtrigInmuxn  = 17U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel17 */
    kINPUTMUX_Dma0OtriginmuxCh18ToDma0OtrigInmuxn  = 18U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel18 */
    kINPUTMUX_Dma0OtriginmuxCh19ToDma0OtrigInmuxn  = 19U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel19 */
    kINPUTMUX_Dma0OtriginmuxCh20ToDma0OtrigInmuxn  = 20U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel20 */
    kINPUTMUX_Dma0OtriginmuxCh21ToDma0OtrigInmuxn  = 21U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel21 */
    kINPUTMUX_Dma0OtriginmuxCh22ToDma0OtrigInmuxn  = 22U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel22 */
    kINPUTMUX_Dma0OtriginmuxCh23ToDma0OtrigInmuxn  = 23U + (DMA0_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA0 OTRIG INMUX Channel23 */

    /*!< DMA1_ITRIG_INMUXn: Trigger select for DMA1 channel */
    kINPUTMUX_IntrIrqPint0AGpioIntToDma1ItrigInmuxn = 0U + (DMA1_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< intr_irq_pint[0] from a_gpio_int */
    kINPUTMUX_IntrIrqPint1AGpioIntToDma1ItrigInmuxn = 1U + (DMA1_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< intr_irq_pint[1] from a_gpio_int */
    kINPUTMUX_IntrIrqPint2AGpioIntToDma1ItrigInmuxn = 2U + (DMA1_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< intr_irq_pint[2] from a_gpio_int */
    kINPUTMUX_IntrIrqPint3AGpioIntToDma1ItrigInmuxn = 3U + (DMA1_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< intr_irq_pint[3] from a_gpio_int */
    kINPUTMUX_DmaM0PBreqATimer0ToDma1ItrigInmuxn   = 4U + (DMA1_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_m0_p_breq from a_timer0 */
    kINPUTMUX_DmaM1PBreqATimer0ToDma1ItrigInmuxn   = 5U + (DMA1_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_m1_p_breq from a_timer0 */
    kINPUTMUX_DmaM0PBreqATimer2ToDma1ItrigInmuxn   = 6U + (DMA1_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_m0_p_breq from a_timer2 */
    kINPUTMUX_DmaM0PBreqATimer4ToDma1ItrigInmuxn   = 7U + (DMA1_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_m0_p_breq from a_timer4 */
    kINPUTMUX_PeriphInsOut0ASdma1OtrigmuxToDma1ItrigInmuxn = 8U + (DMA1_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< periph_inputs_out[0] from a_dma_infrastructure.a_sdma1_otrigmux */
    kINPUTMUX_PeriphInsOut1ASdma1OtrigmuxToDma1ItrigInmuxn = 9U + (DMA1_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< periph_inputs_out[1] from a_dma_infrastructure.a_sdma1_otrigmux */
    kINPUTMUX_PeriphInsOut2ASdma1OtrigmuxToDma1ItrigInmuxn = 10U + (DMA1_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< periph_inputs_out[2] from a_dma_infrastructure.a_sdma1_otrigmux */
    kINPUTMUX_PeriphInsOut3ASdma1OtrigmuxToDma1ItrigInmuxn = 11U + (DMA1_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< periph_inputs_out[3] from a_dma_infrastructure.a_sdma1_otrigmux */
    kINPUTMUX_DmaABreqASct0ToDma1ItrigInmuxn       = 12U + (DMA1_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_a_breq from a_sct0 */
    kINPUTMUX_DmaBBreqASct0ToDma1ItrigInmuxn       = 13U + (DMA1_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< dma_b_breq from a_sct0 */
    kINPUTMUX_InEvndmamux0ToDma1ItrigInmuxn        = 14U + (DMA1_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< input events dma mux0 o/p */
    kINPUTMUX_InEvndmamux1ToDma1ItrigInmuxn        = 15U + (DMA1_ITRIG_INMUXn_REG << PMUX_SHIFT),  /*!< input events dma mux1 o/p */

    /*!< PINTSECSELn: Pin interrupt secure select */
    kINPUTMUX_IoPPadIn0_0ToPINTSECSELn             = 0U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][0] */
    kINPUTMUX_IoPPadIn0_1ToPINTSECSELn             = 1U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][1] */
    kINPUTMUX_IoPPadIn0_2ToPINTSECSELn             = 2U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][2] */
    kINPUTMUX_IoPPadIn0_3ToPINTSECSELn             = 3U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][3] */
    kINPUTMUX_IoPPadIn0_4ToPINTSECSELn             = 4U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][4] */
    kINPUTMUX_IoPPadIn0_5ToPINTSECSELn             = 5U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][5] */
    kINPUTMUX_IoPPadIn0_6ToPINTSECSELn             = 6U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][6] */
    kINPUTMUX_IoPPadIn0_7ToPINTSECSELn             = 7U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][7] */
    kINPUTMUX_IoPPadIn0_8ToPINTSECSELn             = 8U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][8] */
    kINPUTMUX_IoPPadIn0_9ToPINTSECSELn             = 9U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][9] */
    kINPUTMUX_IoPPadIn0_10ToPINTSECSELn            = 10U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][10] */
    kINPUTMUX_IoPPadIn0_11ToPINTSECSELn            = 11U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][11] */
    kINPUTMUX_IoPPadIn0_12ToPINTSECSELn            = 12U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][12] */
    kINPUTMUX_IoPPadIn0_13ToPINTSECSELn            = 13U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][13] */
    kINPUTMUX_IoPPadIn0_14ToPINTSECSELn            = 14U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][14] */
    kINPUTMUX_IoPPadIn0_15ToPINTSECSELn            = 15U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][15] */
    kINPUTMUX_IoPPadIn0_16ToPINTSECSELn            = 16U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][16] */
    kINPUTMUX_IoPPadIn0_17ToPINTSECSELn            = 17U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][17] */
    kINPUTMUX_IoPPadIn0_18ToPINTSECSELn            = 18U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][18] */
    kINPUTMUX_IoPPadIn0_19ToPINTSECSELn            = 19U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][19] */
    kINPUTMUX_IoPPadIn0_20ToPINTSECSELn            = 20U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][20] */
    kINPUTMUX_IoPPadIn0_21ToPINTSECSELn            = 21U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][21] */
    kINPUTMUX_IoPPadIn0_22ToPINTSECSELn            = 22U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][22] */
    kINPUTMUX_IoPPadIn0_23ToPINTSECSELn            = 23U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][23] */
    kINPUTMUX_IoPPadIn0_24ToPINTSECSELn            = 24U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][24] */
    kINPUTMUX_IoPPadIn0_25ToPINTSECSELn            = 25U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[0][25] */
    kINPUTMUX_IoPPadIn1_0ToPINTSECSELn             = 32U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][0] */
    kINPUTMUX_IoPPadIn1_1ToPINTSECSELn             = 33U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][1] */
    kINPUTMUX_IoPPadIn1_2ToPINTSECSELn             = 34U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][2] */
    kINPUTMUX_IoPPadIn1_3ToPINTSECSELn             = 35U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][3] */
    kINPUTMUX_IoPPadIn1_4ToPINTSECSELn             = 36U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][4] */
    kINPUTMUX_IoPPadIn1_5ToPINTSECSELn             = 37U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][5] */
    kINPUTMUX_IoPPadIn1_6ToPINTSECSELn             = 38U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][6] */
    kINPUTMUX_IoPPadIn1_7ToPINTSECSELn             = 39U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][7] */
    kINPUTMUX_IoPPadIn1_8ToPINTSECSELn             = 40U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][8] */
    kINPUTMUX_IoPPadIn1_9ToPINTSECSELn             = 41U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][9] */
    kINPUTMUX_IoPPadIn1_10ToPINTSECSELn            = 42U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][10] */
    kINPUTMUX_IoPPadIn1_11ToPINTSECSELn            = 43U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][11] */
    kINPUTMUX_IoPPadIn1_12ToPINTSECSELn            = 44U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][12] */
    kINPUTMUX_IoPPadIn1_13ToPINTSECSELn            = 45U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][13] */
    kINPUTMUX_IoPPadIn1_14ToPINTSECSELn            = 46U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][14] */
    kINPUTMUX_IoPPadIn1_15ToPINTSECSELn            = 47U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][15] */
    kINPUTMUX_IoPPadIn1_16ToPINTSECSELn            = 48U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][16] */
    kINPUTMUX_IoPPadIn1_17ToPINTSECSELn            = 49U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][17] */
    kINPUTMUX_IoPPadIn1_18ToPINTSECSELn            = 50U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][18] */
    kINPUTMUX_IoPPadIn1_19ToPINTSECSELn            = 51U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][19] */
    kINPUTMUX_IoPPadIn1_20ToPINTSECSELn            = 52U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][20] */
    kINPUTMUX_IoPPadIn1_21ToPINTSECSELn            = 53U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][21] */
    kINPUTMUX_IoPPadIn1_22ToPINTSECSELn            = 54U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][22] */
    kINPUTMUX_IoPPadIn1_23ToPINTSECSELn            = 55U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][23] */
    kINPUTMUX_IoPPadIn1_24ToPINTSECSELn            = 56U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][24] */
    kINPUTMUX_IoPPadIn1_25ToPINTSECSELn            = 57U + (PINTSECSELn_REG << PMUX_SHIFT),  /*!< io_p_pad_in[1][25] */

    /*!< DMA1_OTRIG_INMUXn: DMA1 output trigger selection for DMA1 input trigger */
    kINPUTMUX_Dma1OtriginmuxCh0ToDma1OtrigInmuxn   = 0U + (DMA1_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA1 OTRIG INMUX Channel0 */
    kINPUTMUX_Dma1OtriginmuxCh1ToDma1OtrigInmuxn   = 1U + (DMA1_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA1 OTRIG INMUX Channel1 */
    kINPUTMUX_Dma1OtriginmuxCh2ToDma1OtrigInmuxn   = 2U + (DMA1_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA1 OTRIG INMUX Channel2 */
    kINPUTMUX_Dma1OtriginmuxCh3ToDma1OtrigInmuxn   = 3U + (DMA1_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA1 OTRIG INMUX Channel3 */
    kINPUTMUX_Dma1OtriginmuxCh4ToDma1OtrigInmuxn   = 4U + (DMA1_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA1 OTRIG INMUX Channel4 */
    kINPUTMUX_Dma1OtriginmuxCh5ToDma1OtrigInmuxn   = 5U + (DMA1_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA1 OTRIG INMUX Channel5 */
    kINPUTMUX_Dma1OtriginmuxCh6ToDma1OtrigInmuxn   = 6U + (DMA1_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA1 OTRIG INMUX Channel6 */
    kINPUTMUX_Dma1OtriginmuxCh7ToDma1OtrigInmuxn   = 7U + (DMA1_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA1 OTRIG INMUX Channel7 */
    kINPUTMUX_Dma1OtriginmuxCh8ToDma1OtrigInmuxn   = 8U + (DMA1_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA1 OTRIG INMUX Channel8 */
    kINPUTMUX_Dma1OtriginmuxCh9ToDma1OtrigInmuxn   = 9U + (DMA1_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA1 OTRIG INMUX Channel9 */
    kINPUTMUX_Dma1OtriginmuxCh10ToDma1OtrigInmuxn  = 10U + (DMA1_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA1 OTRIG INMUX Channel10 */
    kINPUTMUX_Dma1OtriginmuxCh11ToDma1OtrigInmuxn  = 11U + (DMA1_OTRIG_INMUXn_REG << PMUX_SHIFT),  /*!< DMA1 OTRIG INMUX Channel11 */

    /*!< DMA0_REQ_ENA: Enable DMA0 requests */
    kINPUTMUX_Flexcomm0RxToDma0ReqEna              = 0U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< Flexcomm0_RX */
    kINPUTMUX_Flexcomm0TxToDma0ReqEna              = 1U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< Flexcomm0_TX */
    kINPUTMUX_Flexcomm1RxToDma0ReqEna              = 2U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< Flexcomm1_RX */
    kINPUTMUX_Flexcomm1TxToDma0ReqEna              = 3U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< Flexcomm1_TX */
    kINPUTMUX_Flexcomm2RxToDma0ReqEna              = 4U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< Flexcomm2_RX */
    kINPUTMUX_Flexcomm2TxToDma0ReqEna              = 5U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< Flexcomm2_TX */
    kINPUTMUX_Flexcomm3RxToDma0ReqEna              = 6U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< Flexcomm3_RX */
    kINPUTMUX_Flexcomm3TxToDma0ReqEna              = 7U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< Flexcomm3_TX */
    kINPUTMUX_Flexcomm4RxToDma0ReqEna              = 8U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< Flexcomm4_RX */
    kINPUTMUX_Flexcomm4TxToDma0ReqEna              = 9U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< Flexcomm4_TX */
    kINPUTMUX_Flexcomm5RxToDma0ReqEna              = 10U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< Flexcomm5_RX */
    kINPUTMUX_Flexcomm5TxToDma0ReqEna              = 11U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< Flexcomm5_TX */
    kINPUTMUX_XspiIprxToDma0ReqEna                 = 12U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< XSPI IP RX */
    kINPUTMUX_XspiIptxToDma0ReqEna                 = 13U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< XSPI IP TX */
    kINPUTMUX_I3cTxToDma0ReqEna                    = 14U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< I3C Tx */
    kINPUTMUX_I3cRxToDma0ReqEna                    = 15U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< I3C Rx */
    kINPUTMUX_SgiRxToDma0ReqEna                    = 16U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< SGI RX */
    kINPUTMUX_SgiTxToDma0ReqEna                    = 17U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< SGI TX */
    kINPUTMUX_Dma0ExtReq0ToDma0ReqEna              = 18U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< dma0_external_req[0] */
    kINPUTMUX_Dma0ExtReq1ToDma0ReqEna              = 19U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< dma0_external_req[1] */
    kINPUTMUX_Dma0ExtReq2ToDma0ReqEna              = 20U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< dma0_external_req[2] */
    kINPUTMUX_MemToMemTrnsfCh21ToDma0ReqEna        = 21U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< Free for mem to mem transfers CH21 */
    kINPUTMUX_MemToMemTrnsfCh22ToDma0ReqEna        = 22U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< Free for mem to mem transfers CH22 */
    kINPUTMUX_MemToMemTrnsfCh23ToDma0ReqEna        = 23U + (DMA0_REQ_ENA_REG << ENA_SHIFT),  /*!< Free for mem to mem transfers CH23 */

    /*!< DMA1_REQ_ENA: Enable DMA1 requests */
    kINPUTMUX_Flexcomm0RxToDma1ReqEna              = 0U + (DMA1_REQ_ENA_REG << ENA_SHIFT),  /*!< Flexcomm0_RX */
    kINPUTMUX_Flexcomm0TxToDma1ReqEna              = 1U + (DMA1_REQ_ENA_REG << ENA_SHIFT),  /*!< Flexcomm0_TX */
    kINPUTMUX_Flexcomm1RxToDma1ReqEna              = 2U + (DMA1_REQ_ENA_REG << ENA_SHIFT),  /*!< Flexcomm1_RX */
    kINPUTMUX_Flexcomm1TxToDma1ReqEna              = 3U + (DMA1_REQ_ENA_REG << ENA_SHIFT),  /*!< Flexcomm1_TX */
    kINPUTMUX_XspiIprxToDma1ReqEna                 = 4U + (DMA1_REQ_ENA_REG << ENA_SHIFT),  /*!< XSPI IP RX */
    kINPUTMUX_XspiIptxToDma1ReqEna                 = 5U + (DMA1_REQ_ENA_REG << ENA_SHIFT),  /*!< XSPI IP TX */
    kINPUTMUX_I3cTxToDma1ReqEna                    = 6U + (DMA1_REQ_ENA_REG << ENA_SHIFT),  /*!< I3C Tx */
    kINPUTMUX_I3cRxToDma1ReqEna                    = 7U + (DMA1_REQ_ENA_REG << ENA_SHIFT),  /*!< I3C Rx */
    kINPUTMUX_SgiRxToDma1ReqEna                    = 8U + (DMA1_REQ_ENA_REG << ENA_SHIFT),  /*!< SGI RX */
    kINPUTMUX_SgiTxToDma1ReqEna                    = 9U + (DMA1_REQ_ENA_REG << ENA_SHIFT),  /*!< SGI TX */
    kINPUTMUX_MemToMemTrnsfCh10ToDma1ReqEna        = 10U + (DMA1_REQ_ENA_REG << ENA_SHIFT),  /*!< Free for mem to mem transfers CH10 */
    kINPUTMUX_MemToMemTrnsfCh11ToDma1ReqEna        = 11U + (DMA1_REQ_ENA_REG << ENA_SHIFT),  /*!< Free for mem to mem transfers CH11 */

    /*!< DMA0_ITRIG_ENA: Enable DMA0 triggers */
    kINPUTMUX_Dma0ItrigenaCh0ToDma0ItrigEna        = 0U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel0 */
    kINPUTMUX_Dma0ItrigenaCh1ToDma0ItrigEna        = 1U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel1 */
    kINPUTMUX_Dma0ItrigenaCh2ToDma0ItrigEna        = 2U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel2 */
    kINPUTMUX_Dma0ItrigenaCh3ToDma0ItrigEna        = 3U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel3 */
    kINPUTMUX_Dma0ItrigenaCh4ToDma0ItrigEna        = 4U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel4 */
    kINPUTMUX_Dma0ItrigenaCh5ToDma0ItrigEna        = 5U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel5 */
    kINPUTMUX_Dma0ItrigenaCh6ToDma0ItrigEna        = 6U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel6 */
    kINPUTMUX_Dma0ItrigenaCh7ToDma0ItrigEna        = 7U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel7 */
    kINPUTMUX_Dma0ItrigenaCh8ToDma0ItrigEna        = 8U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel8 */
    kINPUTMUX_Dma0ItrigenaCh9ToDma0ItrigEna        = 9U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel9 */
    kINPUTMUX_Dma0ItrigenaCh10ToDma0ItrigEna       = 10U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel10 */
    kINPUTMUX_Dma0ItrigenaCh11ToDma0ItrigEna       = 11U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel11 */
    kINPUTMUX_Dma0ItrigenaCh12ToDma0ItrigEna       = 12U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel12 */
    kINPUTMUX_Dma0ItrigenaCh13ToDma0ItrigEna       = 13U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel13 */
    kINPUTMUX_Dma0ItrigenaCh14ToDma0ItrigEna       = 14U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel14 */
    kINPUTMUX_Dma0ItrigenaCh15ToDma0ItrigEna       = 15U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel15 */
    kINPUTMUX_Dma0ItrigenaCh16ToDma0ItrigEna       = 16U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel16 */
    kINPUTMUX_Dma0ItrigenaCh17ToDma0ItrigEna       = 17U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel17 */
    kINPUTMUX_Dma0ItrigenaCh18ToDma0ItrigEna       = 18U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel18 */
    kINPUTMUX_Dma0ItrigenaCh19ToDma0ItrigEna       = 19U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel19 */
    kINPUTMUX_Dma0ItrigenaCh20ToDma0ItrigEna       = 20U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel20 */
    kINPUTMUX_Dma0ItrigenaCh21ToDma0ItrigEna       = 21U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel21 */
    kINPUTMUX_Dma0ItrigenaCh22ToDma0ItrigEna       = 22U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel22 */
    kINPUTMUX_Dma0ItrigenaCh23ToDma0ItrigEna       = 23U + (DMA0_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA0 ITRIG ENA Channel23 */

    /*!< DMA1_ITRIG_ENA: Enable DMA1 triggers */
    kINPUTMUX_Dma1ItrigenaCh0ToDma1ItrigEna        = 0U + (DMA1_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA1 ITRIG ENA Channel0 */
    kINPUTMUX_Dma1ItrigenaCh1ToDma1ItrigEna        = 1U + (DMA1_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA1 ITRIG ENA Channel1 */
    kINPUTMUX_Dma1ItrigenaCh2ToDma1ItrigEna        = 2U + (DMA1_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA1 ITRIG ENA Channel2 */
    kINPUTMUX_Dma1ItrigenaCh3ToDma1ItrigEna        = 3U + (DMA1_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA1 ITRIG ENA Channel3 */
    kINPUTMUX_Dma1ItrigenaCh4ToDma1ItrigEna        = 4U + (DMA1_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA1 ITRIG ENA Channel4 */
    kINPUTMUX_Dma1ItrigenaCh5ToDma1ItrigEna        = 5U + (DMA1_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA1 ITRIG ENA Channel5 */
    kINPUTMUX_Dma1ItrigenaCh6ToDma1ItrigEna        = 6U + (DMA1_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA1 ITRIG ENA Channel6 */
    kINPUTMUX_Dma1ItrigenaCh7ToDma1ItrigEna        = 7U + (DMA1_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA1 ITRIG ENA Channel7 */
    kINPUTMUX_Dma1ItrigenaCh8ToDma1ItrigEna        = 8U + (DMA1_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA1 ITRIG ENA Channel8 */
    kINPUTMUX_Dma1ItrigenaCh9ToDma1ItrigEna        = 9U + (DMA1_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA1 ITRIG ENA Channel9 */
    kINPUTMUX_Dma1ItrigenaCh10ToDma1ItrigEna       = 10U + (DMA1_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA1 ITRIG ENA Channel10 */
    kINPUTMUX_Dma1ItrigenaCh11ToDma1ItrigEna       = 11U + (DMA1_ITRIG_ENA_REG << ENA_SHIFT),  /*!< DMA1 ITRIG ENA Channel11 */

    /*!< TIMER0TRIG: Trigger register for TIMER0 */
    kINPUTMUX_IoPCtCapt0_0ToTIMER0TRIG             = 0U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][0] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_1ToTIMER0TRIG             = 1U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][1] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_2ToTIMER0TRIG             = 2U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][2] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_3ToTIMER0TRIG             = 3U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][3] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_4ToTIMER0TRIG             = 4U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][4] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_5ToTIMER0TRIG             = 5U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][5] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_6ToTIMER0TRIG             = 6U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][6] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_7ToTIMER0TRIG             = 7U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][7] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_8ToTIMER0TRIG             = 8U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][8] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_9ToTIMER0TRIG             = 9U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][9] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_10ToTIMER0TRIG            = 10U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][10] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_11ToTIMER0TRIG            = 11U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][11] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_12ToTIMER0TRIG            = 12U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][12] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_13ToTIMER0TRIG            = 13U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][13] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_14ToTIMER0TRIG            = 14U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][14] from uhp_css_top */
    kINPUTMUX_IoPCtCapt0_15ToTIMER0TRIG            = 15U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[0][15] from uhp_css_top */
    kINPUTMUX_InEvnctimer0mux0outToTIMER0TRIG      = 16U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer0 mux0 output */
    kINPUTMUX_InEvnctimer0mux1outToTIMER0TRIG      = 17U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer0 mux1 output */
    kINPUTMUX_InEvnctimer0mux2outToTIMER0TRIG      = 18U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer0 mux2 output */
    kINPUTMUX_InEvnctimer0mux3outToTIMER0TRIG      = 19U + (TIMER0TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer0 mux3 output */

    /*!< TIMER1TRIG: Trigger register for TIMER1 */
    kINPUTMUX_IoPCtCapt1_0ToTIMER1TRIG             = 0U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][0] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_1ToTIMER1TRIG             = 1U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][1] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_2ToTIMER1TRIG             = 2U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][2] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_3ToTIMER1TRIG             = 3U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][3] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_4ToTIMER1TRIG             = 4U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][4] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_5ToTIMER1TRIG             = 5U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][5] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_6ToTIMER1TRIG             = 6U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][6] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_7ToTIMER1TRIG             = 7U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][7] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_8ToTIMER1TRIG             = 8U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][8] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_9ToTIMER1TRIG             = 9U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][9] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_10ToTIMER1TRIG            = 10U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][10] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_11ToTIMER1TRIG            = 11U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][11] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_12ToTIMER1TRIG            = 12U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][12] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_13ToTIMER1TRIG            = 13U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][13] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_14ToTIMER1TRIG            = 14U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][14] from uhp_css_top */
    kINPUTMUX_IoPCtCapt1_15ToTIMER1TRIG            = 15U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[1][15] from uhp_css_top */
    kINPUTMUX_InEvnctimer1mux0outToTIMER1TRIG      = 16U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer1 mux0 output */
    kINPUTMUX_InEvnctimer1mux1outToTIMER1TRIG      = 17U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer1 mux1 output */
    kINPUTMUX_InEvnctimer1mux2outToTIMER1TRIG      = 18U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer1 mux2 output */
    kINPUTMUX_InEvnctimer1mux3outToTIMER1TRIG      = 19U + (TIMER1TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer1 mux3 output */

    /*!< TIMER2TRIG: Trigger register for TIMER2 */
    kINPUTMUX_IoPCtCapt2_0ToTIMER2TRIG             = 0U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][0] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_1ToTIMER2TRIG             = 1U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][1] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_2ToTIMER2TRIG             = 2U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][2] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_3ToTIMER2TRIG             = 3U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][3] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_4ToTIMER2TRIG             = 4U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][4] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_5ToTIMER2TRIG             = 5U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][5] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_6ToTIMER2TRIG             = 6U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][6] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_7ToTIMER2TRIG             = 7U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][7] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_8ToTIMER2TRIG             = 8U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][8] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_9ToTIMER2TRIG             = 9U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][9] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_10ToTIMER2TRIG            = 10U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][10] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_11ToTIMER2TRIG            = 11U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][11] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_12ToTIMER2TRIG            = 12U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][12] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_13ToTIMER2TRIG            = 13U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][13] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_14ToTIMER2TRIG            = 14U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][14] from uhp_css_top */
    kINPUTMUX_IoPCtCapt2_15ToTIMER2TRIG            = 15U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[2][15] from uhp_css_top */
    kINPUTMUX_InEvnctimer2mux0outToTIMER2TRIG      = 16U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer2 mux0 output */
    kINPUTMUX_InEvnctimer2mux1outToTIMER2TRIG      = 17U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer2 mux1 output */
    kINPUTMUX_InEvnctimer2mux2outToTIMER2TRIG      = 18U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer2 mux2 output */
    kINPUTMUX_InEvnctimer2mux3outToTIMER2TRIG      = 19U + (TIMER2TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer2 mux3 output */

    /*!< TIMER3TRIG: Trigger register for TIMER3 */
    kINPUTMUX_IoPCtCapt3_0ToTIMER3TRIG             = 0U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][0] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_1ToTIMER3TRIG             = 1U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][1] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_2ToTIMER3TRIG             = 2U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][2] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_3ToTIMER3TRIG             = 3U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][3] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_4ToTIMER3TRIG             = 4U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][4] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_5ToTIMER3TRIG             = 5U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][5] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_6ToTIMER3TRIG             = 6U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][6] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_7ToTIMER3TRIG             = 7U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][7] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_8ToTIMER3TRIG             = 8U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][8] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_9ToTIMER3TRIG             = 9U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][9] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_10ToTIMER3TRIG            = 10U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][10] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_11ToTIMER3TRIG            = 11U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][11] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_12ToTIMER3TRIG            = 12U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][12] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_13ToTIMER3TRIG            = 13U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][13] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_14ToTIMER3TRIG            = 14U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][14] from uhp_css_top */
    kINPUTMUX_IoPCtCapt3_15ToTIMER3TRIG            = 15U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[3][15] from uhp_css_top */
    kINPUTMUX_InEvnctimer3mux0outToTIMER3TRIG      = 16U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer3 mux0 output */
    kINPUTMUX_InEvnctimer3mux1outToTIMER3TRIG      = 17U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer3 mux1 output */
    kINPUTMUX_InEvnctimer3mux2outToTIMER3TRIG      = 18U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer3 mux2 output */
    kINPUTMUX_InEvnctimer3mux3outToTIMER3TRIG      = 19U + (TIMER3TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer3 mux3 output */

    /*!< TIMER4TRIG: Trigger register for TIMER4 */
    kINPUTMUX_IoPCtCapt4_0ToTIMER4TRIG             = 0U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][0] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_1ToTIMER4TRIG             = 1U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][1] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_2ToTIMER4TRIG             = 2U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][2] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_3ToTIMER4TRIG             = 3U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][3] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_4ToTIMER4TRIG             = 4U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][4] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_5ToTIMER4TRIG             = 5U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][5] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_6ToTIMER4TRIG             = 6U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][6] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_7ToTIMER4TRIG             = 7U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][7] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_8ToTIMER4TRIG             = 8U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][8] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_9ToTIMER4TRIG             = 9U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][9] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_10ToTIMER4TRIG            = 10U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][10] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_11ToTIMER4TRIG            = 11U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][11] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_12ToTIMER4TRIG            = 12U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][12] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_13ToTIMER4TRIG            = 13U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][13] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_14ToTIMER4TRIG            = 14U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][14] from uhp_css_top */
    kINPUTMUX_IoPCtCapt4_15ToTIMER4TRIG            = 15U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< io_p_ct_captures[4][15] from uhp_css_top */
    kINPUTMUX_InEvnctimer4mux0outToTIMER4TRIG      = 16U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer4 mux0 output */
    kINPUTMUX_InEvnctimer4mux1outToTIMER4TRIG      = 17U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer4 mux1 output */
    kINPUTMUX_InEvnctimer4mux2outToTIMER4TRIG      = 18U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer4 mux2 output */
    kINPUTMUX_InEvnctimer4mux3outToTIMER4TRIG      = 19U + (TIMER4TRIG_REG << PMUX_SHIFT),  /*!< input events ctimer4 mux3 output */


} inputmux_connection_t;

/*@}*/

/*@}*/

#endif /* _FSL_INPUTMUX_CONNECTIONS_ */