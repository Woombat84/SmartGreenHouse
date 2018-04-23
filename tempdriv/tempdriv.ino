#include "Temp.h"
#include <string.h>
#include <Wire.h>
#include <I2C_Anything.h>

Temp temp;
void setup() {
temp.setWire();
Wire.onRequest(requestEvent); 
Serial.begin(9600);

}

void loop() {
 temp.setTempHumi();
 
 delay(100);
  
}

void requestEvent(){
 temp.requestEvent();
 
 delay(100);
}


