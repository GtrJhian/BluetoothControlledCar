#include <Arduino.h>
#include "Config.h"
void setup() {
  // put your setup code here, to run once:
  #if SERIAL_DEBUG==true
    Serial.begin(9600);
    LINE
    Serial.println("Serial Debug Enabled");
    LINE
  #endif

}

void loop() {
  // put your main code here, to run repeatedly:
}