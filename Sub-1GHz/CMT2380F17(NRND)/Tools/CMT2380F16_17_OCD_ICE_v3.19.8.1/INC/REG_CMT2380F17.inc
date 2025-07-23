#ifndef __REG_CMT2380F17_INC
#define __REG_CMT2380F17_INC

GF_7        EQU      080h
GF_6        EQU      040h
GF_5        EQU      020h
GF_4        EQU      010h
GF_3        EQU      008h
GF_2        EQU      004h
GF_1        EQU      002h
GF_0        EQU      001h

SP          DATA     081H
DPL         DATA     082H
DPH         DATA     083H

SPSTAT      DATA     084H
;  (bits in SPSTAT)
SPIF        EQU      080h
WCOL        EQU      040h
THRF        EQU      020h
SPIBSY      EQU      010h
MODF        EQU      008h
SPR2        EQU      001h


SPCON       DATA     085H
;  (bits in SPCON)
SSIG        EQU      080h
SPEN        EQU      040h
DORD        EQU      020h
MSTR        EQU      010h
CPOL        EQU      008h
CPHA        EQU      004h
SPR1        EQU      002h
SPR0        EQU      001h

SPDAT       DATA     086H

PCON0       DATA     087H
;  (bits in PCON0)
SMOD1       EQU      080h
SMOD0       EQU      040h
POF0        EQU      010h
PD          EQU      002h
IDL         EQU      001h


TCON        DATA     088H
;  (bits in TCON)
TF1         BIT      TCON.7
TR1         BIT      TCON.6
TF0         BIT      TCON.5
TR0         BIT      TCON.4
IE1         BIT      TCON.3
IT1         BIT      TCON.2
IE0         BIT      TCON.1
IT0         BIT      TCON.0


TMOD        DATA     089H
;  (bits in TMOD)
T1GATE      EQU      080h
T1C_T       EQU      040h
T1M1        EQU      020h
T1M0        EQU      010h
T0GATE      EQU      008h
T0C_T       EQU      004h
T0M1        EQU      002h
T0M0        EQU      001h

TL0         DATA     08AH
TL1         DATA     08BH
TH0         DATA     08CH
TH1         DATA     08DH

SFIE        DATA     08EH
;  (bits in SFIE)
SIDFIE      EQU      080h
RTCFIE      EQU      010h
BOF1IE      EQU      004h
BOF0IE      EQU      002h
WDTFIE      EQU      001h

XRPS        DATA     08FH

P1          DATA     090H
;  (bits in P1)
P17         BIT      P1.7
P16         BIT      P1.6
P15         BIT      P1.5
P11         BIT      P1.1
P10         BIT      P1.0


P1M0        DATA     091H
;  (bits in P1M0)
P1M07       EQU      080h
P1M06       EQU      040h
P1M05       EQU      020h
P1M01       EQU      002h
P1M00       EQU      001h


P1M1        DATA     092H
;  (bits in P1M1)
P1M17       EQU      080h
P1M16       EQU      040h
P1M15       EQU      020h
P1M11       EQU      002h
P1M10       EQU      001h


P2M1        DATA     092H
;  (bits in P2M1)
P2M14       EQU      010h
P2M12       EQU      004h


P4M1        DATA     092H
;  (bits in P4M1)
P4M17       EQU      080h
P4M15       EQU      020h
P4M14       EQU      010h


P6M1        DATA     092H
;  (bits in P6M1)
P6M11       EQU      002h
P6M10       EQU      001h

P3FDC       DATA     092H
P1FDC       DATA     092H
P2FDC       DATA     092H
P4FDC       DATA     092H

T2MOD1      DATA     093H
;  (bits in T2MOD1)
TL2CS       EQU      080h
TF2IG       EQU      040h
TL2IS       EQU      020h
T2CKS       EQU      010h
T2MS1       EQU      008h
CP2S2       EQU      004h
CP2S1       EQU      002h
CP2S0       EQU      001h


T3MOD1      DATA     093H
;  (bits in T3MOD1)
TL3CS       EQU      080h
TF3IG       EQU      040h
T3CKS       EQU      010h
T3MS1       EQU      008h
CP3S2       EQU      004h
CP3S1       EQU      002h
CP3S0       EQU      001h


DMACR0      DATA     094H
;  (bits in DMACR0)
DMAE0       EQU      008h
DMAS0       EQU      004h
DIE0        EQU      002h
DCF0        EQU      001h


DMACG0      DATA     094H
;  (bits in DMACG0)
PDMAH       EQU      080h
PDMAL       EQU      040h
CRCW0       EQU      020h
EXTS10      EQU      008h
EXTS00      EQU      004h
FAEN0       EQU      002h
LOOP0       EQU      001h


