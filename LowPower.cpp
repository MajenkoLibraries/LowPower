#include <LowPower.h>

LowPower_ LowPower;

void LowPower_::enterSleepMode() {
    // Standard unlock sequence
    SYSKEY = 0x0;
    SYSKEY = 0xAA996655;
    SYSKEY = 0x556699AA;
    OSCCONSET = 0x10; // Enable sleep mode
    SYSKEY = 0x0;

    asm volatile("mfc0 $26, $12");
    asm volatile("ins $26, $0, 10, 3");
    asm volatile("mtc0 $26, $12");
    asm volatile("wait");
//    while (OSCCONbits.SLOCK == 0);
}

void LowPower_::enterIdleMode() {
    // Standard unlock sequence
    SYSKEY = 0x0;
    SYSKEY = 0xAA996655;
    SYSKEY = 0x556699AA;
    OSCCONCLR = 0x10; // Enable idle mode
    SYSKEY = 0x0;

    asm volatile("mfc0 $26, $12");
    asm volatile("ins $26, $0, 10, 3");
    asm volatile("mtc0 $26, $12");
    asm volatile("wait");
//    while (OSCCONbits.SLOCK == 0);
}

void LowPower_::disableADC() {
#ifdef __PIC32_PPS__
    PMD1SET = 1<<0;
#endif
}

void LowPower_::enableADC() {
#ifdef __PIC32_PPS__
    PMD1CLR = 1<<0;
#endif
}

void LowPower_::disableCTMU() {
#ifdef __PIC32_PPS__
    PMD1SET = 1<<8;
#endif
}

void LowPower_::enableCTMU() {
#ifdef __PIC32_PPS__
    PMD1CLR = 1<<8;
#endif
}

void LowPower_::disableComparatorVoltageReference() {
#ifdef __PIC32_PPS__
    PMD1SET = 1<<12;
#endif
}

void LowPower_::enableComparatorVoltageReference() {
#ifdef __PIC32_PPS__
    PMD1CLR = 1<<12;
#endif
}

void LowPower_::disableComparator1() {
#ifdef __PIC32_PPS__
    PMD2SET = 1<<0;
#endif
}

void LowPower_::enableComparator1() {
#ifdef __PIC32_PPS__
    PMD2CLR = 1<<0;
#endif
}

void LowPower_::disableComparator2() {
#ifdef __PIC32_PPS__
    PMD2SET = 1<<1;
#endif
}

void LowPower_::enableComparator2() {
#ifdef __PIC32_PPS__
    PMD2CLR = 1<<1;
#endif
}

void LowPower_::disableComparator3() {
#ifdef __PIC32_PPS__
    PMD2SET = 1<<2;
#endif
}

void LowPower_::enableComparator3() {
#ifdef __PIC32_PPS__
    PMD2CLR = 1<<2;
#endif
}

void LowPower_::disableInputCapture1() {
#ifdef __PIC32_PPS__
    PMD3SET = 1<<0;
#endif
}

void LowPower_::enableInputCapture1() {
#ifdef __PIC32_PPS__
    PMD3CLR = 1<<0;
#endif
}

void LowPower_::disableInputCapture2() {
#ifdef __PIC32_PPS__
    PMD3SET = 1<<1;
#endif
}

void LowPower_::enableInputCapture2() {
#ifdef __PIC32_PPS__
    PMD3CLR = 1<<1;
#endif
}

void LowPower_::disableInputCapture3() {
#ifdef __PIC32_PPS__
    PMD3SET = 1<<2;
#endif
}

void LowPower_::enableInputCapture3() {
#ifdef __PIC32_PPS__
    PMD3CLR = 1<<2;
#endif
}

void LowPower_::disableInputCapture4() {
#ifdef __PIC32_PPS__
    PMD3SET = 1<<3;
#endif
}

void LowPower_::enableInputCapture4() {
#ifdef __PIC32_PPS__
    PMD3CLR = 1<<3;
#endif
}

