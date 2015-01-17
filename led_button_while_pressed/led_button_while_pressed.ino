
// Code will light an LED while pressed
// schematic: http://exploringarduino.com/wp-content/uploads/2013/05/549360-c02f005-copy-150x150.jpg


const int LED = 9;
const int BUTTON = 2;

void setup() {
   pinMode (LED, OUTPUT);
   pinMode (BUTTON, INPUT);
}

void loop() {
 if (digitalRead(BUTTON) == LOW){
  digitalWrite(LED, LOW);
 } else {
  digitalWrite(LED, HIGH); 
 } 
}
