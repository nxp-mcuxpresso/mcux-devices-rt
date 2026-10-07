//*****************************************************************************
// IMXRTL3459AAA_cm55_core0 startup code
//
// Version : 071026
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
WEAK void DMA0_CH0_IRQHandler(void);
WEAK void DMA0_CH1_IRQHandler(void);
WEAK void DMA0_CH2_IRQHandler(void);
WEAK void DMA0_CH3_IRQHandler(void);
WEAK void DMA0_CH4_IRQHandler(void);
WEAK void DMA0_CH5_IRQHandler(void);
WEAK void DMA0_CH6_IRQHandler(void);
WEAK void DMA0_CH7_IRQHandler(void);
WEAK void DMA0_CH8_IRQHandler(void);
WEAK void DMA0_CH9_IRQHandler(void);
WEAK void DMA0_CH10_IRQHandler(void);
WEAK void DMA0_CH11_IRQHandler(void);
WEAK void DMA0_CH12_IRQHandler(void);
WEAK void DMA0_CH13_IRQHandler(void);
WEAK void DMA0_CH14_IRQHandler(void);
WEAK void DMA0_CH15_IRQHandler(void);
WEAK void DMA0_CH16_IRQHandler(void);
WEAK void DMA0_CH17_IRQHandler(void);
WEAK void DMA0_CH18_IRQHandler(void);
WEAK void DMA0_CH19_IRQHandler(void);
WEAK void DMA0_CH20_IRQHandler(void);
WEAK void DMA0_CH21_IRQHandler(void);
WEAK void DMA0_CH22_IRQHandler(void);
WEAK void DMA0_CH23_IRQHandler(void);
WEAK void DMA1_CH0_IRQHandler(void);
WEAK void DMA1_CH1_IRQHandler(void);
WEAK void DMA1_CH2_IRQHandler(void);
WEAK void DMA1_CH3_IRQHandler(void);
WEAK void DMA1_CH4_IRQHandler(void);
WEAK void DMA1_CH5_IRQHandler(void);
WEAK void DMA1_CH6_IRQHandler(void);
WEAK void DMA1_CH7_IRQHandler(void);
WEAK void DMA1_CH8_IRQHandler(void);
WEAK void DMA1_CH9_IRQHandler(void);
WEAK void DMA1_CH10_IRQHandler(void);
WEAK void DMA1_CH11_IRQHandler(void);
WEAK void DMA0_IRQHandler(void);
WEAK void DMA1_IRQHandler(void);
WEAK void CTI_INT0_IRQHandler(void);
WEAK void CTI_INT1_IRQHandler(void);
WEAK void UTICK_IRQHandler(void);
WEAK void MRT0_IRQHandler(void);
WEAK void CTIMER0_IRQHandler(void);
WEAK void CTIMER1_IRQHandler(void);
WEAK void CTIMER2_IRQHandler(void);
WEAK void CTIMER3_IRQHandler(void);
WEAK void CTIMER4_IRQHandler(void);
WEAK void SCT0_IRQHandler(void);
WEAK void OS_EVENT_IRQHandler(void);
WEAK void WDT0_IRQHandler(void);
WEAK void FLEXCOMM0_IRQHandler(void);
WEAK void FLEXCOMM1_IRQHandler(void);
WEAK void FLEXCOMM2_IRQHandler(void);
WEAK void FLEXCOMM3_IRQHandler(void);
WEAK void FLEXCOMM4_IRQHandler(void);
WEAK void FLEXCOMM5_IRQHandler(void);
WEAK void XSPI0_IRQHandler(void);
WEAK void I3C0_IRQHandler(void);
WEAK void GINT0_IRQHandler(void);
WEAK void PIN_INT0_IRQHandler(void);
WEAK void PIN_INT1_IRQHandler(void);
WEAK void PIN_INT2_IRQHandler(void);
WEAK void PIN_INT3_IRQHandler(void);
WEAK void PIN_INT4_IRQHandler(void);
WEAK void PIN_INT5_IRQHandler(void);
WEAK void PIN_INT6_IRQHandler(void);
WEAK void PIN_INT7_IRQHandler(void);
WEAK void GPIO_INTA_IRQHandler(void);
WEAK void GPIO_INTB_IRQHandler(void);
WEAK void SEC_GPIO_INTA_IRQHandler(void);
WEAK void SEC_GPIO_INTB_IRQHandler(void);
WEAK void SEC_GPIO_INT0_IRQ0_IRQHandler(void);
WEAK void SEC_GPIO_INT0_IRQ1_IRQHandler(void);
WEAK void FREQME_IRQHandler(void);
WEAK void CDOG_IRQHandler(void);
WEAK void AHB_MATRIX_IRQHandler(void);
WEAK void HYPERVISOR_IRQHandler(void);
WEAK void SGI0_IRQHandler(void);
WEAK void PKC_IRQHandler(void);
WEAK void TRNG0_IRQHandler(void);
WEAK void ITRC_IRQHandler(void);
WEAK void GLIKEY0_IRQHandler(void);
WEAK void TDET_IRQHandler(void);
WEAK void GDET_IRQHandler(void);
WEAK void SECURE_ERR_IRQHandler(void);
WEAK void OCOTP_IRQHandler(void);
WEAK void DATAPORT_EVENT0_IRQHandler(void);
WEAK void DATAPORT_EVENT1_IRQHandler(void);
WEAK void DATAPORT_EVENT2_IRQHandler(void);
WEAK void DATAPORT_EVENT3_IRQHandler(void);
WEAK void VISION_IRQHandler(void);
WEAK void PMRC_IRQHandler(void);
WEAK void Reserved108_IRQHandler(void);
WEAK void NSS_CM_EVENT0_IRQHandler(void);
WEAK void NSS_CM_EVENT1_IRQHandler(void);
WEAK void NSS_CM_EVENT2_IRQHandler(void);
WEAK void NSS_CM_EVENT3_IRQHandler(void);
WEAK void NSS_CM_EVENT4_IRQHandler(void);
WEAK void NSS_CM_EVENT5_IRQHandler(void);
WEAK void NSS_CM_EVENT6_IRQHandler(void);
WEAK void NSS_CM_EVENT7_IRQHandler(void);
WEAK void NSS_XSP_EVENT0_IRQHandler(void);
WEAK void NSS_XSP_EVENT1_IRQHandler(void);
WEAK void NSS_XSP_EVENT2_IRQHandler(void);
WEAK void NSS_XSP_EVENT3_IRQHandler(void);
WEAK void NSS_XSP_EVENT4_IRQHandler(void);
WEAK void NSS_XSP_EVENT5_IRQHandler(void);
WEAK void NSS_XSP_EVENT6_IRQHandler(void);
WEAK void NSS_XSP_EVENT7_IRQHandler(void);
WEAK void NSS_DMA_EVENT0_IRQHandler(void);
WEAK void NSS_DMA_EVENT1_IRQHandler(void);
WEAK void NSS_DMA_EVENT2_IRQHandler(void);
WEAK void NSS_DMA_EVENT3_IRQHandler(void);
WEAK void NSS_DMA_EVENT4_IRQHandler(void);
WEAK void NSS_DMA_EVENT5_IRQHandler(void);
WEAK void NSS_DMA_EVENT6_IRQHandler(void);
WEAK void NSS_DMA_EVENT7_IRQHandler(void);
WEAK void NSS_U85_IRQHandler(void);
WEAK void ADSS_PROG_EVENT0_IRQHandler(void);
WEAK void ADSS_PROG_EVENT1_IRQHandler(void);
WEAK void ADSS_PROG_EVENT2_IRQHandler(void);
WEAK void ADSS_PROG_EVENT3_IRQHandler(void);
WEAK void ADSS_PROG_EVENT4_IRQHandler(void);
WEAK void ADSS_PROG_EVENT5_IRQHandler(void);
WEAK void ADSS_PROG_EVENT6_IRQHandler(void);
WEAK void ADSS_PROG_EVENT7_IRQHandler(void);
WEAK void NSS_ERROR_IRQHandler(void);
WEAK void ADSS_ERROR_IRQHandler(void);

