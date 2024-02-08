void setup() {
  // put your setup code here, to run once:
  // Örnek: sayının basamak sayısını While Döngüsü kullanarak bulan programı yapınız.
  Serial.begin(9600);
  long sayi = 13533;

  int bsm = 0;

  while (sayi > 0) {
    Serial.print(sayi);
    Serial.print(" ");

    sayi = sayi / 10;

    bsm++;
  }
  Serial.println();

  Serial.println(bsm);
}
void loop() {
  // put your main code here, to run repeatedly:
}
