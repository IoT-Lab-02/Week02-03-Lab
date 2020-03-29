// 2 LED blink

#define red_Pin D0
#define yellow_Pin D1
#define green_Pin D2

int randomNumber;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_Pin, OUTPUT);
  pinMode(yellow_Pin, OUTPUT);
  pinMode(green_Pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  randomNumber = random(0, 2);
  // randomNumber = random(3);
  Serial.println(randomNumber);
  blinkLED(randomNumber, 500);  
}

void blinkLED(int pinNo, int delayTime)
{
  digitalWrite(pinNo, HIGH);
  delay(delayTime);
  digitalWrite(pinNo, LOW);
  delay(delayTime);
}
