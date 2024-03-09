#define F_CPU 16000000UL /* Define CPU Frequency e.g. here 8MHz */
#include <avr/io.h>      /* Include AVR std. library file */
#include <util/delay.h>  /* Include inbuilt defined Delay header file */
#include <stdlib.h>
#include <stdio.h>

int Gpio_Init(char Port, int Pin, char Direct)
{
    int Direction = 0;
    if (Direct == 'i')
    {
        Direction = 0;
    }
    else if (Direct == 'o')
    {
        Direction = 1;
    }

    if (Port == 'A')
    {
        switch (Pin)
        {
        case 0:
            if (Direction == 0)
            {
                DDRA &= (1 << PA0); // Set PortA Pin0 as Input
            }
            else if (Direction == 1)
            {
                DDRA |= (1 << PA0); // Set PortA Pin0 as Output
            }
            break;
        case 1:
            if (Direction == 0)
            {
                DDRA &= (1 << PA1); // Set PortA Pin1 as Input
            }
            else if (Direction == 1)
            {
                DDRA |= (1 << PA1); // Set PortA Pin1 as Output
            }
            break;
        case 2:
            if (Direction == 0)
            {
                DDRA &= (1 << PA2); // Set PortA Pin2 as Input
            }
            else if (Direction == 1)
            {
                DDRA |= (1 << PA2); // Set PortA Pin2 as Output
            }
            break;
        case 3:
            if (Direction == 0)
            {
                DDRA &= (1 << PA3); // Set PortA Pin3 as Input
            }
            else if (Direction == 1)
            {
                DDRA |= (1 << PA3); // Set PortA Pin3 as Output
            }
            break;
        case 4:
            if (Direction == 0)
            {
                DDRA &= (1 << PA4); // Set PortA Pin4 as Input
            }
            else if (Direction == 1)
            {
                DDRA |= (1 << PA4); // Set PortA Pin4 as Output
            }
            break;
        case 5:
            if (Direction == 0)
            {
                DDRA &= (1 << PA5); // Set PortA Pin5 as Input
            }
            else if (Direction == 1)
            {
                DDRA |= (1 << PA5); // Set PortA Pin5 as Output
            }
            break;
        case 6:
            if (Direction == 0)
            {
                DDRA &= (1 << PA6); // Set PortA Pin6 as Input
            }
            else if (Direction == 1)
            {
                DDRA |= (1 << PA6); // Set PortA Pin6 as Output
            }
            break;
        case 7:
            if (Direction == 0)
            {
                DDRA &= (1 << PA7); // Set PortA Pin7 as Input
            }
            else if (Direction == 1)
            {
                DDRA |= (1 << PA7); // Set PortA Pin7 as Output
            }
            break;
        }
    }

    else if (Port == 'B')
    {
        switch (Pin)
        {
        case 0:
            if (Direction == 0)
            {
                DDRB &= (1 << PB0); // Set PortB Pin0 as Input
            }
            else if (Direction == 1)
            {
                DDRB |= (1 << PB0); // Set PortB Pin0 as Output
            }
            break;
        case 1:
            if (Direction == 0)
            {
                DDRB &= (1 << PB1); // Set PortB Pin1 as Input
            }
            else if (Direction == 1)
            {
                DDRB |= (1 << PB1); // Set PortB Pin1 as Output
            }
            break;
        case 2:
            if (Direction == 0)
            {
                DDRB &= (1 << PB2); // Set PortB Pin2 as Input
            }
            else if (Direction == 1)
            {
                DDRB |= (1 << PB2); // Set PortB Pin2 as Output
            }
            break;
        case 3:
            if (Direction == 0)
            {
                DDRB &= (1 << PB3); // Set PortB Pin3 as Input
            }
            else if (Direction == 1)
            {
                DDRB |= (1 << PB3); // Set PortB Pin3 as Output
            }
            break;
        case 4:
            if (Direction == 0)
            {
                DDRB &= (1 << PB4); // Set PortB Pin4 as Input
            }
            else if (Direction == 1)
            {
                DDRB |= (1 << PB4); // Set PortB Pin4 as Output
            }
            break;
        case 5:
            if (Direction == 0)
            {
                DDRB &= (1 << PB5); // Set PortB Pin5 as Input
            }
            else if (Direction == 1)
            {
                DDRB |= (1 << PB5); // Set PortB Pin5 as Output
            }
            break;
        case 6:
            if (Direction == 0)
            {
                DDRB &= (1 << PB6); // Set PortB Pin6 as Input
            }
            else if (Direction == 1)
            {
                DDRB |= (1 << PB6); // Set PortB Pin6 as Output
            }
            break;
        case 7:
            if (Direction == 0)
            {
                DDRB &= (1 << PB7); // Set PortB Pin7 as Input
            }
            else if (Direction == 1)
            {
                DDRB |= (1 << PB7); // Set PortB Pin7 as Output
            }
            break;
        }
    }

    else if (Port == 'C')
    {
        switch (Pin)
        {
        case 0:
            if (Direction == 0)
            {
                DDRC &= (1 << PC0); // Set PortC Pin0 as Input
            }
            else if (Direction == 1)
            {
                DDRC |= (1 << PC0); // Set PortC Pin0 as Output
            }
            break;
        case 1:
            if (Direction == 0)
            {
                DDRC &= (1 << PC1); // Set PortC Pin1 as Input
            }
            else if (Direction == 1)
            {
                DDRC |= (1 << PC1); // Set PortC Pin1 as Output
            }
            break;
        case 2:
            if (Direction == 0)
            {
                DDRC &= (1 << PC2); // Set PortC Pin2 as Input
            }
            else if (Direction == 1)
            {
                DDRC |= (1 << PC2); // Set PortC Pin2 as Output
            }
            break;
        case 3:
            if (Direction == 0)
            {
                DDRC &= (1 << PC3); // Set PortC Pin3 as Input
            }
            else if (Direction == 1)
            {
                DDRC |= (1 << PC3); // Set PortC Pin3 as Output
            }
            break;
        case 4:
            if (Direction == 0)
            {
                DDRC &= (1 << PC4); // Set PortC Pin4 as Input
            }
            else if (Direction == 1)
            {
                DDRC |= (1 << PC4); // Set PortC Pin4 as Output
            }
            break;
        case 5:
            if (Direction == 0)
            {
                DDRC &= (1 << PC5); // Set PortC Pin5 as Input
            }
            else if (Direction == 1)
            {
                DDRC |= (1 << PC5); // Set PortC Pin5 as Output
            }
            break;
        case 6:
            if (Direction == 0)
            {
                DDRC &= (1 << PC6); // Set PortC Pin6 as Input
            }
            else if (Direction == 1)
            {
                DDRC |= (1 << PC6); // Set PortC Pin6 as Output
            }
            break;
        case 7:
            if (Direction == 0)
            {
                DDRC &= (1 << PC7); // Set PortC Pin7 as Input
            }
            else if (Direction == 1)
            {
                DDRC |= (1 << PC7); // Set PortC Pin7 as Output
            }
            break;
        }
    }

    else if (Port == 'D')
    {
        switch (Pin)
        {
        case 0:
            if (Direction == 0)
            {
                DDRD &= (1 << PD0); // Set PortD Pin0 as Input
            }
            else if (Direction == 1)
            {
                DDRD |= (1 << PD0); // Set PortD Pin0 as Output
            }
            break;
        case 1:
            if (Direction == 0)
            {
                DDRD &= (1 << PD1); // Set PortD Pin1 as Input
            }
            else if (Direction == 1)
            {
                DDRD |= (1 << PD1); // Set PortD Pin1 as Output
            }
            break;
        case 2:
            if (Direction == 0)
            {
                DDRD &= (1 << PD2); // Set PortD Pin2 as Input
            }
            else if (Direction == 1)
            {
                DDRD |= (1 << PD2); // Set PortD Pin2 as Output
            }
            break;
        case 3:
            if (Direction == 0)
            {
                DDRD &= (1 << PD3); // Set PortD Pin3 as Input
            }
            else if (Direction == 1)
            {
                DDRD |= (1 << PD3); // Set PortD Pin3 as Output
            }
            break;
        case 4:
            if (Direction == 0)
            {
                DDRD &= (1 << PD4); // Set PortD Pin4 as Input
            }
            else if (Direction == 1)
            {
                DDRD |= (1 << PD4); // Set PortD Pin4 as Output
            }
            break;
        case 5:
            if (Direction == 0)
            {
                DDRD &= (1 << PD5); // Set PortD Pin5 as Input
            }
            else if (Direction == 1)
            {
                DDRD |= (1 << PD5); // Set PortD Pin5 as Output
            }
            break;
        case 6:
            if (Direction == 0)
            {
                DDRD &= (1 << PD6); // Set PortD Pin6 as Input
            }
            else if (Direction == 1)
            {
                DDRD |= (1 << PD6); // Set PortD Pin6 as Output
            }
            break;
        case 7:
            if (Direction == 0)
            {
                DDRD &= (1 << PD7); // Set PortD Pin7 as Input
            }
            else if (Direction == 1)
            {
                DDRD |= (1 << PD7); // Set PortD Pin7 as Output
            }
            break;
        }
    }
    return 1;
}
int Gpio_Write(char Port, int Pin, int Value)
{
    if (Port == 'A')
    {
        switch (Pin)
        {
        case 0:
            if (Value == 0)
            {
                PORTA &= ~(1 << PA0); // Clear PortA Pin0
            }
            else if (Value == 1)
            {
                PORTA |= (1 << PA0); // Set PortA Pin0
            }
            break;
        case 1:
            if (Value == 0)
            {
                PORTA &= ~(1 << PA1); // Clear PortA Pin1
            }
            else if (Value == 1)
            {
                PORTA |= (1 << PA1); // Set PortA Pin1
            }
            break;
        case 2:
            if (Value == 0)
            {
                PORTA &= ~(1 << PA2); // Clear PortA Pin2
            }
            else if (Value == 1)
            {
                PORTA |= (1 << PA2); // Set PortA Pin2
            }
            break;
        case 3:
            if (Value == 0)
            {
                PORTA &= ~(1 << PA3); // Clear PortA Pin3
            }
            else if (Value == 1)
            {
                PORTA |= (1 << PA3); // Set PortA Pin3
            }
            break;
        case 4:
            if (Value == 0)
            {
                PORTA &= ~(1 << PA4); // Clear PortA Pin4
            }
            else if (Value == 1)
            {
                PORTA |= (1 << PA4); // Set PortA Pin4
            }
            break;
        case 5:
            if (Value == 0)
            {
                PORTA &= ~(1 << PA5); // Clear PortA Pin5
            }
            else if (Value == 1)
            {
                PORTA |= (1 << PA5); // Set PortA Pin5
            }
            break;
        case 6:
            if (Value == 0)
            {
                PORTA &= ~(1 << PA6); // Clear PortA Pin6
            }
            else if (Value == 1)
            {
                PORTA |= (1 << PA6); // Set PortA Pin6
            }
            break;
        case 7:
            if (Value == 0)
            {
                PORTA &= ~(1 << PA7); // Clear PortA Pin7
            }
            else if (Value == 1)
            {
                PORTA |= (1 << PA7); // Set PortA Pin7
            }
            break;
        }
    }

    else if (Port == 'B')
    {
        switch (Pin)
        {
        case 0:
            if (Value == 0)
            {
                PORTB &= ~(1 << PB0); // Clear PortB Pin0
            }
            else if (Value == 1)
            {
                PORTB |= (1 << PB0); // Set PortB Pin0
            }
            break;
        case 1:
            if (Value == 0)
            {
                PORTB &= ~(1 << PB1); // Clear PortB Pin1
            }
            else if (Value == 1)
            {
                PORTB |= (1 << PB1); // Set PortB Pin1
            }
            break;
        case 2:
            if (Value == 0)
            {
                PORTB &= ~(1 << PB2); // Clear PortB Pin2
            }
            else if (Value == 1)
            {
                PORTB |= (1 << PB2); // Set PortB Pin2
            }
            break;
        case 3:
            if (Value == 0)
            {
                PORTB &= ~(1 << PB3); // Clear PortB Pin3
            }
            else if (Value == 1)
            {
                PORTB |= (1 << PB3); // Set PortB Pin3
            }
            break;
        case 4:
            if (Value == 0)
            {
                PORTB &= ~(1 << PB4); // Clear PortB Pin4
            }
            else if (Value == 1)
            {
                PORTB |= (1 << PB4); // Set PortB Pin4
            }
            break;
        case 5:
            if (Value == 0)
            {
                PORTB &= ~(1 << PB5); // Clear PortB Pin5
            }
            else if (Value == 1)
            {
                PORTB |= (1 << PB5); // Set PortB Pin5
            }
            break;
        case 6:
            if (Value == 0)
            {
                PORTB &= ~(1 << PB6); // Clear PortB Pin6
            }
            else if (Value == 1)
            {
                PORTB |= (1 << PB6); // Set PortB Pin6
            }
            break;
        case 7:
            if (Value == 0)
            {
                PORTB &= ~(1 << PB7); // Clear PortB Pin7
            }
            else if (Value == 1)
            {
                PORTB |= (1 << PB7); // Set PortB Pin7
            }
            break;
        }
    }

    else if (Port == 'C')
    {
        switch (Pin)
        {
        case 0:
            if (Value == 0)
            {
                PORTC &= ~(1 << PC0); // Clear PortC Pin0
            }
            else if (Value == 1)
            {
                PORTC |= (1 << PC0); // Set PortC Pin0
            }
            break;
        case 1:
            if (Value == 0)
            {
                PORTC &= ~(1 << PC1); // Clear PortC Pin1
            }
            else if (Value == 1)
            {
                PORTC |= (1 << PC1); // Set PortC Pin1
            }
            break;
        case 2:
            if (Value == 0)
            {
                PORTC &= ~(1 << PC2); // Clear PortC Pin2
            }
            else if (Value == 1)
            {
                PORTC |= (1 << PC2); // Set PortC Pin2
            }
            break;
        case 3:
            if (Value == 0)
            {
                PORTC &= ~(1 << PC3); // Clear PortC Pin3
            }
            else if (Value == 1)
            {
                PORTC |= (1 << PC3); // Set PortC Pin3
            }
            break;
        case 4:
            if (Value == 0)
            {
                PORTC &= ~(1 << PC4); // Clear PortC Pin4
            }
            else if (Value == 1)
            {
                PORTC |= (1 << PC4); // Set PortC Pin4
            }
            break;
        case 5:
            if (Value == 0)
            {
                PORTC &= ~(1 << PC5); // Clear PortC Pin5
            }
            else if (Value == 1)
            {
                PORTC |= (1 << PC5); // Set PortC Pin5
            }
            break;
        case 6:
            if (Value == 0)
            {
                PORTC &= ~(1 << PC6); // Clear PortC Pin6
            }
            else if (Value == 1)
            {
                PORTC |= (1 << PC6); // Set PortC Pin6
            }
            break;
        case 7:
            if (Value == 0)
            {
                PORTC &= ~(1 << PC7); // Clear PortC Pin7
            }
            else if (Value == 1)
            {
                PORTC |= (1 << PC7); // Set PortC Pin7
            }
            break;
        }
    }

    else if (Port == 'D')
    {
        switch (Pin)
        {
        case 0:
            if (Value == 0)
            {
                PORTD &= ~(1 << PD0); // Clear PortD Pin0
            }
            else if (Value == 1)
            {
                PORTD |= (1 << PD0); // Set PortD Pin0
            }
            break;
        case 1:
            if (Value == 0)
            {
                PORTD &= ~(1 << PD1); // Clear PortD Pin1
            }
            else if (Value == 1)
            {
                PORTD |= (1 << PD1); // Set PortD Pin1
            }
            break;
        case 2:
            if (Value == 0)
            {
                PORTD &= ~(1 << PD2); // Clear PortD Pin2
            }
            else if (Value == 1)
            {
                PORTD |= (1 << PD2); // Set PortD Pin2
            }
            break;
        case 3:
            if (Value == 0)
            {
                PORTD &= ~(1 << PD3); // Clear PortD Pin3
            }
            else if (Value == 1)
            {
                PORTD |= (1 << PD3); // Set PortD Pin3
            }
            break;
        case 4:
            if (Value == 0)
            {
                PORTD &= ~(1 << PD4); // Clear PortD Pin4
            }
            else if (Value == 1)
            {
                PORTD |= (1 << PD4); // Set PortD Pin4
            }
            break;
        case 5:
            if (Value == 0)
            {
                PORTD &= ~(1 << PD5); // Clear PortD Pin5
            }
            else if (Value == 1)
            {
                PORTD |= (1 << PD5); // Set PortD Pin5
            }
            break;
        case 6:
            if (Value == 0)
            {
                PORTD &= ~(1 << PD6); // Clear PortD Pin6
            }
            else if (Value == 1)
            {
                PORTD |= (1 << PD6); // Set PortD Pin6
            }
            break;
        case 7:
            if (Value == 0)
            {
                PORTD &= ~(1 << PD7); // Clear PortD Pin7
            }
            else if (Value == 1)
            {
                PORTD |= (1 << PD7); // Set PortD Pin7
            }
            break;
        }
    }
    return 1;
}
int Gpio_Read(char Port, int Pin)
{
    int Value = 0;
    if (Port == 'A')
    {
        switch (Pin)
        {
        case 0:
            Value = (PINA & (1 << PA0)) ? 1 : 0; // Read PortA Pin0
            break;
        case 1:
            Value = (PINA & (1 << PA1)) ? 1 : 0; // Read PortA Pin1
            break;
        case 2:
            Value = (PINA & (1 << PA2)) ? 1 : 0; // Read PortA Pin2
            break;
        case 3:
            Value = (PINA & (1 << PA3)) ? 1 : 0; // Read PortA Pin3
            break;
        case 4:
            Value = (PINA & (1 << PA4)) ? 1 : 0; // Read PortA Pin4
            break;
        case 5:
            Value = (PINA & (1 << PA5)) ? 1 : 0; // Read PortA Pin5
            break;
        case 6:
            Value = (PINA & (1 << PA6)) ? 1 : 0; // Read PortA Pin6
            break;
        case 7:
            Value = (PINA & (1 << PA7)) ? 1 : 0; // Read PortA Pin7
            break;
        }
    }

    else if (Port == 'B')
    {
        switch (Pin)
        {
        case 0:
            Value = (PINB & (1 << PB0)) ? 1 : 0; // Read PortB Pin0
            break;
        case 1:
            Value = (PINB & (1 << PB1)) ? 1 : 0; // Read PortB Pin1
            break;
        case 2:
            Value = (PINB & (1 << PB2)) ? 1 : 0; // Read PortB Pin2
            break;
        case 3:
            Value = (PINB & (1 << PB3)) ? 1 : 0; // Read PortB Pin3
            break;
        case 4:
            Value = (PINB & (1 << PB4)) ? 1 : 0; // Read PortB Pin4
            break;
        case 5:
            Value = (PINB & (1 << PB5)) ? 1 : 0; // Read PortB Pin5
            break;
        case 6:
            Value = (PINB & (1 << PB6)) ? 1 : 0; // Read PortB Pin6
            break;
        case 7:
            Value = (PINB & (1 << PB7)) ? 1 : 0; // Read PortB Pin7
            break;
        }
    }

    else if (Port == 'C')
    {
        switch (Pin)
        {
        case 0:
            Value = (PINC & (1 << PC0)) ? 1 : 0; // Read PortC Pin0
            break;
        case 1:
            Value = (PINC & (1 << PC1)) ? 1 : 0; // Read PortC Pin1
            break;
        case 2:
            Value = (PINC & (1 << PC2)) ? 1 : 0; // Read PortC Pin2
            break;
        case 3:
            Value = (PINC & (1 << PC3)) ? 1 : 0; // Read PortC Pin3
            break;
        case 4:
            Value = (PINC & (1 << PC4)) ? 1 : 0; // Read PortC Pin4
            break;
        case 5:
            Value = (PINC & (1 << PC5)) ? 1 : 0; // Read PortC Pin5
            break;
        case 6:
            Value = (PINC & (1 << PC6)) ? 1 : 0; // Read PortC Pin6
            break;
        case 7:
            Value = (PINC & (1 << PC7)) ? 1 : 0; // Read PortC Pin7
            break;
        }
    }

    else if (Port == 'D')
    {
        switch (Pin)
        {
        case 0:
            Value = (PIND & (1 << PD0)) ? 1 : 0; // Read PortD Pin0
            break;
        case 1:
            Value = (PIND & (1 << PD1)) ? 1 : 0; // Read PortD Pin1
            break;
        case 2:
            Value = (PIND & (1 << PD2)) ? 1 : 0; // Read PortD Pin2
            break;
        case 3:
            Value = (PIND & (1 << PD3)) ? 1 : 0; // Read PortD Pin3
            break;
        case 4:
            Value = (PIND & (1 << PD4)) ? 1 : 0; // Read PortD Pin4
            break;
        case 5:
            Value = (PIND & (1 << PD5)) ? 1 : 0; // Read PortD Pin5
            break;
        case 6:
            Value = (PIND & (1 << PD6)) ? 1 : 0; // Read PortD Pin6
            break;
        case 7:
            Value = (PIND & (1 << PD7)) ? 1 : 0; // Read PortD Pin7
            break;
        }
    }
    return Value;
}
