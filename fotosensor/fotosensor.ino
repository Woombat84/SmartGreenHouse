#include <Wire.h>
#include "fotosensor.h"
#include <I2C_Anything.h>

fotosensor FOTO;


void setup() {
  FOTO.Setup();
<<<<<<< HEAD
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
=======
  Wire.onRequest(Require);
>>>>>>> 857b023046d0da6cdb942538027db1b3e9295aac
}

void loop() {
   FOTO.setLux();
  }
<<<<<<< HEAD
void require(){
  FOTO.recieve();
>>>>>>> 1abdad28735ec5a50ea3a064dacf93d50cec3184
=======
void Require(){
  FOTO.Recieve();
>>>>>>> 857b023046d0da6cdb942538027db1b3e9295aac
}
