# Copyright 2024 NXP
# All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause

if (CONFIG_MCUX_COMPONENT_driver.clock)
    mcux_add_source( BASE_PATH ../../MIMXRT798S/drivers SOURCES fsl_clock.c fsl_clock.h )
    mcux_add_include( BASE_PATH ../../MIMXRT798S/drivers INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.dsp)
    mcux_add_source( BASE_PATH ../../MIMXRT798S/drivers SOURCES fsl_dsp.c fsl_dsp.h )
    mcux_add_include( BASE_PATH ../../MIMXRT798S/drivers INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.edma_soc)
    mcux_add_source( BASE_PATH ../../MIMXRT798S/drivers SOURCES fsl_edma_soc.c fsl_edma_soc.h )
    mcux_add_include( BASE_PATH ../../MIMXRT798S/drivers INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.ezhv)
    mcux_add_source( BASE_PATH ../../MIMXRT798S/drivers SOURCES fsl_ezhv.c fsl_ezhv.h )
    mcux_add_include( BASE_PATH ../../MIMXRT798S/drivers INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.inputmux_connections)
    mcux_add_source( BASE_PATH ../../MIMXRT798S/drivers SOURCES fsl_inputmux_connections.h )
    mcux_add_include( BASE_PATH ../../MIMXRT798S/drivers INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.iopctl_soc)
    mcux_add_source( BASE_PATH ../../MIMXRT798S/drivers SOURCES fsl_iopctl.h )
    mcux_add_include( BASE_PATH ../../MIMXRT798S/drivers INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.power)
    mcux_add_source( BASE_PATH ../../MIMXRT798S/drivers SOURCES fsl_power.c fsl_power.h )
    mcux_add_include( BASE_PATH ../../MIMXRT798S/drivers INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.reset)
    mcux_add_source( BASE_PATH ../../MIMXRT798S/drivers SOURCES fsl_reset.c fsl_reset.h )
    mcux_add_include( BASE_PATH ../../MIMXRT798S/drivers INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.mipi_dsi_soc)
    mcux_add_source( BASE_PATH ../../MIMXRT798S/drivers SOURCES fsl_soc_mipi_dsi.h )
    mcux_add_include( BASE_PATH ../../MIMXRT798S/drivers INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.romapi)

    mcux_add_source(
        BASE_PATH ../../MIMXRT798S/drivers
        SOURCES ./romapi/bootloader/fsl_romapi.h
                ./romapi/bootloader/fsl_romapi.c
                ./romapi/otp/fsl_romapi_otp.h
                ./romapi/otp/fsl_romapi_otp.c
                ./romapi/nboot/fsl_romapi_nboot.h
                ./romapi/nboot/fsl_romapi_nboot.c
                ./romapi/iap/fsl_romapi_iap.h
                ./romapi/iap/fsl_romapi_iap.c
                ./romapi/iap/fsl_sbloader_v3.h
    )

    mcux_add_include(
        BASE_PATH ../../MIMXRT798S/drivers
        INCLUDES ./romapi 
                 ./romapi/bootloader 
                 ./romapi/nboot 
                 ./romapi/iap
                 ./romapi/otp
    )

endif()