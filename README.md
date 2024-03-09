# AVR
Driver function for gpio pins of atmega16/32

#Usage:

*Gpio_Init() equivalent to DDR register
*Gpio_Write() equivalent to PORT register
*Gpio_Read() equivalent to PIN register

#Funtion paramters:

*Gpio_Init:-

>int Gpio_Init(char Port, int Pin, bool Direction)

>accepts character for PORT address in caps - 'A'/'B'/'C'/'D'.
>accepts interger for Pin number of that port 0 to 7.
>accepts character for the the input-'i'
>

