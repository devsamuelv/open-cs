#include <controller/TalonSRX.h>

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