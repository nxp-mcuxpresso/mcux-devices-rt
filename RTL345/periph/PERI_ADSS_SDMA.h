/*
** ###################################################################
**     Processors:          IMXRTL3459AAAFAWAR_cm55_core0
**                          IMXRTL3459AAAFAWAR_cm55_core1
**                          IMXRTL3459AAAFBWAR_cm55_core0
**                          IMXRTL3459AAAFBWAR_cm55_core1
**
**     Version:             rev. 1.0, 2026-06-19
**     Build:               b261012
**
**     Abstract:
**         CMSIS Peripheral Access Layer for ADSS_SDMA
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2026 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2026-06-19)
**         Initial version
**
** ###################################################################
*/

/*!
 * @file PERI_ADSS_SDMA.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for ADSS_SDMA
 *
 * CMSIS Peripheral Access Layer for ADSS_SDMA
 */

#if !defined(PERI_ADSS_SDMA_H_)
#define PERI_ADSS_SDMA_H_                        /**< Symbol preventing repeated inclusion */

#if (defined(CPU_IMXRTL3459AAAFAWAR_cm55_core0) || defined(CPU_IMXRTL3459AAAFBWAR_cm55_core0))
#include "IMXRTL3459AAA_cm55_core0_COMMON.h"
#elif (defined(CPU_IMXRTL3459AAAFAWAR_cm55_core1) || defined(CPU_IMXRTL3459AAAFBWAR_cm55_core1))
#include "IMXRTL3459AAA_cm55_core1_COMMON.h"
#else
  #error "No valid CPU defined!"
#endif

/* ----------------------------------------------------------------------------
   -- Device Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Peripheral_access_layer Device Peripheral Access Layer
 * @{
 */


/*
** Start of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic push
  #else
    #pragma push
    #pragma anon_unions
  #endif
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=extended
#else
  #error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- ADSS_SDMA Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_SDMA_Peripheral_Access_Layer ADSS_SDMA Peripheral Access Layer
 * @{
 */

/** ADSS_SDMA - Size of Registers Arrays */
#define ADSS_SDMA_CH_COUNT                        48u

/** ADSS_SDMA - Register Layout Typedef */
typedef struct {
  struct {                                         /* offset: 0x0, array step: 0x20 */
    __IO uint32_t CHANNEL_CFG;                       /**< Channel configuration register, array offset: 0x0, array step: 0x20 */
    __IO uint32_t START_ADDRESS;                     /**< Address of buffer, array offset: 0x4, array step: 0x20 */
    __I  uint32_t DSP_BUFFER_ADDRESS;                /**< Address of buffer available to DSP, array offset: 0x8, array step: 0x20 */
    __I  uint32_t DSP_BUFFER_WORDS;                  /**< Number of words transferred in the current buffer, array offset: 0xC, array step: 0x20 */
    __O  uint32_t CHANNEL_CTRL;                      /**< Control of the buffers in a DMA channel, array offset: 0x10, array step: 0x20 */
    __I  uint32_t CHANNEL_STATUS;                    /**< Status of a DMA channel, array offset: 0x14, array step: 0x20 */
         uint8_t RESERVED_0[8];
  } CH[ADSS_SDMA_CH_COUNT];
  __IO uint32_t DMAWRITEACCESS;                    /**< Write access to DMA configuration registers, offset: 0x600 */
  __I  uint32_t DMAPROTECTIONCOUNTER;              /**< SDMA protection counter value, offset: 0x604 */
  __I  uint32_t DMAENABLESTATUS_0;                 /**< Streaming DMA channel 0 - 23 enable status, offset: 0x608 */
  __I  uint32_t DMAENABLESTATUS_1;                 /**< Streaming DMA channel 24 - 47 enable status, offset: 0x60C */
  __O  uint32_t DMAENABLESET_0;                    /**< Enable streaming DMA channel 0 - 23, offset: 0x610 */
  __O  uint32_t DMAENABLESET_1;                    /**< Enable streaming DMA channel 24 - 47, offset: 0x614 */
  __O  uint32_t DMAENABLECLEAR_0;                  /**< Disable streaming DMA channel 0 - 23, offset: 0x618 */
  __O  uint32_t DMAENABLECLEAR_1;                  /**< Disable streaming DMA channel 24 - 47, offset: 0x61C */
  __O  uint32_t DMARELEASEBUF_0;                   /**< Release DMA buffer, offset: 0x620 */
  __O  uint32_t DMARELEASEBUF_1;                   /**< Release DMA buffer, offset: 0x624 */
  __IO uint32_t DMAEVENT_0;                        /**< Event status register for DMA channel 0 to 7, offset: 0x628 */
  __IO uint32_t DMAEVENT_1;                        /**< Event status register for DMA channel 8 to 15, offset: 0x62C */
  __IO uint32_t DMAEVENT_2;                        /**< Event status register for DMA channel 16 to 23, offset: 0x630 */
  __IO uint32_t DMAEVENT_3;                        /**< Event status register for DMA channel 24 to 31, offset: 0x634 */
  __IO uint32_t DMAEVENT_4;                        /**< Event status register for DMA channel 32 to 39, offset: 0x638 */
  __IO uint32_t DMAEVENT_5;                        /**< Event status register for DMA channel 40 to 47, offset: 0x63C */
  __IO uint32_t DMAEVENTENABLE_0;                  /**< Enable of DMA events of DMA channel 0 to 23, offset: 0x640 */
  __IO uint32_t DMAEVENTENABLE_1;                  /**< Enable of DMA events of DMA channel 24 to 47, offset: 0x644 */
} ADSS_SDMA_Type;