DMADS0      DATA     094H
;  (bits in DMADS0)
DSS30       EQU      080h
DSS20       EQU      040h
DSS10       EQU      020h
DSS00       EQU      010h
DDS30       EQU      008h
DDS20       EQU      004h
DDS10       EQU      002h
DDS00       EQU      001h


P2M0        DATA     095H
;  (bits in P2M0)
P2M04       EQU      010h
P2M02       EQU      004h


TREN0       DATA     095H
;  (bits in TREN0)
TR3LE       EQU      040h
TR2LE       EQU      020h
TR3E        EQU      008h
TR2E        EQU      004h
TR1E        EQU      002h
TR0E        EQU      001h


TRLC0       DATA     095H
;  (bits in TRLC0)
TL3RLC      EQU      040h
TL2RLC      EQU      020h
T3RLC       EQU      008h
T2RLC       EQU      004h
T1RLC       EQU      002h
T0RLC       EQU      001h


TSPC0       DATA     095H
;  (bits in TSPC0)
TL3SC       EQU      040h
TL2SC       EQU      020h
T3SC        EQU      008h
T2SC        EQU      004h
T1SC        EQU      002h
T0SC        EQU      001h

BOREV       DATA     096H

PCON1       DATA     097H
;  (bits in PCON1)
SWRF        EQU      080h
EXRF        EQU      040h
RTCF        EQU      010h
BOF1        EQU      004h
BOF0        EQU      002h
WDTF        EQU      001h


S0CON       DATA     098H
;  (bits in S0CON)
SM00_FE     BIT      S0CON.7
SM10        BIT      S0CON.6
SM20        BIT      S0CON.5
REN0        BIT      S0CON.4
TB80        BIT      S0CON.3
RB80        BIT      S0CON.2
TI0         BIT      S0CON.1
RI0         BIT      S0CON.0


S1CON       DATA     098H
;  (bits in S1CON)
SM01        BIT      S1CON.7
SM11        BIT      S1CON.6
SM21        BIT      S1CON.5
REN1        BIT      S1CON.4
TB81        BIT      S1CON.3
RB81        BIT      S1CON.2
TI1         BIT      S1CON.1
RI1         BIT      S1CON.0

S0BUF       DATA     099H
S1BUF       DATA     099H
S0BRT       DATA     09AH
S1BRT       DATA     09AH
S0BRC       DATA     09BH
S1BRC       DATA     09BH

S0CFG       DATA     09CH
;  (bits in S0CFG)
URTS        EQU      080h
SMOD2       EQU      040h
URM0X3      EQU      020h
SM30        EQU      010h
S0DOR       EQU      008h
BTI         EQU      004h
UTIE        EQU      002h
SMOD3       EQU      001h


S1CFG       DATA     09CH
;  (bits in S1CFG)
SM31        EQU      080h
S1M0X3      EQU      040h
S1DOR       EQU      020h
S1TR        EQU      010h
S1MOD1      EQU      008h
S1TX12      EQU      004h
S1CKOE      EQU      002h
S1TME       EQU      001h


S0CFG1      DATA     09DH
;  (bits in S0CFG1)
SBF0        EQU      080h
TXER0       EQU      040h
S0SB16      EQU      020h
ATBR0       EQU      010h
TXRX0       EQU      008h
SYNC0       EQU      004h


P2          DATA     0A0H
;  (bits in P2)
P24         BIT      P2.4
P22         BIT      P2.2


AUXR0       DATA     0A1H
;  (bits in AUXR0)
P60OC1      EQU      080h
P60OC0      EQU      040h
P60FD       EQU      020h
PBKF        EQU      010h
INT1H       EQU      002h
INT0H       EQU      001h


AUXR1       DATA     0A2H
;  (bits in AUXR1)
CRCDS1      EQU      020h
CRCDS0      EQU      010h
DPS         EQU      001h


AUXR2       DATA     0A3H
;  (bits in AUXR2)
STAF        EQU      080h
STOF        EQU      040h
C0PLK       EQU      010h
T1X12       EQU      008h
T0X12       EQU      004h
T1CKOE      EQU      002h
T0CKOE      EQU      001h


AUXR3       DATA     0A4H
;  (bits in AUXR3)
T0PS1       EQU      080h
T0PS0       EQU      040h
BPOC1       EQU      020h
BPOC0       EQU      010h
S0PS0       EQU      008h
TWIPS1      EQU      004h
TWIPS0      EQU      002h
T0XL        EQU      001h


