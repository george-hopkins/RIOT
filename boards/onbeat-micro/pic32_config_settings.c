/*
 * Copyright (C) 2016, 2017 Imagination Technologies Limited and/or its
 *                          affiliated group companies
 * Copyright (C) 2017 George Hopkins
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

#include <stdint.h>
#include "vendor/p32mx250f128d.h"

/*
 * DEVCFG0  @ 0x1FC02FFC
 */

volatile uint32_t _DEVCFG0 __attribute__ ((used, section(".devcfg0"))) =
    0x7fffffff /* unused bits must be 1 except MSB which is 0 for some odd reason */
    & (~_DEVCFG0_DEBUG_MASK     |  3        << _DEVCFG0_DEBUG_POSITION)
    & (~_DEVCFG0_JTAGEN_MASK    |  0        << _DEVCFG0_JTAGEN_POSITION)
    & (~_DEVCFG0_ICESEL_MASK    |  1        << _DEVCFG0_ICESEL_POSITION)
    & (~_DEVCFG0_PWP_MASK       |  0x1ff    << _DEVCFG0_PWP_POSITION)
    & (~_DEVCFG0_BWP_MASK       |  1        << _DEVCFG0_BWP_POSITION)
    & (~_DEVCFG0_CP_MASK        |  1        << _DEVCFG0_CP_POSITION);

/*
 * DEVCFG1  @ 0x1FC02FF8
 */

volatile uint32_t _DEVCFG1 __attribute__ ((used, section(".devcfg1"))) =
    0xffffffff /* unused bits must be 1 */
    & (~_DEVCFG1_FNOSC_MASK     |  3        << _DEVCFG1_FNOSC_POSITION)
    & (~_DEVCFG1_FSOSCEN_MASK   |  0        << _DEVCFG1_FSOSCEN_POSITION)
    & (~_DEVCFG1_IESO_MASK      |  1        << _DEVCFG1_IESO_POSITION)
    & (~_DEVCFG1_POSCMOD_MASK   |  1        << _DEVCFG1_POSCMOD_POSITION)
    & (~_DEVCFG1_OSCIOFNC_MASK  |  1        << _DEVCFG1_OSCIOFNC_POSITION)
    & (~_DEVCFG1_FPBDIV_MASK    |  0        << _DEVCFG1_FPBDIV_POSITION)
    & (~_DEVCFG1_FCKSM_MASK     |  3        << _DEVCFG1_FCKSM_POSITION)
    & (~_DEVCFG1_WDTPS_MASK     |  1        << _DEVCFG1_WDTPS_POSITION)
    & (~_DEVCFG1_WINDIS_MASK    |  0        << _DEVCFG1_WINDIS_POSITION)
    & (~_DEVCFG1_FWDTEN_MASK    |  0        << _DEVCFG1_FWDTEN_POSITION)
    & (~_DEVCFG1_FWDTWINSZ_MASK |  3        << _DEVCFG1_FWDTWINSZ_POSITION);

/*
 * DEVCFG2  @ 0x1FC02FF4
 */

volatile uint32_t _DEVCFG2 __attribute__ ((used, section(".devcfg2"))) =
    0xffffffff /* unused bits must be 1 */
    & (~_DEVCFG2_FPLLIDIV_MASK   |  0        << _DEVCFG2_FPLLIDIV_POSITION)
    & (~_DEVCFG2_FPLLMUL_MASK    |  7        << _DEVCFG2_FPLLMUL_POSITION)
    & (~_DEVCFG2_UPLLIDIV_MASK   |  0        << _DEVCFG2_UPLLIDIV_POSITION)
    & (~_DEVCFG2_UPLLEN_MASK     |  0        << _DEVCFG2_UPLLEN_POSITION)
    & (~_DEVCFG2_FPLLODIV_MASK   |  0        << _DEVCFG2_FPLLODIV_POSITION);

/*
 *  DEVCFG3  @ 0x1FC02FF0
 */
volatile uint32_t _DEVCFG3 __attribute__((used, section(".devcfg3"))) =
    0xffffffff /* unused bits must be 1 */
    & (~_DEVCFG3_USERID_MASK     | 0xFFFF    << _DEVCFG3_USERID_POSITION)
    & (~_DEVCFG3_PMDL1WAY_MASK   | 0         << _DEVCFG3_PMDL1WAY_POSITION)
    & (~_DEVCFG3_IOL1WAY_MASK    | 0         << _DEVCFG3_IOL1WAY_POSITION)
    & (~_DEVCFG3_FUSBIDIO_MASK   | 0         << _DEVCFG3_FUSBIDIO_POSITION)
    & (~_DEVCFG3_FVBUSONIO_MASK  | 0         << _DEVCFG3_FVBUSONIO_POSITION);

/*
 * Without a reference to this function from elsewhere LD throws the whole
 * compile unit away even though the data is 'volatile' and 'used' !!!
 */
void dummy(void)
{
    (void)1;
}
