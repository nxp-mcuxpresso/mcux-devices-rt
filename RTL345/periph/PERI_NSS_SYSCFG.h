/*
** ###################################################################
**     Processors:          IMXRTL3459AAAFAWAR_cm55_core0
**                          IMXRTL3459AAAFAWAR_cm55_core1
**                          IMXRTL3459AAAFBWAR_cm55_core0
**                          IMXRTL3459AAAFBWAR_cm55_core1
**
**     Version:             rev. 1.0, 2026-06-19
**     Build:               b261012
**
**     Abstract:
**         CMSIS Peripheral Access Layer for NSS_SYSCFG
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2026 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2026-06-19)
**         Initial version
**
** ###################################################################
*/

/*!
 * @file PERI_NSS_SYSCFG.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for NSS_SYSCFG
 *
 * CMSIS Peripheral Access Layer for NSS_SYSCFG
 */

#if !defined(PERI_NSS_SYSCFG_H_)
#define PERI_NSS_SYSCFG_H_                       /**< Symbol preventing repeated inclusion */

#if (defined(CPU_IMXRTL3459AAAFAWAR_cm55_core0) || defined(CPU_IMXRTL3459AAAFBWAR_cm55_core0))
#include "IMXRTL3459AAA_cm55_core0_COMMON.h"
#elif (defined(CPU_IMXRTL3459AAAFAWAR_cm55_core1) || defined(CPU_IMXRTL3459AAAFBWAR_cm55_core1))
#include "IMXRTL3459AAA_cm55_core1_COMMON.h"
#else
  #error "No valid CPU defined!"
#endif

/* ----------------------------------------------------------------------------
   -- Device Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Peripheral_access_layer Device Peripheral Access Layer
 * @{
 */


/*
** Start of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic push
  #else
    #pragma push
    #pragma anon_unions
  #endif
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=extended
#else
  #error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- NSS_SYSCFG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_SYSCFG_Peripheral_Access_Layer NSS_SYSCFG Peripheral Access Layer
 * @{
 */

/** NSS_SYSCFG - Register Layout Typedef */
typedef struct {
  __IO uint32_t CM55VTOR;                          /**< Non-secure vector table, offset: 0x0 */
  __IO uint32_t CM55WICCTRL;                       /**< Control of the wicsleep (using the wakeup controller), offset: 0x4 */
  __IO uint32_t CM55CPUWAIT;                       /**< Halt CPU after CM55 system reset release., offset: 0x8 */
  __IO uint32_t CM55COREPSTATE;                    /**< Core P-channel requested power state, offset: 0xC */
  __IO uint32_t CM55COREPREQ;                      /**< Core P-channel request, offset: 0x10 */
  __I  uint32_t CM55COREPSTATUS;                   /**< Core P-channel status, offset: 0x14 */
  __I  uint32_t CM55PC;                            /**< The current program counter of the CM55, offset: 0x18 */
  __I  uint32_t CM55STATE;                         /**< State of the CM55, offset: 0x1C */
  __IO uint32_t CM55WARMRSTREQCFG;                 /**< Cortex-M55 warm reset requester config., offset: 0x20 */
  __I  uint32_t CM55WARMRSTREQSTAT;                /**< CortexM55 warm reset requester status, offset: 0x24 */
  __IO uint32_t CM55CACHEINIT;                     /**< Automatic cache invalidation configuration., offset: 0x28 */
       uint8_t RESERVED_0[20];
  __I  uint32_t XSPPC;                             /**< The current program counter of the XSP, offset: 0x40 */
  __IO uint32_t TICKSRCSEL;                        /**< Selects the tick source for CM55 NSSTCLKEN and Timer DSS tick input, offset: 0x44 */
  __IO uint32_t XSPI_CFG;                          /**< xSPI configuration register., offset: 0x48 */
  __IO uint32_t U85_CFG;                           /**< Ethos U85 configuration register., offset: 0x4C */
  __I  uint32_t U85_STATUS;                        /**< Ethos U85 status register., offset: 0x50 */
  __IO uint32_t NSSMPORATIOCTRL;                   /**< Control register for DCDC ratio, offset: 0x54 */
} NSS_SYSCFG_Type;

/* ----------------------------------------------------------------------------
   -- NSS_SYSCFG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NSS_SYSCFG_Register_Masks NSS_SYSCFG Register Masks
 * @{
 */

/*! @name CM55VTOR - Non-secure vector table */
/*! @{ */

