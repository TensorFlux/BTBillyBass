/*
    MX1508 - A library for controlling cheap H-bridges using the MX1508 driver chip
    Created 2019 by Jordan Bunker <jordan@hierotechnics.com>
    Released into the public domain
*/

#include <MX1508.h>

MX1508::MX1508(int pin1, int pin2) {
  pinMode(pin1, OUTPUT);
  _pin1 = pin1;
  pinMode(pin2, OUTPUT);
  _pin2 = pin2;
}

void MX1508::forward() {
  analogWrite(_pin1, _motorSpeed);
  digitalWrite(_pin2, LOW);
}

void MX1508::backward() {
  digitalWrite(_pin1, LOW);
  analogWrite(_pin2, _motorSpeed);
}

void MX1508::setSpeed(int motorSpeed) {
  _motorSpeed = motorSpeed;
}

void MX1508::halt() {
  digitalWrite(_pin1, HIGH);
  digitalWrite(_pin2, HIGH);
}

