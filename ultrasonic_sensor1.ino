
const int echoPin = 9;
const int trigPin=10;

void setup() {
  
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  long duration,distance;
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(500);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  
  distance=(duration/58.2);
  Serial.println(distance);
  Serial.print("CM ");
  

}
  



