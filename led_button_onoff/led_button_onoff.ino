
// Code will light an LED while pressed
// schematic: http://exploringarduino.com/wp-content/uploads/2013/05/549360-c02f005-copy-150x150.jpg


const int LED = 9;
const int BUTTON = 2;
boolean lastButton = LOW;
boolean currentButton = LOW;
boolean ledOn = false;

void setup() {
   pinMode (LED, OUTPUT);
   pinMode (BUTTON, INPUT);
}

boolean debounce(boolean last) {
 boolean current = digitalRead(BUTTON);
 if (last != current) {
  delay(5);
  current = digitalRead(BUTTON);
 } 
 return current;
}

void loop() {
 
 currentButton = debounce(lastButton); 
  
 if (lastButton == LOW && currentButton == HIGH){
  //ledOn = !ledOn;
  led = true;
 } 
 
 lastButton = currentButton;
 digitalWrite(LED, ledOn); 
 
}
