/*
  Arduino Starter Kit example
  Krystian Zun

  Project 2 - Spaceship Interface
    ver.00 - Original Code:

      if the switchState is LOW:
        turn the green LED on
        turn the red LED off

       if the switchState is HIGH:
        turn the green LED off
        turn the red LED on (blink)


  Parts required:
  - one green LED
  - two red LEDs
  - pushbutton
  - 10 kilohm resistor
  - three 220 ohm resistors
*/


int switchState = 0;

void setup() {
  /*put your setup code here, to run once*/


  // declare the LED pins as outputs (give data back)

  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);


  // declare the switch pin as an input (provide data in)
  pinMode (2, INPUT);
}

void loop() {
  /*put your main code here, to run repeatedly*/


  // read the value of the switch
  // digitalRead() checks to see if there is voltage on the pin or not
  /*based on that we specificy initial state, when button is off*/


  switchState = digitalRead(2);


  // if the button is not pressed turn on the green LED and off the red LEDs

  if (switchState == LOW) {
    digitalWrite(3, HIGH); // turn the green LED on pin 3 on
    digitalWrite(4, LOW); // turn the red LED on pin 4 off
    digitalWrite(5, LOW); // turn the red LED on pin 5 off
  }


  // this "else" is part of the above if() statement.
  // if the switch is not LOW (the button is pressed) turn off the green LED and
  // blink alternatively the red LEDs

  else {
    digitalWrite(3, LOW); // turn the green LED on pin 3 off
    digitalWrite(4, LOW); // turn the red LED on pin 4 off
    digitalWrite(5, HIGH);  // turn the red LED on pin 5 on

    // wait for a quarter second before changing the light
    delay (200);

    // and now it involves only LED on pin 4 and 5
    digitalWrite(4, HIGH); // turn the red LED on pin 4 on
    digitalWrite(5, LOW);  // turn the red LED on pin 5 off

    // wait for a quarter second before changing the light
    delay (200);
  }
}