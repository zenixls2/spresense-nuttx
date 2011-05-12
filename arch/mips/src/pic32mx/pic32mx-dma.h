/********************************************************************************************
 * arch/mips/src/pic32mx/pic32mx-dma.h
 *
 *   Copyright (C) 2011 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <spudmonkey@racsa.co.cr>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ********************************************************************************************/

#ifndef __ARCH_MIPS_SRC_PIC32MX_PIC32MX_DMA_H
#define __ARCH_MIPS_SRC_PIC32MX_PIC32MX_DMA_H

/********************************************************************************************
 * Included Files
 ********************************************************************************************/

#include <nuttx/config.h>

#include "chip.h"
#include "pic32mx-memorymap.h"

#if CHIP_NDMACH > 0

/********************************************************************************************
 * Pre-Processor Definitions
 ********************************************************************************************/
/* Register Offsets *************************************************************************/
/* Global DMA Registers */

#define PIC32MX_DMA_CON_OFFSET        0x0000  /* DMA Controller Control Register */
#define PIC32MX_DMA_CONCLR_OFFSET     0x0004  /* DMA Controller Control Clear Register */
#define PIC32MX_DMA_CONSET_OFFSET     0x0008  /* DMA Controller Control Set Register */
#define PIC32MX_DMA_CONINV_OFFSET     0x000c  /* DMA Controller Control Invert Register */
#define PIC32MX_DMA_STAT_OFFSET       0x0010  /* DMA Status Register */
#define PIC32MX_DMA_ADD_OFFSETR       0x0020  /* DMA Address Register */
#define PIC32MX_DMA_CRCCON_OFFSET     0x0030  /* DMA CRC Control Register */
#define PIC32MX_DMA_CRCCONCLR_OFFSET  0x0034  /* DMA CRC Control Clear Register */
#define PIC32MX_DMA_CRCCONSET_OFFSET  0x0038  /* DMA CRC Control Set Register */
#define PIC32MX_DMA_CRCCONINV_OFFSET  0x003c  /* DMA CRC Control Invert Register */
#define PIC32MX_DMA_CRCDATA_OFFSET    0x0040  /* DMA CRC Data Register */
#define PIC32MX_DMA_CRCDATACLR_OFFSET 0x0044  /* DMA CRC Data Clear Register */
#define PIC32MX_DMA_CRCDATASET_OFFSET 0x0048  /* DMA CRC Data Set Register */
#define PIC32MX_DMA_CRCDATAINV_OFFSET 0x004c  /* DMA CRC Data Invert Register */
#define PIC32MX_DMA_CRCXOR_OFFSET     0x0050  /* DMA CRCXOR Enable Register */
#define PIC32MX_DMA_CRCXORCLR_OFFSET  0x0054  /* DMA CRCXOR Enable Clear Register */
#define PIC32MX_DMA_CRCXORSET_OFFSET  0x0058  /* DMA CRCXOR Enable Set Register */
#define PIC32MX_DMA_CRCXORINV_OFFSET  0x005c  /* DMA CRCXOR Enable Invert Register */

/* Per-Channel DMA Registers */

