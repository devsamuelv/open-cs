#include <Arduino.h>
#include <iostream>
#include <thread>

#include <controller/TalonSRX.h>

TalonSRX frontLeft = TalonSRX(1);
TalonSRX frontRight = TalonSRX(2);

void setup()
{
  frontLeft.setIdleMode(IdleMode::BRAKE);
  frontRight.setIdleMode(IdleMode::BRAKE);
}

void loop()
{
  // put your main code here, to run repeatedly:
}