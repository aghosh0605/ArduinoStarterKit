/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */

int data = 2;  // 74HC595 data input pin 14 
int clock = 5; // 74hc595 clock (SCK) line pin 11 
int latch = 4;   //  74hc595latch line pin 12
int ledState = 0;
const int ON = HIGH;
const int OFF = LOW;
void setup ()
{
pinMode (data, OUTPUT);
pinMode (clock, OUTPUT);
pinMode (latch, OUTPUT);
}
void loop ()
{
for (int i = 0; i <256; i ++)
{
updateLEDs (i);
delay (500);
}
}
void updateLEDs (int value)
{
digitalWrite (latch, LOW); 
shiftOut (data, clock, MSBFIRST, ~ value); // serial data output
digitalWrite (latch, HIGH); // latch
}

