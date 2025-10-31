# Dynamic Allocation for a Single Variable

In this task, you will implement dynamic allocation using syntax new and delete.

Syntax new reserves a memory space and returns a location of the assigned space.

To check how big of a room we need, datatype should be specified by attaching it after syntax new:
```c++
int *tmp;
tmp = new int;
```

After using it, we need to free the space for the next allocation.
```c++
delete tmp;
```


### Input example
```
20
```

### Output example
```
pointer x is located at a79875c0.
pointer tmp points to address 752030.
A variable pointed by pointer tmp has value 20.
```

