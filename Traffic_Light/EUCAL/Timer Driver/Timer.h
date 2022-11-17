/*
 * Timer.h
 *
 * Created: 11/13/2022 9:39:10 PM
 *  Author: Nouran
 */ 


#ifndef TIMER_H_
#define TIMER_H_

//CONNECTING FILES
#include "../../EUCAL/DIO Driver/dio.h"

//TIMER MACROS
#define FLAG TIFR
#define COUNTER TCCR0
#define CONTROL TCNT0

//INTIALIZATION
void Timer_INITIALIZE(void);
//TIMER DELAY
void Timer_ON(uint32_t TIME);

#endif /* TIMER_H_ */