/* ----------------------------------------------------------------------------
   -- ADSS_SDMA Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADSS_SDMA_Register_Masks ADSS_SDMA Register Masks
 * @{
 */

/*! @name CHANNEL_CFG - Channel configuration register */
/*! @{ */

#define ADSS_SDMA_CHANNEL_CFG_NUM_WORDS_MASK     (0xFFU)
#define ADSS_SDMA_CHANNEL_CFG_NUM_WORDS_SHIFT    (0U)
/*! num_words - Number of words to be transferred minus 1. This is the size of one of the double buffers.
 *  0b00000000..Minimum buffer size is 1 word
 *  0b11111111..Maximum buffer size is 256 words
 */
#define ADSS_SDMA_CHANNEL_CFG_NUM_WORDS(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_CHANNEL_CFG_NUM_WORDS_SHIFT)) & ADSS_SDMA_CHANNEL_CFG_NUM_WORDS_MASK)

#define ADSS_SDMA_CHANNEL_CFG_DIRECTION_MASK     (0x100U)
#define ADSS_SDMA_CHANNEL_CFG_DIRECTION_SHIFT    (8U)
/*! direction - Direction of transfer (MEM-HSI or HSI-MEM
 *  0b0..Transfer from HSI to memory
 *  0b1..Transfer from memory to HSI
 */
#define ADSS_SDMA_CHANNEL_CFG_DIRECTION(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_CHANNEL_CFG_DIRECTION_SHIFT)) & ADSS_SDMA_CHANNEL_CFG_DIRECTION_MASK)

#define ADSS_SDMA_CHANNEL_CFG_FRAME_EVENT_MASK   (0xFE00U)
#define ADSS_SDMA_CHANNEL_CFG_FRAME_EVENT_SHIFT  (9U)
/*! frame_event - Selects the event used for frame synchronization.
 *  0b0000000..No event synchronization. Event line 0 is tied off.
 */
#define ADSS_SDMA_CHANNEL_CFG_FRAME_EVENT(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_CHANNEL_CFG_FRAME_EVENT_SHIFT)) & ADSS_SDMA_CHANNEL_CFG_FRAME_EVENT_MASK)

#define ADSS_SDMA_CHANNEL_CFG_SYNCHRONIZE_MASK   (0x10000U)
#define ADSS_SDMA_CHANNEL_CFG_SYNCHRONIZE_SHIFT  (16U)
/*! synchronize - Use the start of packet (SOP) for synchronization. Should be set to 0 when a frame event is selected.
 *  0b0..Do not use the start of packet (SOP) for synchronization.
 *  0b1..Use the start of packet (SOP) for synchronization.
 */
#define ADSS_SDMA_CHANNEL_CFG_SYNCHRONIZE(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_CHANNEL_CFG_SYNCHRONIZE_SHIFT)) & ADSS_SDMA_CHANNEL_CFG_SYNCHRONIZE_MASK)

