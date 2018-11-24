/*
Basic Arduino Skills
  - Controlling Multiple LEDs (Traffic Light Model)

This project demonstrates how to cycle through three LEDs in turn
-- first Red, then Yellow and then Green

created 11/06/2018
modified 11/06/2018
by: Reid Tutorial Ministry
*/
 
// Declare pin assignments
#define LEDRed 12
#define LEDYellow 11
#define LEDGreen 10

// the setup function runs once when you press reset or power the board
void setup() {

    Serial.begin(9600);               // open Serial Monitor (9600 bits per second / baud rate)
    // initialize LED Pins as output.
    pinMode(LEDRed, OUTPUT);
    pinMode(LEDYellow, OUTPUT);
    pinMode(LEDGreen, OUTPUT);
}

// this loop will repeat forever until power is off
void loop() {
  // turn on Red for 8 seconds, others off
  Serial.println("Red light is on ....");
  
  digitalWrite(LEDRed, HIGH);   // Red on
  digitalWrite(LEDYellow, LOW); // Yellow off
  digitalWrite(LEDGreen, LOW);  // Green off
  delay(8000);        // pause 10 seconds

  // blink Yellow for 4 times
  Serial.println("Yellow light is blinking ....");
  
  for (int i=0; i<4; i++) {
    digitalWrite(LEDYellow, HIGH);  // Yellow on
    delay(1000);        // pause 1 second
    digitalWrite(LEDYellow, LOW);  // Yellow on
    delay(1000);        // pause 1 second
  }
  
  // turn on Green for 10 seconds, others off
  Serial.println("Green light is on ....");
  
  digitalWrite(LEDRed, LOW);    // Red off
  digitalWrite(LEDYellow, LOW); // Yellow off
  digitalWrite(LEDGreen, HIGH); // Green on
  delay(10000);        // pause 20 seconds

  // blink Yellow for 4 times
  Serial.println("Yellow light is blinking ....");
  
  for (int i=0; i<4; i++) {
    digitalWrite(LEDYellow, HIGH);  // Yellow on
    delay(1000);        // pause 1 second
    digitalWrite(LEDYellow, LOW);  // Yellow on
    delay(1000);        // pause 1 second
  }

  Serial.println();         // blank line between each cycle
}
