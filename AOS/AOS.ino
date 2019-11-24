void setup() {
    Serial.begin(115200);
    Serial.println("Welcome! Here is Arduino OS!");
}

void loop() {
    int command = Serial.read();
    // String command = Serial.
    Serial.println(command);
    // input will save in ascll code
    // if (command != -1) Serial.println(command);
}