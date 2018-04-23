#include "Motor.h"
#include <string.h>
#include "Arduino.h"
#include <I2C_Anything.h>
Motor::Motor(){
}
void Motor::setWire(){
   Wire.begin(Id);
}

void Motor::pinSet(){
  pinMode(pinPwm, OUTPUT);
}
void Motor::outPut(){
  int x = Speed;
 analogWrite(pinPwm, x);
}
void Motor::setSpeed(){
  int x = Speed;
  I2C_readAnything(x);
  Speed = x;

}
void Motor::getSpeed(){
 I2C_writeAnything(Speed);
}
int Motor::getId(){
  return Id;
}
String Motor::getType(){

  return Type;
  }
void Motor::printOut(){
int Id  = Motor::getId();
Serial.println(Id);
String Type = Motor::getType();
Serial.println(Type);
delay(2000);
}
