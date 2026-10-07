/*
 * Copyright 2025-2026 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef _FSL_XSPI_NOR_FLASH_H__
#define _FSL_XSPI_NOR_FLASH_H__

#include "fsl_common.h"
/*!
 * @addtogroup flash_driver
 * @{
 */

/*! @file */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @brief Formula to form XSPI instructions in LUT table. */
#define XSPI_LUT_SEQ(cmd0, pad0, op0, cmd1, pad1, op1)                                            \
    (XSPI_LUT_INSTR0(cmd0) | XSPI_LUT_PAD0(pad0) | XSPI_LUT_OPRND0(op0) | XSPI_LUT_INSTR1(cmd1) | \
     XSPI_LUT_PAD1(pad1) | XSPI_LUT_OPRND1(op1))

/*! @brief CMD definition of XSPI, use to form LUT instruction, xspi_lut_instr_t. */
typedef enum _xspi_lut_instr
{
    kXSPI_Command_STOP      = 0x00U,   /*!< Stop execution, de-assert CS. */
    kXSPI_Command_SDR       = 0x01U,   /*!< Transmit Command code to Flash, using SDR mode. */
    kXSPI_Command_RADDR_SDR = 0x02U,   /*!< Transmit Row Address to Flash, using SDR mode. */
    kXSPI_Command_DUMMY_SDR = 0x03U,   /*!< Leave data lines un-driven by xSPI controller, using SDR mode. */
    kXSPI_Command_MODE_SDR  = 0x04U,   /*!< Transmit 8-bit Mode bits to Flash, using SDR mode. */
    kXSPI_Command_MODE2_SDR = 0x05U,   /*!< Transmit 2-bit Mode bits to Flash, using SDR mode. */
    kXSPI_Command_MODE4_SDR = 0x06U,   /*!< Transmit 4-bit Mode bits to Flash, using SDR mode. */
    kXSPI_Command_READ_SDR  = 0x07U,   /*!< Receive Read Data from Flash, using SDR mode. */
    kXSPI_Command_WRITE_SDR = 0x08U,   /*!< Transmit Programming Data to Flash, using SDR mode. */
    kXSPI_Command_JMP_ON_CS = 0x09U,   /*!< Stop execution, de-assert CS and save operand[7:0] as the
                                         instruction start pointer for next sequence*/
    kXSPI_Command_RADDR_DDR   = 0x0AU, /*!< Transmit Row Address to Flash, using DDR mode. */
    kXSPI_Command_MODE_DDR    = 0x0BU, /*!< Transmit 8-bit Mode bits to Flash, using DDR mode. */
    kXSPI_Command_MODE2_DDR   = 0x0CU, /*!< Transmit 2-bit Mode bits to Flash, using DDR mode. */
    kXSPI_Command_MODE4_DDR   = 0x0DU, /*!< Transmit 4-bit Mode bits to Flash, using DDR mode. */
    kXSPI_Command_READ_DDR    = 0x0EU, /*!< Receive Read Data from Flash, using DDR mode. */
    kXSPI_Command_WRITE_DDR   = 0x0FU, /*!< Transmit Programming Data to Flash, using DDR mode. */
    kXSPI_Command_LEARN_DDR   = 0x10U, /*!< Receive Read Data or Preamble bit from Flash, DDR mode. */
    kXSPI_Command_DDR         = 0x11U, /*!< Transmit Command code to Flash, using DDR mode. */
    kXSPI_Command_CADDR_SDR   = 0x12U, /*!< Transmit Column Address to Flash, using SDR mode. */
    kXSPI_Command_CADDR_DDR   = 0x13U, /*!< Transmit Column Address to Flash, using DDR mode. */
    kXSPI_Command_JUMP_TO_SEQ = 0x14U, /*!< Jump the LUT sequence pointed to by the operand. */
} xspi_lut_instr_t;

/*! @brief pad definition of XSPI, use to form LUT instruction. */
typedef enum _xspi_pad
{
    kXSPI_1PAD = 0x00U, /*!< Transmit command/address and transmit/receive data only through DATA0/DATA1. */
    kXSPI_2PAD = 0x01U, /*!< Transmit command/address and transmit/receive data only through DATA[1:0]. */
    kXSPI_4PAD = 0x02U, /*!< Transmit command/address and transmit/receive data only through DATA[3:0]. */
    kXSPI_8PAD = 0x03U, /*!< Transmit command/address and transmit/receive data only through DATA[7:0]. */
} xspi_pad_t;

/*!
 * @brief NOR LUT sequence index used for default LUT assignment
 * NOTE:
 *      The will take effect if the lut sequences are not customized.
 */
/*!<  READ LUT sequence id in lookupTable stored in config block */
#define NOR_CMD_LUT_SEQ_IDX_READ (0U)
/*!<  Read Status LUT sequence id in lookupTable stored in config block */
#define NOR_CMD_LUT_SEQ_IDX_READSTATUS (1U)
/*!<  Read status DPI/QPI/OPI sequence id in lookupTable stored in config block */
#define NOR_CMD_LUT_SEQ_IDX_READSTATUS_XPI (2U)
/*!<  Write Enable sequence id in lookupTable stored in config block */
#define NOR_CMD_LUT_SEQ_IDX_WRITEENABLE (3U)
/*!<  Write Enable DPI/QPI/OPI sequence id in lookupTable stored in config block */
#define NOR_CMD_LUT_SEQ_IDX_WRITEENABLE_XPI (4U)
/*!<  Erase Sector sequence id in lookupTable stored in config block */
#define NOR_CMD_LUT_SEQ_IDX_ERASESECTOR (5U)
/*!<  Erase Block sequence id in lookupTable stored in config block */
#define NOR_CMD_LUT_SEQ_IDX_ERASEBLOCK (8U)
/*!<  Program sequence id in lookupTable stored in config block */
#define NOR_CMD_LUT_SEQ_IDX_PAGEPROGRAM (9U)
/*!<  Chip Erase sequence in lookupTable id stored in config block */
#define NOR_CMD_LUT_SEQ_IDX_CHIPERASE (13U)
/*!<  Read SFDP sequence in lookupTable id stored in config block */
#define NOR_CMD_LUT_SEQ_IDX_READ_SFDP (15U)
/*!<  14 Restore 0-4-4/0-8-8 mode sequence id in lookupTable stored in config block */
#define NOR_CMD_LUT_SEQ_IDX_RESTORE_NOCMD (16U)
/*!<  15 Exit 0-4-4/0-8-8 mode sequence id in lookupTable stored in config blobk */
#define NOR_CMD_LUT_SEQ_IDX_EXIT_NOCMD (17U)