AUXR4       DATA     0A4H
;  (bits in AUXR4)
T2PS1       EQU      080h
T2PS0       EQU      040h
T1PS1       EQU      020h
T1PS0       EQU      010h


AUXR5       DATA     0A4H
;  (bits in AUXR5)
C0IC4S0     EQU      080h
C0IC2S0     EQU      040h
C0PPS1      EQU      020h
C0PPS0      EQU      010h
C0PS0       EQU      004h
ECIPS0      EQU      002h
C0COPS      EQU      001h


AUXR6       DATA     0A4H
;  (bits in AUXR6)
KBI4PS1     EQU      080h
KBI4PS0     EQU      040h
KBI6PS0     EQU      020h
KBI2PS0     EQU      010h
SnMIPS      EQU      002h
S0COPS      EQU      001h


AUXR7       DATA     0A4H
;  (bits in AUXR7)
POE5        EQU      080h
POE4        EQU      040h
C0CKOE      EQU      020h
SPI0M0      EQU      010h


AUXR8       DATA     0A4H
;  (bits in AUXR8)
POE7        EQU      080h
POE6        EQU      040h
C0PPS2      EQU      020h
KBI0PS0     EQU      008h
S1COPS      EQU      004h


AUXR9       DATA     0A4H
;  (bits in AUXR9)
T1G1        EQU      020h
T0G1        EQU      010h
C0FDC1      EQU      008h
C0FDC0      EQU      004h
S1PS1       EQU      002h
S1PS0       EQU      001h


AUXR10      DATA     0A4H
;  (bits in AUXR10)
SPIPS0      EQU      010h
S0PS1       EQU      008h
TWICF       EQU      002h
PAA         EQU      001h


AUXR11      DATA     0A4H
;  (bits in AUXR11)
P30AM       EQU      080h
C0M0        EQU      002h
C0OFS       EQU      001h


EIE2        DATA     0A5H
;  (bits in EIE2)
ET3         EQU      001h


EIP2L       DATA     0A6H
;  (bits in EIP2L)
PT3L        EQU      001h


EIP2H       DATA     0A7H
;  (bits in EIP2H)
PT3H        EQU      001h


IE          DATA     0A8H
;  (bits in IE)
EA          BIT      IE.7
EDMA        BIT      IE.6
ET2         BIT      IE.5
ES0         BIT      IE.4
ET1         BIT      IE.3
EX1         BIT      IE.2
ET0         BIT      IE.1
EX0         BIT      IE.0

SADDR       DATA     0A9H

SFRPI       DATA     0ACH
;  (bits in SFRPI)
IDX3        EQU      008h
IDX2        EQU      004h
IDX1        EQU      002h
IDX0        EQU      001h


EIE1        DATA     0ADH
;  (bits in EIE1)
ETWI0       EQU      040h
EKB         EQU      020h
ES1         EQU      010h
ESF         EQU      008h
EPCA        EQU      004h
EADC        EQU      002h
ESPI        EQU      001h


EIP1L       DATA     0AEH
;  (bits in EIP1L)
PTWI0L      EQU      040h
PKBL        EQU      020h
PS1L        EQU      010h
PSFL        EQU      008h
PPCAL       EQU      004h
PADCL       EQU      002h
PSPIL       EQU      001h


EIP1H       DATA     0AFH
;  (bits in EIP1H)
PTWI0H      EQU      040h
PKBH        EQU      020h
PS1H        EQU      010h
PSFH        EQU      008h
PPCAH       EQU      004h
PADCH       EQU      002h
PSPIH       EQU      001h


P3          DATA     0B0H
;  (bits in P3)
P35         BIT      P3.5
P34         BIT      P3.4
P33         BIT      P3.3
P31         BIT      P3.1
P30         BIT      P3.0


P3M0        DATA     0B1H
;  (bits in P3M0)
P3M05       EQU      020h
P3M04       EQU      010h
P3M03       EQU      008h
P3M01       EQU      002h
P3M00       EQU      001h


P3M1        DATA     0B2H
;  (bits in P3M1)
P3M15       EQU      020h
P3M14       EQU      010h
P3M13       EQU      008h
P3M11       EQU      002h
P3M10       EQU      001h


P4M0        DATA     0B3H
;  (bits in P4M0)
P4M07       EQU      080h
P4M05       EQU      020h
P4M04       EQU      010h


PDRVC0      DATA     0B4H
;  (bits in PDRVC0)
P3DC1       EQU      080h
P3DC0       EQU      040h
P2DC1       EQU      020h
P2DC0       EQU      010h
P1DC1       EQU      008h
P1DC0       EQU      004h


PDRVC1      DATA     0B4H
;  (bits in PDRVC1)
P4DC1       EQU      002h


