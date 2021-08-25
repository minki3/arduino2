#include <EEPROM.h>

int randomNumber;

void setup()
{
    Serial.begin(115200);
    randomSeed(analogRead(0));
}

void loop()
{
    Serial.println("Writing random numbers ...");

    for (int i = 0; i < 1 * 10; i++)
    {
        randomNumber = random(256);
        EEPROM.write(i, randomNumber);
        delay(100);
    }

    Serial.println();

    // EEPROM에 데이터 읽기
    for (int i = 0; i < 1024; i++)
    {
        randomNumber = EEPROM.read(i); // read(주소)
        Serial.println("EEPROM Address : " + String(i) + "\t Value : " +
                       randomNumber);
        delay(100);
    }
    while (true)
        ; // 1회만 시행 후 대기
}