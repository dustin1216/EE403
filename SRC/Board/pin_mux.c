/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "pin_mux.h"
#include "fsl_common.h"
#include "fsl_iocon.h"

void BOARD_InitPins(void)
{
    /* enable clock for IOCON */
    CLOCK_EnableClock(kCLOCK_Iocon);
    CLOCK_EnableClock(kCLOCK_InputMux);

    /* USART0 RX/TX pin */
    IOCON_PinMuxSet(IOCON, 0, 29, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF);
    IOCON_PinMuxSet(IOCON, 0, 30, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF);

    /* EMC SDRAM Pins setting. */
    IOCON_PinMuxSet(IOCON, 0, 18, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[0] */
    IOCON_PinMuxSet(IOCON, 0, 19, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[1] */
    IOCON_PinMuxSet(IOCON, 0, 20, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[2] */
    IOCON_PinMuxSet(IOCON, 0, 21, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[3] */
    IOCON_PinMuxSet(IOCON, 1, 5, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[4] */
    IOCON_PinMuxSet(IOCON, 1, 6, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[5] */
    IOCON_PinMuxSet(IOCON, 1, 7, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[6] */
    IOCON_PinMuxSet(IOCON, 1, 8, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[7] */
    IOCON_PinMuxSet(IOCON, 1, 26, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[8] */
    IOCON_PinMuxSet(IOCON, 1, 27, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[9] */  
    IOCON_PinMuxSet(IOCON, 1, 16, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[10] */
    IOCON_PinMuxSet(IOCON, 1, 23, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[11] */
    IOCON_PinMuxSet(IOCON, 1, 24, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[12] */
    IOCON_PinMuxSet(IOCON, 1, 25, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[13] */
    IOCON_PinMuxSet(IOCON, 3, 25, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[14] */

    IOCON_PinMuxSet(IOCON, 0, 2, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[0] */
    IOCON_PinMuxSet(IOCON, 0, 3, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[1] */
    IOCON_PinMuxSet(IOCON, 0, 4, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[2] */
    IOCON_PinMuxSet(IOCON, 0, 5, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[3] */
    IOCON_PinMuxSet(IOCON, 0, 6, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[4] */
    IOCON_PinMuxSet(IOCON, 0, 7, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[5] */
    IOCON_PinMuxSet(IOCON, 0, 8, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[6] */
    IOCON_PinMuxSet(IOCON, 0, 9, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[7] */
    IOCON_PinMuxSet(IOCON, 1, 19, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[8] */
    IOCON_PinMuxSet(IOCON, 1, 20, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[9] */
    IOCON_PinMuxSet(IOCON, 1, 21, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[10] */
    IOCON_PinMuxSet(IOCON, 1, 4, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[11] */
    IOCON_PinMuxSet(IOCON, 1, 28, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[12] */
    IOCON_PinMuxSet(IOCON, 1, 29, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[13] */
    IOCON_PinMuxSet(IOCON, 1, 30, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[14] */
    IOCON_PinMuxSet(IOCON, 1, 31, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[15] */ 

    IOCON_PinMuxSet(IOCON, 1, 9, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_CASN */      
    IOCON_PinMuxSet(IOCON, 1, 10, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_RASN */
    IOCON_PinMuxSet(IOCON, 1, 11, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_CLK[0] */
    IOCON_PinMuxSet(IOCON, 1, 12, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_DYCSN[0] */
    IOCON_PinMuxSet(IOCON, 1, 13, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_DQM[0] */
    IOCON_PinMuxSet(IOCON, 1, 14, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_DQM[1] */
    IOCON_PinMuxSet(IOCON, 1, 15, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_CKE[0] */
    IOCON_PinMuxSet(IOCON, 0, 15, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_WEN */
		

    /* /WAKE signal for the touch controller, has to be set to log.1 for normal operation */
    IOCON_PinMuxSet(IOCON, 2, 27, (IOCON_FUNC0 | IOCON_DIGITAL_EN));

    /* LCD pin. */
    IOCON_PinMuxSet(IOCON, 2, 21, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* R3 */
    IOCON_PinMuxSet(IOCON, 2, 22, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* R4 */
    IOCON_PinMuxSet(IOCON, 2, 23, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* R5 */
    IOCON_PinMuxSet(IOCON, 2, 24, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* R6 */
    IOCON_PinMuxSet(IOCON, 2, 25, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* R7 */

    IOCON_PinMuxSet(IOCON, 2, 28, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* G2 */
    IOCON_PinMuxSet(IOCON, 2, 29, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* G3 */
    IOCON_PinMuxSet(IOCON, 2, 30, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* G4 */
    IOCON_PinMuxSet(IOCON, 2, 31, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* G5 */
    IOCON_PinMuxSet(IOCON, 3, 0, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF);  /* G6 */
    IOCON_PinMuxSet(IOCON, 3, 1, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF);  /* G7 */

    IOCON_PinMuxSet(IOCON, 3, 5, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* B3 */
    IOCON_PinMuxSet(IOCON, 3, 6, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* B4 */
    IOCON_PinMuxSet(IOCON, 3, 7, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* B5 */
    IOCON_PinMuxSet(IOCON, 3, 8, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* B6 */
    IOCON_PinMuxSet(IOCON, 3, 9, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* B7 */

    IOCON_PinMuxSet(IOCON, 2, 13, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_ANALOG_EN | IOCON_INPFILT_OFF);  /* DCLK */
    IOCON_PinMuxSet(IOCON, 2, 11, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* PWR */
    IOCON_PinMuxSet(IOCON, 2, 16, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* LP */
    IOCON_PinMuxSet(IOCON, 2, 14, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* FP */
    IOCON_PinMuxSet(IOCON, 2, 15, IOCON_MODE_INACT | IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_INPFILT_OFF); /* AC */

    /* EMC SDRAM Pins setting. */
    IOCON_PinMuxSet(IOCON, 0, 18, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[0] */
    IOCON_PinMuxSet(IOCON, 0, 19, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[1] */
    IOCON_PinMuxSet(IOCON, 0, 20, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[2] */
    IOCON_PinMuxSet(IOCON, 0, 21, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[3] */
    IOCON_PinMuxSet(IOCON, 1, 5, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN);  /*EMC_A[4] */
    IOCON_PinMuxSet(IOCON, 1, 6, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN);  /*EMC_A[5] */
    IOCON_PinMuxSet(IOCON, 1, 7, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN);  /*EMC_A[6] */
    IOCON_PinMuxSet(IOCON, 1, 8, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN);  /*EMC_A[7] */
    IOCON_PinMuxSet(IOCON, 1, 26, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[8] */
    IOCON_PinMuxSet(IOCON, 1, 27, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[9] */
    IOCON_PinMuxSet(IOCON, 1, 16, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[10] */
    IOCON_PinMuxSet(IOCON, 1, 23, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[11] */
    IOCON_PinMuxSet(IOCON, 1, 24, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[12] */
    IOCON_PinMuxSet(IOCON, 1, 25, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[13] */
    IOCON_PinMuxSet(IOCON, 3, 25, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_A[14] */

    IOCON_PinMuxSet(IOCON, 0, 2, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN);  /*EMC_D[0] */
    IOCON_PinMuxSet(IOCON, 0, 3, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN);  /*EMC_D[1] */
    IOCON_PinMuxSet(IOCON, 0, 4, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN);  /*EMC_D[2] */
    IOCON_PinMuxSet(IOCON, 0, 5, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN);  /*EMC_D[3] */
    IOCON_PinMuxSet(IOCON, 0, 6, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN);  /*EMC_D[4] */
    IOCON_PinMuxSet(IOCON, 0, 7, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN);  /*EMC_D[5] */
    IOCON_PinMuxSet(IOCON, 0, 8, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN);  /*EMC_D[6] */
    IOCON_PinMuxSet(IOCON, 0, 9, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN);  /*EMC_D[7] */
    IOCON_PinMuxSet(IOCON, 1, 19, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[8] */
    IOCON_PinMuxSet(IOCON, 1, 20, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[9] */
    IOCON_PinMuxSet(IOCON, 1, 21, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[10] */
    IOCON_PinMuxSet(IOCON, 1, 4, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN);  /*EMC_D[11] */
    IOCON_PinMuxSet(IOCON, 1, 28, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[12] */
    IOCON_PinMuxSet(IOCON, 1, 29, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[13] */
    IOCON_PinMuxSet(IOCON, 1, 30, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[14] */
    IOCON_PinMuxSet(IOCON, 1, 31, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_D[15] */

    IOCON_PinMuxSet(IOCON, 1, 9, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN);  /*EMC_CASN */
    IOCON_PinMuxSet(IOCON, 1, 10, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_RASN */
    IOCON_PinMuxSet(IOCON, 1, 11, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_CLK[0] */
    IOCON_PinMuxSet(IOCON, 1, 12,
                    IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_DYCSN[0] */
    IOCON_PinMuxSet(IOCON, 1, 13, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_DQM[0] */
    IOCON_PinMuxSet(IOCON, 1, 14, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_DQM[1] */
    IOCON_PinMuxSet(IOCON, 1, 15, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_CKE[0] */
    IOCON_PinMuxSet(IOCON, 0, 15, IOCON_MODE_INACT | IOCON_FASTI2C_EN | IOCON_FUNC6 | IOCON_DIGITAL_EN); /*EMC_WEN */


    /* I2C */
    IOCON_PinMuxSet(IOCON, 3, 23,
                    IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_FASTI2C_EN | IOCON_MODE_INACT | IOCON_INPFILT_OFF);
    IOCON_PinMuxSet(IOCON, 3, 24,
                    IOCON_FUNC1 | IOCON_DIGITAL_EN | IOCON_FASTI2C_EN | IOCON_MODE_INACT | IOCON_INPFILT_OFF);

    /* I2S */
    IOCON_PinMuxSet(IOCON, 2, 18, IOCON_FUNC3 | IOCON_DIGITAL_EN); /* Flexcomm 7 / SCK */
    IOCON_PinMuxSet(IOCON, 2, 19, IOCON_FUNC3 | IOCON_DIGITAL_EN); /* Flexcomm 7 / SDA */
    IOCON_PinMuxSet(IOCON, 2, 20, IOCON_FUNC3 | IOCON_DIGITAL_EN); /* Flexcomm 7 / WS */

    IOCON_PinMuxSet(IOCON, 4, 1, IOCON_FUNC2 | IOCON_DIGITAL_EN); /* Flexcomm 6 / SCK */
    IOCON_PinMuxSet(IOCON, 4, 2, IOCON_FUNC2 | IOCON_DIGITAL_EN); /* Flexcomm 6 / SDA */
    IOCON_PinMuxSet(IOCON, 4, 3, IOCON_FUNC2 | IOCON_DIGITAL_EN); /* Flexcomm 6 / WS */

    /* MCLK output for I2S */
    IOCON_PinMuxSet(IOCON, 3, 11, IOCON_FUNC1 | IOCON_MODE_INACT | IOCON_DIGITAL_EN);
    SYSCON->MCLKIO = 1U;

}
