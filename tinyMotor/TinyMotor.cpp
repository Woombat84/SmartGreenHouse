
#include <TinyWire.h>
#include "TinyMotor.h"
#include <Arduino.h>

TinyMotor::TinyMotor() //prefix::functionen
{
#define pinPwm 1
}

TinyMotor::setWire(){
  TinyWire.begin(Id);
}

  TinyMotor::pinSet(){
    pinMode(pinPwm, OUTPUT);
}
  TinyMotor::setSpeed(){
    while(TinyWire.available()>0){
  		s = TinyWire.read();
        if(s>=255){s=255;}
      speeed = s;
  }
  TinyMotor::outPut(){
    analogWrite(pinPwm, speeed);
  }