#define PIC32MX_DMACH_CON_OFFSET      0x0000  /* DMA Channel Control Register */
#define PIC32MX_DMACH_CONCLR_OFFSET   0x0004  /* DMA Channel Control Clear Register */
#define PIC32MX_DMACH_CONSET_OFFSET   0x0008  /* DMA Channel Control Set Register */
#define PIC32MX_DMACH_CONINV_OFFSET   0x000c  /* DMA Channel Control Invert Register */
#define PIC32MX_DMACH_ECON_OFFSET     0x0010  /* DMA Channel Event Control Register */
#define PIC32MX_DMACH_ECONCLR_OFFSET  0x0014  /* DMA Channel Event Control Clear Register */
#define PIC32MX_DMACH_ECONSET_OFFSET  0x0018  /* DMA Channel Event Control Set Register */
#define PIC32MX_DMACH_ECONINV_OFFSET  0x001c  /* DMA Channel Event Control Invert Register */
#define PIC32MX_DMACH_INT_OFFSET      0x0020  /* DMA Channel Interrupt Control Register */
#define PIC32MX_DMACH_INTCLR_OFFSET   0x0024  /* DMA Channel Interrupt Control Clear Register */
#define PIC32MX_DMACH_INTSET_OFFSET   0x0028  /* DMA Channel Interrupt Control Set Register */
#define PIC32MX_DMACH_INTINV_OFFSET   0x002c  /* DMA Channel Interrupt Control Invert Register */
#define PIC32MX_DMACH_SSA_OFFSET      0x0030  /* DMA Channel Source Start Address Register */
#define PIC32MX_DMACH_SSACLR_OFFSET   0x0034  /* DMA Channel Source Start Address Clear Register */
#define PIC32MX_DMACH_SSASET_OFFSET   0x0038  /* DMA Channel Source Start Address Set Register */
#define PIC32MX_DMACH_SSAINV_OFFSET   0x003c  /* DMA Channel Source Start Address Invert Register */
#define PIC32MX_DMACH_DSA_OFFSET      0x0040  /* DMA Channel Destination Start Address Register */
#define PIC32MX_DMACH_DSACLR_OFFSET   0x0044  /* DMA Channel Destination Start Address Clear Register */
#define PIC32MX_DMACH_DSASET_OFFSET   0x0048  /* DMA Channel Destination Start Address Set Register */
#define PIC32MX_DMACH_DSAINV_OFFSET   0x004c  /* DMA Channel Destination Start Address Invert Register */
#define PIC32MX_DMACH_SSIZ_OFFSET     0x0050  /* DMA Channel Source Size Register */
#define PIC32MX_DMACH_SSIZCLR_OFFSET  0x0054  /* DMA Channel Source Size Clear Register */
#define PIC32MX_DMACH_SSIZSET_OFFSET  0x0058  /* DMA Channel Source Size Set Register */
#define PIC32MX_DMACH_SSIZINV_OFFSET  0x005c  /* DMA Channel Source Size Invert Register */
#define PIC32MX_DMACH_DSIZ_OFFSET     0x0060  /* DMA Channel Destination Size Register */
#define PIC32MX_DMACH_DSIZCLR_OFFSET  0x0064  /* DMA Channel Destination Size Clear Register */
#define PIC32MX_DMACH_DSIZSET_OFFSET  0x0068  /* DMA Channel Destination Size Set Register */
#define PIC32MX_DMACH_DSIZINV_OFFSET  0x006c  /* DMA Channel Destination Size Invert Register */
#define PIC32MX_DMACH_SPTR_OFFSET     0x0070  /* DMA Channel Source Pointer Register */
#define PIC32MX_DMACH_DPTR_OFFSET     0x0080  /* DMA Channel Destination Pointer Register */
#define PIC32MX_DMACH_CSIZ_OFFSET     0x0090  /* DMA Channel Cell-Size Register */
#define PIC32MX_DMACH_CSIZCLR_OFFSET  0x0094  /* DMA Channel Cell-Size Clear Register */
#define PIC32MX_DMACH_CSIZSET_OFFSET  0x0098  /* DMA Channel Cell-Size Set Register */
#define PIC32MX_DMACH_CSIZINV_OFFSET  0x009c  /* DMA Channel Cell-Size Invert Register */
#define PIC32MX_DMACH_CPTR_OFFSET     0x00a0  /* DMA Channel Cell Pointer Register */
#define PIC32MX_DMACH_DAT_OFFSET      0x00b0  /* DMA Channel Pattern Data Register */
#define PIC32MX_DMACH_DATCLR_OFFSET   0x00b4  /* DMA Channel Pattern Data Clear Register */
#define PIC32MX_DMACH_DATSET_OFFSET   0x00b8  /* DMA Channel Pattern Data Set Register */
#define PIC32MX_DMACH_DATINV_OFFSET   0x00bc  /* DMA Channel Pattern Data Invert Register */

/* Register Addresses ***********************************************************************/
/* Global DMA Registers */

#define PIC32MX_DMA_CON               (PIC32MX_DMA_K1BASE+PIC32MX_DMA_CON_OFFSET)
#define PIC32MX_DMA_CONCLR            (PIC32MX_DMA_K1BASE+PIC32MX_DMA_CONCLR_OFFSET)
#define PIC32MX_DMA_CONSET            (PIC32MX_DMA_K1BASE+PIC32MX_DMA_CONSET_OFFSET)
#define PIC32MX_DMA_CONINV            (PIC32MX_DMA_K1BASE+PIC32MX_DMA_CONINV_OFFSET)
#define PIC32MX_DMA_STAT              (PIC32MX_DMA_K1BASE+PIC32MX_DMA_STAT_OFFSET)
#define PIC32MX_DMA_ADDR              (PIC32MX_DMA_K1BASE+PIC32MX_DMA_ADDR_OFFSET)
#define PIC32MX_DMA_CRCCON            (PIC32MX_DMA_K1BASE+PIC32MX_DMA_CRCCON_OFFSET)
#define PIC32MX_DMA_CRCCONCLR         (PIC32MX_DMA_K1BASE+PIC32MX_DMA_CRCCONCLR_OFFSET)
#define PIC32MX_DMA_CRCCONSET         (PIC32MX_DMA_K1BASE+PIC32MX_DMA_CRCCONSET_OFFSET)
#define PIC32MX_DMA_CRCCONINV         (PIC32MX_DMA_K1BASE+PIC32MX_DMA_CRCCONINV_OFFSET)
#define PIC32MX_DMA_CRCDATA           (PIC32MX_DMA_K1BASE+PIC32MX_DMA_CRCDATA_OFFSET)
#define PIC32MX_DMA_CRCDATACLR        (PIC32MX_DMA_K1BASE+PIC32MX_DMA_CRCDATACLR_OFFSET)
#define PIC32MX_DMA_CRCDATASET        (PIC32MX_DMA_K1BASE+PIC32MX_DMA_CRCDATASET_OFFSET)
#define PIC32MX_DMA_CRCDATAINV        (PIC32MX_DMA_K1BASE+PIC32MX_DMA_CRCDATAINV_OFFSET)
#define PIC32MX_DMA_CRCXOR            (PIC32MX_DMA_K1BASE+PIC32MX_DMA_CRCXOR_OFFSET)
#define PIC32MX_DMA_CRCXORCLR         (PIC32MX_DMA_K1BASE+PIC32MX_DMA_CRCXORCLR_OFFSET)
#define PIC32MX_DMA_CRCXORSET         (PIC32MX_DMA_K1BASE+PIC32MX_DMA_CRCXORSET_OFFSET)
#define PIC32MX_DMA_CRCXORINV         (PIC32MX_DMA_K1BASE+PIC32MX_DMA_CRCXORINV_OFFSET)

