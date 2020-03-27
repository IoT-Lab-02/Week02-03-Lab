// 2 LED blink

#define red_Pin D0
#define yellow_Pin D1
#define green_Pin D2

void setup() {
  // put your setup code here, to run once:
  pinMode(red_Pin, OUTPUT);
  pinMode(yellow_Pin, OUTPUT);
  pinMode(green_Pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  blinkLED(red_Pin, 500);
  blinkLED(yellow_Pin, 500);
  blinkLED(green_Pin, 500);
}

void blinkLED(int pinNo, int delayTime)
{
  digitalWrite(pinNo, HIGH);
  delay(delayTime);
  digitalWrite(pinNo, LOW);
  delay(delayTime);
}
