/*
Basic Arduino Skills
- Simple LED Circuit
This project demonstrates how an LED can be controlled by the Arduino
created 10/01/2018
modified 10/01/2018
by: Reid Tutorial Ministry
*/

//Set the LED Pin constant globally
//The LED is connected to Pin 9 of the Arduino
int led = 9;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize LED Pin 8 as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);      // turn the LED on (HIGH is the voltage level)
  delay(1000);                  // wait for a second
  digitalWrite(led, LOW);       // turn the LED off by making the voltage LOW
  delay(1000);                  // wait for a second
}
