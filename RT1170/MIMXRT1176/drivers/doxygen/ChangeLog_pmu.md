# PMU

## [2.1.2]

- Bug Fixes
  - Updated PMU_StaticEnablePllLdo() with disabling LDO current limit after LDO is stable to
    minimize ARM PLL jitter in cold temperature.

## [2.1.1]

- Bug Fixes
  - Fixed bugs in FBB configuration.
  - Updated delay value from 1us to 100us in PMU_StaticEnablePllLdo() function.

## [2.1.0]

- Improvements

  - Updated the PMU driver based on the new header file.
  - Defined the macro to separate different scenes that
    some devices may do not support FBB.
  - Fixed Doxygen warnings.
  - Fixed violations of MISRA C-2012 rule 14.3.

- Bug Fixes

  - Fixed violations of MISRA C-2012 rule 13.1, rule 10.1,
    rule 10.4, and rule 14.3.

## [2.0.0]

- Initial version.
