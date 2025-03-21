# CLOCK

## [2.5.6]

```
- Bug Fixes
  - Fix an issue in CLOCK_InitArmPll() of wrong bitmask used
```

## [2.5.5]

- Improvements
  - Move s_clockSourceName array to c from header.

## [2.5.4]

- Improvements

  - Toggle hold_ring_off during arm pll initialization.

- Bug Fixes

  - Fixed an issue that in CLOCK_InitSysPll3() some reserved bits may be cleared.

## [2.5.3]

- Bug Fixes
  - Fixed bug in CLOCK_GetPllFreq() the formula is not general.
  - Fixed bug in CLOCK_InitSysPll1() function.

## [2.5.2]

- Bug Fixes
  - Fixed bug in XBARA_CLOCKS macro defie.

## [2.5.1]

- Bug Fixes
  - Fixed bug in CLOCK_InitArmPll() function.
  - Fixed bug clock root divider set to cut off at 255.

## [2.5.0]

- New Features

  - Added CLOCK_DeinitPfd() function to clock gate selected PLL's pfd.

- Bug Fixes

  - Fixed violations of MISRA C-2012 rule 5.6.
  - Fixed bug in XBARA_CLOCKS macro define.

## [2.4.0]

- New features

  - Added CLOCK_IsUsb1PfdEnabled and CLOCK_IsSysPfdEnabled to get the clock source status.

- Improvements

  - In CLOCK_InitPfd() function, check fractional divide value firstly,
    if register's value is equal to value to set, return directly.

- Bug Fixes

  - Fixed Doxygen warnings.
  - Fixed violations of MISRA C-2012 rule 10.3, 10.1, 10.4, 14.4, 16.6, 16.1, 8.8.

## [2.3.0]

- Improvements
  - Added APIs for CCM functional blocks: OSCPLL, CLOCK_ROOT, LPCG.
    - Added APIs for Unassigned Mode, Domain Mode, CPU Low Power Mode, SetPoint Mode.
    - Added APIs for control mode access and white list access.
    - Added APIs for OSCPLL, LPCG to set current accessing domain's clock depend level.
  - Added APIS for Fractional PLLs during GPC mode.
  - Added kCLOCK_SysPll3Div2 case in CLOCK_GetFreq() function.

## [2.2.0]

- Improvements
  - Updated PLL initialization API for those PLLs support spread spectrum
  - Added APIs for PLL
    - check/set PLL bypass
    - check if PLL is enabled

## [2.1.10]

- Improvements

  - Defined SDK_DEVICE_MAXIMUM_CPU_CLOCK_FREQUENCY as 400000000UL for m4 core.

- Bug Fixes

  - Fixed violations of MISRA C-2012 rules, including 10.3, 16.1, 16.4, 9.3,
    10.4, 10.8, 5.6, 11.1, 14.3, 10.7, 14.4, 12.2, 8.4.

## [2.1.9]

- Bug Fixes
  - Aligned behavor of clock root divider setting and geting

## [2.1.8]

- Bug Fixes
  - Fixed CLOCK_SetRootClockMux changes not mux only

## [2.1.7]

- New Features
  - Supported ARM PLL initialization with frequency.

## [2.1.6]

- Improvements
  - Added puf related enum variable in clock driver.

## [2.1.5]

- Bug Fixes
  - Fixed CLOCK_GetRootClockFreq does not get correct OSC RC 16M frequency.

## [2.1.4]

- Bug Fixes
  - rt1170: fix set clock root divider issue
  - rt1170: add __xSB() after changing clock related registers

## [2.1.3]

- Improvements
  - Aligned naming rule for enum variable _clock_pll with previous RT1xxx devices.

## [2.1.2]

- Improvements
  - Added a new enumerator to define the mux value of clock source in clock roots.

## [2.1.1]

- Bug Fixes
  - Fixed AV Pll frequency calculation

## [2.1.0]

- New features
  - Moved SDK_DelayAtLeastUs function from clock driver to common driver.

## [2.0.0]

- initial version.
