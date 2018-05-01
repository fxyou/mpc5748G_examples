/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : ic_pal1.h
**     Project     : ic_pal_mpc5748g
**     Processor   : MPC5748G_176
**     Component   : ic_pal
**     Version     : Component SDK_MPC574x_04, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_MPC574x_04
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-05-01, 00:34, # CodeGen: 0
**     Contents    :
**         IC_Init           - status_t IC_Init(uint32_t instance, const ic_config_t * configPtr);
**         IC_Deinit         - status_t IC_Deinit(uint32_t instance);
**         IC_StartChannel   - void IC_StartChannel(uint32_t instance, uint8_t channel);
**         IC_StopChannel    - void IC_StopChannel(uint32_t instance, uint8_t channel);
**         IC_SetChannelMode - status_t IC_SetChannelMode(uint32_t instance, uint8_t channel,...
**         IC_GetMeasurement - uint16_t IC_GetMeasurement(uint32_t instance, uint8_t channel);
**
**     Copyright 1997 - 2015 Freescale Semiconductor, Inc.
**     Copyright 2016-2017 NXP
**     All Rights Reserved.
**     
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file ic_pal1.h
** @version 01.00
*/
/*!
**  @addtogroup ic_pal1_module ic_pal1 module documentation
**  @{
*/
#ifndef ic_pal1_H
#define ic_pal1_H

/* MODULE ic_pal1. */

/* Include inherited beans */
#include "clockMan1.h"
#include "ic_pal.h"
#include "Cpu.h"




#endif
/* ifndef ic_pal1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the NXP C55 series of microcontrollers.
**
** ###################################################################
*/

/*! @brief PAL instance information */
extern const ic_instance_t ic_pal1_instance;

/* Channels configuration structure for ic_pal1 input capture channels */
extern ic_input_ch_param_t ic_pal1_ChnConfig[1];

/* Channels configuration structure for ic_pal1 input capture */
extern extension_emios_for_ic_t ic_pal1_emiosExtension;
/* The extension structure for the channel configuration over EMIOS*/
extern channel_extension_emios_for_ic_t ic_pal1_emiosChnExtension0;

/* Global configuration of ic_pal1 */
extern ic_config_t ic_pal1_InitConfig;

/*! @brief Callback function of channel configuration 0 */
extern void ic_pal1_channel_callBack0(ic_event_t event, void * userData);
