/* ------------------------------------------------------------------------- */
/*  @file:    startup_MIMXRT595S_cm33.s                                      */
/*  @purpose: CMSIS Cortex-M33 Core Device Startup File                      */
/*            MIMXRT595S_cm33                                                */
/*  @version: 6.0                                                            */
/*  @date:    2024-10-29                                                     */
/*  @build:   b250520                                                        */
/* ------------------------------------------------------------------------- */
/*                                                                           */
/* Copyright 1997-2016 Freescale Semiconductor, Inc.                         */
/* Copyright 2016-2025 NXP                                                   */
/* SPDX-License-Identifier: BSD-3-Clause                                     */
/*****************************************************************************/
/* Version: GCC for ARM Embedded Processors                                  */
/*****************************************************************************/
    .syntax unified
    .arch armv8-m.main
    .eabi_attribute Tag_ABI_align_preserved, 1 /*8-byte alignment */

    .section .isr_vector, "a"
    .align 2
    .globl __Vectors
__Vectors:
    .long   Image$$ARM_LIB_STACK$$ZI$$Limit                 /* Top of Stack */
    .long   Reset_Handler                                   /* Reset Handler */
    .long   NMI_Handler                                     /* NMI Handler*/
    .long   HardFault_Handler                               /* Hard Fault Handler*/
    .long   MemManage_Handler                               /* MPU Fault Handler*/
    .long   BusFault_Handler                                /* Bus Fault Handler*/
    .long   UsageFault_Handler                              /* Usage Fault Handler*/
    .long   SecureFault_Handler                             /* Secure Fault Handler*/
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
    .long   0x280000                                        /* Image length*/
#else
    .long   Load$$LR$$LR_m_interrupts$$Length               /* Image length*/
