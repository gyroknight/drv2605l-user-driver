#include <wiringPi.h>

#include "drv2605lDriver.hh"

int main(int argc, char* argv[]) {
  drv2605l::Driver device;
  // device.enablePWMInput();

  // constexpr int pwmPin = 1;

  // wiringPiSetup();

  // pinMode(pwmPin, PWM_OUTPUT);

  // while (true) {
  //   for (int intensity = 0; intensity <= 1024; intensity++) {
  //     pwmWrite(pwmPin, intensity);
  //     delay(1);
  //   }

  //   for (int intensity = 1024; intensity >= 0; intensity--) {
  //     pwmWrite(pwmPin, intensity);
  //     delay(1);
  //   }

  //   delay(1);
  // }

  device.enableLRAEffects();
  device.setPulseWave(1);

  while (true) {
    device.fireWaveform();
  }

  return 0;
}