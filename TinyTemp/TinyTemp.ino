#include <I2C_Anything.h>
#include <TinyWire.h>
#include <Arduino.h>
#include "TinyTemp.h"
#include <dht.h>

#define tempPin 1

dht DHT;

uint8_t Id = 2;
int Temp = 0;
int Humi = 0;

void setup() {
  // put your setup code here, to run once:

TinyWire.begin(Id);
TinyWire.onRequest(request);

}

void loop() {
  // put your main code here, to run repeatedly:
int chk = DHT.read11(tempPin);
 Temp = DHT.temperature;
 Humi = DHT.humidity;
delay (1000);
}
void request(){
  TinyWire.send(Temp);
  
  TinyWire.send(Humi);

}