#define ADSS_SDMA_CHANNEL_CFG_DOUBLE_BUFFER_MASK (0x20000U)
#define ADSS_SDMA_CHANNEL_CFG_DOUBLE_BUFFER_SHIFT (17U)
/*! double_buffer - Use double buffers
 *  0b0..Double buffers are disabled.
 *  0b1..Double buffers are enabled.
 */
#define ADSS_SDMA_CHANNEL_CFG_DOUBLE_BUFFER(x)   (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_CHANNEL_CFG_DOUBLE_BUFFER_SHIFT)) & ADSS_SDMA_CHANNEL_CFG_DOUBLE_BUFFER_MASK)

#define ADSS_SDMA_CHANNEL_CFG_MODE_MASK          (0x40000U)
#define ADSS_SDMA_CHANNEL_CFG_MODE_SHIFT         (18U)
/*! mode - Mode of the transfer
 *  0b0..Single shot. After all buffers have been transferred, the DMA channel is disabled automatically.
 *  0b1..Auto reload
 */
#define ADSS_SDMA_CHANNEL_CFG_MODE(x)            (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_CHANNEL_CFG_MODE_SHIFT)) & ADSS_SDMA_CHANNEL_CFG_MODE_MASK)

#define ADSS_SDMA_CHANNEL_CFG_MEMORY_MASK        (0x80000U)
#define ADSS_SDMA_CHANNEL_CFG_MEMORY_SHIFT       (19U)
/*! memory - Selects the memory space for the DMA buffers
 *  0b0..DMA buffers are in XMEM
 *  0b1..DMA buffers are in YMEM
 */
#define ADSS_SDMA_CHANNEL_CFG_MEMORY(x)          (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_CHANNEL_CFG_MEMORY_SHIFT)) & ADSS_SDMA_CHANNEL_CFG_MEMORY_MASK)

#define ADSS_SDMA_CHANNEL_CFG_BUFFER_ERROR_DIS_MASK (0x100000U)
#define ADSS_SDMA_CHANNEL_CFG_BUFFER_ERROR_DIS_SHIFT (20U)
/*! buffer_error_dis - Indicates whether the channel buffer contributes to the SDMA error generation
 *  0b0..Channel buffer error does contribute to SDMA error.
 *  0b1..Channel buffer error does not contribute to SDMA error.
 */
#define ADSS_SDMA_CHANNEL_CFG_BUFFER_ERROR_DIS(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_CHANNEL_CFG_BUFFER_ERROR_DIS_SHIFT)) & ADSS_SDMA_CHANNEL_CFG_BUFFER_ERROR_DIS_MASK)

#define ADSS_SDMA_CHANNEL_CFG_EOP_DIS_MASK       (0x200000U)
#define ADSS_SDMA_CHANNEL_CFG_EOP_DIS_SHIFT      (21U)
/*! eop_dis - Indicates whether the SDMA generates an EOP (Used in ASIC debugging)
 *  0b0..Channel EOP is generated.
 *  0b1..Channel EOP is not generated.
 */
#define ADSS_SDMA_CHANNEL_CFG_EOP_DIS(x)         (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_CHANNEL_CFG_EOP_DIS_SHIFT)) & ADSS_SDMA_CHANNEL_CFG_EOP_DIS_MASK)
/*! @} */

/* The count of ADSS_SDMA_CHANNEL_CFG */
#define ADSS_SDMA_CHANNEL_CFG_COUNT              (48U)

/*! @name START_ADDRESS - Address of buffer */
/*! @{ */

#define ADSS_SDMA_START_ADDRESS_START_ADDRESS_MASK (0xFFFFU)
#define ADSS_SDMA_START_ADDRESS_START_ADDRESS_SHIFT (0U)
/*! start_address - Address of buffer */
#define ADSS_SDMA_START_ADDRESS_START_ADDRESS(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_START_ADDRESS_START_ADDRESS_SHIFT)) & ADSS_SDMA_START_ADDRESS_START_ADDRESS_MASK)
/*! @} */

/* The count of ADSS_SDMA_START_ADDRESS */
#define ADSS_SDMA_START_ADDRESS_COUNT            (48U)

/*! @name DSP_BUFFER_ADDRESS - Address of buffer available to DSP */
/*! @{ */

