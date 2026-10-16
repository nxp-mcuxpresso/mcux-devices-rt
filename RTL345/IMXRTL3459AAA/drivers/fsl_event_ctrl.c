/*
 * Copyright 2025-2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_common.h"
#include "fsl_event_ctrl.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* Same mask for CTIMER0,1,2,3,4 since they have the same bit field layout */
#define EVENT_CTRL_CTIMER_SEL_MASK \
                                    (EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX0_SEL_MASK \
                                    | EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX1_SEL_MASK \
                                    | EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX2_SEL_MASK \
                                    | EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX3_SEL_MASK)

#define EVENT_CTRL_DMA_SEL_MASK \
                                (EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX0_SEL_MASK \
                                | EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX1_SEL_MASK \
                                | EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX2_SEL_MASK \
                                | EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX3_SEL_MASK \
                                | EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX4_SEL_MASK \
                                | EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX5_SEL_MASK \
                                | EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX6_SEL_MASK \
                                | EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX7_SEL_MASK)

#define EVENT_CTRL_SCT_SEL_MASK \
                                (EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX0_SEL_MASK \
                                | EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX1_SEL_MASK \
                                | EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX2_SEL_MASK \
                                | EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX3_SEL_MASK \
                                | EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX4_SEL_MASK \
                                | EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX5_SEL_MASK \
                                | EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX6_SEL_MASK \
                                | EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX7_SEL_MASK)

#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_MASK \
                                    (EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX0_SEL_MASK \
                                    | EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX1_SEL_MASK \
                                    | EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX2_SEL_MASK \
                                    | EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX3_SEL_MASK)

#define EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_MASK \
                                    (EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX0_SEL_MASK \
                                    | EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX1_SEL_MASK \
                                    | EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX2_SEL_MASK \
                                    | EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX3_SEL_MASK)

#define EVENT_CTRL_CTIMER_PERIPHEVT_MUX_SS0_SEL_MASK \
                                    (EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX0_SEL_MASK \
                                    | EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX1_SEL_MASK \
                                    | EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX2_SEL_MASK \
                                    | EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX3_SEL_MASK)
                                    
#define EVENT_CTRL_CTIMER_PERIPHEVT_MUX_SS1_SEL_MASK \
                                    (EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX0_SEL_MASK \
                                    | EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX1_SEL_MASK \
                                    | EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX2_SEL_MASK \
                                    | EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX3_SEL_MASK)

/*******************************************************************************
 * Helper functions
 ******************************************************************************/
static inline uint32_t EVENT_CTRL_GetDMAEventMux(const EVENT_CTRL_Type *base)
{
    return base->DMA_EVTMUX_SEL & EVENT_CTRL_DMA_SEL_MASK;
}

static inline void EVENT_CTRL_SetDMAEventMux(EVENT_CTRL_Type *base, uint32_t mask)
{
    base->DMA_EVTMUX_SEL = mask & EVENT_CTRL_DMA_SEL_MASK;
}

static inline uint32_t EVENT_CTRL_GetSCTEventMux(const EVENT_CTRL_Type *base)
{
    return base->SCT_EVTMUX_SEL & EVENT_CTRL_SCT_SEL_MASK;
}
static inline void EVENT_CTRL_SetSCTEventMux(EVENT_CTRL_Type *base, uint32_t mask)
{
    base->SCT_EVTMUX_SEL = mask & EVENT_CTRL_SCT_SEL_MASK;
}

static inline uint32_t EVENT_CTRL_GetDMAPeriphEvtMuxSS0Sel(const EVENT_CTRL_Type *base)
{
    return base->DMA_PERIPHEVT_MUX_SS0_SEL & EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_MASK;
}

static inline void EVENT_CTRL_SetDMAPeriphEvtMuxSS0Sel(EVENT_CTRL_Type *base, uint32_t mask)
{
    base->DMA_PERIPHEVT_MUX_SS0_SEL = mask & EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_MASK;
}

static inline uint32_t EVENT_CTRL_GetDMAPeriphEvtMuxSS1Sel(const EVENT_CTRL_Type *base)
{
    return base->DMA_PERIPHEVT_MUX_SS1_SEL & EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_MASK;
}

static inline void EVENT_CTRL_SetDMAPeriphEvtMuxSS1Sel(EVENT_CTRL_Type *base, uint32_t mask)
{
    base->DMA_PERIPHEVT_MUX_SS1_SEL = mask & EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_MASK;
}

static inline uint32_t EVENT_CTRL_GetCTimerPeriphEvtMuxSS0Sel(const EVENT_CTRL_Type *base)
{
    return base->CTIMER_PERIPHEVT_SS0_MSEL & EVENT_CTRL_CTIMER_PERIPHEVT_MUX_SS0_SEL_MASK;
}

