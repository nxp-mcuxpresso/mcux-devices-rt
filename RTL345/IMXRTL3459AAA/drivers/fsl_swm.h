/*
 * Copyright 2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef FSL_SWM_H_
#define FSL_SWM_H_

#include "fsl_swm_connections.h"

/*! @brief SWM driver version. */
#define FSL_SWM_DRIVER_VERSION (MAKE_VERSION(1, 1, 0))

/*******************************************************************************
 * Configuration Macros
 ******************************************************************************/

/**
 * @brief Check if a pin is compatible with a mode at compile-time.
 *
 * @param pin The SWM pin index.
 * @param mode The SWM mode enum value.
 * @return Non-zero if compatible, zero otherwise.
 */
#define SWM_IS_PIN_COMPATIBLE(pin, mode) \
    ((SWM_COMPAT_##mode & (1ULL << (pin))) != 0ULL)

/**
 * @brief Static assertion for pin-mode compatibility.
 *
 * Generates a compile-time error if the pin is not compatible with the mode.
 *
 * @param pin The SWM pin index (must be compile-time constant).
 * @param mode The SWM mode (must be compile-time constant).
 */
#define SWM_STATIC_ASSERT_COMPATIBLE(pin, mode) \
    _Static_assert(SWM_IS_PIN_COMPATIBLE(pin, mode), \
                   "SWM pin incompatible with mode - check datasheet/CSV")

/**
 * @brief Configure a pin with compile-time compatibility validation.
 *
 * This macro validates pin-mode compatibility at compile-time and then
 * configures the pin. Use this in application code for safe pin configuration.
 *
 * @param base DSWM peripheral base address.
 * @param pin The SWM pin index (e.g., SWM0_06).
 * @param mode The SWM mode (e.g., SWM_MODE_U_XSPI0_INT).
 *
 * Example:
 * @code
 *   SWM_CONFIGURE_PIN(DSWM, SWM0_06, SWM_MODE_U_XSPI0_INT);
 * @endcode
 */
#define SWM_CONFIGURE_PIN(base, pin, mode) \
    do { \
        SWM_STATIC_ASSERT_COMPATIBLE(pin, mode); \
        SWM_SetPinMode(base, pin, mode); \
    } while(0)

/*******************************************************************************
 * API Functions
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/**
 * @brief Assign a function mode to a specific SWM pin.
 *
 * This function configures the switch matrix to route a specific function to a pin.
 * For compile-time validation, use SWM_CONFIGURE_PIN macro instead.
 *
 * @param base DSWM peripheral base address.
 * @param pinIndex The index of the pin to configure.
 * @param pinMode The function mode to assign to the pin.
 *
 * @note This function does NOT perform compatibility checking. Use SWM_CONFIGURE_PIN
 *       macro for compile-time validation when pin and mode are constants.
 */
void SWM_SetPinMode(DSWM_Type *base, swm_pin_index_t pinIndex, swm_pin_mode_t pinMode);

/**
 * @brief Read back the current function mode of a specific SWM pin.
 *
 * @param base DSWM peripheral base address.
 * @param pinIndex The index of the pin to read.
 * @return The current swm_pin_mode_t assigned to the pin.
 */
swm_pin_mode_t SWM_GetPinMode(DSWM_Type *base, swm_pin_index_t pinIndex);

/**
 * @brief Write the PIN_CFG register for a specific SWM pin.
 *
 * The PIN_CFG registers control pin electrical properties (drive strength,
 * slew rate, pull-up/down, etc.). Pass the full register value directly.
 *
 * @param base DSWM peripheral base address.
 * @param pinIndex The index of the pin to configure.
 * @param config Raw PIN_CFG register value to write.
 */
void SWM_SetPinConfig(DSWM_Type *base, swm_pin_index_t pinIndex, uint32_t config);

#if defined(__cplusplus)
}
#endif

#endif /* FSL_SWM_H_ */
