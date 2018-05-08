#include <Wire.h>
#include "fotosensor.h"
#include <I2C_Anything.h>

fotosensor FOTO;


void setup() {
  FOTO.Setup();
  Wire.requestFrom(Id, 10);
}

void loop() {
   FOTO.LH();
  }
void require(){
  FOTO.recieve();
}
