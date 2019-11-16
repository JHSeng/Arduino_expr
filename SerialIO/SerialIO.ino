// void setup() {
//     Serial.begin(115200);
//     pinMode(LED_BUILTIN, OUTPUT);
// }

// void loop() {
//     int val = Serial.read();
//     if (val != -1) {
//         if (val == 'H') {
//             digitalWrite(LED_BUILTIN, HIGH);
//             delay(500);
//             digitalWrite(LED_BUILTIN, LOW);
//         }
//     }
// }

void setup() {
    Serial.begin(115200);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    int val = Serial.read();
    if (val != -1) {
        if (val == 'H') {
            digitalWrite(LED_BUILTIN, HIGH);
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
        }
    }
    Serial.print("Available: ");
    Serial.println(Serial.available(), DEC);
}