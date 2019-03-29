# Atmega328p Software Debugger

### Software Debugger with Atmega328p, software debugger used UART protocol to interface with PC through serial port.

## Design:

![design](https://user-images.githubusercontent.com/26473614/55230326-2c7bef80-5228-11e9-819d-39e880d0047f.png)

## Read/Write Test-Cases:

![output](https://user-images.githubusercontent.com/26473614/55230327-2d148600-5228-11e9-8596-c466fc9c9744.PNG)

### Address of some registers in ATmega328p:
REG   |Address
------|-------
PORTB | 37
DDRB  | 36
PINB  | 35
PORTC | 40
DDRC  | 39
PINC  | 38
PIND  | 41
DDRD  | 42
PORTD | 43

### Full command will be:

> @ W/R XX YYY;

> XX: register address as decimal value.

> YYY: value of register, ignored at read operation you can write any value.

> Spaces will be ignored by the driver.
