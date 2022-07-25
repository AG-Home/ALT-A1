/**********************************************************************************************************************
 * \file Alt_Appl.c
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
 *  which are relevant for the DIO Driver
 *********************************************************************************************************************/

#include <Gpio_User.h>
#include <MSP430_Registers.h>

#define WDTPW   (0x5A00)
#define WDTHOLD (0x0080)

int main(void)
{
  WDTCTL = WDTPW | WDTHOLD;

  t_LedState sensorState;

  Gpio_v_init();

  Gpio_v_getLevel(&sensorState);

  while(1)
    ;

  return 0;
}