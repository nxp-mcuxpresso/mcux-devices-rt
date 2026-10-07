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
**         CMSIS Peripheral Access Layer for ADSS_TRACE
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
 * @file PERI_ADSS_TRACE.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_TRACE
 *
 * CMSIS Peripheral Access Layer for ADSS_TRACE
 */

#if !defined(PERI_ADSS_TRACE_H_)
#define PERI_ADSS_TRACE_H_                       /**< Symbol preventing repeated inclusion */

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
   -- ADSS_TRACE Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_TRACE_Peripheral_Access_Layer ADSS_TRACE Peripheral Access Layer
 * @{
 */

/** ADSS_TRACE - Register Layout Typedef */
typedef struct {
  __IO uint32_t TRACECFG;                          /**< Configuration of tracing, offset: 0x0 */
  __IO uint32_t STARTTRIGGERCFG;                   /**< Configures which triggers will start the trace, offset: 0x4 */
  __IO uint32_t STOPTRIGGERCFG;                    /**< Configures which triggers will stop the trace, offset: 0x8 */
  __IO uint32_t TRACEBUFFERPOINTER;                /**< Write pointer, offset: 0xC */
  __O  uint32_t STARTTRACING;                      /**< This register starts tracing programatically, instead of using the trigger controls. This register is compatible with triggered start/stop. This register is autocleared by hardware., offset: 0x10 */
  __O  uint32_t STOPTRACING;                       /**< This register stops tracing programatically, instead of using the trigger controls. This register is compatible with triggered start/stop. This register is autocleared by hardware., offset: 0x14 */
  __O  uint32_t CLEARTRACING;                      /**< This register clears the trace buffer and resets the trace buffer pointer. This register is autocleared by hardware., offset: 0x18 */
  __I  uint32_t TRACESTATUS;                       /**< Tracing status, offset: 0x1C */
  __IO uint32_t EPILOGCOUNTER;                     /**< Specifies how many extra trace entries to take after the trigger stop condition has been met., offset: 0x20 */
  __I  uint32_t TRACEITERATIONDSP3;                /**< Interation information dsp3, offset: 0x24 */
  __IO uint32_t FILTER;                            /**< configure the filtering of trace data, offset: 0x28 */
  __IO uint32_t FE_ADDRESS0;                       /**< Trigger address 0, offset: 0x2C */
  __IO uint32_t FE_ADDRESS1;                       /**< Trigger address 1, offset: 0x30 */
} ADSS_TRACE_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_TRACE Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_TRACE_Register_Masks ADSS_TRACE Register Masks
 * @{
 */

/*! @name TRACECFG - Configuration of tracing */
/*! @{ */

#define ADSS_TRACE_TRACECFG_WRAP_MASK            (0x1U)
#define ADSS_TRACE_TRACECFG_WRAP_SHIFT           (0U)
/*! wrap - Trace buffer wraps over when full */
#define ADSS_TRACE_TRACECFG_WRAP(x)              (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_TRACECFG_WRAP_SHIFT)) & ADSS_TRACE_TRACECFG_WRAP_MASK)

#define ADSS_TRACE_TRACECFG_EVENT_MASK           (0xFEU)
#define ADSS_TRACE_TRACECFG_EVENT_SHIFT          (1U)
/*! event - Selects the event to be used for trace triggering */
#define ADSS_TRACE_TRACECFG_EVENT(x)             (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_TRACECFG_EVENT_SHIFT)) & ADSS_TRACE_TRACECFG_EVENT_MASK)

#define ADSS_TRACE_TRACECFG_ENABLE_MASK          (0x100U)
#define ADSS_TRACE_TRACECFG_ENABLE_SHIFT         (8U)
/*! enable - Enables the tracing hardware
 *  0b0..disabled
 *  0b1..enabled
 */
#define ADSS_TRACE_TRACECFG_ENABLE(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_TRACECFG_ENABLE_SHIFT)) & ADSS_TRACE_TRACECFG_ENABLE_MASK)

#define ADSS_TRACE_TRACECFG_ACCURACY_MASK        (0x600U)
#define ADSS_TRACE_TRACECFG_ACCURACY_SHIFT       (9U)
/*! accuracy - Select trace generation mode
 *  0b00..cycle accurate
 *  0b01..instruction accurate
 *  0b10..basic block accurate
 */
#define ADSS_TRACE_TRACECFG_ACCURACY(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_TRACECFG_ACCURACY_SHIFT)) & ADSS_TRACE_TRACECFG_ACCURACY_MASK)

#define ADSS_TRACE_TRACECFG_EVENT_MODE_MASK      (0x800U)
#define ADSS_TRACE_TRACECFG_EVENT_MODE_SHIFT     (11U)
/*! event_mode - Select event generation mode
 *  0b0..Generates event when going out of trace mode
 *  0b1..Only generates event when buffer is full
 */
#define ADSS_TRACE_TRACECFG_EVENT_MODE(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_TRACECFG_EVENT_MODE_SHIFT)) & ADSS_TRACE_TRACECFG_EVENT_MODE_MASK)

#define ADSS_TRACE_TRACECFG_DSP3_SEL_MASK        (0x1000U)
#define ADSS_TRACE_TRACECFG_DSP3_SEL_SHIFT       (12U)
/*! dsp3_sel - Select which CoolFlux DSP3 instance will be traced
 *  0b0..CoolFlux DSP3 instance 0 will be traced
 *  0b1..CoolFlux DSP3 instance 1 will be traced
 */
#define ADSS_TRACE_TRACECFG_DSP3_SEL(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_TRACECFG_DSP3_SEL_SHIFT)) & ADSS_TRACE_TRACECFG_DSP3_SEL_MASK)
/*! @} */

/*! @name STARTTRIGGERCFG - Configures which triggers will start the trace */
/*! @{ */

#define ADSS_TRACE_STARTTRIGGERCFG_DSP3_ADDRESS0_MASK (0x1U)
#define ADSS_TRACE_STARTTRIGGERCFG_DSP3_ADDRESS0_SHIFT (0U)
/*! dsp3_address0 - Triggers when dsp3 matches address0 */
#define ADSS_TRACE_STARTTRIGGERCFG_DSP3_ADDRESS0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_STARTTRIGGERCFG_DSP3_ADDRESS0_SHIFT)) & ADSS_TRACE_STARTTRIGGERCFG_DSP3_ADDRESS0_MASK)

#define ADSS_TRACE_STARTTRIGGERCFG_DSP3_ADDRESS1_MASK (0x2U)
#define ADSS_TRACE_STARTTRIGGERCFG_DSP3_ADDRESS1_SHIFT (1U)
/*! dsp3_address1 - Triggers when dsp3 matches address1 */
#define ADSS_TRACE_STARTTRIGGERCFG_DSP3_ADDRESS1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_STARTTRIGGERCFG_DSP3_ADDRESS1_SHIFT)) & ADSS_TRACE_STARTTRIGGERCFG_DSP3_ADDRESS1_MASK)

#define ADSS_TRACE_STARTTRIGGERCFG_DSP3_REGION_MASK (0x4U)
#define ADSS_TRACE_STARTTRIGGERCFG_DSP3_REGION_SHIFT (2U)
/*! dsp3_region - Triggers when dsp3 is in the region defined by address0-address1 */
#define ADSS_TRACE_STARTTRIGGERCFG_DSP3_REGION(x) (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_STARTTRIGGERCFG_DSP3_REGION_SHIFT)) & ADSS_TRACE_STARTTRIGGERCFG_DSP3_REGION_MASK)

#define ADSS_TRACE_STARTTRIGGERCFG_EVENT_MASK    (0x8U)
#define ADSS_TRACE_STARTTRIGGERCFG_EVENT_SHIFT   (3U)
/*! event - Triggers when the configured event in traceCfg is received */
#define ADSS_TRACE_STARTTRIGGERCFG_EVENT(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_STARTTRIGGERCFG_EVENT_SHIFT)) & ADSS_TRACE_STARTTRIGGERCFG_EVENT_MASK)
/*! @} */

/*! @name STOPTRIGGERCFG - Configures which triggers will stop the trace */
/*! @{ */

#define ADSS_TRACE_STOPTRIGGERCFG_DSP3_ADDRESS0_MASK (0x1U)
#define ADSS_TRACE_STOPTRIGGERCFG_DSP3_ADDRESS0_SHIFT (0U)
/*! dsp3_address0 - Triggers when dsp3 matches address0 */
#define ADSS_TRACE_STOPTRIGGERCFG_DSP3_ADDRESS0(x) (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_STOPTRIGGERCFG_DSP3_ADDRESS0_SHIFT)) & ADSS_TRACE_STOPTRIGGERCFG_DSP3_ADDRESS0_MASK)

#define ADSS_TRACE_STOPTRIGGERCFG_DSP3_ADDRESS1_MASK (0x2U)
#define ADSS_TRACE_STOPTRIGGERCFG_DSP3_ADDRESS1_SHIFT (1U)
/*! dsp3_address1 - Triggers when dsp3 matches address1 */
#define ADSS_TRACE_STOPTRIGGERCFG_DSP3_ADDRESS1(x) (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_STOPTRIGGERCFG_DSP3_ADDRESS1_SHIFT)) & ADSS_TRACE_STOPTRIGGERCFG_DSP3_ADDRESS1_MASK)

#define ADSS_TRACE_STOPTRIGGERCFG_DSP3_REGION_MASK (0x4U)
#define ADSS_TRACE_STOPTRIGGERCFG_DSP3_REGION_SHIFT (2U)
/*! dsp3_region - Triggers when dsp3 is in the region defined by address0-address1 */
#define ADSS_TRACE_STOPTRIGGERCFG_DSP3_REGION(x) (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_STOPTRIGGERCFG_DSP3_REGION_SHIFT)) & ADSS_TRACE_STOPTRIGGERCFG_DSP3_REGION_MASK)

#define ADSS_TRACE_STOPTRIGGERCFG_EVENT_MASK     (0x8U)
#define ADSS_TRACE_STOPTRIGGERCFG_EVENT_SHIFT    (3U)
/*! event - Triggers when the configured event in traceCfg is received */
#define ADSS_TRACE_STOPTRIGGERCFG_EVENT(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_STOPTRIGGERCFG_EVENT_SHIFT)) & ADSS_TRACE_STOPTRIGGERCFG_EVENT_MASK)
/*! @} */

/*! @name TRACEBUFFERPOINTER - Write pointer */
/*! @{ */

#define ADSS_TRACE_TRACEBUFFERPOINTER_VALUE_MASK (0x3FFU)
#define ADSS_TRACE_TRACEBUFFERPOINTER_VALUE_SHIFT (0U)
/*! value - address of next write */
#define ADSS_TRACE_TRACEBUFFERPOINTER_VALUE(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_TRACEBUFFERPOINTER_VALUE_SHIFT)) & ADSS_TRACE_TRACEBUFFERPOINTER_VALUE_MASK)
/*! @} */

/*! @name STARTTRACING - This register starts tracing programatically, instead of using the trigger controls. This register is compatible with triggered start/stop. This register is autocleared by hardware. */
/*! @{ */

#define ADSS_TRACE_STARTTRACING_VALUE_MASK       (0x1U)
#define ADSS_TRACE_STARTTRACING_VALUE_SHIFT      (0U)
/*! value - Writing to this register starts tracing */
#define ADSS_TRACE_STARTTRACING_VALUE(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_STARTTRACING_VALUE_SHIFT)) & ADSS_TRACE_STARTTRACING_VALUE_MASK)
/*! @} */

/*! @name STOPTRACING - This register stops tracing programatically, instead of using the trigger controls. This register is compatible with triggered start/stop. This register is autocleared by hardware. */
/*! @{ */

#define ADSS_TRACE_STOPTRACING_VALUE_MASK        (0x1U)
#define ADSS_TRACE_STOPTRACING_VALUE_SHIFT       (0U)
/*! value - Writing to this register stops tracing */
#define ADSS_TRACE_STOPTRACING_VALUE(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_STOPTRACING_VALUE_SHIFT)) & ADSS_TRACE_STOPTRACING_VALUE_MASK)
/*! @} */

/*! @name CLEARTRACING - This register clears the trace buffer and resets the trace buffer pointer. This register is autocleared by hardware. */
/*! @{ */

#define ADSS_TRACE_CLEARTRACING_VALUE_MASK       (0x1U)
#define ADSS_TRACE_CLEARTRACING_VALUE_SHIFT      (0U)
/*! value - Writing to this register clears tracing */
#define ADSS_TRACE_CLEARTRACING_VALUE(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_CLEARTRACING_VALUE_SHIFT)) & ADSS_TRACE_CLEARTRACING_VALUE_MASK)
/*! @} */

/*! @name TRACESTATUS - Tracing status */
/*! @{ */

#define ADSS_TRACE_TRACESTATUS_RUNNING_MASK      (0x1U)
#define ADSS_TRACE_TRACESTATUS_RUNNING_SHIFT     (0U)
/*! running - Tracing has been triggered and is currently running */
#define ADSS_TRACE_TRACESTATUS_RUNNING(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_TRACESTATUS_RUNNING_SHIFT)) & ADSS_TRACE_TRACESTATUS_RUNNING_MASK)
/*! @} */

/*! @name EPILOGCOUNTER - Specifies how many extra trace entries to take after the trigger stop condition has been met. */
/*! @{ */

#define ADSS_TRACE_EPILOGCOUNTER_VALUE_MASK      (0x1FU)
#define ADSS_TRACE_EPILOGCOUNTER_VALUE_SHIFT     (0U)
/*! value - number of entries */
#define ADSS_TRACE_EPILOGCOUNTER_VALUE(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_EPILOGCOUNTER_VALUE_SHIFT)) & ADSS_TRACE_EPILOGCOUNTER_VALUE_MASK)
/*! @} */

/*! @name TRACEITERATIONDSP3 - Interation information dsp3 */
/*! @{ */

#define ADSS_TRACE_TRACEITERATIONDSP3_ITERATIONCOUNT_MASK (0x3FFFU)
#define ADSS_TRACE_TRACEITERATIONDSP3_ITERATIONCOUNT_SHIFT (0U)
/*! IterationCount - Current interation count of dsp3 */
#define ADSS_TRACE_TRACEITERATIONDSP3_ITERATIONCOUNT(x) (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_TRACEITERATIONDSP3_ITERATIONCOUNT_SHIFT)) & ADSS_TRACE_TRACEITERATIONDSP3_ITERATIONCOUNT_MASK)

#define ADSS_TRACE_TRACEITERATIONDSP3_ITERATING_MASK (0x4000U)
#define ADSS_TRACE_TRACEITERATIONDSP3_ITERATING_SHIFT (14U)
/*! Iterating - Indicates if dsp3 was iterating when tracing stopped */
#define ADSS_TRACE_TRACEITERATIONDSP3_ITERATING(x) (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_TRACEITERATIONDSP3_ITERATING_SHIFT)) & ADSS_TRACE_TRACEITERATIONDSP3_ITERATING_MASK)
/*! @} */

/*! @name FILTER - configure the filtering of trace data */
/*! @{ */

#define ADSS_TRACE_FILTER_CONTEXT0_MASK          (0x1U)
#define ADSS_TRACE_FILTER_CONTEXT0_SHIFT         (0U)
/*! context0 - enable trace generation for context 0
 *  0b0..disabled
 *  0b1..enabled
 */
#define ADSS_TRACE_FILTER_CONTEXT0(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_FILTER_CONTEXT0_SHIFT)) & ADSS_TRACE_FILTER_CONTEXT0_MASK)

#define ADSS_TRACE_FILTER_CONTEXT1_MASK          (0x2U)
#define ADSS_TRACE_FILTER_CONTEXT1_SHIFT         (1U)
/*! context1 - enable trace generation for context 1
 *  0b0..disabled
 *  0b1..enabled
 */
#define ADSS_TRACE_FILTER_CONTEXT1(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_FILTER_CONTEXT1_SHIFT)) & ADSS_TRACE_FILTER_CONTEXT1_MASK)

#define ADSS_TRACE_FILTER_CONTEXT2_MASK          (0x4U)
#define ADSS_TRACE_FILTER_CONTEXT2_SHIFT         (2U)
/*! context2 - enable trace generation for context 2
 *  0b0..disabled
 *  0b1..enabled
 */
#define ADSS_TRACE_FILTER_CONTEXT2(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_FILTER_CONTEXT2_SHIFT)) & ADSS_TRACE_FILTER_CONTEXT2_MASK)

#define ADSS_TRACE_FILTER_CONTEXT3_MASK          (0x8U)
#define ADSS_TRACE_FILTER_CONTEXT3_SHIFT         (3U)
/*! context3 - enable trace generation for context 3
 *  0b0..disabled
 *  0b1..enabled
 */
#define ADSS_TRACE_FILTER_CONTEXT3(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_FILTER_CONTEXT3_SHIFT)) & ADSS_TRACE_FILTER_CONTEXT3_MASK)
/*! @} */

/*! @name FE_ADDRESS0 - Trigger address 0 */
/*! @{ */

#define ADSS_TRACE_FE_ADDRESS0_VALUE_MASK        (0x1FFFFFU)
#define ADSS_TRACE_FE_ADDRESS0_VALUE_SHIFT       (0U)
/*! value - address */
#define ADSS_TRACE_FE_ADDRESS0_VALUE(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_FE_ADDRESS0_VALUE_SHIFT)) & ADSS_TRACE_FE_ADDRESS0_VALUE_MASK)
/*! @} */

/*! @name FE_ADDRESS1 - Trigger address 1 */
/*! @{ */

#define ADSS_TRACE_FE_ADDRESS1_VALUE_MASK        (0x1FFFFFU)
#define ADSS_TRACE_FE_ADDRESS1_VALUE_SHIFT       (0U)
/*! value - address */
#define ADSS_TRACE_FE_ADDRESS1_VALUE(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_TRACE_FE_ADDRESS1_VALUE_SHIFT)) & ADSS_TRACE_FE_ADDRESS1_VALUE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADSS_TRACE_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_TRACE_Peripheral_Access_Layer */


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


#endif  /* PERI_ADSS_TRACE_H_ */

