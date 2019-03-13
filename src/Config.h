

#pragma region  SERIAL_DEBUG_CONFIG

    #define SERIAL_DEBUG false
    #define SERIAL_BAUD_RATE 9600
    #define LINE Serial.println("===========================================");
    #define POLL_BYTE 0x69
    #define REQUEST_DELAY 100

#pragma endregion


#pragma region BLUETOOTH_CONFIG

    #define BLUETOOTH_BAUD_RATE 9600
    #define BLUETOOTH_TX_PIN 12
    #define BLUETOOTH_RX_PIN 11

#pragma endregion

#pragma region MOTOR_PINOUT_CONFIG

    #define MOTOR_1A_PIN 10
    #define MOTOR_1B_PIN 9
    #define MOTOR_2A_PIN 6
    #define MOTOR_2B_PIN 5

#pragma endregion