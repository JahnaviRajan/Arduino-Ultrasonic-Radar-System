#include <Servo.h>

Servo radarServo;

int trigPin = 10;
int echoPin = 11;
int servoPin = 9;

long duration;
int distance;

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  radarServo.attach(servoPin);

  Serial.begin(9600);
}

void loop() {

  for(int angle = 0; angle <= 180; angle++){

    radarServo.write(angle);
    delay(30);

    distance = getDistance();

    Serial.print(angle);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }

  for(int angle = 180; angle >= 0; angle--){

    radarServo.write(angle);
    delay(30);

    distance = getDistance();

    Serial.print(angle);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }
}

int getDistance(){

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  return distance;
}
