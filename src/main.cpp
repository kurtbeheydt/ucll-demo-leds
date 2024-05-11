#include <Arduino.h>

struct Led {
    const uint8_t ledPin;
    bool status;
};

const uint8_t ledCount = 3;

Led leds[ledCount] = {
    {5, false},
    {4, false},
    {14, false}};

void setup() {
    Serial.begin(115200);
    Serial.println();

    for (uint8_t i = 0; i < ledCount; i++) {
        pinMode(leds[i].ledPin, OUTPUT);
    }
}

void loop() {
    for (uint8_t i = 0; i < ledCount; i++) {
        digitalWrite(leds[i].ledPin, HIGH);
        Serial.print("led ");
        Serial.print(i);
        Serial.print(" on");
        delay(200);
        digitalWrite(leds[i].ledPin, LOW);
        Serial.println("... off");
        delay(200);
    }
}