#include <MiniCom.h>
#include <Analog.h>


Analog sensr(A0, 255, 0);
MiniCom com;

void setup()
{
    com.init();
    com.print(0, "[[MiniCom]]");
    com.setInterval(100, check);
}

void loop()
{
    com.run();
}

void check()
{
    int value = sensor.read();
    led.setValue(value);
    com.print(1, "value:", value);
}