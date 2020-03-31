// 2 LED blink

#define red_Pin D0
#define yellow_Pin D1
#define green_Pin D2

int randomNo;
int randomPinNo;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_Pin, OUTPUT);
  pinMode(yellow_Pin, OUTPUT);
  pinMode(green_Pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  randomNo = random(0, 3); // 0, 1, 2
  // randomNo = random(3);
  Serial.println(randomNo);

  // 0,1,2 값을 D1, D2, D3로 바꿔줌
  switch(randomNo) {
    case 0 :
      randomPinNo = D0; 
      break;
    case 1 :
      randomPinNo = D1;
      break;
    case 2 :
      randomPinNo = D2;
      break;
  }
  
  blinkLED(randomPinNo, 500);  
}

void blinkLED(int pinNo, int delayTime)
{
  digitalWrite(pinNo, HIGH);
  delay(delayTime);
  digitalWrite(pinNo, LOW);
  delay(delayTime);
}
