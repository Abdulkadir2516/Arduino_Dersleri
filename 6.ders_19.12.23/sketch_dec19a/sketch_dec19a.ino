int sayac=0;
int i = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  sayac = sayac + 1;
  i += 1;
  Serial.print(sizeof(sayac));
  Serial.print(" ");

  delay(100);

  if( i == 30)
  {
      Serial.println("");
      i = 0;
  }
  
  //sayac += 1 aynı
  //sayac = sayac + 1
}



