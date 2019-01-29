#include "definitions.h"
void setPinModes(){
  pinMode(enablePin, INPUT_PULLUP);
  pinMode(preset1Pin, INPUT_PULLUP);
  pinMode(preset2Pin, INPUT_PULLUP);
  pinMode(preset3Pin, INPUT_PULLUP);
  pinMode(preset4Pin, INPUT_PULLUP);
  pinMode(link1Pin, INPUT_PULLUP);
  pinMode(link2Pin, INPUT_PULLUP);
  pinMode(linkLight1Pin, OUTPUT);
  pinMode(linkLight2Pin, OUTPUT);
  pinMode(slowModePin, INPUT_PULLUP);
  pinMode(accelerationPin, INPUT_PULLUP);
  pinMode(motor1OnPin, INPUT_PULLUP);
  pinMode(motor2OnPin, INPUT_PULLUP);
  pinMode(motor3OnPin, INPUT_PULLUP);
  pinMode(motor4OnPin, INPUT_PULLUP);
  pinMode(motor1ReversePin, INPUT_PULLUP);
  pinMode(motor2ReversePin, INPUT_PULLUP);
  pinMode(motor3ReversePin, INPUT_PULLUP);
  pinMode(motor4ReversePin, INPUT_PULLUP);
  pinMode(rotaryPinA, INPUT_PULLUP);
  pinMode(rotaryPinB, INPUT_PULLUP);
  pinMode(rotaryButtonPin, INPUT_PULLUP);
  pinMode(slider1SweepPin, INPUT_PULLUP);
  pinMode(slider2SweepPin, INPUT_PULLUP);
  pinMode(slider3SweepPin, INPUT_PULLUP);
  pinMode(slider4SweepPin, INPUT_PULLUP);
  pinMode(slider1TouchPin, INPUT_PULLUP);
  pinMode(slider2TouchPin, INPUT_PULLUP);
  pinMode(slider3TouchPin, INPUT_PULLUP);
  pinMode(slider4TouchPin, INPUT_PULLUP);
  pinMode(blinkyPin, OUTPUT);
  pinMode(sliderMotor1SpeedPin, OUTPUT);
  pinMode(sliderMotor2SpeedPin, OUTPUT);
  pinMode(sliderMotor3SpeedPin, OUTPUT);
  pinMode(sliderMotor4SpeedPin, OUTPUT);
  pinMode(sliderMotor1ForwardsPin, OUTPUT);
  pinMode(sliderMotor2ForwardsPin, OUTPUT);
  pinMode(sliderMotor3ForwardsPin, OUTPUT);
  pinMode(sliderMotor4ForwardsPin, OUTPUT);
  pinMode(sliderMotor1BackwardsPin, OUTPUT);
  pinMode(sliderMotor2BackwardsPin, OUTPUT);
  pinMode(sliderMotor3BackwardsPin, OUTPUT);
  pinMode(sliderMotor4BackwardsPin, OUTPUT);
//  attachInterrupt(digitalPinToInterrupt(rotaryPinA), rotaryAISR, CHANGE);
//  attachInterrupt(digitalPinToInterrupt(rotaryPinB), rotaryBISR, CHANGE);
  motor1.attach(motor1PWMPin);
  motor2.attach(motor2PWMPin);
  motor3.attach(motor3PWMPin);
  motor4.attach(motor4PWMPin);
}
