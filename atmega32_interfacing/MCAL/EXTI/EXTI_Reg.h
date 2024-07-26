/*
 * EXTI_Reg.h
 *
 *  Created on: Jul 26, 2024
 *      Author: BEDO
 */

#ifndef MCAL_EXTI_EXTI_REG_H_
#define MCAL_EXTI_EXTI_REG_H_

#include"../../LIB/std_types.h"

#define  SREG *((vuint8_t*)0x5F)        //GIE
#define  SREG_bit7 7


#define  MCUCR             *((vuint8_t*)0x55)       //sense control for INT0,INT1 (falling or rising)
#define  MCUCR_ISC00       0
#define  MCUCR_ISC01       1
#define  MCUCR_ISC10       2
#define  MCUCR_ISC11       3

#define  MCUCSR            *((vuint8_t*)0x54)      //sense control for INT2 (falling or rising)
#define  MCUCSR_ISC2       6                       // if ISC2==0(falling edge), if ISC2==1(rising edge)

#define  GICR              *((vuint8_t*)0x5B)       //SIE
#define  GICR_INT0         6
#define  GICR_INT1         7
#define  GICR_INT2         5


#define  GIFR              *((vuint8_t*)0x5A)       // flag
#define  GIFR_INTF1        6
#define  GIFR_INTF2        7
#define  GIFR_INTF3		   5




#endif /* MCAL_EXTI_EXTI_REG_H_ */
