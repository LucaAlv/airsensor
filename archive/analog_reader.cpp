#include <Arduino.h>

// Potentiometer is connected to GPIO 4 (Analog ADC2_CH0)
const int potPin = 4;

//variable for storing the potentiometer value

int potValue = 0;

void setup() {

  // put your setup code here, to run once:

  // Initialize a serial communication at a baud rate of 115200
  Serial.begin(115200);
  delay(1000);

  Serial.println("ESP32 potentiometer test");

}

void loop() {
  // put your main code here, to run repeatedly:

  potValue = analogRead(potPin);

  float voltage = potValue * (3.3 / 4095.0);
  
  Serial.print("Raw ADC value: ");
  Serial.print(potValue);

  Serial.print(" | Approx voltage: ");
  Serial.print(voltage, 3);

  Serial.println(" V");

  delay(250);

}

// put function definitions here:
