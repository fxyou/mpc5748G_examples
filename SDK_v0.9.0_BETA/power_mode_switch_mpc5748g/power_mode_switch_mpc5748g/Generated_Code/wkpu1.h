/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : wkpu1.h
**     Project     : power_mode_switch_mpc5748g
**     Processor   : MPC5748G_176
**     Component   : wkpu
**     Version     : Component SDK_MPC574x_04, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_MPC574x_04
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-05-01, 00:21, # CodeGen: 0
**     Contents    :
**         WKPU_DRV_InitNMI                   - status_t WKPU_DRV_InitNMI(uint32_t instance, uint8_t coreCnt, const...
**         WKPU_DRV_DeinitNMI                 - status_t WKPU_DRV_DeinitNMI(uint32_t instance);
**         WKPU_DRV_GetNMIDefaultConfig       - void WKPU_DRV_GetNMIDefaultConfig(wkpu_nmi_cfg_t * const pNmiConfig);
**         WKPU_DRV_ClearNMIFlag              - void WKPU_DRV_ClearNMIFlag(uint32_t instance, wkpu_core_t core,...
**         WKPU_DRV_InitInterrupt             - status_t WKPU_DRV_InitInterrupt(uint32_t instance, uint8_t channelCnt,const...
**         WKPU_DRV_DeinitInterrupt           - status_t WKPU_DRV_DeinitInterrupt(uint32_t instance);
**         WKPU_DRV_GetInterruptDefaultConfig - void WKPU_DRV_GetInterruptDefaultConfig(wkpu_interrupt_cfg_t * const...
**         WKPU_DRV_SetInterruptConfig        - void WKPU_DRV_SetInterruptConfig(uint32_t instance, const...
**         WKPU_DRV_ClearInterruptConfig      - void WKPU_DRV_ClearInterruptConfig(uint32_t instance, uint8_t hwChannel);
**         WKPU_DRV_SetInterruptNormalMode    - void WKPU_DRV_SetInterruptNormalMode(uint32_t instance, uint8_t hwChannel);
**         WKPU_DRV_SetInterruptSleepMode     - void WKPU_DRV_SetInterruptSleepMode(uint32_t instance, uint8_t hwChannel);
**         WKPU_DRV_SetInterruptEdgeEvent     - void WKPU_DRV_SetInterruptEdgeEvent(uint32_t instance, uint8_t hwChannel,...
**         WKPU_DRV_ClearInterruptFlag        - void WKPU_DRV_ClearInterruptFlag(uint32_t instance, uint8_t hwChannel);
**         WKPU_DRV_InitReset                 - status_t WKPU_DRV_InitReset(uint32_t instance, const wkpu_reset_cfg_t *...
**         WKPU_DRV_DeinitReset               - status_t WKPU_DRV_DeinitReset(uint32_t instance);
**         WKPU_DRV_GetResetDefaultConfig     - void WKPU_DRV_GetResetDefaultConfig(wkpu_reset_cfg_t * const pResetConfig);
**         WKPU_DRV_ClearResetFlag            - void WKPU_DRV_ClearResetFlag(uint32_t instance, wkpu_nmi_status_flag_t flag);
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
** @file wkpu1.h
** @version 01.00
*/
/*!
**  @addtogroup wkpu1_module wkpu1 module documentation
**  @{
*/
#ifndef wkpu1_H
#define wkpu1_H

/* MODULE wkpu1.
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.5, Global macro not referenced.
 * The global macro will be used in function call of the module.
 */

/* Include inherited beans */
#include "clockMan1.h"
#include "Cpu.h"


/*! @brief Device instance number */
#define INST_WKPU1 (0U)

  /*! @brief The number of configured channel(s) */
#define WKPU_CHANNEL_COUNT0 (3U)

/*! @brief The hardware channel */
#define WKPU_HW_CHANNEL0     (0U)
#define WKPU_HW_CHANNEL1     (1U)
#define WKPU_HW_CHANNEL2     (2U)
#define WKPU_HW_CHANNEL3     (3U)
#define WKPU_HW_CHANNEL4     (4U)
#define WKPU_HW_CHANNEL5     (5U)
#define WKPU_HW_CHANNEL6     (6U)
#define WKPU_HW_CHANNEL7     (7U)
#define WKPU_HW_CHANNEL8     (8U)
#define WKPU_HW_CHANNEL9     (9U)
#define WKPU_HW_CHANNEL10    (10U)
#define WKPU_HW_CHANNEL11    (11U)
#define WKPU_HW_CHANNEL12    (12U)
#define WKPU_HW_CHANNEL13    (13U)
#define WKPU_HW_CHANNEL14    (14U)
#define WKPU_HW_CHANNEL15    (15U)
#define WKPU_HW_CHANNEL16    (16U)
#define WKPU_HW_CHANNEL17    (17U)
#define WKPU_HW_CHANNEL18    (18U)
#define WKPU_HW_CHANNEL19    (19U)
#define WKPU_HW_CHANNEL20    (20U)
#define WKPU_HW_CHANNEL21    (21U)
#define WKPU_HW_CHANNEL22    (22U)
#define WKPU_HW_CHANNEL23    (23U)
#define WKPU_HW_CHANNEL24    (24U)
#define WKPU_HW_CHANNEL25    (25U)
#define WKPU_HW_CHANNEL26    (26U)
#define WKPU_HW_CHANNEL27    (27U)
#define WKPU_HW_CHANNEL28    (28U)
#define WKPU_HW_CHANNEL29    (29U)
#define WKPU_HW_CHANNEL30    (30U)
#define WKPU_HW_CHANNEL31    (31U)

  /*! @brief The number core */

/*! @brief Wakeup Interrupt configuration declaration */
extern const wkpu_interrupt_cfg_t wkpu1_InterruptCfg0[WKPU_CHANNEL_COUNT0];




#endif /* #ifndef wkpu1_H */
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
