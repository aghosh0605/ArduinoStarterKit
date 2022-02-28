/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */

int potpin = 0; // define the analog interface 0
int ledpin = 13; // definine digital interface 13
int val = 0; // define the variable val, and initial value 0
int v;
void setup ()
{
  pinMode (ledpin, OUTPUT); // define led as output
  Serial.begin (9600); // set the baud rate to 9600
}
void loop ()
{
  digitalWrite (ledpin, HIGH)
  delay (50); // delay of 0.05 seconds
  digitalWrite (ledpin, LOW); 
  delay (50); // delay of 0.05 seconds
  
  val = analogRead (potpin); // read the value of analog interface 0 and assigns it to val
  v = map (val, 0,1023,0,500);
// Function Description map (x, Amin, Amax, Bmin, Bmax). returns value of type long
  Serial.println ((float) v / 100.00); // shows the value of v
} 

