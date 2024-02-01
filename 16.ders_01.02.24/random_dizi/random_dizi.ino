//0 ile 1000 arasında rastgele çift sayılardan oluşan 10 elemanlı bir dizi oluşturulması

void setup() {
  Serial.begin(9600);
 int myInts[10]; 
  
  int sayac = 0;
  while(sayac < 10)
  {
    int rnd = random(0,1000);

    if(rnd % 2 ==0)
    {  
      myInts[sayac] = rnd;
      
      Serial.print(myInts[sayac],DEC);
      Serial.print(" ");
      sayac++;
    }
    

  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
