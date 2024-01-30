
int s1,s2,s3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  s1 = 5;
  s2 = 4;
  s3 = 3;

  char alfabe[50] = "abcdefghijklmnoprstuvyzwqABCDEFGHIJKLMNOPRSTUVYZWQ";
  
  for (int x =0; x < 50; x++) {
     char a = alfabe[x];
  

  
      Serial.print(int(a),BIN);
            

      Serial.print(" ");


  } 
        Serial.println(" ");

  for (int x =0; x < 50; x++) {
     char a = alfabe[x];
  

  
      Serial.print(int(a),HEX);
            

      Serial.print(" ");


  } 
        Serial.println(" ");

 for (int x =0; x < 50; x++) {
     char a = alfabe[x];
  

  
      Serial.print(int(a));
            

      Serial.print(" ");


  } 
        Serial.println(" ");

  delay(1000);


}



