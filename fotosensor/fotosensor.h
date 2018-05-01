#ifndef FOTOSENSOR_H fs
#define FOTOSENSOR_H fs
#include <Arduino.h>


class fotosensor
{
    public:
        fotosensor();
        void Setup();
        void LH();
        int recieve();

    protected:

    private:
      
      int L1 = analogRead(A0);
};

#endif // FOTOSENSOR_H
