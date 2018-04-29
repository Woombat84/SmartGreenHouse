#ifndef TINYMOTOR_H mo
#define TINYMOTOR_H mo
#include <Arduino.h>

class TinyMotor
{
    public:
      TinyMotor();
      void setSpeed();
      void pinSet();
      void outPut();
      int setWire();


    protected:


    private:
     uint8_t Id= 21;
     int speeed = 0;
     uint8_t  s;                  //Holds the output speed of the fan

};

#endif // TINYMOTOR_H