/*! @brief XSPI status group numbers. */
enum _xspi_status_groups
{
    kStatusROMGroup_XSPINOR = 209, /*!< ROM XSPI NOR status group number.*/
};

/*! @brief XSPI NOR status */
enum _xspi_nor_status
{
    kStatus_XSPINOR_ProgramFail =
        MAKE_STATUS(kStatusROMGroup_XSPINOR, 0), /*!< Status for Page programming failure */
    kStatus_XSPINOR_EraseSectorFail =
        MAKE_STATUS(kStatusROMGroup_XSPINOR, 1), /*!< Status for Sector Erase failure */
    kStatus_XSPINOR_EraseAllFail = MAKE_STATUS(kStatusROMGroup_XSPINOR, 2), /*!< Status for Chip Erase failure */
    kStatus_XSPINOR_WaitTimeout  = MAKE_STATUS(kStatusROMGroup_XSPINOR, 3), /*!< Status for timeout */
    kStatus_XSPINOR_NotSupported = MAKE_STATUS(kStatusROMGroup_XSPINOR, 4), /*!< Status for PageSize overflow */
    kStatus_XSPINOR_WriteAlignmentError =
        MAKE_STATUS(kStatusROMGroup_XSPINOR, 5),                               /*!< Status for Alignement error */
    kStatus_XSPINOR_CommandFailure =
        MAKE_STATUS(kStatusROMGroup_XSPINOR, 6), /*!< Status for Erase/Program Verify Error */
    kStatus_XSPINOR_SFDP_NotFound = MAKE_STATUS(kStatusROMGroup_XSPINOR, 7), /*!< Status for SFDP read failure */
    kStatus_XSPINOR_Unsupported_SFDP_Version =
        MAKE_STATUS(kStatusROMGroup_XSPINOR, 8),  /*!< Status for Unrecognized SFDP version */
    kStatus_XSPINOR_Flash_NotFound =
        MAKE_STATUS(kStatusROMGroup_XSPINOR, 9),  /*!< Status for Flash detection failure */
    kStatus_XSPINOR_DTRRead_DummyProbeFailed =
        MAKE_STATUS(kStatusROMGroup_XSPINOR, 10), /*!< Status for DDR Read dummy probe failure */
};

/*! @brief Configure the device_type of "serial_nor_config_option_t" structure */
enum
{
    kSerialNorCfgOption_Tag                         = 0x0cU,
    kSerialNorCfgOption_DeviceType_ReadSFDP_SDR     = 0U,
    kSerialNorCfgOption_DeviceType_ReadSFDP_DDR     = 1U,
    kSerialNorCfgOption_DeviceType_HyperFLASH1V8    = 2U,
    kSerialNorCfgOption_DeviceType_HyperFLASH3V0    = 3U,
    kSerialNorCfgOption_DeviceType_MacronixOctalDDR = 4U,
    kSerialNorCfgOption_DeviceType_MacronixOctalSDR = 5U,
    kSerialNorCfgOption_DeviceType_MicronOctalDDR   = 6U,
    kSerialNorCfgOption_DeviceType_MicronOctalSDR   = 7U,
    kSerialNorCfgOption_DeviceType_AdestoOctalDDR   = 8U,
    kSerialNorCfgOption_DeviceType_AdestoOctalSDR   = 9U,
};

/*! @brief Configure the quad_mode_setting of "serial_nor_config_option_t" structure */
enum
{
    kSerialNorQuadMode_NotConfig            = 0U,
    kSerialNorQuadMode_StatusReg1_Bit6      = 1U,
    kSerialNorQuadMode_StatusReg2_Bit1      = 2U,
    kSerialNorQuadMode_StatusReg2_Bit7      = 3U,
    kSerialNorQuadMode_StatusReg2_Bit1_0x31 = 4U,
};

/*! @brief XSPI NOR Octal mode */
enum
{
    kSerialNorOctaldMode_NoOctalEnableBit  = 0U,
    kSerialNorOctaldMode_HasOctalEnableBit = 1U,
};

/*! @brief miscellaneous mode */
enum
{
    kSerialNorEnhanceMode_Disabled         = 0U,
    kSerialNorEnhanceMode_0_4_4_Mode       = 1U,
    kSerialNorEnhanceMode_0_8_8_Mode       = 2U,
    kSerialNorEnhanceMode_DataOrderSwapped = 3U,
    kSerialNorEnhanceMode_2ndPinMux        = 4U,
    kSerialNorEnhanceMode_InternalLoopback = 5U,
    kSerialNorEnhanceMode_SpiMode          = 6U,
    kSerialNorEnhanceMode_ExtDqs           = 7U,
};

/*! @brief XSPI NOR reset logic options */
enum
{
    kFlashResetLogic_Disabled     = 0U,
    kFlashResetLogic_ResetPin     = 1U,
    kFlashResetLogic_JedecHwReset = 2U,
};

/*! @brief Configure the flash_connection of "serial_nor_config_option_t" structure */
enum
{
    kSerialNorConnection_SinglePortA,
    kSerialNorConnection_Parallel,
    kSerialNorConnection_SinglePortB,
    kSerialNorConnection_BothPorts
};

/*! @brief
 * XSPI ROOT clock soruce related definitions
 */
enum
{
    kXSPIClkSrc_MainClk = 0U,
    kXSPIClkSrc_Pll0    = 1U,
    kXSPIClkSrc_FroHf   = 3U,
    kXSPIClkSrc_Pll1    = 5U,
};

/*! @brief Restore sequence options
 *  Configure the restore_sequence of "flash_run_context_t" structure
 */
enum
{
    kRestoreSequence_None             = 0U,
    kRestoreSequence_HW_Reset         = 1U,
    kRestoreSequence_QPI_4_0xFFs      = 2U,
    kRestoreSequence_QPI_Mode_0x00    = 3U,
    kRestoreSequence_8QPI_FF          = 4U,
    kRestoreSequence_Send_F0          = 5U,
    kRestoreSequence_Send_66_99       = 6U,
    kRestoreSequence_Send_6699_9966   = 7U,
    kRestoreSequence_Send_06_FF       = 8U, /*!< Adesto EcoXIP */
    kRestoreSequence_QPI_5_0xFFs      = 9U,
    kRestoreSequence_Send_QPI_8_0xFFs = 10U,
    kRestoreSequence_Wakeup_0xAB      = 11U,
    kRestoreSequence_Wakeup_0xAB_54   = 12U,
};

