const int stepPin = 3;
const int dirPin = 4;
 
void setup () {
pinMode (stepPin, OUTPUT);
pinMode (dirPin, OUTPUT);
}

void loop() {
digitalWrite(dirPin, 1);
 
//going up
for(int x = 0; x < 950; x++) {
digitalWrite(stepPin,HIGH);
delayMicroseconds(500);
digitalWrite(stepPin,LOW);
delayMicroseconds(500);
}

digitalWrite(dirPin, 0);
 
//going down
for(int x = 0; x < 950; x++) {
digitalWrite(stepPin,HIGH);
delayMicroseconds(500);
digitalWrite(stepPin,LOW);
delayMicroseconds(500);
}

//going down
for(int x = 0; x < 600; x++) {
digitalWrite(stepPin,HIGH);
delayMicroseconds(500);
digitalWrite(stepPin,LOW);
delayMicroseconds(500);
}

digitalWrite(dirPin, 1);

//going up
for(int x = 0; x < 600; x++) {
digitalWrite(stepPin,HIGH);
delayMicroseconds(500);
digitalWrite(stepPin,LOW);
delayMicroseconds(500);
}
}
