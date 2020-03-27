// 2 LED blink

#define red_Pin D1
#define yellow_Pin D2

void setup() {
  // put your setup code here, to run once:
  pinMode(red_Pin, OUTPUT);
  pinMode(yellow_Pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red_Pin, HIGH);
  Serial.println("Red LED ON");
  delay(500); // 0.5초 
  digitalWrite(red_Pin, LOW);
  Serial.println("Red LED OFF");
  delay(500); 
  digitalWrite(yellow_Pin, HIGH);
  Serial.println("Yellow LED ON");
  delay(500);
  digitalWrite(yellow_Pin, LOW);
  Serial.println("Yellow LED OFF");
  delay(500);
}
