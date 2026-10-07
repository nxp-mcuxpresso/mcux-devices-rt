
/*
 * Copyright 2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/* Auto-generated file - do not edit manually */

#ifndef FSL_SWM_CONNECTIONS_H_
#define FSL_SWM_CONNECTIONS_H_

#include "fsl_common.h"

/**
 * @enum swm_pin_index_t
 * @brief Enumeration of all available SWM pin indices.
 *
 * These indices represent the physical pins that can be configured via the SWM.
 */
typedef enum swm_pin {
    SWM0_00                             =   0,
    SWM0_01                             =   1,
    SWM0_02                             =   2,
    SWM0_03                             =   3,
    SWM0_04                             =   4,
    SWM0_05                             =   5,
    SWM0_06                             =   6,
    SWM0_07                             =   7,
    SWM0_08                             =   8,
    SWM0_09                             =   9,
    SWM0_10                             =  10,
    SWM0_11                             =  11,
    SWM1_00                             =  12,
    SWM1_01                             =  13,
    SWM1_02                             =  14,
    SWM1_03                             =  15,
    SWM1_04                             =  16,
    SWM1_05                             =  17,
    SWM1_06                             =  18,
    SWM1_07                             =  19,
    SWM1_08                             =  20,
    SWM1_09                             =  21,
    SWM1_10                             =  22,
    SWM1_11                             =  23,
    SWM2_00                             =  24,
    SWM2_01                             =  25,
    SWM2_02                             =  26,
    SWM2_03                             =  27,
    SWM2_04                             =  28,
    SWM2_05                             =  29,
    SWM2_06                             =  30,
    SWM2_07                             =  31,
    SWM2_08                             =  32,
    SWM2_09                             =  33,
    SWM2_10                             =  34,
    SWM2_11                             =  35,
    SWM3_00                             =  36,
    SWM3_01                             =  37,
    SWM3_02                             =  38,
    SWM3_03                             =  39,
    SWM3_04                             =  40,
    SWM3_05                             =  41,
    SWM3_06                             =  42,
    SWM3_07                             =  43,
    SWM3_08                             =  44,
    SWM3_09                             =  45,
    SWM3_10                             =  46,
    SWM3_11                             =  47,
    SWM3_12                             =  48,
    SWM3_13                             =  49,
    SWM3_14                             =  50,
    SWM3_15                             =  51,
    SWM_PIN_COUNT                       =  52
} swm_pin_index_t;

/**
 * @enum pio_pin_t
 * @brief GPIO port/pin to SWM flat index mapping.
 *
 * The SWM and GPIO use different pin numbering schemes. The SWM assigns a flat
 * index across all its banks (SWM0, SWM1, SWM2, SWM3), while GPIO organizes
 * pins by port and pin number within that port.
 *
 * This enum provides GPIO-friendly names (PIO{port}_{pin}) that map directly
 * to the SWM flat index, making it possible to refer to pins from a board or
 * schematic perspective when calling SWM functions.
 *
 * Example:
 * @code
 *   // Configure GPIO port 1 pin 3 for UART TX using the GPIO-friendly name
 *   SWM_SetPinMode(DSWM, PIO1_3, SWM_MODE_U_FC3_TXD_SCL_MISO_IO0);
 *
 *   // Equivalent using the raw SWM index name
 *   SWM_SetPinMode(DSWM, SWM2_05, SWM_MODE_U_FC3_TXD_SCL_MISO_IO0);
 * @endcode
 *
 * @note The numeric value of each entry is the SWM flat index, not the GPIO
 *       pin number. To obtain the GPIO port and pin number from a pio_pin_t
 *       value, use SWM_TO_GPIO_PORT() and SWM_TO_GPIO_PIN().
 */
typedef enum {
    PIO0_0                              = SWM0_00,
    PIO0_1                              = SWM0_01,
    PIO0_2                              = SWM0_02,
    PIO0_3                              = SWM0_03,
    PIO0_4                              = SWM0_04,
    PIO0_5                              = SWM0_05,
    PIO0_6                              = SWM0_06,
    PIO0_7                              = SWM0_07,
    PIO0_8                              = SWM0_08,
    PIO0_9                              = SWM0_09,
    PIO0_10                             = SWM0_10,
    PIO0_11                             = SWM0_11,
    PIO0_12                             = SWM1_00,
    PIO0_13                             = SWM1_01,
    PIO0_14                             = SWM1_02,
    PIO0_15                             = SWM1_03,
    PIO0_16                             = SWM1_04,
    PIO0_17                             = SWM1_05,
    PIO0_18                             = SWM1_06,
    PIO0_19                             = SWM1_07,
    PIO0_20                             = SWM1_08,
    PIO0_21                             = SWM1_09,
    PIO0_22                             = SWM1_10,
    PIO0_23                             = SWM1_11,
    PIO0_24                             = SWM2_00,
    PIO0_25                             = SWM2_01,
    PIO1_0                              = SWM2_02,
    PIO1_1                              = SWM2_03,
    PIO1_2                              = SWM2_04,
    PIO1_3                              = SWM2_05,
    PIO1_4                              = SWM2_06,
    PIO1_5                              = SWM2_07,
    PIO1_6                              = SWM2_08,
    PIO1_7                              = SWM2_09,
    PIO1_8                              = SWM2_10,
    PIO1_9                              = SWM2_11,
    PIO1_10                             = SWM3_00,
    PIO1_11                             = SWM3_01,
    PIO1_12                             = SWM3_02,
    PIO1_13                             = SWM3_03,
    PIO1_14                             = SWM3_04,
    PIO1_15                             = SWM3_05,
    PIO1_16                             = SWM3_06,
    PIO1_17                             = SWM3_07,
    PIO1_18                             = SWM3_08,
    PIO1_19                             = SWM3_09,
    PIO1_20                             = SWM3_10,
    PIO1_21                             = SWM3_11,
    PIO1_22                             = SWM3_12,
    PIO1_23                             = SWM3_13,
    PIO1_24                             = SWM3_14,
    PIO1_25                             = SWM3_15,
} pio_pin_t;


/**
 * @enum swm_pin_mode_t
 * @brief Enumeration of all possible SWM pin modes.
 *
 * These modes define the function assigned to a pin, such as UART, SPI, GPIO, etc.
 */
