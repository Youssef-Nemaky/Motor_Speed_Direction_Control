/*
 * motor.c
 *
 *  Created on: Feb 19, 2021
 *      Author: Youssef Mmdoh El-Nemaky
 */

/* Sadly, There is no static/dynamic configuration in timer's code due to limited time as exams are coming! Game of thrones reference :') */

#include "motor.h"


void MOTOR_init(void){
	/*Make both pins output*/
	SET_BIT(MOTOR_DATA_DIR, MOTOR_PIN_0);
	SET_BIT(MOTOR_DATA_DIR, MOTOR_PIN_1);
	/*initialize the motor with clock wise rotation*/
	SET_BIT(MOTOR_DATA_PORT, MOTOR_PIN_0);
	CLEAR_BIT(MOTOR_DATA_PORT, MOTOR_PIN_1);
}

void MOTOR_changeDirection(void){
	TOGGLE_BIT(MOTOR_DATA_PORT, MOTOR_PIN_0);
	TOGGLE_BIT(MOTOR_DATA_PORT, MOTOR_PIN_1);
}
