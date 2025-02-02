#define trigPin  3
#define echoPin 2

 #define Buzzer 5//active
 #define Motor 7//passive
  #define Led1 6//Vibration

 
int sound = 250;


void setup() {
  Serial.begin (9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
  pinMode(Buzzer, OUTPUT);
 pinMode(Motor, OUTPUT);
 pinMode(Led1, OUTPUT);
}

void  loop() {
  

  long duration, distance;
  digitalWrite(trigPin,  LOW);
  delay(2);
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin,  LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  digitalWrite(Buzzer, LOW);
  digitalWrite(Motor, LOW);
  digitalWrite(Led1,  LOW);
  Serial.println(distance);
  
  // if (distance<40) {
  //   digitalWrite(Led1, HIGH);
  //   delay(2000);
  // }
  // if (distance<20) {
  //   digitalWrite(Led1, HIGH);
  //   delay(2000);
  //   digitalWrite(Buzzer, HIGH);
  //   delay(2000);
  // }
  if (distance<10)  {
    digitalWrite(Led1, HIGH);
    delay(2000);
    digitalWrite(Buzzer,  HIGH);
    delay(2000);
    digitalWrite(Motor, HIGH);
    delay(2000);
  }
  // delay(500);
  }

   