#endif
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   SVC_Handler                                     /* SVCall Handler*/
    .long   DebugMon_Handler                                /* Debug Monitor Handler*/
    .long   __Vectors                                       /* Image load address*/
    .long   PendSV_Handler                                  /* PendSV Handler*/
    .long   SysTick_Handler                                 /* SysTick Handler*/

                                                            /* External Interrupts*/
    .long   WDT0_IRQHandler                                 /* Watchdog timer interrupt*/
    .long   DMA0_IRQHandler                                 /* DMA interrupt*/
    .long   GPIO_INTA_IRQHandler                            /* GPIO Interrupt A*/
    .long   GPIO_INTB_IRQHandler                            /* GPIO Interrupt B*/
    .long   PIN_INT0_IRQHandler                             /* General Purpose Input/Output interrupt 0*/
    .long   PIN_INT1_IRQHandler                             /* General Purpose Input/Output interrupt 1*/
    .long   PIN_INT2_IRQHandler                             /* General Purpose Input/Output interrupt 2*/
    .long   PIN_INT3_IRQHandler                             /* General Purpose Input/Output interrupt 3*/
    .long   UTICK0_IRQHandler                               /* Micro-tick Timer*/
    .long   MRT0_IRQHandler                                 /* Multi-Rate Timer*/
    .long   CTIMER0_IRQHandler                              /* Standard counter/timer CTIMER0*/
    .long   CTIMER1_IRQHandler                              /* Standard counter/timer CTIMER1*/
    .long   SCT0_IRQHandler                                 /* SCTimer/PWM*/
    .long   CTIMER3_IRQHandler                              /* Standard counter/timer CTIMER3*/
    .long   FLEXCOMM0_IRQHandler                            /* FlexComm interrupt*/
    .long   FLEXCOMM1_IRQHandler                            /* FlexComm interrupt*/
    .long   FLEXCOMM2_IRQHandler                            /* FlexComm interrupt*/
    .long   FLEXCOMM3_IRQHandler                            /* FlexComm interrupt*/
    .long   FLEXCOMM4_IRQHandler                            /* FlexComm interrupt*/
    .long   FLEXCOMM5_IRQHandler                            /* FlexComm interrupt*/
    .long   FLEXCOMM14_IRQHandler                           /* FlexComm interrupt. Standalone SPI*/
    .long   FLEXCOMM15_IRQHandler                           /* FlexComm interrupt. Standalone I2C*/
    .long   ADC0_IRQHandler                                 /* Analog-to-Digital Converter interrupt*/
    .long   Reserved39_IRQHandler                           /* Reserved interrupt*/
    .long   ACMP_IRQHandler                                 /* Analog comparator Interrupts*/
    .long   DMIC0_IRQHandler                                /* Digital Microphone Interface interrupt*/
    .long   Reserved42_IRQHandler                           /* Reserved interrupt*/
    .long   HYPERVISOR_IRQHandler                           /* Hypervisor interrupt*/
    .long   SECURE_VIOLATION_IRQHandler                     /* Secure violation interrupt*/
    .long   HWVAD0_IRQHandler                               /* Hardware Voice Activity Detector interrupt*/
    .long   Reserved46_IRQHandler                           /* Reserved interrupt*/
    .long   RNG_IRQHandler                                  /* Random Number Generator interrupt*/
    .long   RTC_IRQHandler                                  /* Real Time Clock Alarm interrupt OR Wakeup timer interrupt*/
    .long   DSP_TIE_EXPSTATE1_IRQHandler                    /* DSP interrupt*/
    .long   MU_A_IRQHandler                                 /* Messaging Unit - Side A*/
    .long   PIN_INT4_IRQHandler                             /* General Purpose Input/Output interrupt 4*/
    .long   PIN_INT5_IRQHandler                             /* General Purpose Input/Output interrupt 5*/
    .long   PIN_INT6_IRQHandler                             /* General Purpose Input/Output interrupt 6*/
    .long   PIN_INT7_IRQHandler                             /* General Purpose Input/Output interrupt 7*/
    .long   CTIMER2_IRQHandler                              /* Standard counter/timer CTIMER2*/
    .long   CTIMER4_IRQHandler                              /* Standard counter/timer CTIMER4*/
    .long   OS_EVENT_IRQHandler                             /* Event timer M33 Wakeup/interrupt*/
    .long   FLEXSPI0_FLEXSPI1_IRQHandler                    /* FlexSPI0_IRQ OR FlexSPI1_IRQ*/
    .long   FLEXCOMM6_IRQHandler                            /* FlexComm interrupt*/
    .long   FLEXCOMM7_IRQHandler                            /* FlexComm interrupt*/
    .long   USDHC0_IRQHandler                               /* USDHC interrupt*/
    .long   USDHC1_IRQHandler                               /* USDHC interrupt*/
    .long   SGPIO_INTA_IRQHandler                           /* Secure GPIO HS interrupt 0*/
    .long   SGPIO_INTB_IRQHandler                           /* Secure GPIO HS interrupt 1*/
    .long   I3C0_IRQHandler                                 /* Improved Inter Integrated Circuit 0 interrupt*/
    .long   USB0_IRQHandler                                 /* USB device*/
    .long   USB0_NEEDCLK_IRQHandler                         /* USB Activity Wake-up Interrupt*/
    .long   WDT1_IRQHandler                                 /* Watchdog timer 1 interrupt*/
    .long   USB_PHYDCD_IRQHandler                           /* USBPHY DCD interrupt*/
    .long   DMA1_IRQHandler                                 /* DMA interrupt*/
    .long   PUF_IRQHandler                                  /* QuidKey interrupt*/
    .long   POWERQUAD_IRQHandler                            /* Powerquad interrupt*/
    .long   CASPER_IRQHandler                               /* Caspar interrupt*/
    .long   PMU_PMIC_IRQHandler                             /* Power Management Control interrupt*/
    .long   HASHCRYPT_IRQHandler                            /* SHA interrupt*/
    .long   FLEXCOMM8_IRQHandler                            /* FlexComm interrupt*/
    .long   FLEXCOMM9_IRQHandler                            /* FlexComm interrupt*/
    .long   FLEXCOMM10_IRQHandler                           /* FlexComm interrupt*/
    .long   FLEXCOMM11_IRQHandler                           /* FlexComm interrupt*/
    .long   FLEXCOMM12_IRQHandler                           /* FlexComm interrupt*/
    .long   FLEXCOMM13_IRQHandler                           /* FlexComm interrupt*/
    .long   FLEXCOMM16_IRQHandler                           /* FlexComm interrupt*/
    .long   I3C1_IRQHandler                                 /* Improved Inter Integrated Circuit 1 interrupt*/
    .long   FLEXIO_IRQHandler                               /* Flexible I/O interrupt*/
    .long   LCDIF_IRQHandler                                /* Liquid Crystal Display interface interrupt*/
    .long   GPU_IRQHandler                                  /* Graphics Processor Unit interrupt*/
    .long   MIPI_IRQHandler                                 /* MIPI interrupt*/
    .long   Reserved88_IRQHandler                           /* */
    .long   SDMA_IRQHandler                                 /* Smart DMA Engine Controller interrupt*/

    .size    __Vectors, . - __Vectors

    .section InRoot$$Sections, "ax"
    .thumb

/* Reset Handler */

    .thumb_func
    .align 2
    .weak    Reset_Handler
    .type    Reset_Handler, %function
Reset_Handler:
    cpsid   i               /* Mask interrupts */
    .equ    VTOR, 0xE000ED08
    ldr     r0, =VTOR
    ldr     r1, =__Vectors
    str     r1, [r0]
    ldr     r2, [r1]
    msr     msp, r2
    ldr     r0, =Image$$ARM_LIB_STACK$$ZI$$Base
    msr     msplim, r0
    ldr     r0,=SystemInit
    blx     r0
    cpsie   i               /* Unmask interrupts */
    ldr     r0,=__main
    bx      r0

    .pool
    .size Reset_Handler, . - Reset_Handler

    .text
    .thumb

    .align  1
    .thumb_func
    .weak DefaultISR
    .type DefaultISR, %function
DefaultISR:
    b DefaultISR
    .size DefaultISR, . - DefaultISR

    .align 1
    .thumb_func
    .weak NMI_Handler
    .type NMI_Handler, %function
