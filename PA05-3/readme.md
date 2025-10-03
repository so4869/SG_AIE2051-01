# MyTurtle

In this task, we will implement turtle-drawing by ourselves!  
a turtle, a drawing cursor, is initially located at the middle of an image while watching the up direction.  
The turtle follows three commands: go straight, turn left, and turn right.  

| Command     | Command Input | Function                    | Specification                          |
|-------------|---------------|-----------------------------|----------------------------------------|
| Go straight | 0 m           | bool goStraight(float m)    | go m-pixel forward                     |
| Turn left   | 1 angle       | bool turnLeft(float angle)  | turn left by angle (counter-clockwise) |
| Turn right  | 2 angle       | bool turnRight(float angle) | turn right by angle (clockwise)        |

Note that the unit of `angle` is degree not radian.  
In main function, there are `N` commands carried out by the turtle object in the order.

Please implement three functions correctly to draw a awesome picture :)

**If you click the 'submit' button, you will receive 100 points, but you must show a picture to the TA by yourself. You can draw triangles. The shape does not need to be in the center of the image, but there should be no unnecessary lines inside the shape. Hint :** [√3](https://namu.wiki/w/%E2%88%9A3) = 1.732


```
6
2 30
0 30
2 120
0 30
1 240 
0 30
```




