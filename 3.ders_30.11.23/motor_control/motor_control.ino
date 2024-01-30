//L298N Bağlantısı
int in3 = 5;   // L298N'in in3 Girişi
int in4 = 6;   // L298N'in in4 Girişi
int enB = 7;  // L298N'in enB Girişi

void setup() {

  pinMode(enB, OUTPUT);

  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // Turn off motors - Initial state
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);


}

void loop() {
  

  analogWrite(enB, 200);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  //delay(1000);
    
 
}
