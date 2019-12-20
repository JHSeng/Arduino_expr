#include <TM1637Display.h>

// Pins for display
#define CLK 2
#define DIO 3

const uint8_t ZERO = SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F;
const uint8_t ONE = SEG_B | SEG_C;
const uint8_t TWO = SEG_A | SEG_B | SEG_D | SEG_E | SEG_G;
const uint8_t THREE = SEG_A | SEG_B | SEG_C | SEG_D | SEG_G;
const uint8_t FOUR = SEG_B | SEG_C | SEG_F | SEG_G;
const uint8_t FIVE = SEG_A | SEG_C | SEG_D | SEG_F | SEG_G;
const uint8_t SIX = SEG_A | SEG_C | SEG_D | SEG_E | SEG_F | SEG_G;
const uint8_t SEVEN = SEG_A | SEG_B | SEG_C;
const uint8_t EIGHT = SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F | SEG_G;
const uint8_t NINE = SEG_A | SEG_B | SEG_C | SEG_D | SEG_F | SEG_G;
const uint8_t digit[] = {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};
const uint8_t clearDigit[] = {0, 0, 0, 0};

// Display settings
TM1637Display display(CLK, DIO);

void displayByNumber(int num) {
    uint8_t currDigit[] = {digit[0], digit[0], digit[0], digit[0]};
    int tmp = num, cnt = 0;
    for (int i = 3; i >= 0; i--) {
        currDigit[i] = digit[tmp % 10];
        tmp /= 10;
    }
    display.setSegments(currDigit);
}

void displayByDigits(int a, int b, int c, int d) {
    uint8_t currDigit[] = {digit[a], digit[b], digit[c], digit[d]};
    display.setSegments(currDigit);
}

void setup() {
    // Jas settings (0-7)
    display.setBrightness(5);
}
void loop() {
    uint8_t currDigit[] = {digit[0], digit[0], digit[0], digit[0]};
    int cnt = 0;
    while (cnt <= 1000) {
        display.setSegments(clearDigit);
        displayByNumber(cnt);
        delay(1000);
        cnt++;
    }
    display.setSegments(clearDigit);
}