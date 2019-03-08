#ifndef L293D_H
#define L293D_H
#include <Arduino.h>

    class MotorDriver{

        public:
         MotorDriver(uint8_t motor1PinA, uint8_t motor1PinB, uint8_t motor2PinA, uint8_t motor2PinB);

         MotorDriver *driveLeft(int16_t pwm);

         MotorDriver *driveRight(int16_t pwm);

        private:
            uint8_t _motor1PinA;
            uint8_t _motor1PinB;
            uint8_t _motor2PinA;
            uint8_t _motor2PinB;

    };

#endif