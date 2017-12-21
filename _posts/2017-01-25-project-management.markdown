---
layout: post
title:  "Principles, Practices, & Project Management"
date:   2017-01-25 09:24:21 -0500
categories: jekyll update
---

# **Using Jekyll**

Jekyll is a simple, blog-aware, static site generator. The term "static" means there's no database i.e. content is "static" which is "not changing". It takes a template directory that has raw text files and then spits out a complete, ready-to-publish website, suitable for a web server. Jekyll is also the engine behind GitHub Pages, which means you can use it to host your project's website from GitHub’s servers for free. Yuo can visit their official site here: [Jekyllrb.com][Jekyll] 

[Jekyll]: https://jekyllrb.com/


# **Website Structure**

**Posts**

All of my posts are written in a combination of HTML (structure code) and Markdown as the"shorthand". I used a series of templates to make my website as "DRY" as possible. It's by using these variables, that I eliminate the use of hard-coding a post's HTML every single time. The markdown posts are turned into HTML documents by Jekyll upon regeneration. My understanding was to build tools once and then use those same tools over and over again.

<br>
**This is "what Jekyll is doing" when I write a new post:**

*Sees "post" markdown file -> formats that info with "post" template -> inserts that into default page template -> which also inserts header and footer as well*

<br>
I also learned a lot about CSS (cascading style sheets), which allows me to change appearance of the site (font weights/type, color of text and background, borders on images, and layout with responsiveness (does it adapt to screen shape/size)

For my CSS styling code, I've only had to tweek minor details, mostly with bordering styles. I ended up sticking with the minima Jekyll theme out of the box for the rest of the website. 

<center>
<img src="{{ "IMGs/0management1.jpg" | relative_url }}" alt="idk yet" width="98%">
</center>

<br>
# **Gitlab Archive System**

I started by creating a local git repository of my project (bprentice_website)

After Fab Academy created the shared repository for Sarah and I, they gave a specific structure to follow with the 418/439 folders (#418-Brandon, #439-Sarah).

I first PULL-ed down the repository Fab Academy made (mentioned above), and then set the REMOTE ORIGIN to the gitlab repository. Before completing this, I first had to set up a secure relationship between my local repository and the Fab Academy's gitlab repository with ssh-rsa keys.


<br>
# **Development on a Local Machine**

After doing some work on assignments/making changes on my website, I memorized the following steps to follow when sending it to the remote repository on Fab Academy's Gitlab account. These steps show all of the commands/ procedures performed on my Terminal in order to continuously PUSH all of my future assignments that will need uploaded:

Step 1: git status (shows you what has been added, deleted, or modified)

Step 2: git add . (adding all new or modified files to git staging "area"....staged to be commited).

Step 3: git commit -m "relevant message" (commit changes to git history with a relevant, meaningful comment)

Step 4: git push (to my personal gitlab fablab repository)

**Everything is committed locally at this point in bprentice_website**

*Moving on to the shared repository*

Step 5: git pull (This pulls the most recent commit made on the remote gitlab repository, in case Sarah has made recent changes to her own site folder)

*Step 6: Copy contents of _site folder (from bprentice_website) into fablabiu1/.../418 (shared fablab repository with Sarah*

Step 7: Repeat steps 1-4, only this time under the directory of the shared repository folder that Sarah and I use together (fablabiu1). Once pushed, there is a short wait for the server to rebuild site.

<center>
<img src="{{ "IMGs/0management2.jpg" | relative_url }}" alt="idk yet" width="98%">
</center>

<br>

# **Final Project Proposal**

<center><img class="bordered-image" src="{{ "IMGs/finalproject1.jpg" | relative_url }}" alt="circuit from china" height="300"></center>

<br>

**Fabricated Alarm Clock Circuit**

This idea started as a previous activity I did with students inside a Mobile Fab Lab that I manage/teach from (Link to my program in the footer below). For this activity, I purchased a simple through-hole circuit kit to be soldered together by students and then come up with some sort of casing to enclose it with. The chip was already programmed so for the 5 days that I would have the selected students, they would build a fun, engaging project that could be practical in their everyday lives.

I was very intrigued at first when researching what the Fab Academy program can teach me with fabrication. Starting off, I know I didn't have much of a background when it came to making my own circuit boards and programming them. This is why I thought of this being the perfect oppurtunity to expand my knowledge on the topics while also expanding one of my existing lessons, giving my students and I more possibities with this kind of hands-on activity.

<center>
<img src="{{ "IMGs/0management3.jpg" | relative_url }}" alt="idk yet" width="48%">
</center>