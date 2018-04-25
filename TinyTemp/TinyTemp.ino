#include <TinyWire.h>
#include <dht.h>

#define tempPin 1

dht DHT;

byte id = 2;
int Temp = 0;
int Humi = 0;
void setup() {
  // put your setup code here, to run once:

TinyWire.begin(id);
TinyWire.onRequest(request);

}

void loop() {
  // put your main code here, to run repeatedly:
int chk = DHT.read11(tempPin);
 Temp = DHT.temperature;
 Humi = DHT.humidity;
delay (1000);
}
void request(){

  TinyWire.send(Temp);
  TinyWire.send(Humi);
}
