/*
 * BitManipulation.h
 *
 * Created: 11/13/2022 9:43:53 PM
 *  Author: Nouran
 */ 


#ifndef BITMANIPULATION_H_
#define BITMANIPULATION_H_

#define SET(REG,BIT)	REG |= (1 << BIT)				// set bit 
#define CLEAR(REG,BIT)	REG &= ~(1 << BIT)				// clear bit
#define TOGGEL(REG,BIT) REG ^= (1 << BIT)				// toggle bit 
#define GET(REG,BIT)	((REG & (1 << BIT)) >> BIT)		// get bit 

#endif /* BITMANIPULATION_H_ */