NMI_Handler:
    ldr   r0,=NMI_Handler
    bx    r0
    .size NMI_Handler, . - NMI_Handler

    .align 1
    .thumb_func
    .weak HardFault_Handler
    .type HardFault_Handler, %function
HardFault_Handler:
    ldr   r0,=HardFault_Handler
    bx    r0
    .size HardFault_Handler, . - HardFault_Handler

    .align 1
    .thumb_func
    .weak SVC_Handler
    .type SVC_Handler, %function
SVC_Handler:
    ldr   r0,=SVC_Handler
    bx    r0
    .size SVC_Handler, . - SVC_Handler

    .align 1
    .thumb_func
    .weak PendSV_Handler
    .type PendSV_Handler, %function
PendSV_Handler:
    ldr   r0,=PendSV_Handler
    bx    r0
    .size PendSV_Handler, . - PendSV_Handler

    .align 1
    .thumb_func
    .weak SysTick_Handler
    .type SysTick_Handler, %function
SysTick_Handler:
    ldr   r0,=SysTick_Handler
    bx    r0
    .size SysTick_Handler, . - SysTick_Handler

    .align 1
    .thumb_func
    .weak WDT0_IRQHandler
    .type WDT0_IRQHandler, %function
WDT0_IRQHandler:
    ldr   r0,=WDT0_DriverIRQHandler
    bx    r0
    .size WDT0_IRQHandler, . - WDT0_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_IRQHandler
    .type DMA0_IRQHandler, %function
DMA0_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_IRQHandler, . - DMA0_IRQHandler

    .align 1
    .thumb_func
    .weak GPIO_INTA_IRQHandler
    .type GPIO_INTA_IRQHandler, %function
GPIO_INTA_IRQHandler:
    ldr   r0,=GPIO_INTA_DriverIRQHandler
    bx    r0
    .size GPIO_INTA_IRQHandler, . - GPIO_INTA_IRQHandler

    .align 1
    .thumb_func
    .weak GPIO_INTB_IRQHandler
    .type GPIO_INTB_IRQHandler, %function
GPIO_INTB_IRQHandler:
    ldr   r0,=GPIO_INTB_DriverIRQHandler
    bx    r0
    .size GPIO_INTB_IRQHandler, . - GPIO_INTB_IRQHandler

    .align 1
    .thumb_func
    .weak PIN_INT0_IRQHandler
    .type PIN_INT0_IRQHandler, %function
PIN_INT0_IRQHandler:
    ldr   r0,=PIN_INT0_DriverIRQHandler
    bx    r0
    .size PIN_INT0_IRQHandler, . - PIN_INT0_IRQHandler

    .align 1
    .thumb_func
    .weak PIN_INT1_IRQHandler
    .type PIN_INT1_IRQHandler, %function
PIN_INT1_IRQHandler:
    ldr   r0,=PIN_INT1_DriverIRQHandler
    bx    r0
    .size PIN_INT1_IRQHandler, . - PIN_INT1_IRQHandler

    .align 1
    .thumb_func
    .weak PIN_INT2_IRQHandler
    .type PIN_INT2_IRQHandler, %function
PIN_INT2_IRQHandler:
    ldr   r0,=PIN_INT2_DriverIRQHandler
    bx    r0
    .size PIN_INT2_IRQHandler, . - PIN_INT2_IRQHandler

    .align 1
    .thumb_func
    .weak PIN_INT3_IRQHandler
    .type PIN_INT3_IRQHandler, %function
PIN_INT3_IRQHandler:
    ldr   r0,=PIN_INT3_DriverIRQHandler
    bx    r0
    .size PIN_INT3_IRQHandler, . - PIN_INT3_IRQHandler

    .align 1
    .thumb_func
    .weak UTICK0_IRQHandler
    .type UTICK0_IRQHandler, %function
UTICK0_IRQHandler:
    ldr   r0,=UTICK0_DriverIRQHandler
    bx    r0
    .size UTICK0_IRQHandler, . - UTICK0_IRQHandler

    .align 1
    .thumb_func
    .weak MRT0_IRQHandler
    .type MRT0_IRQHandler, %function
MRT0_IRQHandler:
    ldr   r0,=MRT0_DriverIRQHandler
    bx    r0
    .size MRT0_IRQHandler, . - MRT0_IRQHandler

    .align 1
    .thumb_func
    .weak CTIMER0_IRQHandler
    .type CTIMER0_IRQHandler, %function
CTIMER0_IRQHandler:
    ldr   r0,=CTIMER0_DriverIRQHandler
    bx    r0
    .size CTIMER0_IRQHandler, . - CTIMER0_IRQHandler

    .align 1
    .thumb_func
    .weak CTIMER1_IRQHandler
    .type CTIMER1_IRQHandler, %function
CTIMER1_IRQHandler:
    ldr   r0,=CTIMER1_DriverIRQHandler
    bx    r0
    .size CTIMER1_IRQHandler, . - CTIMER1_IRQHandler

    .align 1
    .thumb_func
    .weak SCT0_IRQHandler
    .type SCT0_IRQHandler, %function
