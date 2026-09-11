/*
#include <Arduino.h>

//Put your potentiometer pin assignment here
const int ledPin = 12;
const int sensorPin = A0;

void setup() {
    pinMode(ledPin, OUTPUT);

    Serial.begin(115200);

}

void loop() {
    Serial.println(analogRead(sensorPin));
    
    analogWrite(ledPin, analogRead(sensorPin) / 12);
    delay(50);

}
*/