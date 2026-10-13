/*
 * Copyright 2025 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "fsl_modcon.h"
#include "fsl_reset.h"
#include "PERI_MODCON.h"

/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.modcon"
#endif

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define MODCON_RST_INTERVAL 500

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*! @brief Array of MODCON base addresses */
static MODCON_Type *const s_modconBases[] = MODCON_BASE_PTRS;

/*******************************************************************************
 * Code
 ******************************************************************************/

/*!
 * @brief Get MODCON version.
 *
 * @param modcon MODCON instance.
 * @return MODCON version register value.
 */
uint32_t MODCON_GetVersion(modcon_instance_t modcon)
{
    MODCON_Type *base;
    base = s_modconBases[modcon];

    return base->VERID;
}

/*!
 * @brief Get MODCON trust mask.
 *
 * @param modcon MODCON instance.
 * @return MODCON trust mask register value.
 */
uint32_t MODCON_GetTrustMask(modcon_instance_t modcon)
{
    MODCON_Type *base;
    base = s_modconBases[modcon];

    return (base->TRUSTCTRL & (MODCON_TRUSTCTRL_NSM_MASK | MODCON_TRUSTCTRL_UM_MASK)) >> MODCON_TRUSTCTRL_NSM_SHIFT;
}

/*!
 * @brief Set MODCON trust mask.
 *
 * @param modcon MODCON instance.
 * @param trustMask Trust mask value to set.
 * @param lock Whether to lock the trust mask setting.
 */
void MODCON_SetTrustMask(modcon_instance_t modcon, uint8_t trustMask, bool lock)
{
    MODCON_Type *base;
    base = s_modconBases[modcon];
    base->TRUSTCTRL =
        (base->TRUSTCTRL & ~(MODCON_TRUSTCTRL_LOCK_MASK | MODCON_TRUSTCTRL_UM_MASK | MODCON_TRUSTCTRL_NSM_MASK)) |
        (trustMask >> MODCON_TRUSTCTRL_NSM_SHIFT) | (lock >> MODCON_TRUSTCTRL_LOCK_SHIFT);
}

/*!
 * @brief Get IP domain mask.
 *
 * @param ip IP identifier.
 * @return IP domain mask register value.
 */
uint32_t MODCON_GetIPDomainMask(uint32_t ip)
{
    MODCON_Type *base;
    base = s_modconBases[getModConInstance(ip)];
    return base->IP[getModConOffset(ip)].ACCESSCTRL & MODCON_ACCESSCTRL_DOMAIN_MASK;
}

/*!
 * @brief Set IP domain mask.
 *
 * @param ip IP identifier.
 * @param domainMask Domain mask value to set.
 * @param lock Whether to lock the domain mask setting.
 */
void MODCON_SetIPDomainMask(uint32_t ip, uint8_t domainMask, bool lock)
{
    MODCON_Type *base;
    base = s_modconBases[getModConInstance(ip)];
    base->IP[getModConOffset(ip)].ACCESSCTRL =
        (base->IP[getModConOffset(ip)].ACCESSCTRL & ~(MODCON_ACCESSCTRL_DOMAIN_MASK | MODCON_ACCESSCTRL_LOCK_MASK)) |
        MODCON_ACCESSCTRL_DOMAIN(domainMask) | MODCON_ACCESSCTRL_LOCK(lock);
}

/*!
 * @brief Get IP reset status.
 *
 * @param ip IP identifier.
 * @return IP reset status register value.
 */
uint32_t MODCON_GetIPRST(uint32_t ip)
{
    MODCON_Type *base;
    uint8_t modConIdx, ipIdx;

    modConIdx = getModConInstance(ip);
    ipIdx     = getModConOffset(ip);
    base      = s_modconBases[modConIdx];

    return base->IP[ipIdx].RSTCTRL & MODCON_RSTCTRL_RST_MASK;
}

/*!
 * @brief Set IP reset.
 *
 * @param ip IP identifier.
 */
