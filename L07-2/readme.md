# Virtual function

There are three classes: `Shape`, `Triangle` and `Rectangle`.  
Two common attributes width and height are defined in `Shape` class and class `Triangle` and `Rectangle` inherits class Shape.
There are two main tasks:
 - Implement class inheritance from `Shape` to `Triangle` and `Rectangle`.
 - Implement function computeArea() using a virtual function (refer to implementation of function printArea()).

Note that variable `width` represents length of the longest line segment and `height` means the distance between the line and the farthest point.
In the following figure, a rectangle is on the left and a triangle is on the right.
Area of an triangle is `1/2 ⋅ width ⋅ height` and area of a rectangle is `width ⋅ height`.

![img.png](img.png)