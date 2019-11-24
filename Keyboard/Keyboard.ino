#include <Keyboard.h>

void setup() {
    Serial.begin(115200);
    Keyboard.begin();
    Keyboard.press(KEY_D);
}

void loop() {

}