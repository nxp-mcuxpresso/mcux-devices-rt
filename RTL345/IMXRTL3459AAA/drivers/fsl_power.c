/*
 * Copyright 2026 NXP
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "fsl_device_registers.h"
#include "fsl_common.h"
#include "fsl_power.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

 /*! @brief PMRC peripheral base address */
#define POWER_PMRC_BASE PMRC

/*! @brief Base offset for first PMRC memory control register (CtrlssCm55RamActive) */
#define POWER_PMRC_FIRST_MEM_REG_OFFSET (0xA4U)

/*! @brief Offset between Active and Powerdown register groups */
#define POWER_ACTIVE_TO_POWERDOWN_OFFSET (0x30U)

/*! @brief Number of retry attempts when PMRC transfer is busy */
#define POWER_PMRC_BUSY_RETRY_COUNT (100U)

 /**
 * @brief List of digital DC/DC outputs
 */
typedef enum dcdc_dig_output_level_s
{
    kDCDC_DIG_OUTPUT_LVL_450MV = 0U,
    kDCDC_DIG_OUTPUT_LVL_460MV = 1U,
    kDCDC_DIG_OUTPUT_LVL_470MV = 2U,
    kDCDC_DIG_OUTPUT_LVL_480MV = 3U,
    kDCDC_DIG_OUTPUT_LVL_490MV = 4U,
    kDCDC_DIG_OUTPUT_LVL_500MV = 5U,
    kDCDC_DIG_OUTPUT_LVL_510MV = 6U,
    kDCDC_DIG_OUTPUT_LVL_520MV = 7U,
    kDCDC_DIG_OUTPUT_LVL_530MV = 8U,
    kDCDC_DIG_OUTPUT_LVL_540MV = 9U,
    kDCDC_DIG_OUTPUT_LVL_550MV = 10U,
    kDCDC_DIG_OUTPUT_LVL_560MV = 11U,
    kDCDC_DIG_OUTPUT_LVL_570MV = 12U,
    kDCDC_DIG_OUTPUT_LVL_580MV = 13U,
    kDCDC_DIG_OUTPUT_LVL_590MV = 14U,
    kDCDC_DIG_OUTPUT_LVL_600MV = 15U,
    kDCDC_DIG_OUTPUT_LVL_620MV = 16U,
    kDCDC_DIG_OUTPUT_LVL_640MV = 17U,
    kDCDC_DIG_OUTPUT_LVL_660MV = 18U,
    kDCDC_DIG_OUTPUT_LVL_680MV = 19U,
    kDCDC_DIG_OUTPUT_LVL_700MV = 20U,
    kDCDC_DIG_OUTPUT_LVL_720MV = 21U,
    kDCDC_DIG_OUTPUT_LVL_740MV = 22U,
    kDCDC_DIG_OUTPUT_LVL_760MV = 23U,
    kDCDC_DIG_OUTPUT_LVL_780MV = 24U,
    kDCDC_DIG_OUTPUT_LVL_800MV = 25U,
    kDCDC_DIG_OUTPUT_LVL_820MV = 26U,
    kDCDC_DIG_OUTPUT_LVL_840MV = 27U,
    kDCDC_DIG_OUTPUT_LVL_860MV = 28U,
    kDCDC_DIG_OUTPUT_LVL_880MV = 29U,
    kDCDC_DIG_OUTPUT_LVL_900MV = 30U,
    kDCDC_DIG_OUTPUT_LVL_920MV = 31U
} dcdc_dig_output_level_t;

/**
 * @brief List of memory DC/DC outputs
 */
