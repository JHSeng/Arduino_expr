#define ledpin 4

void setup() {
    pinMode(ledpin, OUTPUT);
}

void loop() {
    digitalWrite(ledpin, HIGH);
    delay(200);
    digitalWrite(ledpin, LOW);
    delay(200);
}