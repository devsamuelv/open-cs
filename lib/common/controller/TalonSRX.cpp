#include "controller/TalonSRX.hpp"

TalonSRX::TalonSRX(int pin)
{
  this->pin = pin;
  this->frequency = 10;
  this->channel = 0;
}

void TalonSRX::stop()
{
  this->executePwm(0);
}

void TalonSRX::command(double power)
{
  this->executePwm(100);
}

void TalonSRX::setIdleMode(IdleMode mode)
{
}