/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : comparator1.c
**     Project     : cmp_dac_mpc5748g
**     Processor   : MPC5748G_176
**     Component   : cmp
**     Version     : Component SDK_MPC574x_04, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_MPC574x_04
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-04-30, 18:47, # CodeGen: 0
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
** @file comparator1.c
** @version 01.00
*/
/*!
**  @addtogroup comparator1_module comparator1 module documentation
**  @{
*/

/* MODULE comparator1. */

#include "comparator1.h"
/* MODULE comparator1.c
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 8.4, A compatible declaration shall be
 * visible when an object or function with external linkage is defined.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External could be made static.
 * Structure is defined for usage by application code.
 */

/*! comparator1 configuration structure */

/* END comparator1. */

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
    const cmp_module_t cmp_general_config =
    {
        {
            .dmaTriggerState        = false,
            .outputInterruptTrigger = CMP_BOTH_EDGES,
            .mode                   = CMP_CONTINUOUS,
            .filterSamplePeriod     = 0U,
            .filterSampleCount      = 0U,
            .powerMode              = CMP_HIGH_SPEED,
            .inverterState          = CMP_NORMAL,
            .outputSelect           = CMP_COUT,
            .pinState               = CMP_UNAVAILABLE,
            .hysteresisLevel        = CMP_LEVEL_HYS_2
        },

        {
            .positivePortMux        = CMP_MUX,
            .negativePortMux        = CMP_DAC,
            .positiveInputMux       = 0U,
            .negativeInputMux       = 0U
        },

        {
            .voltageReferenceSource = CMP_VIN1,
            .voltage                = 31U,
            .state                  = true,
            .fixRefInputMux         = false,
        },

        {
            .roundRobinState            = false,
            .roundRobinInterruptState   = false,
            .fixedPort                  = CMP_PLUS_FIXED,
            .fixedChannel               = 0U,
            .samples                    = 0U,
            /* Channel 0 is enabled for round robin check */
            /* Channel 1 is enabled for round robin check */
            /* Channel 2 is enabled for round robin check */
            /* Channel 3 is enabled for round robin check */
            /* Channel 4 is enabled for round robin check */
            /* Channel 5 is enabled for round robin check */
            /* Channel 6 is enabled for round robin check */
            /* Channel 7 is enabled for round robin check */
            .roundRobinChannelsState    = 255U,
            /* Initial comparison result for channel 0 is 1 */
            /* Initial comparison result for channel 1 is 1 */
            /* Initial comparison result for channel 2 is 1 */
            /* Initial comparison result for channel 3 is 1 */
            /* Initial comparison result for channel 4 is 1 */
            /* Initial comparison result for channel 5 is 1 */
            /* Initial comparison result for channel 6 is 1 */
            /* Initial comparison result for channel 7 is 1 */
            .programedState             = 255U
        }
    };
