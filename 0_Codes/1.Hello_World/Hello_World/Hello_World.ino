/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */

int val; // define variables val
int ledpin = 13; // definition digital interface 13
void setup ()
{
  Serial.begin (9600); // set the baud rate to 9600, 
  pinMode (ledpin, OUTPUT); // set the pin 13 as digital Output
}
void loop ()
{
  val = Serial.read (); // Read serial data typed on serial monitor
  if (val == 'R') // determines whether the received instruction or character is "R".
  { // If the received frame is "R" character
    digitalWrite (ledpin, HIGH); // Led goes HIGH
    delay (500);
    digitalWrite (ledpin, LOW); // Led goes LOW
    delay (500);
    Serial.println ("Hello World!"); // Display "Hello World!" String
  }
}
