
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(D1, INPUT);
  pinMode(D2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(D1) == HIGH) {
    Serial.println("Button is pressed, turning on Led for 5 seconds");
    digitalWrite(D2, HIGH);
    delay(5000);
    digitalWrite(D2,LOW);
  }
  else {
    Serial.println("Button not pressed, turning off Led");
    digitalWrite(D2, LOW);
  }

}
