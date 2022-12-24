
#define RED_PIN 10

int bright = 100;

void setup() {
    
    pinMode(RED_PIN, OUTPUT);

}

void loop() {

    analogWrite(RED_PIN, bright);

}
