---
layout: post
title:  "Interface and Application Programming"
date:   2017-05-17 09:25:21 -0500
categories: jekyll update
---

I started this assignment by researching and trying out the software "Processing" [(processing.org)][processing].

[processing]: http://www.processing.org

I then looked into how to properly hook up my Satshakit (Arduino Clone) to a servo motor at which I could program using the software application i create. I looked into an arduino webpage on syncing the arduino and processing IDEs so I was able to use the arduino clone in my application. Instructions link here: [Arduino and Processing][arduinoprocessing]

[arduinoprocessing]: https://playground.arduino.cc/Interfacing/Processing

Once I finished downloading the nessessary libraries in the specific locations, I was then able to use more language in Processing. I played around with the arduino example called "servo" to learn it's manipulations. Once I was comfortable with the software, I learned to place image files into the program. Below shows my final program used for my assignment:


<div style="height: 500px; overflow-y: auto;">
{% highlight cpp linenos %}

import processing.serial.*;
import cc.arduino.*;

Arduino arduino;

PImage fab;
PImage oneCoolGuy;

int rect1X = 50, rect1Y = 150;      // Position of 1st square button
int rect2X = 300, rect2Y = 150;      // Position of 2nd square button
 

boolean rect1Over = false;  //declare variables for over buttons
boolean rect2Over = false;


void setup() {
  
  oneCoolGuy = loadImage("brandon.PNG");
  fab = loadImage("fab.jpg");
  
  size(500, 500);  //set size of window
  background(0, 0, 0);  //sets up background color


  println(Arduino.list());  //lists available serial ports
  arduino = new Arduino (this, Arduino.list()[0], 57600); 
  
  //use above line to change the serial port of your arduino


  arduino.pinMode(11, Arduino.SERVO);   //Configure digital pins to control servo motors
  

  arduino.servoWrite(11, 0);
}

void draw() {
  update(mouseX, mouseY);  //read where the mouse is

  if (rect1Over == true) {   //check to see if mouse is over rectangle
      image(oneCoolGuy, 50, 150, 150, 150);    //change image to brandon

  } 
  else {
     image(fab, rect1X, rect1Y, 150, 150); //keep image as logo
  }

  if (rect2Over == true) {   //check to see if mouse is over rectangle
    image(oneCoolGuy,300, 150, 150, 150);   //change image to brandon
  } 
  else {
   image(fab, rect2X, rect2Y, 150, 150); //keep image as logo
  }
}

void update(int x, int y) {

  if ( overRect(rect1X, rect1Y, 150, 150) ) {
    rect1Over = true;
  } else {
    rect1Over = false;
  }

  if ( overRect(rect2X, rect2Y, 150, 150) ) {
    rect2Over = true;
  } else {
    rect2Over = false;
  }
}

void mousePressed() {
  if (rect1Over) {
    arduino.servoWrite(11, 180);
  }

  if (rect2Over) {
    arduino.servoWrite(11, 0);
}
}


boolean overRect(int x, int y, int width, int height) {
  
  if (mouseX >= x && mouseX <= x+width && 
    mouseY >= y && mouseY <= y+height) {
    return true;
  } 

  else {
    return false;
  }
}
{% endhighlight %}
</div>

<br>

Next was to give a purpose to the servo motor. I decided to design and lasercut a head shape with multiple gears turning all made from 3mm plywood. I customly attached the servo to one gear for it to turn two more gears in sequence.

<center>
<img src="{{ "IMGs/15interface1.jpg" | relative_url }}" alt="interface pic 1" width="45%">
</center>

<br>

Below shows how I wired my Satshakit to the PC and servo motor. You will notice that I used a breadboard to better distribute power from my FDTI cable to both the arduino and the servo motor.

<center>
<img src="{{ "IMGs/15interface2.jpg" | relative_url }}" alt="interface pic 2" width="90%">
</center>

<center>
<img src="{{ "IMGs/15interface3.jpg" | relative_url }}" alt="interface pic 3" width="90%">
</center>

<br>

The goal was to spin the servo motor 90 degrees each way. Each of the two buttons determine the direction of the motor turning. 

**Problems That Occured**

-Not having any (single) female jumper wires to connect more than one power line to the devices needed.

>FIX: Using the breadboard itself as the female ends/ power needs

-The plastic gear on the servo continued to slip as it turned.

>FIX: Customizing a slotted joint and using small screws/glue to hold it all together.

# **Finished Product:**

<center>
<iframe width="560" height="315" src="https://www.youtube.com/embed/nLdibtBuxlw" frameborder="0" allowfullscreen></iframe>
</center>

<br>
# **Digital Files:**

<a href="{{ "files/Servo_Program.zip" | relative_url }}">Brandon Servo Code.zip</a>
