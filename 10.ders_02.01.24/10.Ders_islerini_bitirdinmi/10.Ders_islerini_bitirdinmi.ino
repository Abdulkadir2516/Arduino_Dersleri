// C++ code
//

bool btn1;
bool btn2;
bool btn3;

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  
  Serial.begin(9600);
  
}

void loop()
{
  btn1 = digitalRead(2);
  btn2 = digitalRead(3);
  btn3 = digitalRead(4);

  /*Serial.print(btn1);
  Serial.print(btn2);
  Serial.print(btn3);
  Serial.print("  ");*/
  
  if(!btn1 && !btn2 && !btn3)
  {    
    digitalWrite(5, 1);

    
  }  else
  {
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);

  }

  
  
  
}