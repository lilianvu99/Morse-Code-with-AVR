# Morse-Code-with-AVR
For this assignment, you are required to write code that outputs an arbitrary string by blinking
the LED in Morse code. Make your Name and Red ID blink in Morse Code on the AVR Xplained
mini 328 board. The method you choose must capable of outputting any standard nullterminated string containing characters A-Z or 0-9 in Morse code on the board's LED.
For the demo, a child function, called from main( ) should output your name and Red ID number
in Morse code, using a method that will work for any arbitrary string constant (in other words,
main should pass the address of the null terminated ASCII string to the child function).
The program is recommended to have different functions for dot, dash, and spacing. (The
functions can be called based on the desired output.) Using functions make it simple to design
multiple outputs, as you simply call on what you need whenever.
Assume, one unit of time for this program will be 200ms.
Ø A dot is equivalent one unit (200ms)
Ø A dash is equivalent to three units (600ms)
Ø The space between the dot/dash units of the same letter is one unit (200ms)
Ø The space between different letters is three units (600ms)
Ø The space between words is seven units (1400ms)
The program should treat your input as one string, and put a longer space between the first
letter of each word.
The program is intended to run in an endless loop.
