#ifndef MASTERDRIV_H
#define MASTERDRIV_H
#include <Wire.h>
#include "I2C_Anything.h"



class masterdriv
{
    public:
        masterdriv();
        void serialAvaivable();
        void WireAvaivable();
        void tEqualsF();
        void tEqualsT();



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
