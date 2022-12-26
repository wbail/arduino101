
int VOLT_PIN = A1;
int RED_PIN = 9;
int YELLOW_PIN = 10;

int timeInMs = 1000;

float v2;
int readValue;

void setup() {

    pinMode(VOLT_PIN, INPUT);
    pinMode(RED_PIN, OUTPUT);
    pinMode(YELLOW_PIN, OUTPUT);

    Serial.begin(9600);
}

void loop() {

    readValue = analogRead(VOLT_PIN);

    v2 = (5./1023.) * readValue;

    Serial.print("The voltage is ");
    Serial.print(v2);
    Serial.println("");
    
    if (v2 >= 4 && v2 <= 4.99) {
        digitalWrite(RED_PIN, LOW);
        digitalWrite(YELLOW_PIN, HIGH);
        Serial.print("Warning the maximum voltage is 5V: ");
        Serial.print(v2);
        Serial.println("");

    } else if (v2 >= 5.00) {
        digitalWrite(YELLOW_PIN, LOW);
        digitalWrite(RED_PIN, HIGH);
        Serial.println("Maximum voltage achieved: ");
        Serial.print(v2);
        Serial.println("");
    } else {
        digitalWrite(YELLOW_PIN, LOW);
        digitalWrite(RED_PIN, LOW);
    }

    delay(timeInMs);
}

