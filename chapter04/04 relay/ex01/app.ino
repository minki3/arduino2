# include <Button.h>
Button btn(2);

const int relay_pin =4;
boolean relay_out = LOW;

void check()
{
    if(!btn.debounce()) return;

    relay_out = !relay_out;
    digitalWrite(relay_pin, relay_out);
}

void setup()
{
    btn.attachinterrupt(check);
     pinMode(relay_pin, OUTPUT);
}

void loop()
{
    
}