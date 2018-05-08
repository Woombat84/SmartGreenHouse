#include "masterdriv.h"
#include <Wire.h>
#include <I2C_Anything.h>
#include "Arduino.h"

masterdriv::masterdriv()
{

}
void masterdriv::serialAvaivable(){
      while (Serial.available()){
      //Serial.println("start");

        t = Serial.read();
        int junk = Serial.read();
        int i=0;
      while (t == 't' ){
            masterdriv::tEqualsT();
      }
      while (t == 'f') {
            masterdriv::tEqualsF();
      }
      while (t=='l'){
            masterdriv::Light();
      }
    }
   }

    void masterdriv::tEqualsT(){
        if(i==2){t='e';Serial.println("Failed Temperature sensor");}
        i =i+1;
        Wire.requestFrom(TempHumi, 2);
        //Serial.println("temperatur");
            masterdriv::WireAvaivable();
    }

    void masterdriv::HeatLamp(){

      delay(3000);
      if (Serial.available() > -1) {
        x = Serial.parseInt();
          Wire.beginTransmission(HL);
          Wire.write(x);
          Wire.endTransmission();
          //Serial.println(x);
          delay(100);
          t = 'm';
          //Serial.println("done");

    }
  }


   void masterdriv::WireAvaivable(){
      while (Wire.available()) {
        I2C_readAnything(temp);
        //Serial.println("C");
        delay(100);
        I2C_readAnything(humi);
        Serial.print(",");
        Serial.print(temp);
        Serial.print(",");
        Serial.print(humi);
        Serial.print(",");
        Serial.print(lux);
        Serial.print(",");
    
        delay(100);
        //Serial.println("moisterise level");
        t = 'm';
        //Serial.println("done");
        }
    }
   void masterdriv::tEqualsF(){
        //Serial.print("Enter speed:");
        delay(300);
        if (Serial.available() > -1) {
          x = Serial.parseInt();
            Wire.beginTransmission(Fan);
            Wire.write(x);
            Wire.endTransmission();
            //Serial.println(x);
            delay(100);
            t = 'm';
            //Serial.println("done");
            }
        }

      void masterdriv::Light(){
        Wire.requestFrom(L1, 1);
        while (Wire.available()) {
        I2C_readAnything(lux);
        delay(100);
//        Serial.print(",");
//        Serial.print(lux);
//        Serial.print(",");
        t = 'm';
        //Serial.println("done");
        }
    }


  void masterdriv::setupBegin(){
    Wire.begin();
    Serial.begin(9600);
  }
