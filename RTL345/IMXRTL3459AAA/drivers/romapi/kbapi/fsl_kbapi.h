/*
 * Copyright 2025-2026 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef FSL_KBAPI_H_
#define FSL_KBAPI_H_

#include "fsl_common.h"

/*!
 * @addtogroup kbapi_driver
 * @{
 */
/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @name Driver version */
/*@{*/
/*! @brief KBAPI driver version 1.0.0. */
#define FSL_KBAPI_DRIVER_VERSION (MAKE_VERSION(1, 0, 0))
/*@}*/

/*! @brief Memory region definition. */
typedef struct
{
    uint32_t address;
    uint32_t length;
} kb_region_t;

/*! @brief ROM API version. */
enum
{
    kKbootApiVersion = 1,
};

/*! @brief Security profile flags. */
enum kb_security_profile_tag
{
    kKbootMinRSA4096 = (1 << 16),
};


/*!
 * @brief Details of the operation to be performed by the ROM.
 *
 * The #kRomAuthenticateImage operation requires the
 * entire signed image to be available to the application.
 */
typedef enum
{
    kRomAuthenticateImage = 1, /*!< Authenticate a signed image. */
    kRomLoadImage         = 2, /*!< Load SB file. */
    kRomOperationCount    = 3,
} kb_operation_t;

typedef struct
{
    uint32_t profile;
    uint32_t minBuildNumber;
    uint32_t overrideSBBootSectionID;
    uint32_t *userSBKEK;
    uint32_t regionCount;
    const kb_region_t *regions;
} kb_load_sb_t;

typedef struct
{
    uint32_t profile;
    uint32_t minBuildNumber;
    uint32_t maxImageLength;
    uint32_t *userRHK;
} kb_authenticate_t;

typedef struct
{
    uint32_t version; /*!< Should be set to kKbootApiVersion. */
    uint8_t *buffer;  /*!< Caller-provided buffer used by Kboot. */
    uint32_t bufferLength;
    kb_operation_t op;
    union
    {
        kb_authenticate_t authenticate; /*!< Settings for #kb_authenticate_t operation.*/
        kb_load_sb_t loadSB;            /*!< Settings for #kb_load_sb_t operation.*/
    };
} kb_options_t;

typedef struct kb_buffer_desc_tag
{
    uint8_t *buf;
    uint32_t len;
    uint32_t allocated;
} kb_buffer_desc_t;

typedef struct kb_opaque_session_ref_tag
{
    kb_options_t options;
    kb_buffer_desc_t buffer_desc;
    void *op_context;
} kb_session_ref_t;

#define kStatusGroup_RomApi (108) /*!< ROM API status group number */

enum
{
    kStatus_RomApiExecuteCompleted = kStatus_Success, /*!< ROM successfully process the whole sb file/boot image. */
    kStatus_RomApiNeedMoreData =
        MAKE_STATUS(kStatusGroup_RomApi, 1), /*!< ROM needs more data to continue processing the boot image. */
    kStatus_RomApiBufferSizeNotEnough = MAKE_STATUS(
        kStatusGroup_RomApi, 2), /*!< The user buffer is not enough for use by Kboot during execution of the operation. */
    kStatus_RomApiInvalidBuffer =
        MAKE_STATUS(kStatusGroup_RomApi, 3), /*!<The user buffer is not ok for sbloader or authentication. */
};

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
 * API
 ******************************************************************************/

/*!
 * @brief This API is used to initialize bootloader and nboot context necessary to process sb4 file format.
 *
 * @param session A double pointer to a kb_session_ref_t object where the initialized session reference will be
 * stored.
 * @param options A pointer to a kb_options_t structure containing configuration settings for initializing the
 * session.
 */
status_t KB_Init(kb_session_ref_t **session, const kb_options_t *options);

/*!
 * @brief This API is used to release nboot context and finalize sb4 file processing.
 *
 * @param session A pointer to an existing kb_session_ref_t session object that should be released and
 * deinitialized.
 */
status_t KB_Deinit(kb_session_ref_t *session);

/*!
 * @brief This API is used to decrypt sb4 file and store signed image contents specified by loader command supported
 * while generating sb4 image through Json configuration.
 *
 * @param session Session pointer obtained from kb_init function.
 * @param data Pointer to sb file data..
 * @param dataLength sb file data length in bytes.
 *
 */
status_t KB_Execute(kb_session_ref_t *session, const uint8_t *data, uint32_t dataLength);

#ifdef __cplusplus
}
#endif

/**
 * @}
 */

#endif /* FSL_KBAPI_H_ */
