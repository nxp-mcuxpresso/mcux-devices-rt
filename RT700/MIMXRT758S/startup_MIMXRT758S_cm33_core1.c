//*****************************************************************************
// MIMXRT758S_cm33_core1 startup code
//
// Version : 200525
//*****************************************************************************
//
// Copyright 2016-2025 NXP
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
WEAK void Reserved16_IRQHandler(void);
WEAK void Reserved17_IRQHandler(void);
WEAK void Reserved18_IRQHandler(void);
WEAK void FRO2_IRQHandler(void);
WEAK void GLIKEY4_IRQHandler(void);
WEAK void UTICK1_IRQHandler(void);
WEAK void MRT1_IRQHandler(void);
WEAK void CTIMER5_IRQHandler(void);
WEAK void CTIMER6_IRQHandler(void);
WEAK void CTIMER7_IRQHandler(void);
WEAK void LPI2C15_IRQHandler(void);
WEAK void LP_FLEXCOMM17_IRQHandler(void);
WEAK void LP_FLEXCOMM18_IRQHandler(void);
WEAK void LP_FLEXCOMM19_IRQHandler(void);
WEAK void LP_FLEXCOMM20_IRQHandler(void);
WEAK void ADC_IRQHandler(void);
WEAK void SDADC_IRQHandler(void);
WEAK void GLIKEY1_IRQHandler(void);
WEAK void ACMP_IRQHandler(void);
WEAK void PDM_EVENT_IRQHandler(void);
WEAK void HYPERVISOR_IRQHandler(void);
WEAK void SECURE_VIOLATION_IRQHandler(void);
WEAK void PDM_HWVAD_EVENT_IRQHandler(void);
WEAK void RTC1_ALARM_IRQHandler(void);
WEAK void RTC1_IRQHandler(void);
WEAK void HIFI1_IRQHandler(void);
WEAK void MU1_B_IRQHandler(void);
WEAK void Reserved43_IRQHandler(void);
WEAK void MU3_A_IRQHandler(void);
WEAK void PMC_IRQHandler(void);
WEAK void OS_EVENT_IRQHandler(void);
WEAK void USDHC0_IRQHandler(void);
WEAK void USDHC1_IRQHandler(void);
WEAK void I3C2_IRQHandler(void);
WEAK void USB0_IRQHandler(void);
WEAK void USB1_IRQHandler(void);
WEAK void WDT2_IRQHandler(void);
WEAK void WDT3_IRQHandler(void);
WEAK void USBPHY0_IRQHandler(void);
WEAK void Reserved55_IRQHandler(void);
WEAK void I3C3_IRQHandler(void);
WEAK void FLEXIO_IRQHandler(void);
WEAK void LCDIF_IRQHandler(void);
WEAK void VGPU_IRQHandler(void);
WEAK void MIPI_IRQHandler(void);
WEAK void EDMA2_CH0_IRQHandler(void);
WEAK void EDMA2_CH1_IRQHandler(void);
WEAK void EDMA2_CH2_IRQHandler(void);
WEAK void EDMA2_CH3_IRQHandler(void);
WEAK void EDMA2_CH4_IRQHandler(void);
WEAK void EDMA2_CH5_IRQHandler(void);
WEAK void EDMA2_CH6_IRQHandler(void);
WEAK void EDMA2_CH7_IRQHandler(void);
WEAK void EDMA3_CH0_IRQHandler(void);
WEAK void EDMA3_CH1_IRQHandler(void);
WEAK void EDMA3_CH2_IRQHandler(void);
WEAK void EDMA3_CH3_IRQHandler(void);
WEAK void EDMA3_CH4_IRQHandler(void);
WEAK void EDMA3_CH5_IRQHandler(void);
WEAK void EDMA3_CH6_IRQHandler(void);
WEAK void EDMA3_CH7_IRQHandler(void);
WEAK void GPIO80_IRQHandler(void);
WEAK void GPIO81_IRQHandler(void);
WEAK void GPIO90_IRQHandler(void);
WEAK void GPIO91_IRQHandler(void);
WEAK void GPIO100_IRQHandler(void);
WEAK void GPIO101_IRQHandler(void);
WEAK void Reserved83_IRQHandler(void);
WEAK void Reserved84_IRQHandler(void);
WEAK void PIN_INT0_IRQHandler(void);
WEAK void PIN_INT1_IRQHandler(void);
WEAK void PIN_INT2_IRQHandler(void);
WEAK void PIN_INT3_IRQHandler(void);
WEAK void SAI3_IRQHandler(void);
WEAK void XSPI2_IRQHandler(void);
WEAK void MMU2_IRQHandler(void);
WEAK void Reserved92_IRQHandler(void);
WEAK void GDET3_IRQHandler(void);
WEAK void CDOG3_IRQHandler(void);
WEAK void CDOG4_IRQHandler(void);
WEAK void Reserved96_IRQHandler(void);
WEAK void CPU1_IRQHandler(void);
WEAK void JPEGDEC_IRQHandler(void);
WEAK void PNGDEC_IRQHandler(void);
WEAK void Reserved100_IRQHandler(void);
WEAK void TEMPDET0_IRQHandler(void);
WEAK void TEMPDET1_IRQHandler(void);
WEAK void EZHV_IRQHandler(void);
WEAK void SLEEPCON1_IRQHandler(void);
WEAK void PVTS1_CPU1_IRQHandler(void);
WEAK void Reserved106_IRQHandler(void);
WEAK void PVTS1_HIFI1_IRQHandler(void);

