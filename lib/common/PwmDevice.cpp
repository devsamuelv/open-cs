#include <Arduino.h>
#include "PwmDevice.h"

PwmDevice::PwmDevice(){};

void PwmDevice::executePwm(int dutyCycle)
{
  analogWrite(this->pin, dutyCycle);
};