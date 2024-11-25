# Copyright 2024 NXP
#
# SPDX-License-Identifier: BSD-3-Clause

if (CONFIG_MCUX_COMPONENT_driver.clock)
    mcux_component_version(2.4.0)
    mcux_add_source( SOURCES fsl_clock.c fsl_clock.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.dsp)
    mcux_component_version(2.0.0)
    mcux_add_source( SOURCES fsl_dsp.c fsl_dsp.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.edma_soc)
    mcux_component_version(1.0.0)
    mcux_add_source( SOURCES fsl_edma_soc.c fsl_edma_soc.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.ezhv)
    mcux_component_version(2.1.0)
    mcux_add_source( SOURCES fsl_ezhv.c fsl_ezhv.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.inputmux_connections)
    mcux_add_source( SOURCES fsl_inputmux_connections.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.iopctl_soc)
    mcux_component_version(2.0.2)
    mcux_add_source( SOURCES fsl_iopctl.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.power)
    mcux_component_version(2.4.0)
    mcux_add_source( SOURCES fsl_power.c fsl_power.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.reset)
    mcux_component_version(2.1.0)
    mcux_add_source( SOURCES fsl_reset.c fsl_reset.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.mipi_dsi_soc)
    mcux_component_version(2.0.0)
    mcux_add_source( SOURCES fsl_soc_mipi_dsi.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.romapi)

    mcux_add_source(
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
        INCLUDES ./romapi 
                 ./romapi/bootloader 
                 ./romapi/nboot 
                 ./romapi/iap
                 ./romapi/otp
    )

endif()