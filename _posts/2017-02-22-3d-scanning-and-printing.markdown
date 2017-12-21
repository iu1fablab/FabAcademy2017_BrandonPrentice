---
layout: post
title:  "3D Scanning and Printing"
date:   2017-02-22 09:25:21 -0500
categories: jekyll update
---

# **3D Printing**

For my assignment to 3D print a small object (that can't be made subtractively), I decided to solve a minor problem in my lab. With the table router that we have which primarily rounds over edges from pieces milled on our ShopBot, we noticed we didn't have the right size hose to hook it up to our dust collection. And even though we could have simply bought a hose adapter, what better way to involve our lab than to fabricate the part ourselves! Pictures below show step by step on how it was created:

**Software:** 123D Design / CURA

**3D Printer:** Ultimaker 2

**Material:** PLA Plastic

It is important to note that this design only benifits from being 3D printed, as oppose to being made subtractively. The way that I designed it to be hollow inside, with certain overhangs makes it impossible to be subtracted from a larger stock no matter which way you orient the piece.


<center>
<img src="{{ "IMGs/4design1.jpg" | relative_url }}" alt="123d design pic 1" height="190">
<img src="{{ "IMGs/4design2.jpg" | relative_url }}" alt="123d design pic 2" height="190">
<img src="{{ "IMGs/4design3.jpg" | relative_url }}" alt="123d design pic 3" height="200">
<img src="{{ "IMGs/4design4.jpg" | relative_url }}" alt="123d design pic 4" height="200">
</center>

<br>
**Finished Product:**

<center>
<img src="{{ "IMGs/4design5.jpg" | relative_url }}" alt="123d design pic 5" height="200">
<img src="{{ "IMGs/4design6.jpg" | relative_url }}" alt="123d design pic 6" height="200">
</center>

<br>

# **Testing the 3D Printer**

For the second part of the assignment used 123D Design to make seven layers that have specific sizes for teasting material thicknesses:

    1 mm
    0.75 mm
    0.50 mm
    0.25 mm
    0.15 mm
    0.10 mm
    0.05 mm

I also labeled each layer using the text tool and then changing the depth accordingly for each layer. I then saved the STL file (File Link Below) for CURA and once opened in CURA I exported the file in Gcode and began printing on the Ultimaker 2+.

When the print was finished, the results were off from the original design. The depth was close on the first few layers but not accurate. The text also did not print at all. I believe that my design was too small to be printed, which is why it lost the accuracy and detail. I believe that if I were to scale up the design making the layers with a greater depth the final product would be more accurate to the original design.

<center>
<img src="{{ "IMGs/update5.jpg" | relative_url }}" alt="3D test piece" width="45%">
<img src="{{ "IMGs/update6.jpg" | relative_url }}" alt="3D test piece" width="45%">
</center>
<center>
<img src="{{ "IMGs/update7.jpg" | relative_url }}" alt="3D test piece" width="30%">
</center>

<br>
# **3D Scanning**

While instructing a class in my lab, I decided to take a volenteer student to be my guinea pig on this assignment. He was more than willing and excited to have his own face scanned to then someday be printed by our Ultimakers. Below are the steps I took to generate a 3D scan:

**Scanner/Software:** Cubify Sense Handheld 3D Scanner

<center>
<img src="{{ "IMGs/4scan4.jpg" | relative_url }}" alt="scan pic 4" height="550">
<img src="{{ "IMGs/4scan5.jpg" | relative_url }}" alt="scan pic 5" height="550">
</center>

<center>
<br>
<img src="{{ "IMGs/4scan1.jpg" | relative_url }}" alt="scan pic 1" height="190">
<img src="{{ "IMGs/4scan3.jpg" | relative_url }}" alt="scan pic 3" height="190">
</center>


<center>
<br>
<img src="{{ "IMGs/4scan2.jpg" | relative_url }}" alt="scan pic 2" height="350">
</center>

<br>

# **Reflections**

**3D Printing** - I find the technology provided in my lab regarding 3D printer (Ultimaker 2 & CURA) to be highly reliable in 3D production. The raft and support features on the printer make most designs possible with a limitation of roughly 8"x8"x8". 

**3D Scanning** - By using the 3D Sence handheld scanner, I found it to be quite difficult to generate a perfect scan without errors or a risk of getting thrown off sight. It was only after training myself to have a steady hand, along with an assistant to hold the cord made it okay to work with. I would also HIGHLY recommend choosing a wireless device if the company ever offered it.

<br>
# **Digital Files:**

<a href="{{ "files/hose_adapter.123dx" | relative_url }}">Hose Adapter.123dx</a>

<a href="{{ "files/hose_adapter.stl" | relative_url }}">Hose Adapter.stl</a>

<a href="{{ "files/3d_test.stl" | relative_url }}">3D Test Print.stl</a>