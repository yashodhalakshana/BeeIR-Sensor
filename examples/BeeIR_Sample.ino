#include <BeeIR.h>

/*
  BeeIR - Library for BeeIR sensor and all of other analog IR sensor
  Created by Yashodha Lakshana, June 30, 2018.
  Released into the public domain.
  this is code for the get analog input as a digital
  include BeeIR.h from Sketch -> Include Library -> BeeIR-Sonsor
*/
BeeIR bIR(700, A0, A1, A2, A3, A4, A5, A6, A7); // BeeIR bIR(threshold_value, Sensor1, Sensor2, Sensor3, Sensor4, Sensor5, Sensor6, Sensor7, Sensor8);
/*
   The Library can output analog sensors values as a boolean values. the sensor values is greater than programmer
   provided threshold value then output is 1 and sensor value is minor than threshold value then output is 0.
*/
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(bIR.ReadSensor(1));//Read Sensor 1 value
  Serial.print('\t');
  Serial.print(bIR.ReadSensor(2));//Read Sensor 2 value
  Serial.print('\t');
  Serial.print(bIR.ReadSensor(3));//Read Sensor 3 value
  Serial.print('\t');
  Serial.print(bIR.ReadSensor(4));//Read Sensor 4 value
  Serial.print('\t');
  Serial.print(bIR.ReadSensor(5));//Read Sensor 5 value
  Serial.print('\t');
  Serial.print(bIR.ReadSensor(6));//Read Sensor 6 value
  Serial.print('\t');
  Serial.print(bIR.ReadSensor(7));//Read Sensor 7 value
  Serial.print('\t');
  Serial.print(bIR.ReadSensor(8));//Read Sensor 8 value
  Serial.print('\t');
  Serial.println();
}
