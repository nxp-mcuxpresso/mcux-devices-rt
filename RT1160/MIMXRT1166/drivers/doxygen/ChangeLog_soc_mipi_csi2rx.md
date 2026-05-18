# SOC_MIPI_CSI2RX

## [2.0.3]

- Bug Fixes
  - Fixed CERT-C INT30-C unsigned-wrap MSG violation on `tHsSettle_EscClk - 1UL` in
    MIPI_CSI2RX_InitInterface by guarding the subtraction when `tHsSettle_EscClk == 0`
    (writes 0 to the RXHS_SETTLE field instead of wrapping to the maximum value).

## [2.0.2]

- Updated for new header file.

## [2.0.1]

- Bug Fixes
  - Fixed MISRA-C 2012 10.8 issue.

## [2.0.0]

- initial version.
