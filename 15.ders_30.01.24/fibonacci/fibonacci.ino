void setup() {
  Serial.begin(9600);
}

void loop() {
  int a = 0;
  int b = 1;

  for(int i=0; i<=50; i += 1)
  {
    int c = a+b;
    a = b;
    b = c;

    Serial.print(c);
    
    
  }
  Serial.println();
  delay(1000);
}