static inline void EVENT_CTRL_SetCTimerPeriphEvtMuxSS0Sel(EVENT_CTRL_Type *base, uint32_t mask)
{
    base->CTIMER_PERIPHEVT_SS0_MSEL = mask & EVENT_CTRL_CTIMER_PERIPHEVT_MUX_SS0_SEL_MASK;
}

static inline uint32_t EVENT_CTRL_GetCTimerPeriphEvtMuxSS1Sel(const EVENT_CTRL_Type *base)
{
    return base->CTIMER_PERIPHEVT_SS1_MSEL & EVENT_CTRL_CTIMER_PERIPHEVT_MUX_SS1_SEL_MASK;
}

static inline void EVENT_CTRL_SetCTimerPeriphEvtMuxSS1Sel(EVENT_CTRL_Type *base, uint32_t mask)
{
    base->CTIMER_PERIPHEVT_SS1_MSEL = mask & EVENT_CTRL_CTIMER_PERIPHEVT_MUX_SS1_SEL_MASK;
}

/*******************************************************************************
 * Public functions
 ******************************************************************************/
event_ctrl_interrupt_t EVENT_CTRL_GetInterruptStatus(const EVENT_CTRL_Type *base)
{
    return (event_ctrl_interrupt_t)((((uint64_t)base->IRQ_STATUS1) << 32U) | ((uint64_t)base->IRQ_STATUS0));
}

void EVENT_CTRL_ClearInterruptStatus(EVENT_CTRL_Type *base, event_ctrl_interrupt_t mask)
{
    base->IRQ_CLR0 = (uint32_t)(mask & EVENT_CTRL_IRQ_STATUS0_IRQ_STATUS0_MASK);
    base->IRQ_CLR1 = (uint32_t)((mask >> 32U) & EVENT_CTRL_IRQ_STATUS1_IRQ_STATUS1_MASK);
}

void EVENT_CTRL_EnableInterrupts(EVENT_CTRL_Type *base, event_ctrl_interrupt_t mask)
{
    base->IRQ_ENABLE0 |= (uint32_t)(mask & EVENT_CTRL_IRQ_STATUS0_IRQ_STATUS0_MASK);
    base->IRQ_ENABLE1 |= (uint32_t)((mask >> 32U) & EVENT_CTRL_IRQ_STATUS1_IRQ_STATUS1_MASK);
}

void EVENT_CTRL_DisableInterrupts(EVENT_CTRL_Type *base, event_ctrl_interrupt_t mask)
{
    base->IRQ_ENABLE0 &= ~((uint32_t)(mask & EVENT_CTRL_IRQ_STATUS0_IRQ_STATUS0_MASK));
    base->IRQ_ENABLE1 &= ~((uint32_t)((mask >> 32U) & EVENT_CTRL_IRQ_STATUS1_IRQ_STATUS1_MASK));
}

event_ctrl_event_status_t EVENT_CTRL_GetEventStatus(const EVENT_CTRL_Type *base)
{
    return (event_ctrl_event_status_t)((((uint64_t)base->EVENT_STATUS1) << 32U) | ((uint64_t)base->EVENT_STATUS0));
}

void EVENT_CTRL_ClearEventStatus(EVENT_CTRL_Type *base, event_ctrl_event_status_t mask)
{
    base->EVENT_STATUS0 = (uint32_t)(mask & EVENT_CTRL_EVENT_STATUS0_EVT_STATUS0_MASK);
    base->EVENT_STATUS1 = (uint32_t)((mask >> 32U) & EVENT_CTRL_EVENT_STATUS1_EVT_STATUS1_MASK);
}

void EVENT_CTRL_GenerateOutputEvent(EVENT_CTRL_Type *base, event_ctrl_output_event_t mask)
{
    /* An event tells another core to read what this CPU wrote. Without a barrier the write to
       EVENT_OUT_GEN can overtake earlier stores to shared memory still in the store buffer. */
    __DSB();

    /* The register splits the output events into an NSS half [7:0] and an ADSS half [15:8],
       which matches the bit positions of event_ctrl_output_event_t. */
    base->EVENT_OUT_GEN = (uint32_t)mask & (EVENT_CTRL_EVENT_OUT_GEN_NSS_EVENTS_MASK |
                                            EVENT_CTRL_EVENT_OUT_GEN_ADSS_EVENTS_MASK);
}

