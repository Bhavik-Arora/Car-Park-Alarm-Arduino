int trigPin =7;
int echoPin = 6;
long duration;
int distance;


void setup(){
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  
}
  
void loop() {
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin,LOW);
 duration = pulseIn(echoPin,HIGH);
 distance = duration * 0.034 / 2;
 delay(50);
 Serial.print("Distance: ");
 Serial.println(distance);
  
  if(distance<20){
  digitalWrite(5, HIGH);
    delay(200);
     digitalWrite(5, LOW);
    delay(150);
     digitalWrite(5, HIGH);
    delay(100);
     digitalWrite(5, LOW);
    delay(100);
    
 }
  else if (distance>20) {
   digitalWrite(5,HIGH);
 }
  else {
   digitalWrite(5,LOW);
  }

}

