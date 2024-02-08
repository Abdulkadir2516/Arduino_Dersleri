void setup() {
  Serial.begin(9600);
  // faktöriyel hesaplama
  // 5! => 5*4*3*2*1 =120
  // 3! => 3*2*1 = 6

  int sayi = 6;

  int carpim = 1;

  for (int i = 6; i > 0; i--) {
    carpim = carpim * i;
  }
  Serial.println(carpim);
}

void loop() {
  // put your main code here, to run repeatedly:
}
