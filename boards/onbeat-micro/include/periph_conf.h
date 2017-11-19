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

/**
 * @defgroup    boards_onbeat-micro JBL OnBeat Micro
 * @ingroup     boards
 * @brief       peripheral configuration for the JBL OnBeat Micro
 * @{
 *
 * @file
 * @brief       peripheral configuration for the JBL OnBeat Micro
 *
 * @author      George Hopkins <george-hopkins@null.net>
 */

#ifndef PERIPH_CONF_H
#define PERIPH_CONF_H

#include "periph_cpu.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief   The peripheral clock is required for the UART Baud rate calculation
 *          It is configured by the 'config' registers (see pic32_config_settings.c)
 */
#define PERIPHERAL_CLOCK (48000000)  /* Hz */

/**
 * @name    Timer definitions
 * @{
 */
#define TIMER_NUMOF         (1)
#define TIMER_0_CHANNELS    (3)
/** @} */

/**
  * @name    UART Definitions
  * @{
  */
#define UART_NUMOF          (2)
#define DEBUG_VIA_UART      (1)
#define DEBUG_UART_BAUD     (9600)
/** @} */

#ifdef __cplusplus
}
#endif

#endif /* PERIPH_CONF_H */
/** @} */
