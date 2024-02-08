void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  //Örnek: 1-100 arasındaki sayıların toplamını While Döngüsü kullanarak yapınız.
  int deger = 1;
  int toplam = 0;
  while (deger < 100) {
    toplam = toplam + deger;
    deger++;
  }

      Serial.print(toplam);

}

void loop() {
  // put your main code here, to run repeatedly:
}
