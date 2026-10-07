/*
 * Copyright 2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#if (IMXRTL3459AAA_cm55_core0_SERIES)
#include <stdint.h>

#include "fsl_device_registers.h"
#include "fsl_common.h"

#ifdef SDK_DEBUGCONSOLE
#include "fsl_debug_console.h"
#endif

/*******************************************************************************
 * Definitions
 ******************************************************************************/

typedef enum
{
    kFaultSourceHardFault  = 0U,
    kFaultSourceMemManage  = 1U,
    kFaultSourceBusFault   = 2U,
    kFaultSourceUsageFault = 3U,
#if defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
    kFaultSourceSecureFault = 4U,
#endif
} fault_source_t;

typedef struct
{
    uint32_t fault_source;

    /* Raw exception entry information */
    uint32_t exc_return;
    uint32_t frame_ptr;
    uint32_t msp_at_fault;
    uint32_t psp_at_fault;
    uint32_t msplim;
    uint32_t psplim;

    /* Basic hardware-stacked exception frame */
    uint32_t r0;
    uint32_t r1;
    uint32_t r2;
    uint32_t r3;
    uint32_t r12;
    uint32_t lr;
    uint32_t pc;
    uint32_t xpsr;

    /* Decoded exception frame properties */
    uint32_t return_to_thread;
    uint32_t used_psp;
    uint32_t standard_frame;
    uint32_t stacked_in_secure;
    uint32_t stack_align_word;
    uint32_t basic_frame_bytes;
    uint32_t total_frame_bytes_min;

    /* Fault status registers */
    uint32_t cfsr;
    uint32_t hfsr;
    uint32_t dfsr;
    uint32_t afsr;
    uint32_t shcsr;
    uint32_t mmfar;
    uint32_t bfar;

#if defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
    uint32_t sfsr;
    uint32_t sfar;
#endif
} hardfault_info_t;

static volatile hardfault_info_t gHardFaultInfo;

/* ---- CFSR bit helpers ---- */
#define CFSR_IACCVIOL_Msk      (1UL << 0)
#define CFSR_DACCVIOL_Msk      (1UL << 1)
#define CFSR_MUNSTKERR_Msk     (1UL << 3)
#define CFSR_MSTKERR_Msk       (1UL << 4)
#define CFSR_MLSPERR_Msk       (1UL << 5)
#define CFSR_MMARVALID_Msk     (1UL << 7)

#define CFSR_IBUSERR_Msk       (1UL << 8)
#define CFSR_PRECISERR_Msk     (1UL << 9)
#define CFSR_IMPRECISERR_Msk   (1UL << 10)
#define CFSR_UNSTKERR_Msk      (1UL << 11)
#define CFSR_STKERR_Msk        (1UL << 12)
#define CFSR_LSPERR_Msk        (1UL << 13)
#define CFSR_BFARVALID_Msk     (1UL << 15)

#define CFSR_UNDEFINSTR_Msk    (1UL << 16)
#define CFSR_INVSTATE_Msk      (1UL << 17)
#define CFSR_INVPC_Msk         (1UL << 18)
#define CFSR_NOCP_Msk          (1UL << 19)
#define CFSR_STKOF_Msk         (1UL << 20)
#define CFSR_UNALIGNED_Msk     (1UL << 24)
#define CFSR_DIVBYZERO_Msk     (1UL << 25)

/* EXC_RETURN decoding */
#define EXC_RETURN_SPSEL_Msk   (1UL << 2)  /* 1 = PSP, 0 = MSP */
#define EXC_RETURN_MODE_Msk    (1UL << 3)  /* 1 = Thread mode, 0 = Handler mode */
#define EXC_RETURN_FTYPE_Msk   (1UL << 4)  /* 1 = standard frame, 0 = extended FP frame */
#define EXC_RETURN_SECURE_Msk  (1UL << 6)  /* 1 = Secure stack, 0 = Non-secure stack */

/* Stacked xPSR bit[9] indicates an alignment word was inserted */
#define XPSR_STACKALIGN_Msk    (1UL << 9)

/*******************************************************************************
 * Local helpers
 ******************************************************************************/

