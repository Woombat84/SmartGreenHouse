#include <Wire.h>
#include "fotosensor.h"
#include <I2C_Anything.h>
fotosensor::fotosensor()
{

}
 void fotosensor::Setup(){
  Serial.begin(9600);
    Wire.begin(Id);
     //Setup the starting light level limits
    lightLevel=analogRead(photoRPin);
    minLight=lightLevel-20;
    maxLight=lightLevel;
  }


void fotosensor::setLux(){
    
 //auto-adjust the minimum and maximum limits in real time
 lightLevel=analogRead(photoRPin);
 if(minLight>lightLevel){
 minLight=lightLevel;
 }
 if(maxLight<lightLevel){
 maxLight=lightLevel;
 }
 
 //Adjust the light level to produce a result between 0 and 100.
 adjustedLightLevel = map(lightLevel, minLight, maxLight, 100, 0); 
 
 //Send the adjusted Light level result to Serial port (processing)
 Serial.println(adjustedLightLevel);
 
 //slow down the transmission for effective Serial communication.
 delay(500);
  }

  void fotosensor::Recieve(){
    I2C_writeAnything(adjustedLightLevel);
}

