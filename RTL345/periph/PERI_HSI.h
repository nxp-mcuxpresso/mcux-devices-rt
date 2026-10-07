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
**         CMSIS Peripheral Access Layer for HSI
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
 * @file PERI_HSI.h
 * @version 1.0
 * @date 2026-06-19
 * @brief CMSIS Peripheral Access Layer for HSI
 *
 * CMSIS Peripheral Access Layer for HSI
 */

#if !defined(PERI_HSI_H_)
#define PERI_HSI_H_                              /**< Symbol preventing repeated inclusion */

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
   -- HSI Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup HSI_Peripheral_Access_Layer HSI Peripheral Access Layer
 * @{
 */

/** HSI - Size of Registers Arrays */
#define HSI_QUEUECFG_COUNT                        6u
#define HSI_HSIEVENTCFG_COUNT                     8u
#define HSI_SLOTCFG_COUNT                         48u

/** HSI - Register Layout Typedef */
typedef struct {
  __IO uint32_t QUEUECFG[HSI_QUEUECFG_COUNT];      /**< Configuration of a priority queue, array offset: 0x0, array step: 0x4 */
  __IO uint32_t HSIEVENTCFG[HSI_HSIEVENTCFG_COUNT]; /**< Configuration of HSI event line, array offset: 0x18, array step: 0x4 */
  __IO uint32_t HSI_PROTECTION;                    /**< Protection of HSI configuration, offset: 0x38 */
  __IO uint32_t PACKET_INFO;                       /**< This register contains the EOP/SOP bits that are read or written during HSI direct access from the global IO bus, offset: 0x3C */
  __IO uint32_t SHADOWREGISTER;                    /**< Shadow HSI register to observe/inject data, offset: 0x40 */
  __IO uint32_t SHADOWREGISTERINFO;                /**< This register contains the EOP/SOP bits that are used with the shadow HSI register to observe/inject data, offset: 0x44 */
  __I  uint32_t HSI_PROTECTION_COUNTER;            /**< HSI protection counter value, offset: 0x48 */
  __IO uint32_t HSI_GLOBAL_IO_CFG;                 /**< Configuration of global I/O access to the HSI bus, offset: 0x4C */
       uint8_t RESERVED_0[176];
  __IO uint32_t SLOTCFG[HSI_SLOTCFG_COUNT];        /**< Configuration of an HSI slot, array offset: 0x100, array step: 0x4 */
       uint8_t RESERVED_1[64];
  __I  uint32_t NONE_READ;                         /**< Direct read access to none, offset: 0x200 */
  __I  uint32_t ZERO_READ;                         /**< Direct read access to zero, offset: 0x204 */
  __I  uint32_t DMIC_CH0_READ;                     /**< Direct read access to dmic_ch0, offset: 0x208 */
  __I  uint32_t DMIC_CH1_READ;                     /**< Direct read access to dmic_ch1, offset: 0x20C */
  __I  uint32_t DMIC_CH2_READ;                     /**< Direct read access to dmic_ch2, offset: 0x210 */
  __I  uint32_t DMIC_CH3_READ;                     /**< Direct read access to dmic_ch3, offset: 0x214 */
  __I  uint32_t DMIC_CH4_READ;                     /**< Direct read access to dmic_ch4, offset: 0x218 */
  __I  uint32_t DMIC_CH5_READ;                     /**< Direct read access to dmic_ch5, offset: 0x21C */
  __I  uint32_t DMIC_CH6_READ;                     /**< Direct read access to dmic_ch6, offset: 0x220 */
  __I  uint32_t DMIC_CH7_READ;                     /**< Direct read access to dmic_ch7, offset: 0x224 */
  __I  uint32_t DMIC_AMIC_CH0_READ;                /**< Direct read access to dmic_amic_ch0, offset: 0x228 */
  __I  uint32_t DMIC_AMIC_CH1_READ;                /**< Direct read access to dmic_amic_ch1, offset: 0x22C */
  __I  uint32_t DMIC_AMIC_CH2_READ;                /**< Direct read access to dmic_amic_ch2, offset: 0x230 */
  __I  uint32_t DATAPORT0_FIFO0_READ;              /**< Direct read access to dataport0_fifo0, offset: 0x234 */
  __I  uint32_t DATAPORT0_FIFO1_READ;              /**< Direct read access to dataport0_fifo1, offset: 0x238 */
  __I  uint32_t DATAPORT0_FIFO2_READ;              /**< Direct read access to dataport0_fifo2, offset: 0x23C */
  __I  uint32_t DATAPORT0_FIFO3_READ;              /**< Direct read access to dataport0_fifo3, offset: 0x240 */
  __I  uint32_t DATAPORT0_FIFO4_READ;              /**< Direct read access to dataport0_fifo4, offset: 0x244 */
  __I  uint32_t DATAPORT0_FIFO5_READ;              /**< Direct read access to dataport0_fifo5, offset: 0x248 */
  __I  uint32_t DATAPORT1_FIFO0_READ;              /**< Direct read access to dataport1_fifo0, offset: 0x24C */
  __I  uint32_t DATAPORT1_FIFO1_READ;              /**< Direct read access to dataport1_fifo1, offset: 0x250 */
  __I  uint32_t DATAPORT1_FIFO2_READ;              /**< Direct read access to dataport1_fifo2, offset: 0x254 */
  __I  uint32_t DATAPORT1_FIFO3_READ;              /**< Direct read access to dataport1_fifo3, offset: 0x258 */
  __I  uint32_t DATAPORT1_FIFO4_READ;              /**< Direct read access to dataport1_fifo4, offset: 0x25C */
  __I  uint32_t DATAPORT1_FIFO5_READ;              /**< Direct read access to dataport1_fifo5, offset: 0x260 */
  __I  uint32_t DATAPORT2_FIFO0_READ;              /**< Direct read access to dataport2_fifo0, offset: 0x264 */
  __I  uint32_t DATAPORT2_FIFO1_READ;              /**< Direct read access to dataport2_fifo1, offset: 0x268 */
  __I  uint32_t DATAPORT2_FIFO2_READ;              /**< Direct read access to dataport2_fifo2, offset: 0x26C */
  __I  uint32_t DATAPORT2_FIFO3_READ;              /**< Direct read access to dataport2_fifo3, offset: 0x270 */
  __I  uint32_t DATAPORT2_FIFO4_READ;              /**< Direct read access to dataport2_fifo4, offset: 0x274 */
  __I  uint32_t DATAPORT2_FIFO5_READ;              /**< Direct read access to dataport2_fifo5, offset: 0x278 */
  __I  uint32_t DATAPORT3_FIFO0_READ;              /**< Direct read access to dataport3_fifo0, offset: 0x27C */
  __I  uint32_t DATAPORT3_FIFO1_READ;              /**< Direct read access to dataport3_fifo1, offset: 0x280 */
  __I  uint32_t DATAPORT3_FIFO2_READ;              /**< Direct read access to dataport3_fifo2, offset: 0x284 */
  __I  uint32_t DATAPORT3_FIFO3_READ;              /**< Direct read access to dataport3_fifo3, offset: 0x288 */
  __I  uint32_t DATAPORT3_FIFO4_READ;              /**< Direct read access to dataport3_fifo4, offset: 0x28C */
  __I  uint32_t DATAPORT3_FIFO5_READ;              /**< Direct read access to dataport3_fifo5, offset: 0x290 */
  __I  uint32_t DMA_CHANNEL0_READ;                 /**< Direct read access to dma_channel0, offset: 0x294 */
  __I  uint32_t DMA_CHANNEL1_READ;                 /**< Direct read access to dma_channel1, offset: 0x298 */
  __I  uint32_t DMA_CHANNEL2_READ;                 /**< Direct read access to dma_channel2, offset: 0x29C */
  __I  uint32_t DMA_CHANNEL3_READ;                 /**< Direct read access to dma_channel3, offset: 0x2A0 */
  __I  uint32_t DMA_CHANNEL4_READ;                 /**< Direct read access to dma_channel4, offset: 0x2A4 */
  __I  uint32_t DMA_CHANNEL5_READ;                 /**< Direct read access to dma_channel5, offset: 0x2A8 */
  __I  uint32_t DMA_CHANNEL6_READ;                 /**< Direct read access to dma_channel6, offset: 0x2AC */
  __I  uint32_t DMA_CHANNEL7_READ;                 /**< Direct read access to dma_channel7, offset: 0x2B0 */
  __I  uint32_t DMA_CHANNEL8_READ;                 /**< Direct read access to dma_channel8, offset: 0x2B4 */
  __I  uint32_t DMA_CHANNEL9_READ;                 /**< Direct read access to dma_channel9, offset: 0x2B8 */
  __I  uint32_t DMA_CHANNEL10_READ;                /**< Direct read access to dma_channel10, offset: 0x2BC */
  __I  uint32_t DMA_CHANNEL11_READ;                /**< Direct read access to dma_channel11, offset: 0x2C0 */
  __I  uint32_t DMA_CHANNEL12_READ;                /**< Direct read access to dma_channel12, offset: 0x2C4 */
  __I  uint32_t DMA_CHANNEL13_READ;                /**< Direct read access to dma_channel13, offset: 0x2C8 */
  __I  uint32_t DMA_CHANNEL14_READ;                /**< Direct read access to dma_channel14, offset: 0x2CC */
  __I  uint32_t DMA_CHANNEL15_READ;                /**< Direct read access to dma_channel15, offset: 0x2D0 */
  __I  uint32_t DMA_CHANNEL16_READ;                /**< Direct read access to dma_channel16, offset: 0x2D4 */
  __I  uint32_t DMA_CHANNEL17_READ;                /**< Direct read access to dma_channel17, offset: 0x2D8 */
  __I  uint32_t DMA_CHANNEL18_READ;                /**< Direct read access to dma_channel18, offset: 0x2DC */
  __I  uint32_t DMA_CHANNEL19_READ;                /**< Direct read access to dma_channel19, offset: 0x2E0 */
  __I  uint32_t DMA_CHANNEL20_READ;                /**< Direct read access to dma_channel20, offset: 0x2E4 */
  __I  uint32_t DMA_CHANNEL21_READ;                /**< Direct read access to dma_channel21, offset: 0x2E8 */
  __I  uint32_t DMA_CHANNEL22_READ;                /**< Direct read access to dma_channel22, offset: 0x2EC */
  __I  uint32_t DMA_CHANNEL23_READ;                /**< Direct read access to dma_channel23, offset: 0x2F0 */
  __I  uint32_t DMA_CHANNEL24_READ;                /**< Direct read access to dma_channel24, offset: 0x2F4 */
  __I  uint32_t DMA_CHANNEL25_READ;                /**< Direct read access to dma_channel25, offset: 0x2F8 */
  __I  uint32_t DMA_CHANNEL26_READ;                /**< Direct read access to dma_channel26, offset: 0x2FC */
  __I  uint32_t DMA_CHANNEL27_READ;                /**< Direct read access to dma_channel27, offset: 0x300 */
  __I  uint32_t DMA_CHANNEL28_READ;                /**< Direct read access to dma_channel28, offset: 0x304 */
  __I  uint32_t DMA_CHANNEL29_READ;                /**< Direct read access to dma_channel29, offset: 0x308 */
  __I  uint32_t DMA_CHANNEL30_READ;                /**< Direct read access to dma_channel30, offset: 0x30C */
  __I  uint32_t DMA_CHANNEL31_READ;                /**< Direct read access to dma_channel31, offset: 0x310 */
  __I  uint32_t DMA_CHANNEL32_READ;                /**< Direct read access to dma_channel32, offset: 0x314 */
  __I  uint32_t DMA_CHANNEL33_READ;                /**< Direct read access to dma_channel33, offset: 0x318 */
  __I  uint32_t DMA_CHANNEL34_READ;                /**< Direct read access to dma_channel34, offset: 0x31C */
  __I  uint32_t DMA_CHANNEL35_READ;                /**< Direct read access to dma_channel35, offset: 0x320 */
  __I  uint32_t DMA_CHANNEL36_READ;                /**< Direct read access to dma_channel36, offset: 0x324 */
  __I  uint32_t DMA_CHANNEL37_READ;                /**< Direct read access to dma_channel37, offset: 0x328 */
  __I  uint32_t DMA_CHANNEL38_READ;                /**< Direct read access to dma_channel38, offset: 0x32C */
  __I  uint32_t DMA_CHANNEL39_READ;                /**< Direct read access to dma_channel39, offset: 0x330 */
  __I  uint32_t DMA_CHANNEL40_READ;                /**< Direct read access to dma_channel40, offset: 0x334 */
  __I  uint32_t DMA_CHANNEL41_READ;                /**< Direct read access to dma_channel41, offset: 0x338 */
  __I  uint32_t DMA_CHANNEL42_READ;                /**< Direct read access to dma_channel42, offset: 0x33C */
  __I  uint32_t DMA_CHANNEL43_READ;                /**< Direct read access to dma_channel43, offset: 0x340 */
  __I  uint32_t DMA_CHANNEL44_READ;                /**< Direct read access to dma_channel44, offset: 0x344 */
  __I  uint32_t DMA_CHANNEL45_READ;                /**< Direct read access to dma_channel45, offset: 0x348 */
  __I  uint32_t DMA_CHANNEL46_READ;                /**< Direct read access to dma_channel46, offset: 0x34C */
  __I  uint32_t DMA_CHANNEL47_READ;                /**< Direct read access to dma_channel47, offset: 0x350 */
  __I  uint32_t DSP_PORT0_READ;                    /**< Direct read access to dsp_port0, offset: 0x354 */
  __I  uint32_t DSP_PORT1_READ;                    /**< Direct read access to dsp_port1, offset: 0x358 */
  __I  uint32_t DSP_PORT2_READ;                    /**< Direct read access to dsp_port2, offset: 0x35C */
  __I  uint32_t DSP_PORT3_READ;                    /**< Direct read access to dsp_port3, offset: 0x360 */
  __I  uint32_t ANC_MON0_READ;                     /**< Direct read access to anc_mon0, offset: 0x364 */
  __I  uint32_t ANC_MON1_READ;                     /**< Direct read access to anc_mon1, offset: 0x368 */
  __I  uint32_t ANC_MON2_READ;                     /**< Direct read access to anc_mon2, offset: 0x36C */
  __I  uint32_t ANC_MON3_READ;                     /**< Direct read access to anc_mon3, offset: 0x370 */
  __I  uint32_t ANC_MON4_READ;                     /**< Direct read access to anc_mon4, offset: 0x374 */
  __I  uint32_t ANC_MON5_READ;                     /**< Direct read access to anc_mon5, offset: 0x378 */
       uint8_t RESERVED_2[4];
  __O  uint32_t NONE_WRITE;                        /**< Direct write access to none, offset: 0x380 */
  __O  uint32_t NULL_WRITE;                        /**< Direct write access to null, offset: 0x384 */
  __O  uint32_t DATAPORT0_FIFO0_WRITE;             /**< Direct write access to dataport0_fifo0, offset: 0x388 */
  __O  uint32_t DATAPORT0_FIFO1_WRITE;             /**< Direct write access to dataport0_fifo1, offset: 0x38C */
  __O  uint32_t DATAPORT0_FIFO2_WRITE;             /**< Direct write access to dataport0_fifo2, offset: 0x390 */
  __O  uint32_t DATAPORT0_FIFO3_WRITE;             /**< Direct write access to dataport0_fifo3, offset: 0x394 */
  __O  uint32_t DATAPORT0_FIFO4_WRITE;             /**< Direct write access to dataport0_fifo4, offset: 0x398 */
  __O  uint32_t DATAPORT0_FIFO5_WRITE;             /**< Direct write access to dataport0_fifo5, offset: 0x39C */
  __O  uint32_t DATAPORT1_FIFO0_WRITE;             /**< Direct write access to dataport1_fifo0, offset: 0x3A0 */
  __O  uint32_t DATAPORT1_FIFO1_WRITE;             /**< Direct write access to dataport1_fifo1, offset: 0x3A4 */
  __O  uint32_t DATAPORT1_FIFO2_WRITE;             /**< Direct write access to dataport1_fifo2, offset: 0x3A8 */
  __O  uint32_t DATAPORT1_FIFO3_WRITE;             /**< Direct write access to dataport1_fifo3, offset: 0x3AC */
  __O  uint32_t DATAPORT1_FIFO4_WRITE;             /**< Direct write access to dataport1_fifo4, offset: 0x3B0 */
  __O  uint32_t DATAPORT1_FIFO5_WRITE;             /**< Direct write access to dataport1_fifo5, offset: 0x3B4 */
  __O  uint32_t DATAPORT2_FIFO0_WRITE;             /**< Direct write access to dataport2_fifo0, offset: 0x3B8 */
  __O  uint32_t DATAPORT2_FIFO1_WRITE;             /**< Direct write access to dataport2_fifo1, offset: 0x3BC */
  __O  uint32_t DATAPORT2_FIFO2_WRITE;             /**< Direct write access to dataport2_fifo2, offset: 0x3C0 */
  __O  uint32_t DATAPORT2_FIFO3_WRITE;             /**< Direct write access to dataport2_fifo3, offset: 0x3C4 */
  __O  uint32_t DATAPORT2_FIFO4_WRITE;             /**< Direct write access to dataport2_fifo4, offset: 0x3C8 */
  __O  uint32_t DATAPORT2_FIFO5_WRITE;             /**< Direct write access to dataport2_fifo5, offset: 0x3CC */
  __O  uint32_t DATAPORT3_FIFO0_WRITE;             /**< Direct write access to dataport3_fifo0, offset: 0x3D0 */
  __O  uint32_t DATAPORT3_FIFO1_WRITE;             /**< Direct write access to dataport3_fifo1, offset: 0x3D4 */
  __O  uint32_t DATAPORT3_FIFO2_WRITE;             /**< Direct write access to dataport3_fifo2, offset: 0x3D8 */
  __O  uint32_t DATAPORT3_FIFO3_WRITE;             /**< Direct write access to dataport3_fifo3, offset: 0x3DC */
  __O  uint32_t DATAPORT3_FIFO4_WRITE;             /**< Direct write access to dataport3_fifo4, offset: 0x3E0 */
  __O  uint32_t DATAPORT3_FIFO5_WRITE;             /**< Direct write access to dataport3_fifo5, offset: 0x3E4 */
  __O  uint32_t ANC_DMA_IN0_WRITE;                 /**< Direct write access to anc_dma_in0, offset: 0x3E8 */
  __O  uint32_t ANC_DMA_IN1_WRITE;                 /**< Direct write access to anc_dma_in1, offset: 0x3EC */
  __O  uint32_t DSP_PORT0_WRITE;                   /**< Direct write access to dsp_port0, offset: 0x3F0 */
  __O  uint32_t DSP_PORT1_WRITE;                   /**< Direct write access to dsp_port1, offset: 0x3F4 */
  __O  uint32_t DSP_PORT2_WRITE;                   /**< Direct write access to dsp_port2, offset: 0x3F8 */
  __O  uint32_t DSP_PORT3_WRITE;                   /**< Direct write access to dsp_port3, offset: 0x3FC */
  __O  uint32_t DMA_CHANNEL0_WRITE;                /**< Direct write access to dma_channel0, offset: 0x400 */
  __O  uint32_t DMA_CHANNEL1_WRITE;                /**< Direct write access to dma_channel1, offset: 0x404 */
  __O  uint32_t DMA_CHANNEL2_WRITE;                /**< Direct write access to dma_channel2, offset: 0x408 */
  __O  uint32_t DMA_CHANNEL3_WRITE;                /**< Direct write access to dma_channel3, offset: 0x40C */
  __O  uint32_t DMA_CHANNEL4_WRITE;                /**< Direct write access to dma_channel4, offset: 0x410 */
  __O  uint32_t DMA_CHANNEL5_WRITE;                /**< Direct write access to dma_channel5, offset: 0x414 */
  __O  uint32_t DMA_CHANNEL6_WRITE;                /**< Direct write access to dma_channel6, offset: 0x418 */
  __O  uint32_t DMA_CHANNEL7_WRITE;                /**< Direct write access to dma_channel7, offset: 0x41C */
  __O  uint32_t DMA_CHANNEL8_WRITE;                /**< Direct write access to dma_channel8, offset: 0x420 */
  __O  uint32_t DMA_CHANNEL9_WRITE;                /**< Direct write access to dma_channel9, offset: 0x424 */
  __O  uint32_t DMA_CHANNEL10_WRITE;               /**< Direct write access to dma_channel10, offset: 0x428 */
  __O  uint32_t DMA_CHANNEL11_WRITE;               /**< Direct write access to dma_channel11, offset: 0x42C */
  __O  uint32_t DMA_CHANNEL12_WRITE;               /**< Direct write access to dma_channel12, offset: 0x430 */
  __O  uint32_t DMA_CHANNEL13_WRITE;               /**< Direct write access to dma_channel13, offset: 0x434 */
  __O  uint32_t DMA_CHANNEL14_WRITE;               /**< Direct write access to dma_channel14, offset: 0x438 */
  __O  uint32_t DMA_CHANNEL15_WRITE;               /**< Direct write access to dma_channel15, offset: 0x43C */
  __O  uint32_t DMA_CHANNEL16_WRITE;               /**< Direct write access to dma_channel16, offset: 0x440 */
  __O  uint32_t DMA_CHANNEL17_WRITE;               /**< Direct write access to dma_channel17, offset: 0x444 */
  __O  uint32_t DMA_CHANNEL18_WRITE;               /**< Direct write access to dma_channel18, offset: 0x448 */
  __O  uint32_t DMA_CHANNEL19_WRITE;               /**< Direct write access to dma_channel19, offset: 0x44C */
  __O  uint32_t DMA_CHANNEL20_WRITE;               /**< Direct write access to dma_channel20, offset: 0x450 */
  __O  uint32_t DMA_CHANNEL21_WRITE;               /**< Direct write access to dma_channel21, offset: 0x454 */
  __O  uint32_t DMA_CHANNEL22_WRITE;               /**< Direct write access to dma_channel22, offset: 0x458 */
  __O  uint32_t DMA_CHANNEL23_WRITE;               /**< Direct write access to dma_channel23, offset: 0x45C */
  __O  uint32_t DMA_CHANNEL24_WRITE;               /**< Direct write access to dma_channel24, offset: 0x460 */
  __O  uint32_t DMA_CHANNEL25_WRITE;               /**< Direct write access to dma_channel25, offset: 0x464 */
  __O  uint32_t DMA_CHANNEL26_WRITE;               /**< Direct write access to dma_channel26, offset: 0x468 */
  __O  uint32_t DMA_CHANNEL27_WRITE;               /**< Direct write access to dma_channel27, offset: 0x46C */
  __O  uint32_t DMA_CHANNEL28_WRITE;               /**< Direct write access to dma_channel28, offset: 0x470 */
  __O  uint32_t DMA_CHANNEL29_WRITE;               /**< Direct write access to dma_channel29, offset: 0x474 */
  __O  uint32_t DMA_CHANNEL30_WRITE;               /**< Direct write access to dma_channel30, offset: 0x478 */
  __O  uint32_t DMA_CHANNEL31_WRITE;               /**< Direct write access to dma_channel31, offset: 0x47C */
  __O  uint32_t DMA_CHANNEL32_WRITE;               /**< Direct write access to dma_channel32, offset: 0x480 */
  __O  uint32_t DMA_CHANNEL33_WRITE;               /**< Direct write access to dma_channel33, offset: 0x484 */
  __O  uint32_t DMA_CHANNEL34_WRITE;               /**< Direct write access to dma_channel34, offset: 0x488 */
  __O  uint32_t DMA_CHANNEL35_WRITE;               /**< Direct write access to dma_channel35, offset: 0x48C */
  __O  uint32_t DMA_CHANNEL36_WRITE;               /**< Direct write access to dma_channel36, offset: 0x490 */
  __O  uint32_t DMA_CHANNEL37_WRITE;               /**< Direct write access to dma_channel37, offset: 0x494 */
  __O  uint32_t DMA_CHANNEL38_WRITE;               /**< Direct write access to dma_channel38, offset: 0x498 */
  __O  uint32_t DMA_CHANNEL39_WRITE;               /**< Direct write access to dma_channel39, offset: 0x49C */
  __O  uint32_t DMA_CHANNEL40_WRITE;               /**< Direct write access to dma_channel40, offset: 0x4A0 */
  __O  uint32_t DMA_CHANNEL41_WRITE;               /**< Direct write access to dma_channel41, offset: 0x4A4 */
  __O  uint32_t DMA_CHANNEL42_WRITE;               /**< Direct write access to dma_channel42, offset: 0x4A8 */
  __O  uint32_t DMA_CHANNEL43_WRITE;               /**< Direct write access to dma_channel43, offset: 0x4AC */
  __O  uint32_t DMA_CHANNEL44_WRITE;               /**< Direct write access to dma_channel44, offset: 0x4B0 */
  __O  uint32_t DMA_CHANNEL45_WRITE;               /**< Direct write access to dma_channel45, offset: 0x4B4 */
  __O  uint32_t DMA_CHANNEL46_WRITE;               /**< Direct write access to dma_channel46, offset: 0x4B8 */
  __O  uint32_t DMA_CHANNEL47_WRITE;               /**< Direct write access to dma_channel47, offset: 0x4BC */
  __O  uint32_t BQE_CH0_WRITE;                     /**< Direct write access to bqe_ch0, offset: 0x4C0 */
  __O  uint32_t BQE_CH1_WRITE;                     /**< Direct write access to bqe_ch1, offset: 0x4C4 */
  __O  uint32_t BQE_CH2_WRITE;                     /**< Direct write access to bqe_ch2, offset: 0x4C8 */
  __O  uint32_t BQE_CH3_WRITE;                     /**< Direct write access to bqe_ch3, offset: 0x4CC */
  __O  uint32_t BQE_CH4_WRITE;                     /**< Direct write access to bqe_ch4, offset: 0x4D0 */
       uint8_t RESERVED_3[44];
  __I  uint32_t NONE_READ_RDY;                     /**< Direct read access to none ready, offset: 0x500 */
  __I  uint32_t ZERO_READ_RDY;                     /**< Direct read access to zero ready, offset: 0x504 */
  __I  uint32_t DMIC_CH0_READ_RDY;                 /**< Direct read access to dmic_ch0 ready, offset: 0x508 */
  __I  uint32_t DMIC_CH1_READ_RDY;                 /**< Direct read access to dmic_ch1 ready, offset: 0x50C */
  __I  uint32_t DMIC_CH2_READ_RDY;                 /**< Direct read access to dmic_ch2 ready, offset: 0x510 */
  __I  uint32_t DMIC_CH3_READ_RDY;                 /**< Direct read access to dmic_ch3 ready, offset: 0x514 */
  __I  uint32_t DMIC_CH4_READ_RDY;                 /**< Direct read access to dmic_ch4 ready, offset: 0x518 */
  __I  uint32_t DMIC_CH5_READ_RDY;                 /**< Direct read access to dmic_ch5 ready, offset: 0x51C */
  __I  uint32_t DMIC_CH6_READ_RDY;                 /**< Direct read access to dmic_ch6 ready, offset: 0x520 */
  __I  uint32_t DMIC_CH7_READ_RDY;                 /**< Direct read access to dmic_ch7 ready, offset: 0x524 */
  __I  uint32_t DMIC_AMIC_CH0_READ_RDY;            /**< Direct read access to dmic_amic_ch0 ready, offset: 0x528 */
  __I  uint32_t DMIC_AMIC_CH1_READ_RDY;            /**< Direct read access to dmic_amic_ch1 ready, offset: 0x52C */
  __I  uint32_t DMIC_AMIC_CH2_READ_RDY;            /**< Direct read access to dmic_amic_ch2 ready, offset: 0x530 */
  __I  uint32_t DATAPORT0_FIFO0_READ_RDY;          /**< Direct read access to dataport0_fifo0 ready, offset: 0x534 */
  __I  uint32_t DATAPORT0_FIFO1_READ_RDY;          /**< Direct read access to dataport0_fifo1 ready, offset: 0x538 */
  __I  uint32_t DATAPORT0_FIFO2_READ_RDY;          /**< Direct read access to dataport0_fifo2 ready, offset: 0x53C */
  __I  uint32_t DATAPORT0_FIFO3_READ_RDY;          /**< Direct read access to dataport0_fifo3 ready, offset: 0x540 */
  __I  uint32_t DATAPORT0_FIFO4_READ_RDY;          /**< Direct read access to dataport0_fifo4 ready, offset: 0x544 */
  __I  uint32_t DATAPORT0_FIFO5_READ_RDY;          /**< Direct read access to dataport0_fifo5 ready, offset: 0x548 */
  __I  uint32_t DATAPORT1_FIFO0_READ_RDY;          /**< Direct read access to dataport1_fifo0 ready, offset: 0x54C */
  __I  uint32_t DATAPORT1_FIFO1_READ_RDY;          /**< Direct read access to dataport1_fifo1 ready, offset: 0x550 */
  __I  uint32_t DATAPORT1_FIFO2_READ_RDY;          /**< Direct read access to dataport1_fifo2 ready, offset: 0x554 */
  __I  uint32_t DATAPORT1_FIFO3_READ_RDY;          /**< Direct read access to dataport1_fifo3 ready, offset: 0x558 */
  __I  uint32_t DATAPORT1_FIFO4_READ_RDY;          /**< Direct read access to dataport1_fifo4 ready, offset: 0x55C */
  __I  uint32_t DATAPORT1_FIFO5_READ_RDY;          /**< Direct read access to dataport1_fifo5 ready, offset: 0x560 */
  __I  uint32_t DATAPORT2_FIFO0_READ_RDY;          /**< Direct read access to dataport2_fifo0 ready, offset: 0x564 */
  __I  uint32_t DATAPORT2_FIFO1_READ_RDY;          /**< Direct read access to dataport2_fifo1 ready, offset: 0x568 */
  __I  uint32_t DATAPORT2_FIFO2_READ_RDY;          /**< Direct read access to dataport2_fifo2 ready, offset: 0x56C */
  __I  uint32_t DATAPORT2_FIFO3_READ_RDY;          /**< Direct read access to dataport2_fifo3 ready, offset: 0x570 */
  __I  uint32_t DATAPORT2_FIFO4_READ_RDY;          /**< Direct read access to dataport2_fifo4 ready, offset: 0x574 */
  __I  uint32_t DATAPORT2_FIFO5_READ_RDY;          /**< Direct read access to dataport2_fifo5 ready, offset: 0x578 */
  __I  uint32_t DATAPORT3_FIFO0_READ_RDY;          /**< Direct read access to dataport3_fifo0 ready, offset: 0x57C */
  __I  uint32_t DATAPORT3_FIFO1_READ_RDY;          /**< Direct read access to dataport3_fifo1 ready, offset: 0x580 */
  __I  uint32_t DATAPORT3_FIFO2_READ_RDY;          /**< Direct read access to dataport3_fifo2 ready, offset: 0x584 */
  __I  uint32_t DATAPORT3_FIFO3_READ_RDY;          /**< Direct read access to dataport3_fifo3 ready, offset: 0x588 */
  __I  uint32_t DATAPORT3_FIFO4_READ_RDY;          /**< Direct read access to dataport3_fifo4 ready, offset: 0x58C */
  __I  uint32_t DATAPORT3_FIFO5_READ_RDY;          /**< Direct read access to dataport3_fifo5 ready, offset: 0x590 */
  __I  uint32_t DMA_CHANNEL0_READ_RDY;             /**< Direct read access to dma_channel0 ready, offset: 0x594 */
  __I  uint32_t DMA_CHANNEL1_READ_RDY;             /**< Direct read access to dma_channel1 ready, offset: 0x598 */
  __I  uint32_t DMA_CHANNEL2_READ_RDY;             /**< Direct read access to dma_channel2 ready, offset: 0x59C */
  __I  uint32_t DMA_CHANNEL3_READ_RDY;             /**< Direct read access to dma_channel3 ready, offset: 0x5A0 */
  __I  uint32_t DMA_CHANNEL4_READ_RDY;             /**< Direct read access to dma_channel4 ready, offset: 0x5A4 */
  __I  uint32_t DMA_CHANNEL5_READ_RDY;             /**< Direct read access to dma_channel5 ready, offset: 0x5A8 */
  __I  uint32_t DMA_CHANNEL6_READ_RDY;             /**< Direct read access to dma_channel6 ready, offset: 0x5AC */
  __I  uint32_t DMA_CHANNEL7_READ_RDY;             /**< Direct read access to dma_channel7 ready, offset: 0x5B0 */
  __I  uint32_t DMA_CHANNEL8_READ_RDY;             /**< Direct read access to dma_channel8 ready, offset: 0x5B4 */
  __I  uint32_t DMA_CHANNEL9_READ_RDY;             /**< Direct read access to dma_channel9 ready, offset: 0x5B8 */
  __I  uint32_t DMA_CHANNEL10_READ_RDY;            /**< Direct read access to dma_channel10 ready, offset: 0x5BC */
  __I  uint32_t DMA_CHANNEL11_READ_RDY;            /**< Direct read access to dma_channel11 ready, offset: 0x5C0 */
  __I  uint32_t DMA_CHANNEL12_READ_RDY;            /**< Direct read access to dma_channel12 ready, offset: 0x5C4 */
  __I  uint32_t DMA_CHANNEL13_READ_RDY;            /**< Direct read access to dma_channel13 ready, offset: 0x5C8 */
  __I  uint32_t DMA_CHANNEL14_READ_RDY;            /**< Direct read access to dma_channel14 ready, offset: 0x5CC */
  __I  uint32_t DMA_CHANNEL15_READ_RDY;            /**< Direct read access to dma_channel15 ready, offset: 0x5D0 */
  __I  uint32_t DMA_CHANNEL16_READ_RDY;            /**< Direct read access to dma_channel16 ready, offset: 0x5D4 */
  __I  uint32_t DMA_CHANNEL17_READ_RDY;            /**< Direct read access to dma_channel17 ready, offset: 0x5D8 */
  __I  uint32_t DMA_CHANNEL18_READ_RDY;            /**< Direct read access to dma_channel18 ready, offset: 0x5DC */
  __I  uint32_t DMA_CHANNEL19_READ_RDY;            /**< Direct read access to dma_channel19 ready, offset: 0x5E0 */
  __I  uint32_t DMA_CHANNEL20_READ_RDY;            /**< Direct read access to dma_channel20 ready, offset: 0x5E4 */
  __I  uint32_t DMA_CHANNEL21_READ_RDY;            /**< Direct read access to dma_channel21 ready, offset: 0x5E8 */
  __I  uint32_t DMA_CHANNEL22_READ_RDY;            /**< Direct read access to dma_channel22 ready, offset: 0x5EC */
  __I  uint32_t DMA_CHANNEL23_READ_RDY;            /**< Direct read access to dma_channel23 ready, offset: 0x5F0 */
  __I  uint32_t DMA_CHANNEL24_READ_RDY;            /**< Direct read access to dma_channel24 ready, offset: 0x5F4 */
  __I  uint32_t DMA_CHANNEL25_READ_RDY;            /**< Direct read access to dma_channel25 ready, offset: 0x5F8 */
  __I  uint32_t DMA_CHANNEL26_READ_RDY;            /**< Direct read access to dma_channel26 ready, offset: 0x5FC */
  __I  uint32_t DMA_CHANNEL27_READ_RDY;            /**< Direct read access to dma_channel27 ready, offset: 0x600 */
  __I  uint32_t DMA_CHANNEL28_READ_RDY;            /**< Direct read access to dma_channel28 ready, offset: 0x604 */
  __I  uint32_t DMA_CHANNEL29_READ_RDY;            /**< Direct read access to dma_channel29 ready, offset: 0x608 */
  __I  uint32_t DMA_CHANNEL30_READ_RDY;            /**< Direct read access to dma_channel30 ready, offset: 0x60C */
  __I  uint32_t DMA_CHANNEL31_READ_RDY;            /**< Direct read access to dma_channel31 ready, offset: 0x610 */
  __I  uint32_t DMA_CHANNEL32_READ_RDY;            /**< Direct read access to dma_channel32 ready, offset: 0x614 */
  __I  uint32_t DMA_CHANNEL33_READ_RDY;            /**< Direct read access to dma_channel33 ready, offset: 0x618 */
  __I  uint32_t DMA_CHANNEL34_READ_RDY;            /**< Direct read access to dma_channel34 ready, offset: 0x61C */
  __I  uint32_t DMA_CHANNEL35_READ_RDY;            /**< Direct read access to dma_channel35 ready, offset: 0x620 */
  __I  uint32_t DMA_CHANNEL36_READ_RDY;            /**< Direct read access to dma_channel36 ready, offset: 0x624 */
  __I  uint32_t DMA_CHANNEL37_READ_RDY;            /**< Direct read access to dma_channel37 ready, offset: 0x628 */
  __I  uint32_t DMA_CHANNEL38_READ_RDY;            /**< Direct read access to dma_channel38 ready, offset: 0x62C */
  __I  uint32_t DMA_CHANNEL39_READ_RDY;            /**< Direct read access to dma_channel39 ready, offset: 0x630 */
  __I  uint32_t DMA_CHANNEL40_READ_RDY;            /**< Direct read access to dma_channel40 ready, offset: 0x634 */
  __I  uint32_t DMA_CHANNEL41_READ_RDY;            /**< Direct read access to dma_channel41 ready, offset: 0x638 */
  __I  uint32_t DMA_CHANNEL42_READ_RDY;            /**< Direct read access to dma_channel42 ready, offset: 0x63C */
  __I  uint32_t DMA_CHANNEL43_READ_RDY;            /**< Direct read access to dma_channel43 ready, offset: 0x640 */
  __I  uint32_t DMA_CHANNEL44_READ_RDY;            /**< Direct read access to dma_channel44 ready, offset: 0x644 */
  __I  uint32_t DMA_CHANNEL45_READ_RDY;            /**< Direct read access to dma_channel45 ready, offset: 0x648 */
  __I  uint32_t DMA_CHANNEL46_READ_RDY;            /**< Direct read access to dma_channel46 ready, offset: 0x64C */
  __I  uint32_t DMA_CHANNEL47_READ_RDY;            /**< Direct read access to dma_channel47 ready, offset: 0x650 */
  __I  uint32_t DSP_PORT0_READ_RDY;                /**< Direct read access to dsp_port0 ready, offset: 0x654 */
  __I  uint32_t DSP_PORT1_READ_RDY;                /**< Direct read access to dsp_port1 ready, offset: 0x658 */
  __I  uint32_t DSP_PORT2_READ_RDY;                /**< Direct read access to dsp_port2 ready, offset: 0x65C */
  __I  uint32_t DSP_PORT3_READ_RDY;                /**< Direct read access to dsp_port3 ready, offset: 0x660 */
  __I  uint32_t ANC_MON0_READ_RDY;                 /**< Direct read access to anc_mon0 ready, offset: 0x664 */
  __I  uint32_t ANC_MON1_READ_RDY;                 /**< Direct read access to anc_mon1 ready, offset: 0x668 */
  __I  uint32_t ANC_MON2_READ_RDY;                 /**< Direct read access to anc_mon2 ready, offset: 0x66C */
  __I  uint32_t ANC_MON3_READ_RDY;                 /**< Direct read access to anc_mon3 ready, offset: 0x670 */
  __I  uint32_t ANC_MON4_READ_RDY;                 /**< Direct read access to anc_mon4 ready, offset: 0x674 */
  __I  uint32_t ANC_MON5_READ_RDY;                 /**< Direct read access to anc_mon5 ready, offset: 0x678 */
       uint8_t RESERVED_4[4];
  __I  uint32_t NONE_WRITE_RDY;                    /**< Direct write access to none_ready, offset: 0x680 */
  __I  uint32_t NULL_WRITE_RDY;                    /**< Direct write access to null_ready, offset: 0x684 */
  __I  uint32_t DATAPORT0_FIFO0_WRITE_RDY;         /**< Direct write access to dataport0_fifo0_ready, offset: 0x688 */
  __I  uint32_t DATAPORT0_FIFO1_WRITE_RDY;         /**< Direct write access to dataport0_fifo1_ready, offset: 0x68C */
  __I  uint32_t DATAPORT0_FIFO2_WRITE_RDY;         /**< Direct write access to dataport0_fifo2_ready, offset: 0x690 */
  __I  uint32_t DATAPORT0_FIFO3_WRITE_RDY;         /**< Direct write access to dataport0_fifo3_ready, offset: 0x694 */
  __I  uint32_t DATAPORT0_FIFO4_WRITE_RDY;         /**< Direct write access to dataport0_fifo4_ready, offset: 0x698 */
  __I  uint32_t DATAPORT0_FIFO5_WRITE_RDY;         /**< Direct write access to dataport0_fifo5_ready, offset: 0x69C */
  __I  uint32_t DATAPORT1_FIFO0_WRITE_RDY;         /**< Direct write access to dataport1_fifo0_ready, offset: 0x6A0 */
  __I  uint32_t DATAPORT1_FIFO1_WRITE_RDY;         /**< Direct write access to dataport1_fifo1_ready, offset: 0x6A4 */
  __I  uint32_t DATAPORT1_FIFO2_WRITE_RDY;         /**< Direct write access to dataport1_fifo2_ready, offset: 0x6A8 */
  __I  uint32_t DATAPORT1_FIFO3_WRITE_RDY;         /**< Direct write access to dataport1_fifo3_ready, offset: 0x6AC */
  __I  uint32_t DATAPORT1_FIFO4_WRITE_RDY;         /**< Direct write access to dataport1_fifo4_ready, offset: 0x6B0 */
  __I  uint32_t DATAPORT1_FIFO5_WRITE_RDY;         /**< Direct write access to dataport1_fifo5_ready, offset: 0x6B4 */
  __I  uint32_t DATAPORT2_FIFO0_WRITE_RDY;         /**< Direct write access to dataport2_fifo0_ready, offset: 0x6B8 */
  __I  uint32_t DATAPORT2_FIFO1_WRITE_RDY;         /**< Direct write access to dataport2_fifo1_ready, offset: 0x6BC */
  __I  uint32_t DATAPORT2_FIFO2_WRITE_RDY;         /**< Direct write access to dataport2_fifo2_ready, offset: 0x6C0 */
  __I  uint32_t DATAPORT2_FIFO3_WRITE_RDY;         /**< Direct write access to dataport2_fifo3_ready, offset: 0x6C4 */
  __I  uint32_t DATAPORT2_FIFO4_WRITE_RDY;         /**< Direct write access to dataport2_fifo4_ready, offset: 0x6C8 */
  __I  uint32_t DATAPORT2_FIFO5_WRITE_RDY;         /**< Direct write access to dataport2_fifo5_ready, offset: 0x6CC */
  __I  uint32_t DATAPORT3_FIFO0_WRITE_RDY;         /**< Direct write access to dataport3_fifo0_ready, offset: 0x6D0 */
  __I  uint32_t DATAPORT3_FIFO1_WRITE_RDY;         /**< Direct write access to dataport3_fifo1_ready, offset: 0x6D4 */
  __I  uint32_t DATAPORT3_FIFO2_WRITE_RDY;         /**< Direct write access to dataport3_fifo2_ready, offset: 0x6D8 */
  __I  uint32_t DATAPORT3_FIFO3_WRITE_RDY;         /**< Direct write access to dataport3_fifo3_ready, offset: 0x6DC */
  __I  uint32_t DATAPORT3_FIFO4_WRITE_RDY;         /**< Direct write access to dataport3_fifo4_ready, offset: 0x6E0 */
  __I  uint32_t DATAPORT3_FIFO5_WRITE_RDY;         /**< Direct write access to dataport3_fifo5_ready, offset: 0x6E4 */
  __I  uint32_t ANC_DMA_IN0_WRITE_RDY;             /**< Direct write access to anc_dma_in0_ready, offset: 0x6E8 */
  __I  uint32_t ANC_DMA_IN1_WRITE_RDY;             /**< Direct write access to anc_dma_in1_ready, offset: 0x6EC */
  __I  uint32_t DSP_PORT0_WRITE_RDY;               /**< Direct write access to dsp_port0_ready, offset: 0x6F0 */
  __I  uint32_t DSP_PORT1_WRITE_RDY;               /**< Direct write access to dsp_port1_ready, offset: 0x6F4 */
  __I  uint32_t DSP_PORT2_WRITE_RDY;               /**< Direct write access to dsp_port2_ready, offset: 0x6F8 */
  __I  uint32_t DSP_PORT3_WRITE_RDY;               /**< Direct write access to dsp_port3_ready, offset: 0x6FC */
  __I  uint32_t DMA_CHANNEL0_WRITE_RDY;            /**< Direct write access to dma_channel0_ready, offset: 0x700 */
  __I  uint32_t DMA_CHANNEL1_WRITE_RDY;            /**< Direct write access to dma_channel1_ready, offset: 0x704 */
  __I  uint32_t DMA_CHANNEL2_WRITE_RDY;            /**< Direct write access to dma_channel2_ready, offset: 0x708 */
  __I  uint32_t DMA_CHANNEL3_WRITE_RDY;            /**< Direct write access to dma_channel3_ready, offset: 0x70C */
  __I  uint32_t DMA_CHANNEL4_WRITE_RDY;            /**< Direct write access to dma_channel4_ready, offset: 0x710 */
  __I  uint32_t DMA_CHANNEL5_WRITE_RDY;            /**< Direct write access to dma_channel5_ready, offset: 0x714 */
  __I  uint32_t DMA_CHANNEL6_WRITE_RDY;            /**< Direct write access to dma_channel6_ready, offset: 0x718 */
  __I  uint32_t DMA_CHANNEL7_WRITE_RDY;            /**< Direct write access to dma_channel7_ready, offset: 0x71C */
  __I  uint32_t DMA_CHANNEL8_WRITE_RDY;            /**< Direct write access to dma_channel8_ready, offset: 0x720 */
  __I  uint32_t DMA_CHANNEL9_WRITE_RDY;            /**< Direct write access to dma_channel9_ready, offset: 0x724 */
  __I  uint32_t DMA_CHANNEL10_WRITE_RDY;           /**< Direct write access to dma_channel10_ready, offset: 0x728 */
  __I  uint32_t DMA_CHANNEL11_WRITE_RDY;           /**< Direct write access to dma_channel11_ready, offset: 0x72C */
  __I  uint32_t DMA_CHANNEL12_WRITE_RDY;           /**< Direct write access to dma_channel12_ready, offset: 0x730 */
  __I  uint32_t DMA_CHANNEL13_WRITE_RDY;           /**< Direct write access to dma_channel13_ready, offset: 0x734 */
  __I  uint32_t DMA_CHANNEL14_WRITE_RDY;           /**< Direct write access to dma_channel14_ready, offset: 0x738 */
  __I  uint32_t DMA_CHANNEL15_WRITE_RDY;           /**< Direct write access to dma_channel15_ready, offset: 0x73C */
  __I  uint32_t DMA_CHANNEL16_WRITE_RDY;           /**< Direct write access to dma_channel16_ready, offset: 0x740 */
  __I  uint32_t DMA_CHANNEL17_WRITE_RDY;           /**< Direct write access to dma_channel17_ready, offset: 0x744 */
  __I  uint32_t DMA_CHANNEL18_WRITE_RDY;           /**< Direct write access to dma_channel18_ready, offset: 0x748 */
  __I  uint32_t DMA_CHANNEL19_WRITE_RDY;           /**< Direct write access to dma_channel19_ready, offset: 0x74C */
  __I  uint32_t DMA_CHANNEL20_WRITE_RDY;           /**< Direct write access to dma_channel20_ready, offset: 0x750 */
  __I  uint32_t DMA_CHANNEL21_WRITE_RDY;           /**< Direct write access to dma_channel21_ready, offset: 0x754 */
  __I  uint32_t DMA_CHANNEL22_WRITE_RDY;           /**< Direct write access to dma_channel22_ready, offset: 0x758 */
  __I  uint32_t DMA_CHANNEL23_WRITE_RDY;           /**< Direct write access to dma_channel23_ready, offset: 0x75C */
  __I  uint32_t DMA_CHANNEL24_WRITE_RDY;           /**< Direct write access to dma_channel24_ready, offset: 0x760 */
  __I  uint32_t DMA_CHANNEL25_WRITE_RDY;           /**< Direct write access to dma_channel25_ready, offset: 0x764 */
  __I  uint32_t DMA_CHANNEL26_WRITE_RDY;           /**< Direct write access to dma_channel26_ready, offset: 0x768 */
  __I  uint32_t DMA_CHANNEL27_WRITE_RDY;           /**< Direct write access to dma_channel27_ready, offset: 0x76C */
  __I  uint32_t DMA_CHANNEL28_WRITE_RDY;           /**< Direct write access to dma_channel28_ready, offset: 0x770 */
  __I  uint32_t DMA_CHANNEL29_WRITE_RDY;           /**< Direct write access to dma_channel29_ready, offset: 0x774 */
  __I  uint32_t DMA_CHANNEL30_WRITE_RDY;           /**< Direct write access to dma_channel30_ready, offset: 0x778 */
  __I  uint32_t DMA_CHANNEL31_WRITE_RDY;           /**< Direct write access to dma_channel31_ready, offset: 0x77C */
  __I  uint32_t DMA_CHANNEL32_WRITE_RDY;           /**< Direct write access to dma_channel32_ready, offset: 0x780 */
  __I  uint32_t DMA_CHANNEL33_WRITE_RDY;           /**< Direct write access to dma_channel33_ready, offset: 0x784 */
  __I  uint32_t DMA_CHANNEL34_WRITE_RDY;           /**< Direct write access to dma_channel34_ready, offset: 0x788 */
  __I  uint32_t DMA_CHANNEL35_WRITE_RDY;           /**< Direct write access to dma_channel35_ready, offset: 0x78C */
  __I  uint32_t DMA_CHANNEL36_WRITE_RDY;           /**< Direct write access to dma_channel36_ready, offset: 0x790 */
  __I  uint32_t DMA_CHANNEL37_WRITE_RDY;           /**< Direct write access to dma_channel37_ready, offset: 0x794 */
  __I  uint32_t DMA_CHANNEL38_WRITE_RDY;           /**< Direct write access to dma_channel38_ready, offset: 0x798 */
  __I  uint32_t DMA_CHANNEL39_WRITE_RDY;           /**< Direct write access to dma_channel39_ready, offset: 0x79C */
  __I  uint32_t DMA_CHANNEL40_WRITE_RDY;           /**< Direct write access to dma_channel40_ready, offset: 0x7A0 */
  __I  uint32_t DMA_CHANNEL41_WRITE_RDY;           /**< Direct write access to dma_channel41_ready, offset: 0x7A4 */
  __I  uint32_t DMA_CHANNEL42_WRITE_RDY;           /**< Direct write access to dma_channel42_ready, offset: 0x7A8 */
  __I  uint32_t DMA_CHANNEL43_WRITE_RDY;           /**< Direct write access to dma_channel43_ready, offset: 0x7AC */
  __I  uint32_t DMA_CHANNEL44_WRITE_RDY;           /**< Direct write access to dma_channel44_ready, offset: 0x7B0 */
  __I  uint32_t DMA_CHANNEL45_WRITE_RDY;           /**< Direct write access to dma_channel45_ready, offset: 0x7B4 */
  __I  uint32_t DMA_CHANNEL46_WRITE_RDY;           /**< Direct write access to dma_channel46_ready, offset: 0x7B8 */
  __I  uint32_t DMA_CHANNEL47_WRITE_RDY;           /**< Direct write access to dma_channel47_ready, offset: 0x7BC */
  __I  uint32_t BQE_CH0_WRITE_RDY;                 /**< Direct write access to bqe_ch0_ready, offset: 0x7C0 */
  __I  uint32_t BQE_CH1_WRITE_RDY;                 /**< Direct write access to bqe_ch1_ready, offset: 0x7C4 */
  __I  uint32_t BQE_CH2_WRITE_RDY;                 /**< Direct write access to bqe_ch2_ready, offset: 0x7C8 */
  __I  uint32_t BQE_CH3_WRITE_RDY;                 /**< Direct write access to bqe_ch3_ready, offset: 0x7CC */
  __I  uint32_t BQE_CH4_WRITE_RDY;                 /**< Direct write access to bqe_ch4_ready, offset: 0x7D0 */
} HSI_Type;

/* ----------------------------------------------------------------------------
   -- HSI Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup HSI_Register_Masks HSI Register Masks
 * @{
 */

/*! @name QUEUECFG - Configuration of a priority queue */
/*! @{ */

#define HSI_QUEUECFG_NUM_ENTRIES_MASK            (0x3FU)
#define HSI_QUEUECFG_NUM_ENTRIES_SHIFT           (0U)
/*! num_entries - Number of HSI slots in the priority queue */
#define HSI_QUEUECFG_NUM_ENTRIES(x)              (((uint32_t)(((uint32_t)(x)) << HSI_QUEUECFG_NUM_ENTRIES_SHIFT)) & HSI_QUEUECFG_NUM_ENTRIES_MASK)

#define HSI_QUEUECFG_EVENT_MASK                  (0x1FC0U)
#define HSI_QUEUECFG_EVENT_SHIFT                 (6U)
/*! event - Event to trigger the priority queue
 *  0b0000000..Disable fix to 0
 *  0b0000001..An error has been detected in the error_status register
 *  0b0000010..16Fs1 strobe from SyncSource
 *  0b0000011..8Fs1 strobe from SyncSource
 *  0b0000100..4Fs1 strobe from SyncSource
 *  0b0000101..Fs1 strobe from SyncSource
 *  0b0000110..Frame strobe from SyncSource
 *  0b0000111..Shared: Sync0 Programmable strobe 0 from SyncSource | UART released 0
 *  0b0001000..Shared: Sync1 Programmable strobe 1 from SyncSource | UART released 1
 *  0b0001001..Sync2 Programmable strobe 2 from SyncSource
 *  0b0001010..Sync3 Programmable strobe 3 from SyncSource
 *  0b0001011..Sync4 Programmable strobe 4 from SyncSource
 *  0b0001100..Sync5 Programmable strobe 5 from SyncSource | Timer 0 condition met'
 *  0b0001101..Sync6 Programmable strobe 6 from SyncSource | Timer 1 condition met'
 *  0b0001110..Sync7 Programmable strobe 7 from SyncSource | Timer 2 condition met'
 *  0b0001111..Timer 3 condition met
 *  0b0010000..Timer 4 condition met
 *  0b0010001..Timer 5 condition met
 *  0b0010010..Shared: Timer 6 condition met | Streaming DMA channel ready group 0
 *  0b0010011..Shared: Timer 7 condition met | Streaming DMA channel ready group 1
 *  0b0010100..Streaming DMA channel ready group 2
 *  0b0010101..Streaming DMA channel ready group 3
 *  0b0010110..Streaming DMA channel ready group 4
 *  0b0010111..Streaming DMA channel ready group 5
 *  0b0011000..Dataport Timer 0 condition met
 *  0b0011001..Dataport Timer 1 condition met
 *  0b0011010..Dataport Timer 2 condition met
 *  0b0011011..Dataport Timer 3 condition met
 *  0b0011100..Dataport Timer 4 condition met
 *  0b0011101..Dataport Timer 5 condition met
 *  0b0011110..Shared: Dataport Timer 6 condition met | The trace buffer has been filled with data
 *  0b0011111..Shared: Dataport Timer 7 condition met | HSI shadow register is updated/can be updated
 *  0b0100000..Frame from dataport 0
 *  0b0100001..Event from dataport 0
 *  0b0100010..Frame from dataport 1
 *  0b0100011..Event from dataport 1
 *  0b0100100..Shared: Frame from dataport 2 | Selected ready 0 signal from the HSI bus
 *  0b0100101..Shared: Event from dataport 2 | Selected ready 1 signal from the HSI bus
 *  0b0100110..Shared: Frame from dataport 3 | Selected ready 2 signal from the HSI bus
 *  0b0100111..Shared: Event from dataport 3 | Selected ready 3 signal from the HSI bus
 *  0b0101000..Shared: Selected ready 4 signal from the HSI bus | Global HSI port 0 is ready
 *  0b0101001..Shared: Selected ready 5 signal from the HSI bus | Global HSI port 1 is ready
 *  0b0101010..Shared: Selected ready 6 signal from the HSI bus | Global HSI port 2 is ready
 *  0b0101011..Shared: Selected ready 7 signal from the HSI bus | Global HSI port 3 is ready
 *  0b0101100..Programmable event 0 coming from ANC subsystem
 *  0b0101101..Programmable event 1 coming from ANC subsystem
 *  0b0101110..Programmable event 2 coming from ANC subsystem
 *  0b0101111..Programmable event 3 coming from ANC subsystem
 *  0b0110000..Shared: DSP3 0 software event 0 | DSP3 1 software event 0 | Cadence HiFi5s software event 0 | CSS
 *             Cortex M55 software event 0 | NSS Cortex M55 software event 0
 *  0b0110001..Shared: DSP3 0 software event 1 | DSP3 1 software event 1 | Cadence HiFi5s software event 1 | CSS
 *             Cortex M55 software event 1 | NSS Cortex M55 software event 1
 *  0b0110010..Shared: DSP3 0 software event 2 | DSP3 1 software event 2 | Cadence HiFi5s software event 2 | CSS
 *             Cortex M55 software event 2 | NSS Cortex M55 software event 2
 *  0b0110011..Shared: DSP3 0 software event 3 | DSP3 1 software event 3 | Cadence HiFi5s software event 3 | CSS
 *             Cortex M55 software event 3 | NSS Cortex M55 software event 3
 *  0b0110100..Shared: DSP3 0 software event 4 | DSP3 1 software event 4 | Cadence HiFi5s software event 4 | CSS
 *             Cortex M55 software event 4 | NSS Cortex M55 software event 4
 *  0b0110101..Shared: DSP3 0 software event 5 | DSP3 1 software event 5 | Cadence HiFi5s software event 5 | CSS
 *             Cortex M55 software event 5 | NSS Cortex M55 software event 5
 *  0b0110110..Shared: DSP3 0 software event 6 | DSP3 1 software event 6 | Cadence HiFi5s software event 6 | CSS
 *             Cortex M55 software event 6 | NSS Cortex M55 software event 6
 *  0b0110111..Shared: DSP3 0 software event 7 | DSP3 1 software event 7 | Cadence HiFi5s software event 7 | CSS
 *             Cortex M55 software event 7 | NSS Cortex M55 software event 7
 *  0b0111000..Shared: DSP3 0 software event 8 | DSP3 1 software event 8 | Cadence HiFi5s software event 8 | CSS
 *             peripherals hardware event 0 | XSP software events 0 | eDMA channel 0 done
 *  0b0111001..Shared: DSP3 0 software event 9 | DSP3 1 software event 9 | Cadence HiFi5s software event 9 | CSS
 *             peripherals hardware event 1 | XSP software events 1 | eDMA channel 1 done
 *  0b0111010..Shared: DSP3 0 software event 10 | DSP3 1 software event 10 | Cadence HiFi5s software event 10 |
 *             CSS peripherals hardware event 2 | XSP software events 2 | eDMA channel 2 done
 *  0b0111011..Shared: DSP3 0 software event 11 | DSP3 1 software event 11 | Cadence HiFi5s software event 11 |
 *             CSS peripherals hardware event 3 | XSP software events 3 | eDMA channel 3 done
 *  0b0111100..Shared: DSP3 0 software event 12 | DSP3 1 software event 12 | Cadence HiFi5s software event 12 |
 *             CSS peripherals hardware event 4 | XSP software events 4 | eDMA channel 4 done
 *  0b0111101..Shared: DSP3 0 software event 13 | DSP3 1 software event 13 | Cadence HiFi5s software event 13 |
 *             CSS peripherals hardware event 5 | XSP software events 5 | eDMA channel 5 done | Mic ADC level detect
 *             event
 *  0b0111110..Shared: DSP3 0 software event 14 | DSP3 1 software event 14 | Cadence HiFi5s software event 14 |
 *             CSS peripherals hardware event 6 | XSP software events 6 | eDMA channel 6 done | Event from hardware
 *             RF-IF
 *  0b0111111..Shared: DSP3 0 software event 15 | DSP3 1 software event 15 | Cadence HiFi5s software event 15 |
 *             CSS peripherals hardware event 7 | XSP software events 7 | eDMA channel 7 done | IRQ Ethos-U85
 *             Interrupt
 *  0b1000000..Shared: multichannel_timer_event_0 | DSP3 1 General_purpose_input_0
 *  0b1000001..Shared: multichannel_timer_event_1 | DSP3 1 General_purpose_input_1
 *  0b1000010..Shared: multichannel_timer_event_2 | DSP3 1 General_purpose_input_2
 *  0b1000011..Shared: multichannel_timer_event_3 | DSP3 1 General_purpose_input_3
 *  0b1000100..Shared: multichannel_timer_event_4 | DSP3 1 General_purpose_input_4
 *  0b1000101..Shared: multichannel_timer_event_5 | DSP3 1 General_purpose_input_5
 *  0b1000110..Shared: multichannel_timer_event_6 | DSP3 1 General_purpose_input_6
 *  0b1000111..Shared: multichannel_timer_event_7 | DSP3 1 General_purpose_input_7
 */
#define HSI_QUEUECFG_EVENT(x)                    (((uint32_t)(((uint32_t)(x)) << HSI_QUEUECFG_EVENT_SHIFT)) & HSI_QUEUECFG_EVENT_MASK)
/*! @} */

/*! @name HSIEVENTCFG - Configuration of HSI event line */
/*! @{ */

#define HSI_HSIEVENTCFG_DEVICE_TYPE_MASK         (0x1U)
#define HSI_HSIEVENTCFG_DEVICE_TYPE_SHIFT        (0U)
/*! device_type - This field selects the type of the HSI device that generates the ready for this HSI event line.
 *  0b0..ready event from an HSI source
 *  0b1..ready event from an HSI sink
 */
#define HSI_HSIEVENTCFG_DEVICE_TYPE(x)           (((uint32_t)(((uint32_t)(x)) << HSI_HSIEVENTCFG_DEVICE_TYPE_SHIFT)) & HSI_HSIEVENTCFG_DEVICE_TYPE_MASK)

#define HSI_HSIEVENTCFG_DEVICE_ID_MASK           (0xFEU)
#define HSI_HSIEVENTCFG_DEVICE_ID_SHIFT          (1U)
/*! device_id - This field selects the source ID for one HSI event line. The device can be an HSI
 *    source device or an HSI sink device depending on field device_type. The value filled in here
 *    should match the IDs defined in SlotCfg register.
 */
#define HSI_HSIEVENTCFG_DEVICE_ID(x)             (((uint32_t)(((uint32_t)(x)) << HSI_HSIEVENTCFG_DEVICE_ID_SHIFT)) & HSI_HSIEVENTCFG_DEVICE_ID_MASK)
/*! @} */

/*! @name HSI_PROTECTION - Protection of HSI configuration */
/*! @{ */

#define HSI_HSI_PROTECTION_ENABLE_MASK           (0xFFFFFFU)
#define HSI_HSI_PROTECTION_ENABLE_SHIFT          (0U)
/*! enable - When the magic word is written to this field, write access is allowed to all HSI
 *    registers. When other value is written, write access to all HSI registers is forbidden and will rise
 *    an HSI access error. When the register is read, it returns the state of the write protection.
 *  0b000000000000000000000000..Protection is disabled
 *  0b000000000000000000000001..Protection is enabled
 *  0b101011110001101100100111..Enables write access
 */
#define HSI_HSI_PROTECTION_ENABLE(x)             (((uint32_t)(((uint32_t)(x)) << HSI_HSI_PROTECTION_ENABLE_SHIFT)) & HSI_HSI_PROTECTION_ENABLE_MASK)
/*! @} */

/*! @name PACKET_INFO - This register contains the EOP/SOP bits that are read or written during HSI direct access from the global IO bus */
/*! @{ */

#define HSI_PACKET_INFO_SOP_MASK                 (0x1U)
#define HSI_PACKET_INFO_SOP_SHIFT                (0U)
/*! sop - start of packet */
#define HSI_PACKET_INFO_SOP(x)                   (((uint32_t)(((uint32_t)(x)) << HSI_PACKET_INFO_SOP_SHIFT)) & HSI_PACKET_INFO_SOP_MASK)

#define HSI_PACKET_INFO_EOP_MASK                 (0x2U)
#define HSI_PACKET_INFO_EOP_SHIFT                (1U)
/*! eop - end of packet */
#define HSI_PACKET_INFO_EOP(x)                   (((uint32_t)(((uint32_t)(x)) << HSI_PACKET_INFO_EOP_SHIFT)) & HSI_PACKET_INFO_EOP_MASK)
/*! @} */

/*! @name SHADOWREGISTER - Shadow HSI register to observe/inject data */
/*! @{ */

#define HSI_SHADOWREGISTER_VAL_MASK              (0xFFFFFFU)
#define HSI_SHADOWREGISTER_VAL_SHIFT             (0U)
/*! val - Data read from the HSI bus and/or inserted in HSI bus */
#define HSI_SHADOWREGISTER_VAL(x)                (((uint32_t)(((uint32_t)(x)) << HSI_SHADOWREGISTER_VAL_SHIFT)) & HSI_SHADOWREGISTER_VAL_MASK)
/*! @} */

/*! @name SHADOWREGISTERINFO - This register contains the EOP/SOP bits that are used with the shadow HSI register to observe/inject data */
/*! @{ */

#define HSI_SHADOWREGISTERINFO_SOP_MASK          (0x1U)
#define HSI_SHADOWREGISTERINFO_SOP_SHIFT         (0U)
/*! sop - start of a packet */
#define HSI_SHADOWREGISTERINFO_SOP(x)            (((uint32_t)(((uint32_t)(x)) << HSI_SHADOWREGISTERINFO_SOP_SHIFT)) & HSI_SHADOWREGISTERINFO_SOP_MASK)

#define HSI_SHADOWREGISTERINFO_EOP_MASK          (0x2U)
#define HSI_SHADOWREGISTERINFO_EOP_SHIFT         (1U)
/*! eop - end of packet */
#define HSI_SHADOWREGISTERINFO_EOP(x)            (((uint32_t)(((uint32_t)(x)) << HSI_SHADOWREGISTERINFO_EOP_SHIFT)) & HSI_SHADOWREGISTERINFO_EOP_MASK)
/*! @} */

/*! @name HSI_PROTECTION_COUNTER - HSI protection counter value */
/*! @{ */

#define HSI_HSI_PROTECTION_COUNTER_VALUE_MASK    (0x7U)
#define HSI_HSI_PROTECTION_COUNTER_VALUE_SHIFT   (0U)
/*! value - HSI protection counter value */
#define HSI_HSI_PROTECTION_COUNTER_VALUE(x)      (((uint32_t)(((uint32_t)(x)) << HSI_HSI_PROTECTION_COUNTER_VALUE_SHIFT)) & HSI_HSI_PROTECTION_COUNTER_VALUE_MASK)
/*! @} */

/*! @name HSI_GLOBAL_IO_CFG - Configuration of global I/O access to the HSI bus */
/*! @{ */

#define HSI_HSI_GLOBAL_IO_CFG_ENABLE_MASK        (0x1U)
#define HSI_HSI_GLOBAL_IO_CFG_ENABLE_SHIFT       (0U)
/*! enable - Enables global I/O to the HSI bus
 *  0b0..global I/O access to HSI bus disabled.
 *  0b1..global I/O access to HSI bus enabled.
 */
#define HSI_HSI_GLOBAL_IO_CFG_ENABLE(x)          (((uint32_t)(((uint32_t)(x)) << HSI_HSI_GLOBAL_IO_CFG_ENABLE_SHIFT)) & HSI_HSI_GLOBAL_IO_CFG_ENABLE_MASK)
/*! @} */

/*! @name SLOTCFG - Configuration of an HSI slot */
/*! @{ */

#define HSI_SLOTCFG_SRC_MASK                     (0x7FU)
#define HSI_SLOTCFG_SRC_SHIFT                    (0U)
/*! src - HSI source device id
 *  0b0000000..No HSI source device (slot disabled)
 *  0b0000001..Port that is always ready and returns zero
 *  0b0000010..DMIC channel 0
 *  0b0000011..DMIC channel 1
 *  0b0000100..DMIC channel 2
 *  0b0000101..DMIC channel 3
 *  0b0000110..DMIC channel 4
 *  0b0000111..DMIC channel 5
 *  0b0001000..DMIC channel 6
 *  0b0001001..DMIC channel 7
 *  0b0001010..DMIC AMIC channel 0
 *  0b0001011..DMIC AMIC channel 1
 *  0b0001100..DMIC AMIC channel 2
 *  0b0001101..Dataport 0 FIFO 0
 *  0b0001110..Dataport 0 FIFO 1
 *  0b0001111..Dataport 0 FIFO 2
 *  0b0010000..Dataport 0 FIFO 3
 *  0b0010001..Dataport 0 FIFO 4
 *  0b0010010..Dataport 0 FIFO 5
 *  0b0010011..Dataport 1 FIFO 0
 *  0b0010100..Dataport 1 FIFO 1
 *  0b0010101..Dataport 1 FIFO 2
 *  0b0010110..Dataport 1 FIFO 3
 *  0b0010111..Dataport 1 FIFO 4
 *  0b0011000..Dataport 1 FIFO 5
 *  0b0011001..Dataport 2 FIFO 0
 *  0b0011010..Dataport 2 FIFO 1
 *  0b0011011..Dataport 2 FIFO 2
 *  0b0011100..Dataport 2 FIFO 3
 *  0b0011101..Dataport 2 FIFO 4
 *  0b0011110..Dataport 2 FIFO 5
 *  0b0011111..Dataport 3 FIFO 0
 *  0b0100000..Dataport 3 FIFO 1
 *  0b0100001..Dataport 3 FIFO 2
 *  0b0100010..Dataport 3 FIFO 3
 *  0b0100011..Dataport 3 FIFO 4
 *  0b0100100..Dataport 3 FIFO 5
 *  0b0100101..DMA channel 0
 *  0b0100110..DMA channel 1
 *  0b0100111..DMA channel 2
 *  0b0101000..DMA channel 3
 *  0b0101001..DMA channel 4
 *  0b0101010..DMA channel 5
 *  0b0101011..DMA channel 6
 *  0b0101100..DMA channel 7
 *  0b0101101..DMA channel 8
 *  0b0101110..DMA channel 9
 *  0b0101111..DMA channel 10
 *  0b0110000..DMA channel 11
 *  0b0110001..DMA channel 12
 *  0b0110010..DMA channel 13
 *  0b0110011..DMA channel 14
 *  0b0110100..DMA channel 15
 *  0b0110101..DMA channel 16
 *  0b0110110..DMA channel 17
 *  0b0110111..DMA channel 18
 *  0b0111000..DMA channel 19
 *  0b0111001..DMA channel 20
 *  0b0111010..DMA channel 21
 *  0b0111011..DMA channel 22
 *  0b0111100..DMA channel 23
 *  0b0111101..DMA channel 24
 *  0b0111110..DMA channel 25
 *  0b0111111..DMA channel 26
 *  0b1000000..DMA channel 27
 *  0b1000001..DMA channel 28
 *  0b1000010..DMA channel 29
 *  0b1000011..DMA channel 30
 *  0b1000100..DMA channel 31
 *  0b1000101..DMA channel 32
 *  0b1000110..DMA channel 33
 *  0b1000111..DMA channel 34
 *  0b1001000..DMA channel 35
 *  0b1001001..DMA channel 36
 *  0b1001010..DMA channel 37
 *  0b1001011..DMA channel 38
 *  0b1001100..DMA channel 39
 *  0b1001101..DMA channel 40
 *  0b1001110..DMA channel 41
 *  0b1001111..DMA channel 42
 *  0b1010000..DMA channel 43
 *  0b1010001..DMA channel 44
 *  0b1010010..DMA channel 45
 *  0b1010011..DMA channel 46
 *  0b1010100..DMA channel 47
 *  0b1010101..HSI port 0 of DSP
 *  0b1010110..HSI port 1 of DSP
 *  0b1010111..HSI port 2 of DSP
 *  0b1011000..HSI port 3 of DSP
 *  0b1011001..ANC Monitor 0
 *  0b1011010..ANC Monitor 1
 *  0b1011011..ANC Monitor 2
 *  0b1011100..ANC Monitor 3
 *  0b1011101..ANC Monitor 4
 *  0b1011110..ANC Monitor 5
 */
#define HSI_SLOTCFG_SRC(x)                       (((uint32_t)(((uint32_t)(x)) << HSI_SLOTCFG_SRC_SHIFT)) & HSI_SLOTCFG_SRC_MASK)

#define HSI_SLOTCFG_DST_MASK                     (0x3F80U)
#define HSI_SLOTCFG_DST_SHIFT                    (7U)
/*! dst - HSI sink device id
 *  0b0000000..No HSI sink device (never ready)
 *  0b0000001..HSI null device (always ready, discards received data)
 *  0b0000010..Dataport 0 FIFO 0
 *  0b0000011..Dataport 0 FIFO 1
 *  0b0000100..Dataport 0 FIFO 2
 *  0b0000101..Dataport 0 FIFO 3
 *  0b0000110..Dataport 0 FIFO 4
 *  0b0000111..Dataport 0 FIFO 5
 *  0b0001000..Dataport 1 FIFO 0
 *  0b0001001..Dataport 1 FIFO 1
 *  0b0001010..Dataport 1 FIFO 2
 *  0b0001011..Dataport 1 FIFO 3
 *  0b0001100..Dataport 1 FIFO 4
 *  0b0001101..Dataport 1 FIFO 5
 *  0b0001110..Dataport 2 FIFO 0
 *  0b0001111..Dataport 2 FIFO 1
 *  0b0010000..Dataport 2 FIFO 2
 *  0b0010001..Dataport 2 FIFO 3
 *  0b0010010..Dataport 2 FIFO 4
 *  0b0010011..Dataport 2 FIFO 5
 *  0b0010100..Dataport 3 FIFO 0
 *  0b0010101..Dataport 3 FIFO 1
 *  0b0010110..Dataport 3 FIFO 2
 *  0b0010111..Dataport 3 FIFO 3
 *  0b0011000..Dataport 3 FIFO 4
 *  0b0011001..Dataport 3 FIFO 5
 *  0b0011010..ANC DMA In 0
 *  0b0011011..ANC DMA In 1
 *  0b0011100..HSI port 0 of DSP
 *  0b0011101..HSI port 1 of DSP
 *  0b0011110..HSI port 2 of DSP
 *  0b0011111..HSI port 3 of DSP
 *  0b0100000..DMA channel 0
 *  0b0100001..DMA channel 1
 *  0b0100010..DMA channel 2
 *  0b0100011..DMA channel 3
 *  0b0100100..DMA channel 4
 *  0b0100101..DMA channel 5
 *  0b0100110..DMA channel 6
 *  0b0100111..DMA channel 7
 *  0b0101000..DMA channel 8
 *  0b0101001..DMA channel 9
 *  0b0101010..DMA channel 10
 *  0b0101011..DMA channel 11
 *  0b0101100..DMA channel 12
 *  0b0101101..DMA channel 13
 *  0b0101110..DMA channel 14
 *  0b0101111..DMA channel 15
 *  0b0110000..DMA channel 16
 *  0b0110001..DMA channel 17
 *  0b0110010..DMA channel 18
 *  0b0110011..DMA channel 19
 *  0b0110100..DMA channel 20
 *  0b0110101..DMA channel 21
 *  0b0110110..DMA channel 22
 *  0b0110111..DMA channel 23
 *  0b0111000..DMA channel 24
 *  0b0111001..DMA channel 25
 *  0b0111010..DMA channel 26
 *  0b0111011..DMA channel 27
 *  0b0111100..DMA channel 28
 *  0b0111101..DMA channel 29
 *  0b0111110..DMA channel 30
 *  0b0111111..DMA channel 31
 *  0b1000000..DMA channel 32
 *  0b1000001..DMA channel 33
 *  0b1000010..DMA channel 34
 *  0b1000011..DMA channel 35
 *  0b1000100..DMA channel 36
 *  0b1000101..DMA channel 37
 *  0b1000110..DMA channel 38
 *  0b1000111..DMA channel 39
 *  0b1001000..DMA channel 40
 *  0b1001001..DMA channel 41
 *  0b1001010..DMA channel 42
 *  0b1001011..DMA channel 43
 *  0b1001100..DMA channel 44
 *  0b1001101..DMA channel 45
 *  0b1001110..DMA channel 46
 *  0b1001111..DMA channel 47
 *  0b1010000..BQ Engine 0 Input channel
 *  0b1010001..BQ Engine 1 Input channel
 *  0b1010010..BQ Engine 2 Input channel
 *  0b1010011..BQ Engine 3 Input channel
 *  0b1010100..BQ Engine 4 Input channel
 */
#define HSI_SLOTCFG_DST(x)                       (((uint32_t)(((uint32_t)(x)) << HSI_SLOTCFG_DST_SHIFT)) & HSI_SLOTCFG_DST_MASK)

#define HSI_SLOTCFG_OBSERVE_MASK                 (0x4000U)
#define HSI_SLOTCFG_OBSERVE_SHIFT                (14U)
/*! observe - Enable data monitoring for this HSI channel */
#define HSI_SLOTCFG_OBSERVE(x)                   (((uint32_t)(((uint32_t)(x)) << HSI_SLOTCFG_OBSERVE_SHIFT)) & HSI_SLOTCFG_OBSERVE_MASK)

#define HSI_SLOTCFG_INJECT_MASK                  (0x8000U)
#define HSI_SLOTCFG_INJECT_SHIFT                 (15U)
/*! inject - Enable data injection for this HSI channel */
#define HSI_SLOTCFG_INJECT(x)                    (((uint32_t)(((uint32_t)(x)) << HSI_SLOTCFG_INJECT_SHIFT)) & HSI_SLOTCFG_INJECT_MASK)
/*! @} */

/*! @name NONE_READ - Direct read access to none */
/*! @{ */

#define HSI_NONE_READ_VAL_MASK                   (0xFFFFFFU)
#define HSI_NONE_READ_VAL_SHIFT                  (0U)
/*! val - Direct read access to none */
#define HSI_NONE_READ_VAL(x)                     (((uint32_t)(((uint32_t)(x)) << HSI_NONE_READ_VAL_SHIFT)) & HSI_NONE_READ_VAL_MASK)
/*! @} */

/*! @name ZERO_READ - Direct read access to zero */
/*! @{ */

#define HSI_ZERO_READ_VAL_MASK                   (0xFFFFFFU)
#define HSI_ZERO_READ_VAL_SHIFT                  (0U)
/*! val - Direct read access to zero */
#define HSI_ZERO_READ_VAL(x)                     (((uint32_t)(((uint32_t)(x)) << HSI_ZERO_READ_VAL_SHIFT)) & HSI_ZERO_READ_VAL_MASK)
/*! @} */

/*! @name DMIC_CH0_READ - Direct read access to dmic_ch0 */
/*! @{ */

#define HSI_DMIC_CH0_READ_VAL_MASK               (0xFFFFFFU)
#define HSI_DMIC_CH0_READ_VAL_SHIFT              (0U)
/*! val - Direct read access to dmic_ch0 */
#define HSI_DMIC_CH0_READ_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_CH0_READ_VAL_SHIFT)) & HSI_DMIC_CH0_READ_VAL_MASK)
/*! @} */

/*! @name DMIC_CH1_READ - Direct read access to dmic_ch1 */
/*! @{ */

#define HSI_DMIC_CH1_READ_VAL_MASK               (0xFFFFFFU)
#define HSI_DMIC_CH1_READ_VAL_SHIFT              (0U)
/*! val - Direct read access to dmic_ch1 */
#define HSI_DMIC_CH1_READ_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_CH1_READ_VAL_SHIFT)) & HSI_DMIC_CH1_READ_VAL_MASK)
/*! @} */

/*! @name DMIC_CH2_READ - Direct read access to dmic_ch2 */
/*! @{ */

#define HSI_DMIC_CH2_READ_VAL_MASK               (0xFFFFFFU)
#define HSI_DMIC_CH2_READ_VAL_SHIFT              (0U)
/*! val - Direct read access to dmic_ch2 */
#define HSI_DMIC_CH2_READ_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_CH2_READ_VAL_SHIFT)) & HSI_DMIC_CH2_READ_VAL_MASK)
/*! @} */

/*! @name DMIC_CH3_READ - Direct read access to dmic_ch3 */
/*! @{ */

#define HSI_DMIC_CH3_READ_VAL_MASK               (0xFFFFFFU)
#define HSI_DMIC_CH3_READ_VAL_SHIFT              (0U)
/*! val - Direct read access to dmic_ch3 */
#define HSI_DMIC_CH3_READ_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_CH3_READ_VAL_SHIFT)) & HSI_DMIC_CH3_READ_VAL_MASK)
/*! @} */

/*! @name DMIC_CH4_READ - Direct read access to dmic_ch4 */
/*! @{ */

#define HSI_DMIC_CH4_READ_VAL_MASK               (0xFFFFFFU)
#define HSI_DMIC_CH4_READ_VAL_SHIFT              (0U)
/*! val - Direct read access to dmic_ch4 */
#define HSI_DMIC_CH4_READ_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_CH4_READ_VAL_SHIFT)) & HSI_DMIC_CH4_READ_VAL_MASK)
/*! @} */

/*! @name DMIC_CH5_READ - Direct read access to dmic_ch5 */
/*! @{ */

#define HSI_DMIC_CH5_READ_VAL_MASK               (0xFFFFFFU)
#define HSI_DMIC_CH5_READ_VAL_SHIFT              (0U)
/*! val - Direct read access to dmic_ch5 */
#define HSI_DMIC_CH5_READ_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_CH5_READ_VAL_SHIFT)) & HSI_DMIC_CH5_READ_VAL_MASK)
/*! @} */

/*! @name DMIC_CH6_READ - Direct read access to dmic_ch6 */
/*! @{ */

#define HSI_DMIC_CH6_READ_VAL_MASK               (0xFFFFFFU)
#define HSI_DMIC_CH6_READ_VAL_SHIFT              (0U)
/*! val - Direct read access to dmic_ch6 */
#define HSI_DMIC_CH6_READ_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_CH6_READ_VAL_SHIFT)) & HSI_DMIC_CH6_READ_VAL_MASK)
/*! @} */

/*! @name DMIC_CH7_READ - Direct read access to dmic_ch7 */
/*! @{ */

#define HSI_DMIC_CH7_READ_VAL_MASK               (0xFFFFFFU)
#define HSI_DMIC_CH7_READ_VAL_SHIFT              (0U)
/*! val - Direct read access to dmic_ch7 */
#define HSI_DMIC_CH7_READ_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_CH7_READ_VAL_SHIFT)) & HSI_DMIC_CH7_READ_VAL_MASK)
/*! @} */

/*! @name DMIC_AMIC_CH0_READ - Direct read access to dmic_amic_ch0 */
/*! @{ */

#define HSI_DMIC_AMIC_CH0_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMIC_AMIC_CH0_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dmic_amic_ch0 */
#define HSI_DMIC_AMIC_CH0_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_AMIC_CH0_READ_VAL_SHIFT)) & HSI_DMIC_AMIC_CH0_READ_VAL_MASK)
/*! @} */

/*! @name DMIC_AMIC_CH1_READ - Direct read access to dmic_amic_ch1 */
/*! @{ */

#define HSI_DMIC_AMIC_CH1_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMIC_AMIC_CH1_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dmic_amic_ch1 */
#define HSI_DMIC_AMIC_CH1_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_AMIC_CH1_READ_VAL_SHIFT)) & HSI_DMIC_AMIC_CH1_READ_VAL_MASK)
/*! @} */

/*! @name DMIC_AMIC_CH2_READ - Direct read access to dmic_amic_ch2 */
/*! @{ */

#define HSI_DMIC_AMIC_CH2_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMIC_AMIC_CH2_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dmic_amic_ch2 */
#define HSI_DMIC_AMIC_CH2_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_AMIC_CH2_READ_VAL_SHIFT)) & HSI_DMIC_AMIC_CH2_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO0_READ - Direct read access to dataport0_fifo0 */
/*! @{ */

#define HSI_DATAPORT0_FIFO0_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT0_FIFO0_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport0_fifo0 */
#define HSI_DATAPORT0_FIFO0_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO0_READ_VAL_SHIFT)) & HSI_DATAPORT0_FIFO0_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO1_READ - Direct read access to dataport0_fifo1 */
/*! @{ */

#define HSI_DATAPORT0_FIFO1_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT0_FIFO1_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport0_fifo1 */
#define HSI_DATAPORT0_FIFO1_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO1_READ_VAL_SHIFT)) & HSI_DATAPORT0_FIFO1_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO2_READ - Direct read access to dataport0_fifo2 */
/*! @{ */

#define HSI_DATAPORT0_FIFO2_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT0_FIFO2_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport0_fifo2 */
#define HSI_DATAPORT0_FIFO2_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO2_READ_VAL_SHIFT)) & HSI_DATAPORT0_FIFO2_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO3_READ - Direct read access to dataport0_fifo3 */
/*! @{ */

#define HSI_DATAPORT0_FIFO3_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT0_FIFO3_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport0_fifo3 */
#define HSI_DATAPORT0_FIFO3_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO3_READ_VAL_SHIFT)) & HSI_DATAPORT0_FIFO3_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO4_READ - Direct read access to dataport0_fifo4 */
/*! @{ */

#define HSI_DATAPORT0_FIFO4_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT0_FIFO4_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport0_fifo4 */
#define HSI_DATAPORT0_FIFO4_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO4_READ_VAL_SHIFT)) & HSI_DATAPORT0_FIFO4_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO5_READ - Direct read access to dataport0_fifo5 */
/*! @{ */

#define HSI_DATAPORT0_FIFO5_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT0_FIFO5_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport0_fifo5 */
#define HSI_DATAPORT0_FIFO5_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO5_READ_VAL_SHIFT)) & HSI_DATAPORT0_FIFO5_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO0_READ - Direct read access to dataport1_fifo0 */
/*! @{ */

#define HSI_DATAPORT1_FIFO0_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT1_FIFO0_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport1_fifo0 */
#define HSI_DATAPORT1_FIFO0_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO0_READ_VAL_SHIFT)) & HSI_DATAPORT1_FIFO0_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO1_READ - Direct read access to dataport1_fifo1 */
/*! @{ */

#define HSI_DATAPORT1_FIFO1_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT1_FIFO1_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport1_fifo1 */
#define HSI_DATAPORT1_FIFO1_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO1_READ_VAL_SHIFT)) & HSI_DATAPORT1_FIFO1_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO2_READ - Direct read access to dataport1_fifo2 */
/*! @{ */

#define HSI_DATAPORT1_FIFO2_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT1_FIFO2_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport1_fifo2 */
#define HSI_DATAPORT1_FIFO2_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO2_READ_VAL_SHIFT)) & HSI_DATAPORT1_FIFO2_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO3_READ - Direct read access to dataport1_fifo3 */
/*! @{ */

#define HSI_DATAPORT1_FIFO3_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT1_FIFO3_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport1_fifo3 */
#define HSI_DATAPORT1_FIFO3_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO3_READ_VAL_SHIFT)) & HSI_DATAPORT1_FIFO3_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO4_READ - Direct read access to dataport1_fifo4 */
/*! @{ */

#define HSI_DATAPORT1_FIFO4_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT1_FIFO4_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport1_fifo4 */
#define HSI_DATAPORT1_FIFO4_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO4_READ_VAL_SHIFT)) & HSI_DATAPORT1_FIFO4_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO5_READ - Direct read access to dataport1_fifo5 */
/*! @{ */

#define HSI_DATAPORT1_FIFO5_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT1_FIFO5_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport1_fifo5 */
#define HSI_DATAPORT1_FIFO5_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO5_READ_VAL_SHIFT)) & HSI_DATAPORT1_FIFO5_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO0_READ - Direct read access to dataport2_fifo0 */
/*! @{ */

#define HSI_DATAPORT2_FIFO0_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT2_FIFO0_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport2_fifo0 */
#define HSI_DATAPORT2_FIFO0_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO0_READ_VAL_SHIFT)) & HSI_DATAPORT2_FIFO0_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO1_READ - Direct read access to dataport2_fifo1 */
/*! @{ */

#define HSI_DATAPORT2_FIFO1_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT2_FIFO1_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport2_fifo1 */
#define HSI_DATAPORT2_FIFO1_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO1_READ_VAL_SHIFT)) & HSI_DATAPORT2_FIFO1_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO2_READ - Direct read access to dataport2_fifo2 */
/*! @{ */

#define HSI_DATAPORT2_FIFO2_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT2_FIFO2_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport2_fifo2 */
#define HSI_DATAPORT2_FIFO2_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO2_READ_VAL_SHIFT)) & HSI_DATAPORT2_FIFO2_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO3_READ - Direct read access to dataport2_fifo3 */
/*! @{ */

#define HSI_DATAPORT2_FIFO3_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT2_FIFO3_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport2_fifo3 */
#define HSI_DATAPORT2_FIFO3_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO3_READ_VAL_SHIFT)) & HSI_DATAPORT2_FIFO3_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO4_READ - Direct read access to dataport2_fifo4 */
/*! @{ */

#define HSI_DATAPORT2_FIFO4_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT2_FIFO4_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport2_fifo4 */
#define HSI_DATAPORT2_FIFO4_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO4_READ_VAL_SHIFT)) & HSI_DATAPORT2_FIFO4_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO5_READ - Direct read access to dataport2_fifo5 */
/*! @{ */

#define HSI_DATAPORT2_FIFO5_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT2_FIFO5_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport2_fifo5 */
#define HSI_DATAPORT2_FIFO5_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO5_READ_VAL_SHIFT)) & HSI_DATAPORT2_FIFO5_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO0_READ - Direct read access to dataport3_fifo0 */
/*! @{ */

#define HSI_DATAPORT3_FIFO0_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT3_FIFO0_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport3_fifo0 */
#define HSI_DATAPORT3_FIFO0_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO0_READ_VAL_SHIFT)) & HSI_DATAPORT3_FIFO0_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO1_READ - Direct read access to dataport3_fifo1 */
/*! @{ */

#define HSI_DATAPORT3_FIFO1_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT3_FIFO1_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport3_fifo1 */
#define HSI_DATAPORT3_FIFO1_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO1_READ_VAL_SHIFT)) & HSI_DATAPORT3_FIFO1_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO2_READ - Direct read access to dataport3_fifo2 */
/*! @{ */

#define HSI_DATAPORT3_FIFO2_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT3_FIFO2_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport3_fifo2 */
#define HSI_DATAPORT3_FIFO2_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO2_READ_VAL_SHIFT)) & HSI_DATAPORT3_FIFO2_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO3_READ - Direct read access to dataport3_fifo3 */
/*! @{ */

#define HSI_DATAPORT3_FIFO3_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT3_FIFO3_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport3_fifo3 */
#define HSI_DATAPORT3_FIFO3_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO3_READ_VAL_SHIFT)) & HSI_DATAPORT3_FIFO3_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO4_READ - Direct read access to dataport3_fifo4 */
/*! @{ */

#define HSI_DATAPORT3_FIFO4_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT3_FIFO4_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport3_fifo4 */
#define HSI_DATAPORT3_FIFO4_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO4_READ_VAL_SHIFT)) & HSI_DATAPORT3_FIFO4_READ_VAL_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO5_READ - Direct read access to dataport3_fifo5 */
/*! @{ */

#define HSI_DATAPORT3_FIFO5_READ_VAL_MASK        (0xFFFFFFU)
#define HSI_DATAPORT3_FIFO5_READ_VAL_SHIFT       (0U)
/*! val - Direct read access to dataport3_fifo5 */
#define HSI_DATAPORT3_FIFO5_READ_VAL(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO5_READ_VAL_SHIFT)) & HSI_DATAPORT3_FIFO5_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL0_READ - Direct read access to dma_channel0 */
/*! @{ */

#define HSI_DMA_CHANNEL0_READ_VAL_MASK           (0xFFFFFFU)
#define HSI_DMA_CHANNEL0_READ_VAL_SHIFT          (0U)
/*! val - Direct read access to dma_channel0 */
#define HSI_DMA_CHANNEL0_READ_VAL(x)             (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL0_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL0_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL1_READ - Direct read access to dma_channel1 */
/*! @{ */

#define HSI_DMA_CHANNEL1_READ_VAL_MASK           (0xFFFFFFU)
#define HSI_DMA_CHANNEL1_READ_VAL_SHIFT          (0U)
/*! val - Direct read access to dma_channel1 */
#define HSI_DMA_CHANNEL1_READ_VAL(x)             (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL1_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL1_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL2_READ - Direct read access to dma_channel2 */
/*! @{ */

#define HSI_DMA_CHANNEL2_READ_VAL_MASK           (0xFFFFFFU)
#define HSI_DMA_CHANNEL2_READ_VAL_SHIFT          (0U)
/*! val - Direct read access to dma_channel2 */
#define HSI_DMA_CHANNEL2_READ_VAL(x)             (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL2_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL2_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL3_READ - Direct read access to dma_channel3 */
/*! @{ */

#define HSI_DMA_CHANNEL3_READ_VAL_MASK           (0xFFFFFFU)
#define HSI_DMA_CHANNEL3_READ_VAL_SHIFT          (0U)
/*! val - Direct read access to dma_channel3 */
#define HSI_DMA_CHANNEL3_READ_VAL(x)             (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL3_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL3_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL4_READ - Direct read access to dma_channel4 */
/*! @{ */

#define HSI_DMA_CHANNEL4_READ_VAL_MASK           (0xFFFFFFU)
#define HSI_DMA_CHANNEL4_READ_VAL_SHIFT          (0U)
/*! val - Direct read access to dma_channel4 */
#define HSI_DMA_CHANNEL4_READ_VAL(x)             (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL4_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL4_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL5_READ - Direct read access to dma_channel5 */
/*! @{ */

#define HSI_DMA_CHANNEL5_READ_VAL_MASK           (0xFFFFFFU)
#define HSI_DMA_CHANNEL5_READ_VAL_SHIFT          (0U)
/*! val - Direct read access to dma_channel5 */
#define HSI_DMA_CHANNEL5_READ_VAL(x)             (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL5_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL5_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL6_READ - Direct read access to dma_channel6 */
/*! @{ */

#define HSI_DMA_CHANNEL6_READ_VAL_MASK           (0xFFFFFFU)
#define HSI_DMA_CHANNEL6_READ_VAL_SHIFT          (0U)
/*! val - Direct read access to dma_channel6 */
#define HSI_DMA_CHANNEL6_READ_VAL(x)             (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL6_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL6_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL7_READ - Direct read access to dma_channel7 */
/*! @{ */

#define HSI_DMA_CHANNEL7_READ_VAL_MASK           (0xFFFFFFU)
#define HSI_DMA_CHANNEL7_READ_VAL_SHIFT          (0U)
/*! val - Direct read access to dma_channel7 */
#define HSI_DMA_CHANNEL7_READ_VAL(x)             (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL7_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL7_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL8_READ - Direct read access to dma_channel8 */
/*! @{ */

#define HSI_DMA_CHANNEL8_READ_VAL_MASK           (0xFFFFFFU)
#define HSI_DMA_CHANNEL8_READ_VAL_SHIFT          (0U)
/*! val - Direct read access to dma_channel8 */
#define HSI_DMA_CHANNEL8_READ_VAL(x)             (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL8_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL8_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL9_READ - Direct read access to dma_channel9 */
/*! @{ */

#define HSI_DMA_CHANNEL9_READ_VAL_MASK           (0xFFFFFFU)
#define HSI_DMA_CHANNEL9_READ_VAL_SHIFT          (0U)
/*! val - Direct read access to dma_channel9 */
#define HSI_DMA_CHANNEL9_READ_VAL(x)             (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL9_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL9_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL10_READ - Direct read access to dma_channel10 */
/*! @{ */

#define HSI_DMA_CHANNEL10_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL10_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel10 */
#define HSI_DMA_CHANNEL10_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL10_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL10_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL11_READ - Direct read access to dma_channel11 */
/*! @{ */

#define HSI_DMA_CHANNEL11_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL11_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel11 */
#define HSI_DMA_CHANNEL11_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL11_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL11_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL12_READ - Direct read access to dma_channel12 */
/*! @{ */

#define HSI_DMA_CHANNEL12_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL12_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel12 */
#define HSI_DMA_CHANNEL12_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL12_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL12_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL13_READ - Direct read access to dma_channel13 */
/*! @{ */

#define HSI_DMA_CHANNEL13_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL13_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel13 */
#define HSI_DMA_CHANNEL13_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL13_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL13_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL14_READ - Direct read access to dma_channel14 */
/*! @{ */

#define HSI_DMA_CHANNEL14_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL14_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel14 */
#define HSI_DMA_CHANNEL14_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL14_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL14_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL15_READ - Direct read access to dma_channel15 */
/*! @{ */

#define HSI_DMA_CHANNEL15_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL15_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel15 */
#define HSI_DMA_CHANNEL15_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL15_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL15_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL16_READ - Direct read access to dma_channel16 */
/*! @{ */

#define HSI_DMA_CHANNEL16_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL16_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel16 */
#define HSI_DMA_CHANNEL16_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL16_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL16_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL17_READ - Direct read access to dma_channel17 */
/*! @{ */

#define HSI_DMA_CHANNEL17_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL17_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel17 */
#define HSI_DMA_CHANNEL17_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL17_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL17_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL18_READ - Direct read access to dma_channel18 */
/*! @{ */

#define HSI_DMA_CHANNEL18_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL18_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel18 */
#define HSI_DMA_CHANNEL18_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL18_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL18_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL19_READ - Direct read access to dma_channel19 */
/*! @{ */

#define HSI_DMA_CHANNEL19_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL19_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel19 */
#define HSI_DMA_CHANNEL19_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL19_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL19_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL20_READ - Direct read access to dma_channel20 */
/*! @{ */

#define HSI_DMA_CHANNEL20_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL20_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel20 */
#define HSI_DMA_CHANNEL20_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL20_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL20_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL21_READ - Direct read access to dma_channel21 */
/*! @{ */

#define HSI_DMA_CHANNEL21_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL21_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel21 */
#define HSI_DMA_CHANNEL21_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL21_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL21_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL22_READ - Direct read access to dma_channel22 */
/*! @{ */

#define HSI_DMA_CHANNEL22_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL22_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel22 */
#define HSI_DMA_CHANNEL22_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL22_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL22_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL23_READ - Direct read access to dma_channel23 */
/*! @{ */

#define HSI_DMA_CHANNEL23_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL23_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel23 */
#define HSI_DMA_CHANNEL23_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL23_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL23_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL24_READ - Direct read access to dma_channel24 */
/*! @{ */

#define HSI_DMA_CHANNEL24_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL24_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel24 */
#define HSI_DMA_CHANNEL24_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL24_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL24_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL25_READ - Direct read access to dma_channel25 */
/*! @{ */

#define HSI_DMA_CHANNEL25_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL25_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel25 */
#define HSI_DMA_CHANNEL25_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL25_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL25_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL26_READ - Direct read access to dma_channel26 */
/*! @{ */

#define HSI_DMA_CHANNEL26_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL26_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel26 */
#define HSI_DMA_CHANNEL26_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL26_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL26_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL27_READ - Direct read access to dma_channel27 */
/*! @{ */

#define HSI_DMA_CHANNEL27_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL27_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel27 */
#define HSI_DMA_CHANNEL27_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL27_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL27_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL28_READ - Direct read access to dma_channel28 */
/*! @{ */

#define HSI_DMA_CHANNEL28_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL28_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel28 */
#define HSI_DMA_CHANNEL28_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL28_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL28_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL29_READ - Direct read access to dma_channel29 */
/*! @{ */

#define HSI_DMA_CHANNEL29_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL29_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel29 */
#define HSI_DMA_CHANNEL29_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL29_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL29_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL30_READ - Direct read access to dma_channel30 */
/*! @{ */

#define HSI_DMA_CHANNEL30_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL30_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel30 */
#define HSI_DMA_CHANNEL30_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL30_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL30_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL31_READ - Direct read access to dma_channel31 */
/*! @{ */

#define HSI_DMA_CHANNEL31_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL31_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel31 */
#define HSI_DMA_CHANNEL31_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL31_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL31_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL32_READ - Direct read access to dma_channel32 */
/*! @{ */

#define HSI_DMA_CHANNEL32_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL32_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel32 */
#define HSI_DMA_CHANNEL32_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL32_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL32_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL33_READ - Direct read access to dma_channel33 */
/*! @{ */

#define HSI_DMA_CHANNEL33_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL33_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel33 */
#define HSI_DMA_CHANNEL33_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL33_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL33_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL34_READ - Direct read access to dma_channel34 */
/*! @{ */

#define HSI_DMA_CHANNEL34_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL34_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel34 */
#define HSI_DMA_CHANNEL34_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL34_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL34_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL35_READ - Direct read access to dma_channel35 */
/*! @{ */

#define HSI_DMA_CHANNEL35_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL35_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel35 */
#define HSI_DMA_CHANNEL35_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL35_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL35_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL36_READ - Direct read access to dma_channel36 */
/*! @{ */

#define HSI_DMA_CHANNEL36_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL36_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel36 */
#define HSI_DMA_CHANNEL36_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL36_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL36_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL37_READ - Direct read access to dma_channel37 */
/*! @{ */

#define HSI_DMA_CHANNEL37_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL37_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel37 */
#define HSI_DMA_CHANNEL37_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL37_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL37_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL38_READ - Direct read access to dma_channel38 */
/*! @{ */

#define HSI_DMA_CHANNEL38_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL38_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel38 */
#define HSI_DMA_CHANNEL38_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL38_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL38_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL39_READ - Direct read access to dma_channel39 */
/*! @{ */

#define HSI_DMA_CHANNEL39_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL39_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel39 */
#define HSI_DMA_CHANNEL39_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL39_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL39_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL40_READ - Direct read access to dma_channel40 */
/*! @{ */

#define HSI_DMA_CHANNEL40_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL40_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel40 */
#define HSI_DMA_CHANNEL40_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL40_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL40_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL41_READ - Direct read access to dma_channel41 */
/*! @{ */

#define HSI_DMA_CHANNEL41_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL41_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel41 */
#define HSI_DMA_CHANNEL41_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL41_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL41_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL42_READ - Direct read access to dma_channel42 */
/*! @{ */

#define HSI_DMA_CHANNEL42_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL42_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel42 */
#define HSI_DMA_CHANNEL42_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL42_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL42_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL43_READ - Direct read access to dma_channel43 */
/*! @{ */

#define HSI_DMA_CHANNEL43_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL43_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel43 */
#define HSI_DMA_CHANNEL43_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL43_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL43_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL44_READ - Direct read access to dma_channel44 */
/*! @{ */

#define HSI_DMA_CHANNEL44_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL44_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel44 */
#define HSI_DMA_CHANNEL44_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL44_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL44_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL45_READ - Direct read access to dma_channel45 */
/*! @{ */

#define HSI_DMA_CHANNEL45_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL45_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel45 */
#define HSI_DMA_CHANNEL45_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL45_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL45_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL46_READ - Direct read access to dma_channel46 */
/*! @{ */

#define HSI_DMA_CHANNEL46_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL46_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel46 */
#define HSI_DMA_CHANNEL46_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL46_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL46_READ_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL47_READ - Direct read access to dma_channel47 */
/*! @{ */

#define HSI_DMA_CHANNEL47_READ_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL47_READ_VAL_SHIFT         (0U)
/*! val - Direct read access to dma_channel47 */
#define HSI_DMA_CHANNEL47_READ_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL47_READ_VAL_SHIFT)) & HSI_DMA_CHANNEL47_READ_VAL_MASK)
/*! @} */

/*! @name DSP_PORT0_READ - Direct read access to dsp_port0 */
/*! @{ */

#define HSI_DSP_PORT0_READ_VAL_MASK              (0xFFFFFFU)
#define HSI_DSP_PORT0_READ_VAL_SHIFT             (0U)
/*! val - Direct read access to dsp_port0 */
#define HSI_DSP_PORT0_READ_VAL(x)                (((uint32_t)(((uint32_t)(x)) << HSI_DSP_PORT0_READ_VAL_SHIFT)) & HSI_DSP_PORT0_READ_VAL_MASK)
/*! @} */

/*! @name DSP_PORT1_READ - Direct read access to dsp_port1 */
/*! @{ */

#define HSI_DSP_PORT1_READ_VAL_MASK              (0xFFFFFFU)
#define HSI_DSP_PORT1_READ_VAL_SHIFT             (0U)
/*! val - Direct read access to dsp_port1 */
#define HSI_DSP_PORT1_READ_VAL(x)                (((uint32_t)(((uint32_t)(x)) << HSI_DSP_PORT1_READ_VAL_SHIFT)) & HSI_DSP_PORT1_READ_VAL_MASK)
/*! @} */

/*! @name DSP_PORT2_READ - Direct read access to dsp_port2 */
/*! @{ */

#define HSI_DSP_PORT2_READ_VAL_MASK              (0xFFFFFFU)
#define HSI_DSP_PORT2_READ_VAL_SHIFT             (0U)
/*! val - Direct read access to dsp_port2 */
#define HSI_DSP_PORT2_READ_VAL(x)                (((uint32_t)(((uint32_t)(x)) << HSI_DSP_PORT2_READ_VAL_SHIFT)) & HSI_DSP_PORT2_READ_VAL_MASK)
/*! @} */

/*! @name DSP_PORT3_READ - Direct read access to dsp_port3 */
/*! @{ */

#define HSI_DSP_PORT3_READ_VAL_MASK              (0xFFFFFFU)
#define HSI_DSP_PORT3_READ_VAL_SHIFT             (0U)
/*! val - Direct read access to dsp_port3 */
#define HSI_DSP_PORT3_READ_VAL(x)                (((uint32_t)(((uint32_t)(x)) << HSI_DSP_PORT3_READ_VAL_SHIFT)) & HSI_DSP_PORT3_READ_VAL_MASK)
/*! @} */

/*! @name ANC_MON0_READ - Direct read access to anc_mon0 */
/*! @{ */

#define HSI_ANC_MON0_READ_VAL_MASK               (0xFFFFFFU)
#define HSI_ANC_MON0_READ_VAL_SHIFT              (0U)
/*! val - Direct read access to anc_mon0 */
#define HSI_ANC_MON0_READ_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_ANC_MON0_READ_VAL_SHIFT)) & HSI_ANC_MON0_READ_VAL_MASK)
/*! @} */

/*! @name ANC_MON1_READ - Direct read access to anc_mon1 */
/*! @{ */

#define HSI_ANC_MON1_READ_VAL_MASK               (0xFFFFFFU)
#define HSI_ANC_MON1_READ_VAL_SHIFT              (0U)
/*! val - Direct read access to anc_mon1 */
#define HSI_ANC_MON1_READ_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_ANC_MON1_READ_VAL_SHIFT)) & HSI_ANC_MON1_READ_VAL_MASK)
/*! @} */

/*! @name ANC_MON2_READ - Direct read access to anc_mon2 */
/*! @{ */

#define HSI_ANC_MON2_READ_VAL_MASK               (0xFFFFFFU)
#define HSI_ANC_MON2_READ_VAL_SHIFT              (0U)
/*! val - Direct read access to anc_mon2 */
#define HSI_ANC_MON2_READ_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_ANC_MON2_READ_VAL_SHIFT)) & HSI_ANC_MON2_READ_VAL_MASK)
/*! @} */

/*! @name ANC_MON3_READ - Direct read access to anc_mon3 */
/*! @{ */

#define HSI_ANC_MON3_READ_VAL_MASK               (0xFFFFFFU)
#define HSI_ANC_MON3_READ_VAL_SHIFT              (0U)
/*! val - Direct read access to anc_mon3 */
#define HSI_ANC_MON3_READ_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_ANC_MON3_READ_VAL_SHIFT)) & HSI_ANC_MON3_READ_VAL_MASK)
/*! @} */

/*! @name ANC_MON4_READ - Direct read access to anc_mon4 */
/*! @{ */

#define HSI_ANC_MON4_READ_VAL_MASK               (0xFFFFFFU)
#define HSI_ANC_MON4_READ_VAL_SHIFT              (0U)
/*! val - Direct read access to anc_mon4 */
#define HSI_ANC_MON4_READ_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_ANC_MON4_READ_VAL_SHIFT)) & HSI_ANC_MON4_READ_VAL_MASK)
/*! @} */

/*! @name ANC_MON5_READ - Direct read access to anc_mon5 */
/*! @{ */

#define HSI_ANC_MON5_READ_VAL_MASK               (0xFFFFFFU)
#define HSI_ANC_MON5_READ_VAL_SHIFT              (0U)
/*! val - Direct read access to anc_mon5 */
#define HSI_ANC_MON5_READ_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_ANC_MON5_READ_VAL_SHIFT)) & HSI_ANC_MON5_READ_VAL_MASK)
/*! @} */

/*! @name NONE_WRITE - Direct write access to none */
/*! @{ */

#define HSI_NONE_WRITE_VAL_MASK                  (0xFFFFFFU)
#define HSI_NONE_WRITE_VAL_SHIFT                 (0U)
/*! val - Direct write access to none */
#define HSI_NONE_WRITE_VAL(x)                    (((uint32_t)(((uint32_t)(x)) << HSI_NONE_WRITE_VAL_SHIFT)) & HSI_NONE_WRITE_VAL_MASK)
/*! @} */

/*! @name NULL_WRITE - Direct write access to null */
/*! @{ */

#define HSI_NULL_WRITE_VAL_MASK                  (0xFFFFFFU)
#define HSI_NULL_WRITE_VAL_SHIFT                 (0U)
/*! val - Direct write access to null */
#define HSI_NULL_WRITE_VAL(x)                    (((uint32_t)(((uint32_t)(x)) << HSI_NULL_WRITE_VAL_SHIFT)) & HSI_NULL_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO0_WRITE - Direct write access to dataport0_fifo0 */
/*! @{ */

#define HSI_DATAPORT0_FIFO0_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT0_FIFO0_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport0_fifo0 */
#define HSI_DATAPORT0_FIFO0_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO0_WRITE_VAL_SHIFT)) & HSI_DATAPORT0_FIFO0_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO1_WRITE - Direct write access to dataport0_fifo1 */
/*! @{ */

#define HSI_DATAPORT0_FIFO1_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT0_FIFO1_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport0_fifo1 */
#define HSI_DATAPORT0_FIFO1_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO1_WRITE_VAL_SHIFT)) & HSI_DATAPORT0_FIFO1_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO2_WRITE - Direct write access to dataport0_fifo2 */
/*! @{ */

#define HSI_DATAPORT0_FIFO2_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT0_FIFO2_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport0_fifo2 */
#define HSI_DATAPORT0_FIFO2_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO2_WRITE_VAL_SHIFT)) & HSI_DATAPORT0_FIFO2_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO3_WRITE - Direct write access to dataport0_fifo3 */
/*! @{ */

#define HSI_DATAPORT0_FIFO3_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT0_FIFO3_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport0_fifo3 */
#define HSI_DATAPORT0_FIFO3_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO3_WRITE_VAL_SHIFT)) & HSI_DATAPORT0_FIFO3_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO4_WRITE - Direct write access to dataport0_fifo4 */
/*! @{ */

#define HSI_DATAPORT0_FIFO4_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT0_FIFO4_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport0_fifo4 */
#define HSI_DATAPORT0_FIFO4_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO4_WRITE_VAL_SHIFT)) & HSI_DATAPORT0_FIFO4_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO5_WRITE - Direct write access to dataport0_fifo5 */
/*! @{ */

#define HSI_DATAPORT0_FIFO5_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT0_FIFO5_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport0_fifo5 */
#define HSI_DATAPORT0_FIFO5_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO5_WRITE_VAL_SHIFT)) & HSI_DATAPORT0_FIFO5_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO0_WRITE - Direct write access to dataport1_fifo0 */
/*! @{ */

#define HSI_DATAPORT1_FIFO0_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT1_FIFO0_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport1_fifo0 */
#define HSI_DATAPORT1_FIFO0_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO0_WRITE_VAL_SHIFT)) & HSI_DATAPORT1_FIFO0_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO1_WRITE - Direct write access to dataport1_fifo1 */
/*! @{ */

#define HSI_DATAPORT1_FIFO1_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT1_FIFO1_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport1_fifo1 */
#define HSI_DATAPORT1_FIFO1_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO1_WRITE_VAL_SHIFT)) & HSI_DATAPORT1_FIFO1_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO2_WRITE - Direct write access to dataport1_fifo2 */
/*! @{ */

#define HSI_DATAPORT1_FIFO2_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT1_FIFO2_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport1_fifo2 */
#define HSI_DATAPORT1_FIFO2_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO2_WRITE_VAL_SHIFT)) & HSI_DATAPORT1_FIFO2_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO3_WRITE - Direct write access to dataport1_fifo3 */
/*! @{ */

#define HSI_DATAPORT1_FIFO3_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT1_FIFO3_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport1_fifo3 */
#define HSI_DATAPORT1_FIFO3_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO3_WRITE_VAL_SHIFT)) & HSI_DATAPORT1_FIFO3_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO4_WRITE - Direct write access to dataport1_fifo4 */
/*! @{ */

#define HSI_DATAPORT1_FIFO4_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT1_FIFO4_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport1_fifo4 */
#define HSI_DATAPORT1_FIFO4_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO4_WRITE_VAL_SHIFT)) & HSI_DATAPORT1_FIFO4_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO5_WRITE - Direct write access to dataport1_fifo5 */
/*! @{ */

#define HSI_DATAPORT1_FIFO5_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT1_FIFO5_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport1_fifo5 */
#define HSI_DATAPORT1_FIFO5_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO5_WRITE_VAL_SHIFT)) & HSI_DATAPORT1_FIFO5_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO0_WRITE - Direct write access to dataport2_fifo0 */
/*! @{ */

#define HSI_DATAPORT2_FIFO0_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT2_FIFO0_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport2_fifo0 */
#define HSI_DATAPORT2_FIFO0_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO0_WRITE_VAL_SHIFT)) & HSI_DATAPORT2_FIFO0_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO1_WRITE - Direct write access to dataport2_fifo1 */
/*! @{ */

#define HSI_DATAPORT2_FIFO1_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT2_FIFO1_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport2_fifo1 */
#define HSI_DATAPORT2_FIFO1_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO1_WRITE_VAL_SHIFT)) & HSI_DATAPORT2_FIFO1_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO2_WRITE - Direct write access to dataport2_fifo2 */
/*! @{ */

#define HSI_DATAPORT2_FIFO2_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT2_FIFO2_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport2_fifo2 */
#define HSI_DATAPORT2_FIFO2_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO2_WRITE_VAL_SHIFT)) & HSI_DATAPORT2_FIFO2_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO3_WRITE - Direct write access to dataport2_fifo3 */
/*! @{ */

#define HSI_DATAPORT2_FIFO3_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT2_FIFO3_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport2_fifo3 */
#define HSI_DATAPORT2_FIFO3_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO3_WRITE_VAL_SHIFT)) & HSI_DATAPORT2_FIFO3_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO4_WRITE - Direct write access to dataport2_fifo4 */
/*! @{ */

#define HSI_DATAPORT2_FIFO4_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT2_FIFO4_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport2_fifo4 */
#define HSI_DATAPORT2_FIFO4_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO4_WRITE_VAL_SHIFT)) & HSI_DATAPORT2_FIFO4_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO5_WRITE - Direct write access to dataport2_fifo5 */
/*! @{ */

#define HSI_DATAPORT2_FIFO5_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT2_FIFO5_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport2_fifo5 */
#define HSI_DATAPORT2_FIFO5_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO5_WRITE_VAL_SHIFT)) & HSI_DATAPORT2_FIFO5_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO0_WRITE - Direct write access to dataport3_fifo0 */
/*! @{ */

#define HSI_DATAPORT3_FIFO0_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT3_FIFO0_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport3_fifo0 */
#define HSI_DATAPORT3_FIFO0_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO0_WRITE_VAL_SHIFT)) & HSI_DATAPORT3_FIFO0_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO1_WRITE - Direct write access to dataport3_fifo1 */
/*! @{ */

#define HSI_DATAPORT3_FIFO1_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT3_FIFO1_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport3_fifo1 */
#define HSI_DATAPORT3_FIFO1_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO1_WRITE_VAL_SHIFT)) & HSI_DATAPORT3_FIFO1_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO2_WRITE - Direct write access to dataport3_fifo2 */
/*! @{ */

#define HSI_DATAPORT3_FIFO2_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT3_FIFO2_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport3_fifo2 */
#define HSI_DATAPORT3_FIFO2_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO2_WRITE_VAL_SHIFT)) & HSI_DATAPORT3_FIFO2_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO3_WRITE - Direct write access to dataport3_fifo3 */
/*! @{ */

#define HSI_DATAPORT3_FIFO3_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT3_FIFO3_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport3_fifo3 */
#define HSI_DATAPORT3_FIFO3_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO3_WRITE_VAL_SHIFT)) & HSI_DATAPORT3_FIFO3_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO4_WRITE - Direct write access to dataport3_fifo4 */
/*! @{ */

#define HSI_DATAPORT3_FIFO4_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT3_FIFO4_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport3_fifo4 */
#define HSI_DATAPORT3_FIFO4_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO4_WRITE_VAL_SHIFT)) & HSI_DATAPORT3_FIFO4_WRITE_VAL_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO5_WRITE - Direct write access to dataport3_fifo5 */
/*! @{ */

#define HSI_DATAPORT3_FIFO5_WRITE_VAL_MASK       (0xFFFFFFU)
#define HSI_DATAPORT3_FIFO5_WRITE_VAL_SHIFT      (0U)
/*! val - Direct write access to dataport3_fifo5 */
#define HSI_DATAPORT3_FIFO5_WRITE_VAL(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO5_WRITE_VAL_SHIFT)) & HSI_DATAPORT3_FIFO5_WRITE_VAL_MASK)
/*! @} */

/*! @name ANC_DMA_IN0_WRITE - Direct write access to anc_dma_in0 */
/*! @{ */

#define HSI_ANC_DMA_IN0_WRITE_VAL_MASK           (0xFFFFFFU)
#define HSI_ANC_DMA_IN0_WRITE_VAL_SHIFT          (0U)
/*! val - Direct write access to anc_dma_in0 */
#define HSI_ANC_DMA_IN0_WRITE_VAL(x)             (((uint32_t)(((uint32_t)(x)) << HSI_ANC_DMA_IN0_WRITE_VAL_SHIFT)) & HSI_ANC_DMA_IN0_WRITE_VAL_MASK)
/*! @} */

/*! @name ANC_DMA_IN1_WRITE - Direct write access to anc_dma_in1 */
/*! @{ */

#define HSI_ANC_DMA_IN1_WRITE_VAL_MASK           (0xFFFFFFU)
#define HSI_ANC_DMA_IN1_WRITE_VAL_SHIFT          (0U)
/*! val - Direct write access to anc_dma_in1 */
#define HSI_ANC_DMA_IN1_WRITE_VAL(x)             (((uint32_t)(((uint32_t)(x)) << HSI_ANC_DMA_IN1_WRITE_VAL_SHIFT)) & HSI_ANC_DMA_IN1_WRITE_VAL_MASK)
/*! @} */

/*! @name DSP_PORT0_WRITE - Direct write access to dsp_port0 */
/*! @{ */

#define HSI_DSP_PORT0_WRITE_VAL_MASK             (0xFFFFFFU)
#define HSI_DSP_PORT0_WRITE_VAL_SHIFT            (0U)
/*! val - Direct write access to dsp_port0 */
#define HSI_DSP_PORT0_WRITE_VAL(x)               (((uint32_t)(((uint32_t)(x)) << HSI_DSP_PORT0_WRITE_VAL_SHIFT)) & HSI_DSP_PORT0_WRITE_VAL_MASK)
/*! @} */

/*! @name DSP_PORT1_WRITE - Direct write access to dsp_port1 */
/*! @{ */

#define HSI_DSP_PORT1_WRITE_VAL_MASK             (0xFFFFFFU)
#define HSI_DSP_PORT1_WRITE_VAL_SHIFT            (0U)
/*! val - Direct write access to dsp_port1 */
#define HSI_DSP_PORT1_WRITE_VAL(x)               (((uint32_t)(((uint32_t)(x)) << HSI_DSP_PORT1_WRITE_VAL_SHIFT)) & HSI_DSP_PORT1_WRITE_VAL_MASK)
/*! @} */

/*! @name DSP_PORT2_WRITE - Direct write access to dsp_port2 */
/*! @{ */

#define HSI_DSP_PORT2_WRITE_VAL_MASK             (0xFFFFFFU)
#define HSI_DSP_PORT2_WRITE_VAL_SHIFT            (0U)
/*! val - Direct write access to dsp_port2 */
#define HSI_DSP_PORT2_WRITE_VAL(x)               (((uint32_t)(((uint32_t)(x)) << HSI_DSP_PORT2_WRITE_VAL_SHIFT)) & HSI_DSP_PORT2_WRITE_VAL_MASK)
/*! @} */

/*! @name DSP_PORT3_WRITE - Direct write access to dsp_port3 */
/*! @{ */

#define HSI_DSP_PORT3_WRITE_VAL_MASK             (0xFFFFFFU)
#define HSI_DSP_PORT3_WRITE_VAL_SHIFT            (0U)
/*! val - Direct write access to dsp_port3 */
#define HSI_DSP_PORT3_WRITE_VAL(x)               (((uint32_t)(((uint32_t)(x)) << HSI_DSP_PORT3_WRITE_VAL_SHIFT)) & HSI_DSP_PORT3_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL0_WRITE - Direct write access to dma_channel0 */
/*! @{ */

#define HSI_DMA_CHANNEL0_WRITE_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL0_WRITE_VAL_SHIFT         (0U)
/*! val - Direct write access to dma_channel0 */
#define HSI_DMA_CHANNEL0_WRITE_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL0_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL0_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL1_WRITE - Direct write access to dma_channel1 */
/*! @{ */

#define HSI_DMA_CHANNEL1_WRITE_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL1_WRITE_VAL_SHIFT         (0U)
/*! val - Direct write access to dma_channel1 */
#define HSI_DMA_CHANNEL1_WRITE_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL1_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL1_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL2_WRITE - Direct write access to dma_channel2 */
/*! @{ */

#define HSI_DMA_CHANNEL2_WRITE_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL2_WRITE_VAL_SHIFT         (0U)
/*! val - Direct write access to dma_channel2 */
#define HSI_DMA_CHANNEL2_WRITE_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL2_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL2_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL3_WRITE - Direct write access to dma_channel3 */
/*! @{ */

#define HSI_DMA_CHANNEL3_WRITE_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL3_WRITE_VAL_SHIFT         (0U)
/*! val - Direct write access to dma_channel3 */
#define HSI_DMA_CHANNEL3_WRITE_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL3_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL3_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL4_WRITE - Direct write access to dma_channel4 */
/*! @{ */

#define HSI_DMA_CHANNEL4_WRITE_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL4_WRITE_VAL_SHIFT         (0U)
/*! val - Direct write access to dma_channel4 */
#define HSI_DMA_CHANNEL4_WRITE_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL4_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL4_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL5_WRITE - Direct write access to dma_channel5 */
/*! @{ */

#define HSI_DMA_CHANNEL5_WRITE_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL5_WRITE_VAL_SHIFT         (0U)
/*! val - Direct write access to dma_channel5 */
#define HSI_DMA_CHANNEL5_WRITE_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL5_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL5_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL6_WRITE - Direct write access to dma_channel6 */
/*! @{ */

#define HSI_DMA_CHANNEL6_WRITE_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL6_WRITE_VAL_SHIFT         (0U)
/*! val - Direct write access to dma_channel6 */
#define HSI_DMA_CHANNEL6_WRITE_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL6_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL6_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL7_WRITE - Direct write access to dma_channel7 */
/*! @{ */

#define HSI_DMA_CHANNEL7_WRITE_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL7_WRITE_VAL_SHIFT         (0U)
/*! val - Direct write access to dma_channel7 */
#define HSI_DMA_CHANNEL7_WRITE_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL7_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL7_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL8_WRITE - Direct write access to dma_channel8 */
/*! @{ */

#define HSI_DMA_CHANNEL8_WRITE_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL8_WRITE_VAL_SHIFT         (0U)
/*! val - Direct write access to dma_channel8 */
#define HSI_DMA_CHANNEL8_WRITE_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL8_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL8_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL9_WRITE - Direct write access to dma_channel9 */
/*! @{ */

#define HSI_DMA_CHANNEL9_WRITE_VAL_MASK          (0xFFFFFFU)
#define HSI_DMA_CHANNEL9_WRITE_VAL_SHIFT         (0U)
/*! val - Direct write access to dma_channel9 */
#define HSI_DMA_CHANNEL9_WRITE_VAL(x)            (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL9_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL9_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL10_WRITE - Direct write access to dma_channel10 */
/*! @{ */

#define HSI_DMA_CHANNEL10_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL10_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel10 */
#define HSI_DMA_CHANNEL10_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL10_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL10_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL11_WRITE - Direct write access to dma_channel11 */
/*! @{ */

#define HSI_DMA_CHANNEL11_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL11_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel11 */
#define HSI_DMA_CHANNEL11_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL11_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL11_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL12_WRITE - Direct write access to dma_channel12 */
/*! @{ */

#define HSI_DMA_CHANNEL12_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL12_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel12 */
#define HSI_DMA_CHANNEL12_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL12_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL12_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL13_WRITE - Direct write access to dma_channel13 */
/*! @{ */

#define HSI_DMA_CHANNEL13_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL13_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel13 */
#define HSI_DMA_CHANNEL13_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL13_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL13_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL14_WRITE - Direct write access to dma_channel14 */
/*! @{ */

#define HSI_DMA_CHANNEL14_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL14_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel14 */
#define HSI_DMA_CHANNEL14_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL14_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL14_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL15_WRITE - Direct write access to dma_channel15 */
/*! @{ */

#define HSI_DMA_CHANNEL15_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL15_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel15 */
#define HSI_DMA_CHANNEL15_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL15_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL15_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL16_WRITE - Direct write access to dma_channel16 */
/*! @{ */

#define HSI_DMA_CHANNEL16_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL16_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel16 */
#define HSI_DMA_CHANNEL16_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL16_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL16_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL17_WRITE - Direct write access to dma_channel17 */
/*! @{ */

#define HSI_DMA_CHANNEL17_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL17_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel17 */
#define HSI_DMA_CHANNEL17_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL17_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL17_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL18_WRITE - Direct write access to dma_channel18 */
/*! @{ */

#define HSI_DMA_CHANNEL18_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL18_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel18 */
#define HSI_DMA_CHANNEL18_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL18_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL18_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL19_WRITE - Direct write access to dma_channel19 */
/*! @{ */

#define HSI_DMA_CHANNEL19_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL19_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel19 */
#define HSI_DMA_CHANNEL19_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL19_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL19_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL20_WRITE - Direct write access to dma_channel20 */
/*! @{ */

#define HSI_DMA_CHANNEL20_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL20_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel20 */
#define HSI_DMA_CHANNEL20_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL20_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL20_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL21_WRITE - Direct write access to dma_channel21 */
/*! @{ */

#define HSI_DMA_CHANNEL21_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL21_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel21 */
#define HSI_DMA_CHANNEL21_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL21_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL21_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL22_WRITE - Direct write access to dma_channel22 */
/*! @{ */

#define HSI_DMA_CHANNEL22_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL22_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel22 */
#define HSI_DMA_CHANNEL22_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL22_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL22_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL23_WRITE - Direct write access to dma_channel23 */
/*! @{ */

#define HSI_DMA_CHANNEL23_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL23_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel23 */
#define HSI_DMA_CHANNEL23_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL23_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL23_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL24_WRITE - Direct write access to dma_channel24 */
/*! @{ */

#define HSI_DMA_CHANNEL24_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL24_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel24 */
#define HSI_DMA_CHANNEL24_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL24_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL24_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL25_WRITE - Direct write access to dma_channel25 */
/*! @{ */

#define HSI_DMA_CHANNEL25_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL25_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel25 */
#define HSI_DMA_CHANNEL25_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL25_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL25_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL26_WRITE - Direct write access to dma_channel26 */
/*! @{ */

#define HSI_DMA_CHANNEL26_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL26_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel26 */
#define HSI_DMA_CHANNEL26_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL26_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL26_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL27_WRITE - Direct write access to dma_channel27 */
/*! @{ */

#define HSI_DMA_CHANNEL27_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL27_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel27 */
#define HSI_DMA_CHANNEL27_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL27_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL27_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL28_WRITE - Direct write access to dma_channel28 */
/*! @{ */

#define HSI_DMA_CHANNEL28_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL28_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel28 */
#define HSI_DMA_CHANNEL28_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL28_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL28_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL29_WRITE - Direct write access to dma_channel29 */
/*! @{ */

#define HSI_DMA_CHANNEL29_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL29_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel29 */
#define HSI_DMA_CHANNEL29_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL29_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL29_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL30_WRITE - Direct write access to dma_channel30 */
/*! @{ */

#define HSI_DMA_CHANNEL30_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL30_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel30 */
#define HSI_DMA_CHANNEL30_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL30_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL30_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL31_WRITE - Direct write access to dma_channel31 */
/*! @{ */

#define HSI_DMA_CHANNEL31_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL31_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel31 */
#define HSI_DMA_CHANNEL31_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL31_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL31_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL32_WRITE - Direct write access to dma_channel32 */
/*! @{ */

#define HSI_DMA_CHANNEL32_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL32_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel32 */
#define HSI_DMA_CHANNEL32_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL32_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL32_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL33_WRITE - Direct write access to dma_channel33 */
/*! @{ */

#define HSI_DMA_CHANNEL33_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL33_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel33 */
#define HSI_DMA_CHANNEL33_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL33_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL33_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL34_WRITE - Direct write access to dma_channel34 */
/*! @{ */

#define HSI_DMA_CHANNEL34_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL34_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel34 */
#define HSI_DMA_CHANNEL34_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL34_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL34_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL35_WRITE - Direct write access to dma_channel35 */
/*! @{ */

#define HSI_DMA_CHANNEL35_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL35_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel35 */
#define HSI_DMA_CHANNEL35_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL35_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL35_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL36_WRITE - Direct write access to dma_channel36 */
/*! @{ */

#define HSI_DMA_CHANNEL36_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL36_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel36 */
#define HSI_DMA_CHANNEL36_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL36_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL36_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL37_WRITE - Direct write access to dma_channel37 */
/*! @{ */

#define HSI_DMA_CHANNEL37_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL37_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel37 */
#define HSI_DMA_CHANNEL37_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL37_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL37_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL38_WRITE - Direct write access to dma_channel38 */
/*! @{ */

#define HSI_DMA_CHANNEL38_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL38_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel38 */
#define HSI_DMA_CHANNEL38_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL38_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL38_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL39_WRITE - Direct write access to dma_channel39 */
/*! @{ */

#define HSI_DMA_CHANNEL39_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL39_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel39 */
#define HSI_DMA_CHANNEL39_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL39_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL39_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL40_WRITE - Direct write access to dma_channel40 */
/*! @{ */

#define HSI_DMA_CHANNEL40_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL40_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel40 */
#define HSI_DMA_CHANNEL40_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL40_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL40_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL41_WRITE - Direct write access to dma_channel41 */
/*! @{ */

#define HSI_DMA_CHANNEL41_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL41_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel41 */
#define HSI_DMA_CHANNEL41_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL41_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL41_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL42_WRITE - Direct write access to dma_channel42 */
/*! @{ */

#define HSI_DMA_CHANNEL42_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL42_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel42 */
#define HSI_DMA_CHANNEL42_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL42_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL42_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL43_WRITE - Direct write access to dma_channel43 */
/*! @{ */

#define HSI_DMA_CHANNEL43_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL43_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel43 */
#define HSI_DMA_CHANNEL43_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL43_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL43_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL44_WRITE - Direct write access to dma_channel44 */
/*! @{ */

#define HSI_DMA_CHANNEL44_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL44_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel44 */
#define HSI_DMA_CHANNEL44_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL44_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL44_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL45_WRITE - Direct write access to dma_channel45 */
/*! @{ */

#define HSI_DMA_CHANNEL45_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL45_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel45 */
#define HSI_DMA_CHANNEL45_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL45_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL45_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL46_WRITE - Direct write access to dma_channel46 */
/*! @{ */

#define HSI_DMA_CHANNEL46_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL46_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel46 */
#define HSI_DMA_CHANNEL46_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL46_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL46_WRITE_VAL_MASK)
/*! @} */

/*! @name DMA_CHANNEL47_WRITE - Direct write access to dma_channel47 */
/*! @{ */

#define HSI_DMA_CHANNEL47_WRITE_VAL_MASK         (0xFFFFFFU)
#define HSI_DMA_CHANNEL47_WRITE_VAL_SHIFT        (0U)
/*! val - Direct write access to dma_channel47 */
#define HSI_DMA_CHANNEL47_WRITE_VAL(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL47_WRITE_VAL_SHIFT)) & HSI_DMA_CHANNEL47_WRITE_VAL_MASK)
/*! @} */

/*! @name BQE_CH0_WRITE - Direct write access to bqe_ch0 */
/*! @{ */

#define HSI_BQE_CH0_WRITE_VAL_MASK               (0xFFFFFFU)
#define HSI_BQE_CH0_WRITE_VAL_SHIFT              (0U)
/*! val - Direct write access to bqe_ch0 */
#define HSI_BQE_CH0_WRITE_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_BQE_CH0_WRITE_VAL_SHIFT)) & HSI_BQE_CH0_WRITE_VAL_MASK)
/*! @} */

/*! @name BQE_CH1_WRITE - Direct write access to bqe_ch1 */
/*! @{ */

#define HSI_BQE_CH1_WRITE_VAL_MASK               (0xFFFFFFU)
#define HSI_BQE_CH1_WRITE_VAL_SHIFT              (0U)
/*! val - Direct write access to bqe_ch1 */
#define HSI_BQE_CH1_WRITE_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_BQE_CH1_WRITE_VAL_SHIFT)) & HSI_BQE_CH1_WRITE_VAL_MASK)
/*! @} */

/*! @name BQE_CH2_WRITE - Direct write access to bqe_ch2 */
/*! @{ */

#define HSI_BQE_CH2_WRITE_VAL_MASK               (0xFFFFFFU)
#define HSI_BQE_CH2_WRITE_VAL_SHIFT              (0U)
/*! val - Direct write access to bqe_ch2 */
#define HSI_BQE_CH2_WRITE_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_BQE_CH2_WRITE_VAL_SHIFT)) & HSI_BQE_CH2_WRITE_VAL_MASK)
/*! @} */

/*! @name BQE_CH3_WRITE - Direct write access to bqe_ch3 */
/*! @{ */

#define HSI_BQE_CH3_WRITE_VAL_MASK               (0xFFFFFFU)
#define HSI_BQE_CH3_WRITE_VAL_SHIFT              (0U)
/*! val - Direct write access to bqe_ch3 */
#define HSI_BQE_CH3_WRITE_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_BQE_CH3_WRITE_VAL_SHIFT)) & HSI_BQE_CH3_WRITE_VAL_MASK)
/*! @} */

/*! @name BQE_CH4_WRITE - Direct write access to bqe_ch4 */
/*! @{ */

#define HSI_BQE_CH4_WRITE_VAL_MASK               (0xFFFFFFU)
#define HSI_BQE_CH4_WRITE_VAL_SHIFT              (0U)
/*! val - Direct write access to bqe_ch4 */
#define HSI_BQE_CH4_WRITE_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << HSI_BQE_CH4_WRITE_VAL_SHIFT)) & HSI_BQE_CH4_WRITE_VAL_MASK)
/*! @} */

/*! @name NONE_READ_RDY - Direct read access to none ready */
/*! @{ */

#define HSI_NONE_READ_RDY_READY_MASK             (0x1U)
#define HSI_NONE_READ_RDY_READY_SHIFT            (0U)
/*! ready - Direct read access to none ready */
#define HSI_NONE_READ_RDY_READY(x)               (((uint32_t)(((uint32_t)(x)) << HSI_NONE_READ_RDY_READY_SHIFT)) & HSI_NONE_READ_RDY_READY_MASK)
/*! @} */

/*! @name ZERO_READ_RDY - Direct read access to zero ready */
/*! @{ */

#define HSI_ZERO_READ_RDY_READY_MASK             (0x1U)
#define HSI_ZERO_READ_RDY_READY_SHIFT            (0U)
/*! ready - Direct read access to zero ready */
#define HSI_ZERO_READ_RDY_READY(x)               (((uint32_t)(((uint32_t)(x)) << HSI_ZERO_READ_RDY_READY_SHIFT)) & HSI_ZERO_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMIC_CH0_READ_RDY - Direct read access to dmic_ch0 ready */
/*! @{ */

#define HSI_DMIC_CH0_READ_RDY_READY_MASK         (0x1U)
#define HSI_DMIC_CH0_READ_RDY_READY_SHIFT        (0U)
/*! ready - Direct read access to dmic_ch0 ready */
#define HSI_DMIC_CH0_READ_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_CH0_READ_RDY_READY_SHIFT)) & HSI_DMIC_CH0_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMIC_CH1_READ_RDY - Direct read access to dmic_ch1 ready */
/*! @{ */

#define HSI_DMIC_CH1_READ_RDY_READY_MASK         (0x1U)
#define HSI_DMIC_CH1_READ_RDY_READY_SHIFT        (0U)
/*! ready - Direct read access to dmic_ch1 ready */
#define HSI_DMIC_CH1_READ_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_CH1_READ_RDY_READY_SHIFT)) & HSI_DMIC_CH1_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMIC_CH2_READ_RDY - Direct read access to dmic_ch2 ready */
/*! @{ */

#define HSI_DMIC_CH2_READ_RDY_READY_MASK         (0x1U)
#define HSI_DMIC_CH2_READ_RDY_READY_SHIFT        (0U)
/*! ready - Direct read access to dmic_ch2 ready */
#define HSI_DMIC_CH2_READ_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_CH2_READ_RDY_READY_SHIFT)) & HSI_DMIC_CH2_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMIC_CH3_READ_RDY - Direct read access to dmic_ch3 ready */
/*! @{ */

#define HSI_DMIC_CH3_READ_RDY_READY_MASK         (0x1U)
#define HSI_DMIC_CH3_READ_RDY_READY_SHIFT        (0U)
/*! ready - Direct read access to dmic_ch3 ready */
#define HSI_DMIC_CH3_READ_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_CH3_READ_RDY_READY_SHIFT)) & HSI_DMIC_CH3_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMIC_CH4_READ_RDY - Direct read access to dmic_ch4 ready */
/*! @{ */

#define HSI_DMIC_CH4_READ_RDY_READY_MASK         (0x1U)
#define HSI_DMIC_CH4_READ_RDY_READY_SHIFT        (0U)
/*! ready - Direct read access to dmic_ch4 ready */
#define HSI_DMIC_CH4_READ_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_CH4_READ_RDY_READY_SHIFT)) & HSI_DMIC_CH4_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMIC_CH5_READ_RDY - Direct read access to dmic_ch5 ready */
/*! @{ */

#define HSI_DMIC_CH5_READ_RDY_READY_MASK         (0x1U)
#define HSI_DMIC_CH5_READ_RDY_READY_SHIFT        (0U)
/*! ready - Direct read access to dmic_ch5 ready */
#define HSI_DMIC_CH5_READ_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_CH5_READ_RDY_READY_SHIFT)) & HSI_DMIC_CH5_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMIC_CH6_READ_RDY - Direct read access to dmic_ch6 ready */
/*! @{ */

#define HSI_DMIC_CH6_READ_RDY_READY_MASK         (0x1U)
#define HSI_DMIC_CH6_READ_RDY_READY_SHIFT        (0U)
/*! ready - Direct read access to dmic_ch6 ready */
#define HSI_DMIC_CH6_READ_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_CH6_READ_RDY_READY_SHIFT)) & HSI_DMIC_CH6_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMIC_CH7_READ_RDY - Direct read access to dmic_ch7 ready */
/*! @{ */

#define HSI_DMIC_CH7_READ_RDY_READY_MASK         (0x1U)
#define HSI_DMIC_CH7_READ_RDY_READY_SHIFT        (0U)
/*! ready - Direct read access to dmic_ch7 ready */
#define HSI_DMIC_CH7_READ_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_CH7_READ_RDY_READY_SHIFT)) & HSI_DMIC_CH7_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMIC_AMIC_CH0_READ_RDY - Direct read access to dmic_amic_ch0 ready */
/*! @{ */

#define HSI_DMIC_AMIC_CH0_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMIC_AMIC_CH0_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dmic_amic_ch0 ready */
#define HSI_DMIC_AMIC_CH0_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_AMIC_CH0_READ_RDY_READY_SHIFT)) & HSI_DMIC_AMIC_CH0_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMIC_AMIC_CH1_READ_RDY - Direct read access to dmic_amic_ch1 ready */
/*! @{ */

#define HSI_DMIC_AMIC_CH1_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMIC_AMIC_CH1_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dmic_amic_ch1 ready */
#define HSI_DMIC_AMIC_CH1_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_AMIC_CH1_READ_RDY_READY_SHIFT)) & HSI_DMIC_AMIC_CH1_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMIC_AMIC_CH2_READ_RDY - Direct read access to dmic_amic_ch2 ready */
/*! @{ */

#define HSI_DMIC_AMIC_CH2_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMIC_AMIC_CH2_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dmic_amic_ch2 ready */
#define HSI_DMIC_AMIC_CH2_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMIC_AMIC_CH2_READ_RDY_READY_SHIFT)) & HSI_DMIC_AMIC_CH2_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO0_READ_RDY - Direct read access to dataport0_fifo0 ready */
/*! @{ */

#define HSI_DATAPORT0_FIFO0_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT0_FIFO0_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport0_fifo0 ready */
#define HSI_DATAPORT0_FIFO0_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO0_READ_RDY_READY_SHIFT)) & HSI_DATAPORT0_FIFO0_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO1_READ_RDY - Direct read access to dataport0_fifo1 ready */
/*! @{ */

#define HSI_DATAPORT0_FIFO1_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT0_FIFO1_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport0_fifo1 ready */
#define HSI_DATAPORT0_FIFO1_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO1_READ_RDY_READY_SHIFT)) & HSI_DATAPORT0_FIFO1_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO2_READ_RDY - Direct read access to dataport0_fifo2 ready */
/*! @{ */

#define HSI_DATAPORT0_FIFO2_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT0_FIFO2_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport0_fifo2 ready */
#define HSI_DATAPORT0_FIFO2_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO2_READ_RDY_READY_SHIFT)) & HSI_DATAPORT0_FIFO2_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO3_READ_RDY - Direct read access to dataport0_fifo3 ready */
/*! @{ */

#define HSI_DATAPORT0_FIFO3_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT0_FIFO3_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport0_fifo3 ready */
#define HSI_DATAPORT0_FIFO3_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO3_READ_RDY_READY_SHIFT)) & HSI_DATAPORT0_FIFO3_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO4_READ_RDY - Direct read access to dataport0_fifo4 ready */
/*! @{ */

#define HSI_DATAPORT0_FIFO4_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT0_FIFO4_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport0_fifo4 ready */
#define HSI_DATAPORT0_FIFO4_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO4_READ_RDY_READY_SHIFT)) & HSI_DATAPORT0_FIFO4_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO5_READ_RDY - Direct read access to dataport0_fifo5 ready */
/*! @{ */

#define HSI_DATAPORT0_FIFO5_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT0_FIFO5_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport0_fifo5 ready */
#define HSI_DATAPORT0_FIFO5_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO5_READ_RDY_READY_SHIFT)) & HSI_DATAPORT0_FIFO5_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO0_READ_RDY - Direct read access to dataport1_fifo0 ready */
/*! @{ */

#define HSI_DATAPORT1_FIFO0_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT1_FIFO0_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport1_fifo0 ready */
#define HSI_DATAPORT1_FIFO0_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO0_READ_RDY_READY_SHIFT)) & HSI_DATAPORT1_FIFO0_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO1_READ_RDY - Direct read access to dataport1_fifo1 ready */
/*! @{ */

#define HSI_DATAPORT1_FIFO1_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT1_FIFO1_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport1_fifo1 ready */
#define HSI_DATAPORT1_FIFO1_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO1_READ_RDY_READY_SHIFT)) & HSI_DATAPORT1_FIFO1_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO2_READ_RDY - Direct read access to dataport1_fifo2 ready */
/*! @{ */

#define HSI_DATAPORT1_FIFO2_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT1_FIFO2_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport1_fifo2 ready */
#define HSI_DATAPORT1_FIFO2_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO2_READ_RDY_READY_SHIFT)) & HSI_DATAPORT1_FIFO2_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO3_READ_RDY - Direct read access to dataport1_fifo3 ready */
/*! @{ */

#define HSI_DATAPORT1_FIFO3_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT1_FIFO3_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport1_fifo3 ready */
#define HSI_DATAPORT1_FIFO3_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO3_READ_RDY_READY_SHIFT)) & HSI_DATAPORT1_FIFO3_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO4_READ_RDY - Direct read access to dataport1_fifo4 ready */
/*! @{ */

#define HSI_DATAPORT1_FIFO4_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT1_FIFO4_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport1_fifo4 ready */
#define HSI_DATAPORT1_FIFO4_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO4_READ_RDY_READY_SHIFT)) & HSI_DATAPORT1_FIFO4_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO5_READ_RDY - Direct read access to dataport1_fifo5 ready */
/*! @{ */

#define HSI_DATAPORT1_FIFO5_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT1_FIFO5_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport1_fifo5 ready */
#define HSI_DATAPORT1_FIFO5_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO5_READ_RDY_READY_SHIFT)) & HSI_DATAPORT1_FIFO5_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO0_READ_RDY - Direct read access to dataport2_fifo0 ready */
/*! @{ */

#define HSI_DATAPORT2_FIFO0_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT2_FIFO0_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport2_fifo0 ready */
#define HSI_DATAPORT2_FIFO0_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO0_READ_RDY_READY_SHIFT)) & HSI_DATAPORT2_FIFO0_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO1_READ_RDY - Direct read access to dataport2_fifo1 ready */
/*! @{ */

#define HSI_DATAPORT2_FIFO1_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT2_FIFO1_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport2_fifo1 ready */
#define HSI_DATAPORT2_FIFO1_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO1_READ_RDY_READY_SHIFT)) & HSI_DATAPORT2_FIFO1_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO2_READ_RDY - Direct read access to dataport2_fifo2 ready */
/*! @{ */

#define HSI_DATAPORT2_FIFO2_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT2_FIFO2_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport2_fifo2 ready */
#define HSI_DATAPORT2_FIFO2_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO2_READ_RDY_READY_SHIFT)) & HSI_DATAPORT2_FIFO2_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO3_READ_RDY - Direct read access to dataport2_fifo3 ready */
/*! @{ */

#define HSI_DATAPORT2_FIFO3_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT2_FIFO3_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport2_fifo3 ready */
#define HSI_DATAPORT2_FIFO3_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO3_READ_RDY_READY_SHIFT)) & HSI_DATAPORT2_FIFO3_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO4_READ_RDY - Direct read access to dataport2_fifo4 ready */
/*! @{ */

#define HSI_DATAPORT2_FIFO4_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT2_FIFO4_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport2_fifo4 ready */
#define HSI_DATAPORT2_FIFO4_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO4_READ_RDY_READY_SHIFT)) & HSI_DATAPORT2_FIFO4_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO5_READ_RDY - Direct read access to dataport2_fifo5 ready */
/*! @{ */

#define HSI_DATAPORT2_FIFO5_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT2_FIFO5_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport2_fifo5 ready */
#define HSI_DATAPORT2_FIFO5_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO5_READ_RDY_READY_SHIFT)) & HSI_DATAPORT2_FIFO5_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO0_READ_RDY - Direct read access to dataport3_fifo0 ready */
/*! @{ */

#define HSI_DATAPORT3_FIFO0_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT3_FIFO0_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport3_fifo0 ready */
#define HSI_DATAPORT3_FIFO0_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO0_READ_RDY_READY_SHIFT)) & HSI_DATAPORT3_FIFO0_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO1_READ_RDY - Direct read access to dataport3_fifo1 ready */
/*! @{ */

#define HSI_DATAPORT3_FIFO1_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT3_FIFO1_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport3_fifo1 ready */
#define HSI_DATAPORT3_FIFO1_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO1_READ_RDY_READY_SHIFT)) & HSI_DATAPORT3_FIFO1_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO2_READ_RDY - Direct read access to dataport3_fifo2 ready */
/*! @{ */

#define HSI_DATAPORT3_FIFO2_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT3_FIFO2_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport3_fifo2 ready */
#define HSI_DATAPORT3_FIFO2_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO2_READ_RDY_READY_SHIFT)) & HSI_DATAPORT3_FIFO2_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO3_READ_RDY - Direct read access to dataport3_fifo3 ready */
/*! @{ */

#define HSI_DATAPORT3_FIFO3_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT3_FIFO3_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport3_fifo3 ready */
#define HSI_DATAPORT3_FIFO3_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO3_READ_RDY_READY_SHIFT)) & HSI_DATAPORT3_FIFO3_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO4_READ_RDY - Direct read access to dataport3_fifo4 ready */
/*! @{ */

#define HSI_DATAPORT3_FIFO4_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT3_FIFO4_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport3_fifo4 ready */
#define HSI_DATAPORT3_FIFO4_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO4_READ_RDY_READY_SHIFT)) & HSI_DATAPORT3_FIFO4_READ_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO5_READ_RDY - Direct read access to dataport3_fifo5 ready */
/*! @{ */

#define HSI_DATAPORT3_FIFO5_READ_RDY_READY_MASK  (0x1U)
#define HSI_DATAPORT3_FIFO5_READ_RDY_READY_SHIFT (0U)
/*! ready - Direct read access to dataport3_fifo5 ready */
#define HSI_DATAPORT3_FIFO5_READ_RDY_READY(x)    (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO5_READ_RDY_READY_SHIFT)) & HSI_DATAPORT3_FIFO5_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL0_READ_RDY - Direct read access to dma_channel0 ready */
/*! @{ */

#define HSI_DMA_CHANNEL0_READ_RDY_READY_MASK     (0x1U)
#define HSI_DMA_CHANNEL0_READ_RDY_READY_SHIFT    (0U)
/*! ready - Direct read access to dma_channel0 ready */
#define HSI_DMA_CHANNEL0_READ_RDY_READY(x)       (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL0_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL0_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL1_READ_RDY - Direct read access to dma_channel1 ready */
/*! @{ */

#define HSI_DMA_CHANNEL1_READ_RDY_READY_MASK     (0x1U)
#define HSI_DMA_CHANNEL1_READ_RDY_READY_SHIFT    (0U)
/*! ready - Direct read access to dma_channel1 ready */
#define HSI_DMA_CHANNEL1_READ_RDY_READY(x)       (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL1_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL1_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL2_READ_RDY - Direct read access to dma_channel2 ready */
/*! @{ */

#define HSI_DMA_CHANNEL2_READ_RDY_READY_MASK     (0x1U)
#define HSI_DMA_CHANNEL2_READ_RDY_READY_SHIFT    (0U)
/*! ready - Direct read access to dma_channel2 ready */
#define HSI_DMA_CHANNEL2_READ_RDY_READY(x)       (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL2_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL2_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL3_READ_RDY - Direct read access to dma_channel3 ready */
/*! @{ */

#define HSI_DMA_CHANNEL3_READ_RDY_READY_MASK     (0x1U)
#define HSI_DMA_CHANNEL3_READ_RDY_READY_SHIFT    (0U)
/*! ready - Direct read access to dma_channel3 ready */
#define HSI_DMA_CHANNEL3_READ_RDY_READY(x)       (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL3_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL3_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL4_READ_RDY - Direct read access to dma_channel4 ready */
/*! @{ */

#define HSI_DMA_CHANNEL4_READ_RDY_READY_MASK     (0x1U)
#define HSI_DMA_CHANNEL4_READ_RDY_READY_SHIFT    (0U)
/*! ready - Direct read access to dma_channel4 ready */
#define HSI_DMA_CHANNEL4_READ_RDY_READY(x)       (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL4_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL4_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL5_READ_RDY - Direct read access to dma_channel5 ready */
/*! @{ */

#define HSI_DMA_CHANNEL5_READ_RDY_READY_MASK     (0x1U)
#define HSI_DMA_CHANNEL5_READ_RDY_READY_SHIFT    (0U)
/*! ready - Direct read access to dma_channel5 ready */
#define HSI_DMA_CHANNEL5_READ_RDY_READY(x)       (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL5_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL5_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL6_READ_RDY - Direct read access to dma_channel6 ready */
/*! @{ */

#define HSI_DMA_CHANNEL6_READ_RDY_READY_MASK     (0x1U)
#define HSI_DMA_CHANNEL6_READ_RDY_READY_SHIFT    (0U)
/*! ready - Direct read access to dma_channel6 ready */
#define HSI_DMA_CHANNEL6_READ_RDY_READY(x)       (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL6_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL6_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL7_READ_RDY - Direct read access to dma_channel7 ready */
/*! @{ */

#define HSI_DMA_CHANNEL7_READ_RDY_READY_MASK     (0x1U)
#define HSI_DMA_CHANNEL7_READ_RDY_READY_SHIFT    (0U)
/*! ready - Direct read access to dma_channel7 ready */
#define HSI_DMA_CHANNEL7_READ_RDY_READY(x)       (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL7_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL7_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL8_READ_RDY - Direct read access to dma_channel8 ready */
/*! @{ */

#define HSI_DMA_CHANNEL8_READ_RDY_READY_MASK     (0x1U)
#define HSI_DMA_CHANNEL8_READ_RDY_READY_SHIFT    (0U)
/*! ready - Direct read access to dma_channel8 ready */
#define HSI_DMA_CHANNEL8_READ_RDY_READY(x)       (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL8_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL8_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL9_READ_RDY - Direct read access to dma_channel9 ready */
/*! @{ */

#define HSI_DMA_CHANNEL9_READ_RDY_READY_MASK     (0x1U)
#define HSI_DMA_CHANNEL9_READ_RDY_READY_SHIFT    (0U)
/*! ready - Direct read access to dma_channel9 ready */
#define HSI_DMA_CHANNEL9_READ_RDY_READY(x)       (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL9_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL9_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL10_READ_RDY - Direct read access to dma_channel10 ready */
/*! @{ */

#define HSI_DMA_CHANNEL10_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL10_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel10 ready */
#define HSI_DMA_CHANNEL10_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL10_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL10_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL11_READ_RDY - Direct read access to dma_channel11 ready */
/*! @{ */

#define HSI_DMA_CHANNEL11_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL11_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel11 ready */
#define HSI_DMA_CHANNEL11_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL11_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL11_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL12_READ_RDY - Direct read access to dma_channel12 ready */
/*! @{ */

#define HSI_DMA_CHANNEL12_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL12_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel12 ready */
#define HSI_DMA_CHANNEL12_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL12_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL12_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL13_READ_RDY - Direct read access to dma_channel13 ready */
/*! @{ */

#define HSI_DMA_CHANNEL13_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL13_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel13 ready */
#define HSI_DMA_CHANNEL13_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL13_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL13_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL14_READ_RDY - Direct read access to dma_channel14 ready */
/*! @{ */

#define HSI_DMA_CHANNEL14_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL14_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel14 ready */
#define HSI_DMA_CHANNEL14_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL14_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL14_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL15_READ_RDY - Direct read access to dma_channel15 ready */
/*! @{ */

#define HSI_DMA_CHANNEL15_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL15_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel15 ready */
#define HSI_DMA_CHANNEL15_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL15_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL15_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL16_READ_RDY - Direct read access to dma_channel16 ready */
/*! @{ */

#define HSI_DMA_CHANNEL16_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL16_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel16 ready */
#define HSI_DMA_CHANNEL16_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL16_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL16_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL17_READ_RDY - Direct read access to dma_channel17 ready */
/*! @{ */

#define HSI_DMA_CHANNEL17_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL17_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel17 ready */
#define HSI_DMA_CHANNEL17_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL17_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL17_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL18_READ_RDY - Direct read access to dma_channel18 ready */
/*! @{ */

#define HSI_DMA_CHANNEL18_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL18_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel18 ready */
#define HSI_DMA_CHANNEL18_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL18_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL18_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL19_READ_RDY - Direct read access to dma_channel19 ready */
/*! @{ */

#define HSI_DMA_CHANNEL19_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL19_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel19 ready */
#define HSI_DMA_CHANNEL19_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL19_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL19_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL20_READ_RDY - Direct read access to dma_channel20 ready */
/*! @{ */

#define HSI_DMA_CHANNEL20_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL20_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel20 ready */
#define HSI_DMA_CHANNEL20_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL20_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL20_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL21_READ_RDY - Direct read access to dma_channel21 ready */
/*! @{ */

#define HSI_DMA_CHANNEL21_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL21_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel21 ready */
#define HSI_DMA_CHANNEL21_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL21_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL21_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL22_READ_RDY - Direct read access to dma_channel22 ready */
/*! @{ */

#define HSI_DMA_CHANNEL22_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL22_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel22 ready */
#define HSI_DMA_CHANNEL22_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL22_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL22_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL23_READ_RDY - Direct read access to dma_channel23 ready */
/*! @{ */

#define HSI_DMA_CHANNEL23_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL23_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel23 ready */
#define HSI_DMA_CHANNEL23_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL23_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL23_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL24_READ_RDY - Direct read access to dma_channel24 ready */
/*! @{ */

#define HSI_DMA_CHANNEL24_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL24_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel24 ready */
#define HSI_DMA_CHANNEL24_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL24_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL24_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL25_READ_RDY - Direct read access to dma_channel25 ready */
/*! @{ */

#define HSI_DMA_CHANNEL25_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL25_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel25 ready */
#define HSI_DMA_CHANNEL25_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL25_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL25_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL26_READ_RDY - Direct read access to dma_channel26 ready */
/*! @{ */

#define HSI_DMA_CHANNEL26_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL26_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel26 ready */
#define HSI_DMA_CHANNEL26_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL26_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL26_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL27_READ_RDY - Direct read access to dma_channel27 ready */
/*! @{ */

#define HSI_DMA_CHANNEL27_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL27_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel27 ready */
#define HSI_DMA_CHANNEL27_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL27_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL27_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL28_READ_RDY - Direct read access to dma_channel28 ready */
/*! @{ */

#define HSI_DMA_CHANNEL28_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL28_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel28 ready */
#define HSI_DMA_CHANNEL28_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL28_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL28_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL29_READ_RDY - Direct read access to dma_channel29 ready */
/*! @{ */

#define HSI_DMA_CHANNEL29_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL29_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel29 ready */
#define HSI_DMA_CHANNEL29_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL29_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL29_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL30_READ_RDY - Direct read access to dma_channel30 ready */
/*! @{ */

#define HSI_DMA_CHANNEL30_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL30_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel30 ready */
#define HSI_DMA_CHANNEL30_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL30_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL30_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL31_READ_RDY - Direct read access to dma_channel31 ready */
/*! @{ */

#define HSI_DMA_CHANNEL31_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL31_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel31 ready */
#define HSI_DMA_CHANNEL31_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL31_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL31_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL32_READ_RDY - Direct read access to dma_channel32 ready */
/*! @{ */

#define HSI_DMA_CHANNEL32_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL32_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel32 ready */
#define HSI_DMA_CHANNEL32_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL32_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL32_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL33_READ_RDY - Direct read access to dma_channel33 ready */
/*! @{ */

#define HSI_DMA_CHANNEL33_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL33_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel33 ready */
#define HSI_DMA_CHANNEL33_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL33_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL33_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL34_READ_RDY - Direct read access to dma_channel34 ready */
/*! @{ */

#define HSI_DMA_CHANNEL34_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL34_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel34 ready */
#define HSI_DMA_CHANNEL34_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL34_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL34_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL35_READ_RDY - Direct read access to dma_channel35 ready */
/*! @{ */

#define HSI_DMA_CHANNEL35_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL35_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel35 ready */
#define HSI_DMA_CHANNEL35_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL35_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL35_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL36_READ_RDY - Direct read access to dma_channel36 ready */
/*! @{ */

#define HSI_DMA_CHANNEL36_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL36_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel36 ready */
#define HSI_DMA_CHANNEL36_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL36_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL36_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL37_READ_RDY - Direct read access to dma_channel37 ready */
/*! @{ */

#define HSI_DMA_CHANNEL37_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL37_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel37 ready */
#define HSI_DMA_CHANNEL37_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL37_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL37_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL38_READ_RDY - Direct read access to dma_channel38 ready */
/*! @{ */

#define HSI_DMA_CHANNEL38_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL38_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel38 ready */
#define HSI_DMA_CHANNEL38_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL38_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL38_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL39_READ_RDY - Direct read access to dma_channel39 ready */
/*! @{ */

#define HSI_DMA_CHANNEL39_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL39_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel39 ready */
#define HSI_DMA_CHANNEL39_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL39_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL39_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL40_READ_RDY - Direct read access to dma_channel40 ready */
/*! @{ */

#define HSI_DMA_CHANNEL40_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL40_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel40 ready */
#define HSI_DMA_CHANNEL40_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL40_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL40_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL41_READ_RDY - Direct read access to dma_channel41 ready */
/*! @{ */

#define HSI_DMA_CHANNEL41_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL41_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel41 ready */
#define HSI_DMA_CHANNEL41_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL41_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL41_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL42_READ_RDY - Direct read access to dma_channel42 ready */
/*! @{ */

#define HSI_DMA_CHANNEL42_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL42_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel42 ready */
#define HSI_DMA_CHANNEL42_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL42_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL42_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL43_READ_RDY - Direct read access to dma_channel43 ready */
/*! @{ */

#define HSI_DMA_CHANNEL43_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL43_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel43 ready */
#define HSI_DMA_CHANNEL43_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL43_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL43_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL44_READ_RDY - Direct read access to dma_channel44 ready */
/*! @{ */

#define HSI_DMA_CHANNEL44_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL44_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel44 ready */
#define HSI_DMA_CHANNEL44_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL44_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL44_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL45_READ_RDY - Direct read access to dma_channel45 ready */
/*! @{ */

#define HSI_DMA_CHANNEL45_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL45_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel45 ready */
#define HSI_DMA_CHANNEL45_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL45_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL45_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL46_READ_RDY - Direct read access to dma_channel46 ready */
/*! @{ */

#define HSI_DMA_CHANNEL46_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL46_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel46 ready */
#define HSI_DMA_CHANNEL46_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL46_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL46_READ_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL47_READ_RDY - Direct read access to dma_channel47 ready */
/*! @{ */

#define HSI_DMA_CHANNEL47_READ_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL47_READ_RDY_READY_SHIFT   (0U)
/*! ready - Direct read access to dma_channel47 ready */
#define HSI_DMA_CHANNEL47_READ_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL47_READ_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL47_READ_RDY_READY_MASK)
/*! @} */

/*! @name DSP_PORT0_READ_RDY - Direct read access to dsp_port0 ready */
/*! @{ */

#define HSI_DSP_PORT0_READ_RDY_READY_MASK        (0x1U)
#define HSI_DSP_PORT0_READ_RDY_READY_SHIFT       (0U)
/*! ready - Direct read access to dsp_port0 ready */
#define HSI_DSP_PORT0_READ_RDY_READY(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DSP_PORT0_READ_RDY_READY_SHIFT)) & HSI_DSP_PORT0_READ_RDY_READY_MASK)
/*! @} */

/*! @name DSP_PORT1_READ_RDY - Direct read access to dsp_port1 ready */
/*! @{ */

#define HSI_DSP_PORT1_READ_RDY_READY_MASK        (0x1U)
#define HSI_DSP_PORT1_READ_RDY_READY_SHIFT       (0U)
/*! ready - Direct read access to dsp_port1 ready */
#define HSI_DSP_PORT1_READ_RDY_READY(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DSP_PORT1_READ_RDY_READY_SHIFT)) & HSI_DSP_PORT1_READ_RDY_READY_MASK)
/*! @} */

/*! @name DSP_PORT2_READ_RDY - Direct read access to dsp_port2 ready */
/*! @{ */

#define HSI_DSP_PORT2_READ_RDY_READY_MASK        (0x1U)
#define HSI_DSP_PORT2_READ_RDY_READY_SHIFT       (0U)
/*! ready - Direct read access to dsp_port2 ready */
#define HSI_DSP_PORT2_READ_RDY_READY(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DSP_PORT2_READ_RDY_READY_SHIFT)) & HSI_DSP_PORT2_READ_RDY_READY_MASK)
/*! @} */

/*! @name DSP_PORT3_READ_RDY - Direct read access to dsp_port3 ready */
/*! @{ */

#define HSI_DSP_PORT3_READ_RDY_READY_MASK        (0x1U)
#define HSI_DSP_PORT3_READ_RDY_READY_SHIFT       (0U)
/*! ready - Direct read access to dsp_port3 ready */
#define HSI_DSP_PORT3_READ_RDY_READY(x)          (((uint32_t)(((uint32_t)(x)) << HSI_DSP_PORT3_READ_RDY_READY_SHIFT)) & HSI_DSP_PORT3_READ_RDY_READY_MASK)
/*! @} */

/*! @name ANC_MON0_READ_RDY - Direct read access to anc_mon0 ready */
/*! @{ */

#define HSI_ANC_MON0_READ_RDY_READY_MASK         (0x1U)
#define HSI_ANC_MON0_READ_RDY_READY_SHIFT        (0U)
/*! ready - Direct read access to anc_mon0 ready */
#define HSI_ANC_MON0_READ_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_ANC_MON0_READ_RDY_READY_SHIFT)) & HSI_ANC_MON0_READ_RDY_READY_MASK)
/*! @} */

/*! @name ANC_MON1_READ_RDY - Direct read access to anc_mon1 ready */
/*! @{ */

#define HSI_ANC_MON1_READ_RDY_READY_MASK         (0x1U)
#define HSI_ANC_MON1_READ_RDY_READY_SHIFT        (0U)
/*! ready - Direct read access to anc_mon1 ready */
#define HSI_ANC_MON1_READ_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_ANC_MON1_READ_RDY_READY_SHIFT)) & HSI_ANC_MON1_READ_RDY_READY_MASK)
/*! @} */

/*! @name ANC_MON2_READ_RDY - Direct read access to anc_mon2 ready */
/*! @{ */

#define HSI_ANC_MON2_READ_RDY_READY_MASK         (0x1U)
#define HSI_ANC_MON2_READ_RDY_READY_SHIFT        (0U)
/*! ready - Direct read access to anc_mon2 ready */
#define HSI_ANC_MON2_READ_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_ANC_MON2_READ_RDY_READY_SHIFT)) & HSI_ANC_MON2_READ_RDY_READY_MASK)
/*! @} */

/*! @name ANC_MON3_READ_RDY - Direct read access to anc_mon3 ready */
/*! @{ */

#define HSI_ANC_MON3_READ_RDY_READY_MASK         (0x1U)
#define HSI_ANC_MON3_READ_RDY_READY_SHIFT        (0U)
/*! ready - Direct read access to anc_mon3 ready */
#define HSI_ANC_MON3_READ_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_ANC_MON3_READ_RDY_READY_SHIFT)) & HSI_ANC_MON3_READ_RDY_READY_MASK)
/*! @} */

/*! @name ANC_MON4_READ_RDY - Direct read access to anc_mon4 ready */
/*! @{ */

#define HSI_ANC_MON4_READ_RDY_READY_MASK         (0x1U)
#define HSI_ANC_MON4_READ_RDY_READY_SHIFT        (0U)
/*! ready - Direct read access to anc_mon4 ready */
#define HSI_ANC_MON4_READ_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_ANC_MON4_READ_RDY_READY_SHIFT)) & HSI_ANC_MON4_READ_RDY_READY_MASK)
/*! @} */

/*! @name ANC_MON5_READ_RDY - Direct read access to anc_mon5 ready */
/*! @{ */

#define HSI_ANC_MON5_READ_RDY_READY_MASK         (0x1U)
#define HSI_ANC_MON5_READ_RDY_READY_SHIFT        (0U)
/*! ready - Direct read access to anc_mon5 ready */
#define HSI_ANC_MON5_READ_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_ANC_MON5_READ_RDY_READY_SHIFT)) & HSI_ANC_MON5_READ_RDY_READY_MASK)
/*! @} */

/*! @name NONE_WRITE_RDY - Direct write access to none_ready */
/*! @{ */

#define HSI_NONE_WRITE_RDY_READY_MASK            (0x1U)
#define HSI_NONE_WRITE_RDY_READY_SHIFT           (0U)
/*! ready - Direct write access to none_ready */
#define HSI_NONE_WRITE_RDY_READY(x)              (((uint32_t)(((uint32_t)(x)) << HSI_NONE_WRITE_RDY_READY_SHIFT)) & HSI_NONE_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name NULL_WRITE_RDY - Direct write access to null_ready */
/*! @{ */

#define HSI_NULL_WRITE_RDY_READY_MASK            (0x1U)
#define HSI_NULL_WRITE_RDY_READY_SHIFT           (0U)
/*! ready - Direct write access to null_ready */
#define HSI_NULL_WRITE_RDY_READY(x)              (((uint32_t)(((uint32_t)(x)) << HSI_NULL_WRITE_RDY_READY_SHIFT)) & HSI_NULL_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO0_WRITE_RDY - Direct write access to dataport0_fifo0_ready */
/*! @{ */

#define HSI_DATAPORT0_FIFO0_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT0_FIFO0_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport0_fifo0_ready */
#define HSI_DATAPORT0_FIFO0_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO0_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT0_FIFO0_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO1_WRITE_RDY - Direct write access to dataport0_fifo1_ready */
/*! @{ */

#define HSI_DATAPORT0_FIFO1_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT0_FIFO1_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport0_fifo1_ready */
#define HSI_DATAPORT0_FIFO1_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO1_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT0_FIFO1_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO2_WRITE_RDY - Direct write access to dataport0_fifo2_ready */
/*! @{ */

#define HSI_DATAPORT0_FIFO2_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT0_FIFO2_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport0_fifo2_ready */
#define HSI_DATAPORT0_FIFO2_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO2_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT0_FIFO2_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO3_WRITE_RDY - Direct write access to dataport0_fifo3_ready */
/*! @{ */

#define HSI_DATAPORT0_FIFO3_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT0_FIFO3_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport0_fifo3_ready */
#define HSI_DATAPORT0_FIFO3_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO3_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT0_FIFO3_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO4_WRITE_RDY - Direct write access to dataport0_fifo4_ready */
/*! @{ */

#define HSI_DATAPORT0_FIFO4_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT0_FIFO4_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport0_fifo4_ready */
#define HSI_DATAPORT0_FIFO4_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO4_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT0_FIFO4_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT0_FIFO5_WRITE_RDY - Direct write access to dataport0_fifo5_ready */
/*! @{ */

#define HSI_DATAPORT0_FIFO5_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT0_FIFO5_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport0_fifo5_ready */
#define HSI_DATAPORT0_FIFO5_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT0_FIFO5_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT0_FIFO5_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO0_WRITE_RDY - Direct write access to dataport1_fifo0_ready */
/*! @{ */

#define HSI_DATAPORT1_FIFO0_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT1_FIFO0_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport1_fifo0_ready */
#define HSI_DATAPORT1_FIFO0_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO0_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT1_FIFO0_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO1_WRITE_RDY - Direct write access to dataport1_fifo1_ready */
/*! @{ */

#define HSI_DATAPORT1_FIFO1_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT1_FIFO1_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport1_fifo1_ready */
#define HSI_DATAPORT1_FIFO1_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO1_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT1_FIFO1_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO2_WRITE_RDY - Direct write access to dataport1_fifo2_ready */
/*! @{ */

#define HSI_DATAPORT1_FIFO2_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT1_FIFO2_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport1_fifo2_ready */
#define HSI_DATAPORT1_FIFO2_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO2_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT1_FIFO2_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO3_WRITE_RDY - Direct write access to dataport1_fifo3_ready */
/*! @{ */

#define HSI_DATAPORT1_FIFO3_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT1_FIFO3_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport1_fifo3_ready */
#define HSI_DATAPORT1_FIFO3_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO3_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT1_FIFO3_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO4_WRITE_RDY - Direct write access to dataport1_fifo4_ready */
/*! @{ */

#define HSI_DATAPORT1_FIFO4_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT1_FIFO4_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport1_fifo4_ready */
#define HSI_DATAPORT1_FIFO4_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO4_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT1_FIFO4_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT1_FIFO5_WRITE_RDY - Direct write access to dataport1_fifo5_ready */
/*! @{ */

#define HSI_DATAPORT1_FIFO5_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT1_FIFO5_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport1_fifo5_ready */
#define HSI_DATAPORT1_FIFO5_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT1_FIFO5_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT1_FIFO5_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO0_WRITE_RDY - Direct write access to dataport2_fifo0_ready */
/*! @{ */

#define HSI_DATAPORT2_FIFO0_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT2_FIFO0_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport2_fifo0_ready */
#define HSI_DATAPORT2_FIFO0_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO0_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT2_FIFO0_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO1_WRITE_RDY - Direct write access to dataport2_fifo1_ready */
/*! @{ */

#define HSI_DATAPORT2_FIFO1_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT2_FIFO1_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport2_fifo1_ready */
#define HSI_DATAPORT2_FIFO1_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO1_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT2_FIFO1_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO2_WRITE_RDY - Direct write access to dataport2_fifo2_ready */
/*! @{ */

#define HSI_DATAPORT2_FIFO2_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT2_FIFO2_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport2_fifo2_ready */
#define HSI_DATAPORT2_FIFO2_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO2_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT2_FIFO2_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO3_WRITE_RDY - Direct write access to dataport2_fifo3_ready */
/*! @{ */

#define HSI_DATAPORT2_FIFO3_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT2_FIFO3_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport2_fifo3_ready */
#define HSI_DATAPORT2_FIFO3_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO3_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT2_FIFO3_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO4_WRITE_RDY - Direct write access to dataport2_fifo4_ready */
/*! @{ */

#define HSI_DATAPORT2_FIFO4_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT2_FIFO4_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport2_fifo4_ready */
#define HSI_DATAPORT2_FIFO4_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO4_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT2_FIFO4_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT2_FIFO5_WRITE_RDY - Direct write access to dataport2_fifo5_ready */
/*! @{ */

#define HSI_DATAPORT2_FIFO5_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT2_FIFO5_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport2_fifo5_ready */
#define HSI_DATAPORT2_FIFO5_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT2_FIFO5_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT2_FIFO5_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO0_WRITE_RDY - Direct write access to dataport3_fifo0_ready */
/*! @{ */

#define HSI_DATAPORT3_FIFO0_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT3_FIFO0_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport3_fifo0_ready */
#define HSI_DATAPORT3_FIFO0_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO0_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT3_FIFO0_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO1_WRITE_RDY - Direct write access to dataport3_fifo1_ready */
/*! @{ */

#define HSI_DATAPORT3_FIFO1_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT3_FIFO1_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport3_fifo1_ready */
#define HSI_DATAPORT3_FIFO1_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO1_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT3_FIFO1_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO2_WRITE_RDY - Direct write access to dataport3_fifo2_ready */
/*! @{ */

#define HSI_DATAPORT3_FIFO2_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT3_FIFO2_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport3_fifo2_ready */
#define HSI_DATAPORT3_FIFO2_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO2_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT3_FIFO2_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO3_WRITE_RDY - Direct write access to dataport3_fifo3_ready */
/*! @{ */

#define HSI_DATAPORT3_FIFO3_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT3_FIFO3_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport3_fifo3_ready */
#define HSI_DATAPORT3_FIFO3_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO3_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT3_FIFO3_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO4_WRITE_RDY - Direct write access to dataport3_fifo4_ready */
/*! @{ */

#define HSI_DATAPORT3_FIFO4_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT3_FIFO4_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport3_fifo4_ready */
#define HSI_DATAPORT3_FIFO4_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO4_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT3_FIFO4_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DATAPORT3_FIFO5_WRITE_RDY - Direct write access to dataport3_fifo5_ready */
/*! @{ */

#define HSI_DATAPORT3_FIFO5_WRITE_RDY_READY_MASK (0x1U)
#define HSI_DATAPORT3_FIFO5_WRITE_RDY_READY_SHIFT (0U)
/*! ready - Direct write access to dataport3_fifo5_ready */
#define HSI_DATAPORT3_FIFO5_WRITE_RDY_READY(x)   (((uint32_t)(((uint32_t)(x)) << HSI_DATAPORT3_FIFO5_WRITE_RDY_READY_SHIFT)) & HSI_DATAPORT3_FIFO5_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name ANC_DMA_IN0_WRITE_RDY - Direct write access to anc_dma_in0_ready */
/*! @{ */

#define HSI_ANC_DMA_IN0_WRITE_RDY_READY_MASK     (0x1U)
#define HSI_ANC_DMA_IN0_WRITE_RDY_READY_SHIFT    (0U)
/*! ready - Direct write access to anc_dma_in0_ready */
#define HSI_ANC_DMA_IN0_WRITE_RDY_READY(x)       (((uint32_t)(((uint32_t)(x)) << HSI_ANC_DMA_IN0_WRITE_RDY_READY_SHIFT)) & HSI_ANC_DMA_IN0_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name ANC_DMA_IN1_WRITE_RDY - Direct write access to anc_dma_in1_ready */
/*! @{ */

#define HSI_ANC_DMA_IN1_WRITE_RDY_READY_MASK     (0x1U)
#define HSI_ANC_DMA_IN1_WRITE_RDY_READY_SHIFT    (0U)
/*! ready - Direct write access to anc_dma_in1_ready */
#define HSI_ANC_DMA_IN1_WRITE_RDY_READY(x)       (((uint32_t)(((uint32_t)(x)) << HSI_ANC_DMA_IN1_WRITE_RDY_READY_SHIFT)) & HSI_ANC_DMA_IN1_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DSP_PORT0_WRITE_RDY - Direct write access to dsp_port0_ready */
/*! @{ */

#define HSI_DSP_PORT0_WRITE_RDY_READY_MASK       (0x1U)
#define HSI_DSP_PORT0_WRITE_RDY_READY_SHIFT      (0U)
/*! ready - Direct write access to dsp_port0_ready */
#define HSI_DSP_PORT0_WRITE_RDY_READY(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DSP_PORT0_WRITE_RDY_READY_SHIFT)) & HSI_DSP_PORT0_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DSP_PORT1_WRITE_RDY - Direct write access to dsp_port1_ready */
/*! @{ */

#define HSI_DSP_PORT1_WRITE_RDY_READY_MASK       (0x1U)
#define HSI_DSP_PORT1_WRITE_RDY_READY_SHIFT      (0U)
/*! ready - Direct write access to dsp_port1_ready */
#define HSI_DSP_PORT1_WRITE_RDY_READY(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DSP_PORT1_WRITE_RDY_READY_SHIFT)) & HSI_DSP_PORT1_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DSP_PORT2_WRITE_RDY - Direct write access to dsp_port2_ready */
/*! @{ */

#define HSI_DSP_PORT2_WRITE_RDY_READY_MASK       (0x1U)
#define HSI_DSP_PORT2_WRITE_RDY_READY_SHIFT      (0U)
/*! ready - Direct write access to dsp_port2_ready */
#define HSI_DSP_PORT2_WRITE_RDY_READY(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DSP_PORT2_WRITE_RDY_READY_SHIFT)) & HSI_DSP_PORT2_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DSP_PORT3_WRITE_RDY - Direct write access to dsp_port3_ready */
/*! @{ */

#define HSI_DSP_PORT3_WRITE_RDY_READY_MASK       (0x1U)
#define HSI_DSP_PORT3_WRITE_RDY_READY_SHIFT      (0U)
/*! ready - Direct write access to dsp_port3_ready */
#define HSI_DSP_PORT3_WRITE_RDY_READY(x)         (((uint32_t)(((uint32_t)(x)) << HSI_DSP_PORT3_WRITE_RDY_READY_SHIFT)) & HSI_DSP_PORT3_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL0_WRITE_RDY - Direct write access to dma_channel0_ready */
/*! @{ */

#define HSI_DMA_CHANNEL0_WRITE_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL0_WRITE_RDY_READY_SHIFT   (0U)
/*! ready - Direct write access to dma_channel0_ready */
#define HSI_DMA_CHANNEL0_WRITE_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL0_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL0_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL1_WRITE_RDY - Direct write access to dma_channel1_ready */
/*! @{ */

#define HSI_DMA_CHANNEL1_WRITE_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL1_WRITE_RDY_READY_SHIFT   (0U)
/*! ready - Direct write access to dma_channel1_ready */
#define HSI_DMA_CHANNEL1_WRITE_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL1_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL1_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL2_WRITE_RDY - Direct write access to dma_channel2_ready */
/*! @{ */

#define HSI_DMA_CHANNEL2_WRITE_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL2_WRITE_RDY_READY_SHIFT   (0U)
/*! ready - Direct write access to dma_channel2_ready */
#define HSI_DMA_CHANNEL2_WRITE_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL2_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL2_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL3_WRITE_RDY - Direct write access to dma_channel3_ready */
/*! @{ */

#define HSI_DMA_CHANNEL3_WRITE_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL3_WRITE_RDY_READY_SHIFT   (0U)
/*! ready - Direct write access to dma_channel3_ready */
#define HSI_DMA_CHANNEL3_WRITE_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL3_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL3_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL4_WRITE_RDY - Direct write access to dma_channel4_ready */
/*! @{ */

#define HSI_DMA_CHANNEL4_WRITE_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL4_WRITE_RDY_READY_SHIFT   (0U)
/*! ready - Direct write access to dma_channel4_ready */
#define HSI_DMA_CHANNEL4_WRITE_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL4_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL4_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL5_WRITE_RDY - Direct write access to dma_channel5_ready */
/*! @{ */

#define HSI_DMA_CHANNEL5_WRITE_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL5_WRITE_RDY_READY_SHIFT   (0U)
/*! ready - Direct write access to dma_channel5_ready */
#define HSI_DMA_CHANNEL5_WRITE_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL5_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL5_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL6_WRITE_RDY - Direct write access to dma_channel6_ready */
/*! @{ */

#define HSI_DMA_CHANNEL6_WRITE_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL6_WRITE_RDY_READY_SHIFT   (0U)
/*! ready - Direct write access to dma_channel6_ready */
#define HSI_DMA_CHANNEL6_WRITE_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL6_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL6_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL7_WRITE_RDY - Direct write access to dma_channel7_ready */
/*! @{ */

#define HSI_DMA_CHANNEL7_WRITE_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL7_WRITE_RDY_READY_SHIFT   (0U)
/*! ready - Direct write access to dma_channel7_ready */
#define HSI_DMA_CHANNEL7_WRITE_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL7_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL7_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL8_WRITE_RDY - Direct write access to dma_channel8_ready */
/*! @{ */

#define HSI_DMA_CHANNEL8_WRITE_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL8_WRITE_RDY_READY_SHIFT   (0U)
/*! ready - Direct write access to dma_channel8_ready */
#define HSI_DMA_CHANNEL8_WRITE_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL8_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL8_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL9_WRITE_RDY - Direct write access to dma_channel9_ready */
/*! @{ */

#define HSI_DMA_CHANNEL9_WRITE_RDY_READY_MASK    (0x1U)
#define HSI_DMA_CHANNEL9_WRITE_RDY_READY_SHIFT   (0U)
/*! ready - Direct write access to dma_channel9_ready */
#define HSI_DMA_CHANNEL9_WRITE_RDY_READY(x)      (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL9_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL9_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL10_WRITE_RDY - Direct write access to dma_channel10_ready */
/*! @{ */

#define HSI_DMA_CHANNEL10_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL10_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel10_ready */
#define HSI_DMA_CHANNEL10_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL10_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL10_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL11_WRITE_RDY - Direct write access to dma_channel11_ready */
/*! @{ */

#define HSI_DMA_CHANNEL11_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL11_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel11_ready */
#define HSI_DMA_CHANNEL11_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL11_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL11_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL12_WRITE_RDY - Direct write access to dma_channel12_ready */
/*! @{ */

#define HSI_DMA_CHANNEL12_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL12_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel12_ready */
#define HSI_DMA_CHANNEL12_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL12_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL12_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL13_WRITE_RDY - Direct write access to dma_channel13_ready */
/*! @{ */

#define HSI_DMA_CHANNEL13_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL13_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel13_ready */
#define HSI_DMA_CHANNEL13_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL13_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL13_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL14_WRITE_RDY - Direct write access to dma_channel14_ready */
/*! @{ */

#define HSI_DMA_CHANNEL14_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL14_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel14_ready */
#define HSI_DMA_CHANNEL14_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL14_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL14_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL15_WRITE_RDY - Direct write access to dma_channel15_ready */
/*! @{ */

#define HSI_DMA_CHANNEL15_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL15_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel15_ready */
#define HSI_DMA_CHANNEL15_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL15_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL15_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL16_WRITE_RDY - Direct write access to dma_channel16_ready */
/*! @{ */

#define HSI_DMA_CHANNEL16_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL16_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel16_ready */
#define HSI_DMA_CHANNEL16_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL16_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL16_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL17_WRITE_RDY - Direct write access to dma_channel17_ready */
/*! @{ */

#define HSI_DMA_CHANNEL17_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL17_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel17_ready */
#define HSI_DMA_CHANNEL17_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL17_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL17_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL18_WRITE_RDY - Direct write access to dma_channel18_ready */
/*! @{ */

#define HSI_DMA_CHANNEL18_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL18_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel18_ready */
#define HSI_DMA_CHANNEL18_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL18_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL18_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL19_WRITE_RDY - Direct write access to dma_channel19_ready */
/*! @{ */

#define HSI_DMA_CHANNEL19_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL19_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel19_ready */
#define HSI_DMA_CHANNEL19_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL19_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL19_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL20_WRITE_RDY - Direct write access to dma_channel20_ready */
/*! @{ */

#define HSI_DMA_CHANNEL20_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL20_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel20_ready */
#define HSI_DMA_CHANNEL20_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL20_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL20_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL21_WRITE_RDY - Direct write access to dma_channel21_ready */
/*! @{ */

#define HSI_DMA_CHANNEL21_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL21_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel21_ready */
#define HSI_DMA_CHANNEL21_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL21_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL21_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL22_WRITE_RDY - Direct write access to dma_channel22_ready */
/*! @{ */

#define HSI_DMA_CHANNEL22_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL22_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel22_ready */
#define HSI_DMA_CHANNEL22_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL22_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL22_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL23_WRITE_RDY - Direct write access to dma_channel23_ready */
/*! @{ */

#define HSI_DMA_CHANNEL23_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL23_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel23_ready */
#define HSI_DMA_CHANNEL23_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL23_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL23_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL24_WRITE_RDY - Direct write access to dma_channel24_ready */
/*! @{ */

#define HSI_DMA_CHANNEL24_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL24_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel24_ready */
#define HSI_DMA_CHANNEL24_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL24_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL24_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL25_WRITE_RDY - Direct write access to dma_channel25_ready */
/*! @{ */

#define HSI_DMA_CHANNEL25_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL25_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel25_ready */
#define HSI_DMA_CHANNEL25_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL25_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL25_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL26_WRITE_RDY - Direct write access to dma_channel26_ready */
/*! @{ */

#define HSI_DMA_CHANNEL26_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL26_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel26_ready */
#define HSI_DMA_CHANNEL26_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL26_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL26_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL27_WRITE_RDY - Direct write access to dma_channel27_ready */
/*! @{ */

#define HSI_DMA_CHANNEL27_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL27_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel27_ready */
#define HSI_DMA_CHANNEL27_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL27_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL27_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL28_WRITE_RDY - Direct write access to dma_channel28_ready */
/*! @{ */

#define HSI_DMA_CHANNEL28_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL28_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel28_ready */
#define HSI_DMA_CHANNEL28_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL28_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL28_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL29_WRITE_RDY - Direct write access to dma_channel29_ready */
/*! @{ */

#define HSI_DMA_CHANNEL29_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL29_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel29_ready */
#define HSI_DMA_CHANNEL29_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL29_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL29_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL30_WRITE_RDY - Direct write access to dma_channel30_ready */
/*! @{ */

#define HSI_DMA_CHANNEL30_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL30_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel30_ready */
#define HSI_DMA_CHANNEL30_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL30_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL30_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL31_WRITE_RDY - Direct write access to dma_channel31_ready */
/*! @{ */

#define HSI_DMA_CHANNEL31_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL31_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel31_ready */
#define HSI_DMA_CHANNEL31_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL31_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL31_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL32_WRITE_RDY - Direct write access to dma_channel32_ready */
/*! @{ */

#define HSI_DMA_CHANNEL32_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL32_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel32_ready */
#define HSI_DMA_CHANNEL32_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL32_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL32_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL33_WRITE_RDY - Direct write access to dma_channel33_ready */
/*! @{ */

#define HSI_DMA_CHANNEL33_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL33_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel33_ready */
#define HSI_DMA_CHANNEL33_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL33_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL33_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL34_WRITE_RDY - Direct write access to dma_channel34_ready */
/*! @{ */

#define HSI_DMA_CHANNEL34_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL34_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel34_ready */
#define HSI_DMA_CHANNEL34_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL34_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL34_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL35_WRITE_RDY - Direct write access to dma_channel35_ready */
/*! @{ */

#define HSI_DMA_CHANNEL35_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL35_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel35_ready */
#define HSI_DMA_CHANNEL35_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL35_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL35_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL36_WRITE_RDY - Direct write access to dma_channel36_ready */
/*! @{ */

#define HSI_DMA_CHANNEL36_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL36_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel36_ready */
#define HSI_DMA_CHANNEL36_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL36_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL36_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL37_WRITE_RDY - Direct write access to dma_channel37_ready */
/*! @{ */

#define HSI_DMA_CHANNEL37_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL37_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel37_ready */
#define HSI_DMA_CHANNEL37_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL37_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL37_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL38_WRITE_RDY - Direct write access to dma_channel38_ready */
/*! @{ */

#define HSI_DMA_CHANNEL38_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL38_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel38_ready */
#define HSI_DMA_CHANNEL38_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL38_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL38_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL39_WRITE_RDY - Direct write access to dma_channel39_ready */
/*! @{ */

#define HSI_DMA_CHANNEL39_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL39_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel39_ready */
#define HSI_DMA_CHANNEL39_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL39_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL39_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL40_WRITE_RDY - Direct write access to dma_channel40_ready */
/*! @{ */

#define HSI_DMA_CHANNEL40_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL40_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel40_ready */
#define HSI_DMA_CHANNEL40_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL40_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL40_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL41_WRITE_RDY - Direct write access to dma_channel41_ready */
/*! @{ */

#define HSI_DMA_CHANNEL41_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL41_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel41_ready */
#define HSI_DMA_CHANNEL41_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL41_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL41_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL42_WRITE_RDY - Direct write access to dma_channel42_ready */
/*! @{ */

#define HSI_DMA_CHANNEL42_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL42_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel42_ready */
#define HSI_DMA_CHANNEL42_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL42_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL42_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL43_WRITE_RDY - Direct write access to dma_channel43_ready */
/*! @{ */

#define HSI_DMA_CHANNEL43_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL43_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel43_ready */
#define HSI_DMA_CHANNEL43_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL43_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL43_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL44_WRITE_RDY - Direct write access to dma_channel44_ready */
/*! @{ */

#define HSI_DMA_CHANNEL44_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL44_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel44_ready */
#define HSI_DMA_CHANNEL44_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL44_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL44_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL45_WRITE_RDY - Direct write access to dma_channel45_ready */
/*! @{ */

#define HSI_DMA_CHANNEL45_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL45_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel45_ready */
#define HSI_DMA_CHANNEL45_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL45_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL45_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL46_WRITE_RDY - Direct write access to dma_channel46_ready */
/*! @{ */

#define HSI_DMA_CHANNEL46_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL46_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel46_ready */
#define HSI_DMA_CHANNEL46_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL46_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL46_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name DMA_CHANNEL47_WRITE_RDY - Direct write access to dma_channel47_ready */
/*! @{ */

#define HSI_DMA_CHANNEL47_WRITE_RDY_READY_MASK   (0x1U)
#define HSI_DMA_CHANNEL47_WRITE_RDY_READY_SHIFT  (0U)
/*! ready - Direct write access to dma_channel47_ready */
#define HSI_DMA_CHANNEL47_WRITE_RDY_READY(x)     (((uint32_t)(((uint32_t)(x)) << HSI_DMA_CHANNEL47_WRITE_RDY_READY_SHIFT)) & HSI_DMA_CHANNEL47_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name BQE_CH0_WRITE_RDY - Direct write access to bqe_ch0_ready */
/*! @{ */

#define HSI_BQE_CH0_WRITE_RDY_READY_MASK         (0x1U)
#define HSI_BQE_CH0_WRITE_RDY_READY_SHIFT        (0U)
/*! ready - Direct write access to bqe_ch0_ready */
#define HSI_BQE_CH0_WRITE_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_BQE_CH0_WRITE_RDY_READY_SHIFT)) & HSI_BQE_CH0_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name BQE_CH1_WRITE_RDY - Direct write access to bqe_ch1_ready */
/*! @{ */

#define HSI_BQE_CH1_WRITE_RDY_READY_MASK         (0x1U)
#define HSI_BQE_CH1_WRITE_RDY_READY_SHIFT        (0U)
/*! ready - Direct write access to bqe_ch1_ready */
#define HSI_BQE_CH1_WRITE_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_BQE_CH1_WRITE_RDY_READY_SHIFT)) & HSI_BQE_CH1_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name BQE_CH2_WRITE_RDY - Direct write access to bqe_ch2_ready */
/*! @{ */

#define HSI_BQE_CH2_WRITE_RDY_READY_MASK         (0x1U)
#define HSI_BQE_CH2_WRITE_RDY_READY_SHIFT        (0U)
/*! ready - Direct write access to bqe_ch2_ready */
#define HSI_BQE_CH2_WRITE_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_BQE_CH2_WRITE_RDY_READY_SHIFT)) & HSI_BQE_CH2_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name BQE_CH3_WRITE_RDY - Direct write access to bqe_ch3_ready */
/*! @{ */

#define HSI_BQE_CH3_WRITE_RDY_READY_MASK         (0x1U)
#define HSI_BQE_CH3_WRITE_RDY_READY_SHIFT        (0U)
/*! ready - Direct write access to bqe_ch3_ready */
#define HSI_BQE_CH3_WRITE_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_BQE_CH3_WRITE_RDY_READY_SHIFT)) & HSI_BQE_CH3_WRITE_RDY_READY_MASK)
/*! @} */

/*! @name BQE_CH4_WRITE_RDY - Direct write access to bqe_ch4_ready */
/*! @{ */

#define HSI_BQE_CH4_WRITE_RDY_READY_MASK         (0x1U)
#define HSI_BQE_CH4_WRITE_RDY_READY_SHIFT        (0U)
/*! ready - Direct write access to bqe_ch4_ready */
#define HSI_BQE_CH4_WRITE_RDY_READY(x)           (((uint32_t)(((uint32_t)(x)) << HSI_BQE_CH4_WRITE_RDY_READY_SHIFT)) & HSI_BQE_CH4_WRITE_RDY_READY_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group HSI_Register_Masks */


/*!
 * @}
 */ /* end of group HSI_Peripheral_Access_Layer */


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


#endif  /* PERI_HSI_H_ */

