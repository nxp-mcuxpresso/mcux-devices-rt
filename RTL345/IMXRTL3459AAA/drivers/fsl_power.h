/*
 * Copyright 2026 NXP
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _FSL_POWER_H_
#define _FSL_POWER_H_

#include "fsl_common.h"
#include "fsl_device_registers.h"
#include <stdint.h>

/*!
 * @addtogroup power
 * @{
 */
/*******************************************************************************
 * Definitions
 ******************************************************************************/

 /*! @name Driver version */
/*@{*/
/*! @brief POWER driver version */
#define FSL_POWER_DRIVER_VERSION (MAKE_VERSION(0, 0, 1))
/*@}*/

/*!
 * @brief Power library status.
 */
enum _power_status
{
    kStatus_Power_InvalidMemSegment = MAKE_STATUS(kStatusGroup_POWER, 1U),
    kStatus_Power_RegisterTransferBusy = MAKE_STATUS(kStatusGroup_POWER, 2U),
    kStatus_Power_InvalidArgument = MAKE_STATUS(kStatusGroup_POWER, 3U)
};

/**
 * @enum power_supply_mode_t
 * @brief Enumeration of system supply modes.
 *
 * This enum defines the available power supply configurations for the system.
 */
typedef enum power_supply_mode_s
{
    kPOWER_SupplyModeBSM = 0U, /**< Battery Supply Mode (BSM): System is powered by a battery. */
    kPOWER_SupplyModeRSM = 2U  /**< Regulated Supply Mode (RSM): System is powered by a regulated external supply. */
} power_supply_mode_t;


/**
 * @enum power_active_mode_t
 * @brief Enumeration of active power modes for the system.
 *
 * This enumeration defines various power modes that the system can operate in,
 * ranging from ultra-low power to overdrive performance mode.
 */
typedef enum power_active_mode_s
{
    kPOWER_ActiveMode0 = 0x0U, /**< Ultra low power mode */
    kPOWER_ActiveMode1 = 0x1U, /**< Low power mode */
    kPOWER_ActiveMode2 = 0x2U, /**< Itermediate power and performance mode */
    kPOWER_ActiveMode3 = 0x3U, /**< High performance mode */
    kPOWER_ActiveMode4 = 0x4U  /**< Overdrive performance mode */
} power_active_mode_t;

/**
 * @enum power_bod_instance_t
 * @brief Enumeration of Brown-Out Detector (BOD) instances.
 *
 * This enumeration defines the various power domains or components
 * to which a Brown-Out Detector can be connected.
 */
typedef enum power_bod_instance_s
{
    kPOWER_BodVDD,       /**< BOD connected to VDD input */
    kPOWER_BodVddDig,    /**< BOD connected to VDD digital input */
    kPOWER_BodVddMem,    /**< BOD connected to DC-DC digital memory */
    kPOWER_BodLdoMem,    /**< BOD connected to LDO memory */
    kPOWER_BodVddAna,    /**< BOD connected to VDD_ANA */
    kPOWER_BodVddCgu,    /**< BOD connected to VDD_CGU */
    kPOWER_BodVddIo1,    /**< BOD connected to VDD_IO_1 */
    kPOWER_BodVddIo2,    /**< BOD connected to VDD_IO_2 */
    kPOWER_BodVddIo3,    /**< BOD connected to VDD_IO_3 */
    kPOWER_BodVddIo4,    /**< BOD connected to VDD_IO_4 */
    kPOWER_BodVddIo5     /**< BOD connected to VDD_IO_5 */
} power_bod_instance_t;

/**
 * @enum power_bod_level_t
 * @brief Enumeration of Brown-Out Detector (BOD) threshold levels.
 *
 * This enum defines the voltage levels at which a BOD event is triggered.
 */
typedef enum power_bod_level_s
{
    kPOWER_BodLevelTodo = 0x0U,
} power_bod_level_t;

/**
 * @enum power_bod_action_t
 * @brief Enumeration of actions triggered by a BOD event.
 *
 * This enum specifies the system response when a BOD condition is detected.
 */
