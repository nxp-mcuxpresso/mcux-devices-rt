# CLOCK


## [1.2.0]
- New Features
  - Add clock_cguana_sxosc_gm_t enum for SXOSC GM selection.
  - Enhance kCLOCK_SRC_SXOSC clock freq calculation considering the DIV2_EN bit setting.
  - CLOCK_InitFro192M / CLOCK_InitFro12M: remove hidden register write.
  - Update modeSel enum comment to match reference manual description.

## [1.1.0]
- New Features
  - Add CLOCK_MeasureRootClockFreq() to measure the real root clock frequency.
  - Add CLOCK_MeasureClockSrcFreq() to measure the real clock source frequency.

## [1.0.0]

- Initial version.
