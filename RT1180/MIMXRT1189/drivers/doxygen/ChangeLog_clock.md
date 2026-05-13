# CLOCK

## [2.2.2]

- Bug Fixes
  - Fixed CERT-C INT30-C unsigned wrap and INT31-C narrowing-cast MSG violations in CLOCK_CalcPllSpreadSpectrum,
    CLOCK_InitSysPll2, CLOCK_OSC_SetLocked1MHzCount, CLOCK_GetPllFreq (ARM PLL), CLOCK_OSC_TrimOscRc400M,
    USB PHY multiplier compute, CLOCK_ControlGate, and CLOCK_SetClockOutput1/2.

## [2.2.1]

- Bug Fixes
  - Fixed logical issue in CLOCK_InitPfd() for PFD gate status check of PLL2/PLL3.

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
