/*
 * Copyright (C) 2017 Inria
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @addtogroup      cpu_stm32l4
 * @{
 *
 * @file
 * @brief           Memory definitions for the STM32L432KC
 *
 * @author          Alexandre Abadie <alexandre.abadie@inria.fr>
 *
 * @}
 */

MEMORY
{
    rom (rx)    : ORIGIN = 0x08000000, LENGTH = 256K
    ram (rwx)   : ORIGIN = 0x20000000, LENGTH = 64K
}

INCLUDE cortexm_base.ld
