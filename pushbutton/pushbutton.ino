
int PIN_PUSHBUTTON = 12;
int PIN_LED = 8;
int timeInMs = 100;
int ledState = 0;
int buttonOld = 1;
int buttonNew;

void setup() {

    Serial.begin(9600);

    pinMode(PIN_PUSHBUTTON, INPUT);
    pinMode(PIN_LED, OUTPUT);
}

void loop() {

    buttonNew = digitalRead(PIN_PUSHBUTTON);

    Serial.println(buttonNew);
    
    if (buttonOld == 0 && buttonNew == 1) {
        if (ledState == 0) {
            digitalWrite(PIN_LED, HIGH);
            ledState = 1;
        } else {
            digitalWrite(PIN_LED, LOW);
            ledState = 0;
        }
    }

    buttonOld = buttonNew;

    delay(timeInMs);
}