SCT0_IRQHandler:
    ldr   r0,=SCT0_DriverIRQHandler
    bx    r0
    .size SCT0_IRQHandler, . - SCT0_IRQHandler

    .align 1
    .thumb_func
    .weak CTIMER3_IRQHandler
    .type CTIMER3_IRQHandler, %function
CTIMER3_IRQHandler:
    ldr   r0,=CTIMER3_DriverIRQHandler
    bx    r0
    .size CTIMER3_IRQHandler, . - CTIMER3_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM0_IRQHandler
    .type FLEXCOMM0_IRQHandler, %function
FLEXCOMM0_IRQHandler:
    ldr   r0,=FLEXCOMM0_DriverIRQHandler
    bx    r0
    .size FLEXCOMM0_IRQHandler, . - FLEXCOMM0_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM1_IRQHandler
    .type FLEXCOMM1_IRQHandler, %function
FLEXCOMM1_IRQHandler:
    ldr   r0,=FLEXCOMM1_DriverIRQHandler
    bx    r0
    .size FLEXCOMM1_IRQHandler, . - FLEXCOMM1_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM2_IRQHandler
    .type FLEXCOMM2_IRQHandler, %function
FLEXCOMM2_IRQHandler:
    ldr   r0,=FLEXCOMM2_DriverIRQHandler
    bx    r0
    .size FLEXCOMM2_IRQHandler, . - FLEXCOMM2_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM3_IRQHandler
    .type FLEXCOMM3_IRQHandler, %function
FLEXCOMM3_IRQHandler:
    ldr   r0,=FLEXCOMM3_DriverIRQHandler
    bx    r0
    .size FLEXCOMM3_IRQHandler, . - FLEXCOMM3_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM4_IRQHandler
    .type FLEXCOMM4_IRQHandler, %function
FLEXCOMM4_IRQHandler:
    ldr   r0,=FLEXCOMM4_DriverIRQHandler
    bx    r0
    .size FLEXCOMM4_IRQHandler, . - FLEXCOMM4_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM5_IRQHandler
    .type FLEXCOMM5_IRQHandler, %function
FLEXCOMM5_IRQHandler:
    ldr   r0,=FLEXCOMM5_DriverIRQHandler
    bx    r0
    .size FLEXCOMM5_IRQHandler, . - FLEXCOMM5_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM14_IRQHandler
    .type FLEXCOMM14_IRQHandler, %function
FLEXCOMM14_IRQHandler:
    ldr   r0,=FLEXCOMM14_DriverIRQHandler
    bx    r0
    .size FLEXCOMM14_IRQHandler, . - FLEXCOMM14_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM15_IRQHandler
    .type FLEXCOMM15_IRQHandler, %function
FLEXCOMM15_IRQHandler:
    ldr   r0,=FLEXCOMM15_DriverIRQHandler
    bx    r0
    .size FLEXCOMM15_IRQHandler, . - FLEXCOMM15_IRQHandler

    .align 1
    .thumb_func
    .weak ADC0_IRQHandler
    .type ADC0_IRQHandler, %function
ADC0_IRQHandler:
    ldr   r0,=ADC0_DriverIRQHandler
    bx    r0
    .size ADC0_IRQHandler, . - ADC0_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved39_IRQHandler
    .type Reserved39_IRQHandler, %function
Reserved39_IRQHandler:
    ldr   r0,=Reserved39_DriverIRQHandler
    bx    r0
    .size Reserved39_IRQHandler, . - Reserved39_IRQHandler

    .align 1
    .thumb_func
    .weak ACMP_IRQHandler
    .type ACMP_IRQHandler, %function
ACMP_IRQHandler:
    ldr   r0,=ACMP_DriverIRQHandler
    bx    r0
    .size ACMP_IRQHandler, . - ACMP_IRQHandler

    .align 1
    .thumb_func
    .weak DMIC0_IRQHandler
    .type DMIC0_IRQHandler, %function
DMIC0_IRQHandler:
    ldr   r0,=DMIC0_DriverIRQHandler
    bx    r0
    .size DMIC0_IRQHandler, . - DMIC0_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved42_IRQHandler
    .type Reserved42_IRQHandler, %function
Reserved42_IRQHandler:
    ldr   r0,=Reserved42_DriverIRQHandler
    bx    r0
    .size Reserved42_IRQHandler, . - Reserved42_IRQHandler

    .align 1
    .thumb_func
    .weak HYPERVISOR_IRQHandler
    .type HYPERVISOR_IRQHandler, %function
HYPERVISOR_IRQHandler:
    ldr   r0,=HYPERVISOR_DriverIRQHandler
    bx    r0
    .size HYPERVISOR_IRQHandler, . - HYPERVISOR_IRQHandler

    .align 1
    .thumb_func
    .weak SECURE_VIOLATION_IRQHandler
    .type SECURE_VIOLATION_IRQHandler, %function