P6M0        DATA     0B5H
;  (bits in P6M0)
P6M01       EQU      002h
P6M00       EQU      001h


RTCTM       DATA     0B6H
;  (bits in RTCTM)
RTCCS1      EQU      080h
RTCCS0      EQU      040h
RTCCT5      EQU      020h
RTCCT4      EQU      010h
RTCCT3      EQU      008h
RTCCT2      EQU      004h
RTCCT1      EQU      002h
RTCCT0      EQU      001h


IP0H        DATA     0B7H
;  (bits in IP0H)
PX2H        EQU      040h
PT2H        EQU      020h
PSH         EQU      010h
PT1H        EQU      008h
PX1H        EQU      004h
PT0H        EQU      002h
PX0H        EQU      001h


IP0L        DATA     0B8H
;  (bits in IP0L)
PX2L        BIT      IP0L.6
PT2L        BIT      IP0L.5
PSL         BIT      IP0L.4
PT1L        BIT      IP0L.3
PX1L        BIT      IP0L.2
PT0L        BIT      IP0L.1
PX0L        BIT      IP0L.0

SADEN       DATA     0B9H

S0CR1       DATA     0B9H
;  (bits in S0CR1)
S0TR        EQU      080h
S0TX12      EQU      040h
S0TCK       EQU      020h
S0RCK       EQU      010h
S0CKOE      EQU      008h
ARTE        EQU      004h


PWMCR       DATA     0BCH
;  (bits in PWMCR)
PCAE        EQU      080h
EXDT        EQU      040h
PBKM        EQU      020h
PBKE11      EQU      010h
PBKE10      EQU      008h
PBKE02      EQU      004h
PBKE01      EQU      002h
PBKE00      EQU      001h


PDTCRA      DATA     0BCH
;  (bits in PDTCRA)
DTPS1       EQU      080h
DTPS0       EQU      040h
DT5         EQU      020h
DT4         EQU      010h
DT3         EQU      008h
DT2         EQU      004h
DT1         EQU      002h
DT0         EQU      001h

CRC0DA      DATA     0BDH

RTCCR       DATA     0BEH
;  (bits in RTCCR)
RTCE        EQU      080h
RTCO        EQU      040h
RTCRL5      EQU      020h
RTCRL4      EQU      010h
RTCRL3      EQU      008h
RTCRL2      EQU      004h
RTCRL1      EQU      002h
RTCRL0      EQU      001h

CKCON1      DATA     0BFH

XICON       DATA     0C0H
;  (bits in XICON)
INT2H       BIT      XICON.3
EX2         BIT      XICON.2
IE2         BIT      XICON.1
IT2         BIT      XICON.0


XICFG       DATA     0C1H
;  (bits in XICFG)
INT1IS1     EQU      080h
INT1IS0     EQU      040h
INT0IS1     EQU      020h
INT0IS0     EQU      010h
X2FLT       EQU      004h
X1FLT       EQU      002h
X0FLT       EQU      001h


XICFG1      DATA     0C1H
;  (bits in XICFG1)
INT1IS2     EQU      080h
INT0IS2     EQU      040h
INT2IS1     EQU      020h
INT2IS0     EQU      010h
X2FLT1      EQU      004h
X1FLT1      EQU      002h
X0FLT1      EQU      001h


ADCFG0      DATA     0C3H
;  (bits in ADCFG0)
ADCKS2      EQU      080h
ADCKS1      EQU      040h
ADCKS0      EQU      020h
ADRJ        EQU      010h
ACHS        EQU      008h
SMPF        EQU      004h
ADTM1       EQU      002h
ADTM0       EQU      001h


ADCFG1      DATA     0C3H
;  (bits in ADCFG1)
IGADCI      EQU      080h
EADCWI      EQU      040h
SMPFIE      EQU      020h
SIGN        EQU      010h
AOS3        EQU      008h
AOS2        EQU      004h
AOS1        EQU      002h
AOS0        EQU      001h


ADCFG2      DATA     0C3H
;  (bits in ADCFG2)
SHT7        EQU      080h
SHT6        EQU      040h
SHT5        EQU      020h
SHT4        EQU      010h
SHT3        EQU      008h
SHT2        EQU      004h
SHT1        EQU      002h
SHT0        EQU      001h


ADCFG3      DATA     0C3H
;  (bits in ADCFG3)
ADPS1       EQU      080h
ADPS0       EQU      040h
ARES1       EQU      008h
ARES0       EQU      004h
ADES0       EQU      002h


