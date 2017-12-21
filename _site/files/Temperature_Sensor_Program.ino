 const int hot = 87; //set hot parameter
const int cold = 75; //set cold parameter
void setup() {
pinMode(A2, INPUT); //sensor
pinMode(2, OUTPUT); //blue
pinMode(3, OUTPUT); //green
pinMode(4, OUTPUT); //red
Serial.begin(9600);
}
void loop() {
int sensor = analogRead(A2);
float voltage = (sensor / 1024.0) * 5.0;
float tempC = (voltage - .5) * 100;
float tempF = (tempC * 1.8) + 32;
Serial.print("temp: ");
Serial.print(tempF);
if (tempF < cold) { //cold
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
Serial.println(" It's Cold.");
}
else if (tempF >= hot) { //hot
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
Serial.println(" It's Hot.");
}
else { //fine
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
Serial.println(" It's Fine.");
}
delay(10);
}

