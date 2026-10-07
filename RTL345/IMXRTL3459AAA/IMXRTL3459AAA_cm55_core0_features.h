/*
** ###################################################################
**     Version:             rev. 1.0, 2026-06-19
**     Build:               b261007
**
**     Abstract:
**         Chip specific module features.
**
**     Copyright 2016 Freescale Semiconductor, Inc.
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

#ifndef _IMXRTL3459AAA_cm55_core0_FEATURES_H_
#define _IMXRTL3459AAA_cm55_core0_FEATURES_H_

/* SOC module features */

/* @brief CDOG availability on the SoC. */
#define FSL_FEATURE_SOC_CDOG_COUNT (1)
/* @brief CRC availability on the SoC. */
#define FSL_FEATURE_SOC_CRC_COUNT (1)
/* @brief CTIMER availability on the SoC. */
#define FSL_FEATURE_SOC_CTIMER_COUNT (5)
/* @brief DMA availability on the SoC. */
#define FSL_FEATURE_SOC_DMA_COUNT (2)
/* @brief EVENT_CTRL availability on the SoC. */
#define FSL_FEATURE_SOC_EVENT_CTRL_COUNT (1)
/* @brief FLEXCOMM availability on the SoC. */
#define FSL_FEATURE_SOC_FLEXCOMM_COUNT (6)
/* @brief FREQME availability on the SoC. */
#define FSL_FEATURE_SOC_FREQME_COUNT (1)
/* @brief GINT availability on the SoC. */
#define FSL_FEATURE_SOC_GINT_COUNT (1)
/* @brief GPIO availability on the SoC. */
#define FSL_FEATURE_SOC_GPIO_COUNT (2)
/* @brief I2C availability on the SoC. */
#define FSL_FEATURE_SOC_I2C_COUNT (6)
/* @brief I3C availability on the SoC. */
#define FSL_FEATURE_SOC_I3C_COUNT (1)
/* @brief INPUTMUX availability on the SoC. */
#define FSL_FEATURE_SOC_INPUTMUX_COUNT (1)
/* @brief MRT availability on the SoC. */
#define FSL_FEATURE_SOC_MRT_COUNT (1)
/* @brief OSTIMER availability on the SoC. */
#define FSL_FEATURE_SOC_OSTIMER_COUNT (1)
/* @brief PINT availability on the SoC. */
#define FSL_FEATURE_SOC_PINT_COUNT (2)
/* @brief QSPI_FLR availability on the SoC. */
#define FSL_FEATURE_SOC_QSPI_FLR_COUNT (1)
/* @brief SCT availability on the SoC. */
#define FSL_FEATURE_SOC_SCT_COUNT (1)
/* @brief SPI availability on the SoC. */
#define FSL_FEATURE_SOC_SPI_COUNT (3)
/* @brief SYSCON availability on the SoC. */
#define FSL_FEATURE_SOC_SYSCON_COUNT (1)
/* @brief USART availability on the SoC. */
#define FSL_FEATURE_SOC_USART_COUNT (6)
/* @brief UTICK availability on the SoC. */
#define FSL_FEATURE_SOC_UTICK_COUNT (1)
/* @brief WWDT availability on the SoC. */
#define FSL_FEATURE_SOC_WWDT_COUNT (1)

/* CDOG module features */

/* @brief SOC has no reset driver. */
#define FSL_FEATURE_CDOG_HAS_NO_RESET (0)
/* @brief CDOG Load default configurations during init function */
#define FSL_FEATURE_CDOG_NEED_LOAD_DEFAULT_CONF (0)

/* CTIMER module features */

/* @brief CTIMER has no capture channel. */
#define FSL_FEATURE_CTIMER_HAS_NO_INPUT_CAPTURE (0)
/* @brief CTIMER has no capture 2 interrupt. */
#define FSL_FEATURE_CTIMER_HAS_NO_IR_CR2INT (0)
/* @brief CTIMER capture 3 interrupt. */
#define FSL_FEATURE_CTIMER_HAS_IR_CR3INT (1)
/* @brief Has CTIMER CCR_CAP2 (register bits CCR[CAP2RE][CAP2FE][CAP2I]. */
#define FSL_FEATURE_CTIMER_HAS_NO_CCR_CAP2 (0)
/* @brief Has CTIMER CCR_CAP3 (register bits CCR[CAP3RE][CAP3FE][CAP3I]). */
#define FSL_FEATURE_CTIMER_HAS_CCR_CAP3 (1)
/* @brief CTIMER Has register MSR */
#define FSL_FEATURE_CTIMER_HAS_MSR (1)

