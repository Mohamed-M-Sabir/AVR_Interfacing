/*
 * seven_segment_app.c
 *
 *  Created on: Jul 20, 2024
 *      Author: BEDO
 */

#include"../LIB/std_types.h"
#include<avr/delay.h>
void sev_seg()
{
	uint8_t sev_counter;
	 sev_seg_intialization();

	 sev_seg_enable();

	 for(sev_counter=0;sev_counter<=9;sev_counter+=2){
	   sev_seg_write_number(sev_counter);
	   _delay_ms(2000);

	 }
}
