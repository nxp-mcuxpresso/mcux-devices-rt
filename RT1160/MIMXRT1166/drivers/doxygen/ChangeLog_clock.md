# CLOCK

## [2.2.0]

- New Features
  - Added APIs to set/get CLKO1/O2.

## [2.1.6]

- Bug Fixes
  - Fix an issue in CLOCK_InitArmPll() of wrong bitmask used

## [2.1.5]

- Bug Fixes
  - Fix clock_pll_post_div_t value.

## [2.1.4]

- Improvements
  - Move s_clockSourceName array to c from header.

## [2.1.3]

- Improvements
  - Toggle hold_ring_off during arm pll initialization.

## [2.1.2]

- Bug Fixes
  - Fixed bug in XBARA_CLOCKS macro define.
  - Fixed bug in CLOCK_InitSysPll1() function.

## [2.1.1]

- Bug Fixes
  - Fixed bug in CLOCK_InitArmPll() function.
  - Fixed bug clock root divider set to cut off at 255.

## [2.1.0]

- New Features

  - Added CLOCK_DeinitPfd() function.

- Bug Fixes

  - Fixed violations of MISRA C-2012 rule 10.4.
  - Fixed bug in XBARA_CLOCKS macro define.

## [2.0.0]

- initial version.
