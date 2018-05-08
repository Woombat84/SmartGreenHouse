#include <Wire.h>
#include "fotosensor.h"
#include <I2C_Anything.h>

fotosensor FOTO;


void setup() {
  FOTO.Setup();
<<<<<<< HEAD
  Wire.onRequest(Require);
}

void loop() {
   FOTO.setLux();
  }
void Require(){
  FOTO.Recieve();
=======
  Wire.requestFrom(Id, 10);
}

void loop() {
   FOTO.LH();
  }
void require(){
  FOTO.recieve();
>>>>>>> 1abdad28735ec5a50ea3a064dacf93d50cec3184
}
