//###########################################################################
//
// FILE:   modebusstdio.h
//
// TITLE:  Prototypes for the MODEBUS functions.
//
//###########################################################################
// $TI Release: F2806x C/C++ Header Files and Peripheral Examples V151 $
// $Release Date: February  2, 2016 $
// $Copyright: Copyright (C) 2011-2016 Texas Instruments Incorporated -
//             http://www.ti.com/ ALL RIGHTS RESERVED $
//###########################################################################

#ifndef __NARA_INV_H__
#define __NARA_INV_H__

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

#include "hal_obj.h"
#include "hal.h"
#include "uart.h"


//*****************************************************************************
//
// If built for buffered operation, the following labels define the sizes of
// the transmit and receive buffers respectively.
//
//*****************************************************************************
//#define
#define SPI_MOTION              0x00
#define SPI_ADC                 0x01

//*****************************************************************************
//
// Prototypes for the APIs.
//
//*****************************************************************************
extern void SetGpioInterrupt();
__interrupt void xint1_isr(void);

extern void spi_fifo_init(SPI_Handle spiHandle);
extern void spi_init(SPI_Handle spiHandle);
extern uint16_t SPI_Write8(uint16_t addr, uint16_t data);
extern uint16_t SPI_Read8(uint16_t addr);
extern uint16_t SPI_Read16(uint16_t chNo);

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __NARA_INV_H__


