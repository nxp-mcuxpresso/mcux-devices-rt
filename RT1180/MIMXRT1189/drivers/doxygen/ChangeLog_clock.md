# CLOCK

## [2.2.0]

- New Features
  - Added APIs to set/get CLKO1/O2.

## [2.1.5]

- Improvements
  - update OSC_RC_400M STAT registers to read only.

## [2.1.4]

- Bug Fixes
  - Fix edma base ptrs and edma clocks did not match issue.

## [2.1.3]

- Improvements
  - Move s_clockSourceName array to c from header.

## [2.1.2]

- Comment improvements for CLOCK_InitPfd()

## [2.1.1]

- Bug Fixes
  - Fixed violations of MISRA C-2012 rule 8.6, 10.3.
  - Fixed potential infinite loop in CLOCK_GetCoreSysClkFreq() function.

## [2.1.0]

- Improvements
  - Added CLOCK_GetFreqFromObs() function.
- Bug Fixes
  - Fixed bug in CLOCK_InitArmPll() function.
  - Fixed bug in CLOCK_InitSysPll1() function.

## [2.0.0]

- Initial version.
