# class MyFloatArray

In this task, we will enhance the functionality of class Array.
We will bring array functions we have implemented in the previous lecture: findElem(float), deleteElem(int), and insertElem(float, int).
Each function work as the followings.

| Function                                | Specification                                                                                                                                                                                                                           |
|-----------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| int **findElem**(float x)               | **Find operation** - find an index of which element is `x`. It returns an index of the element. If not found, the function returns -1. If there are multiple `x` elements, return the first one.                                        |
| void **deleteElem**(int index)          | **Delete operation** - delete an element at location `index`. `arr[index + 1 ... N − 1]` will be moved one element forward.                                                                                                             |
| void **insertElem**(int index, float x) | **Insert operation** - insert `x` at location `index`. `arr[index ... N − 1]` will be pushed back by one element.                                                                                                                       |
| void **print**()                        | **Print Operation** - print the array information. The print format should be the below. <br> ```LENGTH elements: arr[0] arr[1] arr[2] ... arr[LENGTH-1]``` <br> Note that arr[i] and LENGTH are values in the corresponding variables. |

Please implement functions above plus a constructor of MyFloatArray.

---
**input**
```
5 46 2 3 4 5
1 3
0
```

**output**
```
2
```

---
**input**
```
5 1 2 3 4 5
2 3
4
0
```

**output**
```
4 elements: 1 2 3 5
```




