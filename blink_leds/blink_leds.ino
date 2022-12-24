
#define RED_LED 13
#define YELLOW_LED 12
#define BLUE_LED 11
#define FREQUENCY 250

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  redLed();
  yellowLed();
  blueLed();
}

void redLed() {

  int i = 0;

  for (; i < 5; i++) {
    digitalWrite(RED_LED, HIGH);
    delay(FREQUENCY);
    digitalWrite(RED_LED, LOW);
    delay(FREQUENCY);
  }
  
}

void yellowLed() {

  int i = 0;

  for (; i < 10; i++) {
    digitalWrite(YELLOW_LED, HIGH);
    delay(FREQUENCY);
    digitalWrite(YELLOW_LED, LOW);
    delay(FREQUENCY);
  }
  
}

void blueLed() {

  int i = 0;

  for (; i < 15; i++) {

    digitalWrite(BLUE_LED, HIGH);
    delay(FREQUENCY);
    digitalWrite(BLUE_LED, LOW);
    delay(FREQUENCY);
  }

}

/*

red green blue

5x  10x   15x


*/