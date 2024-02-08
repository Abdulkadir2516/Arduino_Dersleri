void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

  int sayi = 221;//random(1,100);
      Serial.println(sayi);

  for (int i = 2; i < sayi; i++) {

    if (sayi % i == 0) {

      Serial.print(i);
      Serial.print(" ");

    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
