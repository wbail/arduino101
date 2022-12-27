
int PIN_BUZZ = 5;
int VOLT_PIN = A1;
int timeInMs = 500;
int readValue;
float v2;

void setup() {

    Serial.begin(9600);
    pinMode(PIN_BUZZ, OUTPUT);
    pinMode(VOLT_PIN, INPUT);
}

void loop() {

    readValue = analogRead(VOLT_PIN);

    v2 = (5./1023.) * readValue;

    Serial.println(v2);

    if (v2 < 1) {
        digitalWrite(PIN_BUZZ, LOW);
    } else {
        digitalWrite(PIN_BUZZ, v2);
    }

    delay(timeInMs);
}