typedef enum power_bod_action_s
{
    kPOWER_BodNoAction = 0U,   /**< No action is taken on BOD event */
    kPOWER_BodReset    = 1U,   /**< System reset is triggered on BOD event */
    kPOWER_BodInterrupt = 2U   /**< Interrupt is triggered on BOD event */
} power_bod_action_t;

/**
 * @enum power_ldo_mem_output_level_t
 * @brief Enumeration of output voltage levels for the memory LDO.
 *
 * This enum defines the possible output voltages (in millivolts) for the
 * Low Dropout Regulator (LDO) supplying memory.
 */
typedef enum power_ldo_output_level_s
{
    kPOWER_LdoOutputLevel500mV = 0U,
    kPOWER_LdoOutputLevel520mV,
    kPOWER_LdoOutputLevel540mV,
    kPOWER_LdoOutputLevel560mV,
    kPOWER_LdoOutputLevel580mV,
    kPOWER_LdoOutputLevel600mV,
    kPOWER_LdoOutputLevel620mV,
    kPOWER_LdoOutputLevel640mV,
    kPOWER_LdoOutputLevel660mV,
    kPOWER_LdoOutputLevel680mV,
    kPOWER_LdoOutputLevel700mV,
    kPOWER_LdoOutputLevel720mV,
    kPOWER_LdoOutputLevel740mV,
    kPOWER_LdoOutputLevel760mV,
    kPOWER_LdoOutputLevel780mV
} power_ldo_mem_output_level_t;

/**
 * @enum power_sram_ctrl_bit_t
 * @brief Enumeration of SRAM control bits.
 *
 * Each bit in this enum represents a control flag for a specific SRAM segment.
 * These bits can be used to enable or disable power to individual SRAM blocks.
 */
typedef enum power_sram_ctrl_bit_s
{
    kPOWER_SramCtrlTodo = (1UL << 0U),
} power_sram_ctrl_bit_t;

/**
 * @typedef power_sram_ctrl_mask_t
 * @brief Bitmask type used to specify SRAM retention settings.
 *
 * This type represents a mask composed of `power_sram_ctrl_bit_t` values.
 */
typedef uint32_t power_sram_ctrl_mask_t;

/**
 * @typedef power_reset_cause_mask_t
 * @brief Bitmask type representing one or more reset causes.
 *
 * This 64-bit mask is used to indicate the source(s) of a system reset (or a low power mode that requires a full boot to wakeup).
 * Each bit corresponds to a specific reset cause, allowing multiple causes
 * to be represented simultaneously.
 */
typedef uint64_t power_reset_cause_mask_t;

/**
 * @brief List of reset causes
 */
#define kPOWER_RESET_CAUSE_WATCHDOG            ((power_reset_cause_mask_t)1ULL << 0)
#define kPOWER_RESET_CAUSE_DSS                 ((power_reset_cause_mask_t)1ULL << 1)
#define kPOWER_RESET_CAUSE_SYSTEM              ((power_reset_cause_mask_t)1ULL << 2)
#define kPOWER_RESET_CAUSE_LOWPOWER_WAKEUP     ((power_reset_cause_mask_t)1ULL << 3)
#define kPOWER_RESET_CAUSE_PMU_POWERFAIL       ((power_reset_cause_mask_t)1ULL << 4)

