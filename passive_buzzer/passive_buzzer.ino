
int PIN_BUZZ = 5;
int PIN_POT = A1;
int potentiometerValue;
float toneValue;

void setup() {

    pinMode(PIN_BUZZ, OUTPUT);
    pinMode(PIN_POT, INPUT);

}

void loop() {

    potentiometerValue = analogRead(PIN_POT);

    toneValue = (9940./1023.) * potentiometerValue + 60;

    digitalWrite(PIN_BUZZ, HIGH);
    delayMicroseconds(toneValue);
    digitalWrite(PIN_BUZZ, LOW);
    delayMicroseconds(toneValue);
}