status_t EVENT_CTRL_EnableDMACompleteEventToNSS(EVENT_CTRL_Type *base, uint32_t dmaChannel)
{
    /* Check arguments */
    if(dmaChannel >= 24)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    /* Get reg value */
    uint32_t val = EVENT_CTRL_GetDMAPeriphEvtMuxSS0Sel(base);
    uint8_t muxIndex = dmaChannel / 6;
    uint8_t dmaRegValue = (dmaChannel % 6U);
    
#define EVENT_CTRL_DMA_MUX_MASKS(X) \
    X(0, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX0_SEL_MASK, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX0_SEL_SHIFT) \
    X(1, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX1_SEL_MASK, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX1_SEL_SHIFT) \
    X(2, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX2_SEL_MASK, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX2_SEL_SHIFT) \
    X(3, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX3_SEL_MASK, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX3_SEL_SHIFT)

    uint32_t muxMask  = 0;
    uint32_t muxShift = 0;
    switch(muxIndex)
    {
#define EVENT_CTRL_DMA_MUX_CASE(idx, mask, shift) case idx: muxMask = mask; muxShift = shift; break;
        EVENT_CTRL_DMA_MUX_MASKS(EVENT_CTRL_DMA_MUX_CASE)
#undef EVENT_CTRL_DMA_MUX_CASE
#undef EVENT_CTRL_DMA_MUX_MASKS
    }
    
    if(((val & muxMask) >> muxShift) != 0x07) /* Reset value */
    {
        /* Mux already used for an other dma complete */
        return kStatus_EventCtrl_MuxInUse;
    }
    
    uint32_t newValue = (val & ~muxMask) | (dmaRegValue << muxShift);
    EVENT_CTRL_SetDMAPeriphEvtMuxSS0Sel(base, newValue);
    return kStatus_Success;
}

status_t EVENT_CTRL_DisableDMACompleteEventToNSS(EVENT_CTRL_Type *base, uint32_t dmaChannel)
{
    /* Check arguments */
    if(dmaChannel >= 24)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    /* Get reg value */
    uint32_t val = EVENT_CTRL_GetDMAPeriphEvtMuxSS0Sel(base);
    uint8_t muxIndex = dmaChannel / 6;
    
#define EVENT_CTRL_DMA_MUX_MASKS(X) \
    X(0, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX0_SEL_MASK, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX0_SEL_SHIFT) \
    X(1, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX1_SEL_MASK, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX1_SEL_SHIFT) \
    X(2, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX2_SEL_MASK, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX2_SEL_SHIFT) \
    X(3, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX3_SEL_MASK, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS0_SEL_DMA_PERIPHEVT_SS0_MUX3_SEL_SHIFT)

    uint32_t muxMask  = 0;
    uint32_t muxShift = 0;
    switch(muxIndex)
    {
#define EVENT_CTRL_DMA_MUX_CASE(idx, mask, shift) case idx: muxMask = mask; muxShift = shift; break;
        EVENT_CTRL_DMA_MUX_MASKS(EVENT_CTRL_DMA_MUX_CASE)
#undef EVENT_CTRL_DMA_MUX_CASE
#undef EVENT_CTRL_DMA_MUX_MASKS
    }
    
    /* Set to reset value 0x07 to disable */
    uint32_t newValue = (val & ~muxMask) | (0x07 << muxShift);
    EVENT_CTRL_SetDMAPeriphEvtMuxSS0Sel(base, newValue);
    return kStatus_Success;
}


status_t EVENT_CTRL_EnableDMACompleteEventToADSS(EVENT_CTRL_Type *base, uint32_t dmaChannel)
{
    /* Check arguments */
    if(dmaChannel >= 24)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    /* Get reg value */
    uint32_t val = EVENT_CTRL_GetDMAPeriphEvtMuxSS1Sel(base);
    uint8_t muxIndex = dmaChannel / 6;
    uint8_t dmaRegValue = (dmaChannel % 6U);
    
#define EVENT_CTRL_DMA_MUX_MASKS(X) \
    X(0, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX0_SEL_MASK, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX0_SEL_SHIFT) \
    X(1, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX1_SEL_MASK, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX1_SEL_SHIFT) \
    X(2, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX2_SEL_MASK, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX2_SEL_SHIFT) \
    X(3, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX3_SEL_MASK, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX3_SEL_SHIFT)

    uint32_t muxMask  = 0;
    uint32_t muxShift = 0;
    switch(muxIndex)
    {
#define EVENT_CTRL_DMA_MUX_CASE(idx, mask, shift) case idx: muxMask = mask; muxShift = shift; break;
        EVENT_CTRL_DMA_MUX_MASKS(EVENT_CTRL_DMA_MUX_CASE)
#undef EVENT_CTRL_DMA_MUX_CASE
#undef EVENT_CTRL_DMA_MUX_MASKS
    }
    
    if(((val & muxMask) >> muxShift) != 0x07) /* Reset value */
    {
        /* Mux already used for an other dma complete */
        return kStatus_EventCtrl_MuxInUse;
    }
    
    uint32_t newValue = (val & ~muxMask) | (dmaRegValue << muxShift);
    EVENT_CTRL_SetDMAPeriphEvtMuxSS1Sel(base, newValue);
    return kStatus_Success;
}

