#include <I2C_Anything.h>
#include <TinyWire.h>
#include <Arduino.h>
#include "TinyTemp.h"
#include <dht.h>

TinyTemp::TinyTemp(){
#define tempPin 1
}

TinyTemp::setWire(){
TinyWire.begin(Id);
}

TinyTemp::setTemp(){
  int chk = DHT.read11(tempPin);
   Temp = DHT.temperature;
   Humi = DHT.humidity;
  delay (1000);

}

TinyTemp::request(){
  TinyWire.send(Temp);
  delay (100);
  TinyWire.send(Humi);

}