//*****************************************************************************
// Forward declaration of the driver IRQ handlers. These are aliased
// to the DefaultISR, which is a 'forever' loop. When the driver
// defines a handler (with the same name), this will automatically take
// precedence over these weak definitions
//*****************************************************************************
void Reserved16_DriverIRQHandler(void) ALIAS(DefaultISR);
void Reserved17_DriverIRQHandler(void) ALIAS(DefaultISR);
void Reserved18_DriverIRQHandler(void) ALIAS(DefaultISR);
void FRO2_DriverIRQHandler(void) ALIAS(DefaultISR);
void GLIKEY4_DriverIRQHandler(void) ALIAS(DefaultISR);
void UTICK1_DriverIRQHandler(void) ALIAS(DefaultISR);
void MRT1_DriverIRQHandler(void) ALIAS(DefaultISR);
void CTIMER5_DriverIRQHandler(void) ALIAS(DefaultISR);
void CTIMER6_DriverIRQHandler(void) ALIAS(DefaultISR);
void CTIMER7_DriverIRQHandler(void) ALIAS(DefaultISR);
void LPI2C15_DriverIRQHandler(void) ALIAS(DefaultISR);
void LP_FLEXCOMM17_DriverIRQHandler(void) ALIAS(DefaultISR);
void LP_FLEXCOMM18_DriverIRQHandler(void) ALIAS(DefaultISR);
void LP_FLEXCOMM19_DriverIRQHandler(void) ALIAS(DefaultISR);
void LP_FLEXCOMM20_DriverIRQHandler(void) ALIAS(DefaultISR);
void ADC_DriverIRQHandler(void) ALIAS(DefaultISR);
void SDADC_DriverIRQHandler(void) ALIAS(DefaultISR);
void GLIKEY1_DriverIRQHandler(void) ALIAS(DefaultISR);
void ACMP_DriverIRQHandler(void) ALIAS(DefaultISR);
void PDM_EVENT_DriverIRQHandler(void) ALIAS(DefaultISR);
void HYPERVISOR_DriverIRQHandler(void) ALIAS(DefaultISR);
void SECURE_VIOLATION_DriverIRQHandler(void) ALIAS(DefaultISR);
void PDM_HWVAD_EVENT_DriverIRQHandler(void) ALIAS(DefaultISR);
void RTC1_ALARM_DriverIRQHandler(void) ALIAS(DefaultISR);
void RTC1_DriverIRQHandler(void) ALIAS(DefaultISR);
void HIFI1_DriverIRQHandler(void) ALIAS(DefaultISR);
void MU1_B_DriverIRQHandler(void) ALIAS(DefaultISR);
void Reserved43_DriverIRQHandler(void) ALIAS(DefaultISR);
void MU3_A_DriverIRQHandler(void) ALIAS(DefaultISR);
void PMC_DriverIRQHandler(void) ALIAS(DefaultISR);
void OS_EVENT_DriverIRQHandler(void) ALIAS(DefaultISR);
void USDHC0_DriverIRQHandler(void) ALIAS(DefaultISR);
void USDHC1_DriverIRQHandler(void) ALIAS(DefaultISR);
void I3C2_DriverIRQHandler(void) ALIAS(DefaultISR);
void USB0_DriverIRQHandler(void) ALIAS(DefaultISR);
void USB1_DriverIRQHandler(void) ALIAS(DefaultISR);
void WDT2_DriverIRQHandler(void) ALIAS(DefaultISR);
void WDT3_DriverIRQHandler(void) ALIAS(DefaultISR);
void USBPHY0_DriverIRQHandler(void) ALIAS(DefaultISR);
void Reserved55_DriverIRQHandler(void) ALIAS(DefaultISR);
void I3C3_DriverIRQHandler(void) ALIAS(DefaultISR);
void FLEXIO_DriverIRQHandler(void) ALIAS(DefaultISR);
void LCDIF_DriverIRQHandler(void) ALIAS(DefaultISR);
void VGPU_DriverIRQHandler(void) ALIAS(DefaultISR);
void MIPI_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA2_CH0_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA2_CH1_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA2_CH2_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA2_CH3_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA2_CH4_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA2_CH5_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA2_CH6_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA2_CH7_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA3_CH0_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA3_CH1_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA3_CH2_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA3_CH3_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA3_CH4_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA3_CH5_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA3_CH6_DriverIRQHandler(void) ALIAS(DefaultISR);
void EDMA3_CH7_DriverIRQHandler(void) ALIAS(DefaultISR);
void GPIO80_DriverIRQHandler(void) ALIAS(DefaultISR);
void GPIO81_DriverIRQHandler(void) ALIAS(DefaultISR);
void GPIO90_DriverIRQHandler(void) ALIAS(DefaultISR);
void GPIO91_DriverIRQHandler(void) ALIAS(DefaultISR);
void GPIO100_DriverIRQHandler(void) ALIAS(DefaultISR);
void GPIO101_DriverIRQHandler(void) ALIAS(DefaultISR);
void Reserved83_DriverIRQHandler(void) ALIAS(DefaultISR);
void Reserved84_DriverIRQHandler(void) ALIAS(DefaultISR);
void PIN_INT0_DriverIRQHandler(void) ALIAS(DefaultISR);
void PIN_INT1_DriverIRQHandler(void) ALIAS(DefaultISR);
void PIN_INT2_DriverIRQHandler(void) ALIAS(DefaultISR);
void PIN_INT3_DriverIRQHandler(void) ALIAS(DefaultISR);
void SAI3_DriverIRQHandler(void) ALIAS(DefaultISR);
void XSPI2_DriverIRQHandler(void) ALIAS(DefaultISR);
void MMU2_DriverIRQHandler(void) ALIAS(DefaultISR);
void Reserved92_DriverIRQHandler(void) ALIAS(DefaultISR);
void GDET3_DriverIRQHandler(void) ALIAS(DefaultISR);
void CDOG3_DriverIRQHandler(void) ALIAS(DefaultISR);
void CDOG4_DriverIRQHandler(void) ALIAS(DefaultISR);
void Reserved96_DriverIRQHandler(void) ALIAS(DefaultISR);
void CPU1_DriverIRQHandler(void) ALIAS(DefaultISR);
void JPEGDEC_DriverIRQHandler(void) ALIAS(DefaultISR);
void PNGDEC_DriverIRQHandler(void) ALIAS(DefaultISR);
void Reserved100_DriverIRQHandler(void) ALIAS(DefaultISR);
void TEMPDET0_DriverIRQHandler(void) ALIAS(DefaultISR);
void TEMPDET1_DriverIRQHandler(void) ALIAS(DefaultISR);
void EZHV_DriverIRQHandler(void) ALIAS(DefaultISR);
void SLEEPCON1_DriverIRQHandler(void) ALIAS(DefaultISR);
void PVTS1_CPU1_DriverIRQHandler(void) ALIAS(DefaultISR);
void Reserved106_DriverIRQHandler(void) ALIAS(DefaultISR);
void PVTS1_HIFI1_DriverIRQHandler(void) ALIAS(DefaultISR);

