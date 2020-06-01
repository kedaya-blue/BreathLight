#include "Breath.h"
#include <Arduino.h>


Breath::Breath(int pin){
    pinNumber=pin;
}

void Breath::breath(int breathLength){
	for(int a=0;a<=breathLength;a++){
             analogWrite(pinNumber,a);
             delay(8);
        }
        for(int a=breathLength;a>=0;a--){
             analogWrite(pinNumber,a);
             delay(8);
        }
}