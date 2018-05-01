/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : swt1.c
**     Project     : swt_interrupt_mpc5748g
**     Processor   : MPC5748G_176
**     Component   : swt
**     Version     : Component SDK_MPC574x_04, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_MPC574x_04
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-04-30, 21:04, # CodeGen: 0
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
** @file swt1.c
** @version 01.00
*/
/*!
**  @addtogroup swt1_module swt1 module documentation
**  @{
*/

/* MODULE swt1.
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variable will be used in other source file that user initialize
 * to use this module.
 */

#include "swt1.h"

/*! User configuration 0 */
const swt_user_config_t swt1_Config0 =
{
    .mapConfig       = 0xFFU,             /*!< Master Access Protection        */
    .invalidReset    = false,             /*!< Reset request on invalid access */
    .stop            = false,             /*!< Stop mode                       */
    .debug           = true,              /*!< Debug mode                      */
    .winEnable       = false,             /*!< window mode                     */
    .intEnable       = true,              /*!< Interrupt                       */
    .serviceMode     = SWT_FS_SEQ_MODE,   /*!< Servicing mode                  */
    .timeoutValue    = 128000U,           /*!< Timeout value                   */
    .windowValue     = 0U,                /*!< Window value                    */
    .initKey         = 0x00U,             /*!< Initial service key             */
    .lockConfig      = SWT_UNLOCK         /*!< Lock configuration              */
};


/* END swt1. */

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
