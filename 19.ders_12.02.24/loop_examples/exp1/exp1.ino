void setup() {
  // put your setup code here, to run once:

  int sayi = 193;
  for (int i = 2; i < sayi; i++)
  {
    if (sayi % i == 0) {
      Serial.print(i);
      Serial.print(" ");

    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}