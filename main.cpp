#include "mbed.h"

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
