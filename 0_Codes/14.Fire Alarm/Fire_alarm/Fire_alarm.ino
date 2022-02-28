/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */


int flame = 0; // define the flame port analog interface pin 0
int Beep = 9; // define the buzzer as the digital interface pin 8 
int val = 0; //variable to store analog value intialised to 0.
void setup ()
{
pinMode (Beep, OUTPUT); // Define Buzzer as output 
pinMode (flame, INPUT); // Define IR sensor as input
Serial.begin (9600); // set the baud rate to 9600
}
void loop ()
{
val = analogRead (flame); // read the analog value of the flame sensor
Serial.println (val); // Print analog value on Serial monitor
if (val >= 512) // The buzzer sounds when analog values greater than 600
{
digitalWrite (Beep, HIGH);
} else
{
digitalWrite (Beep, LOW);
}
delay(500);
}

