#include <Keyboard.h>

/* DDR pad code for Arduino Leonardo */
int Button_Center = 0;
int Button_FRight = 0;
int Button_FLeft = 0;
int Button_BRight = 0;
int Button_BLeft = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  int i = 0;
  
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  // setup sensors
  for(i = 9; i < 14; i++){ 
    pinMode(i, INPUT_PULLUP);
  }

  // setup LEDs
  for(i = 3; i < 8; i++){ 
    pinMode(i, OUTPUT);
  }

}


// loop to run forever
void loop() {
  Button_Center = digitalRead(11);
  Button_FRight = digitalRead(9);
  Button_BLeft = digitalRead(10);
  Button_BRight = digitalRead(12);
  Button_FLeft = digitalRead(13);


  if(Button_Center == HIGH){
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(5, HIGH);
    Keyboard.write('C');
    delay(100);
  } else {
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(5, LOW);
  }     

  if(Button_FRight == HIGH){
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(3, HIGH);
    Keyboard.write('P');
    delay(100);
  } else {
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(3, LOW);
  }  

  if(Button_FLeft == HIGH){
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(7, HIGH);
    Keyboard.write('Q');
    delay(100);
  } else {
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(7, LOW);
  } 
  
  if(Button_BRight == HIGH){
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(6, HIGH);
    Keyboard.write('M');
    delay(100);
  } else {
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(6, LOW);
  } 

  if(Button_BLeft == HIGH){
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(4, HIGH);
    Keyboard.write('Z');
    delay(100);
  } else {
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(4, LOW);
  } 

//  delay(500);
  
}
