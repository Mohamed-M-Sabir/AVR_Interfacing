/*
 * DIO_REG.h
 *
 *  Created on: Jul 19, 2024
 *      Author: BEDO
 */


#ifndef MCAL_DIO_REG_H_
#define MCAL_DIO_REG_H_

#include "../../LIB/std_types.h"

#define  PORTA_REG       *(vuint8_t*)0x3B
#define  DDRA_REG        *(vuint8_t*)0x3A
#define  PinA_REG        *(vuint8_t*)0x39

#define  PORTB_REG       *(vuint8_t*)0x38
#define  DDRB_REG        *(vuint8_t*)0x37
#define  PinB_REG        *(vuint8_t*)0x36

#define  PORTC_REG       *(vuint8_t*)0x35
#define  DDRC_REG        *(vuint8_t*)0x34
#define  PinC_REG        *(vuint8_t*)0x33

#define  PORTD_REG       *(vuint8_t*)0x32
#define  DDRD_REG        *(vuint8_t*)0x31
#define  PinD_REG        *(vuint8_t*)0x30


#endif /* MCAL_DIO_REG_H_ */