#define ADSS_SDMA_DSP_BUFFER_ADDRESS_ACTIVE_DSP_ADDRESS_MASK (0xFFFFU)
#define ADSS_SDMA_DSP_BUFFER_ADDRESS_ACTIVE_DSP_ADDRESS_SHIFT (0U)
/*! active_dsp_address - Address of buffer available to DSP */
#define ADSS_SDMA_DSP_BUFFER_ADDRESS_ACTIVE_DSP_ADDRESS(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DSP_BUFFER_ADDRESS_ACTIVE_DSP_ADDRESS_SHIFT)) & ADSS_SDMA_DSP_BUFFER_ADDRESS_ACTIVE_DSP_ADDRESS_MASK)
/*! @} */

/* The count of ADSS_SDMA_DSP_BUFFER_ADDRESS */
#define ADSS_SDMA_DSP_BUFFER_ADDRESS_COUNT       (48U)

/*! @name DSP_BUFFER_WORDS - Number of words transferred in the current buffer */
/*! @{ */

#define ADSS_SDMA_DSP_BUFFER_WORDS_WORDS_TRANSFERRED_MASK (0xFFU)
#define ADSS_SDMA_DSP_BUFFER_WORDS_WORDS_TRANSFERRED_SHIFT (0U)
/*! words_transferred - Number of words transferred in the current buffer */
#define ADSS_SDMA_DSP_BUFFER_WORDS_WORDS_TRANSFERRED(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DSP_BUFFER_WORDS_WORDS_TRANSFERRED_SHIFT)) & ADSS_SDMA_DSP_BUFFER_WORDS_WORDS_TRANSFERRED_MASK)
/*! @} */

/* The count of ADSS_SDMA_DSP_BUFFER_WORDS */
#define ADSS_SDMA_DSP_BUFFER_WORDS_COUNT         (48U)

/*! @name CHANNEL_CTRL - Control of the buffers in a DMA channel */
/*! @{ */

#define ADSS_SDMA_CHANNEL_CTRL_RELEASE_BUFFER_MASK (0x1U)
#define ADSS_SDMA_CHANNEL_CTRL_RELEASE_BUFFER_SHIFT (0U)
/*! release_buffer - Writing a '1' to this field, releases a buffer assigned to the DSP cores. */
#define ADSS_SDMA_CHANNEL_CTRL_RELEASE_BUFFER(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_CHANNEL_CTRL_RELEASE_BUFFER_SHIFT)) & ADSS_SDMA_CHANNEL_CTRL_RELEASE_BUFFER_MASK)
/*! @} */

/* The count of ADSS_SDMA_CHANNEL_CTRL */
#define ADSS_SDMA_CHANNEL_CTRL_COUNT             (48U)

/*! @name CHANNEL_STATUS - Status of a DMA channel */
/*! @{ */

#define ADSS_SDMA_CHANNEL_STATUS_BUFFER_AVAILABLE_MASK (0x1U)
#define ADSS_SDMA_CHANNEL_STATUS_BUFFER_AVAILABLE_SHIFT (0U)
/*! buffer_available - A buffer is available to the DSPs */
#define ADSS_SDMA_CHANNEL_STATUS_BUFFER_AVAILABLE(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_CHANNEL_STATUS_BUFFER_AVAILABLE_SHIFT)) & ADSS_SDMA_CHANNEL_STATUS_BUFFER_AVAILABLE_MASK)

#define ADSS_SDMA_CHANNEL_STATUS_BUFFER_ERROR_MASK (0x2U)
#define ADSS_SDMA_CHANNEL_STATUS_BUFFER_ERROR_SHIFT (1U)
/*! buffer_error - A buffer error occurred */
#define ADSS_SDMA_CHANNEL_STATUS_BUFFER_ERROR(x) (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_CHANNEL_STATUS_BUFFER_ERROR_SHIFT)) & ADSS_SDMA_CHANNEL_STATUS_BUFFER_ERROR_MASK)
/*! @} */

/* The count of ADSS_SDMA_CHANNEL_STATUS */
#define ADSS_SDMA_CHANNEL_STATUS_COUNT           (48U)

/*! @name DMAWRITEACCESS - Write access to DMA configuration registers */
/*! @{ */

#define ADSS_SDMA_DMAWRITEACCESS_VALUE_MASK      (0xFFFFFFU)
#define ADSS_SDMA_DMAWRITEACCESS_VALUE_SHIFT     (0U)
/*! value - This register allows configuration of the SDMA
 *  0b000000000000000000000000..SDMA registers cannot be written
 *  0b000000000000000000000001..SDMA registers can be written
 *  0b100100111110010111000010..This value enables write access to the SDMA registers
 */
