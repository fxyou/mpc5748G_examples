################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"/opt/NXP/S32DS_Power_v2017.R1/S32DS/S32_SDK_MPC574xx_BETA_0.9.0/middleware/sdhc/usdhc/usdhc_impl.c" 

C_SRCS += \
/opt/NXP/S32DS_Power_v2017.R1/S32DS/S32_SDK_MPC574xx_BETA_0.9.0/middleware/sdhc/usdhc/usdhc_impl.c 

OBJS_OS_FORMAT += \
./SDK/middleware/sdhc/usdhc/usdhc_impl.o 

C_DEPS_QUOTED += \
"./SDK/middleware/sdhc/usdhc/usdhc_impl.d" 

OBJS += \
./SDK/middleware/sdhc/usdhc/usdhc_impl.o 

OBJS_QUOTED += \
"./SDK/middleware/sdhc/usdhc/usdhc_impl.o" 

C_DEPS += \
./SDK/middleware/sdhc/usdhc/usdhc_impl.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/middleware/sdhc/usdhc/usdhc_impl.o: /opt/NXP/S32DS_Power_v2017.R1/S32DS/S32_SDK_MPC574xx_BETA_0.9.0/middleware/sdhc/usdhc/usdhc_impl.c
	@echo 'Building file: $<'
	@echo 'Executing target #17 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	powerpc-eabivle-gcc "@SDK/middleware/sdhc/usdhc/usdhc_impl.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "SDK/middleware/sdhc/usdhc/usdhc_impl.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


