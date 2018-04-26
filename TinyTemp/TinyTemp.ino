
#include <TinyWire.h>
#include <Arduino.h>
#include "TinyTemp.h"
#include <dht.h>



dht DHT;
TinyTemp TEMP;


void setup() {
  // put your setup code here, to run once:

TEMP.setWire();
TinyWire.onRequest(request);

}

void loop() {
  // put your main code here, to run repeatedly:
TEMP.setTemp();
}
void request(){
TEMP.request();

}
