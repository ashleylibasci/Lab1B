/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/ashleylibasci/Code/Lab1B/src/Lab1B.ino"
void setup();
void loop();
#line 1 "/Users/ashleylibasci/Code/Lab1B/src/Lab1B.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  pinMode(D5, OUTPUT) ;
}

void loop() {
  delay(2000);
  digitalWrite(D5, HIGH);
}