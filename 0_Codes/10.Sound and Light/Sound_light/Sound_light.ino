/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */


int buzzer = 9; //Define buzzer at output pin 9
int LDR = 0;// Define photoresistance input at pin 0
int val;
void setup() 
{ 
pinMode(buzzer,OUTPUT);//Set the buzzer as output
} 
void voice_out(int del)//Frequency sound control function
{
 delay(del);//To change the frequency by changing the delay.
 digitalWrite(buzzer,HIGH);
 delay(del);
 digitalWrite(buzzer,LOW);
}
void loop() 
{ 
  val=analogRead(LDR);  //analog read fuction at pin 0
  if(val<700)
   {
    voice_out(val); //genrating delay according to Light intensity.
   }
}

