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
 *                      Default configurations                *
 **************************************************************/
/* default config if the pin not configured */
#define Port_pin_dir_default             PORT_PIN_INPUT
#define Port_pin_mode_default            0
#define Port_pin_dir_change_default      PORT_DIRECTION_CHANGEABLE
#define Port_pin_mode_change_default     PORT_MODE_CHANGEABLE
#define Port_pin_resistor_default        OFF
#define Port_pin_init_value_default      0   
/* Configuration values will be stored in the configuration structure */
   
/**************************************************************
 *                      Congifg for Pin A0                     *
 **************************************************************/
#define Port_Aid                (Port_PortId) 0
#define Port_pin_A0             (Port_PinType) 0
#define Port_pin_A0_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_A0_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_A0_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_A0_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_A0_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_A0_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin A1                     *
 **************************************************************/
#define Port_pin_A1             (Port_PinType) 1
#define Port_pin_A1_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_A1_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_A1_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_A1_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_A1_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_A1_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin A2                     *
 **************************************************************/
#define Port_pin_A2             (Port_PinType) 2
#define Port_pin_A2_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_A2_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_A2_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_A2_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_A2_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_A2_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin A3                    *
 **************************************************************/
#define Port_pin_A3             (Port_PinType) 3
#define Port_pin_A3_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_A3_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_A3_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_A3_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_A3_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_A3_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin A4                     *
 **************************************************************/
#define Port_pin_A4             (Port_PinType) 4
#define Port_pin_A4_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_A4_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_A4_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_A4_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_A4_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_A4_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin A5                    *
 **************************************************************/
#define Port_pin_A5             (Port_PinType) 5
#define Port_pin_A5_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_A5_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_A5_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_A5_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_A5_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_A5_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin A6                    *
 **************************************************************/
#define Port_pin_A6             (Port_PinType) 6
#define Port_pin_A6_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_A6_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_A6_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_A6_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_A6_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_A6_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin A7                    *
 **************************************************************/
#define Port_pin_A7             (Port_PinType) 7
#define Port_pin_A7_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_A7_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_A7_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_A7_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_A7_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_A7_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin B0                     *
 **************************************************************/
#define Port_Bid                (Port_PortId) 1
#define Port_pin_B0             (Port_PinType) 0
#define Port_pin_B0_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_B0_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_B0_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_B0_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_B0_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_B0_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin B1                     *
 **************************************************************/
#define Port_pin_B1             (Port_PinType) 1
#define Port_pin_B1_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_B1_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_B1_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_B1_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_B1_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_B1_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin B2                     *
 **************************************************************/
#define Port_pin_B2             (Port_PinType) 2
#define Port_pin_B2_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_B2_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_B2_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_B2_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_B2_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_B2_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin B3                     *
 **************************************************************/
#define Port_pin_B3             (Port_PinType) 3
#define Port_pin_B3_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_B3_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_B3_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_B3_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_B3_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_B3_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin B4                     *
 **************************************************************/
#define Port_pin_B4             (Port_PinType) 4
#define Port_pin_B4_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_B4_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_B4_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_B4_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_B4_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_B4_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin B5                     *
 **************************************************************/
#define Port_pin_B5             (Port_PinType) 5
#define Port_pin_B5_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_B5_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_B5_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_B5_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_B5_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_B5_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin B6                     *
 **************************************************************/
#define Port_pin_B6             (Port_PinType) 6
#define Port_pin_B6_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_B6_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_B6_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_B6_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_B6_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_B6_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin B7                     *
 **************************************************************/
#define Port_pin_B7             (Port_PinType) 7
#define Port_pin_B7_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_B7_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_B7_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_B7_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_B7_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_B7_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin C4                     *
 **************************************************************/
#define Port_Cid                (Port_PortId) 2
#define Port_pin_C4             (Port_PinType) 4
#define Port_pin_C4_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_C4_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_C4_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_C4_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_C4_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_C4_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin C5                     *
 **************************************************************/
#define Port_pin_C5             (Port_PinType) 5
#define Port_pin_C5_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_C5_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_C5_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_C5_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_C5_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_C5_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin C6                     *
 **************************************************************/
#define Port_pin_C6             (Port_PinType) 6
#define Port_pin_C6_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_C6_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_C6_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_C6_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_C6_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_C6_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin C7                     *
 **************************************************************/
#define Port_pin_C7             (Port_PinType) 7
#define Port_pin_C7_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_C7_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_C7_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_C7_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_C7_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_C7_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin D0                     *
 **************************************************************/