//*****************************************************************************
// Forward declaration of the driver IRQ handlers. These are aliased
// to the DefaultISR, which is a 'forever' loop. When the driver
// defines a handler (with the same name), this will automatically take
// precedence over these weak definitions
//*****************************************************************************
void DMA0_CH0_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH1_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH2_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH3_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH4_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH5_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH6_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH7_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH8_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH9_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH10_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH11_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH12_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH13_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH14_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH15_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH16_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH17_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH18_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH19_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH20_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH21_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH22_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_CH23_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA1_CH0_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA1_CH1_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA1_CH2_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA1_CH3_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA1_CH4_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA1_CH5_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA1_CH6_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA1_CH7_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA1_CH8_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA1_CH9_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA1_CH10_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA1_CH11_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA0_DriverIRQHandler(void) ALIAS(DefaultISR);
void DMA1_DriverIRQHandler(void) ALIAS(DefaultISR);
void CTI_INT0_DriverIRQHandler(void) ALIAS(DefaultISR);
void CTI_INT1_DriverIRQHandler(void) ALIAS(DefaultISR);
void UTICK_DriverIRQHandler(void) ALIAS(DefaultISR);
void MRT0_DriverIRQHandler(void) ALIAS(DefaultISR);
void CTIMER0_DriverIRQHandler(void) ALIAS(DefaultISR);
void CTIMER1_DriverIRQHandler(void) ALIAS(DefaultISR);
void CTIMER2_DriverIRQHandler(void) ALIAS(DefaultISR);
void CTIMER3_DriverIRQHandler(void) ALIAS(DefaultISR);
void CTIMER4_DriverIRQHandler(void) ALIAS(DefaultISR);
void SCT0_DriverIRQHandler(void) ALIAS(DefaultISR);
void OS_EVENT_DriverIRQHandler(void) ALIAS(DefaultISR);
void WDT0_DriverIRQHandler(void) ALIAS(DefaultISR);
void FLEXCOMM0_DriverIRQHandler(void) ALIAS(DefaultISR);
void FLEXCOMM1_DriverIRQHandler(void) ALIAS(DefaultISR);
void FLEXCOMM2_DriverIRQHandler(void) ALIAS(DefaultISR);
void FLEXCOMM3_DriverIRQHandler(void) ALIAS(DefaultISR);
void FLEXCOMM4_DriverIRQHandler(void) ALIAS(DefaultISR);
void FLEXCOMM5_DriverIRQHandler(void) ALIAS(DefaultISR);
void XSPI0_DriverIRQHandler(void) ALIAS(DefaultISR);
void I3C0_DriverIRQHandler(void) ALIAS(DefaultISR);
void GINT0_DriverIRQHandler(void) ALIAS(DefaultISR);
void PIN_INT0_DriverIRQHandler(void) ALIAS(DefaultISR);
void PIN_INT1_DriverIRQHandler(void) ALIAS(DefaultISR);
void PIN_INT2_DriverIRQHandler(void) ALIAS(DefaultISR);
void PIN_INT3_DriverIRQHandler(void) ALIAS(DefaultISR);
void PIN_INT4_DriverIRQHandler(void) ALIAS(DefaultISR);
void PIN_INT5_DriverIRQHandler(void) ALIAS(DefaultISR);
void PIN_INT6_DriverIRQHandler(void) ALIAS(DefaultISR);
void PIN_INT7_DriverIRQHandler(void) ALIAS(DefaultISR);
void GPIO_INTA_DriverIRQHandler(void) ALIAS(DefaultISR);
void GPIO_INTB_DriverIRQHandler(void) ALIAS(DefaultISR);
void SEC_GPIO_INTA_DriverIRQHandler(void) ALIAS(DefaultISR);
void SEC_GPIO_INTB_DriverIRQHandler(void) ALIAS(DefaultISR);
void SEC_GPIO_INT0_IRQ0_DriverIRQHandler(void) ALIAS(DefaultISR);
void SEC_GPIO_INT0_IRQ1_DriverIRQHandler(void) ALIAS(DefaultISR);
void FREQME_DriverIRQHandler(void) ALIAS(DefaultISR);
void CDOG_DriverIRQHandler(void) ALIAS(DefaultISR);
void AHB_MATRIX_DriverIRQHandler(void) ALIAS(DefaultISR);
void HYPERVISOR_DriverIRQHandler(void) ALIAS(DefaultISR);
void SGI0_DriverIRQHandler(void) ALIAS(DefaultISR);
void PKC_DriverIRQHandler(void) ALIAS(DefaultISR);
void TRNG0_DriverIRQHandler(void) ALIAS(DefaultISR);
void ITRC_DriverIRQHandler(void) ALIAS(DefaultISR);
void GLIKEY0_DriverIRQHandler(void) ALIAS(DefaultISR);
void TDET_DriverIRQHandler(void) ALIAS(DefaultISR);
void GDET_DriverIRQHandler(void) ALIAS(DefaultISR);
void SECURE_ERR_DriverIRQHandler(void) ALIAS(DefaultISR);
void OCOTP_DriverIRQHandler(void) ALIAS(DefaultISR);
void DATAPORT_EVENT0_DriverIRQHandler(void) ALIAS(DefaultISR);
void DATAPORT_EVENT1_DriverIRQHandler(void) ALIAS(DefaultISR);
void DATAPORT_EVENT2_DriverIRQHandler(void) ALIAS(DefaultISR);
void DATAPORT_EVENT3_DriverIRQHandler(void) ALIAS(DefaultISR);
void VISION_DriverIRQHandler(void) ALIAS(DefaultISR);
void PMRC_DriverIRQHandler(void) ALIAS(DefaultISR);
void Reserved108_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_CM_EVENT0_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_CM_EVENT1_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_CM_EVENT2_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_CM_EVENT3_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_CM_EVENT4_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_CM_EVENT5_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_CM_EVENT6_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_CM_EVENT7_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_XSP_EVENT0_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_XSP_EVENT1_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_XSP_EVENT2_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_XSP_EVENT3_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_XSP_EVENT4_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_XSP_EVENT5_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_XSP_EVENT6_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_XSP_EVENT7_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_DMA_EVENT0_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_DMA_EVENT1_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_DMA_EVENT2_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_DMA_EVENT3_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_DMA_EVENT4_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_DMA_EVENT5_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_DMA_EVENT6_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_DMA_EVENT7_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_U85_DriverIRQHandler(void) ALIAS(DefaultISR);
void ADSS_PROG_EVENT0_DriverIRQHandler(void) ALIAS(DefaultISR);
void ADSS_PROG_EVENT1_DriverIRQHandler(void) ALIAS(DefaultISR);
void ADSS_PROG_EVENT2_DriverIRQHandler(void) ALIAS(DefaultISR);
void ADSS_PROG_EVENT3_DriverIRQHandler(void) ALIAS(DefaultISR);
void ADSS_PROG_EVENT4_DriverIRQHandler(void) ALIAS(DefaultISR);
void ADSS_PROG_EVENT5_DriverIRQHandler(void) ALIAS(DefaultISR);
void ADSS_PROG_EVENT6_DriverIRQHandler(void) ALIAS(DefaultISR);
void ADSS_PROG_EVENT7_DriverIRQHandler(void) ALIAS(DefaultISR);
void NSS_ERROR_DriverIRQHandler(void) ALIAS(DefaultISR);
void ADSS_ERROR_DriverIRQHandler(void) ALIAS(DefaultISR);

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

    // Chip Level - IMXRTL3459AAA_cm55_core0
    DMA0_CH0_IRQHandler,           // 16 : DMA0_CH0 interrupt
    DMA0_CH1_IRQHandler,           // 17 : DMA0_CH1 interrupt
    DMA0_CH2_IRQHandler,           // 18 : DMA0_CH2 interrupt
    DMA0_CH3_IRQHandler,           // 19 : DMA0_CH3 interrupt
    DMA0_CH4_IRQHandler,           // 20 : DMA0_CH4 interrupt
    DMA0_CH5_IRQHandler,           // 21 : DMA0_CH5 interrupt
    DMA0_CH6_IRQHandler,           // 22 : DMA0_CH6 interrupt
    DMA0_CH7_IRQHandler,           // 23 : DMA0_CH7 interrupt
    DMA0_CH8_IRQHandler,           // 24 : DMA0_CH8 interrupt
    DMA0_CH9_IRQHandler,           // 25 : DMA0_CH9 interrupt
    DMA0_CH10_IRQHandler,          // 26 : DMA0_CH10 interrupt
    DMA0_CH11_IRQHandler,          // 27 : DMA0_CH11 interrupt
    DMA0_CH12_IRQHandler,          // 28 : DMA0_CH12 interrupt
    DMA0_CH13_IRQHandler,          // 29 : DMA0_CH13 interrupt
    DMA0_CH14_IRQHandler,          // 30 : DMA0_CH14 interrupt
    DMA0_CH15_IRQHandler,          // 31 : DMA0_CH15 interrupt
    DMA0_CH16_IRQHandler,          // 32 : DMA0_CH16 interrupt
    DMA0_CH17_IRQHandler,          // 33 : DMA0_CH17 interrupt
    DMA0_CH18_IRQHandler,          // 34 : DMA0_CH18 interrupt
    DMA0_CH19_IRQHandler,          // 35 : DMA0_CH19 interrupt
    DMA0_CH20_IRQHandler,          // 36 : DMA0_CH20 interrupt
    DMA0_CH21_IRQHandler,          // 37 : DMA0_CH21 interrupt
    DMA0_CH22_IRQHandler,          // 38 : DMA0_CH22 interrupt
    DMA0_CH23_IRQHandler,          // 39 : DMA0_CH23 interrupt
    DMA1_CH0_IRQHandler,           // 40 : DMA1_CH0 interrupt
    DMA1_CH1_IRQHandler,           // 41 : DMA1_CH1 interrupt
    DMA1_CH2_IRQHandler,           // 42 : DMA1_CH2 interrupt
    DMA1_CH3_IRQHandler,           // 43 : DMA1_CH3 interrupt
    DMA1_CH4_IRQHandler,           // 44 : DMA1_CH4 interrupt
    DMA1_CH5_IRQHandler,           // 45 : DMA1_CH5 interrupt
    DMA1_CH6_IRQHandler,           // 46 : DMA1_CH6 interrupt
    DMA1_CH7_IRQHandler,           // 47 : DMA1_CH7 interrupt
    DMA1_CH8_IRQHandler,           // 48 : DMA1_CH8 interrupt
    DMA1_CH9_IRQHandler,           // 49 : DMA1_CH9 interrupt
    DMA1_CH10_IRQHandler,          // 50 : DMA1_CH10 interrupt
    DMA1_CH11_IRQHandler,          // 51 : DMA1_CH11 interrupt
    DMA0_IRQHandler,               // 52 : DMA0 ORed interrupt
    DMA1_IRQHandler,               // 53 : DMA1 ORed interrupt
    CTI_INT0_IRQHandler,           // 54 : CTI_INT0 interrupt
    CTI_INT1_IRQHandler,           // 55 : CTI_INT1 interrupt
    UTICK_IRQHandler,              // 56 : UTICK interrupt
    MRT0_IRQHandler,               // 57 : MRT0 interrupt
    CTIMER0_IRQHandler,            // 58 : CTIMER0 interrupt
    CTIMER1_IRQHandler,            // 59 : CTIMER1 interrupt
    CTIMER2_IRQHandler,            // 60 : CTIMER2 interrupt
    CTIMER3_IRQHandler,            // 61 : CTIMER3 interrupt
    CTIMER4_IRQHandler,            // 62 : CTIMER4 interrupt
    SCT0_IRQHandler,               // 63 : SCT0 interrupt
    OS_EVENT_IRQHandler,           // 64 : OS timer event interrupt
    WDT0_IRQHandler,               // 65 : WDT0 interrupt
    FLEXCOMM0_IRQHandler,          // 66 : FLEXCOMM0 interrupt
    FLEXCOMM1_IRQHandler,          // 67 : FLEXCOMM1 interrupt
    FLEXCOMM2_IRQHandler,          // 68 : FLEXCOMM2 interrupt
    FLEXCOMM3_IRQHandler,          // 69 : FLEXCOMM3 interrupt
    FLEXCOMM4_IRQHandler,          // 70 : FLEXCOMM4 interrupt
    FLEXCOMM5_IRQHandler,          // 71 : FLEXCOMM5 interrupt
    XSPI0_IRQHandler,              // 72 : XSPI0 interrupt
    I3C0_IRQHandler,               // 73 : I3C0 interrupt
    GINT0_IRQHandler,              // 74 : GINT0 interrupt
    PIN_INT0_IRQHandler,           // 75 : PIN_INT0 interrupt
    PIN_INT1_IRQHandler,           // 76 : PIN_INT1 interrupt
    PIN_INT2_IRQHandler,           // 77 : PIN_INT2 interrupt
    PIN_INT3_IRQHandler,           // 78 : PIN_INT3 interrupt
    PIN_INT4_IRQHandler,           // 79 : PIN_INT4 interrupt
    PIN_INT5_IRQHandler,           // 80 : PIN_INT5 interrupt
    PIN_INT6_IRQHandler,           // 81 : PIN_INT6 interrupt
    PIN_INT7_IRQHandler,           // 82 : PIN_INT7 interrupt
    GPIO_INTA_IRQHandler,          // 83 : GPIO interrupt A
    GPIO_INTB_IRQHandler,          // 84 : GPIO interrupt B
    SEC_GPIO_INTA_IRQHandler,      // 85 : Secure GPIO interrupt A
    SEC_GPIO_INTB_IRQHandler,      // 86 : Secure GPIO interrupt B
    SEC_GPIO_INT0_IRQ0_IRQHandler, // 87 : GPIO SEC INT0 interrupt
    SEC_GPIO_INT0_IRQ1_IRQHandler, // 88 : GPIO SEC INT1 interrupt
    FREQME_IRQHandler,             // 89 : FREQME interrupt
    CDOG_IRQHandler,               // 90 : CDOG interrupt
    AHB_MATRIX_IRQHandler,         // 91 : AHB_MATRIX interrupt
    HYPERVISOR_IRQHandler,         // 92 : HYPERVISOR interrupt
    SGI0_IRQHandler,               // 93 : SGI0 interrupt
    PKC_IRQHandler,                // 94 : PKC interrupt
    TRNG0_IRQHandler,              // 95 : TRNG0 interrupt
    ITRC_IRQHandler,               // 96 : ITRC interrupt
    GLIKEY0_IRQHandler,            // 97 : GLIKEY0 interrupt
    TDET_IRQHandler,               // 98 : TDET interrupt
    GDET_IRQHandler,               // 99 : GDET interrupt
    SECURE_ERR_IRQHandler,         // 100: SECURE_ERR interrupt
    OCOTP_IRQHandler,              // 101: OCOTP interrupt
    DATAPORT_EVENT0_IRQHandler,    // 102: DATAPORT_EVENT0 interrupt
    DATAPORT_EVENT1_IRQHandler,    // 103: DATAPORT_EVENT1 interrupt
    DATAPORT_EVENT2_IRQHandler,    // 104: DATAPORT_EVENT2 interrupt
    DATAPORT_EVENT3_IRQHandler,    // 105: DATAPORT_EVENT3 interrupt
    VISION_IRQHandler,             // 106: VISION interrupt
    PMRC_IRQHandler,               // 107: PMRC interrupt
    Reserved108_IRQHandler,        // 108: Reserved interrupt
    NSS_CM_EVENT0_IRQHandler,      // 109: NSS_CM_EVENT0 interrupt
    NSS_CM_EVENT1_IRQHandler,      // 110: NSS_CM_EVENT1 interrupt
    NSS_CM_EVENT2_IRQHandler,      // 111: NSS_CM_EVENT2 interrupt
    NSS_CM_EVENT3_IRQHandler,      // 112: NSS_CM_EVENT3 interrupt
    NSS_CM_EVENT4_IRQHandler,      // 113: NSS_CM_EVENT4 interrupt
    NSS_CM_EVENT5_IRQHandler,      // 114: NSS_CM_EVENT5 interrupt
    NSS_CM_EVENT6_IRQHandler,      // 115: NSS_CM_EVENT6 interrupt
    NSS_CM_EVENT7_IRQHandler,      // 116: NSS_CM_EVENT7 interrupt
    NSS_XSP_EVENT0_IRQHandler,     // 117: NSS_XSP_EVENT0 interrupt
    NSS_XSP_EVENT1_IRQHandler,     // 118: NSS_XSP_EVENT1 interrupt
    NSS_XSP_EVENT2_IRQHandler,     // 119: NSS_XSP_EVENT2 interrupt
    NSS_XSP_EVENT3_IRQHandler,     // 120: NSS_XSP_EVENT3 interrupt
    NSS_XSP_EVENT4_IRQHandler,     // 121: NSS_XSP_EVENT4 interrupt
    NSS_XSP_EVENT5_IRQHandler,     // 122: NSS_XSP_EVENT5 interrupt
    NSS_XSP_EVENT6_IRQHandler,     // 123: NSS_XSP_EVENT6 interrupt
    NSS_XSP_EVENT7_IRQHandler,     // 124: NSS_XSP_EVENT7 interrupt
    NSS_DMA_EVENT0_IRQHandler,     // 125: NSS_DMA_EVENT0 interrupt
    NSS_DMA_EVENT1_IRQHandler,     // 126: NSS_DMA_EVENT1 interrupt
    NSS_DMA_EVENT2_IRQHandler,     // 127: NSS_DMA_EVENT2 interrupt
    NSS_DMA_EVENT3_IRQHandler,     // 128: NSS_DMA_EVENT3 interrupt
    NSS_DMA_EVENT4_IRQHandler,     // 129: NSS_DMA_EVENT4 interrupt
    NSS_DMA_EVENT5_IRQHandler,     // 130: NSS_DMA_EVENT5 interrupt
    NSS_DMA_EVENT6_IRQHandler,     // 131: NSS_DMA_EVENT6 interrupt
    NSS_DMA_EVENT7_IRQHandler,     // 132: NSS_DMA_EVENT7 interrupt
    NSS_U85_IRQHandler,            // 133: NSS_U85 interrupt
    ADSS_PROG_EVENT0_IRQHandler,   // 134: ADSS_PROG_EVENT0 interrupt
    ADSS_PROG_EVENT1_IRQHandler,   // 135: ADSS_PROG_EVENT1 interrupt
    ADSS_PROG_EVENT2_IRQHandler,   // 136: ADSS_PROG_EVENT2 interrupt
    ADSS_PROG_EVENT3_IRQHandler,   // 137: ADSS_PROG_EVENT3 interrupt
    ADSS_PROG_EVENT4_IRQHandler,   // 138: ADSS_PROG_EVENT4 interrupt
    ADSS_PROG_EVENT5_IRQHandler,   // 139: ADSS_PROG_EVENT5 interrupt
    ADSS_PROG_EVENT6_IRQHandler,   // 140: ADSS_PROG_EVENT6 interrupt
    ADSS_PROG_EVENT7_IRQHandler,   // 141: ADSS_PROG_EVENT7 interrupt
    NSS_ERROR_IRQHandler,          // 142: NSS_ERROR interrupt
    ADSS_ERROR_IRQHandler,         // 143: ADSS_ERROR interrupt
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
WEAK void DMA0_CH0_IRQHandler(void)
{
    DMA0_CH0_DriverIRQHandler();
}

