---
layout: post
title:  "Machine Design"
date:   2017-04-05 09:25:21 -0500
categories: jekyll update
---

Our final machine was a dot plotter. Once each machine was built we created a plate that was attached to the top that would hold the pen/marker. using X,Y cordinates we were able to program the machine to move at first back and forth and then once the other machine was added perpendicular to the other machine we could then draw a square.

To load all of the firmware and protocols to the terminal, we followed the step-by-step instructions (<a href="{{ "files/modular_mtm_instructions.docx" | relative_url }}">Modular MTM Instructions</a>) to give us direct communications between us and the different node boards running each axis'.

# **Finished Product:**

<center>
<iframe width="98%" height="415" src="https://www.youtube.com/embed/4vIFwATmlCA" frameborder="0" allowfullscreen></iframe>
</center>

<br>

The way we moved it in the code was typing **"moves = [[1,1],[1,50],[50,50],[50,1],[1,1]]"** to move the sharpie to 4 equal corners while returning to it's home origin. To improve on this machine design we would have liked to construct the body of the machine with a more sturdy material such as plywood, etc. Furture plans would include mounting it to a canvas to create an art machine. All in all it was a great project to explore how machines make machines. I was thrilled when the machine actually worked and was able to draw the line. For us, this was a successful week! 

<center>
<img src="{{ "IMGs/10machine1.jpg" | relative_url }}" alt="machine pic 1" width="98%">
</center>

<center>
<img src="{{ "IMGs/10machine2.jpg" | relative_url }}" alt="machine pic 2" width="48%">
<img src="{{ "IMGs/10machine3.jpg" | relative_url }}" alt="machine pic 3" width="48%">
</center>

<center>
<img src="{{ "IMGs/update24.jpg" | relative_url }}" alt="machine pic 2" width="98%">
</center>

<br>

# **Digital Files:**

<a href="{{ "files/modular_frame.pdf" | relative_url }}">Modular Frame.pdf</a>

<a href="{{ "files/machineboxfile.pdf" | relative_url }}">Machine Box File.pdf</a>

<a href="{{ "files/xy_plotter.py" | relative_url }}">Machine Code for Double Axis.py</a>