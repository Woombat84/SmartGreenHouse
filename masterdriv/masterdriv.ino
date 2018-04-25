#include <Wire.h>
#include <I2C_Anything.h>

uint8_t Fan = 21;
uint8_t TempHumi = 2;
uint8_t x;
uint8_t temp;
uint8_t humi;

void setup() {
  Wire.begin();
  Serial.begin(9600);

}

void loop() {

  while (Serial.available()) {
  Serial.println("start");
    char t = 'o';
    t = Serial.read();
    int junk = Serial.read();
    int i=0;
    while (t == 't' ) {
      if(i==2){t='e';Serial.println("Failed Temperature sensor");}
      i =i+1;      
      Wire.requestFrom(TempHumi, 2);
      Serial.println("temperatur");
      while (Wire.available()) {
        I2C_readAnything(temp);
        Serial.print(temp);
        Serial.println("C");
        delay(100);
        I2C_readAnything(humi);
        Serial.print(humi);
        Serial.println("mouister level");
        t = 'm';
        Serial.println("done");
      }
    }
    while (t == 'f') {
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
    t = 'm';
  }
}

