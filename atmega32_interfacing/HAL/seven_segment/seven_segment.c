/*
 * seven_segment.c
 *
 *  Created on: Jul 20, 2024
 *      Author: BEDO
 */

#include"seven_segment.h"

void sev_seg_intialization()
{
	 Dio_VoidSetPinDirection(C,0,OUTPUT);
	 Dio_VoidSetPinDirection(C,1,OUTPUT);
	 Dio_VoidSetPinDirection(C,2,OUTPUT);
	 Dio_VoidSetPinDirection(C,3,OUTPUT);
	 Dio_VoidSetPinDirection(C,4,OUTPUT);

}


void sev_seg_enable()
{
	 Dio_VoidSetPinValue(C,0,HIGH);

}



void sev_seg_write_number(uint8_t num)
{
	uint8_t a,b,c,d;     // input values of decoder
	a=get_bit(num,0);
	b=get_bit(num,1);
	c=get_bit(num,2);
	d=get_bit(num,3);

	if(a)
		Dio_VoidSetPinValue(C,1,HIGH);
	else
		Dio_VoidSetPinValue(C,1,LOW);

	if(b)
			Dio_VoidSetPinValue(C,2,HIGH);
		else
			Dio_VoidSetPinValue(C,2,LOW);

	if(c)
			Dio_VoidSetPinValue(C,3,HIGH);
		else
			Dio_VoidSetPinValue(C,3,LOW);

	if(d)
			Dio_VoidSetPinValue(C,4,HIGH);
		else
			Dio_VoidSetPinValue(C,4,LOW);
}
