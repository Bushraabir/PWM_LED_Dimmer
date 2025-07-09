#include <Arduino.h>

// LED Pins
const int redPin    = 2;   // G2
const int yellowPin = 4;   // G4
const int greenPin  = 5;   // G5
const int bluePin   = 15;  // G15
const int whitePin  = 18;  // G18

// PWM Channels
const int redChannel    = 0;
const int yellowChannel = 1;
const int greenChannel  = 2;
const int blueChannel   = 3;
const int whiteChannel  = 4;

// PWM Config
const int freq = 5000;
const int resolution = 8; // 8-bit: values 0–255

void setup() {
  // Set up each LED for PWM
  ledcSetup(redChannel, freq, resolution);
  ledcAttachPin(redPin, redChannel);

  ledcSetup(yellowChannel, freq, resolution);
  ledcAttachPin(yellowPin, yellowChannel);

  ledcSetup(greenChannel, freq, resolution);
  ledcAttachPin(greenPin, greenChannel);

  ledcSetup(blueChannel, freq, resolution);
  ledcAttachPin(bluePin, blueChannel);

  ledcSetup(whiteChannel, freq, resolution);
  ledcAttachPin(whitePin, whiteChannel);
}

void loop() {
  // Fade in and out each LED one by one
  fadeLED(redChannel);
  fadeLED(yellowChannel);
  fadeLED(greenChannel);
  fadeLED(blueChannel);
  fadeLED(whiteChannel);
}

// Function to fade a single LED
void fadeLED(int channel) {
  // Fade in
  for (int brightness = 0; brightness <= 255; brightness++) {
    ledcWrite(channel, brightness);
    delay(3);
  }
  // Fade out
  for (int brightness = 255; brightness >= 0; brightness--) {
    ledcWrite(channel, brightness);
    delay(3);
  }
}