/* Per-Channel DMA Registers */

#define PIC32MX_DMACH_CON(n)          (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_CON_OFFSET)
#define PIC32MX_DMACH_CONCLR(n)       (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_CONCLR_OFFSET)
#define PIC32MX_DMACH_CONSET(n)       (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_CONSET_OFFSET)
#define PIC32MX_DMACH_CONINV(n)       (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_CONINV_OFFSET)
#define PIC32MX_DMACH_ECON(n)         (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_ECON_OFFSET)
#define PIC32MX_DMACH_ECONCLR(n)      (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_ECONCLR_OFFSET)
#define PIC32MX_DMACH_ECONSET(n)      (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_ECONSET_OFFSET)
#define PIC32MX_DMACH_ECONINV(n)      (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_ECONINV_OFFSET)
#define PIC32MX_DMACH_INT(n)          (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_INT_OFFSET)
#define PIC32MX_DMACH_INTCLR(n)       (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_INTCLR_OFFSET)
#define PIC32MX_DMACH_INTSET(n)       (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_INTSET_OFFSET)
#define PIC32MX_DMACH_INTINV(n)       (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_INTINV_OFFSET)
#define PIC32MX_DMACH_SSA(n)          (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_SSA_OFFSET)
#define PIC32MX_DMACH_SSACLR(n)       (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_SSACLR_OFFSET)
#define PIC32MX_DMACH_SSASET(n)       (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_SSASET_OFFSET)
#define PIC32MX_DMACH_SSAINV(n)       (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_SSAINV_OFFSET)
#define PIC32MX_DMACH_DSA(n)          (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_DSA_OFFSET)
#define PIC32MX_DMACH_DSACLR(n)       (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_DSACLR_OFFSET)
#define PIC32MX_DMACH_DSASET(n)       (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_DSASET_OFFSET)
#define PIC32MX_DMACH_DSAINV(n)       (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_DSAINV_OFFSET)
#define PIC32MX_DMACH_SSIZ(n)         (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_SSIZ_OFFSET)
#define PIC32MX_DMACH_SSIZCLR(n)      (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_SSIZCLR_OFFSET)
#define PIC32MX_DMACH_SSIZSET(n)      (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_SSIZSET_OFFSET)
#define PIC32MX_DMACH_SSIZINV(n)      (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_SSIZINV_OFFSET)
#define PIC32MX_DMACH_DSIZ(n)         (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_DSIZ_OFFSET)
#define PIC32MX_DMACH_DSIZCLR(n)      (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_DSIZCLR_OFFSET)
#define PIC32MX_DMACH_DSIZSET(n)      (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_DSIZSET_OFFSET)
#define PIC32MX_DMACH_DSIZINV(n)      (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_DSIZINV_OFFSET)
#define PIC32MX_DMACH_SPTR(n)         (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_SPTR_OFFSET)
#define PIC32MX_DMACH_DPTR(n)         (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_DPTR_OFFSET)
#define PIC32MX_DMACH_CSIZ(n)         (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_CSIZ_OFFSET)
#define PIC32MX_DMACH_CSIZCLR(n)      (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_CSIZCLR_OFFSET)
#define PIC32MX_DMACH_CSIZSET(n)      (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_CSIZSET_OFFSET)
#define PIC32MX_DMACH_CSIZINV(n)      (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_CSIZINV_OFFSET)
#define PIC32MX_DMACH_CPTR(n)         (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_CPTR_OFFSET)
#define PIC32MX_DMACH_DAT(n)          (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_DAT_OFFSET)
#define PIC32MX_DMACH_DATCLR(n)       (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_DATCLR_OFFSET)
#define PIC32MX_DMACH_DATSET(n)       (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_DATSET_OFFSET)
#define PIC32MX_DMACH_DATINV(n)       (PIC32MX_DMACH_K1BASE(n)+PIC32MX_DMACH_DATINV_OFFSET)

