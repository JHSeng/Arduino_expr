void setup() {
    pinMode(11, OUTPUT);
}

void loop() {
    for (int i = 0; i < 128; i++) {
        analogWrite(11, i);
        delay(4);
    }
    delay(1000);
    for (int i = 127; i >= 0; i--) {
        analogWrite(11, i);
        delay(4);
    }
    delay(1000);
}