/* External IO resets from SWM0 */
#define kPOWER_RESET_CAUSE_EXT_SWM0_00         ((power_reset_cause_mask_t)1ULL << 5)
#define kPOWER_RESET_CAUSE_EXT_SWM0_01         ((power_reset_cause_mask_t)1ULL << 6)
#define kPOWER_RESET_CAUSE_EXT_SWM0_02         ((power_reset_cause_mask_t)1ULL << 7)
#define kPOWER_RESET_CAUSE_EXT_SWM0_03         ((power_reset_cause_mask_t)1ULL << 8)
#define kPOWER_RESET_CAUSE_EXT_SWM0_04         ((power_reset_cause_mask_t)1ULL << 9)
#define kPOWER_RESET_CAUSE_EXT_SWM0_05         ((power_reset_cause_mask_t)1ULL << 10)
#define kPOWER_RESET_CAUSE_EXT_SWM0_06         ((power_reset_cause_mask_t)1ULL << 11)
#define kPOWER_RESET_CAUSE_EXT_SWM0_07         ((power_reset_cause_mask_t)1ULL << 12)
#define kPOWER_RESET_CAUSE_EXT_SWM0_08         ((power_reset_cause_mask_t)1ULL << 13)
#define kPOWER_RESET_CAUSE_EXT_SWM0_09         ((power_reset_cause_mask_t)1ULL << 14)
#define kPOWER_RESET_CAUSE_EXT_SWM0_10         ((power_reset_cause_mask_t)1ULL << 15)
#define kPOWER_RESET_CAUSE_EXT_SWM0_11         ((power_reset_cause_mask_t)1ULL << 16)

/* External IO resets from SWM1 */
#define kPOWER_RESET_CAUSE_EXT_SWM1_00         ((power_reset_cause_mask_t)1ULL << 17)
#define kPOWER_RESET_CAUSE_EXT_SWM1_01         ((power_reset_cause_mask_t)1ULL << 18)
#define kPOWER_RESET_CAUSE_EXT_SWM1_02         ((power_reset_cause_mask_t)1ULL << 19)
#define kPOWER_RESET_CAUSE_EXT_SWM1_03         ((power_reset_cause_mask_t)1ULL << 20)
#define kPOWER_RESET_CAUSE_EXT_SWM1_04         ((power_reset_cause_mask_t)1ULL << 21)
#define kPOWER_RESET_CAUSE_EXT_SWM1_05         ((power_reset_cause_mask_t)1ULL << 22)
#define kPOWER_RESET_CAUSE_EXT_SWM1_06         ((power_reset_cause_mask_t)1ULL << 23)
#define kPOWER_RESET_CAUSE_EXT_SWM1_07         ((power_reset_cause_mask_t)1ULL << 24)
#define kPOWER_RESET_CAUSE_EXT_SWM1_08         ((power_reset_cause_mask_t)1ULL << 25)
#define kPOWER_RESET_CAUSE_EXT_SWM1_09         ((power_reset_cause_mask_t)1ULL << 26)
#define kPOWER_RESET_CAUSE_EXT_SWM1_10         ((power_reset_cause_mask_t)1ULL << 27)
#define kPOWER_RESET_CAUSE_EXT_SWM1_11         ((power_reset_cause_mask_t)1ULL << 28)
#define kPOWER_RESET_CAUSE_EXT_SWM1_12         ((power_reset_cause_mask_t)1ULL << 29)
#define kPOWER_RESET_CAUSE_EXT_SWM1_13         ((power_reset_cause_mask_t)1ULL << 30)

/* Bit 31 is reserved — intentionally undefined */

/* Additional system causes */
#define kPOWER_RESET_CAUSE_BOD_VDD             ((power_reset_cause_mask_t)1ULL << 32)
#define kPOWER_RESET_CAUSE_VDD_DIG             ((power_reset_cause_mask_t)1ULL << 33)
#define kPOWER_RESET_CAUSE_VDD_MEM             ((power_reset_cause_mask_t)1ULL << 34)
#define kPOWER_RESET_CAUSE_VDD_ANA_CGU         ((power_reset_cause_mask_t)1ULL << 35)
#define kPOWER_RESET_CAUSE_LDO_MEM             ((power_reset_cause_mask_t)1ULL << 36)
#define kPOWER_RESET_CAUSE_NSS_ERROR           ((power_reset_cause_mask_t)1ULL << 37)