#define PIC32MX_DMACH0_CON            (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_CON_OFFSET)
#define PIC32MX_DMACH0_CONCLR         (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_CONCLR_OFFSET)
#define PIC32MX_DMACH0_CONSET         (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_CONSET_OFFSET)
#define PIC32MX_DMACH0_CONINV         (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_CONINV_OFFSET)
#define PIC32MX_DMACH0_ECON           (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_ECON_OFFSET)
#define PIC32MX_DMACH0_ECONCLR        (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_ECONCLR_OFFSET)
#define PIC32MX_DMACH0_ECONSET        (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_ECONSET_OFFSET)
#define PIC32MX_DMACH0_ECONINV        (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_ECONINV_OFFSET)
#define PIC32MX_DMACH0_INT            (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_INT_OFFSET)
#define PIC32MX_DMACH0_INTCLR         (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_INTCLR_OFFSET)
#define PIC32MX_DMACH0_INTSET         (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_INTSET_OFFSET)
#define PIC32MX_DMACH0_INTINV         (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_INTINV_OFFSET)
#define PIC32MX_DMACH0_SSA            (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_SSA_OFFSET)
#define PIC32MX_DMACH0_SSACLR         (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_SSACLR_OFFSET)
#define PIC32MX_DMACH0_SSASET         (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_SSASET_OFFSET)
#define PIC32MX_DMACH0_SSAINV         (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_SSAINV_OFFSET)
#define PIC32MX_DMACH0_DSA            (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_DSA_OFFSET)
#define PIC32MX_DMACH0_DSACLR         (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_DSACLR_OFFSET)
#define PIC32MX_DMACH0_DSASET         (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_DSASET_OFFSET)
#define PIC32MX_DMACH0_DSAINV         (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_DSAINV_OFFSET)
#define PIC32MX_DMACH0_SSIZ           (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_SSIZ_OFFSET)
#define PIC32MX_DMACH0_SSIZCLR        (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_SSIZCLR_OFFSET)
#define PIC32MX_DMACH0_SSIZSET        (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_SSIZSET_OFFSET)
#define PIC32MX_DMACH0_SSIZINV        (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_SSIZINV_OFFSET)
#define PIC32MX_DMACH0_DSIZ           (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_DSIZ_OFFSET)
#define PIC32MX_DMACH0_DSIZCLR        (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_DSIZCLR_OFFSET)
#define PIC32MX_DMACH0_DSIZSET        (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_DSIZSET_OFFSET)
#define PIC32MX_DMACH0_DSIZINV        (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_DSIZINV_OFFSET)
#define PIC32MX_DMACH0_SPTR           (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_SPTR_OFFSET)
#define PIC32MX_DMACH0_DPTR           (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_DPTR_OFFSET)
#define PIC32MX_DMACH0_CSIZ           (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_CSIZ_OFFSET)
#define PIC32MX_DMACH0_CSIZCLR        (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_CSIZCLR_OFFSET)
#define PIC32MX_DMACH0_CSIZSET        (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_CSIZSET_OFFSET)
#define PIC32MX_DMACH0_CSIZINV        (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_CSIZINV_OFFSET)
#define PIC32MX_DMACH0_CPTR           (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_CPTR_OFFSET)
#define PIC32MX_DMACH0_DAT            (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_DAT_OFFSET)
#define PIC32MX_DMACH0_DATCLR         (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_DATCLR_OFFSET)
#define PIC32MX_DMACH0_DATSET         (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_DATSET_OFFSET)
#define PIC32MX_DMACH0_DATINV         (PIC32MX_DMACH0_K1BASE+PIC32MX_DMACH_DATINV_OFFSET)

