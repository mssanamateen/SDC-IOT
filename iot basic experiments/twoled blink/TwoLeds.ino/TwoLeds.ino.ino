void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(8)==HIGH){
    digitalWrite(1,HIGH);
    digitalWrite(8,LOW);
  }else{
    digitalWrite(8,HIGH);
    digitalWrite(1,LOW);
  }
  delay(1000);
  
}
