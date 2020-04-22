/*
  Multi-Blink
 Turns on LEDs on for one second, then off for one second, repeatedly.
 
 */

int led_b = 13;
int led_g = 12;
int led_y = 11;
int led_r = 10;
int led_w =  9;

int dtime  = 250;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led_b, OUTPUT);
  pinMode(led_g, OUTPUT);
  pinMode(led_y, OUTPUT);
  pinMode(led_r, OUTPUT);
  pinMode(led_w, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led_b, HIGH);
  digitalWrite(led_g, LOW);
  digitalWrite(led_y, LOW);
  digitalWrite(led_r, LOW);
  digitalWrite(led_w, LOW);
  delay(dtime);
  digitalWrite(led_b, LOW);
  digitalWrite(led_g, HIGH);
  digitalWrite(led_y, LOW);
  digitalWrite(led_r, LOW);
  digitalWrite(led_w, LOW);
  delay(dtime);
  digitalWrite(led_b, LOW);
  digitalWrite(led_g, LOW);
  digitalWrite(led_y, HIGH);
  digitalWrite(led_r, LOW);
  digitalWrite(led_w, LOW);
  delay(dtime);
  digitalWrite(led_b, LOW);
  digitalWrite(led_g, LOW);
  digitalWrite(led_y, LOW);
  digitalWrite(led_r, HIGH);
  digitalWrite(led_w, LOW);
  delay(dtime);
  digitalWrite(led_b, LOW);
  digitalWrite(led_g, LOW);
  digitalWrite(led_y, LOW);
  digitalWrite(led_r, LOW);
  digitalWrite(led_w, HIGH);
  delay(dtime);
  digitalWrite(led_b, LOW);
  digitalWrite(led_g, LOW);
  digitalWrite(led_y, LOW);
  digitalWrite(led_r, HIGH);
  digitalWrite(led_w, HIGH);
  delay(dtime);
  digitalWrite(led_b, LOW);
  digitalWrite(led_g, LOW);
  digitalWrite(led_y, HIGH);
  digitalWrite(led_r, HIGH);
  digitalWrite(led_w, HIGH);
  delay(dtime);
  digitalWrite(led_b, LOW);
  digitalWrite(led_g, HIGH);
  digitalWrite(led_y, HIGH);
  digitalWrite(led_r, HIGH);
  digitalWrite(led_w, HIGH);
  delay(dtime);
  digitalWrite(led_b, HIGH);
  digitalWrite(led_g, HIGH);
  digitalWrite(led_y, HIGH);
  digitalWrite(led_r, HIGH);
  digitalWrite(led_w, HIGH);
  delay(dtime);
  digitalWrite(led_b, HIGH);
  digitalWrite(led_g, HIGH);
  digitalWrite(led_y, HIGH);
  digitalWrite(led_r, HIGH);
  digitalWrite(led_w, LOW);
  delay(dtime);
  digitalWrite(led_b, HIGH);
  digitalWrite(led_g, HIGH);
  digitalWrite(led_y, HIGH);
  digitalWrite(led_r, LOW);
  digitalWrite(led_w, LOW);
  delay(dtime);
  digitalWrite(led_b, HIGH);
  digitalWrite(led_g, HIGH);
  digitalWrite(led_y, LOW);
  digitalWrite(led_r, LOW);
  digitalWrite(led_w, LOW);
  delay(dtime);
  digitalWrite(led_b, HIGH);
  digitalWrite(led_g, LOW);
  digitalWrite(led_y, LOW);
  digitalWrite(led_r, LOW);
  digitalWrite(led_w, LOW);
  delay(dtime);
  digitalWrite(led_b, LOW);
  digitalWrite(led_g, LOW);
  digitalWrite(led_y, LOW);
  digitalWrite(led_r, LOW);
  digitalWrite(led_w, LOW);
  delay(dtime);
}

