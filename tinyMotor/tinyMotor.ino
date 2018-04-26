
#include <TinyWire.h>
#include "TinyMotor.h"

TinyMotor motor;

void setup() {

	motor.setWire();
	motor.pinSet();
	TinyWire.onReceive(Receive);
}

void loop() {
	motor.outPut();
}

void Receive(){
	motor.setSpeed();
	}
}