#if CHIP_NDMACH > 1
#  define PIC32MX_DMACH1_CON          (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_CON_OFFSET)
#  define PIC32MX_DMACH1_CONCLR       (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_CONCLR_OFFSET)
#  define PIC32MX_DMACH1_CONSET       (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_CONSET_OFFSET)
#  define PIC32MX_DMACH1_CONINV       (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_CONINV_OFFSET)
#  define PIC32MX_DMACH1_ECON         (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_ECON_OFFSET)
#  define PIC32MX_DMACH1_ECONCLR      (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_ECONCLR_OFFSET)
#  define PIC32MX_DMACH1_ECONSET      (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_ECONSET_OFFSET)
#  define PIC32MX_DMACH1_ECONINV      (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_ECONINV_OFFSET)
#  define PIC32MX_DMACH1_INT          (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_INT_OFFSET)
#  define PIC32MX_DMACH1_INTCLR       (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_INTCLR_OFFSET)
#  define PIC32MX_DMACH1_INTSET       (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_INTSET_OFFSET)
#  define PIC32MX_DMACH1_INTINV       (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_INTINV_OFFSET)
#  define PIC32MX_DMACH1_SSA          (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_SSA_OFFSET)
#  define PIC32MX_DMACH1_SSACLR       (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_SSACLR_OFFSET)
#  define PIC32MX_DMACH1_SSASET       (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_SSASET_OFFSET)
#  define PIC32MX_DMACH1_SSAINV       (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_SSAINV_OFFSET)
#  define PIC32MX_DMACH1_DSA          (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_DSA_OFFSET)
#  define PIC32MX_DMACH1_DSACLR       (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_DSACLR_OFFSET)
#  define PIC32MX_DMACH1_DSASET       (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_DSASET_OFFSET)
#  define PIC32MX_DMACH1_DSAINV       (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_DSAINV_OFFSET)
#  define PIC32MX_DMACH1_SSIZ         (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_SSIZ_OFFSET)
#  define PIC32MX_DMACH1_SSIZCLR      (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_SSIZCLR_OFFSET)
#  define PIC32MX_DMACH1_SSIZSET      (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_SSIZSET_OFFSET)
#  define PIC32MX_DMACH1_SSIZINV      (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_SSIZINV_OFFSET)
#  define PIC32MX_DMACH1_DSIZ         (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_DSIZ_OFFSET)
#  define PIC32MX_DMACH1_DSIZCLR      (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_DSIZCLR_OFFSET)
#  define PIC32MX_DMACH1_DSIZSET      (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_DSIZSET_OFFSET)
#  define PIC32MX_DMACH1_DSIZINV      (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_DSIZINV_OFFSET)
#  define PIC32MX_DMACH1_SPTR         (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_SPTR_OFFSET)
#  define PIC32MX_DMACH1_DPTR         (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_DPTR_OFFSET)
#  define PIC32MX_DMACH1_CSIZ         (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_CSIZ_OFFSET)
#  define PIC32MX_DMACH1_CSIZCLR      (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_CSIZCLR_OFFSET)
#  define PIC32MX_DMACH1_CSIZSET      (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_CSIZSET_OFFSET)
#  define PIC32MX_DMACH1_CSIZINV      (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_CSIZINV_OFFSET)
#  define PIC32MX_DMACH1_CPTR         (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_CPTR_OFFSET)
#  define PIC32MX_DMACH1_DAT          (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_DAT_OFFSET)
#  define PIC32MX_DMACH1_DATCLR       (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_DATCLR_OFFSET)
#  define PIC32MX_DMACH1_DATSET       (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_DATSET_OFFSET)
#  define PIC32MX_DMACH1_DATINV       (PIC32MX_DMACH1_K1BASE+PIC32MX_DMACH_DATINV_OFFSET)
#endif

#if CHIP_NDMACH > 2
#  define PIC32MX_DMACH2_CON          (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_CON_OFFSET)
#  define PIC32MX_DMACH2_CONCLR       (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_CONCLR_OFFSET)
#  define PIC32MX_DMACH2_CONSET       (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_CONSET_OFFSET)
#  define PIC32MX_DMACH2_CONINV       (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_CONINV_OFFSET)
#  define PIC32MX_DMACH2_ECON         (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_ECON_OFFSET)
#  define PIC32MX_DMACH2_ECONCLR      (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_ECONCLR_OFFSET)
#  define PIC32MX_DMACH2_ECONSET      (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_ECONSET_OFFSET)
#  define PIC32MX_DMACH2_ECONINV      (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_ECONINV_OFFSET)
#  define PIC32MX_DMACH2_INT          (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_INT_OFFSET)
#  define PIC32MX_DMACH2_INTCLR       (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_INTCLR_OFFSET)
#  define PIC32MX_DMACH2_INTSET       (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_INTSET_OFFSET)
#  define PIC32MX_DMACH2_INTINV       (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_INTINV_OFFSET)
#  define PIC32MX_DMACH2_SSA          (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_SSA_OFFSET)
#  define PIC32MX_DMACH2_SSACLR       (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_SSACLR_OFFSET)
#  define PIC32MX_DMACH2_SSASET       (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_SSASET_OFFSET)
#  define PIC32MX_DMACH2_SSAINV       (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_SSAINV_OFFSET)
#  define PIC32MX_DMACH2_DSA          (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_DSA_OFFSET)
#  define PIC32MX_DMACH2_DSACLR       (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_DSACLR_OFFSET)
#  define PIC32MX_DMACH2_DSASET       (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_DSASET_OFFSET)
#  define PIC32MX_DMACH2_DSAINV       (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_DSAINV_OFFSET)
#  define PIC32MX_DMACH2_SSIZ         (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_SSIZ_OFFSET)
#  define PIC32MX_DMACH2_SSIZCLR      (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_SSIZCLR_OFFSET)
#  define PIC32MX_DMACH2_SSIZSET      (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_SSIZSET_OFFSET)
#  define PIC32MX_DMACH2_SSIZINV      (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_SSIZINV_OFFSET)
#  define PIC32MX_DMACH2_DSIZ         (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_DSIZ_OFFSET)
#  define PIC32MX_DMACH2_DSIZCLR      (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_DSIZCLR_OFFSET)
#  define PIC32MX_DMACH2_DSIZSET      (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_DSIZSET_OFFSET)
#  define PIC32MX_DMACH2_DSIZINV      (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_DSIZINV_OFFSET)
#  define PIC32MX_DMACH2_SPTR         (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_SPTR_OFFSET)
#  define PIC32MX_DMACH2_DPTR         (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_DPTR_OFFSET)
#  define PIC32MX_DMACH2_CSIZ         (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_CSIZ_OFFSET)
#  define PIC32MX_DMACH2_CSIZCLR      (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_CSIZCLR_OFFSET)
#  define PIC32MX_DMACH2_CSIZSET      (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_CSIZSET_OFFSET)
#  define PIC32MX_DMACH2_CSIZINV      (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_CSIZINV_OFFSET)
#  define PIC32MX_DMACH2_CPTR         (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_CPTR_OFFSET)
#  define PIC32MX_DMACH2_DAT          (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_DAT_OFFSET)
#  define PIC32MX_DMACH2_DATCLR       (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_DATCLR_OFFSET)
#  define PIC32MX_DMACH2_DATSET       (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_DATSET_OFFSET)
#  define PIC32MX_DMACH2_DATINV       (PIC32MX_DMACH2_K1BASE+PIC32MX_DMACH_DATINV_OFFSET)

