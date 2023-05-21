#include <Arduino.h>
#include <PwmDevice.h>

class _PwmDevice : protected PwmDevice
{
public:
  void executePwm(int dutyCycle)
  {
    analogWrite(pin, dutyCycle);
  }
};