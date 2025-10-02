# Array operation

The program begins by taking the size of the array and an integer sequence corresponding to the elements of the array as input.

```
5 // size of the array
1 2 3 4 5 // elements of the array
```

It then proceeds to accept commands from the user, one at a time, and performs the appropriate action associated with each command in real-time. A table is provided to clarify which action corresponds to each command. For non-used arguments, any number would be parsed.

| Command     | Action                                                                                                 |
|-------------|--------------------------------------------------------------------------------------------------------|
| 0 arg1 arg2 | Exit the command loop                                                                                  |
| 1 arg1 arg2 | Find the first element that is arg1 (arg2 not used) and print the index of it. If not found, print -1. |
| 2 arg1 arg2 | Insert arg2 at index arg1                                                                              |
| 3 arg1 arg2 | Delete the element at index arg1 (arg2 not used)                                                       |


For **delete and insert** operation, the program print the array information like **"n arr[0] arr[1] ... arr[n-1]"**

Suppose the program gets the following command and have array {1,2,3,4,5}.
```
1 1 0
2 2 0
3 1 0
0 0 0
```

Then, the program should print the same as follows:
```
0
6 1 2 0 3 4 5
5 1 0 3 4 5
```

<span style="color: #f00;">PLUS : Make sure there is no trailing space at the end of each output. If there is a space at the end, the grading will not be processed correctly.</span>