#include "fotosensor.h"
#include <Wire.h>
#include <I2C_Anything.h>

fotosensor::fotosensor()
{
  #define pinPwm 4
}
 void fotosensor::Setup(){
    Wire.begin(Id);
    pinMode(pinPwm, OUTPUT);
    digitalWrite(Id,LOW);
  }

 void fotosensor::LH(){
    while(millis()<5000){
      digitalWrite(Id,HIGH);
      Serial.println (L1);
       if(L1>100){
      Wire.beginTransmission(Id);
      Wire.write ('H');
      Wire.endTransmission();
      }
       else if (L1 < 100) {
      Wire.beginTransmission(Id);
      Wire.write ('L');
      Wire.endTransmission();
      digitalWrite(Id,LOW);
     }
    }
   }
int fotosensor::recieve(){
  Serial.write(L1);
  delay (100);
  Serial.write(L1);
}
