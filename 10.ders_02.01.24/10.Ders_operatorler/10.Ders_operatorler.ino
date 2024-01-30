

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
  
  Serial.print("pot1 in pot2 den büyük olma durumu ");
  Serial.print(s1 > s2);
  Serial.println("");

  Serial.print("pot1 in pot2 den küçük olma durumu ");
  Serial.print(s1 < s2);
  Serial.println("");

  Serial.print("pot1 in pot2 e eşit olma durumu ");
  Serial.print(s1 == s2);
  Serial.println("");

  Serial.print("pot1 in pot2 e eşit olmama durumu ");
  Serial.print(s1 != s2);
  Serial.println("");


  delay(30000);

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
