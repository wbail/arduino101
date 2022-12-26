
int number;
String question = "How many blinks do you want?: ";
int i = 1;
int timeInMs = 500;
int RED_LED = 9;

void setup() {

    Serial.begin(9600);
    pinMode(RED_LED, OUTPUT);
}

void loop() {

    Serial.print(question);
    
    while (Serial.available() == 0) {
        
    }

    number = Serial.parseInt();

    for (; i <= number; i++) {
        digitalWrite(RED_LED, HIGH);
        delay(timeInMs);
        digitalWrite(RED_LED, LOW);
        delay(timeInMs);
    } 
}

