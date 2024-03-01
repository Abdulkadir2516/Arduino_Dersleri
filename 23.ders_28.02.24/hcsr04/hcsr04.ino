
#include "NewPing.h"

#define TRIGGER_PIN 3
#define ECHO_PIN 4
#define buzzer 13

#define MAX_DISTANCE 400  

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

float duration, distance;
void setup() 
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}
void loop() 
{

  distance = sonar.ping_cm();
  
  Serial.print("Mesafe = ");
  
  if (distance >= 200 || distance <= 2) 
  {
    Serial.println("Out of range");
  }
  else 
  {
    Serial.print(distance);
    Serial.println(" cm");

    if(distance < 20)
    {
      
    digitalWrite(buzzer, 1);
    delay(100);
    digitalWrite(buzzer, 0);
    delay(100);
    


    }
  }
}