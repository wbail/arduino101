
#define RED_LED_13 13
#define RED_LED_12 12
#define RED_LED_11 11
#define RED_LED_10 10
#define GND 2

void setup() {
  pinMode(RED_LED_13, OUTPUT);
  pinMode(RED_LED_12, OUTPUT);
  pinMode(RED_LED_11, OUTPUT);
  pinMode(RED_LED_10, OUTPUT);
  pinMode(GND, OUTPUT);
}

void loop() {

  digitalWrite(GND, LOW);

  counter();  
}

void counter() {

  int i = 0;

  for (; i < 15; i++) {

    // 0
    digitalWrite(RED_LED_13, LOW);
    digitalWrite(RED_LED_12, LOW);
    digitalWrite(RED_LED_11, LOW);
    digitalWrite(RED_LED_10, LOW);
    delay(1000);


    // 1
    digitalWrite(RED_LED_13, LOW);
    digitalWrite(RED_LED_12, LOW);
    digitalWrite(RED_LED_11, LOW);
    digitalWrite(RED_LED_10, HIGH);
    delay(1000);

    // 2
    digitalWrite(RED_LED_13, LOW);
    digitalWrite(RED_LED_12, LOW);
    digitalWrite(RED_LED_11, HIGH);
    digitalWrite(RED_LED_10, LOW);
    delay(1000);

    // 3
    digitalWrite(RED_LED_13, LOW);
    digitalWrite(RED_LED_12, LOW);
    digitalWrite(RED_LED_11, HIGH);
    digitalWrite(RED_LED_10, HIGH);
    delay(1000);

    // 4
    digitalWrite(RED_LED_13, LOW);
    digitalWrite(RED_LED_12, HIGH);
    digitalWrite(RED_LED_11, LOW);
    digitalWrite(RED_LED_10, LOW);
    delay(1000);


    // 5
    digitalWrite(RED_LED_13, LOW);
    digitalWrite(RED_LED_12, HIGH);
    digitalWrite(RED_LED_11, HIGH);
    digitalWrite(RED_LED_10, LOW);
    delay(1000);

    // 6
    digitalWrite(RED_LED_13, LOW);
    digitalWrite(RED_LED_12, HIGH);
    digitalWrite(RED_LED_11, HIGH);
    digitalWrite(RED_LED_10, LOW);
    delay(1000);

    // 7
    digitalWrite(RED_LED_13, LOW);
    digitalWrite(RED_LED_12, HIGH);
    digitalWrite(RED_LED_11, HIGH);
    digitalWrite(RED_LED_10, HIGH);
    delay(1000);

    // 8
    digitalWrite(RED_LED_13, HIGH);
    digitalWrite(RED_LED_12, LOW);
    digitalWrite(RED_LED_11, LOW);
    digitalWrite(RED_LED_10, LOW);
    delay(1000);

    // 9
    digitalWrite(RED_LED_13, HIGH);
    digitalWrite(RED_LED_12, LOW);
    digitalWrite(RED_LED_11, LOW);
    digitalWrite(RED_LED_10, HIGH);
    delay(1000);

    // 10

    // 11

    // 12

    // 13

    // 14

    // 15
  }


}
