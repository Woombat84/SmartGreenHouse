#ifndef  mo
#define  mo      

#if (ARDUINO >=100)
  #include "Arduino.h"
#else
  #include"WProgram.h"
#endif
class Motor {
  public:
      Motor();
      void setSpeed();           // Prototyping function.
      void getSpeed();
      int getId();
      String getType();
      void printOut();
      void pinSet();
      void outPut();
      void setWire();
  protected:
      const int Id = 0021;            // Id of the part.
      const String Type = "Fan";    // Type of Component.
      const int maxRange = 255;
      const int minRange = 10;
       
  private:
      int pinPwm = 11 ;
      int Speed = 0; 
      bool connected = false;
  };

#endif 
