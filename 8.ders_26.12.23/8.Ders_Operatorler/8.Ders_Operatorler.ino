float b = 7.0;
void setup() {

  Serial.begin(9600);

}

void loop() {
  /*
  Serial.print("bolunen sayi => ");
  Serial.print(67);
  Serial.print(" bolen sayi => ");
  Serial.print(b);
  float bolum = 10/15.5; //(67) / float(b);
  int bolum2 = bolum;

  Serial.print(" Bolum => ");
  Serial.print(bolum);

  Serial.print(" Bolum => ");
  Serial.print(bolum2);
  */
/*
  b = b+ 100000000;

  b++;
  Serial.print(" ");
  Serial.print(b);

  delay(100);


  Serial.println();*/

  atama();
  delay(10);

}
byte a = 5;
void atama()
{
  a++;

  Serial.print(" ");
  Serial.print(a);

}
