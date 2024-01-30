

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);

}

int i =0;
void loop() {
  // put your main code here, to run repeatedly:

  for(; i<=15; i++){
    Serial.println(i);
  }
      
  //hello();


}

void hello()
{
  Serial.println();
}
