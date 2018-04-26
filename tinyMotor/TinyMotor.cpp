#include <TinyWireS.h>
#include "TinyMotor.h"
#include <Arduino.h>

TinyMotor::TinyMotor() //prefix::functionen
{
#define pinPwm 1
}

 int TinyMotor::setWire(){
     TinyWireS.begin(Id);
}

void  TinyMotor::pinSet(){
    pinMode(pinPwm, OUTPUT);
}
 void TinyMotor::setSpeed(){
    while(TinyWireS.available()>0){
  		s = TinyWireS.receive();
        if(s>=255){s=255;}
      speeed = s;
  }
 }
  void TinyMotor::outPut(){
    analogWrite(pinPwm, speeed);
  }
