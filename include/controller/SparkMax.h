#include <Arduino.h>
#include <IdleMode.h>
#include <PwmDevice.h>

class SparkMax : protected PwmDevice
{
public:
  /**
   * @brief Construct a new Spark Max for PWM use.
   *
   * @param pin
   */
  SparkMax(int pin)
  {
    this->pin;
    this->frequency = 10;
    this->channel = 0;
  };

  void stop();
  void setIdleMode(IdleMode mode);
};