typedef enum {
    SWM_MODE_U_FC0_SCK                  = 0  ,
    SWM_MODE_U_FC0_RXD_SDA_MOSI_CSN     = 1  ,
    SWM_MODE_U_FC0_TXD_SCL_MISO_IO0     = 2  ,
    SWM_MODE_U_FC0_CTS_SDAX_SSELN0_IO1  = 3  ,
    SWM_MODE_U_FC0_RTS_SCLX_SSELN1_IO2  = 4  ,
    SWM_MODE_U_FC0_SSELN2_IO3           = 5  ,
    SWM_MODE_U_FC0_SSELN3               = 6  ,
    SWM_MODE_U_FC1_SCK                  = 7  ,
    SWM_MODE_U_FC1_RXD_SDA_MOSI_CSN     = 8  ,
    SWM_MODE_U_FC1_TXD_SCL_MISO_IO0     = 9  ,
    SWM_MODE_U_FC1_CTS_SDAX_SSELN0_IO1  = 10 ,
    SWM_MODE_U_FC1_RTS_SCLX_SSELN1_IO2  = 11 ,
    SWM_MODE_U_FC1_SSELN2_IO3           = 12 ,
    SWM_MODE_U_FC1_SSELN3               = 13 ,
    SWM_MODE_U_FC2_SCK                  = 14 ,
    SWM_MODE_U_FC2_RXD_SDA_MOSI_CSN     = 15 ,
    SWM_MODE_U_FC2_TXD_SCL_MISO_IO0     = 16 ,
    SWM_MODE_U_FC2_CTS_SDAX_SSELN0_IO1  = 17 ,
    SWM_MODE_U_FC2_RTS_SCLX_SSELN1_IO2  = 18 ,
    SWM_MODE_U_FC2_SSELN2_IO3           = 19 ,
    SWM_MODE_U_FC2_SSELN3               = 20 ,
    SWM_MODE_U_FC3_SCK                  = 21 ,
    SWM_MODE_U_FC3_RXD_SDA_MOSI_CSN     = 22 ,
    SWM_MODE_U_FC3_TXD_SCL_MISO_IO0     = 23 ,
    SWM_MODE_U_FC3_CTS_SDAX_SSELN0_IO1  = 24 ,
    SWM_MODE_U_FC3_RTS_SCLX_SSELN1_IO2  = 25 ,
    SWM_MODE_U_FC4_SCK                  = 26 ,
    SWM_MODE_U_FC4_RXD_SDA_MOSI_CSN     = 27 ,
    SWM_MODE_U_FC4_TXD_SCL_MISO_IO0     = 28 ,
    SWM_MODE_U_FC4_CTS_SDAX_SSELN0_IO1  = 29 ,
    SWM_MODE_U_FC4_RTS_SCLX_SSELN1_IO2  = 30 ,
    SWM_MODE_U_FC5_SCK                  = 31 ,
    SWM_MODE_U_FC5_RXD_SDA_MOSI_CSN     = 32 ,
    SWM_MODE_U_FC5_TXD_SCL_MISO_IO0     = 33 ,
    SWM_MODE_U_FC5_CTS_SDAX_SSELN0_IO1  = 34 ,
    SWM_MODE_U_FC5_RTS_SCLX_SSELN1_IO2  = 35 ,
    SWM_MODE_U_XSPI0_SIO0               = 36 ,
    SWM_MODE_U_XSPI0_SIO1               = 37 ,
    SWM_MODE_U_XSPI0_SIO2               = 38 ,
    SWM_MODE_U_XSPI0_SIO3               = 39 ,
    SWM_MODE_U_XSPI0_SIO4               = 40 ,
    SWM_MODE_U_XSPI0_SIO5               = 41 ,
    SWM_MODE_U_XSPI0_SIO6               = 42 ,
    SWM_MODE_U_XSPI0_SIO7               = 43 ,
    SWM_MODE_U_XSPI0_SCLK               = 44 ,
    SWM_MODE_U_XSPI0_SSN1               = 45 ,
    SWM_MODE_U_XSPI0_SSN2               = 46 ,
    SWM_MODE_U_XSPI0_DS                 = 47 ,
    SWM_MODE_U_XSPI0_INT                = 48 ,
    SWM_MODE_U_XSPI0_CLOCK_LOOPBACK     = 49 ,
    SWM_MODE_U_XSPI1_SIO0               = 50 ,
    SWM_MODE_U_XSPI1_SIO1               = 51 ,
    SWM_MODE_U_XSPI1_SIO2               = 52 ,
    SWM_MODE_U_XSPI1_SIO3               = 53 ,
    SWM_MODE_U_XSPI1_SIO4               = 54 ,
    SWM_MODE_U_XSPI1_SIO5               = 55 ,
    SWM_MODE_U_XSPI1_SIO6               = 56 ,
    SWM_MODE_U_XSPI1_SIO7               = 57 ,
    SWM_MODE_U_XSPI1_SCLK               = 58 ,
    SWM_MODE_U_XSPI1_SSN1               = 59 ,
    SWM_MODE_U_XSPI1_SSN2               = 60 ,
    SWM_MODE_U_XSPI1_DS                 = 61 ,
    SWM_MODE_U_XSPI1_INT                = 62 ,
    SWM_MODE_U_XSPI1_CLOCK_LOOPBACK     = 63 ,
    SWM_MODE_U_I3C_SCL                  = 64 ,
    SWM_MODE_U_I3C_SDA                  = 65 ,
    SWM_MODE_U_DAP_SWCLK                = 66 ,
    SWM_MODE_U_DAP_SWDIO                = 67 ,
    SWM_MODE_U_DAP_SWO                  = 68 ,
    SWM_MODE_U_DAP_TRACE_CLK            = 69 ,
    SWM_MODE_U_DAP_TRACE_DATA0          = 70 ,
    SWM_MODE_U_DAP_TRACE_DATA1          = 71 ,
    SWM_MODE_U_DAP_TRACE_DATA2          = 72 ,
    SWM_MODE_U_DAP_TRACE_DATA3          = 73 ,
    SWM_MODE_U_GPIO_GPO0                = 74 ,
    SWM_MODE_U_GPIO_GPO1                = 75 ,
    SWM_MODE_U_GPIO_GPO2                = 76 ,
    SWM_MODE_U_GPIO_GPO3                = 77 ,
    SWM_MODE_U_GPIO_GPO4                = 78 ,
    SWM_MODE_U_GPIO_GPO5                = 79 ,
    SWM_MODE_U_GPIO_GPO6                = 80 ,
    SWM_MODE_U_GPIO_GPO7                = 81 ,
    SWM_MODE_U_GPIO_GPO8                = 82 ,
    SWM_MODE_U_GPIO_GPO9                = 83 ,
    SWM_MODE_U_GPIO_GPO10               = 84 ,
    SWM_MODE_U_GPIO_GPO11               = 85 ,
    SWM_MODE_U_GPIO_GPO12               = 86 ,
    SWM_MODE_U_GPIO_GPO13               = 87 ,
    SWM_MODE_U_GPIO_GPO14               = 88 ,
    SWM_MODE_U_GPIO_GPO15               = 89 ,
    SWM_MODE_U_GPIO_GPO16               = 90 ,
    SWM_MODE_U_GPIO_GPO17               = 91 ,
    SWM_MODE_U_GPIO_GPO18               = 92 ,
    SWM_MODE_U_GPIO_GPO19               = 93 ,
    SWM_MODE_U_GPIO_GPO20               = 94 ,
    SWM_MODE_U_GPIO_GPO21               = 95 ,
    SWM_MODE_U_GPIO_GPO22               = 96 ,
    SWM_MODE_U_GPIO_GPO23               = 97 ,
    SWM_MODE_U_GPIO_GPO24               = 98 ,
    SWM_MODE_U_GPIO_GPO25               = 99 ,
    SWM_MODE_U_GPIO_GPO26               = 100,
    SWM_MODE_U_GPIO_GPO27               = 101,
    SWM_MODE_U_GPIO_GPO28               = 102,
    SWM_MODE_U_GPIO_GPO29               = 103,
    SWM_MODE_U_GPIO_GPO30               = 104,
    SWM_MODE_U_GPIO_GPO31               = 105,
    SWM_MODE_U_GPIO_GPO32               = 106,
    SWM_MODE_U_GPIO_GPO33               = 107,
    SWM_MODE_U_GPIO_GPO34               = 108,
    SWM_MODE_U_GPIO_GPO35               = 109,
    SWM_MODE_U_GPIO_GPO36               = 110,
    SWM_MODE_U_GPIO_GPO37               = 111,
    SWM_MODE_U_GPIO_GPO38               = 112,
    SWM_MODE_U_GPIO_GPO39               = 113,
    SWM_MODE_U_GPIO_GPO40               = 114,
    SWM_MODE_U_GPIO_GPO41               = 115,
    SWM_MODE_U_GPIO_GPO42               = 116,
    SWM_MODE_U_GPIO_GPO43               = 117,
    SWM_MODE_U_GPIO_GPO44               = 118,
    SWM_MODE_U_GPIO_GPO45               = 119,
    SWM_MODE_U_GPIO_GPO46               = 120,
    SWM_MODE_U_GPIO_GPO47               = 121,
    SWM_MODE_U_GPIO_GPO48               = 122,
    SWM_MODE_U_GPIO_GPO49               = 123,
    SWM_MODE_U_GPIO_GPO50               = 124,
    SWM_MODE_U_GPIO_GPO51               = 125,
    SWM_MODE_U_GPIO_SEC_GPO0            = 126,
    SWM_MODE_U_GPIO_SEC_GPO1            = 127,
    SWM_MODE_U_GPIO_SEC_GPO2            = 128,
    SWM_MODE_U_GPIO_SEC_GPO3            = 129,
    SWM_MODE_U_GPIO_SEC_GPO4            = 130,
    SWM_MODE_U_GPIO_SEC_GPO5            = 131,
    SWM_MODE_U_GPIO_SEC_GPO6            = 132,
    SWM_MODE_U_GPIO_SEC_GPO7            = 133,
    SWM_MODE_U_GPIO_SEC_GPO8            = 134,
    SWM_MODE_U_GPIO_SEC_GPO9            = 135,
    SWM_MODE_U_GPIO_SEC_GPO10           = 136,
    SWM_MODE_U_GPIO_SEC_GPO11           = 137,
    SWM_MODE_U_GPIO_SEC_GPO12           = 138,
    SWM_MODE_U_GPIO_SEC_GPO13           = 139,
    SWM_MODE_U_GPIO_SEC_GPO14           = 140,
    SWM_MODE_U_GPIO_SEC_GPO15           = 141,
    SWM_MODE_U_GPIO_SEC_GPO16           = 142,
    SWM_MODE_U_GPIO_SEC_GPO17           = 143,
    SWM_MODE_U_GPIO_SEC_GPO18           = 144,
    SWM_MODE_U_GPIO_SEC_GPO19           = 145,
    SWM_MODE_U_GPIO_SEC_GPO20           = 146,
    SWM_MODE_U_GPIO_SEC_GPO21           = 147,
    SWM_MODE_U_GPIO_SEC_GPO22           = 148,
    SWM_MODE_U_GPIO_SEC_GPO23           = 149,
    SWM_MODE_U_GPIO_SEC_GPO24           = 150,
    SWM_MODE_U_GPIO_SEC_GPO25           = 151,
    SWM_MODE_U_GPIO_SEC_GPO26           = 152,
    SWM_MODE_U_GPIO_SEC_GPO27           = 153,
    SWM_MODE_U_GPIO_SEC_GPO28           = 154,
    SWM_MODE_U_GPIO_SEC_GPO29           = 155,
    SWM_MODE_U_GPIO_SEC_GPO30           = 156,
    SWM_MODE_U_GPIO_SEC_GPO31           = 157,
    SWM_MODE_U_GPIO_SEC_GPO32           = 158,
    SWM_MODE_U_GPIO_SEC_GPO33           = 159,
    SWM_MODE_U_GPIO_SEC_GPO34           = 160,
    SWM_MODE_U_GPIO_SEC_GPO35           = 161,
    SWM_MODE_U_GPIO_SEC_GPO36           = 162,
    SWM_MODE_U_GPIO_SEC_GPO37           = 163,
    SWM_MODE_U_GPIO_SEC_GPO38           = 164,
    SWM_MODE_U_GPIO_SEC_GPO39           = 165,
    SWM_MODE_U_GPIO_SEC_GPO40           = 166,
    SWM_MODE_U_GPIO_SEC_GPO41           = 167,
    SWM_MODE_U_GPIO_SEC_GPO42           = 168,
    SWM_MODE_U_GPIO_SEC_GPO43           = 169,
    SWM_MODE_U_GPIO_SEC_GPO44           = 170,
    SWM_MODE_U_GPIO_SEC_GPO45           = 171,
    SWM_MODE_U_GPIO_SEC_GPO46           = 172,
    SWM_MODE_U_GPIO_SEC_GPO47           = 173,
    SWM_MODE_U_GPIO_SEC_GPO48           = 174,
    SWM_MODE_U_GPIO_SEC_GPO49           = 175,
    SWM_MODE_U_GPIO_SEC_GPO50           = 176,
    SWM_MODE_U_GPIO_SEC_GPO51           = 177,
    SWM_MODE_U_DMIC_TDM0                = 178,
    SWM_MODE_U_DMIC_TDM1                = 179,
    SWM_MODE_U_DMIC_TDM2                = 180,
    SWM_MODE_U_DMIC_TDM3                = 181,
    SWM_MODE_U_DMIC_CLK0                = 182,
    SWM_MODE_U_DMIC_CLK1                = 183,
    SWM_MODE_U_DMIC_CLK2                = 184,
    SWM_MODE_U_DMIC_CLK3                = 185,
    SWM_MODE_U_DP0_SDI                  = 186,
    SWM_MODE_U_DP0_SDO                  = 187,
    SWM_MODE_U_DP0_FRAME                = 188,
    SWM_MODE_U_DP0_CLK                  = 189,
    SWM_MODE_U_DP1_SDI                  = 190,
    SWM_MODE_U_DP1_SDO                  = 191,
    SWM_MODE_U_DP1_FRAME                = 192,
    SWM_MODE_U_DP1_CLK                  = 193,
    SWM_MODE_U_DP2_SDI                  = 194,
    SWM_MODE_U_DP2_SDO                  = 195,
    SWM_MODE_U_DP2_FRAME                = 196,
    SWM_MODE_U_DP2_CLK                  = 197,
    SWM_MODE_U_DP3_SDI                  = 198,
    SWM_MODE_U_DP3_SDO                  = 199,
    SWM_MODE_U_DP3_FRAME                = 200,
    SWM_MODE_U_DP3_CLK                  = 201,
    SWM_MODE_U_SCT_OUT0                 = 202,
    SWM_MODE_U_SCT_OUT1                 = 203,
    SWM_MODE_U_SCT_OUT2                 = 204,
    SWM_MODE_U_SCT_OUT3                 = 205,
    SWM_MODE_U_SCT_OUT4                 = 206,
    SWM_MODE_U_SCT_OUT5                 = 207,
    SWM_MODE_U_SCT_OUT6                 = 208,
    SWM_MODE_U_SCT_OUT7                 = 209,
    SWM_MODE_U_SCT_OUT8                 = 210,
    SWM_MODE_U_SCT_OUT9                 = 211,
    SWM_MODE_U_SCT_GPI0                 = 212,
    SWM_MODE_U_SCT_GPI1                 = 213,
    SWM_MODE_U_SCT_GPI2                 = 214,
    SWM_MODE_U_SCT_GPI3                 = 215,
    SWM_MODE_U_SCT_GPI4                 = 216,
    SWM_MODE_U_SCT_GPI5                 = 217,
    SWM_MODE_U_SCT_GPI6                 = 218,
    SWM_MODE_U_SCT_GPI7                 = 219,
    SWM_MODE_U_CT0_CAP0                 = 220,
    SWM_MODE_U_CT0_CAP1                 = 221,
    SWM_MODE_U_CT0_CAP2                 = 222,
    SWM_MODE_U_CT0_CAP3                 = 223,
    SWM_MODE_U_CT0_CAP4                 = 224,
    SWM_MODE_U_CT0_CAP5                 = 225,
    SWM_MODE_U_CT0_CAP6                 = 226,
    SWM_MODE_U_CT0_CAP7                 = 227,
    SWM_MODE_U_CT0_CAP8                 = 228,
    SWM_MODE_U_CT0_CAP9                 = 229,
    SWM_MODE_U_CT0_CAP10                = 230,
    SWM_MODE_U_CT0_CAP11                = 231,
    SWM_MODE_U_CT0_CAP12                = 232,
    SWM_MODE_U_CT0_CAP13                = 233,
    SWM_MODE_U_CT0_CAP14                = 234,
    SWM_MODE_U_CT0_CAP15                = 235,
    SWM_MODE_U_CT1_CAP0                 = 236,
    SWM_MODE_U_CT1_CAP1                 = 237,
    SWM_MODE_U_CT1_CAP2                 = 238,
    SWM_MODE_U_CT1_CAP3                 = 239,
    SWM_MODE_U_CT1_CAP4                 = 240,
    SWM_MODE_U_CT1_CAP5                 = 241,
    SWM_MODE_U_CT1_CAP6                 = 242,
    SWM_MODE_U_CT1_CAP7                 = 243,
    SWM_MODE_U_CT1_CAP8                 = 244,
    SWM_MODE_U_CT1_CAP9                 = 245,
    SWM_MODE_U_CT1_CAP10                = 246,
    SWM_MODE_U_CT1_CAP11                = 247,
    SWM_MODE_U_CT1_CAP12                = 248,
    SWM_MODE_U_CT1_CAP13                = 249,
    SWM_MODE_U_CT1_CAP14                = 250,
    SWM_MODE_U_CT1_CAP15                = 251,
    SWM_MODE_U_CT2_CAP0                 = 252,
    SWM_MODE_U_CT2_CAP1                 = 253,
    SWM_MODE_U_CT2_CAP2                 = 254,
    SWM_MODE_U_CT2_CAP3                 = 255,
    SWM_MODE_U_CT2_CAP4                 = 256,
    SWM_MODE_U_CT2_CAP5                 = 257,
    SWM_MODE_U_CT2_CAP6                 = 258,
    SWM_MODE_U_CT2_CAP7                 = 259,
    SWM_MODE_U_CT2_CAP8                 = 260,
    SWM_MODE_U_CT2_CAP9                 = 261,
    SWM_MODE_U_CT2_CAP10                = 262,
    SWM_MODE_U_CT2_CAP11                = 263,
    SWM_MODE_U_CT2_CAP12                = 264,
    SWM_MODE_U_CT2_CAP13                = 265,
    SWM_MODE_U_CT2_CAP14                = 266,
    SWM_MODE_U_CT2_CAP15                = 267,
    SWM_MODE_U_CT3_CAP0                 = 268,
    SWM_MODE_U_CT3_CAP1                 = 269,
    SWM_MODE_U_CT3_CAP2                 = 270,
    SWM_MODE_U_CT3_CAP3                 = 271,
    SWM_MODE_U_CT3_CAP4                 = 272,
    SWM_MODE_U_CT3_CAP5                 = 273,
    SWM_MODE_U_CT3_CAP6                 = 274,
    SWM_MODE_U_CT3_CAP7                 = 275,
    SWM_MODE_U_CT3_CAP8                 = 276,
    SWM_MODE_U_CT3_CAP9                 = 277,
    SWM_MODE_U_CT3_CAP10                = 278,
    SWM_MODE_U_CT3_CAP11                = 279,
    SWM_MODE_U_CT3_CAP12                = 280,
    SWM_MODE_U_CT3_CAP13                = 281,
    SWM_MODE_U_CT3_CAP14                = 282,
    SWM_MODE_U_CT3_CAP15                = 283,
    SWM_MODE_U_CT4_CAP0                 = 284,
    SWM_MODE_U_CT4_CAP1                 = 285,
    SWM_MODE_U_CT4_CAP2                 = 286,
    SWM_MODE_U_CT4_CAP3                 = 287,
    SWM_MODE_U_CT4_CAP4                 = 288,
    SWM_MODE_U_CT4_CAP5                 = 289,
    SWM_MODE_U_CT4_CAP6                 = 290,
    SWM_MODE_U_CT4_CAP7                 = 291,
    SWM_MODE_U_CT4_CAP8                 = 292,
    SWM_MODE_U_CT4_CAP9                 = 293,
    SWM_MODE_U_CT4_CAP10                = 294,
    SWM_MODE_U_CT4_CAP11                = 295,
    SWM_MODE_U_CT4_CAP12                = 296,
    SWM_MODE_U_CT4_CAP13                = 297,
    SWM_MODE_U_CT4_CAP14                = 298,
    SWM_MODE_U_CT4_CAP15                = 299,
    SWM_MODE_U_CT0_OUT0                 = 300,
    SWM_MODE_U_CT0_OUT1                 = 301,
    SWM_MODE_U_CT0_OUT2                 = 302,
    SWM_MODE_U_CT0_OUT3                 = 303,
    SWM_MODE_U_CT1_OUT0                 = 304,
    SWM_MODE_U_CT1_OUT1                 = 305,
    SWM_MODE_U_CT1_OUT2                 = 306,
    SWM_MODE_U_CT1_OUT3                 = 307,
    SWM_MODE_U_CT2_OUT0                 = 308,
    SWM_MODE_U_CT2_OUT1                 = 309,
    SWM_MODE_U_CT2_OUT2                 = 310,
    SWM_MODE_U_CT2_OUT3                 = 311,
    SWM_MODE_U_CT3_OUT0                 = 312,
    SWM_MODE_U_CT3_OUT1                 = 313,
    SWM_MODE_U_CT3_OUT2                 = 314,
    SWM_MODE_U_CT3_OUT3                 = 315,
    SWM_MODE_U_CT4_OUT0                 = 316,
    SWM_MODE_U_CT4_OUT1                 = 317,
    SWM_MODE_U_CT4_OUT2                 = 318,
    SWM_MODE_U_CT4_OUT3                 = 319,
    SWM_MODE_U_NSS_DBGO_OUT0            = 320,
    SWM_MODE_U_NSS_DBGO_OUT1            = 321,
    SWM_MODE_U_NSS_DBGO_OUT2            = 322,
    SWM_MODE_U_NSS_DBGO_OUT3            = 323,
    SWM_MODE_U_NSS_DBGO_OUT4            = 324,
    SWM_MODE_U_NSS_DBGO_OUT5            = 325,
    SWM_MODE_U_NSS_DBGO_OUT6            = 326,
    SWM_MODE_U_NSS_DBGO_OUT7            = 327,
    SWM_MODE_U_NSS_DBGO_CM55_SO_TXDATA  = 328,
    SWM_MODE_U_NSS_DBGO_XSP_SO_TXDATA   = 329,
    SWM_MODE_U_DSS_GPO_OUT0             = 330,
    SWM_MODE_U_DSS_GPO_OUT1             = 331,
    SWM_MODE_U_DSS_GPO_OUT2             = 332,
    SWM_MODE_U_DSS_GPO_OUT3             = 333,
    SWM_MODE_U_DSS_GPO_OUT4             = 334,
    SWM_MODE_U_DSS_GPO_OUT5             = 335,
    SWM_MODE_U_DSS_GPO_OUT6             = 336,
    SWM_MODE_U_DSS_GPO_OUT7             = 337,
    SWM_MODE_U_DSS_GPI_IN0              = 338,
    SWM_MODE_U_DSS_GPI_IN1              = 339,
    SWM_MODE_U_DSS_GPI_IN2              = 340,
    SWM_MODE_U_DSS_GPI_IN3              = 341,
    SWM_MODE_U_DSS_GPI_IN4              = 342,
    SWM_MODE_U_DSS_GPI_IN5              = 343,
    SWM_MODE_U_DSS_GPI_IN6              = 344,
    SWM_MODE_U_DSS_GPI_IN7              = 345,
    SWM_MODE_U_DSP3_UART0               = 346,
    SWM_MODE_U_DSP3_UART1               = 347,
    SWM_MODE_U_IRFIC_GPIO11             = 348,
    SWM_MODE_U_IRFIC_GPIO12             = 349,
    SWM_MODE_U_IRFIC_GPIO13             = 350,
    SWM_MODE_U_IRFIC_GPIO14             = 351,
    SWM_MODE_U_IRFIC_GPIO15             = 352,
    SWM_MODE_U_IRFIC_GPIO16             = 353,
    SWM_MODE_U_IRFIC_GPIO17             = 354,
    SWM_MODE_U_IRFIC_GPIO18             = 355,
    SWM_MODE_U_DBG_CLK_FROL             = 356,
    SWM_MODE_U_DBG_CLK_FROL_N           = 357,
    SWM_MODE_U_DBG_CLK_FRO              = 358,
    SWM_MODE_U_DBG_CLK_FRO_N            = 359,
    SWM_MODE_U_DBG_CLK_NSS_FRO          = 360,
    SWM_MODE_U_DBG_CLK_NSS_FRO_N        = 361,
    SWM_MODE_U_DBG_CLK_PLL              = 362,
    SWM_MODE_U_DBG_CLK_PLL_N            = 363,
    SWM_MODE_U_AUDIO_PWM_DATA0          = 364,
    SWM_MODE_U_AUDIO_PWM_DATA1          = 365,
    SWM_MODE_U_AUDIO_PWM_DATA2          = 366,
    SWM_MODE_U_AUDIO_PWM_DATA3          = 367,
    SWM_MODE_U_AUDIO_PWM_DATA4          = 368,
    SWM_MODE_U_AUDIO_PWM_DATA5          = 369,
    SWM_MODE_U_AUDIO_PWM_DATA6          = 370,
    SWM_MODE_U_AUDIO_PWM_DATA7          = 371,
    SWM_MODE_U_AUDIO_PWM_WS             = 372,
    SWM_MODE_U_GEN_HIGHZ                = 373,
    SWM_MODE_U_GEN_TIE0                 = 374,
    SWM_MODE_U_GEN_TIE1                 = 375,
    SWM_MODE_U_GEN_WEAK_PULL_UP         = 376,
    SWM_MODE_U_GEN_WEAK_PULL_DOWN       = 377,
} swm_pin_mode_t;


