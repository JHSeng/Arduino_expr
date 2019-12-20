// 接线略为复杂
// VSS -> GND
// VDD -> VCC
// V0串联100欧电阻 -> GND
// RW -> GND
// A -> VCC
// K -> GND
// 剩下六个在下面lcd声明处
#include <LiquidCrystal.h>

// 6个参数分别为RS, E, D4, D5, D6, D7针脚对应arduino管脚位置
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
    // init
    lcd.begin(16, 2);
}

void loop() {
    lcd.setCursor(0, 0);
    lcd.print("It's OK!");
    lcd.setCursor(0, 1);
    lcd.print("wdnmd!");
    delay(1000);
    lcd.clear();
    delay(1000);
}