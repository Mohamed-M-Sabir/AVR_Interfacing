/*
 * lcd_interface.h
 *
 *  Created on: Jul 26, 2024
 *      Author: BEDO
 */

#ifndef HAL_LCD_LCD_INTERFACE_H_
#define HAL_LCD_LCD_INTERFACE_H_


#include "lcd_config.h"
#include "../../LIB/std_types.h"
#include <util/delay.h>
#include "../../MCAL/DIO/DIO.h"
void lcd_init();
void lcd_SendCommand(uint8_t cmd);
void lcd_SendData(uint8_t data);

#endif /* HAL_LCD_LCD_INTERFACE_H_ */