status_t EVENT_CTRL_DisableDMACompleteEventToADSS(EVENT_CTRL_Type *base, uint32_t dmaChannel)
{
    /* Check arguments */
    if(dmaChannel >= 24)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    /* Get reg value */
    uint32_t val = EVENT_CTRL_GetDMAPeriphEvtMuxSS1Sel(base);
    uint8_t muxIndex = dmaChannel / 6;
    
#define EVENT_CTRL_DMA_MUX_MASKS(X) \
    X(0, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX0_SEL_MASK, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX0_SEL_SHIFT) \
    X(1, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX1_SEL_MASK, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX1_SEL_SHIFT) \
    X(2, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX2_SEL_MASK, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX2_SEL_SHIFT) \
    X(3, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX3_SEL_MASK, EVENT_CTRL_DMA_PERIPHEVT_MUX_SS1_SEL_DMA_PERIPHEVT_SS1_MUX3_SEL_SHIFT)

    uint32_t muxMask  = 0;
    uint32_t muxShift = 0;
    switch(muxIndex)
    {
#define EVENT_CTRL_DMA_MUX_CASE(idx, mask, shift) case idx: muxMask = mask; muxShift = shift; break;
        EVENT_CTRL_DMA_MUX_MASKS(EVENT_CTRL_DMA_MUX_CASE)
#undef EVENT_CTRL_DMA_MUX_CASE
#undef EVENT_CTRL_DMA_MUX_MASKS
    }
    
    /* Set to reset value 0x07 to disable */
    uint32_t newValue = (val & ~muxMask) | (0x07 << muxShift);
    EVENT_CTRL_SetDMAPeriphEvtMuxSS1Sel(base, newValue);
    return kStatus_Success;
}

status_t EVENT_CTRL_EnableCtimerMatchEventToNSS(EVENT_CTRL_Type *base, ctimer_instance_t ctimer_instance, uint8_t match_index, uint8_t mux_output)
{
    /* Check arguments */
    if(ctimer_instance >= kCTIMER_COUNT || match_index >= 4 || mux_output >= 4)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    /* Get reg value */
    uint32_t val = EVENT_CTRL_GetCTimerPeriphEvtMuxSS0Sel(base);
    #define EVENT_CTRL_CTIMER_MUX_MASKS(X) \
    X(0, EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX0_SEL_MASK, EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX0_SEL_SHIFT) \
    X(1, EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX1_SEL_MASK, EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX1_SEL_SHIFT) \
    X(2, EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX2_SEL_MASK, EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX2_SEL_SHIFT) \
    X(3, EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX3_SEL_MASK, EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX3_SEL_SHIFT)
    uint32_t muxMask  = 0;
    uint32_t muxShift = 0;
    switch(mux_output)
    {
#define EVENT_CTRL_CTIMER_MUX_CASE(idx, mask, shift) case idx: muxMask = mask; muxShift = shift; break;
        EVENT_CTRL_CTIMER_MUX_MASKS(EVENT_CTRL_CTIMER_MUX_CASE)
#undef EVENT_CTRL_CTIMER_MUX_CASE
#undef EVENT_CTRL_CTIMER_MUX_MASKS
    }

    if(((val & muxMask) >> muxShift) != 0x1F) /* Reset value */
    {
        /* Mux already used for an other ctimer match event */
        return kStatus_EventCtrl_MuxInUse;
    }

    /* Encode the ctimer instance and match index into the mux value */
    /* 0x00 CTIMER0 match 0 */
    /* 0x01 CTIMER1 match 0 */
    /* 0x02 CTIMER2 match 0 */
    /* 0x03 CTIMER3 match 0 */
    /* 0x04 CTIMER4 match 0 */
    /* 0x05 CTIMER0 match 1 */
    /* 0x06 CTIMER1 match 1 */
    /* 0x07 CTIMER2 match 1 */
    /* 0x08 CTIMER3 match 1 */
    /* ... */
    uint32_t newValue = (val & ~muxMask) | ((match_index * 5 + ctimer_instance) << muxShift);
    EVENT_CTRL_SetCTimerPeriphEvtMuxSS0Sel(base, newValue);

    return kStatus_Success;
}

status_t EVENT_CTRL_DisableCTimerMatchEventToNSS(EVENT_CTRL_Type *base, uint8_t mux_output)
{
    /* Check arguments */
    if(mux_output >= 4)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    /* Get reg value */
    uint32_t val = EVENT_CTRL_GetCTimerPeriphEvtMuxSS0Sel(base);
    #define EVENT_CTRL_CTIMER_MUX_MASKS(X) \
    X(0, EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX0_SEL_MASK, EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX0_SEL_SHIFT) \
    X(1, EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX1_SEL_MASK, EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX1_SEL_SHIFT) \
    X(2, EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX2_SEL_MASK, EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX2_SEL_SHIFT) \
    X(3, EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX3_SEL_MASK, EVENT_CTRL_CTIMER_PERIPHEVT_SS0_MSEL_CTIMER_PERIPHEVET_SS0_MUX3_SEL_SHIFT)
    uint32_t muxMask  = 0;
    uint32_t muxShift = 0;
    switch(mux_output)
    {
#define EVENT_CTRL_CTIMER_MUX_CASE(idx, mask, shift) case idx: muxMask = mask; muxShift = shift; break;
        EVENT_CTRL_CTIMER_MUX_MASKS(EVENT_CTRL_CTIMER_MUX_CASE)
#undef EVENT_CTRL_CTIMER_MUX_CASE
#undef EVENT_CTRL_CTIMER_MUX_MASKS
    }

    /* Set to reset value 0x1F to disable */
    uint32_t newValue = (val & ~muxMask) | (0x1F << muxShift);
    EVENT_CTRL_SetCTimerPeriphEvtMuxSS0Sel(base, newValue);
    return kStatus_Success;
}