ADCFG4      DATA     0C3H
;  (bits in ADCFG4)
ADWM0       EQU      040h
ADTM3       EQU      020h
ADTM2       EQU      010h
DBSD        EQU      002h


ADCFG5      DATA     0C3H
;  (bits in ADCFG5)
ASCE7       EQU      080h
ASCE6       EQU      040h
ASCE5       EQU      020h
ASCE4       EQU      010h
ASCE3       EQU      008h
ASCE2       EQU      004h
ASCE1       EQU      002h
ASCE0       EQU      001h


ADCFG11     DATA     0C3H
;  (bits in ADCFG11)
WHB3        EQU      080h
WHB2        EQU      040h
WHB1        EQU      020h
WHB0        EQU      010h


ADCFG12     DATA     0C3H
;  (bits in ADCFG12)
WHB11       EQU      080h
WHB10       EQU      040h
WHB9        EQU      020h
WHB8        EQU      010h
WHB7        EQU      008h
WHB6        EQU      004h
WHB5        EQU      002h
WHB4        EQU      001h


ADCFG13     DATA     0C3H
;  (bits in ADCFG13)
WLB3        EQU      080h
WLB2        EQU      040h
WLB1        EQU      020h
WLB0        EQU      010h


ADCFG14     DATA     0C3H
;  (bits in ADCFG14)
WLB11       EQU      080h
WLB10       EQU      040h
WLB9        EQU      020h
WLB8        EQU      010h
WLB7        EQU      008h
WLB6        EQU      004h
WLB5        EQU      002h
WLB4        EQU      001h


ADCON0      DATA     0C4H
;  (bits in ADCON0)
ADCEN       EQU      080h
ADCWI       EQU      040h
CHS3        EQU      020h
ADCI        EQU      010h
ADCS        EQU      008h
CHS2        EQU      004h
CHS1        EQU      002h
CHS0        EQU      001h


ADCDL       DATA     0C5H
;  (bits in ADCDL)
ADCV3       EQU      080h
ADCV2       EQU      040h
ADCV1       EQU      020h
ADCV0       EQU      010h


ADCDH       DATA     0C6H
;  (bits in ADCDH)
ADCV11      EQU      080h
ADCV10      EQU      040h
ADCV9       EQU      020h
ADCV8       EQU      010h
ADCV7       EQU      008h
ADCV6       EQU      004h
ADCV5       EQU      002h
ADCV4       EQU      001h


CKCON0      DATA     0C7H
;  (bits in CKCON0)
AFS         EQU      080h
ENCKM       EQU      040h
CKMIS1      EQU      020h
CKMIS0      EQU      010h
CCKS        EQU      008h
SCKS2       EQU      004h
SCKS1       EQU      002h
SCKS0       EQU      001h


T2CON       DATA     0C8H
;  (bits in T2CON)
TF2         BIT      T2CON.7
EXF2        BIT      T2CON.6
RCLK_TF2L   BIT      T2CON.5
TCLK_TL2IE  BIT      T2CON.4
EXEN2       BIT      T2CON.3
TR2         BIT      T2CON.2
C_T2        BIT      T2CON.1
CP_RL2      BIT      T2CON.0


T3CON       DATA     0C8H
;  (bits in T3CON)
TF3         BIT      T3CON.7
EXF3        BIT      T3CON.6
TF3L        BIT      T3CON.5
TL3IE       BIT      T3CON.4
EXEN3       BIT      T3CON.3
TR3         BIT      T3CON.2
C_T3        BIT      T3CON.1
CP_RL3      BIT      T3CON.0


T5CON       DATA     0C8H
;  (bits in T5CON)
TF5         BIT      T5CON.7
T5CKS1      BIT      T5CON.5
T5CKS0      BIT      T5CON.4
T5IE        BIT      T5CON.3
TR5         BIT      T5CON.2
T5GAT1      BIT      T5CON.1
T5GAT0      BIT      T5CON.0


T6CON       DATA     0C8H
;  (bits in T6CON)
TF6         BIT      T6CON.7
T6CKS1      BIT      T6CON.5
T6CKS0      BIT      T6CON.4
T6IE        BIT      T6CON.3
TR6         BIT      T6CON.2
T6GAT1      BIT      T6CON.1
T6GAT0      BIT      T6CON.0


T2MOD       DATA     0C9H
;  (bits in T2MOD)
T2SPL       EQU      080h
TL2X12      EQU      040h
T2EXH       EQU      020h
T2X12       EQU      010h
TR2L        EQU      008h
TR2LC       EQU      004h
T2OE        EQU      002h
T2MS0       EQU      001h


