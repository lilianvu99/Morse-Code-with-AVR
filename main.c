/*
 * GccApplication1.c
 *
 * Created: 5/31/2019 10:05:26 AM
 * Author : Lilian Vu
 */
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dot (void);
void dash (void);
void spaceletters (void);
void spacewords (void);
void numMore (char data[]);

int main(void)
{
 char name[20] = "Lilian Vu";
 numMore(name);
 char redid[9] = "821477716";
 numMore(redid);
 
 return 0;
}
void dot (void) {
 DDRB |= (1 << PORTB5);
 PORTB |= (1 << PORTB5); //there is a bit or not
 _delay_ms(200); //how long its on
 PORTB &= ~(1 << PORTB5);
 _delay_ms(200);
}
void dash (void) {
 DDRB |= (1 << PORTB5);
 PORTB |= (1 << PORTB5);
 _delay_ms(600);
 PORTB &= ~(1 << PORTB5);
 _delay_ms(200);
}
void spaceletters (void) {
 DDRB |= (1 << PORTB5);
 PORTB &= ~(1 << PORTB5); //clearing on specific port
 _delay_ms(600);
}
void spacewords (void) {
 DDRB |= (1 << PORTB5);
 PORTB &= ~(1 << PORTB5); //clearing on specific port
 _delay_ms(600);
}
void numMore(char data[]) {
 int i = 0;
 while (data[i]) {
  if (data[i] == ' ' ) {
   spacewords();
   i++;
  }
  if (data[i] == 'A' || data[i] == 'a' ) {
    dot(); dash(); spaceletters();
    i++;
  }
  if (data[i] == 'B' || data[i] == 'b' ) {
    dash(); dot(); dot(); dot(); spaceletters();
    i++;
  }
  if (data[i] == 'C' || data[i] == 'c' ) {
   dash(); dot(); dash(); dot(); spaceletters();
   i++;
  }
  if (data[i] == 'D' || data[i] == 'd' ) {
   dash(); dot(); dot(); spaceletters();
   i++;
  }
  if (data[i] == 'E' || data[i] == 'e' ) {
   dot(); spaceletters();
   i++;
  }
  if (data[i] == 'F' || data[i] == 'f' ) {
   dot(); dot(); dash(); dot(); spaceletters();
   i++;  
  }
  if (data[i] == 'G' || data[i] == 'g' ) {
	dash(); dot(); dash(); spaceletters();
	i++;
  }
  if (data[i] == 'H' || data[i] == 'h' ) {
   dot(); dot(); dot(); dot(); spaceletters();
   i++;
  }
  if (data[i] == 'I' || data[i] == 'i' ) {
   dot(); dot(); spaceletters();
   i++;
  }
  if (data[i] == 'J' || data[i] == 'j' ) {
   dot(); dash(); dash(); dash(); spaceletters();
   i++;
  }
  if (data[i] == 'K' || data[i] == 'k' ) {
   dash(); dot(); dash(); spaceletters();
   i++;
  }
  if (data[i] == 'L' || data[i] == 'l' ) {
   dot(); dash(); dot(); dot(); spaceletters();
   i++;
  }
  if (data[i] == 'M' || data[i] == 'm' ) {
   dash(); dash(); spaceletters();
   i++;
  }
  if (data[i] == 'N' || data[i] == 'n' ) {
   dash(); dot(); spaceletters();
   i++;
  }
  if (data[i] == 'O' || data[i] == 'o' ) {
   dash(); dash(); dash(); spaceletters();
   i++;
  }
  if (data[i] == 'P' || data[i] == 'p' ) {
   dot(); dash(); dash(); dot(); spaceletters();
   i++;
  }
  if (data[i] == 'Q' || data[i] == 'q' ) {
   dash(); dash(); dot(); dash(); spaceletters();
   i++;
  }
  if (data[i] == 'R' || data[i] == 'r' ) {
   dot(); dash(); dot(); spaceletters();
   i++;
  }
  if (data[i] == 'S' || data[i] == 's' ) {
   dot(); dot(); dot(); spaceletters();
   i++;
   }
  if (data[i] == 'T' || data[i] == 't' ) {
   dash(); spaceletters();
   i++;
  }
  if (data[i] == 'U' || data[i] == 'u' ) {
   dot(); dot(); dash(); spacewords();
   i++;
  }
  if (data[i] == 'V' || data[i] == 'v') {
   dot(); dot(); dot(); dash(); spaceletters() ;
   i++;
  }
  if (data[i] == 'W' || data[i] == 'w') {
   dot(); dash(); dash(); spaceletters() ;
   i++;
  }
  if (data[i] == 'X' || data[i] == 'x') {
   dash(); dot(); dot(); dash(); spaceletters() ;
   i++;
  }
  if (data[i] == 'Y' || data[i] == 'y') {
   dash(); dot(); dash(); dash(); spaceletters() ;
   i++;
  }
  if (data[i] == 'Z' || data[i] == 'z') {
   dash(); dash(); dot(); dot(); spaceletters() ;
   i++;
  }
  if (data[i] == '1') {
   dot(); dash(); dash(); dash(); dash(); spaceletters();
   i++;
  }
  if (data[i] == '2') {
	dot(); dot(); dash(); dash(); dash(); spaceletters();
   i++;
  }
  if (data[i] == '3') {
   dot(); dot(); dot(); dash(); dash(); spaceletters();
   i++;
  }
  if (data[i] == '4') {
   dot(); dot(); dot(); dot(); dash(); spaceletters();
   i++;
  }
  if (data[i] == '5') {
   dot(); dot(); dot(); dot(); dot(); spaceletters();
   i++;
  }
  if (data[i] == '6') {
   dash(); dot(); dot(); dot(); dot(); spaceletters();
   i++;
  }
  if (data[i] == '7') {
   dash(); dash(); dot(); dot(); dot(); spaceletters();
   i++;
  }
  if (data[i] == '8') {
   dash(); dash(); dash(); dot(); dot(); spaceletters();
   i++;
  }
  if (data[i] == '9') {
   dash(); dash(); dash(); dash(); dot(); spaceletters();
   i++;
  }
  if (data[i] == '0') {
   dash(); dash(); dash(); dash(); dash(); spaceletters();
   i++;
  }
  
  
 
}
}

