// while döngüsü



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  int sayac = 0;
  bool kosul = true;
  byte rdm = 1;
  while(rdm % 27 != 0 )
  {
    sayac++;

    rdm = random(0,256);
    if(rdm % 10 == 0  )
    {
      Serial.print(rdm);
    }

    /*
    Serial.print(sayac);
    Serial.print(" ");

    */
    delay(1000);
  }

  Serial.println(" ");

  Serial.print(rdm);



}


void loop() {
  // put your main code here, to run repeatedly:

}
