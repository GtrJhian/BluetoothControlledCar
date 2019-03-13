#include <Arduino.h>
#include <SoftwareSerial.h>
#include "Config.h"
#include "L293D.h"

#pragma region GlobalVariables

SoftwareSerial BL(BLUETOOTH_TX_PIN, BLUETOOTH_RX_PIN);
MotorDriver *motorDriver;

#pragma endregion

void scale(int16_t &x){
  if(x & 0x80){
    x &= 0x7F;    
    x = -x;
  }
  x = map(x, -101, 100 , -256, 255);
}

void setup() {
  // put your setup code here, to run once:
  #if SERIAL_DEBUG==true
    Serial.begin(9600);
    LINE
    Serial.println("Serial Debug Enabled");
    LINE
  #endif
  BL.begin(9600);
  motorDriver = new MotorDriver(MOTOR_1A_PIN, MOTOR_1B_PIN, MOTOR_2A_PIN, MOTOR_2B_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:
    if(BL.available()){
      int16_t left = BL.read();
      int16_t right = BL.read();
      scale(left);
      scale(right);
      #if SERIAL_DEBUG==true
        Serial.print("x: ");
        Serial.print(left,DEC);
        Serial.print(" y: ");
        Serial.println(right,DEC);
      #endif
        motorDriver->driveLeft(left)->driveRight(right);
      
    }
    else{
       BL.write(POLL_BYTE);
       delay(REQUEST_DELAY);
    }
}

