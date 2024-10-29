if (CONFIG_MCUX_COMPONENT_driver.anatop_ai)

    mcux_add_source(
        SOURCES fsl_anatop_ai.c
                fsl_anatop_ai.h
    )

    mcux_add_include(
        INCLUDES .
    )

endif()
