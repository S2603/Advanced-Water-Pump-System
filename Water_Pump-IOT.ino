#define trigPin 7
#define echoPin 6
#define RELAY_PIN 12
void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int duration , distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
  duration= pulseIn(echoPin,HIGH);
  distance=(duration/2)/29.1;
  Serial.println(distance);
   if(distance<=5)
  {
    digitalWrite(RELAY_PIN, LOW);
  if(distance==2)
  {
    digitalWrite(RELAY_PIN, HIGH);
  }
  }
}
 
 
