
/*
 * Registers.h
 *
 * Created: 11/13/2022 9:41:14 PM
 *  Author: Nouran
 */ 

#include "DataTypes.h"

#ifndef REGISTERS_H_
#define REGISTERS_H_
 
//Ports A B C D
#define PORTA	(*(volatile uint8_t*)(0x3B))
#define DDRA	(*(volatile uint8_t*)(0x3A))
#define PINA	(*(volatile uint8_t*)(0x39))

#define PORTB	(*(volatile uint8_t*)(0x38))
#define DDRB	(*(volatile uint8_t*)(0x37))
#define PINB	(*(volatile uint8_t*)(0x36))

#define PORTC	(*(volatile uint8_t*)(0x35))
#define DDRC	(*(volatile uint8_t*)(0x34))
#define PINC	(*(volatile uint8_t*)(0x33))

#define PORTD	(*(volatile uint8_t*)(0x32))
#define DDRD	(*(volatile uint8_t*)(0x31))
#define PIND	(*(volatile uint8_t*)(0x30))

//Pins
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

// Interrupt 
#define ISC00   0
#define ISC01   1
#define INT0    6
#define MCUCR	(*(volatile uint8_t*)(0x55))
#define GICR	(*(volatile uint8_t*)(0x5B))

// Timer0 
#define TCCR0	(*(volatile uint8_t*)(0x53))
#define TCNT0	(*(volatile uint8_t*)(0x52))
#define TIFR	(*(volatile uint8_t*)(0x58))

#endif /* REGISTERS_H_ */