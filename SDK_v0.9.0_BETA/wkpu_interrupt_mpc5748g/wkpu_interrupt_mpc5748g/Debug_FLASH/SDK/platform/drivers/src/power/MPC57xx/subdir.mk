################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"/opt/NXP/S32DS_Power_v2017.R1/S32DS/S32_SDK_MPC574xx_BETA_0.9.0/platform/drivers/src/power/MPC57xx/power_manager_MPC57xx.c" \
"/opt/NXP/S32DS_Power_v2017.R1/S32DS/S32_SDK_MPC574xx_BETA_0.9.0/platform/drivers/src/power/MPC57xx/power_mc_me_hw_access.c" 

C_SRCS += \
/opt/NXP/S32DS_Power_v2017.R1/S32DS/S32_SDK_MPC574xx_BETA_0.9.0/platform/drivers/src/power/MPC57xx/power_manager_MPC57xx.c \
/opt/NXP/S32DS_Power_v2017.R1/S32DS/S32_SDK_MPC574xx_BETA_0.9.0/platform/drivers/src/power/MPC57xx/power_mc_me_hw_access.c 

OBJS_OS_FORMAT += \
./SDK/platform/drivers/src/power/MPC57xx/power_manager_MPC57xx.o \
./SDK/platform/drivers/src/power/MPC57xx/power_mc_me_hw_access.o 

C_DEPS_QUOTED += \
"./SDK/platform/drivers/src/power/MPC57xx/power_manager_MPC57xx.d" \
"./SDK/platform/drivers/src/power/MPC57xx/power_mc_me_hw_access.d" 

OBJS += \
./SDK/platform/drivers/src/power/MPC57xx/power_manager_MPC57xx.o \
./SDK/platform/drivers/src/power/MPC57xx/power_mc_me_hw_access.o 

OBJS_QUOTED += \
"./SDK/platform/drivers/src/power/MPC57xx/power_manager_MPC57xx.o" \
"./SDK/platform/drivers/src/power/MPC57xx/power_mc_me_hw_access.o" 

C_DEPS += \
./SDK/platform/drivers/src/power/MPC57xx/power_manager_MPC57xx.d \
./SDK/platform/drivers/src/power/MPC57xx/power_mc_me_hw_access.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/drivers/src/power/MPC57xx/power_manager_MPC57xx.o: /opt/NXP/S32DS_Power_v2017.R1/S32DS/S32_SDK_MPC574xx_BETA_0.9.0/platform/drivers/src/power/MPC57xx/power_manager_MPC57xx.c
	@echo 'Building file: $<'
	@echo 'Executing target #17 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	powerpc-eabivle-gcc "@SDK/platform/drivers/src/power/MPC57xx/power_manager_MPC57xx.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "SDK/platform/drivers/src/power/MPC57xx/power_manager_MPC57xx.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

SDK/platform/drivers/src/power/MPC57xx/power_mc_me_hw_access.o: /opt/NXP/S32DS_Power_v2017.R1/S32DS/S32_SDK_MPC574xx_BETA_0.9.0/platform/drivers/src/power/MPC57xx/power_mc_me_hw_access.c
	@echo 'Building file: $<'
	@echo 'Executing target #18 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	powerpc-eabivle-gcc "@SDK/platform/drivers/src/power/MPC57xx/power_mc_me_hw_access.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "SDK/platform/drivers/src/power/MPC57xx/power_mc_me_hw_access.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


