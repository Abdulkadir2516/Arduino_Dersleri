void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // 1 ile 50 arasındaki sayırları 30-35 arasındaki sayılar dahil olmadan bastıralım
  int i = 0;
  while (i < 51) {

    i++;

    if (i < 36 && i > 30) {

      continue;
    }

    Serial.print(i);
    Serial.print(" ");
  }

  Serial.println(" ");

  i = 0;
  while (i < 51) {
    i++;
    if (i > 30) {
      break;
    }
    Serial.print(i);
    Serial.print(" ");
  }

  Serial.println(" ");


  i = 0;
  bool kosul = true;
  while (kosul) {
    i++;
    if (i > 30) {
      kosul = false;
    }
    Serial.print(i);
    Serial.print(" ");
  }

  Serial.println(" ");

  i = 0;
  while (i < 51) {
    i++;
    if (i > 30) {
      return ;
    }
    Serial.print(i);
    Serial.print(" ");
  }
}












void loop() {
  // put your main code here, to run repeatedly:
}
