 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Karim Mohamed Amin
 ******************************************************************************/
/* gaurding to avoid multiple include */
#ifndef PORT_H
#define PORT_H

/* my company id */
#define PORT_VENDOR_ID          (2000U)

/* the port driver id in software module doc*/
#define PORT_MODULE_ID          (124U)

/* Port Instance Id */
#define PORT_INSTANCE_ID  (0U)

/*
 * Module Version 1.0.0
 */
#define PORT_SW_MAJOR_VERSION           (1U)
#define PORT_SW_MINOR_VERSION           (0U)
#define PORT_SW_PATCH_VERSION           (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_AR_RELEASE_MINOR_VERSION   (0U)
#define PORT_AR_RELEASE_PATCH_VERSION   (3U)

/*
 * Macros for Port Status
 */
#define PORT_INITIALIZED                (1U)
#define PORT_NOT_INITIALIZED            (0U)

/*
 * Include the standard AUTOSAR types std_types.h file
 */
#include "Std.Types.h"

/*
 * check that the two files from the same software version and AUTOSAR verion
 */

#if( (PORT_SW_MAJOR_VERSION != STD_TYPES_SW_MAJOR_VERSION)\ 
   ||(PORT_SW_MINOR_VERSION != STD_TYPES_SW_MINOR_VERSION)\
   ||(PORT_SW_PATCH_VERSION != STD_TYPES_SW_PATCH_VERSION))

#error "Incompatable Software versions between Port.h and Std_Types.h";
#endif
   
 /*
 * check that the two files from the same AUTOSAR version 
 */

#if( (PORT_AR_RELEASE_MAJOR_VERSION != STD_TYPES_AR_RELEASE_MAJOR_VERSION)\ 
   ||(PORT_AR_RELEASE_MINOR_VERSION != STD_TYPES_AR_RELEASE_MINOR_VERSION)\
   ||(PORT_AR_RELEASE_PATCH_VERSION != STD_TYPES_AR_RELEASE_PATCH_VERSION))

#error "Incompatable AUTOSAR versions between Port.h and Std_Types.h";
#endif
   
/* Port Pre-Compile Configuration Header file */
#include "Port_Cfg.h"

/* AUTOSAR Version checking between Port_Cfg.h and Port.h files */
#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Port_Cfg.h does not match the expected version"
#endif

/* Software Version checking between Port_Cfg.h and Port.h files */
#if ((PORT_CFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_CFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_CFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of Port_Cfg.h does not match the expected version"
#endif

 /* include non-AUTOSAR file */
#include "Common_Macros.h"

/******************************************************************************
 *                      API Service Id Macros                                 *
******************************************************************************/
   
/* Service ID for PORT INIT  */
#define PORT_INIT_SID                                     (uint8)0x00
   
/* Service ID for PORT_SET_PIN_DIRECTION  */
#define PORT_SET_PIN_DIRECTION_SID                        (uint8)0x01
   
/* Service ID for PORT_REFRESH_PORT_DIRECTION  */
#define PORT_REFRESH_PORT_DIRECTION_SID                   (uint8)0x02
   
/* Service ID for PORT_GET_VERSION_INFO  */
#define PORT_GET_VERSION_INFO_SID                         (uint8)0x03
   
/* Service ID for PORT_SET_PIN_MODE  */
#define PORT_SET_PIN_MODE_SID                             (uint8)0x04
   
/*******************************************************************************
 *                      DET Error Codes                                        *
*******************************************************************************/
   
/* Det error when user uses invalid port pin number */
#define PORT_E_PARAM_PIN        (uint8) 0x0A
   
/* Det error when user changes the direction for port pin configured as not changable*/
#define PORT_E_DIRECTION_UNCHANGABLE        (uint8) 0x0B
   
/* Det error when Port_Init API service called with NULL pointer parameter */
#define PORT_E_PARAM_CONFIG       (uint8) 0x0C
   
/* API Port_SetPinMode called when the mode is in_valid */
#define PORT_E_PARAM_INVALID_MODE       (uint8) 0x0D
   
/* API Port_SetPinMode called when the mode is unchangable */
#define PORT_E_MODE_UNCHANGEABLE       (uint8) 0x0E
  
/* API service call without initialization */
#define PORT_E_UNINIT       (uint8) 0x0F
   
/* API service call with a null pointer */
#define PORT_E_PARAM_POINTER       (uint8) 0x10
   
/*******************************************************************************
 *                              Module Definitions                             *
 *******************************************************************************/

/* GPIO Registers base addresses */
#define GPIO_PORTA_BASE_ADDRESS           0x40004000
#define GPIO_PORTB_BASE_ADDRESS           0x40005000
#define GPIO_PORTC_BASE_ADDRESS           0x40006000
#define GPIO_PORTD_BASE_ADDRESS           0x40007000
#define GPIO_PORTE_BASE_ADDRESS           0x40024000
#define GPIO_PORTF_BASE_ADDRESS           0x40025000

/* GPIO Registers offset addresses */
#define PORT_DATA_REG_OFFSET              0x3FC
#define PORT_DIR_REG_OFFSET               0x400
#define PORT_ALT_FUNC_REG_OFFSET          0x420
#define PORT_PULL_UP_REG_OFFSET           0x510
#define PORT_PULL_DOWN_REG_OFFSET         0x514
#define PORT_DIGITAL_ENABLE_REG_OFFSET    0x51C
#define PORT_LOCK_REG_OFFSET              0x520
#define PORT_COMMIT_REG_OFFSET            0x524
#define PORT_ANALOG_MODE_SEL_REG_OFFSET   0x528
#define PORT_CTL_REG_OFFSET               0x52C

/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/

/* Description: data type for symbolic name of a port pin */
typedef Port_PinType            uint8

/* Description: holds the pin mode */
typedef Port_PinModeType        uint8  

/* Description: Enum to hold PIN direction */
typedef enum
{
    PORT_PIN_IN,PORT_PIN_OUT
}Port_PinDirectionType;

/* Description: Enum to hold internal resistor type for PIN */
typedef enum
{
    OFF,PULL_UP,PULL_DOWN
}Port_InternalResistor;

/* Description: Structure to configure each individual PIN:
 *	1. the PORT Which the pin belongs to. 0, 1, 2, 3, 4 or 5
 *	2. the number of the pin in the PORT.
 *      3. the direction of pin --> INPUT or OUTPUT
 *      4. the internal resistor --> Disable, Pull up or Pull down
 */
typedef struct 
{
    uint8 port_num; 
    uint8 pin_num; 
    Port_PinDirection direction;
    Port_InternalResistor resistor;
    uint8 initial_value;
}Port_ConfigType;

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

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
void Port_Init(const Port_ConfigType *ConfigPtr );

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
);

/************************************************************************************
* Service Name: Port_RefreshPortDirection
* Sync/Async: Synchronous
* Reentrancy: Non-Reentrant
* Parameters (in): None 
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Refrshes port direction 
************************************************************************************/
void Port_RefreshPortDirection ( void );

/* Check if the user configured the version_info_api on or off */
#if( PORT_VERSION_INFO_API == STD_ON )
{
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
void Port_GetVersionInfo ( Std_VersionInfoType* versioninfo );
}
#endif /* version_info_API */
#endif /* PORT_H */