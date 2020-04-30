#define trigPin 12
#define echoPin 13
int Buzzer = 8; // Connect buzzer pin to 8
int ledPinG = 6;  //Connect LEd pin to 6
int ledPinY = 4;
int ledPinR = 2;
int duration, distance; //to measure the distance and time taken 

void setup() {
        Serial.begin (9600); 
        //Define the output and input objects(devices)
        pinMode(trigPin, OUTPUT); 
        pinMode(echoPin, INPUT);
        pinMode(Buzzer, OUTPUT);
        pinMode(ledPinG, OUTPUT);
        pinMode(ledPinY, OUTPUT);
        pinMode(ledPinR, OUTPUT);
}

void loop() {
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = (duration/2) / 29.1;

  //Red
  if(distance < 10) {
    Serial.println("DANGER");
    digitalWrite(ledPinR, LOW);
    tone(Buzzer, 400);
  }

  //Yellow
  if(distance < 30) {
    Serial.println("Mom Incoming");
      digitalWrite(ledPinY, LOW);
  }

  //Green
  if(distance < 50) {
    Serial.println("Unsafe");
    digitalWrite(ledPinG,LOW);
  } 
  
  if(distance > 100) {
    Serial.println("Safe");
    Serial.print("Distance = " + distance);
    noTone(Buzzer);
    digitalWrite(ledPinG, HIGH);
    digitalWrite(ledPinY, HIGH);
    digitalWrite(ledPinR, HIGH);
  }
}

