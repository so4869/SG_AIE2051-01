# Dynamic Allocation for an Array

In this task, you will implement dynamic allocation for an 1D array.

To assign a space for a `n`-element integer array, we specify the number of element inside brackets after datatype:
```c++
int *tmp;
int n = 5;
tmp = new int [n]; // a space for an five-element integer array is assigned to pointer tmp
```

To access the i-th element, there are two following ways:
```c++
tmp [i] = 5;
*( tmp + i ) = 3;
```

To print out elements, please print each element with space. For example, if the input is
```
5
1 2 3 4 5
```

then output should be
```
1 2 3 4 5
```

After using it, we need to free the space for the next allocation. Note that there is a bracket after syntax delete.
```c++
delete[] tmp;
```