/* External IO resets from SWM2 */
#define kPOWER_RESET_CAUSE_EXT_SWM2_00         ((power_reset_cause_mask_t)1ULL << 38)
#define kPOWER_RESET_CAUSE_EXT_SWM2_01         ((power_reset_cause_mask_t)1ULL << 39)
#define kPOWER_RESET_CAUSE_EXT_SWM2_02         ((power_reset_cause_mask_t)1ULL << 40)
#define kPOWER_RESET_CAUSE_EXT_SWM2_03         ((power_reset_cause_mask_t)1ULL << 41)
#define kPOWER_RESET_CAUSE_EXT_SWM2_04         ((power_reset_cause_mask_t)1ULL << 42)
#define kPOWER_RESET_CAUSE_EXT_SWM2_05         ((power_reset_cause_mask_t)1ULL << 43)
#define kPOWER_RESET_CAUSE_EXT_SWM2_06         ((power_reset_cause_mask_t)1ULL << 44)
#define kPOWER_RESET_CAUSE_EXT_SWM2_07         ((power_reset_cause_mask_t)1ULL << 45)
#define kPOWER_RESET_CAUSE_EXT_SWM2_08         ((power_reset_cause_mask_t)1ULL << 46)
#define kPOWER_RESET_CAUSE_EXT_SWM2_09         ((power_reset_cause_mask_t)1ULL << 47)
#define kPOWER_RESET_CAUSE_EXT_SWM2_10         ((power_reset_cause_mask_t)1ULL << 48)
#define kPOWER_RESET_CAUSE_EXT_SWM2_11         ((power_reset_cause_mask_t)1ULL << 49)

/* External IO resets from SWM3 */
#define kPOWER_RESET_CAUSE_EXT_SWM3_00         ((power_reset_cause_mask_t)1ULL << 50)
#define kPOWER_RESET_CAUSE_EXT_SWM3_01         ((power_reset_cause_mask_t)1ULL << 51)
#define kPOWER_RESET_CAUSE_EXT_SWM3_02         ((power_reset_cause_mask_t)1ULL << 52)
#define kPOWER_RESET_CAUSE_EXT_SWM3_03         ((power_reset_cause_mask_t)1ULL << 53)
#define kPOWER_RESET_CAUSE_EXT_SWM3_04         ((power_reset_cause_mask_t)1ULL << 54)
#define kPOWER_RESET_CAUSE_EXT_SWM3_05         ((power_reset_cause_mask_t)1ULL << 55)
#define kPOWER_RESET_CAUSE_EXT_SWM3_06         ((power_reset_cause_mask_t)1ULL << 56)
#define kPOWER_RESET_CAUSE_EXT_SWM3_07         ((power_reset_cause_mask_t)1ULL << 57)
#define kPOWER_RESET_CAUSE_EXT_SWM3_08         ((power_reset_cause_mask_t)1ULL << 58)
#define kPOWER_RESET_CAUSE_EXT_SWM3_09         ((power_reset_cause_mask_t)1ULL << 59)
#define kPOWER_RESET_CAUSE_EXT_SWM3_10         ((power_reset_cause_mask_t)1ULL << 60)
#define kPOWER_RESET_CAUSE_EXT_SWM3_11         ((power_reset_cause_mask_t)1ULL << 61)
#define kPOWER_RESET_CAUSE_EXT_SWM3_12         ((power_reset_cause_mask_t)1ULL << 62)
#define kPOWER_RESET_CAUSE_EXT_SWM3_13         ((power_reset_cause_mask_t)1ULL << 63)

/**
 * @enum power_wakeup_pin_t
 * @brief Enumeration of all available wake-up pins.
 *
 * This enum defines symbolic names for each wake-up capable pin across
 * multiple SWM (Switch Matrix) ports. These pins can be configured to
 * trigger a wake-up event from power down or deep power down.
 *
 * These values are typically used with APIs such as @ref POWER_ConfigureWakeUpPins.
 */
