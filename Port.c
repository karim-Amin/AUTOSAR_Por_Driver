 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.c
 *
 * Description: Source file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Karim Mohamed Amin
 ******************************************************************************/

#include "Port.h"
#include "Port_REG.h"

/* check as it is optional feature */
#if (PORT_DEV_ERROR_DETECT == STD_ON)

#include "Det.h"
/* AUTOSAR Version checking between Det and Port Modules */
#if ((DET_AR_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 || (DET_AR_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 || (DET_AR_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Port.h does not match the expected version"
#endif

#endif
/******************************************************************************
 *                      Private Global variable                               *
******************************************************************************/
   
STATIC uint8 Port_Status = PORT_NOT_INITIALIZED;

/******************************************************************************
 *                      API Service Definitions                               *
******************************************************************************/

/************************************************************************************
* Service Name: Port_Init
* Sync/Async: Synchronous
* Reentrancy: Non-reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration struct
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: initilaze the port driver module
************************************************************************************/
void Port_Init(const Port_ConfigType *ConfigPtr )
{
  #if ( PORT_DEV_ERROR_DETECT == STD_ON )
    /* when the function called with null pointer report det error */
     if( ConfigPtr == NULL_PTR )
     {
       Det_ReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_INIT_SID,PORT_E_PARAM_CONFIG);
     }
     else
  #endif       
     {
       Port_Status = PORT_INITIALIZED; /* update the status */
     }
   volatile uint32 * PortGpio_Ptr = NULL_PTR; /* point to the required Port Registers base address */
   
   volatile uint32 delay = 0; /* to make delay 3 clock cycles after enable the clock in the ports
   
   uint8 count; /* counter used to loop across all channels in each port */
   
   uint8 port_num; /* to hold the port number in each iteration */
   
   for ( count = 0; count < PORT_NUM_OF_CHANNELS;count++ )
   {
    port_num = ConfigPtr->channels_config[count].port_num;
    switch (port_num)
    {
    case 0:     PortGpio_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS;
      break;
    case 1:     PortGpio_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS;
      break;
    case 2:     PortGpio_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS;
      break;
    case 3:     PortGpio_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS;
      break;
    case 4:     PortGpio_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS;
      break;
    case 5:     PortGpio_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS;
      break;
    }
   }
}
   
   
   