const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;
void setup(){
  pinMode(9, OUTPUT);
  pinMode(10, INPUT);
  Serial.begin(9600);
}
void loop(){
  digitalWrite(9,HIGH);
  delayMicroseconds(10);
  digitalWrite(9,LOW);
  duration = pulseIn(10, HIGH);
  distance = duration*0.034/2;
  Serial.print("Distance: ");
  Serial.println(distance);
}