#define ADSS_SDMA_DMAWRITEACCESS_VALUE(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMAWRITEACCESS_VALUE_SHIFT)) & ADSS_SDMA_DMAWRITEACCESS_VALUE_MASK)
/*! @} */

/*! @name DMAPROTECTIONCOUNTER - SDMA protection counter value */
/*! @{ */

#define ADSS_SDMA_DMAPROTECTIONCOUNTER_VALUE_MASK (0x7U)
#define ADSS_SDMA_DMAPROTECTIONCOUNTER_VALUE_SHIFT (0U)
/*! value - SDMA protection counter value */
#define ADSS_SDMA_DMAPROTECTIONCOUNTER_VALUE(x)  (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMAPROTECTIONCOUNTER_VALUE_SHIFT)) & ADSS_SDMA_DMAPROTECTIONCOUNTER_VALUE_MASK)
/*! @} */

/*! @name DMAENABLESTATUS_0 - Streaming DMA channel 0 - 23 enable status */
/*! @{ */

#define ADSS_SDMA_DMAENABLESTATUS_0_VALUE_MASK   (0xFFFFFFU)
#define ADSS_SDMA_DMAENABLESTATUS_0_VALUE_SHIFT  (0U)
/*! value - Streaming DMA channel 0 - 23 enable status */
#define ADSS_SDMA_DMAENABLESTATUS_0_VALUE(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMAENABLESTATUS_0_VALUE_SHIFT)) & ADSS_SDMA_DMAENABLESTATUS_0_VALUE_MASK)
/*! @} */

/*! @name DMAENABLESTATUS_1 - Streaming DMA channel 24 - 47 enable status */
/*! @{ */

#define ADSS_SDMA_DMAENABLESTATUS_1_VALUE_MASK   (0xFFFFFFU)
#define ADSS_SDMA_DMAENABLESTATUS_1_VALUE_SHIFT  (0U)
/*! value - Streaming DMA channel 24 - 47 enable status */
#define ADSS_SDMA_DMAENABLESTATUS_1_VALUE(x)     (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMAENABLESTATUS_1_VALUE_SHIFT)) & ADSS_SDMA_DMAENABLESTATUS_1_VALUE_MASK)
/*! @} */

/*! @name DMAENABLESET_0 - Enable streaming DMA channel 0 - 23 */
/*! @{ */

#define ADSS_SDMA_DMAENABLESET_0_VALUE_MASK      (0xFFFFFFU)
#define ADSS_SDMA_DMAENABLESET_0_VALUE_SHIFT     (0U)
/*! value - Enable streaming DMA channel 0 - 23. Each bit set to '1' enables the matching SDMAchannel */
#define ADSS_SDMA_DMAENABLESET_0_VALUE(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMAENABLESET_0_VALUE_SHIFT)) & ADSS_SDMA_DMAENABLESET_0_VALUE_MASK)
/*! @} */

/*! @name DMAENABLESET_1 - Enable streaming DMA channel 24 - 47 */
/*! @{ */

#define ADSS_SDMA_DMAENABLESET_1_VALUE_MASK      (0xFFFFFFU)
#define ADSS_SDMA_DMAENABLESET_1_VALUE_SHIFT     (0U)
/*! value - Enable streaming DMA channel 24 - 47. Each bit set to '1' enables the matching SDMAchannel */
#define ADSS_SDMA_DMAENABLESET_1_VALUE(x)        (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMAENABLESET_1_VALUE_SHIFT)) & ADSS_SDMA_DMAENABLESET_1_VALUE_MASK)
/*! @} */

/*! @name DMAENABLECLEAR_0 - Disable streaming DMA channel 0 - 23 */
/*! @{ */

#define ADSS_SDMA_DMAENABLECLEAR_0_VALUE_MASK    (0xFFFFFFU)
#define ADSS_SDMA_DMAENABLECLEAR_0_VALUE_SHIFT   (0U)
/*! value - Disable streaming DMA channel 0 - 23. Each bit set to '1' disables the matching SDMAchannel */
#define ADSS_SDMA_DMAENABLECLEAR_0_VALUE(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMAENABLECLEAR_0_VALUE_SHIFT)) & ADSS_SDMA_DMAENABLECLEAR_0_VALUE_MASK)
/*! @} */

