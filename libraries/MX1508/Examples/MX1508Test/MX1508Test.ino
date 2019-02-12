#include <MX1508.h>

MX1508 Motor(3, 5); //sets up a motor on PWM pins 3 and 5

void setup() {
	Motor.setSpeed(255); //sets the PWM speed (between 0 and 255)
}

void loop() {
  Motor.forward(); //runs the motor forward
  delay(1000);
  Motor.halt(); //stops the motor
  delay(1000);
  Motor.backward(); // runs the motor backward
  delay(1000);
  Motor.halt();
  delay(1000);

}
