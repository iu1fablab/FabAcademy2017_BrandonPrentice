---
layout: post
title:  "Output Devices"
date:   2017-03-29 09:25:21 -0500
categories: jekyll update
---

For Sarah and I's output device, we used Eagle to design and trace a circuit, which connects to our Satshakit (Arduino Uno Clone) to flash a RGB LED (common anode) with the appropriate resistors/header pins:

<center>
<img src="{{ "IMGs/9output1.jpg" | relative_url }}" alt="output pic 1" width="49%">
<img src="{{ "IMGs/9output2.jpg" | relative_url }}" alt="output pic 2" width="49%">
</center>

<center>
<img src="{{ "IMGs/update8.jpg" | relative_url }}" alt="output pic 3" width="100%">
</center>

<center>
<img src="{{ "IMGs/9output3.jpg" | relative_url }}" alt="output pic 3" width="100%">
</center>

<br>

Below are the connections Sarah and I made, followed by the program we used to run the output device using Arduino IDE:

<center>
<img src="{{ "IMGs/9output4.jpg" | relative_url }}" alt="output pic 4" width="90%">
</center>

<br>

**Coding Process**

I first started by defineing the pins to the appropriate LED color, making sure all variables are labeled correctly. Next I played around with the different analog signals (0-255) to see how the different color outputs just before I created my FOR loops. See full code at the bottom of this page. 

<center>
<img src="{{ "IMGs/9output5.jpg" | relative_url }}" alt="output pic 5" width="90%">
</center>

<br>

# **Finished Product:**

<center>
<iframe width="560" height="315" src="https://www.youtube.com/embed/AqW9UgaVeCE?rel=0" frameborder="0" allowfullscreen></iframe>
</center>

<br>
# **Digital Files:**


<a href="{{ "files/RGB.sch" | relative_url }}">RGB.sch</a>

<a href="{{ "files/RGB.brd" | relative_url }}">RGB.brd</a>

<a href="{{ "files/RGB_LED_Program.ino" | relative_url }}">RGB LED Code.ino</a>

