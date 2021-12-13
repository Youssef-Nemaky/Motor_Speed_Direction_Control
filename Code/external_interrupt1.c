/*
 * external_interrupt1.c
 *
 *  Created on: Feb 19, 2021
 *      Author: JIGamer
 */

/* Sadly, There is no static/dynamic configuration in timer's code due to limited time as exams are coming! Game of thrones reference :') */

#include "external_interrupt1.h"

void EXTERNAL_INTERRUPT1_init(void){
	/***************************************************
	 * Set external interrupt 1 to work on rising edge *
	 * by setting MCUCR bits:                          *
	 * ISC10 -> 1                                      *
	 * ISC11 -> 1    								   *
	 * by setting GICR bits:                           *
	 * INT1 -> 1	                                   *
	 ***************************************************/
	MCUCR |= (1<<ISC10) | (1<<ISC11);
	GICR  |= (1<<INT1);
	/*set external interrupt1 pin to input*/
	CLEAR_BIT(DDRD, PD3);

}
