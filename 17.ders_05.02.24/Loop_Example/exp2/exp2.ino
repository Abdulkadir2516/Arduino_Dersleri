void setup() {


  

  Serial.begin(9600);
  // 1 ile 50 arasındaki tek sayıları toplayarak ekranda yazdır

  int toplam = 0;
  for (int i = 1; i < 11; i += 1) {

    if (i % 2 == 1) {

      toplam = toplam + i;

    }
  }

  Serial.print(toplam);
}









void loop() {
  // put your main code here, to run repeatedly:
}
