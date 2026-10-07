/*
 * Copyright 2025-2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_reset.h"
#include "fsl_common.h"
#if defined(IMXRTL3459AAA_cm55_core0_SERIES)
#include "fsl_rpu.h"
#endif

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.reset"
#endif

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Prototypes
 ******************************************************************************/
#define GET_REG_INDEX(x) ((uint32_t)(((uint32_t)(x) & 0xFF00U) >> 8))
#define GET_BIT_INDEX(x) ((uint32_t)((uint32_t)(x) & 0x00FFU))

/*******************************************************************************
 * Code
 ******************************************************************************/

/*!
 * brief Assert reset to peripheral.
 *
 * Asserts reset signal to specified peripheral module.
 *
 * param peripheral Assert reset to this peripheral. The enum argument contains
 * encoding of reset register and reset bit position in the reset register.
 */
void RESET_SetPeripheralReset(reset_ip_name_t peripheral)
{
    if (peripheral == NotAvail_RSTn)
    {
        return;
    }

    const uint32_t regIndex = GET_REG_INDEX(peripheral);
    const uint32_t bitPos   = GET_BIT_INDEX(peripheral);
    const uint32_t bitMask  = 1UL << bitPos;

    assert(bitPos < 32u);

    switch (regIndex)
    {
#if defined(IMXRTL3459AAA_cm55_core0_SERIES)
        case RST_CGU_CTRLSS:
            /* CTRLSS peripherals have a core (functional clock) and a bus (configuration clock) reset:
             * assert the core reset first, then the bus reset. */
            RPU_WriteReg(&CGU->CTRLSS_CORERSTENSET, bitMask);
            while (0u == (CGU->CTRLSS_CORERSTEN & bitMask))
            {
            }
            RPU_WriteReg(&CGU->CTRLSS_BUSRSTENSET, bitMask);
            while (0u == (CGU->CTRLSS_BUSRSTEN & bitMask))
            {
            }
            break;
        case RST_CGU_ADSS:
            RPU_WriteReg(&CGU->ADSS_RSTENSET, bitMask);
            while (0u == (CGU->ADSS_RSTEN & bitMask))
            {
            }
            break;
        case RST_CGU_NSS:
            RPU_WriteReg(&CGU->NSS_RSTENSET, bitMask);
            while (0u == (CGU->NSS_RSTEN & bitMask))
            {
            }
            break;
        case RST_CGU_XBREAK:
            RPU_WriteReg(&CGU->XBREAK_RSTENSET, bitMask);
            while (0u == (CGU->XBREAK_RSTEN & bitMask))
            {
            }
            break;
#endif
#if defined(IMXRTL3459AAA_cm55_core0_SERIES) || defined(IMXRTL3459AAA_cm55_core1_SERIES)
        case RST_NSS_CGU:
            NSS__CGU->RSTENSET = bitMask;
            while (0u == (NSS__CGU->RSTEN & bitMask))
            {
            }
            break;
#endif
        default:
            /* Added comments to prevent the violation of MISRA C-2012 rule. */
            break;
    }
}

/*!
 * brief Clear reset to peripheral.
 *
 * Clears reset signal to specified peripheral module, allows it to operate.
 *
 * param peripheral Clear reset to this peripheral. The enum argument contains
 * encoding of reset register and reset bit position in the reset register.
 */
void RESET_ClearPeripheralReset(reset_ip_name_t peripheral)
{
    if (peripheral == NotAvail_RSTn)
    {
        return;
    }

    const uint32_t regIndex = GET_REG_INDEX(peripheral);
    const uint32_t bitPos   = GET_BIT_INDEX(peripheral);
    const uint32_t bitMask  = 1UL << bitPos;

    assert(bitPos < 32u);
    
    switch (regIndex)
    {
#if defined(IMXRTL3459AAA_cm55_core0_SERIES)
        case RST_CGU_CTRLSS:
            /* Release the bus reset first, then the core reset. */
            RPU_WriteReg(&CGU->CTRLSS_BUSRSTENCLR, bitMask);
            while (bitMask == (CGU->CTRLSS_BUSRSTEN & bitMask))
            {
            }
            RPU_WriteReg(&CGU->CTRLSS_CORERSTENCLR, bitMask);
            while (bitMask == (CGU->CTRLSS_CORERSTEN & bitMask))
            {
            }
            break;
        case RST_CGU_ADSS:
            RPU_WriteReg(&CGU->ADSS_RSTENCLR, bitMask);
            while (bitMask == (CGU->ADSS_RSTEN & bitMask))
            {
            }
            break;
        case RST_CGU_NSS:
            RPU_WriteReg(&CGU->NSS_RSTENCLR, bitMask);
            while (bitMask == (CGU->NSS_RSTEN & bitMask))
            {
            }
            break;
        case RST_CGU_XBREAK:
            RPU_WriteReg(&CGU->XBREAK_RSTENCLR, bitMask);
            while (bitMask == (CGU->XBREAK_RSTEN & bitMask))
            {
            }
            break;
#endif
#if defined(IMXRTL3459AAA_cm55_core0_SERIES) || defined(IMXRTL3459AAA_cm55_core1_SERIES)
        case RST_NSS_CGU:
            NSS__CGU->RSTENCLR = bitMask;
            while (bitMask == (NSS__CGU->RSTEN & bitMask))
            {
            }
            break;
#endif
        default:
            /* Added comments to prevent the violation of MISRA C-2012 rule. */
            break;
    }
}

/*!
 * brief Reset peripheral module.
 *
 * Reset peripheral module.
 *
 * param peripheral Peripheral to reset. The enum argument contains encoding of
 * reset register and reset bit position in the reset register.
 */
void RESET_PeripheralReset(reset_ip_name_t peripheral)
{
    if (peripheral == NotAvail_RSTn)
    {
        return;
    }
    RESET_SetPeripheralReset(peripheral);
    RESET_ClearPeripheralReset(peripheral);
}