//*****************************************************************************
// The entry point for the application.
// __main() is the entry point for Redlib based applications
// main() is the entry point for Newlib based applications
//*****************************************************************************
#if defined(__MCUXPRESSO)
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
    // Core Level - CM33
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

    // Chip Level - MIMXRT758S_cm33_core1
    Reserved16_IRQHandler,       // 16 : Reserved interrupt
    Reserved17_IRQHandler,       // 17 : Reserved interrupt
    Reserved18_IRQHandler,       // 18 : Reserved interrupt
    FRO2_IRQHandler,             // 19 : FRO: 300MHz FRO in VDD1 domain Async interrupt
    GLIKEY4_IRQHandler,          // 20 : GLIKEY: Interrupt
    UTICK1_IRQHandler,           // 21 : Micro-tick Timer
    MRT1_IRQHandler,             // 22 : MRT: Ored Interrupt request
    CTIMER5_IRQHandler,          // 23 : CTIMER: Interrupt request
    CTIMER6_IRQHandler,          // 24 : CTIMER: Interrupt request
    CTIMER7_IRQHandler,          // 25 : CTIMER: Interrupt request
    LPI2C15_IRQHandler,          // 26 : LPI2C: Interrupt request
    LP_FLEXCOMM17_IRQHandler,    // 27 : FLEXCOMM: Interrupt request
    LP_FLEXCOMM18_IRQHandler,    // 28 : FLEXCOMM: Interrupt request
    LP_FLEXCOMM19_IRQHandler,    // 29 : FLEXCOMM: Interrupt request
    LP_FLEXCOMM20_IRQHandler,    // 30 : FLEXCOMM: Interrupt request
    ADC_IRQHandler,              // 31 : ADC0: Interrupt request
    SDADC_IRQHandler,            // 32 : SDADC0: Interrupt request
    GLIKEY1_IRQHandler,          // 33 : GLIKEY: Interrupt
    ACMP_IRQHandler,             // 34 : ACMP: interrupt request
    PDM_EVENT_IRQHandler,        // 35 : MIC: Interrupt request for read data or Error
    HYPERVISOR_IRQHandler,       // 36 : SECURE: Sense domain Hypervisor interrupt
    SECURE_VIOLATION_IRQHandler, // 37 : SECURE: Sense domain Secure violation interrupt
    PDM_HWVAD_EVENT_IRQHandler,  // 38 : MIC: Hardware Voice Activity Detector interrupt or error interrupt
    RTC1_ALARM_IRQHandler,       // 39 : RTC: Alarm interrupt
    RTC1_IRQHandler,             // 40 : RTC: wakeup interrupt to Sense domain
    HIFI1_IRQHandler,            // 41 : HIFI1: Interrupt request
    MU1_B_IRQHandler,            // 42 : MU1: MUB, CPU1 to CPU0
    Reserved43_IRQHandler,       // 43 : Reserved interrupt
    MU3_A_IRQHandler,            // 44 : MU3: MUA, CPU1 to HiFi1
    PMC_IRQHandler,              // 45 : PMC: Sense domain Interrupt
    OS_EVENT_IRQHandler,         // 46 : OSEVENT: Event timer CPU1 Wakeup/interrupt
    USDHC0_IRQHandler,           // 47 : USDHC: Interrupt request
    USDHC1_IRQHandler,           // 48 : USDHC: Interrupt request
    I3C2_IRQHandler,             // 49 : I3C: Interrupt Request
    USB0_IRQHandler,             // 50 : USB: HSUSB Interrup request
    USB1_IRQHandler,             // 51 : USB: eUSB Interrup request
    WDT2_IRQHandler,             // 52 : WDT: Interrupt request
    WDT3_IRQHandler,             // 53 : WDT: Interrupt request
    USBPHY0_IRQHandler,          // 54 : HSUSBPHY: UTM interrupt request
    Reserved55_IRQHandler,       // 55 : Reserved interrupt
    I3C3_IRQHandler,             // 56 : I3C: Interrupt Request
    FLEXIO_IRQHandler,           // 57 : flexio: Interrupt request
    LCDIF_IRQHandler,            // 58 : dcn: Interrupt request
    VGPU_IRQHandler,             // 59 : VGPU interrupt from graphics core
    MIPI_IRQHandler,             // 60 : DSI: Interrupt request
    EDMA2_CH0_IRQHandler,        // 61 : edma2: Channel 0 interrupt
    EDMA2_CH1_IRQHandler,        // 62 : edma2: Channel 1 interrupt
    EDMA2_CH2_IRQHandler,        // 63 : edma2: Channel 2 interrupt
    EDMA2_CH3_IRQHandler,        // 64 : edma2: Channel 3 interrupt
    EDMA2_CH4_IRQHandler,        // 65 : edma2: Channel 4 interrupt
    EDMA2_CH5_IRQHandler,        // 66 : edma2: Channel 5 interrupt
    EDMA2_CH6_IRQHandler,        // 67 : edma2: Channel 6 interrupt
    EDMA2_CH7_IRQHandler,        // 68 : edma2: Channel 7 interrupt
    EDMA3_CH0_IRQHandler,        // 69 : edma3: Channel 0 interrupt
    EDMA3_CH1_IRQHandler,        // 70 : edma3: Channel 1 interrupt
    EDMA3_CH2_IRQHandler,        // 71 : edma3: Channel 2 interrupt
    EDMA3_CH3_IRQHandler,        // 72 : edma3: Channel 3 interrupt
    EDMA3_CH4_IRQHandler,        // 73 : edma3: Channel 4 interrupt
    EDMA3_CH5_IRQHandler,        // 74 : edma3: Channel 5 interrupt
    EDMA3_CH6_IRQHandler,        // 75 : edma3: Channel 6 interrupt
    EDMA3_CH7_IRQHandler,        // 76 : edma3: Channel 7 interrupt
    GPIO80_IRQHandler,           // 77 : rgpio8: Interupt request, channel 0
    GPIO81_IRQHandler,           // 78 : rgpio8: Interupt request, channel 1
    GPIO90_IRQHandler,           // 79 : rgpio9: Interupt request, channel 0
    GPIO91_IRQHandler,           // 80 : rgpio9: Interupt request, channel 1
    GPIO100_IRQHandler,          // 81 : rgpio10: Interupt request, channel 0
    GPIO101_IRQHandler,          // 82 : rgpio10: Interupt request, channel 1
    Reserved83_IRQHandler,       // 83 : Reserved interrupt
    Reserved84_IRQHandler,       // 84 : Reserved interrupt
    PIN_INT0_IRQHandler,         // 85 : pint1: Interupt request 0
    PIN_INT1_IRQHandler,         // 86 : pint1: Interupt request 1
    PIN_INT2_IRQHandler,         // 87 : pint1: Interupt request 2
    PIN_INT3_IRQHandler,         // 88 : pint1: Interupt request 3
    SAI3_IRQHandler,             // 89 : sai3: TX/RX interrupt
    XSPI2_IRQHandler,            // 90 : xspi2: Ored interrupt
    MMU2_IRQHandler,             // 91 : mmu2: Interrupt request
    Reserved92_IRQHandler,       // 92 : Reserved interrupt
    GDET3_IRQHandler,            // 93 : GDET3: Interrupt request
    CDOG3_IRQHandler,            // 94 : cdog3: Interrupt request
    CDOG4_IRQHandler,            // 95 : cdog4: Interrupt request
    Reserved96_IRQHandler,       // 96 : Reserved interrupt
    CPU1_IRQHandler,             // 97 : CTI interrupt request
    JPEGDEC_IRQHandler,          // 98 : JPEGDEC Ored context 0-3 interrupt request
    PNGDEC_IRQHandler,           // 99 : PNGDEC interrupt request
    Reserved100_IRQHandler,      // 100: Reserved interrupt
    TEMPDET0_IRQHandler,         // 101: TEMPDET0: Temperature Detect Interrupt request 0
    TEMPDET1_IRQHandler,         // 102: TEMPDET1: Temperature Detect Interrupt request 1
    EZHV_IRQHandler,             // 103: ezhv: Interrupt request
    SLEEPCON1_IRQHandler,        // 104: SLEEPCON_SENSE CPU1 wakeup event
    PVTS1_CPU1_IRQHandler,       // 105: PVTS1 CPU1 interrupt
    Reserved106_IRQHandler,      // 106: Reserved interrupt
    PVTS1_HIFI1_IRQHandler,      // 107: PVTS1 HIFI1 interrupt
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

