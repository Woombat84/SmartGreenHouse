
#ifndef FOTOSENSOR_H fs
#define FOTOSENSOR_H fs
#include <Arduino.h>

#if (ARDUINO >=100)
  #include "Arduino.h"
#else
  #include"WProgram.h"
#endif

class fotosensor
{
    public:
        fotosensor();
        void Setup();
        void Recieve();
        void setLux();
      

    protected:

    private:
      int Apin = 0; 
      int minLight;          
      int maxLight;          
      int lightLevel;
      int lux;
      uint8_t Id = 27;

};

#endif // FOTOSENSOR_H
