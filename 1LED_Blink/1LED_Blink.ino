void setup() {
  // put your setup code here, to run once:
  pinMode(D8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D8, HIGH);
  Serial.println("LED ON");
  delay(500);
  digitalWrite(D8, LOW);
  Serial.println("LED OFF");
  delay(500);

}
