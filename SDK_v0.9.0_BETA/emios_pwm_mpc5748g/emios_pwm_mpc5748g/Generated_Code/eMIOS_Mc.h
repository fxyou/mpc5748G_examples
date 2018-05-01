/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : eMIOS_Mc.h
**     Project     : emios_pwm_mpc5748g
**     Processor   : MPC5748G_176
**     Component   : emios_mc
**     Version     : Component SDK_MPC574x_04, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_MPC574x_04
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-04-30, 18:04, # CodeGen: 0
**     Contents    :
**         EMIOS_DRV_InitGlobal                    - void EMIOS_DRV_InitGlobal(uint8_t emiosGroup, emios_common_param_t...
**         EMIOS_DRV_EnableGlobalEmios             - void EMIOS_DRV_EnableGlobalEmios(uint8_t emiosGroup);
**         EMIOS_DRV_DisableGlobalEmios            - void EMIOS_DRV_DisableGlobalEmios(uint8_t emiosGroup);
**         EMIOS_DRV_EnterLowPowerMode             - void EMIOS_DRV_EnterLowPowerMode(uint8_t emiosGroup);
**         EMIOS_DRV_EscLowPowerMode               - void EMIOS_DRV_EscLowPowerMode(uint8_t emiosGroup);
**         EMIOS_DRV_DisableOutputUpdate           - void EMIOS_DRV_DisableOutputUpdate(uint8_t emiosGroup, uint8_t channel);
**         EMIOS_DRV_EnableAChOutputUpdate         - void EMIOS_DRV_EnableAChOutputUpdate(uint8_t emiosGroup, uint8_t channel);
**         EMIOS_DRV_EnableAllChOutputUpdate       - void EMIOS_DRV_EnableAllChOutputUpdate(uint8_t emiosGroup);
**         EMIOS_DRV_ChannelDisableClk             - void EMIOS_DRV_ChannelDisableClk(uint8_t emiosGroup, uint8_t channel);
**         EMIOS_DRV_ChannelEnableClk              - void EMIOS_DRV_ChannelEnableClk(uint8_t emiosGroup, uint8_t channel);
**         EMIOS_DRV_EnableAllChannelClk           - void EMIOS_DRV_EnableAllChannelClk(uint8_t emiosGroup);
**         EMIOS_DRV_ChannelSetupOutputDisable     - void EMIOS_DRV_ChannelSetupOutputDisable(uint8_t emiosGroup, uint8_t channel,...
**         EMIOS_DRV_ChannelEnableDMARequest       - void EMIOS_DRV_ChannelEnableDMARequest(uint8_t emiosGroup, uint8_t channel);
**         EMIOS_DRV_ChannelEnableInterruptRequest - void EMIOS_DRV_ChannelEnableInterruptRequest(uint8_t emiosGroup, uint8_t...
**         EMIOS_DRV_ChannelDisableIsrRequest      - void EMIOS_DRV_ChannelDisableIsrRequest(uint8_t emiosGroup, uint8_t channel);
**         EMIOS_DRV_ChannelEnableIsrRequest       - void EMIOS_DRV_ChannelEnableIsrRequest(uint8_t emiosGroup, uint8_t channel);
**         EMIOS_DRV_ReadInputPinState             - bool EMIOS_DRV_ReadInputPinState(uint8_t emiosGroup, uint8_t channel);
**         EMIOS_DRV_ReadOutputPinState            - bool EMIOS_DRV_ReadOutputPinState(uint8_t emiosGroup, uint8_t channel);
**         EMIOS_DRV_DeInitChannel                 - void EMIOS_DRV_DeInitChannel(uint8_t emiosGroup, uint8_t channel);
**         EMIOS_DRV_MC_InitCounterMode            - status_t EMIOS_DRV_MC_InitCounterMode(uint8_t emiosGroup, uint8_t channel,...
**         EMIOS_DRV_MC_SetCounterPeriod           - status_t EMIOS_DRV_MC_SetCounterPeriod(uint8_t emiosGroup, uint8_t channel,...
**         EMIOS_DRV_MC_GetCounterPeriod           - uint32_t EMIOS_DRV_MC_GetCounterPeriod(uint8_t emiosGroup, uint8_t channel);
**         EMIOS_DRV_MC_CounterRead                - uint32_t EMIOS_DRV_MC_CounterRead(uint8_t emiosGroup, uint8_t channel);
**         EMIOS_DRV_MC_CounterStart               - void EMIOS_DRV_MC_CounterStart(uint8_t emiosGroup, uint8_t channel);
**         EMIOS_DRV_MC_CounterStop                - void EMIOS_DRV_MC_CounterStop(uint8_t emiosGroup, uint8_t channel);
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
** @file eMIOS_Mc.h
** @version 01.00
*/
/*!
**  @addtogroup eMIOS_Mc_module eMIOS_Mc module documentation
**  @{
*/
#ifndef eMIOS_Mc_H
#define eMIOS_Mc_H

/* MODULE eMIOS_Mc. */

/*!
 * @file eMIOS_Mc.h
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.5, global macro not referenced
 * This macro is used by user.
 */

#include "emios_common.h"
#include "emios_mc_driver.h"
#include "Cpu.h"

/*! @brief Device instance number */
#define INST_EMIOS_MC 0U


/* ifndef eMIOS_Mc_H */
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
/* eMIOS global configuration structure for eMIOS_0 */
extern emios_common_param_t eMIOS_Mc_InitConfig0;

/* eMIOS counter mode configuration structure for eMIOS_0 */
extern emios_mc_mode_param_t eMIOS_Mc_CntChnConfig0;
#endif
