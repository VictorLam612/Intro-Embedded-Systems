/*
 * L2P5.c
 *
 * Created: 2/28/2020 6:27:36 PM
 * Author : Victor Lam
 */
#include <avr/io.h>
void SPI_MasterTransmit(uint8_t data) {
    SPDR = data; /* Start transmission */
    while(!(SPSR & (1<<SPIF))); /* Wait for transmission complete */
    PORTB ^= (1<<PB2);
    PORTB ^= (1<<PB2);
}
int main(void){
    DDRB = (1<<PB3)|(1<<PB5)|(1<<PB2); // Set MOSI and SCK output and ss, all others
    input
            SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPI2X); // Enable SPI, Master, set clock freq to 1
    MHz
    while (1) {
        uint8_t b = 0b00000001;
        SPI_MasterTransmit(b);
    }
}