/*!
 * @brief Forward CTIMER match event to ADSS.
 * @param base EVENT_CTRL base
 * @param ctimer_instance CTIMER instance number
 * @param match_index Match index
 */
status_t EVENT_CTRL_EnableCTimerMatchEventToADSS(EVENT_CTRL_Type *base, ctimer_instance_t ctimer_instance, uint8_t match_index, uint8_t mux_output)
{
    /* Check arguments */
    if(ctimer_instance >= 5 || match_index >= 4 || mux_output >= 4)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    /* Get reg value */
    uint32_t val = EVENT_CTRL_GetCTimerPeriphEvtMuxSS1Sel(base);
    #define EVENT_CTRL_CTIMER_MUX_MASKS(X) \
    X(0, EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX0_SEL_MASK, EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX0_SEL_SHIFT) \
    X(1, EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX1_SEL_MASK, EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX1_SEL_SHIFT) \
    X(2, EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX2_SEL_MASK, EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX2_SEL_SHIFT) \
    X(3, EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX3_SEL_MASK, EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX3_SEL_SHIFT)
    uint32_t muxMask  = 0;
    uint32_t muxShift = 0;
    switch(mux_output)
    {
#define EVENT_CTRL_CTIMER_MUX_CASE(idx, mask, shift) case idx: muxMask = mask; muxShift = shift; break;
        EVENT_CTRL_CTIMER_MUX_MASKS(EVENT_CTRL_CTIMER_MUX_CASE)
#undef EVENT_CTRL_CTIMER_MUX_CASE
#undef EVENT_CTRL_CTIMER_MUX_MASKS
    }

    if(((val & muxMask) >> muxShift) != 0x1F) /* Reset value */
    {
        /* Mux already used for an other ctimer match event */
        return kStatus_EventCtrl_MuxInUse;
    }

    /* Encode the ctimer instance and match index into the mux value */
    /* 0x00 CTIMER0 match 0 */
    /* 0x01 CTIMER1 match 0 */
    /* 0x02 CTIMER2 match 0 */
    /* 0x03 CTIMER3 match 0 */
    /* 0x04 CTIMER4 match 0 */
    /* 0x05 CTIMER0 match 1 */
    /* 0x06 CTIMER1 match 1 */
    /* 0x07 CTIMER2 match 1 */
    /* 0x08 CTIMER3 match 1 */
    /* ... */
    uint32_t newValue = (val & ~muxMask) | ((match_index * 5 + ctimer_instance) << muxShift);
    EVENT_CTRL_SetCTimerPeriphEvtMuxSS1Sel(base, newValue);

    return kStatus_Success;
}

status_t EVENT_CTRL_DisableCTimerMatchEventToADSS(EVENT_CTRL_Type *base, uint8_t mux_output)
{
    /* Check arguments */
    if(mux_output >= 4)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    /* Get reg value */
    uint32_t val = EVENT_CTRL_GetCTimerPeriphEvtMuxSS1Sel(base);
    #define EVENT_CTRL_CTIMER_MUX_MASKS(X) \
    X(0, EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX0_SEL_MASK, EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX0_SEL_SHIFT) \
    X(1, EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX1_SEL_MASK, EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX1_SEL_SHIFT) \
    X(2, EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX2_SEL_MASK, EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX2_SEL_SHIFT) \
    X(3, EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX3_SEL_MASK, EVENT_CTRL_CTIMER_PERIPHEVT_SS1_MSEL_CTIMER_PERIPHEVET_SS1_MUX3_SEL_SHIFT)
    uint32_t muxMask  = 0;
    uint32_t muxShift = 0;
    switch(mux_output)
    {
#define EVENT_CTRL_CTIMER_MUX_CASE(idx, mask, shift) case idx: muxMask = mask; muxShift = shift; break;
        EVENT_CTRL_CTIMER_MUX_MASKS(EVENT_CTRL_CTIMER_MUX_CASE)
#undef EVENT_CTRL_CTIMER_MUX_CASE
#undef EVENT_CTRL_CTIMER_MUX_MASKS
    }

    /* Set to reset value 0x1F to disable */
    uint32_t newValue = (val & ~muxMask) | (0x1F << muxShift);
    EVENT_CTRL_SetCTimerPeriphEvtMuxSS1Sel(base, newValue);
    return kStatus_Success;
}

