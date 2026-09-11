#include <Arduino.h>

const int sensorPin = A0;
const int ledPin = LED_BUILTIN;

// arr142: Sets the threshold used to decide whether the touch sensor is being touched.
const int touchThreshold = 2000;

void setup() {
    Serial.begin(115200);

    pinMode(sensorPin, INPUT);

    pinMode(ledPin, OUTPUT);
    // arr142: Configures the onboard LED pin as an output.
}

void loop() {

    int sensorValue = analogRead(sensorPin);

    if (sensorValue > touchThreshold) {

        Serial.println("Touch detected!");

        digitalWrite(ledPin, HIGH);
        // arr142: Turns the onboard LED on when touch is detected.

    } else {

        Serial.println("No touch detected...");

        digitalWrite(ledPin, LOW);
        // arr142: Turns the onboard LED off when no touch is detected.
    }

    delay(250);
}