WEAK void DMA0_CH1_IRQHandler(void)
{
    DMA0_CH1_DriverIRQHandler();
}

WEAK void DMA0_CH2_IRQHandler(void)
{
    DMA0_CH2_DriverIRQHandler();
}

WEAK void DMA0_CH3_IRQHandler(void)
{
    DMA0_CH3_DriverIRQHandler();
}

WEAK void DMA0_CH4_IRQHandler(void)
{
    DMA0_CH4_DriverIRQHandler();
}

WEAK void DMA0_CH5_IRQHandler(void)
{
    DMA0_CH5_DriverIRQHandler();
}

WEAK void DMA0_CH6_IRQHandler(void)
{
    DMA0_CH6_DriverIRQHandler();
}

WEAK void DMA0_CH7_IRQHandler(void)
{
    DMA0_CH7_DriverIRQHandler();
}

WEAK void DMA0_CH8_IRQHandler(void)
{
    DMA0_CH8_DriverIRQHandler();
}

WEAK void DMA0_CH9_IRQHandler(void)
{
    DMA0_CH9_DriverIRQHandler();
}

WEAK void DMA0_CH10_IRQHandler(void)
{
    DMA0_CH10_DriverIRQHandler();
}

WEAK void DMA0_CH11_IRQHandler(void)
{
    DMA0_CH11_DriverIRQHandler();
}

