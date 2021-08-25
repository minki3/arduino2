#include <WifiMiniCom.h>

const char *ssid = "iptime*";
const char *passward = "rlaawleo2001";

WifiMiniCom com;
WiFiServer server(80); //80: Web Server 표쥰  포트

void setup()
{
    com.init(ssid, passward);
    server.begin();
}

void loop()
{
    WiFiClient client = server.available();
    if (!client)
    {
        return;
    }
    // Wait until the client sends some data
    Serial.println("new client");
    while (!client.available())
    {
        delay(1);
    }
    // Read the first line of the request
    String request = client.readStringUntil('\r');
    Serial.println(request);
    client.flush();

    client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println(""); 
    client.println("<!DOCTYPE HTML>");
    client.println("<html>");
    client.print("HELLO WORLD!");
    client.println("</html>");
    delay(1);
    Serial.println("Client disonnected");
    Serial.println("");
}