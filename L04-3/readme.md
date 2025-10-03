# Draw a box

<span style="color: #f00">주의: 이 코드는 elice에서만 작동됩니다.<span>

In this task, we will draw a axis-aligned box using a libpng++ library. The libpng++ library (https://www.nongnu.org/pngpp/) supports manipulation and generation of the PNG image format. We don’t need to know how this library works inside. Instead, you will use a 2D array to draw a box.

We will get the locations of a left-upper corner and a right-lower corner of the axis-aligned rectangle as input like below.
```
LU_corner_x LU_corner_y RL_corner_x RL_corner_y
```

If some part of box is out-of-region, crop the box to fit in the region.

After drawing the box in the array, function image_function is called to copy the array data to the image object. Note that value 0 is black and value 255 is white.

For example, if you get the following corner information
```
10 20 30 80
```

Your program should generate the following image.  
![img.png](img.png)
