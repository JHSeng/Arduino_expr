#include<SoftwareSerial.h>
SoftwareSerial mySerial(3, 2);  // RX, TX

void setup() {
    Serial.begin(9600);
    mySerial.begin(9600);
    mySerial.println("Hello! ESP8226 start working!");
}

void loop() {
    if (mySerial.available())
        Serial.write(mySerial.read());
    if (Serial.available())
        mySerial.write(Serial.read());
}