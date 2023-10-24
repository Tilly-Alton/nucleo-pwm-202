/* ENGR202: pwm output using nucleo
 * Originally Ekky Hermestian IW
 * Tilly Alton 16/10/2023
 */

// This code causes the built in LED to blink. The actual code is written
// outside the while loop but it is executed by calling the function blink
#include "mbed.h"

// Built-in LED output (also visible via oscilloscope, pin D13)
PwmOut mypwm(PB_4);
DigitalOut myled(LED1);

int main()
{
    mypwm.period_ms(10);
    mypwm.pulsewidth_ms(1);

    printf("pwm set to %.2f %%\n",mypwm.read() * 100);
    while(1)
    {
        myled = !myled;
        thread_sleep_for(1000);
    }
}