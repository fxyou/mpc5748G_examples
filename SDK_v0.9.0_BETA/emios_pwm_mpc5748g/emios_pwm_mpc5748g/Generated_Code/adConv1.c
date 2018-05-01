/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : adConv1.c
**     Project     : emios_pwm_mpc5748g
**     Processor   : MPC5748G_176
**     Component   : adc_c55
**     Version     : Component C55_Repository, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_MPC574x_04
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-04-30, 18:04, # CodeGen: 0
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
** @file adConv1.c
** @version 01.00
*/
/*!
**  @addtogroup adConv1_module adConv1 module documentation
**  @{
*/

/* MODULE adConv1. */

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variables will be used in other source files, with the same initialized values.
 */

#include "adConv1.h"
#include <stddef.h>

/*! adConv1 configuration structure */
static uint8_t adConv1_ChainCfg0_ArrNorm[] =
{
};

static uint8_t adConv1_ChainCfg0_ArrInj[] =
{
};

const adc_chain_config_t adConv1_ChainCfg0 =
{
    .numChansNormal = 0u,
    .chanArrayNormal = adConv1_ChainCfg0_ArrNorm,
    .numChansInjected = 0u,
    .chanArrayInjected = adConv1_ChainCfg0_ArrInj,
    .interruptMaskInternal = 0u,
    .interruptMaskPrecision = 0u,
    .interruptMaskExternal = 0u,
};

const adc_conv_config_t adConv1_ConvCfg0 = {
  .convMode = ADC_CONV_MODE_ONESHOT,
  .clkSelect = ADC_CLK_HALF_BUS,
  .refSelect = ADC_REF_VREFH,
  .ctuMode = ADC_CTU_MODE_DISABLED,
  .injectedEdge = ADC_INJECTED_EDGE_DISABLED,
  .sampleTimeInternal = 20U,
  .sampleTimePrecision = 20U,
  .sampleTimeExternal = 20U,
  .autoClockOff = false,
  .overwriteEnable = false,
  .dataAlign = ADC_DATA_ALIGNED_RIGHT,
  .decodeDelay = 0U,
  .powerDownDelay = 0U,
};

/* END adConv1. */
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

