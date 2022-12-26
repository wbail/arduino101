
int RED_LED = 9;
int BLUE_LED = 10;
int YELLOW_LED = 11;
String question = "Which color do you want?";
String options = "1 - Red\n2 - Blue\n3 - Yellow";
int option;

void setup() {

    Serial.begin(9600);

    pinMode(RED_LED, OUTPUT);
    pinMode(BLUE_LED, OUTPUT);
    pinMode(YELLOW_LED, OUTPUT);

}

void loop() {

    Serial.println(question);
    Serial.println(options);

    while (Serial.available() == 0) {}

    option = Serial.parseInt();

    switch (option) {
        case 1:
            digitalWrite(BLUE_LED, LOW);
            digitalWrite(YELLOW_LED, LOW);
            digitalWrite(RED_LED, HIGH);
            break;
        case 2:
            digitalWrite(YELLOW_LED, LOW);
            digitalWrite(RED_LED, LOW);
            digitalWrite(BLUE_LED, HIGH);
            break;
        case 3:
            digitalWrite(BLUE_LED, LOW);
            digitalWrite(RED_LED, LOW);
            digitalWrite(YELLOW_LED, HIGH);
            break;
        defautl:
            Serial.println("Invalid option");
            break;
    }
}

