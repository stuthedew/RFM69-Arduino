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



#define REGDATAMODUL 0x02


#define REGBITRATE_MSB 0x03
#define REGBITRATE_LSB 0x04


#define REGFDEV_MSB 0x05
#define REGFDEV_LSB 0x06

#define REGFRF_MSB 0x07
#define REGFRF_LSB 0x08

#define REGOSC1 0x0A

#define REGAFCCTRL 0x0B

#define REGLISTEN1 0x0D