#define NSS_SYSCFG_CM55VTOR_ADDRMSB_MASK         (0xFFFFFF80U)
#define NSS_SYSCFG_CM55VTOR_ADDRMSB_SHIFT        (7U)
/*! addrMsb - 25 MSB of the address of the non-secure vector table. Sampled as entry point when the
 *    CM55 comes out of warm or cold reset and used as entry address. SW can later reallocate the
 *    vector table using a CM55 NVIC register.
 */
#define NSS_SYSCFG_CM55VTOR_ADDRMSB(x)           (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55VTOR_ADDRMSB_SHIFT)) & NSS_SYSCFG_CM55VTOR_ADDRMSB_MASK)
/*! @} */

/*! @name CM55WICCTRL - Control of the wicsleep (using the wakeup controller) */
/*! @{ */

#define NSS_SYSCFG_CM55WICCTRL_DEEPISWIC_MASK    (0x1U)
#define NSS_SYSCFG_CM55WICCTRL_DEEPISWIC_SHIFT   (0U)
/*! deepIsWic - Indicates whether deep sleep will initiate a WIC sleep or not.
 *  0b0..Deepsleep results in a non-wicsleep, requiring the clkin to be running, but most of the processor logic will internally be clock gated.
 *  0b1..Deepsleep will result in wicsleep, allows gating of the clkin at cgu level.
 */
#define NSS_SYSCFG_CM55WICCTRL_DEEPISWIC(x)      (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55WICCTRL_DEEPISWIC_SHIFT)) & NSS_SYSCFG_CM55WICCTRL_DEEPISWIC_MASK)

#define NSS_SYSCFG_CM55WICCTRL_USEIWIC_MASK      (0x2U)
#define NSS_SYSCFG_CM55WICCTRL_USEIWIC_SHIFT     (1U)
/*! useIWic - Indicates whether the IWIC will be used for WIC sleep. As there is no EWIC, this bit
 *    must always be set in case WIC sleep is enabled (deepIsWic set to 1).
 *  0b0..The EWIC will be used for wicsleep (external WIC).
 *  0b1..The IWIC will be used for wicsleep (internal WIC).
 */
#define NSS_SYSCFG_CM55WICCTRL_USEIWIC(x)        (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55WICCTRL_USEIWIC_SHIFT)) & NSS_SYSCFG_CM55WICCTRL_USEIWIC_MASK)
/*! @} */

/*! @name CM55CPUWAIT - Halt CPU after CM55 system reset release. */
/*! @{ */

#define NSS_SYSCFG_CM55CPUWAIT_CPUWAIT_MASK      (0x1U)
#define NSS_SYSCFG_CM55CPUWAIT_CPUWAIT_SHIFT     (0U)
/*! cpuwait - When set the core will stall after exiting system reset.
 *  0b0..Do not halt CPU execution
 *  0b1..Halt CPU after system reset
 */
#define NSS_SYSCFG_CM55CPUWAIT_CPUWAIT(x)        (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55CPUWAIT_CPUWAIT_SHIFT)) & NSS_SYSCFG_CM55CPUWAIT_CPUWAIT_MASK)
/*! @} */

/*! @name CM55COREPSTATE - Core P-channel requested power state */
/*! @{ */

#define NSS_SYSCFG_CM55COREPSTATE_STATE_MASK     (0x1FU)
#define NSS_SYSCFG_CM55COREPSTATE_STATE_SHIFT    (0U)
/*! state - Requested power mode for the CM55. This signal is part of the P-Channel interface to the
 *    CM55. Valid modes at cold reset are listed below. For additional modes and transitions
 *    between modes, refer to the CM55 Technical Reference Manual. Transitions of modes need to be
 *    initiated via the cm55CorePreq register. The Extended Processing Unit (EPU) needs to be on in order
 *    to support floating point or Vector Extension operations. Note, when started up in a power mode
 *    lacking support for either EPU or Cache, a power mode transition is required before the
 *    feature can be used, as internally, the CPU clock gates and disables a subdomain so that it can be
 *    power gated (not implemented in NSS). Requesting a power transition indicates to the CPU that
 *    there is power or not for a certain domain and whether the CPU can then use the feature or
 *    not. Keep the value stable during the transition request (refer to cm55CorePreq).
 *  0b00110..Power mode EPU_OFF (without cache). The CPU will refuse EPU operations and cache operations.
 *  0b01000..Power mode ON (without cache). The CPU will perform EPU operations. The CPU will not perform cache operations.
 *  0b01001..Warm reset power mode
 *  0b10110..Power mode EPU_OFF (with cache). The CPU will refuse EPU operations. The CPU will perform cache lookups from start, but no cache allocation.
 *  0b11000..Power mode ON (with cache). The CPU will perform EPU operations and cache lookups from start, but no cache allocation.
 */
