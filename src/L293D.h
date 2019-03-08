#ifndef L293D_H
#define L293D_H
#include <Arduino.h>

    class MotorDriver{
        public:
         MotorDriver(uint8_t motor1PinA, uint8_t motor1PinB, uint8_t motor2PinA, uint8_t motor2PinB){
             _motor1PinA = motor1PinA;
             _motor1PinB = motor1PinB;
             _motor2PinA = motor2PinA;
             _motor2PinB = motor2PinB;
         }
        private:
            uint8_t _motor1PinA;
            uint8_t _motor1PinB;
            uint8_t _motor2PinA;
            uint8_t _motor2PinB;

    };

#endif