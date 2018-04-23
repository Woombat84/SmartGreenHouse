#include "Controller.h"
#include <string.h>
#include <I2C_Anything.h>

Controller::Controller(){
}
int Controller::setSpeed(int x){
  Speed = x;
}
int Controller::getSpeed(){
  return Speed;
}
int Controller::setId(int x){
   x = Id;
}
int Controller::getId(){
  return Id;
}
String Controller::getType(){
  return Type;
}
String Controller::setType(String x){  
  x = Type;
  }
void Controller::printOut(){
int Id  = Controller::getId();
Serial.println(Id);
String Type = Controller::getType();
Serial.println(Type);
delay(2000);
}
