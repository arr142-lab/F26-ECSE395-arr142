#include <Arduino.h>

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);

  // arr142: Start the serial connection at 115200 baud
  Serial.begin(115200);
}

void loop() {
  // arr142: Print my custom message to the Serial Monitor
  Serial.println("arr142's ESP32 is alive!!!");

  // arr142: Turn the onboard LED on
  digitalWrite(LED_PIN, HIGH);

  // arr142: Keep the LED on for 500 milliseconds
  delay(500);

  // arr142: Turn the onboard LED off
  digitalWrite(LED_PIN, LOW);

  // arr142: Keep the LED off for 1000 milliseconds
  delay(1000);
}