/* DMA module features */

/* @brief Number of channels Note: This feature value is not the same on all DMA instances. */
#define FSL_FEATURE_DMA_NUMBER_OF_CHANNELS (24)
/* @brief Align size of DMA descriptor */
#define FSL_FEATURE_DMA_DESCRIPTOR_ALIGN_SIZE (512)
/* @brief DMA head link descriptor table align size */
#define FSL_FEATURE_DMA_LINK_DESCRIPTOR_ALIGN_SIZE (16U)

/* FLEXCOMM module features */

/* @brief FLEXCOMM0 USART INDEX 0 */
#define FSL_FEATURE_FLEXCOMM0_USART_INDEX  (0)
/* @brief FLEXCOMM0 SPI INDEX 0 */
#define FSL_FEATURE_FLEXCOMM0_SPI_INDEX  (0)
/* @brief FLEXCOMM0 I2C INDEX 0 */
#define FSL_FEATURE_FLEXCOMM0_I2C_INDEX  (0)
/* @brief FLEXCOMM0 QSPI_FLR INDEX 0 */
#define FSL_FEATURE_FLEXCOMM0_QSPI_FLR_INDEX  (0)
/* @brief FLEXCOMM1 USART INDEX 1 */
#define FSL_FEATURE_FLEXCOMM1_USART_INDEX  (1)
/* @brief FLEXCOMM1 SPI INDEX 1 */
#define FSL_FEATURE_FLEXCOMM1_SPI_INDEX  (1)
/* @brief FLEXCOMM1 I2C INDEX 1 */
#define FSL_FEATURE_FLEXCOMM1_I2C_INDEX  (1)
/* @brief FLEXCOMM2 USART INDEX 2 */
#define FSL_FEATURE_FLEXCOMM2_USART_INDEX  (2)
/* @brief FLEXCOMM2 SPI INDEX 2 */
#define FSL_FEATURE_FLEXCOMM2_SPI_INDEX  (2)
/* @brief FLEXCOMM2 I2C INDEX 2 */
#define FSL_FEATURE_FLEXCOMM2_I2C_INDEX  (2)
/* @brief FLEXCOMM3 USART INDEX 3 */
#define FSL_FEATURE_FLEXCOMM3_USART_INDEX  (3)
/* @brief FLEXCOMM3 I2C INDEX 3 */
#define FSL_FEATURE_FLEXCOMM3_I2C_INDEX  (3)
/* @brief FLEXCOMM4 USART INDEX 4 */
#define FSL_FEATURE_FLEXCOMM4_USART_INDEX  (4)
/* @brief FLEXCOMM4 I2C INDEX 4 */
#define FSL_FEATURE_FLEXCOMM4_I2C_INDEX  (4)
/* @brief FLEXCOMM5 USART INDEX 5 */
#define FSL_FEATURE_FLEXCOMM5_USART_INDEX  (5)
/* @brief FLEXCOMM5 I2C INDEX 5 */
#define FSL_FEATURE_FLEXCOMM5_I2C_INDEX  (5)
/* @brief I2S has DMIC interconnection */
#define FSL_FEATURE_FLEXCOMM_INSTANCE_I2S_HAS_DMIC_INTERCONNECTIONn(x) (0)
/* @brief I2S support dual channel transfer */
#define FSL_FEATURE_FLEXCOMM_INSTANCE_I2S_SUPPORT_SECONDARY_CHANNELn(x) (0)
/* @brief FLEXCOMM has QSPI_FLR */
#define FSL_FEATURE_FLEXCOMM_HAS_QSPI_FLR (1)

/* GINT module features */

