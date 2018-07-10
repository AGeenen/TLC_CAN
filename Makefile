# 	Makefile for compiling the Getting Started project

#-------------------------------------------------------------------------------
#		User-modifiable options
#-------------------------------------------------------------------------------

# Trace level used for compilation
# (can be overriden by adding TRACE_LEVEL=#number to the command-line)
# TRACE_LEVEL_DEBUG      5
# TRACE_LEVEL_INFO       4
# TRACE_LEVEL_WARNING    3
# TRACE_LEVEL_ERROR      2
# TRACE_LEVEL_FATAL      1
# TRACE_LEVEL_NO_TRACE   0
TRACE_LEVEL = 4

# Optimization level
OPTIMIZATION = -O0								#no optimisation

# Output file basename
OUTPUT = main

# Output directories
BIN = .
OBJ = obj

# library dirs
LIBRARYSRC = ./lib/src
SRC = ./src

STARTUPFILE = ./lib/startup_stm32f2xx.s

#-------------------------------------------------------------------------------
#		Tools
#-------------------------------------------------------------------------------

# Tool suffix when cross-compiling
CROSS_COMPILE = arm-none-eabi-

CC = $(CROSS_COMPILE)gcc
SIZE = $(CROSS_COMPILE)size
STRIP = $(CROSS_COMPILE)strip
OBJCOPY = $(CROSS_COMPILE)objcopy
OBJDUMP = $(CROSS_COMPILE)objdump
LD = $(CROSS_COMPILE)ld
AS = $(CROSS_COMPILE)as

#-------------------------------------------------------------------------------
#		Files
#-------------------------------------------------------------------------------

# include folders
INCLUDES = -I./
INCLUDES += -I./inc/
INCLUDES += -I./lib/
INCLUDES += -I./lib/inc/

# Objects built from C source files
C_OBJECTS = $(OBJ)/main.o
C_OBJECTS += $(OBJ)/system_stm32f2xx.o
C_OBJECTS += $(OBJ)/stm32f2xx_gpio.o
C_OBJECTS += $(OBJ)/stm32f2xx_rcc.o
C_OBJECTS += $(OBJ)/stm32f2xx_it.o
C_OBJECTS += $(OBJ)/stm32f2xx_adc.o
C_OBJECTS += $(OBJ)/stm32f2xx_tim.o
C_OBJECTS += $(OBJ)/stm32f2xx_dma.o
C_OBJECTS += $(OBJ)/stm32f2xx_can.o
C_OBJECTS += $(OBJ)/stm32f2xx_dcmi.o
C_OBJECTS += $(OBJ)/stm32f2xx_exti.o
C_OBJECTS += $(OBJ)/stm32f2xx_syscfg.o
C_OBJECTS += $(OBJ)/misc.o
C_OBJECTS += $(OBJ)/counter.o
C_OBJECTS += $(OBJ)/can.o
C_OBJECTS += $(OBJ)/const_params.o
C_OBJECTS += $(OBJ)/TLC_2016B.o
C_OBJECTS += $(OBJ)/rt_urand_Upu32_Yd_f_pw.o
C_OBJECTS += $(OBJ)/TrafficLightController.o
C_OBJECTS += $(OBJ)/memset.o

# Objects built from Assembly source files
ASM_OBJECTS = $(OBJ)/startup_stm32f2xx.o

LINKER_SCRIPT = ./lib/stm32_flash.ld
#LINKER_SCRIPT = ./lib/stm32_ram.ld

# Append OBJ and BIN directories to output filename
OUTPUT := $(BIN)/$(OUTPUT)

#-------------------------------------------------------------------------------
#		Rules
#-------------------------------------------------------------------------------

# Flags
CFLAGS = -Wall -fno-math-errno -c -g -mcpu=cortex-m3 -mthumb -mfloat-abi=hard				#fno-common= error if unitialized variable is in more than one file, #mcpu=cortex-m3 -> cortex m3 -mthumb= 32b instruction set
CFLAGS += -g $(OPTIMIZATION) $(INCLUDES) -DTRACE_LEVEL=$(TRACE_LEVEL)
ASFLAGS = -g -mapcs-32									#mapcs-32= create stack that is compliant with the ARM Procedure Call Standard in 32b-frame
LDFLAGS = -g -v -nostartfiles									#-v=version -nostartfiles= don't use standard start files of liner