#if (defined(SDK_DEBUGCONSOLE) && (SDK_DEBUGCONSOLE != DEBUGCONSOLE_DISABLE))
static const char *GetFaultSourceName(uint32_t source)
{
    switch ((fault_source_t)source)
    {
        case kFaultSourceHardFault:
            return "HardFault";
        case kFaultSourceMemManage:
            return "MemManage";
        case kFaultSourceBusFault:
            return "BusFault";
        case kFaultSourceUsageFault:
            return "UsageFault";
#if defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
        case kFaultSourceSecureFault:
            return "SecureFault";
#endif
        default:
            return "Unknown";
    }
}
#endif

static void FaultInfo_Decode(volatile hardfault_info_t *info)
{
    info->return_to_thread  = ((info->exc_return & EXC_RETURN_MODE_Msk) != 0U) ? 1U : 0U;
    info->used_psp          = ((info->exc_return & EXC_RETURN_SPSEL_Msk) != 0U) ? 1U : 0U;
    info->standard_frame    = ((info->exc_return & EXC_RETURN_FTYPE_Msk) != 0U) ? 1U : 0U;
    info->stacked_in_secure = ((info->exc_return & EXC_RETURN_SECURE_Msk) != 0U) ? 1U : 0U;
    info->stack_align_word  = ((info->xpsr & XPSR_STACKALIGN_Msk) != 0U) ? 1U : 0U;

    info->basic_frame_bytes = 8U * 4U;

    if (info->standard_frame != 0U)
    {
        info->total_frame_bytes_min = info->basic_frame_bytes;
    }
    else
    {
        info->total_frame_bytes_min = info->basic_frame_bytes + (18U * 4U);
    }

    if (info->stack_align_word != 0U)
    {
        info->total_frame_bytes_min += 4U;
    }
}

static void FaultInfo_Capture(volatile hardfault_info_t *info,
                              fault_source_t source,
                              uint32_t *stacked_frame,
                              uint32_t exc_return,
                              uint32_t msp,
                              uint32_t psp)
{
    info->fault_source = (uint32_t)source;

    info->frame_ptr    = (uint32_t)stacked_frame;
    info->exc_return   = exc_return;
    info->msp_at_fault = msp;
    info->psp_at_fault = psp;
    info->msplim       = __get_MSPLIM();
    info->psplim       = __get_PSPLIM();

    info->r0   = stacked_frame[0];
    info->r1   = stacked_frame[1];
    info->r2   = stacked_frame[2];
    info->r3   = stacked_frame[3];
    info->r12  = stacked_frame[4];
    info->lr   = stacked_frame[5];
    info->pc   = stacked_frame[6];
    info->xpsr = stacked_frame[7];

    info->cfsr  = SCB->CFSR;
    info->hfsr  = SCB->HFSR;
    info->dfsr  = SCB->DFSR;
    info->afsr  = SCB->AFSR;
    info->shcsr = SCB->SHCSR;
    info->mmfar = SCB->MMFAR;
    info->bfar  = SCB->BFAR;

#if defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
    info->sfsr = SAU->SFSR;
    info->sfar = SAU->SFAR;
#endif

    FaultInfo_Decode(info);
}