typedef enum dcdc_mem_output_level_s
{
    kDCDC_MEM_OUTPUT_LVL_540MV = 0U,
    kDCDC_MEM_OUTPUT_LVL_560MV = 1U,
    kDCDC_MEM_OUTPUT_LVL_580MV = 2U,
    kDCDC_MEM_OUTPUT_LVL_600MV = 3U,
    kDCDC_MEM_OUTPUT_LVL_620MV = 4U,
    kDCDC_MEM_OUTPUT_LVL_640MV = 5U,
    kDCDC_MEM_OUTPUT_LVL_660MV = 6U,
    kDCDC_MEM_OUTPUT_LVL_670MV = 7U,
    kDCDC_MEM_OUTPUT_LVL_680MV = 8U,
    kDCDC_MEM_OUTPUT_LVL_690MV = 9U,
    kDCDC_MEM_OUTPUT_LVL_700MV = 10U,
    kDCDC_MEM_OUTPUT_LVL_710MV = 11U,
    kDCDC_MEM_OUTPUT_LVL_720MV = 12U,
    kDCDC_MEM_OUTPUT_LVL_730MV = 13U,
    kDCDC_MEM_OUTPUT_LVL_740MV = 14U,
    kDCDC_MEM_OUTPUT_LVL_750MV = 15U,
    kDCDC_MEM_OUTPUT_LVL_760MV = 16U,
    kDCDC_MEM_OUTPUT_LVL_770MV = 17U,
    kDCDC_MEM_OUTPUT_LVL_780MV = 18U,
    kDCDC_MEM_OUTPUT_LVL_790MV = 19U,
    kDCDC_MEM_OUTPUT_LVL_800MV = 20U,
    kDCDC_MEM_OUTPUT_LVL_810MV = 21U,
    kDCDC_MEM_OUTPUT_LVL_820MV = 22U,
    kDCDC_MEM_OUTPUT_LVL_830MV = 23U,
    kDCDC_MEM_OUTPUT_LVL_840MV = 24U,
    kDCDC_MEM_OUTPUT_LVL_850MV = 25U,
    kDCDC_MEM_OUTPUT_LVL_860MV = 26U,
    kDCDC_MEM_OUTPUT_LVL_870MV = 27U,
    kDCDC_MEM_OUTPUT_LVL_880MV = 28U,
    kDCDC_MEM_OUTPUT_LVL_890MV = 29U,
    kDCDC_MEM_OUTPUT_LVL_900MV = 30U,
    kDCDC_MEM_OUTPUT_LVL_920MV = 31U
} dcdc_mem_output_level_t;

/*******************************************************************************
 * Global variables
 ******************************************************************************/

 /*! @brief Valid segment masks array (indexed by power_mem_reg_offset_t)
 *  Each entry corresponds to a register index, each bit represents a valid segment
 */
static const uint16_t g_powerValidSegmentMasks[] = {
    0xFFFFU,  /* kPOWER_CtrlssCm55Ram (index 0): 16 segments (0-15) */
    0xFFFFU,  /* kPOWER_CtrlssCm55Cache (index 1): 16 segments (0-15) */
    0x0007U,  /* kPOWER_CtrlssCm55PkcOtp (index 2): 3 segments (0-2) */
    0x007FU,  /* kPOWER_NssAxiXsp (index 3): 7 segments (0-6) */
    0xFFFFU,  /* kPOWER_NssCm55Cache (index 4): 16 segments (0-15) */
    0xFFFFU,  /* kPOWER_NssDnnRam01 (index 5): 16 segments (0-15) */
    0xFFFFU,  /* kPOWER_NssDnnRam23 (index 6): 16 segments (0-15) */
    0x00FFU,  /* kPOWER_NssDnnRam4 (index 7): 8 segments (0-7) */
    0x0FFFU,  /* kPOWER_AdssPram01 (index 8): 12 segments (0-11) */
    0x00FFU,  /* kPOWER_AdssPram2 (index 9): 8 segments (0-7) */
    0xFFFFU,  /* kPOWER_AdssXram (index 10): 16 segments (0-15) */
    0x01FFU,  /* kPOWER_AdssYramMisc (index 11): 9 segments (0-8) */
};

/*******************************************************************************
 * Static functions
 ******************************************************************************/

void POWER_DcdcDigConfigureOutput(dcdc_dig_output_level_t outputLvl);
void POWER_DcdcMemConfigureOutput(dcdc_mem_output_level_t outputLvl);

static uint32_t POWER_GetMemoryRegisterOffset(power_mem_reg_offset_t regIndex, power_mem_ctrl_mode_t mode)
{
    uint32_t baseOffset = POWER_PMRC_FIRST_MEM_REG_OFFSET + ((uint32_t)regIndex * 4U);
    return baseOffset + ((mode == kPOWER_MemCtrlLowPower) ? POWER_ACTIVE_TO_POWERDOWN_OFFSET : 0U);
}

static bool POWER_IsMemorySegmentValid(power_mem_reg_offset_t regIndex, power_mem_segment_t segment)
{
    uint16_t mask = POWER_GetMemoryValidSegmentMask(regIndex);
    return ((mask & (1U << segment)) != 0U);
}

