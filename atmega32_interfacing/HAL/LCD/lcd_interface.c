/*
 * lcd_interface.c
 *
 *  Created on: Jul 26, 2024
 *      Author: BEDO
 */


#include"lcd_interface.h"

void lcd_init()
{
	_delay_ms(35);
	lcd_SendCommand(function_set);
	_delay_ms(40);
	lcd_SendCommand(dis_on_off);
	_delay_ms(35);
	lcd_SendCommand(clr_lcd);
	_delay_us(1);

	lcd_SendCommand(intry_mode);
	_delay_ms(2);

}
void lcd_SendCommand(uint8_t cmd)
{


	Dio_VoidSetPinValue(RS,LOW);
	Dio_VoidSetPinValue(RW,LOW);
    Dio_VoidSetPortValue(LCD_port_8bitMode,cmd);
    Dio_VoidSetPinValue(EN,HIGH);
    _delay_ms(1);
    Dio_VoidSetPinValue(EN,LOW);
    _delay_ms(1);


}
void lcd_SendData(uint8_t data)
{
	Dio_VoidSetPinValue(RS,HIGH);
	Dio_VoidSetPinValue(RW,LOW);
	Dio_VoidSetPortValue(LCD_port_8bitMode,data);
	Dio_VoidSetPinValue(EN,HIGH);
	_delay_ms(1);
	Dio_VoidSetPinValue(EN,LOW);
	_delay_ms(1);
}

