/*
 * Copyright (C) 2016, 2017 Imagination Technologies Limited and/or its
 *                          affiliated group companies
 * Copyright (C) 2017 George Hopkins
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 *
 */
#include <stdio.h>
#include <stdint.h>
#include "periph/gpio.h"
#include "periph/uart.h"
#include "bitarithm.h"
#include "board.h"

extern void dummy(void);

void board_init(void)
{
    U2RXR = 0b0110; // connect pin RPC8 to UART2 RX
    RPC9R = 0b0010; // connect pin RPC9 to UART2 TX

    /* intialise UART used for debug (printf) */
#ifdef DEBUG_VIA_UART
    uart_init(DEBUG_VIA_UART, DEBUG_UART_BAUD, NULL, 0);
#endif

    /* Turn off all LED's */
    gpio_init(LED1_PIN, GPIO_OUT);
    gpio_init(LED2_PIN, GPIO_OUT);
    LED1_OFF;
    LED2_OFF;

    /* Stop the linker from throwing away the PIC32 config register settings */
    dummy();
}

void pm_reboot(void)
{
    /* TODO, note this is needed to get 'default' example to build */
}
