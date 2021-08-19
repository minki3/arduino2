// 4개의 순차점멸(LED 풀다운
const int led1_pin = 3;
const int led2_pin = 4;
const int led3_pin = 5;
const int led4_pin = 6;

void setup()
{
    pinMode(led1_pin, OUTPUT); // 3

    pinMode(led2_pin, OUTPUT); // 4

    pinMode(led3_pin, OUTPUT); // 5

    pinMode(led4_pin, OUTPUT); // 6
}
void loop()
{
// LED1
    digitalWrite(led1_pin, HIGH); // 3

    digitalWrite(led2_pin, LOW); // 4

    digitalWrite(led3_pin, LOW); // 5

    digitalWrite(led4_pin, LOW); // 6

    delay(1000);
 // LED2
    digitalWrite(led1_pin, LOW); // 3

    digitalWrite(led2_pin, HIGH); // 4

    digitalWrite(led3_pin, LOW); // 5

    digitalWrite(led4_pin, LOW); // 6

    delay(1000);
// LED3

    digitalWrite(led1_pin, LOW); // 3

    digitalWrite(led2_pin, LOW); // 4

    digitalWrite(led3_pin, HIGH); // 5

    digitalWrite(led4_pin, LOW); // 6

    delay(1000);
// LED4
    
    digitalWrite(led1_pin, LOW); // 3

    digitalWrite(led2_pin, LOW); // 4

    digitalWrite(led3_pin, LOW); // 5

    digitalWrite(led4_pin, HIGH); // 6

    delay(1000);
}
