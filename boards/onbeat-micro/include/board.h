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
 * @brief       board configuration for the JBL OnBeat Micro
 *
 * @{
 *
 * @file
 * @brief       board configuration for the JBL OnBeat Micro
 *
 * @author      George Hopkins <george-hopkins@null.net>
 */

#ifndef BOARD_H
#define BOARD_H

#include "periph_conf.h"

#ifdef __cplusplus
extern "C" {
#endif

#include "vendor/p32mx250f128d.h"

/**
 * @brief   Set how many increments of the count register per uS
 *          needed by the timer code.
 */
#define TICKS_PER_US (24)

/**
 * @brief   We are using an External Interrupt Controller (all pic32 devices use this mode)
 */
#define EIC_IRQ (1)

/**
 * @brief   LED pin configuration
 * @{
 */
#define LED1_PIN            GPIO_PIN(PORT_A, 9)
#define LED2_PIN            GPIO_PIN(PORT_C, 3)

#define LED1_MASK           (1 << 9)
#define LED2_MASK           (1 << 3)

#define LED1_ON             (LATBSET = LED1_MASK)
#define LED1_OFF            (LATBCLR = LED1_MASK)
#define LED1_TOGGLE         (LATBINV = LED1_MASK)

#define LED2_ON             (LATBSET = LED2_MASK)
#define LED2_OFF            (LATBCLR = LED2_MASK)
#define LED2_TOGGLE         (LATBINV = LED2_MASK)
/** @} */

/**
 * @brief   Board level initialization
 */
void board_init(void);

#ifdef __cplusplus
}
#endif


#endif /* BOARD_H */
/** @} */
