################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CalculatorImpl.cpp \
../src/DigitsImpl.cpp \
../src/PocketCalcImpl.cpp 

OBJS += \
./src/CalculatorImpl.o \
./src/DigitsImpl.o \
./src/PocketCalcImpl.o 

CPP_DEPS += \
./src/CalculatorImpl.d \
./src/DigitsImpl.d \
./src/PocketCalcImpl.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1y -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


