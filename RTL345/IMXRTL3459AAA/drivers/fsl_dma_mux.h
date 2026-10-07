/*
 * Copyright 2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef FSL_DMA_MUX_H_
#define FSL_DMA_MUX_H_

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/**
 * @brief SDMA0 DMA request sources enumeration.
 *
 * @details Defines the available DMA request sources for SDMA0 controller.
 * These values correspond to the DMA channel numbers for each peripheral.
 */
typedef enum _sdma0_request
{
    kSDMA0_Request_Flexcomm0_RX = 0U,                /*!< Flexcomm0 RX DMA request */
    kSDMA0_Request_Flexcomm0_TX = 1U,                /*!< Flexcomm0 TX DMA request */
    kSDMA0_Request_Flexcomm1_RX = 2U,                /*!< Flexcomm1 RX DMA request */
    kSDMA0_Request_Flexcomm1_TX = 3U,                /*!< Flexcomm1 TX DMA request */
    kSDMA0_Request_Flexcomm2_RX = 4U,                /*!< Flexcomm2 RX DMA request */
    kSDMA0_Request_Flexcomm2_TX = 5U,                /*!< Flexcomm2 TX DMA request */
    kSDMA0_Request_Flexcomm3_RX = 6U,                /*!< Flexcomm3 RX DMA request */
    kSDMA0_Request_Flexcomm3_TX = 7U,                /*!< Flexcomm3 TX DMA request */
    kSDMA0_Request_Flexcomm4_RX = 8U,                /*!< Flexcomm4 RX DMA request */
    kSDMA0_Request_Flexcomm4_TX = 9U,                /*!< Flexcomm4 TX DMA request */
    kSDMA0_Request_Flexcomm5_RX = 10U,               /*!< Flexcomm5 RX DMA request */
    kSDMA0_Request_Flexcomm5_TX = 11U,               /*!< Flexcomm5 TX DMA request */
    kSDMA0_Request_XSPI_IP_RX = 12U,                 /*!< XSPI IP RX DMA request */
    kSDMA0_Request_XSPI_IP_TX = 13U,                 /*!< XSPI IP TX DMA request */
    kSDMA0_Request_I3C_TX = 14U,                     /*!< I3C TX DMA request */
    kSDMA0_Request_I3C_RX = 15U,                     /*!< I3C RX DMA request */
    kSDMA0_Request_SGI_RX = 16U,                     /*!< SGI RX DMA request */
    kSDMA0_Request_SGI_TX = 17U,                     /*!< SGI TX DMA request */
    kSDMA0_Request_External_Req0 = 18U,              /*!< DMA0 external request[0] */
    kSDMA0_Request_External_Req1 = 19U,              /*!< DMA0 external request[1] */
    kSDMA0_Request_External_Req2 = 20U,              /*!< DMA0 external request[2] */
    kSDMA0_Request_MemToMem_0 = 21U,                 /*!< Free for mem to mem transfers */
    kSDMA0_Request_MemToMem_1 = 22U,                 /*!< Free for mem to mem transfers */
    kSDMA0_Request_MemToMem_2 = 23U,                 /*!< Free for mem to mem transfers */
} sdma0_request_t;

/**
 * @brief SDMA1 DMA request sources enumeration.
 *
 * @details Defines the available DMA request sources for SDMA1 controller.
 * These values correspond to the DMA channel numbers for each peripheral.
 */
typedef enum _sdma1_request
{
    kSDMA1_Request_Flexcomm0_RX = 0U,                /*!< Flexcomm0 RX DMA request */
    kSDMA1_Request_Flexcomm0_TX = 1U,                /*!< Flexcomm0 TX DMA request */
    kSDMA1_Request_Flexcomm1_RX = 2U,                /*!< Flexcomm1 RX DMA request */
    kSDMA1_Request_Flexcomm1_TX = 3U,                /*!< Flexcomm1 TX DMA request */
    kSDMA1_Request_XSPI_IP_RX = 4U,                  /*!< XSPI IP RX DMA request */
    kSDMA1_Request_XSPI_IP_TX = 5U,                  /*!< XSPI IP TX DMA request */
    kSDMA1_Request_I3C_TX = 6U,                      /*!< I3C TX DMA request */
    kSDMA1_Request_I3C_RX = 7U,                      /*!< I3C RX DMA request */
    kSDMA1_Request_SGI_RX = 8U,                      /*!< SGI RX DMA request */
    kSDMA1_Request_SGI_TX = 9U,                      /*!< SGI TX DMA request */
    kSDMA1_Request_MemToMem_0 = 10U,                 /*!< Free for mem to mem transfers */
    kSDMA1_Request_MemToMem_1 = 11U,                 /*!< Free for mem to mem transfers */
} sdma1_request_t;

/**
 * @brief SDMA0 DMA trigger sources enumeration.
 *
 * @details Defines the available DMA trigger sources for SDMA0 controller.
 * These values correspond to the trigger slot numbers for each source.
 */
