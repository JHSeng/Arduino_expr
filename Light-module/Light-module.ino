#define AR 3 // 模拟输出
#define DR 4 // 数字输出

void setup() {
    Serial.begin(9600);
}

void loop() {
    int dv = digitalRead(DR);
    int av = analogRead(AR);
    Serial.print("DR = ");
    Serial.print(dv);
    Serial.print("  AR = ");
    Serial.println(av);
}