/*******************************************************************************
 * Compatibility Macros
 ******************************************************************************/

/**
 * @brief Pin compatibility masks for each SWM mode.
 *
 * These macros define which pins are compatible with each mode.
 * Used for compile-time validation in SWM_CONFIGURE_PIN macro.
 */
#define SWM_COMPAT_SWM_MODE_U_FC0_SCK \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | (1ULL << SWM3_00) | (1ULL << SWM3_01) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07) | \
    (1ULL << SWM3_08) | (1ULL << SWM3_09))

#define SWM_COMPAT_SWM_MODE_U_FC0_RXD_SDA_MOSI_CSN \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | (1ULL << SWM3_00) | (1ULL << SWM3_01) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07) | \
    (1ULL << SWM3_08) | (1ULL << SWM3_09))

#define SWM_COMPAT_SWM_MODE_U_FC0_TXD_SCL_MISO_IO0 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | (1ULL << SWM3_00) | (1ULL << SWM3_01) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07) | \
    (1ULL << SWM3_08) | (1ULL << SWM3_09))

#define SWM_COMPAT_SWM_MODE_U_FC0_CTS_SDAX_SSELN0_IO1 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | (1ULL << SWM3_00) | (1ULL << SWM3_01) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07) | \
    (1ULL << SWM3_08) | (1ULL << SWM3_09))

