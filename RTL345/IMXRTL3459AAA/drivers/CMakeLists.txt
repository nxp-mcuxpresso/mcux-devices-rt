# Copyright 2025-2026 NXP
#
# SPDX-License-Identifier: BSD-3-Clause

mcux_add_cmakelists(${SdkRootDirPath}/${device_root}/RT/RTL345/IMXRTL3459AAA/drivers/romapi)

if (CONFIG_MCUX_COMPONENT_driver.clock)
    mcux_component_version(2.2.0)
    mcux_add_source( SOURCES fsl_clock.c fsl_clock.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.reset)
    mcux_component_version(2.0.0)
    mcux_add_source( SOURCES fsl_reset.c fsl_reset.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.power)
    mcux_component_version(0.0.1)
    mcux_add_source( SOURCES fsl_power.c fsl_power.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.rpu)
    mcux_component_version(1.0.0)
    mcux_add_source( SOURCES fsl_rpu.c fsl_rpu.h fsl_rpu_protected_regs.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.rtl3450_swm)
    mcux_component_version(0.0.1)
    mcux_add_source( SOURCES fsl_swm.c fsl_swm.h fsl_swm_connections.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.flexcomm_qspi_flr)
    mcux_component_version(1.0.0)
    mcux_add_source( SOURCES fsl_qspi.c fsl_qspi.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.flexcomm_qspi_flr_dma)
    mcux_component_version(1.0.0)
    mcux_add_source( SOURCES fsl_qspi_dma.c fsl_qspi_dma.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.event_ctrl)
    mcux_component_version(1.0.0)
    mcux_add_source( SOURCES fsl_event_ctrl.c fsl_event_ctrl.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.dma_mux)
    mcux_component_version(0.0.1)
    mcux_add_source( SOURCES fsl_dma_mux.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.fault_handler)
    mcux_component_version(0.0.1)
    mcux_add_source( SOURCES fsl_fault_handler.c )
endif()


