/*	Author: yfang038
 *  Partner(s) Name: none
 *	Lab Section:
 *	Assignment: Lab #3  Exercise #1
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
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char tmpA = 0x00;
	unsigned char tmpB = 0x00;
	unsigned char cnt = 0x00;
    /* Insert your solution below */
    while (1) {
	cnt = 0x00;
	tmpA = PINA;
	tmpB = PINB;
	if ((tmpA & 0x01) == 0x01) {
		cnt = cnt + 1;
	}
	if ((tmpA & 0x02) == 0x02) {
                cnt = cnt + 1;
        }
	if ((tmpA & 0x04) == 0x04) {
                cnt = cnt + 1;
        }
	if ((tmpA & 0x08) == 0x08) {
                cnt = cnt + 1;
        }
	if ((tmpA & 0x10) == 0x10) {
                cnt = cnt + 1;
        }
	if ((tmpA & 0x20) == 0x20) {
                cnt = cnt + 1;
        }
	if ((tmpA & 0x40) == 0x40) {
                cnt = cnt + 1;
        }
	if ((tmpA & 0x80) == 0x80) {
                cnt = cnt + 1;
        }
	if ((tmpB & 0x01) == 0x01) {
                cnt = cnt + 1;
        }
        if ((tmpB & 0x02) == 0x02) {
                cnt = cnt + 1;
        }
        if ((tmpB & 0x04) == 0x04) {
                cnt = cnt + 1;
        }
        if ((tmpB & 0x08) == 0x08) {
                cnt = cnt + 1;
        }
        if ((tmpB & 0x10) == 0x10) {
                cnt = cnt + 1;
        }
        if ((tmpB & 0x20) == 0x20) {
                cnt = cnt + 1;
        }
        if ((tmpB & 0x40) == 0x40) {
                cnt = cnt + 1;
        }
        if ((tmpB & 0x80) == 0x80) {
                cnt = cnt + 1;
        }
	PORTC = cnt;
    }
    return 1;
}