typedef enum power_wakeup_pin_s
{
    kPOWER_WakeupPinSwm0_00 = 0,
    kPOWER_WakeupPinSwm0_01,
    kPOWER_WakeupPinSwm0_02,
    kPOWER_WakeupPinSwm0_03,
    kPOWER_WakeupPinSwm0_04,
    kPOWER_WakeupPinSwm0_05,
    kPOWER_WakeupPinSwm0_06,
    kPOWER_WakeupPinSwm0_07,
    kPOWER_WakeupPinSwm0_08,
    kPOWER_WakeupPinSwm0_09,
    kPOWER_WakeupPinSwm0_10,
    kPOWER_WakeupPinSwm0_11,
    kPOWER_WakeupPinSwm1_00,
    kPOWER_WakeupPinSwm1_01,
    kPOWER_WakeupPinSwm1_02,
    kPOWER_WakeupPinSwm1_03,
    kPOWER_WakeupPinSwm1_04,
    kPOWER_WakeupPinSwm1_05,
    kPOWER_WakeupPinSwm1_06,
    kPOWER_WakeupPinSwm1_07,
    kPOWER_WakeupPinSwm1_08,
    kPOWER_WakeupPinSwm1_09,
    kPOWER_WakeupPinSwm1_10,
    kPOWER_WakeupPinSwm1_11,
    kPOWER_WakeupPinSwm1_12,
    kPOWER_WakeupPinSwm1_13,
    kPOWER_WakeupPinSwm2_00,
    kPOWER_WakeupPinSwm2_01,
    kPOWER_WakeupPinSwm2_02,
    kPOWER_WakeupPinSwm2_03,
    kPOWER_WakeupPinSwm2_04,
    kPOWER_WakeupPinSwm2_05,
    kPOWER_WakeupPinSwm2_06,
    kPOWER_WakeupPinSwm2_07,
    kPOWER_WakeupPinSwm2_08,
    kPOWER_WakeupPinSwm2_09,
    kPOWER_WakeupPinSwm2_10,
    kPOWER_WakeupPinSwm2_11,
    kPOWER_WakeupPinSwm3_00,
    kPOWER_WakeupPinSwm3_01,
    kPOWER_WakeupPinSwm3_02,
    kPOWER_WakeupPinSwm3_03,
    kPOWER_WakeupPinSwm3_04,
    kPOWER_WakeupPinSwm3_05,
    kPOWER_WakeupPinSwm3_06,
    kPOWER_WakeupPinSwm3_07,
    kPOWER_WakeupPinSwm3_08,
    kPOWER_WakeupPinSwm3_09,
    kPOWER_WakeupPinSwm3_10,
    kPOWER_WakeupPinSwm3_11,
    kPOWER_WakeupPinSwm3_12,
    kPOWER_WakeupPinSwm3_13,
} power_wakeup_pin_t;


/**
 * @enum power_wakeup_pin_polarity_t
 * @brief Enumeration of wake-up pin polarity configurations.
 *
 * This enum defines the polarity settings for wake-up pins, which determine
 * whether a pin triggers a wake-up event on a low or high signal level.
 */
typedef enum power_wakeup_pin_polarity_s
{
    kPOWER_WakeupPinActiveLow = 0,
    kPOWER_WakeupPinActiveHigh = 1
} power_wakeup_pin_polarity_t;


/**
 * @struct power_wakeup_pin_config_t
 * @brief Configuration structure for a wake-up pin.
 *
 * This structure defines the configuration for a wake-up pin, including
 * the pin identifier and its polarity setting. It is used to specify how
 * the system should respond to external wake-up signals.
 */
typedef struct power_wakeup_pin_config_s
{
    power_wakeup_pin_t pin;
    power_wakeup_pin_polarity_t polarity;
} power_wakeup_pin_config_t;

/*! @brief PMRC Memory Control Mode (Active vs Powerdown) */
typedef enum _power_mem_ctrl_mode
{
    kPOWER_MemCtrlActive    = 0U,  /*!< Active control mode (base offset) */
    kPOWER_MemCtrlLowPower = 1U,  /*!< Low power control mode (base offset + 0x30) */
} power_mem_ctrl_mode_t;

