#include <Led.h>
#include <Button.h>

Led led(8);
Button btn(2);

boolean led_st = LOW;

void flash(void)
{
    if(!btn.debounce()) return;
    led.toggle();
}

void setup()
{
    btn.attachinterrupt(flash, FALLING);
}

void loop() {}