SECURE_VIOLATION_IRQHandler:
    ldr   r0,=SECURE_VIOLATION_DriverIRQHandler
    bx    r0
    .size SECURE_VIOLATION_IRQHandler, . - SECURE_VIOLATION_IRQHandler

    .align 1
    .thumb_func
    .weak HWVAD0_IRQHandler
    .type HWVAD0_IRQHandler, %function
HWVAD0_IRQHandler:
    ldr   r0,=HWVAD0_DriverIRQHandler
    bx    r0
    .size HWVAD0_IRQHandler, . - HWVAD0_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved46_IRQHandler
    .type Reserved46_IRQHandler, %function
Reserved46_IRQHandler:
    ldr   r0,=Reserved46_DriverIRQHandler
    bx    r0
    .size Reserved46_IRQHandler, . - Reserved46_IRQHandler

    .align 1
    .thumb_func
    .weak RNG_IRQHandler
    .type RNG_IRQHandler, %function
RNG_IRQHandler:
    ldr   r0,=RNG_DriverIRQHandler
    bx    r0
    .size RNG_IRQHandler, . - RNG_IRQHandler

    .align 1
    .thumb_func
    .weak RTC_IRQHandler
    .type RTC_IRQHandler, %function
RTC_IRQHandler:
    ldr   r0,=RTC_DriverIRQHandler
    bx    r0
    .size RTC_IRQHandler, . - RTC_IRQHandler

    .align 1
    .thumb_func
    .weak DSP_TIE_EXPSTATE1_IRQHandler
    .type DSP_TIE_EXPSTATE1_IRQHandler, %function
DSP_TIE_EXPSTATE1_IRQHandler:
    ldr   r0,=DSP_TIE_EXPSTATE1_DriverIRQHandler
    bx    r0
    .size DSP_TIE_EXPSTATE1_IRQHandler, . - DSP_TIE_EXPSTATE1_IRQHandler

    .align 1
    .thumb_func
    .weak MU_A_IRQHandler
    .type MU_A_IRQHandler, %function
MU_A_IRQHandler:
    ldr   r0,=MU_A_DriverIRQHandler
    bx    r0
    .size MU_A_IRQHandler, . - MU_A_IRQHandler

    .align 1
    .thumb_func
    .weak PIN_INT4_IRQHandler
    .type PIN_INT4_IRQHandler, %function
PIN_INT4_IRQHandler:
    ldr   r0,=PIN_INT4_DriverIRQHandler
    bx    r0
    .size PIN_INT4_IRQHandler, . - PIN_INT4_IRQHandler

    .align 1
    .thumb_func
    .weak PIN_INT5_IRQHandler
    .type PIN_INT5_IRQHandler, %function
PIN_INT5_IRQHandler:
    ldr   r0,=PIN_INT5_DriverIRQHandler
    bx    r0
    .size PIN_INT5_IRQHandler, . - PIN_INT5_IRQHandler

    .align 1
    .thumb_func
    .weak PIN_INT6_IRQHandler
    .type PIN_INT6_IRQHandler, %function
PIN_INT6_IRQHandler:
    ldr   r0,=PIN_INT6_DriverIRQHandler
    bx    r0
    .size PIN_INT6_IRQHandler, . - PIN_INT6_IRQHandler

    .align 1
    .thumb_func
    .weak PIN_INT7_IRQHandler
    .type PIN_INT7_IRQHandler, %function
PIN_INT7_IRQHandler:
    ldr   r0,=PIN_INT7_DriverIRQHandler
    bx    r0
    .size PIN_INT7_IRQHandler, . - PIN_INT7_IRQHandler

    .align 1
    .thumb_func
    .weak CTIMER2_IRQHandler
    .type CTIMER2_IRQHandler, %function
CTIMER2_IRQHandler:
    ldr   r0,=CTIMER2_DriverIRQHandler
    bx    r0
    .size CTIMER2_IRQHandler, . - CTIMER2_IRQHandler

    .align 1
    .thumb_func
    .weak CTIMER4_IRQHandler
    .type CTIMER4_IRQHandler, %function
CTIMER4_IRQHandler:
    ldr   r0,=CTIMER4_DriverIRQHandler
    bx    r0
    .size CTIMER4_IRQHandler, . - CTIMER4_IRQHandler

    .align 1
    .thumb_func
    .weak OS_EVENT_IRQHandler
    .type OS_EVENT_IRQHandler, %function
OS_EVENT_IRQHandler:
    ldr   r0,=OS_EVENT_DriverIRQHandler
    bx    r0
    .size OS_EVENT_IRQHandler, . - OS_EVENT_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXSPI0_FLEXSPI1_IRQHandler
    .type FLEXSPI0_FLEXSPI1_IRQHandler, %function
FLEXSPI0_FLEXSPI1_IRQHandler:
    ldr   r0,=FLEXSPI0_FLEXSPI1_DriverIRQHandler
    bx    r0
    .size FLEXSPI0_FLEXSPI1_IRQHandler, . - FLEXSPI0_FLEXSPI1_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM6_IRQHandler
    .type FLEXCOMM6_IRQHandler, %function
