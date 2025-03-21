# POWER

## [2.5.0]

- New feature
  - Added new API POWER_PmicPowerModeSelectControl() to allow users changing VDD1V8 and VDDCore state for various PMIC modes.

## [2.4.0]

- New feature
  - Added new API POWER_SetVddCoreSupplySrc(), POWER_SetPmicCoreSupplyFunc() and POWER_SetVoltageForFreq() to allow users set VDDCORE voltage using a
    unified API with minimum volatage value.

## [2.3.2]

- Bug Fixes
  - Fixed MISRA issue in function POWER_GetLibVersion.

## [2.3.1]

- Bug Fixes
  - Fixed the return value of function countPartitionSwitches.

## [2.3.0]

- API change: POWER_SetLdoVoltageForFreq()
  - Changed power_part_temp_range_t. 70C->85C.
  - Added parameter power_volt_op_range_t.
  - Changed main clock freq parameter to cpu clock freq.
  - Added return value to indicate success or failure.
- Optimization
  - Turn on all memory partitions simultaneously on deep sleep wakeup to save time.
- Release in source code instead of in library.

## [2.2.1]

- Exposed POWER_DisableLVD() and POWER_RestoreLVD() APIs in header.
- Added PMIC_VDDCORE_RECOVERY_TIME_IGNORE macro for POWER_UpdatePmicRecoveryTime() API.
- Adjusted main frequency table for SetXXXVoltageForFreq() API to match latest B0 data.

## [2.2.0]

- Added parameter to POWER_SetLdoVoltageForFreq to specify part temperature range.

## [2.1.0]

- Updated power library implementation for B0.
- Added POWER_SetLvdFallingTripVoltage() API.
- Added POWER_GetLvdFallingTripVoltage() API.
- Added POWER_UpdatePmicRecoveryTime() API.

## [2.0.3]

- Updated PD_bits per the B0 header file's change.

## [2.0.2]

- Added POWER_SetPadVolRange() API

## [2.0.1]

- Add POWER_UpdateOscSettlingTime() API to set on-board system osc settling time.

## [2.0.0]

- initial version.
