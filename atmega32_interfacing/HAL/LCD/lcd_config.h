/*
 * lcd_config.h
 *
 *  Created on: Jul 26, 2024
 *      Author: BEDO
 */

#ifndef HAL_LCD_LCD_CONFIG_H_
#define HAL_LCD_LCD_CONFIG_H_

#define RS D,0
#define RW D,1
#define EN D,2

#define LCD_port_8bitMode B
//#define LcdPin0_4bitMode B,0
//#define LcdPin0_4bitMode B,1
//#define LcdPin0_4bitMode B,2
//#define LcdPin0_4bitMode B,3


#define function_set  0b00111000
#define dis_on_off    0b00001111
#define clr_lcd       0b00000001
#define intry_mode    0b00000110
#endif /* HAL_LCD_LCD_CONFIG_H_ */
