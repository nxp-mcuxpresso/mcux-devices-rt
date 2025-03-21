# CLOCK

## [2.7.1]

- Improvements
  - Added return value for CLOCK_InitSysPfd CLOCK_InitAudioPfd.

## [2.7.0]

- API changes
  - Added CLOCK_FroTuneToFreq and CLOCK_EnableFroClkFreq API.

## [2.6.1]

- Improvements
  - Added lost comments for some enumerations.
- Bug Fixes
  - Fixed violations of MISRA C-2012 rule 11.1.

## [2.6.0]

- API changes
  - Added CLOCK_EnableFroClkRange API.
  - FRO clock name changed from FRO192M, FRO96M, FRO48M, FRO24M, FRO12M to FRO_DIV1,FRO_DIV2, FRO_DIV4, FRO_DIV8, FRO_DIV16.
- Bug Fixes
  - Added kAUX0_PLL_to_MIPI_DPHYESC_CLK, kAUX1_PLL_to_MIPI_DPHYESC_CLK for clock_attach_id_t.
  - Fixed the error usage of macro in CLOCK_DeinitSysPfd() function.

## [2.5.1]

- Bug Fixes
  - Updated enum sys_pll_mult_t and audio_pll_mult_t to fix the supported MULT values for PLLs.
  - Added kHCLK_to_OSTIMER_CLK for clock_attach_id_t.
  - Fixed the calculation of main_pll_clk, dsp_pll_clk, aux0_pll_clk, aux0_pll_clk.
  - Renamed "kFRO192M_to_CLKOUT" to "kFRO96M_to_CLKOUT" to align with RM.

## [2.5.0]

- API change
  - Added CLOCK_SetClkinFreq API.
- Other Changes
  - Macro "CLK_CLK_IN" changed to "CLK_EXT_CLKIN".

## [2.4.0]

- API change
  - Added enableLowPower parameter in CLOCK_EnableSysOscClk().
- Other Changes
  - Fixed C++ build errors.
  - Added assert in CLOCK_SetFRGClock(), the FRG DIV should be always set to 0xFF according to Reference Manual.

## [2.3.1]

- Other Changes:
  - Updated register access per the header file's change.

## [2.3.0]

- New feature:
  - Moved SDK_DelayAtLeastUs function from clock driver to common driver.

## [2.2.2]

- Bug Fixes
  - Avoided waiting REQFLAG when divider configured to HALT in CLOCK_SetClkDiv().

## [2.2.1]

- Added CLOCK_EnableLpOscClk() and CLOCK_EnableFroClk() API

## [2.2.0]

- New feature
  - Added Deinit PLL&PFD API.
- API change
  - Added delay_us parameter in CLOCK_EnableSysOscClk()

## [2.1.0]

- New feature
  - Adding new API CLOCK_DelayAtLeastUs() implemented by DWT to allow users set delay in unit of microsecond.

## [2.0.1]

- Updated clock_attach_id_t elements, removing the FRG(Fractional Generator)
  clock source selection from CLOCK_AttachClk.
- Users need call CLOCK_SetFRGClock to set FRG clock source.

## [2.0.0]

- initial version.
