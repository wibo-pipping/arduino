void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(D1, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(D1, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  
  Serial.println("Blink On");
  
  delay(2000);

  digitalWrite(D1, HIGH);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("Blink Off");

  delay(2000);

}
