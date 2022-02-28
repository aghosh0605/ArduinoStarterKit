/*

 created 18 Dec 2014
 by Shailesh Modi
 modified 9 Apr 2015
 by SunRobotics Technologies
 
 */

// connection to the pins
const int xpin = A0;                  // x-axis of the accelerometer
const int ypin = A1;                  // y-axis
const int zpin = A2;                  // z-axis 

//int sampleDelay = 500;   //number of milliseconds between readings

void setup()
{
  // initialize the serial communications:
  Serial.begin(9600);

  //Make sure the analog-to-digital converter takes its reference voltage from the AREF pin.
  //0v - 0 ADC counts
  //3.3V - 1023 ADC counts
  analogReference(EXTERNAL);
}

void loop()
{
  //Reading analog value of X-Axis
  int x = analogRead(xpin);
  //add a small delay between pin readings.
  delay(1);
 //Reading analog value of Y-Axis 
  int y = analogRead(ypin);
 //add a small delay between pin readings.
  delay(1); 
//Reading analog value of Z-Axis
  int z = analogRead(zpin);
  
  //zero_Accelaration is the reading we expect from the sensor when it detects
  //no acceleration which provides 1.65V. Subtract this value from the sensor reading to
  //get a offset sensor reading.
  float zero_Accelaration = 512.0;                  // 1.65 when scaled to ADC values provides 512 count.       


  //Since 1G typically corresponds to 330 mV voltage difference.
  //scale is the number of units we expect the sensor reading to
  //change when the acceleration along an axis changes by 1G.
  //Divide the shifted sensor reading by scale to get acceleration in Gs.
  //330 mV/G × (1023 ADC units) / 3.3 V = 102.3 (ADC units)/G
  float scale = 102.3;

  Serial.print(((float)x - zero_Accelaration)/scale);
  Serial.print("\t");  
  Serial.print(((float)y - zero_Accelaration)/scale);
  Serial.print("\t");  
  Serial.print(((float)z - zero_Accelaration)/scale);
  Serial.print("\n ");     // delay before next reading:
 delay(500);
}
