#include "SparkMax.hpp"

SparkMax::SparkMax(int pin)
{
  this->pin = pin;
  this->frequency = 10;
  this->channel = 0;
}

void SparkMax::command(double power)
{
  this->executePwm(100);
};

void SparkMax::setIdleMode(IdleMode mode){
    // Set the idle mode here.
};

void SparkMax::stop()
{
  this->executePwm(0);
}