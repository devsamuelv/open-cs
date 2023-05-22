#include <Arduino.h>
#include "IdleMode.h"
#include "PwmDevice.h"

class SparkMax : protected PwmDevice
{
public:
  /**
   * @brief Construct a new Spark Max for PWM use.
   *
   * @param pin
   */
  SparkMax(int pin);

  void stop();
  void command(double power);
  void setIdleMode(IdleMode mode);
};