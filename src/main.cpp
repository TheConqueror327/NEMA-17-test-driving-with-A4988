#include <Arduino.h>

#define STEP_PIN 3
#define DIR_PIN 4

void setup() {
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);
}

void loop() {
  digitalWrite(DIR_PIN, LOW);
  for (int i = 0; i < 200; i++) {
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(100);
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(1500);
  }
  delay(1000);
}

