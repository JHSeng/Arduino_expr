void setup() {
    // put your setup code here, to run once:
    pinMode(8, INPUT);
    Serial.begin(115200);
}

void loop() {
    // put your main code here, to run repeatedly:
    int v = digitalRead(8);
    Serial.println(v);
//  Serial.println();
}