/*! @brief Port mode options*/
enum
{
    kFlashInstMode_ExtendedSpi = 0x00U,
    kFlashInstMode_0_4_4_SDR   = 0x01U,
    kFlashInstMode_0_4_4_DDR   = 0x02U,
    kFlashInstMode_DPI_SDR     = 0x21U,
    kFlashInstMode_DPI_DDR     = 0x22U,
    kFlashInstMode_QPI_SDR     = 0x41U,
    kFlashInstMode_QPI_DDR     = 0x42U,
    kFlashInstMode_OPI_SDR     = 0x81U,
    kFlashInstMode_OPI_DDR     = 0x82U,
};

/*!
 * @name Support for init XSPI NOR configuration
 * @{
 */
/*! @brief Flash Pad Definitions */
enum
{
    kSerialFlash_1Pad  = 1U,
    kSerialFlash_2Pads = 2U,
    kSerialFlash_4Pads = 4U,
    kSerialFlash_8Pads = 8U,
};

/*! @brief XSPI clock configuration type */
enum
{
    kXSPIClk_SDR, /*!< Clock configure for SDR mode */
    kXSPIClk_DDR, /*!< Clock configurat for DDR mode */
};

/*! @brief XSPI Read Sample Clock Source definition */
enum _xspi_read_sample_clk
{
    kxSpiReadSampleClk_LoopbackInternally      = 0U,
    kxSpiReadSampleClk_LoopbackFromDummyPad    = 1U,
    kxSpiReadSampleClk_LoopbackFromDqsPad      = 2U,
    kxSpiReadSampleClk_ExternalInputFromDqsPad = 3U,
};

/*! @brief Flash Type Definition */
enum
{
    kXSPIDeviceType_SerialNOR = 1U, /*!< Flash device is Serial NOR */
};

/*! @brief Flash Configuration Command Type */
enum
{
    kDeviceConfigCmdType_Generic,    /*!< Generic command, for example: configure dummy cycles, drive strength, etc */
    kDeviceConfigCmdType_QuadEnable, /*!< Quad Enable command */
    kDeviceConfigCmdType_Spi2Xpi,    /*!< Switch from SPI to DPI/QPI/OPI mode */
    kDeviceConfigCmdType_Xpi2Spi,    /*!< Switch from DPI/QPI/OPI to SPI mode */
    kDeviceConfigCmdType_Spi2NoCmd,  /*!< Switch to 0-4-4/0-8-8 mode */
    kDeviceConfigCmdType_Reset,      /*!< Reset device command */
};

/*! @brief Defintions for XSPI Serial Clock Frequency */
enum _xspi_serial_clk_freq
{
    kXSPISerialClk_NoChange = 0U,
    kXSPISerialClk_30MHz    = 1U,
    kXSPISerialClk_50MHz    = 2U,
    kXSPISerialClk_60MHz    = 3U,
    kXSPISerialClk_75MHz    = 4U,
    kXSPISerialClk_80MHz    = 5U,
    kXSPISerialClk_100MHz   = 6U,
    kXSPISerialClk_133MHz   = 7U,
    kXSPISerialClk_166MHz   = 8U,
};

/*! @brief Misc feature bit definitions */
enum
{
    kXSPIMiscOffset_DiffClkEnable            = 0U, /*!< Bit for Differential clock enable */
    kXSPIMiscOffset_Ck2Enable                = 1U, /*!< Bit for CK2 enable */
    kXSPIMiscOffset_ParallelEnable           = 2U, /*!< Bit for Parallel mode enable */
    kXSPIMiscOffset_WordAddressableEnable    = 3U, /*!< Bit for Word Addressable enable */
    kXSPIMiscOffset_SafeConfigFreqEnable     = 4U, /*!< Bit for Safe Configuration Frequency enable */
    kXSPIMiscOffset_PadSettingOverrideEnable = 5U, /*!< Bit for Pad setting override enable */
    kXSPIMiscOffset_DdrModeEnable            = 6U, /*!< Bit for DDR clock confiuration indication. */
    kXSPIMiscOffset_UseValidTimeForAllFreq   = 7U, /*!< Bit for DLLCR settings under all modes */
};

/*! @brief Manufacturer ID */
enum
{
    kSerialFlash_ISSI_ManufacturerID    = 0x9DU, /*!< Manufacturer ID of the ISSI serial flash */
    kSerialFlash_Adesto_ManufacturerID  = 0x1FU, /*!< Manufacturer ID of the Adesto Technologies serial flash*/
    kSerialFlash_Winbond_ManufacturerID = 0xEFU, /*!< Manufacturer ID of the Winbond serial flash */
    kSerialFlash_Cypress_ManufacturerID = 0x01U, /*!< Manufacturer ID for Cypress */
};

/*! @brief
 * Serial NOR configuration option
 */
typedef struct _serial_nor_config_option
{
    union
    {
        struct
        {
            uint32_t max_freq : 4;          /*!< Maximum supported Frequency */
            uint32_t misc_mode : 4;         /*!< miscellaneous mode */
            uint32_t quad_mode_setting : 4; /*!< Quad mode setting */
            uint32_t cmd_pads : 4;          /*!< Command pads */
            uint32_t query_pads : 4;        /*!< SFDP read pads */
            uint32_t device_type : 4;       /*!< Device type */
            uint32_t option_size : 4;       /*!< Option size, in terms of uint32_t, size = (option_size + 1) * 4 */
            uint32_t tag : 4;               /*!< Tag, must be kSerialNorCfgOption_Tag */
        } B;
        uint32_t U;
    } option0;

    union
    {
        struct
        {
            uint32_t dummy_cycles : 8;     /*!< Dummy cycles before read */
            uint32_t status_override : 8;  /*!< Override status register value during device mode configuration */
            uint32_t pinmux_group : 4;     /*!< The pinmux group selection */
            uint32_t dqs_pinmux_group : 4; /*!< The DQS Pinmux Group Selection */
            uint32_t drive_strength : 4;   /*!< The Drive Strength of XSPI Pads */
            uint32_t flash_connection : 4; /*!< Flash connection option: 0 - Single Flash connected to port A, 1 - */
                                           /*!< Parallel mode, 2 - Single Flash connected to Port B */
        } B;
        uint32_t U;
    } option1;

    // SDR DLL
    union
    {
        struct
        {
            uint32_t slave_update : 1;          /*!< Updates the DQS slave delay chain */
            uint32_t slave_dll_bypass : 1;      /*!< Enables selection of number of delays in each slave delay tap */
            uint32_t slave_enable : 1;          /*!< Enables DQS slave delay chain, */
            uint32_t slave_auto_update : 1;     /*!< Maximum CS Low time in microseconds */
            uint32_t dll_cdl8_enable : 1;       /*!< DLL is implemented to support within 3x variation */
            uint32_t slave_delay_fine : 3;      /*!< Fine adjustment delay elements */
            uint32_t slave_delay_coarse : 4;    /*!< Delay elements in each delay tap */
            uint32_t slave_delay_offset : 3;    /*!< T/16 offset delay elements in incoming DQS */
            uint32_t one_32_offset_delay : 1;   /*!< T/32 offset delay */
            uint32_t slave_fine_offset : 4;     /*!< Fine offset delay elements in incoming DQS */
            uint32_t dll_resolution : 4;        /*!< DLL resolution */
            uint32_t dll_reference_counter : 4; /*!< DLL reference counter */
            uint32_t reserved1 : 2;
            uint32_t frequency_enable : 1; /*!< Frequency enable: 0 - low, 1 - high */
            uint32_t dll_enable : 1;       /*!< Enables DLL logic */
        } B;
        uint32_t U;
    } option2;

    // SDR SMPR
    union
    {
        struct
        {
            uint32_t reserved1 : 5;
            uint32_t full_speed_phase : 1; /*!< Full-speed phase selection for SDR instructions */
            uint32_t full_speed_delay : 1; /*!< Full-speed delay selection for internal/pad loop back DQS sampling */
            uint32_t reserved2 : 17;
            uint32_t dllfsmpfa : 3; /*!< Selects the nth tap provided by slave delay chain for flash memory A */
            uint32_t reserved3 : 1;
            uint32_t dllfsmpfb : 3; /*!< Selects the nth tap provided by slave delay chain for flash memory B */
            uint32_t reserved4 : 1;
        } B;
        uint32_t U;
    } option3;

} serial_nor_config_option_t;

