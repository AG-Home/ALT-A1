/**********************************************************************************************************************
 * \file Gpio_User.h
 *
 * \author  Marco Aguilar
 *
 * \date Jul-22-2022
 *
 * \version 1.0 \n \n
 *
 * This file contains:
 *  - Definitions
 *  - Types
 *  - Interface Prototypes
 *  which are relevant for the GPIO Driver
 *********************************************************************************************************************/

#ifndef GPIO_USER_H
#define GPIO_USER_H

#include <Dio_Types.h>
#include <Std_Types.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
  sensor1 = bit0,
  sensor2 = bit1,
  sensor3 = bit2,
  sensor4 = bit3
} t_Sensors;

typedef enum
{
  led1 = bit0,
  led2 = bit1,
  led3 = bit2,
  led4 = bit3
} t_Leds;

typedef enum
{
  ssrOutput = bit4,
  ledRed    = bit5,
  ledGreen  = bit6,
  buzzer    = bit7
} t_Indicators;

typedef struct Gpio_User
{
  t_Sensors  Sensor[4];
  t_PinState State[4];
} t_LedState;

void Gpio_v_init(void);

void Gpio_v_ledOn(t_Leds e_led);

void Gpio_v_getLevel(t_LedState* p_ledState);

#ifdef __cplusplus
}
#endif

#endif
