/*
  BeeIR.cpp - Library for BeeIR sensor and all of other analog IR sensor
  Created by Yashodha Lakshana, June 30, 2018.
  Released into the public domain.
*/

#include "Arduino.h"
#include "BeeIR.h"

BeeIR::BeeIR(int threshold,int sen1,int sen2,int sen3,int sen4,int sen5,int sen6,int sen7,int sen8 )
{
  pinMode(sen1, INPUT_PULLUP);
  pinMode(sen2, INPUT_PULLUP);
  pinMode(sen3, INPUT_PULLUP);
  pinMode(sen4, INPUT_PULLUP);
  pinMode(sen5, INPUT_PULLUP);
  pinMode(sen6, INPUT_PULLUP);
  pinMode(sen7, INPUT_PULLUP);
  pinMode(sen8, INPUT_PULLUP);
    _threshold=threshold;
    _sensors[0]=sen1;
    _sensors[1]=sen2;
    _sensors[2]=sen3;
    _sensors[3]=sen4;
    _sensors[4]=sen5;
    _sensors[5]=sen6;
    _sensors[6]=sen7;
    _sensors[7]=sen8;
    
}

int BeeIR::ReadSensor(int sensor){
 if (analogRead(_sensors[sensor-1]) < _threshold)
  {
    return 0;
  }else{
    return 1;
  }

}