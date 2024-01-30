//L298N Bağlantısı
const int motor1_in1 = 5;   // L298N'in IN1 Girişi
const int motor1_in2 = 6;   // L298N'in IN2 Girişi
const int motor1_enA = A1;  // L298N'in ENA Girişi

const int motor2_in1 = 10;  // L298N'in IN3 Girişi
const int motor2_in2 = 11;  // L298N'in IN4 Girişi
const int motor2_enB = A2;  // L298N'in ENB Girişi


int i = 0;         //Döngüler için atanan rastgele bir değişken
int j = 0;         //Döngüler için atanan rastgele bir değişken
int state;         //Bluetooth cihazından gelecek sinyalin değişkeni
int vSpeed = 255;  // Standart Hız, 0-255 arası bir değer alabilir

void setup() {

  pinMode(motor1_enA, OUTPUT);
  pinMode(motor2_enB, OUTPUT);

  pinMode(motor1_in1, OUTPUT);
  pinMode(motor1_in2, OUTPUT);

  pinMode(motor2_in1, OUTPUT);
  pinMode(motor2_in2, OUTPUT);

  // Turn off motors - Initial state
  digitalWrite(motor1_in1, LOW);
  digitalWrite(motor1_in2, LOW);
  digitalWrite(motor2_in1, LOW);
  digitalWrite(motor2_in2, LOW);

  // 9600 baud hızında bir seri port açalım
  Serial.begin(9600);
}

void loop() {
  //Bluetooth bağlantısı koptuğunda veya kesildiğinde arabayı durdur.
  //(Aktif etmek için alt satırın "//" larını kaldırın.)
  //     if(digitalRead(BTState)==LOW) { state='S'; }

  //Gelen veriyi 'state' değişkenine kaydet
  if (Serial.available() > 0) {
    state = Serial.read();
  }

  // // Uygulamadan ayarlanabilen 4 hız seviyesi.(Değerler 0-255 arasında olmalı)
  // if (state == '0') {
  //   vSpeed = 0;
  // } else if (state == '1') {
  //   vSpeed = 100;
  // } else if (state == '2') {
  //   vSpeed = 180;
  // } else if (state == '3') {
  //   vSpeed = 200;
  // } else if (state == '4') {
  //   vSpeed = 255;
  // }

  vSpeed = 255;

  /***********************İleri****************************/
  //Gelen veri 'F' ise araba ileri gider.
  if (state == 70) {
    Serial.println(state);

    analogWrite(motor1_enA, 255);
    analogWrite(motor2_enB, 255);

    // Turn on motor A & B
    digitalWrite(motor1_in1, HIGH);
    digitalWrite(motor1_in2, LOW);
    digitalWrite(motor2_in1, HIGH);
    digitalWrite(motor2_in2, LOW);

    //analogWrite(motorA1, vSpeed); analogWrite(motorA2, 0);
    //analogWrite(motorB1, vSpeed);      analogWrite(motorB2, 0);
  }
  /**********************İleri Sol************************/
  //Gelen veri 'G' ise araba ileri sol(çapraz) gider.
  else if (state == 'G') {
    //analogWrite(motorA1,vSpeed ); analogWrite(motorA2, 0);
    //  analogWrite(motorB1, 100);    analogWrite(motorB2, 0);
  }
  /**********************İleri Sağ************************/
  //Gelen veri 'I' ise araba ileri sağ(çapraz) gider.
  else if (state == 'I') {
    //  analogWrite(motorA1, 100); analogWrite(motorA2, 0);
    //  analogWrite(motorB1, vSpeed);      analogWrite(motorB2, 0);
  }
  /***********************Geri****************************/
  //Gelen veri 'B' ise araba geri gider.
  else if (state == 66) {
    Serial.println(state);

    //analogWrite(motorA1, 0);   analogWrite(motorA2, vSpeed);
    //  analogWrite(motorB1, 0);   analogWrite(motorB2, vSpeed);
  }
  /**********************Geri Sol************************/
  //Gelen veri 'H' ise araba geri sol(çapraz) gider
  else if (state == 'H') {
    //analogWrite(motorA1, 0);   analogWrite(motorA2, 100);
    //  analogWrite(motorB1, 0); analogWrite(motorB2, vSpeed);
  }
  /**********************Geri Sağ************************/
  //Gelen veri 'J' ise araba geri sağ(çapraz) gider
  else if (state == 'J') {
    //analogWrite(motorA1, 0);   analogWrite(motorA2, vSpeed);
    //  analogWrite(motorB1, 0);   analogWrite(motorB2, 100);
  }
  /***************************Sol*****************************/
  //Gelen veri 'L' ise araba sola gider.
  else if (state == 76) {
    Serial.println(state);

    //analogWrite(motorA1, vSpeed);   analogWrite(motorA2, 150);
    //  analogWrite(motorB1, 0); analogWrite(motorB2, 0);
  }
  /***************************Sağ*****************************/
  //Gelen veri 'R' ise araba sağa gider
  else if (state == 82) {
    Serial.println(state);

    //analogWrite(motorA1, 0);   analogWrite(motorA2, 0);
    //  analogWrite(motorB1, vSpeed);   analogWrite(motorB2, 150);
  }

  /************************Stop*****************************/
  //Gelen veri 'S' ise arabayı durdur.
  else if (state == 83) {
    Serial.println(state);
    //  analogWrite(motorA1, 0);  analogWrite(motorA2, 0);
    //  analogWrite(motorB1, 0);  analogWrite(motorB2, 0);
  }
}

void ileri() {


  analogWrite(motor1_enA, 255);
  analogWrite(motor2_enB, 255);

  digitalWrite(motor1_in1, HIGH);
  digitalWrite(motor1_in2, LOW);
  digitalWrite(motor2_in1, HIGH);
  digitalWrite(motor2_in2, LOW);
}
