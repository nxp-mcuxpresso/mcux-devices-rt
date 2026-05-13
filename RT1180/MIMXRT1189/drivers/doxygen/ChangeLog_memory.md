# MEMORY

## [2.1.1]

- Bug Fixes
  - Fixed CERT-C INT30-C unsigned-wrap MSG violations in MEMORY_ConvertMemoryMapAddress for
    CM33 (ctcm/stcm offset compute and Local2DMA/DMA2Local address translation) and CM7
    (itcm/dtcm offset compute and Local2DMA/DMA2Local address translation) paths.

## [2.1.0]

- Bug Fixes
  - Provide correct address translation based on TCM_SIZE config.

## [2.0.0]

- Initial version.
