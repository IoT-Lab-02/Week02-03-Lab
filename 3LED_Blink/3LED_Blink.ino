// 2 LED blink

#define Red_Pin D0
#define Yellow_Pin D1
#define Green_Pin D2

void setup() {
  // put your setup code here, to run once:
  pinMode(Red_Pin, OUTPUT);
  pinMode(Yellow_Pin, OUTPUT);
  pinMode(Green_Pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Red_Pin, HIGH);
  delay(500); // 0.5초 
  digitalWrite(Red_Pin, LOW);
  delay(500); 
  digitalWrite(Yellow_Pin, HIGH);
  delay(500);
  digitalWrite(Yellow_Pin, LOW);
  delay(500);
  digitalWrite(Green_Pin, HIGH);
  delay(500);
  digitalWrite(Green_Pin, LOW);
  delay(500);
}
