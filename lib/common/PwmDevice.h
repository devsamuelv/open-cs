#pragma once

class PwmDevice
{
protected:
  int frequency = 0;
  int channel = 0;
  int pin = 0;

  void executePwm(int dutyCycle);

public:
  PwmDevice();
};