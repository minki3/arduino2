const int x_joystick = A2;
const int y_joystick = A1;
const int z_sw = A0;

void setup()
{
    Serial.begin(9600);
    pinMode(z_sw, INPUT_PULLUP);
}

void loop()
{
    int dx, dy;
    boolean sw;

    dx = analogRead(x_joystick);
    dy = analogRead(y_joystick);
    sw = digitalRead(z_sw);

    Serial.print("X-axis = ");
    Serial.println(dx);

    Serial.print("y-axis = ");
    Serial.println(dy);

    Serial.print("Z-switch = ");
    if(sw==0) Serial.println("0(ON)");
    else Serial.println("1(OFF)");

    delay(2000);
}

