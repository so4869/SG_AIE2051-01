# Get and print array

In C++, an array A is defined and declared within the main function.

First, read the array through the screen input. The first integer value specifies the number of elements. The following n integer numbers are elements of the array.

Then, implement a function named get_n_print_arr. The function takes two arguments: an array and the length of the array we would like to print m. Please write code to print the first n elements of the array.

Finally, we call function 'get_n_print_arr' three times. Each call prints the different length of the array.

The first call prints all elements,

the second call prints only the first element,

and the las call prints *floor(n/2)* elements (floor means "내림").

Please complete the source code.


**Input**
```
5
1 2 3 4 5 
```

**Output**
```
array[0] = 1
array[1] = 2
array[2] = 3
array[3] = 4
array[4] = 5
array[0] = 1
array[0] = 1
array[1] = 2
```