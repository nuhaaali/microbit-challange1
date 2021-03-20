/*
Author: Mariyam Nuha Ali
description: stay safe and wear mask
*/

#include "MicroBit.h"

MicroBit uBit;

int main()
{
    // Initialise the micro:bit runtime.
    uBit.init();

    // Insert your code here!
    uBit.display.scroll("HELLO WORLD! ");
    
    //While - loop for button implementation
    while(1)
    {
        // if statement is passed for button specific LED command
        // button A for specific LED commands
        if (uBit.buttonA.isPressed())
        {
            uBit.display.scroll(" STAY SAFE ");
        }
        
        // button B for specific LED commands
        if (uBit.buttonB.isPressed())
        {
            uBit.display.scroll(" WEAR MASK :) ");
        }
    }

    // If main exits, there may still be other fibers running or registered event handlers etc.
    // Simply release this fiber, which will mean we enter the scheduler. Worse case, we then
    // sit in the idle task forever, in a power efficient sleep.
    release_fiber();
}
