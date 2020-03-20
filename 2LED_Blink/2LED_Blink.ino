// 2 LED blink

#define Red_Pin D1
#define Yellow_Pin D2

void setup() {
  // put your setup code here, to run once:
  pinMode(Red_Pin, OUTPUT);
  pinMode(Yellow_Pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Red_Pin, HIGH);
  Serial.println("Red LED ON");
  delay(500); // 0.5초 
  digitalWrite(Red_Pin, LOW);
  Serial.println("Red LED OFF");
  delay(500); 
  digitalWrite(Yellow_Pin, HIGH);
  Serial.println("Yellow LED ON");
  delay(500);
  digitalWrite(Yellow_Pin, LOW);
  Serial.println("Yellow LED OFF");
  delay(500);
}
