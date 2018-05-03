/*
    Copyright (C) 2016 Stephane D'Alu

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef _BOARD_H_
#define _BOARD_H_

/* Board identifier. */
#define ADAFRUIT_BLUEFRUIT_NRF52832
#define BOARD_NAME              "Bluefruit nRF52"

/* Board oscillators-related settings. */
#define NRF5_XTAL_VALUE        64000000
#define NRF5_LFCLK_SOURCE      1

/*
 * GPIO pins. 
 */
/* Defined by board */
#define LED1           17U
#define LED2           19U
#define UART_RTS        5U
#define UART_TX         6U
#define UART_CTS        7U
#define UART_RX         8U
#define NFC1            9U
#define NFC2           10U
#define I2C_SCL        26U
#define I2C_SDA        25U

/* Our definitions */
#define SPI_SCK        12U
#define SPI_MOSI       13U
#define SPI_MISO       14U
#define SPI_SS         18U

/* Analog input */
#define AIN0            2U
#define AIN1            3U
#define AIN2            4U
#define AIN3            5U
#define AIN4           28U
#define AIN5           29U
#define AIN6           30U
#define AIN7           31U
#define AREF0          24U

/*
 * IO pins assignments.
 */
/* Defined by board */
#define IOPORT1_LED1           17U
#define IOPORT1_LED2           19U
#define IOPORT1_UART_RTS        5U
#define IOPORT1_UART_TX         6U
#define IOPORT1_UART_CTS        7U
#define IOPORT1_UART_RX         8U
#define IOPORT1_NFC1            9U
#define IOPORT1_NFC2           10U
#define IOPORT1_I2C_SCL        26U
#define IOPORT1_I2C_SDA        25U
#define IOPORT1_RESET          35U

/* Our definitions */
#define IOPORT1_SPI_SCK        12U
#define IOPORT1_SPI_MOSI       13U
#define IOPORT1_SPI_MISO       14U
#define IOPORT1_SPI_SS         18U

/* Analog inpupt */
#define IOPORT1_AIN0            2U
#define IOPORT1_AIN1            3U
#define IOPORT1_AIN2            4U
#define IOPORT1_AIN3            5U
#define IOPORT1_AIN4           28U
#define IOPORT1_AIN5           29U
#define IOPORT1_AIN6           30U
#define IOPORT1_AIN7           31U
#define IOPORT1_AREF0          24U

/* Arduino naming */
#define IOPORT1_A0              2U
#define IOPORT1_A1              3U
#define IOPORT1_A2              4U
#define IOPORT1_A3              5U
#define IOPORT1_A4             28U
#define IOPORT1_A5             29U
#define IOPORT1_A6             30U
#define IOPORT1_A7             31U
#define IOPORT1_D0              6U
#define IOPORT1_D1              7U
#define IOPORT1_D2              8U
#define IOPORT1_D3              9U
#define IOPORT1_D4             10U
#define IOPORT1_D5             11U
#define IOPORT1_D6             12U
#define IOPORT1_D7             13U
#define IOPORT1_D8             14U
#define IOPORT1_D9             15U
#define IOPORT1_D10            16U
#define IOPORT1_D11            17U
#define IOPORT1_D12            19U
#define IOPORT1_D13            20U
#define IOPORT1_D14            25U
#define IOPORT1_D15            26U
#define IOPORT1_D16            27U
#define IOPORT1_D17            30U
#define IOPORT1_D18            31U


/*
 * IO lines assignments.
 */
/* Board defined */
#define LINE_LED1      PAL_LINE(IOPORT1, IOPORT1_LED1)
#define LINE_LED2      PAL_LINE(IOPORT1, IOPORT1_LED2)
#define LINE_UART_RTS  PAL_LINE(IOPORT1, IOPORT1_UART_RTS)
#define LINE_UART_TX   PAL_LINE(IOPORT1, IOPORT1_UART_TX)
#define LINE_UART_CTS  PAL_LINE(IOPORT1, IOPORT1_UART_CTS)
#define LINE_UART_RX   PAL_LINE(IOPORT1, IOPORT1_UART_RX)
#define LINE_NFC1      PAL_LINE(IOPORT1, IOPORT1_NFC1)
#define LINE_NFC2      PAL_LINE(IOPORT1, IOPORT1_NFC2)
#define LINE_I2C_SCL   PAL_LINE(IOPORT1, IOPORT1_I2C_SCL)
#define LINE_I2C_SDA   PAL_LINE(IOPORT1, IOPORT1_I2C_SDA)

