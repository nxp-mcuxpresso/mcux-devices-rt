# Copyright 2025 NXP
#
# SPDX-License-Identifier: BSD-3-Clause

#### chip related
include(${SdkRootDirPath}/devices/RT/variable.cmake)
mcux_set_variable(device IMXRTL3459AAA)
mcux_set_variable(device_root devices)
mcux_set_variable(soc_series RTL345)
mcux_set_variable(soc_periph periph)
mcux_set_variable(core_id_suffix_name "")

if (NOT DEFINED core_id)
    message(FATAL_ERROR "Please specify core_id for multicore device.")
endif()

include(${SdkRootDirPath}/${device_root}/RT/RTL345/IMXRTL3459AAA/${core_id}/variable.cmake)

#### Source record
