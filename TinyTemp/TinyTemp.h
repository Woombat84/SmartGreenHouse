#ifndef TINYTEMP_H te
#define TINYTEMP_H te

#include <TinyWire.h>
#include <Arduino.h>
#include "TinyTemp.h"
#include <dht.h>

class TinyTemp
{
  public:
    TinyTemp();
    void setWire();
    void setTemp();
    void request();
    dht DHT;

  protected:

  private:
    uint8_t Id = 2;
    int Temp = 0;
    int Humi = 0;


};

#endif // TINYTEMP_H
