#include "HeatLamp.h"
#include <Wire.h>
#include "Arduino.h"
#include <I2C_Anything.h>

HeatLamp::HeatLamp(){

  
}

void HeatLamp::setWire(){
  Wire.begin(Id);

}

void HeatLamp::pinSet(){
    pinMode(led, OUTPUT);
}
void HeatLamp::setHeat(){
    while(Wire.available()>0){
      s = Wire.read();
        if(s>=255){s=255;}
      Heat = s;
  }}
void HeatLamp::outPut(){
    analogWrite(led, Heat);
  }
