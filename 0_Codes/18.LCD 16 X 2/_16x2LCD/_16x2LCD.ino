/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */

/*
  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
*/
// include the library code:
#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // sets the interfacing pins

void setup()
{
 lcd.begin(16, 2);  // initializes the 16x2 LCD
}

void loop()
{
  lcd.setCursor(2,0);           //sets the cursor at row 0 column 0
  lcd.print("!!Welcome!!"); // prints 16x2 LCD MODULE
  lcd.setCursor(1,1);           //sets the cursor at row 1 column 2
  lcd.print("ROBOKITS INDIA");     // prints HELLO WORLD
}

