#ifndef MASTERDRIV_H Ma
#define MASTERDRIV_H Ma
#if (ARDUINO >=100)
  #include "Arduino.h"
#else
  #include"WProgram.h"
#endif
#include <Wire.h>
#include "masterdriv.h"

class masterdriv
{
    public:
        masterdriv();
        void setupBegin();
        void serialAvaivable();
        void WireAvaivable();
        void tEqualsF();
        void tEqualsT();



    protected:

    private:

    const int Fan = 21;
    const int TempHumi = 2;
    int x;
    char t;
    int i;
    uint8_t temp;
    uint8_t humi;
};

#endif
