if (CONFIG_MCUX_COMPONENT_driver.flexram_allocate)

    mcux_add_source(
        SOURCES fsl_flexram_allocate.c
                fsl_flexram_allocate.h
    )

    mcux_add_include(
        INCLUDES .
    )
endif()