WEAK void DMA0_CH12_IRQHandler(void)
{
    DMA0_CH12_DriverIRQHandler();
}

WEAK void DMA0_CH13_IRQHandler(void)
{
    DMA0_CH13_DriverIRQHandler();
}

WEAK void DMA0_CH14_IRQHandler(void)
{
    DMA0_CH14_DriverIRQHandler();
}

WEAK void DMA0_CH15_IRQHandler(void)
{
    DMA0_CH15_DriverIRQHandler();
}

WEAK void DMA0_CH16_IRQHandler(void)
{
    DMA0_CH16_DriverIRQHandler();
}

WEAK void DMA0_CH17_IRQHandler(void)
{
    DMA0_CH17_DriverIRQHandler();
}

WEAK void DMA0_CH18_IRQHandler(void)
{
    DMA0_CH18_DriverIRQHandler();
}

WEAK void DMA0_CH19_IRQHandler(void)
{
    DMA0_CH19_DriverIRQHandler();
}

WEAK void DMA0_CH20_IRQHandler(void)
{
    DMA0_CH20_DriverIRQHandler();
}

WEAK void DMA0_CH21_IRQHandler(void)
{
    DMA0_CH21_DriverIRQHandler();
}

WEAK void DMA0_CH22_IRQHandler(void)
{
    DMA0_CH22_DriverIRQHandler();
}

