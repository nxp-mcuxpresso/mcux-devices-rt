# CLOCK

## [2.4.1]

- Bug fixes
  - Fixed bugs in POWER_DisableSleepRegulators POWER_EnableSleepRegulators.

## [2.4.0]

- New features
  - Added return value for CLOCK_InitMainPfd CLOCK_InitAudioPfd.
  - Updated FRO max supported frequency.
  - Added fast startup configuration for FRO.

## [2.3.1]

- Bug fixes
  - Fixed bugs in CLOCK_ClearFroFlags.
  - Fixed bugs in clock_attach_id_t.

## [2.3.0]

- Bug fixes
  - Added clock array for SDADC, CDOG.
  - Added FRO related APIs.

## [2.2.2]

- Bug fixes
  - Fixed GPIO_CLOCKS array for GPIO_ALIAS.

## [2.2.1]

- Bug fixes
  - Fixed bugs in clock_attach_id_t.
  - Fixed FRO frequency calcualtion.

## [2.2.0]

- Bug fixes
  - Fixed UTICK0 clock sources.

## [2.1.0]

- New features
  - Added CLOCK_GetCoreSysClkFreq API.
- Bug fixes
  - Fixed bugs in CLOCK_GetFCClkFreq and clock_attach_id_t.

## [2.0.0]

- Initial version.
