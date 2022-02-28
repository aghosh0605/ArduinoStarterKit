/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */

// Ultrasonic - Library for HR-SC04 Ultrasonic Ranging Module.
// Save the Lib in Arduino Ide in lib folder.

#define TrigPin 8        //define the pis assigned to Trig and Echo pins
#define EchoPin 7
int DistanceCM;
//Include the lib
#include <Ultrasonic.h>

Ultrasonic ultrasonic(TrigPin,EchoPin); 

void setup() {
  Serial.begin(9600); 
}

void loop()
{
  DistanceCM = ultrasonic.Ranging(CM); //Replace CM with INC for distance in inch
  Serial.print(DistanceCM);
  Serial.println(" cm" );
  delay(100);
}
