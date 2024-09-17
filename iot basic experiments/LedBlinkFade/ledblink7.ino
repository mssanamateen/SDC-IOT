#define LED_PIN 7
int brightness=0;
int fadeAmt=5;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LED_PIN,brightness);
  brightness=brightness+fadeAmt;
  if(brightness<=0||brightness>=255){
    fadeAmt=-fadeAmt;
  }
  delay(30);
}