WEAK void DMA0_CH23_IRQHandler(void)
{
    DMA0_CH23_DriverIRQHandler();
}

WEAK void DMA1_CH0_IRQHandler(void)
{
    DMA1_CH0_DriverIRQHandler();
}

WEAK void DMA1_CH1_IRQHandler(void)
{
    DMA1_CH1_DriverIRQHandler();
}

WEAK void DMA1_CH2_IRQHandler(void)
{
    DMA1_CH2_DriverIRQHandler();
}

WEAK void DMA1_CH3_IRQHandler(void)
{
    DMA1_CH3_DriverIRQHandler();
}

WEAK void DMA1_CH4_IRQHandler(void)
{
    DMA1_CH4_DriverIRQHandler();
}

WEAK void DMA1_CH5_IRQHandler(void)
{
    DMA1_CH5_DriverIRQHandler();
}

WEAK void DMA1_CH6_IRQHandler(void)
{
    DMA1_CH6_DriverIRQHandler();
}

WEAK void DMA1_CH7_IRQHandler(void)
{
    DMA1_CH7_DriverIRQHandler();
}

WEAK void DMA1_CH8_IRQHandler(void)
{
    DMA1_CH8_DriverIRQHandler();
}

WEAK void DMA1_CH9_IRQHandler(void)
{
    DMA1_CH9_DriverIRQHandler();
}

