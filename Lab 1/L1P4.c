/*
 * L1P4.c
 *
 * Created: 2/11/2020 7:18:05 PM
 * Author : Victor Lam
 */
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
/* Replace with your application code */
    ADMUX |= (1 << REFS0) | (1 << MUX2) | (1 << MUX0);
    ADCSRA |= (1 << ADEN) | (1 << ADSC) | (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0);
    DDRB = 0b00000001;
    while (1) {
        PORTB = 0b00000000;
        uint16_t adc = ADC;
        if ((adc >= 0x0000) & (adc <= 0x0028)) {
            PORTB = 0b00000001;
            _delay_us(3822.5);
            PORTB = 0b00000000;
            _delay_us(3822.5);
        } else if ((adc >= 0x0029) & (adc <= 0x0051)) {
            PORTB = 0b00000001;
            _delay_us(3607.5);
            PORTB = 0b00000000;
            _delay_us(3607.5);
        } else if ((adc >= 0x0052) & (adc <= 0x007A)) {
            PORTB = 0b00000001;
            _delay_us(3405.5);
            PORTB = 0b00000000;
            _delay_us(3405.5);
        } else if ((adc >= 0x007B) & (adc <= 0x00A3)) {
            PORTB = 0b00000001;
            _delay_us(3205);
            PORTB = 0b00000000;
            _delay_us(3205);
        } else if ((adc >= 0x00A4) & (adc <= 0x00CC)) {
            PORTB = 0b00000001;
            _delay_us(3033.5);
            PORTB = 0b00000000;
            _delay_us(3033.5);
        } else if ((adc >= 0x00CD) & (adc <= 0x00F5)) {
            PORTB = 0b00000001;
            _delay_us(2863.5);
            PORTB = 0b00000000;
            _delay_us(2863.5);
        } else if ((adc >= 0x00F6) & (adc <= 0x011E)) {
            PORTB = 0b00000001;
            _delay_us(2702.5);
            PORTB = 0b00000000;
            _delay_us(2702.5);
        } else if ((adc >= 0x011F) & (adc <= 0x0147)) {
            PORTB = 0b00000001;
            _delay_us(2551);
            PORTB = 0b00000000;
            _delay_us(2551);
        } else if ((adc >= 0x0148) & (adc <= 0x0170)) {
            PORTB = 0b00000001;
            _delay_us(2407);
            PORTB = 0b00000000;
            _delay_us(2407);
        } else if ((adc >= 0x0171) & (adc <= 0x0199)) {
            PORTB = 0b00000001;
            _delay_us(2273);
            PORTB = 0b00000000;
            _delay_us(2273);
        } else if ((adc >= 0x019A) & (adc <= 0x01C2)) {
            PORTB = 0b00000001;
            _delay_us(2145.5);
            PORTB = 0b00000000;
            _delay_us(2145.5);
        } else if ((adc >= 0x01C3) & (adc <= 0x01EB)) {
            PORTB = 0b00000001;
            _delay_us(2025);
            PORTB = 0b00000000;
            _delay_us(2025);
        } else if ((adc >= 0x01EC) & (adc <= 0x0214)) {
            PORTB = 0b00000001;
            _delay_us(1911);
            PORTB = 0b00000000;
            _delay_us(1911);
        } else if ((adc >= 0x0215) & (adc <= 0x023D)) {
            PORTB = 0b00000001;
            _delay_us(1803.5);
            PORTB = 0b00000000;
            _delay_us(1803.5);
        } else if ((adc >= 0x023E) & (adc <= 0x0266)) {
            PORTB = 0b00000001;
            _delay_us(1702.5);
            PORTB = 0b00000000;
            _delay_us(1702.5);
        } else if ((adc >= 0x0267) & (adc <= 0x028F)) {
            PORTB = 0b00000001;
            _delay_us(1607);
            PORTB = 0b00000000;
            _delay_us(1607);
        } else if ((adc >= 0x0290) & (adc <= 0x02B8)) {
            PORTB = 0b00000001;
            _delay_us(1517);
            PORTB = 0b00000000;
            _delay_us(1517);
        } else if ((adc >= 0x02B9) & (adc <= 0x02E1)) {
            PORTB = 0b00000001;
            _delay_us(1431.5);
            PORTB = 0b00000000;
            _delay_us(1431.5);
        } else if ((adc >= 0x02E2) & (adc <= 0x030A)) {
            PORTB = 0b00000001;
            _delay_us(1351);
            PORTB = 0b00000000;
            _delay_us(1351);
        } else if ((adc >= 0x030B) & (adc <= 0x0333)) {
            PORTB = 0b00000001;
            _delay_us(1275.5);
            PORTB = 0b00000000;
            _delay_us(1275.5);
        } else if ((adc >= 0x0334) & (adc <= 0x035C)) {
            PORTB = 0b00000001;
            _delay_us(1203.5);
            PORTB = 0b00000000;
            _delay_us(1203.5);
        } else if ((adc >= 0x035D) & (adc <= 0x0385)) {
            PORTB = 0b00000001;
            _delay_us(1136);
            PORTB = 0b00000000;
            _delay_us(1136);
        } else if ((adc >= 0x0386) & (adc <= 0x03AE)) {
            PORTB = 0b00000001;
            _delay_us(1072.5);
            PORTB = 0b00000000;
            _delay_us(1072.5);
        } else if ((adc >= 0x03AF) & (adc <= 0x03D7)) {
            PORTB = 0b00000001;
            _delay_us(1012.5);
            PORTB = 0b00000000;
            _delay_us(1012.5);
        } else if ((adc >= 0x03D8) & (adc <= 0x0400)) {
            PORTB = 0b00000001;
            _delay_us(955);
            PORTB = 0b00000000;
            _delay_us(955);
        }
        while (!(ADCSRA & 0b01000000)) {
            ADCSRA |= (1 << ADSC);
        }
    }
}