#include <Arduino.h>

#define LED 12
#define BUTTON_PIN 34

#define LED2 13
#define BUTTON_PIN_2 35

int ledState = HIGH;   
int buttonState;       
int lastButtonState = LOW;

int ledState2 = HIGH;   
int buttonState2;       
int lastButtonState2 = LOW;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

unsigned long lastDebounceTime2 = 0;
unsigned long debounceDelay2 = 50;

void setup() {
  Serial.begin(115200);
  Serial.println();

  pinMode(LED, OUTPUT);
  digitalWrite(LED, ledState);
  pinMode(BUTTON_PIN, INPUT);

  pinMode(LED2, OUTPUT);
  digitalWrite(LED2, ledState2);
  pinMode(BUTTON_PIN_2, INPUT);
}

void loop() {
  int reading = digitalRead(BUTTON_PIN);
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }
  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;
      if (buttonState == HIGH) {
        ledState = !ledState;
      }
    }
  }
  digitalWrite(LED, ledState);
  lastButtonState = reading;

  ////////////////////////////////////////////

  int reading2 = digitalRead(BUTTON_PIN_2);
  if (reading2 != lastButtonState2) {
    lastDebounceTime2 = millis();
  }
  if ((millis() - lastDebounceTime2) > debounceDelay2) {
    if (reading2 != buttonState2) {
      buttonState2 = reading2;
      if (buttonState2 == HIGH) {
        ledState2 = !ledState2;
      }
    }
  }
  digitalWrite(LED2, ledState2);
  lastButtonState2 = reading2;
}