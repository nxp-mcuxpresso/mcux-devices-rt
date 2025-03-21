# POWER

## [2.6.1]

- Bug Fixes
  - Set the high speed pads to low power mode in case there's current leakage.
  - Fixed bugs in EnableDeepSleepIRQ() and DisableDeepSleepIRQ().

## [2.6.0]

- New feature
  - Added new API POWER_PmicPowerModeSelectControl() to allow users changing VDD1V8 and VDDCore state for various PMIC modes.

## [2.5.0]

- New feature
  - Added new API POWER_SetVddCoreSupplySrc(), POWER_SetPmicCoreSupplyFunc() and POWER_SetVoltageForFreq() to allow users set VDDCORE voltage using a
    unified API with minimum volatage value.

## [2.4.0]

- Bug Fixes
  - Removed HSPAD related configurations.

## [2.3.3]

- Bug Fixes
  - Fixed MISRA issue in function POWER_GetLibVersion.
  - Cleared bit PDSLEEPCFG0[PMCREF_LP] when FRO or PLL enabled during deep sleep in function POWER_EnterDeepSleep.

## [2.3.2]

- Bug Fixes
  - Added PORCORE_LP bitfield in macro PCFG0_DEEP_SLEEP.
  - Updated pSlowSwitches calculation in function countPartitionSwitches.
  - Added PMC internal clock divider config in POWER_ApplyPD to decrease the PMC register access delay,
    incase the divider was enabled before.

## [2.3.1]

- Updated powerFreqLevel array for B2 sample.

## [2.3.0]

- Set MEMSEQNUM to 0x3F to turn on all partitions in parallel to decrease deep sleep wakeup time.
- Updated power_pad_vrange_val_t for supported PAD voltage range.

## [2.2.2]

- Supported dual FRO frequency in deep sleep.

## [2.2.1]

- Optimized MAINCLKSAFETY calculation.
- Used FRO48M instead of FRO192M as main clock source in deep sleep.

## [2.2.0]

- Moved power lib implementaion to fsl_power.c

## [2.1.0]

- Added LVD APIs.
- Added POWER_UpdatePmicRecoveryTime() API.

## [2.0.4]

- Supported OTP switch RBB in deep sleep.

## [2.0.3]

- Improved XIP recovery in deep sleep wakeup.

## [2.0.2]

- Added POWER_SetDeepSleepClock() API to allow main clock source selection in deep sleep.
- Added POWER_SetPadVolRange() API

## [2.0.1]

- Added POWER_UpdateOscSettlingTime() API to set on-board system osc
  settling time.

## [2.0.0]

- initial version.