FLEXCOMM6_IRQHandler:
    ldr   r0,=FLEXCOMM6_DriverIRQHandler
    bx    r0
    .size FLEXCOMM6_IRQHandler, . - FLEXCOMM6_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM7_IRQHandler
    .type FLEXCOMM7_IRQHandler, %function
FLEXCOMM7_IRQHandler:
    ldr   r0,=FLEXCOMM7_DriverIRQHandler
    bx    r0
    .size FLEXCOMM7_IRQHandler, . - FLEXCOMM7_IRQHandler

    .align 1
    .thumb_func
    .weak USDHC0_IRQHandler
    .type USDHC0_IRQHandler, %function
USDHC0_IRQHandler:
    ldr   r0,=USDHC0_DriverIRQHandler
    bx    r0
    .size USDHC0_IRQHandler, . - USDHC0_IRQHandler

    .align 1
    .thumb_func
    .weak USDHC1_IRQHandler
    .type USDHC1_IRQHandler, %function
USDHC1_IRQHandler:
    ldr   r0,=USDHC1_DriverIRQHandler
    bx    r0
    .size USDHC1_IRQHandler, . - USDHC1_IRQHandler

    .align 1
    .thumb_func
    .weak SGPIO_INTA_IRQHandler
    .type SGPIO_INTA_IRQHandler, %function
SGPIO_INTA_IRQHandler:
    ldr   r0,=SGPIO_INTA_DriverIRQHandler
    bx    r0
    .size SGPIO_INTA_IRQHandler, . - SGPIO_INTA_IRQHandler

    .align 1
    .thumb_func
    .weak SGPIO_INTB_IRQHandler
    .type SGPIO_INTB_IRQHandler, %function
SGPIO_INTB_IRQHandler:
    ldr   r0,=SGPIO_INTB_DriverIRQHandler
    bx    r0
    .size SGPIO_INTB_IRQHandler, . - SGPIO_INTB_IRQHandler

    .align 1
    .thumb_func
    .weak I3C0_IRQHandler
    .type I3C0_IRQHandler, %function
I3C0_IRQHandler:
    ldr   r0,=I3C0_DriverIRQHandler
    bx    r0
    .size I3C0_IRQHandler, . - I3C0_IRQHandler

    .align 1
    .thumb_func
    .weak USB0_IRQHandler
    .type USB0_IRQHandler, %function
USB0_IRQHandler:
    ldr   r0,=USB0_DriverIRQHandler
    bx    r0
    .size USB0_IRQHandler, . - USB0_IRQHandler

    .align 1
    .thumb_func
    .weak USB0_NEEDCLK_IRQHandler
    .type USB0_NEEDCLK_IRQHandler, %function
USB0_NEEDCLK_IRQHandler:
    ldr   r0,=USB0_NEEDCLK_DriverIRQHandler
    bx    r0
    .size USB0_NEEDCLK_IRQHandler, . - USB0_NEEDCLK_IRQHandler

    .align 1
    .thumb_func
    .weak WDT1_IRQHandler
    .type WDT1_IRQHandler, %function
WDT1_IRQHandler:
    ldr   r0,=WDT1_DriverIRQHandler
    bx    r0
    .size WDT1_IRQHandler, . - WDT1_IRQHandler

    .align 1
    .thumb_func
    .weak USB_PHYDCD_IRQHandler
    .type USB_PHYDCD_IRQHandler, %function
USB_PHYDCD_IRQHandler:
    ldr   r0,=USB_PHYDCD_DriverIRQHandler
    bx    r0
    .size USB_PHYDCD_IRQHandler, . - USB_PHYDCD_IRQHandler

    .align 1
    .thumb_func
    .weak DMA1_IRQHandler
    .type DMA1_IRQHandler, %function
DMA1_IRQHandler:
    ldr   r0,=DMA1_DriverIRQHandler
    bx    r0
    .size DMA1_IRQHandler, . - DMA1_IRQHandler

    .align 1
    .thumb_func
    .weak PUF_IRQHandler
    .type PUF_IRQHandler, %function
PUF_IRQHandler:
    ldr   r0,=PUF_DriverIRQHandler
    bx    r0
    .size PUF_IRQHandler, . - PUF_IRQHandler

    .align 1
    .thumb_func
    .weak POWERQUAD_IRQHandler
    .type POWERQUAD_IRQHandler, %function
POWERQUAD_IRQHandler:
    ldr   r0,=POWERQUAD_DriverIRQHandler
    bx    r0
    .size POWERQUAD_IRQHandler, . - POWERQUAD_IRQHandler

    .align 1
    .thumb_func
    .weak CASPER_IRQHandler
    .type CASPER_IRQHandler, %function
CASPER_IRQHandler:
    ldr   r0,=CASPER_DriverIRQHandler
    bx    r0
    .size CASPER_IRQHandler, . - CASPER_IRQHandler

    .align 1
    .thumb_func
    .weak PMU_PMIC_IRQHandler
    .type PMU_PMIC_IRQHandler, %function
