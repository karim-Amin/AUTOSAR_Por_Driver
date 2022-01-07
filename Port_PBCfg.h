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
 *                       External Variables                                    *
 *******************************************************************************/

/* Extern PB structures to be used by Port and other modules */
extern const Port_ConfigType Port_Configuration;

#endif  /* PORT_PB_CFG */