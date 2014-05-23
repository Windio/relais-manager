#ifndef RelaisManager_h
#define RelaisManager_h
#include "Arduino.h"

class RelaisManager
{
    public:
        RelaisManager(int pinOn, int pinOff);
        void on();
        void off();
    private:
        int _pinOn;
        int _pinOff;
};

#endif