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
    digitalWrite(_pinOn, HIGH);
    delai(30);
    digitalWrite(_pinOn, LOW);
}

void RelaisManager::off ()
{
    digitalWrite(_pinOff, HIGH);
    delai(30);
    digitalWrite(_pinOff, LOW);
}