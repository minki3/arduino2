#include <SimpleTimer.h>
#include <Led.h>

SimpleTimer timer;
Led led1(8);
Led led2(9);

void blink1()
{
    led1.toggle();
}

void blink2()
{
    led2.toggle();
}

void setup()
{
    Serial.begin(9600);
    timer.setInterval(1000, blink1);
    timer.setInterval(500, blink2);
}

void loop()
{
    timer.run();
}
    