#if CHIP_NDMACH > 3
#  define PIC32MX_DMACH3_CON          (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_CON_OFFSET)
#  define PIC32MX_DMACH3_CONCLR       (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_CONCLR_OFFSET)
#  define PIC32MX_DMACH3_CONSET       (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_CONSET_OFFSET)
#  define PIC32MX_DMACH3_CONINV       (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_CONINV_OFFSET)
#  define PIC32MX_DMACH3_ECON         (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_ECON_OFFSET)
#  define PIC32MX_DMACH3_ECONCLR      (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_ECONCLR_OFFSET)
#  define PIC32MX_DMACH3_ECONSET      (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_ECONSET_OFFSET)
#  define PIC32MX_DMACH3_ECONINV      (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_ECONINV_OFFSET)
#  define PIC32MX_DMACH3_INT          (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_INT_OFFSET)
#  define PIC32MX_DMACH3_INTCLR       (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_INTCLR_OFFSET)
#  define PIC32MX_DMACH3_INTSET       (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_INTSET_OFFSET)
#  define PIC32MX_DMACH3_INTINV       (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_INTINV_OFFSET)
#  define PIC32MX_DMACH3_SSA          (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_SSA_OFFSET)
#  define PIC32MX_DMACH3_SSACLR       (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_SSACLR_OFFSET)
#  define PIC32MX_DMACH3_SSASET       (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_SSASET_OFFSET)
#  define PIC32MX_DMACH3_SSAINV       (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_SSAINV_OFFSET)
#  define PIC32MX_DMACH3_DSA          (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_DSA_OFFSET)
#  define PIC32MX_DMACH3_DSACLR       (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_DSACLR_OFFSET)
#  define PIC32MX_DMACH3_DSASET       (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_DSASET_OFFSET)
#  define PIC32MX_DMACH3_DSAINV       (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_DSAINV_OFFSET)
#  define PIC32MX_DMACH3_SSIZ         (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_SSIZ_OFFSET)
#  define PIC32MX_DMACH3_SSIZCLR      (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_SSIZCLR_OFFSET)
#  define PIC32MX_DMACH3_SSIZSET      (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_SSIZSET_OFFSET)
#  define PIC32MX_DMACH3_SSIZINV      (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_SSIZINV_OFFSET)
#  define PIC32MX_DMACH3_DSIZ         (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_DSIZ_OFFSET)
#  define PIC32MX_DMACH3_DSIZCLR      (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_DSIZCLR_OFFSET)
#  define PIC32MX_DMACH3_DSIZSET      (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_DSIZSET_OFFSET)
#  define PIC32MX_DMACH3_DSIZINV      (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_DSIZINV_OFFSET)
#  define PIC32MX_DMACH3_SPTR         (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_SPTR_OFFSET)
#  define PIC32MX_DMACH3_DPTR         (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_DPTR_OFFSET)
#  define PIC32MX_DMACH3_CSIZ         (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_CSIZ_OFFSET)
#  define PIC32MX_DMACH3_CSIZCLR      (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_CSIZCLR_OFFSET)
#  define PIC32MX_DMACH3_CSIZSET      (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_CSIZSET_OFFSET)
#  define PIC32MX_DMACH3_CSIZINV      (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_CSIZINV_OFFSET)
#  define PIC32MX_DMACH3_CPTR         (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_CPTR_OFFSET)
#  define PIC32MX_DMACH3_DAT          (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_DAT_OFFSET)
#  define PIC32MX_DMACH3_DATCLR       (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_DATCLR_OFFSET)
#  define PIC32MX_DMACH3_DATSET       (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_DATSET_OFFSET)
#  define PIC32MX_DMACH3_DATINV       (PIC32MX_DMACH3_K1BASE+PIC32MX_DMACH_DATINV_OFFSET)
#endif

