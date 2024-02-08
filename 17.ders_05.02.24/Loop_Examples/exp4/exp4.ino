void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  //1’den 10’a kadar sayıları ekrana yazdıran örneği while döngüsü kullanarak yapınız.
  int deger = 0;
  while (deger < 10) {
    Serial.println(deger);
    deger++;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
