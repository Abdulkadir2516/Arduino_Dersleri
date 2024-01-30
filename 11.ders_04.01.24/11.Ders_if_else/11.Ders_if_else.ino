int buton1= 2;
int buton2= 3;
int buton3= 4;         
int led = 5;

void setup()
{
  pinMode(buton1, INPUT);
  pinMode(buton2, INPUT);
  pinMode(buton3, INPUT);   
  pinMode(led, OUTPUT);  
} 

void loop(){

  if(digitalRead(buton1) == true && digitalRead(buton2) == true && digitalRead(buton3) == true)   
  {    
    digitalWrite(led, HIGH); 
         
  }
  else
  {
    digitalWrite(led, LOW);        
  }

}