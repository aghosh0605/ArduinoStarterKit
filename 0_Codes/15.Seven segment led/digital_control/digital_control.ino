/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */


// Set the control of each segment digital IO pins
int a = 7; 
int b = 6; 
int c = 5; 
int d = 10; 
int e = 11; 
int f = 8; 
int g = 9; 
int dp = 4; 

void digital_0 (void) // display the number 0
{
unsigned char j;
digitalWrite (a, HIGH);
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, HIGH);
digitalWrite (g, LOW);
digitalWrite (dp, LOW);
}
void digital_1 (void) // display the number 1
{
unsigned char j;
digitalWrite (c, HIGH); // lit ledtube C 
digitalWrite (b, HIGH); // lit ledtube B 
for (j = 7; j <= 11; j ++) // extinguish the remaining segment
digitalWrite (j, LOW);
// extinguish decimal DP segment;
digitalWrite (dp, LOW);
}
void digital_2 (void) // display the number 2
{
unsigned char j;
digitalWrite (b, HIGH);
digitalWrite (a, HIGH);
for (j = 9; j <= 11; j ++)
digitalWrite (j, HIGH);
digitalWrite (dp, LOW);
digitalWrite (c, LOW);
digitalWrite (f, LOW);
}
void digital_3 (void) // display the number 3
{
digitalWrite (g, HIGH);
digitalWrite (a, HIGH);
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (dp, LOW);
digitalWrite (f, LOW);
digitalWrite (e, LOW);
}
void digital_4 (void) // display the number 4
{
digitalWrite (c, HIGH);
digitalWrite (b, HIGH);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH);
digitalWrite (dp, LOW);
digitalWrite (a, LOW);
digitalWrite (e, LOW);
digitalWrite (d, LOW);
}
void digital_5 (void) // display the number 5
{
unsigned char j;
digitalWrite (a, HIGH);
digitalWrite (b, LOW);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, LOW);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH);
digitalWrite (dp, LOW);
}
void digital_6 (void) // display the number 6
{
unsigned char j;
for (j = 7; j <= 11; j ++)
digitalWrite (j, HIGH);
digitalWrite (c, HIGH);
digitalWrite (dp, LOW);
digitalWrite (b, LOW);
}
void digital_7 (void) // display the number 7
{
unsigned char j;
for (j = 5; j <= 7; j ++)
digitalWrite (j, HIGH);
digitalWrite (dp, LOW);
for (j = 8; j <= 11; j ++)
digitalWrite (j, LOW);
}
void digital_8 (void) // Display Digital 8
{
unsigned char j;
for (j = 5; j <= 11; j ++)
digitalWrite (j, HIGH);
digitalWrite (dp, LOW);
}
void digital_9 (void) // display the number 9
{
unsigned char j;
digitalWrite (a, HIGH);
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, LOW);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH);
digitalWrite (dp, LOW);
}
void setup ()
{
int i; // define variables
for (i = 4; i <= 11; i ++)
pinMode (i, OUTPUT); // set 4 to 11 pins as output 
}
void loop ()
{
while (1)
{
digital_0 (); // display number 0
delay (1000); // delay 1s
digital_1 (); // display number 1
delay (1000); // delay 1s
digital_2 (); // display number 2
delay (1000); // delay 1s
digital_3 (); // display number 3
delay (1000); // delay 1s
digital_4 (); // display number 4
delay (1000); // delay 1s
digital_5 (); // display number 5
delay (1000); // delay 1s
digital_6 (); // display number 6
delay (1000); // delay 1s
digital_7 (); // display number 7
delay (1000); // delay 1s
digital_8 (); // display number 8
delay (1000); // delay 1s
digital_9 (); // display number 9
delay (1000); // delay 1s
}
}

