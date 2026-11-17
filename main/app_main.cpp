/**
 * @file app_main.cpp
 * @brief ESP-IDF entry point for running the Arduino sketch as an IDF application.
 *
 * Arduino's setup()/loop() are invoked manually after initArduino(),
 * which is the documented "Arduino as ESP-IDF component" pattern.
 */

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "Arduino.h"

extern void setup();
extern void loop();
extern void serialEventRun();

extern "C" void app_main(void)
{
    initArduino();
    setup();
    while (true)
    {
        loop();
        serialEventRun();
    }
}
