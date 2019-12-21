#include <ESP8266WiFi.h>

#define MAX_SRV_CLIENTS 4

const char *ssid = "raspbirrypi4b";
const char *password = "";
IPAddress localIP(10, 3, 141, 199);
IPAddress gateway(10, 3, 141, 1);
IPAddress subnet(255, 255, 255, 0);

void connectWiFi() {
    WiFi.config(localIP, gateway, subnet);
    // WiFi.mode()
}

void setup() {
    Serial.begin(9600);

}

void loop() {

}