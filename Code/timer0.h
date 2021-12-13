/*
 * timer0.h
 *
 *  Created on: Feb 19, 2021
 *      Author: Youssef Mmdoh El-Nemaky
 */

#ifndef TIMER0_H_
#define TIMER0_H_

/* Sadly, There is no static/dynamic configuration in timer's code due to limited time as exams are coming! Game of thrones reference :') */

#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"

void TIMER0_PWM_init(void);
void TIMER0_changePWM(uint8);

#endif /* TIMER0_H_ */
