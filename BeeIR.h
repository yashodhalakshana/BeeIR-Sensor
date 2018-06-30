/*
  BeeIR.h - Library for BeeIR sensor and all of other analog IR sensor
  Created by Yashodha Lakshana, June 30, 2018.
  Released into the public domain.
*/
#ifndef BeeIR_h
#define BeeIR_h

#include "Arduino.h"

class BeeIR
{
  public:
    BeeIR(int threshold,int sen1,int sen2,int sen3,int sen4,int sen5,int sen6,int sen7,int sen8 );
    int ReadSensor(int sensor);
    
  private:
    int _threshold;
    int _sensors[8];
};

#endif