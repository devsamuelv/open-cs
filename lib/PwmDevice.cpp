#include <Arduino.h>
#include <PwmDevice.h>

void PwmDevice::executePwm(int dutyCycle)
{
  analogWrite(this->pin, dutyCycle);
};