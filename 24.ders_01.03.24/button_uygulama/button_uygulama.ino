 int button1 =8;
 int button=7;
 void setup() {
  Serial.begin(9600);
pinMode(button1,INPUT);
pinMode(button,INPUT);
}

void loop() {
  //Serial.println(digitalRead(button1));
  Serial.println(digitalRead(button));

  if(digitalRead(button)==1)
  {
    digitalWrite(8,1);
  }
  else
  {
    digitalWrite(8,0);

  }
}
