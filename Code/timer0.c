/*
 * timer0.c
 *
 *  Created on: Feb 19, 2021
 *      Author: Youssef Mmdoh El-Nemaky
 */

/* Sadly, There is no static/dynamic configuration in timer's code due to limited time as exams are coming! Game of thrones reference :') */

#include "timer0.h"

void TIMER0_PWM_init(void){
	/************************************************
	 * This function initialize timer0 to work on	*
	 * Fast PWM mode:								*
	 * Bits in TCCR0 should be						*
	 * WGM00 -> 1									*
	 * WGM01 -> 1									*
	 * NON-inverting mode:							*
	 * COM01 -> 1									*
	 * Pre-scaler of 8								*
	 * CS01 -> 1									*
	 ************************************************/
	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS01);

	/*Make OC0 output pin*/
	SET_BIT(DDRB, PB3);
}

void TIMER0_changePWM(uint8 a_newPWMValue){
	OCR0 = a_newPWMValue;
}

