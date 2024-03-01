#include <SPI.h>
#include <SD.h>

File myFile;

void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT); // CS pinini çıkış olarak ayarla
  if (!SD.begin(4)) { // CS pinine göre SD kartı başlat
    Serial.println("Kart başlatılamadı.");
    return;
  }
  Serial.println("Kart başarıyla başlatıldı.");
  
  dosyaSil("test2.txt");
  delay(1000);
  create_file("test2.txt");
  delay(1000);

  for(int i = 0; i<100; i+=3)
  {
    
    data_insert("test2.txt", i);

  }
  delay(1000);


  oku("test2.txt");
    delay(1000);

  listFiles(); // Dosyaları listele
  delay(1000);

  return 0;
}


void loop() {
  // Boş
}

void listFiles() {
  File root = SD.open("/");
  Serial.println("Root dizinindeki dosyalar:");
  while (true) {
    File entry = root.openNextFile();
    if (!entry) {
      // Dosya kalmadığında döngüyü sonlandır
      break;
    }
    Serial.print("  ");
    Serial.println(entry.name());
    entry.close();
  }
  root.close();
}

void create_file(const char* dosyaAdi) {
  File myFile = SD.open(dosyaAdi, FILE_WRITE); // test.txt dosyasını yazma modunda aç
  if (myFile) {
    Serial.println("Dosya başarıyla açıldı.");
    myFile.close(); // Dosyayı kapat
  } else {
    Serial.println("Dosya açılamadı.");
  }
}

void data_insert(const char* dosyaAdi, const int veri) {
  File myFile = SD.open(dosyaAdi, FILE_WRITE);
  if (myFile) {
    myFile.println(veri);
    myFile.close();
  } else {
    Serial.println("Dosya açılamadı.");
  }
}

void oku(const char* dosyaAdi) {
  File myFile = SD.open(dosyaAdi);
  if (myFile) {
    Serial.println("Dosya başarıyla açıldı:");
    while (myFile.available()) {
      Serial.write(myFile.read());
    }
    myFile.close();
  } else {
    Serial.println("Dosya açılamadı.");
  }
}

void dosyaSil(const char* dosyaAdi) {
  if (SD.remove(dosyaAdi)) {
    Serial.println("Dosya başarıyla silindi.");
  } else {
    Serial.println("Dosya silinemedi.");
  }
}

