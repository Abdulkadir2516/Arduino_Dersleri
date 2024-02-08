void setup() {
  Serial.begin(9600);
  // Çarpım tablosu

  for(int i=1; i<11; i++)
  {

    for(int j=1; j<11; j++)
    {

      Serial.print(i);
      Serial.print(" * ");
      Serial.print(j);
      Serial.print(" = ");
      Serial.print(i*j);
      Serial.println("  ");

    }
      
    Serial.println("  ");


  }
  

}

void loop() {
  // put your main code here, to run repeatedly:
}
