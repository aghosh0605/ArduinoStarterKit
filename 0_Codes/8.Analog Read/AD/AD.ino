/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */

int potpin=0;   //define the analog interface 0
int ledpin=13;  //define digital interface 13
int val=0;      //// define the variable val, and initial value 0
void setup()
{
pinMode(ledpin,OUTPUT);  // Define led pin as Output
Serial.begin(9600);     //set the baud rate to 9600
}
void loop()
{
digitalWrite(ledpin,HIGH);//Blink led for 0.05 second
delay(50);               
digitalWrite(ledpin,LOW);
delay(50);               

val=analogRead(potpin);  // read the value of analog interface 0 and assigns to val
Serial.println(val);    //Print the analog value.
}

