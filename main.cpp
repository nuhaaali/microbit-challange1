/*
Author: Mariyam Nuha ALi
Description: different heart beats

*/

#include "MicroBit.h"

MicroBit uBit;

int main()
{
    // Initialise the micro:bit runtime.
    uBit.init();

    // Insert your code here!
    uBit.display.scroll("HEART BEAT");

    
    // While - Loop for button implementation
    while (1)
    {
        // if statement is passed for button specifc LED command
        // Button A for specific LED command
    if (uBit.buttonA.isPressed())
    {
        MicroBitImage empty_heart("0,255,0,255,0\n 255,0,255,0,255\n 255,0,0,0,255\n 0,255,0,255,0\n 0,0,255,0,0\n");

        uBit.display.print(empty_heart);
    }
    
    // Button B for specific LED command
    if (uBit.buttonB.isPressed())
    {
          MicroBitImage full_heart("0,255,0,255,0\n 255,255,255,255,255\n 255,255,255,255,255\n 0,255,255,255,0\n 0,0,255,0,0\n");

          uBit.display.print(full_heart);
    }
    
     if (uBit.buttonAB.isPressed())
    {
      MicroBitImage small_heart("0,0,0,0,0\n 0,255,0,255,0\n 0,255,255,255,0\n 0,0,255,0,0\n 0,0,0,0,0\n");

      uBit.display.print(small_heart); 
    }
    }


    // If main exits, there may still be other fibers running or registered event handlers etc.
    // Simply release this fiber, which will mean we enter the scheduler. Worse case, we then
    // sit in the idle task forever, in a power efficient sleep.
    release_fiber();
}