/* @brief The count of th port which are supported in GINT. */
#define FSL_FEATURE_GINT_PORT_COUNT (1)

/* GPIO module features */

/* @brief GPIO has interrupts */
#define FSL_FEATURE_GPIO_HAS_INTERRUPT (1)
/* @brief GPIO DIRSET and DIRCLR register. */
#define FSL_FEATURE_GPIO_DIRSET_AND_DIRCLR (1)

/* I2C module features */

/* No feature definitions */

/* I3C module features */

/* @brief Has TERM bitfile in MERRWARN register. */
#define FSL_FEATURE_I3C_HAS_NO_MERRWARN_TERM (0)
/* @brief SOC has no reset driver. */
#define FSL_FEATURE_I3C_HAS_NO_RESET (0)
/* @brief Use fixed BAMATCH count, do not provide editable BAMATCH. */
#define FSL_FEATURE_I3C_HAS_NO_SCONFIG_BAMATCH (0)
/* @brief Register SCONFIG do not have IDRAND bitfield. */
#define FSL_FEATURE_I3C_HAS_NO_SCONFIG_IDRAND (1)
/* @brief Register SCONFIG has HDROK bitfield. */
#define FSL_FEATURE_I3C_HAS_HDROK (1)
/* @brief Has ERRATA_051617. */
#define FSL_FEATURE_I3C_HAS_ERRATA_051617 (0)
/* @brief SOC does not support slave IBI/MR/HJ */
#define FSL_FEATURE_I3C_HAS_NO_SLAVE_IBI_MR_HJ (0)
/* @brief Has ERRATA_052086. */
#define FSL_FEATURE_I3C_HAS_ERRATA_052086 (0)
/* @brief Has ERRATA_052123. */
#define FSL_FEATURE_I3C_HAS_ERRATA_052123 (0)
/* @brief Has IBI bytes. */
#define FSL_FEATURE_I3C_HAS_IBI_PAYLOAD_SIZE_OPTIONAL_BYTE (0)
/* @brief Has SCL delay after START. */
#define FSL_FEATURE_I3C_HAS_START_SCL_DELAY (1)
/* @brief Has no the master write data register for DMA. */
#define FSL_FEATURE_I3C_HAS_NO_MASTER_DMA_WDATA_REG (0)

/* MRT module features */

/* @brief number of channels. */
#define FSL_FEATURE_MRT_NUMBER_OF_CHANNELS (4)

/* OSTIMER module features */

/* @brief Has binary encoded value in counter register. */
#define FSL_FEATURE_OSTIMER_HAS_BINARY_ENCODED_COUNTER (0)

/* PINT module features */

/* @brief Number of connected outputs */
#define FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTSn(x) \
    (((x) == CTRLSS__PINT) ? (8) : \
    (((x) == CTRLSS__SECPINT) ? (2) : (-1)))

/* SCT module features */

/* @brief Number of events */
#define FSL_FEATURE_SCT_NUMBER_OF_EVENTS (16)
/* @brief Number of states */
#define FSL_FEATURE_SCT_NUMBER_OF_STATES (32)
/* @brief Number of match capture */
#define FSL_FEATURE_SCT_NUMBER_OF_MATCH_CAPTURE (16)
/* @brief Number of outputs */
#define FSL_FEATURE_SCT_NUMBER_OF_OUTPUTS (10)
/* @brief Writing a zero asserts the SCT reset. */
#define FSL_FEATURE_SCT_WRITE_ZERO_ASSERT_RESET (0)

/* SPI module features */

/* @brief SSEL pin count. */
#define FSL_FEATURE_SPI_SSEL_COUNT (4)

/* UTICK module features */

/* @brief UTICK does not support power down configure. */
#define FSL_FEATURE_UTICK_HAS_NO_PDCFG (1)

/* WWDT module features */

