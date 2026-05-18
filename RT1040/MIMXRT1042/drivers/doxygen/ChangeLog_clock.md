# CLOCK

## [2.0.3]

- Bug Fixes
  - Fixed CERT-C INT30-C unsigned-wrap and INT31-C narrowing-cast MSG violations in
    CLOCK_GetClockRootFreq (CCM tuple enum casts via inline suppression), CLOCK_GetPllFreq
    (ARM/Sys/USB1/Audio/Video PLL freq computations promoted to uint64), CLOCK_InitSysPfd /
    CLOCK_InitUsb1Pfd (pfdIndex bounded), CLOCK_GetSysPfdFreq / CLOCK_GetUsb1PfdFreq (PFD freq
    narrowing cast clamped), and CLOCK_SetMux, CLOCK_GetMux, CLOCK_SetDiv, CLOCK_GetDiv,
    CLOCK_ControlGate (CCM tuple enum casts via inline suppression).

## [2.0.2]

- Bug Fixes
  - Fixed the violations of MISRA C-2012 rule 10.7.

## [2.0.1]

- Bug Fixes
  - Fixed issues in CLOCK_GetSysPfdFreq() and CLOCK_GetUsb1PfdFreq() which produce incorrect result.

## [2.0.0]

- initial version.
