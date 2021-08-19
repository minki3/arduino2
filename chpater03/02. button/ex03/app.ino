#include <Led.h>

const int OFF = 0;
const int ON = 1;

const int sw_pin = 2; //스위치 연결핀
Led led(8);
boolean led_st = OFF;  // led버튼 초기상태
int count = 0;          //버튼 클릭 카운트

void setup()
{
    Serial.begin(115200);
    pinMode(sw_pin, INPUT_PULLUP);  //스위치 연결핀 입력 설정
    led.setValue(led_st);
}

void loop()
{
    boolean o_sw, n_sw;
    o_sw = !digitalRead(sw_pin);    //스위치 첫 번째 상태 읽기
    delay(10);
    n_sw = !digitalRead(sw_pin);    //스위치 두번째 상태 읽기

    if(o_sw == OFF && n_sw == ON)  
    {
        count++;
        Serial.println(count);
        led_st = !led_st;   //Led 상태 반전
        led.setValue(led_st); //Led 상태 반전 출력
    }
}