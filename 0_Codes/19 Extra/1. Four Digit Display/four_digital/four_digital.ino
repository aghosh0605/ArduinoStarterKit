/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */
 
	// Set the cathode interface
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int f = 6;
	int g = 7;
	int dp = 8;
	// Set the anode interface
	int D4 = 9;
	int D3 = 10;
	int D2 = 11;
	int D1 = 12;
	// Set the variable
	long n = 1230;
	int x = 100;
	int del = 55;  
        int i;
	 
	void setup()
	{
	  pinMode(D1, OUTPUT);
	  pinMode(D2, OUTPUT);
	  pinMode(D3, OUTPUT);
	  pinMode(D4, OUTPUT);
	  pinMode(a, OUTPUT);
	  pinMode(b, OUTPUT);
	  pinMode(c, OUTPUT);
	  pinMode(d, OUTPUT);
	  pinMode(e, OUTPUT);
	  pinMode(f, OUTPUT);
	  pinMode(g, OUTPUT);
	  pinMode(dp, OUTPUT);
	}
/////////////////////////////////////////////////////////////
void loop()
{
  
 Display(1, 1);
 delay(1000);
 Display(2, 2);
  delay(1000);
 Display(3, 3);
  delay(1000);
 Display(4, 4);
 delay(1000);
 for(i=0;i<=9;i++)
   {
       Display(5, i);
       delay(1500);
   }
}
///////////////////////////////////////////////////////////////
void segment(unsigned char n)//
{
    switch(n)
     {
	case 1: 
	  digitalWrite(D1,LOW);
 	  digitalWrite(D2, HIGH);
	  digitalWrite(D3, HIGH);
	  digitalWrite(D4, HIGH);   
	 break;
	 case 2: 
	  digitalWrite(D1, HIGH);
 	  digitalWrite(D2, LOW);
	  digitalWrite(D3, HIGH);
	  digitalWrite(D4, HIGH); 
	    break;
	  case 3: 
	    digitalWrite(D1,HIGH);
 	   digitalWrite(D2, HIGH);
	   digitalWrite(D3, LOW);
	   digitalWrite(D4, HIGH); 
	    break;
	  case 4: 
	   digitalWrite(D1, HIGH);
 	   digitalWrite(D2, HIGH);
	   digitalWrite(D3, HIGH);
	   digitalWrite(D4, LOW); 
	    break;
          case 5:
           digitalWrite(D1, LOW);
 	   digitalWrite(D2, LOW);
	   digitalWrite(D3, LOW);
	   digitalWrite(D4, LOW);
            break;
        default :
           digitalWrite(D1, HIGH);
	   digitalWrite(D2, HIGH);
	   digitalWrite(D3, HIGH);
	   digitalWrite(D4, HIGH);
        break;
	  }
}
void Num_0()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(dp,HIGH);
}
void Num_1()
{
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp,HIGH);
}
void Num_2()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(dp,HIGH);
}
void Num_3()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(dp,HIGH);
}
void Num_4()
{
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp,HIGH);
}
void Num_5()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp,HIGH);
}
void Num_6()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp,HIGH);
}
void Num_7()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp,HIGH);
}
void Num_8()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp,HIGH);
}
void Num_9()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp,HIGH);
}
void Clear()  //Clear
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp,LOW);
}
void pickNumber(unsigned char n)
{
  switch(n)
  {
   case 0:Num_0();
   break;
   case 1:Num_1();
   break;
   case 2:Num_2();
   break;
   case 3:Num_3();
   break;
   case 4:Num_4();
   break;
   case 5:Num_5();
   break;
   case 6:Num_6();
   break;
   case 7:Num_7();
   break;
   case 8:Num_8();
   break;
   case 9:Num_9();
   break;
   default:Clear();
   break; 
  }
}
void Display(unsigned char x, unsigned char Number)
{
  segment(x);
  pickNumber(Number);
 delay(1);
 //Clear() ; 
}


