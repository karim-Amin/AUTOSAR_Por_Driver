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
   
   volatile uint32 delay = 0; /* to make delay 3 clock cycles after enable the clock in the ports */
   
   uint8 count; /* counter used to loop across all channels in each port */
   
   uint8 port_num; /* to hold the port number in each iteration */
   uint8 pin_num;  /* to hold the pin number in each iteration */
   /* enable the clock in All port */
   SYSCTL_REGCGC2_REG |= (1<<PORT_A_ID) | (1<<PORT_B_ID) | (1<<PORT_C_ID) | (1<<PORT_D_ID) | (1<<PORT_E_ID)| (1<<PORT_F_ID);
   
   /* At least delay three clock cycles */
   delay = SYSCTL_REGCGC2_REG;
   
   for ( count = 0; count < PORT_NUM_OF_CHANNELS ;count++ )
   {
     /* Store the pin and port numbers */
    port_num = ConfigPtr->channels_config[count].port_num;
    pin_num = ConfigPtr->channels_config[count].pin_num;
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
    /* Check the need to unlock the lock_register 
     * this is only for PD7 & PF0 --> NMI Channels
     * and for [ PC3 -> PC0 ]  --> JTAG/SWD and it is forbidden
     */ 
    if( ((port_num == PORT_D_ID) && (pin_num == PORT_PIN_D7)) || ((port_num == PORT_F_ID) && (pin_num == PORT_PIN_F0)) )
    {
      /* unlock the lock register */
      *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_LOCK_REG_OFFSET) = PORT_UNLOCK_MAGIC_NUMBER;
      /* set the corresponding bit in the commit register*/
      SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_COMMIT_REG_OFFSET) , pin_num );
    }
    /* The Forbiden satiuation [ PC3 -> PC0 ]  --> JTAG/SWD */
    else if( (port_num == PORT_C_ID)\
         &&  ((pin_num == PORT_PIN_C3) || (pin_num == PORT_PIN_C2) || (pin_num == PORT_PIN_C1)|| (pin_num == PORT_PIN_C0)))
    {
      /* DO NOT CONTIUNE */ 
      continue;
    }
    else{
      /* the other pins do not need any commit register */
    }
    
    /* set up the direction for the current pin based on */ 
    if( ConfigPtr->channels_config[count].direction == PORT_PIN_OUT )
    {
      SET_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET), pin_num );
      /* if the pin is output set the initial value */
      if( ConfigPtr->channels_config[count].initial_value == STD_HIGH )
      {
        SET_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DATA_REG_OFFSET), pin_num );
      }
      else
      {
        CLEAR_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DATA_REG_OFFSET), pin_num );
      }
    }
    
    /* if it is PORT_PIN_IN input pin */
    else{
      /* add to the base register the offest for direction_register */
      CLEAR_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET), pin_num );
    }
    
    if( ConfigPtr->channels_config[count].Mode != PORT_PIN_MODE_DIO)
    {
      /* set the corresponding bit in AFSEL register*/
      SET_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ALT_FUNC_REG_OFFSET), pin_num );
    }
    else
    {
      /* clear the corresponding bit in AFSEL register*/
      CLEAR_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ALT_FUNC_REG_OFFSET), pin_num );
    }
      /* check the need for analog or digital modes */
     if( ConfigPtr->channels_config[count].Mode != PORT_PIN_MODE_ADC)
    {
       /* set the corresponding bit in GPIODEN register (DIGITAL ENABLE )*/
      SET_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET), pin_num );
    }
    else
    {
        /* clear the corresponding bit in GPIODEN register (DIGITAL DISABLE )*/
      CLEAR_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET), pin_num );
        /* set the corresponding bit in AMSEL register (ANALOG ENABLE )*/
      SET_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET), pin_num );
    }
    /* put the pin mode as defined in the configuration structure  */
    *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_CTL_REG_OFFSET) |= ((ConfigPtr->channels_config[count].Mode) << (pin_num * PORT_CTL_REG_PIN_VALUE_WIDTH));
    /* put the pull-up and pull-down resistor configuration */
    if( ConfigPtr->channels_config[count].resistor == PULL_UP){ 
      SET_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_PULL_UP_REG_OFFSET), pin_num );
    }
    else if ( ConfigPtr->channels_config[count].resistor == PULL_DOWN ){
       SET_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_PULL_DOWN_REG_OFFSET), pin_num );
    }
    /* if the resistor configuration is OFF*/
    else{
      /* disable two modes pull up and pull down */
      CLEAR_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_PULL_UP_REG_OFFSET), pin_num );
      CLEAR_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_PULL_DOWN_REG_OFFSET), pin_num );
    }
     
   }
}
/* Check if the user configured the SetPinDirection_api on or off */
#if ( PORT_SET_PIN_DIRECTION_API == STD_ON )
/************************************************************************************
* Service Name: Port_SetPinDirection
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): pin -> port pin id number 
*                  Direction -> port pin direction 
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Sets the port pin direction
************************************************************************************/
void Port_SetPinDirection (
   Port_PinType pin,
   Port_PinDirectionType direction
)
{

#if ( PORT_DEV_ERROR_DETECT == STD_ON )
  /* check invalid port pin number */
  if( pin >= PORT_NUM_OF_CHANNELS )
  {
    Det_ReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_SID,PORT_E_PARAM_PIN);
  }else{
    /* do nothing */
  }
  /* check if the direction is unchangable */
  if( Port_Configuration.channels_config[pin].D_change == PORT_DIRECTION_UNCHANGEABLE )
  {
    Det_ReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_SID,PORT_E_DIRECTION_UNCHANGABLE);
  }else{
    /* do nothing*/
  }
  /* check if the Port driver initialized or not */
  if( Port_Status == PORT_NOT_INITIALIZED )
  {
    Det_ReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_SID,PORT_E_UNINIT);
  }else{
    /* do nothing */
  }
