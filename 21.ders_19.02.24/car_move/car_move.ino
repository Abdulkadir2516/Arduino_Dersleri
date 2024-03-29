const int Enable_A = 11;
const int Enable_B = 6;
const int inputA1 = 10;
const int inputA2 = 9;
const int inputB1 = 8;
const int inputB2 = 7;
const int buzzer = 13;

#include "NewPing.h"
#define TRIGGER_PIN 4
#define ECHO_PIN 5
#define MAX_DISTANCE 200

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

float duration, distance;

#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2, 3);  // RX | TX


void setup() {

  BTSerial.begin(9600);
  Serial.begin(9600);
  pinMode(Enable_A, OUTPUT);
  pinMode(Enable_B, OUTPUT);
  pinMode(inputA1, OUTPUT);
  pinMode(inputA2, OUTPUT);
  pinMode(inputB1, OUTPUT);
  pinMode(inputB2, OUTPUT);
  pinMode(buzzer, OUTPUT);


  digitalWrite(Enable_A, HIGH);
  digitalWrite(Enable_B, HIGH);
}
void loop() {
    


  if (BTSerial.available()) {

    char receivedChar = BTSerial.read();
    Serial.println(receivedChar);
    if (receivedChar == 'F') {
      ileri();
    } else if (receivedChar == 'B') {
      geri();
    } else if (receivedChar == 'R') {
      sag();
    } else if (receivedChar == 'L') {
      sol();
    } else if (receivedChar == 'V') {
      digitalWrite(buzzer, 1);
      delay(1000);
      digitalWrite(buzzer,0);
    }else {
      dur();
    }
    
  }


/*
  // Send ping, get distance in cm
  distance = sonar.ping_cm();
  
  // Send results to Serial Monitor
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

  }*/


}

void dur() {
  digitalWrite(Enable_A, 0);
  digitalWrite(Enable_B, 0);
}

void calis() {
  digitalWrite(Enable_A, 1);
  digitalWrite(Enable_B, 1);
}




void geri() {


  calis();
  //----------Run motors-----------//
  digitalWrite(inputA1, 1);
  digitalWrite(inputA2, 0);
  digitalWrite(inputB1, 1);
  digitalWrite(inputB2, 0);
}

void ileri() {
  calis();
  //----------Run motors-----------//
  digitalWrite(inputA1, 0);
  digitalWrite(inputA2, 1);
  digitalWrite(inputB1, 0);
  digitalWrite(inputB2, 1);
}

void sol() {
  calis();

  //----------Run motors-----------//
  digitalWrite(inputA1, 1);
  digitalWrite(inputA2, 0);
  digitalWrite(inputB1, 0);
  digitalWrite(inputB2, 1);
}

void sag() {
  calis();

  //----------Run motors-----------//
  digitalWrite(inputA1, 0);
  digitalWrite(inputA2, 1);
  digitalWrite(inputB1, 1);
  digitalWrite(inputB2, 0);
}
