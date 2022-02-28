/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */

int LM35Pin = 0; //Connect analog interface LM35 to pin 0
void setup()
{
Serial.begin(9600);//Set baudrate to 9600
}
void loop()
{
int val;// Define variables
int data;
val=analogRead(LM35Pin);//Read analog sensor values ​​and assign it to val
data = (val*5)/10;  // Temperature calculation formula
Serial.print("Temp:");//Output a string that represents the temperature display Temp
Serial.print(data);//The output shows the value data
Serial.println("C");//Display the output in Celsius
delay(500);//delay 0.5 sec
}

