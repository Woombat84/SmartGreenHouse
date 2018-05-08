#ifndef FOTOSENSOR_H fs
#define FOTOSENSOR_H fs
#include <Arduino.h>


class fotosensor
{
    public:
        fotosensor();
        void Setup();
<<<<<<< HEAD
        void Recieve();
        void setLux();
=======
        void LH();
        int recieve();
>>>>>>> 1abdad28735ec5a50ea3a064dacf93d50cec3184

    protected:

    private:
<<<<<<< HEAD
      int sensorValue;
      int sensorHigh = 1023;
      int sensorLow = 0;
      uint8_t Id = 5;

=======
      
      int L1 = analogRead(A0);
>>>>>>> 1abdad28735ec5a50ea3a064dacf93d50cec3184
};

#endif // FOTOSENSOR_H
