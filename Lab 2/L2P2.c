/*
 * L2P2.c
 *
 * Created: 2/25/2020 5:19:04 AM
 * Author : Victor Lam
 */
#include <avr/io.h>

int main(void) {
    DDRB |= (1 << DDB0); //pg99 - Configures PB0 to output pin
    DDRD |= ~(1 << PD3); //Sets PD3 to input and clears DDD0
    PORTD |= (1 << PD3); //pg100 - Activates pull up resistor
    PORTB |= (0 << PB0);
    while (1) {
        if ((PIND & (1 << PD3)) == 0) {
            PORTB |= (1 << PB0);
        } else {
            PORTB &= ~(1 << PB0);
        }
    }
}