// use this option for OSX:
// use this option for Windows and Linux:
//  char ctrlKey = KEY_LEFT_CTRL;  
// #include <Keyboard.h>
char EnterKey = 176;

void setup() {
  // make pin 2 an input and turn on the 
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(12, OUTPUT);    
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  pinMode(11, INPUT);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  while (digitalRead(11) == LOW) {
    // do nothing until pin 2 goes low
    delay(500);
  }
  delay(1000);
  // new document:
  Keyboard.press(EnterKey);
  delay(100);
  Keyboard.releaseAll();
  // wait for new window to open:
  delay(1000);
}
 
