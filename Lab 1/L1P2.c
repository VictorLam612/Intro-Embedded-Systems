/*
 * L1P2.c
 *
 * Created: 2/8/2020 2:33:09 PM
 * Author : Victor Lam
 */
#include <avr/io.h>

int main(void) {
/* Replace with your application code */
    while (1) {
        DDRB = 0b00000000;
        PORTB = 0x00000001;
        uint16_t index0 = 0x04af;
        while (index0 > 0) {
            index0--;
        }
        PORTB = 0x0000;
        uint16_t index1 = 0x04af;
        while (index1 > 0) {
            index1--;
        }
    }
}