// this module support analogwrite and digitalwrite.
// when integer b == 1, it means the earth is dry enough to water, otherwise it means it's weat.
// double a is in [0,1024], but it always in [300,500] in our expr, so it's fake temporarily.
// we need a relay module to control water module.

#define AO 2
#define DO 3
#define WATER 8 // LOW is on and HIGH is off

void setup() {
    Serial.begin(9600);
    pinMode(AO, INPUT);
    pinMode(DO, INPUT);
    pinMode(WATER, OUTPUT);
}

void loop() {
    double aoNumber = analogRead(AO);
    int needToWater = digitalRead(DO);
    if (needToWater) {
        digitalWrite(WATER, LOW);
        delay(5000);
        digitalWrite(WATER, HIGH);
    }
}