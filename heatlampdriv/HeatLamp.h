#ifndef HEATLAMP_H mo
#define HEATLAMP_H mo
#include <Arduino.h>

class HeatLamp
{
  public:
    HeatLamp();
    void setWire();
    void pinSet();
    void setHeat();
    void outPut();


  private:
    uint8_t Id = 6;
    int led = 11;
    int PWM;
    int  s;
    int Heat = 0;


};

#endif // HEATLAMP_H
