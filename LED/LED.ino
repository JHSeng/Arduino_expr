void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    int tmp = digitalRead(LED_BUILTIN);
    if (tmp == HIGH) digitalWrite(LED_BUILTIN, LOW);
    delay(200);
    tmp = digitalRead(LED_BUILTIN);
    if (tmp == LOW) digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
}