T3MOD       DATA     0C9H
;  (bits in T3MOD)
T3SPL       EQU      080h
TL3X12      EQU      040h
T3EXH       EQU      020h
T3X12       EQU      010h
TR3L        EQU      008h
TR3LC       EQU      004h
T3OE        EQU      002h
T3MS0       EQU      001h

RCAP2L      DATA     0CAH
RCAP3L      DATA     0CAH
TLR5        DATA     0CAH
TLR6        DATA     0CAH
RCAP2H      DATA     0CBH
RCAP3H      DATA     0CBH
THR5        DATA     0CBH
THR6        DATA     0CBH
TL2         DATA     0CCH
TL3         DATA     0CCH
TL5         DATA     0CCH
TL6         DATA     0CCH
TH2         DATA     0CDH
TH3         DATA     0CDH
TH5         DATA     0CDH
TH6         DATA     0CDH
CLRL        DATA     0CEH
CHRL        DATA     0CFH

PSW         DATA     0D0H
;  (bits in PSW)
CY          BIT      PSW.7
AC          BIT      PSW.6
F0          BIT      PSW.5
RS1         BIT      PSW.4
RS0         BIT      PSW.3
OV          BIT      PSW.2
F1          BIT      PSW.1
P           BIT      PSW.0


SIADR       DATA     0D1H
;  (bits in SIADR)
GC          EQU      001h

SIDAT       DATA     0D2H
SISTA       DATA     0D3H

SICON       DATA     0D4H
;  (bits in SICON)
CR2         EQU      080h
ENSI        EQU      040h
STA         EQU      020h
STO         EQU      010h
SI          EQU      008h
AA          EQU      004h
CR1         EQU      002h
CR0         EQU      001h

KBPATN      DATA     0D5H

KBCON       DATA     0D6H
;  (bits in KBCON)
KBCS1       EQU      080h
KBCS0       EQU      040h
KBES        EQU      020h
PATN_SEL    EQU      002h
KBIF        EQU      001h

KBMASK      DATA     0D7H

CCON        DATA     0D8H
;  (bits in CCON)
CF          BIT      CCON.7
CR          BIT      CCON.6
CCF5        BIT      CCON.5
CCF4        BIT      CCON.4
CCF3        BIT      CCON.3
CCF2        BIT      CCON.2
CCF1        BIT      CCON.1
CCF0        BIT      CCON.0


CMOD        DATA     0D9H
;  (bits in CMOD)
CIDL        EQU      080h
BME4        EQU      040h
BME2        EQU      020h
BME0        EQU      010h
CPS2        EQU      008h
CPS1        EQU      004h
CPS0        EQU      002h
ECF         EQU      001h


CCAPM0      DATA     0DAH
;  (bits in CCAPM0)
DTE0        EQU      080h
ECOM0       EQU      040h
CAPP0       EQU      020h
CAPN0       EQU      010h
MAT0        EQU      008h
TOG0        EQU      004h
PWM0        EQU      002h
ECCF0       EQU      001h


CCAPM6      DATA     0DAH
;  (bits in CCAPM6)
BME6        EQU      080h
ECOM6       EQU      040h
CAPN6       EQU      010h
MAT6        EQU      008h
TOG6        EQU      004h
PWM6        EQU      002h
ECCF6       EQU      001h


CCAPM1      DATA     0DBH
;  (bits in CCAPM1)
ECOM1       EQU      040h
CAPP1       EQU      020h
CAPN1       EQU      010h
MAT1        EQU      008h
TOG1        EQU      004h
PWM1        EQU      002h
ECCF1       EQU      001h


CCAPM7      DATA     0DBH
;  (bits in CCAPM7)
ECOM7       EQU      040h
CAPN7       EQU      010h
MAT7        EQU      008h
TOG7        EQU      004h
PWM7        EQU      002h
ECCF7       EQU      001h


CCAPM2      DATA     0DCH
;  (bits in CCAPM2)
DTE2        EQU      080h
ECOM2       EQU      040h
CAPP2       EQU      020h
CAPN2       EQU      010h
MAT2        EQU      008h
TOG2        EQU      004h
PWM2        EQU      002h
ECCF2       EQU      001h


CCAPM3      DATA     0DDH
;  (bits in CCAPM3)
ECOM3       EQU      040h
CAPP3       EQU      020h
CAPN3       EQU      010h
MAT3        EQU      008h
TOG3        EQU      004h
PWM3        EQU      002h
ECCF3       EQU      001h


CCAPM4      DATA     0DEH
;  (bits in CCAPM4)
DTE4        EQU      080h
ECOM4       EQU      040h
CAPP4       EQU      020h
CAPN4       EQU      010h
MAT4        EQU      008h
TOG4        EQU      004h
PWM4        EQU      002h
ECCF4       EQU      001h


