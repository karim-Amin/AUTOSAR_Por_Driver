 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PB_Cfg.h
 *
 * Description: Post Bulid Configuration Header file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Karim Mohamed Amin
 ******************************************************************************/
#ifndef PORT_PBCFG_H
#define PORT_PBCFG_H

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)
   
/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/

/* Description: data type for symbolic name of a port pin */
typedef uint8            Port_PinType;

/* Description: data type to identify the configured port */
typedef uint8            Port_PortId;

/* Description: holds the pin mode */
typedef uint8            Port_PinModeType ; 

/* Description: holds the pin Level initial value */
typedef uint8            Port_PinLevelInit ; 

/* Description: Enum to hold PIN Mode ( Changable OR unchangable ) */
typedef enum 
{
  PORT_MODE_UNCHANGEABLE , PORT_MODE_CHANGEABLE
}Port_ModeChangeType;

/* Description: Enum to hold PIN Direction ( Changable OR unchangable ) */
typedef enum 
{
  PORT_DIRECTION_UNCHANGEABLE , PORT_DIRECTION_CHANGEABLE
}Port_DirectionChangeType;

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
 *      4. the mode of the pin  --> ( Gpio , ADC , CAN) functionallity
 *      5. is the direction of the pin changeable or not
 *      6. 5. is the Mode of the pin changeable or not
 *      7. the internal resistor --> Disable, Pull up or Pull down
 *      8. the initial value for each pin 
 */
typedef struct 
{
    Port_PortId         port_num; 
    Port_PinType        pin_num; 
    Port_PinDirectionType       direction;
    Port_PinModeType    Mode;
    Port_DirectionChangeType    D_change;
    Port_ModeChangeType         M_change;       
    Port_InternalResistor       resistor;
    Port_PinLevelInit       initial_value;
}Port_ConfigChannel;

/* Description: Structure to configure All ports in Tiva-c:
 *	1. Array of structure holds all configurations for all channels
 */
typedef struct 
{
    Port_ConfigChannel channels_config[PORT_NUM_OF_CHANNELS];
}Port_ConfigType;

/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/

/* Extern PB structures to be used by Port and other modules */
extern const Port_ConfigType Port_Configuration;
#endif  /* PORT_PB_CFG */