typedef union
{
    struct
    {
        uint8_t por_mode;
        uint8_t current_mode;
        uint8_t exit_no_cmd_sequence;
        uint8_t restore_sequence;
    } B;
    uint32_t U;
} flash_run_context_t;

/*! @brief
 * XSPI LUT Sequence structure
 */
typedef struct _lut_sequence
{
    uint8_t seqNum; /*!< Sequence Number, valid number: 1-16 */
    uint8_t seqId;  /*!< Sequence Index, valid number: 0-15 */
    uint16_t reserved;
} xspi_lut_seq_t;

typedef struct
{
    uint8_t time_100ps;  /*!< Data valid time, in terms of 100ps */
    uint8_t delay_cells; /*!< Data valid time, in terms of delay cells */
} xspi_dll_time_t;

/************************** External Device Control Structures and Enumerations Start *******************************/
/*! @brief The enumeration of Idle signal drive IOFA[3] and IOFA[2]
 */
enum _xspi_external_signal
{
    XSPI_SignalIOFA2 = XSPI_MCR_ISD2FA_MASK, /*!< Idle signal drive IOFA[2]. */
    XSPI_SignalIOFA3 = XSPI_MCR_ISD3FA_MASK  /*!< Idle signal drive IOFA[3]. */
};

/*!
 * @brief The structure of external device's status register information(location, priority).
 * @note Only useful when AHB write to flash device is enabled, and use hardware to clear ppw flag.
 */
typedef struct _xspi_device_status_reg_info
{
    uint8_t wipLocation;        /*!< WIP bit field's location. */
    bool upperHalfWordSelected; /*!< Specify which half word(upper or lower) is selected. */
    bool value1Expired;         /*!< Specify the value to be check o selected wip location to
                                    determine if the page progame wait period is expired,
                                    true means expected value is 1, false means expected value
                                    is 0. */
} xspi_device_status_reg_info_t;

/*! @brief Dll Mode enumerations. */
typedef enum _xspi_dll_mode
{
    kXSPI_AutoUpdateMode, /*!< Dll mode : Auto update mode. */
    kXSPI_BypassMode,     /*!< Dll mode : Bypass mode. */
} xspi_dll_mode_t;

/*!
 * @brief The union of user custommed DLL parameters, in case of #kXSPI_BypassMode bypassModePara is used, in case of
 * #kXSPI_AutoUpdateMode autoUpdateModoPara is used.
 */
typedef union _xspi_dll_para
{
    struct
    {
        uint16_t delayElementCoarseValue : 4U; /*!< Delay element coarse adjustment value, range from 0 to 15. */
        uint16_t delayElementFineValue : 3U;   /*!< Delay element fine adjustment value, range from 0 to 7.  */
        uint16_t offsetDelayElementCount : 4U; /*!< Specify the number of offset delay elements,
                                                   range from 0 to 15. */
        uint16_t enableHighFreq : 1U;          /*!< If set as true, high frequency used for delay chain operations,
                                                  otherwise low frequency is used. */
        uint16_t bypassModeReserved : 4U;      /*!< Reserved. */
    } bypassModePara;
    struct
    {
        uint16_t referenceCounter : 4U;              /*!< Specify count of interval for DLL phase detection, range from
                                                     0 to 15. */
        uint16_t resolution : 4U;                    /*!< Specify minimum resolution for the DLL phase detctor,
                                                     range from 0 to 15. */
        uint16_t offsetDelayElementCount : 4U;       /*!< Specify the number of offset delay elements,
                                                         range from 0 to 15. */
        uint16_t tDiv16OffsetDelayElementCount : 3U; /*!< Specify the number of T/16 offset elements in the incoming
                                                     DQS, range from 0 to 15. */
        uint16_t enableHighFreq : 1U; /*!< If set as true, high frequency used for delay chain operations,
                                         otherwise low frequency is used. */
    } autoUpdateModoPara;
} xspi_dll_para_t;

/*!
 * @brief The structure of Delay-lock-loop configuration.
 */
typedef struct _xspi_dll_config
{
    xspi_dll_mode_t dllMode;       /*!< Dll mode auto update mode or bypass mode */
    bool useRefValue;              /*!< Specify to use reference value or not, if the reference code do not
                                     satisfy the specific usecase, it is application's responsibility to
                                     set custom parameters
                                     - \b true: following inputs are ignored, use the reference values
                                                 provided by NXP as instead;
                                     - \b false: following inputs take effect. */

    xspi_dll_para_t dllCustomPara; /*!< User custommed parameter to configure DLL, different DLL mode
                                     corresponding to different parameters, please refer to the union
                                     @ref xspi_dll_para_t. */
    uint8_t dllCustomDelayTapNum;  /*!< User custommed number of delay elements for each delay tap. */
    bool enableCdl8;               /*!< Enable course delay line 8. */
} xspi_dll_config_t;