#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
    __asm volatile(
        "LDR R0, =SystemInit \n"
        "BLX R0              \n"
        "cpsie i             \n"
        "LDR R0, =__main     \n"
        "BX  R0              \n");
#elif defined(__MCUXPRESSO)
    SystemInit();

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
    SystemInit();
    // Reenable interrupts
    __asm volatile("cpsie i");

    __iar_program_start();
#elif defined(__GNUC__)
#if !defined(__NO_SYSTEM_INIT)
    SystemInit();
#endif //(__NO_SYSTEM_INIT)
    /*     Loop to copy data from read only memory to RAM. The ranges
     *      of copy from/to are specified by following symbols evaluated in
     *      linker script.
     *      1. __etext/_data_start__/__data_end__
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
WEAK void Reserved16_IRQHandler(void)
{
    Reserved16_DriverIRQHandler();
}

WEAK void Reserved17_IRQHandler(void)
{
    Reserved17_DriverIRQHandler();
}

WEAK void Reserved18_IRQHandler(void)
{
    Reserved18_DriverIRQHandler();
}

WEAK void FRO2_IRQHandler(void)
{
    FRO2_DriverIRQHandler();
}

WEAK void GLIKEY4_IRQHandler(void)
{
    GLIKEY4_DriverIRQHandler();
}

WEAK void UTICK1_IRQHandler(void)
{
    UTICK1_DriverIRQHandler();
}

WEAK void MRT1_IRQHandler(void)
{
    MRT1_DriverIRQHandler();
}

WEAK void CTIMER5_IRQHandler(void)
{
    CTIMER5_DriverIRQHandler();
}

WEAK void CTIMER6_IRQHandler(void)
{
    CTIMER6_DriverIRQHandler();
}

WEAK void CTIMER7_IRQHandler(void)
{
    CTIMER7_DriverIRQHandler();
}

WEAK void LPI2C15_IRQHandler(void)
{
    LPI2C15_DriverIRQHandler();
}

WEAK void LP_FLEXCOMM17_IRQHandler(void)
{
    LP_FLEXCOMM17_DriverIRQHandler();
}

WEAK void LP_FLEXCOMM18_IRQHandler(void)
{
    LP_FLEXCOMM18_DriverIRQHandler();
}

WEAK void LP_FLEXCOMM19_IRQHandler(void)
{
    LP_FLEXCOMM19_DriverIRQHandler();
}

WEAK void LP_FLEXCOMM20_IRQHandler(void)
{
    LP_FLEXCOMM20_DriverIRQHandler();
}

WEAK void ADC_IRQHandler(void)
{
    ADC_DriverIRQHandler();
}

WEAK void SDADC_IRQHandler(void)
{
    SDADC_DriverIRQHandler();
}

WEAK void GLIKEY1_IRQHandler(void)
{
    GLIKEY1_DriverIRQHandler();
}

WEAK void ACMP_IRQHandler(void)
{
    ACMP_DriverIRQHandler();
}

WEAK void PDM_EVENT_IRQHandler(void)
{
    PDM_EVENT_DriverIRQHandler();
}

WEAK void HYPERVISOR_IRQHandler(void)
{
    HYPERVISOR_DriverIRQHandler();
}

WEAK void SECURE_VIOLATION_IRQHandler(void)
{
    SECURE_VIOLATION_DriverIRQHandler();
}

WEAK void PDM_HWVAD_EVENT_IRQHandler(void)
{
    PDM_HWVAD_EVENT_DriverIRQHandler();
}

WEAK void RTC1_ALARM_IRQHandler(void)
{
    RTC1_ALARM_DriverIRQHandler();
}

WEAK void RTC1_IRQHandler(void)
{
    RTC1_DriverIRQHandler();
}

WEAK void HIFI1_IRQHandler(void)
{
    HIFI1_DriverIRQHandler();
}

WEAK void MU1_B_IRQHandler(void)
{
    MU1_B_DriverIRQHandler();
}

WEAK void Reserved43_IRQHandler(void)
{
    Reserved43_DriverIRQHandler();
}

WEAK void MU3_A_IRQHandler(void)
{
    MU3_A_DriverIRQHandler();
}

WEAK void PMC_IRQHandler(void)
{
    PMC_DriverIRQHandler();
}

WEAK void OS_EVENT_IRQHandler(void)
{
    OS_EVENT_DriverIRQHandler();
}

WEAK void USDHC0_IRQHandler(void)
{
    USDHC0_DriverIRQHandler();
}

WEAK void USDHC1_IRQHandler(void)
{
    USDHC1_DriverIRQHandler();
}

WEAK void I3C2_IRQHandler(void)
{
    I3C2_DriverIRQHandler();
}

WEAK void USB0_IRQHandler(void)
{
    USB0_DriverIRQHandler();
}

WEAK void USB1_IRQHandler(void)
{
    USB1_DriverIRQHandler();
}

WEAK void WDT2_IRQHandler(void)
{
    WDT2_DriverIRQHandler();
}

WEAK void WDT3_IRQHandler(void)
{
    WDT3_DriverIRQHandler();
}

WEAK void USBPHY0_IRQHandler(void)
{
    USBPHY0_DriverIRQHandler();
}

WEAK void Reserved55_IRQHandler(void)
{
    Reserved55_DriverIRQHandler();
}

WEAK void I3C3_IRQHandler(void)
{
    I3C3_DriverIRQHandler();
}

WEAK void FLEXIO_IRQHandler(void)
{
    FLEXIO_DriverIRQHandler();
}

WEAK void LCDIF_IRQHandler(void)
{
    LCDIF_DriverIRQHandler();
}

WEAK void VGPU_IRQHandler(void)
{
    VGPU_DriverIRQHandler();
}

WEAK void MIPI_IRQHandler(void)
{
    MIPI_DriverIRQHandler();
}

WEAK void EDMA2_CH0_IRQHandler(void)
{
    EDMA2_CH0_DriverIRQHandler();
}

WEAK void EDMA2_CH1_IRQHandler(void)
{
    EDMA2_CH1_DriverIRQHandler();
}

WEAK void EDMA2_CH2_IRQHandler(void)
{
    EDMA2_CH2_DriverIRQHandler();
}

WEAK void EDMA2_CH3_IRQHandler(void)
{
    EDMA2_CH3_DriverIRQHandler();
}

WEAK void EDMA2_CH4_IRQHandler(void)
{
    EDMA2_CH4_DriverIRQHandler();
}

WEAK void EDMA2_CH5_IRQHandler(void)
{
    EDMA2_CH5_DriverIRQHandler();
}

WEAK void EDMA2_CH6_IRQHandler(void)
{
    EDMA2_CH6_DriverIRQHandler();
}

WEAK void EDMA2_CH7_IRQHandler(void)
{
    EDMA2_CH7_DriverIRQHandler();
}

WEAK void EDMA3_CH0_IRQHandler(void)
{
    EDMA3_CH0_DriverIRQHandler();
}

WEAK void EDMA3_CH1_IRQHandler(void)
{
    EDMA3_CH1_DriverIRQHandler();
}

WEAK void EDMA3_CH2_IRQHandler(void)
{
    EDMA3_CH2_DriverIRQHandler();
}

WEAK void EDMA3_CH3_IRQHandler(void)
{
    EDMA3_CH3_DriverIRQHandler();
}

WEAK void EDMA3_CH4_IRQHandler(void)
{
    EDMA3_CH4_DriverIRQHandler();
}

WEAK void EDMA3_CH5_IRQHandler(void)
{
    EDMA3_CH5_DriverIRQHandler();
}

WEAK void EDMA3_CH6_IRQHandler(void)
{
    EDMA3_CH6_DriverIRQHandler();
}

WEAK void EDMA3_CH7_IRQHandler(void)
{
    EDMA3_CH7_DriverIRQHandler();
}

WEAK void GPIO80_IRQHandler(void)
{
    GPIO80_DriverIRQHandler();
}

WEAK void GPIO81_IRQHandler(void)
{
    GPIO81_DriverIRQHandler();
}

WEAK void GPIO90_IRQHandler(void)
{
    GPIO90_DriverIRQHandler();
}

WEAK void GPIO91_IRQHandler(void)
{
    GPIO91_DriverIRQHandler();
}

WEAK void GPIO100_IRQHandler(void)
{
    GPIO100_DriverIRQHandler();
}

WEAK void GPIO101_IRQHandler(void)
{
    GPIO101_DriverIRQHandler();
}

WEAK void Reserved83_IRQHandler(void)
{
    Reserved83_DriverIRQHandler();
}

WEAK void Reserved84_IRQHandler(void)
{
    Reserved84_DriverIRQHandler();
}

WEAK void PIN_INT0_IRQHandler(void)
{
    PIN_INT0_DriverIRQHandler();
}

WEAK void PIN_INT1_IRQHandler(void)
{
    PIN_INT1_DriverIRQHandler();
}

WEAK void PIN_INT2_IRQHandler(void)
{
    PIN_INT2_DriverIRQHandler();
}

WEAK void PIN_INT3_IRQHandler(void)
{
    PIN_INT3_DriverIRQHandler();
}

WEAK void SAI3_IRQHandler(void)
{
    SAI3_DriverIRQHandler();
}

WEAK void XSPI2_IRQHandler(void)
{
    XSPI2_DriverIRQHandler();
}

WEAK void MMU2_IRQHandler(void)
{
    MMU2_DriverIRQHandler();
}

WEAK void Reserved92_IRQHandler(void)
{
    Reserved92_DriverIRQHandler();
}

WEAK void GDET3_IRQHandler(void)
{
    GDET3_DriverIRQHandler();
}

WEAK void CDOG3_IRQHandler(void)
{
    CDOG3_DriverIRQHandler();
}

WEAK void CDOG4_IRQHandler(void)
{
    CDOG4_DriverIRQHandler();
}

WEAK void Reserved96_IRQHandler(void)
{
    Reserved96_DriverIRQHandler();
}

WEAK void CPU1_IRQHandler(void)
{
    CPU1_DriverIRQHandler();
}

WEAK void JPEGDEC_IRQHandler(void)
{
    JPEGDEC_DriverIRQHandler();
}

WEAK void PNGDEC_IRQHandler(void)
{
    PNGDEC_DriverIRQHandler();
}

WEAK void Reserved100_IRQHandler(void)
{
    Reserved100_DriverIRQHandler();
}

WEAK void TEMPDET0_IRQHandler(void)
{
    TEMPDET0_DriverIRQHandler();
}

WEAK void TEMPDET1_IRQHandler(void)
{
    TEMPDET1_DriverIRQHandler();
}

WEAK void EZHV_IRQHandler(void)
{
    EZHV_DriverIRQHandler();
}

WEAK void SLEEPCON1_IRQHandler(void)
{
    SLEEPCON1_DriverIRQHandler();
}

WEAK void PVTS1_CPU1_IRQHandler(void)
{
    PVTS1_CPU1_DriverIRQHandler();
}

WEAK void Reserved106_IRQHandler(void)
{
    Reserved106_DriverIRQHandler();
}

WEAK void PVTS1_HIFI1_IRQHandler(void)
{
    PVTS1_HIFI1_DriverIRQHandler();
}

//*****************************************************************************

#if defined(DEBUG)
#if defined(__GNUC__)
#pragma GCC pop_options
#endif //(__GNUC__)
#endif //(DEBUG)
