#define ledPinRed 13
#define ledPinGreen 11
#define ledPinBlue 12
#define fade 6 
void setup() {
  
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
  pinMode(ledPinBlue, OUTPUT);
}
void loop() {
 
for (int red = 255; red > 0; red--) { 
    analogWrite(ledPinRed, red);
      delay(fade);
  }  //yellow to green

for (int blue = 0; blue < 256; blue++) { 
    analogWrite(ledPinBlue, blue);
      delay(fade);
  }  //green to aqua
 
for (int green = 255; green > 0; green--) { 
    analogWrite(ledPinGreen, green);
      delay(fade);
  } //aqua to blue

  for (int red = 0; red < 256; red++) { 
  analogWrite(ledPinRed, red);
      delay(fade);
  }//blue to purple

  for (int blue = 255; blue > 0; blue--) { 
   analogWrite(ledPinBlue, blue);
      delay(fade);
  } // purple to red

for (int green = 0; green < 256; green++) { 
    analogWrite(ledPinGreen, green);
      delay(fade);
  }  //red to yellow
 }