#if (defined(SDK_DEBUGCONSOLE) && (SDK_DEBUGCONSOLE != DEBUGCONSOLE_DISABLE))
static void PrintFaultInfo(const volatile hardfault_info_t *info)
{
    PRINTF("\r\n================ %s ================\r\n", GetFaultSourceName(info->fault_source));

    PRINTF("frame ptr          = 0x%x\r\n", info->frame_ptr);
    PRINTF("EXC_RETURN         = 0x%x\r\n", info->exc_return);
    PRINTF("MSP                = 0x%x\r\n", info->msp_at_fault);
    PRINTF("PSP                = 0x%x\r\n", info->psp_at_fault);
    PRINTF("MSPLIM             = 0x%x\r\n", info->msplim);
    PRINTF("PSPLIM             = 0x%x\r\n", info->psplim);

    if ((info->used_psp != 0U) && (info->psp_at_fault < info->psplim))
    {
        PRINTF("*** PSP below PSPLIM: possible stack overflow/underflow ***\r\n");
    }
    if ((info->used_psp == 0U) && (info->msp_at_fault < info->msplim))
    {
        PRINTF("*** MSP below MSPLIM: possible stack overflow/underflow ***\r\n");
    }

    PRINTF("\r\n--- Stacked Registers ---\r\n");
    PRINTF("r0                 = 0x%x\r\n", info->r0);
    PRINTF("r1                 = 0x%x\r\n", info->r1);
    PRINTF("r2                 = 0x%x\r\n", info->r2);
    PRINTF("r3                 = 0x%x\r\n", info->r3);
    PRINTF("r12                = 0x%x\r\n", info->r12);
    PRINTF("lr(stacked)        = 0x%x\r\n", info->lr);
    PRINTF("pc(stacked)        = 0x%x\r\n", info->pc);
    PRINTF("xpsr(stacked)      = 0x%x\r\n", info->xpsr);

    PRINTF("\r\n--- Exception Frame Info ---\r\n");
    PRINTF("return mode        = %s\r\n", (info->return_to_thread != 0U) ? "Thread" : "Handler");
    PRINTF("stack used         = %s\r\n", (info->used_psp != 0U) ? "PSP" : "MSP");
    PRINTF("frame type         = %s\r\n", (info->standard_frame != 0U) ? "Standard" : "Extended FP");
    PRINTF("stacked security   = %s\r\n", (info->stacked_in_secure != 0U) ? "Secure" : "Non-secure");
    PRINTF("align word present = %s\r\n", (info->stack_align_word != 0U) ? "yes" : "no");
    PRINTF("min frame bytes    = 0x%x\r\n", info->total_frame_bytes_min);

    PRINTF("\r\n--- Fault Status Registers ---\r\n");
    PRINTF("CFSR               = 0x%x\r\n", info->cfsr);
    PRINTF("HFSR               = 0x%x\r\n", info->hfsr);
    PRINTF("DFSR               = 0x%x\r\n", info->dfsr);
    PRINTF("AFSR               = 0x%x\r\n", info->afsr);
    PRINTF("SHCSR              = 0x%x\r\n", info->shcsr);

    if ((info->cfsr & CFSR_MMARVALID_Msk) != 0U)
    {
        PRINTF("MMFAR              = 0x%x (valid)\r\n", info->mmfar);
    }
    if ((info->cfsr & CFSR_BFARVALID_Msk) != 0U)
    {
        PRINTF("BFAR               = 0x%x (valid)\r\n", info->bfar);
    }

    PRINTF("\r\n--- HFSR Flags ---\r\n");
    if ((info->hfsr & SCB_HFSR_VECTTBL_Msk) != 0U)  PRINTF("HFSR: Vector table read fault\r\n");
    if ((info->hfsr & SCB_HFSR_FORCED_Msk)  != 0U)  PRINTF("HFSR: Forced escalation\r\n");
    if ((info->hfsr & SCB_HFSR_DEBUGEVT_Msk) != 0U) PRINTF("HFSR: Debug event\r\n");

    PRINTF("\r\n--- Fault Causes (CFSR) ---\r\n");
    if ((info->cfsr & CFSR_DIVBYZERO_Msk)   != 0U) PRINTF("Cause: divide by zero\r\n");
    if ((info->cfsr & CFSR_UNALIGNED_Msk)   != 0U) PRINTF("Cause: unaligned access\r\n");
    if ((info->cfsr & CFSR_STKOF_Msk)       != 0U) PRINTF("Cause: stack overflow\r\n");
    if ((info->cfsr & CFSR_NOCP_Msk)        != 0U) PRINTF("Cause: coprocessor disabled or unavailable\r\n");
    if ((info->cfsr & CFSR_INVPC_Msk)       != 0U) PRINTF("Cause: invalid EXC_RETURN or invalid PC on exception return\r\n");
    if ((info->cfsr & CFSR_INVSTATE_Msk)    != 0U) PRINTF("Cause: invalid state\r\n");
    if ((info->cfsr & CFSR_UNDEFINSTR_Msk)  != 0U) PRINTF("Cause: undefined instruction\r\n");
    if ((info->cfsr & CFSR_IBUSERR_Msk)     != 0U) PRINTF("Cause: instruction bus fault\r\n");
    if ((info->cfsr & CFSR_PRECISERR_Msk)   != 0U) PRINTF("Cause: precise data bus fault\r\n");
    if ((info->cfsr & CFSR_IMPRECISERR_Msk) != 0U) PRINTF("Cause: imprecise data bus fault\r\n");
    if ((info->cfsr & CFSR_IACCVIOL_Msk)    != 0U) PRINTF("Cause: instruction access violation\r\n");
    if ((info->cfsr & CFSR_DACCVIOL_Msk)    != 0U) PRINTF("Cause: data access violation\r\n");
    if ((info->cfsr & CFSR_MSTKERR_Msk)     != 0U) PRINTF("Cause: MemManage stacking error\r\n");
    if ((info->cfsr & CFSR_MUNSTKERR_Msk)   != 0U) PRINTF("Cause: MemManage unstacking error\r\n");
    if ((info->cfsr & CFSR_MLSPERR_Msk)     != 0U) PRINTF("Cause: MemManage lazy FP state preservation error\r\n");
    if ((info->cfsr & CFSR_STKERR_Msk)      != 0U) PRINTF("Cause: BusFault stacking error\r\n");
    if ((info->cfsr & CFSR_UNSTKERR_Msk)    != 0U) PRINTF("Cause: BusFault unstacking error\r\n");
    if ((info->cfsr & CFSR_LSPERR_Msk)      != 0U) PRINTF("Cause: BusFault lazy FP state preservation error\r\n");

#if defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
    if (info->sfsr != 0U)
    {
        PRINTF("\r\n--- Secure Fault Status ---\r\n");
        PRINTF("SFSR               = 0x%x\r\n", info->sfsr);

        if ((info->sfsr & SAU_SFSR_INVEP_Msk)    != 0U) PRINTF("SecureFault: Invalid entry point\r\n");
        if ((info->sfsr & SAU_SFSR_INVIS_Msk)    != 0U) PRINTF("SecureFault: Invalid integrity signature\r\n");
        if ((info->sfsr & SAU_SFSR_INVER_Msk)    != 0U) PRINTF("SecureFault: Invalid exception return\r\n");
        if ((info->sfsr & SAU_SFSR_AUVIOL_Msk)   != 0U) PRINTF("SecureFault: Attribution unit violation\r\n");
        if ((info->sfsr & SAU_SFSR_INVTRAN_Msk)  != 0U) PRINTF("SecureFault: Invalid transition\r\n");
        if ((info->sfsr & SAU_SFSR_LSPERR_Msk)   != 0U) PRINTF("SecureFault: Lazy state preservation error\r\n");
        if ((info->sfsr & SAU_SFSR_LSERR_Msk)    != 0U) PRINTF("SecureFault: Lazy state error\r\n");

        if ((info->sfsr & SAU_SFSR_SFARVALID_Msk) != 0U)
        {
            PRINTF("SFAR               = 0x%x (valid)\r\n", info->sfar);
        }
    }
#endif

    PRINTF("\r\n--- Call Stack Hints ---\r\n");
    PRINTF("PC                 = 0x%x\r\n", info->pc);
    PRINTF("LR                 = 0x%x\r\n", info->lr);

    PRINTF("============================================\r\n");
}
#endif

