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
				Dio_VoidSetPinValue(A,PinCounter);
				Dio_VoidSetPinValue(B,PinCounter);
				Dio_VoidSetPinValue(C,PinCounter);
				Dio_VoidSetPinValue(D,PinCounter);

				_delay_ms(1000);
				Dio_VoidClearPinValue(A,PinCounter);
				Dio_VoidClearPinValue(B,PinCounter);
				Dio_VoidClearPinValue(C,PinCounter);
				Dio_VoidClearPinValue(D,PinCounter);


				_delay_ms(1000);
			}


			for(PortCounter=0;PortCounter<=3;PortCounter++)
				{

				    Dio_VoidSetPortValue(PortCounter);

					_delay_ms(1000);

					Dio_VoidClearPortValue(PortCounter);


					_delay_ms(1000);
				}


		}


}
