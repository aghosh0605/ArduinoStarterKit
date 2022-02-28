/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */

int ledpin=11;// definition digital interface
int inpin=7;//Define the number 7 Interface
int val;//Define the variable val
void setup()
{
  pinMode(ledpin,OUTPUT);//Define led as Output
  pinMode(inpin,INPUT);//Button interface is defined as input
}
void loop()
{
val=digitalRead(inpin);//Read digitalpin 7 level value assigned to val
if(val==HIGH)//Test button is pressed 
{
  digitalWrite(ledpin,LOW);
}
else
{ 
  digitalWrite(ledpin,HIGH);
}
}
