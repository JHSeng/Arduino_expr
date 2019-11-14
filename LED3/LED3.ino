#define startPin 0
#define endPin 13

int currPin = 0;

void setup() {
    for (int i = startPin; i <= endPin; i++)
        pinMode(i, OUTPUT);
}

void loop() {
    digitalWrite((startPin + currPin - 1) % (endPin + 1), LOW);
    digitalWrite((startPin + currPin++) % (endPin + 1), HIGH);
    delay(100);
}