void LowPower_::disableInputCapture5() {
#ifdef __PIC32_PPS__
    PMD3SET = 1<<4;
#endif
}

void LowPower_::enableInputCapture5() {
#ifdef __PIC32_PPS__
    PMD3CLR = 1<<4;
#endif
}

void LowPower_::disableOutputCompare1() {
#ifdef __PIC32_PPS__
    PMD3SET = 1<<16;
#endif
}

void LowPower_::enableOutputCompare1() {
#ifdef __PIC32_PPS__
    PMD3CLR = 1<<16;
#endif
}

void LowPower_::disableOutputCompare2() {
#ifdef __PIC32_PPS__
    PMD3SET = 1<<17;
#endif
}

void LowPower_::enableOutputCompare2() {
#ifdef __PIC32_PPS__
    PMD3CLR = 1<<17;
#endif
}

void LowPower_::disableOutputCompare3() {
#ifdef __PIC32_PPS__
    PMD3SET = 1<<18;
#endif
}

void LowPower_::enableOutputCompare3() {
#ifdef __PIC32_PPS__
    PMD3CLR = 1<<18;
#endif
}

void LowPower_::disableOutputCompare4() {
#ifdef __PIC32_PPS__
    PMD3SET = 1<<19;
#endif
}

void LowPower_::enableOutputCompare4() {
#ifdef __PIC32_PPS__
    PMD3CLR = 1<<19;
#endif
}

void LowPower_::disableOutputCompare5() {
#ifdef __PIC32_PPS__
    PMD3SET = 1<<20;
#endif
}

void LowPower_::enableOutputCompare5() {
#ifdef __PIC32_PPS__
    PMD3CLR = 1<<20;
#endif
}

void LowPower_::disableTimer1() {
#ifdef __PIC32_PPS__
    PMD4SET = 1<<0;
#endif
}

void LowPower_::enableTimer1() {
#ifdef __PIC32_PPS__
    PMD4CLR = 1<<0;
#endif
}

void LowPower_::disableTimer2() {
#ifdef __PIC32_PPS__
    PMD4SET = 1<<1;
#endif
}

void LowPower_::enableTimer2() {
#ifdef __PIC32_PPS__
    PMD4CLR = 1<<1;
#endif
}

void LowPower_::disableTimer3() {
#ifdef __PIC32_PPS__
    PMD4SET = 1<<2;
#endif
}

void LowPower_::enableTimer3() {
#ifdef __PIC32_PPS__
    PMD4CLR = 1<<2;
#endif
}

void LowPower_::disableTimer4() {
#ifdef __PIC32_PPS__
    PMD4SET = 1<<3;
#endif
}

void LowPower_::enableTimer4() {
#ifdef __PIC32_PPS__
    PMD4CLR = 1<<3;
#endif
}

void LowPower_::disableTimer5() {
#ifdef __PIC32_PPS__
    PMD4SET = 1<<4;
#endif
}

void LowPower_::enableTimer5() {
#ifdef __PIC32_PPS__
    PMD4CLR = 1<<4;
#endif
}

void LowPower_::disableUART1() {
#ifdef __PIC32_PPS__
    PMD5SET = 1<<0;
#endif
}

void LowPower_::enableUART1() {
#ifdef __PIC32_PPS__
    PMD5CLR = 1<<0;
#endif
}

void LowPower_::disableUART2() {
#ifdef __PIC32_PPS__
    PMD5SET = 1<<1;
#endif
}

void LowPower_::enableUART2() {
#ifdef __PIC32_PPS__
    PMD5CLR = 1<<1;
#endif
}

void LowPower_::disableSPI1() {
#ifdef __PIC32_PPS__
    PMD5SET = 1<<8;
#endif
}

void LowPower_::enableSPI1() {
#ifdef __PIC32_PPS__
    PMD5CLR = 1<<8;
#endif
}

