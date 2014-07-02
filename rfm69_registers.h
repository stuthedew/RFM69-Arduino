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

#define REG_FIFO 0x00



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

//Register
#define REG_OP_MODE 0x01
  #define SEQ_OFF 7
  #define LISTEN_ON 6
  #define LISTEN_ABORT 5
  #define RF_SLEEP 0b000
  #define RF_STDBY 0b001
  


// Data operation mode and Modulation settings
#define REG_DATA_MODUL 0x02

//Bit Rate setting, Most Significant Bits
#define REG_BITRATE_MSB 0x03
//Bit Rate setting, Least Significant Bits
#define REG_BITRATE_LSB 0x04

//Frequency Deviation setting, Most Significant Bits
#define REG_FDEV_MSB 0x05
//Frequency Deviation setting, Least Significant Bits
#define REG_FDEV_LSB 0x06

//RF Carrier Frequency, Most Significant Bits
#define REG_FRF_MSB 0x07
//RF Carrier Frequency, Intermediate Bits
#define REG_FRF_MID 0x08
//RF Carrier Frequency, Least Significant Bits
#define REG_FRF_MID 0x09

//RC Oscillators Settings
#define REG_OSC1 0x0A

//AFC control in low modulation index situations
#define REG_AFC_CTRL 0x0B

//Listen Mode settings
#define REG_LISTEN1 0x0D
//Listen Mode Idle duration
#define REG_LISTEN2 0x0E
//Listen Mode Rx duration
#define REG_LISTEN3 0x0F

#define REG_VERSION 0x10

//PA selection and Output Power control
#define REG_PA_LEVEL 0x11

//Control of the PA ramp time in FSK mode
#define REG_PA_RAMP 0x12

//Over Current Protection control
#define REG_OCP 0x13

//LNA settings
#define REG_LNA 0x18

//Channel Filter BW Control
#define REG_RX_BW 0x19

//Channel Filter BW control during the AFC routine
#define REG_AFC_BW 0x1A

//OOK demodulator selection and control in peak mode
#define REG_OOK_PEAK 0x1B

//Average threshold control of the OOK demodulator
#define REG_OOK_AVG 0x1C

//Fixed threshold control of the OOK demodulator
#define REG_OOK_FIX 0x1D

//AFC and FEI control and status
#define REG_AFC_FEI 0x1E

//MSB of the frequency correction of the AFC
#define REG_AFC_MSB 0x1F
//LSB of the frequency correction of the AFC
#define REG_ADC_LSB 0x20

//MSB of the calculated frequency error
#define REG_FEI_MSB 0x21
//LSB of the calculated frequency error
#define REG_FEIL_LSB 0x22

//RSSI-related settings
#define REG_RSSI_CONFIG 0x23

//RSSI value in dBm
#define REG_RSSI_VALUE 0x24

//Mapping of pins DIO0 to DIO3
#define REG_DIO_MAPPING1 0x25
//Mapping of pins DIO4 and DIO5, ClkOut frequency
#define REG_DIO_MAPPING2 0x26

//Status REGister: PLL Lock state, Timeout, RSSI > Threshold
#define REG_IRQ_FLAGS1 0x27
//Status REGister: FIFO handling flags
#define REG_IRQ_FLAGS2 0x28

//RSSI Threshold control
#define REG_RSSI_THRESH 0x29

//Timeout duration between Rx request and RSSI detection
#define REG_RX_TIMEOUT1 0x2A
//Timeout duration between RSSI detection and PayloadReady
#define REG_RX_TIMEOUT2 0x2B

//Preamble length, MSB
#define REG_PREAMBLE_MSB 0x2C
//Preamble length, LSB
#define REG_PREAMBLE_LSB 0x2D

//Sync Word Recognition control
#define REG_SYNC_CONFIG 0x2E

//Sync Word bytes
#define REG_SYNC_VALUE1 0x2F
#define REG_SYNC_VALUE2 0x30
#define REG_SYNC_VALUE3 0x31
#define REG_SYNC_VALUE4 0x32
#define REG_SYNC_VALUE5 0x33
#define REG_SYNC_VALUE6 0x34
#define REG_SYNC_VALUE7 0x35
#define REG_SYNC_VALUE8 0x36

//Packet mode settings
#define REG_PACKET_CONFIG1 0x37

//Payload length setting
#define REG_PAYLOAD_LENGTH 0x38

//Node address
#define REG_NODE_ADRS 0x39

//Broadcast address
#define REG_BROADCAST_ADRS 0x3A

//Auto modes settings
#define REG_AUTO_MODES 0x3B

//Fifo threshold, Tx start condition
#define REG_FIFO_THRESH 0x3C

//Packet mode settings
#define REG_PACKET_CONFIG2 0x3D

//16 bytes of the cypher key
#define REG_AES_KEY1 0x3E
#define REG_AES_KEY2 0x3F
#define REG_AES_KEY3 0x40
#define REG_AES_KEY4 0x41
#define REG_AES_KEY5 0x42
#define REG_AES_KEY6 0x43
#define REG_AES_KEY7 0x44
#define REG_AES_KEY8 0x45
#define REG_AES_KEY9 0x46
#define REG_AES_KEY10 0x47
#define REG_AES_KEY11 0x48
#define REG_AES_KEY12 0x49
#define REG_AES_KEY13 0x4A
#define REG_AES_KEY14 0x4B
#define REG_AES_KEY15 0x4C
#define REG_AES_KEY16 0x4D

//Temperature Sensor control
#define REG_TEMP1 0x4E

//Temperature readout
#define REG_TEMP2 0x4F

//Sensitivity boost
#define REG_TEST_LNA 0x58

//High Power PA settings
#define REG_TEST_PA1 0x5A
#define REG_TEST_PA2 0x5B

//Fading Margin Improvement
#define REG_TEST_DAGC 0x6F

//AFC offset for low modulation index AFC
#define REG_TEST_AFC 0x71
