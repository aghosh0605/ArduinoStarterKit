/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */


/*http://familiemeier.ch/robertsblog/2013/11/02/driving-8x8-led-matrix-ld-1088bs/*/  // link for pinouts


//the pin to control ROW 
const int row1 = 2; // the number of the row pin 9 
const int row2 = 3; // the number of the row pin 14 
const int row3 = 4; // the number of the row pin 8 
const int row4 = 5; // the number of the row pin 12 
const int row5 = 6; // the number of the row pin 1 
const int row6 = 7; // the number of the row pin 7 
const int row7 = 8; // the number of the row pin 2 
const int row8 = 9; // the number of the row pin 5 
//the pin to control COl 
const int col1 = 10; // the number of the col pin 13 
const int col2 = 11; // the number of the col pin 3 
const int col3 = 12; // the number of the col pin 4 
const int col4 = 13; // the number of the col pin 10 
const int col5 = 14; // the number of the col pin 6 
const int col6 = 15; // the number of the col pin 11 
const int col7 = 16; // the number of the col pin 15 
const int col8 = 17; // the number of the col pin 16 
void setup(){ 
int i = 0 ; 
for(i=2;i<18;i++) 
{ 
pinMode(i, OUTPUT); 
} 
/*pinMode(row5, OUTPUT); 
pinMode(row6, OUTPUT); 
pinMode(row7, OUTPUT); 
pinMode(row8, OUTPUT);*/ 
for(i=2;i<18;i++) { 
digitalWrite(i, LOW);     //
}  
/*for(i=2;i<18;i++) { 
digitalWrite(row5, LOW); //
} */ 
} 
void loop(){ 
int i; 
for(i=2;i<10;i++)
{
  digitalWrite(i, HIGH);
  delay(200);
  clear_();
}
//delay(1000); 
} 
void clear_(void)
{
  for(int i=2;i<18;i++)
  digitalWrite(i, LOW);
}

