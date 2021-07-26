/*
 * L2P1.c
 *
 * Created: 2/24/2020 10:52:43 PM
 * Author : Victor Lam
 */

#include <avr/io.h>

int main(void) {
    DDRB |= (1 << DDB0); //pg99 - Configures PB0 to output pin
    DDRD |= ~(1 << PD0); //Sets PD3 to input and clears DDD0
    PORTD |= (1 << PD0); //pg100 - Activates pull up resistor
    PORTB |= (0 << PB0);
    while (1) {
        if ((PIND & (1 << PD0)) == 0) {
            PORTB |= (1 << PB0);
        } else {
            PORTB &= ~(1 << PB0);
        }
    }
}