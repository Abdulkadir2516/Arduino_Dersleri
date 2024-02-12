void setup() {
  // Mükemmel Sayılar

  Serial.begin(9600);
  
  for(int j=1; j<32767;j++)
  {
    int sayi = j;
    
    int toplam = 0;

    //Serial.println(sayi);


    for (int i = 1; i < int(sayi/2)+1; i++) {
      if (sayi % i == 0) {
        //Serial.print(i);
        //Serial.print(" ");
        toplam = i + toplam;
      }
    }

    //Serial.println("");

    //Serial.println(toplam);

    if (sayi == toplam) {
      Serial.println(sayi);
      Serial.println("mukemmel sayidir");
    }

  }
}

void loop() {
  // put your main code here, to run repeatedly:
}