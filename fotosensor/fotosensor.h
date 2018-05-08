#ifndef FOTOSENSOR_H fs
#define FOTOSENSOR_H fs
#include <Arduino.h>


class fotosensor
{
    public:
        fotosensor();
        void Setup();
<<<<<<< HEAD
<<<<<<< HEAD
        void Recieve();
        void setLux();
=======
        void LH();
        int recieve();
>>>>>>> 1abdad28735ec5a50ea3a064dacf93d50cec3184
=======
        void Recieve();
        void setLux();
>>>>>>> 857b023046d0da6cdb942538027db1b3e9295aac

    protected:

    private:
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 857b023046d0da6cdb942538027db1b3e9295aac
      int sensorValue;
      int sensorHigh = 1023;
      int sensorLow = 0;
      uint8_t Id = 5;

<<<<<<< HEAD
=======
      
      int L1 = analogRead(A0);
>>>>>>> 1abdad28735ec5a50ea3a064dacf93d50cec3184
=======
>>>>>>> 857b023046d0da6cdb942538027db1b3e9295aac
};

#endif // FOTOSENSOR_H
