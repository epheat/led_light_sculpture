// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(57600);
}

int current_led = 4;
int last_led = 7;
int pot = 0;
int pot_pin = A0;
int delay_amount = 1000;
// the loop function runs over and over again forever
void loop() {
  digitalWrite(current_led, HIGH);
  digitalWrite(last_led, LOW);
  delay(delay_amount);
  
  last_led = current_led;
  current_led = ((current_led + 1) % 4) + 4;
  
  pot = analogRead(pot_pin);
  delay_amount = 700 - pot;
}
