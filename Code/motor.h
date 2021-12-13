/*
 * motor.h
 *
 *  Created on: Feb 19, 2021
 *      Author: Youssef Mmdoh El-Nemaky
 */

/* Sadly, There is no static/dynamic configuration in timer's code due to limited time as exams are coming! Game of thrones reference :') */

#ifndef MOTOR_H_
#define MOTOR_H_

#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"

#define MOTOR_DATA_DIR DDRB
#define MOTOR_DATA_PORT PORTB
#define MOTOR_PIN_0 PB0
#define MOTOR_PIN_1 PB1

void MOTOR_init(void);
void MOTOR_changeDirection(void);

#endif /* MOTOR_H_ */
