#ifndef TINYWIRES_H
#define TINYWIRES_H
#include "Arduino.h"

class TinyWires
{
    public:
        TinyWires();
      void setSpeed();
      byte getId();
      void pinSet();
      void outPut();
      void setWire();


    protected:


    private:
                       //Holds the output speed of the fan

};

#endif // TINYWIRES_H
