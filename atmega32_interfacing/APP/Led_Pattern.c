/*
 * Led_Pattern.c
 *
 *  Created on: Jul 20, 2024
 *      Author: BEDO
 */

#include<avr/io.h>
#include<avr/delay.h>
#include"../MCAL//DIO/DIO.h"
#include"../LIB/std_types.h"


void led_pattern()
{

	uint8_t PinCounter,PortCounter;



		Dio_VoidSetPortDirection(A,OUTPUT);
		Dio_VoidSetPortDirection(B,OUTPUT);
		Dio_VoidSetPortDirection(C,OUTPUT);
		Dio_VoidSetPortDirection(D,OUTPUT);

		while(1)
		{


			for(PinCounter=0;PinCounter<=7;PinCounter++)
			{
				Dio_VoidSetPinValue(A,PinCounter,HIGH);
				Dio_VoidSetPinValue(B,PinCounter,HIGH);
				Dio_VoidSetPinValue(C,PinCounter,HIGH);
				Dio_VoidSetPinValue(D,PinCounter,HIGH);

				_delay_ms(1000);
				Dio_VoidSetPinValue(A,PinCounter,LOW);
				Dio_VoidSetPinValue(B,PinCounter,LOW);
				Dio_VoidSetPinValue(C,PinCounter,LOW);
				Dio_VoidSetPinValue(D,PinCounter,LOW);


				_delay_ms(1000);
			}


			for(PortCounter=0;PortCounter<=3;PortCounter++)
				{

				    Dio_VoidSetPortValue(PortCounter,HIGH);

					_delay_ms(1000);

				    Dio_VoidSetPortValue(PortCounter,LOW);


					_delay_ms(1000);
				}


		}


}

