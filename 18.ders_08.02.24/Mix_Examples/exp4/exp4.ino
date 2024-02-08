void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  for (int j = 2; j < 1000; j++) {
    int sayi = j;
    bool asalmi = true;
    for (int i = 2; i < sayi; i++) {

      if (sayi % i == 0) {
        asalmi = false;
        break;
      }
    }

    if (asalmi) {
      Serial.print(sayi);
      Serial.print(" Asaldir.");
      Serial.println(" ");
    }
    /*
    else
    {
      Serial.print(sayi);
      Serial.print(" Asal Degildir.");
          Serial.println(" ");

    }*/
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
