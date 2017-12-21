---
layout: post
title:  "Electronics Design"
date:   2017-03-01 09:25:21 -0500
categories: jekyll update
---

Below shows my process for designing, milling, and soldering a modified "Hello World" board which I added a button switch and LED to (with 499 ohm resistor).

**Schematic Software:** Cadsoft EAGLE

**CNC Mill:** Roland MDX-20

# **Design Rules Check (DRC)**

By practicing more with the Eagle software, I learned to utilize the design rules check menu off the main toolbar. After bringing up the menu, I was able to change the clearance of the wire traces to 0.16mm, in order to make sure that my 1/64in bit on the milling machine was able to cut out any & all designs I trace. See picture below:

<center>
<img src="{{ "IMGs/update9.jpg" | relative_url }}" alt="update 9" width="100%">
</center>

<br>

<center>
<img src="{{ "IMGs/5hello1.jpg" | relative_url }}" alt="hello pic 1" height="350">
<img src="{{ "IMGs/5hello2.jpg" | relative_url }}" alt="hello pic 2" height="350">
</center>

<br>

I began to setup the Fab Modules software on Ubuntu to operate our Roland MDX-20 CNC. I inported the black/white .PNG board design and traced the toolpaths.

<center>
<img src="{{ "IMGs/5hello3.jpg" | relative_url }}" alt="hello pic 3" height="350">
</center>

<br>
I then setup the machine itself. I used a 1/64" end mill bit and mounted the copper layered fiberglass onto the bed using double-sided tape. Once I zeroed X, Y, & Z, I made the cutting depth 0.1mm to start. I ended up having to start over a few times trying to find the right depth cut due to it not cutting through the copper entirely AND also cutting too deep that the copper traces completely disappear.

<center>
<img src="{{ "IMGs/5hello4.jpg" | relative_url }}" alt="hello pic 4" height="200">
<img src="{{ "IMGs/5hello5.jpg" | relative_url }}" alt="hello pic 5" height="200">
</center>

<br> 
My last step was to then solder it all together.

# **Finished Product:**

<center>
<img src="{{ "IMGs/5hello6.jpg" | relative_url }}" alt="hello pic 6">
</center>

<br>
# **Digital Files:**

<a href="{{ "files/hello_world.sch" | relative_url }}">Hello World.sch</a>

<a href="{{ "files/hello_world.brd" | relative_url }}">Hello World.brd</a>

<a href="{{ "files/hello_world_program.ino" | relative_url }}">Hello World Code.ino</a>
