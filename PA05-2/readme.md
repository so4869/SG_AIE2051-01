# Implement object operators

Let us implement class Point that represents a 2D location on an image.  
A Point object contains two axes coordinates (`x`, `y`) like a 2D vector. Those axes are accesible from the outside of objects.  
Then, we will implement three operators for a Point object: Point-Point addition/subtraction and Point-Scalar multiplication.


| Command        | Function                     | Specification                              |
|----------------|------------------------------|--------------------------------------------|
| Point + Point  | Point operator+(Point B)     | add two point vectors                      |
| Point - Point  | Point operator-(Point B)     | subtract two point vectors                 |
| Point * Scalar | Point operator*(float scale) | scale the vector by a scale factor `scale` |

The result should be like this:  
(ignore the color)
```
x:1 y:2
x:2 y:3
x:3 y:5
x:9.3 y:15.5
```




