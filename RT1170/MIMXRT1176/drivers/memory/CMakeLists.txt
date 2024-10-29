if (CONFIG_MCUX_COMPONENT_driver.memory)

    mcux_add_source(
        SOURCES fsl_memory.h
    )

    mcux_add_include(
        INCLUDES .
    )

endif()