CCAPM5      DATA     0DFH
;  (bits in CCAPM5)
ECOM5       EQU      040h
CAPP5       EQU      020h
CAPN5       EQU      010h
MAT5        EQU      008h
TOG5        EQU      004h
PWM5        EQU      002h
ECCF5       EQU      001h

ACC         DATA     0E0H

WDTCR       DATA     0E1H
;  (bits in WDTCR)
WREN        EQU      080h
NSW         EQU      040h
ENW         EQU      020h
CLRW        EQU      010h
WIDL        EQU      008h
PS2         EQU      004h
PS1         EQU      002h
PS0         EQU      001h

IFD         DATA     0E2H
IFADRH      DATA     0E3H
IFADRL      DATA     0E4H

IFMT        DATA     0E5H
;  (bits in IFMT)
MS7         EQU      080h
MS2         EQU      004h
MS1         EQU      002h
MS0         EQU      001h

SCMD        DATA     0E6H

ISPCR       DATA     0E7H
;  (bits in ISPCR)
ISPEN       EQU      080h
SWBS        EQU      040h
SRST        EQU      020h
CFAIL       EQU      010h


P4          DATA     0E8H
;  (bits in P4)
P47         BIT      P4.7
P45         BIT      P4.5
P44         BIT      P4.4

CL          DATA     0E9H
CCAP0L      DATA     0EAH
CCAP6L      DATA     0EAH
CCAP1L      DATA     0EBH
CCAP7L      DATA     0EBH
CCAP2L      DATA     0ECH
CCAP3L      DATA     0EDH
CCAP4L      DATA     0EEH
CCAP5L      DATA     0EFH
B           DATA     0F0H

PAOE        DATA     0F1H
;  (bits in PAOE)
POE3        EQU      080h
POE2B       EQU      040h
POE2A       EQU      020h
POE2        EQU      010h
POE1        EQU      008h
POE0B       EQU      004h
POE0A       EQU      002h
POE0        EQU      001h


PCAPWM0     DATA     0F2H
;  (bits in PCAPWM0)
P0RS1       EQU      080h
P0RS0       EQU      040h
P0INV       EQU      004h
ECAP0H      EQU      002h
ECAP0L      EQU      001h


PCAPWM6     DATA     0F2H
;  (bits in PCAPWM6)
P6RS1       EQU      080h
P6RS0       EQU      040h
CCF6        EQU      008h
P6INV       EQU      004h
ECAP6H      EQU      002h
ECAP6L      EQU      001h


PCAPWM1     DATA     0F3H
;  (bits in PCAPWM1)
P1RS1       EQU      080h
P1RS0       EQU      040h
P1INV       EQU      004h
ECAP1H      EQU      002h
ECAP1L      EQU      001h


PCAPWM7     DATA     0F3H
;  (bits in PCAPWM7)
P7RS1       EQU      080h
P7RS0       EQU      040h
CCF7        EQU      008h
P7INV       EQU      004h
ECAP7H      EQU      002h
ECAP7L      EQU      001h


PCAPWM2     DATA     0F4H
;  (bits in PCAPWM2)
P2RS1       EQU      080h
P2RS0       EQU      040h
P2INV       EQU      004h
ECAP2H      EQU      002h
ECAP2L      EQU      001h


PCAPWM3     DATA     0F5H
;  (bits in PCAPWM3)
P3RS1       EQU      080h
P3RS0       EQU      040h
P3INV       EQU      004h
ECAP3H      EQU      002h
ECAP3L      EQU      001h


PCAPWM4     DATA     0F6H
;  (bits in PCAPWM4)
P4RS1       EQU      080h
P4RS0       EQU      040h
P4INV       EQU      004h
ECAP4H      EQU      002h
ECAP4L      EQU      001h


PCAPWM5     DATA     0F7H
;  (bits in PCAPWM5)
P5RS1       EQU      080h
P5RS0       EQU      040h
P5INV       EQU      004h
ECAP5H      EQU      002h
ECAP5L      EQU      001h


P6          DATA     0F8H
;  (bits in P6)
P61         BIT      P6.1
P60         BIT      P6.0

CH          DATA     0F9H
CCAP0H      DATA     0FAH
CCAP6H      DATA     0FAH
CCAP1H      DATA     0FBH
CCAP7H      DATA     0FBH
CCAP2H      DATA     0FCH
CCAP3H      DATA     0FDH
CCAP4H      DATA     0FEH
CCAP5H      DATA     0FFH

//===== Page P =====//

