#include <PwmDevice.h>
#include <IdleMode.h>

class TalonSRX : protected PwmDevice
{
public:
  /**
   * @brief Construct a new Talon SRX for PWM use.
   *
   * @param pin
   */
  TalonSRX(int pin)
  {
    this->pin = pin;
    this->channel = 0;
    this->frequency = 10;
  };

  void setIdleMode(IdleMode mode);
  void command(double power);
  void stop();
};