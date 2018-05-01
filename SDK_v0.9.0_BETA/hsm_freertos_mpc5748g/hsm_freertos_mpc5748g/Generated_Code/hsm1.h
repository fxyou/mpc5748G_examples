/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : hsm1.h
**     Project     : hsm_freertos_mpc5748g
**     Processor   : MPC5748G_176
**     Component   : hsm
**     Version     : Component SDK_MPC574x_04, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_MPC574x_04
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-05-01, 00:44, # CodeGen: 0
**     Contents    :
**         HSM_DRV_Init              - status_t HSM_DRV_Init(hsm_state_t * state);
**         HSM_DRV_Deinit            - status_t HSM_DRV_Deinit(void);
**         HSM_DRV_EncryptECB        - status_t HSM_DRV_EncryptECB(hsm_key_id_t keyId,const uint8_t *...
**         HSM_DRV_EncryptECBAsync   - status_t HSM_DRV_EncryptECBAsync(hsm_key_id_t keyId,const uint8_t *...
**         HSM_DRV_DecryptECB        - status_t HSM_DRV_DecryptECB(hsm_key_id_t keyId,const uint8_t *...
**         HSM_DRV_DecryptECBAsync   - status_t HSM_DRV_DecryptECBAsync(hsm_key_id_t keyId,const uint8_t *...
**         HSM_DRV_EncryptCBC        - status_t HSM_DRV_EncryptCBC(hsm_key_id_t keyId,const uint8_t *...
**         HSM_DRV_EncryptCBCAsync   - status_t HSM_DRV_EncryptCBCAsync(hsm_key_id_t keyId,const uint8_t *...
**         HSM_DRV_DecryptCBC        - status_t HSM_DRV_DecryptCBC(hsm_key_id_t keyId,const uint8_t *...
**         HSM_DRV_DecryptCBCAsync   - status_t HSM_DRV_DecryptCBCAsync(hsm_key_id_t keyId,const uint8_t *...
**         HSM_DRV_GenerateMAC       - status_t HSM_DRV_GenerateMAC(hsm_key_id_t keyId,const uint8_t * msg,uint32_t...
**         HSM_DRV_GenerateMACAsync  - status_t HSM_DRV_GenerateMACAsync(hsm_key_id_t keyId,const uint8_t *...
**         HSM_DRV_VerifyMAC         - status_t HSM_DRV_VerifyMAC(hsm_key_id_t keyId,const uint8_t * msg,uint32_t...
**         HSM_DRV_VerifyMACAsync    - status_t HSM_DRV_VerifyMACAsync(hsm_key_id_t keyId,const uint8_t *...
**         HSM_DRV_LoadKey           - status_t HSM_DRV_LoadKey(hsm_key_id_t keyId,const uint8_t * m1,const uint8_t...
**         HSM_DRV_LoadPlainKey      - status_t HSM_DRV_LoadPlainKey(const uint8_t * plainKey, uint32_t timeout);
**         HSM_DRV_ExportRAMKey      - status_t HSM_DRV_ExportRAMKey(uint8_t * m1,uint8_t * m2,uint8_t * m3,uint8_t...
**         HSM_DRV_InitRNG           - status_t HSM_DRV_InitRNG(uint32_t timeout);
**         HSM_DRV_ExtendSeed        - status_t HSM_DRV_ExtendSeed(const uint8_t * entropy, uint32_t timeout);
**         HSM_DRV_InstallCallback   - security_callback_t HSM_DRV_InstallCallback(security_callback_t...
**         HSM_DRV_GenerateRND       - status_t HSM_DRV_GenerateRND(uint8_t *rnd, uint32_t timeout);
**         HSM_DRV_GetID             - status_t HSM_DRV_GetID(const uint8_t * challenge,uint8_t * uid,uint8_t *...
**         HSM_DRV_GenerateTRND      - status_t HSM_DRV_GenerateTRND(uint8_t *trnd, uint32_t timeout);
**         HSM_DRV_SecureBoot        - status_t HSM_DRV_SecureBoot(uint32_t bootImageSize, const uint8_t...
**         HSM_DRV_BootFailure       - status_t HSM_DRV_BootFailure(uint32_t timeout);
**         HSM_DRV_BootOK            - status_t HSM_DRV_BootOK(uint32_t timeout);
**         HSM_DRV_DbgChal           - status_t HSM_DRV_DbgChal(uint8_t *challenge, uint32_t timeout);
**         HSM_DRV_DbgAuth           - status_t HSM_DRV_DbgAuth(const uint8_t *authorization, uint32_t timeout);
**         HSM_DRV_MPCompress        - status_t HSM_DRV_MPCompress(const uint8_t *msg, uint16_t msgLen, uint8_t...
**         HSM_DRV_GetAsyncCmdStatus - status_t HSM_DRV_GetAsyncCmdStatus(void);
**         HSM_DRV_CancelCommand     - status_t HSM_DRV_CancelCommand(void);
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
** @file hsm1.h
** @version 01.00
*/
/*!
**  @addtogroup hsm1_module hsm1 module documentation
**  @{
*/
#ifndef hsm1_H
#define hsm1_H
/* MODULE hsm1. */

/* Include inherited beans */
#include "Cpu.h"

/*! @brief Driver state structure which holds driver runtime data */
extern hsm_state_t hsm1_State;

#endif
/* ifndef hsm1_H */

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