PMU_PMIC_IRQHandler:
    ldr   r0,=PMU_PMIC_DriverIRQHandler
    bx    r0
    .size PMU_PMIC_IRQHandler, . - PMU_PMIC_IRQHandler

    .align 1
    .thumb_func
    .weak HASHCRYPT_IRQHandler
    .type HASHCRYPT_IRQHandler, %function
HASHCRYPT_IRQHandler:
    ldr   r0,=HASHCRYPT_DriverIRQHandler
    bx    r0
    .size HASHCRYPT_IRQHandler, . - HASHCRYPT_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM8_IRQHandler
    .type FLEXCOMM8_IRQHandler, %function
FLEXCOMM8_IRQHandler:
    ldr   r0,=FLEXCOMM8_DriverIRQHandler
    bx    r0
    .size FLEXCOMM8_IRQHandler, . - FLEXCOMM8_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM9_IRQHandler
    .type FLEXCOMM9_IRQHandler, %function
FLEXCOMM9_IRQHandler:
    ldr   r0,=FLEXCOMM9_DriverIRQHandler
    bx    r0
    .size FLEXCOMM9_IRQHandler, . - FLEXCOMM9_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM10_IRQHandler
    .type FLEXCOMM10_IRQHandler, %function
FLEXCOMM10_IRQHandler:
    ldr   r0,=FLEXCOMM10_DriverIRQHandler
    bx    r0
    .size FLEXCOMM10_IRQHandler, . - FLEXCOMM10_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM11_IRQHandler
    .type FLEXCOMM11_IRQHandler, %function
FLEXCOMM11_IRQHandler:
    ldr   r0,=FLEXCOMM11_DriverIRQHandler
    bx    r0
    .size FLEXCOMM11_IRQHandler, . - FLEXCOMM11_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM12_IRQHandler
    .type FLEXCOMM12_IRQHandler, %function
FLEXCOMM12_IRQHandler:
    ldr   r0,=FLEXCOMM12_DriverIRQHandler
    bx    r0
    .size FLEXCOMM12_IRQHandler, . - FLEXCOMM12_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM13_IRQHandler
    .type FLEXCOMM13_IRQHandler, %function
FLEXCOMM13_IRQHandler:
    ldr   r0,=FLEXCOMM13_DriverIRQHandler
    bx    r0
    .size FLEXCOMM13_IRQHandler, . - FLEXCOMM13_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM16_IRQHandler
    .type FLEXCOMM16_IRQHandler, %function
FLEXCOMM16_IRQHandler:
    ldr   r0,=FLEXCOMM16_DriverIRQHandler
    bx    r0
    .size FLEXCOMM16_IRQHandler, . - FLEXCOMM16_IRQHandler

    .align 1
    .thumb_func
    .weak I3C1_IRQHandler
    .type I3C1_IRQHandler, %function
I3C1_IRQHandler:
    ldr   r0,=I3C1_DriverIRQHandler
    bx    r0
    .size I3C1_IRQHandler, . - I3C1_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXIO_IRQHandler
    .type FLEXIO_IRQHandler, %function
FLEXIO_IRQHandler:
    ldr   r0,=FLEXIO_DriverIRQHandler
    bx    r0
    .size FLEXIO_IRQHandler, . - FLEXIO_IRQHandler

    .align 1
    .thumb_func
    .weak LCDIF_IRQHandler
    .type LCDIF_IRQHandler, %function
LCDIF_IRQHandler:
    ldr   r0,=LCDIF_DriverIRQHandler
    bx    r0
    .size LCDIF_IRQHandler, . - LCDIF_IRQHandler

    .align 1
    .thumb_func
    .weak GPU_IRQHandler
    .type GPU_IRQHandler, %function
GPU_IRQHandler:
    ldr   r0,=GPU_DriverIRQHandler
    bx    r0
    .size GPU_IRQHandler, . - GPU_IRQHandler

    .align 1
    .thumb_func
    .weak MIPI_IRQHandler
    .type MIPI_IRQHandler, %function
MIPI_IRQHandler:
    ldr   r0,=MIPI_DriverIRQHandler
    bx    r0
    .size MIPI_IRQHandler, . - MIPI_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved88_IRQHandler
    .type Reserved88_IRQHandler, %function
Reserved88_IRQHandler:
    ldr   r0,=Reserved88_DriverIRQHandler
    bx    r0
    .size Reserved88_IRQHandler, . - Reserved88_IRQHandler

    .align 1
    .thumb_func
    .weak SDMA_IRQHandler
    .type SDMA_IRQHandler, %function
SDMA_IRQHandler:
    ldr   r0,=SDMA_DriverIRQHandler
    bx    r0
    .size SDMA_IRQHandler, . - SDMA_IRQHandler


/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
    .macro def_irq_handler  handler_name
    .weak \handler_name
    .set  \handler_name, DefaultISR
    .endm

