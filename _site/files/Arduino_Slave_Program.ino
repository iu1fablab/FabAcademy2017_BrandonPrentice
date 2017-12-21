//i2c Slave Code
#include <Wire.h>

#define RED 8
#define ORANGE 10
#define BLUE 13

void setup()
{
  Wire.begin(8);
  Wire.onReceive(slaveExec);
  
  pinMode(RED,OUTPUT);
  pinMode(ORANGE, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop()
{
}

void slaveExec(int numOfBytes)
{
  while(Wire.available())
  {
    char c = Wire.read();
    
  if(c == 'R'){
    digitalWrite(RED, HIGH);
    digitalWrite(ORANGE, LOW);
digitalWrite(BLUE, LOW);

 }

else if(c=='O'){
 digitalWrite(RED, LOW);
digitalWrite(ORANGE, HIGH);
digitalWrite(BLUE, LOW);
 
}

else if(c=='B'){
  digitalWrite(BLUE, HIGH);
  digitalWrite(RED, LOW);
  digitalWrite(ORANGE, LOW);

    }

 else if(c=='A'){
  digitalWrite(BLUE, HIGH);
  digitalWrite(RED, HIGH);
  digitalWrite(ORANGE, HIGH);
 }

  else if(c=='N'){
  digitalWrite(BLUE, LOW);
  digitalWrite(RED, LOW);
  digitalWrite(ORANGE, LOW);
 }
  }
}