void LowPower_::disableSPI2() {
#ifdef __PIC32_PPS__
    PMD5SET = 1<<9;
#endif
}

void LowPower_::enableSPI2() {
#ifdef __PIC32_PPS__
    PMD5CLR = 1<<9;
#endif
}

void LowPower_::disableI2C1() {
#ifdef __PIC32_PPS__
    PMD5SET = 1<<16;
#endif
}

void LowPower_::enableI2C1() {
#ifdef __PIC32_PPS__
    PMD5CLR = 1<<16;
#endif
}

void LowPower_::disableI2C2() {
#ifdef __PIC32_PPS__
    PMD5SET = 1<<17;
#endif
}

void LowPower_::enableI2C2() {
#ifdef __PIC32_PPS__
    PMD5CLR = 1<<17;
#endif
}

void LowPower_::disableUSB() {
#ifdef __PIC32_PPS__
    PMD5SET = 1<<24;
#endif
}

void LowPower_::enableUSB() {
#ifdef __PIC32_PPS__
    PMD5CLR = 1<<24;
#endif
}

void LowPower_::disableRTCC() {
#ifdef __PIC32_PPS__
    PMD6SET = 1<<0;
#endif
}

void LowPower_::enableRTCC() {
#ifdef __PIC32_PPS__
    PMD6CLR = 1<<0;
#endif
}

void LowPower_::disableReferenceClockOutput() {
#ifdef __PIC32_PPS__
    PMD6SET = 1<<1;
#endif
}

void LowPower_::enableReferenceClockOutput() {
#ifdef __PIC32_PPS__
    PMD6CLR = 1<<1;
#endif
}

void LowPower_::disableParallelMasterPort() {
#ifdef __PIC32_PPS__
    PMD6SET = 1<<16;
#endif
}

void LowPower_::enableParallelMasterPort() {
#ifdef __PIC32_PPS__
    PMD6CLR = 1<<16;
#endif
}

void LowPower_::disableAllPeripherals() {
#ifdef __PIC32_PPS__
    PMD0 = 0xFFFFFFFFUL;
    PMD1 = 0xFFFFFFFFUL;
    PMD2 = 0xFFFFFFFFUL;
    PMD3 = 0xFFFFFFFFUL;
    PMD4 = 0xFFFFFFFFUL;
    PMD5 = 0xFFFFFFFFUL;
#endif
}

void LowPower_::disableAllPeripheralsExceptUSB() {
#ifdef __PIC32_PPS__
    PMD0 = 0xFFFFFFFFUL;
    PMD1 = 0xFFFFFFFFUL;
    PMD2 = 0xFFFFFFFFUL;
    PMD3 = 0xFFFFFFFFUL;
    PMD4 = 0xFFFFFFFFUL;
    PMD5 = 0xFEFFFFFFUL;
#endif
}

void LowPower_::enableAllPeripherals() {
#ifdef __PIC32_PPS__
    PMD0 = 0x00000000UL;
    PMD1 = 0x00000000UL;
    PMD2 = 0x00000000UL;
    PMD3 = 0x00000000UL;
    PMD4 = 0x00000000UL;
    PMD5 = 0x00000000UL;
#endif
}

static void __USER_ISR _timerWakeup() {
    clearIntFlag(_TIMER_5_IRQ);
}

