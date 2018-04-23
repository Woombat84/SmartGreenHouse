#ifndef  contr
#define  contr  

#if (ARDUINO >=100)
  #include "Arduino.h"
#else
  #include"WProgram.h"
#endif
class Controller {
  public:
      Controller();
      int setSpeed(int x);           // Prototyping function.
      int getSpeed();
      int getId();
      int setId(int x);
      String setType(String x);
      String getType();
      void printOut();
  protected:
      
       
  private:
      int Id = 0;            // Id of the part.
      String Type = "";    // Type of Component.
      int maxRange = 0;
      int minRange = 0;
      int Speed = 0; 
      bool connected = false;
  };

#endif 
