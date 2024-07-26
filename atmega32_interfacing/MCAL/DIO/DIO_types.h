/*
 * DIO_types.h
 *
 *  Created on: Jul 20, 2024
 *      Author: BEDO
 */

#ifndef MCAL_DIO_TYPES_H_
#define MCAL_DIO_TYPES_H_

#define LOW  0x00
#define HIGH 0xFF

typedef enum{A,B,C,D}PORT_t;

typedef enum{INPUT,OUTPUT}DIRECTION_t;



typedef enum{pin0,pin1,pin2,pin3,pin4,pin5,pin6,pin7}Pin_t;

#endif /* MCAL_DIO_TYPES_H_ */
