
int RED_PIN = 8;
int GREEN_PIN = 9;
int BLUE_PIN = 10;
int option;
String question = "Which color do you want?";
String options = "\n0 - Off\n1 - Red\n2 - Green\n3 - Blue\n4 - Cyan\n5 - Magenta\n6 - Yellow\n7 - Orange\n8 - Fuchsia";

void setup() {
    
    Serial.begin(9600);
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);
}

void loop() {

    Serial.println(question);
    Serial.println(options);

    while (Serial.available() == 0) {}

    option = Serial.parseInt();

    switch (option) {
        case 0:
            digitalWrite(RED_PIN, LOW);
            digitalWrite(GREEN_PIN, LOW);
            digitalWrite(BLUE_PIN, LOW);
            break;
        case 1:
            digitalWrite(RED_PIN, HIGH);
            digitalWrite(GREEN_PIN, LOW);
            digitalWrite(BLUE_PIN, LOW);
            break;
        case 2:
            digitalWrite(RED_PIN, LOW);
            digitalWrite(GREEN_PIN, HIGH);
            digitalWrite(BLUE_PIN, LOW);
            break;
        case 3:
            digitalWrite(RED_PIN, LOW);
            digitalWrite(GREEN_PIN, LOW);
            digitalWrite(BLUE_PIN, HIGH);
            break;
        case 4:
            digitalWrite(RED_PIN, LOW);
            analogWrite(GREEN_PIN, 255);
            analogWrite(BLUE_PIN, 255);
            break;
        case 5:
            analogWrite(RED_PIN, 255);
            digitalWrite(GREEN_PIN, LOW);
            analogWrite(BLUE_PIN, 255);
            break;
        case 6:
            analogWrite(RED_PIN, 255);
            analogWrite(GREEN_PIN, 255);
            digitalWrite(BLUE_PIN, LOW);
            break;
        case 7:
            analogWrite(RED_PIN, 255);
            analogWrite(GREEN_PIN, 165);
            digitalWrite(BLUE_PIN, LOW);
            break;
        case 8:
            digitalWrite(RED_PIN, LOW);
            analogWrite(GREEN_PIN, 255);
            analogWrite(BLUE_PIN, 255);
            break;
        default:
            Serial.println("Invalid option");
            break;
    }
}

