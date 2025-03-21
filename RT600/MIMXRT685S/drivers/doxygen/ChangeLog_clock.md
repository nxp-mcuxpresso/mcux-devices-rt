# CLOCK

## [2.7.4]

- New feature
  - Added ESPI clock selection.

## [2.7.3]

- Improvements
  - Added return value for CLOCK_InitSysPfd CLOCK_InitAudioPfd.

## [2.7.2]

- Bug Fixes
  - Added clock name array for PUF, HashCrypt and Casper.

## [2.7.1]

- Improvements
  - Added lost comments for some enumerations.

## [2.7.0]

- Bug Fixes
  - Updated enum sys_pll_mult_t and audio_pll_mult_t to fix the supported MULT values for PLLs.
  - Supported more APIs for DSP core.

## [2.6.1]

- New feature
  - Added CLOCK_SetClkinFreq API.
- Other Changes
  - Rmove main_clk from UTICK,WWDT0/1 clock attach define.
- Bug Fixes
  - Fixed violations of MISRA C-2012 rules.

## [2.6.0]

- API change
  - Added enableLowPower parameter in CLOCK_EnableSysOscClk().
  - Added id parameter in CLOCK_GetSdioClkFreq().
- Other Changes
  - Fixed C++ build errors.
  - Added sdio1 and flexcomm6,7 clock support.
  - Added syspll pfd clock dividers define.
  - Updated register access per the B0 header file's change.
  - Added assert in CLOCK_SetFRGClock(), the FRG DIV should be always set to 0xFF according to User Manual.

## [2.5.0]

- New feature
  - Moved SDK_DelayAtLeastUs function from clock driver to common driver.

## [2.4.1]

- Bug Fixes
  - Avoided waiting REQFLAG when divider configured to HALT in CLOCK_SetClkDiv().

## [2.4.0]

- Modify Audio PLL mult parameter range.
- Update get mclk_in api.

## [2.3.0]

- New feature
  - Adding Deinit PLL&PFD API.
- API change
  - Add delay_us parameter in CLOCK_EnableSysOscClk()

## [2.2.0]

- Update I3C and SDIO clock get API.
- Modify wwdt clock API name.

## [2.1.1]

- Update PLL initialization function.

## [2.1.0]

- New feature
  - Adding new API CLOCK_DelayAtLeastUs() implemented by DWT to allow users set delay in unit of microsecond.

## [2.0.5]

- Clean up 3 USB clock enable APIs;

## [2.0.4]

- New feature
  - add get mclk_in api.
- Bug Fixes
  - The Systick clock value should not be divided except choose main clock.

## [2.0.3]

- Update according to UM 0.7.

## [2.0.2]

- some minor fixes.

## [2.0.0]

- initial version.
