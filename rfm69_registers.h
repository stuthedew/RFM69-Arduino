/*
    Copyright (c) 2014 Stuart Feichtinger <stuart.feichtinger@gmail.com>

    Permission is hereby granted, free of charge, to any person
    obtaining a copy of this software and associated documentation
    files (the "Software"), to deal in the Software without
    restriction, including without limitation the rights to use, copy,
    modify, merge, publish, distribute, sublicense, and/or sell copies
    of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
    HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
    WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
*/

/*########################################################################*/
/*####################  Common Configuration Registers  ##################*/
/*########################################################################*/


/*   RegFifo register (0x00) - FIFO read/write access
     ====================================================================
     BIT  Symbol    Description                                   Default
     ---  ------    --------------------------------------------- -------
     7:0  FIFO      FIFO data input/output                         0x00

     ===================================================================*/

#define REGFIFO 0x00



/*  REGOPMODE register (0x01) - Operating modes of the transceiver
     ====================================================================
     BIT  Symbol       Description                                     Default
     ---  ------       ---------------------------------------------   -------
      7   SEQ_OFF      Controls the automatic Sequencer (See Sec 4.2)     0

                         0 = Operating mode as selected with Mode bits
                         in REGOPMODE is automatically reached with the
                         Sequencer.

                         1 =  Mode is forced by the user

      6  LISTEN_ON     Enable Listen mode (Only enable from Standby Mode)  0

                         0 = OFF (See Sec 4.3)

                         1 = On

      5 LISTEN_ABORT   Aborts Listen mode when set together with           0
                       ListenOn = 0. (Always reads 0)

      4:2  MODE        Transceiver’s operating modes:                     001

                         ===============================================
                             MODE     |         Description
                         ===============================================
                             000      | Sleep mode (SLEEP)
                             001      | Standby mode (STDBY)
                             010      | Frequency Synthesizer mode (FS)
                             011      | Transmitter mode (TX)
                             100      | Receiver mode (RX)

       1  --           Reserved
       0  --           Reserved
       ===================================================================*/


#define REGOPMODE 0x01


// Data operation mode and Modulation settings
#define REGDATAMODUL 0x02

//Bit Rate setting, Most Significant Bits
#define REGBITRATE_MSB 0x03
//Bit Rate setting, Least Significant Bits
#define REGBITRATE_LSB 0x04

//Frequency Deviation setting, Most Significant Bits
#define REGFDEV_MSB 0x05
//Frequency Deviation setting, Least Significant Bits
#define REGFDEV_LSB 0x06

//RF Carrier Frequency, Most Significant Bits
#define REGFRF_MSB 0x07
//RF Carrier Frequency, Intermediate Bits
#define REGFRF_MID 0x08
//RF Carrier Frequency, Least Significant Bits
#define REGFRF_MID 0x09

//RC Oscillators Settings
#define REGOSC1 0x0A

//AFC control in low modulation index situations
#define REGAFCCTRL 0x0B

//Listen Mode settings
#define REGLISTEN1 0x0D
//Listen Mode Idle duration
#define REGLISTEN2 0x0E
//Listen Mode Rx duration
#define REGLISTEN3 0x0F

#define REGVERSION 0x10

//PA selection and Output Power control
#define REGPALEVEL 0x11

//Control of the PA ramp time in FSK mode
#define REGPARAMP 0x12

//Over Current Protection control
#define REGOCP 0x13

//LNA settings
#define REGLNA 0x18

//Channel Filter BW Control
#define REGRXBW 0x19

//Channel Filter BW control during the AFC routine
#define REGAFCBW 0x1A

//OOK demodulator selection and control in peak mode
#define REGOOKPEAK 0x1B

//Average threshold control of the OOK demodulator
#define REGOOKAVG 0x1C

//Fixed threshold control of the OOK demodulator
#define REGOOKFIX 0x1D

//AFC and FEI control and status
#define REGAFCFEI 0x1E

//MSB of the frequency correction of the AFC
#define REGAFC_MSB 0x1F
//LSB of the frequency correction of the AFC
#define REGADC_LSB 0x20

//MSB of the calculated frequency error
#define REGFEI_MSB 0x21
//LSB of the calculated frequency error
#define REGFEIL_LSB 0x22

//RSSI-related settings
#define REGRSSICONFIG 0x23

//RSSI value in dBm
