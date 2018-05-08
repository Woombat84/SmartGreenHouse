#include "HeatLamp.h"
#include <Wire.h>
HeatLamp HEAT;

void setup() {
  HEAT.setWire();
  HEAT.pinSet();
  Wire.onReceive(Receive);

}


void loop() {
  HEAT.outPut();


}

void Receive(){
  HEAT.setHeat();


}