/* Register Bit-Field Definitions ***********************************************************/
/* Global DMA Registers */
/* DMA Controller Control Register */

#define DMA_CON_DMABUSY               (1 << 11) /* Bit 15: DMA module busy */
#define DMA_CON_SUSPEND               (1 << 12) /* Bit 12: DMA suspend */
#define DMA_CON_SIDL                  (1 << 13) /* Bit 13: Stop in idle mode */
#define DMA_CON_FRZ                   (1 << 14) /* Bit 14: DMA freeze */
#define DMA_CON_ON                    (1 << 15) /* Bit 15: DMA on */

/* DMA Status Register */

#define DMA_STAT_DMACH_SHIFT          (0)       /* Bits 0-1: DMA channel */
#define DMA_STAT_DMACH_MASK           (3 << DMA_STAT_DMACH_SHIFT)
#define DMA_STAT_RDWR                 (1 << 3)  /* Bit 3:  Read/write status */

/* DMA Address Register -- This register contains a 32-bit address value */

/* DMA CRC Control Register */

#define DMA_CRCCON_CRCCH_SHIFT        (0)       /* Bits 0-1: CRC channel select */
#define DMA_CRCCON_CRCCH_MASK         (3 << DMA_CRCCON_CRCCH_SHIFT)
#define DMA_CRCCON_CRCTYP             (1 << 5)  /* Bit 5:  CRC type selection */
#define DMA_CRCCON_CRCAPP             (1 << 6)  /* Bit 6:  CRC append mode */
#define DMA_CRCCON_CRCEN              (1 << 7)  /* Bit 7:  CRC enable */
#define DMA_CRCCON_PLEN_SHIFT         (8)       /* Bits 8-11: Polynomial length */
#define DMA_CRCCON_PLEN_MASK          (15 << DMA_CRCCON_PLEN_SHIFT)
#define DMA_CRCCON_BITO               (1 << 24) /* Bit 24: CRC bit order selection */
#define DMA_CRCCON_WBO                (1 << 27) /* Bit 27: CRC write byte order selection */
#define DMA_CRCCON_BYTO_SHIFT         (28)      /* Bits 28-29: CRC byte order selection */
#define DMA_CRCCON_BYTO_MASK          (3 << DMA_CRCCON_BYTO_SHIFT)
#  define DMA_CRCCON_BYTO_SRCORDER    (0 << DMA_CRCCON_BYTO_SHIFT) /* No swapping (i.e., source byte order) */ */
#  define DMA_CRCCON_BYTO_SWAP32      (1 << DMA_CRCCON_BYTO_SHIFT) /* Endian byte swap on word boundaries */
#  define DMA_CRCCON_BYTO_SWAP32H     (2 << DMA_CRCCON_BYTO_SHIFT) /* Swap half-words on word boundaries */
#  define DMA_CRCCON_BYTO_SWAP16      (3 << DMA_CRCCON_BYTO_SHIFT) /* Endian byte swap on half-word boundaries */

/* DMA CRC Data Register -- 16 or 32-bits of data */

/* DMA CRCXOR Enable Register -- 16 or 32-bits of data */

/* Per-Channel DMA Registers */
/* DMA Channel Control Register */

#define DMACH_CON_CHPRI_SHIFT         (0)       /* Bits 0-1: Channel priority */
#define DMACH_CON_CHPRI_MASK          (3 << DMACH_CON_CHPRI_SHIFT)
#  define DMACH_CON_CHPRI(n)          ((n) << DMACH_CON_CHPRI_SHIFT)
#define DMACH_CON_CHEDET              (1 << 2)  /* Bit 2:  Channel event detected */
#define DMACH_CON_CHAEN               (1 << 4)  /* Bit 4:  Channel automatic enable */
#define DMACH_CON_CHCHN               (1 << 5)  /* Bit 5:  Channel chain enable */
#define DMACH_CON_CHAED               (1 << 6)  /* Bit 6:  Channel allow events if disabled */
#define DMACH_CON_CHEN                (1 << 7)  /* Bit 7:  Channel enable */
#define DMACH_CON_CHCHNS              (1 << 8)  /* Bit 8:  Chain channel selection */
#define DMACH_CON_CHBUSY              (1 << 15) /* Bit 15: Channel busy */

/* DMA Channel Event Control Register */