WEAK void DMA1_CH10_IRQHandler(void)
{
    DMA1_CH10_DriverIRQHandler();
}

WEAK void DMA1_CH11_IRQHandler(void)
{
    DMA1_CH11_DriverIRQHandler();
}

WEAK void DMA0_IRQHandler(void)
{
    DMA0_DriverIRQHandler();
}

WEAK void DMA1_IRQHandler(void)
{
    DMA1_DriverIRQHandler();
}

WEAK void CTI_INT0_IRQHandler(void)
{
    CTI_INT0_DriverIRQHandler();
}

WEAK void CTI_INT1_IRQHandler(void)
{
    CTI_INT1_DriverIRQHandler();
}

WEAK void UTICK_IRQHandler(void)
{
    UTICK_DriverIRQHandler();
}

WEAK void MRT0_IRQHandler(void)
{
    MRT0_DriverIRQHandler();
}

WEAK void CTIMER0_IRQHandler(void)
{
    CTIMER0_DriverIRQHandler();
}

WEAK void CTIMER1_IRQHandler(void)
{
    CTIMER1_DriverIRQHandler();
}

WEAK void CTIMER2_IRQHandler(void)
{
    CTIMER2_DriverIRQHandler();
}

WEAK void CTIMER3_IRQHandler(void)
{
    CTIMER3_DriverIRQHandler();
}

