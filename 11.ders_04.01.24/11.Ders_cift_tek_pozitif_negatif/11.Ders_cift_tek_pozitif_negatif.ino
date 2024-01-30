 

void setup() {
  // put your setup code here, to run once:
  pinMode(3, INPUT);
  pinMode(4, INPUT);

  Serial.begin(9600);
}

char alf[11] = "abcdefghijk";

void loop() {
  // put your main code here, to run repeatedly:
  /*
  Serial.print(analogRead(4));
  Serial.print(" ");
  Serial.print(analogRead(3));

  Serial.println(" ");
  */
/*
  int deger = map(analogRead(4), 0,1023, -10, 10);
  int deger2 = map(analogRead(3), 0,1023, -10, 10);


  bool eksi_mi = deger <0 ;
 
 if(eksi_mi)
{ 
Serial.println(deger)  ;
}

bool pozitif_mi = deger2 >0;
 
 if (pozitif_mi)
 {

  Serial.println(deger2);

 }
*/
 int d3 = map(analogRead(4),0,1023,0,200);
  
  bool kosul =d3 % 7 == 0 || d3 % 3 == 0 ;
  if (!kosul)
  {

    Serial.println(d3);
  }
  /*
  bool cift_mi = deger % 2 == 0 && deger2 % 2 == 0;
  bool tekmi = !(deger % 2 == 0) && deger2 % 2 != 0;

  if(cift_mi)
  {
    Serial.print(deger);
    Serial.print(" ");
    Serial.print(deger2);
    Serial.println(" ");    
  }
  else if(tekmi)
  {
    
    Serial.print(deger);
    Serial.print(" ");
    Serial.print(deger2);
    Serial.println(" ");
  }
  */
}
