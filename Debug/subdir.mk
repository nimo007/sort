################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../bin_insert_sort.c \
../bubble.c \
../main.c \
../merge.c \
../quick.c \
../shell.c \
../straight_insert.c 

OBJS += \
./bin_insert_sort.o \
./bubble.o \
./main.o \
./merge.o \
./quick.o \
./shell.o \
./straight_insert.o 

C_DEPS += \
./bin_insert_sort.d \
./bubble.d \
./main.d \
./merge.d \
./quick.d \
./shell.d \
./straight_insert.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


