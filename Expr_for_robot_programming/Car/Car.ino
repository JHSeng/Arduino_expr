#define TRIG 2
#define ECHO 3
#define WHEEL_RIGHT_1 5
#define WHEEL_RIGHT_2 6
#define WHEEL_LEFT_1 9
#define WHEEL_LEFT_2 10
#define INFRARED 11
#define FORWARD_LIMIT 10.0
#define EPS 1e-6

void setup() {
    // serial init
    Serial.begin(115200);

    // built-in led init
    pinMode(LED_BUILTIN, OUTPUT);

    // ultrasonic wave init
    pinMode(TRIG, OUTPUT);
    pinMode(ECHO, INPUT);

    // wheel init
    pinMode(WHEEL_LEFT_1, OUTPUT);
    pinMode(WHEEL_LEFT_2, OUTPUT);
    pinMode(WHEEL_RIGHT_1, OUTPUT);
    pinMode(WHEEL_RIGHT_2, OUTPUT);

    // rightNotBlocked init
    pinMode(INFRARED, INPUT);
}

void stateInit() {
    clearWheelState();
}

void moveForward() {
    digitalWrite(WHEEL_LEFT_1, LOW);
    digitalWrite(WHEEL_LEFT_2, HIGH);
    digitalWrite(WHEEL_RIGHT_1, LOW);
    digitalWrite(WHEEL_RIGHT_2, HIGH);
}

void clearWheelState() {
    digitalWrite(WHEEL_LEFT_1, LOW);
    digitalWrite(WHEEL_LEFT_2, LOW);
    digitalWrite(WHEEL_RIGHT_1, LOW);
    digitalWrite(WHEEL_RIGHT_2, LOW);
}

void moveBackward() {
    digitalWrite(WHEEL_LEFT_1, HIGH);
    digitalWrite(WHEEL_LEFT_2, LOW);
    digitalWrite(WHEEL_RIGHT_1, HIGH);
    digitalWrite(WHEEL_RIGHT_2, LOW);
}

void turnRight() {
    clearWheelState();
    digitalWrite(WHEEL_RIGHT_1, HIGH);
    digitalWrite(WHEEL_RIGHT_2, LOW);
    delay(100);
    clearWheelState();
    digitalWrite(WHEEL_LEFT_1, LOW);
    digitalWrite(WHEEL_LEFT_2, HIGH);
    delay(500);
    clearWheelState();
    moveForward();
    delay(200);
}

void turnLeft() {
    clearWheelState();
    digitalWrite(WHEEL_LEFT_1, HIGH);
    digitalWrite(WHEEL_LEFT_2, LOW);
    delay(100);
    clearWheelState();
    digitalWrite(WHEEL_RIGHT_1, LOW);
    digitalWrite(WHEEL_RIGHT_2, HIGH);
    delay(500);
    clearWheelState();
    moveForward();
    delay(200);
}

int forwardBlocked() {
    digitalWrite(TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG, LOW);

    float temp = float(pulseIn(ECHO, HIGH));
    float cm = temp * 17 / 1000.0;
    if (cm - FORWARD_LIMIT < EPS) {
        return 1;
    } else {
        return 0;
    }
}

int rightBlocked() {
    int tmp = digitalRead(INFRARED);
    return !tmp;
}

void loop() {
    // car state init
    stateInit();

    // judge turn right
    if (!rightBlocked()) {
        turnRight();
    } else {
        // judge go straight
        if (!forwardBlocked()) {
            moveForward();
            delay(100);
        } else {
            // turn left
            turnLeft();
        }
    }
}
