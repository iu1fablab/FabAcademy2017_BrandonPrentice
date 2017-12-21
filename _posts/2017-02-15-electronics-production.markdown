---
layout: post
title:  "Electronics Production"
date:   2017-02-15 09:25:21 -0500
categories: jekyll update
---

The assignment I chose was to mill out and solder the ISP .44 from the PNG layout files provided from Fab Academy:

<center>
<img src="{{ "IMGs/3circuit1.jpg" | relative_url }}" alt="curcuit pic 1" height="350">
<img src="{{ "IMGs/3circuit2.jpg" | relative_url }}" alt="circuit pic 2" height="350">
</center>

I had the right amount of tolerance for our Roland MDX-20 milling machine but still had to make a second one due to too many soldering mistakes. The picture below shows all the machine settings I used to cut out my final product:

<center>
<img src="{{ "IMGs/update1.jpg" | relative_url }}" alt="update 1" width="98%">
</center>

<br>

<center>
<img src="{{ "IMGs/3circuit3.jpg" | relative_url }}" alt="curcuit pic 3" height="400">
<img src="{{ "IMGs/3circuit4.jpg" | relative_url }}" alt="circuit pic 4" height="400">
</center>

<br>
Once I got my practice in though, the second attempt for me worked perfectly.

<center>
<img src="{{ "IMGs/3circuit5.jpg" | relative_url }}" alt="curcuit pic 5" height="400">
<img src="{{ "IMGs/3circuit6.jpg" | relative_url }}" alt="circuit pic 6" height="400">
</center>

# **Finished Product:**

<center>
<img src="{{ "IMGs/3circuit7.jpg" | relative_url }}" alt="circuit pic 7">
</center>

<br>

# **Programming the FabISP**

**The first step for me was to get and install avrdude / GCC software:**

I opened my terminal and typed:

*sudo apt-get install flex byacc bison gcc libusb-dev avrdude*   

Then typed:

*sudo apt-get install gcc-avr*

Then typed:

*sudo apt-get install avr-libc*

Then typed

*sudo apt-get install libc6-dev*

**Next step was to download and unzip the firmware:**

I first moved to my desktop

*cd ~/Desktop*         

I then downloaded and unzipped the firmware from the Fab Academy Electronics Production page: [http://academy.cba.mit.edu/classes/embedded_programming/firmware.zip] [firmware]

[firmware]:http://academy.cba.mit.edu/classes/embedded_programming/firmware.zip 

**I then navigated to the directory where I saved the FabISP firmware on my desktop.**

I Typed:

*cd Desktop/firmware*

**Next I was able to compile the firmware.**

I typed:

*make clean*    

Then typed:

*make hex*

**Next, I set the fuses so my board will use the external clock (crystal)**

I Typed:

*make fuse*

**Next I programmed my board to be an ISP**

I Typed:

*make program*

# **My FabISP was then ready to program!**
