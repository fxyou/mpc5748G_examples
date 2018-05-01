/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : eMIOS_Pwm.c
**     Project     : ic_pal_mpc5748g
**     Processor   : MPC5748G_176
**     Component   : emios_pwm
**     Version     : Component SDK_MPC574x_04, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_MPC574x_04
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-05-01, 00:34, # CodeGen: 0
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
** @file eMIOS_Pwm.c
** @version 01.00
*/
/*!
**  @addtogroup eMIOS_Pwm_module eMIOS_Pwm module documentation
**  @{
*/

/* Module eMIOS_Pwm.
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 8.4, external symbol defined without a prior
 * declaration.
 * The symbols are declared in the driver header as external; the header is not included
 * by this file.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variable will be used in other source files in application code.
 */

#include "eMIOS_Pwm.h"



/* eMIOS PWM mode configuration structure */
/* eMIOS PWM mode configuration structure for eMIOS_Pwm_PWMChnConfig0 */
emios_pwm_param_t eMIOS_Pwm_PWMChnConfig0 =
{
    EMIOS_MODE_OPWMT,
    EMIOS_CLOCK_DIVID_BY_1, /*!< Internal prescaler value */
    true, /*!< Internal prescaler is enabled */
    EMIOS_NEGATIVE_PULSE, /*!< Output active value, active low or high level */
    10000UL, /*!< Period count */
    200UL, /*!< Duty cycle count */
    EMIOS_BUS_SEL_BCDE, /*!< Counter bus selected */
    1UL, /*!< Ideal duty cycle value using to compare with the selected time base */
    0UL, /*!< The dead time value and is compared against the internal counter */
    0UL /*!< Trigger Event placement */
};

/* END eMIOS_Pwm. */

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