#define DMACH_ECON_AIRQEN             (1 << 3)  /* Bit 3:  Channel abort IRQ enable */
#define DMACH_ECON_SIRQEN             (1 << 4)  /* Bit 4:  Channel start IRQ enable */
#define DMACH_ECON_PATEN              (1 << 5)  /* Bit 5:  Channel pattern match abort enable */
#define DMACH_ECON_CABORT             (1 << 6)  /* Bit 6:  DMA abort transfer */
#define DMACH_ECON_CFORCE             (1 << 7)  /* Bit 7:  DMA forced transfer */
#define DMACH_ECON_CHSIRQ_SHIFT       (8)       /* Bits 8-15: Channel Transfer Start IRQ */
#define DMACH_ECON_CHSIRQ_MASK        (0xff << DMACH_ECON_CHSIRQ_SHIFT)
#  define DMACH_ECON_CHSIRQ(n)        ((n) << DMACH_ECON_CHSIRQ_SHIFT) /* Interrupt n will initiate a DMA transfer */
#define DMACH_ECON_CHAIRQ_SHIFT       (16)      /* Bits 16-23: Channel transfer abort irq */
#define DMACH_ECON_CHAIRQ_MASK        (0xff << DMACH_ECON_CHAIRQ_SHIFT)
#  define DMACH_ECON_CHAIRQ(n)        ((n) << DMACH_ECON_CHAIRQ_SHIFT) /* Interrupt n will abort any transfers in progress and set CHAIF */

/* DMA Channel Interrupt Control Register */

#define DMACH_INT_CHERIF              (1 << 0)  /* Bit 0:  Channel address error interrupt flag */
#define DMACH_INT_CHTAIF              (1 << 1)  /* Bit 1:  Channel transfer abort interrupt flag */
#define DMACH_INT_CHCCIF              (1 << 2)  /* Bit 2:  Channel cell transfer complete interrupt flag */
#define DMACH_INT_CHBCIF              (1 << 3)  /* Bit 3:  Channel block transfer complete interrupt flag */
#define DMACH_INT_CHDHIF              (1 << 4)  /* Bit 4:  Channel destination half full interrupt flag */
#define DMACH_INT_CHDDIF              (1 << 5)  /* Bit 5:  Channel destination done interrupt flag */
#define DMACH_INT_CHSHIF              (1 << 6)  /* Bit 6:  Channel source half empty interrupt flag */
#define DMACH_INT_CHSDIF              (1 << 7)  /* Bit 7:  Channel source done interrupt flag */
#define DMACH_INT_CHERIE              (1 << 16) /* Bit 16: Channel address error interrupt enable */
#define DMACH_INT_CHTAIE              (1 << 17) /* Bit 17: Channel transfer abort interrupt enable */
#define DMACH_INT_CHCCIE              (1 << 18) /* Bit 18: Channel cell transfer complete interrupt enable */
#define DMACH_INT_CHBCIE              (1 << 19) /* Bit 19: Channel block transfer complete interrupt enable */
#define DMACH_INT_CHDHIE              (1 << 20) /* Bit 20: Channel destination half full interrupt enable */
#define DMACH_INT_CHDDIE              (1 << 21) /* Bit 21: Channel destination done interrupt enable */
#define DMACH_INT_CHSHIE              (1 << 22) /* Bit 22: Channel source half empty interrupt enable */
#define DMACH_INT_CHSDIE              (1 << 23) /* Bit 23: Channel source done interrupt enable */

/* DMA Channel Source Start Address Register -- This register contains a 32-bit address value */

/* DMA Channel Destination Start Address Register -- This register contains a 32-bit address value */

/* DMA Channel Source Size Register -- 8 or 16 bits of byte size data */

/* DMA Channel Destination Size Register -- 8 or 16 bits of byte size data */

/* DMA Channel Source Pointer Register -- 8 or 16 bits of byte index data */

/* DMA Channel Destination Pointer Register -- 8 or 16 bits of byte index data */

/* DMA Channel Cell-Size Register -- 8 or 16 bits of byte transferred data */

/* DMA Channel Cell Pointer Register -- 8 or 16 bits of byte transferred data */

/* DMA Channel Pattern Data Register -- 8-bits of pattern data */

#define DMACH_DAT_MASK                0xff

/********************************************************************************************
 * Public Types
 ********************************************************************************************/

#ifndef __ASSEMBLY__

/********************************************************************************************
 * Inline Functions
 ********************************************************************************************/

/********************************************************************************************
 * Public Function Prototypes
 ********************************************************************************************/

#ifdef __cplusplus
#define EXTERN extern "C"
extern "C" {
#else
#define EXTERN extern
#endif

#undef EXTERN
#ifdef __cplusplus
}
#endif

#endif /* __ASSEMBLY__ */
#endif /* CHIP_NDMACH > 0 */
#endif /* __ARCH_MIPS_SRC_PIC32MX_PIC32MX_DMA_H */
