# CLOCK

## [2.5.3]

- Bug Fixes
  - Fixed the violations of MISRA C-2012 rule 10.7.

## [2.5.2]

- Bug Fixes
  - Fixed issues in CLOCK_GetSysPfdFreq() and CLOCK_GetUsb1PfdFreq() which produce incorrect result.

## [2.5.1]

- Improvements

  - Added enumeration clock_div_value_t.

- Bug Fixes

  - Fixed violations of MISRA C-2012 rule 10.3.

## [2.5.0]

- New features
  - Added CLOCK_IsUsb1PfdEnabled and CLOCK_IsSysPfdEnabled to get the clock source status.
- Bug Fixes
  - Fixed violations of MISRA C-2012 rule 10.3.

## [2.4.1]

- Improvements
  - Placed function internal constants into initialized data segment.

## [2.4.0]

- New Features
  - Added clock output related APIs and data structures.
  - Added one function CLOCK_GetClockRootFreq to get the frequency of each clock root.

## [2.3.2]

- Bug Fixes
  - Fixed MISRA C-2012 rule 20.7 rule 12.2 rule 10.7 rule 18.4.
  - Fixed IAR warning Pa082 for the clock driver.

## [2.3.1]

- Improvements
  - Added new macro in case that the CCM has CAN clock affect issue.

## [2.3.0]

- New feature:
  - Moved SDK_DelayAtLeastUs function from clock driver to common driver.

## [2.2.0]

- New feature
  - Adding new API CLOCK_DelayAtLeastUs() implemented by DWT to allow users set delay in unit of microsecond.

## [2.1.7]

- Bug Fix:
  - Fix build issue with GCC compiler when include header from C++ file.

## [2.1.6]

- Bug Fix:
  - Add initialization of the fractional mode and spread spectrum mode in CLOCK_InitSysPll().

## [2.1.5]

- New feature:
  - Add support for ENET2.

## [2.1.4]

- Optimization:
  - Add PerClk in clock_name_t and CLOCK_GetFreq.
  - Add APIs to get the frequency of AHB clock and SEMC, IPG clock and PER clock.

## [2.1.3]

- Use double instead of uint64_t to achieve better performance with double precision FPU.

## [2.1.2]

- some minor fixes.

## [2.0.0]

- initial version.
