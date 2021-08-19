int rec_byte;

void setup()
{
    Serial.begin(115200);
}

void loop()
{   //수신 데이터가 있는지 체크
    if(Serial.available()>0)
    {   //수신데이터가 있으면 1글자 읽음 = 아스키코드 리턴
        rec_byte = Serial.read();
        //수신 데이터를 다시 pc로 전송ㅋ
        Serial.write(rec_byte);
    }
}