void LowPower_::snooze(unsigned long ms) {
    uint32_t f_pb = getPeripheralClock();

    if (switchToLPRC()) {
        f_pb = 31250;
    }

    float baseclock = f_pb;
    uint8_t ps = 0;

    float f = 1.0 / (ms / 1000.0);

    if (baseclock / f > 0xFFFFFFFF) {
        baseclock = f_pb / 2;
        ps = 1;
    }

    if (baseclock / f > 0xFFFFFFFF) {
        baseclock = f_pb / 4;
        ps = 2;
    }

    if (baseclock / f > 0xFFFFFFFF) {
        baseclock = f_pb / 8;
        ps = 3;
    }

    if (baseclock / f > 0xFFFFFFFF) {
        baseclock = f_pb / 8;
        ps = 3;
    }

    if (baseclock / f > 0xFFFFFFFF) {
        baseclock = f_pb / 16;
        ps = 4;
    }

    if (baseclock / f > 0xFFFFFFFF) {
        baseclock = f_pb / 32;
        ps = 5;
    }

    if (baseclock / f > 0xFFFFFFFF) {
        baseclock = f_pb / 64;
        ps = 6;
    }

    if (baseclock / f > 0xFFFFFFFF) {
        baseclock = f_pb / 256;
        ps = 7;
    }

    uint32_t tcon4 = T4CON;
    uint32_t tpr4 = PR4;
    uint32_t tmr4 = TMR4;

    uint32_t tcon5 = T5CON;
    uint32_t tpr5 = PR5;
    uint32_t tmr5 = TMR5;

    int ipl;
    int spl;

    T4CON = 0;
    T5CON = 0;

    T4CONbits.TCKPS = ps;
    T4CONbits.T32 = 1;

    uint32_t pr = baseclock / f;

    PR4 = pr & 0xFFFF;
    PR5 = pr >> 16;

    isrFunc origIsr = setIntVector(_TIMER_5_VECTOR, _timerWakeup);
    getIntPriority(_TIMER_5_VECTOR, &ipl, &spl);
    setIntPriority(_TIMER_5_VECTOR, 5, 0);
    int en = setIntEnable(_TIMER_5_IRQ);
    clearIntFlag(_TIMER_5_IRQ);
    
    TMR4 = 0;
    TMR5 = 0;
    // If we're going to do this we need to ensure the two timers are enabled!
    enableTimer4();
    enableTimer5();

    int cten = clearIntEnable(_CORE_TIMER_IRQ);
    T4CONbits.TON = 1;
    enterIdleMode();
    restoreIntEnable(_CORE_TIMER_IRQ, cten);

    T4CONbits.TON = 0;
    setIntPriority(_TIMER_5_VECTOR, ipl, spl);
    setIntVector(_TIMER_5_VECTOR, origIsr);
    restoreIntEnable(_TIMER_5_IRQ, en);

    T5CON = tcon5;
    PR5 = tpr5;
    TMR5 = tmr5;
    T4CON = tcon4;
    PR4 = tpr4;
    TMR4 = tmr4;
    restoreSystemClock();
}

bool LowPower_::switchToLPRC() {
    int i = disableInterrupts();
    _originalClockSettings = OSCCONbits.COSC;
    SYSKEY = 0x0;
    SYSKEY = 0xAA996655;
    SYSKEY = 0x556699AA;
    OSCCONbits.NOSC = 0b101;
    OSCCONbits.OSWEN = 1;
    SYSKEY = 0x0;
    restoreInterrupts(i);
    while (OSCCONbits.OSWEN == 1);
    return (OSCCONbits.COSC == 0b101);
}

void LowPower_::restoreSystemClock() {
    int i = disableInterrupts();
    SYSKEY = 0x0;
    SYSKEY = 0xAA996655;
    SYSKEY = 0x556699AA;
    OSCCONbits.NOSC = _originalClockSettings;
    OSCCONbits.OSWEN = 1;
    SYSKEY = 0x0;
    restoreInterrupts(i);
    while (OSCCONbits.OSWEN == 1);
} 

bool LowPower_::isRunningFromLPRC() {
    return (OSCCONbits.COSC == 0b101);
}

void LowPower_::sleepWithTheDog() {
    WDTCONSET = 1<<15; // Turn on
    WDTCONSET = 0x01; // Kick the dog!
    int r = disableInterrupts();
    enterSleepMode();
    restoreInterrupts(r);
    WDTCONCLR = 1<<15; // Turn off
}
