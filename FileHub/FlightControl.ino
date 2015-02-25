const int acc = digitalRead(2);
const int gyro = 3;
int MOTOR1 = 4;
int MOTOR2 = 5;
int MOTOR3 = 6;
int MOTOR4 = 7;

void setup() {
  pinMode(acc,INPUT);
  pinMode(gyro,INPUT);
  pinMode(MOTOR1, OUTPUT);
  pinMode(MOTOR2, OUTPUT);
  pinMode(MOTOR3, OUTPUT);
  pinMode(MOTOR4, OUTPUT);

}

void loop() {
  
}
