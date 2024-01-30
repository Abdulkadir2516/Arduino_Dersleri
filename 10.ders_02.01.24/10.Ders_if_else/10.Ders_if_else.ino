

void setup() {
  pinMode(2, INPUT);
  pinMode(1, INPUT);
  Serial.begin(9600);
}
int s1, s2;

void loop() {
  s1 = analogRead(1);
  s2 = analogRead(2);

  bastir();
  
  int vize = map(s1, 0,1023,0,100);
  int final = map(s2, 0,1023,0,100);
  int ort = (float(final) + float(vize))/2.0;

    Serial.print(" final => ");
    Serial.print(final);
    Serial.print(" vize => ");
    Serial.print(vize);
    Serial.print(" ortalama => ");
    Serial.print(ort);
    
    Serial.println("");

  if(ort >= 45 && final >= 50)// ((ort > 45 || ort == 45) && (final >50 || final == 50))
  {
    Serial.println("bravo dersi geçtin ");
  }else{
    Serial.println("dersten kaldın. ");

  }


  delay(20000);

}

void bastir()
{
  
  Serial.print("pot1 ");
  Serial.print(s1);
  Serial.print(" ");
  Serial.print("pot2 ");
  Serial.print(s2);
  Serial.println("");

}
