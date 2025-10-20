# POWER

## [2.5.0]

- New features
  - Added API POWER_EnableSleepAFBB to configure body bias to AFBB in deep sleep mode. 
  - Added user configurable macro POWER_LDO_SAFE_MARGIN(x) with default value "0" to allow adding LDO output safe margin
    when using API POWER_ConfigRegulatorSetpointsForFreq.

## [2.4.2]

- Bug fixes
  - Clear PDRUNCFG0 bit6 and bit8 before entering Deep Power Down(DPD) mode to make sure the domain 
    is reset correctly after wake up from DPD.

## [2.4.1]

- Bug fixes
  - Fixed bugs in POWER_DisableSleepRegulators POWER_EnableSleepRegulators.

## [2.4.0]

- New features
  - Added APIs POWER_CalcVoltLevel, POWER_ConfigRegulatorSetpointsForFreq.

## [2.3.0]

- Bug fixes
  - Fixed bugs in LDO Setpoint setting APIs.
  - Fixed bugs in XSPI recovery when XIP.
- New features
  - Added API POWER_EnterPowerMode.

## [2.2.1]

- Bug fixes
  - Fixed bugs in enum _power_hwwake_src.

## [2.2.0]

- New features
  - Added parameter checks in setpoint configuration APIs.
- Bug fixes
  - Fixed bugs in power mode entry API.

## [2.1.0]

- New features
  - Added POWER_ConfigLvdSetpoints API.

## [2.0.0]

- Initial version.
