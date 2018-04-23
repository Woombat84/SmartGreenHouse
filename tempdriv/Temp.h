#include <dht.h>
#ifndef tem
#define tem     

#if (ARDUINO >=100)
  #include "Arduino.h"
#else
  #include"WProgram.h"
#endif
class Temp {
  public:
      Temp();
      void   setTempHumi();
      int    getTemp();
      int    getHumi();
      byte   getId();
      String getType();
      void   printOut();
      void   requestEvent();
      void   setWire();
      dht DHT;
  protected:
      const byte Id = 4;                            // Id of the part.
      int Temp = 0; 
      int Humi = 0;
      bool connected = false;
      const String Type = "Temperature sensor";    // Type of Component.
      const int tempPin = 7;
  private:

  };

#endif 
