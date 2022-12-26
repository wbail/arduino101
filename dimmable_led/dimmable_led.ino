
int BLUE_PIN = 9;
int POT_PIN = A1;
int potVal;
float ledVal; 
int timeInMs = 1000;

void setup() {
    
    pinMode(BLUE_PIN, OUTPUT);
    pinMode(POT_PIN, INPUT);

    Serial.begin(9600);
}

void loop() {

    potVal = analogRead(POT_PIN);

    ledVal = (255./1023.) * potVal;

    analogWrite(BLUE_PIN, ledVal);

    Serial.print("Led value: ");
    Serial.print(ledVal);
    Serial.print(" volt");
    Serial.println();
    
    delay(timeInMs);
}
