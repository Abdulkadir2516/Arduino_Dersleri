
int bin[10];
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
byte a = 128;
void loop() {
  // put your main code here, to run repeatedly:

  a = a >> 1 ;
  Serial.print(a);
  Serial.print(" ");

  delay(1000);



}