/* @brief WWDT does not support oscillator lock. */
#define FSL_FEATURE_WWDT_HAS_NO_OSCILLATOR_LOCK (0)
/* @brief WWDT does not support power down configure. */
#define FSL_FEATURE_WWDT_HAS_NO_PDCFG (1)
/* @brief soc has reset. */
#define FSL_FEATURE_WWDT_HAS_NO_RESET (1)
/* @brief Has LPOSC as clock source. */
#define FSL_FEATURE_WWDT_HAS_LPOSC_CLOCK_SOURCE (0)
/* @brief WWDT WDTOF is not set in case of WD reset - get info from PMC instead. */
#define FSL_FEATURE_WWDT_WDTRESET_FROM_PMC (0)

/* XSPI module features */

/* @brief XSPI has IPEDERR flag */
#define FSL_FEATURE_XSPI_HAS_FR_IPEDERRn(x) (1)
/* @brief XSPI has BFGENCR ALIGN bit */
#define FSL_FEATURE_XSPI_HAS_BFGENCR_ALIGNn(x) (1)
/* @brief XSPI has X16 mode */
#define FSL_FEATURE_XSPI_HAS_X16_MODEn(x) (0)
/* @brief Delay Elements in DDR Delay Tap */
#define FSL_FEATURE_XSPI_DLL_REF_VALUE_DDR_DELAY_TAP_NUM (4U)
/* @brief Delay Elements in SDR Delay Tap */
#define FSL_FEATURE_XSPI_DLL_REF_VALUE_SDR_DELAY_TAP_NUM (7U)
/* @brief Delay Elements in bypass offset */
#define FSL_FEATURE_XSPI_DLL_REF_VALUE_BYPASS_OFFSET_DELAY_ELEMENT_COUNT (0U)
/* @brief Bypass delay element coarse */
#define FSL_FEATURE_XSPI_DLL_REF_VALUE_BYPASS_DELAY_ELEMENT_COARSE (7U)
/* @brief Bypass delay element fine */
#define FSL_FEATURE_XSPI_DLL_REF_VALUE_BYPASS_DELAY_ELEMENT_FINE (0U)
/* @brief Autoupdate frequency threshold */
#define FSL_FEATURE_XSPI_DLL_REF_VALUE_AUTOUPDATE_FREQ_THRESHOLD (130000000UL)
/* @brief Reference counts of autoupdate */
#define FSL_FEATURE_XSPI_DLL_REF_VALUE_AUTOUPDATE_REF_COUNTER (2U)
/* @brief autoupdate resolution */
#define FSL_FEATURE_XSPI_DLL_REF_VALUE_AUTOUPDATE_RES (4U)
/* @brief Delay Elements in autoupdate_t_div16 offset */
#define FSL_FEATURE_XSPI_DLL_REF_VALUE_AUTOUPDATE_T_DIV16_OFFSET_DELAY_ELEMENT_COUNT (0U)
/* @brief Delay Elements in autoupdate offset */
#define FSL_FEATURE_XSPI_DLL_REF_VALUE_AUTOUPDATE_OFFSET_DELAY_ELEMENT_COUNT (0U)
/* @brief XSPI has DQS Latency Enable */
#define FSL_FEATURE_XSPI_HAS_DQS_LAT_EN (1)
/* @brief XSPI has END_CFG - Byte Order */
#define FSL_FEATURE_XSPI_HAS_END_CFG (1)
/* @brief XSPI has Doze Enable */
#define FSL_FEATURE_XSPI_HAS_DOZE_MODE (1)
/* @brief XSPI has Write Terminate Enable */
#define FSL_FEATURE_XSPI_HAS_WRTER_EN_BIT (1)
/* @brief Multi IRQ count for one instance */
#define FSL_FEATURE_XSPI_MULTI_IRQ_COUNT (0U)
/* @brief XSPI has DDR Mode Enable */
#define FSL_FEATURE_XSPI_HAS_DDR (1)
/* @brief XSPI has Environment Module Configuration */
#define FSL_FEATURE_XSPI_HAS_EENV (0)

/* SYSCON module features */

/* @brief Powerlib API is different with other series devices */
#define FSL_FEATURE_POWERLIB_EXTEND (1)
/* @brief Starter register discontinuous. */
#define FSL_FEATURE_SYSCON_STARTER_DISCONTINUOUS (1)

#endif /* _IMXRTL3459AAA_cm55_core0_FEATURES_H_ */

