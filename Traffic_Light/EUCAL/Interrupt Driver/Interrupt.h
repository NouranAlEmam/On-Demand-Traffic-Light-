/*
 * Interrupt.h
 *
 * Created: 11/13/2022 9:40:52 PM
 *  Author: Nouran
 */ 


#ifndef INTERRUPT_H_
#define INTERRUPT_H_

//CONNCETING FILES
#include "../DIO Driver/dio.h"

//ENABLLING INTERRUPT
# define SEI()  __asm__ __volatile__ ("SEI" ::: "memory")

//EXTERNAL INTERRUPT REQUEST 0
#define INT0_VECTOR  __vector_1

//RISING EDGE
#define RISING_EDGE() MCUCR |= (1<<ISC01) | (1<<ISC00)

// SETUP INT0
#define SETUP() SET(GICR,INT0)

// INTERRUPT FUNCTION
#define IFUN(VECTOR)\
void VECTOR (void) __attribute__ ((signal,used));\
void VECTOR (void)

#endif /* INTERRUPT_H_ */