/*! @name DMAENABLECLEAR_1 - Disable streaming DMA channel 24 - 47 */
/*! @{ */

#define ADSS_SDMA_DMAENABLECLEAR_1_VALUE_MASK    (0xFFFFFFU)
#define ADSS_SDMA_DMAENABLECLEAR_1_VALUE_SHIFT   (0U)
/*! value - Disable streaming DMA channel 24 - 47. Each bit set to '1' disables the matching SDMAchannel */
#define ADSS_SDMA_DMAENABLECLEAR_1_VALUE(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMAENABLECLEAR_1_VALUE_SHIFT)) & ADSS_SDMA_DMAENABLECLEAR_1_VALUE_MASK)
/*! @} */

/*! @name DMARELEASEBUF_0 - Release DMA buffer */
/*! @{ */

#define ADSS_SDMA_DMARELEASEBUF_0_VALUE_MASK     (0xFFFFFFU)
#define ADSS_SDMA_DMARELEASEBUF_0_VALUE_SHIFT    (0U)
/*! value - Enabled DMA channel 0 - 23 and release DMA buffer. Each bit set to '1' enabled the
 *    matching DMA channel and releases the first buffer
 */
#define ADSS_SDMA_DMARELEASEBUF_0_VALUE(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMARELEASEBUF_0_VALUE_SHIFT)) & ADSS_SDMA_DMARELEASEBUF_0_VALUE_MASK)
/*! @} */

/*! @name DMARELEASEBUF_1 - Release DMA buffer */
/*! @{ */

#define ADSS_SDMA_DMARELEASEBUF_1_VALUE_MASK     (0xFFFFFFU)
#define ADSS_SDMA_DMARELEASEBUF_1_VALUE_SHIFT    (0U)
/*! value - Enabled DMA channel 24 - 47 and release DMA buffer. Each bit set to '1' enabled the
 *    matching DMA channel and releases the first buffer
 */
#define ADSS_SDMA_DMARELEASEBUF_1_VALUE(x)       (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMARELEASEBUF_1_VALUE_SHIFT)) & ADSS_SDMA_DMARELEASEBUF_1_VALUE_MASK)
/*! @} */

/*! @name DMAEVENT_0 - Event status register for DMA channel 0 to 7 */
/*! @{ */

#define ADSS_SDMA_DMAEVENT_0_STATUS_MASK         (0xFFU)
#define ADSS_SDMA_DMAEVENT_0_STATUS_SHIFT        (0U)
/*! status - Channel ready event for DMA channel 0 to 7. When the ready event of a channel comes, it
 *    is logged in this status register. Write '1' to a specific bit will clear the corresponding
 *    event status bit.
 */
#define ADSS_SDMA_DMAEVENT_0_STATUS(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMAEVENT_0_STATUS_SHIFT)) & ADSS_SDMA_DMAEVENT_0_STATUS_MASK)
/*! @} */

/*! @name DMAEVENT_1 - Event status register for DMA channel 8 to 15 */
/*! @{ */

#define ADSS_SDMA_DMAEVENT_1_STATUS_MASK         (0xFFU)
#define ADSS_SDMA_DMAEVENT_1_STATUS_SHIFT        (0U)
/*! status - Channel ready event for DMA channel 8 to 15. When the ready event of a channel comes,
 *    it is logged in this status register. Write '1' to a specific bit will clear the corresponding
 *    event status bit.
 */
#define ADSS_SDMA_DMAEVENT_1_STATUS(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMAEVENT_1_STATUS_SHIFT)) & ADSS_SDMA_DMAEVENT_1_STATUS_MASK)
/*! @} */

/*! @name DMAEVENT_2 - Event status register for DMA channel 16 to 23 */
/*! @{ */

#define ADSS_SDMA_DMAEVENT_2_STATUS_MASK         (0xFFU)
#define ADSS_SDMA_DMAEVENT_2_STATUS_SHIFT        (0U)
/*! status - Channel ready event for DMA channel 16 to 23. When the ready event of a channel comes,
 *    it is logged in this status register. Write '1' to a specific bit will clear the corresponding
 *    event status bit.
 */
#define ADSS_SDMA_DMAEVENT_2_STATUS(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMAEVENT_2_STATUS_SHIFT)) & ADSS_SDMA_DMAEVENT_2_STATUS_MASK)
/*! @} */