#define SWM_COMPAT_SWM_MODE_U_FC0_RTS_SCLX_SSELN1_IO2 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | (1ULL << SWM3_00) | (1ULL << SWM3_01) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07) | \
    (1ULL << SWM3_08) | (1ULL << SWM3_09))

#define SWM_COMPAT_SWM_MODE_U_FC0_SSELN2_IO3 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | (1ULL << SWM3_00) | (1ULL << SWM3_01) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07) | \
    (1ULL << SWM3_08) | (1ULL << SWM3_09))

#define SWM_COMPAT_SWM_MODE_U_FC0_SSELN3 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | \
    (1ULL << SWM2_10) | (1ULL << SWM2_11) | (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_03))

#define SWM_COMPAT_SWM_MODE_U_FC1_SCK \
    ((1ULL << SWM0_04) | (1ULL << SWM0_05) | (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_FC1_RXD_SDA_MOSI_CSN \
    ((1ULL << SWM0_04) | (1ULL << SWM0_05) | (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_FC1_TXD_SCL_MISO_IO0 \
    ((1ULL << SWM0_04) | (1ULL << SWM0_05) | (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_FC1_CTS_SDAX_SSELN0_IO1 \
    ((1ULL << SWM0_04) | (1ULL << SWM0_05) | (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_FC1_RTS_SCLX_SSELN1_IO2 \
    ((1ULL << SWM0_04) | (1ULL << SWM0_05) | (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_FC1_SSELN2_IO3 \
    ((1ULL << SWM0_04) | (1ULL << SWM0_05) | (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_FC1_SSELN3 \
    ((1ULL << SWM0_04) | (1ULL << SWM0_05) | (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_FC2_SCK \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_08) | (1ULL << SWM3_09) | (1ULL << SWM3_10) | (1ULL << SWM3_11) | \
    (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_FC2_RXD_SDA_MOSI_CSN \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_08) | (1ULL << SWM3_09) | (1ULL << SWM3_10) | (1ULL << SWM3_11) | \
    (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_FC2_TXD_SCL_MISO_IO0 \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_08) | (1ULL << SWM3_09) | (1ULL << SWM3_10) | (1ULL << SWM3_11) | \
    (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_FC2_CTS_SDAX_SSELN0_IO1 \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_08) | (1ULL << SWM3_09) | (1ULL << SWM3_10) | (1ULL << SWM3_11) | \
    (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_FC2_RTS_SCLX_SSELN1_IO2 \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_08) | (1ULL << SWM3_09) | (1ULL << SWM3_10) | (1ULL << SWM3_11) | \
    (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_FC2_SSELN2_IO3 \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_08) | (1ULL << SWM3_09) | (1ULL << SWM3_10) | (1ULL << SWM3_11) | \
    (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_FC2_SSELN3 \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_08) | (1ULL << SWM3_09) | (1ULL << SWM3_10) | (1ULL << SWM3_11) | \
    (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_FC3_SCK \
    ((1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_FC3_RXD_SDA_MOSI_CSN \
    ((1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_FC3_TXD_SCL_MISO_IO0 \
    ((1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_FC3_CTS_SDAX_SSELN0_IO1 \
    ((1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_FC3_RTS_SCLX_SSELN1_IO2 \
    ((1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | \
    (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_FC4_SCK \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_00) | (1ULL << SWM1_01) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM3_08) | (1ULL << SWM3_09))

#define SWM_COMPAT_SWM_MODE_U_FC4_RXD_SDA_MOSI_CSN \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_00) | (1ULL << SWM1_01) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM3_08) | (1ULL << SWM3_09))

#define SWM_COMPAT_SWM_MODE_U_FC4_TXD_SCL_MISO_IO0 \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_00) | (1ULL << SWM1_01) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM3_08) | (1ULL << SWM3_09))

#define SWM_COMPAT_SWM_MODE_U_FC4_CTS_SDAX_SSELN0_IO1 \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_00) | (1ULL << SWM1_01) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM3_08) | (1ULL << SWM3_09))

#define SWM_COMPAT_SWM_MODE_U_FC4_RTS_SCLX_SSELN1_IO2 \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_00) | (1ULL << SWM1_01) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM3_08) | (1ULL << SWM3_09))

#define SWM_COMPAT_SWM_MODE_U_FC5_SCK \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM3_10) | (1ULL << SWM3_11) | \
    (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_FC5_RXD_SDA_MOSI_CSN \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM3_10) | (1ULL << SWM3_11) | \
    (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_FC5_TXD_SCL_MISO_IO0 \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM3_10) | (1ULL << SWM3_11) | \
    (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_FC5_CTS_SDAX_SSELN0_IO1 \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM3_10) | (1ULL << SWM3_11) | \
    (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_FC5_RTS_SCLX_SSELN1_IO2 \
    ((1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM3_10) | (1ULL << SWM3_11) | \
    (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_XSPI0_SIO0 \
    ((1ULL << SWM2_00) | (1ULL << SWM2_01) | (1ULL << SWM2_02) | (1ULL << SWM2_03) | (1ULL << SWM2_04) | (1ULL << SWM2_05) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI0_SIO1 \
    ((1ULL << SWM2_00) | (1ULL << SWM2_01) | (1ULL << SWM2_02) | (1ULL << SWM2_03) | (1ULL << SWM2_04) | (1ULL << SWM2_05) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI0_SIO2 \
    ((1ULL << SWM2_00) | (1ULL << SWM2_01) | (1ULL << SWM2_02) | (1ULL << SWM2_03) | (1ULL << SWM2_04) | (1ULL << SWM2_05) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI0_SIO3 \
    ((1ULL << SWM2_00) | (1ULL << SWM2_01) | (1ULL << SWM2_02) | (1ULL << SWM2_03) | (1ULL << SWM2_04) | (1ULL << SWM2_05) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI0_SIO4 \
    ((1ULL << SWM2_00) | (1ULL << SWM2_01) | (1ULL << SWM2_02) | (1ULL << SWM2_03) | (1ULL << SWM2_04) | (1ULL << SWM2_05) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI0_SIO5 \
    ((1ULL << SWM2_00) | (1ULL << SWM2_01) | (1ULL << SWM2_02) | (1ULL << SWM2_03) | (1ULL << SWM2_04) | (1ULL << SWM2_05) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI0_SIO6 \
    ((1ULL << SWM2_00) | (1ULL << SWM2_01) | (1ULL << SWM2_02) | (1ULL << SWM2_03) | (1ULL << SWM2_04) | (1ULL << SWM2_05) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI0_SIO7 \
    ((1ULL << SWM2_00) | (1ULL << SWM2_01) | (1ULL << SWM2_02) | (1ULL << SWM2_03) | (1ULL << SWM2_04) | (1ULL << SWM2_05) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI0_SCLK \
    ((1ULL << SWM2_00) | (1ULL << SWM2_01) | (1ULL << SWM2_02) | (1ULL << SWM2_03) | (1ULL << SWM2_04) | (1ULL << SWM2_05) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI0_SSN1 \
    ((1ULL << SWM2_00) | (1ULL << SWM2_01) | (1ULL << SWM2_02) | (1ULL << SWM2_03) | (1ULL << SWM2_04) | (1ULL << SWM2_05) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI0_SSN2 \
    ((1ULL << SWM2_00) | (1ULL << SWM2_01) | (1ULL << SWM2_02) | (1ULL << SWM2_03) | (1ULL << SWM2_04) | (1ULL << SWM2_05) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI0_DS \
    ((1ULL << SWM2_00) | (1ULL << SWM2_01) | (1ULL << SWM2_02) | (1ULL << SWM2_03) | (1ULL << SWM2_04) | (1ULL << SWM2_05) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI0_INT \
    ((1ULL << SWM0_07) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI0_CLOCK_LOOPBACK \
    ((1ULL << SWM0_02))

#define SWM_COMPAT_SWM_MODE_U_XSPI1_SIO0 \
    ((1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI1_SIO1 \
    ((1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI1_SIO2 \
    ((1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI1_SIO3 \
    ((1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI1_SIO4 \
    ((1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI1_SIO5 \
    ((1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI1_SIO6 \
    ((1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI1_SIO7 \
    ((1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI1_SCLK \
    ((1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI1_SSN1 \
    ((1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI1_SSN2 \
    ((1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI1_DS \
    ((1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI1_INT \
    ((1ULL << SWM0_07) | (1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_XSPI1_CLOCK_LOOPBACK \
    ((1ULL << SWM0_02))

#define SWM_COMPAT_SWM_MODE_U_I3C_SCL \
    ((1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_I3C_SDA \
    ((1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_DAP_SWCLK \
    ((1ULL << SWM0_10) | (1ULL << SWM0_11) | (1ULL << SWM3_12) | (1ULL << SWM3_13))

#define SWM_COMPAT_SWM_MODE_U_DAP_SWDIO \
    ((1ULL << SWM0_10) | (1ULL << SWM0_11) | (1ULL << SWM3_12) | (1ULL << SWM3_13))

#define SWM_COMPAT_SWM_MODE_U_DAP_SWO \
    ((1ULL << SWM0_08) | (1ULL << SWM0_09) | (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_DAP_TRACE_CLK \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_08) | \
    (1ULL << SWM0_09) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11) | \
    (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | (1ULL << SWM3_00) | \
    (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_DAP_TRACE_DATA0 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_08) | \
    (1ULL << SWM0_09) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11) | \
    (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | (1ULL << SWM3_00) | \
    (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_DAP_TRACE_DATA1 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM1_07) | \
    (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | \
    (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | \
    (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_DAP_TRACE_DATA2 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM1_07) | \
    (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | \
    (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_DAP_TRACE_DATA3 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM1_07) | \
    (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | \
    (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO0 \
    ((1ULL << SWM0_00))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO1 \
    ((1ULL << SWM0_01))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO2 \
    ((1ULL << SWM0_02))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO3 \
    ((1ULL << SWM0_03))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO4 \
    ((1ULL << SWM0_04))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO5 \
    ((1ULL << SWM0_05))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO6 \
    ((1ULL << SWM0_06))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO7 \
    ((1ULL << SWM0_07))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO8 \
    ((1ULL << SWM0_08))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO9 \
    ((1ULL << SWM0_09))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO10 \
    ((1ULL << SWM0_10))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO11 \
    ((1ULL << SWM0_11))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO12 \
    ((1ULL << SWM1_00))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO13 \
    ((1ULL << SWM1_01))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO14 \
    ((1ULL << SWM1_02))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO15 \
    ((1ULL << SWM1_03))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO16 \
    ((1ULL << SWM1_04))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO17 \
    ((1ULL << SWM1_05))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO18 \
    ((1ULL << SWM1_06))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO19 \
    ((1ULL << SWM1_07))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO20 \
    ((1ULL << SWM1_08))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO21 \
    ((1ULL << SWM1_09))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO22 \
    ((1ULL << SWM1_10))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO23 \
    ((1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO24 \
    ((1ULL << SWM2_00))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO25 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO26 \
    ((1ULL << SWM2_02))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO27 \
    ((1ULL << SWM2_03))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO28 \
    ((1ULL << SWM2_04))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO29 \
    ((1ULL << SWM2_05))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO30 \
    ((1ULL << SWM2_06))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO31 \
    ((1ULL << SWM2_07))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO32 \
    ((1ULL << SWM2_08))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO33 \
    ((1ULL << SWM2_09))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO34 \
    ((1ULL << SWM2_10))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO35 \
    ((1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO36 \
    ((1ULL << SWM3_00))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO37 \
    ((1ULL << SWM3_01))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO38 \
    ((1ULL << SWM3_02))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO39 \
    ((1ULL << SWM3_03))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO40 \
    ((1ULL << SWM3_04))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO41 \
    ((1ULL << SWM3_05))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO42 \
    ((1ULL << SWM3_06))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO43 \
    ((1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO44 \
    ((1ULL << SWM3_08))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO45 \
    ((1ULL << SWM3_09))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO46 \
    ((1ULL << SWM3_10))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO47 \
    ((1ULL << SWM3_11))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO48 \
    ((1ULL << SWM3_12))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO49 \
    ((1ULL << SWM3_13))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO50 \
    ((1ULL << SWM3_14))

#define SWM_COMPAT_SWM_MODE_U_GPIO_GPO51 \
    ((1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO0 \
    ((1ULL << SWM0_00))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO1 \
    ((1ULL << SWM0_01))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO2 \
    ((1ULL << SWM0_02))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO3 \
    ((1ULL << SWM0_03))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO4 \
    ((1ULL << SWM0_04))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO5 \
    ((1ULL << SWM0_05))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO6 \
    ((1ULL << SWM0_06))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO7 \
    ((1ULL << SWM0_07))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO8 \
    ((1ULL << SWM0_08))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO9 \
    ((1ULL << SWM0_09))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO10 \
    ((1ULL << SWM0_10))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO11 \
    ((1ULL << SWM0_11))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO12 \
    ((1ULL << SWM1_00))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO13 \
    ((1ULL << SWM1_01))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO14 \
    ((1ULL << SWM1_02))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO15 \
    ((1ULL << SWM1_03))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO16 \
    ((1ULL << SWM1_04))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO17 \
    ((1ULL << SWM1_05))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO18 \
    ((1ULL << SWM1_06))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO19 \
    ((1ULL << SWM1_07))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO20 \
    ((1ULL << SWM1_08))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO21 \
    ((1ULL << SWM1_09))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO22 \
    ((1ULL << SWM1_10))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO23 \
    ((1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO24 \
    ((1ULL << SWM2_00))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO25 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO26 \
    ((1ULL << SWM2_02))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO27 \
    ((1ULL << SWM2_03))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO28 \
    ((1ULL << SWM2_04))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO29 \
    ((1ULL << SWM2_05))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO30 \
    ((1ULL << SWM2_06))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO31 \
    ((1ULL << SWM2_07))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO32 \
    ((1ULL << SWM2_08))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO33 \
    ((1ULL << SWM2_09))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO34 \
    ((1ULL << SWM2_10))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO35 \
    ((1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO36 \
    ((1ULL << SWM3_00))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO37 \
    ((1ULL << SWM3_01))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO38 \
    ((1ULL << SWM3_02))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO39 \
    ((1ULL << SWM3_03))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO40 \
    ((1ULL << SWM3_04))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO41 \
    ((1ULL << SWM3_05))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO42 \
    ((1ULL << SWM3_06))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO43 \
    ((1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO44 \
    ((1ULL << SWM3_08))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO45 \
    ((1ULL << SWM3_09))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO46 \
    ((1ULL << SWM3_10))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO47 \
    ((1ULL << SWM3_11))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO48 \
    ((1ULL << SWM3_12))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO49 \
    ((1ULL << SWM3_13))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO50 \
    ((1ULL << SWM3_14))

#define SWM_COMPAT_SWM_MODE_U_GPIO_SEC_GPO51 \
    ((1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_DMIC_TDM0 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM0_08) | (1ULL << SWM0_09) | (1ULL << SWM0_10) | (1ULL << SWM0_11) | \
    (1ULL << SWM1_04) | (1ULL << SWM1_05) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | \
    (1ULL << SWM1_10) | (1ULL << SWM1_11) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | \
    (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | \
    (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_DMIC_TDM1 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM0_08) | (1ULL << SWM0_09) | (1ULL << SWM0_10) | (1ULL << SWM0_11) | \
    (1ULL << SWM1_04) | (1ULL << SWM1_05) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | \
    (1ULL << SWM1_10) | (1ULL << SWM1_11) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | \
    (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | \
    (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_DMIC_TDM2 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM0_08) | (1ULL << SWM0_09) | (1ULL << SWM0_10) | (1ULL << SWM0_11) | \
    (1ULL << SWM1_04) | (1ULL << SWM1_05) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | \
    (1ULL << SWM1_10) | (1ULL << SWM1_11) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | \
    (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | \
    (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_DMIC_TDM3 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM0_08) | (1ULL << SWM0_09) | (1ULL << SWM0_10) | (1ULL << SWM0_11) | \
    (1ULL << SWM1_04) | (1ULL << SWM1_05) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | \
    (1ULL << SWM1_10) | (1ULL << SWM1_11) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | \
    (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | \
    (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_DMIC_CLK0 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM0_08) | (1ULL << SWM0_09) | (1ULL << SWM0_10) | (1ULL << SWM0_11) | \
    (1ULL << SWM1_04) | (1ULL << SWM1_05) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | \
    (1ULL << SWM1_10) | (1ULL << SWM1_11) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | \
    (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | \
    (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_DMIC_CLK1 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM0_08) | (1ULL << SWM0_09) | (1ULL << SWM0_10) | (1ULL << SWM0_11) | \
    (1ULL << SWM1_04) | (1ULL << SWM1_05) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | \
    (1ULL << SWM1_10) | (1ULL << SWM1_11) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | \
    (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | \
    (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_DMIC_CLK2 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM0_08) | (1ULL << SWM0_09) | (1ULL << SWM0_10) | (1ULL << SWM0_11) | \
    (1ULL << SWM1_04) | (1ULL << SWM1_05) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | \
    (1ULL << SWM1_10) | (1ULL << SWM1_11) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | \
    (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | \
    (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_DMIC_CLK3 \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM0_08) | (1ULL << SWM0_09) | (1ULL << SWM0_10) | (1ULL << SWM0_11) | \
    (1ULL << SWM1_04) | (1ULL << SWM1_05) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | \
    (1ULL << SWM1_10) | (1ULL << SWM1_11) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | \
    (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | \
    (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_DP0_SDI \
    ((1ULL << SWM0_08) | (1ULL << SWM0_09) | (1ULL << SWM0_10) | (1ULL << SWM0_11) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | \
    (1ULL << SWM2_10) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_DP0_SDO \
    ((1ULL << SWM0_08) | (1ULL << SWM0_09) | (1ULL << SWM0_10) | (1ULL << SWM0_11) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | \
    (1ULL << SWM2_10) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_DP0_FRAME \
    ((1ULL << SWM0_08) | (1ULL << SWM0_09) | (1ULL << SWM0_10) | (1ULL << SWM0_11) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | \
    (1ULL << SWM2_10) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_DP0_CLK \
    ((1ULL << SWM0_08) | (1ULL << SWM0_09) | (1ULL << SWM0_10) | (1ULL << SWM0_11) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | \
    (1ULL << SWM2_10) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_DP1_SDI \
    ((1ULL << SWM0_04) | (1ULL << SWM0_05) | (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | \
    (1ULL << SWM1_10) | (1ULL << SWM1_11) | (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_03) | \
    (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_DP1_SDO \
    ((1ULL << SWM0_04) | (1ULL << SWM0_05) | (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | \
    (1ULL << SWM1_10) | (1ULL << SWM1_11) | (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_03) | \
    (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_DP1_FRAME \
    ((1ULL << SWM0_04) | (1ULL << SWM0_05) | (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | \
    (1ULL << SWM1_10) | (1ULL << SWM1_11) | (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_03) | \
    (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_DP1_CLK \
    ((1ULL << SWM0_04) | (1ULL << SWM0_05) | (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | \
    (1ULL << SWM1_10) | (1ULL << SWM1_11) | (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_03) | \
    (1ULL << SWM3_04) | (1ULL << SWM3_05) | (1ULL << SWM3_06) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_DP2_SDI \
    ((1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM3_00) | (1ULL << SWM3_01) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03))

#define SWM_COMPAT_SWM_MODE_U_DP2_SDO \
    ((1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM3_00) | (1ULL << SWM3_01) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03))

#define SWM_COMPAT_SWM_MODE_U_DP2_FRAME \
    ((1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM3_00) | (1ULL << SWM3_01) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03))

#define SWM_COMPAT_SWM_MODE_U_DP2_CLK \
    ((1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM3_00) | (1ULL << SWM3_01) | \
    (1ULL << SWM3_02) | (1ULL << SWM3_03))

#define SWM_COMPAT_SWM_MODE_U_DP3_SDI \
    ((1ULL << SWM1_04) | (1ULL << SWM1_05) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | \
    (1ULL << SWM2_10) | (1ULL << SWM2_11) | (1ULL << SWM3_08) | (1ULL << SWM3_09) | (1ULL << SWM3_10) | (1ULL << SWM3_11))

#define SWM_COMPAT_SWM_MODE_U_DP3_SDO \
    ((1ULL << SWM1_04) | (1ULL << SWM1_05) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | \
    (1ULL << SWM2_10) | (1ULL << SWM2_11) | (1ULL << SWM3_08) | (1ULL << SWM3_09) | (1ULL << SWM3_10) | (1ULL << SWM3_11))

#define SWM_COMPAT_SWM_MODE_U_DP3_FRAME \
    ((1ULL << SWM1_04) | (1ULL << SWM1_05) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | \
    (1ULL << SWM2_10) | (1ULL << SWM2_11) | (1ULL << SWM3_08) | (1ULL << SWM3_09) | (1ULL << SWM3_10) | (1ULL << SWM3_11))

#define SWM_COMPAT_SWM_MODE_U_DP3_CLK \
    ((1ULL << SWM1_04) | (1ULL << SWM1_05) | (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | \
    (1ULL << SWM2_10) | (1ULL << SWM2_11) | (1ULL << SWM3_08) | (1ULL << SWM3_09) | (1ULL << SWM3_10) | (1ULL << SWM3_11))

#define SWM_COMPAT_SWM_MODE_U_SCT_OUT0 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_OUT1 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_OUT2 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_OUT3 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_OUT4 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_OUT5 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_OUT6 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_OUT7 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_OUT8 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_OUT9 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_GPI0 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_GPI1 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_GPI2 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_GPI3 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_GPI4 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_GPI5 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_GPI6 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_SCT_GPI7 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_CT0_CAP0 \
    ((1ULL << SWM0_00))

#define SWM_COMPAT_SWM_MODE_U_CT0_CAP1 \
    ((1ULL << SWM0_01))

#define SWM_COMPAT_SWM_MODE_U_CT0_CAP2 \
    ((1ULL << SWM0_02))

#define SWM_COMPAT_SWM_MODE_U_CT0_CAP3 \
    ((1ULL << SWM0_03))

#define SWM_COMPAT_SWM_MODE_U_CT0_CAP4 \
    ((1ULL << SWM0_04))

#define SWM_COMPAT_SWM_MODE_U_CT0_CAP5 \
    ((1ULL << SWM0_05))

#define SWM_COMPAT_SWM_MODE_U_CT0_CAP6 \
    ((1ULL << SWM0_06))

#define SWM_COMPAT_SWM_MODE_U_CT0_CAP7 \
    ((1ULL << SWM0_07))

#define SWM_COMPAT_SWM_MODE_U_CT0_CAP8 \
    ((1ULL << SWM0_08))

#define SWM_COMPAT_SWM_MODE_U_CT0_CAP9 \
    ((1ULL << SWM0_09))

#define SWM_COMPAT_SWM_MODE_U_CT0_CAP10 \
    ((1ULL << SWM0_10))

#define SWM_COMPAT_SWM_MODE_U_CT0_CAP11 \
    ((1ULL << SWM0_11))

#define SWM_COMPAT_SWM_MODE_U_CT0_CAP12 \
    ((1ULL << SWM1_00))

#define SWM_COMPAT_SWM_MODE_U_CT0_CAP13 \
    ((1ULL << SWM1_01))

#define SWM_COMPAT_SWM_MODE_U_CT0_CAP14 \
    ((1ULL << SWM1_02))

#define SWM_COMPAT_SWM_MODE_U_CT0_CAP15 \
    ((1ULL << SWM1_03))

#define SWM_COMPAT_SWM_MODE_U_CT1_CAP0 \
    ((1ULL << SWM1_04))

#define SWM_COMPAT_SWM_MODE_U_CT1_CAP1 \
    ((1ULL << SWM1_05))

#define SWM_COMPAT_SWM_MODE_U_CT1_CAP2 \
    ((1ULL << SWM1_06))

#define SWM_COMPAT_SWM_MODE_U_CT1_CAP3 \
    ((1ULL << SWM1_07))

#define SWM_COMPAT_SWM_MODE_U_CT1_CAP4 \
    ((1ULL << SWM1_08))

#define SWM_COMPAT_SWM_MODE_U_CT1_CAP5 \
    ((1ULL << SWM1_09))

#define SWM_COMPAT_SWM_MODE_U_CT1_CAP6 \
    ((1ULL << SWM1_10))

#define SWM_COMPAT_SWM_MODE_U_CT1_CAP7 \
    ((1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_CT1_CAP8 \
    ((1ULL << SWM2_00))

#define SWM_COMPAT_SWM_MODE_U_CT1_CAP9 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_CT1_CAP10 \
    ((1ULL << SWM2_02))

#define SWM_COMPAT_SWM_MODE_U_CT1_CAP11 \
    ((1ULL << SWM2_03))

#define SWM_COMPAT_SWM_MODE_U_CT1_CAP12 \
    ((1ULL << SWM2_04))

#define SWM_COMPAT_SWM_MODE_U_CT1_CAP13 \
    ((1ULL << SWM2_05))

#define SWM_COMPAT_SWM_MODE_U_CT1_CAP14 \
    ((1ULL << SWM2_06))

#define SWM_COMPAT_SWM_MODE_U_CT1_CAP15 \
    ((1ULL << SWM2_07))

#define SWM_COMPAT_SWM_MODE_U_CT2_CAP0 \
    ((1ULL << SWM2_08))

#define SWM_COMPAT_SWM_MODE_U_CT2_CAP1 \
    ((1ULL << SWM2_09))

#define SWM_COMPAT_SWM_MODE_U_CT2_CAP2 \
    ((1ULL << SWM2_10))

#define SWM_COMPAT_SWM_MODE_U_CT2_CAP3 \
    ((1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_CT2_CAP4 \
    ((1ULL << SWM3_00))

#define SWM_COMPAT_SWM_MODE_U_CT2_CAP5 \
    ((1ULL << SWM3_01))

#define SWM_COMPAT_SWM_MODE_U_CT2_CAP6 \
    ((1ULL << SWM3_02))

#define SWM_COMPAT_SWM_MODE_U_CT2_CAP7 \
    ((1ULL << SWM3_03))

#define SWM_COMPAT_SWM_MODE_U_CT2_CAP8 \
    ((1ULL << SWM3_04))

#define SWM_COMPAT_SWM_MODE_U_CT2_CAP9 \
    ((1ULL << SWM3_05))

#define SWM_COMPAT_SWM_MODE_U_CT2_CAP10 \
    ((1ULL << SWM3_06))

#define SWM_COMPAT_SWM_MODE_U_CT2_CAP11 \
    ((1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_CT2_CAP12 \
    ((1ULL << SWM3_08))

#define SWM_COMPAT_SWM_MODE_U_CT2_CAP13 \
    ((1ULL << SWM3_09))

#define SWM_COMPAT_SWM_MODE_U_CT2_CAP14 \
    ((1ULL << SWM3_10))

#define SWM_COMPAT_SWM_MODE_U_CT2_CAP15 \
    ((1ULL << SWM3_11))

#define SWM_COMPAT_SWM_MODE_U_CT3_CAP0 \
    ((1ULL << SWM3_12))

#define SWM_COMPAT_SWM_MODE_U_CT3_CAP1 \
    ((1ULL << SWM3_13))

#define SWM_COMPAT_SWM_MODE_U_CT3_CAP2 \
    ((1ULL << SWM3_14))

#define SWM_COMPAT_SWM_MODE_U_CT3_CAP3 \
    ((1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_CT3_CAP4 \
    ((1ULL << SWM0_00))

#define SWM_COMPAT_SWM_MODE_U_CT3_CAP5 \
    ((1ULL << SWM0_01))

#define SWM_COMPAT_SWM_MODE_U_CT3_CAP6 \
    ((1ULL << SWM0_02))

#define SWM_COMPAT_SWM_MODE_U_CT3_CAP7 \
    ((1ULL << SWM0_03))

#define SWM_COMPAT_SWM_MODE_U_CT3_CAP8 \
    ((1ULL << SWM0_04))

#define SWM_COMPAT_SWM_MODE_U_CT3_CAP9 \
    ((1ULL << SWM0_05))

#define SWM_COMPAT_SWM_MODE_U_CT3_CAP10 \
    ((1ULL << SWM0_06))

#define SWM_COMPAT_SWM_MODE_U_CT3_CAP11 \
    ((1ULL << SWM0_07))

#define SWM_COMPAT_SWM_MODE_U_CT3_CAP12 \
    ((1ULL << SWM0_08))

#define SWM_COMPAT_SWM_MODE_U_CT3_CAP13 \
    ((1ULL << SWM0_09))

#define SWM_COMPAT_SWM_MODE_U_CT3_CAP14 \
    ((1ULL << SWM0_10))

#define SWM_COMPAT_SWM_MODE_U_CT3_CAP15 \
    ((1ULL << SWM0_11))

#define SWM_COMPAT_SWM_MODE_U_CT4_CAP0 \
    ((1ULL << SWM1_00))

#define SWM_COMPAT_SWM_MODE_U_CT4_CAP1 \
    ((1ULL << SWM1_01))

#define SWM_COMPAT_SWM_MODE_U_CT4_CAP2 \
    ((1ULL << SWM1_02))

#define SWM_COMPAT_SWM_MODE_U_CT4_CAP3 \
    ((1ULL << SWM1_03))

#define SWM_COMPAT_SWM_MODE_U_CT4_CAP4 \
    ((1ULL << SWM1_04))

#define SWM_COMPAT_SWM_MODE_U_CT4_CAP5 \
    ((1ULL << SWM1_05))

#define SWM_COMPAT_SWM_MODE_U_CT4_CAP6 \
    ((1ULL << SWM1_06))

#define SWM_COMPAT_SWM_MODE_U_CT4_CAP7 \
    ((1ULL << SWM1_07))

#define SWM_COMPAT_SWM_MODE_U_CT4_CAP8 \
    ((1ULL << SWM1_08))

#define SWM_COMPAT_SWM_MODE_U_CT4_CAP9 \
    ((1ULL << SWM1_09))

#define SWM_COMPAT_SWM_MODE_U_CT4_CAP10 \
    ((1ULL << SWM1_10))

#define SWM_COMPAT_SWM_MODE_U_CT4_CAP11 \
    ((1ULL << SWM1_11))

#define SWM_COMPAT_SWM_MODE_U_CT4_CAP12 \
    ((1ULL << SWM2_00))

#define SWM_COMPAT_SWM_MODE_U_CT4_CAP13 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_CT4_CAP14 \
    ((1ULL << SWM2_02))

#define SWM_COMPAT_SWM_MODE_U_CT4_CAP15 \
    ((1ULL << SWM2_03))

#define SWM_COMPAT_SWM_MODE_U_CT0_OUT0 \
    ((1ULL << SWM0_00))

#define SWM_COMPAT_SWM_MODE_U_CT0_OUT1 \
    ((1ULL << SWM0_01))

#define SWM_COMPAT_SWM_MODE_U_CT0_OUT2 \
    ((1ULL << SWM0_02))

#define SWM_COMPAT_SWM_MODE_U_CT0_OUT3 \
    ((1ULL << SWM0_03))

#define SWM_COMPAT_SWM_MODE_U_CT1_OUT0 \
    ((1ULL << SWM0_04))

#define SWM_COMPAT_SWM_MODE_U_CT1_OUT1 \
    ((1ULL << SWM0_05))

#define SWM_COMPAT_SWM_MODE_U_CT1_OUT2 \
    ((1ULL << SWM0_06))

#define SWM_COMPAT_SWM_MODE_U_CT1_OUT3 \
    ((1ULL << SWM0_07))

#define SWM_COMPAT_SWM_MODE_U_CT2_OUT0 \
    ((1ULL << SWM0_08))

#define SWM_COMPAT_SWM_MODE_U_CT2_OUT1 \
    ((1ULL << SWM0_09))

#define SWM_COMPAT_SWM_MODE_U_CT2_OUT2 \
    ((1ULL << SWM0_10))

#define SWM_COMPAT_SWM_MODE_U_CT2_OUT3 \
    ((1ULL << SWM0_11))

#define SWM_COMPAT_SWM_MODE_U_CT3_OUT0 \
    ((1ULL << SWM1_00))

#define SWM_COMPAT_SWM_MODE_U_CT3_OUT1 \
    ((1ULL << SWM1_01))

#define SWM_COMPAT_SWM_MODE_U_CT3_OUT2 \
    ((1ULL << SWM1_02))

#define SWM_COMPAT_SWM_MODE_U_CT3_OUT3 \
    ((1ULL << SWM1_03))

#define SWM_COMPAT_SWM_MODE_U_CT4_OUT0 \
    ((1ULL << SWM1_04))

#define SWM_COMPAT_SWM_MODE_U_CT4_OUT1 \
    ((1ULL << SWM1_05))

#define SWM_COMPAT_SWM_MODE_U_CT4_OUT2 \
    ((1ULL << SWM1_06))

#define SWM_COMPAT_SWM_MODE_U_CT4_OUT3 \
    ((1ULL << SWM1_07))

#define SWM_COMPAT_SWM_MODE_U_NSS_DBGO_OUT0 \
    ((1ULL << SWM0_00) | (1ULL << SWM2_02) | (1ULL << SWM3_02))

#define SWM_COMPAT_SWM_MODE_U_NSS_DBGO_OUT1 \
    ((1ULL << SWM0_01) | (1ULL << SWM2_03) | (1ULL << SWM3_03))

#define SWM_COMPAT_SWM_MODE_U_NSS_DBGO_OUT2 \
    ((1ULL << SWM0_02) | (1ULL << SWM2_04) | (1ULL << SWM3_04))

#define SWM_COMPAT_SWM_MODE_U_NSS_DBGO_OUT3 \
    ((1ULL << SWM0_03) | (1ULL << SWM2_05) | (1ULL << SWM3_05))

#define SWM_COMPAT_SWM_MODE_U_NSS_DBGO_OUT4 \
    ((1ULL << SWM0_04) | (1ULL << SWM2_06) | (1ULL << SWM3_06))

#define SWM_COMPAT_SWM_MODE_U_NSS_DBGO_OUT5 \
    ((1ULL << SWM0_05) | (1ULL << SWM2_07) | (1ULL << SWM3_07))

#define SWM_COMPAT_SWM_MODE_U_NSS_DBGO_OUT6 \
    ((1ULL << SWM0_06) | (1ULL << SWM2_08) | (1ULL << SWM3_08))

#define SWM_COMPAT_SWM_MODE_U_NSS_DBGO_OUT7 \
    ((1ULL << SWM0_07) | (1ULL << SWM2_09) | (1ULL << SWM3_09))

#define SWM_COMPAT_SWM_MODE_U_NSS_DBGO_CM55_SO_TXDATA \
    ((1ULL << SWM0_08) | (1ULL << SWM2_10) | (1ULL << SWM3_10))

#define SWM_COMPAT_SWM_MODE_U_NSS_DBGO_XSP_SO_TXDATA \
    ((1ULL << SWM0_09) | (1ULL << SWM2_11) | (1ULL << SWM3_11))

#define SWM_COMPAT_SWM_MODE_U_DSS_GPO_OUT0 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_DSS_GPO_OUT1 \
    ((1ULL << SWM2_02))

#define SWM_COMPAT_SWM_MODE_U_DSS_GPO_OUT2 \
    ((1ULL << SWM2_03))

#define SWM_COMPAT_SWM_MODE_U_DSS_GPO_OUT3 \
    ((1ULL << SWM2_04))

#define SWM_COMPAT_SWM_MODE_U_DSS_GPO_OUT4 \
    ((1ULL << SWM2_05))

#define SWM_COMPAT_SWM_MODE_U_DSS_GPO_OUT5 \
    ((1ULL << SWM2_06))

#define SWM_COMPAT_SWM_MODE_U_DSS_GPO_OUT6 \
    ((1ULL << SWM2_07))

#define SWM_COMPAT_SWM_MODE_U_DSS_GPO_OUT7 \
    ((1ULL << SWM2_08))

#define SWM_COMPAT_SWM_MODE_U_DSS_GPI_IN0 \
    ((1ULL << SWM2_09))

#define SWM_COMPAT_SWM_MODE_U_DSS_GPI_IN1 \
    ((1ULL << SWM2_10))

#define SWM_COMPAT_SWM_MODE_U_DSS_GPI_IN2 \
    ((1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_DSS_GPI_IN3 \
    ((1ULL << SWM3_00))

#define SWM_COMPAT_SWM_MODE_U_DSS_GPI_IN4 \
    ((1ULL << SWM3_01))

#define SWM_COMPAT_SWM_MODE_U_DSS_GPI_IN5 \
    ((1ULL << SWM3_02))

#define SWM_COMPAT_SWM_MODE_U_DSS_GPI_IN6 \
    ((1ULL << SWM3_03))

#define SWM_COMPAT_SWM_MODE_U_DSS_GPI_IN7 \
    ((1ULL << SWM3_04))

#define SWM_COMPAT_SWM_MODE_U_DSP3_UART0 \
    ((1ULL << SWM2_03) | (1ULL << SWM2_05) | (1ULL << SWM2_10) | (1ULL << SWM3_14))

#define SWM_COMPAT_SWM_MODE_U_DSP3_UART1 \
    ((1ULL << SWM2_04) | (1ULL << SWM2_06) | (1ULL << SWM2_11) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_IRFIC_GPIO11 \
    ((1ULL << SWM0_10))

#define SWM_COMPAT_SWM_MODE_U_IRFIC_GPIO12 \
    ((1ULL << SWM1_00))

#define SWM_COMPAT_SWM_MODE_U_IRFIC_GPIO13 \
    ((1ULL << SWM1_03))

#define SWM_COMPAT_SWM_MODE_U_IRFIC_GPIO14 \
    ((1ULL << SWM1_02))

#define SWM_COMPAT_SWM_MODE_U_IRFIC_GPIO15 \
    ((1ULL << SWM1_01))

#define SWM_COMPAT_SWM_MODE_U_IRFIC_GPIO16 \
    ((1ULL << SWM0_11))

#define SWM_COMPAT_SWM_MODE_U_IRFIC_GPIO17 \
    ((1ULL << SWM0_08))

#define SWM_COMPAT_SWM_MODE_U_IRFIC_GPIO18 \
    ((1ULL << SWM0_09))

#define SWM_COMPAT_SWM_MODE_U_DBG_CLK_FROL \
    ((1ULL << SWM1_00) | (1ULL << SWM2_11))

#define SWM_COMPAT_SWM_MODE_U_DBG_CLK_FROL_N \
    ((1ULL << SWM1_01) | (1ULL << SWM2_10))

#define SWM_COMPAT_SWM_MODE_U_DBG_CLK_FRO \
    ((1ULL << SWM1_02) | (1ULL << SWM2_09))

#define SWM_COMPAT_SWM_MODE_U_DBG_CLK_FRO_N \
    ((1ULL << SWM1_03) | (1ULL << SWM2_08))

#define SWM_COMPAT_SWM_MODE_U_DBG_CLK_NSS_FRO \
    ((1ULL << SWM1_04) | (1ULL << SWM2_07))

#define SWM_COMPAT_SWM_MODE_U_DBG_CLK_NSS_FRO_N \
    ((1ULL << SWM1_05) | (1ULL << SWM2_06))

#define SWM_COMPAT_SWM_MODE_U_DBG_CLK_PLL \
    ((1ULL << SWM1_06) | (1ULL << SWM2_05))

#define SWM_COMPAT_SWM_MODE_U_DBG_CLK_PLL_N \
    ((1ULL << SWM1_07) | (1ULL << SWM2_04))

#define SWM_COMPAT_SWM_MODE_U_AUDIO_PWM_DATA0 \
    ((1ULL << SWM2_00))

#define SWM_COMPAT_SWM_MODE_U_AUDIO_PWM_DATA1 \
    ((1ULL << SWM2_01))

#define SWM_COMPAT_SWM_MODE_U_AUDIO_PWM_DATA2 \
    ((1ULL << SWM2_02))

#define SWM_COMPAT_SWM_MODE_U_AUDIO_PWM_DATA3 \
    ((1ULL << SWM2_03))

#define SWM_COMPAT_SWM_MODE_U_AUDIO_PWM_DATA4 \
    ((1ULL << SWM2_04))

#define SWM_COMPAT_SWM_MODE_U_AUDIO_PWM_DATA5 \
    ((1ULL << SWM2_05))

#define SWM_COMPAT_SWM_MODE_U_AUDIO_PWM_DATA6 \
    ((1ULL << SWM2_06))

#define SWM_COMPAT_SWM_MODE_U_AUDIO_PWM_DATA7 \
    ((1ULL << SWM2_07))

#define SWM_COMPAT_SWM_MODE_U_AUDIO_PWM_WS \
    ((1ULL << SWM2_08))

#define SWM_COMPAT_SWM_MODE_U_GEN_HIGHZ \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM0_08) | (1ULL << SWM0_09) | (1ULL << SWM0_10) | (1ULL << SWM0_11) | \
    (1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11) | \
    (1ULL << SWM2_00) | (1ULL << SWM2_01) | (1ULL << SWM2_02) | (1ULL << SWM2_03) | (1ULL << SWM2_04) | (1ULL << SWM2_05) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | \
    (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | \
    (1ULL << SWM3_06) | (1ULL << SWM3_07) | (1ULL << SWM3_08) | (1ULL << SWM3_09) | (1ULL << SWM3_10) | (1ULL << SWM3_11) | \
    (1ULL << SWM3_12) | (1ULL << SWM3_13) | (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_GEN_TIE0 \
    ((1ULL << SWM0_11))

#define SWM_COMPAT_SWM_MODE_U_GEN_TIE1 \
    ((1ULL << SWM0_11))

#define SWM_COMPAT_SWM_MODE_U_GEN_WEAK_PULL_UP \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM0_08) | (1ULL << SWM0_09) | (1ULL << SWM0_10) | (1ULL << SWM0_11) | \
    (1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11) | \
    (1ULL << SWM2_00) | (1ULL << SWM2_01) | (1ULL << SWM2_02) | (1ULL << SWM2_03) | (1ULL << SWM2_04) | (1ULL << SWM2_05) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | \
    (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | \
    (1ULL << SWM3_06) | (1ULL << SWM3_07) | (1ULL << SWM3_08) | (1ULL << SWM3_09) | (1ULL << SWM3_10) | (1ULL << SWM3_11) | \
    (1ULL << SWM3_12) | (1ULL << SWM3_13) | (1ULL << SWM3_14) | (1ULL << SWM3_15))

#define SWM_COMPAT_SWM_MODE_U_GEN_WEAK_PULL_DOWN \
    ((1ULL << SWM0_00) | (1ULL << SWM0_01) | (1ULL << SWM0_02) | (1ULL << SWM0_03) | (1ULL << SWM0_04) | (1ULL << SWM0_05) | \
    (1ULL << SWM0_06) | (1ULL << SWM0_07) | (1ULL << SWM0_08) | (1ULL << SWM0_09) | (1ULL << SWM0_10) | (1ULL << SWM0_11) | \
    (1ULL << SWM1_00) | (1ULL << SWM1_01) | (1ULL << SWM1_02) | (1ULL << SWM1_03) | (1ULL << SWM1_04) | (1ULL << SWM1_05) | \
    (1ULL << SWM1_06) | (1ULL << SWM1_07) | (1ULL << SWM1_08) | (1ULL << SWM1_09) | (1ULL << SWM1_10) | (1ULL << SWM1_11) | \
    (1ULL << SWM2_00) | (1ULL << SWM2_01) | (1ULL << SWM2_02) | (1ULL << SWM2_03) | (1ULL << SWM2_04) | (1ULL << SWM2_05) | \
    (1ULL << SWM2_06) | (1ULL << SWM2_07) | (1ULL << SWM2_08) | (1ULL << SWM2_09) | (1ULL << SWM2_10) | (1ULL << SWM2_11) | \
    (1ULL << SWM3_00) | (1ULL << SWM3_01) | (1ULL << SWM3_02) | (1ULL << SWM3_03) | (1ULL << SWM3_04) | (1ULL << SWM3_05) | \
    (1ULL << SWM3_06) | (1ULL << SWM3_07) | (1ULL << SWM3_08) | (1ULL << SWM3_09) | (1ULL << SWM3_10) | (1ULL << SWM3_11) | \
    (1ULL << SWM3_12) | (1ULL << SWM3_13) | (1ULL << SWM3_14) | (1ULL << SWM3_15))


/**
 * @enum swm_to_gpio_offset_t
 * @brief Offset to go from SWM number to GPIO number.
 *
 * The SWM numbers don't correspond to the GPIO numbers; the SWM and the GPIO banks are 2 different
 * entities. Therefore, in GPIO functions, always subtract the swm_to_gpio_offset_t value from the
 * respective SWM number; e.g. (SWM2_02 - SWM2_GPIO_OFFSET).
 */
typedef enum swm_to_gpio_offset {
  SWM0_GPIO_OFFSET =  0,
  SWM1_GPIO_OFFSET =  0,
  SWM2_GPIO_OFFSET = SWM2_02,
  SWM3_GPIO_OFFSET = SWM2_02,
} swm_to_gpio_offset_t;

/**
 * @brief Convert SWM pin index to GPIO pin number.
 *
 * @param swm_pin The SWM pin index (swm_pin_index_t).
 * @return The corresponding GPIO pin number.
 */
#define SWM_TO_GPIO_PIN(swm_pin) \
    ((swm_pin) < (swm_pin_index_t)SWM2_GPIO_OFFSET ? (swm_pin) : ((swm_pin) - SWM2_GPIO_OFFSET))

/**
 * @brief Convert SWM pin index to GPIO port number.
 *
 * @param swm_pin The SWM pin index (swm_pin_index_t).
 * @return 0U for GPIO port 0, 1U for GPIO port 1.
 */
#define SWM_TO_GPIO_PORT(swm_pin) \
    ((swm_pin) < (swm_pin_index_t)SWM2_GPIO_OFFSET ? 0U : 1U)

#endif /* FSL_SWM_CONNECTIONS_H_ */
