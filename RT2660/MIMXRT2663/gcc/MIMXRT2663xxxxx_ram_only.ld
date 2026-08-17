/*
** ###################################################################
**     Processors:          MIMXRT2663AHP8A_cm85
**                          MIMXRT2663AVV8A_cm85
**                          MIMXRT2663CHPAA_cm85
**                          MIMXRT2663CVVAA_cm85
**                          MIMXRT2663DHPAA_cm85
**                          MIMXRT2663DVVAA_cm85
**                          MIMXRT2663XHP8A_cm85
**                          MIMXRT2663XHPAA_cm85
**                          MIMXRT2663XVV8A_cm85
**                          MIMXRT2663XVVAA_cm85
**
**     Compiler:            GNU C Compiler
**     Reference manual:    iMXRT2660RM Rev.1 DraftN, 08/2026
**     Version:             rev. 1.0, 2026-08-18
**     Build:               b260818
**
**     Abstract:
**         Linker file for the GNU C Compiler
**
**     Copyright 2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2026 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
** ###################################################################
*/

ENTRY(Reset_Handler)

/* ========================== Hardware addresses ========================== */
/* ======================================================================== */
m_flash_start          = 0x60000000;
m_flash_size           = 0x04000000;
m_itcm_start           = 0x00000000;
m_itcm_size            = 0x00040000;
m_dtcm_start           = 0x20000000;
m_dtcm_size            = 0x00040000;
m_sram0_start          = 0x22000000;
m_sram0_size           = 0x00040000;
m_sram1_start          = 0x22040000;
m_sram1_size           = 0x00040000;
m_sram2_start          = 0x22080000;
m_sram2_size           = 0x00040000;
m_psram_start          = 0x88000000;
m_psram_size           = 0x02000000;

/* ========================== Offsets and sizes =========================== */
/* ======================================================================== */
m_usdhc_xmcd_offset    = 0x0;
m_usdhc_xmcd_size      = DEFINED(__usdhc_boot_header_enable__) ? 0x800  : 0;
m_usdhc_container_offset = 0x800;
m_usdhc_container_size = DEFINED(__usdhc_boot_header_enable__) ? 0x9000 : 0;
m_app_image_offset     = DEFINED(__usdhc_boot_header_enable__) ? 0xC000 : 0;
m_xmcd_offset          = m_usdhc_xmcd_offset;
m_xmcd_size            = m_usdhc_xmcd_size;
m_container_offset     = m_usdhc_container_offset;
m_container_size       = m_usdhc_container_size;
m_vector_table_size    = 0x600;
m_ncache_alloc_size    = 0x20000;

/* ====================== Region start/end addresses ====================== */
/* ======================================================================== */
m_xmcd_start           = m_itcm_start + m_xmcd_offset;
m_container_start      = m_itcm_start + m_container_offset;
m_ncache_start         = m_sram2_start + m_sram2_size - m_ncache_alloc_size;
m_dataext_start        = m_sram0_start;
m_dataext_size         = m_sram0_size + m_sram1_size;

_size_cstack_          = DEFINED(__stack_size__) ? __stack_size__ : 0x1000;
_size_heap_            = DEFINED(__heap_size__)  ? __heap_size__  : 0x1000;

m_stack_start          = m_dtcm_start + m_dtcm_size - _size_cstack_;
m_stack_size           = _size_cstack_;
m_heap_size            = _size_heap_;
m_heap_start           = DEFINED(__heap_noncacheable__)
                         ? (m_ncache_start + m_ncache_alloc_size - _size_heap_)
                         : m_sram2_start;
m_ncache_size          = m_ncache_alloc_size
                         - (DEFINED(__heap_noncacheable__) ? _size_heap_ : 0);

/* ================ Target specific CODE / DATA addresses ================= */
/* ======================================================================== */
m_interrupts_start     = m_itcm_start + m_app_image_offset;
m_interrupts_size      = m_vector_table_size;
m_code_start           = m_interrupts_start + m_vector_table_size;
m_code_size            = m_itcm_size - m_app_image_offset - m_vector_table_size;
m_data_start           = m_dtcm_start;
m_data_size            = m_dtcm_size - _size_cstack_;

/* ====================== Provided symbol fallbacks ======================= */
/* ======================================================================== */
PROVIDE(__text_root_start__     = 0);
PROVIDE(__text_root_end__       = 0);
PROVIDE(__TEXT_ROM              = 0);
PROVIDE(__text_start__          = 0);
PROVIDE(__text_end__            = 0);

PROVIDE(__QACODE_ROM            = 0);
PROVIDE(__qacode_start__        = 0);
PROVIDE(__qacode_end__          = 0);
PROVIDE(__APP_QACODE_ROM        = 0);
PROVIDE(__app_qacode_start__    = 0);
PROVIDE(__app_qacode_end__      = 0);

PROVIDE(__QADATA_ROM            = 0);
PROVIDE(__qadata_start__        = 0);
PROVIDE(__qadata_end__          = 0);

