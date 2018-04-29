#include <Wire.h>
#include "masterdriv.h"
#include <I2C_Anything.h>

masterdriv MASTER;

void setup() {
  MASTER.setupBegin();

}

void loop() {

  MASTER.serialAvaivable();
  }