static status_t POWER_WaitForPmrcReady(power_mem_ctrl_mode_t mode)
{
    /* Only check busy status for Active mode */
    if (mode != kPOWER_MemCtrlActive)
    {
        return kStatus_Success;
    }

    /* Retry loop to wait for PMRC transfer to complete */
    for (uint32_t retry = 0U; retry < POWER_PMRC_BUSY_RETRY_COUNT; retry++)
    {
        if (PMRC->TRANSFER == 0U)
        {
            return kStatus_Success;
        }
    }

    return kStatus_Power_RegisterTransferBusy;
}

/*******************************************************************************
 * Public functions
 ******************************************************************************/

 void POWER_SetActivePowerMode(power_active_mode_t mode)
 {
    /* Configure DC/DC dig */
    //POWER_DcdcDigConfigureOutput ...

    /* Configure DC/DC mem */
    //POWER_DcdcMemConfigureOutput ...
 }

uint16_t POWER_GetMemoryValidSegmentMask(power_mem_reg_offset_t regIndex)
{
    if (regIndex < kPOWER_MemRegCount)
    {
        return g_powerValidSegmentMasks[regIndex];
    }
    return 0x0000U; /* Invalid register index */
}

status_t POWER_SetMemorySegmentState(power_mem_reg_offset_t regIndex,
                                     power_mem_ctrl_mode_t mode,
                                     power_mem_segment_t segment,
                                     power_mem_state_t state)
{
    status_t status;

    /* Check if PMRC is ready for Active mode writes */
    status = POWER_WaitForPmrcReady(mode);
    if (status != kStatus_Success)
    {
        return status;
    }

    /* Validate segment is valid for this register */
    if (!POWER_IsMemorySegmentValid(regIndex, segment))
    {
        return kStatus_Power_InvalidMemSegment;
    }

    uint32_t regOffset = POWER_GetMemoryRegisterOffset(regIndex, mode);
    volatile uint32_t *reg = (volatile uint32_t *)((uint8_t *)POWER_PMRC_BASE + regOffset);
    uint32_t shift = (uint32_t)segment * 2U;
    uint32_t mask = 0x3U << shift;
    uint32_t value = *reg;

    value &= ~mask;
    value |= ((uint32_t)state << shift);
    *reg = value;

    return kStatus_Success;
}

status_t POWER_GetMemorySegmentState(power_mem_reg_offset_t regIndex,
                                     power_mem_ctrl_mode_t mode,
                                     power_mem_segment_t segment,
                                     power_mem_state_t *state)
{
    /* Validate segment is valid for this register */
    if (!POWER_IsMemorySegmentValid(regIndex, segment))
    {
        return kStatus_Power_InvalidMemSegment;
    }

    if (state == NULL)
    {
        return kStatus_Power_InvalidArgument;
    }

    uint32_t regOffset = POWER_GetMemoryRegisterOffset(regIndex, mode);
    volatile uint32_t *reg = (volatile uint32_t *)((uint8_t *)POWER_PMRC_BASE + regOffset);
    uint32_t shift = (uint32_t)segment * 2U;
    uint32_t value = (*reg >> shift) & 0x3U;

    *state = (power_mem_state_t)value;

    return kStatus_Success;
}

status_t POWER_SetAllMemorySegmentsState(power_mem_reg_offset_t regIndex,
                                         power_mem_ctrl_mode_t mode,
                                         power_mem_state_t state)
{
    status_t status;

    /* Check if PMRC is ready for Active mode writes */
    status = POWER_WaitForPmrcReady(mode);
    if (status != kStatus_Success)
    {
        return status;
    }

    uint32_t regOffset = POWER_GetMemoryRegisterOffset(regIndex, mode);
    volatile uint32_t *reg = (volatile uint32_t *)((uint8_t *)POWER_PMRC_BASE + regOffset);
    uint32_t value = 0U;

    /* Get valid segment mask for this register */
    uint16_t validMask = POWER_GetMemoryValidSegmentMask(regIndex);

    /* Build value with only VALID segments set to same state */
    for (uint8_t i = 0U; i < 16U; i++)
    {
        if (validMask & (1U << i))
        {
            value |= ((uint32_t)state << (i * 2U));
        }
    }

    *reg = value;

    return kStatus_Success;
}