status_t EVENT_CTRL_SelectDMAInstance(EVENT_CTRL_Type *base, dma_instance_t dmaInstance)
{
    if(dmaInstance >= kSDMA_COUNT)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    base->PERIPHEVT_DMA_INST_SEL = (uint32_t)(dmaInstance & EVENT_CTRL_PERIPHEVT_DMA_INST_SEL_PERIPHEVT_DMAINST_SEL_MASK);

    return kStatus_Success;
}


status_t EVENT_CTRL_EnableDMATriggerOnEvent(EVENT_CTRL_Type *base, event_ctrl_input_event_t event_in)
{
    if(event_in >= kEVENT_CTRL_INPUT_EVENT_COUNT)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    /* Get reg value */
    uint32_t val = EVENT_CTRL_GetDMAEventMux(base);
    uint8_t muxIndex = (uint8_t)event_in % 8;
    uint8_t muxValue = (uint8_t)(event_in / 8U);
    #define EVENT_CTRL_DMA_MUX_MASKS(X) \
        X(0, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX0_SEL_MASK, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX0_SEL_SHIFT) \
        X(1, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX1_SEL_MASK, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX1_SEL_SHIFT) \
        X(2, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX2_SEL_MASK, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX2_SEL_SHIFT) \
        X(3, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX3_SEL_MASK, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX3_SEL_SHIFT) \
        X(4, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX4_SEL_MASK, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX4_SEL_SHIFT) \
        X(5, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX5_SEL_MASK, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX5_SEL_SHIFT) \
        X(6, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX6_SEL_MASK, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX6_SEL_SHIFT) \
        X(7, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX7_SEL_MASK, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX7_SEL_SHIFT) 
    uint32_t muxMask  = 0;
    uint32_t muxShift = 0;
    switch(muxIndex)
    {
#define EVENT_CTRL_DMA_MUX_CASE(idx, mask, shift) case idx: muxMask = mask; muxShift = shift; break;
        EVENT_CTRL_DMA_MUX_MASKS(EVENT_CTRL_DMA_MUX_CASE)
#undef EVENT_CTRL_DMA_MUX_CASE
#undef EVENT_CTRL_DMA_MUX_MASKS
    }

    /* Check that the mux is not already in use */
    if(((val & muxMask) >> muxShift) != 0x7)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    /* Set to reset value 0x1F to disable */
    uint32_t newValue = (val & ~muxMask) | (muxValue << muxShift);
    EVENT_CTRL_SetDMAEventMux(base, newValue);
    return kStatus_Success;
}

status_t EVENT_CTRL_DisableDMATriggerOnEvent(EVENT_CTRL_Type *base, event_ctrl_input_event_t event_in)
{
    if(event_in >= kEVENT_CTRL_INPUT_EVENT_COUNT)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    /* Get reg value */
    uint32_t val = EVENT_CTRL_GetDMAEventMux(base);
    uint8_t muxIndex = (uint8_t)event_in % 8;
    #define EVENT_CTRL_DMA_MUX_MASKS(X) \
        X(0, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX0_SEL_MASK, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX0_SEL_SHIFT) \
        X(1, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX1_SEL_MASK, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX1_SEL_SHIFT) \
        X(2, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX2_SEL_MASK, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX2_SEL_SHIFT) \
        X(3, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX3_SEL_MASK, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX3_SEL_SHIFT) \
        X(4, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX4_SEL_MASK, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX4_SEL_SHIFT) \
        X(5, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX5_SEL_MASK, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX5_SEL_SHIFT) \
        X(6, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX6_SEL_MASK, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX6_SEL_SHIFT) \
        X(7, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX7_SEL_MASK, EVENT_CTRL_DMA_EVTMUX_SEL_DMA_EVTMUX7_SEL_SHIFT) 
    uint32_t muxMask  = 0;
    uint32_t muxShift = 0;
    switch(muxIndex)
    {
#define EVENT_CTRL_DMA_MUX_CASE(idx, mask, shift) case idx: muxMask = mask; muxShift = shift; break;
        EVENT_CTRL_DMA_MUX_MASKS(EVENT_CTRL_DMA_MUX_CASE)
#undef EVENT_CTRL_DMA_MUX_CASE
#undef EVENT_CTRL_DMA_MUX_MASKS
    }

    /* Set to reset value 0x1F to disable */
    uint32_t newValue = (val & ~muxMask) | (0x7 << muxShift);
    EVENT_CTRL_SetDMAEventMux(base, newValue);
    return kStatus_Success;
}

