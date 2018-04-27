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
        void serialAvaivable();
        void WireAvaivable();
        void tEqualsF();
        int tEqualsT();



    protected:

    private:

    uint8_t Fan = 21;
    uint8_t TempHumi = 2;
    int  x =0;
    char t='c';
    int  i =0 ;
    int  temp;
    int  humi;
};

#endif
