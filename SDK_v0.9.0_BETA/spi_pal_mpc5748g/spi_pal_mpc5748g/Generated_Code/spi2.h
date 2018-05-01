/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : spi2.h
**     Project     : spi_pal_mpc5748g
**     Processor   : MPC5748G_176
**     Component   : spi_pal
**     Version     : Component SDK_MPC574x_04, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_MPC574x_04
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-04-30, 21:00, # CodeGen: 0
**     Contents    :
**         SPI_MasterInit             - status_t SPI_MasterInit(spi_instance_t instance,spi_master_t * config);
**         SPI_SlaveInit              - status_t SPI_SlaveInit(spi_instance_t instance,spi_slave_t * config);
**         SPI_SetSS                  - status_t SPI_SetSS(spi_instance_t instance,uint8_t ss);
**         SPI_MasterTransfer         - status_t SPI_MasterTransfer(spi_instance_t instance,void * txBuffer,void *...
**         SPI_MasterTransferBlocking - status_t SPI_MasterTransferBlocking(spi_instance_t instance,void *...
**         SPI_SlaveTransfer          - status_t SPI_SlaveTransfer(spi_instance_t instance,void * txBuffer,void *...
**         SPI_SlaveTransferBlocking  - status_t SPI_SlaveTransferBlocking(spi_instance_t instance,void *...
**         SPI_GetStatus              - status_t SPI_GetStatus(spi_instance_t instance);
**         SPI_GetDefaultMasterConfig - status_t SPI_GetDefaultMasterConfig(spi_master_t * config);
**         SPI_GetDefaultSlaveConfig  - status_t SPI_GetDefaultSlaveConfig(spi_slave_t * config);
**         SPI_MasterDeinit           - status_t SPI_MasterDeinit(spi_instance_t instance);
**         SPI_SlaveDeinit            - status_t SPI_SlaveDeinit(spi_instance_t instance);
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
** @file spi2.h
** @version 01.00
*/
/*!
**  @addtogroup spi2_module spi2 module documentation
**  @{
*/
#ifndef spi2_H
#define spi2_H

/* MODULE spi2. */
/* Include inherited beans */
#include "clockMan1.h"
#include "dmaController1.h"
#include "spi_pal.h"
#include "Cpu.h"
/*! @brief SPI_PAL instance */
extern spi_instance_t spi2Instance;

/*! @brief Master module configurations */
/*! @brief Slave module configurations */
extern const spi_slave_t SlaveConfig0;
/*! @brief Define external callbacks for slave devices */
/*! @brief Define external callbacks for master devices */


#endif
/* ifndef __spi2_H */
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

