if (CONFIG_MCUX_COMPONENT_driver.clock)

    mcux_add_source(
        SOURCES fsl_clock.h
                fsl_clock.c
    )

    mcux_add_include(
        INCLUDES .
    )

endif()

if (CONFIG_MCUX_COMPONENT_driver.iomuxc)

    mcux_add_source(
        SOURCES fsl_iomuxc.h
    )

    mcux_add_include(
        INCLUDES .
    )

endif()

mcux_add_cmakelists(${CMAKE_CURRENT_LIST_DIR}/flexram)
mcux_add_cmakelists(${CMAKE_CURRENT_LIST_DIR}/romapi)
mcux_add_cmakelists(${CMAKE_CURRENT_LIST_DIR}/nic301)
