/*	Author: yfang038
 *  Partner(s) Name: none
 *	Lab Section:
 *	Assignment: Lab #3  Exercise #2
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char tmpA = 0x00;
    /* Insert your solution below */
    while (1) {
	tmpA = PINA;
	//level 0, lights PC6
	if((tmpA & 0x00) == 0x00){
		PORTC = 0x40;
	}
	//level 1 or 2, lights PC5,6
	if((tmpA & 0x01) ==0x01 || (tmpA & 0x02) ==0x02){	
		PORTC = 0x60;
	}
	//level 3 or 4, lights PC4,5,6
	if((tmpA & 0x03) ==0x03 || (tmpA & 0x04) ==0x04){
                PORTC = 0x70;
        }
	//level 5 or 6, lights PC345
	if((tmpA & 0x05) ==0x05 || (tmpA & 0x06) ==0x06){
                PORTC = 0x38;
        }
	//level 7-9, lights 23456
	if((tmpA & 0x07) ==0x07 || (tmpA & 0x08) == 0x08 || (tmpA & 0x09) == 0x09){
                PORTC = 0x3C;
        }
	//level 10-12, lights 1-5
	if((tmpA & 0x0A) ==0x0A || (tmpA & 0x0B) == 0x0B || (tmpA & 0x0C) == 0x0C){
                PORTC = 0x3E;
        }
	//level 13-15, lights 0-5
	if((tmpA & 0x0D) ==0x0D || (tmpA & 0x0E) == 0x0E || (tmpA & 0x0F) ==0x0F){
                PORTC = 0x3F;
        }
    }
    return 1;
}
