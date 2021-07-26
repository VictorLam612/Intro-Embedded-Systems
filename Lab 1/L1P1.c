/*
 * L1P1.c
 *
 * Created: 2/7/2020 9:52:24 PM
 * Author : Victor Lam
 */
#include <avr/io.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    /* Replace with your application code */
    DDRB = 0b00000000; //Initialize PB0 as output
    while (1) { //infinite loop
        PORTB = 0b00000001; //turn on LED
        uint32_t index0 = 0x00008f0a;
        while (index0 > 0) {
            index0--;
        }
        PORTB = 0b0000000; //turn off LED
        uint32_t index1 = 0x00008f0a;
        while (index1 > 0) {
            index1--;
        }
    }
}