/*!
 * @brief The enumeration of sample clock source which is used to sample data from external devices.
 *
 * @note If external device support Data strobe signal, the sample clock
 *   should selected as kXSPI_SampleClkFromExternalDQS.
 */
typedef enum _xspi_sample_clk_source
{
    kXSPI_SampleClkFromNonInvertedFullySpeedDummyPadLoopback = 0x1U, /*!< Sample clock from non inverted
                                                                     fully speed dummy pad loopback. */
    kXSPI_SampleClkFromInvertedFullySpeedDummyPadLoopback = 0x5U,    /*!< Sample clock from inverted
                                                                     fully speed dummy pad loopback. */
    kXSPI_SampleClkFromHalfSpeedDummyPadLoopback = 0x9U,             /*!< Sample clock from half
                                                                     fully speed dummy pad loopback. */
    kXSPI_SampleClkFromDqsPadLoopback = 0x2U,                        /*!< Sample clock from Dqs pad loopback. */
    kXSPI_SampleClkFromExternalDQS    = 0x3U,                        /*!< Sample clock from external DQS signal. */
} xspi_sample_clk_source_t;

/*!
 * @brief The selection of data learning pad.
 */
typedef enum _xspi_data_learning_pad_select
{
    kXSPI_OnlyIO1    = 1U, /*!< IO1 selected as pad to use for pattern matching IO. */
    kXSPI_BothIO1IO3 = 3U, /*!< IO1 and IO3 selected as pad to use for pattern matching IO. */
} xspi_data_learning_pad_select_t;

/*!
 * @brief The configuration of data learning.
 *
 * @note Data learning feature only supported in the DQS sampling method(kXSPI_SampleClkFromExternalDQS).
 */
typedef struct _xspi_data_learning_config
{
    uint32_t pattern;                            /*!< Pre-defined pattern to match. */
    bool deviceSupported;                        /*!< Specify if external device support data learning feature. */
    xspi_data_learning_pad_select_t padSelected; /*!< Used to select pad which use for pattern matching IO. */
} xspi_data_learning_config_t;

/*!
 * @brief Sample clock configuration, which used to sample data from external device.
 */
typedef struct _xspi_sample_clk_config
{
    xspi_sample_clk_source_t sampleClkSource; /*!< Specify the sample clock source. */
#if (defined(FSL_FEATURE_XSPI_HAS_DQS_LAT_EN) && FSL_FEATURE_XSPI_HAS_DQS_LAT_EN)
    bool enableDQSLatency;                    /*!< Enable DQS latency or not. */
#endif                                        /* FSL_FEATURE_XSPI_HAS_DQS_LAT_EN */
    xspi_dll_config_t dllConfig; /*!< Specify the DLL configuration, to improve data accuracy, please adjust
                                     DLL settings based on specific use.  */
} xspi_sample_clk_config_t;

/*!
 * @brief External device's address mode.
 */
typedef enum _xspi_device_addr_mode
{
    kXSPI_DeviceByteAddressable  = 0U, /*!< Byte addressable. */
    kXSPI_Device2ByteAddressable = 1U, /*!< Two bytes addressable. */
    kXSPI_Device4ByteAddressable = 2U, /*!< Four bytes addressable. */
} xspi_device_addr_mode_t;

/*!
 * @brief The enumeration of external device's interface type, hyper bus or SPI(including strandard and extended).
 *
 * @note Different interface result different settings.
 */
typedef enum _xspi_device_interface_type
{
    kXSPI_StrandardExtendedSPI = 0U, /*!< External device follow SPI protocol, DQS_OUT_EN must be 0 */
    kXSPI_HyperBus             = 1U, /*!< External device follow hyper Bus protocol,  DQS_OUT_EN must be 1 */
} xspi_device_interface_type_t;

/*!
 * @brief The enumeration of hyper bus X16 mode
 */
typedef enum _xspi_hyper_bus_x16_mode
{
    kXSPI_x16ModeDisable            = 0U, /*!< X16 mode is disabled. */
    kXSPI_x16ModeEnabledOnlyData    = 2U, /*!< X16 mode is enabled only for data. */
    kXSPI_x16ModeEnabledAddrCmdData = 3U, /*!< X16 mode is enabled for address, command, and data. */
} xspi_hyper_bus_x16_mode_t;

/*!
 * @brief The union of external device's settings, if external device following hyper bus protocol #hyperBusSettings
 * take effects, if external device following SPI protocol #strandardExtendedSPISettings take effects.
 */
typedef union _xspi_device_interface_settings
{
    struct
    {
        uint32_t pageSize; /*!< The size of page to program, the unit is byte. */
    } strandardExtendedSPISettings;

    struct
    {
        xspi_hyper_bus_x16_mode_t x16Mode; /*!< Specify hyper bus X16 mode. */
        bool enableVariableLatency;        /*!< If enabled, the count of latency is depends on hyper bus device. */
        bool forceBit10To1;                /*!< Force bit 10 to logic one or not. */
        uint32_t pageSize;                 /*!< The size of page to program, the unit is byte. */
    } hyperBusSettings;
} xspi_device_interface_settings_t;

/*!
 * @brief Enumeration defining the alignment modes of XSPI DDR data with respect to the internal reference clock.
 */
typedef enum _xspi_ddr_data_aligned_clk
{
    kXSPI_DDRDataAlignedWithInternalRefClk = 0U, /*!< DDR data aligned with internal reference clock. */
    kXSPI_DDRDataAlignedWith2xInternalRefClk,    /*!< DDR data aligned with 2X internal reference clock. */
} xspi_ddr_data_aligned_clk_t;

/*!
 * @brief The structure of device DDR configuration.
 */
typedef struct _xspi_device_ddr_config
{
    bool enableDdr;                                /*!< Used to enable/disable DDR mode. */
    xspi_ddr_data_aligned_clk_t ddrDataAlignedClk; /*!< Specify the DDR data aligned clock. */
    bool enableByteSwapInOctalMode;                /*!< Swap byte order in octal mode. */
} xspi_device_ddr_config_t;

