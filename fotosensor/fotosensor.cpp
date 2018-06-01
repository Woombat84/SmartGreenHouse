#include <Wire.h>
#include "fotosensor.h"
#include <I2C_Anything.h>
fotosensor::fotosensor()
{

}
 void fotosensor::Setup(){
  Serial.begin(9600);
    Wire.begin(Id);
     //thestarting light level limits
    lightLevel=analogRead(Apin);
    minLight=lightLevel-20;
    maxLight=lightLevel;
  }


void fotosensor::setLux(){
    
//adjust min and max
 lightLevel=analogRead(Apin);
 if(minLight>lightLevel){
 minLight=lightLevel;
 }
 if(maxLight<lightLevel){
 maxLight=lightLevel;
 }
 
 //Adjust the light level to produce a result between 0 and 100.
 lux = map(lightLevel, minLight, maxLight, 100, 0); 
 
 //testing for transmission.
 Serial.println(lux);
 
 delay(500);
  }

  void fotosensor::Recieve(){
    I2C_writeAnything(lux);
}

