#include "L293D.h"

MotorDriver::MotorDriver(uint8_t motor1PinA, uint8_t motor1PinB, uint8_t motor2PinA, uint8_t motor2PinB){
    _motor1PinA = motor1PinA;
    _motor1PinB = motor1PinB;
    _motor2PinA = motor2PinA;
    _motor2PinB = motor2PinB;
}

MotorDriver *MotorDriver::driveLeft(int16_t pwm){
    analogWrite(_motor1PinA, pwm>0?constrain(pwm,0,255):0);
    analogWrite(_motor1PinB, pwm<0?constrain(abs(pwm),0,255):0);
    return this;
}
MotorDriver *MotorDriver::driveRight(int16_t pwm){
    analogWrite(_motor2PinA, pwm>0?constrain(pwm,0,255):0);
    analogWrite(_motor2PinB, pwm<0?constrain(abs(pwm),0,255):0);
    return this;
}