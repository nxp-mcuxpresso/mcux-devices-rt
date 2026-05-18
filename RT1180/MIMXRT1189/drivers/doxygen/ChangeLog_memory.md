# MEMORY

## [2.1.1]

- Bug Fixes
  - Fixed CERT-C INT30-C unsigned-wrap MSG violations in MEMORY_ConvertMemoryMapAddress for
    CM33 (ctcm/stcm offset compute and Local2DMA/DMA2Local address translation) and CM7
    (itcm/dtcm offset compute and Local2DMA/DMA2Local address translation) paths.
  - Fixed CERT-C INT30-C unsigned-wrap MSG violations on the m33_{ctcm,stcm}{,_alias}_start +
    FSL_MEM_M33_SECURE_ADDRESS_OFFSET range-check expressions in MEMORY_ConvertMemoryMapAddress
    by promoting the addition to uint64_t and masking back to uint32_t (matches the existing
    pattern already used on the corresponding _end terms).

## [2.1.0]

- Bug Fixes
  - Provide correct address translation based on TCM_SIZE config.

## [2.0.0]

- Initial version.
