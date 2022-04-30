/*
  Arduino Starter Kit example
  Krystian Zun

  Project 2 - Spaceship Interface
    ver.02 - Challenge:

      if the switchState is LOW:
        turn the green LED on
        turn the yellow LED on (blink)
        turn the red LEDs on off

       if the switchState is HIGH:
        turn the green LED off
        turn the yellow LED off
        turn the red LEDs on blink


  Parts required:
  - one green LED
  - one yellow LED
  - two red LEDs
  - pushbutton
  - 10 kilohm resistor
  - four 220 ohm resistors
*/


int switchState = 0;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
    
  pinMode (2, INPUT);

}

void loop() {
  
  switchState = digitalRead(2);
  
  if (switchState == LOW) {
    digitalWrite(3, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(8, LOW);
    digitalWrite(10, LOW);
    
    delay (200);
    
    digitalWrite(5, HIGH);
    
    delay (200);
  }
  
  else {
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(10, LOW);
    
    delay (200);
    
    digitalWrite(8, LOW);
    digitalWrite(10, HIGH);
    
    delay (200);
  }
}