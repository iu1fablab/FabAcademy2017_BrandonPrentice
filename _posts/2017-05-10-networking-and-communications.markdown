---
layout: post
title:  "Networking and Communications"
date:   2017-05-10 09:25:21 -0500
categories: jekyll update
---

For Sarah and I's group networking and communications assignment, we used both of our Arduino Uno Clones ([Satshakit][satshakit]) to act as a master write to slave read connection through serial data line (SDA) and serial clock line (SCL) of both micro-processors. Here are the I/O's board trace and completed circuit of the Satshakit Clone:

[satshakit]: http://fabacademy.org/archives/2015/doc/projects/satshakit/satshakit.html

<center>
<img src="{{ "IMGs/14network1.jpg" | relative_url }}" alt="satshakit trace" width="80%">
</center>

<center>
<img src="{{ "IMGs/14network2.jpg" | relative_url }}" alt="satshakit completed" width="80%">
</center>

<br>

The purpose for this program was to demonstrate a network communication as the master sends a signal to the slave, and the slave interprets the signal and performs an operation which in this case, we decided to use device that was part of an earlier assignment. The original assignment was to read temperature but we only used the different colored LEDs for multiple outputs. See "Input Devices" assignment here: [Input Devices][input_devices]

[input_devices]: http://archive.fabacademy.org/archives/2017/fablabiu1/students/418/jekyll/update/2017/04/26/input-devices.html

<center>
<img src="{{ "IMGs/12input3.jpg" | relative_url }}" alt="input pic 3" width="80%">
</center>

<br>

**Connecting Master-To-Slave Arduinos & Slave-To-LED Device:**

Since all of the pinheaders/connectors we had are male, and that our lab had little-to-no female connectors, we needed to use an excess amount of wires, a breadboard, and a lot of our imagination to properly connect it all together, shown below:

<center>
<img src="{{ "IMGs/14network3.jpg" | relative_url }}" alt="master, slave, and output connections" width="80%">
</center>

<br>

**The connections you see in the picture are:**

>2 separate FDTI Cables for operating Arduinos (One Connected to MASTER, the Other to SLAVE)

>**The Breadboard which has two major functions:** 

>1. Creating a widely accessible Power/Ground hookup for the unversal power needed for multiple boards

>2. Plugging in the male headers on the boards themselves, in order to use male jumpers instead of females.

>The header pins for the 3 separate LED outputs are hooked up to 3 separate I/O's on the SLAVE Arduino.

<br>

Below shows the programs we used for both master and slave micro-processors. The program is for the following commands in the Arduino serial monitor:

Type **R** to turn on the **RED** LED

Type **O** to turn on the **ORANGE** LED

Type **B** to turn on the **BLUE** LED

Type **A** to turn on **ALL** three LED's

Type **N** to turn on **NONE** of the LED's

<br>

<center>
<img src="{{ "IMGs/14network4.jpg" | relative_url }}" alt="networking program" width="100%">
</center>

<br>

**Master Arduino Program:**

<div style="height: 500px; overflow-y: auto;">
{% highlight cpp linenos %}

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

{% endhighlight %}
</div>

<br>

**Slave Arduino Program:**

<div style="height: 500px; overflow-y: auto;">
{% highlight cpp linenos %}

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

{% endhighlight %}
</div>

<br>

# **Finished Product:**

<center>
<iframe width="560" height="315" src="https://www.youtube.com/embed/MYKCZDOjAis" frameborder="0" allowfullscreen></iframe>
</center>


<br>
# **Digital Files:**

<a href="{{ "files/brandon_moded_satshakitpcb.brd" | relative_url }}">Brandon's Moded Satshakit.brd</a>

<a href="{{ "files/Arduino_Master_Program.ino" | relative_url }}">Arduino Master Code.ino</a>

<a href="{{ "files/Arduino_Slave_Program.ino" | relative_url }}">Arduino Slave Code.ino</a>
