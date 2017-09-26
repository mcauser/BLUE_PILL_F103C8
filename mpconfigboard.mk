MCU_SERIES = f1
CMSIS_MCU = STM32F103xB
AF_FILE = boards/stm32f103_af.csv
LD_FILE = boards/stm32f103xb.ld

# Don't include default frozen modules because MCU is tight on flash space
FROZEN_MPY_DIR ?=
