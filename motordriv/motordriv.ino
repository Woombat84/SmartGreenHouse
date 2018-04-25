#include "Motor.h"
#include <string.h>
#include <Wire.h>
#include <I2C_Anything.h>

Motor motor;

void setup() {
motor.setWire();
motor.pinSet();
Wire.onRequest(requestEvent);
Serial.begin(9600);
Wire.onReceive (receiveEvent);
}

void loop() {
 motor.outPut();

 delay(100);

}

void requestEvent(){

    motor.getSpeed();
    delay(100);
}

void receiveEvent (){
    motor.setSpeed();


 }
