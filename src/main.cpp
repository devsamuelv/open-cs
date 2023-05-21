#include <Arduino.h>
#include <iostream>
#include <thread>

#include <controller/TalonSRX.h>
#include <controller/SparkMax.hpp>

TalonSRX frontLeft = TalonSRX(1);
TalonSRX frontRight = TalonSRX(2);

SparkMax backLeft = SparkMax(3);
SparkMax backRight = SparkMax(4);

void setup()
{
  frontLeft.setIdleMode(IdleMode::BRAKE);
  frontRight.setIdleMode(IdleMode::BRAKE);

  backLeft.setIdleMode(IdleMode::BRAKE);
  backRight.setIdleMode(IdleMode::BRAKE);
}

void loop()
{
  // put your main code here, to run repeatedly:
}