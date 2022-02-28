/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */


int buzzer=8; //Setting the IO pin buzzer is attached.
void setup() 
{ 
  pinMode(buzzer,OUTPUT);//Set Buzzer pin as output
} 
void loop() 
{ 
  unsigned char i,j;// Define variables
  while(1) 
 { 
    for(i=0;i<100;i++)// sound of frequency 1
    { 
      digitalWrite(buzzer,HIGH);//buzzer On
      delay(1);//Delay 1ms 
      digitalWrite(buzzer,LOW);//buzzer Off
      delay(1);// Delay 1ms 
    } 
    for(i=0;i<100;i++)// sound of frequency 2
    { 
      digitalWrite(buzzer,HIGH);//buzzer On
      delay(2);//Delay 2ms 
      digitalWrite(buzzer,LOW);//buzzer Off
      delay(2);//Delay 2ms 
    } 
  } 
}
