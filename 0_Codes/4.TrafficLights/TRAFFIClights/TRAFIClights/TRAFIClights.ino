/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */

int redled =10; //Definition digital 8 Interface
int yellowled =7; //Definition digital 7 Interface
int greenled =4; //Definition digital 4 Interface
void setup()
{
pinMode(redled, OUTPUT); //The definition of red light interface as output
pinMode(yellowled, OUTPUT); //The definition of a small red light interface as output
pinMode(greenled, OUTPUT); //The definition of a small green light interface as output
}
void loop()
{
digitalWrite(greenled, HIGH);////Green lights
delay(5000);//Delay 5 seconds
digitalWrite(greenled, LOW); //Green light goes OFF
for(int i=0;i<3;i++)//Alternately flashes three times, flashing yellow light effect
{
delay(500);//Delay 0.5 seconds
digitalWrite(yellowled, HIGH);//Yellow lights
delay(500);//Delay 0.5 seconds
digitalWrite(yellowled, LOW);//Yellow light goes OFF
} 
delay(500);//Delay 0.5 seconds
digitalWrite(redled, HIGH);//Red lights
delay(5000);//Delay 5 seconds
digitalWrite(redled, LOW);//Red light goes OFF
}
