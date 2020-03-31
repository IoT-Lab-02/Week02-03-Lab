#define Red_PIN D1
#define Yellow_PIN D2

void setup() {
  // put your setup code here, to run once:
  pinMode(Red_PIN, OUTPUT);
  pinMode(Yellow_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Red PIN
  digitalWrite(Red_PIN, HIGH);
  Serial.println("Red LED ON");
  delay(500);
  digitalWrite(Red_PIN, LOW);
  Serial.println("Red LED OFF");
  delay(500);

  // Yellow PIN
  digitalWrite(Yellow_PIN, HIGH);
  Serial.println("Yellow LED ON");
  delay(500);
  digitalWrite(Yellow_PIN, LOW);
  Serial.println("Yellow LED OFF");
  delay(500);

}