/*******************************************************************************
 * Common handler
 ******************************************************************************/

__attribute__((used))
static void FaultHandler_Common_C(fault_source_t source,
                                  uint32_t *stacked_frame,
                                  uint32_t exc_return,
                                  uint32_t msp,
                                  uint32_t psp)
{
    volatile hardfault_info_t *info = &gHardFaultInfo;

    FaultInfo_Capture(info, source, stacked_frame, exc_return, msp, psp);

    __DSB();
    __ISB();

#if (!defined(SDK_DEBUGCONSOLE) || (SDK_DEBUGCONSOLE != DEBUGCONSOLE_DISABLE))
    PrintFaultInfo(info);
#endif

    __BKPT(1);

    while (1)
    {
        __NOP();
    }
}

/*******************************************************************************
 * C entry points
 ******************************************************************************/

__attribute__((used, weak))
void HardFault_Handler_C(uint32_t *stacked_frame, uint32_t exc_return, uint32_t msp, uint32_t psp)
{
    FaultHandler_Common_C(kFaultSourceHardFault, stacked_frame, exc_return, msp, psp);
}

__attribute__((used, weak))
void MemManage_Handler_C(uint32_t *stacked_frame, uint32_t exc_return, uint32_t msp, uint32_t psp)
{
    FaultHandler_Common_C(kFaultSourceMemManage, stacked_frame, exc_return, msp, psp);
}