/*! @brief External device configuration items. */
typedef struct _xspi_device_config
{
    uint32_t xspiRootClk; /*!< XSPI serial root clock. */
    bool enableCknPad;    /*!< Enable/disable clock on differential CKN pad for flash memory A.*/

    xspi_device_interface_type_t deviceInterface;       /*!< Type of external device's interface:
                                                        hyperBus or Strandard/Extended SPI. */
    xspi_device_interface_settings_t interfaceSettings; /*!< Settings of specified interface. */

    uint8_t CSHoldTime;                                 /*!< CS line hold time. */
    uint8_t CSSetupTime;                                /*!< CS line setup time. */

    xspi_sample_clk_config_t sampleClkConfig;           /*!< Configuration of sample clock. */
#if (defined(FSL_FEATURE_XSPI_HAS_DDR) && FSL_FEATURE_XSPI_HAS_DDR)
    xspi_device_ddr_config_t *ptrDeviceDdrConfig;    /*!< Set as NULL to set device as SDR mode, to change to DDR mode,
                                                   this member should be populated. */
#endif
    xspi_device_addr_mode_t addrMode;                /*!< Address mode of external device. */
    uint8_t columnAddrWidth;                         /*!< Width of column address. */
    bool enableCASInterleaving;                      /*!< Usually enabled in dual-die device. */
    uint32_t deviceSize[XSPI_SFAD_COUNT2];           /*!< Size of external device, the unit is KB. */

    xspi_device_status_reg_info_t *ptrDeviceRegInfo; /*!< Pointer to the structure to store external device's WIP
                                                        register information, should set as NULL if AHB page write
                                                        is not used or if AHB page write is used but use software
                                                        policy to clear flag. */
} xspi_device_config_t;
/************************** External Device Control Structures and Enumerations End *******************************/

/*! @brief
 * XSPI Memory Configuration Block
 */
typedef struct _xspi_mem_config_t
{
    uint32_t tag;               /*!< [0x000-0x003] Tag, fixed value 0x42464346UL */
    uint32_t version;           /*!< [0x004-0x007] Version,[31:24] -'V', [23:16] - Major, [15:8] - Minor, [7:0] - bugfix */
    uint32_t reserved0;         /*!< [0x008-0x00b] Reserved for future use */
    uint8_t readSampleClkSrc;   /*!< [0x00c-0x00c] Read Sample Clock Source, valid value: 0/1/3 */
    //! Serial NAND, need to refer to datasheet
    uint8_t deviceModeCfgEnable; /*!< [0x00d-0x00d] Device Mode Configure enable flag, 1 - Enable, 0 - Disable */
    uint8_t deviceModeType; /*!< [0x00e-0x00e] Specify the configuration command type:Quad Enable, DPI/QPI/OPI switch, */
    //! Generic configuration, etc.
    uint16_t waitTimeCfgCommands; /*!< [0x010-0x011] Wait time for all configuration commands, unit: 100us, Used for */
    //! DPI/QPI/OPI switch or reset command
    xspi_lut_seq_t deviceModeSeq; /*!< [0x014-0x017] Device mode sequence info, [7:0] - LUT sequence id, [15:8] - LUt */
    //! sequence number, [31:16] Reserved
    uint32_t deviceModeArg;    /*!< [0x018-0x01b] Argument/Parameter for device configuration */
    uint8_t configCmdEnable;   /*!< [0x01c-0x01c] Configure command Enable Flag, 1 - Enable, 0 - Disable */
    uint8_t configModeType[3]; /*!< [0x01d-0x01f] Configure Mode Type, similar as deviceModeTpe */
    xspi_lut_seq_t        configCmdSeqs[3]; /*!< [0x020-0x02b] Sequence info for Device Configuration command, similar as deviceModeSeq */
    uint8_t ipedMode;     //!> [0x02c-0x02c] IPED mode
    uint8_t maxCsLowInterval;     /*!< [0x02d-0x02d] Configure psram tcsm, unit 0.1us */
    uint8_t ahbAlignment;      /*!< [0x02e-0x02e] AHB Alignment, 00b - No limit, 01b - 256B, 10b - 512B, 11b - 1KB */
    uint32_t configCmdArgs[3]; /*!< [0x030-0x03b] Arguments/Parameters for device Configuration commands */
    uint8_t reserved2[3];      /*!< [0x03c-0x03e] Reserved for future use */
    uint32_t controllerMiscOption; /*!< [0x040-0x043] Controller Misc Options, see Misc feature bit definitions for more */
    //! details
    uint8_t deviceType;    /*!< [0x044-0x044] Device Type:  See Flash Type Definition for more details */
    uint8_t sflashPadType; /*!< [0x045-0x045] Serial Flash Pad Type: 1 - Single, 2 - Dual, 4 - Quad, 8 - Octal */
    uint8_t serialClkFreq; /*!< [0x046-0x046] Serial Flash Frequencey, device specific definitions, See System Boot */
    //! Chapter for more details
    uint8_t lutCustomSeqEnable; /*!< [0x047-0x047] LUT customization Enable, it is required if the program/erase cannot */
    //! be done using 1 LUT sequence, currently
    uint32_t reserved3[2]; /*!< [0x048-0x04f] Reserved for future use */
    union
    {
        uint32_t flashArray[XSPI_SFAD_COUNT2]; /*!< [0x050-0x057] */
        struct
        {
            uint32_t sflashA1Size; /*!< [0x050-0x053] Size of Flash, in bytes, connected to A1 */
            uint32_t sflashA2Size; /*!< [0x054-0x057] Size of Flash, in bytes, connected to A2 */
        };
    };
    uint32_t csPadSettingOverride;    /*!< [0x058-0x05b] CS pad setting override value */
    uint32_t sclkPadSettingOverride;  /*!< [0x05c-0x05f] SCK pad setting override value */
    uint32_t dataPadSettingOverride;  /*!< [0x060-0x063] data pad setting override value */
    uint32_t dqsPadSettingOverride;   /*!< [0x064-0x067] DQS pad setting override value */
    uint32_t timeoutInMs;             /*!< [0x068-0x06b] Timeout threshold for read status command */
    xspi_dll_time_t dataValidTime[2]; /*!< [0x06c-0x06f] CLK edge to data valid time for PORT A and PORT B */
    uint16_t busyOffset;              /*!< [0x070-0x071] Busy offset, valid value: 0-31 */
    uint16_t busyBitPolarity; /*!< [0x072-0x073] Busy flag polarity, 0 - busy flag is 1 when flash device is busy, 1 - */
    //! busy flag is 0 when flash device is busy
    uint32_t lookupTable[90];        /*!< [0x074-0x1db] Lookup table holds Flash command sequences */
    xspi_lut_seq_t lutCustomSeq[12]; /*!< [0x1dc-0x20b] Customizable LUT Sequences */
    uint32_t dllCrVal;               //!> [0x20c-0x20f] Customizable DLLCR setting
    uint32_t smprVal;                //!> [0x210-0x213] Customizable SMPR setting
    uint32_t reserved8[2];           /*!< [0x214-0x21b] Reserved for future use */
    xspi_device_config_t deviceConfig; /*!< [0x21c-...] XSPI device config */
} xspi_mem_config_t;

