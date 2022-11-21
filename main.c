/* Project: Stereo VU meter using 16f1459 microcontroller and Nokia PCD8544 48 x 84 pixels LCD
 * File:   main.c
 * Author: Phil Glazzard
 * MPLABX IDE v6.00
 * XC8 v2.36
 * Optimisations 0
 * Created on 15 November 2022, 18:07
 */


#include <xc.h>
#include "configurationBits.h"
#include "constants.h"
#include "configPins.h"
#include "configOsc.h"
#include "configSPI.h"
#include "configPCD8544.h"
#include "sendSPIbyte.h"
#include "__interrupt.h"
#include "enableInterrupts.h"
#include "clearPCD8544.h"
#include "setAddress.h"
#include "writeData.h"
#include "writeCommand.h"

void main(void) 
{
    uint8_t col, row, page;
    row = 0;
    col = 0;
    configOsc();
    configPins();
    configSPI();
    enableInterrupts();
    configPCD8544();
   __delay_ms(1000);
    clearPCD8544();
 
   
    setAddress(0,0);    // col, page
     writeCommand(0x20);//horizontal addressing
     for(row = 0; row <8; row++)
     {
            writeData(0x01<<row);
     }
   setAddress(8,1);    // col, page
     writeCommand(0x20);//horizontal addressing
     for(row = 0; row <8; row++)
     {
            writeData(0x01<<row);
     }
   
     setAddress(16,2);    // col, page
     writeCommand(0x20);//horizontal addressing
     for(row = 0; row <8; row++)
     {
            writeData(0x01<<row);
     }
    setAddress(24,3);    // col, page
     writeCommand(0x20);//horizontal addressing
     for(row = 0; row <8; row++)
     {
            writeData(0x01<<row);
     }
     setAddress(32,4);    // col, page
     writeCommand(0x20);//horizontal addressing
     for(row = 0; row <8; row++)
     {
            writeData(0x01<<row);
     }
     setAddress(40,5);    // col, page
     writeCommand(0x20);//horizontal addressing
     for(row = 0; row <8; row++)
     {
            writeData(0x01<<row);
     }
    while(1)
    {
     
    }
}
