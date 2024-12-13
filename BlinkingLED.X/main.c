/*
 * File:   main.c
 * Author: No_One
 *
 * Created on December 8, 2024, 2:06 PM
 */


#include <xc.h>
#include "config.h"
  
#define _XTAL_FREQ 48000000

void main(void) {
    
    TRISD0 = 0;// OUTPUT
    TRISD2 = 1;// INPUT
    while(1){
        if(PORTDbits.RD2){
            RD0  = 1;
        }
        else{
        RD0 = 0;
        }
        
        
     
    }
    return;
}
