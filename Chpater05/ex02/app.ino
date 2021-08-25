#include <MiniCom.h>
#include <Keypad.h>
#include "keymap.h"
#include <Led.h>

MiniCom com;
Led beep(13);
keypad keypad = keypad(makekeymap(keys),
                    rowPins, colPins, ROWS, COLS);


String input = "";
bool bInput = false;

void setup()
{
    com.init();
    com.print(0, "[[Keypad Test]]");
}


void loop()
{
    char key = keypad.getkey();
    if (key)
    {
        process(key);
    }

}

void process(char key)
{
    if(key == '*' && bInput == false)
    {
        input = "";
        bInput = true;
        com.print(1, "start");    
    } else if(key == '#')
    {
        bInput = false;
        check();
    }else if(bInput)
    {
        input += key;
    }
}


void check()
{
    com.print(1, input.c_str());
}