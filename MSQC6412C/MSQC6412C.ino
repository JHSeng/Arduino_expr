// four bit digit
#define FIR 5 // 12
#define SEC 4 // 9
#define THR 3 // 8
#define FOU 2 // 6
// row
#define RU 8 // 11
#define RM 7 // 5
#define RD 6 // 2
// column
#define CLU 12 // 10
#define CLD 11 // 1
#define CRU 10 // 7
#define CRD 9 // 4
// point
#define POINT 13 // 3

void clearAllState() {
    for (int i = 2; i <= 13; i++)
        digitalWrite(i, LOW);
}

void setup() {
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}

void loop() {
    clearAllState();
    // enable four bit
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);

    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(13, HIGH);

    delay(1000);
}