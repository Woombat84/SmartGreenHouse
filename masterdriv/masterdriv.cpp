#include "masterdriv.h"
#include <Wire.h>
#include <I2C_Anything.h>
#include "Arduino.h"

masterdriv::masterdriv()
{

}
void masterdriv::serialAvaivable() {
      while (Serial.available()){
      Serial.println("start");
        char t = 'o';
        t = Serial.read();
        int junk = Serial.read();
        int i=0;
      while (t == 't' ){
            masterdriv::tEqualsT();
      }
      while (t == 'f') {
            masterdriv::tEqualsF();
      }
    }
}
<<<<<<< HEAD
    int masterdriv::tEqualsT() {
>>>>>>> 4d38d38f2de5021cb1ad0513681d54633064c4cc
=======
<<<<<<< HEAD
        masterdriv::tEqualsT() {
=======

>>>>>>> 3983e95bee476175ac578e34f4a251f128df323f
>>>>>>> 4d38d38f2de5021cb1ad0513681d54633064c4cc
        if(i==2){t='e';Serial.println("Failed Temperature sensor");}
        i =i+1;
        Wire.requestFrom(TempHumi, 2);
        Serial.println("temperatur");
            masterdriv::WireAvaivable();
    }

  void  masterdriv::WireAvaivable() {
      while (Wire.available()) {
        I2C_readAnything(temp);
        Serial.print(temp);
        Serial.println("C");
        delay(100);
        I2C_readAnything(humi);
        Serial.print(humi);
        Serial.println("moisterise level");
        t = 'm';
        Serial.println("done");
        }
    }
  void  masterdriv::tEqualsF(){
        Serial.print("Enter speed:");
        delay(3000);
        if (Serial.available() > -1) {
          x = Serial.parseInt();
          if (Serial.read() == '\n') {
            Wire.beginTransmission(Fan);
            Wire.write(x);
            Wire.endTransmission();
            Serial.println(x);
            delay(100);
            t = 'm';
            Serial.println("done");
            }
          }
        }