/*! @brief PMRC Memory Control Register Indices
 * These are zero-based indices. Actual register offset = base + (index * 4)
 */
typedef enum _power_mem_reg_offset
{
    kPOWER_CtrlssCm55Ram     = 0U,   /*!< Index 0: CTRLSS CM55 RAM control (16 segments, offset 0xA4) */
    kPOWER_CtrlssCm55Cache   = 1U,   /*!< Index 1: CTRLSS CM55 Cache control (16 segments, offset 0xA8) */
    kPOWER_CtrlssCm55PkcOtp  = 2U,   /*!< Index 2: CTRLSS CM55 PKC/OTP control (3 segments, offset 0xAC) */
    kPOWER_NssAxiXsp         = 3U,   /*!< Index 3: NSS AXI/XSP control (7 segments, offset 0xB0) */
    kPOWER_NssCm55Cache      = 4U,   /*!< Index 4: NSS CM55 Cache control (16 segments, offset 0xB4) */
    kPOWER_NssDnnRam01       = 5U,   /*!< Index 5: NSS DNN RAM 00-17 control (16 segments, offset 0xB8) */
    kPOWER_NssDnnRam23       = 6U,   /*!< Index 6: NSS DNN RAM 20-37 control (16 segments, offset 0xBC) */
    kPOWER_NssDnnRam4        = 7U,   /*!< Index 7: NSS DNN RAM 40-47 control (8 segments, offset 0xC0) */
    kPOWER_AdssPram01        = 8U,   /*!< Index 8: ADSS PRAM 00-15 control (12 segments, offset 0xC4) */
    kPOWER_AdssPram2         = 9U,   /*!< Index 9: ADSS PRAM 20-27 control (8 segments, offset 0xC8) */
    kPOWER_AdssXram          = 10U,  /*!< Index 10: ADSS XRAM 0-15 control (16 segments, offset 0xCC) */
    kPOWER_AdssYramMisc      = 11U,  /*!< Index 11: ADSS YRAM control (9 segments, offset 0xD0) */
    kPOWER_MemRegCount       = 12U,  /*!< Total number of register indices */
} power_mem_reg_offset_t;

/*! @brief Memory power state values (2-bit fields) */
typedef enum _power_mem_state
{
    kPOWER_MemActive              = 0U, /*!< Memory is active */
    kPOWER_MemDeepsleepBypass     = 1U, /*!< Memory in deep sleep with bypass switch */
    kPOWER_MemDeepsleepDiode      = 2U, /*!< Memory in deep sleep with diode switch */
    kPOWER_MemShutdown            = 3U, /*!< Memory is shutdown */
} power_mem_state_t;

/*! @brief Memory segment identifiers (generic, 0-15) */
typedef enum _power_mem_segment
{
    kPOWER_MemSegment0  = 0U,   /*!< Memory segment 0 */
    kPOWER_MemSegment1  = 1U,   /*!< Memory segment 1 */
    kPOWER_MemSegment2  = 2U,   /*!< Memory segment 2 */
    kPOWER_MemSegment3  = 3U,   /*!< Memory segment 3 */
    kPOWER_MemSegment4  = 4U,   /*!< Memory segment 4 */
    kPOWER_MemSegment5  = 5U,   /*!< Memory segment 5 */
    kPOWER_MemSegment6  = 6U,   /*!< Memory segment 6 */
    kPOWER_MemSegment7  = 7U,   /*!< Memory segment 7 */
    kPOWER_MemSegment8  = 8U,   /*!< Memory segment 8 */
    kPOWER_MemSegment9  = 9U,   /*!< Memory segment 9 */
    kPOWER_MemSegment10 = 10U,  /*!< Memory segment 10 */
    kPOWER_MemSegment11 = 11U,  /*!< Memory segment 11 */
    kPOWER_MemSegment12 = 12U,  /*!< Memory segment 12 */
    kPOWER_MemSegment13 = 13U,  /*!< Memory segment 13 */
    kPOWER_MemSegment14 = 14U,  /*!< Memory segment 14 */
    kPOWER_MemSegment15 = 15U,  /*!< Memory segment 15 */
} power_mem_segment_t;

