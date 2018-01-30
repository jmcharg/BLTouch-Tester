/*
  BLTouch Test sensor program
  Connect 5V to Red
  Connect Gnd to Brown
  Connect Pin 9 to Orange / Yellow
  Connect Pin 2 to White.

  Serial port to 9600 and dont send CR or LF

  Send 1 to Pin Down
  Send 2 to Pin Up
  Send 3 to Test
  Send 4 to Reset

*/

#include <Servo.h>

Servo myservo;  

int val;  
int incomingByte = 0;

const byte BLTouchPin = 2;  // Connect the white wire from the BLTouch to this pin
const byte BLTouchControl = 9;   // Connect the orange wire from the BLTouch sensor to this pin
volatile byte state = LOW;

void setup() {
  Serial.begin(9600);
  myservo.attach(BLTouchControl); 
  pinMode(BLTouchPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(BLTouchPin), touch, CHANGE);
  myservo.write(60);
}

void loop() {
    // send data only when you receive data:
    if (Serial.available() > 0) {
            // read the incoming byte:
            incomingByte = Serial.read();
            switch (incomingByte) {
              case 49:
                Serial.println("Push pin down");
                myservo.write(10);
                break;
              case 50:
                Serial.println("Pull pin up");
                myservo.write(90);
                break;
              case 51:
                Serial.println("Self Test");
                myservo.write(120);
                break;
              case 52:
                Serial.println("Alarm Release & Touch SW Mode");
                myservo.write(60);
                break;
            }
    }
}

void touch() {
  Serial.println("Touch");
  state = !state;
}

