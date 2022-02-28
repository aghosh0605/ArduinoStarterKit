/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */

int BASE = 2 ; //LED connected to the first I / O pin

int NUM = 6;   //The number of LED 's

void setup()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     pinMode(i, OUTPUT);   //Set the digital I / O pin as an output
   }
}

void loop()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, LOW);    //Set the digital I / O pin output is " LOW ", that gradually lights
     delay(200);        //Delayed
   }
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, HIGH);    //Set the digital I / O pin output is " HIGH ", that gradually lights
     delay(200);        //Delayed
   }  
}

