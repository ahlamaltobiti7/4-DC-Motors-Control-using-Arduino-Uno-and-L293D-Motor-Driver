
const int enableLeft  = 9;  // Enable 1,2
const int in1         = 8;  // Input 1
const int in2         = 7;  // Input 2

const int enableRight = 10; // Enable 3,4
const int in3         = 5;  // Input 3
const int in4         = 4;  // Input 4

void setup() {
  
  pinMode(enableLeft, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  
  pinMode(enableRight, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}


void stopMotors() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enableLeft, 0);
  analogWrite(enableRight, 0);
}


void moveForward() {
  analogWrite(enableLeft, 255);
  analogWrite(enableRight, 255);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}


void moveBackward() {
  analogWrite(enableLeft, 255);
  analogWrite(enableRight, 255);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}


void turnRight() {
  analogWrite(enableLeft, 255);
  analogWrite(enableRight, 255);
  digitalWrite(in1, HIGH); 
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);  
  digitalWrite(in4, HIGH);
}


void turnLeft() {
  analogWrite(enableLeft, 255);
  analogWrite(enableRight, 255);
  digitalWrite(in1, LOW);  
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH); 
  digitalWrite(in4, LOW);
}

void loop() {
  
  moveForward();
  delay(30000); 

  moveBackward();
  delay(60000); 

  turnRight();
  delay(30000); 

  turnLeft();
  delay(30000); 

  stopMotors();
  delay(2000);
}