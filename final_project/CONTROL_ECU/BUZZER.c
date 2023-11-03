/*
 * BUZZER.c
 *
 *  Created on: Nov 1, 2023
 *      Author: hp
 */


#include "BUZZER.h"


/*
 * Description: initialize the buzzer
 */
void Buzzer_init(void){
	GPIO_setupPinDirection(BUZZER_PORT, BUZZER_PIN, PIN_OUTPUT);
	GPIO_writePin(BUZZER_PORT, BUZZER_PIN, 0);
}


/*
 * Description: turn on the buzzer
 */
void Buzzer_on(void){
	GPIO_writePin(BUZZER_PORT, BUZZER_PIN, 1);
}


/*
 * Description: turn off the buzzer
 */
void Buzzer_off(void){
	GPIO_writePin(BUZZER_PORT, BUZZER_PIN, 0);
}
