# Hour-line drawing

![img.png](img.png)

A hour line is a line that points the current hour.

Our goal is to **draw a hour line** starting from the center of an 129 × 129 image.

Please draw a correct hour line that points hour `n ∈ {0, ..., 24}`

Note that the image center is `(64,64)`.
In order to draw a line, we need to compute intermediate points using linear interpolation.

When we have two 2D points `A = (Ax ,Ay)` and `B = (Bx, By)`, point `C` on line `AB`
can be parameterized by scalar variable `t` as
`(Cx,Cy) = (1 − t)(Ax, Ay) + t(Bx, By) = ((1 − t)Ax + tBx, (1 − t)Ay + tBy)`.


Set the length of the hour hand based on the maximum diameter of the circle that can fit in the image, which is 129, to two-thirds of the radius 64.

**Please complete a code drawing a line in 2D array.** Note that we only draw the hour line not others (a minute pointer and a second pointer).


In this problem, we use the cmath header for utilizing trigonometric functions and others.

Please refer to the reference page for the cmath header ( https://cplusplus.com/reference/cmath/ ).


**Submission**  
No matter what you print, once you press the 'Submit' button, the system will pass you. However, in reality, the **TA will review your output image and evaluate it.**

<span style="color: #f00; font-weight: bold;">
Note
</span>
<br>
<span style="color: #f00">
Your code should print 0 o'clock or 13 o'clock for the test cases as well.
</span>
<span style="color: #f00">
Complete only the //TODO sections <span style="font-weight: bold">in main.cpp</span>. Do not modify or write code in any other parts.
</span>

