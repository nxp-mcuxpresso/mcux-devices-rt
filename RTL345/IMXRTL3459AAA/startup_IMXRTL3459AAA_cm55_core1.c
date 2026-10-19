//*****************************************************************************
// IMXRTL3459AAA_cm55_core1 startup code
//
// Version : 151026
//*****************************************************************************
//
// Copyright 2016-2026 NXP
//
// SPDX-License-Identifier: BSD-3-Clause
//*****************************************************************************
#include <stdint.h>

#if defined(DEBUG)
#if defined(__GNUC__)
#pragma GCC push_options
#pragma GCC optimize("Og")
#endif //(__GNUC__)
#endif //(DEBUG)

#if defined(__cplusplus)
#if defined(__MCUXPRESSO)
#if defined(__REDLIB__)
#error Redlib does not support C++
#else
//*****************************************************************************
//
// The entry point for the C++ library startup
//
//*****************************************************************************
extern "C" {
extern void __libc_init_array(void);
}
#endif //(__REDLIB__)
#endif //(__MCUXPRESSO)
#endif //(__cplusplus)

#define WEAK __attribute__((weak))
#if defined(__MCUXPRESSO)
#define WEAK_AV __attribute__((weak, section(".after_vectors")))
#else
#define WEAK_AV __attribute__((weak))
#endif //(__MCUXPRESSO)
#define ALIAS(f) __attribute__((weak, alias(#f)))