OBJCOPYFLAGS = -O binary
OBJDUMPFLAGS = -x --syms -S									#-x specify language --syms is symbol table 
												
all: $(BIN) $(OBJ) $(OUTPUT).out

$(BIN) $(OBJ):
	mkdir $@

$(OUTPUT).out: $(C_OBJECTS) $(ASM_OBJECTS) $(LINKER_SCRIPT)
	@ echo "..linking"
	$(LD) $(LDFLAGS) -Map $(OUTPUT).map -T$(LINKER_SCRIPT) -o $(OUTPUT).out $(C_OBJECTS) $(ASM_OBJECTS) libgcc.a
	$(OBJCOPY) $(OBJCOPYFLAGS) $(OUTPUT).out $(OUTPUT).bin
#	$(OBJDUMP) $(OBJDUMPFLAGS) $(OUTPUT).out > $(OUTPUT).list 
	@ echo "...completed."

$(C_OBJECTS): main.c lib/system_stm32f2xx.c
	@ echo ".compiling"
	$(CC) $(CFLAGS) -o $(OBJ)/main.o main.c
	$(CC) $(CFLAGS) -o $(OBJ)/system_stm32f2xx.o lib/system_stm32f2xx.c
	@ echo ".compiling libraries"
	$(CC) $(CFLAGS) -o $(OBJ)/stm32f2xx_it.o   	$(LIBRARYSRC)/stm32f2xx_it.c
	$(CC) $(CFLAGS) -o $(OBJ)/stm32f2xx_gpio.o 	$(LIBRARYSRC)/stm32f2xx_gpio.c
	$(CC) $(CFLAGS) -o $(OBJ)/stm32f2xx_rcc.o  	$(LIBRARYSRC)/stm32f2xx_rcc.c
	$(CC) $(CFLAGS) -o $(OBJ)/stm32f2xx_adc.o  	$(LIBRARYSRC)/stm32f2xx_adc.c
	$(CC) $(CFLAGS) -o $(OBJ)/stm32f2xx_tim.o  	$(LIBRARYSRC)/stm32f2xx_tim.c
	$(CC) $(CFLAGS) -o $(OBJ)/stm32f2xx_dma.o  	$(LIBRARYSRC)/stm32f2xx_dma.c
	$(CC) $(CFLAGS) -o $(OBJ)/stm32f2xx_can.o  	$(LIBRARYSRC)/stm32f2xx_can.c
	$(CC) $(CFLAGS) -o $(OBJ)/stm32f2xx_dcmi.o 	$(LIBRARYSRC)/stm32f2xx_dcmi.c
	$(CC) $(CFLAGS) -o $(OBJ)/stm32f2xx_exti.o 	$(LIBRARYSRC)/stm32f2xx_exti.c
	$(CC) $(CFLAGS) -o $(OBJ)/stm32f2xx_syscfg.o 	$(LIBRARYSRC)/stm32f2xx_syscfg.c
	$(CC) $(CFLAGS) -o $(OBJ)/misc.o  		$(LIBRARYSRC)/misc.c
	$(CC) $(CFLAGS) -o $(OBJ)/counter.o         	$(SRC)/counter.c
	$(CC) $(CFLAGS) -o $(OBJ)/can.o         	$(SRC)/can.c
	$(CC) $(CFLAGS) -o $(OBJ)/const_params.o       	$(SRC)/const_params.c
	$(CC) $(CFLAGS) -o $(OBJ)/TLC_2016B.o  		$(SRC)/TLC_2016B.c
	$(CC) $(CFLAGS) -o $(OBJ)/rt_urand_Upu32_Yd_f_pw.o	$(SRC)/rt_urand_Upu32_Yd_f_pw.c
	$(CC) $(CFLAGS) -o $(OBJ)/TrafficLightController.o	$(SRC)/TrafficLightController.c
	$(CC) $(CFLAGS) -o $(OBJ)/memset.o	  	$(SRC)/memset.c
	
$(ASM_OBJECTS): $(STARTUPFILE)
	@ echo ".assembling"
	$(AS) $(ASFLAGS) -o $(OBJ)/startup_stm32f2xx.o $(STARTUPFILE)

clean:
	-rm -f $(OBJ)/*.o $(BIN)/*.out $(BIN)/*.bin $(BIN)/*.dmp $(BIN)/*.map-
