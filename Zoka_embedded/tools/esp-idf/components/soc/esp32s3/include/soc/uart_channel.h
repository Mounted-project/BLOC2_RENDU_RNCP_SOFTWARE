/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

// This file defines GPIO lookup macros for available UART IO_MUX pins on ESP32S3.

#pragma once

//UART channels
#define UART_GPIO43_DIRECT_CHANNEL      UART_NUM_0
#define UART_NUM_0_TXD_DIRECT_GPIO_NUM  43
#define UART_GPIO44_DIRECT_CHANNEL      UART_NUM_0
#define UART_NUM_0_RXD_DIRECT_GPIO_NUM  44
#define UART_GPIO16_DIRECT_CHANNEL      UART_NUM_0
#define UART_NUM_0_CTS_DIRECT_GPIO_NUM  16
#define UART_GPIO15_DIRECT_CHANNEL      UART_NUM_0
#define UART_NUM_0_RTS_DIRECT_GPIO_NUM  15

#define UART_TXD_GPIO43_DIRECT_CHANNEL  UART_GPIO43_DIRECT_CHANNEL
#define UART_RXD_GPIO44_DIRECT_CHANNEL  UART_GPIO44_DIRECT_CHANNEL
#define UART_CTS_GPIO16_DIRECT_CHANNEL  UART_GPIO16_DIRECT_CHANNEL
#define UART_RTS_GPIO15_DIRECT_CHANNEL  UART_GPIO15_DIRECT_CHANNEL

#define UART_GPIO17_DIRECT_CHANNEL      UART_NUM_1
#define UART_NUM_1_TXD_DIRECT_GPIO_NUM  17
#define UART_GPIO18_DIRECT_CHANNEL      UART_NUM_1
#define UART_NUM_1_RXD_DIRECT_GPIO_NUM  18
#define UART_GPIO20_DIRECT_CHANNEL      UART_NUM_1
#define UART_NUM_1_CTS_DIRECT_GPIO_NUM  20
#define UART_GPIO19_DIRECT_CHANNEL      UART_NUM_1
#define UART_NUM_1_RTS_DIRECT_GPIO_NUM  19

#define UART_TXD_GPIO17_DIRECT_CHANNEL  UART_GPIO17_DIRECT_CHANNEL
#define UART_RXD_GPIO18_DIRECT_CHANNEL  UART_GPIO18_DIRECT_CHANNEL
#define UART_CTS_GPIO20_DIRECT_CHANNEL  UART_GPIO20_DIRECT_CHANNEL
#define UART_RTS_GPIO19_DIRECT_CHANNEL  UART_GPIO19_DIRECT_CHANNEL
