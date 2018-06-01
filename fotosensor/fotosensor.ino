#include <Wire.h>
#include "fotosensor.h"
#include <I2C_Anything.h>


fotosensor FOTO;


void setup() {
  FOTO.Setup();
  Wire.onRequest(Require);
}

void loop() {
   FOTO.setLux();
  }
void Require(){
  FOTO.Recieve();
}