/*! @name DMAEVENT_3 - Event status register for DMA channel 24 to 31 */
/*! @{ */

#define ADSS_SDMA_DMAEVENT_3_STATUS_MASK         (0xFFU)
#define ADSS_SDMA_DMAEVENT_3_STATUS_SHIFT        (0U)
/*! status - Channel ready event for DMA channel 24 to 31. When the ready event of a channel comes,
 *    it is logged in this status register. Write '1' to a specific bit will clear the corresponding
 *    event status bit.
 */
#define ADSS_SDMA_DMAEVENT_3_STATUS(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMAEVENT_3_STATUS_SHIFT)) & ADSS_SDMA_DMAEVENT_3_STATUS_MASK)
/*! @} */

/*! @name DMAEVENT_4 - Event status register for DMA channel 32 to 39 */
/*! @{ */

#define ADSS_SDMA_DMAEVENT_4_STATUS_MASK         (0xFFU)
#define ADSS_SDMA_DMAEVENT_4_STATUS_SHIFT        (0U)
/*! status - Channel ready event for DMA channel 32 to 39. When the ready event of a channel comes,
 *    it is logged in this status register. Write '1' to a specific bit will clear the corresponding
 *    event status bit.
 */
#define ADSS_SDMA_DMAEVENT_4_STATUS(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMAEVENT_4_STATUS_SHIFT)) & ADSS_SDMA_DMAEVENT_4_STATUS_MASK)
/*! @} */

/*! @name DMAEVENT_5 - Event status register for DMA channel 40 to 47 */
/*! @{ */

#define ADSS_SDMA_DMAEVENT_5_STATUS_MASK         (0xFFU)
#define ADSS_SDMA_DMAEVENT_5_STATUS_SHIFT        (0U)
/*! status - Channel ready event for DMA channel 40 to 47. When the ready event of a channel comes,
 *    it is logged in this status register. Write '1' to a specific bit will clear the corresponding
 *    event status bit.
 */
#define ADSS_SDMA_DMAEVENT_5_STATUS(x)           (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMAEVENT_5_STATUS_SHIFT)) & ADSS_SDMA_DMAEVENT_5_STATUS_MASK)
/*! @} */

/*! @name DMAEVENTENABLE_0 - Enable of DMA events of DMA channel 0 to 23 */
/*! @{ */

#define ADSS_SDMA_DMAEVENTENABLE_0_VALUE_MASK    (0xFFFFFFU)
#define ADSS_SDMA_DMAEVENTENABLE_0_VALUE_SHIFT   (0U)
/*! value - Enable to pass the ready event of DMA channel 0 - 23 as output event of SDMA. Each bit
 *    set to '1' enables the ready event generated by the corresponding DMA channel.
 */
#define ADSS_SDMA_DMAEVENTENABLE_0_VALUE(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMAEVENTENABLE_0_VALUE_SHIFT)) & ADSS_SDMA_DMAEVENTENABLE_0_VALUE_MASK)
/*! @} */

/*! @name DMAEVENTENABLE_1 - Enable of DMA events of DMA channel 24 to 47 */
/*! @{ */

#define ADSS_SDMA_DMAEVENTENABLE_1_VALUE_MASK    (0xFFFFFFU)
#define ADSS_SDMA_DMAEVENTENABLE_1_VALUE_SHIFT   (0U)
/*! value - Enabled to pass the ready event of DMA channel 24 - 47 as output event of SDMA. Each bit
 *    set to '1' enabled the ready event generated by the corresponding DMA channel.
 */
#define ADSS_SDMA_DMAEVENTENABLE_1_VALUE(x)      (((uint32_t)(((uint32_t)(x)) << ADSS_SDMA_DMAEVENTENABLE_1_VALUE_SHIFT)) & ADSS_SDMA_DMAEVENTENABLE_1_VALUE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADSS_SDMA_Register_Masks */


/*!
 * @}
 */ /* end of group ADSS_SDMA_Peripheral_Access_Layer */


/*
** End of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic pop
  #else
    #pragma pop
  #endif
#elif defined(__GNUC__)
  /* leave anonymous unions enabled */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=default
#else
  #error Not supported compiler type
#endif

/*!
 * @}
 */ /* end of group Peripheral_access_layer */


#endif  /* PERI_ADSS_SDMA_H_ */

