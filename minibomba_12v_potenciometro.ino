const int pinPWM = 9;
const int pinPot = A0;
int potValue;

void setup() {
  pinMode(pinPWM, OUTPUT);
}

void loop() {
  potValue = analogRead(pinPot);
  analogWrite(pinPWM, potValue/4);
}
