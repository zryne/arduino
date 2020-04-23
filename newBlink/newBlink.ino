/*
  Multi-Blink
 Turns on LEDs on for one second, then off for one second, repeatedly.
 
 */

const int led_b      =   13;
const int led_g      =   12;
const int led_y      =   11;
const int led_r      =   10;
const int led_w      =    9;
const int led_delay  =  250;
const int step_1     =    2;
const int step_2     =    3;
const int step_3     =    4;
const int step_4     =    5;
const int step_delay =    2;
const int step_revs  = 1000;

int step_num = 0;

void setup() {                
  pinMode(led_b, OUTPUT);
  pinMode(led_g, OUTPUT);
  pinMode(led_y, OUTPUT);
  pinMode(led_r, OUTPUT);
  pinMode(led_w, OUTPUT);

  pinMode(step_1, OUTPUT);
  pinMode(step_2, OUTPUT);
  pinMode(step_3, OUTPUT);
  pinMode(step_4, OUTPUT);
}

void loop() {
  /*
  digitalWrite(led_b, HIGH);
  digitalWrite(led_g, LOW);
  digitalWrite(led_y, LOW);
  digitalWrite(led_r, LOW);
  digitalWrite(led_w, LOW);
  delay(led_delay);
  digitalWrite(led_b, LOW);
  digitalWrite(led_g, HIGH);
  digitalWrite(led_y, LOW);
  digitalWrite(led_r, LOW);
  digitalWrite(led_w, LOW);
  delay(led_delay);
  digitalWrite(led_b, LOW);
  digitalWrite(led_g, LOW);
  digitalWrite(led_y, HIGH);
  digitalWrite(led_r, LOW);
  digitalWrite(led_w, LOW);
  delay(led_delay);
  digitalWrite(led_b, LOW);
  digitalWrite(led_g, LOW);
  digitalWrite(led_y, LOW);
  digitalWrite(led_r, HIGH);
  digitalWrite(led_w, LOW);
  delay(led_delay);
  digitalWrite(led_b, LOW);
  digitalWrite(led_g, LOW);
  digitalWrite(led_y, LOW);
  digitalWrite(led_r, LOW);
  digitalWrite(led_w, HIGH);
  delay(led_delay);
  digitalWrite(led_b, LOW);
  digitalWrite(led_g, LOW);
  digitalWrite(led_y, LOW);
  digitalWrite(led_r, HIGH);
  digitalWrite(led_w, HIGH);
  delay(led_delay);
  digitalWrite(led_b, LOW);
  digitalWrite(led_g, LOW);
  digitalWrite(led_y, HIGH);
  digitalWrite(led_r, HIGH);
  digitalWrite(led_w, HIGH);
  delay(led_delay);
  digitalWrite(led_b, LOW);
  digitalWrite(led_g, HIGH);
  digitalWrite(led_y, HIGH);
  digitalWrite(led_r, HIGH);
  digitalWrite(led_w, HIGH);
  delay(led_delay);
  digitalWrite(led_b, HIGH);
  digitalWrite(led_g, HIGH);
  digitalWrite(led_y, HIGH);
  digitalWrite(led_r, HIGH);
  digitalWrite(led_w, HIGH);
  delay(led_delay);
  digitalWrite(led_b, HIGH);
  digitalWrite(led_g, HIGH);
  digitalWrite(led_y, HIGH);
  digitalWrite(led_r, HIGH);
  digitalWrite(led_w, LOW);
  delay(led_delay);
  digitalWrite(led_b, HIGH);
  digitalWrite(led_g, HIGH);
  digitalWrite(led_y, HIGH);
  digitalWrite(led_r, LOW);
  digitalWrite(led_w, LOW);
  delay(led_delay);
  digitalWrite(led_b, HIGH);
  digitalWrite(led_g, HIGH);
  digitalWrite(led_y, LOW);
  digitalWrite(led_r, LOW);
  digitalWrite(led_w, LOW);
  delay(led_delay);
  digitalWrite(led_b, HIGH);
  digitalWrite(led_g, LOW);
  digitalWrite(led_y, LOW);
  digitalWrite(led_r, LOW);
  digitalWrite(led_w, LOW);
  delay(led_delay);
  digitalWrite(led_b, LOW);
  digitalWrite(led_g, LOW);
  digitalWrite(led_y, LOW);
  digitalWrite(led_r, LOW);
  digitalWrite(led_w, LOW);
  delay(led_delay);
  */

  for (int a = 0; a < step_revs; a++) {
    OneStep(false);
    delay(step_delay);
  }
  for (int a = 0; a < step_revs; a++) {
    OneStep(true);
    delay(step_delay);
  }
}


void OneStep(bool dir) {
  if (dir) {
    switch (step_num) {
      case 0:
        digitalWrite(step_1, HIGH);
        digitalWrite(step_2, LOW);
        digitalWrite(step_3, LOW);
        digitalWrite(step_4, LOW);
        break;
      case 1:
        digitalWrite(step_1, LOW);
        digitalWrite(step_2, HIGH);
        digitalWrite(step_3, LOW);
        digitalWrite(step_4, LOW);
        break;
      case 2:
        digitalWrite(step_1, LOW);
        digitalWrite(step_2, LOW);
        digitalWrite(step_3, HIGH);
        digitalWrite(step_4, LOW);
        break;
      case 3:
        digitalWrite(step_1, LOW);
        digitalWrite(step_2, LOW);
        digitalWrite(step_3, LOW);
        digitalWrite(step_4, HIGH);
        break;
    }
  } else {
    switch (step_num) {
      case 0:
        digitalWrite(step_1, LOW);
        digitalWrite(step_2, LOW);
        digitalWrite(step_3, LOW);
        digitalWrite(step_4, HIGH);
        break;
      case 1:
        digitalWrite(step_1, LOW);
        digitalWrite(step_2, LOW);
        digitalWrite(step_3, HIGH);
        digitalWrite(step_4, LOW);
        break;
      case 2:
        digitalWrite(step_1, LOW);
        digitalWrite(step_2, HIGH);
        digitalWrite(step_3, LOW);
        digitalWrite(step_4, LOW);
        break;
      case 3:
        digitalWrite(step_1, HIGH);
        digitalWrite(step_2, LOW);
        digitalWrite(step_3, LOW);
        digitalWrite(step_4, LOW);
    }
  }
  
  step_num++;
  
  if (step_num > 3) {
    step_num = 0;
  }
}
