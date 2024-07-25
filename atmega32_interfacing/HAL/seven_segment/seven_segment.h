/*
 * seven_segment.h
 *
 *  Created on: Jul 20, 2024
 *      Author: BEDO
 */

#ifndef HAL_SEVEN_SEGMENT_SEVEN_SEGMENT_H_
#define HAL_SEVEN_SEGMENT_SEVEN_SEGMENT_H_

#include "../../LIB/std_types.h"
#include"../../MCAL/DIO/DIO.h"
void sev_seg_intialization();

void sev_seg_enable();

void sev_seg_write_number(uint8_t num);

#endif /* HAL_SEVEN_SEGMENT_SEVEN_SEGMENT_H_ */
