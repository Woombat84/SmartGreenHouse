#include <I2C_Anything.h>
#include <TinyWire.h>
#include "TinyWMotor.h"


TinyWires::TinyWires()
{
#define pinPwm 1
}

TinyWire::setWire(){
  TinyWire.begin(Id);
}