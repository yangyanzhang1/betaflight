/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32F411

#define BOARD_NAME        FLYWOOF411V2
#define MANUFACTURER_ID   FLWO

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_BARO
#define USE_BARO_BMP280
#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_MAX7456

#define BEEPER_PIN           PC14
#define MOTOR1_PIN           PA8
#define MOTOR2_PIN           PB3
#define MOTOR3_PIN           PB10
#define MOTOR4_PIN           PA15
#define RX_PPM_PIN           PA2
#define LED_STRIP_PIN        PA0
#define UART1_TX_PIN         PA9
#define UART2_TX_PIN         PA2
#define UART11_TX_PIN        PB6
#define UART1_RX_PIN         PA10
#define UART2_RX_PIN         PA3
#define UART11_RX_PIN        PB7
#define I2C1_SCL_PIN         PB8
#define I2C1_SDA_PIN         PB9
#define LED0_PIN             PC13
#define SPI1_SCK_PIN         PA5
#define SPI2_SCK_PIN         PB13
#define SPI1_SDI_PIN         PA6
#define SPI2_SDI_PIN         PB14
#define SPI1_SDO_PIN         PA7
#define SPI2_SDO_PIN         PB15
#define CAMERA_CONTROL_PIN   PB4
#define ADC_VBAT_PIN         PB1
#define ADC_CURR_PIN         PA1
#define FLASH_CS_PIN         PB2
#define MAX7456_SPI_CS_PIN   PB12
#define GYRO_1_EXTI_PIN      PB5
#define GYRO_1_CS_PIN        PA4
#define USB_DETECT_PIN       PC15

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PA2 , 3, -1) \
    TIMER_PIN_MAP( 1, PA8 , 1,  1) \
    TIMER_PIN_MAP( 2, PB3 , 1,  0) \
    TIMER_PIN_MAP( 3, PB10, 1,  0) \
    TIMER_PIN_MAP( 4, PA15, 1,  0) \
    TIMER_PIN_MAP( 5, PB6 , 1,  0) \
    TIMER_PIN_MAP( 6, PB7 , 1,  0) \
    TIMER_PIN_MAP( 7, PB0 , 2,  0) \
    TIMER_PIN_MAP( 8, PB4 , 1,  0) \
    TIMER_PIN_MAP( 9, PA0 , 2,  0)



#define ADC1_DMA_OPT        1

//TODO #define MAG_BUSTYPE I2C
#define MAG_I2C_INSTANCE (I2CDEV_1)
#define BARO_I2C_INSTANCE (I2CDEV_1)

#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_FLASH
#define DEFAULT_DSHOT_BURST DSHOT_DMAR_ON
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SCALE 170
#define BEEPER_INVERTED
#define SYSTEM_HSE_MHZ 8
#define MAX7456_SPI_INSTANCE SPI2
#define FLASH_SPI_INSTANCE SPI2
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW180_DEG
#define GYRO_1_ALIGN_YAW 1800
#define GYRO_2_SPI_INSTANCE SPI1
