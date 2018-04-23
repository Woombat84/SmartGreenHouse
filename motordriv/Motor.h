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
      void setSpeed();           // Prototyping member function.
      void getSpeed();
      int getId();
      String getType();
      void printOut();
      void pinSet();
      void outPut();
      void setWire();
  protected:
      const byte Id = 0021;            // Id of the part.
      const String Type = "Fan";       // Type of Component.
      const int maxRange = 255;        // Max Output  
      const int minRange = 0;          // Min Output
       
  private:
      int pinPwm = 11 ;                //Output pin
      int Speed = 0;                   //Holds the output speed of the fan 
      
  };

#endif 
