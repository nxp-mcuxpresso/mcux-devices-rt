/*
 * Copyright 2025-2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _FSL_RESET_H_
#define _FSL_RESET_H_

#include "fsl_common.h"

/*!
 * @addtogroup reset
 * @{
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @name Driver version */
/*@{*/
/*! @brief reset driver version 2.0.0 */
#define FSL_RESET_DRIVER_VERSION (MAKE_VERSION(2, 0, 0))
/*@}*/

/*!
 * @brief Reset control registers index
 */
#define RST_CGU_CTRLSS  0U
#define RST_CGU_ADSS    1U
#define RST_CGU_NSS     2U
#define RST_CGU_XBREAK  3U
#define RST_NSS_CGU     4U

/*!
 * @brief Enumeration for peripheral reset control bits
 *
 * Defines the enumeration for peripheral reset control bits in
 * RSTENSET/RSTENCLR registers
 */
typedef enum _CGU_RSTn
{
    NotAvail_RSTn                            = (0xFFFFU),                   /*!< No reset control */
    kTPIU_TRACE_CGU_RST_SHIFT_RSTn           = (RST_CGU_CTRLSS << 8) | 0U,  /*!< TPIU reset control */
    kUTICK_CGU_RST_SHIFT_RSTn                = (RST_CGU_CTRLSS << 8) | 1U,  /*!< Micro-tick reset control */
    kGDET_CGU_RST_SHIFT_RSTn                 = (RST_CGU_CTRLSS << 8) | 2U,  /*!< GDET reset control */
    kOSTIMER_CGU_RST_SHIFT_RSTn              = (RST_CGU_CTRLSS << 8) | 3U,  /*!< OS timer reset control */
    kCTIMER0_CGU_RST_SHIFT_RSTn              = (RST_CGU_CTRLSS << 8) | 4U,  /*!< Ctimer0 reset control */
    kCTIMER1_CGU_RST_SHIFT_RSTn              = (RST_CGU_CTRLSS << 8) | 5U,  /*!< Ctimer1 reset control */
    kCTIMER2_CGU_RST_SHIFT_RSTn              = (RST_CGU_CTRLSS << 8) | 6U,  /*!< Ctimer2 reset control */
    kCTIMER3_CGU_RST_SHIFT_RSTn              = (RST_CGU_CTRLSS << 8) | 7U,  /*!< Ctimer3 reset control */
    kCTIMER4_CGU_RST_SHIFT_RSTn              = (RST_CGU_CTRLSS << 8) | 8U,  /*!< Ctimer4 reset control */
    kFLEXCOMM0_CGU_RST_SHIFT_RSTn            = (RST_CGU_CTRLSS << 8) | 9U,  /*!< Flexcomm0 reset control */
    kFLEXCOMM1_CGU_RST_SHIFT_RSTn            = (RST_CGU_CTRLSS << 8) | 10U, /*!< Flexcomm1 reset control */
    kFLEXCOMM2_CGU_RST_SHIFT_RSTn            = (RST_CGU_CTRLSS << 8) | 11U, /*!< Flexcomm2 reset control */
    kFLEXCOMM3_CGU_RST_SHIFT_RSTn            = (RST_CGU_CTRLSS << 8) | 12U, /*!< Flexcomm3 reset control */
    kFLEXCOMM4_CGU_RST_SHIFT_RSTn            = (RST_CGU_CTRLSS << 8) | 13U, /*!< Flexcomm4 reset control */
    kFLEXCOMM5_CGU_RST_SHIFT_RSTn            = (RST_CGU_CTRLSS << 8) | 14U, /*!< Flexcomm5 reset control */
    kI3C_CGU_RST_SHIFT_RSTn                  = (RST_CGU_CTRLSS << 8) | 15U, /*!< I3c reset control */
    kDSP_SYS_CGU_RST_SHIFT_RSTn              = (RST_CGU_ADSS << 8) | 0U,    /*!< Dsp system reset control */
    kDSP_COMM_CGU_RST_SHIFT_RSTn             = (RST_CGU_ADSS << 8) | 1U,    /*!< Dsp communication interface logic reset control */
    kADSS_APB_CGU_RST_SHIFT_RSTn             = (RST_CGU_ADSS << 8) | 2U,    /*!< ADSS APB reset control */
    kDSP0_CGU_RST_SHIFT_RSTn                 = (RST_CGU_ADSS << 8) | 3U,    /*!< DSP3 0 reset control */
    kDSP1_CGU_RST_SHIFT_RSTn                 = (RST_CGU_ADSS << 8) | 4U,    /*!< DSP3 1 reset control */
    kHIFI5S_CGU_RST_SHIFT_RSTn               = (RST_CGU_ADSS << 8) | 5U,    /*!< HIFI5s reset control */
    kIOMEM_CGU_RST_SHIFT_RSTn                = (RST_CGU_ADSS << 8) | 6U,    /*!< ADSS iomem reset control */
    kHSI_CGU_RST_SHIFT_RSTn                  = (RST_CGU_ADSS << 8) | 7U,    /*!< ADSS hsi reset control */
    kPERFMON_CGU_RST_SHIFT_RSTn              = (RST_CGU_ADSS << 8) | 8U,    /*!< ADSS performance monitor reset control */
    kSDMAC_CGU_RST_SHIFT_RSTn                = (RST_CGU_ADSS << 8) | 9U,    /*!< ADSS streaming dma controller reset control */
    kDSS_TMR_CGU_RST_SHIFT_RSTn              = (RST_CGU_ADSS << 8) | 10U,   /*!< ADSS timer reset control */
    kMC_TMR_CGU_RST_SHIFT_RSTn               = (RST_CGU_ADSS << 8) | 11U,   /*!< ADSS multi-rate timer reset control */
    kSYNC_SOURCE_CGU_RST_SHIFT_RSTn          = (RST_CGU_ADSS << 8) | 12U,   /*!< ADSS sync-source reset control */
    kDP_TIMER_CGU_RST_SHIFT_RSTn             = (RST_CGU_ADSS << 8) | 13U,   /*!< ADSS dataport timer reset control */
    kDP0_CGU_RST_SHIFT_RSTn                  = (RST_CGU_ADSS << 8) | 14U,   /*!< ADSS dataport 0 reset control */
    kDP1_CGU_RST_SHIFT_RSTn                  = (RST_CGU_ADSS << 8) | 15U,   /*!< ADSS dataport 1 reset control */
    kDP2_CGU_RST_SHIFT_RSTn                  = (RST_CGU_ADSS << 8) | 16U,   /*!< ADSS dataport 2 reset control */
    kDP3_CGU_RST_SHIFT_RSTn                  = (RST_CGU_ADSS << 8) | 17U,   /*!< ADSS dataport 3 reset control */
    kEDU_CGU_RST_SHIFT_RSTn                  = (RST_CGU_ADSS << 8) | 18U,   /*!< ADSS error-distribution unit reset control */
    kCODEC_DEC_CGU_RST_SHIFT_RSTn            = (RST_CGU_ADSS << 8) | 19U,   /*!< ADSS codec decimator reset control */
    kCODEC_ANC_CGU_RST_SHIFT_RSTn            = (RST_CGU_ADSS << 8) | 20U,   /*!< ADSS codec ANC reset control */
    kCODEC_INT_CGU_RST_SHIFT_RSTn            = (RST_CGU_ADSS << 8) | 21U,   /*!< ADSS codec interpolator reset control */
    kCODEC_SSRC_CGU_RST_SHIFT_RSTn           = (RST_CGU_ADSS << 8) | 22U,   /*!< ADSS codec sync/source reset control */
    kCODEC_DEC_XFS_CGU_RST_SHIFT_RSTn        = (RST_CGU_ADSS << 8) | 23U,   /*!< ADSS decimator xfs clock control */
    kCODEC_DEC_DMIC_CGU_RST_SHIFT_RSTn       = (RST_CGU_ADSS << 8) | 24U,   /*!< ADSS codec dmic reset control */
    kXMEM_COEFF_BANK_CGU_RST_SHIFT_RSTn      = (RST_CGU_ADSS << 8) | 25U,   /*!< ADSS codec register file reset control */
    kDSP_DEBUG_CGU_RST_SHIFT_RSTn            = (RST_CGU_ADSS << 8) | 26U,   /*!< ADSS dsp debug reset control */
    kIRFIC_CGU_RST_SHIFT_RSTn                = (RST_CGU_ADSS << 8) | 27U,   /*!< iRFIC reset control */
    kXSPI_CGU_RST_SHIFT_RSTn                 = (RST_CGU_NSS << 8) | 0U,     /*!< NSS__XSPI reset control */
    kDEBUG_CGU_RST_SHIFT_RSTn                = (RST_CGU_NSS << 8) | 1U,     /*!< NSS reset control */
    kAPB_XBREAK_CGU_RST_SHIFT_RSTn           = (RST_CGU_XBREAK << 8) | 0U,  /*!< Crossbreak APB reset control */
    kXSP_XBREAK_CGU_RST_SHIFT_RSTn           = (RST_CGU_XBREAK << 8) | 1U,  /*!< Crossbreak logic of xsp reset control */
    kCM55_CSS_XBREAK_CGU_RST_SHIFT_RSTn      = (RST_CGU_XBREAK << 8) | 2U,  /*!< Crossbreak logic of CM55 of the CtrlSS reset control */
    kCM55_NSS_XBREAK_CGU_RST_SHIFT_RSTn      = (RST_CGU_XBREAK << 8) | 3U,  /*!< Crossbreak logic of CM55 of the NSS reset control */
    kHIFI5S_XBREAK_CGU_RST_SHIFT_RSTn        = (RST_CGU_XBREAK << 8) | 4U,  /*!< Crossbreak logic of hifi5s reset control */
    kETHOS_U85_XBREAK_CGU_RST_SHIFT_RSTn     = (RST_CGU_XBREAK << 8) | 5U,  /*!< Crossbreak logic of the ethos U85 reset control */
    kDSP0_XBREAK_CGU_RST_SHIFT_RSTn          = (RST_CGU_XBREAK << 8) | 6U,  /*!< Crossbreak logic of dsp0 reset control */
    kDSP1_XBREAK_CGU_RST_SHIFT_RSTn          = (RST_CGU_XBREAK << 8) | 7U,  /*!< Crossbreak logic of dsp1 reset control */
    kNIC_NSS_CGU_RST_SHIFT_RSTn              = (RST_NSS_CGU << 8) | 0U,     /*!< NIC reset control */
    kDBG_GPO_NSS_CGU_RST_SHIFT_RSTn          = (RST_NSS_CGU << 8) | 1U,     /*!< Debug GPO reset control */
    kCSSEVENTGEN_NSS_CGU_RST_SHIFT_RSTn      = (RST_NSS_CGU << 8) | 2U,     /*!< CSS Event Generation module reset control */
    kCM55POR_NSS_CGU_RST_SHIFT_RSTn          = (RST_NSS_CGU << 8) | 4U,     /*!< CM55 Cold reset, must be asserted and released together with cm55DbgRst
                                                                                 Will also drive the nMBISTRESET signal of the CM55 control */
    kCM55SYS_NSS_CGU_RST_SHIFT_RSTn          = (RST_NSS_CGU << 8) | 5U,     /*!< CM55 Warm reset, resets most of the core except the debug logic Can be used
                                                                                 to reset the cpu, but holding it to start executing code control */
    kCM55DBG_NSS_CGU_RST_SHIFT_RSTn          = (RST_NSS_CGU << 8) | 6U,     /*!< CM55 Debug reset control */
    kCM55IWIC_NSS_CGU_RST_SHIFT_RSTn         = (RST_NSS_CGU << 8) | 7U,     /*!< CM55 Internal Wakeup Controller reset control */
    kU85_NSS_CGU_RST_SHIFT_RSTn              = (RST_NSS_CGU << 8) | 8U,     /*!< Ethos U85 Reset control */
    kXSP_NSS_CGU_RST_SHIFT_RSTn              = (RST_NSS_CGU << 8) | 9U,     /*!< XSP reset control */
    kXSP_SYS_NSS_CGU_RST_SHIFT_RSTn          = (RST_NSS_CGU << 8) | 10U,    /*!< XSP system reset control */
    kWDT_NSS_CGU_RST_SHIFT_RSTn              = (RST_NSS_CGU << 8) | 11U,    /*!< NSS watchdog reset control */
    kDNNRAM0_NSS_CGU_RST_SHIFT_RSTn          = (RST_NSS_CGU << 8) | 12U,    /*!< DNN RAM 0 controller reset control */
    kDNNRAM1_NSS_CGU_RST_SHIFT_RSTn          = (RST_NSS_CGU << 8) | 13U,    /*!< DNN RAM 1 controller reset control */
    kDNNRAM2_NSS_CGU_RST_SHIFT_RSTn          = (RST_NSS_CGU << 8) | 14U,    /*!< DNN RAM 2 controller reset control */
    kDNNRAM3_NSS_CGU_RST_SHIFT_RSTn          = (RST_NSS_CGU << 8) | 15U,    /*!< DNN RAM 3 controller reset control */
    kDNNRAM4_NSS_CGU_RST_SHIFT_RSTn          = (RST_NSS_CGU << 8) | 16U,    /*!< DNN RAM 4 controller reset control */
    kXSP_DBG_SO_NSS_CGU_RST_SHIFT_RSTn       = (RST_NSS_CGU << 8) | 18U,    /*!< XSP Debug Serial Out reset control */
    kCM55_DBG_SO_NSS_CGU_RST_SHIFT_RSTn      = (RST_NSS_CGU << 8) | 19U,    /*!< CM55 Debug Serial Out reset control */
    kDMA_NSS_CGU_RST_SHIFT_RSTn              = (RST_NSS_CGU << 8) | 20U,    /*!< DMA modules reset control */
    kAPB_NSS_CGU_RST_SHIFT_RSTn              = (RST_NSS_CGU << 8) | 21U,    /*!< APB interfaces of several modules reset control */
    kEDU_NSS_CGU_RST_SHIFT_RSTn              = (RST_NSS_CGU << 8) | 23U,    /*!< Error Detection Unit reset control */
    kEVENTGEN_NSS_CGU_RST_SHIFT_RSTn         = (RST_NSS_CGU << 8) | 24U,    /*!< Event module reset control */
    kDSSEVENTGEN_NSS_CGU_RST_SHIFT_RSTn      = (RST_NSS_CGU << 8) | 25U,    /*!< DSS Event Generation module reset control */
    kPMON_NSS_CGU_RST_SHIFT_RSTn             = (RST_NSS_CGU << 8) | 26U,    /*!< Performance Monitor module reset control */
    kTIMER_NSS_CGU_RST_SHIFT_RSTn            = (RST_NSS_CGU << 8) | 27U,    /*!< Timer module control */
    kSYSCFG_NSS_CGU_RST_SHIFT_RSTn           = (RST_NSS_CGU << 8) | 28U,    /*!< System configuration module reset control */
    kCGU_NSS_CGU_RST_SHIFT_RSTn              = (RST_NSS_CGU << 8) | 29U,    /*!< CGU module reset control */
} CGU_RSTn_t;