/* ============================ Memory regions ============================ */
/* ======================================================================== */
MEMORY
{
  m_xmcd_data      (RX) : ORIGIN = m_xmcd_start,                       LENGTH = m_xmcd_size
  m_container_data (RX) : ORIGIN = m_container_start,                  LENGTH = m_container_size
  m_interrupts     (RX) : ORIGIN = m_interrupts_start,                 LENGTH = m_interrupts_size
  m_code           (RWX): ORIGIN = m_code_start,                       LENGTH = m_code_size
  m_data           (RW) : ORIGIN = m_data_start,                       LENGTH = m_data_size
  m_ncache         (RW) : ORIGIN = m_ncache_start,                     LENGTH = m_ncache_size
  m_heap           (RW) : ORIGIN = m_heap_start,                       LENGTH = m_heap_size
  m_stack          (RW) : ORIGIN = m_stack_start,                      LENGTH = m_stack_size
  m_dataext        (RW) : ORIGIN = m_dataext_start,                    LENGTH = m_dataext_size
}

/* =============================== Sections =============================== */
/* ======================================================================== */
SECTIONS
{
  /* --- Boot headers (ITCM: XMCD at 0x0 + Container at 0x800)            */
  /* --- Active only when __usdhc_boot_header_enable__ is defined.        */
  .xmcd      : { KEEP(*(.boot_hdr.xmcd_data)) } > m_xmcd_data
  .container : { KEEP(*(.boot_hdr.container)) } > m_container_data

  /* ---------------------------- Vector table ---------------------------- */
  .interrupts :
  {
    . = ALIGN(4);
    __Vectors = .;
    KEEP(*(.isr_vector))
    . = ALIGN(4);
  } > m_interrupts

  /* --- Main code (.text + ARM unwind tables + merged CodeQuickAccess) --- */
  .text : ALIGN(4)
  {
    *(.text)
    *(.text*)
    *(CodeQuickAccess)
    *(.rodata)
    *(.rodata*)
    *(.glue_7) *(.glue_7t) *(.eh_frame)
    KEEP(*(.init))
    KEEP(*(.fini))
    *(.ARM.extab* .gnu.linkonce.armextab.*)
    __exidx_start = .;
    *(.ARM.exidx*)
    __exidx_end = .;
    . = ALIGN(4);
  } > m_code

  /* ------------------------ C runtime init/fini ------------------------- */
  .ctors :
  {
    __CTOR_LIST__ = .;
    KEEP(*crtbegin.o(.ctors))
    KEEP(*crtbegin?.o(.ctors))
    KEEP(*(EXCLUDE_FILE(*crtend?.o *crtend.o) .ctors))
    KEEP(*(SORT(.ctors.*)))
    KEEP(*(.ctors))
    __CTOR_END__ = .;
  } > m_code
  .dtors :
  {
    __DTOR_LIST__ = .;
    KEEP(*crtbegin.o(.dtors))
    KEEP(*crtbegin?.o(.dtors))
    KEEP(*(EXCLUDE_FILE(*crtend?.o *crtend.o) .dtors))
    KEEP(*(SORT(.dtors.*)))
    KEEP(*(.dtors))
    __DTOR_END__ = .;
  } > m_code
  .preinit_array :
  {
    PROVIDE_HIDDEN (__preinit_array_start = .);
    KEEP(*(.preinit_array*))
    PROVIDE_HIDDEN (__preinit_array_end = .);
  } > m_code
  .init_array :
  {
    PROVIDE_HIDDEN (__init_array_start = .);
    KEEP(*(SORT(.init_array.*)))
    KEEP(*(.init_array*))
    PROVIDE_HIDDEN (__init_array_end = .);
  } > m_code
  .fini_array :
  {
    PROVIDE_HIDDEN (__fini_array_start = .);
    KEEP(*(SORT(.fini_array.*)))
    KEEP(*(.fini_array*))
    PROVIDE_HIDDEN (__fini_array_end = .);
  } > m_code
  __etext = .;

  /* ----------------- Standard RW data (VMA=DTCM) ------------------------ */
  .data : ALIGN(4)
  {
    __data_start__ = .;
    *(DataQuickAccess)
    *(.data)
    *(.data*)
    KEEP(*(.jcr*))
    . = ALIGN(4);
    __data_end__ = .;
  } > m_data AT > m_code
  __DATA_ROM = LOADADDR(.data);

  /* ---- Cache-line-aligned data (32B aligned, for D-cache-safe DMA) ----- */
  .cacheline_data : ALIGN(32)
  {
    __cacheline_data_start__ = .;
    *(CacheLineData.init)
    . = ALIGN(32);
    __cacheline_data_end__ = .;
  } > m_data AT > m_code
  __CACHELINE_ROM = LOADADDR(.cacheline_data);

  .cacheline_bss (NOLOAD) : ALIGN(32)
  {
    __cacheline_bss_start__ = .;
    *(CacheLineData)
    . = ALIGN(32);
    __cacheline_bss_end__ = .;
  } > m_data

  /* -- Non-cacheable data (framebuffer / DMA / shared with peripherals) -- */
  .ncache.init : ALIGN(4)
  {
    __noncache_data_start__ = .;
    *(NonCacheable.init)
    . = ALIGN(4);
    __noncache_data_end__ = .;
  } > m_ncache AT > m_code
  __NDATA_ROM = LOADADDR(.ncache.init);

  .ncache (NOLOAD) :
  {
    . = ALIGN(4);
    __noncache_bss_start__ = .;
    *(NonCacheable)
    . = ALIGN(4);
    __noncache_bss_end__ = .;
  } > m_ncache

  /* -------- BSS (zero-init) and no-init (retained across reset) --------- */
  .bss :
  {
    . = ALIGN(4);
    __bss_start__ = .;
    *(.bss)
    *(.bss*)
    *(COMMON)
    . = ALIGN(4);
    __bss_end__ = .;
  } > m_data

  .noinit (NOLOAD) :
  {
    . = ALIGN(4);
    __noinit_start__ = .;
    *(.noinit)
    *(.noinit*)
    . = ALIGN(4);
    __noinit_end__ = .;
  } > m_data

  /* --------- Heap and Stack (both in dedicated MEMORY regions) ---------- */
  .heap (NOLOAD) :
  {
    . = ALIGN(8);
    __HeapBase  = .;
    PROVIDE(end = .);
    . += _size_heap_;
    __HeapLimit = .;
  } > m_heap

  .stack (NOLOAD) :
  {
    . = ALIGN(8);
    __StackLimit = .;
    . += _size_cstack_;
    __StackTop   = .;
  } > m_stack
  PROVIDE(__stack      = __StackTop);
  PROVIDE(__stack_size = _size_cstack_);

  /* ---- DATAEXT: user overflow region (SRAM0+SRAM1, 512 KB, opt-in) ----- */
  .dataext.init : ALIGN(4)
  {
    __dataext_data_start__ = .;
    /* user: add wildcards for initialized data going to m_dataext */
    . = ALIGN(4);
    __dataext_data_end__ = .;
  } > m_dataext AT > m_code
  __DATAEXT_ROM = LOADADDR(.dataext.init);

  .dataext (NOLOAD) :
  {
    . = ALIGN(4);
    __dataext_bss_start__ = .;
    /* user: add wildcards for zero-init data going to m_dataext */
    . = ALIGN(4);
    __dataext_bss_end__ = .;
  } > m_dataext

  /* ---- Image sentinel: marks end of all ITCM-resident content ---------- */
  /* (text + all AT>m_code init images: .data, .cacheline_data, .ncache.init,
   * .dataext.init).  __CONTAINER_IMG_SIZE uses this to report the full
   * loaded image size to the boot container.
   *
   * For eMMC boot with ITCM as destination, the container image size must
   * be a multiple of 512 bytes (one eMMC sector).  ALIGN(512) pads the
   * LMA cursor to the next 512-byte boundary so __CONTAINER_IMG_SIZE is
   * always sector-aligned.                                                */
  .image_end : ALIGN(512)
  {
    __image_end = .;
  } > m_code

  text_data_end = __image_end;

  /* --------------------------- Sanity ASSERTs --------------------------- */
  ASSERT(_size_cstack_ > 0,
         "__stack_size__ must be > 0")
  ASSERT(_size_cstack_ < m_dtcm_size,
         "__stack_size__ must be less than DTCM size")
  ASSERT((_size_cstack_ & 7) == 0,
         "__stack_size__ must be 8-byte aligned")
  ASSERT(m_data_size > 0,
         "m_data region has no room (check __stack_size__ or PSRAM partition sizes)")
  ASSERT((_size_heap_ & 7) == 0,
         "__heap_size__ must be 8-byte aligned")
  ASSERT(!DEFINED(__heap_noncacheable__) || _size_heap_ < m_ncache_alloc_size,
         "__heap_size__ too large; heap carve-out would exhaust m_ncache")

  /* -------------------- ELF metadata (non-loadable) --------------------- */
  .ARM.attributes 0 : { *(.ARM.attributes) }
}

/* =========================== Exported symbols =========================== */
/* ======================================================================== */
__VECTOR_TABLE                = ORIGIN(m_interrupts);
__NCACHE_REGION_START         = ORIGIN(m_ncache);
__NCACHE_REGION_SIZE          = m_ncache_alloc_size;
/* Guard against underflow when boot header is disabled:
 * m_app_image_offset=0, m_container_offset=0x800 -> 0-0x800 wraps unsigned. */
__CONTAINER_IMG_OFFSET        = DEFINED(__usdhc_boot_header_enable__) ? (m_app_image_offset - m_container_offset) : 0;
__CONTAINER_IMG_LOAD_ADDR     = ORIGIN(m_interrupts);
__CONTAINER_IMG_ENTRY_ADDR    = ORIGIN(m_interrupts);
__CONTAINER_IMG_SIZE          = DEFINED(__usdhc_boot_header_enable__) ? (text_data_end - __VECTOR_TABLE) : 0;

