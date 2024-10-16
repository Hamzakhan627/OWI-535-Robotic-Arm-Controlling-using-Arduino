String data;
char d1;
const int in1 = 2; // IN1 pin for Motor 1
const int in2 = 3; // IN2 pin for Motor 1
const int in3 = 4; // IN3 pin for Motor 2
const int in4 = 5; // IN4 pin for Motor 2
const int in5 = 7; // IN1 pin for Motor 1
const int in6 = 6; // IN2 pin for Motor 1
const int in7 = 8; // IN3 pin for Motor 2
const int in8 = 9; // IN4 pin for Motor 2

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT);
  pinMode(in7, OUTPUT);
  pinMode(in8, OUTPUT);
  Serial.begin(9600); // Initialize the serial communication
}

void loop() {
  if (Serial.available() > 0) {
    data = Serial.readString();
    d1 = data.charAt(0);
    
  switch (d1) {
    case 'W':
      moveForward();
      break;
    case 'S':
      moveBackward();
      break;
    case 'A':
      jawopen();
      break;
    case 'D':
      jawclose();
      break;
    case 'I':
      moveForward1();
      break;
    case 'K':
      moveBackward1();
      break;
    case 'J':
      rotateL();
      break;
    case 'L':
      rotateR();
      break;
     }
  }
}

void moveForward() {
  digitalWrite(in1, HIGH);
  analogWrite(in2, 195);
  delay(500);
  digitalWrite(in1, LOW);
  analogWrite(in2, 0);
}

void moveBackward() {
  digitalWrite(in1, LOW);
  analogWrite(in2, 60);
  delay(500);
  digitalWrite(in1, LOW);
  analogWrite(in2, 0);
}

void jawopen() {
  digitalWrite(in3, HIGH);
  analogWrite(in4, 195);
  delay(300);
  digitalWrite(in3, LOW);
  analogWrite(in4, 0);
}

void jawclose() {
  digitalWrite(in3, LOW);
  analogWrite(in4, 55);
  delay(300);
  digitalWrite(in3, LOW);
  analogWrite(in4, 0);
}

void moveForward1() {
  digitalWrite(in5, HIGH);
  analogWrite(in6, 170);
  delay(500);
  digitalWrite(in5, LOW);
  analogWrite(in6, 0);
}

void moveBackward1() {
  digitalWrite(in5, LOW);
  analogWrite(in6, 85);
  delay(500);
  digitalWrite(in5, LOW);
  analogWrite(in6, 0);
}

void rotateL() {
  digitalWrite(in7, HIGH);
  analogWrite(in8, 195);
  delay(500);
  digitalWrite(in7, LOW);
  analogWrite(in8, 0);
}

void rotateR() {
  digitalWrite(in7, LOW);
  analogWrite(in8, 55);
  delay(500);
  digitalWrite(in7, LOW);
  analogWrite(in8, 0);
}