/*! @brief Reset bits for DMA peripheral */
#define DMA_RSTS_N    {NotAvail_RSTn, NotAvail_RSTn}

/*! @brief Reset bits for FLEXCOMM peripheral */
#define FLEXCOMM_RSTS {kFLEXCOMM0_CGU_RST_SHIFT_RSTn, kFLEXCOMM1_CGU_RST_SHIFT_RSTn, kFLEXCOMM2_CGU_RST_SHIFT_RSTn, \
                       kFLEXCOMM3_CGU_RST_SHIFT_RSTn, kFLEXCOMM4_CGU_RST_SHIFT_RSTn, kFLEXCOMM5_CGU_RST_SHIFT_RSTn}

/*! @brief Reset bits for I3C peripheral. */
#define I3C_RSTS      {kI3C_CGU_RST_SHIFT_RSTn}

/*! @brief Reset bits for GPIO peripheral */
#define GPIO_RSTS_N   {NotAvail_RSTn, NotAvail_RSTn}

/*! @brief Reset bits for GINT peripheral */
#define GINT_RSTS     {NotAvail_RSTn}

/*! @brief Reset bits for MAILBOX  peripheral */
#define kMAILBOX_RST_SHIFT_RSTn NotAvail_RSTn

/*! @brief Reset bits for CRC peripheral. The CGU has no reset control for CRC on
 * this SoC, but the shared lpc_crc driver references this symbol unconditionally. */
