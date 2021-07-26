/*
 * L2P6.c
 *
 * Created: 2/29/2020 3:56:24 AM
 * Author : Victor Lam
 */
#include <avr/io.h>
void SPI_MasterTransmit(uint8_t data) {
    SPDR = data; /* Start transmission */
    while(!(SPSR & (1<<SPIF))); /* Wait for transmission complete */
    PORTB ^= (1<<PB2);
    PORTB ^= (1<<PB2);
}
int getDigit(uint8_t last) {
    uint8_t next = 0b0;
    if (last == 0b01100000) { //if 1, then 2
        next = 0b11011010;
    } else if (last == 0b11011010) { //if 2, then 3
        next = 0b11110010;
    } else if (last == 0b11110010) { //if 3, then 4
        next = 0b01100110;
    } else if (last == 0b01100110) { //if 4, then 5
        next = 0b10110110;
    } else if (last == 0b10110110) { //if 5, then 6
        next = 0b10111110;
    } else if (last == 0b10111110) { //if 6, then 7
        next = 0b11100000;
    } else if (last == 0b11100000) { //if 7, then 8
        next = 0b111111110;
    } else if (last == 0b11111110) { //if 8, then 9
        next = 0b11100110;
    } else if (last == 0b11111100) { //if 0, then 1
        next = 0b01100000;
    } else {
        next = 0b11111100;
    }
    return next;
}
int main(void){
    DDRB = (1<<PB3)|(1<<PB5)|(1<<PB2); // Set MOSI and SCK output and ss, all others
    input
            SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPI2X); // Enable SPI, Master, set clock freq to 1
    MHz
    TCCR1B |= (1<<CS11) | (1<<CS10);
    DDRC = (1<<PC5);
    PORTC = (1<<PC5);
    uint16_t target = 0x0C35;
    uint8_t byte = 0b00000001;
    int count = 0;
    while (1) {
        if (TCNT1 == target) {
            target += 0x0C35;
            count++;
            if (count == 10) {
                SPI_MasterTransmit(getDigit(byte));
                count = 0;
                byte = getDigit(byte);
            }
        }
    }
}