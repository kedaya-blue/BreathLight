/*breath.h*/

#ifndef Breath_h
#define Breath_h

#include<Arduino.h>
#include <stdint.h>

#define ON true
#define OFF false

class Breath{
public:
    Breath(int pin);//Constructor.attach pin to breath 
    void breath(int breathLength);
private:
    int pinNumber;
};

#endif