void MODCON_SetIPRST(uint32_t ip)
{
    MODCON_Type *base;
    uint8_t modConIdx, ipIdx;

    modConIdx = getModConInstance(ip);
    ipIdx     = getModConOffset(ip);
    base      = s_modconBases[modConIdx];

    base->IP[ipIdx].RSTCTRL = base->IP[ipIdx].RSTCTRL | MODCON_RSTCTRL_RST_MASK;
}

/*!
 * @brief Clear IP reset.
 *
 * @param ip IP identifier.
 */
void MODCON_ClearIPRST(uint32_t ip)
{
    MODCON_Type *base;
    uint8_t modConIdx, ipIdx;

    modConIdx = getModConInstance(ip);
    ipIdx     = getModConOffset(ip);
    base      = s_modconBases[modConIdx];

    base->IP[ipIdx].RSTCTRL = base->IP[ipIdx].RSTCTRL & (~MODCON_RSTCTRL_RST_MASK);
}

/*!
 * @brief Assert reset to peripheral.
 *
 * Asserts reset signal to specified peripheral module.
 *
 * @param peripheral Assert reset to this peripheral.
 */
void RESET_SetPeripheralReset(reset_ip_name_t ip)
{
    MODCON_SetIPRST((uint32_t)ip);
}

/*!
 * @brief Clear reset to peripheral.
 *
 * Clears reset signal to specified peripheral module, allows it to operate.
 *
 * @param peripheral Clear reset to this peripheral.
 */
void RESET_ClearPeripheralReset(reset_ip_name_t ip)
{
    MODCON_ClearIPRST((uint32_t)ip);
}

/*!
 * @brief Reset peripheral module.
 *
 * Assert reset for MODCON_RST_INTERVAL microseconds, then deassert.
 * No hardware status feedback is available on this SOC, so a timed
 * delay is used to guarantee the minimum reset pulse width.
 *
 * @param peripheral Peripheral to reset.
 */
void RESET_PeripheralReset(reset_ip_name_t ip)
{
    MODCON_Type *base;
    uint8_t modConIdx, ipIdx;

    modConIdx = getModConInstance(ip);
    ipIdx     = getModConOffset(ip);
    base      = s_modconBases[modConIdx];
    base->IP[ipIdx].RSTCTRL = base->IP[ipIdx].RSTCTRL | MODCON_RSTCTRL_RST_MASK;
    SDK_DelayAtLeastUs(MODCON_RST_INTERVAL, SystemCoreClock);
    base->IP[ipIdx].RSTCTRL = base->IP[ipIdx].RSTCTRL & (~MODCON_RSTCTRL_RST_MASK);
}

/*!
 * @brief Get IP configuration register value.
 *
 * @param ip IP identifier.
 * @param idx Configuration register index.
 * @return IP configuration register value.
 */
uint32_t MODCON_GetCFG(uint32_t ip, uint8_t idx)
{
    MODCON_Type *base;
    uint8_t modConIdx, ipIdx;

    modConIdx = getModConInstance(ip);
    ipIdx     = getModConOffset(ip);
    base      = s_modconBases[modConIdx];

    return base->IP[ipIdx].CFG[idx];
}

/*!
 * @brief Set IP configuration register value.
 *
 * @param ip IP identifier.
 * @param idx Configuration register index.
 * @param value Configuration value to set.
 */
void MODCON_SetCFG(uint32_t ip, uint8_t idx, uint32_t value)
{
    MODCON_Type *base;
    uint8_t modConIdx, ipIdx;

    modConIdx = getModConInstance(ip);
    ipIdx     = getModConOffset(ip);
    base      = s_modconBases[modConIdx];

    base->IP[ipIdx].CFG[idx] = value;
}

/*!
 * @brief Get IP status register value.
 *
 * @param ip IP identifier.
 * @param idx Status register index.
 * @return IP status register value.
 */
uint32_t MODCON_GetSts(uint32_t ip, uint8_t idx)
{
    MODCON_Type *base;
    uint8_t modConIdx, ipIdx;

    modConIdx = getModConInstance(ip);
    ipIdx     = getModConOffset(ip);
    base      = s_modconBases[modConIdx];

    return base->IP[ipIdx].STATUS[idx];
}
