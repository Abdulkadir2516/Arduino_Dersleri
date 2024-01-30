 

void setup() {
  // put your setup code here, to run once:
  pinMode(3, INPUT);
  pinMode(4, INPUT);

  Serial.begin(9600);
}
void loop() {
  
  int d3 = map(analogRead(4),0,1023,0,7);
  
  Serial.print(d3);

  switch (d3){
    case 0:
        Serial.print(d3);
      break;
    case 5:
        Serial.print(d3);
      break;
    default:
        Serial.print("hi");
      break;
    
  }

  delay(1000);
  
}
