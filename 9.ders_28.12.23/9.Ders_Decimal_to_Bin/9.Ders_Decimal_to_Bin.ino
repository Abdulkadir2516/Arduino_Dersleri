
int bin[10];
void setup() {
  // put your setup code here, to run once:
  pinMode(0, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int deger = analogRead(0);

  int bolum = deger;
  for(int i=0; i<10; i++)
  {
    bin[9-i] = bolum%2;
    bolum = bolum/2;

  }

  Serial.println("Bizim Dönüşümümüz");
  for(int i =0; i<10; i++)
  {
    Serial.print(bin[i]);
  }
  Serial.println("");
    
  Serial.println("onun Dönüşümü");
  Serial.println(deger,BIN);
  Serial.println(deger);

  delay(10000);



}
