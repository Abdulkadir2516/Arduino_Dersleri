
void setup() {
  // put your setup code here, to run once:
  pinMode(0, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int deger = analogRead(0);

  Serial.println("Bizim Dönüşümümüz");
  
  Serial.println(deger);

  if(deger % 2 == 0)
  {
    Serial.println("Sayı Çifttir.");
  }
  else
  {
    Serial.println("Sayı Tektir.");
  }
    
  
  delay(5000);



}