#define Port_Did                (Port_PortId) 3
#define Port_pin_D0             (Port_PinType) 0
#define Port_pin_D0_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_D0_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_D0_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_D0_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_D0_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_D0_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin D1                     *
 **************************************************************/
#define Port_pin_D1             (Port_PinType) 1
#define Port_pin_D1_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_D1_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_D1_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_D1_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_D1_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_D1_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin D2                     *
 **************************************************************/
#define Port_pin_D2             (Port_PinType) 2
#define Port_pin_D2_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_D2_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_D2_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_D2_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_D2_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_D2_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin D3                     *
 **************************************************************/
#define Port_pin_D3             (Port_PinType) 3
#define Port_pin_D3_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_D3_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_D3_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_D3_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_D3_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_D3_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin D4                     *
 **************************************************************/
#define Port_pin_D4             (Port_PinType) 4
#define Port_pin_D4_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_D4_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_D4_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_D4_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_D4_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_D4_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin D5                     *
 **************************************************************/
#define Port_pin_D5             (Port_PinType) 5
#define Port_pin_D5_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_D5_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_D5_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_D5_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_D5_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_D5_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin D6                     *
 **************************************************************/
#define Port_pin_D6             (Port_PinType) 6
#define Port_pin_D6_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_D6_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_D6_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_D6_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_D6_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_D6_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin D7                     *
 **************************************************************/
#define Port_pin_D7             (Port_PinType) 7
#define Port_pin_D7_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_D7_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_D7_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_D7_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_D7_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_D7_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin E0                     *
 **************************************************************/
#define Port_Eid                (Port_PortId) 4
#define Port_pin_E0             (Port_PinType) 0
#define Port_pin_E0_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_E0_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_E0_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_E0_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_E0_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_E0_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin E1                     *
 **************************************************************/
#define Port_pin_E1             (Port_PinType) 1
#define Port_pin_E1_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_E1_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_E1_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_E1_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_E1_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_E1_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin E2                     *
 **************************************************************/
#define Port_pin_E2             (Port_PinType) 2
#define Port_pin_E2_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_E2_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_E2_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_E2_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_E2_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_E2_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin E3                     *
 **************************************************************/
#define Port_pin_E3             (Port_PinType) 3
#define Port_pin_E3_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_E3_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_E3_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_E3_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_E3_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_E3_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin E4                     *
 **************************************************************/
#define Port_pin_E4             (Port_PinType) 4
#define Port_pin_E4_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_E4_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_E4_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_E4_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_E4_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_E4_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin E5                     *
 **************************************************************/
#define Port_pin_E             (Port_PinType) 5
#define Port_pin_E5_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_E5_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_E5_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_E5_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_E5_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_E5_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin F0                     *
 **************************************************************/
#define Port_Fid                (Port_PortId) 5
#define Port_pin_F0             (Port_PinType) 0
#define Port_pin_F0_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_F0_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_F0_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_F0_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_F0_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_F0_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin F1                     *
 **************************************************************/
#define Port_pin_F1             (Port_PinType) 1
#define Port_pin_F1_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_F1_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_F1_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_F1_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_F1_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_F1_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin F2                     *
 **************************************************************/
#define Port_pin_F2             (Port_PinType) 2
#define Port_pin_F2_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_F2_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_F2_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_F2_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_F2_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_F2_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin F3                     *
 **************************************************************/
#define Port_pin_F3             (Port_PinType) 3
#define Port_pin_F3_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_F3_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_F3_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_F3_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_F3_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_F3_init_value  (Port_PinLevelInit) Port_pin_init_value_default
/**************************************************************
 *                      Congifg for Pin F4                     *
 **************************************************************/
#define Port_pin_F4             (Port_PinType) 4
#define Port_pin_F4_dir         (Port_PinDirectionType) Port_pin_dir_default
#define Port_pin_F4_mode        (Port_PinModeType) Port_pin_mode_default
#define Port_pin_F4_dir_change  (Port_DirectionChangeType) Port_pin_dir_change_default
#define Port_pin_F4_mode_change (Port_ModeChangeType)  Port_pin_mode_change_default
#define Port_pin_F4_resistor    (Port_InternalResistor) Port_pin_resistor_default
#define Port_pin_F4_init_value  (Port_PinLevelInit) Port_pin_init_value_default
#endif /* PORT_CFG_H */