/*
 * Youssef_Mmdoh_El-Nemaky_Mini_Project2.c
 *
 *  Created on: Feb 19, 2021
 *      Author: Youssef Mmdoh El-Nemaky
 *      Group Number: 53
 *      SADLY, There isn't full drivers code and there is not static/dynamic configuration in all drivers due to limited time as exams are coming!
 *      I did static configuration in both ADC and LCD drivers but if I had enough time , I would have done it in all drivers.
 */
#include "lcd.h"
#include "adc.h"
#include "motor.h"
#include "timer0.h"
#include "external_interrupt1.h"

int main(void){
	SET_BIT(SREG, 7); /*setting global interrupts flag to enable interrupts*/
	uint16 adcValue;
	LCD_init();
	ADC_init();
	MOTOR_init();
	EXTERNAL_INTERRUPT1_init();
	TIMER0_PWM_init();
	LCD_displayString("ADC Value = ");
	while(1){
		LCD_goToRowColumn(0,12);
		adcValue = ADC_readChannel(0);
		TIMER0_changePWM(adcValue/4); /*To fit the a number with a max value of 1023 in an 8-bit register 1023/4 = 255*/
		LCD_integerToString(adcValue);
		LCD_displayString(" ");
	}
}


ISR(INT1_vect){
	MOTOR_changeDirection();
	_delay_ms(30);
}
