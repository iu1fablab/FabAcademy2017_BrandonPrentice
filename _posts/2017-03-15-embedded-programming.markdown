---
layout: post
title:  "Embedded Programming"
date:   2017-03-15 09:25:21 -0500
categories: jekyll update
---

# **Creating the "Satshakit"**

To start this assignment, I first took the advice of my Fab Academy mentor Jason W. in drawing and cutting out his 2015 Academy Final Project of the Satshakit, in the hopes to continue using Arduino IDE for all my programming needs from a fabricated PCB. The Satshakit is a clone of the Arduino Uno and is reconized on IDE as such. The link to Jason's Satshakit project is located here: [Satshakit][satshakit]

[satshakit]: http://fabacademy.org/archives/2015/doc/projects/satshakit/satshakit.html 

Because the orginal file had very fine traces for a laser etch operation, my Roland MDX-20 milling machine did not have the precision to smoothly cut the board.

<br>

<center>
<img src="{{ "IMGs/7program1.jpg" | relative_url }}" alt="milling fail" width="100%">
</center>

<br>

I then went into my Eagle software to re-trace every line on the board from a 0.012 to a 0.016 as shown below:

<br>

<center>
<img src="{{ "IMGs/7program2.jpg" | relative_url }}" alt="jasons board drawing" width="48%">
<img src="{{ "IMGs/7program3.jpg" | relative_url }}" alt="brandons moded satshakit" width="48%">
</center>

<br>

<center>
<img src="{{ "IMGs/7program4.jpg" | relative_url }}" alt="completed satshakit" width="50%">
</center>

<br>

On Arduino IDE, I set the **Board** to "Arduino Uno", **Programmer** to "USBtinyISP", and then clicked **Burn Bootloader**. I then hooked up my Fab ISP to program the bootloader into the Satshakit with connections shown below. 

<br>

<center>
<img src="{{ "IMGs/7program5.jpg" | relative_url }}" alt="fab isp connected to satshakit and computer" width="90%">
</center>

<br>

# **Understanding the Microcontroller (ATMEG 328P) Datasheet**

[ATmega328P Datasheet][ATmega328P_Datasheet]

[ATmega328P_Datasheet]:http://www.atmel.com/Images/Atmel-42735-8-bit-AVR-Microcontroller-ATmega328-328P_datasheet.pdf

Interesting facts learn about the chip, which I am using for the Satshakit:

1. It has 32 pins total, 23 of which are I/O's
2. It's power supply should be between 1.8-5.5V for running at 20MHz
3. Pin layout of where and what different connections are made onto the chip, shown here: 

<center>
<img src="{{ "IMGs/7program0.jpg" | relative_url }}" alt="Updated pirogrammming pic" width="60%">
</center>
<br>

# **Programming the "Hello World" Board**

Below shows the following connections I made from the Sathakit to my "Hello World" board made in a previous assignment: [Electronics Design][electronics design]. The reason for the excessive wires was due to a shortage of female connector ends, and being imaginative on joining all of the pins for the following: POWER (5V), GROUND, RESET, MISO, MOSI, and SCK, followed by plugging in the FDTI 5V Cable into the Echo Board.

[electronics design]: http://archive.fabacademy.org/archives/2017/fablabiu1/students/418/jekyll/update/2017/03/01/electronics-design.html

<br>

<center>
<img src="{{ "IMGs/7program6.jpg" | relative_url }}" alt="Sats to hello board connections" width="100%">
</center>

<br>

Here are the settings I sent over from Arduino IDE and how the program was connected:

<center>
<img src="{{ "IMGs/7program7.jpg" | relative_url }}" alt="Screen shot of program" width="100%">
</center>

<center>
<img src="{{ "IMGs/7program8.jpg" | relative_url }}" alt="Finished echo board light up" width="80%">
</center>

<br>

# **Finished Product:**


<center>
<iframe width="560" height="315" src="https://www.youtube.com/embed/mwfuskJfkDY" frameborder="0" allowfullscreen></iframe>
</center>

<br>
# **Digital Files:**

<a href="{{ "files/brandon_moded_satshakitpcb.brd" | relative_url }}">Brandon's Moded Satshakit.brd</a>

<a href="{{ "files/Hello_World_Program.ino" | relative_url }}">Hello World Code.ino</a>
