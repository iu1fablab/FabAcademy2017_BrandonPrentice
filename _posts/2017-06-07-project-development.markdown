---
layout: post
title:  "Project Development"
date:   2017-06-07 09:25:21 -0500
categories: jekyll update
---

# **Final Project (Progress So Far):**

**January - March, 2017**
{: style="color:red; font-size: 200%; text-align: center;"}

**3D Modeling** - To incorporate the 3D modeling aspect for my project, I thought of using SketchUp as my primary learning tool. I've taught in Elem/Middle school areas when it comes to this kind of 3D printing where it can be simple, fun, and very accessable to the students. Other software that I have used for this kind of application include Tinkercad & 123D Design. I always found those two programs very similar on how they manipulate shapes and wanted to go a slightly different way. SketchUp is free like the others so I found this appealing to adapt in these same sort of classes I teach, where even younger students can load this program on their own personal computer.

I started with a simple cube shape where I subtracted away all of the hollow areas that you see in the pictures below. Once I made my guesses on where to put the openings for the buttons & 7-segment display, I "pushed" the 2D shapes inward to subtrate the material away. My last step was to add the 3D text on top, extruding it in such a way that I can switch colors of filiment during prints to bring out more contrast.

<center>
<img src="{{ "IMGs/update10.jpg" | relative_url }}" alt="update10" width="40%">
<img src="{{ "IMGs/finalproject3.jpg" | relative_url }}" alt="sketchup screenshot1" width="50%">
</center>

<br>

**Designing 2D Vectors** - I started by utilizing [www.makercase.com][makercase] which is a simple sketch generator to design a basic box shape with a percise finger joint layout. I chose this program because of it all being parametric, and good for projects with joinery. Once I plugged in the few parameter questions, it generated a .SVG file which can then be pulled into other vectoring software. I decided to experiment with Adobe Illustrator by importing, designing, and manipulating the file that will somday be either lasercut or CNC milled.


<center>
<img src="{{ "IMGs/update11.jpg" | relative_url }}" alt="update11" width="32%">
<img src="{{ "IMGs/finalproject2.jpg" | relative_url }}" alt="ai screenshot1" width="65%">
</center>
<br>

I then moved into Adobe Illustrator to make this kind of design, which I knew had great node editing features that is also better than Inkscape. I've personally only used CorelDRAW in my lab during my time here as manager so I wanted to see the difference in this software. Obviously, the 2 liscenses are more alike than different. The only major differences is the tool layouts and labels for those tool features.

[makercase]: http://makercase.com


**March - May, 2017**
{: style="color:red; font-size: 200%; text-align: center;"}

# **1st Schematic Attempt**

I starting this process by studying the schematic/parts list for the orginal circuit I bought from China. Once I understood all of the parts, I went to our class archives to pull the Barduino board design to start from.

<center>
<img src="{{ "IMGs/finalproject4.jpg" | relative_url }}" alt="china schematic" width="98%">
</center>

<br>

From reviewing our Fab Lab inventory again with our SMDs in particular, I drafted a Google sheet organizing parts that our lab has already along with parts I need attached to specific vendors I found selling them cheap.

<a href="https://docs.google.com/spreadsheets/d/15Tqll60QXBNMJWXsO1DBHgZAjhQ_d-58CE0piwSD-2s/edit#gid=687980215">Both Original and Surface Mounted Materials Chart</a>

Using Eagle, I drafted the first schematic from the barduino by adding the buzzer, USB power supply, 7 segment display, and the buttons. Once completed, I traced everything appropriately, having the 7 segment display hovering over the entire board from extra legnth prongs that will still be soldered onto with surface mounts.

<center>
<img src="{{ "IMGs/finalproject6.jpg" | relative_url }}" alt="clock schematic 1" width="98%">
</center>

<center>
<img src="{{ "IMGs/finalproject7.jpg" | relative_url }}" alt="clock tracing 1" width="98%">
</center>

<center>
<img src="{{ "IMGs/finalproject8.jpg" | relative_url }}" alt="milling clock circuit" width="48%">
<img src="{{ "IMGs/finalproject9.jpg" | relative_url }}" alt="soldering clock circuit" width="48%">
</center>

<br>

<center>
<img src="{{ "IMGs/finalproject10.jpg" | relative_url }}" alt="soldered board" width="48%">
<img src="{{ "IMGs/finalproject11.jpg" | relative_url }}" alt="plugged in clock" width="48%">
</center>

<br>

**Reflecting on 1st Schematic Attempt**

Improvements to consider:
1. Eliminating the x4 (499ohm) resistors going into the display (doing this does not burn out LEDs)
2. Slightly moving over the 6 pin programming header so display doesn't have to be unplugged to upload program.
3. Create a larger footprint for the (16mHz) crystal for easier soldering.

<br> 

<center>
<img src="{{ "IMGs/17invention1.jpg" | relative_url }}" alt="invention pic 1" width="100%">
</center>

<br>

<center>
<video src="{{ "video/finalvideo.mp4" | relative_url }}" width="100%" controls></video>
</center>

<br>

**May, 2017 - Present**
{: style="color:red; font-size: 200%; text-align: center;"}

# **Planning Ahead (Future):**

**Programming** - Within this next month, my plan is to develope and understand all that is needed for programming this board effectively. I have already studied the parts list of the original through-hole circuit here: <a href="https://docs.google.com/spreadsheets/d/15Tqll60QXBNMJWXsO1DBHgZAjhQ_d-58CE0piwSD-2s/edit#gid=687980215">Both Original and Surface Mounted Materials Chart</a>

I have also located the datasheet for the 7-segment display listed to understand the each pin's function found here: [7 segment display datasheet][datasheet]

[datasheet]: http://www.taydaelectronics.com/datasheets/A-1730.pdf

My next task will be to add the software control to mimic the original clock’s functionality. The left button cycles through setting the hour and minute, turning the hourly chime on or off, setting the hour and minute of the alarm, and turning that alarm on or off. When the clock is in normal operation, pressing the right button switches between HH:MM display and MM:SS for keeping accurate track of time.

Once the programming of the Chip has been completed, my last task is to incorporate the 2D/3D case designs into the new PCB while also making a vinyl cut label for the exterior.