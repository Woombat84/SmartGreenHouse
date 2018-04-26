#include <TinyWireS.h>
#include "TinyMotor.h"

TinyMotor motor;

void setup() {

	motor.setWire();
	motor.pinSet();
	TinyWireS.receive();
}

void loop() {
	motor.outPut();
}

void Receive(){
	motor.setSpeed();
	}
