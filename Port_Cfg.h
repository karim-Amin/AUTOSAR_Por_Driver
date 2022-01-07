 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Karim Mohamed Amin
 ******************************************************************************/

#ifndef PORT_CFG_H
#define PORT_CFG_H

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION              (1U)
#define PORT_CFG_SW_MINOR_VERSION              (0U)
#define PORT_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT                (STD_ON)

/* Pre-compile option for Version Info API */
#define PORT_VERSION_INFO_API                (STD_ON)

/* Pre-compile option for Set Pin Direction API */
#define PORT_SET_PIN_DIRECTION_API           (STD_ON)

/* Pre-compile option for Set Pin Direction API */
#define PORT_SET_PIN_MODE_API                (STD_ON)

/* define total number of pins in the micro */
#define PORT_NUM_OF_CHANNELS                 (43U)
   
/**************************************************************
 *                      All Modes in Tiva-c                   *
 **************************************************************/
#define PORT_PIN_MODE_ADC        0x0A
#define PORT_PIN_MODE_CAN        0x0B
#define PORT_PIN_MODE_DIO        0x0C
#define PORT_PIN_MODE_DIO_GPT    0x0D
#define PORT_PIN_MODE_DIO_WDG    0x0E
#define PORT_PIN_MODE_FLEXRAY    0x0F
#define PORT_PIN_MODE_ICU        0x1A
#define PORT_PIN_MODE_LIN        0x1B
#define PORT_PIN_MODE_MEM        0x1C
#define PORT_PIN_MODE_PWM        0x1D
#define PORT_PIN_MODE_SPI        0x1E
/**************************************************************
 *                Supported Modes For Each pin                *
 **************************************************************/

/*      Pin A0 Modes    */
#define PORT_PIN_A0_MODE  
/**************************************************************
 *            index for each pin in the config struct         *
 **************************************************************/
#define PORT_PINA0_INDEX        (0U)
#define PORT_PINA1_INDEX        (1U)
#define PORT_PINA2_INDEX        (2U)
#define PORT_PINA3_INDEX        (3U)
#define PORT_PINA4_INDEX        (4U)
#define PORT_PINA5_INDEX        (5U)
#define PORT_PINA6_INDEX        (6U)
#define PORT_PINA7_INDEX        (7U)
#define PORT_PINB0_INDEX        (8U)
#define PORT_PINB1_INDEX        (9U)
#define PORT_PINB2_INDEX        (10U)
#define PORT_PINB3_INDEX        (11U)
#define PORT_PINB4_INDEX        (12U)
#define PORT_PINB5_INDEX        (13U)
#define PORT_PINB6_INDEX        (14U)
#define PORT_PINB7_INDEX        (15U)
#define PORT_PINC0_INDEX        (16U)
#define PORT_PINC1_INDEX        (17U)
#define PORT_PINC2_INDEX        (18U)
#define PORT_PINC3_INDEX        (19U)
#define PORT_PINC4_INDEX        (20U)
#define PORT_PINC5_INDEX        (21U)
#define PORT_PINC6_INDEX        (22U)
#define PORT_PINC7_INDEX        (23U)
#define PORT_PIND0_INDEX        (24U)
#define PORT_PIND1_INDEX        (25U)
#define PORT_PIND2_INDEX        (26U)
#define PORT_PIND3_INDEX        (27U)
#define PORT_PIND4_INDEX        (28U)
#define PORT_PIND5_INDEX        (29U) 
#define PORT_PIND6_INDEX        (30U)
#define PORT_PIND7_INDEX        (31U)
#define PORT_PINE0_INDEX        (32U)
#define PORT_PINE1_INDEX        (33U)
#define PORT_PINE2_INDEX        (34U)
#define PORT_PINE3_INDEX        (35U)
#define PORT_PINE4_INDEX        (36U)
#define PORT_PINE5_INDEX        (37U)
#define PORT_PINF0_INDEX        (38U)
#define PORT_PINF1_INDEX        (39U)
#define PORT_PINF2_INDEX        (40U)
#define PORT_PINF3_INDEX        (41U)
#define PORT_PINF4_INDEX        (42U)
/**************************************************************
 *                      Default configurations                *
 **************************************************************/
/* default config if the pin not configured */
#define PORT_PIN_DIR_DEFAULT              PORT_PIN_IN
#define PORT_PIN_MODE_DEFAULT             0
#define PORT_PIN_DIR_CHANGE_DEFAULT       PORT_DIRECTION_CHANGEABLE
#define PORT_PIN_MODE_CHANGE_DEFAULT      PORT_MODE_CHANGEABLE
#define PORT_PIN_RESISTOR_DEFAULT         OFF
#define PORT_PIN_INIT_VALUE_DEFAULT       0   
/* Configuration values will be stored in the configuration structure */
   
/**************************************************************
 *                      Congifg for Pin A0                     *
 **************************************************************/
