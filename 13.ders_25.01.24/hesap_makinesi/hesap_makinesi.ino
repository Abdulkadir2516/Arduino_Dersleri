#include <Keypad.h>

const byte rows = 4; //four rows
const byte cols = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeyers[rows][cols] = {
  {'7','8','9','/'},
  {'4','5','6','*'},
  {'1','2','3','-'},
  {'#','0','=','+'}
};
byte row_Pins[rows] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte col_Pins[cols] = {13,12, 11, 10}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad cust_keypad = Keypad( makeKeymap(hexaKeyers), row_Pins, col_Pins, rows, cols); 

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char cust_key = cust_keypad.getKey();
  
  if (cust_key){
    Serial.print(cust_key);
  }

    if (cust_key == '#' )
    {
        Serial.println(" ");
    }
}