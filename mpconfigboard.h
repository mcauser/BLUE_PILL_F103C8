#define BLUE_PILL_F103C8

#define MICROPY_HW_BOARD_NAME       "BLUE PILL STM32F103C8T6"
#define MICROPY_HW_MCU_NAME         "STM32F103xB"

#define MICROPY_HW_HAS_SWITCH       (0)
#define MICROPY_HW_HAS_FLASH        (0)
#define MICROPY_HW_HAS_SDCARD       (0)
#define MICROPY_HW_HAS_MMA7660      (0)
#define MICROPY_HW_HAS_LIS3DSH      (0)
#define MICROPY_HW_HAS_LCD          (0)
#define MICROPY_HW_ENABLE_RNG       (0)
#define MICROPY_HW_ENABLE_RTC       (0)
#define MICROPY_HW_ENABLE_TIMER     (0)
#define MICROPY_HW_ENABLE_SERVO     (0)
#define MICROPY_HW_ENABLE_DAC       (0)
#define MICROPY_HW_ENABLE_CAN       (0)

// HSE is 8MHz
#define MICROPY_HW_CLK_PLLM (8) // divide external clock by this to get 1MHz
#define MICROPY_HW_CLK_PLLN (336) // PLL clock in MHz
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2) // divide PLL clock by this to get core clock
#define MICROPY_HW_CLK_PLLQ (7) // divide core clock by this to get 48MHz

// USART1
#define MICROPY_HW_UART1_TX     (pin_A9)   // PA9,PB6
#define MICROPY_HW_UART1_RX     (pin_A10)  // PA10,PB7
#define MICROPY_HW_UART1_RTS    (pin_A12)  // PA12
#define MICROPY_HW_UART1_CTS    (pin_A11)  // PA11

// USART2
#define MICROPY_HW_UART2_TX     (pin_A2)  // PA2
#define MICROPY_HW_UART2_RX     (pin_A3)  // PA3
#define MICROPY_HW_UART2_RTS    (pin_A1)  // PA1
#define MICROPY_HW_UART2_CTS    (pin_A0)  // PA0

// USART3
#define MICROPY_HW_UART3_TX     (pin_B10) // PB10
#define MICROPY_HW_UART3_RX     (pin_B11) // PB11
#define MICROPY_HW_UART3_RTS    (pin_B14) // PB14
#define MICROPY_HW_UART3_CTS    (pin_B13) // PB13

// I2C busses
#define MICROPY_HW_I2C1_SCL (pin_B6)  // PB8,PB6
#define MICROPY_HW_I2C1_SDA (pin_B7)  // PB9,PB7
#define MICROPY_HW_I2C2_SCL (pin_B10) // PB10
#define MICROPY_HW_I2C2_SDA (pin_B11) // PB11

// SPI busses
#define MICROPY_HW_SPI1_NSS  (pin_A4)  // PA4,PA15
#define MICROPY_HW_SPI1_SCK  (pin_A5)  // PA5,PB3
#define MICROPY_HW_SPI1_MISO (pin_A6)  // PA6,PB4
#define MICROPY_HW_SPI1_MOSI (pin_A7)  // PA7,PB5

#define MICROPY_HW_SPI2_NSS  (pin_B12) // PB12
#define MICROPY_HW_SPI2_SCK  (pin_B13) // PB13
#define MICROPY_HW_SPI2_MISO (pin_B14) // PB14
#define MICROPY_HW_SPI2_MOSI (pin_B15) // PB15

// CAN busses
// CAN_TX PB9,PA12
// CAN_RX PB8,PA11

// LEDs
#define MICROPY_HW_LED1             (pin_C13) // red
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_low(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_high(pin))