/*! @brief
 *  Serial NOR configuration block
 */
typedef struct _xspi_nor_config
{
    xspi_mem_config_t memConfig; /*!< Common memory configuration info via XSPI */
    uint32_t pageSize;              /*!< Page size of Serial NOR */
    uint32_t sectorSize;            /*!< Sector size of Serial NOR */
    uint8_t ipcmdSerialClkFreq;     /*!< Clock frequency for IP command */
    uint8_t isUniformBlockSize;     /*!< Sector/Block size is the same */
    uint8_t isDataOrderSwapped;     /*!< Data order (D0, D1, D2, D3) is swapped (D1,D0, D3, D2) */
    uint8_t reserved0[1];           /*!< Reserved for future use */
    uint8_t serialNorType;          /*!< Serial NOR Flash type: 0/1/2/3 */
    uint8_t needExitNoCmdMode;      /*!< Need to exit NoCmd mode before other IP command */
    uint8_t halfClkForNonReadCmd;   /*!< Half the Serial Clock for non-read command: true/false */
    uint8_t needRestoreNoCmdMode;   /*!< Need to Restore NoCmd mode after IP commmand execution */
    uint32_t blockSize;             /*!< Block size */
    uint32_t flashStateCtx;         /*!< Flash State Context */
    uint32_t reserve2[10];          /*!< Reserved for future use */
} xspi_nor_config_t;

/*!
 * @brief xspi operation.
 */
typedef enum _xspi_operation
{
    kXSPIOperation_Command, /*!< Only command, both TX and RX buffer are ignored. */
    kXSPIOperation_Config,  /*!< Configure device mode, the TX FIFO size is fixed in LUT. */
    kXSPIOperation_Write,   /*!< Write, only TX buffer is effective */
    kXSPIOperation_Read,    /*!< Read, only Rx Buffer is effective. */
    kXSPIOperation_End = kXSPIOperation_Read,
} xspi_operation_t;

/*! @brief XSPI Transfer Context */
typedef struct _xspi_xfer
{
    xspi_operation_t operation; /*!< XSPI operation */
    uint32_t baseAddress;          /*!< XSPI operation base address */
    uint32_t seqId;                /*!< Sequence Id */
    uint32_t seqNum;               /*!< Sequence Number */
    bool isParallelModeEnable;     /*!< Is a parallel transfer */
    const uint32_t *txBuffer;            /*!< Tx buffer */
    uint32_t txSize;               /*!< Tx size in bytes */
    uint32_t *rxBuffer;            /*!< Rx buffer */
    uint32_t rxSize;               /*!< Rx size in bytes */
} xspi_xfer_t;

/*! @brief
 * XSPI Clock Type
 */
typedef enum
{
    kXSpiClock_CoreClock,       /*!< ARM Core Clock */
    kXSpiClock_AhbClock,        /*!< AHB clock */
    kXSpiClock_SerialRootClock, /*!< Serial Root Clock */
    kXSpiClock_IpgClock,        /*!< IPG clock */
} xspi_clock_type_t;

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * @brief Initialize Serial NOR devices via XSPI
 *
 * This function checks and initializes the XSPI module for the other XSPI APIs.
 *
 * @param instance storage the instance of XSPI.
 * @param config A pointer to the storage for the driver runtime state.
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 * @retval #kStatus_XSPI_InvalidSequence A invalid Sequence is provided.
 * @retval #kStatus_XSPI_SequenceExecutionTimeout Sequence Execution timeout.
 * @retval #kStatus_XSPI_DeviceTimeout the device timeout
 */
status_t XSPI_NorFlash_Init(uint32_t instance, xspi_nor_config_t *config);

/*!
 * @brief Program page data to Serial NOR via XSPI.
 *
 * This function programs the NOR flash memory with the dest address for a given
 * flash area as determined by the dst address and the length.
 *
 * @param instance storage the instance of XSPI.
 * @param config  A pointer to the storage for the driver runtime state.
 * @param dstAddr A pointer to the desired flash memory to be programmed.
 *                NOTE:
 *                It is recommended that use page aligned access;
 *                If the dst_addr is not aligned to page,the driver automatically
 *                aligns address down with the page address.
 * @param src A pointer to the source buffer of data that is to be programmed
 *            into the NOR flash.
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 * @retval #kStatus_XSPI_InvalidSequence A invalid Sequence is provided.
 * @retval #kStatus_XSPI_SequenceExecutionTimeout Sequence Execution timeout.
 * @retval #kStatus_XSPI_DeviceTimeout the device timeout
 */
status_t XSPI_NorFlash_ProgramPage(uint32_t instance,
                                      xspi_nor_config_t *config,
                                      uint32_t dstAddr,
                                      const uint32_t *src);

/*!
 * @brief Erase all the Serial NOR devices connected on XSPI.
 *
 * @param instance storage the instance of XSPI.
 * @param config A pointer to the storage for the driver runtime state.
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 * @retval #kStatus_XSPI_InvalidSequence A invalid Sequence is provided.
 * @retval #kStatus_XSPI_SequenceExecutionTimeout Sequence Execution timeout.
 * @retval #kStatus_XSPI_DeviceTimeout the device timeout
 */
status_t XSPI_NorFlash_EraseAll(uint32_t instance, xspi_nor_config_t *config);

/*!
 * @brief Erase one sector specified by address
 *
 * This function erases one of NOR flash sectors based on the desired address.
 *
 * @param instance storage the index of XSPI.
 * @param config A pointer to the storage for the driver runtime state.
 * @param address The start address of the desired NOR flash memory to be erased.
 *                NOTE:
 *                It is recommended that use sector-aligned access nor device;
 *                If dstAddr is not aligned with the sector,The driver automatically
 *                aligns address down with the sector address.
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 * @retval #kStatus_XSPI_InvalidSequence A invalid Sequence is provided.
 * @retval #kStatus_XSPI_SequenceExecutionTimeout Sequence Execution timeout.
 * @retval #kStatus_XSPI_DeviceTimeout the device timeout
 */
status_t XSPI_NorFlash_EraseSector(uint32_t instance, xspi_nor_config_t *config, uint32_t address);

/*!
 * @brief Erase one block specified by address
 *
 * This function erases one block of NOR flash based on the desired address.
 *
 * @param instance storage the index of XSPI.
 * @param config A pointer to the storage for the driver runtime state.
 * @param address The start address of the desired NOR flash memory to be erased.
 *              NOTE:
 *              It is recommended that use block-aligned access nor device;
 *              If dstAddr is not aligned with the block,The driver automatically
 *              aligns address down with the block address.
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 * @retval #kStatus_XSPI_InvalidSequence A invalid Sequence is provided.
 * @retval #kStatus_XSPI_SequenceExecutionTimeout Sequence Execution timeout.
 * @retval #kStatus_XSPI_DeviceTimeout the device timeout
 */
