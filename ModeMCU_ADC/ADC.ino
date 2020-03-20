// 문제 2 ADC : Analog Digital Converter
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("ADC Value: ");
  Serial.println(analogRead(A0));
  delay(300);
}
