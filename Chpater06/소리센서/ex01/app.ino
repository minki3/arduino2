#include <MiniCom.h>
#include <Analog.h>

MiniCom com;
Analog sound (A0, 0, 1023);

void check()
{
    int value = sound.read();
    com.print(1, "value:", value);
}

void setup()
{
    com.init();
    com.setInterval(100, check);
    com.print(0, "[[sound]]");
}

void loop()
{
    com.run();
}