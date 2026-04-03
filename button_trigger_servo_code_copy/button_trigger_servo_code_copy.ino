  #include <Servo.h>

Servo servo1_180; //create servo variable
const int buttonPin = 13;

void setup() {
  servo1_180.attach(10); //attaches 180 servo to pin 10
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH){
    servo1_180.write(180); //tells 180 servo to turn to max position
  } else {
    servo1_180.write(0); //tells 180 servo to turn to min position
  }
}