typedef enum _sdma0_trigger
{
    kSDMA0_Trigger_GPIO_INT0 = 0U,                   /*!< GPIO INT0 trigger */
    kSDMA0_Trigger_GPIO_INT1 = 1U,                   /*!< GPIO INT1 trigger */
    kSDMA0_Trigger_GPIO_INT2 = 2U,                   /*!< GPIO INT2 trigger */
    kSDMA0_Trigger_GPIO_INT3 = 3U,                   /*!< GPIO INT3 trigger */
    kSDMA0_Trigger_CTIMER0_Match0 = 4U,              /*!< CTIMER0 Match0 trigger */
    kSDMA0_Trigger_CTIMER0_Match1 = 5U,              /*!< CTIMER0 Match1 trigger */
    kSDMA0_Trigger_CTIMER1_Match0 = 6U,              /*!< CTIMER1 Match0 trigger */
    kSDMA0_Trigger_CTIMER1_Match1 = 7U,              /*!< CTIMER1 Match1 trigger */
    kSDMA0_Trigger_CTIMER2_Match0 = 8U,              /*!< CTIMER2 Match0 trigger */
    kSDMA0_Trigger_CTIMER2_Match1 = 9U,              /*!< CTIMER2 Match1 trigger */
    kSDMA0_Trigger_CTIMER3_Match0 = 10U,             /*!< CTIMER3 Match0 trigger */
    kSDMA0_Trigger_CTIMER3_Match1 = 11U,             /*!< CTIMER3 Match1 trigger */
    kSDMA0_Trigger_CTIMER4_Match0 = 12U,             /*!< CTIMER4 Match0 trigger */
    kSDMA0_Trigger_CTIMER4_Match1 = 13U,             /*!< CTIMER4 Match1 trigger */
    kSDMA0_Trigger_SCTIMER_DMA_A_Req = 14U,          /*!< SCTIMER DMA-A Req trigger */
    kSDMA0_Trigger_SCTIMER_DMA_B_Req = 15U,          /*!< SCTIMER DMA-B Req trigger */
    kSDMA0_Trigger_DMA0_Output_Mux0 = 16U,           /*!< DMA0 output trigger mux 0 */
    kSDMA0_Trigger_DMA0_Output_Mux1 = 17U,           /*!< DMA0 output trigger mux 1 */
    kSDMA0_Trigger_DMA0_Output_Mux2 = 18U,           /*!< DMA0 output trigger mux 2 */
    kSDMA0_Trigger_DMA0_Output_Mux3 = 19U,           /*!< DMA0 output trigger mux 3 */
    kSDMA0_Trigger_DMA_EVENTIN_MUX0 = 20U,           /*!< DMA_EVENTIN_MUX[0] trigger */
    kSDMA0_Trigger_DMA_EVENTIN_MUX1 = 21U,           /*!< DMA_EVENTIN_MUX[1] trigger */
    kSDMA0_Trigger_DMA_EVENTIN_MUX2 = 22U,           /*!< DMA_EVENTIN_MUX[2] trigger */
    kSDMA0_Trigger_DMA_EVENTIN_MUX3 = 23U,           /*!< DMA_EVENTIN_MUX[3] trigger */
    kSDMA0_Trigger_DMA_EVENTIN_MUX4 = 24U,           /*!< DMA_EVENTIN_MUX[4] trigger */
    kSDMA0_Trigger_DMA_EVENTIN_MUX5 = 25U,           /*!< DMA_EVENTIN_MUX[5] trigger */
    kSDMA0_Trigger_DMA_EVENTIN_MUX6 = 26U,           /*!< DMA_EVENTIN_MUX[6] trigger */
    kSDMA0_Trigger_DMA_EVENTIN_MUX7 = 27U,           /*!< DMA_EVENTIN_MUX[7] trigger */
} sdma0_trigger_t;

/**
 * @brief SDMA1 DMA trigger sources enumeration.
 *
 * @details Defines the available DMA trigger sources for SDMA1 controller.
 * These values correspond to the trigger slot numbers for each source.
 */
typedef enum _sdma1_trigger
{
    kSDMA1_Trigger_GPIO_INT0 = 0U,                   /*!< GPIO INT0 trigger */
    kSDMA1_Trigger_GPIO_INT1 = 1U,                   /*!< GPIO INT1 trigger */
    kSDMA1_Trigger_GPIO_INT2 = 2U,                   /*!< GPIO INT2 trigger */
    kSDMA1_Trigger_GPIO_INT3 = 3U,                   /*!< GPIO INT3 trigger */
    kSDMA1_Trigger_CTIMER0_Match0 = 4U,              /*!< CTIMER0 Match0 trigger */
    kSDMA1_Trigger_CTIMER0_Match1 = 5U,              /*!< CTIMER0 Match1 trigger */
    kSDMA1_Trigger_CTIMER2_Match0 = 6U,              /*!< CTIMER2 Match0 trigger */
    kSDMA1_Trigger_CTIMER4_Match0 = 7U,              /*!< CTIMER4 Match0 trigger */
    kSDMA1_Trigger_DMA1_Output_Mux0 = 8U,            /*!< DMA1 output trigger mux 0 */
    kSDMA1_Trigger_DMA1_Output_Mux1 = 9U,            /*!< DMA1 output trigger mux 1 */
    kSDMA1_Trigger_DMA1_Output_Mux2 = 10U,           /*!< DMA1 output trigger mux 2 */
    kSDMA1_Trigger_DMA1_Output_Mux3 = 11U,           /*!< DMA1 output trigger mux 3 */
    kSDMA1_Trigger_SCTIMER_DMA_A_Req = 12U,          /*!< SCTIMER DMA-A Req trigger */
    kSDMA1_Trigger_SCTIMER_DMA_B_Req = 13U,          /*!< SCTIMER DMA-B Req trigger */
    kSDMA1_Trigger_DMA_EVENTIN_MUX0 = 14U,           /*!< DMA_EVENTIN_MUX[0] trigger */
    kSDMA1_Trigger_DMA_EVENTIN_MUX1 = 15U,           /*!< DMA_EVENTIN_MUX[1] trigger */
} sdma1_trigger_t;

#endif /* FSL_DMA_MUX_H_*/