#ifndef MASTERDRIV_H
#define MASTERDRIV_H
#include <Wire.h>
#include <I2C_Anything.h>


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
    uint8_t x;
    uint8_t t;
    uint8_t i;
    uint8_t temp;
    uint8_t humi;
};

#endif
