#include <ultrasonic.h>
MyUltrasonic ultra;
const int trigPin = 8;
const int echoPin = 11;
int duration;
int distance;

void setup() {
    pinMode(trigPin, OUTPUT); 
    pinMode(echoPin, INPUT);
    Serial.begin(9600);
   
}
void loop() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
  
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
   distance= ultra.CalculateDistance(duration);
  Serial.println(distance);
}