//*****************************************************************************
#if defined(__cplusplus)
extern "C" {
#endif //(__cplusplus)

//*****************************************************************************
// Variable to store CRP value in. Will be placed automatically
// by the linker when "Enable Code Read Protect" selected.
// See crp.h header for more information
//*****************************************************************************
//*****************************************************************************
// Declaration of external SystemInit function
//*****************************************************************************
extern void SystemInit(void);

//*****************************************************************************
// Forward declaration of the core exception handlers.
// When the application defines a handler (with the same name), this will
// automatically take precedence over these weak definitions.
// If your application is a C++ one, then any interrupt handlers defined
// in C++ files within in your main application will need to have C linkage
// rather than C++ linkage. To do this, make sure that you are using extern "C"
// { .... } around the interrupt handler within your main application code.
//*****************************************************************************
#if defined(__MCUXPRESSO)
void ResetISR(void);
#else
void Reset_Handler(void);
#endif //(__MCUXPRESSO)
void Reset_Handler_C(void);
WEAK void NMI_Handler(void);
WEAK void HardFault_Handler(void);
WEAK void MemManage_Handler(void);
WEAK void BusFault_Handler(void);
WEAK void UsageFault_Handler(void);
WEAK void SecureFault_Handler(void);
WEAK void SVC_Handler(void);
WEAK void DebugMon_Handler(void);
WEAK void PendSV_Handler(void);
WEAK void SysTick_Handler(void);
WEAK void DefaultISR(void);

//*****************************************************************************
// Forward declaration of the application IRQ handlers. When the application
// defines a handler (with the same name), this will automatically take
// precedence over weak definitions below
//*****************************************************************************
WEAK void ERROR_EVENT_IRQHandler(void);
WEAK void EDMA_ERROR_IRQHandler(void);
WEAK void EDMA_CH0_IRQHandler(void);
WEAK void EDMA_CH1_IRQHandler(void);
WEAK void EDMA_CH2_IRQHandler(void);
WEAK void EDMA_CH3_IRQHandler(void);
WEAK void EDMA_CH4_IRQHandler(void);
WEAK void EDMA_CH5_IRQHandler(void);
WEAK void EDMA_CH6_IRQHandler(void);
WEAK void EDMA_CH7_IRQHandler(void);
WEAK void EDMA_CH8_IRQHandler(void);
WEAK void EDMA_CH9_IRQHandler(void);
WEAK void EDMA_CH10_IRQHandler(void);
WEAK void EDMA_CH11_IRQHandler(void);
WEAK void EDMA_CH12_IRQHandler(void);
WEAK void EDMA_CH13_IRQHandler(void);
WEAK void EDMA_CH14_IRQHandler(void);
WEAK void EDMA_CH15_IRQHandler(void);
WEAK void EDMA_CH16_IRQHandler(void);
WEAK void EDMA_CH17_IRQHandler(void);
WEAK void EDMA_CH18_IRQHandler(void);
WEAK void EDMA_CH19_IRQHandler(void);
WEAK void EDMA_CH20_IRQHandler(void);
WEAK void EDMA_CH21_IRQHandler(void);
WEAK void EDMA_CH22_IRQHandler(void);
WEAK void EDMA_CH23_IRQHandler(void);
WEAK void EDMA_CH24_IRQHandler(void);
WEAK void EDMA_CH25_IRQHandler(void);
WEAK void EDMA_CH26_IRQHandler(void);
WEAK void EDMA_CH27_IRQHandler(void);
WEAK void EDMA_CH28_IRQHandler(void);
WEAK void EDMA_CH29_IRQHandler(void);
WEAK void EDMA_CH30_IRQHandler(void);
WEAK void EDMA_CH31_IRQHandler(void);
WEAK void ETHOS_U85_IRQHandler(void);
WEAK void NSS_EVENT0_IRQHandler(void);
WEAK void NSS_EVENT1_IRQHandler(void);
WEAK void NSS_EVENT2_IRQHandler(void);
WEAK void NSS_EVENT3_IRQHandler(void);
WEAK void NSS_EVENT4_IRQHandler(void);
WEAK void NSS_EVENT5_IRQHandler(void);
WEAK void NSS_EVENT6_IRQHandler(void);
WEAK void NSS_EVENT7_IRQHandler(void);

//*****************************************************************************
// Forward declaration of the driver IRQ handlers. These are aliased
// to the DefaultISR, which is a 'forever' loop. When the driver
// defines a handler (with the same name), this will automatically take
// precedence over these weak definitions
//*****************************************************************************
void ERROR_EVENT_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_ERROR_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH0_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH1_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH2_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH3_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH4_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH5_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH6_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH7_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH8_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH9_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH10_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH11_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH12_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH13_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH14_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH15_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH16_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH17_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH18_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH19_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH20_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH21_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH22_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH23_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH24_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH25_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH26_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH27_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH28_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH29_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH30_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA_CH31_DriverIRQHandler(void) ALIAS(DefaultISR);
void ETHOS_U85_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_EVENT0_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_EVENT1_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_EVENT2_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_EVENT3_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_EVENT4_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_EVENT5_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_EVENT6_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_EVENT7_DriverIRQHandler(void) ALIAS(DefaultISR);

//*****************************************************************************
// The entry point for the application.
// __main() is the entry point for Redlib based applications
// main() is the entry point for Newlib based applications
//*****************************************************************************
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
extern void __main(void);
#elif defined(__MCUXPRESSO)
#if defined(__REDLIB__)
extern void __main(void);
#else
extern int main(void);
#endif //(__REDLIB__)
#elif defined(__ICCARM__)
extern void __iar_program_start(void);
#elif defined(__GNUC__)
#if defined(__REDLIB__)
extern void __main(void);
#else
extern void _start(void);
#endif //(__REDLIB__)
#else
#error Unsupported toolchain!
#endif //(__MCUXPRESSO)

//*****************************************************************************
// External declaration for the pointer from the Linker Script
//*****************************************************************************
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
extern uint32_t Image$$ARM_LIB_STACK$$ZI$$Base[];
extern uint32_t Image$$ARM_LIB_STACK$$ZI$$Limit[];
#define _vStackTop  Image$$ARM_LIB_STACK$$ZI$$Limit
#define _vStackBase Image$$ARM_LIB_STACK$$ZI$$Base
#elif defined(__MCUXPRESSO)
extern void _vStackTop(void);
extern void _vStackBase(void);
#define Reset_Handler ResetISR // To be compatible with other compilers
#elif defined(__ICCARM__)
#pragma segment = "CSTACK"
#define _vStackTop  __section_end("CSTACK")
#define _vStackBase __section_begin("CSTACK")
#elif defined(__GNUC__)
extern uint32_t __StackTop[];
extern uint32_t __StackLimit[];

#define _vStackTop  __StackTop
#define _vStackBase __StackLimit

/*
 * Data section ROM and RAM addresses
 */
extern uint32_t __etext[];
extern uint32_t __data_start__[];
extern uint32_t __data_end__[];
extern uint32_t __bss_start__[];
extern uint32_t __bss_end__[];

#else
#error Unsupported toolchain!
#endif //(__CC_ARM) || (__ARMCC_VERSION)

//*****************************************************************************
#if defined(__cplusplus)
} // extern "C"
#endif //(__cplusplus)
//*****************************************************************************
// The vector table.
// This relies on the linker script to place at correct location in memory.
//*****************************************************************************
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
extern void (*const __Vectors[])(void);
#define __vector_table __Vectors
__attribute__((used, section(".isr_vector"))) void (*const __Vectors[])(void) = {
#elif defined(__MCUXPRESSO)
extern void (*const g_pfnVectors[])(void);
extern void *__Vectors __attribute__((alias("g_pfnVectors")));
#define __vector_table g_pfnVectors
__attribute__((used, section(".isr_vector"))) void (*const g_pfnVectors[])(void) = {
#elif defined(__ICCARM__)
extern void (*const __vector_table[])(void);
/* The vector table is not needed for initialization. */
extern void (*const __iar_init$$done[])(void) __attribute__((alias("__vector_table")));
__attribute__((used, section(".intvec"))) void (*const __vector_table[])(void) = {
#elif defined(__GNUC__)
extern void (*const __isr_vector[])(void);
#define __vector_table __isr_vector
__attribute__((used, section(".isr_vector"))) void (*const __isr_vector[])(void) = {
#else
#error Unsupported toolchain!
#endif //(__CC_ARM) || (__ARMCC_VERSION)
    // Core Level - CM55
    (void (*)())((uint32_t)_vStackTop), // The initial stack pointer
    Reset_Handler,                      // The reset handler

    NMI_Handler,                        // NMI Handler
    HardFault_Handler,                  // Hard Fault Handler
    MemManage_Handler,                  // MPU Fault Handler
    BusFault_Handler,                   // Bus Fault Handler
    UsageFault_Handler,                 // Usage Fault Handler
    SecureFault_Handler,                // Secure Fault Handler
    0,                                  // Reserved
    0,                                  // Reserved
    0,                                  // Reserved
    SVC_Handler,                        // SVCall Handler
    DebugMon_Handler,                   // Debug Monitor Handler
    0,                                  // Reserved
    PendSV_Handler,                     // PendSV Handler
    SysTick_Handler,                    // SysTick Handler

    // Chip Level - IMXRTL3459AAA_cm55_core1
    ERROR_EVENT_IRQHandler, // 16: Error event
    EDMA_ERROR_IRQHandler,  // 17: eDMA error irq
    EDMA_CH0_IRQHandler,    // 18: eDMA done channel 0
    EDMA_CH1_IRQHandler,    // 19: eDMA done channel 1
    EDMA_CH2_IRQHandler,    // 20: eDMA done channel 2
    EDMA_CH3_IRQHandler,    // 21: eDMA done channel 3
    EDMA_CH4_IRQHandler,    // 22: eDMA done channel 4
    EDMA_CH5_IRQHandler,    // 23: eDMA done channel 5
    EDMA_CH6_IRQHandler,    // 24: eDMA done channel 6
    EDMA_CH7_IRQHandler,    // 25: eDMA done channel 7
    EDMA_CH8_IRQHandler,    // 26: eDMA done channel 8
    EDMA_CH9_IRQHandler,    // 27: eDMA done channel 9
    EDMA_CH10_IRQHandler,   // 28: eDMA done channel 10
    EDMA_CH11_IRQHandler,   // 29: eDMA done channel 11
    EDMA_CH12_IRQHandler,   // 30: eDMA done channel 12
    EDMA_CH13_IRQHandler,   // 31: eDMA done channel 13
    EDMA_CH14_IRQHandler,   // 32: eDMA done channel 14
    EDMA_CH15_IRQHandler,   // 33: eDMA done channel 15
    EDMA_CH16_IRQHandler,   // 34: eDMA done channel 16
    EDMA_CH17_IRQHandler,   // 35: eDMA done channel 17
    EDMA_CH18_IRQHandler,   // 36: eDMA done channel 18
    EDMA_CH19_IRQHandler,   // 37: eDMA done channel 19
    EDMA_CH20_IRQHandler,   // 38: eDMA done channel 20
    EDMA_CH21_IRQHandler,   // 39: eDMA done channel 21
    EDMA_CH22_IRQHandler,   // 40: eDMA done channel 22
    EDMA_CH23_IRQHandler,   // 41: eDMA done channel 23
    EDMA_CH24_IRQHandler,   // 42: eDMA done channel 24
    EDMA_CH25_IRQHandler,   // 43: eDMA done channel 25
    EDMA_CH26_IRQHandler,   // 44: eDMA done channel 26
    EDMA_CH27_IRQHandler,   // 45: eDMA done channel 27
    EDMA_CH28_IRQHandler,   // 46: eDMA done channel 28
    EDMA_CH29_IRQHandler,   // 47: eDMA done channel 29
    EDMA_CH30_IRQHandler,   // 48: eDMA done channel 30
    EDMA_CH31_IRQHandler,   // 49: eDMA done channel 31
    ETHOS_U85_IRQHandler,   // 50: ETHOS_U85 interrupt
    NSS_EVENT0_IRQHandler,  // 51: NSS_EVENT0 interrupt
    NSS_EVENT1_IRQHandler,  // 52: NSS_EVENT1 interrupt
    NSS_EVENT2_IRQHandler,  // 53: NSS_EVENT2 interrupt
    NSS_EVENT3_IRQHandler,  // 54: NSS_EVENT3 interrupt
    NSS_EVENT4_IRQHandler,  // 55: NSS_EVENT4 interrupt
    NSS_EVENT5_IRQHandler,  // 56: NSS_EVENT5 interrupt
    NSS_EVENT6_IRQHandler,  // 57: NSS_EVENT6 interrupt
    NSS_EVENT7_IRQHandler,  // 58: NSS_EVENT7 interrupt
};                                     /* End of __vector_table */

#if defined(__MCUXPRESSO)
#if defined(ENABLE_RAM_VECTOR_TABLE)
extern void *__VECTOR_TABLE __attribute__((alias("g_pfnVectors")));
void (*__VECTOR_RAM[sizeof(g_pfnVectors) / 4])(void) __attribute__((aligned(128)));
unsigned int __RAM_VECTOR_TABLE_SIZE_BYTES = sizeof(g_pfnVectors);
#endif //(ENABLE_RAM_VECTOR_TABLE)

//*****************************************************************************
// Functions to carry out the initialization of RW and BSS data sections. These
// are written as separate functions rather than being inlined within the
// ResetISR() function in order to cope with MCUs with multiple banks of
// memory.
//*****************************************************************************
__attribute__((section(".after_vectors.init_data"))) void data_init(unsigned int romstart,
                                                                    unsigned int start,
                                                                    unsigned int len)
{
    unsigned int *pulDest = (unsigned int *)start;
    unsigned int *pulSrc  = (unsigned int *)romstart;
    unsigned int loop;
    for (loop = 0; loop < len; loop = loop + 4)
        *pulDest++ = *pulSrc++;
}

__attribute__((section(".after_vectors.init_bss"))) void bss_init(unsigned int start, unsigned int len)
{
    unsigned int *pulDest = (unsigned int *)start;
    unsigned int loop;
    for (loop = 0; loop < len; loop = loop + 4)
        *pulDest++ = 0;
}

//*****************************************************************************
// The following symbols are constructs generated by the linker, indicating
// the location of various points in the "Global Section Table". This table is
// created by the linker via the Code Red managed linker script mechanism. It
// contains the load address, execution address and length of each RW data
// section and the execution and length of each BSS (zero initialized) section.
//*****************************************************************************
extern unsigned int __data_section_table;
extern unsigned int __data_section_table_end;
extern unsigned int __bss_section_table;
extern unsigned int __bss_section_table_end;
#endif //(__MCUXPRESSO)

//*****************************************************************************
// Reset entry point for your code.
// Sets up a simple runtime environment and initializes the C/C++
// library.
//*****************************************************************************
void Reset_Handler_C(void)
{
#if !defined(__NO_SYSTEM_INIT)
    SystemInit();
#endif //(__NO_SYSTEM_INIT)

#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
    __asm volatile ("cpsie i");
    __main();
#elif defined(__MCUXPRESSO)
    //
    // Copy the data sections from flash to SRAM.
    //
    unsigned int LoadAddr, ExeAddr, SectionLen;
    unsigned int *SectionTableAddr;

    // Load base address of Global Section Table
    SectionTableAddr = &__data_section_table;

    // Copy the data sections from flash to SRAM.
    while (SectionTableAddr < &__data_section_table_end)
    {
        LoadAddr   = *SectionTableAddr++;
        ExeAddr    = *SectionTableAddr++;
        SectionLen = *SectionTableAddr++;
        data_init(LoadAddr, ExeAddr, SectionLen);
    }

    // At this point, SectionTableAddr = &__bss_section_table;
    // Zero fill the bss segment
    while (SectionTableAddr < &__bss_section_table_end)
    {
        ExeAddr    = *SectionTableAddr++;
        SectionLen = *SectionTableAddr++;
        bss_init(ExeAddr, SectionLen);
    }

#if defined(__cplusplus)
    //
    // Call C++ library initialisation
    //
    __libc_init_array();
#endif //(__cplusplus)

    // Reenable interrupts
    __asm volatile("cpsie i");

#if defined(__REDLIB__)
    // Call the Redlib library, which in turn calls main()
    __main();
#else
    main();
#endif //(__REDLIB__)
#elif defined(__ICCARM__)
    // Reenable interrupts
    __asm volatile("cpsie i");

    __iar_program_start();
#elif defined(__GNUC__)
    /*     Loop to copy data from read only memory to RAM. The ranges
     *      of copy from/to are specified by following symbols evaluated in
     *      linker script.
     *      *. __etext/_data_start__/__data_end__
     *      Note: All must be aligned to 4 bytes boundary.
     */
    uint32_t *pDataSrc, *pDataDest;

    pDataSrc  = (uint32_t *)__etext;
    pDataDest = (uint32_t *)__data_start__;
    while (pDataDest < __data_end__)
    {
        *pDataDest++ = *pDataSrc++;
    }
#if defined(__STARTUP_CLEAR_BSS)
    /*     This part of work usually is done in C library startup code. Otherwise,
     *     define this macro to enable it in this startup.
     *
     *     Loop to zero out BSS section, which uses following symbols
     *     in linker script:
     *      __bss_start__: start of BSS section. Must align to 4
     *      __bss_end__: end of BSS section. Must align to 4
     */
    pDataDest = (uint32_t *)__bss_start__;
    while (pDataDest < __bss_end__)
    {
        *pDataDest++ = 0U;
    }
#endif //(__STARTUP_CLEAR_BSS)

    __asm volatile("cpsie i");

#if !defined(__START)
#if defined(__REDLIB__)
#define __START __main
#else
#define __START _start
#endif //(__REDLIB__)
#endif //(__START)

    __START();

#endif //(__GNUC__)

    //
    // main() shouldn't return, but if it does, we'll just enter an infinite loop
    //
#if !defined(__ARMCC_VERSION) && !defined(__CC_ARM)
    while (1)
    {
        ;
    }
#endif //!(__ARMCC_VERSION) && !(__CC_ARM)
}

#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
__attribute__ ((used, section("InRoot$$Sections")))
__attribute__ ((naked))
#elif defined(__MCUXPRESSO)
__attribute__ ((naked, section(".after_vectors.reset")))
#elif defined(__ICCARM__)
__stackless
#elif defined(__GNUC__)
__attribute__ ((naked))
#endif //(__CC_ARM) || (__ARMCC_VERSION)
void Reset_Handler(void)
{
    // Disable interrupts
    __asm volatile("cpsid i");
    // Config VTOR & MSP register
    __asm volatile(
        "LDR R0, =0xE000ED08  \n"
        "STR %0, [R0]         \n"
        "LDR R1, [%0]         \n"
        "MSR MSP, R1          \n"
        "MSR MSPLIM, %1       \n"
        :
        : "r"(__vector_table), "r"(_vStackBase)
        : "r0", "r1");

    // Call Reset_Handler_C
    __asm volatile ("LDR R0, =Reset_Handler_C \n"
                    "BLX R0                   \n"
                    );
}

//*****************************************************************************
// Default core exception handlers. Override the ones here by defining your own
// handler routines in your application code.
//*****************************************************************************
WEAK_AV void NMI_Handler(void)
{
    while (1)
    {
    }
}

WEAK_AV void HardFault_Handler(void)
{
    while (1)
    {
    }
}

WEAK_AV void MemManage_Handler(void)
{
    while (1)
    {
    }
}

WEAK_AV void BusFault_Handler(void)
{
    while (1)
    {
    }
}

WEAK_AV void UsageFault_Handler(void)
{
    while (1)
    {
    }
}

WEAK_AV void SecureFault_Handler(void)
{
    while (1)
    {
    }
}

WEAK_AV void SVC_Handler(void)
{
    while (1)
    {
    }
}

WEAK_AV void DebugMon_Handler(void)
{
    while (1)
    {
    }
}

WEAK_AV void PendSV_Handler(void)
{
    while (1)
    {
    }
}

WEAK_AV void SysTick_Handler(void)
{
    while (1)
    {
    }
}

//*****************************************************************************
// Processor ends up here if an unexpected interrupt occurs or a specific
// handler is not present in the application code.
//*****************************************************************************
WEAK_AV void DefaultISR(void)
{
    while (1)
    {
    }
}

//*****************************************************************************
// Default application exception handlers. Override the ones here by defining
// your own handler routines in your application code. These routines call
// driver exception handlers or DefaultISR() if no driver exception
// handler is included.
//*****************************************************************************
WEAK void ERROR_EVENT_IRQHandler(void)
{
    ERROR_EVENT_DriverIRQHandler();
}

WEAK void EDMA_ERROR_IRQHandler(void)
{
    EDMA_ERROR_DriverIRQHandler();
}

WEAK void EDMA_CH0_IRQHandler(void)
{
    EDMA_CH0_DriverIRQHandler();
}

WEAK void EDMA_CH1_IRQHandler(void)
{
    EDMA_CH1_DriverIRQHandler();
}

WEAK void EDMA_CH2_IRQHandler(void)
{
    EDMA_CH2_DriverIRQHandler();
}

WEAK void EDMA_CH3_IRQHandler(void)
{
    EDMA_CH3_DriverIRQHandler();
}

WEAK void EDMA_CH4_IRQHandler(void)
{
    EDMA_CH4_DriverIRQHandler();
}

WEAK void EDMA_CH5_IRQHandler(void)
{
    EDMA_CH5_DriverIRQHandler();
}

WEAK void EDMA_CH6_IRQHandler(void)
{
    EDMA_CH6_DriverIRQHandler();
}

WEAK void EDMA_CH7_IRQHandler(void)
{
    EDMA_CH7_DriverIRQHandler();
}

WEAK void EDMA_CH8_IRQHandler(void)
{
    EDMA_CH8_DriverIRQHandler();
}

WEAK void EDMA_CH9_IRQHandler(void)
{
    EDMA_CH9_DriverIRQHandler();
}

WEAK void EDMA_CH10_IRQHandler(void)
{
    EDMA_CH10_DriverIRQHandler();
}

WEAK void EDMA_CH11_IRQHandler(void)
{
    EDMA_CH11_DriverIRQHandler();
}

WEAK void EDMA_CH12_IRQHandler(void)
{
    EDMA_CH12_DriverIRQHandler();
}

WEAK void EDMA_CH13_IRQHandler(void)
{
    EDMA_CH13_DriverIRQHandler();
}

WEAK void EDMA_CH14_IRQHandler(void)
{
    EDMA_CH14_DriverIRQHandler();
}

WEAK void EDMA_CH15_IRQHandler(void)
{
    EDMA_CH15_DriverIRQHandler();
}

WEAK void EDMA_CH16_IRQHandler(void)
{
    EDMA_CH16_DriverIRQHandler();
}

WEAK void EDMA_CH17_IRQHandler(void)
{
    EDMA_CH17_DriverIRQHandler();
}

WEAK void EDMA_CH18_IRQHandler(void)
{
    EDMA_CH18_DriverIRQHandler();
}

WEAK void EDMA_CH19_IRQHandler(void)
{
    EDMA_CH19_DriverIRQHandler();
}

WEAK void EDMA_CH20_IRQHandler(void)
{
    EDMA_CH20_DriverIRQHandler();
}

WEAK void EDMA_CH21_IRQHandler(void)
{
    EDMA_CH21_DriverIRQHandler();
}

WEAK void EDMA_CH22_IRQHandler(void)
{
    EDMA_CH22_DriverIRQHandler();
}

WEAK void EDMA_CH23_IRQHandler(void)
{
    EDMA_CH23_DriverIRQHandler();
}

WEAK void EDMA_CH24_IRQHandler(void)
{
    EDMA_CH24_DriverIRQHandler();
}

WEAK void EDMA_CH25_IRQHandler(void)
{
    EDMA_CH25_DriverIRQHandler();
}

WEAK void EDMA_CH26_IRQHandler(void)
{
    EDMA_CH26_DriverIRQHandler();
}

WEAK void EDMA_CH27_IRQHandler(void)
{
    EDMA_CH27_DriverIRQHandler();
}

WEAK void EDMA_CH28_IRQHandler(void)
{
    EDMA_CH28_DriverIRQHandler();
}

WEAK void EDMA_CH29_IRQHandler(void)
{
    EDMA_CH29_DriverIRQHandler();
}

WEAK void EDMA_CH30_IRQHandler(void)
{
    EDMA_CH30_DriverIRQHandler();
}

WEAK void EDMA_CH31_IRQHandler(void)
{
    EDMA_CH31_DriverIRQHandler();
}

WEAK void ETHOS_U85_IRQHandler(void)
{
    ETHOS_U85_DriverIRQHandler();
}

WEAK void NSS_EVENT0_IRQHandler(void)
{
    NSS_EVENT0_DriverIRQHandler();
}

WEAK void NSS_EVENT1_IRQHandler(void)
{
    NSS_EVENT1_DriverIRQHandler();
}

WEAK void NSS_EVENT2_IRQHandler(void)
{
    NSS_EVENT2_DriverIRQHandler();
}

WEAK void NSS_EVENT3_IRQHandler(void)
{
    NSS_EVENT3_DriverIRQHandler();
}

WEAK void NSS_EVENT4_IRQHandler(void)
{
    NSS_EVENT4_DriverIRQHandler();
}

WEAK void NSS_EVENT5_IRQHandler(void)
{
    NSS_EVENT5_DriverIRQHandler();
}

WEAK void NSS_EVENT6_IRQHandler(void)
{
    NSS_EVENT6_DriverIRQHandler();
}

WEAK void NSS_EVENT7_IRQHandler(void)
{
    NSS_EVENT7_DriverIRQHandler();
}

//*****************************************************************************

#if defined(DEBUG)
#if defined(__GNUC__)
#pragma GCC pop_options
#endif //(__GNUC__)
#endif //(DEBUG)
