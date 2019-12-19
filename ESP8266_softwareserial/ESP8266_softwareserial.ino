#include<SoftwareSerial.h>
SoftwareSerial mySerial(3, 2);  // RX, TX

void setup() {
    Serial.begin(9600);
    while (!Serial) {;}
    Serial.println("hardware serial start!");
    mySerial.begin(9600);
    mySerial.println("software serial start!");
}

void loop() {
    if (mySerial.available())
        Serial.write(mySerial.read());

    if (Serial.available())
        mySerial.write(Serial.read());
}