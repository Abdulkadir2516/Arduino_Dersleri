#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2, 3);  // RX | TX

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
  Serial.println("HC-05 Bluetooth modülüne bağlanıyor...");
}

void loop() {
  // Bluetooth üzerinden gelen verileri oku ve seri monitöre yaz
  if (BTSerial.available()) {

    char receivedChar = BTSerial.read();
    if (receivedChar == 'F') {
      ileri();
    }
    else if(receivedChar == 'B') {
      geri()
    }
    else if(receivedChar == 'R') {
      sag()
    }
    else if(receivedChar == 'L') {
      sol();
    }
  }
}
