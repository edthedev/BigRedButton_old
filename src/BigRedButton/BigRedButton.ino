// use this option for OSX:
// use this option for Windows and Linux:
//  char ctrlKey = KEY_LEFT_CTRL;  
// #include <Keyboard.h>
char EnterKey = 176;
int button = 0;
int key = 0;
int signal = 0;

int hotPin = 14;
int keyPin = 9;
int buttonPin = 10;
int ledPin = 12; // the on board Teensy LED is on pin 12.

void setup() {

  // Connect the pull-up resistors to this pin.
  pinMode(hotPin, HIGH);

  // make keyPin and buttonPin inputs and turn on the 
  // pullup resistor so they go high unless
  // connected to ground:
  pinMode(buttonPin, INPUT);
  pinMode(keyPin, INPUT);

  // status light for the key state:
  pinMode(ledPin, OUTPUT);
  
  // initialize control over the keyboard:
  // Keyboard.begin();
  Serial.begin(9600);
}

void loop() {
  
  //while (digitalRead(11) == LOW) {
    // do nothing until pin 2 goes low
  //  delay(500);
  //}
  button = digitalRead(buttonPin);
  key = digitalRead(keyPin);
  signal =  !key && !button;
  digitalWrite(ledPin, !key);
  // digitalWrite(ledPin, signal);
  
  // Serial.print("Button: ");
  // Serial.print(button);
  // Serial.print(" Key: ");
  // Serial.print(key);
  // Serial.println("");
  if(signal)
  {
    Serial.print("RedButton!");
    // Keyboard.press(EnterKey);
  }
  delay(100);
  // new document:
  //delay(100);
  //Keyboard.releaseAll();
  // wait for new window to open:
  //delay(1000);
}
 
