# SOC_MIPI_CSI2RX

## [2.0.3]

- Bug Fixes
  - Fixed CERT-C INT30-C unsigned-wrap MSG violation on the
    IOMUXC_GPR_GPR59_MIPI_CSI_S_PRG_RXHS_SETTLE(tHsSettle_EscClk - 1UL) computation in
    MIPI_CSI2RX_InitInterface by guarding the decrement when tHsSettle_EscClk is zero.

## [2.0.2]

- Updated for new header file.

## [2.0.1]

- Bug Fixes
  - Fixed MISRA-C 2012 10.8 issue.

## [2.0.0]

- initial version.
