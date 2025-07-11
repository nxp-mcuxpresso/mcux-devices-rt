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

## [2.5.0]

- New Features

  - Added CLOCK_IsUsb1PfdEnabled and CLOCK_IsSysPfdEnabled to get the clock source status.

- Bug Fixes

  - Fixed the wrong mxu enumerator used in "CLOCK_ROOT_MUX_TUPLE" macro.
  - Updated CLOCK_SetClockOutput1() function, adjusted the sequence of register configuration.

## [2.4.1]

- Improvements
  - Placed function internal constants into initialized data segment.

## [2.4.0]

- New Features
  - Added clock output related APIs and data structures.
  - Added one function CLOCK_GetClockRootFreq to get the frequency of each clock root.

## [2.3.1]

- Bug Fixes
  - Fixed the violations of MISRA C-2012 rule10.1, rule 18.4, rule 14.4 and so on.

## [2.3.0]

- New feature:
  - Moved SDK_DelayAtLeastUs function from clock driver to common driver.

## [2.2.0]

- New feature
- Adding new API CLOCK_DelayAtLeastUs() implemented by DWT to allow users set delay in unit of microsecond.

## [2.1.6]

- Bug Fix:
  - Fix build issue with GCC compiler when include header from C++ file.

## [2.1.5]

- Bug Fix:
  - Add initialization of the fractional mode and spread spectrum mode in CLOCK_InitSysPll().

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
