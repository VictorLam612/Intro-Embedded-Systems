/*
 * L1P3.c
 *
 * Created: 2/8/2020 3:15:20 PM
 * Author : Victor Lam
 */
#include <avr/io.h>

void ADC_init(void) {
    ADMUX |= (1 << REFS0) | (1 << MUX0) | (1 << MUX2);
    ADCSRA |= (1 << ADEN) | (1 << ADSC) | (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0);
}

int main(void) {
    uint16_t adc;
    DDRB = 0b00000001;
    PORTB = 0b00000000;
    while (1) {
        ADC_init();
        while (ADCSRA & 0b01000000) {
            PORTB = 0b00000001;
        }
        adc = ADC;
    }
}