#include <Wire.h>

void setup() {

  Serial.begin(9600); 
  Wire.begin();  
}

void loop() {

  while(Serial.available()) {
    
        int outgoingByte = Serial.read();

        if(outgoingByte == 'R'){
          Wire.beginTransmission(8);
            Wire.write("R");
           Wire.endTransmission();
        }

        else if(outgoingByte == 'O'){
          Wire.beginTransmission(8);
            Wire.write("O");
           Wire.endTransmission();
        }
        
         else if(outgoingByte == 'B'){
          Wire.beginTransmission(8);
            Wire.write("B");
           Wire.endTransmission();
  
    }
             else if(outgoingByte == 'A'){
          Wire.beginTransmission(8);
            Wire.write("A");
           Wire.endTransmission();
  
    }
                else if(outgoingByte == 'N'){
          Wire.beginTransmission(8);
            Wire.write("N");
           Wire.endTransmission();
  }
}
}
