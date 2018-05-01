/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : rtcTimer1.h
**     Project     : rtc_alarm_mpc5748g
**     Processor   : MPC5748G_176
**     Component   : rtc_c55
**     Version     : Component SDK_MPC574x_04, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_MPC574x_04
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-05-01, 01:19, # CodeGen: 0
**     Contents    :
**         RTC_DRV_Init                       - void RTC_DRV_Init(uint32_t instance,rtc_state_t *const driverState,const...
**         RTC_DRV_Deinit                     - void RTC_DRV_Deinit(uint32_t instance);
**         RTC_DRV_GetDefaultConfig           - void RTC_DRV_GetDefaultConfig(rtc_init_config_t *const config);
**         RTC_DRV_StartCounter               - status_t RTC_DRV_StartCounter(uint32_t instance);
**         RTC_DRV_StopCounter                - status_t RTC_DRV_StopCounter(uint32_t instance);
**         RTC_DRV_SetTimeDate                - status_t RTC_DRV_SetTimeDate(uint32_t instance,const rtc_timedate_t *const...
**         RTC_DRV_GetTimeDate                - void RTC_DRV_GetTimeDate(uint32_t instance,rtc_timedate_t *const timeDate);
**         RTC_DRV_UpdateModuleFrequency      - void RTC_DRV_UpdateModuleFrequency(uint32_t instance);
**         RTC_DRV_GetInterruptFlag           - bool RTC_DRV_GetInterruptFlag(uint32_t instance,rtc_interrupt_flag_t flag);
**         RTC_DRV_ClearInterruptFlag         - void RTC_DRV_ClearInterruptFlag(uint32_t instance,rtc_interrupt_flag_t flag);
**         RTC_DRV_GetStatusFlag              - bool RTC_DRV_GetStatusFlag(uint32_t instance,rtc_status_flag_t flag);
**         RTC_DRV_ConfigureAlarm             - status_t RTC_DRV_ConfigureAlarm(uint32_t instance,rtc_alarm_config_t *const...
**         RTC_DRV_ConfigurePeriodicInterrupt - status_t RTC_DRV_ConfigurePeriodicInterrupt(uint32_t instance,uint32_t...
**         RTC_DRV_ConfigureComparatorTrigger - status_t RTC_DRV_ConfigureComparatorTrigger(uint32_t instance,uint32_t...
**         RTC_DRV_ConvertSecondsToTimeDate   - void RTC_DRV_ConvertSecondsToTimeDate(const uint32_t * seconds,rtc_timedate_t...
**         RTC_DRV_ConvertTimeDateToSeconds   - void RTC_DRV_ConvertTimeDateToSeconds(const rtc_timedate_t *const...
**         RTC_DRV_IsYearLeap                 - bool RTC_DRV_IsYearLeap(uint16_t year);
**         RTC_DRV_IsTimeDateCorrectFormat    - bool RTC_DRV_IsTimeDateCorrectFormat(const rtc_timedate_t *const timeDate);
**         RTC_DRV_IRQHandler                 - void RTC_DRV_IRQHandler(uint32_t instance);
**         RTC_DRV_IsSyncRTCVAL               - bool RTC_DRV_IsSyncRTCVAL(uint32_t instance);
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
** @file rtcTimer1.h
** @version 01.00
*/
/*!
**  @addtogroup rtcTimer1_module rtcTimer1 module documentation
**  @{
*/
#ifndef rtcTimer1_H
#define rtcTimer1_H
/*! MODULE rtcTimer1. */

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.5, global macro not referenced
 * There are global macros defined to be used by the integrator and another one used as include guard.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 8.5, object/function previously declared
 * The symbols are already declared since this file is included in Cpu.h, which is included here.
 * It is safe, because the file has include guards to prevent multiple declarations of the same object/function.
 */

/*! Include inherited beans */
#include "clockMan1.h"
#include "Cpu.h"
#include "rtc_c55_driver.h"

/*! @brief Device instance number */
#define RTCTIMER1 0UL


/*! rtcTimer1 instance init configuration */
extern const rtc_init_config_t                  rtcTimer1_Config0;
/*! rtcTimer1 start time and date */
extern const rtc_timedate_t rtcTimer1_StartTime0;

/*! rtcTimer1 State Structure declaration */
extern rtc_state_t rtcTimer1_State;

/*! rtcTimer1 Alarm configuration 0 */
extern rtc_alarm_config_t   rtcTimer1_AlarmConfig0;

#endif
/*! ifndef rtcTimer1_H */
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