IAPLB_P     EQU      003h
;  (bits in IAPLB)
IAPLB6_P    EQU      080h
IAPLB5_P    EQU      040h
IAPLB4_P    EQU      020h
IAPLB3_P    EQU      010h
IAPLB2_P    EQU      008h
IAPLB1_P    EQU      004h
IAPLB0_P    EQU      002h


CKCON2_P    EQU      040h
;  (bits in CKCON2)
IHRCOE_P    EQU      010h
MCKS1_P     EQU      008h
MCKS0_P     EQU      004h
OSCS1_P     EQU      002h
OSCS0_P     EQU      001h


CKCON3_P    EQU      041h
;  (bits in CKCON3)
WDTCS1_P    EQU      080h
WDTCS0_P    EQU      040h
FWKP_P      EQU      020h
WDTFS_P     EQU      010h
MCKD1_P     EQU      008h
MCKD0_P     EQU      004h


CKCON4_P    EQU      042h
;  (bits in CKCON4)
RCSS2_P     EQU      080h
RCSS1_P     EQU      040h
RCSS0_P     EQU      020h
RPSC2_P     EQU      010h
RPSC1_P     EQU      008h
RPSC0_P     EQU      004h
RTCCS3_P    EQU      002h
RTCCS2_P    EQU      001h


CKCON5_P    EQU      043h
;  (bits in CKCON5)
CKMS0_P     EQU      001h


PCON2_P     EQU      044h
;  (bits in PCON2)
AWBOD1_P    EQU      080h
AWBOD0_P    EQU      040h
BO1S1_P     EQU      020h
BO1S0_P     EQU      010h
BO1RE_P     EQU      008h
EBOD1_P     EQU      004h
BO0RE_P     EQU      002h


PCON3_P     EQU      045h
;  (bits in PCON3)
IVREN_P     EQU      080h


SPCON0_P    EQU      048h
;  (bits in SPCON0)
P6CTL_P     EQU      040h
P4CTL_P     EQU      020h
WRCTL_P     EQU      010h
CKCTL0_P    EQU      004h
PWCTL1_P    EQU      002h
PWCTL0_P    EQU      001h


DCON0_P     EQU      04Ch
;  (bits in DCON0)
HSE_P       EQU      080h
IAPO_P      EQU      040h
HSE1_P      EQU      020h
IORCTL_P    EQU      004h
RSTIO_P     EQU      002h
OCDE_P      EQU      001h


RTCCR_P     EQU      054h
;  (bits in RTCCR)
RTCE_P      EQU      080h
RTCO_P      EQU      040h
RTCRL5_P    EQU      020h
RTCRL4_P    EQU      010h
RTCRL3_P    EQU      008h
RTCRL2_P    EQU      004h
RTCRL1_P    EQU      002h
RTCRL0_P    EQU      001h


RTCTM_P     EQU      055h
;  (bits in RTCTM)
RTCCS1_P    EQU      080h
RTCCS0_P    EQU      040h
RTCCT5_P    EQU      020h
RTCCT4_P    EQU      010h
RTCCT3_P    EQU      008h
RTCCT2_P    EQU      004h
RTCCT1_P    EQU      002h
RTCCT0_P    EQU      001h


PCON0_P     EQU      080h
;  (bits in PCON0)
SMOD1_P     EQU      080h
SMOD0_P     EQU      040h
POF0_P      EQU      010h
PD_P        EQU      002h
IDL_P       EQU      001h


PCON1_P     EQU      097h
;  (bits in PCON1)
SWRF_P      EQU      080h
EXRF_P      EQU      040h
RTCF_P      EQU      010h
BOF1_P      EQU      004h
BOF0_P      EQU      002h
WDTF_P      EQU      001h


CKCON0_P    EQU      0C7h
;  (bits in CKCON0)
AFS_P       EQU      080h
ENCKM_P     EQU      040h
CKMIS1_P    EQU      020h
CKMIS0_P    EQU      010h
CCKS_P      EQU      008h
SCKS2_P     EQU      004h
SCKS1_P     EQU      002h
SCKS0_P     EQU      001h


WDTCR_P     EQU      0E1h
;  (bits in WDTCR)
WREN_P      EQU      080h
NSW_P       EQU      040h
ENW_P       EQU      020h
CLRW_P      EQU      010h
WIDL_P      EQU      008h
PS2_P       EQU      004h
PS1_P       EQU      002h
PS0_P       EQU      001h


P4_P        EQU      0E8h
;  (bits in P4)
P47_P       EQU      080h
P45_P       EQU      020h
P44_P       EQU      010h


P6_P        EQU      0F8h
;  (bits in P6)
P61_P       EQU      002h
P60_P       EQU      001h

#endif
