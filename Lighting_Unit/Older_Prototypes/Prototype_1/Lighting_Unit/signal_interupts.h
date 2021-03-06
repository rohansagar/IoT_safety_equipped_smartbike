/*
 * signal_interupts.h
 *
 *  Created on: Feb 20, 2019
 *      Author: rohan
 */

#ifndef SIGNAL_INTERUPTS_H_TXT_
#define SIGNAL_INTERUPTS_H_TXT_

#include "stdint.h"
#include "stdbool.h"
#include "driverlib/sysctl.h"
#include "pin_assignments.h"
#include "driverlib/gpio.h"
#include "driverlib/timer.h"
#include "led_matrix.h"
#include "driverlib/interrupt.h"
#include "driverlib/uart.h"

#include "inc/tm4c123gh6pm.h"

#define blink_interval 500

void initialize_signals();
void buttons_ISR();

//void stop_button_ISR();
//void timer_ISR();


#endif /* SIGNAL_INTERUPTS_H_TXT_ */
