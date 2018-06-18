#ifndef MSTERINHER_H
#define MSTERINHER_H
#include "masterdriv.h"
#include <Wire.h>
#include <I2C_Anything.h>
#include "Arduino.h"

#if (ARDUINO >=100)
  #include "Arduino.h"
#else
  #include"WProgram.h"
#endif

class msterinher: public masterdriv{
  msterinher();
  
};

#endif