status_t EVENT_CTRL_EnableSCTimerTriggerOnEvent(EVENT_CTRL_Type *base, event_ctrl_input_event_t event_in)
{
    if(event_in >= kEVENT_CTRL_INPUT_EVENT_COUNT)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    /* Get reg value */
    uint32_t val = EVENT_CTRL_GetSCTEventMux(base);
    uint8_t muxIndex = (uint8_t)event_in % 8;
    uint8_t muxValue = (uint8_t)(event_in / 8U);
    #define EVENT_CTRL_SCT_MUX_MASKS(X) \
        X(0, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX0_SEL_MASK, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX0_SEL_SHIFT) \
        X(1, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX1_SEL_MASK, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX1_SEL_SHIFT) \
        X(2, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX2_SEL_MASK, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX2_SEL_SHIFT) \
        X(3, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX3_SEL_MASK, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX3_SEL_SHIFT) \
        X(4, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX4_SEL_MASK, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX4_SEL_SHIFT) \
        X(5, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX5_SEL_MASK, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX5_SEL_SHIFT) \
        X(6, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX6_SEL_MASK, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX6_SEL_SHIFT) \
        X(7, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX7_SEL_MASK, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX7_SEL_SHIFT) 
    uint32_t muxMask  = 0;
    uint32_t muxShift = 0;
    switch(muxIndex)
    {
#define EVENT_CTRL_SCT_MUX_CASE(idx, mask, shift) case idx: muxMask = mask; muxShift = shift; break;
        EVENT_CTRL_SCT_MUX_MASKS(EVENT_CTRL_SCT_MUX_CASE)
#undef EVENT_CTRL_SCT_MUX_CASE
#undef EVENT_CTRL_SCT_MUX_MASKS
    }

    /* Check that the mux is not already in use */
    if(((val & muxMask) >> muxShift) != 0x7)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    /* Set to reset value 0x1F to disable */
    uint32_t newValue = (val & ~muxMask) | (muxValue << muxShift);
    EVENT_CTRL_SetSCTEventMux(base, newValue);
    return kStatus_Success;
}

status_t EVENT_CTRL_DisableSCTimerTriggerOnEvent(EVENT_CTRL_Type *base, event_ctrl_input_event_t event_in)
{
    if(event_in >= kEVENT_CTRL_INPUT_EVENT_COUNT)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    /* Get reg value */
    uint32_t val = EVENT_CTRL_GetSCTEventMux(base);
    uint8_t muxIndex = (uint8_t)event_in % 8;
    #define EVENT_CTRL_SCT_MUX_MASKS(X) \
        X(0, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX0_SEL_MASK, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX0_SEL_SHIFT) \
        X(1, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX1_SEL_MASK, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX1_SEL_SHIFT) \
        X(2, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX2_SEL_MASK, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX2_SEL_SHIFT) \
        X(3, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX3_SEL_MASK, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX3_SEL_SHIFT) \
        X(4, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX4_SEL_MASK, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX4_SEL_SHIFT) \
        X(5, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX5_SEL_MASK, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX5_SEL_SHIFT) \
        X(6, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX6_SEL_MASK, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX6_SEL_SHIFT) \
        X(7, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX7_SEL_MASK, EVENT_CTRL_SCT_EVTMUX_SEL_SCT_EVTMUX7_SEL_SHIFT) 
    uint32_t muxMask  = 0;
    uint32_t muxShift = 0;
    switch(muxIndex)
    {
#define EVENT_CTRL_SCT_MUX_CASE(idx, mask, shift) case idx: muxMask = mask; muxShift = shift; break;
        EVENT_CTRL_SCT_MUX_MASKS(EVENT_CTRL_SCT_MUX_CASE)
#undef EVENT_CTRL_SCT_MUX_CASE
#undef EVENT_CTRL_SCT_MUX_MASKS
    }

    /* Set to reset value 0x1F to disable */
    uint32_t newValue = (val & ~muxMask) | (0x7 << muxShift);
    EVENT_CTRL_SetSCTEventMux(base, newValue);
    return kStatus_Success;
}