/* Our definitions */
#define LINE_SPI_SCK   PAL_LINE(IOPORT1, IOPORT1_SPI_SCK)
#define LINE_SPI_MOSI  PAL_LINE(IOPORT1, IOPORT1_SPI_MOSI)
#define LINE_SPI_MISO  PAL_LINE(IOPORT1, IOPORT1_SPI_MISO)
#define LINE_SPI_SS    PAL_LINE(IOPORT1, IOPORT1_SPI_SS)

/* Analog line */
#define LINE_AIN0      PAL_LINE(IOPORT1, IOPORT1_AIN0)
#define LINE_AIN1      PAL_LINE(IOPORT1, IOPORT1_AIN1)
#define LINE_AIN2      PAL_LINE(IOPORT1, IOPORT1_AIN2)
#define LINE_AIN3      PAL_LINE(IOPORT1, IOPORT1_AIN3)
#define LINE_AIN4      PAL_LINE(IOPORT1, IOPORT1_AIN4)
#define LINE_AIN5      PAL_LINE(IOPORT1, IOPORT1_AIN5)
#define LINE_AIN6      PAL_LINE(IOPORT1, IOPORT1_AIN6)
#define LINE_AIN7      PAL_LINE(IOPORT1, IOPORT1_AIN7)
#define LINE_AREF0     PAL_LINE(IOPORT1, IOPORT1_AREF0)

/* Arduino naming */
#define LINE_A0        PAL_LINE(IOPORT1, IOPORT1_A0)
#define LINE_A1        PAL_LINE(IOPORT1, IOPORT1_A1)
#define LINE_A2        PAL_LINE(IOPORT1, IOPORT1_A2)
#define LINE_A3        PAL_LINE(IOPORT1, IOPORT1_A3)
#define LINE_A4        PAL_LINE(IOPORT1, IOPORT1_A4)
#define LINE_A5        PAL_LINE(IOPORT1, IOPORT1_A5)
#define LINE_A6        PAL_LINE(IOPORT1, IOPORT1_A6)
#define LINE_A7        PAL_LINE(IOPORT1, IOPORT1_A7)
#define LINE_D0        PAL_LINE(IOPORT1, IOPORT1_D0)
#define LINE_D1        PAL_LINE(IOPORT1, IOPORT1_D1)
#define LINE_D2        PAL_LINE(IOPORT1, IOPORT1_D2)
#define LINE_D3        PAL_LINE(IOPORT1, IOPORT1_D3)
#define LINE_D4        PAL_LINE(IOPORT1, IOPORT1_D4)
#define LINE_D5        PAL_LINE(IOPORT1, IOPORT1_D5)
#define LINE_D6        PAL_LINE(IOPORT1, IOPORT1_D6)
#define LINE_D7        PAL_LINE(IOPORT1, IOPORT1_D7)
#define LINE_D8        PAL_LINE(IOPORT1, IOPORT1_D8)
#define LINE_D9        PAL_LINE(IOPORT1, IOPORT1_D9)
#define LINE_D10       PAL_LINE(IOPORT1, IOPORT1_D10)
#define LINE_D11       PAL_LINE(IOPORT1, IOPORT1_D11)
#define LINE_D12       PAL_LINE(IOPORT1, IOPORT1_D12)
#define LINE_D13       PAL_LINE(IOPORT1, IOPORT1_D13)
#define LINE_D14       PAL_LINE(IOPORT1, IOPORT1_D14)
#define LINE_D15       PAL_LINE(IOPORT1, IOPORT1_D15)
#define LINE_D16       PAL_LINE(IOPORT1, IOPORT1_D16)
#define LINE_D17       PAL_LINE(IOPORT1, IOPORT1_D17)
#define LINE_D18       PAL_LINE(IOPORT1, IOPORT1_D18)

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */
