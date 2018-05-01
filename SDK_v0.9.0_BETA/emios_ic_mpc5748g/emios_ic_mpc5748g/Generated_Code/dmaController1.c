/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : dmaController1.c
**     Project     : emios_ic_mpc5748g
**     Processor   : MPC5748G_176
**     Component   : edma
**     Version     : Component SDK_MPC574x_04, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_MPC574x_04
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-04-30, 19:57, # CodeGen: 0
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
** @file dmaController1.c
** @version 01.00
*/
/*!
**  @addtogroup dmaController1_module dmaController1 module documentation
**  @{
*/

/* dmaController1. */

/* MODULE dmaController1.
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variables will be used in other source files that user initialize
 * to use this module.
 */

#include "dmaController1.h"

edma_state_t dmaController1_State;

edma_chn_state_t dmaController1Chn0_State;

edma_chn_state_t * const edmaChnStateArray[] = {
    &dmaController1Chn0_State
};

edma_channel_config_t dmaController1Chn0_Config = {
    .channelPriority = EDMA_CHN_DEFAULT_PRIORITY,
    .virtChnConfig = EDMA_CHN0_NUMBER,
    .source = EDMA_REQ_DISABLED_MUX0,
    .callback = NULL,
    .callbackParam = NULL
};

const edma_channel_config_t * const edmaChnConfigArray[] = {
    &dmaController1Chn0_Config
};

const edma_user_config_t dmaController1_InitConfig0 = {
  .chnArbitration = EDMA_ARBITRATION_FIXED_PRIORITY,
  .groupArbitration = EDMA_ARBITRATION_FIXED_PRIORITY,
  .groupPriority = EDMA_GRP0_PRIO_LOW_GRP1_PRIO_HIGH,
  .haltOnError = false,
};


/* END dmaController1. */

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
