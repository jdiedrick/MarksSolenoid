#include "Arduino.h"
#include "Solenoid.h"

Solenoid::Solenoid(int pin, int solenoidState){
  pinMode(pin, OUTPUT);
  _pin = pin;
  _solenoidState = solenoidState;
}

void Solenoid::toggleSolenoid(){
 _solenoidState = !_solenoidState;
}

void Solenoid::fireSolenoid(int delayTime){
	if(delayTime == 1){
		digitalWrite(_pin, HIGH);
		delay(16.67);
		digitalWrite(_pin, LOW);
	}else if(delayTime == 2){
		digitalWrite(_pin, HIGH);
		delay(33.33);
		digitalWrite(_pin, LOW);
	}else if(delayTime == 3){
		digitalWrite(_pin, HIGH);
		delay(66.67);
		digitalWrite(_pin, LOW);
	}else if(delayTime == 4){
		digitalWrite(_pin, HIGH);
		delay(125);
		digitalWrite(_pin, LOW);
	}else{
  		digitalWrite(_pin, _solenoidState);
  	}
}
