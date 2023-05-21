#include <controller/SparkMax.h>

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