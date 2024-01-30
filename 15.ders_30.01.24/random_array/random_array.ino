
int random_sayilar[200];

void setup() {
  Serial.begin(9600);
  for(int i=0; i<200; i+=1)
  {
    random_sayilar[i] = random(1,20000);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  
  int rnd_sayi = random(200);
  
  Serial.print(rnd_sayi);
  Serial.print(" ");

  Serial.print(random_sayilar[rnd_sayi]);
  Serial.println(" ");
  delay(2000);
  
  int sayac = 0;
  for(int i=0; i<200; i+=1)
  {
    if(random_sayilar[i] % 2 == 1)
    {
      sayac += 1;

      Serial.print(i);
      Serial.print(" ");
      Serial.print(random_sayilar[i]);
      Serial.print(" ");

      if(sayac%4==0)
      {
        Serial.println(" ");
      }
    }
    
   
  }

  Serial.println(sayac);


  
    delay(12000);

  
}
