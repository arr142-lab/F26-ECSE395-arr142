#include <Arduino.h>
#include <ESP32Servo.h>

// Pin assignments
const int touchPin = 26;   // A0 - touch sensor IO
const int servoPin = 25;   // A1 - servo signal

Servo myServo;

void setup() {
  Serial.begin(115200);

  // Touch sensor is a digital input
  pinMode(touchPin, INPUT);

  // Configure servo
  myServo.setPeriodHertz(50);
  myServo.attach(servoPin, 500, 2500);

  // Start servo at 0 degrees
  myServo.write(0);

  Serial.println("Touch sensor and servo ready.");
}

void loop() {
  // Read touch sensor
  int touchState = digitalRead(touchPin);

  Serial.print("Touch State: ");
  Serial.println(touchState);

  // Touch detected
  if (touchState == HIGH) {
    myServo.write(90);
  }

  // No touch
  else {
    myServo.write(0);
  }

  delay(100);
}