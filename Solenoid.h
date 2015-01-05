/*
  Solenoid.h - Library for solenoid
  Created by Johann Diedrick, December 31, 2014.
  Released into the public domain.
*/

#ifndef Solenoid_h
#define Solenoid_h

#include "Arduino.h"

class Solenoid
{
  public:
  Solenoid(int pin, int solenoidState);
  void fireSolenoid(int delayTime);
  void toggleSolenoid();

  private:
  int _pin;
  int _solenoidState;

};

#endif