#define NSS_SYSCFG_CM55COREPSTATE_STATE(x)       (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55COREPSTATE_STATE_SHIFT)) & NSS_SYSCFG_CM55COREPSTATE_STATE_MASK)
/*! @} */

/*! @name CM55COREPREQ - Core P-channel request */
/*! @{ */

#define NSS_SYSCFG_CM55COREPREQ_REQ_MASK         (0x1U)
#define NSS_SYSCFG_CM55COREPREQ_REQ_SHIFT        (0U)
/*! req - Assert this bit to initiate a power mode transition, the requested power mode is
 *    configured in the cm55CorePstate register. Deassert this bit after the power mode transition has been
 *    accepted or denied by polling the cm55CorePstatus register.
 *  0b0..Deassertion may only be done when either cm55CorePstatus.accept or cm55CorePstatus.deny are 1.
 *  0b1..Assertion may only be done when both cm55CorePstatus.accept and cm55CorePstatus.deny are 0.
 */
#define NSS_SYSCFG_CM55COREPREQ_REQ(x)           (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55COREPREQ_REQ_SHIFT)) & NSS_SYSCFG_CM55COREPREQ_REQ_MASK)
/*! @} */

/*! @name CM55COREPSTATUS - Core P-channel status */
/*! @{ */

#define NSS_SYSCFG_CM55COREPSTATUS_ACTIVE_MASK   (0x1FFFFFU)
#define NSS_SYSCFG_CM55COREPSTATUS_ACTIVE_SHIFT  (0U)
/*! active - Hint signal from the CM55 for a minimum required power mode. In a full HW
 *    implementation, the SW can hint using internal CM55 registers which power mode it requests to the P-channel
 *    controller via this signal.
 */
#define NSS_SYSCFG_CM55COREPSTATUS_ACTIVE(x)     (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55COREPSTATUS_ACTIVE_SHIFT)) & NSS_SYSCFG_CM55COREPSTATUS_ACTIVE_MASK)

#define NSS_SYSCFG_CM55COREPSTATUS_ACCEPT_MASK   (0x1000000U)
#define NSS_SYSCFG_CM55COREPSTATUS_ACCEPT_SHIFT  (24U)
/*! accept - Accept response after a change in the cm55CorePreq.req register.
 *  0b0..Transition to 0, when the power state transition request was accepted and the cm55CorePreq.req register is deasserted.
 *  0b1..Transition to 1, when the power state transition request is accepted after the assertion of cm55CorePreq.req register.
 */
#define NSS_SYSCFG_CM55COREPSTATUS_ACCEPT(x)     (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55COREPSTATUS_ACCEPT_SHIFT)) & NSS_SYSCFG_CM55COREPSTATUS_ACCEPT_MASK)

#define NSS_SYSCFG_CM55COREPSTATUS_DENY_MASK     (0x2000000U)
#define NSS_SYSCFG_CM55COREPSTATUS_DENY_SHIFT    (25U)
/*! deny - Deny response after a change in the cm55CorePreq.req register.
 *  0b0..Transition to 0, when the power state transition request was denied and the cm55CorePreq.req register is deasserted.
 *  0b1..Transition to 1, when the power state transition request is denied after the assertion of cm55CorePreq.req register.
 */
#define NSS_SYSCFG_CM55COREPSTATUS_DENY(x)       (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55COREPSTATUS_DENY_SHIFT)) & NSS_SYSCFG_CM55COREPSTATUS_DENY_MASK)
/*! @} */

/*! @name CM55PC - The current program counter of the CM55 */
/*! @{ */

#define NSS_SYSCFG_CM55PC_PCMSB_MASK             (0xFFFFFFFFU)
#define NSS_SYSCFG_CM55PC_PCMSB_SHIFT            (0U)
/*! pcMsb - Program counter of the CM55. The LSB will always be read as 0. */
#define NSS_SYSCFG_CM55PC_PCMSB(x)               (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55PC_PCMSB_SHIFT)) & NSS_SYSCFG_CM55PC_PCMSB_MASK)
/*! @} */

/*! @name CM55STATE - State of the CM55 */
/*! @{ */

