#include <I2C_Anything.h>
#include <TinyWire.h>
#include "TinyMotor.h"
#include <Arduino.h>

TinyMotor::TinyMotor()
{
#define pinPwm 1
}

TinyMotor::setWire(){
  TinyWire.begin(Id);
}
