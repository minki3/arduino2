#include <LiquidCrystal_I2C.h>

uint8_t name_s[8] = { B11111,
  B00011,
  B00101,
  B01001,
  B10001,
  B11111,
  B10001,
  B11111};

uint8_t name_d[8] = {  B11101,
  B10101,
  B10101,
  B10101,
  B11101,
  B00001,
  B10000,
  B11111};

uint8_t name_u[8] = {  B11101,
  B00101,
  B00101,
  B00101,
  B00101,
  B00101,
  B00101,
  B00101};
LiquidCrystal_I2C lcd(0x27, 16, 2); // lcd 객체 생성
void setup()
{
    // put your setup code here, to run once:
    lcd.init();
    lcd.createChar(0, name_s); 
    lcd.createChar(1, name_d); 
    lcd.createChar(2, name_u); 
}
void loop()
{
    // put your main code here, to run repeatedly:
    lcd.setCursor(0, 0);          // 커서 2행 1열(0, 1)
    lcd.print("Hello, Arduino!"); // 문자열 표시
    lcd.setCursor(0, 1);          // 커서 2행 1열(0, 1)
    lcd.print("My name is ");     // 문자열 표시
    lcd.write(0);
    lcd.write(1);
    lcd.write(2);
}
