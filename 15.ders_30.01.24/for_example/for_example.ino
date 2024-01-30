void setup() {
  Serial.begin(9600);
}

void loop() {
  for(int i=0; i<=50; i += 1)
  {
    bool cift = (i % 3 == 0) && (i % 5== 2 );
    if(cift)
    {
      Serial.print(i);
      Serial.print(" ");
    } 
   
    
  }
  Serial.println();
  delay(1000);
}