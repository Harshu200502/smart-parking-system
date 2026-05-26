#include <WiFi.h>
#include "config.h"

// Sensor pins
#define TRIG1 5
#define ECHO1 18
#define TRIG2 19
#define ECHO2 21

// LEDs
#define RED_LED 23
#define GREEN_LED 22

void setup() {
  Serial.begin(115200);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  pinMode(TRIG1, OUTPUT);
  pinMode(ECHO1, INPUT);
  pinMode(TRIG2, OUTPUT);
  pinMode(ECHO2, INPUT);

  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

  Serial.println("Smart Parking System Started");
}

long getDistance(int trig, int echo) {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long duration = pulseIn(echo, HIGH);
  long distance = duration * 0.034 / 2;

  return distance;
}

void loop() {
  long slot1 = getDistance(TRIG1, ECHO1);
  long slot2 = getDistance(TRIG2, ECHO2);

  Serial.print("Slot1: ");
  Serial.print(slot1);
  Serial.print(" cm | Slot2: ");
  Serial.println(slot2);

  if (slot1 < 10 || slot2 < 10) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
  } else {
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
  }

  delay(1000);
}
