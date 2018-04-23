#include "Temp.h"
#include <string.h>
#include <Wire.h>
#include "Arduino.h"
#include <dht.h>
#include <I2C_Anything.h>

Temp::Temp(){
 
   
}
void Temp::setWire(){
   byte Id = Temp::getId();
   Wire.begin(Id);
}
int Temp::getTemp(){
  return Temp;
}
int Temp::getHumi(){
  return Humi;
}
byte Temp::getId(){
  return Id;
}

String Temp::getType(){
  return Type;
}

void  Temp::setTempHumi(){
 int chk = DHT.read11(tempPin);
 Temp = DHT.temperature;  
 Humi = DHT.humidity ;
 Serial.print(Humi);
 Serial.println("fugt");
 Serial.print(Temp);
 Serial.println("C");
 delay(1000);
}

void Temp::requestEvent()
{
    
    int tmp = Temp::getTemp();
    I2C_writeAnything(tmp); 
    int hm = Temp::getHumi();
    I2C_writeAnything(hm);
    
}


void Temp::printOut(){
int Id  = Temp::getId();
Serial.println(Id);
String Type = Temp::getType();
Serial.println(Type);
delay(2000);
}