#define NSS_SYSCFG_CM55STATE_HALTED_MASK         (0x1U)
#define NSS_SYSCFG_CM55STATE_HALTED_SHIFT        (0U)
/*! halted - Indicates that the CM55 is halted.
 *  0b0..
 *  0b1..
 */
#define NSS_SYSCFG_CM55STATE_HALTED(x)           (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55STATE_HALTED_SHIFT)) & NSS_SYSCFG_CM55STATE_HALTED_MASK)

#define NSS_SYSCFG_CM55STATE_SLEEP_MASK          (0x2U)
#define NSS_SYSCFG_CM55STATE_SLEEP_SHIFT         (1U)
/*! sleep - Indicates that the CM55 is in sleep (WFI/WFE).
 *  0b0..
 *  0b1..
 */
#define NSS_SYSCFG_CM55STATE_SLEEP(x)            (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55STATE_SLEEP_SHIFT)) & NSS_SYSCFG_CM55STATE_SLEEP_MASK)

#define NSS_SYSCFG_CM55STATE_DEEPSLEEP_MASK      (0x4U)
#define NSS_SYSCFG_CM55STATE_DEEPSLEEP_SHIFT     (2U)
/*! deepSleep - Indicates that the CM55 sleep is a deep sleep.
 *  0b0..
 *  0b1..
 */
#define NSS_SYSCFG_CM55STATE_DEEPSLEEP(x)        (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55STATE_DEEPSLEEP_SHIFT)) & NSS_SYSCFG_CM55STATE_DEEPSLEEP_MASK)

#define NSS_SYSCFG_CM55STATE_ACTIVE_MASK         (0x8U)
#define NSS_SYSCFG_CM55STATE_ACTIVE_SHIFT        (3U)
/*! active - Q-Channel active bit. When 1, the CM55 requests the main clock (clkin) of the CM55 to
 *    be enabled. When 0, the CM55 indicates that its main clock can be disabled. This is the hinting
 *    signal to the CM55 low power clock controller and will be used for the automatic clock
 *    gating. The signal will only toggle when WFI is used using WIC and deep sleep. See also the
 *    cm55Wicctrl register.
 *  0b0..
 *  0b1..
 */
#define NSS_SYSCFG_CM55STATE_ACTIVE(x)           (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55STATE_ACTIVE_SHIFT)) & NSS_SYSCFG_CM55STATE_ACTIVE_MASK)
/*! @} */

/*! @name CM55WARMRSTREQCFG - Cortex-M55 warm reset requester config. */
/*! @{ */

#define NSS_SYSCFG_CM55WARMRSTREQCFG_MODE_MASK   (0x3U)
#define NSS_SYSCFG_CM55WARMRSTREQCFG_MODE_SHIFT  (0U)
/*! mode - Requester operating mode.
 *  0b00..Bypass the warm reset requester.
 *  0b01..Make sure that the warm reset is triggered, even if it can not be done safely.
 *  0b10..Ensure a safe warm reset
 */
#define NSS_SYSCFG_CM55WARMRSTREQCFG_MODE(x)     (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55WARMRSTREQCFG_MODE_SHIFT)) & NSS_SYSCFG_CM55WARMRSTREQCFG_MODE_MASK)
/*! @} */

/*! @name CM55WARMRSTREQSTAT - CortexM55 warm reset requester status */
/*! @{ */

#define NSS_SYSCFG_CM55WARMRSTREQSTAT_BUSY_MASK  (0x1U)
#define NSS_SYSCFG_CM55WARMRSTREQSTAT_BUSY_SHIFT (0U)
/*! busy - Warm reset requester is active. */
#define NSS_SYSCFG_CM55WARMRSTREQSTAT_BUSY(x)    (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55WARMRSTREQSTAT_BUSY_SHIFT)) & NSS_SYSCFG_CM55WARMRSTREQSTAT_BUSY_MASK)

#define NSS_SYSCFG_CM55WARMRSTREQSTAT_ERROR_MASK (0x2U)
#define NSS_SYSCFG_CM55WARMRSTREQSTAT_ERROR_SHIFT (1U)
/*! error - The warm reset requester encountered an error. */
#define NSS_SYSCFG_CM55WARMRSTREQSTAT_ERROR(x)   (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55WARMRSTREQSTAT_ERROR_SHIFT)) & NSS_SYSCFG_CM55WARMRSTREQSTAT_ERROR_MASK)

