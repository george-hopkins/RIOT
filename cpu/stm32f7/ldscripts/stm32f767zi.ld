/*
 * Copyright (C) 2017 Inria
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @addtogroup      cpu_stm32f7
 * @{
 *
 * @file
 * @brief           Memory definitions for the STM32F767ZI
 *
 * @author          Alexandre Abadie <alexandre.abadie@inria.fr>
 *
 * @}
 */

MEMORY
{
    rom (rx)    : ORIGIN = 0x08000000, LENGTH = 2M
    ram (rwx)   : ORIGIN = 0x20000000, LENGTH = 512K
}

INCLUDE cortexm_base.ld