WEAK void CTIMER4_IRQHandler(void)
{
    CTIMER4_DriverIRQHandler();
}

WEAK void SCT0_IRQHandler(void)
{
    SCT0_DriverIRQHandler();
}

WEAK void OS_EVENT_IRQHandler(void)
{
    OS_EVENT_DriverIRQHandler();
}

WEAK void WDT0_IRQHandler(void)
{
    WDT0_DriverIRQHandler();
}

WEAK void FLEXCOMM0_IRQHandler(void)
{
    FLEXCOMM0_DriverIRQHandler();
}

WEAK void FLEXCOMM1_IRQHandler(void)
{
    FLEXCOMM1_DriverIRQHandler();
}

WEAK void FLEXCOMM2_IRQHandler(void)
{
    FLEXCOMM2_DriverIRQHandler();
}

WEAK void FLEXCOMM3_IRQHandler(void)
{
    FLEXCOMM3_DriverIRQHandler();
}

WEAK void FLEXCOMM4_IRQHandler(void)
{
    FLEXCOMM4_DriverIRQHandler();
}

WEAK void FLEXCOMM5_IRQHandler(void)
{
    FLEXCOMM5_DriverIRQHandler();
}

WEAK void XSPI0_IRQHandler(void)
{
    XSPI0_DriverIRQHandler();
}

WEAK void I3C0_IRQHandler(void)
{
    I3C0_DriverIRQHandler();
}

