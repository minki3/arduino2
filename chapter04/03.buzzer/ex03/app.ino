#include <Melody.h>
#include "gom.h" // 연주할 파일

int length = sizeof(notes) / sizeof(int);
Melody melody(9, notes, durations, length);
void setup()
{
    melody.play();
}
void loop()
{
    melody.run();
}