
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
      int photoRPin = 0; 
      int minLight;          //Used to calibrate the readings
      int maxLight;          //Used to calibrate the readings
      int lightLevel;
      int adjustedLightLevel;
      uint8_t Id = 27;

};

#endif // FOTOSENSOR_H
