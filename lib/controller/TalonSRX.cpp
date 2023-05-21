#include <controller/TalonSRX.h>

class _TalonSRX : public TalonSRX
{
public:
  void command(double power)
  {
    executePwm(100);
  };

  /**
   * Sets the idle mode for the TalonSRX
   */
  void setIdleMode(IdleMode mode){};

  void stop()
  {
    executePwm(0);
  };
};