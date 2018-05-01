#include "fotosensor.h"
#include <Wire.h>
#include <I2C_Anything.h>

fotosensor::fotosensor()
{
 
}
 void fotosensor::Setup(){
    Wire.begin(Id);
  }

void fotosensor::Recieve(){
    I2C_writeAnything(sensorValue);
}

void fotosensor::setLux(){
    sensorValue = analogRead(A0);
    sensorValue = map(sensorValue, sensorLow, sensorHigh, 0, 255);
    delay(100);
}