#endif
  /* to hold the port number */
  uint8 port_number = Port_Configuration.channels_config[pin].port_num;
  /* to hold the base address */
  volatile uint32 * PortGpioPtr_base = NULL_PTR;
  switch( port_number )
  {  
  case 0 : PortGpioPtr_base = (volatile uint32 *) GPIO_PORTA_BASE_ADDRESS;
    break;
  case 1 : PortGpioPtr_base = (volatile uint32 *) GPIO_PORTB_BASE_ADDRESS;
    break;
  case 2 : PortGpioPtr_base = (volatile uint32 *) GPIO_PORTC_BASE_ADDRESS;
    break;
  case 3 : PortGpioPtr_base = (volatile uint32 *) GPIO_PORTD_BASE_ADDRESS;
    break;
  case 4 : PortGpioPtr_base = (volatile uint32 *) GPIO_PORTE_BASE_ADDRESS;
    break;
  case 5 : PortGpioPtr_base = (volatile uint32 *) GPIO_PORTF_BASE_ADDRESS;
    break;
  default:
    break;
  }
  /* set up the direction for the current pin based on */ 
    if( direction == PORT_PIN_OUT )
    {
      SET_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpioPtr_base + PORT_DIR_REG_OFFSET), pin );
    }
    else{
      CLEAR_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpioPtr_base + PORT_DIR_REG_OFFSET), pin );
    }
}
#endif

/************************************************************************************
* Service Name: Port_RefreshPortDirection
* Sync/Async: Synchronous
* Reentrancy: Non-Reentrant
* Parameters (in): None 
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Refrshes all configured ports with the configured directions 
************************************************************************************/
void Port_RefreshPortDirection ( void ){
  
  /* check for the development error */
  #if ( PORT_DEV_ERROR_DETECT == STD_ON )
  /* check if the Port driver initialized or not */
  if( Port_Status == PORT_NOT_INITIALIZED )
  {
    Det_ReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_SID,PORT_E_UNINIT);
  }else{
    /* do nothing */
  }
