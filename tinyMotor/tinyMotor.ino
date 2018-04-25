#include <iostream>
#include <string.h>
#include <Wire.h>
#include <I2C_Anything.h>
#include <TinyWire.h>
#include "TinyWires.h"
#define pinPwm 1

using namespace std;

int speeed =0;
byte own_address = 21;

void setup() {
	// config led_pin as Output for driving an LED

	pinMode(pinPwm, OUTPUT);
	// config TinyWire library for I2C slave functionality
	TinyWire.begin( own_address );
	// sets callback for the event of a slave receive
	TinyWire.onReceive( onI2CReceive );
}

void loop() {
	analogWrite(pinPwm, speeed);
  if(speeed==250){speeed=40;}
  else
  speeed = speeed + 20;
  delay(1000);
}

/*
I2C Slave Receive Callback:
Note that this function is called from an interrupt routine and shouldn't take long to execute
*/
void onI2CReceive(int howMany){
	// loops, until all received bytes are read
	while(TinyWire.available()>0){
		// toggles the led everytime, when an 'a' is received
		int s = speeed;
		s = TinyWire.read();
    speeed = s;
	}
}
