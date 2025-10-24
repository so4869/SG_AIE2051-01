# shape conversion_2

There are three classes : Point, Shape, RightTriangle.
1. **Class Point**
2. **Class Shape (parent class)**  
   This is common interface for various 2D shapes (rectangle, triangle...etc)
   Shape class have pure virtual function that affect child class to have same name of method.
3. **Class RightTriangle (child class)**  
   RightTriangle class is defined by inheriting Shape class.  
   A rectangle can be represented with one point and two offset.

- Left-upper point & right-lower point  
![readme-asset/img.png](readme-asset/img.png)

**Implement the following functions** in right-triangle.cpp  
Detailed specifications are given in the comment of rectangle.hpp header file.


| Function                                 | Descriptions                                                                                                                                                                                                             |
|------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| **bool Shift(int delta_x, int delta_y)** | Move the shape by delta_x on the x-axis and by delta_y on the y-axis. After movement, if any of the four vertices of the shape have a negative number, the movement of the shape must be rejected and false is returned. |
| **bool DoubleSize()**                    | After fixing the location of the point with right-angle, double the xoffset and yoffset.                                                                                                                                 |
| **bool Rotate()**                        | Rotate 90 degrees counterclockwise based on the location of the point with right-angle.                                                                                                                                  |


