# Read and print a 2-D integer array

In this task, you will implement a program that reads two-dimensional array data from the screen and prints the array.

The two-dimensional array data is given in the following manner:  
First, the number of rows and columns are given.  
Then, the two-dimensional integer data row-by-row.  

For example, the input would be the following:

```
4 5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
```

After reading the data, your program prints the array data.  
The array data should be printed out row-by-row and there should be spaces between elements.  

The output should be like the below:

```
row 1: 0:1 1:2 2:3 3:4 4:5
row 2: 0:6 1:7 2:8 3:9 4:10
row 3: 0:11 1:12 2:13 3:14 4:15
row 4: 0:16 1:17 2:18 3:19 4:20
```

If you would like to use C standard IO (`scanf` and `printf`), please add:

```c
#include <cstdio>
```

⚠️ **WARNING**  
DO NOT MIX C++ STANDARD IO FUNCTIONS and C STANDARD IO FUNCTIONS!!  
The program may produce unwanted results!