#define NSS_SYSCFG_CM55WARMRSTREQSTAT_FIRED_MASK (0x4U)
#define NSS_SYSCFG_CM55WARMRSTREQSTAT_FIRED_SHIFT (2U)
/*! fired - Warm reset requester issued a safe warm reset. */
#define NSS_SYSCFG_CM55WARMRSTREQSTAT_FIRED(x)   (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55WARMRSTREQSTAT_FIRED_SHIFT)) & NSS_SYSCFG_CM55WARMRSTREQSTAT_FIRED_MASK)
/*! @} */

/*! @name CM55CACHEINIT - Automatic cache invalidation configuration. */
/*! @{ */

#define NSS_SYSCFG_CM55CACHEINIT_DIS_MASK        (0x1U)
#define NSS_SYSCFG_CM55CACHEINIT_DIS_SHIFT       (0U)
/*! dis - Disables automatic invalidation of the CM55 L1 cache. Can be used when valid cache RAM
 *    content is required to be preserved after WARM_RST.
 */
#define NSS_SYSCFG_CM55CACHEINIT_DIS(x)          (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_CM55CACHEINIT_DIS_SHIFT)) & NSS_SYSCFG_CM55CACHEINIT_DIS_MASK)
/*! @} */

/*! @name XSPPC - The current program counter of the XSP */
/*! @{ */

#define NSS_SYSCFG_XSPPC_PC_MASK                 (0xFFFFFFU)
#define NSS_SYSCFG_XSPPC_PC_SHIFT                (0U)
/*! pc - Program counter of the XSP. */
#define NSS_SYSCFG_XSPPC_PC(x)                   (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_XSPPC_PC_SHIFT)) & NSS_SYSCFG_XSPPC_PC_MASK)
/*! @} */

/*! @name TICKSRCSEL - Selects the tick source for CM55 NSSTCLKEN and Timer DSS tick input */
/*! @{ */

#define NSS_SYSCFG_TICKSRCSEL_CM55TICKSEL_MASK   (0x1U)
#define NSS_SYSCFG_TICKSRCSEL_CM55TICKSEL_SHIFT  (0U)
/*! cm55TickSel - Selects the tick source for cm55.ip_cm55_nsstclk.
 *  0b0..
 *  0b1..
 */
#define NSS_SYSCFG_TICKSRCSEL_CM55TICKSEL(x)     (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_TICKSRCSEL_CM55TICKSEL_SHIFT)) & NSS_SYSCFG_TICKSRCSEL_CM55TICKSEL_MASK)

#define NSS_SYSCFG_TICKSRCSEL_TIMERTICKSEL_MASK  (0x2U)
#define NSS_SYSCFG_TICKSRCSEL_TIMERTICKSEL_SHIFT (1U)
/*! timerTickSel - Selects the tick source for timer.ip_sys_tick.
 *  0b0..
 *  0b1..
 */
#define NSS_SYSCFG_TICKSRCSEL_TIMERTICKSEL(x)    (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_TICKSRCSEL_TIMERTICKSEL_SHIFT)) & NSS_SYSCFG_TICKSRCSEL_TIMERTICKSEL_MASK)
/*! @} */

/*! @name XSPI_CFG - xSPI configuration register. */
/*! @{ */

#define NSS_SYSCFG_XSPI_CFG_IPS_NONSECURE_ACCESS_MASK (0x1U)
#define NSS_SYSCFG_XSPI_CFG_IPS_NONSECURE_ACCESS_SHIFT (0U)
/*! ips_nonsecure_access - This bit sets the XSPI IPS interface ips_non_secure_access signal. */
#define NSS_SYSCFG_XSPI_CFG_IPS_NONSECURE_ACCESS(x) (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_XSPI_CFG_IPS_NONSECURE_ACCESS_SHIFT)) & NSS_SYSCFG_XSPI_CFG_IPS_NONSECURE_ACCESS_MASK)

#define NSS_SYSCFG_XSPI_CFG_IPS_SUPERVISOR_ACCESS_MASK (0x2U)
#define NSS_SYSCFG_XSPI_CFG_IPS_SUPERVISOR_ACCESS_SHIFT (1U)
/*! ips_supervisor_access - This bit sets the XSPI IPS interface ips_supervisor_access signal. */
#define NSS_SYSCFG_XSPI_CFG_IPS_SUPERVISOR_ACCESS(x) (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_XSPI_CFG_IPS_SUPERVISOR_ACCESS_SHIFT)) & NSS_SYSCFG_XSPI_CFG_IPS_SUPERVISOR_ACCESS_MASK)