#endif
  uint8 i ;
  uint8 PortPin_number;
  uint8 Port_num;
  Port_PinDirectionType direction;
   /* to hold the base address */
  volatile uint32 * PortGpioPtr_base = NULL_PTR;
  for( i=0 ; i < PORT_NUM_OF_CONFIG_PINS ;i++)
  {
    /* get every configured pin from the array of configured pins */
    PortPin_number = Port_configured_pins[i];
    /* refresh if the pin direction is unchangable and if the pin configured */
    if( Port_Configuration.channels_config[PortPin_number].D_change == PORT_DIRECTION_UNCHANGEABLE )
    {
      Port_num = Port_Configuration.channels_config[PortPin_number].port_num;
      direction = Port_Configuration.channels_config[PortPin_number].direction ;
      switch( Port_num )
      {  
        case 0 : PortGpioPtr_base = (volatile uint32 *) GPIO_PORTA_BASE_ADDRESS;
          break;
        case 1 : PortGpioPtr_base = (volatile uint32 *) GPIO_PORTB_BASE_ADDRESS;
          break;
        case 2 : PortGpioPtr_base = (volatile uint32 *) GPIO_PORTC_BASE_ADDRESS;
          break;
        case 3 : PortGpioPtr_base = (volatile uint32 *) GPIO_PORTD_BASE_ADDRESS;
          break;
        case 4 : PortGpioPtr_base = (volatile uint32 *) GPIO_PORTE_BASE_ADDRESS;
          break;
        case 5 : PortGpioPtr_base = (volatile uint32 *) GPIO_PORTF_BASE_ADDRESS;
          break;
        default:
          break;
      }
      if( direction == PORT_PIN_OUT )
      {
        SET_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpioPtr_base + PORT_DIR_REG_OFFSET), PortPin_number );
      }
      else{
        CLEAR_BIT( *(volatile uint32 *)((volatile uint8 *)PortGpioPtr_base + PORT_DIR_REG_OFFSET), PortPin_number );
      }
    }
  }
}

/* Check if the user configured the version_info_api on or off */
#if ( PORT_VERSION_INFO_API == STD_ON )

/************************************************************************************
* Service Name: Port_GetVersionInfo
* Sync/Async: Synchronous
* Reentrancy: Non-Reentrant
* Parameters (in): None 
* Parameters (inout): None
* Parameters (out): versioninfo -> pointer to where to store the version info of this module
* Return value: None
* Description: Returns the version information of this module
************************************************************************************/
void Port_GetVersionInfo ( Std_VersionInfoType* versioninfo )
{
/* check for the development error */
  #if ( PORT_DEV_ERROR_DETECT == STD_ON )
  /* check if the Port driver initialized or not */
  if( versioninfo == NULL_PTR )
  {
    Det_ReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_GET_VERSION_INFO_SID,PORT_E_PARAM_POINTER);
  }else{
    /* do nothing */
  }
#endif
  versioninfo->moduleID = PORT_MODULE_ID;
  versioninfo->sw_major_version = PORT_SW_MAJOR_VERSION;
  versioninfo->sw_minor_version = PORT_SW_MINOR_VERSION;
  versioninfo->sw_patch_version = PORT_SW_PATCH_VERSION;
  versioninfo->vendorID = PORT_VENDOR_ID;
}

#endif /* version_info_API */
 
/* Check if the user configured the SetPinMode_api on or off */
#if ( PORT_SET_PIN_MODE_API == STD_ON )
/************************************************************************************
* Service Name: Port_SetPinMode
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): pin -> port pin id number 
*                  Mode -> New Port Pin Mode to be set on port pin 
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Sets the port pin Mode
************************************************************************************/
void Port_SetPinMode (
   Port_PinType pin,
   Port_PinModeType Mode
)
{
  
}
#endif  