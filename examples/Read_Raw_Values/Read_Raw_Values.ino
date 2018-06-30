/*
  BeeIR - Library for BeeIR sensor and all of other analog IR sensor
  Created by Yashodha Lakshana, June 30, 2018.
  Released into the public domain.
  this is code for the view raw analog values and get some idea about threshold value.
  after upload code the open serial monitor or serial plotter
*/
//define analog inputs which is connected to the BeeIR sensor panel
#define Sensor1 A0
#define Sensor2 A1
#define Sensor3 A2
#define Sensor4 A3
#define Sensor5 A4
#define Sensor6 A5
#define Sensor7 A6
#define Sensor8 A7
//define baud rate
#define baud 9600
void setup() {
  Serial.begin(baud);
  pinMode(Sensor1, INPUT_PULLUP);
  pinMode(Sensor2, INPUT_PULLUP);
  pinMode(Sensor3, INPUT_PULLUP);
  pinMode(Sensor4, INPUT_PULLUP);
  pinMode(Sensor5, INPUT_PULLUP);
  pinMode(Sensor6, INPUT_PULLUP);
  pinMode(Sensor7, INPUT_PULLUP);
  pinMode(Sensor8, INPUT_PULLUP);
}

void loop() {
  Serial.print(analogRead(Sensor1));
  Serial.print('\t');
  Serial.print(analogRead(Sensor2));
  Serial.print('\t');
  Serial.print(analogRead(Sensor3));
  Serial.print('\t');
  Serial.print(analogRead(Sensor4));
  Serial.print('\t');
  Serial.print(analogRead(Sensor5));
  Serial.print('\t');
  Serial.print(analogRead(Sensor6));
  Serial.print('\t');
  Serial.print(analogRead(Sensor7));
  Serial.print('\t');
  Serial.print(analogRead(Sensor8));
  Serial.print('\t');
  Serial.println();
}
