void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // 1 ile 50 arasındaki çift sayıları toplayarak ekranda yazdır
  int toplam = 0;

  for(int deger=1; deger <11 ; deger+=1)
  {
    if(deger % 2==0 )
    {
    toplam=toplam+deger;
    }
 

  }

  Serial.println(toplam);


  










}






void loop() {
  // put your main code here, to run repeatedly:




}