#ifdef __cplusplus
extern "C" {
#endif
/*******************************************************************************
 * API
 ******************************************************************************/

/*!
 * @brief Function to initialize the library.
 */
void POWER_Init(void);

/*!
 * @brief Function to reset device. This will result in a full boot cycle.
 */
void POWER_Reset(void);

/*!
 * @brief Function to configure the active power mode (APM).
 * @param mode    active power mode to set
 */
void POWER_SetActivePowerMode(power_active_mode_t mode);

/*!
 * @brief Function that sets the Supply mode
 * @retval kStatus_Success Successfully set the supply mode.
 */
status_t POWER_SetSupplyMode(power_supply_mode_t mode);

/*!
 * @brief Function to power on certain SRAM segments. By default all SRAM segments are on.
 * @param mask    mask of power_sram_ctrl_bit_t bits to power on.
 */
void POWER_EnableSRAM(power_sram_ctrl_mask_t mask);

/*!
 * @brief Function to power off certain SRAM segments.
 * @param mask    mask of power_sram_ctrl_bit_t bits to power off.
 */
void POWER_DisableSRAM(power_sram_ctrl_mask_t mask);

/*!
 * @brief Function to return power status of all SRAM segments.
 * @return power_sram_ctrl_bit_t bits of enabled SRAM segments.
 */
uint32_t POWER_GetSRAMConfig(void);

/*!
 * @brief Function to configure the BOD action. Note that BOD is disabled automatically when BOD reset is triggered but
 * the settings remain.
 * @param instance   BOD instance
 * @param action     the action to take when a BOD is detected
 * @note Set the desired threshold voltage using @ref POWER_SetBodLevel() before enabling BOD interrupt or BOD reset.
 */
void POWER_ConfigureBod(power_bod_instance_t instance, power_bod_action_t action);

/*!
 * @brief Function to configure the detection level of BOD.
 * @param instance   BOD instance
 * @param level      BOD detect level
 * @post             BOD is configured to kPOWER_BodNoAction
 * @post             this call must be followed by @ref POWER_ConfigureBod() if reset or interrupt is required
 */
void POWER_SetBodLevel(power_bod_instance_t instance, power_bod_level_t level);

/*!
 * @brief Function to clear the BOD interrupt. It does not
 *        clear the interrupt in the NVIC.
 * @param instance   BOD instance
 */
void POWER_ClearBodInterrupt(power_bod_instance_t instance);

/*!
 * @brief Function to configure output level of memory LDO.
 * @param outputLvl    The output level of the LDO.
 */
void POWER_LdoMemConfigureOutput(power_ldo_mem_output_level_t outputLvl);

/**
 * @brief Enters sleep mode by stopping the CPU.
 *
 * In sleep mode, the system halts CPU execution but retains all context.
 * Execution resumes automatically after wake-up triggered by any interrupt.
 *
 * @note The system can be awakened from sleep by any interrupt source.
 */
void POWER_EnterSleep(void);

/**
 * @brief Enters deep sleep mode by stopping the CPU.
 *
 * In deep sleep mode, all active SRAM segments that are enabled via
 * @ref POWER_EnableSRAM are retained. The system resumes execution
 * from where it left off after waking up.
 *
 * @pre Before entering deep sleep, it is assumed that NSS and DSS subsystems are already in the required state.
 * @note The system can be awakened from deep sleep by any interrupt source.
 *
 * @return status_t Returns the status of the deep sleep entry operation.
 */
status_t POWER_EnterDeepSleep(void);

/**
 * @brief Configure multiple wake-up pins with their polarity.
 * @par Example
 * @code
 * power_wakeup_pin_config_t wakeupPins[] = {
 *     { kPOWER_WakeupPinSwm0_00, kPOWER_WakeupPinActiveLow },
 *     { kPOWER_WakeupPinSwm1_04, kPOWER_WakeupPinActiveHigh },
 *     { kPOWER_WakeupPinSwm3_13, kPOWER_WakeupPinActiveLow }
 * };
 * @endcode
 * @param pinConfigs Array of pin configuration entries.
 * @param numPins Number of entries in the array.
 */
status_t POWER_ConfigureWakeUpPins(const power_wakeup_pin_config_t *pinConfigs, size_t numPins);

/**
 * @brief Enters power-down mode, shutting down most system components.
 *
 * Selected SRAM blocks can be retained based on the provided mask.
 * The system resets upon wake-up.
 *
 * Wake-up sources include:
 * - LF timer
 * - Pin wake-up (see @ref POWER_ConfigureWakeUpPins)
 * - Reset caused by LDO mem BOD (see @ref kPOWER_BodLdoMem)
 *
 * @param mask Bitmask of @ref power_sram_ctrl_bit_t values indicating which SRAM blocks to retain during power-down.
 *
 * @return status_t Returns the status of the power-down entry operation.
 */
status_t POWER_EnterPowerDown(power_sram_ctrl_mask_t mask);

/**
 * @brief Enters deep power-down mode, shutting down most system components.
 *
 * In deep power-down mode, the CPU is powered down, and no SRAM is retained
 * (as VDD_MEM is gated). The system performs a full reset upon wake-up.
 *
 * Wake-up sources include:
 * - LF timer
 * - Pin wake-up (see @ref POWER_ConfigureWakeUpPins)
 *
 * @note No SRAM retention is possible in this mode.
 *
 * @return status_t Returns the status of the deep power-down entry operation.
 */
status_t POWER_EnterDeepPowerDown(void);

/*!
 * @brief Function to retrieve the reset cause after reset or after waking from power down or deep power down.
 * @return bit mask of reset causes (@ref power_reset_cause_mask_t)
 */
power_reset_cause_mask_t POWER_GetResetCause(void);

/*!
 * @brief Get the valid segment mask for a memory control register.
 *
 * @param regIndex Register index
 * @return Bitmask indicating which segments are valid for the specified register
 */
uint16_t POWER_GetMemoryValidSegmentMask(power_mem_reg_offset_t regIndex);

/*!
 * @brief Set power state for a specific memory segment
 *
 * @param regIndex Register index
 * @param mode Control mode
 * @param segment Memory segment index
 * @param state Power state to set
 * @return kStatus_Success if successful
 * @return kStatus_Power_InvalidMemSegment if segment is invalid for the specified register
 * @return kStatus_Power_RegisterTransferBusy if PMRC transfer is busy
 */
status_t POWER_SetMemorySegmentState(power_mem_reg_offset_t regIndex,
                                     power_mem_ctrl_mode_t mode,
                                     power_mem_segment_t segment,
                                     power_mem_state_t state);

/*!
 * @brief Get power state for a specific memory segment
 *
 * @param regIndex Register index
 * @param mode Control mode
 * @param segment Memory segment index
 * @param state Pointer to store the current power state
 * @return kStatus_Success if successful
 * @return kStatus_Power_InvalidMemSegment if segment is invalid for the specified register
 * @return kStatus_Power_InvalidArgument if state pointer is NULL
 */
status_t POWER_GetMemorySegmentState(power_mem_reg_offset_t regIndex,
                                     power_mem_ctrl_mode_t mode,
                                     power_mem_segment_t segment,
                                     power_mem_state_t *state);

/*!
 * @brief Set power state for all segments in a register
 *
 * @param regIndex Register index
 * @param mode Control mode
 * @param state Power state to set for all segments
 * @return kStatus_Success if successful
 * @return kStatus_Power_RegisterTransferBusy if PMRC transfer is busy
 */
status_t POWER_SetAllMemorySegmentsState(power_mem_reg_offset_t regIndex,
                                     power_mem_ctrl_mode_t mode,
                                     power_mem_state_t state);

#ifdef __cplusplus
}
#endif

/**
 * @}
 */

#endif /* _FSL_POWER_H_ */