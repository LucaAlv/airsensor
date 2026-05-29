#include <Arduino.h>

// put function declarations here:

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000);

  Serial.println("Hello from ESP32 + PlatformIO!");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Still running...");
  delay(1000);
}

// put function definitions here:
