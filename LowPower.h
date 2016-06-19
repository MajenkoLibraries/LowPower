/*
 * Copyright (c) 2016, Majenko Technologies
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 
 * * Redistributions of source code must retain the above copyright notice, this
 *   list of conditions and the following disclaimer.
 * 
 * * Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 * 
 * * Neither the name of Majenko Technologies nor the names of its
 *   contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
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

#ifndef _LOWPOWER_H
#define _LOWPOWER_H

#if (ARDUINO >= 100)
# include <Arduino.h>
#else
# include <WProgram.h>
#endif

class LowPower_ {
    public:
        void enterSleepMode();
        void enterIdleMode();

        // Peripheral Module Disable - only does anything on PPS parts.
        void disableADC();
        void enableADC();
        void disableCTMU();
        void enableCTMU();
        void disableComparatorVoltageReference();
        void enableComparatorVoltageReference();
        void disableComparator1();
        void enableComparator1();
        void disableComparator2();
        void enableComparator2();
        void disableComparator3();
        void enableComparator3();
        void disableInputCapture1();
        void enableInputCapture1();
        void disableInputCapture2();
        void enableInputCapture2();
        void disableInputCapture3();
        void enableInputCapture3();
        void disableInputCapture4();
        void enableInputCapture4();
        void disableInputCapture5();
        void enableInputCapture5();
        void disableOutputCompare1();
        void enableOutputCompare1();
        void disableOutputCompare2();
        void enableOutputCompare2();
        void disableOutputCompare3();
        void enableOutputCompare3();
        void disableOutputCompare4();
        void enableOutputCompare4();
        void disableOutputCompare5();
        void enableOutputCompare5();
        void disableTimer1();
        void enableTimer1();
        void disableTimer2();
        void enableTimer2();
        void disableTimer3();
        void enableTimer3();
        void disableTimer4();
        void enableTimer4();
        void disableTimer5();
        void enableTimer5();
        void disableUART1();
        void enableUART1();
        void disableUART2();
        void enableUART2();
        void disableSPI1();
        void enableSPI1();
        void disableSPI2();
        void enableSPI2();
        void disableI2C1();
        void enableI2C1();
        void disableI2C2();
        void enableI2C2();
        void disableUSB();
        void enableUSB();
        void disableRTCC();
        void enableRTCC();
        void disableReferenceClockOutput();
        void enableReferenceClockOutput();
        void disableParallelMasterPort();
        void enableParallelMasterPort();

        void disableAllPeripherals();
        void enableAllPeripherals();

        void snooze(unsigned long ms);
};

extern LowPower_ LowPower;

#endif
