#include <Arduino.h>
#define sensorPin A0
int sensorValue = 0;


void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  if (sensorValue > 300 ) {
    Serial.println(" gaz detected ");
    // Trigger an alert here, for example, by turning on an LED.
  }
  else {
    Serial.println("no gaz detected");
  }
  delay(2000); 
}

