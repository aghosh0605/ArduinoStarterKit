/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */

#include <Servo.h>//Include Serov.h lib
Servo myservo;// Define variables
unsigned char i;//
void setup()
{
myservo.attach(9);// Define the servo interface
}
void loop()
{
  for(i=0;i<180;i++)
   {
     myservo.write(i);// Set the steering angle of rotation
     delay(10);   
   }
   for(i=180;i>0;i--)
   {
     myservo.write(i);// Set the steering angle of rotation
     delay(10);   
   }
}

