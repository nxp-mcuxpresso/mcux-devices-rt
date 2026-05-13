# PMU

## [2.1.4]
- Bug Fixes
  - Fixed CERT-C INT31-C MSG violations on bool-to-unsigned-long casts of config flags in
    PMU_LdoAonAnaInit (enable2mALoad/enable4mALoad/enable20uALoad/enableStandbyMode) and
    PMU_BandgapInit (enableLowPowerMode).

## [2.1.3]
- Bug Fixes
  - Modify PMU_BIAS_CTRL value from 0x11009002 to 0x110081EE.

## [2.1.2]

- Bug Fixes
  - Updated PMU_StaticEnablePllLdo() with disabling LDO current limit after LDO is stable to
    minimize ARM PLL jitter in cold temperature.

## [2.1.1]

- Bug Fixes
  - Fixed bugs in FBB configuration.

## [2.1.0]

- Improvements
  - Added PMU_EnableFBB() function.
  - Added PMU_EnableFBBStandbyMode() function.
  - Added PMU_EnableLdoStandbyMode() function.

## [2.0.1]

- Bug Fixes
  - Fixed violations of MISRA C-2012 rule 8.4.

## [2.0.0]

- Initial version.
