
#define RED_LED 13

void setup() {
  pinMode(RED_LED, OUTPUT);
}

void loop() {

  blinkSos(250);
  blinkSos(1000);
  blinkSos(250);

  delay(2000);
}

void blinkSos(int delayInMs) {

  int i = 0;

  for (; i < 3; i++) {

    digitalWrite(RED_LED, HIGH);
    delay(delayInMs);
    digitalWrite(RED_LED, LOW);
    delay(delayInMs);

  }

}
