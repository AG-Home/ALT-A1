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

#include <Dio_Driver.h>
#include <MSP430_Registers.h>

#define WDTPW   (0x5A00)
#define WDTHOLD (0x0080)

void main(void)
{
  WDTCTL = WDTPW | WDTHOLD;

  DIO_v_init();
  (void)DIO_u_configPin(bit0, port2, output, gpio, disabled);
  (void)DIO_u_setPinState(bit0, port2, high);

  return 0;
}