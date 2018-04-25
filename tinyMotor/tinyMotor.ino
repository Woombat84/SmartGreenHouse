#include <I2C_Anything.h>
#include <TinyWire.h>
#include "TinyMotor.h"

TinyMotor motor;

uint8_t  speeed = 0;
uint8_t  s;

void setup() {

	pinMode(pinPwm, OUTPUT);
	TinyWire.onReceive(Receive);
}

void loop() {
	analogWrite(pinPwm, speeed);
  if(speeed>=255){speeed=255;}
}

void Receive(){
	while(TinyWire.available()>0){
		uint8_t  s;
		s = TinyWire.read();
    speeed = s;
	}
}
