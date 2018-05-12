
#ifndef FOTOSENSOR_H fs
#define FOTOSENSOR_H fs
#include <Arduino.h>


class fotosensor
{
    public:
        fotosensor();
        void Setup();
        void Recieve();
        void setLux();

    protected:

    private:
      int sensorValue;
      int sensorHigh = 1023;
      int sensorLow = 0;
      uint8_t Id = 27;

};

#endif // FOTOSENSOR_H
