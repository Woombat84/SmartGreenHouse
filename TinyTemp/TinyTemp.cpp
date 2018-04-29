#include <TinyWire.h>
#include <Arduino.h>
#include "TinyTemp.h"
#include <dht.h>

TinyTemp::TinyTemp(){
#define tempPin 1
}

void TinyTemp::setWire(){
TinyWire.begin(Id);
}

void TinyTemp::setTemp(){
  int chk = DHT.read11(tempPin);
   Temp = DHT.temperature;
   Humi = DHT.humidity;
  delay (1000);

}

void TinyTemp::request(){
  TinyWire.send(Temp);
  delay (100);
  TinyWire.send(Humi);

}