status_t EVENT_CTRL_EnableCTimerCaptureOnEvent(EVENT_CTRL_Type *base, event_ctrl_input_event_t event_in, ctimer_instance_t ctimer_instance)
{
    if(event_in >= kEVENT_CTRL_INPUT_EVENT_COUNT || ctimer_instance >= kCTIMER_COUNT)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    /* Get pointer to register from ctimer_instance */
    volatile uint32_t *regPtr = NULL;
    #define EVENT_CTRL_CTIMER_EVT_MUX_SEL(X) \
        X(kCTIMER0, &base->CTIMER0_EVTMUX_SEL) \
        X(kCTIMER1, &base->CTIMER1_EVTMUX_SEL) \
        X(kCTIMER2, &base->CTIMER2_EVTMUX_SEL) \
        X(kCTIMER3, &base->CTIMER3_EVTMUX_SEL) \
        X(kCTIMER4, &base->CTIMER4_EVTMUX_SEL) \
        X(kCTIMER_COUNT, 0) /* Invalid case, should not be reached */
    switch(ctimer_instance)
    {
#define EVENT_CTRL_CTIMER_SEL_CASE(idx, reg) case idx: regPtr = reg; break;
        EVENT_CTRL_CTIMER_EVT_MUX_SEL(EVENT_CTRL_CTIMER_SEL_CASE)
#undef EVENT_CTRL_CTIMER_SEL_CASE
#undef EVENT_CTRL_CTIMER_EVT_MUX_SEL
    }

    uint32_t val = *regPtr & EVENT_CTRL_CTIMER_SEL_MASK;
    uint8_t muxIndex = (uint8_t)event_in % 4;
    uint8_t muxValue = (uint8_t)(event_in / 4U);
    #define EVENT_CTRL_CTIMER_EVTMUX_MASKS(X) \
        X(0, EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX0_SEL_MASK, EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX0_SEL_SHIFT) \
        X(1, EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX1_SEL_MASK, EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX1_SEL_SHIFT) \
        X(2, EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX2_SEL_MASK, EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX2_SEL_SHIFT) \
        X(3, EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX3_SEL_MASK, EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX3_SEL_SHIFT)
    uint32_t muxMask  = 0;
    uint32_t muxShift = 0;
    switch(muxIndex)
    {
#define EVENT_CTRL_CTIMER_EVTMUX_CASE(idx, mask, shift) case idx: muxMask = mask; muxShift = shift; break;
        EVENT_CTRL_CTIMER_EVTMUX_MASKS(EVENT_CTRL_CTIMER_EVTMUX_CASE)
#undef EVENT_CTRL_CTIMER_EVTMUX_CASE
#undef EVENT_CTRL_CTIMER_EVTMUX_MASKS
    }

    /* Check that the mux is not already in use */
    if(((val & muxMask) >> muxShift) != 0xF)
    {
        return kStatus_EventCtrl_MuxInUse;
    }

    /* Set to reset value 0x1F to disable */
    uint32_t newValue = (val & ~muxMask) | (muxValue << muxShift);
    *regPtr = newValue & EVENT_CTRL_CTIMER_SEL_MASK;
    return kStatus_Success;
}

status_t EVENT_CTRL_DisableCTimerCaptureOnEvent(EVENT_CTRL_Type *base, event_ctrl_input_event_t event_in, ctimer_instance_t ctimer_instance)
{
    if(event_in >= kEVENT_CTRL_INPUT_EVENT_COUNT || ctimer_instance >= kCTIMER_COUNT)
    {
        return kStatus_EventCtrl_InvalidParam;
    }

    /* Get pointer to register from ctimer_instance */
    volatile uint32_t *regPtr = NULL;
    #define EVENT_CTRL_CTIMER_EVT_MUX_SEL(X) \
        X(kCTIMER0, &base->CTIMER0_EVTMUX_SEL) \
        X(kCTIMER1, &base->CTIMER1_EVTMUX_SEL) \
        X(kCTIMER2, &base->CTIMER2_EVTMUX_SEL) \
        X(kCTIMER3, &base->CTIMER3_EVTMUX_SEL) \
        X(kCTIMER4, &base->CTIMER4_EVTMUX_SEL) \
        X(kCTIMER_COUNT, 0) /* Invalid case, should not be reached */
    switch(ctimer_instance)
    {
#define EVENT_CTRL_CTIMER_SEL_CASE(idx, reg) case idx: regPtr = reg; break;
        EVENT_CTRL_CTIMER_EVT_MUX_SEL(EVENT_CTRL_CTIMER_SEL_CASE)
#undef EVENT_CTRL_CTIMER_SEL_CASE
#undef EVENT_CTRL_CTIMER_EVT_MUX_SEL
    }

    uint32_t val = *regPtr & EVENT_CTRL_CTIMER_SEL_MASK;
    uint8_t muxIndex = (uint8_t)event_in % 4;
    #define EVENT_CTRL_CTIMER_EVTMUX_MASKS(X) \
        X(0, EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX0_SEL_MASK, EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX0_SEL_SHIFT) \
        X(1, EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX1_SEL_MASK, EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX1_SEL_SHIFT) \
        X(2, EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX2_SEL_MASK, EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX2_SEL_SHIFT) \
        X(3, EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX3_SEL_MASK, EVENT_CTRL_CTIMER0_EVTMUX_SEL_CTIMER0_EVTMUX3_SEL_SHIFT)
    uint32_t muxMask  = 0;
    uint32_t muxShift = 0;
    switch(muxIndex)
    {
#define EVENT_CTRL_CTIMER_EVTMUX_CASE(idx, mask, shift) case idx: muxMask = mask; muxShift = shift; break;
        EVENT_CTRL_CTIMER_EVTMUX_MASKS(EVENT_CTRL_CTIMER_EVTMUX_CASE)
#undef EVENT_CTRL_CTIMER_EVTMUX_CASE
#undef EVENT_CTRL_CTIMER_EVTMUX_MASKS
    }

    /* Set to reset value 0xF to disable */
    uint32_t newValue = (val & ~muxMask) | (0xF << muxShift);
    *regPtr = newValue & EVENT_CTRL_CTIMER_SEL_MASK;
    return kStatus_Success;
}
