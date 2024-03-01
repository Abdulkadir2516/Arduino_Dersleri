

#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN 9  // Configurable, see typical pin layout above
#define SS_PIN 10  // Configurable, see typical pin layout above

MFRC522 mfrc522(SS_PIN, RST_PIN);  // Create MFRC522 instance.

MFRC522::MIFARE_Key key;

#define MAX_CARDS 10          // Maksimum kart sayısı
#define MAX_UID_LENGTH 20     // Maksimum UID uzunluğu (byte)
#define MAX_STRING_LENGTH 30  // Maksimum string uzunluğu
// Kart bilgilerini saklamak için bir yapı (struct)
struct CardInfo {
  char uid[MAX_UID_LENGTH];
  char name[MAX_STRING_LENGTH];
};

CardInfo allowedCards[MAX_CARDS] = {
  { "4D194C24", "Abdulkadir" },
  { "47C4472E86481", "Abdulkadir 2" },
  // Diğer kart bilgileri buraya eklenir...
};

 int button=7;

/**
 * Initialize.
 */
void setup() {
  Serial.begin(9600);  // Initialize serial communications with the PC
  while (!Serial)
    ;                  // Do nothing if no serial port is opened (added for Arduinos based on ATMEGA32U4)
  SPI.begin();         // Init SPI bus
  mfrc522.PCD_Init();  // Init MFRC522 card
  pinMode(button, INPUT);
}

/**
 * Main loop.
 */
void loop() {
  // Reset the loop if no new card present on the sensor/reader. This saves the entire process when idle.
  if (!mfrc522.PICC_IsNewCardPresent())
    return;

  // Select one of the cards
  if (!mfrc522.PICC_ReadCardSerial())
    return;

  if(digitalRead(button)==1)
  {
    digitalWrite(8,1);
  }
  else
  {
    digitalWrite(8,0);

  }
  // Show some details of the PICC (that is: the tag/card)
  Serial.print(F("Card UID:"));
  dump_byte_array(mfrc522.uid.uidByte, mfrc522.uid.size);
  Serial.println();
}

/**
 * Helper routine to dump a byte array as hex values to Serial.
 */
void dump_byte_array(byte *buffer, byte bufferSize) {
  String kartUID = "";

  for (byte i = 0; i < bufferSize; i++) {
    Serial.print(buffer[i], HEX);
    kartUID += String(buffer[i], HEX);
  }
  kartUID.toUpperCase();

  Serial.println();

  for (int i = 0; i < MAX_CARDS; i++) {


    if (kartUID == allowedCards[i].uid) {

      Serial.println("kart doğrulandı");

      Serial.print("UID: ");
      Serial.println(allowedCards[i].uid);
      Serial.print("Name: ");
      Serial.println(allowedCards[i].name);
      Serial.println("-------------------------");
      digitalWrite(8, 1);

      delay(1000);

    } else {
      digitalWrite(8, 0);
    }
  }
}

void gonder() {
  digitalWrite(8, 1);
  delay(3000);
}
