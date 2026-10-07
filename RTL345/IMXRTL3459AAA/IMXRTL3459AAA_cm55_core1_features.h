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

#ifndef _IMXRTL3459AAA_cm55_core1_FEATURES_H_
#define _IMXRTL3459AAA_cm55_core1_FEATURES_H_

/* SOC module features */

/* @brief EDMA availability on the SoC. */
#define FSL_FEATURE_SOC_EDMA_COUNT (1)

/* EDMA module features */

/* @brief Number of DMA channels (related to number of registers TCD, DCHPRI, bit fields ERQ[ERQn], EEI[EEIn], INT[INTn], ERR[ERRn], HRS[HRSn] and bit field widths ES[ERRCHN], CEEI[CEEI], SEEI[SEEI], CERQ[CERQ], SERQ[SERQ], CDNE[CDNE], SSRT[SSRT], CERR[CERR], CINT[CINT], TCDn_CITER_ELINKYES[LINKCH], TCDn_CSR[MAJORLINKCH], TCDn_BITER_ELINKYES[LINKCH]). (Valid only for eDMA modules.) */
#define FSL_FEATURE_EDMA_MODULE_CHANNEL (16)
/* @brief If 8 bytes transfer supported. */
#define FSL_FEATURE_EDMA_SUPPORT_8_BYTES_TRANSFER (1)
/* @brief Number of channel for each EDMA instance, (only defined for soc with different channel numbers for difference instance) */
#define FSL_FEATURE_EDMA_INSTANCE_CHANNELn(x) (16)
/* @brief If 16 bytes transfer supported. */
#define FSL_FEATURE_EDMA_SUPPORT_16_BYTES_TRANSFER (1)
/* @brief Has register bit fields MP_CSR[GMRC]. */
#define FSL_FEATURE_EDMA_HAS_GLOBAL_MASTER_ID_REPLICATION (0)
/* @brief If 64 bytes transfer supported. */
#define FSL_FEATURE_EDMA_SUPPORT_64_BYTES_TRANSFER (1)
/* @brief Has register bit fields CR[CLM]. */
#define FSL_FEATURE_EDMA_HAS_CONTINUOUS_LINK_MODE (0)
/* @brief If 128 bytes transfer supported. */
#define FSL_FEATURE_EDMA_SUPPORT_128_BYTES_TRANSFER (1)
/* @brief NBYTES must be multiple of 8 when using scatter gather. */
#define FSL_FEATURE_EDMA_HAS_ERRATA_51327 (0)
/* @brief If 128 bytes transfer supported. */
#define FSL_FEATURE_EDMA_INSTANCE_SUPPORT_128_BYTES_TRANSFERn(x) (1)
/* @brief NBYTES must be multiple of 8 when using scatter gather. */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_ERRATA_51327n(x) (0)
/* @brief Has register CH_CSR. */
#define FSL_FEATURE_EDMA_HAS_CHANNEL_CONFIG (1)
/* @brief whether has prot register */
#define FSL_FEATURE_EDMA_HAS_PROT_REGISTER (0)
/* @brief Has register CH_SBR. */
#define FSL_FEATURE_EDMA_HAS_SBR (1)
/* @brief Whether instance has prot register. */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_PROT_REGISTERn(x) (0)
/* @brief Has no register bit fields CH_SBR[ATTR]. */
#define FSL_FEATURE_EDMA_HAS_NO_CH_SBR_ATTR (1)
/* @brief Whether has MP channel mux */
#define FSL_FEATURE_EDMA_HAS_MP_CHANNEL_MUX (0)
/* @brief Has register bit field CH_CSR[SWAP]. */
#define FSL_FEATURE_EDMA_HAS_CHANNEL_SWAP_SIZE (1)
/* @brief Whether instance has MP channel mux. */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_MP_CHANNEL_MUXn(x) (0)
/* @brief Instance has register bit field CH_CSR[SWAP]. */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_CHANNEL_SWAP_SIZEn(x) (1)
/* @brief Has channel mux */
#define FSL_FEATURE_EDMA_HAS_CHANNEL_MUX (0)
/* @brief Has register bit field CH_SBR[INSTR]. */
#define FSL_FEATURE_EDMA_HAS_CHANNEL_ACCESS_TYPE (1)
/* @brief Instance has channel mux */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_CHANNEL_MUXn(x) (0)
/* @brief Instance has register bit field CH_SBR[INSTR]. */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_CHANNEL_ACCESS_TYPEn(x) (1)
/* @brief Has register bit fields CH_MATTR[WCACHE], CH_MATTR[RCACHE]. */
#define FSL_FEATURE_EDMA_HAS_CHANNEL_MEMORY_ATTRIBUTE (1)
/* @brief Instance has register CH_MATTR. */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_CHANNEL_MEMORY_ATTRIBUTEn(x) (1)
/* @brief Has register bit field CH_CSR[SIGNEXT]. */
#define FSL_FEATURE_EDMA_HAS_CHANNEL_SIGN_EXTENSION (1)
/* @brief Instance Has register bit field CH_CSR[SIGNEXT]. */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_CHANNEL_SIGN_EXTENSIONn(x) (1)
/* @brief Instance has register bit field TCD_CSR[BWC]. */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_BANDWIDTHn(x) (0)
/* @brief Has register bit fields TCD_CSR[TMC]. */
#define FSL_FEATURE_EDMA_HAS_TRANSFER_MODE (1)
/* @brief Instance has register bit fields TCD_CSR[TMC]. */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_TRANSFER_MODEn(x) (1)
/* @brief edma5 has different tcd type. */
#define FSL_FEATURE_EDMA_TCD_TYPEn(x) (1)

