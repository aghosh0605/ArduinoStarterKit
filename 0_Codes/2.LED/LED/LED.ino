/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */

int ledPin = 10; //Define pin 10 LED connection

void setup()
{
pinMode(ledPin, OUTPUT); //Define LED as OUTPUT
}
void loop()
{
digitalWrite(ledPin, HIGH); //Lit the LED
delay(1000); //Delay 1 second
digitalWrite(ledPin, LOW); //Extinguish the led
delay(1000); // Delay 1 second
}