#define PORT_A_ID               (Port_PortId) 0
#define PORT_PIN_A0             (Port_PinType) 0
#define PORT_PIN_A0_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_A0_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_A0_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_A0_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_A0_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_A0_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin A1                     *
 **************************************************************/
#define PORT_PIN_A1             (Port_PinType) 1
#define PORT_PIN_A1_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_A1_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_A1_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_A1_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_A1_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_A1_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin A2                     *
 **************************************************************/
#define PORT_PIN_A2             (Port_PinType) 2
#define PORT_PIN_A2_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_A2_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_A2_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_A2_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_A2_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_A2_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin A3                    *
 **************************************************************/
#define PORT_PIN_A3             (Port_PinType) 3
#define PORT_PIN_A3_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_A3_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_A3_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_A3_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_A3_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_A3_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin A4                     *
 **************************************************************/
#define PORT_PIN_A4             (Port_PinType) 4
#define PORT_PIN_A4_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_A4_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_A4_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_A4_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_A4_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_A4_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin A5                    *
 **************************************************************/
#define PORT_PIN_A5             (Port_PinType) 5
#define PORT_PIN_A5_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_A5_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_A5_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_A5_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_A5_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_A5_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin A6                    *
 **************************************************************/
#define PORT_PIN_A6             (Port_PinType) 6
#define PORT_PIN_A6_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_A6_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_A6_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_A6_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_A6_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_A6_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin A7                    *
 **************************************************************/
#define PORT_PIN_A7             (Port_PinType) 7
#define PORT_PIN_A7_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_A7_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_A7_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_A7_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_A7_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_A7_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin B0                     *
 **************************************************************/
#define PORT_B_ID               (Port_PortId) 1
#define PORT_PIN_B0             (Port_PinType) 0
#define PORT_PIN_B0_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_B0_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_B0_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_B0_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_B0_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_B0_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin B1                     *
 **************************************************************/
#define PORT_PIN_B1             (Port_PinType) 1
#define PORT_PIN_B1_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_B1_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_B1_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_B1_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_B1_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_B1_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin B2                     *
 **************************************************************/
#define PORT_PIN_B2             (Port_PinType) 2
#define PORT_PIN_B2_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_B2_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_B2_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_B2_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_B2_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_B2_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin B3                     *
 **************************************************************/
#define PORT_PIN_B3             (Port_PinType) 3
#define PORT_PIN_B3_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_B3_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_B3_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_B3_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_B3_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_B3_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin B4                     *
 **************************************************************/
#define PORT_PIN_B4             (Port_PinType) 4
#define PORT_PIN_B4_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_B4_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_B4_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_B4_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_B4_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_B4_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin B5                     *
 **************************************************************/
#define PORT_PIN_B5             (Port_PinType) 5
#define PORT_PIN_B5_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_B5_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_B5_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_B5_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_B5_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_B5_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin B6                     *
 **************************************************************/
#define PORT_PIN_B6             (Port_PinType) 6
#define PORT_PIN_B6_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_B6_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_B6_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_B6_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_B6_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_B6_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin B7                     *
 **************************************************************/
#define PORT_PIN_B7             (Port_PinType) 7
#define PORT_PIN_B7_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_B7_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_B7_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_B7_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_B7_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_B7_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin C0                     *
 **************************************************************/
#define PORT_C_ID               (Port_PortId) 2
#define PORT_PIN_C0             (Port_PinType) 0
#define PORT_PIN_C0_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_C0_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_C0_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_C0_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_C0_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_C0_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT 
/**************************************************************
 *                      Congifg for Pin C1                     *
 **************************************************************/
#define PORT_PIN_C1             (Port_PinType) 1
#define PORT_PIN_C1_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_C1_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_C1_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_C1_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_C1_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_C1_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin C2                     *
 **************************************************************/
#define PORT_PIN_C2             (Port_PinType) 2
#define PORT_PIN_C2_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_C2_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_C2_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_C2_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_C2_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_C2_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin C3                     *
 **************************************************************/
#define PORT_PIN_C3             (Port_PinType) 3
#define PORT_PIN_C3_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_C3_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_C3_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_C3_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_C3_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_C3_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin C4                     *
 **************************************************************/
#define PORT_PIN_C4             (Port_PinType) 4
#define PORT_PIN_C4_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_C4_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_C4_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_C4_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_C4_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_C4_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin C5                     *
 **************************************************************/
#define PORT_PIN_C5             (Port_PinType) 5
#define PORT_PIN_C5_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_C5_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_C5_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_C5_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_C5_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_C5_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin C6                     *
 **************************************************************/
#define PORT_PIN_C6             (Port_PinType) 6
#define PORT_PIN_C6_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_C6_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_C6_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_C6_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_C6_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_C6_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin C7                     *
 **************************************************************/