WEAK void GINT0_IRQHandler(void)
{
    GINT0_DriverIRQHandler();
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

WEAK void PIN_INT4_IRQHandler(void)
{
    PIN_INT4_DriverIRQHandler();
}

WEAK void PIN_INT5_IRQHandler(void)
{
    PIN_INT5_DriverIRQHandler();
}

WEAK void PIN_INT6_IRQHandler(void)
{
    PIN_INT6_DriverIRQHandler();
}

WEAK void PIN_INT7_IRQHandler(void)
{
    PIN_INT7_DriverIRQHandler();
}

WEAK void GPIO_INTA_IRQHandler(void)
{
    GPIO_INTA_DriverIRQHandler();
}

WEAK void GPIO_INTB_IRQHandler(void)
{
    GPIO_INTB_DriverIRQHandler();
}

WEAK void SEC_GPIO_INTA_IRQHandler(void)
{
    SEC_GPIO_INTA_DriverIRQHandler();
}

WEAK void SEC_GPIO_INTB_IRQHandler(void)
{
    SEC_GPIO_INTB_DriverIRQHandler();
}

WEAK void SEC_GPIO_INT0_IRQ0_IRQHandler(void)
{
    SEC_GPIO_INT0_IRQ0_DriverIRQHandler();
}

WEAK void SEC_GPIO_INT0_IRQ1_IRQHandler(void)
{
    SEC_GPIO_INT0_IRQ1_DriverIRQHandler();
}

WEAK void FREQME_IRQHandler(void)
{
    FREQME_DriverIRQHandler();
}

WEAK void CDOG_IRQHandler(void)
{
    CDOG_DriverIRQHandler();
}

WEAK void AHB_MATRIX_IRQHandler(void)
{
    AHB_MATRIX_DriverIRQHandler();
}

WEAK void HYPERVISOR_IRQHandler(void)
{
    HYPERVISOR_DriverIRQHandler();
}

WEAK void SGI0_IRQHandler(void)
{
    SGI0_DriverIRQHandler();
}

WEAK void PKC_IRQHandler(void)
{
    PKC_DriverIRQHandler();
}

WEAK void TRNG0_IRQHandler(void)
{
    TRNG0_DriverIRQHandler();
}

WEAK void ITRC_IRQHandler(void)
{
    ITRC_DriverIRQHandler();
}

WEAK void GLIKEY0_IRQHandler(void)
{
    GLIKEY0_DriverIRQHandler();
}

WEAK void TDET_IRQHandler(void)
{
    TDET_DriverIRQHandler();
}

WEAK void GDET_IRQHandler(void)
{
    GDET_DriverIRQHandler();
}

WEAK void SECURE_ERR_IRQHandler(void)
{
    SECURE_ERR_DriverIRQHandler();
}

WEAK void OCOTP_IRQHandler(void)
{
    OCOTP_DriverIRQHandler();
}

WEAK void DATAPORT_EVENT0_IRQHandler(void)
{
    DATAPORT_EVENT0_DriverIRQHandler();
}

WEAK void DATAPORT_EVENT1_IRQHandler(void)
{
    DATAPORT_EVENT1_DriverIRQHandler();
}

WEAK void DATAPORT_EVENT2_IRQHandler(void)
{
    DATAPORT_EVENT2_DriverIRQHandler();
}

WEAK void DATAPORT_EVENT3_IRQHandler(void)
{
    DATAPORT_EVENT3_DriverIRQHandler();
}

WEAK void VISION_IRQHandler(void)
{
    VISION_DriverIRQHandler();
}

WEAK void PMRC_IRQHandler(void)
{
    PMRC_DriverIRQHandler();
}

WEAK void Reserved108_IRQHandler(void)
{
    Reserved108_DriverIRQHandler();
}

WEAK void NSS_CM_EVENT0_IRQHandler(void)
{
    NSS_CM_EVENT0_DriverIRQHandler();
}

WEAK void NSS_CM_EVENT1_IRQHandler(void)
{
    NSS_CM_EVENT1_DriverIRQHandler();
}

WEAK void NSS_CM_EVENT2_IRQHandler(void)
{
    NSS_CM_EVENT2_DriverIRQHandler();
}

WEAK void NSS_CM_EVENT3_IRQHandler(void)
{
    NSS_CM_EVENT3_DriverIRQHandler();
}

WEAK void NSS_CM_EVENT4_IRQHandler(void)
{
    NSS_CM_EVENT4_DriverIRQHandler();
}

WEAK void NSS_CM_EVENT5_IRQHandler(void)
{
    NSS_CM_EVENT5_DriverIRQHandler();
}

WEAK void NSS_CM_EVENT6_IRQHandler(void)
{
    NSS_CM_EVENT6_DriverIRQHandler();
}

WEAK void NSS_CM_EVENT7_IRQHandler(void)
{
    NSS_CM_EVENT7_DriverIRQHandler();
}

WEAK void NSS_XSP_EVENT0_IRQHandler(void)
{
    NSS_XSP_EVENT0_DriverIRQHandler();
}

WEAK void NSS_XSP_EVENT1_IRQHandler(void)
{
    NSS_XSP_EVENT1_DriverIRQHandler();
}

WEAK void NSS_XSP_EVENT2_IRQHandler(void)
{
    NSS_XSP_EVENT2_DriverIRQHandler();
}

WEAK void NSS_XSP_EVENT3_IRQHandler(void)
{
    NSS_XSP_EVENT3_DriverIRQHandler();
}

WEAK void NSS_XSP_EVENT4_IRQHandler(void)
{
    NSS_XSP_EVENT4_DriverIRQHandler();
}

WEAK void NSS_XSP_EVENT5_IRQHandler(void)
{
    NSS_XSP_EVENT5_DriverIRQHandler();
}

WEAK void NSS_XSP_EVENT6_IRQHandler(void)
{
    NSS_XSP_EVENT6_DriverIRQHandler();
}

WEAK void NSS_XSP_EVENT7_IRQHandler(void)
{
    NSS_XSP_EVENT7_DriverIRQHandler();
}

WEAK void NSS_DMA_EVENT0_IRQHandler(void)
{
    NSS_DMA_EVENT0_DriverIRQHandler();
}

WEAK void NSS_DMA_EVENT1_IRQHandler(void)
{
    NSS_DMA_EVENT1_DriverIRQHandler();
}

WEAK void NSS_DMA_EVENT2_IRQHandler(void)
{
    NSS_DMA_EVENT2_DriverIRQHandler();
}

WEAK void NSS_DMA_EVENT3_IRQHandler(void)
{
    NSS_DMA_EVENT3_DriverIRQHandler();
}

WEAK void NSS_DMA_EVENT4_IRQHandler(void)
{
    NSS_DMA_EVENT4_DriverIRQHandler();
}

WEAK void NSS_DMA_EVENT5_IRQHandler(void)
{
    NSS_DMA_EVENT5_DriverIRQHandler();
}

WEAK void NSS_DMA_EVENT6_IRQHandler(void)
{
    NSS_DMA_EVENT6_DriverIRQHandler();
}

WEAK void NSS_DMA_EVENT7_IRQHandler(void)
{
    NSS_DMA_EVENT7_DriverIRQHandler();
}

WEAK void NSS_U85_IRQHandler(void)
{
    NSS_U85_DriverIRQHandler();
}

WEAK void ADSS_PROG_EVENT0_IRQHandler(void)
{
    ADSS_PROG_EVENT0_DriverIRQHandler();
}

WEAK void ADSS_PROG_EVENT1_IRQHandler(void)
{
    ADSS_PROG_EVENT1_DriverIRQHandler();
}

WEAK void ADSS_PROG_EVENT2_IRQHandler(void)
{
    ADSS_PROG_EVENT2_DriverIRQHandler();
}

WEAK void ADSS_PROG_EVENT3_IRQHandler(void)
{
    ADSS_PROG_EVENT3_DriverIRQHandler();
}

WEAK void ADSS_PROG_EVENT4_IRQHandler(void)
{
    ADSS_PROG_EVENT4_DriverIRQHandler();
}

WEAK void ADSS_PROG_EVENT5_IRQHandler(void)
{
    ADSS_PROG_EVENT5_DriverIRQHandler();
}

WEAK void ADSS_PROG_EVENT6_IRQHandler(void)
{
    ADSS_PROG_EVENT6_DriverIRQHandler();
}

WEAK void ADSS_PROG_EVENT7_IRQHandler(void)
{
    ADSS_PROG_EVENT7_DriverIRQHandler();
}

WEAK void NSS_ERROR_IRQHandler(void)
{
    NSS_ERROR_DriverIRQHandler();
}

WEAK void ADSS_ERROR_IRQHandler(void)
{
    ADSS_ERROR_DriverIRQHandler();
}

//*****************************************************************************

#if defined(DEBUG)
#if defined(__GNUC__)
#pragma GCC pop_options
#endif //(__GNUC__)
#endif //(DEBUG)
