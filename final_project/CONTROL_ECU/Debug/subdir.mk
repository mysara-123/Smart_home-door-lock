################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BUZZER.c \
../DC_Motor.c \
../PWM.c \
../TIMER.c \
../external_eeprom.c \
../gpio.c \
../lcd.c \
../main_control.c \
../twi.c \
../uart.c 

OBJS += \
./BUZZER.o \
./DC_Motor.o \
./PWM.o \
./TIMER.o \
./external_eeprom.o \
./gpio.o \
./lcd.o \
./main_control.o \
./twi.o \
./uart.o 

C_DEPS += \
./BUZZER.d \
./DC_Motor.d \
./PWM.d \
./TIMER.d \
./external_eeprom.d \
./gpio.d \
./lcd.d \
./main_control.d \
./twi.d \
./uart.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