/* NSS_XSPI module features */

/* @brief XSPI has IPEDERR flag */
#define FSL_FEATURE_NSS_XSPI_HAS_FR_IPEDERRn(x) (1)
/* @brief XSPI has BFGENCR ALIGN bit */
#define FSL_FEATURE_NSS_XSPI_HAS_BFGENCR_ALIGNn(x) (1)
/* @brief XSPI has X16 mode */
#define FSL_FEATURE_NSS_XSPI_HAS_X16_MODEn(x) (0)
/* @brief Delay Elements in DDR Delay Tap */
#define FSL_FEATURE_NSS_XSPI_DLL_REF_VALUE_DDR_DELAY_TAP_NUM (4U)
/* @brief Delay Elements in SDR Delay Tap */
#define FSL_FEATURE_NSS_XSPI_DLL_REF_VALUE_SDR_DELAY_TAP_NUM (7U)
/* @brief Delay Elements in bypass offset */
#define FSL_FEATURE_NSS_XSPI_DLL_REF_VALUE_BYPASS_OFFSET_DELAY_ELEMENT_COUNT (0U)
/* @brief Bypass delay element coarse */
#define FSL_FEATURE_NSS_XSPI_DLL_REF_VALUE_BYPASS_DELAY_ELEMENT_COARSE (7U)
/* @brief Bypass delay element fine */
#define FSL_FEATURE_NSS_XSPI_DLL_REF_VALUE_BYPASS_DELAY_ELEMENT_FINE (0U)
/* @brief Autoupdate frequency threshold */
#define FSL_FEATURE_NSS_XSPI_DLL_REF_VALUE_AUTOUPDATE_FREQ_THRESHOLD (130000000UL)
/* @brief Reference counts of autoupdate */
#define FSL_FEATURE_NSS_XSPI_DLL_REF_VALUE_AUTOUPDATE_REF_COUNTER (2U)
/* @brief autoupdate resolution */
#define FSL_FEATURE_NSS_XSPI_DLL_REF_VALUE_AUTOUPDATE_RES (4U)
/* @brief Delay Elements in autoupdate_t_div16 offset */
#define FSL_FEATURE_NSS_XSPI_DLL_REF_VALUE_AUTOUPDATE_T_DIV16_OFFSET_DELAY_ELEMENT_COUNT (0U)
/* @brief Delay Elements in autoupdate offset */
#define FSL_FEATURE_NSS_XSPI_DLL_REF_VALUE_AUTOUPDATE_OFFSET_DELAY_ELEMENT_COUNT (0U)
/* @brief XSPI has DQS Latency Enable */
#define FSL_FEATURE_NSS_XSPI_HAS_DQS_LAT_EN (1)
/* @brief XSPI has END_CFG - Byte Order */
#define FSL_FEATURE_NSS_XSPI_HAS_END_CFG (1)
/* @brief XSPI has Doze Enable */
#define FSL_FEATURE_NSS_XSPI_HAS_DOZE_MODE (1)
/* @brief XSPI has Write Terminate Enable */
#define FSL_FEATURE_NSS_XSPI_HAS_WRTER_EN_BIT (1)
/* @brief Multi IRQ count for one instance */
#define FSL_FEATURE_NSS_XSPI_MULTI_IRQ_COUNT (0U)
/* @brief XSPI has DDR Mode Enable */
#define FSL_FEATURE_NSS_XSPI_HAS_DDR (1)
/* @brief XSPI has Environment Module Configuration */
#define FSL_FEATURE_NSS_XSPI_HAS_EENV (0)

#endif /* _IMXRTL3459AAA_cm55_core1_FEATURES_H_ */