#define PORT_PIN_C7             (Port_PinType) 7
#define PORT_PIN_C7_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_C7_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_C7_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_C7_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_C7_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_C7_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin D0                     *
 **************************************************************/
#define PORT_D_ID               (Port_PortId) 3
#define PORT_PIN_D0             (Port_PinType) 0
#define PORT_PIN_D0_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_D0_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_D0_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_D0_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_D0_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_D0_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin D1                     *
 **************************************************************/
#define PORT_PIN_D1             (Port_PinType) 1
#define PORT_PIN_D1_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_D1_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_D1_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_D1_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_D1_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_D1_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin D2                     *
 **************************************************************/
#define PORT_PIN_D2             (Port_PinType) 2
#define PORT_PIN_D2_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_D2_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_D2_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_D2_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_D2_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_D2_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin D3                     *
 **************************************************************/
#define PORT_PIN_D3             (Port_PinType) 3
#define PORT_PIN_D3_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_D3_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_D3_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_D3_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_D3_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_D3_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin D4                     *
 **************************************************************/
#define PORT_PIN_D4             (Port_PinType) 4
#define PORT_PIN_D4_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_D4_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_D4_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_D4_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_D4_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_D4_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin D5                     *
 **************************************************************/
#define PORT_PIN_D5             (Port_PinType) 5
#define PORT_PIN_D5_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_D5_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_D5_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_D5_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_D5_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_D5_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin D6                     *
 **************************************************************/
#define PORT_PIN_D6             (Port_PinType) 6
#define PORT_PIN_D6_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_D6_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_D6_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_D6_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_D6_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_D6_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin D7                     *
 **************************************************************/
#define PORT_PIN_D7             (Port_PinType) 7
#define PORT_PIN_D7_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_D7_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_D7_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_D7_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_D7_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_D7_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin E0                     *
 **************************************************************/
#define PORT_E_ID               (Port_PortId) 4
#define PORT_PIN_E0             (Port_PinType) 0
#define PORT_PIN_E0_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_E0_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_E0_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_E0_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_E0_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_E0_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin E1                     *
 **************************************************************/
#define PORT_PIN_E1             (Port_PinType) 1
#define PORT_PIN_E1_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_E1_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_E1_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_E1_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_E1_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_E1_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin E2                     *
 **************************************************************/
#define PORT_PIN_E2             (Port_PinType) 2
#define PORT_PIN_E2_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_E2_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_E2_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_E2_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_E2_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_E2_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin E3                     *
 **************************************************************/
#define PORT_PIN_E3             (Port_PinType) 3
#define PORT_PIN_E3_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_E3_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_E3_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_E3_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_E3_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_E3_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin E4                     *
 **************************************************************/
#define PORT_PIN_E4             (Port_PinType) 4
#define PORT_PIN_E4_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_E4_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_E4_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_E4_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_E4_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_E4_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin E5                     *
 **************************************************************/
#define PORT_PIN_E5             (Port_PinType) 5
#define PORT_PIN_E5_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_E5_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_E5_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_E5_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_E5_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_E5_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin F0                     *
 **************************************************************/
#define PORT_F_ID               (Port_PortId) 5
#define PORT_PIN_F0             (Port_PinType) 0
#define PORT_PIN_F0_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_F0_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_F0_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_F0_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_F0_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_F0_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin F1                     *
 **************************************************************/
#define PORT_PIN_F1             (Port_PinType) 1
#define PORT_PIN_F1_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_F1_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_F1_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_F1_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_F1_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_F1_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin F2                     *
 **************************************************************/
#define PORT_PIN_F2             (Port_PinType) 2
#define PORT_PIN_F2_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_F2_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_F2_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_F2_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_F2_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_F2_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin F3                     *
 **************************************************************/
#define PORT_PIN_F3             (Port_PinType) 3
#define PORT_PIN_F3_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_F3_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_F3_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_F3_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_F3_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_F3_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
/**************************************************************
 *                      Congifg for Pin F4                     *
 **************************************************************/
#define PORT_PIN_F4             (Port_PinType) 4
#define PORT_PIN_F4_DIR         (Port_PinDirectionType) PORT_PIN_DIR_DEFAULT
#define PORT_PIN_F4_MODE        (Port_PinModeType) PORT_PIN_MODE_DEFAULT 
#define PORT_PIN_F4_DIR_CHANGE  (Port_DirectionChangeType) PORT_PIN_DIR_CHANGE_DEFAULT 
#define PORT_PIN_F4_MODE_CHANGE (Port_ModeChangeType)  PORT_PIN_MODE_CHANGE_DEFAULT 
#define PORT_PIN_F4_RESISTOR    (Port_InternalResistor) PORT_PIN_RESISTOR_DEFAULT 
#define PORT_PIN_F4_INIT_VALUE  (Port_PinLevelInit) PORT_PIN_INIT_VALUE_DEFAULT
#endif /* PORT_CFG_H */