__attribute__((used, weak))
void BusFault_Handler_C(uint32_t *stacked_frame, uint32_t exc_return, uint32_t msp, uint32_t psp)
{
    FaultHandler_Common_C(kFaultSourceBusFault, stacked_frame, exc_return, msp, psp);
}

__attribute__((used, weak))
void UsageFault_Handler_C(uint32_t *stacked_frame, uint32_t exc_return, uint32_t msp, uint32_t psp)
{
    FaultHandler_Common_C(kFaultSourceUsageFault, stacked_frame, exc_return, msp, psp);
}

#if defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
__attribute__((used, weak))
void SecureFault_Handler_C(uint32_t *stacked_frame, uint32_t exc_return, uint32_t msp, uint32_t psp)
{
    FaultHandler_Common_C(kFaultSourceSecureFault, stacked_frame, exc_return, msp, psp);
}
#endif

/*******************************************************************************
 * Naked exception wrappers
 ******************************************************************************/

/*
 * When building with Trusted Firmware-M (TF-M), the Secure Processing Environment (SPE)
 * already provides its own exception handlers (HardFault, MemManage, BusFault, etc.)
 * as part of the secure firmware.
 *
 * In that case (CONFIG_TFM_BUILDING_SPE defined), we must NOT define our own handlers
 * here, otherwise we would conflict with TF-M’s vector table and cause linker errors
 * or undefined behavior.
 *
 * Therefore, these handlers are only compiled when NOT building the TF-M secure firmware.
 */
#ifndef CONFIG_TFM_BUILDING_SPE

__attribute__((used, weak))
void HardFault_Handler(void)
{
    __asm volatile(
        "mov   r1, lr              \n"
        "mrs   r2, msp             \n"
        "mrs   r3, psp             \n"
        "tst   r1, #4              \n"
        "ite   eq                  \n"
        "mrseq r0, msp             \n"
        "mrsne r0, psp             \n"
        "b     HardFault_Handler_C \n");
}

__attribute__((used, weak))
void MemManage_Handler(void)
{
    __asm volatile(
        "mov   r1, lr              \n"
        "mrs   r2, msp             \n"
        "mrs   r3, psp             \n"
        "tst   r1, #4              \n"
        "ite   eq                  \n"
        "mrseq r0, msp             \n"
        "mrsne r0, psp             \n"
        "b     MemManage_Handler_C \n");
}

__attribute__((used, weak))
void BusFault_Handler(void)
{
    __asm volatile(
        "mov   r1, lr             \n"
        "mrs   r2, msp            \n"
        "mrs   r3, psp            \n"
        "tst   r1, #4             \n"
        "ite   eq                 \n"
        "mrseq r0, msp            \n"
        "mrsne r0, psp            \n"
        "b     BusFault_Handler_C \n");
}

__attribute__((used, weak))
void UsageFault_Handler(void)
{
    __asm volatile(
        "mov   r1, lr               \n"
        "mrs   r2, msp              \n"
        "mrs   r3, psp              \n"
        "tst   r1, #4               \n"
        "ite   eq                   \n"
        "mrseq r0, msp              \n"
        "mrsne r0, psp              \n"
        "b     UsageFault_Handler_C \n");
}

#if defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
__attribute__((used, weak))
void SecureFault_Handler(void)
{
    __asm volatile(
        "mov   r1, lr                \n"
        "mrs   r2, msp               \n"
        "mrs   r3, psp               \n"
        "tst   r1, #4                \n"
        "ite   eq                    \n"
        "mrseq r0, msp               \n"
        "mrsne r0, psp               \n"
        "b     SecureFault_Handler_C \n");
}
#endif

#endif /* !CONFIG_TFM_BUILDING_SPE */
#endif /* IMXRTL3459AAA_cm55_core0_SERIES */
