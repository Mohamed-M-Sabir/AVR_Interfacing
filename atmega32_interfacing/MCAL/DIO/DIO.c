/*
 * DIO.c
 *
 *  Created on: Jul 19, 2024
 *      Author: BEDO
 */


#include "DIO.h"

void Dio_VoidSetPortDirection(PORT_t port,DIRECTION_t direction)
{
	if(direction == OUTPUT)
		{
			switch(port)
			{
			case A:DDRA_REG=0xFF;break;
			case B:DDRB_REG=0XFF;break;
			case C:DDRC_REG=0xFF;break;
			case D:DDRD_REG=0xFF;break;
			}
		}


	else if(direction == INPUT)
			{
				switch(port)
				{
				case A:DDRA_REG=0X00;break;
				case B:DDRB_REG=0X00;break;
				case C:DDRC_REG=0X00;break;
				case D:DDRD_REG=0X00;break;
				}
			}
	else
	{
		//  do nothing...
	}
}




void Dio_VoidSetPortValue(PORT_t port,uint8_t value)
{
	switch(port)
	{
	case A:PORTA_REG=value;break;
	case B:PORTB_REG=value;break;
	case C:PORTC_REG=value;break;
	case D:PORTD_REG=value;break;
	}
}



void Dio_VoidTogglePortValue(PORT_t port)
{
	switch(port)
		{
		case A:PORTA_REG^=0xFF;break;
		case B:PORTB_REG^=0xFF;break;
		case C:PORTC_REG^=0xFF;break;
		case D:PORTD_REG^=0xFF;break;
		}
}


void Dio_VoidSetPinDirection(PORT_t port,Pin_t pin,DIRECTION_t direction)

{
	if(direction == OUTPUT)
			{
				switch(port)
				{
				case A:set_bit(DDRA_REG,pin);break;
				case B:set_bit(DDRB_REG,pin);break;
				case C:set_bit(DDRC_REG,pin);break;
				case D:set_bit(DDRD_REG,pin);break;
				}
			}


		else if(direction == INPUT)
				{
					switch(port)
					{
					case A:clear_bit(DDRA_REG,pin);break;
					case B:clear_bit(DDRB_REG,pin);break;
				    case C:clear_bit(DDRC_REG,pin);break;
					case D:clear_bit(DDRD_REG,pin);break;
					}
				}
		else
		{
			//  do nothing...
		}
}

void Dio_VoidSetPinValue(PORT_t port,Pin_t pin,uint8_t value)
{
	if(value==0xFF)
	{
	switch(port)
		{
	    case A:set_bit(PORTA_REG,pin);break;
		case B:set_bit(PORTB_REG,pin);break;
		case C:set_bit(PORTC_REG,pin);break;
		case D:set_bit(PORTD_REG,pin);break;
		}
	}
	else if(value==0x00)
	{
		switch(port)
		{
		case A:clear_bit(PORTA_REG,pin);break;
		case B:clear_bit(PORTB_REG,pin);break;
		case C:clear_bit(PORTC_REG,pin);break;
		case D:clear_bit(PORTD_REG,pin);break;
		}

	}

}



void Dio_VoidTogglePinValue(PORT_t port,Pin_t pin)
{
	switch(port)
			{
			case A:toggle_bit(PORTA_REG,pin);break;
			case B:toggle_bit(PORTB_REG,pin);break;
			case C:toggle_bit(PORTC_REG,pin);break;
			case D:toggle_bit(PORTD_REG,pin);break;
			}
}

uint8_t Dio_VoidGetPinValue(PORT_t port,Pin_t pin)
{
	uint8_t value;
	switch(port)
			{
			case A:value=get_bit(PinA_REG,pin);break;
			case B:value=get_bit(PinB_REG,pin);break;
			case C:value=get_bit(PinC_REG,pin);break;
			case D:value=get_bit(PinD_REG,pin);break;
			}
	return value;
}