status_t XSPI_NorFlash_EraseBlock(uint32_t instance, xspi_nor_config_t *config, uint32_t address);

/*!
 * @brief Get XSPI NOR Configuration Block based on specified option.
 *
 * @param instance storage the instance of XSPI.
 * @param config A pointer to the storage for the driver runtime state.
 * @param option A pointer to the storage Serial NOR Configuration Option Context.
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 * @retval #kStatus_XSPI_InvalidSequence A invalid Sequence is provided.
 * @retval #kStatus_XSPI_SequenceExecutionTimeout Sequence Execution timeout.
 * @retval #kStatus_XSPI_DeviceTimeout the device timeout
 */
status_t XSPI_NorFlash_GetConfig(uint32_t instance,
                                    xspi_nor_config_t *config,
                                    serial_nor_config_option_t *option);

/*!
 * @brief Erase Flash Region specified by address and length
 *
 * This function erases the appropriate number of flash sectors based on the
 * desired start address and length.
 *
 * @param instance storage the index of XSPI.
 * @param config A pointer to the storage for the driver runtime state.
 * @param start The start address of the desired NOR flash memory to be erased.
 *              NOTE:
 *              It is recommended that use sector-aligned access nor device;
 *              If dstAddr is not aligned with the sector,the driver automatically
 *              aligns address down with the sector address.
 * @param length The length, given in bytes to be erased.
 *              NOTE:
 *              It is recommended that use sector-aligned access nor device;
 *              If length is not aligned with the sector,the driver automatically
 *              aligns up with the sector.
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 * @retval #kStatus_XSPI_InvalidSequence A invalid Sequence is provided.
 * @retval #kStatus_XSPI_SequenceExecutionTimeout Sequence Execution timeout.
 * @retval #kStatus_XSPI_DeviceTimeout the device timeout
 */
status_t XSPI_NorFlash_Erase(uint32_t instance, xspi_nor_config_t *config, uint32_t start, uint32_t length);

/*!
 * @brief Read data from Serial NOR via XSPI.
 *
 * This function read the NOR flash memory with the start address for a given
 * flash area as determined by the dst address and the length.
 *
 * @param instance storage the instance of XSPI.
 * @param config  A pointer to the storage for the driver runtime state.
 * @param dst     A pointer to the dest buffer of data that is to be read from the NOR flash.
 *                NOTE:
 *                It is recommended that use page aligned access;
 *                If the dstAddr is not aligned to page,the driver automatically
 *                aligns address down with the page address.
 * @param start   The start address of the desired NOR flash memory to be read.
 * @param bytes   The length, given in bytes to be read.
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 * @retval #kStatus_XSPI_InvalidSequence A invalid Sequence is provided.
 * @retval #kStatus_XSPI_SequenceExecutionTimeout Sequence Execution timeout.
 * @retval #kStatus_XSPI_DeviceTimeout the device timeout
 */
status_t XSPI_NorFlash_Read(
    uint32_t instance, xspi_nor_config_t *config, uint32_t *dst, uint32_t start, uint32_t bytes);

/*!
 * @brief XSPI command
 *
 * This function is used to perform the command write sequence to the NOR device.
 *
 * @param instance storage the index of XSPI.
 * @param xfer A pointer to the storage XSPI Transfer Context.
 *
 * @retval kStatus_Success Api was executed succesfuly.
 * @retval kStatus_InvalidArgument A invalid argument is provided.
 * @retval kStatus_ROM_XSPI_InvalidSequence A invalid Sequence is provided.
 * @retval kStatus_ROM_XSPI_SequenceExecutionTimeout Sequence Execution timeout.
 */
status_t XSPI_NorFlash_CommandXfer(uint32_t instance, xspi_xfer_t *xfer);

/*!
 * @brief Configure XSPI Lookup table
 *
 * @param instance storage the index of XSPI.
 * @param seqIndex storage the sequence Id.
 * @param lutBase A pointer to the look-up-table for command sequences.
 * @param numberOfSeq storage sequence number.
 *
 * @retval kStatus_Success Api was executed succesfuly.
 * @retval kStatus_InvalidArgument A invalid argument is provided.
 * @retval kStatus_ROM_XSPI_InvalidSequence A invalid Sequence is provided.
 * @retval kStatus_ROM_XSPI_SequenceExecutionTimeout Sequence Execution timeout.
 */
status_t XSPI_NorFlash_UpdateLut(uint32_t instance,
                                    uint32_t seqIndex,
                                    const uint32_t *lutBase,
                                    uint32_t numberOfSeq);

/*!
 * @brief Set the clock source for XSPI NOR
 *
 * @param instance storage the index of XSPI.
 * @param clockSource Clock source for XSPI NOR. See to "_xspi_nor_clock_source".
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 */
status_t XSPI_NorFlash_SetClockSource(uint32_t instance, uint32_t clockSource);

/*!
 * @brief config xspi clock
 *
 * @param instance storage the index of XSPI.
 * @param freqOption pointer to XSPIXSPI flash serial clock frequency.
 * @param sampleClkMode pointer to configure the XSPI clock configuration type.
 */
void XSPI_NorFlash_ConfigClock(uint32_t instance, uint32_t freqOption, uint32_t sampleClkMode);

/*!
 * @brief Partial program data to XSPI NOR flash.
 *
 * @param instance storage the index of XSPI.
 * @param config A pointer to the storage for the driver runtime state.
 * @param dstAddr A pointer to the desired flash memory to be programmed.
 * @param src A pointer to the source buffer of data that is to be programmed into the NOR flash.
 * @param length The length, given in bytes (not words or long-words) to be programmed.
 *
 * @retval kStatus_Success Api was executed succesfuly.
 * @retval kStatus_InvalidArgument A invalid argument is provided.
 * @retval kStatus_ROM_XSPI_InvalidSequence A invalid Sequence is provided.
 * @retval kStatus_ROM_XSPI_SequenceExecutionTimeout Sequence Execution timeout.
 */
status_t XSPI_NorFlash_PartialProgram(
    uint32_t instance, xspi_nor_config_t *config, uint32_t dstAddr, const uint32_t *src, uint32_t length);

#ifdef __cplusplus
}
#endif

/*! @} */

#endif /*! _FSL_XSPI_NOR_FLASH_H__ */
