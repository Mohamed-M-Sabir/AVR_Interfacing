/*
 * lcd_app.c
 *
 *  Created on: Jul 26, 2024
 *      Author: BEDO
 */


#include "../LIB/std_types.h"
#include <avr/delay.h>
#include "../hal//LCD/lcd_interface.h"
void LCD_Display()
{
	Dio_VoidSetPortDirection(B,OUTPUT);
	Dio_VoidSetPinDirection(RS,OUTPUT);
	Dio_VoidSetPinDirection(RW,OUTPUT);
	Dio_VoidSetPinDirection(EN,OUTPUT);


	lcd_init();
	lcd_SendData('M');
	lcd_SendData('O');
	lcd_SendData('H');
	lcd_SendData('A');
	lcd_SendData('M');
	lcd_SendData('E');
	lcd_SendData('D');

}
