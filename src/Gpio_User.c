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

#include <Dio_Driver.h>
#include <Gpio_User.h>

#ifdef __cplusplus
extern "C" {
#endif

void Gpio_v_init(void)
{
  DIO_v_init(); // DIO driver initialization

  /***************************************************
   * INPUTS
  /***************************************************/
  // TODO replace void cast by DEM if something is wrong
  (void)DIO_u_configPin(sensor1, port1, input, gpio, disabled);
  (void)DIO_u_configPin(sensor2, port1, input, gpio, disabled);
  (void)DIO_u_configPin(sensor3, port1, input, gpio, disabled);
  (void)DIO_u_configPin(sensor4, port1, input, gpio, disabled);

  /***************************************************
  * OUTPUTS
  /***************************************************/
  // TODO replace void cast by DEM if something is wrong
  (void)DIO_u_configPin(led1, port2, output, gpio, disabled);
  (void)DIO_u_configPin(led2, port2, output, gpio, disabled);
  (void)DIO_u_configPin(led3, port2, output, gpio, disabled);
  (void)DIO_u_configPin(led4, port2, output, gpio, disabled);
  (void)DIO_u_configPin(ssrOutput, port2, output, gpio, disabled);
  (void)DIO_u_configPin(ledRed, port2, output, gpio, disabled);
  (void)DIO_u_configPin(ledGreen, port2, output, gpio, disabled);
}

#ifdef __cplusplus
}
#endif