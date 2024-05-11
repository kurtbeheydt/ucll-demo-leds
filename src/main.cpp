#include <Arduino.h>

#define pinLed1 5

void setup() {
    Serial.begin(115200);
    Serial.println();

    pinMode(pinLed1, OUTPUT);
}

void loop() {
    digitalWrite(pinLed1, HIGH);
    Serial.println("led on");
    delay(500);
    digitalWrite(pinLed1, LOW);
    Serial.println("led off");
    delay(500);
}