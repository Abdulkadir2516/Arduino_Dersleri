void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // 1 ile 50 arasındaki sayırları 30-35 arasındaki sayılar dahil olmadan bastıralım

  for (int i = 0; i < 51; i++) {

    if (i < 36 && i > 30) {
      continue;
    }

    Serial.print(i);
        Serial.print(" ");
  }

  Serial.println(" ");

  for (int i = 0; i < 51; i++) {

    if (i > 30) {
      break;
    }

    Serial.print(i);
    Serial.print(" ");
  }
}






void loop() {
  // put your main code here, to run repeatedly:
}
