/*
 * Copyright 2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "fsl_swm.h"
#include "fsl_common.h"
#include "fsl_rpu.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define SWM_MUX_CFG_STRIDE 0x04UL
#define SWM_PIN_CFG_STRIDE 0x04UL
#define SWM_PPINDEX_MASK 0x1FF

/*******************************************************************************
 * Code
 ******************************************************************************/

static inline volatile uint32_t *PinToMuxReg(DSWM_Type *base, swm_pin_index_t pinIndex)
{
  return (volatile uint32_t *)((uintptr_t)&base->SWM0_00_MUX_CFG +
                               (pinIndex * SWM_MUX_CFG_STRIDE));
}

static inline volatile uint32_t *PinToCfgReg(DSWM_Type *base, swm_pin_index_t pinIndex)
{
  return (volatile uint32_t *)((uintptr_t)&base->SWM0_00_PIN_CFG +
                               (pinIndex * SWM_PIN_CFG_STRIDE));
}

void SWM_SetPinMode(DSWM_Type *base, swm_pin_index_t pinIndex, swm_pin_mode_t pinMode)
{
  assert(base != NULL);
  assert(pinIndex < SWM_PIN_COUNT);
  RPU_WriteReg(PinToMuxReg(base, pinIndex), (uint32_t)(pinMode & SWM_PPINDEX_MASK));
}

swm_pin_mode_t SWM_GetPinMode(DSWM_Type *base, swm_pin_index_t pinIndex)
{
  assert(base != NULL);
  assert(pinIndex < SWM_PIN_COUNT);
  return (swm_pin_mode_t)(*PinToMuxReg(base, pinIndex) & SWM_PPINDEX_MASK);
}

void SWM_SetPinConfig(DSWM_Type *base, swm_pin_index_t pinIndex, uint32_t config)
{
  assert(base != NULL);
  assert(pinIndex < SWM_PIN_COUNT);
  RPU_WriteReg(PinToCfgReg(base, pinIndex), config);
}