/*
 * push_button_controlling_led.c
 *
 *  Created on: Jul 20, 2024
 *      Author: BEDO
 */


#include<avr/io.h>
#include<avr/delay.h>
#include"../MCAL//DIO/DIO.h"
#include"../LIB/std_types.h"


void push_button()
{

	Dio_VoidSetPinDirection( A, 0,INPUT);
	Dio_VoidSetPinDirection( A, 1,OUTPUT);

	VALUE_t Btn_value;
	while(1)
	{
		Btn_value=Dio_VoidGetPinValue(A,0);

		if(HIGH == Btn_value  )
		{
			Dio_VoidSetPinValue(A,1);

		}


			Dio_VoidClearPinValue(A,1);














	}


}
