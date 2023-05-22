#include "IdleMode.h"
#include "PwmDevice.h"

class TalonSRX : protected PwmDevice
{
public:
  /**
   * @brief Construct a new Talon SRX for PWM use.
   *
   * @param pin
   */
  TalonSRX(int pin);

  void setIdleMode(IdleMode mode);
  void command(double power);
  void stop();
};