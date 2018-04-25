#ifndef TINYWIRES_H
#define TINYWIRES_H
#include "Arduino.h"

class TinyWires
{
    public:
        TinyWires();
      void setSpeed();
      void getSpeed();
      void speeed();
      byte getId();
      String getType();
      void printOut();
      void pinSet();
      void outPut();
      void setWire();


    protected:
      const byte Id = 0021;            // Id of the part.
      const String Type = "Motor";       // Type of Component.
      const int maxRange = 255;        // Max Output
      const int minRange = 0;

    private:
      int pinPwm = 11 ;                //Output pin
      int Speed = 0;                   //Holds the output speed of the fan

};

#endif // TINYWIRES_H