#define kCRC_RST_SHIFT_RSTn     NotAvail_RSTn

/*! @brief Reset bits for CDOG peripheral. The CGU has no reset control for CDOG on
 * this SoC, but the shared cdog driver references this symbol unconditionally. */
#define kCDOG_RST_SHIFT_RSTn    NotAvail_RSTn

/*! @brief Reset bits for CTIMER peripheral */
#define CTIMER_RSTS   {kCTIMER0_CGU_RST_SHIFT_RSTn, kCTIMER1_CGU_RST_SHIFT_RSTn, kCTIMER2_CGU_RST_SHIFT_RSTn, \
                       kCTIMER3_CGU_RST_SHIFT_RSTn, kCTIMER4_CGU_RST_SHIFT_RSTn}
#define CTIMER_RSTS_N CTIMER_RSTS

/*! @brief Reset bits for UTICK peripheral */
#define UTICK_RSTS    {kUTICK_CGU_RST_SHIFT_RSTn}

/** Array initializers with peripheral reset bits: TBD **/

typedef CGU_RSTn_t reset_ip_name_t;

/*******************************************************************************
 * API
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Assert reset to peripheral.
 *
 * Asserts reset signal to specified peripheral module.
 *
 * @param peripheral Assert reset to this peripheral. The enum argument contains
 * encoding of reset register and reset bit position in the reset register.
 */
void RESET_SetPeripheralReset(reset_ip_name_t peripheral);

/*!
 * @brief Clear reset to peripheral.
 *
 * Clears reset signal to specified peripheral module, allows it to operate.
 *
 * @param peripheral Clear reset to this peripheral. The enum argument contains
 * encoding of reset register and reset bit position in the reset register.
 */
void RESET_ClearPeripheralReset(reset_ip_name_t peripheral);

/*!
 * @brief Reset peripheral module.
 *
 * Reset peripheral module.
 *
 * @param peripheral Peripheral to reset. The enum argument contains encoding of
 * reset register and reset bit position in the reset register.
 */
void RESET_PeripheralReset(reset_ip_name_t peripheral);

/*!
 * @brief Release peripheral module.
 *
 * Release peripheral module.
 *
 * @param peripheral Peripheral to release. The enum argument contains encoding of reset register
 * and reset bit position in the reset register.
 */
static inline void RESET_ReleasePeripheralReset(reset_ip_name_t peripheral)
{
    RESET_ClearPeripheralReset(peripheral);
}

#if defined(__cplusplus)
}
#endif

/*! @} */

#endif /* _FSL_RESET_H_ */
