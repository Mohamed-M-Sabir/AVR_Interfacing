/*
 * DIO.h
 *
 *  Created on: Jul 19, 2024
 *      Author: BEDO
 */

#ifndef MCAL_DIO_H_
#define MCAL_DIO_H_

#include "DIO_types.h"
#include "DIO_REG.h"
#include "../../LIB/std_types.h"
#include "../../LIB/bit_math.h"
void Dio_VoidSetPortDirection(PORT_t port,DIRECTION_t direction);

void Dio_VoidSetPortValue(PORT_t port,uint8_t value);



void Dio_VoidTogglePortValue(PORT_t port);


void Dio_VoidSetPinDirection(PORT_t port,Pin_t pin,DIRECTION_t direction);

void Dio_VoidSetPinValue(PORT_t port,Pin_t pin,uint8_t value);

void Dio_VoidTogglePinValue(PORT_t port,Pin_t pin);

uint8_t Dio_VoidGetPinValue(PORT_t port,Pin_t pin);


#endif /* MCAL_DIO_H_ */
