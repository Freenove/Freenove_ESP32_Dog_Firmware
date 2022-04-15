/**
 * @file TouchPad.h
 * @author suhayl@freenove (support@freenove.com)
 * @brief Touchpad driver and service.
 * @version v1.0.0
 * @date 2022-04-13
 * 
 * @copyright Copyright (c) 2022. Freenove corporation.
 * 
 */

#ifndef _TOUCHPAD_h
#define _TOUCHPAD_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "driver/touch_pad.h"

#include "Public.h"

#define TOUCH_THRESH_NO_USE (0)
#define TOUCH_THRESH_PERCENT (80)
#define TOUCHPAD_FILTER_TOUCH_PERIOD (10)

void setupTouchPad(void);

void __attribute__((weak)) isr_touchpad(void *arg);
extern void isr_touchpad(void *arg);
void isr_touchpad2();
void task_TouchPad(void *pvParameters);

#endif
