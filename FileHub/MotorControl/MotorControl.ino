void motorInit() {
  pinMode(MOTOR1,OUTPUT);
  pinMode(MOTOR2,OUTPUT);
  pinMode(MOTOR3,OUTPUT);
  pinMode(MOTOR4,OUTPUT);
  analogWrite(MOTOR1,zeroed_motor);
  analogWrite(MOTOR2,zeroed_motor);
  analogWrite(MOTOR3,zeroed_motor);
  analogWrite(MOTOR4,zeroed_motor);

}

void motorArmed() {

}