/* Exception Handlers */
    def_irq_handler    MemManage_Handler
    def_irq_handler    BusFault_Handler
    def_irq_handler    UsageFault_Handler
    def_irq_handler    SecureFault_Handler
    def_irq_handler    DebugMon_Handler
    def_irq_handler    WDT0_DriverIRQHandler
    def_irq_handler    DMA0_DriverIRQHandler
    def_irq_handler    GPIO_INTA_DriverIRQHandler
    def_irq_handler    GPIO_INTB_DriverIRQHandler
    def_irq_handler    PIN_INT0_DriverIRQHandler
    def_irq_handler    PIN_INT1_DriverIRQHandler
    def_irq_handler    PIN_INT2_DriverIRQHandler
    def_irq_handler    PIN_INT3_DriverIRQHandler
    def_irq_handler    UTICK0_DriverIRQHandler
    def_irq_handler    MRT0_DriverIRQHandler
    def_irq_handler    CTIMER0_DriverIRQHandler
    def_irq_handler    CTIMER1_DriverIRQHandler
    def_irq_handler    SCT0_DriverIRQHandler
    def_irq_handler    CTIMER3_DriverIRQHandler
    def_irq_handler    FLEXCOMM0_DriverIRQHandler
    def_irq_handler    FLEXCOMM1_DriverIRQHandler
    def_irq_handler    FLEXCOMM2_DriverIRQHandler
    def_irq_handler    FLEXCOMM3_DriverIRQHandler
    def_irq_handler    FLEXCOMM4_DriverIRQHandler
    def_irq_handler    FLEXCOMM5_DriverIRQHandler
    def_irq_handler    FLEXCOMM14_DriverIRQHandler
    def_irq_handler    FLEXCOMM15_DriverIRQHandler
    def_irq_handler    ADC0_DriverIRQHandler
    def_irq_handler    Reserved39_DriverIRQHandler
    def_irq_handler    ACMP_DriverIRQHandler
    def_irq_handler    DMIC0_DriverIRQHandler
    def_irq_handler    Reserved42_DriverIRQHandler
    def_irq_handler    HYPERVISOR_DriverIRQHandler
    def_irq_handler    SECURE_VIOLATION_DriverIRQHandler
    def_irq_handler    HWVAD0_DriverIRQHandler
    def_irq_handler    Reserved46_DriverIRQHandler
    def_irq_handler    RNG_DriverIRQHandler
    def_irq_handler    RTC_DriverIRQHandler
    def_irq_handler    DSP_TIE_EXPSTATE1_DriverIRQHandler
    def_irq_handler    MU_A_DriverIRQHandler
    def_irq_handler    PIN_INT4_DriverIRQHandler
    def_irq_handler    PIN_INT5_DriverIRQHandler
    def_irq_handler    PIN_INT6_DriverIRQHandler
    def_irq_handler    PIN_INT7_DriverIRQHandler
    def_irq_handler    CTIMER2_DriverIRQHandler
    def_irq_handler    CTIMER4_DriverIRQHandler
    def_irq_handler    OS_EVENT_DriverIRQHandler
    def_irq_handler    FLEXSPI0_FLEXSPI1_DriverIRQHandler
    def_irq_handler    FLEXCOMM6_DriverIRQHandler
    def_irq_handler    FLEXCOMM7_DriverIRQHandler
    def_irq_handler    USDHC0_DriverIRQHandler
    def_irq_handler    USDHC1_DriverIRQHandler
    def_irq_handler    SGPIO_INTA_DriverIRQHandler
    def_irq_handler    SGPIO_INTB_DriverIRQHandler
    def_irq_handler    I3C0_DriverIRQHandler
    def_irq_handler    USB0_DriverIRQHandler
    def_irq_handler    USB0_NEEDCLK_DriverIRQHandler
    def_irq_handler    WDT1_DriverIRQHandler
    def_irq_handler    USB_PHYDCD_DriverIRQHandler
    def_irq_handler    DMA1_DriverIRQHandler
    def_irq_handler    PUF_DriverIRQHandler
    def_irq_handler    POWERQUAD_DriverIRQHandler
    def_irq_handler    CASPER_DriverIRQHandler
    def_irq_handler    PMU_PMIC_DriverIRQHandler
    def_irq_handler    HASHCRYPT_DriverIRQHandler
    def_irq_handler    FLEXCOMM8_DriverIRQHandler
    def_irq_handler    FLEXCOMM9_DriverIRQHandler
    def_irq_handler    FLEXCOMM10_DriverIRQHandler
    def_irq_handler    FLEXCOMM11_DriverIRQHandler
    def_irq_handler    FLEXCOMM12_DriverIRQHandler
    def_irq_handler    FLEXCOMM13_DriverIRQHandler
    def_irq_handler    FLEXCOMM16_DriverIRQHandler
    def_irq_handler    I3C1_DriverIRQHandler
    def_irq_handler    FLEXIO_DriverIRQHandler
    def_irq_handler    LCDIF_DriverIRQHandler
    def_irq_handler    GPU_DriverIRQHandler
    def_irq_handler    MIPI_DriverIRQHandler
    def_irq_handler    Reserved88_DriverIRQHandler
    def_irq_handler    SDMA_DriverIRQHandler

    .end
