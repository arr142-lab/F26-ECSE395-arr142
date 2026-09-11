/*
#include <Arduino.h>

const int sensorPin = A0;

void setup() {
    Serial.begin(115200);
}

void loop() {

    int sensorValue = analogRead(sensorPin);
    // arr142: Reads the analog value from the potentiometer and stores it in sensorValue.

    float sensorVoltage = (sensorValue * 3.3) / 4095.0;
    // arr142: Converts the 12-bit analog reading from 0-4095 into a voltage from 0-3.3 V.

    Serial.print("Voltage: ");
    Serial.println(sensorVoltage);
    // arr142: Prints the calculated potentiometer voltage to the serial monitor.

    delay(50);
    // arr142: Waits 50 milliseconds before taking and displaying the next reading.
}
*/