

#include <Wire.h>
#include <I2C_Anything.h>
void setup(){
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  Wire.requestFrom(4,4);
  while (Wire.available()){
    int temp;
    I2C_readAnything(temp);
    Serial.print(temp);
    Serial.println("C");
    int humi;
    I2C_readAnything(humi);
    Serial.print(humi);
    Serial.println("mouister level");
  }

  while(Serial.available()){
  int x;
  x = Serial.parseInt();
  int junk = Serial.read();
  Wire.beginTransmission(21);
  I2C_writeAnything(x) ;
  Wire.endTransmission();
  }
  delay(100);
}
