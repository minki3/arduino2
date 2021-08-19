#include <Led.h>

Led led(8);
boolean led_st = LOW;

const int sw_pin = 2;
int t1, t2;

void flash(void)
{
    //채터링 처리
    t2 = millis();
    if((t2 - t1) < 200) return;
    else t1 = t2;

    led_st = !led_st;   //LED상태 반전
    led.setValue(led_st);
}