void setup() {
  // put your setup code here, to run once:

  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  pinMode(4, INPUT);
  pinMode(3, INPUT);
  pinMode(2, INPUT);

  Serial.begin(9600);

}
int pin1;
int pin2;
int pin3;
void loop() {
  // put your main code here, to run repeatedly:
  pin1 = digitalRead(2);
  pin2 = digitalRead(3);
  pin3 = digitalRead(4);

  bool kosul0 = pin1 == 1 & pin2 == 1 & pin3 == 1; // hiç bir buton basılı değil ise
  bool kosul1 = pin1 == 0 & pin2 == 1 & pin3 == 1; // 1. buton basılı diğerleri basılı değil ise
  bool kosul2 = pin1 == 1 & pin2 == 0 & pin3 == 1; // 2. buton basılı diğerleri basılı değil ise
  bool kosul3 = pin1 == 0 & pin2 == 0 & pin3 == 1; // 1 ve 2. buton basılı 3. buton basılı değil ise
  bool kosul4 = pin1 == 1 & pin2 == 1 & pin3 == 0; // 1 ve 2. buton basılı 3. buton basılı değil ise
  bool kosul5 = pin1 == 0 & pin2 == 1 & pin3 == 0; // 1 ve 2. buton basılı 3. buton basılı değil ise
  bool kosul6 = pin1 == 1 & pin2 == 0 & pin3 == 0; // 1 ve 2. buton basılı 3. buton basılı değil ise
  bool kosul7 = pin1 == 0 & pin2 == 0 & pin3 == 0; // 1 ve 2. buton basılı 3. buton basılı değil ise

  if (kosul0){
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(9,1);
    digitalWrite(10,1);
    digitalWrite(11,1);
    temizle();
  }
  else if(kosul1)
  {
    digitalWrite(9,1);
    digitalWrite(10,1);

    temizle();
  }
  else if(kosul2) 
  {
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(5,1);
    digitalWrite(10,1);
    digitalWrite(11,1);

    temizle();
    
  }
  else if(kosul3) 
  {
    digitalWrite(5,1);
    digitalWrite(8,1);
    digitalWrite(9,1);
    digitalWrite(10,1);
    digitalWrite(11,1);

    temizle();

  }
  else if(kosul4)
  {
    digitalWrite(5,1);
    digitalWrite(9,1);
    digitalWrite(10,1);
    digitalWrite(6,1);

    temizle();

  }
  else if(kosul5)
  {
    
  digitalWrite(5,1);
  digitalWrite(9,1);
  digitalWrite(8,1);
  digitalWrite(6,1);
  digitalWrite(11,1);

  temizle();

  }
  else if(kosul6)
  {
    
    digitalWrite(11,1);
    digitalWrite(6,1);
    digitalWrite(5,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(9,1);

    temizle();

  }
  else if(kosul7)
  {
    
    digitalWrite(9,1);
    digitalWrite(10,1);
    digitalWrite(11,1);
    
    temizle();

  }
  


  Serial.print(" 2. pin ");
  Serial.print(pin1);
  
  Serial.print(" 3. pin ");
  Serial.print(pin2);

  Serial.print(" 4. pin ");
  Serial.print(pin3);

  Serial.println("");
/*
  digitalWrite(6,1);
  digitalWrite(7,1);
  digitalWrite(8,1);
  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(11,1);

  temizle();

  digitalWrite(9,1);
  digitalWrite(10,1);

  temizle();
  
  digitalWrite(7,1);
  digitalWrite(8,1);
  digitalWrite(5,1);
  digitalWrite(10,1);
  digitalWrite(11,1);

  temizle();

  digitalWrite(5,1);
  digitalWrite(8,1);
  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(11,1);

  temizle();

  digitalWrite(5,1);
  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(6,1);

  temizle();

  digitalWrite(5,1);
  digitalWrite(9,1);
  digitalWrite(8,1);
  digitalWrite(6,1);
  digitalWrite(11,1);

  temizle();

digitalWrite(11,1);
  digitalWrite(6,1);
  digitalWrite(5,1);
  digitalWrite(7,1);
  digitalWrite(8,1);
  digitalWrite(9,1);

  temizle();

  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(11,1);
  
  temizle();

 digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,1);
  digitalWrite(8,1);
  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(11,1);

  
  temizle();

  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(8,1);
  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(11,1);

  
  temizle();
*/

}

void temizle()
{
  delay(500);
  for(int i=5; i<=11; i++)
  {
    digitalWrite(i,0);
  }
  delay(200);

}
