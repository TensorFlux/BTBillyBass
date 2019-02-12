/*
    MX1508 - A library for controlling cheap H-bridges using the MX1508 driver chip
    Created 2019 by Jordan Bunker <jordan@hierotechnics.com>
    Released into the public domain
*/


#ifndef MX1508_H
#define MX1508_H

#if (ARDUINO >=100)
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class MX1508 {
  public:
    // Constructor
    MX1508(int pin1, int pin2);

    // Methods
    void forward();
    void backward();
    void setSpeed(int motorSpeed);
    void halt();

  private:
    int _pin1;
    int _pin2;
    int _motorSpeed;
};
#endif
