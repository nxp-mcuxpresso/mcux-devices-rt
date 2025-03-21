# GPC

## [2.5.0]

- Improvements
  - Set GPC_CM_ConfigCpuModeTransitionStep(), GPC_SP_ConfigSetPointTransitionStep(),
    GPC_STBY_ConfigStandbyTransitionStep() as deprecated.
  - Added GPC_CM_EnableCpuModeTransitionStep(), GPC_CM_DisableCpuModeTransitionStep().
  - Added GPC_SP_EnableSetPointTransitionStep(), GPC_SP_DisableSetPointTransitionStep().
  - Added GPC_STBY_EnableStandbyTransitionStep(), GPC_STBY_DisableStandbyTransitionStep().
  - Added GPC_STBY_SetPmicOutStepCountMode() to set count mode of PMIC_OUT step.

## [2.4.0]

- Improvements
  - Deleted cnt_mode and step count of gpc_tran_step_config_t structure to aligned with updates of header file.

## [2.3.1]

- Bug Fixes
  - Fixed the violation of MISRA C-2012 rule 5.8.

## [2.3.0]

- Bug Fixes
  - Fixed wrong offset value of DCDC_UP_CTRL register.
- New Features
  - Added GPC_STBY_ForceCoreRequestStandbyMode() function ti force core to enter standby mode.

## [2.2.0]

- Bug Fixes
  - Fixed violations of MISRA C-2012 rule 10.8.
  - Fixed violations of MISRA C-2012 rule 8.6 by removing the declaration of
    GPC_SP_GetResponseCount() function.

## [2.1.1]

- Bug Fixes
  - Fixed Doxygen warnings.

## [2.1.0]

- Improvements
  - Removed status related APIs based on the updates of header file.

## [2.0.0]

- Initial version.