#define NSS_SYSCFG_XSPI_CFG_IPT_TESTER_TRIGGER_MASK (0x4U)
#define NSS_SYSCFG_XSPI_CFG_IPT_TESTER_TRIGGER_SHIFT (2U)
/*! ipt_tester_trigger - Writing 1 to this bit, generates pulse on the ipt_tester_trigger signal,
 *    which triggers the finite state machine (FSM) that drives XSPI through the programmed
 *    instruction sequences to generate activity on the flash memory interface.
 */
#define NSS_SYSCFG_XSPI_CFG_IPT_TESTER_TRIGGER(x) (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_XSPI_CFG_IPT_TESTER_TRIGGER_SHIFT)) & NSS_SYSCFG_XSPI_CFG_IPT_TESTER_TRIGGER_MASK)
/*! @} */

/*! @name U85_CFG - Ethos U85 configuration register. */
/*! @{ */

#define NSS_SYSCFG_U85_CFG_WRSTQREQ_MASK         (0x1U)
#define NSS_SYSCFG_U85_CFG_WRSTQREQ_SHIFT        (0U)
/*! wrstqreq - Bit to request a halt the U85 (before applying a warm reset using cgu.rstEnSet). The
 *    halt will be acknowledged (syscfg.u85_status) AND trigger the U85 interrupt (if the U85 is
 *    busy at the moment of the request).
 */
#define NSS_SYSCFG_U85_CFG_WRSTQREQ(x)           (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_U85_CFG_WRSTQREQ_SHIFT)) & NSS_SYSCFG_U85_CFG_WRSTQREQ_MASK)

#define NSS_SYSCFG_U85_CFG_U85HALTENABLE_MASK    (0x2U)
#define NSS_SYSCFG_U85_CFG_U85HALTENABLE_SHIFT   (1U)
/*! u85HaltEnable - Enable U85 halt debug mode via the CTI FSM. When 0, the CTI FSM stays in IDLE
 *    and the U85 debug halt mechanism is disabled. When 1, the CTI FSM is active and will halt the
 *    U85 on a crossbreak halt request.
 */
#define NSS_SYSCFG_U85_CFG_U85HALTENABLE(x)      (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_U85_CFG_U85HALTENABLE_SHIFT)) & NSS_SYSCFG_U85_CFG_U85HALTENABLE_MASK)
/*! @} */

/*! @name U85_STATUS - Ethos U85 status register. */
/*! @{ */

#define NSS_SYSCFG_U85_STATUS_WRSTQACK_MASK      (0x1U)
#define NSS_SYSCFG_U85_STATUS_WRSTQACK_SHIFT     (0U)
/*! wrstqack - Acknowledge of the halting request from the U85 (before applying a warm reset). */
#define NSS_SYSCFG_U85_STATUS_WRSTQACK(x)        (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_U85_STATUS_WRSTQACK_SHIFT)) & NSS_SYSCFG_U85_STATUS_WRSTQACK_MASK)
/*! @} */

/*! @name NSSMPORATIOCTRL - Control register for DCDC ratio */
/*! @{ */

#define NSS_SYSCFG_NSSMPORATIOCTRL_RATIOUPEN_MASK (0x1U)
#define NSS_SYSCFG_NSSMPORATIOCTRL_RATIOUPEN_SHIFT (0U)
/*! ratioUpEn - Enable NSS request to increase DCDC ratio. When set, ratio gradually increases to a
 *    maximum configurable in the PMRC itself and ratio down requests are disregarded.
 *  0b0..Normal DCDC ratio control operation.
 *  0b1..NSS requests PMRC to gradually increase DCDC ratio.
 */
#define NSS_SYSCFG_NSSMPORATIOCTRL_RATIOUPEN(x)  (((uint32_t)(((uint32_t)(x)) << NSS_SYSCFG_NSSMPORATIOCTRL_RATIOUPEN_SHIFT)) & NSS_SYSCFG_NSSMPORATIOCTRL_RATIOUPEN_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group NSS_SYSCFG_Register_Masks */


/*!
 * @}
 */ /* end of group NSS_SYSCFG_Peripheral_Access_Layer */


/*
** End of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic pop
  #else
    #pragma pop
  #endif
#elif defined(__GNUC__)
  /* leave anonymous unions enabled */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=default
#else
  #error Not supported compiler type
#endif

/*!
 * @}
 */ /* end of group Peripheral_access_layer */


#endif  /* PERI_NSS_SYSCFG_H_ */

