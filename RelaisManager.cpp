#include "Arduino.h"
#include "RelaisManager.h"

RelaisManager::RelaisManager (int pinOn, int pinOff)
{
    pinMode(pinOn, OUTPUT);
    pinMode(pinOff, OUTPUT);

    _pinOn = pinOn;
    _pinOff = pinOff;
}

void RelaisManager::on ()
{
    digitalWrite(_pinOff, LOW);
    digitalWrite(_pinOn, HIGH);
}

void RelaisManager::off ()
{
    digitalWrite(_pinOn, LOW);
    digitalWrite(_pinOff, HIGH);
}