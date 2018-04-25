#ifndef TINYMOTOR_H mo
#define TINYMOTOR_H mo
#include <Arduino.h>

class TinyMotor
{
    public:
      TinyMotor();
      void setSpeed();
      byte getId();
      void pinSet();
      void outPut();
      int setWire();


    protected:


    private:
     const byte Id= 21;                  //Holds the output speed of the fan

};

#endif // TINYMOTOR_H
