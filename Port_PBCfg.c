/******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Karim Mohamed Amin
 ******************************************************************************/

#include "Port.h"

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

/* AUTOSAR Version checking between Dio_PBcfg.c and Dio.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected AUTOSAR version"
#endif

/* Software Version checking between Dio_PBcfg.c and Dio.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected Software version"
#endif

/* PB structure used with Port_Init API */
const Port_ConfigType Port_Configuration = {
    Port_Aid,Port_pin_A0,Port_pin_A0_dir,Port_pin_A0_mode,Port_pin_A0_dir_change,Port_pin_A0_mode_change,Port_pin_A0_resistor,Port_pin_A0_init_value,
    Port_Aid,Port_pin_A1,Port_pin_A1_dir,Port_pin_A1_mode,Port_pin_A1_dir_change,Port_pin_A1_mode_change,Port_pin_A1_resistor,Port_pin_A1_init_value,
    Port_Aid,Port_pin_A2,Port_pin_A2_dir,Port_pin_A2_mode,Port_pin_A2_dir_change,Port_pin_A2_mode_change,Port_pin_A2_resistor,Port_pin_A2_init_value,
    Port_Aid,Port_pin_A3,Port_pin_A3_dir,Port_pin_A3_mode,Port_pin_A3_dir_change,Port_pin_A3_mode_change,Port_pin_A3_resistor,Port_pin_A3_init_value,
    Port_Aid,Port_pin_A4,Port_pin_A4_dir,Port_pin_A4_mode,Port_pin_A4_dir_change,Port_pin_A4_mode_change,Port_pin_A4_resistor,Port_pin_A4_init_value,
    Port_Aid,Port_pin_A5,Port_pin_A5_dir,Port_pin_A5_mode,Port_pin_A5_dir_change,Port_pin_A5_mode_change,Port_pin_A5_resistor,Port_pin_A5_init_value,
    Port_Aid,Port_pin_A6,Port_pin_A6_dir,Port_pin_A6_mode,Port_pin_A6_dir_change,Port_pin_A6_mode_change,Port_pin_A6_resistor,Port_pin_A6_init_value,
    Port_Aid,Port_pin_A7,Port_pin_A7_dir,Port_pin_A7_mode,Port_pin_A7_dir_change,Port_pin_A7_mode_change,Port_pin_A7_resistor,Port_pin_A7_init_value,
    
    Port_Bid,Port_pin_B0,Port_pin_B0_dir,Port_pin_B0_mode,Port_pin_B0_dir_change,Port_pin_B0_mode_change,Port_pin_B0_resistor,Port_pin_B0_init_value,
    Port_Bid,Port_pin_B1,Port_pin_B1_dir,Port_pin_B1_mode,Port_pin_B1_dir_change,Port_pin_B1_mode_change,Port_pin_B1_resistor,Port_pin_B1_init_value,
    Port_Bid,Port_pin_B2,Port_pin_B2_dir,Port_pin_B2_mode,Port_pin_B2_dir_change,Port_pin_B2_mode_change,Port_pin_B2_resistor,Port_pin_B2_init_value,
    Port_Bid,Port_pin_B3,Port_pin_B3_dir,Port_pin_B3_mode,Port_pin_B3_dir_change,Port_pin_B3_mode_change,Port_pin_B3_resistor,Port_pin_B3_init_value,
    Port_Bid,Port_pin_B4,Port_pin_B4_dir,Port_pin_B4_mode,Port_pin_B4_dir_change,Port_pin_B4_mode_change,Port_pin_B4_resistor,Port_pin_B4_init_value,
    Port_Bid,Port_pin_B5,Port_pin_B5_dir,Port_pin_B5_mode,Port_pin_B5_dir_change,Port_pin_B5_mode_change,Port_pin_B5_resistor,Port_pin_B5_init_value,
    Port_Bid,Port_pin_B6,Port_pin_B6_dir,Port_pin_B6_mode,Port_pin_B6_dir_change,Port_pin_B6_mode_change,Port_pin_B6_resistor,Port_pin_B6_init_value,
    Port_Bid,Port_pin_B7,Port_pin_B7_dir,Port_pin_B7_mode,Port_pin_B7_dir_change,Port_pin_B7_mode_change,Port_pin_B7_resistor,Port_pin_B7_init_value,
       
    Port_Cid,Port_pin_C0,Port_pin_C0_dir,Port_pin_C0_mode,Port_pin_C0_dir_change,Port_pin_C0_mode_change,Port_pin_C0_resistor,Port_pin_C0_init_value,
    Port_Cid,Port_pin_C1,Port_pin_C1_dir,Port_pin_C1_mode,Port_pin_C1_dir_change,Port_pin_C1_mode_change,Port_pin_C1_resistor,Port_pin_C1_init_value,
    Port_Cid,Port_pin_C2,Port_pin_C2_dir,Port_pin_C2_mode,Port_pin_C2_dir_change,Port_pin_C2_mode_change,Port_pin_C2_resistor,Port_pin_C2_init_value,
    Port_Cid,Port_pin_C3,Port_pin_C3_dir,Port_pin_C3_mode,Port_pin_C3_dir_change,Port_pin_C3_mode_change,Port_pin_C3_resistor,Port_pin_C3_init_value,
    Port_Cid,Port_pin_C4,Port_pin_C4_dir,Port_pin_C4_mode,Port_pin_C4_dir_change,Port_pin_C4_mode_change,Port_pin_C4_resistor,Port_pin_C4_init_value,
    Port_Cid,Port_pin_C5,Port_pin_C5_dir,Port_pin_C5_mode,Port_pin_C5_dir_change,Port_pin_C5_mode_change,Port_pin_C5_resistor,Port_pin_C5_init_value,
    Port_Cid,Port_pin_C6,Port_pin_C6_dir,Port_pin_C6_mode,Port_pin_C6_dir_change,Port_pin_C6_mode_change,Port_pin_C6_resistor,Port_pin_C6_init_value,
    Port_Cid,Port_pin_C7,Port_pin_C7_dir,Port_pin_C7_mode,Port_pin_C7_dir_change,Port_pin_C7_mode_change,Port_pin_C7_resistor,Port_pin_C7_init_value,
    
    Port_Did,Port_pin_D0,Port_pin_D0_dir,Port_pin_D0_mode,Port_pin_D0_dir_change,Port_pin_D0_mode_change,Port_pin_D0_resistor,Port_pin_D0_init_value,
    Port_Did,Port_pin_D1,Port_pin_D1_dir,Port_pin_D1_mode,Port_pin_D1_dir_change,Port_pin_D1_mode_change,Port_pin_D1_resistor,Port_pin_D1_init_value,
    Port_Did,Port_pin_D2,Port_pin_D2_dir,Port_pin_D2_mode,Port_pin_D2_dir_change,Port_pin_D2_mode_change,Port_pin_D2_resistor,Port_pin_D2_init_value,
    Port_Did,Port_pin_D3,Port_pin_D3_dir,Port_pin_D3_mode,Port_pin_D3_dir_change,Port_pin_D3_mode_change,Port_pin_D3_resistor,Port_pin_D3_init_value,
    Port_Did,Port_pin_D4,Port_pin_D4_dir,Port_pin_D4_mode,Port_pin_D4_dir_change,Port_pin_D4_mode_change,Port_pin_D4_resistor,Port_pin_D4_init_value,
    Port_Did,Port_pin_D5,Port_pin_D5_dir,Port_pin_D5_mode,Port_pin_D5_dir_change,Port_pin_D5_mode_change,Port_pin_D5_resistor,Port_pin_D5_init_value,
    Port_Did,Port_pin_D6,Port_pin_D6_dir,Port_pin_D6_mode,Port_pin_D6_dir_change,Port_pin_D6_mode_change,Port_pin_D6_resistor,Port_pin_D6_init_value,
    Port_Did,Port_pin_D7,Port_pin_D7_dir,Port_pin_D7_mode,Port_pin_D7_dir_change,Port_pin_D7_mode_change,Port_pin_D7_resistor,Port_pin_D7_init_value,
    
    Port_Eid,Port_pin_E0,Port_pin_E0_dir,Port_pin_E0_mode,Port_pin_E0_dir_change,Port_pin_E0_mode_change,Port_pin_E0_resistor,Port_pin_E0_init_value,
    Port_Eid,Port_pin_E1,Port_pin_E1_dir,Port_pin_E1_mode,Port_pin_E1_dir_change,Port_pin_E1_mode_change,Port_pin_E1_resistor,Port_pin_E1_init_value,
    Port_Eid,Port_pin_E2,Port_pin_E2_dir,Port_pin_E2_mode,Port_pin_E2_dir_change,Port_pin_E2_mode_change,Port_pin_E2_resistor,Port_pin_E2_init_value,
    Port_Eid,Port_pin_E3,Port_pin_E3_dir,Port_pin_E3_mode,Port_pin_E3_dir_change,Port_pin_E3_mode_change,Port_pin_E3_resistor,Port_pin_E3_init_value,
    Port_Eid,Port_pin_E4,Port_pin_E4_dir,Port_pin_E4_mode,Port_pin_E4_dir_change,Port_pin_E4_mode_change,Port_pin_E4_resistor,Port_pin_E4_init_value,
    Port_Eid,Port_pin_E5,Port_pin_E5_dir,Port_pin_E5_mode,Port_pin_E5_dir_change,Port_pin_E5_mode_change,Port_pin_E5_resistor,Port_pin_E5_init_value,
    
    Port_Fid,Port_pin_F0,Port_pin_F0_dir,Port_pin_F0_mode,Port_pin_F0_dir_change,Port_pin_F0_mode_change,Port_pin_F0_resistor,Port_pin_F0_init_value,
    Port_Fid,Port_pin_F1,Port_pin_F1_dir,Port_pin_F1_mode,Port_pin_F1_dir_change,Port_pin_F1_mode_change,Port_pin_F1_resistor,Port_pin_F1_init_value,
    Port_Fid,Port_pin_F2,Port_pin_F2_dir,Port_pin_F2_mode,Port_pin_F2_dir_change,Port_pin_F2_mode_change,Port_pin_F2_resistor,Port_pin_F2_init_value,
    Port_Fid,Port_pin_F3,Port_pin_F3_dir,Port_pin_F3_mode,Port_pin_F3_dir_change,Port_pin_F3_mode_change,Port_pin_F3_resistor,Port_pin_F3_init_value,
    Port_Fid,Port_pin_F4,Port_pin_F4_dir,Port_pin_F4_mode,Port_pin_F4_dir_change,Port_pin_F4_mode_change,Port_pin_F4_resistor,Port_pin_F4_init_value,
};